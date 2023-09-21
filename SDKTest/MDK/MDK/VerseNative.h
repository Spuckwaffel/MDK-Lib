
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/VerseNative.VerseClassBase
/// Size: 0x0000 (0x000200 - 0x000200)
class UVerseClassBase : public UClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
};

/// Class /Script/VerseNative.VersePersistentVarWeakMapKey
/// Size: 0x0000 (0x000028 - 0x000028)
class UVersePersistentVarWeakMapKey : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseNative.VerseAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UVerseAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UClass*)                                   AssetClass                                                  ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/VerseNative.VerseStmLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseStmLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/VerseNative.VerseIntRange
/// Size: 0x0010 (0x000000 - 0x000010)
class FVerseIntRange : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   Left                                                        ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   Right                                                       ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/VerseNative.VerseRational
/// Size: 0x0010 (0x000000 - 0x000010)
class FVerseRational : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int64_t)                                   Numerator                                                   ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
	DMember(int64_t)                                   Denominator                                                 ___ OFFSET(get<int64_t>, {0x8, 8, 0, 0})
};

/// Struct /Script/VerseNative.akeType
/// Size: 0x0001 (0x000000 - 0x000001)
class FakeType : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/VerseNative.EVerseFalse
/// Size: 0x02
enum EVerseFalse : uint8_t
{
	EVerseFalse__Value0                                                              = 0,
	EVerseFalse__EVerseFalse_MAX1                                                    = 1
};

/// Enum /Script/VerseNative.EVerseTrue
/// Size: 0x02
enum EVerseTrue : uint8_t
{
	EVerseTrue__Value0                                                               = 0,
	EVerseTrue__EVerseTrue_MAX1                                                      = 1
};

