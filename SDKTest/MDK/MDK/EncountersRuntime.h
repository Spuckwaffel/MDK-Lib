
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayStateTreeModule
/// dependency: LagerRuntime
/// dependency: McpProfileSys
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: StateTreeModule

/// Class /Script/EncountersRuntime.EncounterMobAnchor
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AEncounterMobAnchor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FGameplayTagContainer)                     FilterTags                                                  OFFSET(get<T>, {0x290, 32, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterMobManagerComponent
/// Size: 0x0178 (0x0000A0 - 0x000218)
class UEncounterMobManagerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(TArray<FEncounterMobInstance>)             SpawnedMobs                                                 OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FEncounterMobSpawnData>)            MobEncounterSpawnData                                       OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FEncounterMobSpawnInfo)                    DefaultMobSpawnInfo                                         OFFSET(get<T>, {0xC0, 160, 0, 0})
	SMember(FScalableFloat)                            LWMDensityWeight                                            OFFSET(get<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            LWMDensityRange                                             OFFSET(get<T>, {0x188, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterStarted                                          OFFSET(get<T>, {0x1B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterPaused                                           OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterResumed                                          OFFSET(get<T>, {0x1D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterActorSpawned                                     OFFSET(get<T>, {0x1E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterActorDead                                        OFFSET(get<T>, {0x1F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterEnded                                            OFFSET(get<T>, {0x200, 16, 0, 0})
	CMember(TWeakObjectPtr<ALivingWorldEncounterPrefab*>) EncounterPrefab                                          OFFSET(get<T>, {0x210, 8, 0, 0})


	/// Functions
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.StartMobEncounter
	// bool StartMobEncounter(FGameplayTag& MobIdentifier);                                                                     // [0x9b79e90] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.ResumeMobEncounter
	// void ResumeMobEncounter(FGameplayTag& MobIdentifier);                                                                    // [0x9b79e04] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.PauseMobEncounter
	// void PauseMobEncounter(FGameplayTag& MobIdentifier);                                                                     // [0x9b79cf4] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnMobPawnEndPlay
	// void OnMobPawnEndPlay(AActor* Mob, TEnumAsByte<EEndPlayReason> EndPlayReason);                                           // [0x9b799f0] Final|Native|Private 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnMobActorSpawn
	// void OnMobActorSpawn(AActor* SpawnedActor);                                                                              // [0x9b7955c] Final|Native|Private 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnMobActorDied
	// void OnMobActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0x9b78a38] Final|Native|Private|HasDefaults 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterStarted__DelegateSignature
	// void OnEncounterStarted__DelegateSignature(FGameplayTag MobIdentifier);                                                  // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterResumed__DelegateSignature
	// void OnEncounterResumed__DelegateSignature(FGameplayTag MobIdentifier);                                                  // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterPaused__DelegateSignature
	// void OnEncounterPaused__DelegateSignature(FGameplayTag MobIdentifier);                                                   // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterEnded__DelegateSignature
	// void OnEncounterEnded__DelegateSignature(FGameplayTag MobIdentifier);                                                    // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterActorSpawned__DelegateSignature
	// void OnEncounterActorSpawned__DelegateSignature(FGameplayTag MobIdentifier, AActor* SpawnedActor);                       // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.OnEncounterActorDead__DelegateSignature
	// void OnEncounterActorDead__DelegateSignature(FGameplayTag MobIdentifier, AActor* DamagedActor, AActor* DamageCauser);    // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.EndMobEncounter
	// void EndMobEncounter(FGameplayTag& MobIdentifier);                                                                       // [0x9b78370] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterMobManagerComponent.EndAndCleanupAllMobEncounters
	// void EndAndCleanupAllMobEncounters();                                                                                    // [0x9b7835c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/EncountersRuntime.StartLWMEncounterDelegateHandler
/// Size: 0x0008 (0x000028 - 0x000030)
class UStartLWMEncounterDelegateHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/EncountersRuntime.EncounterActorSpawnerData
/// Size: 0x0038 (0x000050 - 0x000088)
class UEncounterActorSpawnerData : public UFortAthenaActorSpawnerData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FEncounterPrefabEntry)                     EncounterEntry                                              OFFSET(get<T>, {0x50, 56, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEncounterBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EncountersRuntime.EncounterGameplayVolume
/// Size: 0x0078 (0x000330 - 0x0003A8)
class AEncounterGameplayVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	DMember(bool)                                      bShouldPersist                                              OFFSET(get<bool>, {0x348, 1, 0, 0})
	SMember(FGuid)                                     SavedActorGuid                                              OFFSET(get<T>, {0x368, 16, 0, 0})
	CMember(UEncounterStateTreeComponent*)             EncounterStateTreeComponent                                 OFFSET(get<T>, {0x378, 8, 0, 0})


	/// Functions
	// Function /Script/EncountersRuntime.EncounterGameplayVolume.OnCleanup
	// void OnCleanup();                                                                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/EncountersRuntime.EncounterGameplayVolume.IsDoneCleaningUp
	// bool IsDoneCleaningUp();                                                                                                 // [0x986e4c8] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/EncountersRuntime.EncounterItem
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UEncounterItem : public UFortItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UEncounterItemDefinition*)                 EncounterItemDefinition                                     OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TWeakObjectPtr<ALivingWorldEncounterPrefab*>) EncounterPrefab                                          OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TWeakObjectPtr<UEncounterManagerComponent*>) EncounterManager                                          OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterItemDefinition
/// Size: 0x0138 (0x000378 - 0x0004B0)
class UEncounterItemDefinition : public UFortItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	DMember(bool)                                      bAutoHandleSuccessFailure                                   OFFSET(get<bool>, {0x378, 1, 0, 0})
	CMember(TWeakObjectPtr<UWorld*>)                   Level                                                       OFFSET(get<T>, {0x380, 32, 0, 0})
	CMember(UStateTree*)                               StateTreeOverride                                           OFFSET(get<T>, {0x3A0, 8, 0, 0})
	SMember(FGameplayCueTag)                           ProximityGameplayCueTag                                     OFFSET(get<T>, {0x3A8, 4, 0, 0})
	SMember(FGameplayCueTag)                           ActorCleanupGameplayCueTag                                  OFFSET(get<T>, {0x3AC, 4, 0, 0})
	CMember(TArray<FName>)                             SuccessRewards                                              OFFSET(get<T>, {0x3B0, 16, 0, 0})
	SMember(FEncounterRewardBehavior)                  SuccessRewardBehavior                                       OFFSET(get<T>, {0x3C0, 56, 0, 0})
	SMember(FGameplayCueTag)                           ActorSuccessGameplayCueTag                                  OFFSET(get<T>, {0x3F8, 4, 0, 0})
	SMember(FGameplayCueTag)                           PlayerSuccessGameplayCueTag                                 OFFSET(get<T>, {0x3FC, 4, 0, 0})
	CMember(TArray<FName>)                             FailureRewards                                              OFFSET(get<T>, {0x400, 16, 0, 0})
	SMember(FEncounterRewardBehavior)                  FailureRewardBehavior                                       OFFSET(get<T>, {0x410, 56, 0, 0})
	SMember(FGameplayCueTag)                           ActorFailureGameplayCueTag                                  OFFSET(get<T>, {0x448, 4, 0, 0})
	SMember(FGameplayCueTag)                           PlayerFailureGameplayCueTag                                 OFFSET(get<T>, {0x44C, 4, 0, 0})
	SMember(FScalableFloat)                            LWMDensityWeight                                            OFFSET(get<T>, {0x450, 40, 0, 0})
	SMember(FScalableFloat)                            LWMDensityRange                                             OFFSET(get<T>, {0x478, 40, 0, 0})
	CMember(TArray<FInstancedStruct>)                  Vars                                                        OFFSET(get<T>, {0x4A0, 16, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterManagerComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UEncounterManagerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TWeakObjectPtr<AEncounterGameplayVolume*>) EncounterVolume                                             OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   CenterActorOverride                                         OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TSet<APlayerController*>)                  ExplicitContributors                                        OFFSET(get<T>, {0xB0, 80, 0, 0})
	CMember(TWeakObjectPtr<UEncounterItem*>)           EncounterItem                                               OFFSET(get<T>, {0x100, 8, 0, 0})


	/// Functions
	// Function /Script/EncountersRuntime.EncounterManagerComponent.RemoveExplicitContributor
	// void RemoveExplicitContributor(APlayerController* Contributor);                                                          // [0x9b79d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.OnStateTreeStatusChanged
	// void OnStateTreeStatusChanged(EStateTreeRunStatus Status);                                                               // [0x9b79c74] Final|Native|Private 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.HandleEncounterSuccess
	// void HandleEncounterSuccess(int32_t RewardIndex);                                                                        // [0x9b789b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.HandleEncounterFailure
	// void HandleEncounterFailure(int32_t RewardIndex);                                                                        // [0x9b78938] Final|Native|Public|BlueprintCallable 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_TagQuery
	// FGameplayTagQuery GetVariable_TagQuery(FGameplayTag& VarName);                                                           // [0x9b78880] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_LWMEncounter
	// UFortAthenaLivingWorldEncounter* GetVariable_LWMEncounter(FGameplayTag& VarName);                                        // [0x9b787e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_ItemDefinition
	// UFortWorldItemDefinition* GetVariable_ItemDefinition(FGameplayTag& VarName);                                             // [0x9b78750] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_Int
	// int32_t GetVariable_Int(FGameplayTag& VarName);                                                                          // [0x9b786b8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_GameplayTag
	// FGameplayTag GetVariable_GameplayTag(FGameplayTag& VarName);                                                             // [0x9b78628] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_Float
	// float GetVariable_Float(FGameplayTag& VarName);                                                                          // [0x9b7858c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.GetVariable_Bool
	// bool GetVariable_Bool(FGameplayTag& VarName);                                                                            // [0x9b784f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EncountersRuntime.EncounterManagerComponent.AddExplicitContributor
	// void AddExplicitContributor(APlayerController* Contributor);                                                             // [0x9b782d8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/EncountersRuntime.EncounterStateTreeComponent
/// Size: 0x0000 (0x000148 - 0x000148)
class UEncounterStateTreeComponent : public UStateTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

/// Class /Script/EncountersRuntime.LivingWorldEncounterPrefab
/// Size: 0x0060 (0x000918 - 0x000978)
class ALivingWorldEncounterPrefab : public AFortAthenaLivingWorldPrefab
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2424;

public:
	CMember(TArray<FEncounterPrefabEntry>)             EncounterEntries                                            OFFSET(get<T>, {0x958, 16, 0, 0})
	CMember(UEncounterItem*)                           EncounterItem                                               OFFSET(get<T>, {0x968, 8, 0, 0})
	CMember(TWeakObjectPtr<UEncounterItemDefinition*>) EncounterDefinition                                         OFFSET(get<T>, {0x970, 8, 0, 0})


	/// Functions
	// Function /Script/EncountersRuntime.LivingWorldEncounterPrefab.OnRep_EncounterDefinition
	// void OnRep_EncounterDefinition();                                                                                        // [0x9b79c40] Final|Native|Private 
};

/// Struct /Script/EncountersRuntime.EncounterMobSpawnInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FEncounterMobSpawnInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FScalableFloat)                            LeashRadiusInner                                            OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            LeashRadiusOuter                                            OFFSET(get<T>, {0x28, 40, 0, 0})
	CMember(TWeakObjectPtr<AEncounterMobAnchor*>)      EncounterAnchorPoint                                        OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(EEncounterMobSpawnType)                    MobSpawnType                                                OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FGameplayTagContainer)                     PointProviderFilterTags                                     OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    StaticPointProviders                                        OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(UEnvQuery*)                                PointProviderEQS                                            OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UClass*)                                   PointProviderVolumeClass                                    OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterMobSpawnData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FEncounterMobSpawnData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FString)                                   DevNotes                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTag)                              MobIdentifier                                               OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bActiveOnStart                                              OFFSET(get<bool>, {0x14, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) MobEncounterData                                     OFFSET(get<T>, {0x18, 32, 0, 0})
	DMember(bool)                                      bOverrideDefaultSpawnInfo                                   OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FEncounterMobSpawnInfo)                    MobSpawnInfo                                                OFFSET(get<T>, {0x40, 160, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterMobInstance
/// Size: 0x0058 (0x000000 - 0x000058)
class FEncounterMobInstance : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(AFortAthenaLivingWorldVolume*)             VolumePointProvider                                         OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TArray<TScriptInterface>)                  CurrentPointProviders                                       OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableBoolStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetVariableBoolStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bValue                                                      OFFSET(get<bool>, {0x4, 1, 0, 0})
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableBoolStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableBoolStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableFloatStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetVariableFloatStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableFloatStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableFloatStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetVariableGameplayTagStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              Value                                                       OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableGameplayTagStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableIntStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetVariableIntStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableIntStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableIntStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) Value                                                       OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableItemDefinitionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Value                                                OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableLWMEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableTagQueryStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FEncounterGetVariableTagQueryStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTagQuery)                         Value                                                       OFFSET(get<T>, {0x8, 72, 0, 0})
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableTagQueryStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableTagQueryStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterPrefabEntry
/// Size: 0x0038 (0x000000 - 0x000038)
class FEncounterPrefabEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UEncounterItemDefinition*)                 EncounterDefinition                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              EncounterIdentifierTag                                      OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      OFFSET(get<T>, {0x10, 40, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterVariable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VarName                                                     OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_Boolean
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_Boolean : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_Float
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_Float : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_GameplayTag
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_GameplayTag : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_Integer
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_Integer : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_ItemDefinition
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_ItemDefinition : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_LWMEncounter
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_LWMEncounter : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_TagQuery
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_TagQuery : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_Boolean
/// Size: 0x0008 (0x000008 - 0x000010)
class FEncounterVarRow_Boolean : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bValue                                                      OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_Float
/// Size: 0x0008 (0x000008 - 0x000010)
class FEncounterVarRow_Float : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_GameplayTag
/// Size: 0x0008 (0x000008 - 0x000010)
class FEncounterVarRow_GameplayTag : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              Value                                                       OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_Integer
/// Size: 0x0008 (0x000008 - 0x000010)
class FEncounterVarRow_Integer : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_ItemDefinition
/// Size: 0x0020 (0x000008 - 0x000028)
class FEncounterVarRow_ItemDefinition : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) Value                                                       OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_LWMEncounter
/// Size: 0x0020 (0x000008 - 0x000028)
class FEncounterVarRow_LWMEncounter : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Value                                                OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_TagQuery
/// Size: 0x0048 (0x000008 - 0x000050)
class FEncounterVarRow_TagQuery : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         Value                                                       OFFSET(get<T>, {0x8, 72, 0, 0})
};

/// Struct /Script/EncountersRuntime.EndAllMobEncountersStateTreeTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FEndAllMobEncountersStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EndAllMobEncountersStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEndAllMobEncountersStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.PauseMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPauseMobEncounterStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MobIdentifier                                               OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.PauseMobEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FPauseMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.ResumeMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FResumeMobEncounterStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MobIdentifier                                               OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.ResumeMobEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FResumeMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.StartLWMEncounterStateTreeTaskInstanceData
/// Size: 0x0130 (0x000000 - 0x000130)
class FStartLWMEncounterStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) LWMEncounter                                         OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagQuery)                         PointProviderTagQuery                                       OFFSET(get<T>, {0x20, 72, 0, 0})
	SMember(FGameplayTagQuery)                         AnchorPointTagQuery                                         OFFSET(get<T>, {0x68, 72, 0, 0})
	SMember(FScalableFloat)                            LeashRadiusInner                                            OFFSET(get<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            LeashRadiusOuter                                            OFFSET(get<T>, {0xD8, 40, 0, 0})
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(UStartLWMEncounterDelegateHandler*)        DelegateHandler                                             OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounterInstance*>) LWMInstance                                  OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SpawnedMobPawns                                             OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TWeakObjectPtr<AEncounterMobAnchor*>)      EncounterAnchorPoint                                        OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.StartLWMEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FStartLWMEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.StartMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStartMobEncounterStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MobIdentifier                                               OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.StartMobEncounterStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FStartMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bStopEncounterOnExit                                        OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/EncountersRuntime.StopMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStopMobEncounterStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MobIdentifier                                               OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.StopMobEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FStopMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterRewardBehavior
/// Size: 0x0038 (0x000000 - 0x000038)
class FEncounterRewardBehavior : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   RewardOffset                                                OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   RewardDirection                                             OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(float)                                     RewardConeAngle                                             OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     RewardFlingMagnitude                                        OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterObjectiveFilterCache
/// Size: 0x0010 (0x000060 - 0x000070)
class FEncounterObjectiveFilterCache : public FEventObjectiveFilterCache
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/EncountersRuntime.EncounterVerbTransitionStateTreeTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FEncounterVerbTransitionStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AActor*)                                   UserActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVerbTransitionStateTreeTask
/// Size: 0x0020 (0x000020 - 0x000040)
class FEncounterVerbTransitionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FStateTreeStateLink)                       TransitionTo                                                OFFSET(get<T>, {0x20, 2, 0, 0})
	CMember(TArray<FInstancedStruct>)                  Verbs                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   ValueThreshold                                              OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Enum /Script/EncountersRuntime.EEncounterMobSpawnType
/// Size: 0x03
enum EEncounterMobSpawnType : uint8_t
{
	EEncounterMobSpawnType__VolumeBased0                                             = 0,
	EEncounterMobSpawnType__StaticPointBased1                                        = 1,
	EEncounterMobSpawnType__EEncounterMobSpawnType_MAX2                              = 2
};

