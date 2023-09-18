/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LagerRuntime.

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawnerData
/// Size: 0x0110 (0x000000 - 0x000110)
class FFortAthenaLivingWorldPrefabActorSpawnerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FGuid)                                     ActorSpawnerGuid                                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FFortAthenaLivingWorldActorSpawnDescription) ActorDescription                                          ___ OFFSET(get<T>, {0x10, 256, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldActorSpawnDescription
/// Size: 0x0100 (0x000000 - 0x000100)
class FFortAthenaLivingWorldActorSpawnDescription : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ActorClass                                                  ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SpawnerData                                                 ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagQuery)                         SpawnerDataTagQuery                                         ___ OFFSET(get<T>, {0x40, 72, 0, 0})
	SMember(FScalableFloat)                            ActorDensityValue                                           ___ OFFSET(get<T>, {0x88, 40, 0, 0})
	SMember(FScalableFloat)                            DensityComputationRangeOverride                             ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventTagDensityRegistration>) TagDensityRegistrations                     ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldTagTimer>)    PostDestructionTagDensityPersistenceDuration                ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      bPreloadOnClient                                            ___ OFFSET(get<bool>, {0xF8, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTagTimer
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAthenaLivingWorldTagTimer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FScalableFloat)                            Duration                                                    ___ OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventTagDensityRegistration
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortAthenaLivingWorldEventTagDensityRegistration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              tag                                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FScalableFloat)                            Range                                                       ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FScalableFloat)                            DensityValue                                                ___ OFFSET(get<T>, {0x30, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.PointProviderTagDebugColor
/// Size: 0x0028 (0x000000 - 0x000028)
class FPointProviderTagDebugColor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FColor)                                    Color                                                       ___ OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPointProviderSpawnLimiter
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortAthenaLivingWorldPointProviderSpawnLimiter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(ELivingWorldPointProviderSpawnLimiterBehavior) Behavior                                                ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FScalableFloat)                            MaxNumberOfSpawn                                            ___ OFFSET(get<T>, {0x10, 40, 0, 0})
	SMember(FScalableFloat)                            MaxNumberOfEventInstance                                    ___ OFFSET(get<T>, {0x38, 40, 0, 0})
	DMember(bool)                                      bResetLimitWhenEnabling                                     ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldConditionContainer
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAthenaLivingWorldConditionContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UObject*)                                  Owner                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCondition_TrackedPlayerPresence
/// Size: 0x0058 (0x000010 - 0x000068)
class FFortAthenaLivingWorldCondition_TrackedPlayerPresence : public FWorldConditionCommonActorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FScalableFloat)                            MinDistanceToPlayer                                         ___ OFFSET(get<T>, {0x18, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceToPlayer                                         ___ OFFSET(get<T>, {0x40, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldDensityCondition
/// Size: 0x0088 (0x000010 - 0x000098)
class FFortAthenaLivingWorldDensityCondition : public FWorldConditionCommonActorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTag)                              tag                                                         ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FScalableFloat)                            Distance                                                    ___ OFFSET(get<T>, {0x20, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDensity                                                  ___ OFFSET(get<T>, {0x48, 40, 0, 0})
	SMember(FScalableFloat)                            MinDensity                                                  ___ OFFSET(get<T>, {0x70, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldDespawnCondition
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAthenaLivingWorldDespawnCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FWorldConditionQueryDefinition)            DespawnWorldCondition                                       ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     TimeAsCandidateBeforeDespawn                                ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     TimeAsCandidateBeforeDespawnDeviation                       ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bUseCustomDeathTag                                          ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FGameplayTagContainer)                     DeathTagContainer                                           ___ OFFSET(get<T>, {0x28, 32, 0, 0})
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
	CMember(UFortAthenaLivingWorldManager*)            LivingWorldManager                                          ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/LagerRuntime.FortLivingWorldEventTableVariation
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortLivingWorldEventTableVariation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               EventTableVariation                                         ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FScalableFloat)                            VariationWeight                                             ___ OFFSET(get<T>, {0x20, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCategory
/// Size: 0x00E0 (0x000008 - 0x0000E8)
class FFortAthenaLivingWorldCategory : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               EventTable                                                  ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FFortLivingWorldEventTableVariation>) EventTableVariations                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   MaxCount                                                    ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxSpawnedCount                                             ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   EventInstanceMaxCount                                       ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   EventInstanceMaxSpawnedCount                                ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(float)                                     Priority                                                    ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(bool)                                      bExcludeFromGlobalAIBudget                                  ___ OFFSET(get<bool>, {0x64, 1, 0, 0})
	SMember(FGameplayTagQuery)                         RequirePlaylistTagQuery                                     ___ OFFSET(get<T>, {0x68, 72, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Encounters                                                  ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FScalableFloat)                            IsEnabled                                                   ___ OFFSET(get<T>, {0xC0, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTagDensityGridData
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAthenaLivingWorldTagDensityGridData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              tag                                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FScalableFloat)                            GridCellSize                                                ___ OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCategoryTableData
/// Size: 0x0050 (0x000000 - 0x000050)
class FFortAthenaLivingWorldCategoryTableData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               CategoryTable                                               ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FScalableFloat)                            IsEnabled                                                   ___ OFFSET(get<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaActorDensityDebugInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAthenaActorDensityDebugInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ActorName                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   ActorPosition                                               ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FIntVector)                                MinCellIndex                                                ___ OFFSET(get<T>, {0x28, 12, 0, 0})
	SMember(FIntVector)                                MaxCellIndex                                                ___ OFFSET(get<T>, {0x34, 12, 0, 0})
	DMember(float)                                     DensityValue                                                ___ OFFSET(get<float>, {0x40, 4, 0, 0})
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
	CMember(TWeakObjectPtr<UDataTable*>)               EventTable                                                  ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FScalableFloat)                            MaximumConcurrentNumberOfAI                                 ___ OFFSET(get<T>, {0x20, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpawnCountPerEventGeneration                             ___ OFFSET(get<T>, {0x48, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventDespawnCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAthenaLivingWorldEventDespawnCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bCanBeDespawned                                             ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinDistanceToPlayer                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TimeAsCandidateBeforeDespawn                                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EAthenaGamePhaseStep)                      CanStartDespawningPhaseStep                                 ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   CanStartDespawningSafeZonePhase                             ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bCanDespawnWhenInCombatWithPlayer                           ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bCanDespawnInTheStorm                                       ___ OFFSET(get<bool>, {0x15, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventTagDensityCondition
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortAthenaLivingWorldEventTagDensityCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              tag                                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Distance                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxDensity                                                  ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventDataEntry
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAthenaLivingWorldEventDataEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEventData*>) EventData                                            ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      ___ OFFSET(get<T>, {0x20, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEvent
/// Size: 0x01A0 (0x000008 - 0x0001A8)
class FFortAthenaLivingWorldEvent : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEventData*>) EventData                                            ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventDataEntry>) EventDatas                                               ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FScalableFloat)                            IsEnabled                                                   ___ OFFSET(get<T>, {0x38, 40, 0, 0})
	CMember(TArray<float>)                             MaxCount                                                    ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<float>)                             MaxSpawnedCount                                             ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<float>)                             EventInstanceMaxCount                                       ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<float>)                             EventInstanceMaxSpawnedCount                                ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(TArray<float>)                             MinRespawnTime                                              ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<float>)                             MaxRespawnTime                                              ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<float>)                             InstantDeathMinRespawnTime                                  ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<float>)                             InstantDeathMaxRespawnTime                                  ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	DMember(bool)                                      bOnlyInSafeZone                                             ___ OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bOnlyInNextSafeZone                                         ___ OFFSET(get<bool>, {0xE9, 1, 0, 0})
	DMember(bool)                                      bOnlyInNextSafeZoneIfStormShrinking                         ___ OFFSET(get<bool>, {0xEA, 1, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           ___ OFFSET(get<T>, {0xF0, 24, 0, 0})
	CMember(EAthenaGamePhaseStep)                      ActivationGamePhaseStep                                     ___ OFFSET(get<T>, {0x108, 1, 0, 0})
	DMember(int32_t)                                   ActivationSafezoneIndex                                     ___ OFFSET(get<int32_t>, {0x10C, 4, 0, 0})
	DMember(float)                                     ActivationMinDelay                                          ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     ActivationMaxDelay                                          ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     DeactivationMinDelay                                        ___ OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     DeactivationMaxDelay                                        ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventTagDensityCondition>) TagDensityConditions                           ___ OFFSET(get<T>, {0x120, 16, 0, 0})
	DMember(bool)                                      bCheckForActorDensity                                       ___ OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(float)                                     MaxActorDensityOverride                                     ___ OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     MinDistanceToPlayer                                         ___ OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     MaxDistanceToPlayer                                         ___ OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(bool)                                      bCanSpawnWithoutMatchingPlayerDistance                      ___ OFFSET(get<bool>, {0x140, 1, 0, 0})
	DMember(float)                                     RandomActivationChance                                      ___ OFFSET(get<float>, {0x144, 4, 0, 0})
	SMember(FFortAthenaLivingWorldEventDespawnCondition) DespawnCondition                                          ___ OFFSET(get<T>, {0x148, 24, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldDespawnCondition>) DespawnConditions                                      ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FGameplayTagContainer)                     RequirePlaylistTags                                         ___ OFFSET(get<T>, {0x170, 32, 0, 0})
	SMember(FLivingWorldCalendarEventConditions)       CalendarEventConditions                                     ___ OFFSET(get<T>, {0x190, 24, 0, 0})
};

/// Struct /Script/LagerRuntime.LivingWorldCalendarEventConditions
/// Size: 0x0018 (0x000000 - 0x000018)
class FLivingWorldCalendarEventConditions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FLivingWorldCalendarEventCondition>) Conditions                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      IsActiveWithoutSeasonalManager                              ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.LivingWorldCalendarEventCondition
/// Size: 0x0010 (0x000000 - 0x000010)
class FLivingWorldCalendarEventCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     CalendarEventName                                           ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ELivingWorldCalendarEventConditionBehavior) Behavior                                                   ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(bool)                                      ShouldEventBeActive                                         ___ OFFSET(get<bool>, {0x5, 1, 0, 0})
	CMember(ELivingWorldCalendarEventConditionRatioBehavior) RatioBehavior                                         ___ OFFSET(get<T>, {0x6, 1, 0, 0})
	DMember(float)                                     RatioValue                                                  ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RatioMaxValue                                               ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.PointProviderFilterEntry
