// ReSharper disable CppCStyleCast
#pragma once
#include <unordered_map>
#include "Memory.h"


class MDKHandler;
class MDKBase;
struct TargetData;


struct MemberInfo
{
	int offset = 0;
	int size = 0;
	bool isBit = false;
	int bitField = 0;
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

	//this is always 0 if its not a struct were currently working on
	uint64_t baseOffset = 0;

	uint64_t lastCacheTS = -1;

	bool valid = false;


public:
	MDKBase();

	//only gets called by pointers or default types that are not structs
	template<typename T>
	T get(MemberInfo b) const
	{
		T res;
		memset(&res, 0, sizeof(T));

		if (!valid /*|| sizeof(T) != b.size*/ || block.blockSize - baseOffset < b.offset + b.size)
			return res;

		memcpy(&res, reinterpret_cast<void*>(reinterpret_cast<uint64_t>(block.blockPointer) + baseOffset + b.offset), sizeof(T));

		if(b.isBit)
		{
			//we have to do some converting because compiler doesnt know which types are bits and which arent
			//in theory only chars and bools can be this but whatever
			//compiler crying so hard we have to use memcpy but no worries in assembly it will be erased and just a cast :troll:

			char cres;
			memcpy(&cres, &res, 1);

			cres = ((cres >> b.bitField & 1) == 1);
			memcpy(&res, &cres, 1);
		}
			
			
		return res;
	}

	//we dont even do a single memcpy here, i owuld call this creating a spoof struct
	template<typename T>
	T getStruct(MemberInfo b) const
	{
		T res;
		memset(&res, 0, sizeof(T::__MDKClassSize));
		if (!valid || T::__MDKClassSize != b.size || block.blockSize < b.offset + b.size)
			return res;

		//keep a baseOffset but rest still same logic
		res.baseOffset = b.offset;
		return res;
	}


	operator bool() const { return block.blockPointer != nullptr; }
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




//handler for all the classes
class MDKHandler
{
	//the cache gets for the given game pointer the MDKBase
	static inline std::unordered_map<uint64_t, MDKBase> MDKCache{};

	//the timestamp in nanoseconds when the cache last changed
	static inline uint64_t currentFrameTS = 0;

	//blocks must have at least this timestamp or larger or they get flushed
	static inline uint64_t frameTSFlushThreshold = 0;

	//the maximum amount of frames blocks can skip until they get flushed
	static inline int maxFrameSkipsTilFlush = 5;
	//current counter of the frame. -1 = init
	static inline int frameSkipCounter = -1;

	template<typename T>
	static bool checkSizeandTS(MDKBase& base)
	{
		//wont really happen unless we read a invalid ptr
		if (!base.valid || !base.block.blockPointer)
			return false;
		if (base.block.blockSize < T::__MDKClassSize)
		{
			base.block.blockPointer = realloc(base.block.blockPointer, T::__MDKClassSize);
			if (!base.block.blockPointer)
				return false;
			//we in the same frame or more?
			if(base.lastCacheTS > currentFrameTS)
			{
				//keep old data and only read additional bytes
				Memory::read(base.basePointer + base.block.blockSize, reinterpret_cast<uint64_t>(base.block.blockPointer) + base.block.blockSize, T::__MDKClassSize - base.block.blockSize);
				base.block.blockSize = T::__MDKClassSize;
				base.lastCacheTS = currentFrameTS;
				return true;
			}
		}
		if(base.lastCacheTS < currentFrameTS)
		{
			Memory::read(base.basePointer, reinterpret_cast<uint64_t>(base.block.blockPointer), T::__MDKClassSize);
			base.lastCacheTS = currentFrameTS;
		}
		return true;
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

	/// \brief initializes a new memory block for the given class/struct at the pointer and manages all the memory for you
	/// \tparam T type
	/// \param gamePointer pointer to the class/struct
	/// \return the class with data upon success
	template< typename T>
	static T get(void* gamePointer)
	{
		const uint64_t up = reinterpret_cast<uint64_t>(gamePointer);

		if (up < 0x40000)
			return T();
		if (MDKCache.contains(up))
		{
			if(!checkSizeandTS<T>(MDKCache[up]))
				return T();
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
		if(!checkSizeandTS<T>(b))
			return T();
		MDKCache.insert(std::pair(up, b));
		return castTo<T>(b);
	}

	/// \brief initializes a new memory block for the given class/struct at the pointer and manages all the memory for you
	/// \tparam T type
	/// \param gamePointer pointer to the class/struct
	/// \return the class with data upon success
	template< typename T>
	static T get(DWORD64 gamePointer)
	{
		return get<T>((void*)gamePointer);
	}
	template <typename classInstance = MDKBase, typename x>
	static void write(const classInstance& instance, x (classInstance::* memberFunction)(MemberInfo*) const, x value)
	{
		if (!instance.basePointer)
			return;
		MemberInfo b{};
		(instance.*memberFunction)(&b);

		
		uint64_t addr = (uint64_t)&value;
		char c;
		if(b.isBit)
		{
			const bool bval = (bool)value;
			
			//for a single bit we need the entire bits first so get them out of the cache
			memcpy(&c, reinterpret_cast<void*>(reinterpret_cast<uint64_t>(instance.block.blockPointer) + instance.baseOffset + b.offset), 1);
			if (bval)
				c |= (1 << b.bitField);  // Set nth bit to 1
			else
				c &= ~(1 << b.bitField);  // Set nth bit to 0

			//change to our cooked bitfield
			addr = reinterpret_cast<uint64_t>(&c);
		}
		Memory::write(addr, reinterpret_cast<uint64_t>(instance.block.blockPointer) + instance.baseOffset + b.offset, sizeof(x));
		//make a shadow copy so the current frame sees the change too
		memcpy(reinterpret_cast<void*>(reinterpret_cast<uint64_t>(instance.block.blockPointer) + instance.baseOffset + b.offset), reinterpret_cast<void*>(addr), sizeof(x));
	}

	template <typename classInstance = MDKBase, typename x>
	static void writeSilent(const classInstance& instance, x(classInstance::* memberFunction)(MemberInfo*) const, x value)
	{
		if (!instance.basePointer || !instance.block.blockPointer)
			return;
		MemberInfo b{};
		(instance.*memberFunction)(&b);


		uint64_t addr = (uint64_t)&value;
		char c;
		if (b.isBit)
		{
			const bool bval = (bool)value;

			//for a single bit we need the entire bits first so get them out of the cache
			memcpy(&c, reinterpret_cast<void*>(reinterpret_cast<uint64_t>(instance.block.blockPointer) + instance.baseOffset + b.offset), 1);
			if (bval)
				c |= (1 << b.bitField);  // Set nth bit to 1
			else
				c &= ~(1 << b.bitField);  // Set nth bit to 0

			//change to our cooked bitfield
			addr = reinterpret_cast<uint64_t>(&c);
		}
		//silent write
		memcpy(reinterpret_cast<void*>(reinterpret_cast<uint64_t>(instance.block.blockPointer) + instance.baseOffset + b.offset), reinterpret_cast<void*>(addr), sizeof(x));
	}

	template <typename classInstance = MDKBase>
	static void writeBulk(const classInstance& base)
	{
		if (!base.basePointer)
			return;

		//write the entire class
		Memory::write(base.basePointer + base.baseOffset, (uint64_t)base.block.blockPointer + base.baseOffset, classInstance::__MDKClassSize);
	}
};
