#pragma once
#include <unordered_map>


class MDKHandler;
class MDKBase;
struct TargetData;

inline void readMemory(uint64_t src, uint64_t dst, size_t size)
{
	puts("read call");
	memcpy((void*)dst, (void*)src, size);
}
inline void readMemory(uint64_t src, void* dst, size_t size)
{
	puts("read call");
	memcpy(dst, (void*)src, size);
}

inline void writeMemory(uint64_t src, uint64_t dst, size_t size)
{
	puts("write call");
	memcpy((void*)dst, (void*)src, size);
}

struct MemberInfo
{
	int offset = 0;
	int size = 0;
	bool isBit = false;
	int bitField = 0;


};

class MDKStruct
{
	friend MDKHandler;
	friend MDKBase;

	uint64_t baseClass = 0;
	int offset = 0;
	size_t maxSize = 0;

public:
	template<typename T>
	T get(MemberInfo b) const
	{
		T res;
		memset(&res, 0, sizeof(T));
		if (sizeof(T) > b.size || maxSize < b.offset + b.size)
			return res;
		memcpy(&res, reinterpret_cast<void*>(baseClass + offset + b.offset), b.size);
		return res;
	}
};

class MDKBase
{
	friend MDKHandler;

	uint64_t basePointer = 0;

	struct MemoryBlock
	{
		void* blockPointer = nullptr;
		size_t blockSize = 0;
	};

	MemoryBlock block{};

	uint64_t lastCacheTS = -1;

	bool valid = false;

	void updateTS();

public:
	MDKBase();

	template<typename T>
	T get(MemberInfo b) const
	{
		T res;
		memset(&res, 0, sizeof(T));

		if (!valid /*|| sizeof(T) != b.size*/ || block.blockSize < b.offset + b.size)
			return res;

		memcpy(&res, reinterpret_cast<void*>(reinterpret_cast<uint64_t>(block.blockPointer) + b.offset), sizeof(T));

		if(b.isBit)
		{
			//we have to do some converting because compiler doesnt know which types are bits and which arent
			//in theory only chars and bools can be this but whatever
			//also dont use any form of cast here, they all somehow fail so ugly c style casting
			res = T(((char)(res) >> b.bitField & 1) == 1);
		}
			
			
		return res;
	}

	//we dont even do a single memcpy here, i owuld call this creating a spoof struct
	template<typename T>
	T getStruct(MemberInfo b) const
	{
		T res;
		memset(&res, 0, sizeof(T));
		if (!valid || T::__MDKClassSize != b.size || block.blockSize < b.offset + b.size)
			return res;

		res.baseClass = reinterpret_cast<uint64_t>(block.blockPointer);
		res.offset = b.offset;
		//no, only the struct size is allowed
		res.maxSize = b.size;
		return res;
	}

};

#define Member(x,...)  template<typename T>\
	T

//#define OFFSET(T, ...) const { return T; }

#define OFFSET(T, ...) (MemberInfo* b = nullptr) const { \
	if(b != nullptr) {*b = __VA_ARGS__; return {};} \
	return T(__VA_ARGS__); }

//#define OFFSET(T, ...) const { return T(__VA_ARGS__); }


#define SMember(x,...)  template<typename T>\
	T

#define CMember(x,...)  template<typename T>\
	T

#define DMember(x,...)  x

#define ___ 



//handler for all the classes
class MDKHandler
{

	static inline std::unordered_map<uint64_t, MDKBase> MDKCache{};

	static inline uint64_t currentFrameTS = 0;

	template<typename T>
	static void checkSizeandTS(MDKBase& base)
	{
		//wont really happen unless we read a invalid ptr
		if (!base.valid)
			return;
		if (base.block.blockSize < T::__MDKClassSize)
		{
			base.block.blockPointer = realloc(base.block.blockPointer, T::__MDKClassSize);
			//we in the same frame or more?
			if(base.lastCacheTS > currentFrameTS)
			{
				//keep old data and only read additional bytes
				readMemory(base.basePointer + base.block.blockSize, reinterpret_cast<uint64_t>(base.block.blockPointer) + base.block.blockSize, T::__MDKClassSize - base.block.blockSize);
				base.block.blockSize = T::__MDKClassSize;
				base.updateTS();
				return;
			}
		}
		if(base.lastCacheTS < currentFrameTS)
		{
			readMemory(base.basePointer, base.block.blockPointer, T::__MDKClassSize);
			base.updateTS();
		}
		//we cant really do any memory checks, sure we could make for uworld classes some valid vtable bytes but for other stuff that isnt inherited not really
	}

	template<typename T>
	static T castTo(MDKBase& base)
	{
		T cast;
		//copy over default values
		memcpy(&cast, &base, sizeof(MDKBase));
		return cast;
	}

public:
	MDKHandler();

	static void newFrame();

	template< typename T>
	static T get(void* gamePointer)
	{
		const uint64_t up = reinterpret_cast<uint64_t>(gamePointer);

		if (up < 0x40000)
			return T();
		if (MDKCache.contains(up))
		{
			checkSizeandTS<T>(MDKCache[up]);
			//freely case, bytes are fine
			return castTo<T>(MDKCache[up]);
		}

		//create a new base object
		MDKBase b;
		b.basePointer = up;
		b.block.blockPointer = calloc(1, T::__MDKClassSize);
		printf("allocated 0x%X bytes at 0x%p\n", T::__MDKClassSize, b.block.blockPointer);
		if (!b.block.blockPointer)
			return T();
		b.valid = true;
		checkSizeandTS<T>(b);
		MDKCache.insert(std::pair(up, b));
		return castTo<T>(b);
	}

	template <typename classInstance, typename x>
	static void write(const classInstance& instance, x (classInstance::* memberFunction)(MemberInfo*) const, x value)
	{
		MemberInfo b{};
		(instance.*memberFunction)(&b);

		uint64_t addr = (uint64_t)&value;
		char c;
		if(b.isBit)
		{
			const bool bval = (bool)value;
			
			//for a single bit we need the entire bits first so get them out of the cache
			memcpy(&c, reinterpret_cast<void*>(reinterpret_cast<uint64_t>(instance.block.blockPointer) + b.offset), 1);
			if (bval)
				c |= (1 << b.bitField);  // Set nth bit to 1
			else
				c &= ~(1 << b.bitField);  // Set nth bit to 0

			//change to our cooked bitfield
			addr = reinterpret_cast<uint64_t>(&c);
		}
		writeMemory(addr, instance.basePointer + b.offset, sizeof(x));
		//make a shadow copy so the current frame sees the change too
		memcpy(reinterpret_cast<void*>(reinterpret_cast<uint64_t>(instance.block.blockPointer) + b.offset), reinterpret_cast<void*>(addr), sizeof(x));
	}

};