/// Size: 0x0088 (0x000000 - 0x000088)
class FPointProviderFilterEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTagQuery)                         ProviderFiltersTagQuery                                     ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FLivingWorldCalendarEventConditions)       CalendarEventConditions                                     ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      ___ OFFSET(get<T>, {0x60, 40, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldEventDataActorSpawnDescription
/// Size: 0x0030 (0x000100 - 0x000130)
class FFortAthenaLivingWorldEventDataActorSpawnDescription : public FFortAthenaLivingWorldActorSpawnDescription
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      bSpawnAroundDefaultPoint                                    ___ OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(bool)                                      bUpdateDefaultPosition                                      ___ OFFSET(get<bool>, {0x101, 1, 0, 0})
	DMember(bool)                                      bSharePreviousActorEQSResult                                ___ OFFSET(get<bool>, {0x102, 1, 0, 0})
	CMember(UEnvQuery*)                                SpawnAroundEnvironmentQuery                                 ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             SpawnAroundEnvironmentQueryRunMode                          ___ OFFSET(get<T>, {0x110, 1, 0, 0})
	SMember(FSoftClassPath)                            SpawnAroundNavigationSourceOverride                         ___ OFFSET(get<T>, {0x118, 24, 0, 0})
};

/// Struct /Script/LagerRuntime.FortLivingWorldConfigOverride
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortLivingWorldConfigOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   SourceWorld                                                 ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     PlaylistTag                                                 ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldConfigData*>) LagerConfig                                         ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FFortReleaseVersion)                       StartVersion                                                ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	SMember(FFortReleaseVersion)                       EndVersion                                                  ___ OFFSET(get<T>, {0x64, 4, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldPlayerTracker
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFortAthenaLivingWorldPlayerTracker : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TSet<AFortAthenaAIBotController*>)         TrackedBotControllers                                       ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<AFortPlayerPawn*>)                  TrackedPlayerPawns                                          ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<AController*>)                      TrackedPlayerControllers                                    ___ OFFSET(get<T>, {0x60, 16, 0, 0})
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
	CMember(UFortAthenaLivingWorldManager*)            LivingWorldManager                                          ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UClass*>)                           LoadedSpawnerDataClass                                      ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<UClass*>)                           LoadedActorClasses                                          ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldTaggedSpawnActionClass
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaLivingWorldTaggedSpawnActionClass : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              SpawnActionTag                                              ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UClass*)                                   SpawnActionClass                                            ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/LagerRuntime.FortAthenaLivingWorldCategoryTableDataList
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaLivingWorldCategoryTableDataList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFortAthenaLivingWorldCategoryTableData>) CategoryTableDatas                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/LagerRuntime.LivingWorldSpawnAroundPlayerConfiguration
/// Size: 0x0038 (0x000000 - 0x000038)
class FLivingWorldSpawnAroundPlayerConfiguration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Encounter                                            ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TArray<UClass*>)                           PointProviderClasses                                        ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bRegisterReservoir                                          ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/LagerRuntime.LivingWorldSpawnAroundPlayerRuntimeData
/// Size: 0x0018 (0x000000 - 0x000018)
class FLivingWorldSpawnAroundPlayerRuntimeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<TScriptInterface>)                  PointAroundPlayerProviders                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(UFortAthenaLivingWorldEncounterInstance*)  Encounter                                                   ___ OFFSET(get<T>, {0x10, 8, 0, 0})
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
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	DMember(int32_t)                                   SeatIndex                                                   ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler
/// Size: 0x00B8 (0x000290 - 0x000348)
class AFortAthenaLivingWorldPointProvidersEnabler : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(TArray<TScriptInterface>)                  EnabledLinkedPointProviders                                 ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TArray<TScriptInterface>)                  AvailableLinkedPointProviders                               ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     EnablerTags                                                 ___ OFFSET(get<T>, {0x2B0, 32, 0, 0})
	CMember(TArray<TScriptInterface>)                  LinkedPointProviders                                        ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FScalableFloat)                            PointProvidersToEnable                                      ___ OFFSET(get<T>, {0x2E0, 40, 0, 0})
	SMember(FScalableFloat)                            EvaluateAutomatically                                       ___ OFFSET(get<T>, {0x308, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCompletedEvaluationDelegate                               ___ OFFSET(get<T>, {0x338, 16, 0, 0})
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
	CMember(TArray<FFortAthenaLivingWorldCategoryTableData>) CategoryTableDatas                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FScalableFloat)                            MaxActorCount                                               ___ OFFSET(get<T>, {0x40, 40, 0, 0})
	SMember(FScalableFloat)                            MaxEventSpawnPerTick                                        ___ OFFSET(get<T>, {0x68, 40, 0, 0})
	SMember(FScalableFloat)                            MaxActorDespawnPerTick                                      ___ OFFSET(get<T>, {0x90, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumEventGenerationInterval                              ___ OFFSET(get<T>, {0xB8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxActorDensity                                             ___ OFFSET(get<T>, {0xE0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxActorUpdatesPerTick                                      ___ OFFSET(get<T>, {0x108, 40, 0, 0})
	SMember(FScalableFloat)                            ActorDensityGridCellSize                                    ___ OFFSET(get<T>, {0x130, 40, 0, 0})
	SMember(FScalableFloat)                            PointClusterSize                                            ___ OFFSET(get<T>, {0x158, 40, 0, 0})
	SMember(FScalableFloat)                            MinNumberOfPlayerForAggressiveSpawning                      ___ OFFSET(get<T>, {0x180, 40, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldTagDensityGridData>) TagDensityGridData                                   ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FGameplayTagQuery)                         SingleUseSpawnerDataQuery                                   ___ OFFSET(get<T>, {0x1B8, 72, 0, 0})
	CMember(UClass*)                                   EQSActorHelperClass                                         ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(FScalableFloat)                            DelayEventGeneration                                        ___ OFFSET(get<T>, {0x208, 40, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldDebugDensityMiniMapIndicator
/// Size: 0x0060 (0x000140 - 0x0001A0)
class UFortAthenaLivingWorldDebugDensityMiniMapIndicator : public UFortMiniMapIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(TArray<FFortAthenaActorDensityDebugInfo>)  ActorDebugInfos                                             ___ OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(TArray<float>)                             DensityGridValues                                           ___ OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FVector)                                   GridOrigin                                                  ___ OFFSET(get<T>, {0x160, 24, 0, 0})
	SMember(FIntVector)                                MaxGridSize                                                 ___ OFFSET(get<T>, {0x178, 12, 0, 0})
	DMember(float)                                     CellSize                                                    ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     MaxDensity                                                  ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	SMember(FString)                                   DisplayName                                                 ___ OFFSET(get<T>, {0x190, 16, 0, 0})
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
	SMember(FScalableFloat)                            IntervalBetweenEventGeneration                              ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEncounterStage>) Stages                                                   ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEncounterInstance
/// Size: 0x0158 (0x000028 - 0x000180)
class UFortAthenaLivingWorldEncounterInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FMulticastInlineDelegate)                  OnActorSpawned                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFirstActorSpawned                                         ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorDestroyed                                            ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLastActorDestroyed                                        ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorDied                                                 ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FFortAthenaLivingWorldConditionContainer)  ConditionContainer                                          ___ OFFSET(get<T>, {0xC8, 24, 0, 0})
	CMember(TArray<TScriptInterface>)                  AllowedPointProviders                                       ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<TScriptInterface>)                  RegisteredPointProviders                                    ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<UFortAthenaLivingWorldEventData*>)  RuntimeCreatedEventDatas                                    ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) EncounterDefinition                                  ___ OFFSET(get<T>, {0x130, 32, 0, 0})
	CMember(AActor*)                                   ActorDensityReservoir                                       ___ OFFSET(get<T>, {0x150, 8, 0, 0})
	CMember(TArray<AActor*>)                           SpawnedActors                                               ___ OFFSET(get<T>, {0x158, 16, 0, 0})
	DMember(int32_t)                                   CurrentStageIndex                                           ___ OFFSET(get<int32_t>, {0x170, 4, 0, 0})
	DMember(bool)                                      bIsPaused                                                   ___ OFFSET(get<bool>, {0x178, 1, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldEventData
/// Size: 0x0110 (0x000030 - 0x000140)
class UFortAthenaLivingWorldEventData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	DMember(int32_t)                                   TimeOfDayFilters                                            ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     WaterLevelIndexMin                                          ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     WaterLevelIndexMax                                          ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldDespawnCondition>) DespawnConditions                                      ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FGameplayTagQuery)                         ProviderFiltersTagQuery                                     ___ OFFSET(get<T>, {0x68, 72, 0, 0})
	CMember(TArray<FPointProviderFilterEntry>)         ProviderFiltersEntries                                      ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FInstancedStruct)                          PointProviderSelector                                       ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldTaggedSpawnActionClass>) SpawnActions                                     ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FScalableFloat)                            MinActorCountToSpawn                                        ___ OFFSET(get<T>, {0xE0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxActorCountToSpawn                                        ___ OFFSET(get<T>, {0x108, 40, 0, 0})
	CMember(TArray<FFortAthenaLivingWorldEventDataActorSpawnDescription>) ActorDescriptions                        ___ OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldManager
/// Size: 0x0A50 (0x0000A0 - 0x000AF0)
class UFortAthenaLivingWorldManager : public UGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldConfigData*>) DefaultLagerConfig                                  ___ OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TArray<FFortLivingWorldConfigOverride>)    LagerConfigOverrides                                        ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FScalableFloat)                            LagerEnabled                                                ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
	CMember(TMap<FGameplayTag, UClass*>)               TaggedSpawnActionClassMap                                   ___ OFFSET(get<T>, {0x100, 80, 0, 0})
	CMember(TArray<TScriptInterface>)                  PointProviders                                              ___ OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FSlateBrush)                               SpecialActorMinimapIconBrush                                ___ OFFSET(get<T>, {0x160, 192, 0, 0})
	SMember(FVector2D)                                 SpecialActorMinimapIconScale                                ___ OFFSET(get<T>, {0x220, 16, 0, 0})
	SMember(FSlateBrush)                               SpecialActorCompassIconBrush                                ___ OFFSET(get<T>, {0x230, 192, 0, 0})
	SMember(FVector2D)                                 SpecialActorCompassIconScale                                ___ OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(TArray<UClass*>)                           SpawnedSingleUseSpawnerData                                 ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(UWorld*)                                   CachedWorld                                                 ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UFortAthenaLivingWorldConfigData*)         CachedConfig                                                ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(TArray<UFortAthenaLivingWorldEncounterInstance*>) RunningEncounterInstances                            ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(UFortSeasonalEventManager*)                CachedSeasonalEventManager                                  ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ActorClassToPreloadOnClient                                 ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	SMember(FFortAthenaLivingWorldActorUpdateHandler)  ActorUpdateHandler                                          ___ OFFSET(get<T>, {0x348, 176, 0, 0})
	SMember(FFortAthenaLivingWorldPlayerTracker)       PlayerTracker                                               ___ OFFSET(get<T>, {0x3F8, 176, 0, 0})
	SMember(FFortAthenaLivingWorldPreloader)           Preloader                                                   ___ OFFSET(get<T>, {0x4A8, 224, 0, 0})
	SMember(FFortAthenaLivingWorldConditionContainer)  GlobalConditionContainer                                    ___ OFFSET(get<T>, {0x588, 24, 0, 0})
	CMember(TArray<AActor*>)                           RuntimePointProviderList                                    ___ OFFSET(get<T>, {0x7F8, 16, 0, 0})
	CMember(TSet<AActor*>)                             RuntimePointProviderOwners                                  ___ OFFSET(get<T>, {0x808, 80, 0, 0})
	CMember(TMap<UClass*, UFortAthenaLivingWorldSpawnAction*>) SpawnActionCache                                    ___ OFFSET(get<T>, {0xA68, 80, 0, 0})
	CMember(AFortAthenaLivingWorldEQSHelper*)          EQSHelper                                                   ___ OFFSET(get<T>, {0xAB8, 8, 0, 0})
	CMember(UFortAthenaLivingWorldDebugDensityMiniMapIndicator*) DebugDensityMinimapIndicator                      ___ OFFSET(get<T>, {0xAC0, 8, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent
/// Size: 0x00F0 (0x0000A0 - 0x000190)
class UFortAthenaLivingWorldNavigationInvokerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FScalableFloat)                            GenerationRadius                                            ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             ___ OFFSET(get<T>, {0xC8, 4, 0, 0})
	SMember(FScalableFloat)                            DistanceToPlayer                                            ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceToPlayerHysteresis                                  ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            RegistrationDistanceToPlayer                                ___ OFFSET(get<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            RegistrationDistanceToPlayerHysteresis                      ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldManager*>) LivingWorldManager                                     ___ OFFSET(get<T>, {0x170, 8, 0, 0})
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
	CMember(TArray<FFortAthenaLivingWorldPrefabActorSpawnerData>) ActorSpawnerDatas                                ___ OFFSET(get<T>, {0x7C8, 16, 0, 0})
	SMember(FBox)                                      LocalLevelBounds                                            ___ OFFSET(get<T>, {0x7D8, 56, 0, 0})
	SMember(FBox)                                      LocalGrassRemovalBox                                        ___ OFFSET(get<T>, {0x810, 56, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAllActorSpawnedDelegate                                   ___ OFFSET(get<T>, {0x848, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    BuildingsToKill                                             ___ OFFSET(get<T>, {0x870, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SpawnedActors                                               ___ OFFSET(get<T>, {0x880, 16, 0, 0})
	SMember(FDelegateProperty)                         FinishedDestroyingBuildingCallback                          ___ OFFSET(get<T>, {0x890, 12, 0, 0})
	DMember(bool)                                      bHasFinishedSpawn                                           ___ OFFSET(get<bool>, {0x89C, 1, 0, 0})
	DMember(bool)                                      bHasRemovedFoliage                                          ___ OFFSET(get<bool>, {0x89D, 1, 0, 0})
	SMember(FScalableFloat)                            bIsEnabled                                                  ___ OFFSET(get<T>, {0x8A0, 40, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      ___ OFFSET(get<T>, {0x8C8, 40, 0, 0})
	DMember(bool)                                      bShouldLevelBeVisible                                       ___ OFFSET(get<bool>, {0x8F0, 1, 0, 0})
	DMember(bool)                                      bShouldSpawnerBeAllowedToSpawn                              ___ OFFSET(get<bool>, {0x8F1, 1, 0, 0})
	DMember(bool)                                      bShouldAlwaysSnapAboveLandscape                             ___ OFFSET(get<bool>, {0x8F2, 1, 0, 0})
	SMember(FWorldConditionQueryDefinition)            CanSpawnCondition                                           ___ OFFSET(get<T>, {0x8F8, 24, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner
/// Size: 0x0130 (0x000290 - 0x0003C0)
class AFortAthenaLivingWorldPrefabActorSpawner : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FFortAthenaLivingWorldActorSpawnDescription) ActorDescription                                          ___ OFFSET(get<T>, {0x290, 256, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawnedDelegate                                      ___ OFFSET(get<T>, {0x390, 16, 0, 0})
	CMember(AFortAthenaPatrolPath*)                    PatrolPath                                                  ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	SMember(FGuid)                                     Guid                                                        ___ OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SpawnedActor                                                ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
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
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          ___ OFFSET(get<T>, {0x298, 104, 0, 0})
	SMember(FGameplayTagContainer)                     FiltersTags                                                 ___ OFFSET(get<T>, {0x300, 32, 0, 0})
	CMember(TArray<FTransform>)                        SpawnPoints                                                 ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	DMember(bool)                                      bStartEnabled                                               ___ OFFSET(get<bool>, {0x330, 1, 0, 0})
	DMember(bool)                                      bRandomizeStartPoint                                        ___ OFFSET(get<bool>, {0x331, 1, 0, 0})
	DMember(bool)                                      bRandomizePointRotation                                     ___ OFFSET(get<bool>, {0x332, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawned                                              ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(TArray<FPointProviderTagDebugColor>)       DebugColors                                                 ___ OFFSET(get<T>, {0x348, 16, 0, 0})
	CMember(AFortGameStateAthena*)                     CachedGameState                                             ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UFortAthenaLivingWorldManager*)            CachedLivingWorldManager                                    ___ OFFSET(get<T>, {0x360, 8, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldVehiclePointProvider
/// Size: 0x0050 (0x000370 - 0x0003C0)
class AFortAthenaLivingWorldVehiclePointProvider : public AFortAthenaLivingWorldStaticPointProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FGameplayTagContainer)                     ForceMods                                                   ___ OFFSET(get<T>, {0x370, 32, 0, 0})
	SMember(FScalableFloat)                            ForceModsAllowed                                            ___ OFFSET(get<T>, {0x390, 40, 0, 0})
	CMember(TEnumAsByte<EVehicleInitialOverlapBehavior>) InitialOverlapBehavior                                    ___ OFFSET(get<T>, {0x3B8, 1, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldVolume
/// Size: 0x02F8 (0x0002C8 - 0x0005C0)
class AFortAthenaLivingWorldVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	DMember(bool)                                      bStartEnabled                                               ___ OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	SMember(FGameplayTagContainer)                     FiltersTags                                                 ___ OFFSET(get<T>, {0x2D8, 32, 0, 0})
	CMember(UEnvQuery*)                                EnvironmentQuery                                            ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	DMember(bool)                                      bRemoveUsedPoint                                            ___ OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      bRemoveUsedPointPermenantly                                 ___ OFFSET(get<bool>, {0x311, 1, 0, 0})
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          ___ OFFSET(get<T>, {0x318, 104, 0, 0})
	SMember(FScalableFloat)                            EQSRefreshInterval                                          ___ OFFSET(get<T>, {0x380, 40, 0, 0})
	SMember(FScalableFloat)                            WaterLevelIndexMin                                          ___ OFFSET(get<T>, {0x3A8, 40, 0, 0})
	SMember(FScalableFloat)                            WaterLevelIndexMax                                          ___ OFFSET(get<T>, {0x3D0, 40, 0, 0})
	CMember(AFortGameStateAthena*)                     CachedGameState                                             ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawnedResult                                        ___ OFFSET(get<T>, {0x400, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPointProviderRegistered                                   ___ OFFSET(get<T>, {0x410, 16, 0, 0})
	CMember(UFortAthenaLivingWorldManager*)            CachedLivingWorldManager                                    ___ OFFSET(get<T>, {0x420, 8, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldWardComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortAthenaLivingWorldWardComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     DefaultRadius                                               ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaPatrolPathPointProvider
/// Size: 0x00D0 (0x000290 - 0x000360)
class AFortAthenaPatrolPathPointProvider : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FGameplayTagContainer)                     FiltersTags                                                 ___ OFFSET(get<T>, {0x298, 32, 0, 0})
	CMember(AFortAthenaPatrolPath*)                    AssociatedPatrolPath                                        ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bStartEnabled                                               ___ OFFSET(get<bool>, {0x2C0, 1, 1, 0})
	DMember(bool)                                      bSpawnOnPatrolPath                                          ___ OFFSET(get<bool>, {0x2C0, 1, 1, 1})
	DMember(bool)                                      bAlignOrientationToPath                                     ___ OFFSET(get<bool>, {0x2C0, 1, 1, 2})
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          ___ OFFSET(get<T>, {0x2C8, 104, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawnedResult                                        ___ OFFSET(get<T>, {0x330, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortAthenaPatrolPath*>)    RuntimePatrolPathWeakPtr                                    ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(AFortGameStateAthena*)                     CachedGameState                                             ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UFortAthenaLivingWorldManager*)            CachedLivingWorldManager                                    ___ OFFSET(get<T>, {0x350, 8, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaPointAroundPlayerProvider
/// Size: 0x00C0 (0x000290 - 0x000350)
class AFortAthenaPointAroundPlayerProvider : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FGameplayTagContainer)                     FiltersTags                                                 ___ OFFSET(get<T>, {0x298, 32, 0, 0})
	CMember(UEnvQuery*)                                QueryTemplate                                               ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             RunMode                                                     ___ OFFSET(get<T>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bStartEnabled                                               ___ OFFSET(get<bool>, {0x2C1, 1, 1, 0})
	DMember(bool)                                      bGenerateAroundPlayerBots                                   ___ OFFSET(get<bool>, {0x2C1, 1, 1, 1})
	SMember(FGameplayTag)                              IgnorePlayerWithTag                                         ___ OFFSET(get<T>, {0x2C4, 4, 0, 0})
	SMember(FFortAthenaLivingWorldPointProviderSpawnLimiter) SpawnLimiter                                          ___ OFFSET(get<T>, {0x2C8, 104, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActorSpawnedResult                                        ___ OFFSET(get<T>, {0x330, 16, 0, 0})
	CMember(AFortGameStateAthena*)                     CachedGameState                                             ___ OFFSET(get<T>, {0x340, 8, 0, 0})
};

/// Class /Script/LagerRuntime.FortCheatManager_LivingWorldManager
/// Size: 0x0048 (0x000028 - 0x000070)
class UFortCheatManager_LivingWorldManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   CheatTeleportToCount                                        ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   CheatTeleportLastEventDataName                              ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   CheatSpawnEventCount                                        ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FString)                                   CheatSpawnEventName                                         ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   CheatTriggerEventCount                                      ___ OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	SMember(FString)                                   CheatTriggerEventName                                       ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/LagerRuntime.FortGameFeatureAction_AddCategoryTableToConfig
/// Size: 0x0050 (0x000028 - 0x000078)
class UFortGameFeatureAction_AddCategoryTableToConfig : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<TWeakObjectPtr, FFortAthenaLivingWorldCategoryTableDataList>) ConfigToCategoryTableDatas          ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/LagerRuntime.FortGameFeatureAction_AddLagerConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortGameFeatureAction_AddLagerConfig : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFortLivingWorldConfigOverride>)    LagerConfigOverrides                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
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
	CMember(TArray<FLivingWorldSpawnAroundPlayerRuntimeData>) RuntimeData                                          ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FLivingWorldSpawnAroundPlayerConfiguration>) PerPlayerConfigurations                            ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
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
	SMember(FNavAgentProperties)                       NavAgentProperties                                          ___ OFFSET(get<T>, {0x2D0, 48, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_AddAIToGroup
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortAthenaLivingWorldSpawnAction_AddAIToGroup : public UFortAthenaLivingWorldSpawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     GroupTags                                                   ___ OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Class /Script/LagerRuntime.FortAthenaLivingWorldSpawnAction_SeatPawnInVehicle
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortAthenaLivingWorldSpawnAction_SeatPawnInVehicle : public UFortAthenaLivingWorldSpawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFortAthenaLivingWorldTagQueryToSeatMapping>) SeatMappings                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
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

