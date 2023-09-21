
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: ModularGameplay
/// dependency: WorldConditions

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
/// Size: 0x00B8 (0x000290 - 0x000348)
class AFortAthenaLivingWorldPointProvidersEnabler : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(TArray<TScriptInterface>)                  EnabledLinkedPointProviders                                 OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TArray<TScriptInterface>)                  AvailableLinkedPointProviders                               OFFSET(get<T>, {0x2A0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     EnablerTags                                                 OFFSET(get<T>, {0x2B0, 32, 0, 0})
	CMember(TArray<TScriptInterface>)                  LinkedPointProviders                                        OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FScalableFloat)                            PointProvidersToEnable                                      OFFSET(get<T>, {0x2E0, 40, 0, 0})
	SMember(FScalableFloat)                            EvaluateAutomatically                                       OFFSET(get<T>, {0x308, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCompletedEvaluationDelegate                               OFFSET(get<T>, {0x338, 16, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.RemoveClosestPointProvidersToPoint
	// void RemoveClosestPointProvidersToPoint(FVector& Point, float MaximumDistance, int32_t PointsToDisable);                 // [0x9805920] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0x7b4c210] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCompletedEvaluation__DelegateSignature
	// void OnCompletedEvaluation__DelegateSignature(TArray<TScriptInterface>& EnabledPointProviders);                          // [0x1ebf994] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.HasCompletedEvaluation
	// bool HasCompletedEvaluation();                                                                                           // [0x91bce40] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnablerTags
	// FGameplayTagContainer GetEnablerTags();                                                                                  // [0x97feca8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnabledLinkedPointProviders
	// TArray<TScriptInterface> GetEnabledLinkedPointProviders();                                                               // [0x97fec8c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.EvaluateAndEnablePointProviders
	// void EvaluateAndEnablePointProviders();                                                                                  // [0x2d79908] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.DoesStartEnabled
	// bool DoesStartEnabled();                                                                                                 // [0x97feb28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride
/// Size: 0x0000 (0x000348 - 0x000348)
class AFortAthenaLivingWorldPointProvidersEnabler_MiniMapDataOverride : public AFortAthenaLivingWorldPointProvidersEnabler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLinearEncounterAnalyticComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UFortAthenaLinearEncounterAnalyticComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldConditionSchema
/// Size: 0x0000 (0x000038 - 0x000038)
class UFortAthenaLivingWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEventDataConditionSchema
/// Size: 0x0008 (0x000038 - 0x000040)
class UFortAthenaLivingWorldEventDataConditionSchema : public UFortAthenaLivingWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldConfigData
/// Size: 0x0200 (0x000030 - 0x000230)
class UFortAthenaLivingWorldConfigData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(TArray<FFortAthenaLivingWorldCategoryTableData>) CategoryTableDatas                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FScalableFloat)                            MaxActorCount                                               OFFSET(get<T>, {0x40, 40, 0, 0})
	SMember(FScalableFloat)                            MaxEventSpawnPerTick                                        OFFSET(get<T>, {0x68, 40, 0, 0})
	SMember(FScalableFloat)                            MaxActorDespawnPerTick                                      OFFSET(get<T>, {0x90, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumEventGenerationInterval                              OFFSET(get<T>, {0xB8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxActorDensity                                             OFFSET(get<T>, {0xE0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxActorUpdatesPerTick                                      OFFSET(get<T>, {0x108, 40, 0, 0})
	SMember(FScalableFloat)                            ActorDensityGridCellSize                                    OFFSET(get<T>, {0x130, 40, 0, 0})
	SMember(FScalableFloat)                            PointClusterSize                                            OFFSET(get<T>, {0x158, 40, 0, 0})
	SMember(FScalableFloat)                            MinNumberOfPlayerForAggressiveSpawning                      OFFSET(get<T>, {0x180, 40, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldTagDensityGridData>) TagDensityGridData                                   OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FGameplayTagQuery)                         SingleUseSpawnerDataQuery                                   OFFSET(get<T>, {0x1B8, 72, 0, 0})
	CMember(UClass*)                                   EQSActorHelperClass                                         OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(FScalableFloat)                            DelayEventGeneration                                        OFFSET(get<T>, {0x208, 40, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator
/// Size: 0x0060 (0x000140 - 0x0001A0)
class UFortAthenaLivingWorldDebugDensityMiniMapIndicator : public UFortMiniMapIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(TArray<FFortAthenaActorDensityDebugInfo>)  ActorDebugInfos                                             OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(TArray<float>)                             DensityGridValues                                           OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FVector)                                   GridOrigin                                                  OFFSET(get<T>, {0x160, 24, 0, 0})
	SMember(FIntVector)                                MaxGridSize                                                 OFFSET(get<T>, {0x178, 12, 0, 0})
	DMember(float)                                     CellSize                                                    OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     MaxDensity                                                  OFFSET(get<float>, {0x188, 4, 0, 0})
	SMember(FString)                                   DisplayName                                                 OFFSET(get<T>, {0x190, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldDespawnConditionSchema
/// Size: 0x0008 (0x000038 - 0x000040)
class UFortAthenaLivingWorldDespawnConditionSchema : public UFortAthenaLivingWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEncounter
/// Size: 0x0038 (0x000030 - 0x000068)
class UFortAthenaLivingWorldEncounter : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FScalableFloat)                            IntervalBetweenEventGeneration                              OFFSET(get<T>, {0x30, 40, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEncounterStage>) Stages                                                   OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance
/// Size: 0x0158 (0x000028 - 0x000180)
class UFortAthenaLivingWorldEncounterInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FMulticastInlineDelegate)                  OnActorSpawned                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFirstActorSpawned                                         OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorDestroyed                                            OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLastActorDestroyed                                        OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorDied                                                 OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FFortAthenaLivingWorldConditionContainer)  ConditionContainer                                          OFFSET(get<T>, {0xC8, 24, 0, 0})
	CMember(TArray<TScriptInterface>)                  AllowedPointProviders                                       OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<TScriptInterface>)                  RegisteredPointProviders                                    OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<UFortAthenaLivingWorldEventData*>)  RuntimeCreatedEventDatas                                    OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) EncounterDefinition                                  OFFSET(get<T>, {0x130, 32, 0, 0})
	CMember(AActor*)                                   ActorDensityReservoir                                       OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(TArray<AActor*>)                           SpawnedActors                                               OFFSET(get<T>, {0x158, 16, 0, 0})
	DMember(int32_t)                                   CurrentStageIndex                                           OFFSET(get<int32_t>, {0x170, 4, 0, 0})
	DMember(bool)                                      bIsPaused                                                   OFFSET(get<bool>, {0x178, 1, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.StartEncounterStage
	// void StartEncounterStage(int32_t StageIndex);                                                                            // [0x98068b4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.ResumeEncounter
	// void ResumeEncounter();                                                                                                  // [0x9805d8c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.Reset
	// void Reset();                                                                                                            // [0x2d79908] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.RequestEventGeneration
	// void RequestEventGeneration();                                                                                           // [0x9805b4c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.RemoveAllowedPointProvider
	// void RemoveAllowedPointProvider(TScriptInterface<Class>& PointProvider);                                                 // [0x9805870] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.PauseEncounter
	// void PauseEncounter();                                                                                                   // [0x98053cc] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OwnsActor
	// bool OwnsActor(AActor* Actor);                                                                                           // [0x7a64378] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnEncounterActorDied
	// void OnEncounterActorDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x980487c] Final|Native|Private|HasDefaults 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorSpawned__DelegateSignature
	// void OnActorSpawned__DelegateSignature(AActor* SpawnedActor);                                                            // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDied__DelegateSignature
	// void OnActorDied__DelegateSignature(AActor* DiedActor);                                                                  // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDestroyed__DelegateSignature
	// void OnActorDestroyed__DelegateSignature(AActor* DestroyedActor);                                                        // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.HasReachedMaxSpawnedCount
	// bool HasReachedMaxSpawnedCount();                                                                                        // [0x2a22dac] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetTotalActorCount
	// int32_t GetTotalActorCount();                                                                                            // [0x797a1bc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetAliveSpawnedActorCount
	// int32_t GetAliveSpawnedActorCount();                                                                                     // [0x97fec68] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.AdvanceEncounterStage
	// void AdvanceEncounterStage();                                                                                            // [0x97fe608] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance.AddAllowedPointProvider
	// void AddAllowedPointProvider(TScriptInterface<Class>& PointProvider);                                                    // [0x97fe538] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEventData
/// Size: 0x0110 (0x000030 - 0x000140)
class UFortAthenaLivingWorldEventData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(int32_t)                                   TimeOfDayFilters                                            OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     WaterLevelIndexMin                                          OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     WaterLevelIndexMax                                          OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           OFFSET(get<T>, {0x40, 24, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldDespawnCondition>) DespawnConditions                                      OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FGameplayTagQuery)                         ProviderFiltersTagQuery                                     OFFSET(get<T>, {0x68, 72, 0, 0})
	CMember(TArray<FPointProviderFilterEntry>)         ProviderFiltersEntries                                      OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FInstancedStruct)                          PointProviderSelector                                       OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldTaggedSpawnActionClass>) SpawnActions                                     OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FScalableFloat)                            MinActorCountToSpawn                                        OFFSET(get<T>, {0xE0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxActorCountToSpawn                                        OFFSET(get<T>, {0x108, 40, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventDataActorSpawnDescription>) ActorDescriptions                        OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldManager
/// Size: 0x0A50 (0x0000A0 - 0x000AF0)
class UFortAthenaLivingWorldManager : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldConfigData*>) DefaultLagerConfig                                  OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TArray<FFortLivingWorldConfigOverride>)    LagerConfigOverrides                                        OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FScalableFloat)                            LagerEnabled                                                OFFSET(get<T>, {0xD8, 40, 0, 0})
	CMember(TMap<FGameplayTag, UClass*>)               TaggedSpawnActionClassMap                                   OFFSET(get<T>, {0x100, 80, 0, 0})
	CMember(TArray<TScriptInterface>)                  PointProviders                                              OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FSlateBrush)                               SpecialActorMinimapIconBrush                                OFFSET(get<T>, {0x160, 192, 0, 0})
	SMember(FVector2D)                                 SpecialActorMinimapIconScale                                OFFSET(get<T>, {0x220, 16, 0, 0})
	SMember(FSlateBrush)                               SpecialActorCompassIconBrush                                OFFSET(get<T>, {0x230, 192, 0, 0})
	SMember(FVector2D)                                 SpecialActorCompassIconScale                                OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(TArray<UClass*>)                           SpawnedSingleUseSpawnerData                                 OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(UWorld*)                                   CachedWorld                                                 OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UFortAthenaLivingWorldConfigData*)         CachedConfig                                                OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(TArray<UFortAthenaLivingWorldEncounterInstance*>) RunningEncounterInstances                            OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(UFortSeasonalEventManager*)                CachedSeasonalEventManager                                  OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ActorClassToPreloadOnClient                                 OFFSET(get<T>, {0x338, 16, 0, 0})
	SMember(FFortAthenaLivingWorldActorUpdateHandler)  ActorUpdateHandler                                          OFFSET(get<T>, {0x348, 176, 0, 0})
	SMember(FFortAthenaLivingWorldPlayerTracker)       PlayerTracker                                               OFFSET(get<T>, {0x3F8, 176, 0, 0})
	SMember(FFortAthenaLivingWorldPreloader)           Preloader                                                   OFFSET(get<T>, {0x4A8, 224, 0, 0})
	SMember(FFortAthenaLivingWorldConditionContainer)  GlobalConditionContainer                                    OFFSET(get<T>, {0x588, 24, 0, 0})
	CMember(TArray<AActor*>)                           RuntimePointProviderList                                    OFFSET(get<T>, {0x7F8, 16, 0, 0})
	CMember(TSet<AActor*>)                             RuntimePointProviderOwners                                  OFFSET(get<T>, {0x808, 80, 0, 0})
	CMember(TMap<UClass*, UFortAthenaLivingWorldSpawnAction*>) SpawnActionCache                                    OFFSET(get<T>, {0xA68, 80, 0, 0})
	CMember(AFortAthenaLivingWorldEQSHelper*)          EQSHelper                                                   OFFSET(get<T>, {0xAB8, 8, 0, 0})
	CMember(UFortAthenaLivingWorldDebugDensityMiniMapIndicator*) DebugDensityMinimapIndicator                      OFFSET(get<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.UnregisterDensityReservoir
	// void UnregisterDensityReservoir(AActor* ActorDensityReservoir);                                                          // [0x9806d20] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.TrySpawnEvent
	// bool TrySpawnEvent(FDataTableRowHandle EventEntry, FTransform SpawnLocation, FDelegateProperty& OnRequestFinished, int32_t& RequestID); // [0x9806934] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.StartEncounter
	// UFortAthenaLivingWorldEncounterInstance* StartEncounter(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> EncounterType, TArray<TScriptInterface>& EncounterPointProviders, AActor* ActorDensityReservoir); // [0x980602c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.ResetEncounter
	// void ResetEncounter(UFortAthenaLivingWorldEncounterInstance* EncounterInstance);                                         // [0x9805bb0] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RequestEventGeneration
	// void RequestEventGeneration();                                                                                           // [0x9805b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RegisterTagDensityReservoir
	// void RegisterTagDensityReservoir(AActor* ActorDensityReservoir, TArray<FFortAthenaLivingWorldEventTagDensityRegistration>& TagsDensity); // [0x980577c] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.RegisterDensityReservoir
	// void RegisterDensityReservoir(AActor* ActorDensityReservoir, float Density, float Range);                                // [0x9805684] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.QueryEventBudget
	// int32_t QueryEventBudget(FDataTableRowHandle EventEntry, AActor* SpawnLocation);                                         // [0x98053e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnWorldFinishedInitialization
	// void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags);                                                  // [0x9805214] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnUnmanagedDensityReservoirActorDestroy
	// void OnUnmanagedDensityReservoirActorDestroy(AActor* DestroyedActor);                                                    // [0x98050b0] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
	// void OnSpawnedActorDestroy(AActor* DestroyedActor);                                                                      // [0x9805030] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnRep_DebugDensityMinimapIndicator
	// void OnRep_DebugDensityMinimapIndicator(UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator);            // [0x56ba1a4] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnRep_ActorClassToPreloadOnClient
	// void OnRep_ActorClassToPreloadOnClient();                                                                                // [0x347707c] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded
	// void OnPatrolPathAdded(AFortAthenaPatrolPath* PatrolPath);                                                               // [0x9804ddc] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnDebugSpawnEventSpawned
	// void OnDebugSpawnEventSpawned(TArray<AActor*>& SpawnedActors, bool bSuccess);                                            // [0x98033f0] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0x98031f0] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.OnActorSpawned
	// void OnActorSpawned(AActor* Actor, int32_t RequestID);                                                                   // [0x9802cc8] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LWMTAM
	// void LWMTAM(FString Name);                                                                                               // [0x97ff0bc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LWMF
	// void LWMF();                                                                                                             // [0x2d79908] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
	// void LivingWorldManagerUnregisterPointProvider(AActor* PointProvider);                                                   // [0x9800c4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging
	// void LivingWorldManagerToggleVerboseLogging();                                                                           // [0x2d79908] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents
	// void LivingWorldManagerToggleGenerateEvents();                                                                           // [0x2d79908] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleDensityDisplay
	// void LivingWorldManagerToggleDensityDisplay();                                                                           // [0x2d79908] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap
	// void LivingWorldManagerToggleActorMinimap(FString Name);                                                                 // [0x8763c38] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSwitchDensityDisplay
	// void LivingWorldManagerSwitchDensityDisplay(int32_t DensityMapIndex);                                                    // [0x5cc6328] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSetEventGenerationEnabled
	// void LivingWorldManagerSetEventGenerationEnabled(bool bInGenerateEvents);                                                // [0x56acda8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
	// void LivingWorldManagerRegisterPointProvider(AActor* PointProvider);                                                     // [0x9800c4c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
	// void LivingWorldManagerProviderDebugActor(int32_t ProviderIndex);                                                        // [0x5cc6328] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents
	// void LivingWorldManagerGenerateEvents();                                                                                 // [0x2d79908] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush
	// void LivingWorldManagerFlush();                                                                                          // [0x2d79908] Final|BlueprintAuthorityOnly|Exec|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpSpawnCount
	// void LivingWorldManagerDumpSpawnCount();                                                                                 // [0x2d79908] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpPrefabLevelBounds
	// void LivingWorldManagerDumpPrefabLevelBounds();                                                                          // [0x2d79908] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpEventInstances
	// void LivingWorldManagerDumpEventInstances();                                                                             // [0x2d79908] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDebugEvent
	// void LivingWorldManagerDebugEvent(FString EventName, int32_t DebugIndex, FString RuntimeSpawnDataName, FString EncounterName); // [0x9800498] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.IsEncounterCategoryActive
	// bool IsEncounterCategoryActive(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*> EncounterType);                          // [0x97fefb8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.GetOwningEncounter
	// UFortAthenaLivingWorldEncounterInstance* GetOwningEncounter(AActor* Actor);                                              // [0x97fee48] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.GetLivingWorldManager
	// UFortAthenaLivingWorldManager* GetLivingWorldManager(UObject* WorldContextObject);                                       // [0x97fedc8] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.EndEncounter
	// void EndEncounter(UFortAthenaLivingWorldEncounterInstance* EncounterInstance);                                           // [0x97feb90] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.CancelSpawnRequest
	// void CancelSpawnRequest(int32_t RequestID);                                                                              // [0x97fe9a8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldManager.BuildDataRegistryResolverScope_Implementation
	// bool BuildDataRegistryResolverScope_Implementation(TArray<FName>& InOutResolverScopes, int32_t& InOutPriority);          // [0x97fe650] Native|Public|HasOutParms|Const 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent
/// Size: 0x00F0 (0x0000A0 - 0x000190)
class UFortAthenaLivingWorldNavigationInvokerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FScalableFloat)                            GenerationRadius                                            OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             OFFSET(get<T>, {0xC8, 4, 0, 0})
	SMember(FScalableFloat)                            DistanceToPlayer                                            OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceToPlayerHysteresis                                  OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            RegistrationDistanceToPlayer                                OFFSET(get<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            RegistrationDistanceToPlayerHysteresis                      OFFSET(get<T>, {0x148, 40, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldManager*>) LivingWorldManager                                     OFFSET(get<T>, {0x170, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0x7b4c210] Final|Native|Protected|HasOutParms 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPointProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaLivingWorldPointProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPrefabLevelStreaming
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UFortAthenaLivingWorldPrefabLevelStreaming : public ULevelStreamingLevelInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPrefab
/// Size: 0x0150 (0x0007C8 - 0x000918)
class AFortAthenaLivingWorldPrefab : public AFortLevelInstancePrefab
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2328;

public:
	CMember(TArray<FFortAthenaLivingWorldPrefabActorSpawnerData>) ActorSpawnerDatas                                OFFSET(get<T>, {0x7C8, 16, 0, 0})
	SMember(FBox)                                      LocalLevelBounds                                            OFFSET(get<T>, {0x7D8, 56, 0, 0})
	SMember(FBox)                                      LocalGrassRemovalBox                                        OFFSET(get<T>, {0x810, 56, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAllActorSpawnedDelegate                                   OFFSET(get<T>, {0x848, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    BuildingsToKill                                             OFFSET(get<T>, {0x870, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SpawnedActors                                               OFFSET(get<T>, {0x880, 16, 0, 0})
	SMember(FDelegateProperty)                         FinishedDestroyingBuildingCallback                          OFFSET(get<T>, {0x890, 12, 0, 0})
	DMember(bool)                                      bHasFinishedSpawn                                           OFFSET(get<bool>, {0x89C, 1, 0, 0})
	DMember(bool)                                      bHasRemovedFoliage                                          OFFSET(get<bool>, {0x89D, 1, 0, 0})
	SMember(FScalableFloat)                            bIsEnabled                                                  OFFSET(get<T>, {0x8A0, 40, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      OFFSET(get<T>, {0x8C8, 40, 0, 0})
	DMember(bool)                                      bShouldLevelBeVisible                                       OFFSET(get<bool>, {0x8F0, 1, 0, 0})
	DMember(bool)                                      bShouldSpawnerBeAllowedToSpawn                              OFFSET(get<bool>, {0x8F1, 1, 0, 0})
	DMember(bool)                                      bShouldAlwaysSnapAboveLandscape                             OFFSET(get<bool>, {0x8F2, 1, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           OFFSET(get<T>, {0x8F8, 24, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.RemoveFoliageInsideLevelBound
	// void RemoveFoliageInsideLevelBound();                                                                                    // [0x2b0d358] Final|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnRep_ShouldLevelBeVisible
	// void OnRep_ShouldLevelBeVisible();                                                                                       // [0x301c78c] Final|Native|Protected 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnBuildingInLevelBoundsDestroyed__DelegateSignature
	// void OnBuildingInLevelBoundsDestroyed__DelegateSignature();                                                              // [0x1ebf994] Public|Delegate      
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawnedDelegate__DelegateSignature
	// void OnAllActorSpawnedDelegate__DelegateSignature(TArray<AActor*>& SpawnedActors);                                       // [0x1ebf994] Public|Delegate|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawned__DelegateSignature
	// void OnAllActorSpawned__DelegateSignature(TArray<AActor*>& SpawnedActors);                                               // [0x1ebf994] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.MakeLevelVisible
	// void MakeLevelVisible();                                                                                                 // [0x9802c8c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.GetOwningLivingWorldPrefab
	// AFortAthenaLivingWorldPrefab* GetOwningLivingWorldPrefab(UObject* WorldContextObject);                                   // [0x97feed8] Final|RequiredAPI|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.GetLevelBounds
	// FBox GetLevelBounds();                                                                                                   // [0x97fed80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.DestroyBuildingsInLevelBounds
	// void DestroyBuildingsInLevelBounds(FDelegateProperty& FinishedDelegate);                                                 // [0x97fea38] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.CallWhenAllActorHaveSpawned
	// void CallWhenAllActorHaveSpawned(FDelegateProperty& DelegateToCall);                                                     // [0x97fe904] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefab.AllowSpawnerToSpawn
	// void AllowSpawnerToSpawn();                                                                                              // [0x97fe61c] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner
/// Size: 0x0130 (0x000290 - 0x0003C0)
class AFortAthenaLivingWorldPrefabActorSpawner : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FFortAthenaLivingWorldActorSpawnDescription) ActorDescription                                          OFFSET(get<T>, {0x290, 256, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawnedDelegate                                      OFFSET(get<T>, {0x390, 16, 0, 0})
	CMember(AFortAthenaPatrolPath*)                    PatrolPath                                                  OFFSET(get<T>, {0x3A0, 8, 0, 0})
	SMember(FGuid)                                     Guid                                                        OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SpawnedActor                                                OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnSnapCompleted
	// void OnSnapCompleted(UFortSnapOnSurfaceComponent* Component, FTransform& OldTransform, FTransform& NewTransfom);         // [0x9804e5c] Final|Native|Protected|HasOutParms|HasDefaults 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawnedDelegate__DelegateSignature
	// void OnActorSpawnedDelegate__DelegateSignature(AActor* SpawnedActor);                                                    // [0x1ebf994] Public|Delegate      
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawned__DelegateSignature
	// void OnActorSpawned__DelegateSignature(AActor* SpawnedActor);                                                            // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.GetSpawnedActor
	// AActor* GetSpawnedActor();                                                                                               // [0x2988f60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.CallWhenActorSpawned
	// void CallWhenActorSpawned(FDelegateProperty& DelegateToCall);                                                            // [0x97fe7b8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaLivingWorldSpawnAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaLivingWorldSpawnActionBlueprint : public UFortAthenaLivingWorldSpawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider
/// Size: 0x00E0 (0x000290 - 0x000370)
class AFortAthenaLivingWorldStaticPointProvider : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          OFFSET(get<T>, {0x298, 104, 0, 0})
	SMember(FGameplayTagContainer)                     FiltersTags                                                 OFFSET(get<T>, {0x300, 32, 0, 0})
	CMember(TArray<FTransform>)                        SpawnPoints                                                 OFFSET(get<T>, {0x320, 16, 0, 0})
	DMember(bool)                                      bStartEnabled                                               OFFSET(get<bool>, {0x330, 1, 0, 0})
	DMember(bool)                                      bRandomizeStartPoint                                        OFFSET(get<bool>, {0x331, 1, 0, 0})
	DMember(bool)                                      bRandomizePointRotation                                     OFFSET(get<bool>, {0x332, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawned                                              OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(TArray<FPointProviderTagDebugColor>)       DebugColors                                                 OFFSET(get<T>, {0x348, 16, 0, 0})
	CMember(AFortGameStateAthena*)                     CachedGameState                                             OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UFortAthenaLivingWorldManager*)            CachedLivingWorldManager                                    OFFSET(get<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0x9802e04] Final|Native|Protected|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnActorSpawned__DelegateSignature
	// void OnActorSpawned__DelegateSignature(AActor* SpawnedActor);                                                            // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.EnablePointProvider
	// void EnablePointProvider();                                                                                              // [0x97feb58] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldStaticPointProvider.DisablePointProvider
	// void DisablePointProvider();                                                                                             // [0x97feadc] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldVehiclePointProvider
/// Size: 0x0050 (0x000370 - 0x0003C0)
class AFortAthenaLivingWorldVehiclePointProvider : public AFortAthenaLivingWorldStaticPointProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FGameplayTagContainer)                     ForceMods                                                   OFFSET(get<T>, {0x370, 32, 0, 0})
	SMember(FScalableFloat)                            ForceModsAllowed                                            OFFSET(get<T>, {0x390, 40, 0, 0})
	CMember(TEnumAsByte<EVehicleInitialOverlapBehavior>) InitialOverlapBehavior                                    OFFSET(get<T>, {0x3B8, 1, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldVolume
/// Size: 0x02F8 (0x0002C8 - 0x0005C0)
class AFortAthenaLivingWorldVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	DMember(bool)                                      bStartEnabled                                               OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	SMember(FGameplayTagContainer)                     FiltersTags                                                 OFFSET(get<T>, {0x2D8, 32, 0, 0})
	CMember(UEnvQuery*)                                EnvironmentQuery                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 OFFSET(get<T>, {0x300, 16, 0, 0})
	DMember(bool)                                      bRemoveUsedPoint                                            OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      bRemoveUsedPointPermenantly                                 OFFSET(get<bool>, {0x311, 1, 0, 0})
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          OFFSET(get<T>, {0x318, 104, 0, 0})
	SMember(FScalableFloat)                            EQSRefreshInterval                                          OFFSET(get<T>, {0x380, 40, 0, 0})
	SMember(FScalableFloat)                            WaterLevelIndexMin                                          OFFSET(get<T>, {0x3A8, 40, 0, 0})
	SMember(FScalableFloat)                            WaterLevelIndexMax                                          OFFSET(get<T>, {0x3D0, 40, 0, 0})
	CMember(AFortGameStateAthena*)                     CachedGameState                                             OFFSET(get<T>, {0x3F8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawnedResult                                        OFFSET(get<T>, {0x400, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPointProviderRegistered                                   OFFSET(get<T>, {0x410, 16, 0, 0})
	CMember(UFortAthenaLivingWorldManager*)            CachedLivingWorldManager                                    OFFSET(get<T>, {0x420, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetSpawnRotation
	// void SetSpawnRotation(FRotator& Rotation);                                                                               // [0x9805fa0] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetFiltersTags
	// void SetFiltersTags(FGameplayTagContainer& TagContainer);                                                                // [0x9805ee8] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQueryConfigParam
	// void SetEQSQueryConfigParam(FName ParameterName, float Value);                                                           // [0x9805e24] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQuery
	// void SetEQSQuery(UEnvQuery* Query);                                                                                      // [0x9805da4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.RunEQS
	// void RunEQS();                                                                                                           // [0x2d79908] Final|Native|Private 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.ResetSpawnRotation
	// void ResetSpawnRotation();                                                                                               // [0x9805d68] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnWorldFinishedInitialization
	// void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags);                                                  // [0x9805130] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered__DelegateSignature
	// void OnPointProviderRegistered__DelegateSignature(AFortAthenaLivingWorldVolume* PointProviderVolume);                    // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0x9802f04] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.OnActorSpawnedResult__DelegateSignature
	// void OnActorSpawnedResult__DelegateSignature(AActor* SpawnedActor, bool bResult);                                        // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.IsPointProviderEnabled
	// bool IsPointProviderEnabled();                                                                                           // [0x91eaf14] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.EnablePointProvider
	// void EnablePointProvider();                                                                                              // [0x97feb74] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.DoesStartEnabled
	// bool DoesStartEnabled();                                                                                                 // [0x893a870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldVolume.DisablePointProvider
	// void DisablePointProvider();                                                                                             // [0x97feaf8] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldWardComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortAthenaLivingWorldWardComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     DefaultRadius                                               OFFSET(get<float>, {0xA0, 4, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaLivingWorldWardComponent.SetWardRadius
	// void SetWardRadius(float Radius);                                                                                        // [0x8d84084] Final|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldWardComponent.OnWorldFinishedInitialization
	// void OnWorldFinishedInitialization(FGameplayTagContainer& ContextTags);                                                  // [0x9805320] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaLivingWorldWardComponent.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0x9803304] Final|Native|Private|HasOutParms 
};

/// Class /Script/LagerRuntime.FortAthenaPatrolPathPointProvider
/// Size: 0x00D0 (0x000290 - 0x000360)
class AFortAthenaPatrolPathPointProvider : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FGameplayTagContainer)                     FiltersTags                                                 OFFSET(get<T>, {0x298, 32, 0, 0})
	CMember(AFortAthenaPatrolPath*)                    AssociatedPatrolPath                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bStartEnabled                                               OFFSET(get<bool>, {0x2C0, 1, 1, 0})
	DMember(bool)                                      bSpawnOnPatrolPath                                          OFFSET(get<bool>, {0x2C0, 1, 1, 1})
	DMember(bool)                                      bAlignOrientationToPath                                     OFFSET(get<bool>, {0x2C0, 1, 1, 2})
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          OFFSET(get<T>, {0x2C8, 104, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawnedResult                                        OFFSET(get<T>, {0x330, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortAthenaPatrolPath*>)    RuntimePatrolPathWeakPtr                                    OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(AFortGameStateAthena*)                     CachedGameState                                             OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UFortAthenaLivingWorldManager*)            CachedLivingWorldManager                                    OFFSET(get<T>, {0x350, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0x9802ff8] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.OnActorSpawnedResult__DelegateSignature
	// void OnActorSpawnedResult__DelegateSignature(AActor* SpawnedActor, bool bResult);                                        // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.EnablePointProvider
	// void EnablePointProvider();                                                                                              // [0x97feb58] Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaPatrolPathPointProvider.DisablePointProvider
	// void DisablePointProvider();                                                                                             // [0x97feadc] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider
/// Size: 0x00C0 (0x000290 - 0x000350)
class AFortAthenaPointAroundPlayerProvider : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FGameplayTagContainer)                     FiltersTags                                                 OFFSET(get<T>, {0x298, 32, 0, 0})
	CMember(UEnvQuery*)                                QueryTemplate                                               OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             RunMode                                                     OFFSET(get<T>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bStartEnabled                                               OFFSET(get<bool>, {0x2C1, 1, 1, 0})
	DMember(bool)                                      bGenerateAroundPlayerBots                                   OFFSET(get<bool>, {0x2C1, 1, 1, 1})
	SMember(FGameplayTag)                              IgnorePlayerWithTag                                         OFFSET(get<T>, {0x2C4, 4, 0, 0})
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          OFFSET(get<T>, {0x2C8, 104, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawnedResult                                        OFFSET(get<T>, {0x330, 16, 0, 0})
	CMember(AFortGameStateAthena*)                     CachedGameState                                             OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.OnCurrentPlaylistLoaded
	// void OnCurrentPlaylistLoaded(FName PlaylistName, FGameplayTagContainer& PlaylistContextTags);                            // [0x98030f4] Final|Native|Private|HasOutParms 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.OnActorSpawnedResult__DelegateSignature
	// void OnActorSpawnedResult__DelegateSignature(AActor* SpawnedActor, bool bResult);                                        // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.EnablePointProvider
	// void EnablePointProvider();                                                                                              // [0x97feb58] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider.DisablePointProvider
	// void DisablePointProvider();                                                                                             // [0x97feadc] Native|Public|BlueprintCallable 
};

/// Class /Script/LagerRuntime.FortCheatManager_LivingWorldManager
/// Size: 0x0048 (0x000028 - 0x000070)
class UFortCheatManager_LivingWorldManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   CheatTeleportToCount                                        OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   CheatTeleportLastEventDataName                              OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   CheatSpawnEventCount                                        OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FString)                                   CheatSpawnEventName                                         OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   CheatTriggerEventCount                                      OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	SMember(FString)                                   CheatTriggerEventName                                       OFFSET(get<T>, {0x60, 16, 0, 0})


	/// Functions
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LWMTE
	// void LWMTE(FString EventDataName);                                                                                       // [0x97ff0bc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LWMSE
	// void LWMSE(FString EventDataName, FString SpawnerDataNames);                                                             // [0x97ff784] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LWMS
	// void LWMS(FString EventDataName);                                                                                        // [0x97ff0bc] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTriggerEvent
	// void LivingWorldManagerTriggerEvent(FString EventDataName);                                                              // [0x8763c38] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportToSpawnPosition
	// void LivingWorldManagerTeleportToSpawnPosition(FString EventDataName);                                                   // [0x7f3113c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportTo
	// void LivingWorldManagerTeleportTo(FString EventDataName);                                                                // [0x7f3113c] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEventAtLocation
	// void LivingWorldManagerSpawnEventAtLocation(FString EventDataName, FVector Location, FRotator Rotation, FString SpawnerDataNames); // [0x980227c] Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEvent
	// void LivingWorldManagerSpawnEvent(FString EventDataName, FString SpawnerDataNames);                                      // [0x98015a0] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnAtLocation
	// void LivingWorldManagerSpawnAtLocation(FString EventDataName, FVector Location, FRotator Rotation);                      // [0x9800cb8] Final|BlueprintAuthorityOnly|Exec|Native|Public|HasDefaults 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
	// void LivingWorldManagerSpawn(FString EventDataName);                                                                     // [0x8763c38] Final|BlueprintAuthorityOnly|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerGDTNextDensityGrid
	// void LivingWorldManagerGDTNextDensityGrid();                                                                             // [0x2d79908] Final|Exec|Native|Public 
	// Function /Script/LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerDisplaySpawnPoints
	// void LivingWorldManagerDisplaySpawnPoints(float MaxDisplayDistance);                                                     // [0x5a9cbc4] Final|Exec|Native|Public 
};

/// Class /Script/LagerRuntime.FortGameFeatureAction_AddCategoryTableToConfig
/// Size: 0x0050 (0x000028 - 0x000078)
class UFortGameFeatureAction_AddCategoryTableToConfig : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<TWeakObjectPtr, FFortAthenaLivingWorldCategoryTableDataList>) ConfigToCategoryTableDatas          OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/LagerRuntime.FortGameFeatureAction_AddLagerConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortGameFeatureAction_AddLagerConfig : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFortLivingWorldConfigOverride>)    LagerConfigOverrides                                        OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortGameFeatureAction_MapMarkerTagsProvider_PatrolPath
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameFeatureAction_MapMarkerTagsProvider_PatrolPath : public UFortGameFeatureAction_MapMarkerTagsProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/LagerRuntime.FortPawnComponent_LivingWorldSpawnAroundPlayer
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortPawnComponent_LivingWorldSpawnAroundPlayer : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TArray<FLivingWorldSpawnAroundPlayerRuntimeData>) RuntimeData                                          OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FLivingWorldSpawnAroundPlayerConfiguration>) PerPlayerConfigurations                            OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortQueryTest_IsCloseToLivingWorldWard
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_IsCloseToLivingWorldWard : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEQSHelper
/// Size: 0x0070 (0x000290 - 0x000300)
class AFortAthenaLivingWorldEQSHelper : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	SMember(FNavAgentProperties)                       NavAgentProperties                                          OFFSET(get<T>, {0x2D0, 48, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_AddAIToGroup
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortAthenaLivingWorldSpawnAction_AddAIToGroup : public UFortAthenaLivingWorldSpawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     GroupTags                                                   OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle : public UFortAthenaLivingWorldSpawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFortAthenaLivingWorldTagQueryToSeatMapping>) SeatMappings                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawnerData
/// Size: 0x0110 (0x000000 - 0x000110)
class FFortAthenaLivingWorldPrefabActorSpawnerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FGuid)                                     ActorSpawnerGuid                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FFortAthenaLivingWorldActorSpawnDescription) ActorDescription                                          OFFSET(get<T>, {0x10, 256, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldActorSpawnDescription
/// Size: 0x0100 (0x000000 - 0x000100)
class FFortAthenaLivingWorldActorSpawnDescription : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SpawnerData                                                 OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagQuery)                         SpawnerDataTagQuery                                         OFFSET(get<T>, {0x40, 72, 0, 0})
	SMember(FScalableFloat)                            ActorDensityValue                                           OFFSET(get<T>, {0x88, 40, 0, 0})
	SMember(FScalableFloat)                            DensityComputationRangeOverride                             OFFSET(get<T>, {0xB0, 40, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventTagDensityRegistration>) TagDensityRegistrations                     OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldTagTimer>)    PostDestructionTagDensityPersistenceDuration                OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      bPreloadOnClient                                            OFFSET(get<bool>, {0xF8, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTagTimer
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAthenaLivingWorldTagTimer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FScalableFloat)                            Duration                                                    OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventTagDensityRegistration
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortAthenaLivingWorldEventTagDensityRegistration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FScalableFloat)                            Range                                                       OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FScalableFloat)                            DensityValue                                                OFFSET(get<T>, {0x30, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.PointProviderTagDebugColor
/// Size: 0x0028 (0x000000 - 0x000028)
class FPointProviderTagDebugColor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FColor)                                    Color                                                       OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSpawnLimiter
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortAthenaLivingWorldPointProviderSpawnLimiter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(ELivingWorldPointProviderSpawnLimiterBehavior) Behavior                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FScalableFloat)                            MaxNumberOfSpawn                                            OFFSET(get<T>, {0x10, 40, 0, 0})
	SMember(FScalableFloat)                            MaxNumberOfEventInstance                                    OFFSET(get<T>, {0x38, 40, 0, 0})
	DMember(bool)                                      bResetLimitWhenEnabling                                     OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldConditionContainer
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAthenaLivingWorldConditionContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UObject*)                                  Owner                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCondition_TrackedPlayerPresence
/// Size: 0x0058 (0x000010 - 0x000068)
class FFortAthenaLivingWorldCondition_TrackedPlayerPresence : public FWorldConditionCommonActorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FScalableFloat)                            MinDistanceToPlayer                                         OFFSET(get<T>, {0x18, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceToPlayer                                         OFFSET(get<T>, {0x40, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldDensityCondition
/// Size: 0x0088 (0x000010 - 0x000098)
class FFortAthenaLivingWorldDensityCondition : public FWorldConditionCommonActorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTag)                              tag                                                         OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FScalableFloat)                            Distance                                                    OFFSET(get<T>, {0x20, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDensity                                                  OFFSET(get<T>, {0x48, 40, 0, 0})
	SMember(FScalableFloat)                            MinDensity                                                  OFFSET(get<T>, {0x70, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldDespawnCondition
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAthenaLivingWorldDespawnCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FWorldConditionQueryDefinition)            DespawnWorldCondition                                       OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     TimeAsCandidateBeforeDespawn                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     TimeAsCandidateBeforeDespawnDeviation                       OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bUseCustomDeathTag                                          OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FGameplayTagContainer)                     DeathTagContainer                                           OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLinearEncounterPlayerParticipationData
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortAthenaLinearEncounterPlayerParticipationData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldActorUpdateHandler
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFortAthenaLivingWorldActorUpdateHandler : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UFortAthenaLivingWorldManager*)            LivingWorldManager                                          OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/LagerRuntime.FortLivingWorldEventTableVariation
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortLivingWorldEventTableVariation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               EventTableVariation                                         OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FScalableFloat)                            VariationWeight                                             OFFSET(get<T>, {0x20, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCategory
/// Size: 0x00E0 (0x000008 - 0x0000E8)
class FFortAthenaLivingWorldCategory : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               EventTable                                                  OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FFortLivingWorldEventTableVariation>) EventTableVariations                                      OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   MaxCount                                                    OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxSpawnedCount                                             OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   EventInstanceMaxCount                                       OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   EventInstanceMaxSpawnedCount                                OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(float)                                     Priority                                                    OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bExcludeFromGlobalAIBudget                                  OFFSET(get<bool>, {0x64, 1, 0, 0})
	SMember(FGameplayTagQuery)                         RequirePlaylistTagQuery                                     OFFSET(get<T>, {0x68, 72, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Encounters                                                  OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FScalableFloat)                            IsEnabled                                                   OFFSET(get<T>, {0xC0, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTagDensityGridData
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAthenaLivingWorldTagDensityGridData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FScalableFloat)                            GridCellSize                                                OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCategoryTableData
/// Size: 0x0050 (0x000000 - 0x000050)
class FFortAthenaLivingWorldCategoryTableData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               CategoryTable                                               OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FScalableFloat)                            IsEnabled                                                   OFFSET(get<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaActorDensityDebugInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAthenaActorDensityDebugInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ActorName                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   ActorPosition                                               OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FIntVector)                                MinCellIndex                                                OFFSET(get<T>, {0x28, 12, 0, 0})
	SMember(FIntVector)                                MaxCellIndex                                                OFFSET(get<T>, {0x34, 12, 0, 0})
	DMember(float)                                     DensityValue                                                OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldDensityGrid
/// Size: 0x0098 (0x0000C0 - 0x000158)
class FFortAthenaLivingWorldDensityGrid : public FFortSpatialGrid
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEncounterStage
/// Size: 0x0070 (0x000000 - 0x000070)
class FFortAthenaLivingWorldEncounterStage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               EventTable                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FScalableFloat)                            MaximumConcurrentNumberOfAI                                 OFFSET(get<T>, {0x20, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpawnCountPerEventGeneration                             OFFSET(get<T>, {0x48, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventDespawnCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAthenaLivingWorldEventDespawnCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bCanBeDespawned                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinDistanceToPlayer                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TimeAsCandidateBeforeDespawn                                OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EAthenaGamePhaseStep)                      CanStartDespawningPhaseStep                                 OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   CanStartDespawningSafeZonePhase                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bCanDespawnWhenInCombatWithPlayer                           OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bCanDespawnInTheStorm                                       OFFSET(get<bool>, {0x15, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventTagDensityCondition
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortAthenaLivingWorldEventTagDensityCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxDensity                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventDataEntry
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAthenaLivingWorldEventDataEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEventData*>) EventData                                            OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      OFFSET(get<T>, {0x20, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEvent
/// Size: 0x01A0 (0x000008 - 0x0001A8)
class FFortAthenaLivingWorldEvent : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEventData*>) EventData                                            OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventDataEntry>) EventDatas                                               OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FScalableFloat)                            IsEnabled                                                   OFFSET(get<T>, {0x38, 40, 0, 0})
	CMember(TArray<float>)                             MaxCount                                                    OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<float>)                             MaxSpawnedCount                                             OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<float>)                             EventInstanceMaxCount                                       OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<float>)                             EventInstanceMaxSpawnedCount                                OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(TArray<float>)                             MinRespawnTime                                              OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<float>)                             MaxRespawnTime                                              OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<float>)                             InstantDeathMinRespawnTime                                  OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<float>)                             InstantDeathMaxRespawnTime                                  OFFSET(get<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bOnlyInSafeZone                                             OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bOnlyInNextSafeZone                                         OFFSET(get<bool>, {0xE9, 1, 0, 0})
	DMember(bool)                                      bOnlyInNextSafeZoneIfStormShrinking                         OFFSET(get<bool>, {0xEA, 1, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           OFFSET(get<T>, {0xF0, 24, 0, 0})
	CMember(EAthenaGamePhaseStep)                      ActivationGamePhaseStep                                     OFFSET(get<T>, {0x108, 1, 0, 0})
	DMember(int32_t)                                   ActivationSafezoneIndex                                     OFFSET(get<int32_t>, {0x10C, 4, 0, 0})
	DMember(float)                                     ActivationMinDelay                                          OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     ActivationMaxDelay                                          OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     DeactivationMinDelay                                        OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     DeactivationMaxDelay                                        OFFSET(get<float>, {0x11C, 4, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventTagDensityCondition>) TagDensityConditions                           OFFSET(get<T>, {0x120, 16, 0, 0})
	DMember(bool)                                      bCheckForActorDensity                                       OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(float)                                     MaxActorDensityOverride                                     OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     MinDistanceToPlayer                                         OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     MaxDistanceToPlayer                                         OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(bool)                                      bCanSpawnWithoutMatchingPlayerDistance                      OFFSET(get<bool>, {0x140, 1, 0, 0})
	DMember(float)                                     RandomActivationChance                                      OFFSET(get<float>, {0x144, 4, 0, 0})
	SMember(FFortAthenaLivingWorldEventDespawnCondition) DespawnCondition                                          OFFSET(get<T>, {0x148, 24, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldDespawnCondition>) DespawnConditions                                      OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FGameplayTagContainer)                     RequirePlaylistTags                                         OFFSET(get<T>, {0x170, 32, 0, 0})
	SMember(FLivingWorldCalendarEventConditions)       CalendarEventConditions                                     OFFSET(get<T>, {0x190, 24, 0, 0})
};

/// Struct /Script/LagerRuntime.LivingWorldCalendarEventConditions
/// Size: 0x0018 (0x000000 - 0x000018)
class FLivingWorldCalendarEventConditions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FLivingWorldCalendarEventCondition>) Conditions                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      IsActiveWithoutSeasonalManager                              OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.LivingWorldCalendarEventCondition
/// Size: 0x0010 (0x000000 - 0x000010)
class FLivingWorldCalendarEventCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     CalendarEventName                                           OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ELivingWorldCalendarEventConditionBehavior) Behavior                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(bool)                                      ShouldEventBeActive                                         OFFSET(get<bool>, {0x5, 1, 0, 0})
	CMember(ELivingWorldCalendarEventConditionRatioBehavior) RatioBehavior                                         OFFSET(get<T>, {0x6, 1, 0, 0})
	DMember(float)                                     RatioValue                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RatioMaxValue                                               OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.PointProviderFilterEntry
/// Size: 0x0088 (0x000000 - 0x000088)
class FPointProviderFilterEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTagQuery)                         ProviderFiltersTagQuery                                     OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FLivingWorldCalendarEventConditions)       CalendarEventConditions                                     OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      OFFSET(get<T>, {0x60, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription
/// Size: 0x0030 (0x000100 - 0x000130)
class FFortAthenaLivingWorldEventDataActorSpawnDescription : public FFortAthenaLivingWorldActorSpawnDescription
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      bSpawnAroundDefaultPoint                                    OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(bool)                                      bUpdateDefaultPosition                                      OFFSET(get<bool>, {0x101, 1, 0, 0})
	DMember(bool)                                      bSharePreviousActorEQSResult                                OFFSET(get<bool>, {0x102, 1, 0, 0})
	CMember(UEnvQuery*)                                SpawnAroundEnvironmentQuery                                 OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             SpawnAroundEnvironmentQueryRunMode                          OFFSET(get<T>, {0x110, 1, 0, 0})
	SMember(FSoftClassPath)                            SpawnAroundNavigationSourceOverride                         OFFSET(get<T>, {0x118, 24, 0, 0})
};

/// Struct /Script/LagerRuntime.FortLivingWorldConfigOverride
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortLivingWorldConfigOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   SourceWorld                                                 OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     PlaylistTag                                                 OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldConfigData*>) LagerConfig                                         OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FFortReleaseVersion)                       StartVersion                                                OFFSET(get<T>, {0x60, 4, 0, 0})
	SMember(FFortReleaseVersion)                       EndVersion                                                  OFFSET(get<T>, {0x64, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPlayerTracker
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFortAthenaLivingWorldPlayerTracker : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TSet<AFortAthenaAIBotController*>)         TrackedBotControllers                                       OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<AFortPlayerPawn*>)                  TrackedPlayerPawns                                          OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<AController*>)                      TrackedPlayerControllers                                    OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderFilterRules
/// Size: 0x0038 (0x000000 - 0x000038)
class FFortAthenaLivingWorldPointProviderFilterRules : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPreloader
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FFortAthenaLivingWorldPreloader : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(UFortAthenaLivingWorldManager*)            LivingWorldManager                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UClass*>)                           LoadedSpawnerDataClass                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<UClass*>)                           LoadedActorClasses                                          OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTaggedSpawnActionClass
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaLivingWorldTaggedSpawnActionClass : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              SpawnActionTag                                              OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UClass*)                                   SpawnActionClass                                            OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCategoryTableDataList
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaLivingWorldCategoryTableDataList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFortAthenaLivingWorldCategoryTableData>) CategoryTableDatas                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LagerRuntime.LivingWorldSpawnAroundPlayerConfiguration
/// Size: 0x0038 (0x000000 - 0x000038)
class FLivingWorldSpawnAroundPlayerConfiguration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Encounter                                            OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TArray<UClass*>)                           PointProviderClasses                                        OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bRegisterReservoir                                          OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.LivingWorldSpawnAroundPlayerRuntimeData
/// Size: 0x0018 (0x000000 - 0x000018)
class FLivingWorldSpawnAroundPlayerRuntimeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<TScriptInterface>)                  PointAroundPlayerProviders                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(UFortAthenaLivingWorldEncounterInstance*)  Encounter                                                   OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSelector
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortAthenaLivingWorldPointProviderSelector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTagQueryToSeatMapping
/// Size: 0x0050 (0x000000 - 0x000050)
class FFortAthenaLivingWorldTagQueryToSeatMapping : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(get<T>, {0x0, 72, 0, 0})
	DMember(int32_t)                                   SeatIndex                                                   OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Enum /Script/LagerRuntime.ELivingWorldPointProviderSpawnLimiterBehavior
/// Size: 0x03
enum ELivingWorldPointProviderSpawnLimiterBehavior : uint8_t
{
	ELivingWorldPointProviderSpawnLimiterBehavior__Lifetime0                         = 0,
	ELivingWorldPointProviderSpawnLimiterBehavior__Concurrent1                       = 1,
	ELivingWorldPointProviderSpawnLimiterBehavior__ELivingWorldPointProviderSpawnLimiterBehavior_MAX2 = 2
};

/// Enum /Script/LagerRuntime.ELivingWorldCalendarEventConditionBehavior
/// Size: 0x03
enum ELivingWorldCalendarEventConditionBehavior : uint8_t
{
	ELivingWorldCalendarEventConditionBehavior__IsActive0                            = 0,
	ELivingWorldCalendarEventConditionBehavior__Ratio1                               = 1,
	ELivingWorldCalendarEventConditionBehavior__ELivingWorldCalendarEventConditionBehavior_MAX2 = 2
};

/// Enum /Script/LagerRuntime.ELivingWorldCalendarEventConditionRatioBehavior
/// Size: 0x06
enum ELivingWorldCalendarEventConditionRatioBehavior : uint8_t
{
	ELivingWorldCalendarEventConditionRatioBehavior__Less0                           = 0,
	ELivingWorldCalendarEventConditionRatioBehavior__LessOrEqual1                    = 1,
	ELivingWorldCalendarEventConditionRatioBehavior__Greater2                        = 2,
	ELivingWorldCalendarEventConditionRatioBehavior__GreaterOrEqual3                 = 3,
	ELivingWorldCalendarEventConditionRatioBehavior__InBetween4                      = 4,
	ELivingWorldCalendarEventConditionRatioBehavior__ELivingWorldCalendarEventConditionRatioBehavior_MAX5 = 5
};

/// Enum /Script/LagerRuntime.EFortAthenaLivingWorldEventRuntimeDeactivationReason
/// Size: 0x07
enum EFortAthenaLivingWorldEventRuntimeDeactivationReason : uint8_t
{
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__None0                      = 0,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__NoValidEventData1          = 1,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__RandomDeactivation2        = 2,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__CalendarEvent3             = 3,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__MatchedPrefabAndNormalActor4 = 4,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__ActorDescDoesntMatchAnySpawnerData5 = 5,
	EFortAthenaLivingWorldEventRuntimeDeactivationReason__EFortAthenaLivingWorldEventRuntimeDeactivationReason_MAX6 = 6
};

