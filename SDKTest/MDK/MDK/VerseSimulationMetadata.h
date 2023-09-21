
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/VerseSimulationMetadata.VerseSimulationAttribConfig
/// Size: 0x0038 (0x000028 - 0x000060)
class UVerseSimulationAttribConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FName>)                             AllowedEditablePropertyNames                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FName>)                             DisallowedEditablePropertyNames                             ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FSoftClassPath>)                    DisallowedObjectPropertyClasses                             ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bAllowTuples                                                ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bAllowMultidimensionalArrays                                ___ OFFSET(get<bool>, {0x59, 1, 0, 0})
	DMember(bool)                                      bFilterProperties                                           ___ OFFSET(get<bool>, {0x5A, 1, 0, 0})
	DMember(bool)                                      bFilterObjectProperties                                     ___ OFFSET(get<bool>, {0x5B, 1, 0, 0})
};

