
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: VerseFortnite

/// Class /Script/VerseAIBase.AIActionsHandlerComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UAIActionsHandlerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/VerseAIBase.AIActionsComponent
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UAIActionsComponent : public UAIComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/VerseAIBase.AIBehaviorScriptComponent
/// Size: 0x0008 (0x000110 - 0x000118)
class UAIBehaviorScriptComponent : public UFortUserOptionContainerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(UAIBehaviorScript*)                        AIBehaviorScript                                            ___ OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Class /Script/VerseAIBase.FortAthenaAISpawnerDataComponent_Verse
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAthenaAISpawnerDataComponent_Verse : public UFortAthenaAISpawnerDataComponent_ScriptBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<UClass*>)                           EntityComponents                                            ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TWeakObjectPtr<UAIBehaviorScript*>)        AIBehaviorScript                                            ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/VerseAIBase.VerseAISpawner
/// Size: 0x0080 (0x000BC8 - 0x000C48)
class AVerseAISpawner : public AFortCreativeDeviceProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3144;

public:
	CMember(TArray<UClass*>)                           VerseScriptComponents                                       ___ OFFSET(get<T>, {0xBC8, 16, 0, 0})
	CMember(UClass*)                                   AISpawnerData                                               ___ OFFSET(get<T>, {0xBD8, 8, 0, 0})
	CMember(TArray<AFortPawn*>)                        SpawnedList                                                 ___ OFFSET(get<T>, {0xBE0, 16, 0, 0})
	CMember(UFortMinigameProgressComponent*)           MinigameProgress                                            ___ OFFSET(get<T>, {0xBF0, 8, 0, 0})
	CMember(UFortAISpawnerUtilityComponent*)           AISpawnerUtilityComponent                                   ___ OFFSET(get<T>, {0xBF8, 8, 0, 0})
	CMember(UFortActorOptionsComponent*)               OptionsComponent                                            ___ OFFSET(get<T>, {0xC00, 8, 0, 0})
	CMember(TWeakObjectPtr<UEnvQuery*>)                SpawnEQSQuery                                               ___ OFFSET(get<T>, {0xC08, 32, 0, 0})
};

