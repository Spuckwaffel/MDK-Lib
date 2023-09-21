
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: VerseNative

/// Class /Script/VerseSimulation.VerseAgent
/// Size: 0x0008 (0x000028 - 0x000030)
class UVerseAgent : public UVersePersistentVarWeakMapKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<AController*>)              Controller                                                  ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/VerseSimulation.VerseTeam
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseTeam : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseSimulation.VerseSimulationSubsystem
/// Size: 0x0060 (0x000030 - 0x000090)
class UVerseSimulationSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TMap<TWeakObjectPtr, UVerseAgent*>)        TrackedAgents                                               ___ OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/VerseSimulation.LocalizableMessageParameterAgent
/// Size: 0x0030 (0x000000 - 0x000030)
class FLocalizableMessageParameterAgent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FUniqueNetIdRepl)                          Value                                                       ___ OFFSET(get<T>, {0x0, 48, 0, 0})
};

