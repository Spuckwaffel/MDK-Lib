
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
	CMember(UAIBehaviorScript*)                        AIBehaviorScript                                            OFFSET(get<T>, {0x110, 8, 0, 0})
};



	/// Functions
	// Function /Script/VerseAIBase.AIBehaviorScriptComponent.GetBehaviorScript
	// UAIBehaviorScript* GetBehaviorScript();                                                                                  // [0x98fddcc] Final|Native|Public|BlueprintCallable 
/// Class /Script/VerseAIBase.FortAthenaAISpawnerDataComponent_Verse
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAthenaAISpawnerDataComponent_Verse : public UFortAthenaAISpawnerDataComponent_ScriptBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<UClass*>)                           EntityComponents                                            OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TWeakObjectPtr<UAIBehaviorScript*>)        AIBehaviorScript                                            OFFSET(get<T>, {0x40, 8, 0, 0})
};



	/// Functions
	// Function /Script/VerseAIBase.FortAthenaAISpawnerDataComponent_Verse.SetAIBehaviorScript
	// void SetAIBehaviorScript(UAIBehaviorScript* InAIBehaviorScript);                                                         // [0x98fe180] Final|Native|Public|BlueprintCallable 
	// Function /Script/VerseAIBase.FortAthenaAISpawnerDataComponent_Verse.AddUniqueEntityComponent
	// void AddUniqueEntityComponent(UClass* EntityComponent);                                                                  // [0x98fdd4c] Final|Native|Public|BlueprintCallable 
/// Class /Script/VerseAIBase.VerseAISpawner
/// Size: 0x0080 (0x000BC8 - 0x000C48)
class AVerseAISpawner : public AFortCreativeDeviceProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3144;

public:
	CMember(TArray<UClass*>)                           VerseScriptComponents                                       OFFSET(get<T>, {0xBC8, 16, 0, 0})
	CMember(UClass*)                                   AISpawnerData                                               OFFSET(get<T>, {0xBD8, 8, 0, 0})
	CMember(TArray<AFortPawn*>)                        SpawnedList                                                 OFFSET(get<T>, {0xBE0, 16, 0, 0})
	CMember(UFortMinigameProgressComponent*)           MinigameProgress                                            OFFSET(get<T>, {0xBF0, 8, 0, 0})
	CMember(UFortAISpawnerUtilityComponent*)           AISpawnerUtilityComponent                                   OFFSET(get<T>, {0xBF8, 8, 0, 0})
	CMember(UFortActorOptionsComponent*)               OptionsComponent                                            OFFSET(get<T>, {0xC00, 8, 0, 0})
	CMember(TWeakObjectPtr<UEnvQuery*>)                SpawnEQSQuery                                               OFFSET(get<T>, {0xC08, 32, 0, 0})
};



	/// Functions
	// Function /Script/VerseAIBase.VerseAISpawner.RequestSpawn
	// void RequestSpawn();                                                                                                     // [0x98fe16c] Final|Native|Public|BlueprintCallable 
	// Function /Script/VerseAIBase.VerseAISpawner.OnSpawned
	// void OnSpawned(AFortPawn* Pawn);                                                                                         // [0x7c52cec] Native|Event|Public|BlueprintEvent 
	// Function /Script/VerseAIBase.VerseAISpawner.OnPropertiesLoaded
	// void OnPropertiesLoaded();                                                                                               // [0x98fe158] Final|Native|Private 
	// Function /Script/VerseAIBase.VerseAISpawner.OnPreSpawn
	// void OnPreSpawn(UFortAthenaAISpawnerDataComponentList* ComponentList);                                                   // [0x787317c] Native|Event|Public|BlueprintEvent 
	// Function /Script/VerseAIBase.VerseAISpawner.OnEQSFinished
	// void OnEQSFinished(TArray<FVector>& QueryResultLocations);                                                               // [0x98fe0bc] Final|Native|Public|HasOutParms 
	// Function /Script/VerseAIBase.VerseAISpawner.KillAllBots
	// void KillAllBots(bool bForceDoNotDropLoot);                                                                              // [0x98fe040] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VerseAIBase.VerseAISpawner.InternalOnSpawned
	// void InternalOnSpawned(APawn* Pawn, int32_t RequestID);                                                                  // [0x98fdf7c] Final|Native|Private 
	// Function /Script/VerseAIBase.VerseAISpawner.InternalOnAIDied
	// void InternalOnAIDied(AController* KilledController, bool bIsABot, AFortPawn* KilledAIPawn, AFortPlayerPawn* KilledPlayerPawn, AController* KillerController); // [0x98fdde4] Final|Native|Private 
