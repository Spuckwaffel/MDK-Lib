
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Custom/FName
/// Size: 0x0008 (0x000000 - 0x000008)
class FName : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int)                                       ComparisonIndex                                             ___ OFFSET(get<int>, {0x0, 4, 0, 0})
	DMember(int)                                       Number                                                      ___ OFFSET(get<int>, {0x4, 4, 0, 0})
};

/// Struct /Custom/TArray
/// Size: 0x0010 (0x000000 - 0x000010)
class TArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint64_t)                                  Data                                                        ___ OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
	DMember(int)                                       Count                                                       ___ OFFSET(get<int>, {0x8, 4, 0, 0})
	DMember(int)                                       Max                                                         ___ OFFSET(get<int>, {0xC, 4, 0, 0})
};

