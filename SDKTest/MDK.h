// ReSharper disable CppCStyleCast
#pragma once
#include <unordered_map>
#include "Memory.h"

// whether the entire caching system should be used or not.
// the cache feature is very powerful, however if you are sure you are good enough
// with pointers, no double reads and heap management, disable this.
#define USECACHE true

class MDKHandler;
class MDKBase;
struct TargetData;


// the base struct for each member in the SDK
struct __MDKMemberInfo
{
	int offset = 0; // the offset of the member in the class
	int size = 0; // the size of the member
	bool isBit = false; // whether its a bitfield member or not
	int bitField = 0; // the bitfield offset if the member is a bitfield member
};


// the base class of all classes. This does all the magic
class MDKBase
{
	// the global handler that contains all the routine functions
	friend MDKHandler;

	// the size of members the class has (game members, such as UWorld* world, etc.). Here it is 0, we dont have any game members 
	static inline constexpr uint64_t __MDKClassSize = 0;

	// the base pointer where we got the data from
	uint64_t basePointer = 0;

	// this is always 0 if its not a struct were currently working on
	uint64_t baseOffset = 0;

	// Memory block struct for memory management
	struct MemoryBlock
	{
		void* blockPointer = nullptr; // pointer to the memory
		size_t upperBound = 0; // how much of the memory block is valid (upper bound, ... - n)
		size_t lowerBound = 0; // how much of the memory block is valid (lower bound, n - ...)
	};

	MemoryBlock block{};

	

	// las time the block got updated
	uint64_t lastCacheTS = -1;

	//whether the memory is valid or not
	bool valid = false;

	//whether this block doesnt use caching and is just temporary there and gets freed after it isnt anymore in use
	bool onlyTemporary = false;

	//only for temporary objects and especially for structs that make copies of the real class
	bool realOwner = true;

	MDKBase shadowCopy() const;
public:

	template<typename T = MDKBase>
	static uint64_t getMDKClassSize()
	{
		return T::__MDKClassSize;
	}

	//initializer 
	MDKBase();



	//only gets called by pointers or default types that are not structs
	template<typename T>
	T get(__MDKMemberInfo b) const
	{
		T res;
		memset(&res, 0, sizeof(T));

		if (!valid /*|| sizeof(T) != b.size*/ || block.upperBound - baseOffset < b.offset + b.size)
			return res;

		memcpy(&res, reinterpret_cast<void*>(reinterpret_cast<uint64_t>(block.blockPointer) + baseOffset + b.offset), sizeof(T));

		if (b.isBit)
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

	//we dont even do a single memcpy here, i would call this creating a spoof struct
	template<typename T>
	T getStruct(__MDKMemberInfo b) const
	{
		T res = (T)shadowCopy();
		if (!valid || T::__MDKClassSize != b.size || block.upperBound < b.offset + b.size)
			return res;

		//keep a baseOffset but rest still same logic
		res.baseOffset = b.offset + res.baseOffset;
		return res;
	}


	operator bool() const { return block.blockPointer != nullptr; }

	//deconstructor
	~MDKBase();
};


#define Member(x,...)  template<typename T>\
	T

//#define OFFSET(T, ...) const { return T; }

#define OFFSET(T, ...) (__MDKMemberInfo* b = nullptr) const { \
	if(b != nullptr) {*b = __VA_ARGS__; return {};} \
	return T(__VA_ARGS__); }

//#define OFFSET(T, ...) const { return T(__VA_ARGS__); }

// different member types, you can ignore this, this is more for hints

// struct member, refers that the type is a full struct within the class
#define SMember(x,...)  template<typename T>\
	T

// class member, refers that the type is a pointer to a class
#define CMember(x,...)  template<typename T>\
	T

// enum member, refers that the type is a enum
#define EMember(x,...)  template<typename T>\
	T

// default member, refers that the type is a default datatype
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

	/**
	 * \brief gets the base class and performs checks if its valid and rereads memory if needed.
	 * A valid blockpointer is or should be always valid, if we would alloc it here there could be memory leaks.
	 * Adjusts the Timstamp automatically if data is too old
	 * \tparam T upper class, included
	 * \tparam X lower class, excluded. Leave empty if we need the entire class
	 * \param base the base we perform the check on
	 * \return if the size or adjustment was successful
	 */
	template<typename T, typename X = MDKBase>
	static bool checkSizeandTS(MDKBase& base)
	{
		//wont really happen unless we read a invalid ptr
		if (!base.valid || !base.block.blockPointer)
			return false;
		if (base.block.upperBound < T::__MDKClassSize)
		{
			base.block.blockPointer = realloc(base.block.blockPointer, T::__MDKClassSize);
			if (!base.block.blockPointer)
				return false;

			const auto oldUpperBound = base.block.upperBound;
			base.block.upperBound = T::__MDKClassSize;
			//we in the same frame or more?
			if (base.lastCacheTS >= currentFrameTS)
			{
				//keep old data and only read additional bytes
				Memory::read(base.basePointer + oldUpperBound + base.block.lowerBound, reinterpret_cast<uint64_t>(base.block.blockPointer) + oldUpperBound + base.block.lowerBound, base.block.upperBound - oldUpperBound - base.block.lowerBound);
				base.lastCacheTS = currentFrameTS;
				return true;
			}
		}
		else if (base.block.lowerBound > X::__MDKClassSize)
		{
			const auto oldLowerBound = base.block.lowerBound;
			base.block.lowerBound = X::__MDKClassSize;
			//we in the same frame or more?
			if (base.lastCacheTS >= currentFrameTS)
			{
				//keep old data and only read additional bytes
				Memory::read(base.basePointer + base.block.lowerBound, reinterpret_cast<uint64_t>(base.block.blockPointer) + base.block.lowerBound, oldLowerBound - base.block.lowerBound);

				base.lastCacheTS = currentFrameTS;
				return true;
			}
		}
		//reread entire block
		if (base.lastCacheTS < currentFrameTS)
		{
			Memory::read(base.basePointer + base.block.lowerBound, reinterpret_cast<uint64_t>(base.block.blockPointer) + base.block.lowerBound, base.block.upperBound - base.block.lowerBound);
			base.lastCacheTS = currentFrameTS;
		}
		return true;
		//we cant really do any memory checks, sure we could make for uworld classes some valid vtable bytes but for other stuff that isnt inherited not really
	}

	//internal cast to function which is just a memcpy. a memcpy is needed instead of a c style cast due to compiler
	//at the end of the day it will still be casted in assembly
	template<typename T = MDKBase>
	static T castTo(MDKBase& base)
	{
		//copy the onlyTemporary state and set onlyTemp to false, if we leave it onlyTemporary, it will free our allocated memory
		bool temp = base.onlyTemporary;
		base.onlyTemporary = false;
		T cast;
		//copy over default values
		memcpy(&cast, &base, sizeof(MDKBase));
		cast.onlyTemporary = temp;
		return cast;
	}

public:
	//constructor
	MDKHandler();

	// always call this at the beginning of your read loop, this will ensure that new data gets fetched after this call
	// not needed if you dont use caching
	static void newFrame();

	/// \brief initializes a new memory block for the given class/struct at the pointer and manages all the memory for you
	/// \tparam T type
	/// \tparam X highest type we don't include
	/// \param gamePointer pointer to the class/struct
	///	\param cache whether this object should be cached or deleted once not needed anymore
	/// \return the class with data upon success
	template< typename T, typename X = MDKBase>
	static T get(void* gamePointer, bool cache = USECACHE)
	{
		const uint64_t up = reinterpret_cast<uint64_t>(gamePointer);

		if (up < 0x40000)
			return T();

		//if we dont cache we dont need to lookup
		if (cache && MDKCache.contains(up))
		{
			if (!checkSizeandTS<T, X>(MDKCache[up]))
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
		b.block.lowerBound = X::__MDKClassSize;
		if (!checkSizeandTS<T, X>(b))
			return T();

		if (cache)
			MDKCache.insert(std::pair(up, b));
		else
			b.onlyTemporary = true;
		return castTo<T>(b);
	}

	/// \brief initializes a new memory block for the given class/struct at the pointer and manages all the memory for you
	/// \tparam T type
	/// \param gamePointer pointer to the class/struct
	/// \param cache whether this object should be cached or deleted once not needed anymore
	/// \return the class with data upon success
	template< typename T, typename X = MDKBase>
	static T get(DWORD64 gamePointer, bool cache = true)
	{
		return get<T, X>((void*)gamePointer, cache);
	}


	/// \brief gets the offset for the given member
	/// \tparam classInstance class where the member resides in
	/// \param memberFunction the member
	/// \return the offset
	template <typename classInstance = MDKBase>
	static __MDKMemberInfo getOffset(MDKBase(classInstance::* memberFunction)(__MDKMemberInfo*) const)
	{
		__MDKMemberInfo b{};

		classInstance c;

		(MDKBase)(c.*memberFunction)(&b);

		return b;
	}

	/// \brief gets the offset for the given member, use this on the DMembers
	/// \tparam classInstance class where the member resides in
	/// \param memberFunction the member
	/// \return the offset
	template <typename classInstance = MDKBase, typename T >
	static __MDKMemberInfo getOffset(T(classInstance::* memberFunction)(__MDKMemberInfo*) const)
	{
		__MDKMemberInfo b{};

		classInstance c;

		(T)(c.*memberFunction)(&b);

		return b;
	}

	/// \brief reads only that member of the class, no caching
	/// \tparam classInstance class where the member resides in
	/// \tparam T type of the member
	/// \param pointerToClass the pointer to the class we want to read the member from
	/// \param memberFunction the member
	/// \return the member converted to T
	template < typename classInstance = MDKBase, typename T>
	static T readSingle(classInstance*& pointerToClass, MDKBase(classInstance::* memberFunction)(__MDKMemberInfo*) const)
	{
		const uint64_t up = reinterpret_cast<uint64_t>(pointerToClass);

		auto info = getOffset<classInstance>(memberFunction);

		if constexpr (std::is_base_of_v<MDKBase, T> && !std::is_pointer_v<T>)
		{
			return MDKHandler::get<T>(up + info.offset);
		}

		

		if (info.size <= 0)
			return T();

		if (sizeof(T) != info.size)
			return T();

		T res;
		memset(&res, 0, sizeof(T));

		Memory::read(up + info.offset, (uint64_t)&res, sizeof(T));

		if (info.isBit)
		{
			char cb;
			memcpy(&cb, &res, 1);

			cb = ((cb >> info.bitField & 1) == 1);
			memcpy(&res, &cb, 1);
		}

		return res;
	}

	/// \brief writes memory directly to the game
	/// \tparam classInstance class where the member resides in
	/// \tparam x type of the member
	///	\param instance the class instance
	/// \param value the value
	/// \return the member converted to T
	template <typename classInstance = MDKBase, typename x>
	static void write(const classInstance& instance, MDKBase(classInstance::* memberFunction)(__MDKMemberInfo*) const, x value)
	{
		if (!instance.basePointer)
			return;
		auto b = getOffset<classInstance>(memberFunction);


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
		Memory::write(instance.basePointer + instance.baseOffset + b.offset, addr, sizeof(x));
		//make a shadow copy so the current frame sees the change too
		memcpy(reinterpret_cast<void*>(reinterpret_cast<uint64_t>(instance.block.blockPointer) + instance.baseOffset + b.offset), reinterpret_cast<void*>(addr), sizeof(x));
	}

	/**
	 * \brief  silently writes the memory only into our memory, so no changes are made in the game memory. You MUST use writeBulk afterwards to write all the silent writes to game memory
	 * \tparam classInstance the class type
	 * \tparam x the type of the write (bool, float, etc)
	 * \param instance the instance we write to
	 * \param memberFunction the member we write to, use &<classname>::<membername>, e.g &UGameInstance::LocalPlayers
	 * \param value the value we write
	 */
	template <typename classInstance = MDKBase, typename x>
	static void writeSilent(const classInstance& instance, MDKBase(classInstance::* memberFunction)(__MDKMemberInfo*) const, x value)
	{
		if (!instance.basePointer || !instance.block.blockPointer)
			return;
		__MDKMemberInfo b{};
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

	/**
	 * \brief writes all silent writes into the games memory. Don't use on large classes, rather use this on structs like FVector etc. This will overwrite the entire class in the game.
	 * \tparam classInstance class type
	 * \param base the instance we write to
	 */
	template <typename classInstance = MDKBase>
	static void writeBulk(const classInstance& base)
	{
		if (!base.basePointer)
			return;

		//write the entire class
		Memory::write(base.basePointer + base.baseOffset, (uint64_t)base.block.blockPointer + base.baseOffset, classInstance::__MDKClassSize);
	}

	/**
	 * \brief cast a MDKClasses data to any struct, this is used for compatibility of custom structs that are not defined.
	 * Check boundaries, this function can throw an exception if the base class is too small for the cast or out of bounds
	 * \tparam T the struct we cast to
	 * \param base the class instance we copy the bytes from
	 * \return the struct with the data filled from the class
	 */
	template<typename T>
	static T dataCast(const MDKBase base)
	{
		T cast;
		if(base)
		{
			//get the data directly from the blockpointer
			memcpy(&cast, reinterpret_cast<void*>((uint64_t)base.block.blockPointer + base.baseOffset), sizeof(T));
		}

		return cast;
	}
};
