/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FortniteAI.

/// Struct /Script/FortniteAI.DebugMinimapData
/// Size: 0x01B0 (0x000000 - 0x0001B0)
class FDebugMinimapData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	DMember(bool)                                      bIsOverridden                                               ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FSlateBrush)                               DebugMinimapIconBrush                                       ___ OFFSET(get<T>, {0x10, 192, 0, 0})
	SMember(FVector2D)                                 DebugMinimapIconScale                                       ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FSlateBrush)                               DebugCompassIconBrush                                       ___ OFFSET(get<T>, {0xE0, 192, 0, 0})
	SMember(FVector2D)                                 DebugCompassIconScale                                       ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAISpawnerTagQueryInjectedBehavior
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortAISpawnerTagQueryInjectedBehavior : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         SpawnerTagsQuery                                            ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	CMember(TArray<FFortInjectedBehaviorEntry>)        InjectedBehaviors                                           ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortInjectedBehaviorEntry
/// Size: 0x0088 (0x000000 - 0x000088)
class FFortInjectedBehaviorEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTagContainer)                     InjectionTags                                               ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagQuery)                         InjectionRequirements                                       ___ OFFSET(get<T>, {0x20, 72, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   InjectedBehavior                                            ___ OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Struct /Script/FortniteAI.FortAISpawnGroupUpgradeUIData
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortAISpawnGroupUpgradeUIData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bAlwaysDisplayHealthBar                                     ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bOverrideHealthBarColor                                     ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               UpgradeIconImage                                            ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FSlateColor)                               UpgradeIconTintColor                                        ___ OFFSET(get<T>, {0x28, 20, 0, 0})
	SMember(FLinearColor)                              HealthBarColorOverride                                      ___ OFFSET(get<T>, {0x3C, 16, 0, 0})
	SMember(FText)                                     UpgradeName                                                 ___ OFFSET(get<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAILODSetting
/// Size: 0x0001 (0x000000 - 0x000001)
class FFortAthenaAILODSetting : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsValid                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/FortniteAI.FortAILODSetting_AIEvaluator
/// Size: 0x0067 (0x000001 - 0x000068)
class FFortAILODSetting_AIEvaluator : public FFortAthenaAILODSetting
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FScalableFloat)                            IntervalMultiplier                                          ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FScalableFloat)                            RandomDeviationMultiplier                                   ___ OFFSET(get<T>, {0x38, 40, 0, 0})
};

/// Struct /Script/FortniteAI.FortAILODSetting_CharacterMovement
/// Size: 0x0187 (0x000001 - 0x000188)
class FFortAILODSetting_CharacterMovement : public FFortAthenaAILODSetting
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FScalableFloat)                            Interval                                                    ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FScalableFloat)                            RandomDeviation                                             ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumDynamicInterval                                      ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            MaximumDotDifferenceBetweenInputVectors                     ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            bDisableAvoidance                                           ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            bBotsEnableNavWalkingMode                                   ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            bBotsEnablePhysNavWalkingPathFollowingMode                  ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            bSweepWhileNavWalking                                       ___ OFFSET(get<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            bGenerateOverlapInNavWalking                                ___ OFFSET(get<T>, {0x148, 40, 0, 0})
};

/// Struct /Script/FortniteAI.FortAILODSetting_FortWeaponRanged
/// Size: 0x0067 (0x000001 - 0x000068)
class FFortAILODSetting_FortWeaponRanged : public FFortAthenaAILODSetting
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FScalableFloat)                            Interval                                                    ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FScalableFloat)                            RandomDeviation                                             ___ OFFSET(get<T>, {0x38, 40, 0, 0})
};

/// Struct /Script/FortniteAI.FortAILODSetting_GenericTickingObject
/// Size: 0x0037 (0x000001 - 0x000038)
class FFortAILODSetting_GenericTickingObject : public FFortAthenaAILODSetting
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FScalableFloat)                            TickMultiplier                                              ___ OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/FortniteAI.FortItemInjectedBehaviorsDataTableRow
/// Size: 0x0030 (0x000008 - 0x000038)
class FFortItemInjectedBehaviorsDataTableRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      ItemDefinition                                              ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FFortInjectedBehaviorEntry>)        InjectedBehaviors                                           ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/FortniteAI.PendingSpawnInfo
/// Size: 0x0140 (0x000000 - 0x000140)
class FPendingSpawnInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(UClass*)                                   PawnClassToSpawn                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AActor*)                                   SpawnPoint                                                  ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   SpawnLocation                                               ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FRotator)                                  SpawnRotation                                               ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	CMember(AActor*)                                   SpawnSource                                                 ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bSpawnedFromExternalSpawner                                 ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(EFortressAIType)                           AIType                                                      ___ OFFSET(get<T>, {0x49, 1, 0, 0})
	CMember(AFortPlayerController*)                    TargetPlayer                                                ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UFortAIEncounterInfo*)                     EncounterInfo                                               ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(float)                                     DifficultyLevel                                             ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	CMember(UFortAISpawnGroup*)                        SpawnGroup                                                  ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FGuid)                                     SpawnGroupGuid                                              ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(int32_t)                                   EnemyIndexInSpawnGroup                                      ___ OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(float)                                     TimeToSpawn                                                 ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FGuid)                                     PendingSpawnInfoGuid                                        ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      bIgnoreCollision                                            ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
	DMember(bool)                                      bKillBuildingActorsAtSpawnLocation                          ___ OFFSET(get<bool>, {0x99, 1, 0, 0})
	DMember(float)                                     EncounterAILifespan                                         ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     ScoreMultiplier                                             ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bDebugSpawnedAI                                             ___ OFFSET(get<bool>, {0xA4, 1, 0, 0})
	CMember(TArray<UFortAbilitySet*>)                  AbilitySetsToGrantOnSpawn                                   ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<UFortGameplayModifierItemDefinition*>) ModifiersToApplyOnSpawn                                  ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FFortAISpawnGroupUpgradeUIData)            UpgradeUIData                                               ___ OFFSET(get<T>, {0xC8, 104, 0, 0})
	SMember(FFortAIPawnLootDropData)                   LootDropData                                                ___ OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Struct /Script/FortniteAI.MMRSpawningBracketBaseDataTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FMMRSpawningBracketBaseDataTableRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MMRBracketLow                                               ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MMRBracketHigh                                              ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/FortniteAI.MMRSpawningBaseRuntimeInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FMMRSpawningBaseRuntimeInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/FortniteAI.MMRSpawningDataTableInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FMMRSpawningDataTableInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UClass*)                                   AISpawnerData                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Skill                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   SpawingItemIndex                                            ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/FortniteAI.MMRPhaseSpawningDataTableInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FMMRPhaseSpawningDataTableInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   GamePhaseIndexToSpawn                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FMMRSpawningDataTableInfo>)         SpawningItems                                               ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FortniteAI.MMRSpawningBracketBotDataTableRow
/// Size: 0x0010 (0x000010 - 0x000020)
class FMMRSpawningBracketBotDataTableRow : public FMMRSpawningBracketBaseDataTableRow
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FMMRPhaseSpawningDataTableInfo>)    PhaseSpawningItems                                          ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FortniteAI.AIHotSpotSlotInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FAIHotSpotSlotInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(AAIHotSpot*)                               HotSpot                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   SlotIndex                                                   ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAI.AthenaMemoryBudgetInterfaces
/// Size: 0x0010 (0x000000 - 0x000010)
class FAthenaMemoryBudgetInterfaces : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/FortniteAI.ClientAILODMovementCompOptimizationConfiguration
/// Size: 0x01E0 (0x000000 - 0x0001E0)
class FClientAILODMovementCompOptimizationConfiguration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FScalableFloat)                            bEnable                                                     ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            bEnableSimulationDataOptimizations                          ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceToApplyFrameSkippingWhenVisible                  ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            FrameSkippingOnLOD1                                         ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            bRequireHittingPawnThresholdForLOD1                         ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            FrameSkippingOnLOD2                                         ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            bRequireHittingPawnThresholdForLOD2                         ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            FrameSkippingOnLowestLOD                                    ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            FrameSkippingOnLowestLODWithSmallViewAngleRendered          ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            FrameSkippingOnLowestLODWithSmallViewAngleNotRendered       ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            FrameSkippingInvisible                                      ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            bForceInvisibleValueWhenNotRenderedForThreshold             ___ OFFSET(get<T>, {0x1B8, 40, 0, 0})
};

/// Struct /Script/FortniteAI.ClientAILODSettings
/// Size: 0x02F0 (0x000000 - 0x0002F0)
class FClientAILODSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FScalableFloat)                            ScoreMultiplier                                             ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            PreloadingPriorityOverride                                  ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            bSupportCharacterMovementOptimization                       ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FClientAILODMovementCompOptimizationConfiguration) MovementCompOptimizationConfiguration               ___ OFFSET(get<T>, {0x78, 480, 0, 0})
	SMember(FScalableFloat)                            bAIPawnOnlyTickMeshWhenRendered                             ___ OFFSET(get<T>, {0x258, 40, 0, 0})
	SMember(FScalableFloat)                            bAIPawnApplyEffectOptimizations                             ___ OFFSET(get<T>, {0x280, 40, 0, 0})
};

/// Struct /Script/FortniteAI.DroppingAgentData
/// Size: 0x0018 (0x000000 - 0x000018)
class FDroppingAgentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AAthenaAIController*)                      AIController                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(ABuildingActor*)                           MovementBase                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FortniteAI.AISpawnCountInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FAISpawnCountInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAI.PendingRequestManager
/// Size: 0x0030 (0x000000 - 0x000030)
class FPendingRequestManager : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/FortniteAI.GoalSelectionQueryInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FGoalSelectionQueryInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UEnvQuery*)                                GoalSelectionQuery                                          ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     RequiredGameplayTags                                        ___ OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/FortniteAI.AICustomTargetConfiguration
/// Size: 0x0020 (0x000000 - 0x000020)
class FAICustomTargetConfiguration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Offset                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(char)                                      ValidRequestTypes                                           ___ OFFSET(get<char>, {0x18, 1, 0, 0})
};

/// Struct /Script/FortniteAI.IntensityContribution
/// Size: 0x0048 (0x000000 - 0x000048)
class FIntensityContribution : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TEnumAsByte<EFortCombatFactors>)           CombatFactor                                                ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EFortAIDirectorFactor)                     ContributingAIDirectorFactor                                ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     MaxContribution                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bModifyContributionByCompletionPercentage                   ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FCurveTableRowHandle)                      CompletionPercentageInitialMultiplier                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      CompletionPercentageToStartReducingMultiplier               ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      CompletionPercentageToStopReducingMultiplier                ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bModifyByNumberOfCriticalEncounterGoals                     ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/FortniteAI.IntensityData
/// Size: 0x0030 (0x000000 - 0x000030)
class FIntensityData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FIntensityContribution>)            ContributingFactors                                         ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     ContributionsTotal                                          ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(TArray<UBuildingEditModeMetadata*>)        ExceptionEditModes                                          ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(float)                                     ExceptionEditModeWeight                                     ___ OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/FortniteAI.UtilityTypeFloatPair
/// Size: 0x0008 (0x000000 - 0x000008)
class FUtilityTypeFloatPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TEnumAsByte<EFortAIUtility>)               Utility                                                     ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAI.UtilityContribution
/// Size: 0x0008 (0x000000 - 0x000008)
class FUtilityContribution : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     MaxContribution                                             ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<EFortCombatFactors>)           ContributingFactor                                          ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EFortAIDirectorFactor)                     ContributingAIDirectorFactor                                ___ OFFSET(get<T>, {0x5, 1, 0, 0})
	CMember(TEnumAsByte<EFortFactorContributionType>)  ContributionType                                            ___ OFFSET(get<T>, {0x6, 1, 0, 0})
};

/// Struct /Script/FortniteAI.UtilityData
/// Size: 0x0040 (0x000000 - 0x000040)
class FUtilityData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FUtilityContribution>)              ContributingFactors                                         ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     ContributionsTotal                                          ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bApplyRecentSelectionPenalty                                ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(float)                                     RecentlySelectedPenaltyPercentage                           ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     PenaltyFallOffRate                                          ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FString)                                   DebugGraphName                                              ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FLinearColor)                              DebugGraphColor                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterPIDControllerSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAIEncounterPIDControllerSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FCurveTableRowHandle)                      ProportionalGain                                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      IntegralGain                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      DerivativeGain                                              ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterPIDController
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortAIEncounterPIDController : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     ProportionalGain                                            ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     IntegralGain                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DerivativeGain                                              ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortPlayerPerformanceEstimateSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortPlayerPerformanceEstimateSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FCurveTableRowHandle)                      PlayerPerformanceEstimateTransformMin                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      PlayerPerformanceEstimateTransformOrigin                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      PlayerPerformanceEstimateTransformMax                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(float)                                     EncounterPlayerPerformanceWeight                            ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     PreviousWavePlayerPerformanceWeight                         ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     CampaignPlayerPerformanceWeight                             ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortEncounterPawnNumberCaps
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortEncounterPawnNumberCaps : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bApplyPawnNumberCaps                                        ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<FCurveTableRowHandle>)              PawnCapsPerPlayerCount                                      ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterSpawnGroupCap
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortAIEncounterSpawnGroupCap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FCurveTableRowHandle)                      MinSpawnGroupNumberCap                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      MaxSpawnGroupNumberCap                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterSpawnGroupCapsCategory
/// Size: 0x0140 (0x000000 - 0x000140)
class FFortAIEncounterSpawnGroupCapsCategory : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bApplyGroupPopulationCurveToCategoryMax                     ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FCurveTableRowHandle)                      InitialSpawnGroupAvailabilityDelaySeconds                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      SpawnGroupAvailabilityDelaySeconds                          ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FGameplayTagQuery)                         UnlockingTagQuery                                           ___ OFFSET(get<T>, {0x70, 72, 0, 0})
	CMember(TArray<FFortAIEncounterSpawnGroupCap>)     SpawnGroupCapsPerPlayerCount                                ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(float)                                     InitialSpawnGroupAvailabilityTime                           ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     NumActiveCategorySpawnGroups                                ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	CMember(TArray<float>)                             SpawnGroupAvailabilityTimes                                 ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(int32_t)                                   NumSpawnGroupAvailable                                      ___ OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	CMember(UObject*)                                  CategorySource                                              ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterSpawnGroupCapsProfile
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAIEncounterSpawnGroupCapsProfile : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTagContainer)                     EncounterTypeTags                                           ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TArray<FFortAIEncounterSpawnGroupCapsCategory>) PopulationCategories                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterSpawnPointsProfile
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortAIEncounterSpawnPointsProfile : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTagContainer)                     EncounterTypeTags                                           ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TArray<FCurveTableRowHandle>)              MaxSpawnPointsPerPlayerCount                                ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FCurveTableRowHandle>)              MinSpawnPointsPerPlayerCount                                ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIPawnUpgradeProbability
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortAIPawnUpgradeProbability : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FCurveTableRowHandle)                      UpgradeProbability                                          ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAISpawnGroupUpgradeData
/// Size: 0x0060 (0x000000 - 0x000060)
class FFortAISpawnGroupUpgradeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UClass*)                                   SpawnGroupUpgrade                                           ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   UpgradeProbabilities                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UClass*)                                   SpawnGroupCapsCategories                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTagQuery)                         EncounterTagRequirementsQuery                               ___ OFFSET(get<T>, {0x18, 72, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterPawnDifficultyLevelModifier
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortAIEncounterPawnDifficultyLevelModifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         EncounterTagRequirementsQuery                               ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FCurveTableRowHandle)                      DifficultyLevelModifierCurve                                ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortPendingStoppedEncounterData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortPendingStoppedEncounterData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UFortAIEncounterInfo*)                     Encounter                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(EFortObjectiveStatus)                      ObjectiveStatus                                             ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      bForceDestroyAI                                             ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bEncounterCompletedSuccessfully                             ___ OFFSET(get<bool>, {0xA, 1, 0, 0})
};

/// Struct /Script/FortniteAI.FortEncounterGroupLimitData
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortEncounterGroupLimitData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   DesiredPawnNumCap                                           ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RemainingDesiredLimit                                       ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   CurrentEncounterLimit                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterRequirements
/// Size: 0x0050 (0x000000 - 0x000050)
class FFortAIEncounterRequirements : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TEnumAsByte<EFortMissionType>)             AssociatedMissionType                                       ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x8, 72, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIBaseLootDropRow
/// Size: 0x0038 (0x000008 - 0x000040)
class FFortAIBaseLootDropRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   Priority                                                    ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     ItemDropChance                                              ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FName)                                     WorldItemLootTierGroup                                      ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FName)                                     WorldItemInstancedLootTierGroup                             ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     AccountItemLootTierGroup                                    ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FGameplayTagContainer)                     AITagsContainer                                             ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/FortniteAI.FortAILootDropModifierRow
/// Size: 0x0030 (0x000008 - 0x000038)
class FFortAILootDropModifierRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   Priority                                                    ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     ItemDropChanceMultiplier                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FName)                                     WorldItemLootTierGroup                                      ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FGameplayTagContainer)                     AITagsContainer                                             ___ OFFSET(get<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/FortniteAI.FortAILootDropModifiers
/// Size: 0x0060 (0x000000 - 0x000060)
class FFortAILootDropModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FFortAIEncounterRequirements)              Requirements                                                ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               LootDropModifierRows                                        ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/FortniteAI.LODAIUpdateInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FLODAIUpdateInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/FortniteAI.FortAIEncounterQueryData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortAIEncounterQueryData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FVector>)                           QueryLocations                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<AActor*>)                           QueryActors                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FortniteAI.PlayerLODViewConeConfig
/// Size: 0x0080 (0x000000 - 0x000080)
class FPlayerLODViewConeConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FScalableFloat)                            ObserverVisionAngleDeg                                      ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ViewConeMaxRadius                                           ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            AlwaysVisibleRadius                                         ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	CMember(EFortAILODLevel)                           FortAILODLevel                                              ___ OFFSET(get<T>, {0x78, 1, 0, 0})
};

/// Struct /Script/FortniteAI.PlayerLODViewConeHysteresisConfig
/// Size: 0x0050 (0x000000 - 0x000050)
class FPlayerLODViewConeHysteresisConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            AdditionalObserverVisionAngleDeg                            ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            AdditionalRadius                                            ___ OFFSET(get<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIDirectorPerLODConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAIDirectorPerLODConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FScalableFloat)                            MaxNPCCosts                                                 ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	CMember(EFortAILODLevel)                           FortAILODLevel                                              ___ OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Struct /Script/FortniteAI.AIDirectorEventData
/// Size: 0x0030 (0x000000 - 0x000030)
class FAIDirectorEventData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EFortAIDirectorEvent)                      Event                                                       ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FCurveTableRowHandle)                      DataMax                                                     ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      CoolDownRate                                                ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(EFortAIDirectorEventContribution)          ContributionType                                            ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EFortAIDirectorEventParticipant)           OwnerParticipantType                                        ___ OFFSET(get<T>, {0x29, 1, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIDirectorFactorContribution
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortAIDirectorFactorContribution : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(EFortAIDirectorEvent)                      AIDirectorEvent                                             ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     MaxContribution                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TEnumAsByte<EFortAIDirectorFactorContribution>) ContributionType                                       ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIDirectorFactorData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortAIDirectorFactorData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EFortAIDirectorFactor)                     AIDirectorFactor                                            ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FFortAIDirectorFactorContribution>) ContributingEvents                                          ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     MaxValue                                                    ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/FortniteAI.SpawnGroupProgression
/// Size: 0x0008 (0x000000 - 0x000008)
class FSpawnGroupProgression : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UFortAISpawnGroup*)                        SpawnGroup                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAI.AIEncounterSpawnGroupWeights
/// Size: 0x0018 (0x000000 - 0x000018)
class FAIEncounterSpawnGroupWeights : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/FortniteAI.FortSpawnPointsPercentageCurve
/// Size: 0x0010 (0x000008 - 0x000018)
class FFortSpawnPointsPercentageCurve : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UCurveTable*)                              SpawnPointsPercentageCurveTable                             ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     SpawnPointsPercentageCurveTableRow                          ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxRampTime                                                 ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortIntensityCurve
/// Size: 0x0030 (0x000008 - 0x000038)
class FFortIntensityCurve : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UCurveTable*)                              IntensityCurveTable                                         ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     IntensityCurveTableRow                                      ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(float)                                     LowPlayerPerformancePeakIntensityThreshold                  ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     NormalPlayerPerformancePeakIntensityThreshold               ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     HighPlayerPerformancePeakIntensityThreshold                 ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MaxRampTime                                                 ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     FadeEndIntensityThreshold                                   ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     StartIntensityOffsetFloor                                   ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     EndIntensityOffsetFloor                                     ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     StartIntensityOffsetCeiling                                 ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     EndIntensityOffsetCeiling                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/FortniteAI.CurrentIntensityAnalyticsBucket
/// Size: 0x0038 (0x000000 - 0x000038)
class FCurrentIntensityAnalyticsBucket : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/FortniteAI.FortCurveSequenceInstanceInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FFortCurveSequenceInstanceInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/FortniteAI.FortSpawnPointsPercentageCurveSequenceInstanceInfo
/// Size: 0x000C (0x000004 - 0x000010)
class FFortSpawnPointsPercentageCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UFortSpawnPointsPercentageCurveSequence*)  SpawnPointsPercentageCurveSequence                          ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortIntensityCurveSequenceInstanceInfo
/// Size: 0x000C (0x000004 - 0x000010)
class FFortIntensityCurveSequenceInstanceInfo : public FFortCurveSequenceInstanceInfo
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UFortIntensityCurveSequence*)              IntensityCurveSequence                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FortniteAI.SpawnGroupInstanceInfo
/// Size: 0x0100 (0x000000 - 0x000100)
class FSpawnGroupInstanceInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(UFortAISpawnGroup*)                        SpawnGroup                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   NumActiveAlive                                              ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   TotalGroupCost                                              ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   SpawnPointsUsed                                             ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   NumEngaged                                                  ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(bool)                                      bReadyToSpawn                                               ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bFinishedSpawning                                           ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
	SMember(FGuid)                                     GroupGuid                                                   ___ OFFSET(get<T>, {0x1C, 16, 0, 0})
	DMember(int32_t)                                   EnemySpawnDataIndex                                         ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     TimeSelected                                                ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   NextEnemyToSpawnIndex                                       ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	SMember(FGameplayTagContainer)                     UpgradeTags                                                 ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	SMember(FFortAISpawnGroupUpgradeUIData)            UpgradeUIData                                               ___ OFFSET(get<T>, {0x58, 104, 0, 0})
	CMember(TArray<FFortAIPawnUpgradeData>)            PawnUpgrades                                                ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<UFortGameplayModifierItemDefinition*>) ModifiersForAllPawns                                     ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<AFortAIPawn*>)                      PawnList                                                    ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<AFortAIPawn*>)                      LifespanExpiredList                                         ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIPawnUpgradeData
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAIPawnUpgradeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FCurveTableRowHandle)                      SpawnPointsMultiplierCurve                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      LifespanMultiplierCurve                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      ScoreMultiplierCurve                                        ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(UFortGameplayModifierItemDefinition*)      ModifierDefinition                                          ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<UFortGameplayModifierItemDefinition*>) AdditionalModifiers                                      ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortSpawnAIRequest
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortSpawnAIRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGuid)                                     SpawnGroupInstanceGuid                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   EnemyIndex                                                  ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FVector)                                   SpawnLocation                                               ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FRotator)                                  SpawnRotation                                               ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	CMember(AActor*)                                   SpawnPoint                                                  ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<UFortAbilitySet*>)                  AbilitySetsToGrantOnSpawn                                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bIgnoreCollisionWhenSpawning                                ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(float)                                     SpawnDelay                                                  ___ OFFSET(get<float>, {0x64, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortAISpawnerData
/// Size: 0x0078 (0x000000 - 0x000078)
class FFortAISpawnerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGuid)                                     SpawnGroupInstanceGuid                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FFortSpawnAIRequest)                       ReservedSpawnRequest                                        ___ OFFSET(get<T>, {0x10, 104, 0, 0})
};

/// Struct /Script/FortniteAI.FortEncounterAIDirectorFactor
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortEncounterAIDirectorFactor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     CurrentValue                                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AccumulatedPeriodValue                                      ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TotalPeriodTime                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAI.EncounterEnvironmentQueryInstance
/// Size: 0x0058 (0x000000 - 0x000058)
class FEncounterEnvironmentQueryInstance : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FEncounterEnvironmentQueryInfo)            EnvironmentQueryInfo                                        ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	DMember(int32_t)                                   QueryID                                                     ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(bool)                                      bIsWaitingForQueryResults                                   ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
	CMember(TEnumAsByte<EFortEncounterDirection>)      ChosenDirection                                             ___ OFFSET(get<T>, {0x2D, 1, 0, 0})
	CMember(TArray<FVector>)                           QueryLocations                                              ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    FoundRifts                                                  ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   NumTimesUsed                                                ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterWaveProgressEstimation
/// Size: 0x001C (0x000000 - 0x00001C)
class FFortAIEncounterWaveProgressEstimation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     SectionProgressEstimate                                     ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     SectionStartTime                                            ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LastWaveProgressUpdateTime                                  ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PeakAndFadeWavePercentage                                   ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxAdjustmentPerSecond                                      ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(TEnumAsByte<EFortAIWaveProgressSection>)   CurrentSection                                              ___ OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(int32_t)                                   NumberOfWaveSegments                                        ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortGoalActorEncounterDataManagerPair
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortGoalActorEncounterDataManagerPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(AActor*)                                   GoalActor                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AFortAIDirectorDataManager*)               EncounterDataManager                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterRift
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAIEncounterRift : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   QueryID                                                     ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FVector)                                   RiftLocation                                                ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(ABuildingRift*)                            RiftActor                                                   ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FFortRiftReservationHandle)                RiftReservationHandle                                       ___ OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterSpawnArea
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortAIEncounterSpawnArea : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FEncounterEnvironmentQueryInstance>) QueryInstances                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FFortAIEncounterRift>)              PendingRifts                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FFortAIEncounterRift>)              Rifts                                                       ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FVector>)                           UsedRiftLocations                                           ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UFortPathCostEstimator*>)           PathEstimators                                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bIsActive                                                   ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bUsingFallbackQuery                                         ___ OFFSET(get<bool>, {0x51, 1, 0, 0})
	CMember(EFortEncounterSpawnLocationManagementMode) SpawnLocationManagementMode                                 ___ OFFSET(get<T>, {0x52, 1, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterRiftManagerInitializationData
/// Size: 0x0130 (0x000000 - 0x000130)
class FFortAIEncounterRiftManagerInitializationData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(UFortAIEncounterInfo*)                     EncounterInfo                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FFortEncounterSettings)                    EncounterSettings                                           ___ OFFSET(get<T>, {0x8, 192, 0, 0})
	SMember(FEncounterEnvironmentQueryInfo)            CurrentEnvironmentQueryInfo                                 ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FEncounterEnvironmentQueryInfo)            FallbackEnvironmentQueryInfo                                ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	CMember(UClass*)                                   RiftClassTemplate                                           ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	DMember(int32_t)                                   NumRiftsToUse                                               ___ OFFSET(get<int32_t>, {0x120, 4, 0, 0})
	DMember(int32_t)                                   MinRiftsToUse                                               ___ OFFSET(get<int32_t>, {0x124, 4, 0, 0})
	DMember(float)                                     UpdateIntervalTimeSeconds                                   ___ OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIEncounterQueryDirectionTracker
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAIEncounterQueryDirectionTracker : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bHasTriedPreviousDirections                                 ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<TEnumAsByte>)                       PreviousQueryDirections                                     ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<TEnumAsByte>)                       ChosenDirections                                            ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<TEnumAsByte>)                       FailedDirections                                            ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<TEnumAsByte>)                       AvailableDirections                                         ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/FortniteAI.AIDiscouragedGoalTimer
/// Size: 0x0038 (0x000000 - 0x000038)
class FAIDiscouragedGoalTimer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FFortAIGoalInfo)                           DiscouragedGoalInfo                                         ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	DMember(double)                                    ExpirationTime                                              ___ OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(uint32_t)                                  NumberOfTimesMarkedForDiscouragement                        ___ OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIGoalInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortAIGoalInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bActorAlwaysPerceived                                       ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/FortniteAI.AIAssignmentInfo
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FAIAssignmentInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TWeakObjectPtr<UFortAIAssignment*>)        CurrentAssignment                                           ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FFortAIGoalInfo)                           CurrentGoal                                                 ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	DMember(float)                                     TimeCurrentGoalWasChosen                                    ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     TimeExitedLastAssignmentOfType                              ___ OFFSET(get<float>, {0x34, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortAIAssignment*>)        PreviousAssignment                                          ___ OFFSET(get<T>, {0x44, 8, 0, 0})
	SMember(FFortAIGoalInfo)                           PreviousGoal                                                ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	DMember(bool)                                      bWaitingForQueryResponse                                    ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(bool)                                      bSuppressGoalUpdates                                        ___ OFFSET(get<bool>, {0x79, 1, 0, 0})
	DMember(bool)                                      bReportEnemyGoalSelection                                   ___ OFFSET(get<bool>, {0x7A, 1, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIPawnMaterialDefinition
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortAIPawnMaterialDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UMaterialInterface*>)       Material                                                    ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(bool)                                      bRequireDynamicInstance                                     ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIPawnVariantDefinition
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortAIPawnVariantDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UClass*)                                   PawnClass                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FCurveTableRowHandle)                      VariantWeightCurve                                          ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(float)                                     CurrentWeight                                               ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredTagsQuery                                           ___ OFFSET(get<T>, {0x20, 72, 0, 0})
};

/// Struct /Script/FortniteAI.FortVariantSpawnPoints
/// Size: 0x0008 (0x000008 - 0x000010)
class FFortVariantSpawnPoints : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   BudgetPoints                                                ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAI.SpawnGroupEnemy
/// Size: 0x0010 (0x000000 - 0x000010)
class FSpawnGroupEnemy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UClass*)                                   EnemyVariantClass                                           ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bOverrideVariantSpawnPointValue                             ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(int32_t)                                   SpawnValue                                                  ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortSpawnGroupEncounterTypeData
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortSpawnGroupEncounterTypeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTagContainer)                     EncounterTypeTags                                           ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FCurveTableRowHandle)                      MaxGroupCategoryPopulationDensityCurve                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      RespawnDelayCurve                                           ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIPawnUpgrade
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortAIPawnUpgrade : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	CMember(TArray<FFortAIPawnUpgradeData>)            PawnUpgradeDataPerPlayerCount                               ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIAssignmentIdentifier
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAIAssignmentIdentifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EAssignmentType)                           AssignmentType                                              ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FGameplayTagContainer)                     AssignmentGameplayTags                                      ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TEnumAsByte<EFortTeam>)                    AssignmentTeam                                              ___ OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Struct /Script/FortniteAI.BuildingActorNavArea
/// Size: 0x0004 (0x000000 - 0x000004)
class FBuildingActorNavArea : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   AreaBits                                                    ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortNavLinkPattern
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortNavLinkPattern : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   PatternBits                                                 ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   WildcardBits                                                ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAI.AIHotSpotUseInfo
/// Size: 0x0008 (0x000010 - 0x000018)
class FAIHotSpotUseInfo : public FAIHotSpotSlotInfo
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/FortniteAI.DistanceToTargetComparison
/// Size: 0x0038 (0x000000 - 0x000038)
class FDistanceToTargetComparison : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bUseOverriddenValue                                         ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     OverriddenValue                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FGameplayTagContainer)                     DistanceDataTags                                            ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	DMember(bool)                                      bUseAddedOffset                                             ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     AddedOffset                                                 ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(TEnumAsByte<EArithmeticKeyOperation>)      Operator                                                    ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TEnumAsByte<ETargetDistanceComparisonType>) ComparisonType                                             ___ OFFSET(get<T>, {0x31, 1, 0, 0})
};

/// Struct /Script/FortniteAI.AIScalableFloat
/// Size: 0x0038 (0x000000 - 0x000038)
class FAIScalableFloat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FScalableFloat)                            ScalableFloat                                               ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	CMember(EAIScalableFloatScalingType)               ScalingType                                                 ___ OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotInventoryInfo
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortBotInventoryInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UFortItemDefinition*)                      ItemDefinition                                              ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UFortWorldItem*)                           FortItem                                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UFortWeaponItemDefinition*)                WeaponDefinitionCache                                       ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UFortWorldMultiItemDefinition*)            MultiItemDefinitionCache                                    ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(AFortAthenaAIBotController*)               BotController                                               ___ OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAIBotNameDataTableRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FFortAthenaAIBotNameDataTableRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   UniqueID                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAIBotNameRegionData
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAthenaAIBotNameRegionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   RegionId                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               NameDataTable                                               ___ OFFSET(get<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/FortniteAI.FortInstensityCurveSequenceProgression
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortInstensityCurveSequenceProgression : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UFortIntensityCurveSequence*)              CurveSequence                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FCurveTableRowHandle)                      SelectionWeight                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FortniteAI.MetaNavCachedEntry
/// Size: 0x01E8 (0x000000 - 0x0001E8)
class FMetaNavCachedEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Struct /Script/FortniteAI.ThreatGridIndex
/// Size: 0x0008 (0x000000 - 0x000008)
class FThreatGridIndex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   X                                                           ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Y                                                           ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAI.ThreatLocationInfo
/// Size: 0x007C (0x00000C - 0x000088)
class FThreatLocationInfo : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector)                                   CloudLocation                                               ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FBox)                                      ThreatVolume                                                ___ OFFSET(get<T>, {0x28, 56, 0, 0})
	CMember(AFortThreatVisualsManager*)                ThreatVisualsManager                                        ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TWeakObjectPtr<AThreatCloud*>)             CloudActor                                                  ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      bThreatActivated                                            ___ OFFSET(get<bool>, {0x71, 1, 0, 0})
	CMember(EFortThreatDeactivationType)               DeactivationType                                            ___ OFFSET(get<T>, {0x72, 1, 0, 0})
};

/// Struct /Script/FortniteAI.ThreatLocationArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FThreatLocationArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FThreatLocationInfo>)               Locations                                                   ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/FortniteAI.StormWind
/// Size: 0x005C (0x00000C - 0x000068)
class FStormWind : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(AFortThreatVisualsManager*)                ThreatVisualsManager                                        ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<UFortAIEncounterInfo*>)             Encounters                                                  ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FFortWindImpulseHandle)                    WindHandle                                                  ___ OFFSET(get<T>, {0x60, 4, 0, 0})
};

/// Struct /Script/FortniteAI.StormWindArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FStormWindArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FStormWind>)                        StormWinds                                                  ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/FortniteAI.GoalUpdateSuppressionHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FGoalUpdateSuppressionHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/FortniteAI.FortAIGoal
/// Size: 0x0010 (0x000028 - 0x000038)
class FFortAIGoal : public FFortAIGoalInfo
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/FortniteAI.GoalSelectionCriteria
/// Size: 0x0020 (0x000000 - 0x000020)
class FGoalSelectionCriteria : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UEnvQuery*>)                GoalSelectionQuery                                          ___ OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/FortniteAI.EncounterGoalSelectionTableEntry
/// Size: 0x0040 (0x000000 - 0x000040)
class FEncounterGoalSelectionTableEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTagContainer)                     RequiredGameplayTags                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGoalSelectionCriteria)                    GoalSelectionCriteria                                       ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/FortniteAI.PawnGoalSelectionCriteria
/// Size: 0x0050 (0x000000 - 0x000050)
class FPawnGoalSelectionCriteria : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagContainer)                     IncludeEnemiesWithTags                                      ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ExcludeEnemiesWithTags                                      ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TArray<FGoalSelectionCriteria>)            GoalSelectionCriteria                                       ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/FortniteAI.PawnGoalSelectionTableEntry
/// Size: 0x0070 (0x000000 - 0x000070)
class FPawnGoalSelectionTableEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagContainer)                     RequiredGameplayTags                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FPawnGoalSelectionCriteria)                PawnGoalSelectionCriteria                                   ___ OFFSET(get<T>, {0x20, 80, 0, 0})
};

/// Struct /Script/FortniteAI.AIHotSpotSlotConfig
/// Size: 0x0038 (0x000000 - 0x000038)
class FAIHotSpotSlotConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Offset                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Direction                                                   ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	CMember(EFortHotSpotSlot)                          SlotType                                                    ___ OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Struct /Script/FortniteAI.BuildingActorHotSpotDirection
/// Size: 0x0028 (0x000000 - 0x000028)
class FBuildingActorHotSpotDirection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UAIHotSpotConfig*)                         HotSpotConfig                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Offset                                                      ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bMirrorX                                                    ___ OFFSET(get<bool>, {0x20, 1, 1, 0})
	DMember(bool)                                      bMirrorY                                                    ___ OFFSET(get<bool>, {0x20, 1, 1, 1})
	CMember(EFortHotSpotDirection)                     Direction                                                   ___ OFFSET(get<T>, {0x24, 1, 0, 0})
	CMember(EHotspotTypeConfigMode)                    TypeConfigUsage                                             ___ OFFSET(get<T>, {0x25, 1, 0, 0})
};

/// Struct /Script/FortniteAI.AutoAcquireSlot
/// Size: 0x0018 (0x000010 - 0x000028)
class FAutoAcquireSlot : public FAIHotSpotSlotInfo
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/FortniteAI.NavAgentData
/// Size: 0x0028 (0x000000 - 0x000028)
class FNavAgentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     AgentName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FCurveTableRowHandle)                      BuildingActorHealthToNavAreaStrengthHandle                  ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      PlayerBuiltBuildingActorHealthToNavAreaStrengthHandle       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/FortniteAI.UpdatedNavMeshTiles
/// Size: 0x0018 (0x000000 - 0x000018)
class FUpdatedNavMeshTiles : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AAthenaNavMesh*)                           NavMesh                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAI.NavMeshDetectedInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FNavMeshDetectedInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(AAthenaNavMesh*)                           NavMesh                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAI.BoxNavInvoker
/// Size: 0x0020 (0x000000 - 0x000020)
class FBoxNavInvoker : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AAthenaNavInvokerBox*)                     Invoker                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAI.NavDataSetVariantSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FNavDataSetVariantSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UWorld*>)                   Level                                                       ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(uint32_t)                                  OceanFloodLevel                                             ___ OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/FortniteAI.OverriddenSupportedAgentsByReleaseVersion
/// Size: 0x000C (0x000000 - 0x00000C)
class FOverriddenSupportedAgentsByReleaseVersion : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FFortReleaseVersion)                       StartVersion                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FFortReleaseVersion)                       EndVersion                                                  ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FNavAgentSelector)                         OverriddenSupportedAgentsMask                               ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAI.PathRendererDetails
/// Size: 0x0018 (0x000000 - 0x000018)
class FPathRendererDetails : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FVector>)                           PathPoints                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ENavPathRendererStatus)                    PathStatus                                                  ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/FortniteAI.PathRendererInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FPathRendererInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TScriptInterface<Class>)                   PathRendererInterface                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FortniteAI.ClimbLinkData
/// Size: 0x0030 (0x000000 - 0x000030)
class FClimbLinkData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(uint32_t)                                  UniqueLinkId                                                ___ OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/FortniteAI.WeightedAIPerk
/// Size: 0x0030 (0x000000 - 0x000030)
class FWeightedAIPerk : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UClass*)                                   PerkClass                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            RandomWeight                                                ___ OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/FortniteAI.PerkAvailabilityContainer
/// Size: 0x0018 (0x000000 - 0x000018)
class FPerkAvailabilityContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FWeightedAIPerk>)                   AvailablePerks                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   DesiredPerkCount                                            ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIRuntimePerkInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortAIRuntimePerkInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/FortniteAI.FortMoveConfig
/// Size: 0x0038 (0x000000 - 0x000038)
class FFortMoveConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(AActor*)                                   FocusTarget                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UClass*)                                   PushPawnClassOnBump                                         ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAIBotBuildingQueue
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAthenaAIBotBuildingQueue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/FortniteAI.FortAthenaAIFormationSlotRuntime
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortAthenaAIFormationSlotRuntime : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   LocalLocation                                               ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(AFortPawn*)                                UserPawn                                                    ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortPingInfo
/// Size: 0x0188 (0x000000 - 0x000188)
class FFortPingInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FFortWorldMarkerData)                      MarkerData                                                  ___ OFFSET(get<T>, {0x8, 360, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedAimingCircleSettings
/// Size: 0x0168 (0x000000 - 0x000168)
class FDigestedAimingCircleSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	DMember(bool)                                      bUseAimingCircle                                            ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     CircleCenterOffsetZ                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FScalableFloat)                            MinCircleOpeningAngleVerticalCurve                          ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxCircleOpeningAngleVerticalCurve                          ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            MinCircleOpeningAngleHorizontalCurve                        ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            MaxCircleOpeningAngleHorizontalCurve                        ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	DMember(float)                                     MinCursorRotationSpeed                                      ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     MaxCursorRotationSpeed                                      ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     MinCursorUpdateInterval                                     ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     MaxCursorUpdateInterval                                     ___ OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     MinCursorTrackingFrequency                                  ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     MaxCursorTrackingFrequency                                  ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FScalableFloat)                            CircleShrinkCurve                                           ___ OFFSET(get<T>, {0xC0, 40, 0, 0})
	DMember(float)                                     MinDistanceForTimeBetweenHits                               ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     MaxDistanceForTimeBetweenHits                               ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     MinTimeBetweenHitsAtMinRange                                ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     MaxTimeBetweenHitsAtMinRange                                ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     MinTimeBetweenHitsAtMaxRange                                ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     MaxTimeBetweenHitsAtMaxRange                                ___ OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(bool)                                      bForceMissEnabled                                           ___ OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(float)                                     ExtraClampingDistance                                       ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(bool)                                      bPreventHeadshots                                           ___ OFFSET(get<bool>, {0x108, 1, 0, 0})
	SMember(FScalableFloat)                            WeaponSpreadContributionToClampCurve                        ___ OFFSET(get<T>, {0x110, 40, 0, 0})
	DMember(float)                                     KillingBlowGracePeriodAtMinRange                            ___ OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     KillingBlowGracePeriodAtMaxRange                            ___ OFFSET(get<float>, {0x13C, 4, 0, 0})
	SMember(FScalableFloat)                            ExtraHitOddsCurve                                           ___ OFFSET(get<T>, {0x140, 40, 0, 0})
};

/// Struct /Script/FortniteAI.AimingCircleSettings
/// Size: 0x0410 (0x000000 - 0x000410)
class FAimingCircleSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FScalableFloat)                            UseAimingCircle                                             ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            CircleCenterOffsetZ                                         ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            MinCircleOpeningAngleVerticalCurve                          ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            MaxCircleOpeningAngleVerticalCurve                          ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            MinCircleOpeningAngleHorizontalCurve                        ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxCircleOpeningAngleHorizontalCurve                        ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            MinCursorRotationSpeed                                      ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxCursorRotationSpeed                                      ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            MinCursorUpdateInterval                                     ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            MaxCursorUpdateInterval                                     ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            MinCursorTrackingFrequency                                  ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            MaxCursorTrackingFrequency                                  ___ OFFSET(get<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            CircleShrinkCurve                                           ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceForTimeBetweenHits                               ___ OFFSET(get<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceForTimeBetweenHits                               ___ OFFSET(get<T>, {0x230, 40, 0, 0})
	SMember(FScalableFloat)                            MinTimeBetweenHitsAtMinRange                                ___ OFFSET(get<T>, {0x258, 40, 0, 0})
	SMember(FScalableFloat)                            MaxTimeBetweenHitsAtMinRange                                ___ OFFSET(get<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            MinTimeBetweenHitsAtMaxRange                                ___ OFFSET(get<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxTimeBetweenHitsAtMaxRange                                ___ OFFSET(get<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            ForceMissEnabled                                            ___ OFFSET(get<T>, {0x2F8, 40, 0, 0})
	SMember(FScalableFloat)                            ExtraClampingDistance                                       ___ OFFSET(get<T>, {0x320, 40, 0, 0})
	SMember(FScalableFloat)                            PreventHeadshots                                            ___ OFFSET(get<T>, {0x348, 40, 0, 0})
	SMember(FScalableFloat)                            WeaponSpreadContributionToClampCurve                        ___ OFFSET(get<T>, {0x370, 40, 0, 0})
	SMember(FScalableFloat)                            KillingBlowGracePeriodAtMinRange                            ___ OFFSET(get<T>, {0x398, 40, 0, 0})
	SMember(FScalableFloat)                            KillingBlowGracePeriodAtMaxRange                            ___ OFFSET(get<T>, {0x3C0, 40, 0, 0})
	SMember(FScalableFloat)                            ExtraHitOddsCurve                                           ___ OFFSET(get<T>, {0x3E8, 40, 0, 0})
};

/// Struct /Script/FortniteAI.TargetBasedAccuracy
/// Size: 0x0118 (0x000000 - 0x000118)
class FTargetBasedAccuracy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FScalableFloat)                            AimTrackingOffsetErrorMultiplier                            ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            AimTrackingHeightOffsetErrorMultiplier                      ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            AimTrackingDistanceErrorMultiplier                          ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            AimTrackingReactionTimeMultiplier                           ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            AimTrackingInterpTimeMultiplier                             ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            AimTrackingInAirVelocityThresholdMultiplier                 ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            AimTrackinginAirHeightDataThresholdMultiplier               ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedTargetBasedAccuracy
/// Size: 0x001C (0x000000 - 0x00001C)
class FDigestedTargetBasedAccuracy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     AimTrackingOffsetErrorMultiplier                            ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AimTrackingHeightOffsetErrorMultiplier                      ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AimTrackingDistanceErrorMultiplier                          ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AimTrackingReactionTimeMultiplier                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AimTrackingInterpTimeMultiplier                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AimTrackingInAirVelocityThresholdMultiplier                 ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AimTrackinginAirHeightDataThresholdMultiplier               ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/FortniteAI.TargetBasedAccuracyCategory
/// Size: 0x0138 (0x000000 - 0x000138)
class FTargetBasedAccuracyCategory : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FTargetBasedAccuracy)                      TargetBasedAccuracy                                         ___ OFFSET(get<T>, {0x20, 280, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedTargetBasedAccuracyCategory
/// Size: 0x0040 (0x000000 - 0x000040)
class FDigestedTargetBasedAccuracyCategory : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FDigestedTargetBasedAccuracy)              TargetBasedAccuracy                                         ___ OFFSET(get<T>, {0x20, 28, 0, 0})
};

/// Struct /Script/FortniteAI.WeaponAccuracy
/// Size: 0x0760 (0x000000 - 0x000760)
class FWeaponAccuracy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1888;

public:
	SMember(FScalableFloat)                            MaxTrackingOffsetError                                      ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingMaxTrackingOffsetError                             ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            MaxTrackingDistanceFarError                                 ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingMaxTrackingDistanceFarError                        ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            MaxTrackingDistanceNearError                                ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingMaxTrackingDistanceNearError                       ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            TrackingDistanceNearErrorProbability                        ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingActivationProbability                              ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            FiringRestrictedToTargetingActive                           ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumDistanceForAiming                                    ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumDistanceForPawnAiming                                ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            IdealAttackRange                                            ___ OFFSET(get<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingIdealAttackRange                                   ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAttackRangeFactor                                        ___ OFFSET(get<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            ShouldAimAtTargetsFeet                                      ___ OFFSET(get<T>, {0x230, 40, 0, 0})
	SMember(FScalableFloat)                            ShouldUseProjectileArcForAiming                             ___ OFFSET(get<T>, {0x258, 40, 0, 0})
	SMember(FScalableFloat)                            KeepAimingOnSameSideWhileFiring                             ___ OFFSET(get<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            MaxTrackingHeightOffsetError                                ___ OFFSET(get<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            MinRotationInterpSpeed                                      ___ OFFSET(get<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxRotationInterpSpeed                                      ___ OFFSET(get<T>, {0x2F8, 40, 0, 0})
	SMember(FScalableFloat)                            ConsiderProjectileTravelTime                                ___ OFFSET(get<T>, {0x320, 40, 0, 0})
	DMember(bool)                                      bOverrideAimingCircleSettings                               ___ OFFSET(get<bool>, {0x348, 1, 0, 0})
	SMember(FAimingCircleSettings)                     AimingCircleSettingsOverride                                ___ OFFSET(get<T>, {0x350, 1040, 0, 0})
};

/// Struct /Script/FortniteAI.WeaponAccuracyCategorySpecialization
/// Size: 0x0780 (0x000000 - 0x000780)
class FWeaponAccuracyCategorySpecialization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FWeaponAccuracy)                           WeaponAccuracy                                              ___ OFFSET(get<T>, {0x20, 1888, 0, 0})
};

/// Struct /Script/FortniteAI.WeaponAccuracyCategory
/// Size: 0x0790 (0x000000 - 0x000790)
class FWeaponAccuracyCategory : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FWeaponAccuracy)                           WeaponAccuracy                                              ___ OFFSET(get<T>, {0x20, 1888, 0, 0})
	CMember(TArray<FWeaponAccuracyCategorySpecialization>) Specializations                                         ___ OFFSET(get<T>, {0x780, 16, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedWeaponAccuracy
/// Size: 0x0328 (0x000000 - 0x000328)
class FDigestedWeaponAccuracy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FScalableFloat)                            TrackingOffsetError                                         ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingTrackingOffsetError                                ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            TrackingDistanceFarError                                    ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingTrackingDistanceFarError                           ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            TrackingDistanceNearError                                   ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingTrackingDistanceNearError                          ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            TrackingDistanceNearErrorProbability                        ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingActivationProbability                              ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            FiringRestrictedToTargetingActive                           ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	DMember(float)                                     MinimumDistanceForAiming                                    ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     MinimumDistanceForPawnAiming                                ___ OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     IdealAttackRange                                            ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     TargetingIdealAttackRange                                   ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     MaxAttackRange                                              ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     ChanceToAimAtTargetsFeet                                    ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	SMember(FScalableFloat)                            ShouldUseProjectileArcForAiming                             ___ OFFSET(get<T>, {0x180, 40, 0, 0})
	DMember(bool)                                      bKeepAimingOnSameSideWhileFiring                            ___ OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(float)                                     MaxTrackingHeightOffsetError                                ___ OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(float)                                     MinRotationInterpSpeed                                      ___ OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     MaxRotationInterpSpeed                                      ___ OFFSET(get<float>, {0x1B4, 4, 0, 0})
	DMember(bool)                                      bOverrideAimingCircleSettings                               ___ OFFSET(get<bool>, {0x1B8, 1, 0, 0})
	DMember(bool)                                      bConsiderProjectileTravelTime                               ___ OFFSET(get<bool>, {0x1B9, 1, 0, 0})
	SMember(FDigestedAimingCircleSettings)             AimingCircleSettingsOverride                                ___ OFFSET(get<T>, {0x1C0, 360, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedWeaponAccuracyCategorySpecialization
/// Size: 0x0348 (0x000000 - 0x000348)
class FDigestedWeaponAccuracyCategorySpecialization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FDigestedWeaponAccuracy)                   WeaponAccuracy                                              ___ OFFSET(get<T>, {0x20, 808, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedWeaponAccuracyCategory
/// Size: 0x0358 (0x000000 - 0x000358)
class FDigestedWeaponAccuracyCategory : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FDigestedWeaponAccuracy)                   WeaponAccuracy                                              ___ OFFSET(get<T>, {0x20, 808, 0, 0})
	CMember(TArray<FDigestedWeaponAccuracyCategorySpecialization>) Specializations                                 ___ OFFSET(get<T>, {0x348, 16, 0, 0})
};

/// Struct /Script/FortniteAI.TrackingOffsetModifiers
/// Size: 0x0168 (0x000000 - 0x000168)
class FTrackingOffsetModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FScalableFloat)                            CombatStartDuration                                         ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetLowHealthThreshold                                    ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            Curves                                                      ___ OFFSET(get<T>, {0x50, 120, 0, 0})
	SMember(FScalableFloat)                            DistanceCurves                                              ___ OFFSET(get<T>, {0xC8, 120, 0, 0})
	SMember(FScalableFloat)                            InAirHeightCurve                                            ___ OFFSET(get<T>, {0x140, 40, 0, 0})
};

/// Struct /Script/FortniteAI.TrackingOffsetModifierInfo
/// Size: 0x01B8 (0x000000 - 0x0001B8)
class FTrackingOffsetModifierInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	SMember(FScalableFloat)                            MinSkill                                                    ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSkill                                                    ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FTrackingOffsetModifiers)                  Modifiers                                                   ___ OFFSET(get<T>, {0x50, 360, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedTrackingOffsetModifierCurves
/// Size: 0x0028 (0x000000 - 0x000028)
class FDigestedTrackingOffsetModifierCurves : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Values                                                      ___ OFFSET(get<int32_t>, {0x0, 40, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedTrackingOffsetModifiers
/// Size: 0x0120 (0x000000 - 0x000120)
class FDigestedTrackingOffsetModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(float)                                     CombatStartDuration                                         ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TargetLowHealthThreshold                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FDigestedTrackingOffsetModifierCurves)     Curves                                                      ___ OFFSET(get<T>, {0x8, 120, 0, 0})
	SMember(FDigestedTrackingOffsetModifierCurves)     DistanceCurves                                              ___ OFFSET(get<T>, {0x80, 120, 0, 0})
	SMember(FDigestedTrackingOffsetModifierCurves)     InAirHeightCurve                                            ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
};

/// Struct /Script/FortniteAI.LookAtDigestedSetting
/// Size: 0x0010 (0x000000 - 0x000010)
class FLookAtDigestedSetting : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     LookAtDuration                                              ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LookAtDurationDeviation                                     ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LookAtDelay                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LookAtDelayDeviation                                        ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FocusSetting
/// Size: 0x0140 (0x000000 - 0x000140)
class FFocusSetting : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FGameplayTagQuery)                         WeaponTagQuery                                              ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bRequireAmmoToMatch                                         ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FScalableFloat)                            IgnoreThreatTimeWhenNotAttacking                            ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            IgnoreThreatDeviationWhenNotAttacking                       ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            IgnoreThreatDuration                                        ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            IgnoreThreatDurationDeviation                               ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            IgnoreThreatDistanceWhenFleeing                             ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            IgnoreThreatDirectionAngleWhenFleeing                       ___ OFFSET(get<T>, {0x118, 40, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedFocusSetting
/// Size: 0x0068 (0x000000 - 0x000068)
class FDigestedFocusSetting : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FGameplayTagQuery)                         WeaponTagQuery                                              ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bRequireAmmoToMatch                                         ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     IgnoreThreatTimeWhenNotAttacking                            ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     IgnoreThreatDeviationWhenNotAttacking                       ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     IgnoreThreatDuration                                        ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     IgnoreThreatDurationDeviation                               ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     IgnoreThreatDistanceWhenFleeing                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     IgnoreThreatDirectionCosAngleWhenFleeing                    ___ OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Struct /Script/FortniteAI.LookAtSetting
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FLookAtSetting : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FScalableFloat)                            LookAtDuration                                              ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            LookAtDurationDeviation                                     ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            LookAtDelay                                                 ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            LookAtDelayDeviation                                        ___ OFFSET(get<T>, {0x78, 40, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAIBotBuildDescriptor
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaAIBotBuildDescriptor : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FIntVector)                                Location                                                    ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	CMember(TEnumAsByte<EOrientedConstructionBuildingType>) BuildingType                                           ___ OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/FortniteAI.AthenaFortAIBotWeightedBuildingList
/// Size: 0x0038 (0x000000 - 0x000038)
class FAthenaFortAIBotWeightedBuildingList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FScalableFloat)                            Weight                                                      ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	CMember(TArray<FFortAthenaAIBotBuildDescriptor>)   BuildDescriptors                                            ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/FortniteAI.AthenaFortAIBotDigestedWeightedBuildingList
/// Size: 0x0018 (0x000000 - 0x000018)
class FAthenaFortAIBotDigestedWeightedBuildingList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FFortAthenaAIBotBuildDescriptor>)   BuildDescriptors                                            ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FortniteAI.MMRSpawningBracketNPCDataTableRow
/// Size: 0x0008 (0x000010 - 0x000018)
class FMMRSpawningBracketNPCDataTableRow : public FMMRSpawningBracketBaseDataTableRow
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Skill                                                       ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAIBotRunTimeCustomizationData
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortAthenaAIBotRunTimeCustomizationData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              PredefinedCosmeticSetTag                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     CullDistanceSquared                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bCheckForOverlaps                                           ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bHasCustomSquadId                                           ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(char)                                      CustomSquadId                                               ___ OFFSET(get<char>, {0xA, 1, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedEvasiveManeuverSkillSettings
/// Size: 0x0058 (0x000000 - 0x000058)
class FDigestedEvasiveManeuverSkillSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     JumpDelay                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     JumpRandomDeviationDelay                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CrouchDelay                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CrouchRandomDeviationDelay                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DodgeDelay                                                  ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DodgeRandomDeviationDelay                                   ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CrouchOverlayWeight                                         ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     JumpOverlayWeight                                           ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     NoOverlayWeight                                             ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     DodgeWeight                                                 ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     DodgeJumpWeight                                             ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     DodgeDistanceMax                                            ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     DodgeDistanceMin                                            ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     CrouchTimeMax                                               ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     CrouchTimeMin                                               ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FString)                                   DebugName                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/FortniteAI.EvasiveManeuverSkillSettings
/// Size: 0x0258 (0x000000 - 0x000258)
class FEvasiveManeuverSkillSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FScalableFloat)                            CrouchOverlayWeight                                         ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            JumpOverlayWeight                                           ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            NoOverlayWeight                                             ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeWeight                                                 ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeJumpWeight                                             ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            JumpDelay                                                   ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            JumpRandomDeviationDelay                                    ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            CrouchDelay                                                 ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            CrouchRandomDeviationDelay                                  ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeDelay                                                  ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeRandomDeviationDelay                                   ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeDistanceMax                                            ___ OFFSET(get<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeDistanceMin                                            ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            CrouchTimeMax                                               ___ OFFSET(get<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            CrouchTimeMin                                               ___ OFFSET(get<T>, {0x230, 40, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedEvasiveManeuverSkillSettingsSpecialization
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FDigestedEvasiveManeuverSkillSettingsSpecialization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     OddsToBeUsed                                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxDuration                                                 ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxDurationRandomDeviation                                  ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Cooldown                                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     CooldownRandomDeviation                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DistanceMinSquared                                          ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     DistanceMaxSquared                                          ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FGameplayTagQuery)                         WeaponTagQuery                                              ___ OFFSET(get<T>, {0x20, 72, 0, 0})
	SMember(FDigestedEvasiveManeuverSkillSettings)     EvasiveManeuverSkillSettings                                ___ OFFSET(get<T>, {0x68, 88, 0, 0})
};

/// Struct /Script/FortniteAI.EvasiveManeuverSkillSettingsSpecialization
/// Size: 0x03C8 (0x000000 - 0x0003C8)
class FEvasiveManeuverSkillSettingsSpecialization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FScalableFloat)                            OddsToBeUsed                                                ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDuration                                                 ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDurationRandomDeviation                                  ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            Cooldown                                                    ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            CooldownRandomDeviation                                     ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FString)                                   DebugName                                                   ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FScalableFloat)                            DistanceMin                                                 ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceMax                                                 ___ OFFSET(get<T>, {0x100, 40, 0, 0})
	SMember(FGameplayTagQuery)                         WeaponTagQuery                                              ___ OFFSET(get<T>, {0x128, 72, 0, 0})
	SMember(FEvasiveManeuverSkillSettings)             EvasiveManeuverSkillSettings                                ___ OFFSET(get<T>, {0x170, 600, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotHealingItems
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortBotHealingItems : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FScalableFloat)                            UseItemResourceThreshold                                    ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FGameplayTagContainer)                     ItemTags                                                    ___ OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotDigestedHealingItems
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortBotDigestedHealingItems : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     UseItemResourceThreshold                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     ItemTags                                                    ___ OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotHealingItemsList
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortBotHealingItemsList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFortBotHealingItems>)              HealthItems                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotDigestedHealingItemsList
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortBotDigestedHealingItemsList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FFortBotDigestedHealingItems>)      HealthItems                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotHealingItemsSpec
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortBotHealingItemsSpec : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FFortBotHealingItemsList)                  HealthItemsList                                             ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotDigestedHealingItemsSpec
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortBotDigestedHealingItemsSpec : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FFortBotDigestedHealingItemsList)          HealthItemsList                                             ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/FortniteAI.BotEquipWeaponInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FBotEquipWeaponInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FScalableFloat)                            DistanceEffectivenessWithThreat                             ___ OFFSET(get<T>, {0x48, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceEffectivenessNoThreat                               ___ OFFSET(get<T>, {0x70, 40, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedBotEquipWeaponInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FDigestedBotEquipWeaponInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FScalableFloat)                            DistanceEffectivenessWithThreat                             ___ OFFSET(get<T>, {0x48, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceEffectivenessNoThreat                               ___ OFFSET(get<T>, {0x70, 40, 0, 0})
};

/// Struct /Script/FortniteAI.WeaponAmmoCheat
/// Size: 0x0058 (0x000000 - 0x000058)
class FWeaponAmmoCheat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              WeaponTag                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FScalableFloat)                            HasInfiniteAmmo                                             ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FScalableFloat)                            CheckLoadedAmmoForInfiniteAmmo                              ___ OFFSET(get<T>, {0x30, 40, 0, 0})
};

/// Struct /Script/FortniteAI.BotKnockbackSettings
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FBotKnockbackSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FScalableFloat)                            ShouldAllowCharacterToBeLaunched                            ___ OFFSET(get<T>, {0x48, 40, 0, 0})
	SMember(FScalableFloat)                            ShouldStopActiveMovement                                    ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FScalableFloat)                            IgnoreMoveInputDuration                                     ___ OFFSET(get<T>, {0x98, 40, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedBotKnockbackSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FDigestedBotKnockbackSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bShouldAllowCharacterToBeLaunched                           ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bShouldStopActiveMovement                                   ___ OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(float)                                     IgnoreMoveInputDuration                                     ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Struct /Script/FortniteAI.AlertLevelInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FAlertLevelInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UAISenseConfig*>)                   SensesConfig                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedPerceptionStateSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FDigestedPerceptionStateSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     ForgetTime                                                  ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ForgetTimeDeviation                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ForgetDistance                                              ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ForgetDistanceDeviation                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/FortniteAI.SoundPerceptionDigestedSetting
/// Size: 0x000C (0x000000 - 0x00000C)
class FSoundPerceptionDigestedSetting : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Loudness                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     IgnoreTime                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     OverrideReactionDistanceSq                                  ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAI.SightReactionSpecialization
/// Size: 0x0070 (0x000000 - 0x000070)
class FSightReactionSpecialization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FScalableFloat)                            SightMinAdditionTime                                        ___ OFFSET(get<T>, {0x20, 40, 0, 0})
	SMember(FScalableFloat)                            SightMaxAdditionTime                                        ___ OFFSET(get<T>, {0x48, 40, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedSightReactionSpecialization
/// Size: 0x0070 (0x000000 - 0x000070)
class FDigestedSightReactionSpecialization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FScalableFloat)                            SightMinAdditionTime                                        ___ OFFSET(get<T>, {0x20, 40, 0, 0})
	SMember(FScalableFloat)                            SightMaxAdditionTime                                        ___ OFFSET(get<T>, {0x48, 40, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAIBotDigestedTargetHeuristicSettings
/// Size: 0x0190 (0x000000 - 0x000190)
class FFortAthenaAIBotDigestedTargetHeuristicSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FDigestedPerceptionStateSettings)          PerceptionStateSettings                                     ___ OFFSET(get<T>, {0x0, 336, 0, 0})
	DMember(float)                                     ThreatDamageWeight                                          ___ OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     ThreatDamageWeightMultiplier                                ___ OFFSET(get<float>, {0x154, 4, 0, 0})
	SMember(FScalableFloat)                            ThreatTimeSinceLastDamageMultiplier                         ___ OFFSET(get<T>, {0x158, 40, 0, 0})
	DMember(float)                                     ThreatLoFWeight                                             ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     DBNOWeightModifier                                          ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     GameParticipantWeightModifier                               ___ OFFSET(get<float>, {0x188, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization
/// Size: 0x01D8 (0x000000 - 0x0001D8)
class FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FGameplayTagQuery)                         TargetTagQuery                                              ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FFortAthenaAIBotDigestedTargetHeuristicSettings) Settings                                              ___ OFFSET(get<T>, {0x48, 400, 0, 0})
};

/// Struct /Script/FortniteAI.PerceptionStateSettings
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FPerceptionStateSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FScalableFloat)                            ForgetTime                                                  ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            ForgetTimeDeviation                                         ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            ForgetDistance                                              ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            ForgetDistanceDeviation                                     ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            ThreatDistanceWeight                                        ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
};

/// Struct /Script/FortniteAI.SoundPerceptionSetting
/// Size: 0x0078 (0x000000 - 0x000078)
class FSoundPerceptionSetting : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FScalableFloat)                            Loudness                                                    ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            IgnoreTime                                                  ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            OverrideReactionDistance                                    ___ OFFSET(get<T>, {0x50, 40, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAIBotTargetHeuristicSettings
/// Size: 0x0348 (0x000000 - 0x000348)
class FFortAthenaAIBotTargetHeuristicSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FPerceptionStateSettings)                  ThreatSeeingPerceptionSettings                              ___ OFFSET(get<T>, {0x0, 200, 0, 0})
	SMember(FPerceptionStateSettings)                  ThreatLKPPerceptionSettings                                 ___ OFFSET(get<T>, {0xC8, 200, 0, 0})
	SMember(FPerceptionStateSettings)                  ThreatAlertedPerceptionSettings                             ___ OFFSET(get<T>, {0x190, 200, 0, 0})
	SMember(FScalableFloat)                            ThreatDamageWeight                                          ___ OFFSET(get<T>, {0x258, 40, 0, 0})
	SMember(FScalableFloat)                            ThreatDamageWeightMultiplier                                ___ OFFSET(get<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            ThreatTimeSinceLastDamageMultiplier                         ___ OFFSET(get<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            ThreatLoFWeight                                             ___ OFFSET(get<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            DBNOWeightModifier                                          ___ OFFSET(get<T>, {0x2F8, 40, 0, 0})
	SMember(FScalableFloat)                            GameParticipantWeightModifier                               ___ OFFSET(get<T>, {0x320, 40, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAIBotTargetHeuristicSettingsSpecialization
/// Size: 0x0390 (0x000000 - 0x000390)
class FFortAthenaAIBotTargetHeuristicSettingsSpecialization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FGameplayTagQuery)                         TargetTagQuery                                              ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FFortAthenaAIBotTargetHeuristicSettings)   Settings                                                    ___ OFFSET(get<T>, {0x48, 840, 0, 0})
};

/// Struct /Script/FortniteAI.PlaystyleSwitchToAggressiveDataDigested
/// Size: 0x0058 (0x000000 - 0x000058)
class FPlaystyleSwitchToAggressiveDataDigested : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         TagQueryToMatch                                             ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	DMember(float)                                     TurnToAggressiveMinimumDistanceSquared                      ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     TurnToAggressiveTime                                        ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     DamageThresholdToSwitchToAggressive                         ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     SwitchBackToDefensivePreventionTime                         ___ OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/FortniteAI.PlaystyleSwitchToAggressiveData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FPlaystyleSwitchToAggressiveData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FGameplayTagQuery)                         TagQueryToMatch                                             ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FScalableFloat)                            TurnToAggressiveMinimumDistance                             ___ OFFSET(get<T>, {0x48, 40, 0, 0})
	SMember(FScalableFloat)                            TurnToAggressiveTime                                        ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FScalableFloat)                            SwitchBackToDefensivePreventionTime                         ___ OFFSET(get<T>, {0x98, 40, 0, 0})
	SMember(FScalableFloat)                            DamageThresholdToSwitchToAggressive                         ___ OFFSET(get<T>, {0xC0, 40, 0, 0})
};

/// Struct /Script/FortniteAI.FiringPattern
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FFiringPattern : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FScalableFloat)                            MinRange                                                    ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxRange                                                    ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            HoldTimeDeviation                                           ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            PreventFireTimeDeviation                                    ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            FiringPatternHysteresis                                     ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	CMember(UCurveFloat*)                              FiringPatternCurve                                          ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Struct /Script/FortniteAI.RangedWeaponSkill
/// Size: 0x0160 (0x000000 - 0x000160)
class FRangedWeaponSkill : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FScalableFloat)                            DelayBetweenShots                                           ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            DelayDeviationTimeBetweenShots                              ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            TriggerHoldDuration                                         ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            TriggerHoldDeviationTime                                    ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            DelayBeforeFirstShot                                        ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            ShotDelayAfterTargeting                                     ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            ShotDelayAfterIncomingLethality                             ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	CMember(TArray<FFiringPattern>)                    TargetInAirFiringPatterns                                   ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TArray<FFiringPattern>)                    FiringPatterns                                              ___ OFFSET(get<T>, {0x128, 16, 0, 0})
	SMember(FScalableFloat)                            InterruptReloadToShootOdds                                  ___ OFFSET(get<T>, {0x138, 40, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedFiringPattern
/// Size: 0x0020 (0x000000 - 0x000020)
class FDigestedFiringPattern : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     MinRange                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     HoldTimeDeviation                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PreventFireTimeDeviation                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     FiringPatternHysteresis                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(UCurveFloat*)                              FiringPatternCurve                                          ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/FortniteAI.RangedWeaponSkillCategorySpecialization
/// Size: 0x0180 (0x000000 - 0x000180)
class FRangedWeaponSkillCategorySpecialization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FRangedWeaponSkill)                        WeaponSkill                                                 ___ OFFSET(get<T>, {0x20, 352, 0, 0})
};

/// Struct /Script/FortniteAI.RangedWeaponSkillCategory
/// Size: 0x0190 (0x000000 - 0x000190)
class FRangedWeaponSkillCategory : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FRangedWeaponSkill)                        WeaponSkill                                                 ___ OFFSET(get<T>, {0x20, 352, 0, 0})
	CMember(TArray<FRangedWeaponSkillCategorySpecialization>) Specializations                                      ___ OFFSET(get<T>, {0x180, 16, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedRangedWeaponSkill
/// Size: 0x0040 (0x000000 - 0x000040)
class FDigestedRangedWeaponSkill : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     DelayBetweenShots                                           ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DelayDeviationTimeBetweenShots                              ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TriggerHoldDuration                                         ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     TriggerHoldDeviationTime                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DelayBeforeFirstShot                                        ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ShotDelayAfterTargeting                                     ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ShotDelayAfterIncomingLethality                             ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     InterruptReloadToShootOdds                                  ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(TArray<FDigestedFiringPattern>)            TargetInAirFiringPatterns                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FDigestedFiringPattern>)            FiringPatterns                                              ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedRangedWeaponSkillCategorySpecialization
/// Size: 0x0060 (0x000000 - 0x000060)
class FDigestedRangedWeaponSkillCategorySpecialization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FDigestedRangedWeaponSkill)                WeaponSkill                                                 ___ OFFSET(get<T>, {0x20, 64, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedRangedWeaponSkillCategory
/// Size: 0x0070 (0x000000 - 0x000070)
class FDigestedRangedWeaponSkillCategory : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FDigestedRangedWeaponSkill)                WeaponSkill                                                 ___ OFFSET(get<T>, {0x20, 64, 0, 0})
	CMember(TArray<FDigestedRangedWeaponSkillCategorySpecialization>) Specializations                              ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/FortniteAI.VehicleDigestedPIDController
/// Size: 0x000C (0x000000 - 0x00000C)
class FVehicleDigestedPIDController : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     KP                                                          ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     KI                                                          ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     KD                                                          ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAI.VehiclePIDController
/// Size: 0x0078 (0x000000 - 0x000078)
class FVehiclePIDController : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FScalableFloat)                            KP                                                          ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            KI                                                          ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            KD                                                          ___ OFFSET(get<T>, {0x50, 40, 0, 0})
};

/// Struct /Script/FortniteAI.VehicleDigestedAppendToPath
/// Size: 0x0008 (0x000000 - 0x000008)
class FVehicleDigestedAppendToPath : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     MinimumPathLengthToEndOfPath                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MinTimeSinceLastAppend                                      ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAI.VehicleAppendToPath
/// Size: 0x0050 (0x000000 - 0x000050)
class FVehicleAppendToPath : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            MinimumPathLengthToEndOfPath                                ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            MinTimeSinceLastAppend                                      ___ OFFSET(get<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/FortniteAI.VehicleDigestedTurnInPlace
/// Size: 0x0018 (0x000000 - 0x000018)
class FVehicleDigestedTurnInPlace : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     MovingAngleBegin                                            ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MovingAngleEnd                                              ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     IdleAngleBegin                                              ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     IdleAngleEnd                                                ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MinMovingSpeed                                              ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bMissedPathPointReverse                                     ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/FortniteAI.VehicleTurnInPlace
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FVehicleTurnInPlace : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FScalableFloat)                            MovingAngleBegin                                            ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            MovingAngleEnd                                              ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            IdleAngleBegin                                              ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            IdleAngleEnd                                                ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            MinMovingSpeed                                              ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	DMember(bool)                                      bMissedPathPointReverse                                     ___ OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedVehicleDriving
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FDigestedVehicleDriving : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bCanTurnInPlace                                             ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAvoidanceEnabled                                           ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bPreventTurningWhenStopping                                 ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	SMember(FGameplayTagQuery)                         AvoidanceTagQuery                                           ___ OFFSET(get<T>, {0x8, 72, 0, 0})
	DMember(bool)                                      bReverseSwapLeftAndRight                                    ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(float)                                     MinimumForwardPIDValueForStopping                           ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     MinimumDistanceLeftForBoosting                              ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FVehicleDigestedPIDController)             ForwardPIDController                                        ___ OFFSET(get<T>, {0x5C, 12, 0, 0})
	SMember(FVehicleDigestedPIDController)             SteeringPIDController                                       ___ OFFSET(get<T>, {0x68, 12, 0, 0})
	SMember(FVehicleDigestedAppendToPath)              AppendToPath                                                ___ OFFSET(get<T>, {0x74, 8, 0, 0})
	SMember(FVehicleDigestedTurnInPlace)               TurnInPlace                                                 ___ OFFSET(get<T>, {0x7C, 24, 0, 0})
	SMember(FGameplayTagContainer)                     ModsTags                                                    ___ OFFSET(get<T>, {0x98, 32, 0, 0})
};

/// Struct /Script/FortniteAI.DigestedVehicleDrivingCategory
/// Size: 0x00D8 (0x000000 - 0x0000D8)
class FDigestedVehicleDrivingCategory : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FDigestedVehicleDriving)                   VehicleDriving                                              ___ OFFSET(get<T>, {0x20, 184, 0, 0})
};

/// Struct /Script/FortniteAI.VehicleDriving
/// Size: 0x0300 (0x000000 - 0x000300)
class FVehicleDriving : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	DMember(bool)                                      bCanTurnInPlace                                             ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVehicleTurnInPlace)                       TurnInPlace                                                 ___ OFFSET(get<T>, {0x8, 208, 0, 0})
	SMember(FScalableFloat)                            ReverseSwapLeftAndRight                                     ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumForwardPIDValueForStopping                           ___ OFFSET(get<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumDistanceLeftForBoosting                              ___ OFFSET(get<T>, {0x128, 40, 0, 0})
	SMember(FVehiclePIDController)                     ForwardPIDController                                        ___ OFFSET(get<T>, {0x150, 120, 0, 0})
	SMember(FVehiclePIDController)                     SteeringPIDController                                       ___ OFFSET(get<T>, {0x1C8, 120, 0, 0})
	DMember(bool)                                      bAvoidanceEnabled                                           ___ OFFSET(get<bool>, {0x240, 1, 0, 0})
	DMember(bool)                                      bPreventTurningWhenStopping                                 ___ OFFSET(get<bool>, {0x241, 1, 0, 0})
	SMember(FGameplayTagQuery)                         AvoidanceTagQuery                                           ___ OFFSET(get<T>, {0x248, 72, 0, 0})
	SMember(FVehicleAppendToPath)                      AppendToPath                                                ___ OFFSET(get<T>, {0x290, 80, 0, 0})
	SMember(FGameplayTagContainer)                     ModsTags                                                    ___ OFFSET(get<T>, {0x2E0, 32, 0, 0})
};

/// Struct /Script/FortniteAI.VehicleDrivingCategory
/// Size: 0x0320 (0x000000 - 0x000320)
class FVehicleDrivingCategory : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FVehicleDriving)                           VehicleDriving                                              ___ OFFSET(get<T>, {0x20, 768, 0, 0})
};

/// Struct /Script/FortniteAI.MovementEvaluatorInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovementEvaluatorInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UFortAthenaAIBotEvaluator_Movement*)       MovementEval                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAIObjectTrackerQuerySimplified
/// Size: 0x0080 (0x000000 - 0x000080)
class FFortAthenaAIObjectTrackerQuerySimplified : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EFortAthenaAIObjectTrackerQueryOrder)      PickOrder                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bMustBeUsable                                               ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredTagsQuery                                           ___ OFFSET(get<T>, {0x8, 72, 0, 0})
	SMember(FVector)                                   MaximumDistance                                             ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	CMember(AFortPlayspace*)                           RequiredToBeInPlayspace                                     ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAIObjectTrackerQuery
/// Size: 0x0018 (0x000080 - 0x000098)
class FFortAthenaAIObjectTrackerQuery : public FFortAthenaAIObjectTrackerQuerySimplified
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FVector)                                   StartLocation                                               ___ OFFSET(get<T>, {0x80, 24, 0, 0})
};

/// Struct /Script/FortniteAI.AITrackedObjectsSet
/// Size: 0x0100 (0x000000 - 0x000100)
class FAITrackedObjectsSet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/FortniteAI.FortSmartObjectSlotDefinitionData
/// Size: 0x0018 (0x000008 - 0x000020)
class FFortSmartObjectSlotDefinitionData : public FSmartObjectSlotDefinitionData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     CooldownOnFinished                                          ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CooldownOnInterrupted                                       ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SlotCooldownOnFinished                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     SlotCooldownOnInterrupted                                   ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(EFortAthenaSmartObjectPriority)            Priority                                                    ___ OFFSET(get<T>, {0x1C, 1, 0, 0})
	CMember(EFortAthenaSmartObjectUrgency)             Urgency                                                     ___ OFFSET(get<T>, {0x1D, 1, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaSmartObjectSlotStateData
/// Size: 0x0003 (0x000001 - 0x000004)
class FFortAthenaSmartObjectSlotStateData : public FSmartObjectSlotStateData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/FortniteAI.SmartObjectRecentlyUsed
/// Size: 0x0020 (0x000000 - 0x000020)
class FSmartObjectRecentlyUsed : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAI.SmartObjectBanned
/// Size: 0x0010 (0x000000 - 0x000010)
class FSmartObjectBanned : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/FortniteAI.AIRuntimeParametersSmartObjectActivityCondition
/// Size: 0x0048 (0x000000 - 0x000048)
class FAIRuntimeParametersSmartObjectActivityCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagQuery)                         SmartObjectActivityConditionTagQuery                        ___ OFFSET(get<T>, {0x0, 72, 0, 0})
};

/// Struct /Script/FortniteAI.AIRuntimeParametersSmartObjectActivityConfig
/// Size: 0x0058 (0x000000 - 0x000058)
class FAIRuntimeParametersSmartObjectActivityConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTagQuery)                         ActivityRequirements                                        ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	DMember(float)                                     MaxDetectionRadius                                          ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MaxDetectionRadiusSqr                                       ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     ActivityCooldownOnFinished                                  ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     ActivityCooldownOnInterrupted                               ___ OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/FortniteAI.AIRuntimeParametersSmartObjectActivity
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FAIRuntimeParametersSmartObjectActivity : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FAIRuntimeParametersSmartObjectActivityCondition) SmartObjectActivityCondition                         ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FAIRuntimeParametersSmartObjectActivityConfig) SmartObjectActivityConfig                               ___ OFFSET(get<T>, {0x48, 88, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0xA0, 1, 1, 0})
	DMember(int32_t)                                   ActivityId                                                  ___ OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	DMember(float)                                     LastUseTimestamp                                            ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Cooldown                                                    ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAISmartObjectActivityCondition
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAthenaAISmartObjectActivityCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagQuery)                         SmartObjectActivityConditionTagQuery                        ___ OFFSET(get<T>, {0x0, 72, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAISmartObjectActivityConfig
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FFortAthenaAISmartObjectActivityConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGameplayTagQuery)                         ActivityRequirements                                        ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	SMember(FScalableFloat)                            MaxDetectionRadius                                          ___ OFFSET(get<T>, {0x48, 40, 0, 0})
	SMember(FScalableFloat)                            ActivityCooldownOnFinished                                  ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FScalableFloat)                            ActivityCooldownOnInterrupted                               ___ OFFSET(get<T>, {0x98, 40, 0, 0})
};

/// Struct /Script/FortniteAI.SpawnerDataComponentAffiliationSharedBBConfiguration
/// Size: 0x0040 (0x000000 - 0x000040)
class FSpawnerDataComponentAffiliationSharedBBConfiguration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTag)                              FactionTag                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FScalableFloat)                            MaximumDistance                                             ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FGameplayTag)                              SharedBlackboardTag                                         ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(UBlackboardData*)                          SharedBlackboard                                            ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/FortniteAI.ConstructionBuildingList
/// Size: 0x0090 (0x000000 - 0x000090)
class FConstructionBuildingList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FConstructionBuildingInfo)                 BuildingList                                                ___ OFFSET(get<T>, {0x0, 144, 0, 0})
};

/// Struct /Script/FortniteAI.ConstructionBuildingInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FConstructionBuildingInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UClass*)                                   BuildingActorClass                                          ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAIWeightedCosmeticLoadout
/// Size: 0x0288 (0x000000 - 0x000288)
class FFortAthenaAIWeightedCosmeticLoadout : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	SMember(FFortAthenaLoadout)                        CosmeticLoadout                                             ___ OFFSET(get<T>, {0x0, 608, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      ___ OFFSET(get<T>, {0x260, 40, 0, 0})
};

/// Struct /Script/FortniteAI.InitialGameplayEffectInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FInitialGameplayEffectInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UClass*)                                   GameplayEffect                                              ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Level                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAI.TeleportSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FTeleportSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FScalableFloat)                            CheckTeleportConditionsTimeInterval                         ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	DMember(float)                                     TeleportRange                                               ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     TimeNeededOutsideTeleportRange                              ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FGameplayTag)                              TeleportAbilityTag                                          ___ OFFSET(get<T>, {0x30, 4, 0, 0})
};

/// Struct /Script/FortniteAI.PickupTagConvertInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FPickupTagConvertInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     PickupTags                                                  ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FScalableFloat)                            ConvertDamage                                               ___ OFFSET(get<T>, {0x20, 40, 0, 0})
};

/// Struct /Script/FortniteAI.AILootInfoRowEntry
/// Size: 0x0060 (0x000000 - 0x000060)
class FAILootInfoRowEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagQuery)                         OptionalTagQuery                                            ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bShouldDropInventoryOnDeath                                 ___ OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bShouldDropLootOnDeath                                      ___ OFFSET(get<bool>, {0x48, 1, 1, 1})
	DMember(bool)                                      bShouldGrantLootOnSpawn                                     ___ OFFSET(get<bool>, {0x48, 1, 1, 2})
	CMember(TArray<FName>)                             LootTiers                                                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortAthenaAILootInfoDataTableRow
/// Size: 0x0010 (0x000008 - 0x000018)
class FFortAthenaAILootInfoDataTableRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FAILootInfoRowEntry>)               LootDroppingBehaviors                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FortniteAI.WeightedAIInventoryLoadout
/// Size: 0x0038 (0x000000 - 0x000038)
class FWeightedAIInventoryLoadout : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FScalableFloat)                            Weight                                                      ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	CMember(TArray<FItemAndCount>)                     Items                                                       ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotTargetInfo
/// Size: 0x0140 (0x000000 - 0x000140)
class FFortBotTargetInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(AActor*)                                   SourceActor                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AActor*)                                   SupportingActor                                             ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(ABuildingActor*)                           AlternateTargetingActor                                     ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotThreatActorInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortBotThreatActorInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AActor*)                                   ThreatActor                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotTargetHandler
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortBotTargetHandler : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FFortBotTargetInfo>)                Targets                                                     ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/FortniteAI.BotDelayedStimulus
/// Size: 0x0068 (0x000000 - 0x000068)
class FBotDelayedStimulus : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(AActor*)                                   SourceActor                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAI.BotPerceivedSound
/// Size: 0x0028 (0x000000 - 0x000028)
class FBotPerceivedSound : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(AActor*)                                   SourceActor                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAI.PatrolPathLeash
/// Size: 0x0050 (0x000000 - 0x000050)
class FPatrolPathLeash : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	DMember(float)                                     Width                                                       ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Height                                                      ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Struct /Script/FortniteAI.LeashInfoOverride
/// Size: 0x0008 (0x000000 - 0x000008)
class FLeashInfoOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     LeashInnerRadius                                            ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LeashOuterRadius                                            ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAI.TrapPerceptionSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FTrapPerceptionSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/FortniteAI.TrapDetectionState
/// Size: 0x0008 (0x000000 - 0x000008)
class FTrapDetectionState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/FortniteAI.FortAIRuntimePerkInfo_Bunker
/// Size: 0x0028 (0x000040 - 0x000068)
class FFortAIRuntimePerkInfo_Bunker : public FFortAIRuntimePerkInfo
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     OddsToBeUsedAgainstUnknownThreat                            ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     OddsToUseRoofBuilding                                       ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     OddsToBuildForwardRamp                                      ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     InitialBuildDelay                                           ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     SamePieceBuildDelay                                         ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     SamePieceBuildDelayRandomDeviation                          ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     DifferentPieceBuildDelay                                    ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     DifferentPieceBuildDelayRandomDeviation                     ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     OddsToSelectRandomMaterial                                  ___ OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortAIRuntimePerkInfo_EvasiveManeuvers
/// Size: 0x0060 (0x000040 - 0x0000A0)
class FFortAIRuntimePerkInfo_EvasiveManeuvers : public FFortAIRuntimePerkInfo
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     DistanceMinSquared                                          ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     DistanceMaxSquared                                          ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
};

/// Struct /Script/FortniteAI.BotDebugInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FBotDebugInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   BotID                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SquadId                                                     ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FString)                                   BTActiveTasks                                               ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(EAlertLevel)                               AlertLevel                                                  ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/FortniteAI.BotPOIDebugInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FBotPOIDebugInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   ID                                                          ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FBox)                                      Box                                                         ___ OFFSET(get<T>, {0x8, 56, 0, 0})
	DMember(int32_t)                                   Weight                                                      ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(EBotPOIType)                               Type                                                        ___ OFFSET(get<T>, {0x44, 1, 0, 0})
	DMember(char)                                      Usage                                                       ___ OFFSET(get<char>, {0x45, 1, 0, 0})
	DMember(int32_t)                                   NavMeshLocationsCount                                       ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(bool)                                      bIsMainPOI                                                  ___ OFFSET(get<bool>, {0x4C, 1, 0, 0})
	SMember(FString)                                   DebugInfo                                                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/FortniteAI.BotPOIExcludedZonesDebugInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FBotPOIExcludedZonesDebugInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FBox)                                      Box                                                         ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	DMember(char)                                      UsagesToExclude                                             ___ OFFSET(get<char>, {0x38, 1, 0, 0})
};

/// Struct /Script/FortniteAI.AIPopulationCountSnapshot
/// Size: 0x0014 (0x000000 - 0x000014)
class FAIPopulationCountSnapshot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   NumTotalSpawnedBots                                         ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumAliveBots                                                ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   NumAlivePlayerBots                                          ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   NumAliveNPCBots                                             ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   NumAliveAIPawns                                             ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/FortniteAI.AthenaAIServiceGroupInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FAthenaAIServiceGroupInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   GroupId                                                     ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(UFortPawnComponent_AIGroup*)               GroupLeader                                                 ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<UFortPawnComponent_AIGroup*>)       GroupMembers                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GroupTags                                                   ___ OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/FortniteAI.CachedSupplyDrop
/// Size: 0x0028 (0x000000 - 0x000028)
class FCachedSupplyDrop : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(AFortAthenaSupplyDrop*)                    supplydrop                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bInOctree                                                   ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FVector)                                   LastLocation                                                ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/FortniteAI.MovingLootInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FMovingLootInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   LastLocationInOctree                                        ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/FortniteAI.ClusterLoot
/// Size: 0x0040 (0x000000 - 0x000040)
class FClusterLoot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FBox)                                      ClusterBox                                                  ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	DMember(int32_t)                                   Weight                                                      ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotClusterLootWeightDataTableRow
/// Size: 0x0008 (0x000008 - 0x000010)
class FFortBotClusterLootWeightDataTableRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              tag                                                         ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Weight                                                      ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/FortniteAI.BattleBusPOI
/// Size: 0x0090 (0x000000 - 0x000090)
class FBattleBusPOI : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FScalableFloat)                            IsEnabled                                                   ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FGameplayTagQuery)                         POIFilterQuery                                              ___ OFFSET(get<T>, {0x28, 72, 0, 0})
	CMember(TArray<AFortPoiVolume*>)                   ValidPOIVolumeList                                          ___ OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/FortniteAI.NavigationPOI
/// Size: 0x0080 (0x000000 - 0x000080)
class FNavigationPOI : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FScalableFloat)                            IsEnabled                                                   ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FGameplayTagQuery)                         POIFilterQuery                                              ___ OFFSET(get<T>, {0x28, 72, 0, 0})
	CMember(TArray<AFortPoiVolume*>)                   ValidPOIVolumeList                                          ___ OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Struct /Script/FortniteAI.CachedPOIVolumeLocations
/// Size: 0x0020 (0x000000 - 0x000020)
class FCachedPOIVolumeLocations : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AFortPoiVolume*)                           POIVolume                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortServerBotInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortServerBotInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AFortAthenaAIBotController*)               BotController                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AFortPoiVolume*)                           SelectedPoiVolume                                           ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotBackfillSpawnRequest
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortBotBackfillSpawnRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/FortniteAI.MMRSpawningInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FMMRSpawningInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/FortniteAI.MMRSpawningPlayerBotsRuntimeInfo
/// Size: 0x0028 (0x000010 - 0x000038)
class FMMRSpawningPlayerBotsRuntimeInfo : public FMMRSpawningBaseRuntimeInfo
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FMMRSpawningInfo>)                  SpawningInfos                                               ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/FortniteAI.UpdateBotSkillInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FUpdateBotSkillInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/FortniteAI.FortBotDisablePOIRequest
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortBotDisablePOIRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UAthenaAIServicePlayerBots*)               CachedAIServicePlayerBots                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FortniteAI.AthenaAITrackedZone
/// Size: 0x0030 (0x000000 - 0x000030)
class FAthenaAITrackedZone : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/FortniteAI.BotPOI
/// Size: 0x0070 (0x000000 - 0x000070)
class FBotPOI : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   ID                                                          ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FBox)                                      Box                                                         ___ OFFSET(get<T>, {0x8, 56, 0, 0})
	DMember(int32_t)                                   Weight                                                      ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(EBotPOIType)                               Type                                                        ___ OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TArray<FVector>)                           NavMeshLocations                                            ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bIsMainPOI                                                  ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(char)                                      Usage                                                       ___ OFFSET(get<char>, {0x59, 1, 0, 0})
};

/// Struct /Script/FortniteAI.BotPOIExcludedZone
/// Size: 0x0040 (0x000000 - 0x000040)
class FBotPOIExcludedZone : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FBox)                                      Box                                                         ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	DMember(char)                                      UsagesToExclude                                             ___ OFFSET(get<char>, {0x38, 1, 0, 0})
};

/// Struct /Script/FortniteAI.FortBotPOIExcludedZoneDataTableRow
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FFortBotPOIExcludedZoneDataTableRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   BoxHalfSize                                                 ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(char)                                      UsagesToExclude                                             ___ OFFSET(get<char>, {0x38, 1, 0, 0})
	SMember(FGameplayTagQuery)                         PlaylistQuery                                               ___ OFFSET(get<T>, {0x40, 72, 0, 0})
	SMember(FString)                                   MapPath                                                     ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Struct /Script/FortniteAI.FortWorldConditionAthenaGamePhase
/// Size: 0x0008 (0x000010 - 0x000018)
class FFortWorldConditionAthenaGamePhase : public FWorldConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EAthenaGamePhaseStep)                      PhaseStep                                                   ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(int32_t)                                   SafeZonePhase                                               ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/FortniteAI.FortWorldConditionInSafeZone
/// Size: 0x0008 (0x000010 - 0x000018)
class FFortWorldConditionInSafeZone : public FWorldConditionCommonActorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/FortniteAI.FortWorldConditionPerceivedHostilePlayer
/// Size: 0x0008 (0x000010 - 0x000018)
class FFortWorldConditionPerceivedHostilePlayer : public FWorldConditionCommonActorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/FortniteAI.GameDifficultyInfo
/// Size: 0x0090 (0x000008 - 0x000098)
class FGameDifficultyInfo : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      bIsOnboarding                                               ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     Difficulty                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DifficultyMatchmakingMinOverride                            ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DifficultyMatchmakingMaxOverride                            ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   LootLevel                                                   ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(ERatingsEnforcementType)                   RatingsEnforcement                                          ___ OFFSET(get<T>, {0x1C, 1, 0, 0})
	DMember(int32_t)                                   RequiredRating                                              ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   MaximumRating                                               ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   PvPRating                                                   ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   RecommendedRating                                           ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     ScoreBonus                                                  ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FString)                                   LootTierGroup                                               ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   BonusLootTierGroup                                          ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   DifficultyIncreaseLootTierGroup                             ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   NumDifficultyIncreases                                      ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	SMember(FText)                                     ThreatDisplayName                                           ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FName)                                     ColorParamName                                              ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	DMember(int32_t)                                   DefaultPlayerLives                                          ___ OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	SMember(FName)                                     PlayerStatClampRowName                                      ___ OFFSET(get<T>, {0x90, 4, 0, 0})
};

/// Struct /Script/FortniteAI.AttributeClamp
/// Size: 0x0040 (0x000000 - 0x000040)
class FAttributeClamp : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	CMember(EClampType)                                ClampType                                                   ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(float)                                     ClampValue                                                  ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Struct /Script/FortniteAI.PlayerClampInfo
/// Size: 0x0010 (0x000008 - 0x000018)
class FPlayerClampInfo : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FAttributeClamp>)                   AttributeClamps                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FortniteAI.GameRewardOverridesInfo
/// Size: 0x0038 (0x000008 - 0x000040)
class FGameRewardOverridesInfo : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   MissionName                                                 ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   OverrideRewardsTag                                          ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   LootLevel                                                   ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FString)                                   LootTierGroup                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAITask_Move
/// Size: 0x0048 (0x000118 - 0x000160)
class UFortAITask_Move : public UAITask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FFortMoveConfig)                           MoveConfig                                                  ___ OFFSET(get<T>, {0x118, 56, 0, 0})
};

/// Class /Script/FortniteAI.FortNavModifierComponent
/// Size: 0x00A0 (0x000190 - 0x000230)
class UFortNavModifierComponent : public UNavModifierComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	DMember(float)                                     LowSpeedSquareThreshold                                     ___ OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(float)                                     LowSpeedSquareDistanceThreshold                             ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     LowSpeedRotationThreshold                                   ___ OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     LowSpeedScaleThreshold                                      ___ OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(bool)                                      bAutomaticNavBoundComputation                               ___ OFFSET(get<bool>, {0x1A0, 1, 1, 0})
	DMember(bool)                                      bForceFailSafeExtent                                        ___ OFFSET(get<bool>, {0x1A0, 1, 1, 1})
	DMember(float)                                     ExtrapolationMultiplierForFailsafeExtent                    ___ OFFSET(get<float>, {0x1A4, 4, 0, 0})
	CMember(TArray<UClass*>)                           DisableForNavmeshClasses                                    ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
	CMember(UPrimitiveComponent*)                      PrimCompAffectingNavMesh                                    ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortPhysicsObjectNavigationComponent
/// Size: 0x0010 (0x000230 - 0x000240)
class UFortPhysicsObjectNavigationComponent : public UFortNavModifierComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(UFortPhysicsObjectComponent*)              PhysicsObjectComponent                                      ___ OFFSET(get<T>, {0x230, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAIAimingInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAIAimingInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAIAimingManagerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAIAimingManagerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAIEnvironmentalDangerSourceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAIEnvironmentalDangerSourceInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAIInjectedBehaviorComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UFortAIInjectedBehaviorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/FortniteAI.FortAIPerceptionSystem
/// Size: 0x0000 (0x000130 - 0x000130)
class UFortAIPerceptionSystem : public UAIPerceptionSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Class /Script/FortniteAI.FortAthenaAIBotCharacterCustomization
/// Size: 0x0260 (0x000028 - 0x000288)
class UFortAthenaAIBotCharacterCustomization : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	SMember(FFortAthenaLoadout)                        CustomizationLoadout                                        ___ OFFSET(get<T>, {0x28, 608, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotInventoryItems
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortAthenaAIBotInventoryItems : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FItemAndCount>)                     Items                                                       ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIControllerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaAIControllerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAthenaAILODSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaAILODSettings : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAthenaAILODSettings_AIEvaluator
/// Size: 0x0288 (0x000028 - 0x0002B0)
class UFortAthenaAILODSettings_AIEvaluator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(TArray<UClass*>)                           SystemClasses                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FFortAILODSetting_AIEvaluator)             BelowLowerLODSettings                                       ___ OFFSET(get<T>, {0x40, 104, 0, 0})
	SMember(FFortAILODSetting_AIEvaluator)             LowerLODSettings                                            ___ OFFSET(get<T>, {0xA8, 104, 0, 0})
	SMember(FFortAILODSetting_AIEvaluator)             AboveLowerLODSettings                                       ___ OFFSET(get<T>, {0x110, 104, 0, 0})
	SMember(FFortAILODSetting_AIEvaluator)             BelowNormalLODSettings                                      ___ OFFSET(get<T>, {0x178, 104, 0, 0})
	SMember(FFortAILODSetting_AIEvaluator)             NormalLODSettings                                           ___ OFFSET(get<T>, {0x1E0, 104, 0, 0})
	SMember(FFortAILODSetting_AIEvaluator)             AboveNormalLODSettings                                      ___ OFFSET(get<T>, {0x248, 104, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAILODSettings_CharacterMovement
/// Size: 0x0948 (0x000028 - 0x000970)
class UFortAthenaAILODSettings_CharacterMovement : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2416;

public:
	CMember(TArray<UClass*>)                           SystemClasses                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FFortAILODSetting_CharacterMovement)       BelowLowerLODSettings                                       ___ OFFSET(get<T>, {0x40, 392, 0, 0})
	SMember(FFortAILODSetting_CharacterMovement)       LowerLODSettings                                            ___ OFFSET(get<T>, {0x1C8, 392, 0, 0})
	SMember(FFortAILODSetting_CharacterMovement)       AboveLowerLODSettings                                       ___ OFFSET(get<T>, {0x350, 392, 0, 0})
	SMember(FFortAILODSetting_CharacterMovement)       BelowNormalLODSettings                                      ___ OFFSET(get<T>, {0x4D8, 392, 0, 0})
	SMember(FFortAILODSetting_CharacterMovement)       NormalLODSettings                                           ___ OFFSET(get<T>, {0x660, 392, 0, 0})
	SMember(FFortAILODSetting_CharacterMovement)       AboveNormalLODSettings                                      ___ OFFSET(get<T>, {0x7E8, 392, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAILODSettings_FortWeaponRanged
/// Size: 0x0288 (0x000028 - 0x0002B0)
class UFortAthenaAILODSettings_FortWeaponRanged : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(TArray<UClass*>)                           SystemClasses                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FFortAILODSetting_FortWeaponRanged)        BelowLowerLODSettings                                       ___ OFFSET(get<T>, {0x40, 104, 0, 0})
	SMember(FFortAILODSetting_FortWeaponRanged)        LowerLODSettings                                            ___ OFFSET(get<T>, {0xA8, 104, 0, 0})
	SMember(FFortAILODSetting_FortWeaponRanged)        AboveLowerLODSettings                                       ___ OFFSET(get<T>, {0x110, 104, 0, 0})
	SMember(FFortAILODSetting_FortWeaponRanged)        BelowNormalLODSettings                                      ___ OFFSET(get<T>, {0x178, 104, 0, 0})
	SMember(FFortAILODSetting_FortWeaponRanged)        NormalLODSettings                                           ___ OFFSET(get<T>, {0x1E0, 104, 0, 0})
	SMember(FFortAILODSetting_FortWeaponRanged)        AboveNormalLODSettings                                      ___ OFFSET(get<T>, {0x248, 104, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAILODSettings_GenericTickingObject
/// Size: 0x0168 (0x000028 - 0x000190)
class UFortAthenaAILODSettings_GenericTickingObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<UClass*>)                           SystemClasses                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FFortAILODSetting_GenericTickingObject)    BelowLowerLODSettings                                       ___ OFFSET(get<T>, {0x40, 56, 0, 0})
	SMember(FFortAILODSetting_GenericTickingObject)    LowerLODSettings                                            ___ OFFSET(get<T>, {0x78, 56, 0, 0})
	SMember(FFortAILODSetting_GenericTickingObject)    AboveLowerLODSettings                                       ___ OFFSET(get<T>, {0xB0, 56, 0, 0})
	SMember(FFortAILODSetting_GenericTickingObject)    BelowNormalLODSettings                                      ___ OFFSET(get<T>, {0xE8, 56, 0, 0})
	SMember(FFortAILODSetting_GenericTickingObject)    NormalLODSettings                                           ___ OFFSET(get<T>, {0x120, 56, 0, 0})
	SMember(FFortAILODSetting_GenericTickingObject)    AboveNormalLODSettings                                      ___ OFFSET(get<T>, {0x158, 56, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortAthenaAISpawnerDataComponent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_ConstructionBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_ConstructionBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConstruction
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UFortAthenaAISpawnerDataComponent_AIBotConstruction : public UFortAthenaAISpawnerDataComponent_ConstructionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FConstructionBuildingList)                 ConstructionBuildingInfoList                                ___ OFFSET(get<T>, {0x30, 144, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_BehaviorBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_BehaviorBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_Behavior
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortAthenaAISpawnerDataComponent_Behavior : public UFortAthenaAISpawnerDataComponent_BehaviorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UBehaviorTree*)                            BehaviorTree                                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_ChanceEncounterBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_ConversationBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_ConversationBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_DebugBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_DebugBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_LODBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_LODBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_LOD
/// Size: 0x02F8 (0x000030 - 0x000328)
class UFortAthenaAISpawnerDataComponent_LOD : public UFortAthenaAISpawnerDataComponent_LODBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(UClass*)                                   LODSettings                                                 ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FClientAILODSettings)                      ClientLODSettings                                           ___ OFFSET(get<T>, {0x38, 752, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_VehicleBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_VehicleBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_VoiceBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_VoiceBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaEntitySubsystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaEntitySubsystemInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerData
/// Size: 0x00D0 (0x000048 - 0x000118)
class UFortAthenaAISpawnerData : public UFortAthenaSpawnerDataBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<UFortAthenaAISpawnerDataComponent*>) ClassComponentList                                         ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(UClass*)                                   InventoryComponent                                          ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UClass*)                                   SpawnParamsComponent                                        ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UClass*)                                   BehaviorComponent                                           ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UClass*)                                   AffiliationComponent                                        ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UClass*)                                   LODComponent                                                ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(UClass*)                                   DebugComponent                                              ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UClass*)                                   AnalyticComponent                                           ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(UClass*)                                   GameplayComponent                                           ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UClass*)                                   ConversationComponent                                       ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(UClass*)                                   VoiceComponent                                              ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UClass*)                                   CosmeticComponent                                           ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UClass*)                                   ChanceEncounterComponent                                    ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UClass*)                                   OptimizationComponent                                       ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UClass*)                                   GameplayAbilityComponent                                    ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UClass*)                                   PerceptionComponent                                         ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(UClass*)                                   SmartObjectComponent                                        ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UClass*)                                   GroupComponent                                              ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(UClass*)                                   ScriptComponent                                             ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UClass*)                                   TokenComponent                                              ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	SMember(FScalableFloat)                            SpawnIntervalOverride                                       ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotSpawnerData
/// Size: 0x0028 (0x000118 - 0x000140)
class UFortAthenaAIBotSpawnerData : public UFortAthenaAISpawnerData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(UClass*)                                   SkillSetComponent                                           ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(UClass*)                                   ConstructionComponent                                       ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(UClass*)                                   VehicleComponent                                            ___ OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(UClass*)                                   CoverComponent                                              ___ OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(UClass*)                                   PerksComponent                                              ___ OFFSET(get<T>, {0x138, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaNPCSpawnerData
/// Size: 0x0000 (0x000140 - 0x000140)
class UFortAthenaNPCSpawnerData : public UFortAthenaAIBotSpawnerData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/FortniteAI.FortAthenaPlayerBotSpawnerData
/// Size: 0x0000 (0x000140 - 0x000140)
class UFortAthenaPlayerBotSpawnerData : public UFortAthenaAIBotSpawnerData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/FortniteAI.FortBotNameSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UFortBotNameSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TEnumAsByte<EBotNamingMode>)               NamingMode                                                  ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FText)                                     OverrideName                                                ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bAddPlayerIDSuffix                                          ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortDoorLinkOpenerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortDoorLinkOpenerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortInjectedBehavior
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortInjectedBehavior : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UClass*)                                   AIEvaluator                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     Interval                                                    ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     RandomDeviation                                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(UBehaviorTree*)                            InjectedBehaviorTree                                        ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(uint32_t)                                  Priority                                                    ___ OFFSET(get<uint32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortMetaNavArea
/// Size: 0x0010 (0x000048 - 0x000058)
class UFortMetaNavArea : public UNavAreaMeta
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FNavAgentData>)                     AgentData                                                   ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortMetaNavArea_Wall
/// Size: 0x0000 (0x000058 - 0x000058)
class UFortMetaNavArea_Wall : public UFortMetaNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/FortniteAI.FortNavArea
/// Size: 0x0008 (0x000048 - 0x000050)
class UFortNavArea : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bObstacle                                                   ___ OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bSmashable                                                  ___ OFFSET(get<bool>, {0x48, 1, 1, 1})
};

/// Class /Script/FortniteAI.FortNavArea_DefaultSmashable
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_DefaultSmashable : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_PlayerBuiltSmashable
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_PlayerBuiltSmashable : public UFortNavArea_DefaultSmashable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_WoodenWall
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_WoodenWall : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortQueryContext_ConverterPawn
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_ConverterPawn : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortQueryContext_ConverterController
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_ConverterController : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortQueryContext_ConverterViewLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_ConverterViewLocation : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortQueryContext_ConverterViewRotation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_ConverterViewRotation : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortSpawnPointsPercentageCurveSequence
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortSpawnPointsPercentageCurveSequence : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FDataTableRowHandle>)               SpawnPointsPercentageCurves                                 ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TEnumAsByte<EFortIntensityCurveSequenceType>) SequenceType                                             ___ OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Class /Script/FortniteAI.AIHotSpot
/// Size: 0x01B0 (0x000290 - 0x000440)
class AAIHotSpot : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(TArray<UAIHotSpotSlot*>)                   UserSlots                                                   ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(UAIHotSpotSlotGenerator*)                  SlotGenerator                                               ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(TArray<UAIHotSpotSlot*>)                   Slots                                                       ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(AActor*)                                   FocusActor                                                  ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FVector)                                   CustomNavmeshSearchExtent                                   ___ OFFSET(get<T>, {0x2D0, 24, 0, 0})
	DMember(bool)                                      bStartEnabled                                               ___ OFFSET(get<bool>, {0x2E8, 1, 1, 0})
	DMember(bool)                                      bAllowSlotlessAssignment                                    ___ OFFSET(get<bool>, {0x2E8, 1, 1, 1})
	DMember(bool)                                      bAllowClaimingMultipleSlots                                 ___ OFFSET(get<bool>, {0x2E8, 1, 1, 2})
	DMember(bool)                                      bTrackOverlappingSlots                                      ___ OFFSET(get<bool>, {0x2E8, 1, 1, 3})
	DMember(bool)                                      bProjectSlotsOnNavmesh                                      ___ OFFSET(get<bool>, {0x2E8, 1, 1, 4})
	DMember(bool)                                      bCustomNavmeshSearchExtent                                  ___ OFFSET(get<bool>, {0x2E8, 1, 1, 5})
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0x2E8, 1, 1, 6})
	CMember(TArray<AAIController*>)                    NoSlotAssignees                                             ___ OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(UPrimitiveComponent*)                      RenderingComponent                                          ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UBillboardComponent*)                      SpriteComponent                                             ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Script/FortniteAI.AIHotSpotManagerProxy
/// Size: 0x0058 (0x000028 - 0x000080)
class UAIHotSpotManagerProxy : public UAIHotSpotManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/FortniteAI.AIHotSpotRenderingComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class UAIHotSpotRenderingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
};

/// Class /Script/FortniteAI.AIHotSpotSlot
/// Size: 0x00F8 (0x000028 - 0x000120)
class UAIHotSpotSlot : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FTransform)                                LocalTransform                                              ___ OFFSET(get<T>, {0x30, 96, 0, 0})
	DMember(float)                                     Height                                                      ___ OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     DistanceToFocusActor                                        ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   UserId                                                      ___ OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	DMember(bool)                                      bStartEnabled                                               ___ OFFSET(get<bool>, {0xA0, 1, 1, 0})
	DMember(bool)                                      bHasCachedAgentData                                         ___ OFFSET(get<bool>, {0xA0, 1, 1, 1})
	DMember(bool)                                      bHasOverlappingSlots                                        ___ OFFSET(get<bool>, {0xA0, 1, 1, 2})
	DMember(bool)                                      bHasDistanceToFocusActor                                    ___ OFFSET(get<bool>, {0xA0, 1, 1, 3})
	DMember(bool)                                      bIsBlockingOthers                                           ___ OFFSET(get<bool>, {0xA0, 1, 1, 4})
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0xA0, 1, 1, 5})
	CMember(AAIController*)                            Owner                                                       ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	DMember(int32_t)                                   SlotIndex                                                   ___ OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	CMember(EAIHotSpotSlot)                            SlotState                                                   ___ OFFSET(get<T>, {0xB4, 1, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIBudgetManager
/// Size: 0x0248 (0x000030 - 0x000278)
class UAthenaAIBudgetManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	CMember(TMap<TWeakObjectPtr, FAthenaMemoryBudgetInterfaces>) StaticallyRegisteredPawns                         ___ OFFSET(get<T>, {0x60, 80, 0, 0})
};

/// Class /Script/FortniteAI.FortAIController
/// Size: 0x01A8 (0x0003B8 - 0x000560)
class AFortAIController : public AAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	DMember(bool)                                      bUsingNavMesh                                               ___ OFFSET(get<bool>, {0x3E8, 1, 1, 0})
	DMember(bool)                                      bAlwaysNotifyBumpWall                                       ___ OFFSET(get<bool>, {0x3E8, 1, 1, 1})
	DMember(bool)                                      bInstantRotation                                            ___ OFFSET(get<bool>, {0x3E8, 1, 1, 2})
	DMember(bool)                                      bTurnTransitionsEnabled                                     ___ OFFSET(get<bool>, {0x3E8, 1, 1, 3})
	DMember(bool)                                      bIgnoreAllActorsThatAreNotPawnsOrBuildings                  ___ OFFSET(get<bool>, {0x3E9, 1, 1, 7})
	DMember(bool)                                      bAllowHotspotAbilityLooping                                 ___ OFFSET(get<bool>, {0x3EA, 1, 1, 0})
	CMember(UFortPathFollowingComponent*)              FortPathFollowingComp                                       ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	SMember(FAIHotSpotUseInfo)                         CurrentHotSpot                                              ___ OFFSET(get<T>, {0x3F8, 24, 0, 0})
	CMember(UFortAthenaAIRuntimeParametersComponent*)  CachedAIRuntimeParametersComponent                          ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_AffiliationBase*) CachedAffiliationRuntimeParameters                    ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	DMember(float)                                     GoalInfoUpdateRate                                          ___ OFFSET(get<float>, {0x420, 4, 0, 0})
	CMember(AActor*)                                   GoalActor                                                   ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	DMember(float)                                     GoalVisibilityPersistanceTime                               ___ OFFSET(get<float>, {0x430, 4, 0, 0})
	CMember(AFortAIPawn*)                              MyFortPawn                                                  ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTeamSetDelegate                                           ___ OFFSET(get<T>, {0x508, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerComponentAttachedEvent                          ___ OFFSET(get<T>, {0x518, 16, 0, 0})
	CMember(UAIGoalComponent*)                         AIGoalComponent                                             ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerNewGoalActorEvent                               ___ OFFSET(get<T>, {0x530, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPawnKilledEvent                                           ___ OFFSET(get<T>, {0x540, 16, 0, 0})
	CMember(UBehaviorTree*)                            BTAssetToRunOnPawnAISpawned                                 ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UFortGameStateComponent_AffiliationManager*) CachedAffiliationManager                                  ___ OFFSET(get<T>, {0x558, 8, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIController
/// Size: 0x0090 (0x000560 - 0x0005F0)
class AAthenaAIController : public AFortAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	CMember(UFortGameplayAbility*)                     PrimaryMeleeAttackAbilityInstance                           ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UFortGameplayAbility*)                     PrimaryRangedAttackAbilityInstance                          ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	SMember(FVector)                                   NavWalkingSearchExtentScale                                 ___ OFFSET(get<T>, {0x590, 24, 0, 0})
	DMember(float)                                     CheapFlyingNavPointHorizontalGridRatio                      ___ OFFSET(get<float>, {0x5A8, 4, 0, 0})
	DMember(float)                                     CheapFlyingNavNavPointVerticalGridRatio                     ___ OFFSET(get<float>, {0x5AC, 4, 0, 0})
	SMember(FGameplayTagContainer)                     CheapFlyingNavSmashableAbilityTag                           ___ OFFSET(get<T>, {0x5B0, 32, 0, 0})
	DMember(bool)                                      bEnableCheapFlyingNavigation                                ___ OFFSET(get<bool>, {0x5D0, 1, 1, 0})
	DMember(bool)                                      bAllowBacktrackPathfinding                                  ___ OFFSET(get<bool>, {0x5D0, 1, 1, 1})
	DMember(bool)                                      bIsGoalRequiredForBehavior                                  ___ OFFSET(get<bool>, {0x5D0, 1, 1, 2})
	DMember(bool)                                      bAutomaticallyChooseClosestTargetAsGoal                     ___ OFFSET(get<bool>, {0x5D0, 1, 1, 3})
	DMember(bool)                                      bAutoGenerateHotspotOnPlayerBuildings                       ___ OFFSET(get<bool>, {0x5D0, 1, 1, 4})
	DMember(bool)                                      bAutoAttackOnMovedHit                                       ___ OFFSET(get<bool>, {0x5D0, 1, 1, 5})
	DMember(bool)                                      bRegisterToAthenaAIDropper                                  ___ OFFSET(get<bool>, {0x5D1, 1, 1, 1})
	CMember(AActor*)                                   SecondaryGoalActor                                          ___ OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(UAthenaPathFollowingComponent*)            AthenaPFC                                                   ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAIPerceptionComponent
/// Size: 0x0008 (0x000188 - 0x000190)
class UFortAIPerceptionComponent : public UAIPerceptionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(float)                                     LosingSightRadiusBump                                       ___ OFFSET(get<float>, {0x188, 4, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIPerceptionComponent
/// Size: 0x0008 (0x000190 - 0x000198)
class UAthenaAIPerceptionComponent : public UFortAIPerceptionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(TWeakObjectPtr<UFortAthenaAIRuntimeParametersComponent*>) CachedAIRuntimeParametersComponent           ___ OFFSET(get<T>, {0x190, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortBehaviorTreeComponent
/// Size: 0x0000 (0x000298 - 0x000298)
class UFortBehaviorTreeComponent : public UBehaviorTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Script/FortniteAI.AthenaBehaviorTreeComponent
/// Size: 0x0000 (0x000298 - 0x000298)
class UAthenaBehaviorTreeComponent : public UFortBehaviorTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Script/FortniteAI.FortAIDirector
/// Size: 0x0D78 (0x000290 - 0x001008)
class AFortAIDirector : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4104;

public:
	SMember(FCurveTableRowHandle)                      MaxAliveCurve                                               ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      MinAliveCurve                                               ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	SMember(FIntensityData)                            IntensityInfo                                               ___ OFFSET(get<T>, {0x2C0, 48, 0, 0})
	SMember(FFortAIEncounterPIDController)             AIDirectorPIDController                                     ___ OFFSET(get<T>, {0x2F0, 104, 0, 0})
	SMember(FFortAIEncounterPIDControllerSettings)     PIDControllerSettings                                       ___ OFFSET(get<T>, {0x358, 48, 0, 0})
	SMember(FUtilityData)                              UtilityContributionData                                     ___ OFFSET(get<T>, {0x388, 1024, 0, 0})
	DMember(float)                                     UnreachableLocationPathCost                                 ___ OFFSET(get<float>, {0x788, 4, 0, 0})
	SMember(FFortPlayerPerformanceEstimateSettings)    PlayerPerformanceEstimateSettings                           ___ OFFSET(get<T>, {0x790, 64, 0, 0})
	DMember(bool)                                      bUsePrototypeEnemies                                        ___ OFFSET(get<bool>, {0x7D0, 1, 1, 0})
	DMember(bool)                                      bForceByPassNavMeshForAISpawning                            ___ OFFSET(get<bool>, {0x7D4, 1, 0, 0})
	CMember(TArray<TEnumAsByte>)                       DebugEncounterDirections                                    ___ OFFSET(get<T>, {0x7D8, 16, 0, 0})
	CMember(EDespawnAIType)                            DespawnAIType                                               ___ OFFSET(get<T>, {0x7E8, 1, 0, 0})
	DMember(float)                                     DespawnDistance                                             ___ OFFSET(get<float>, {0x7EC, 4, 0, 0})
	DMember(float)                                     DespawnInterval                                             ___ OFFSET(get<float>, {0x7F0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     DebugSpawnAIGroupTags                                       ___ OFFSET(get<T>, {0x7F8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DebugEncounterTags                                          ___ OFFSET(get<T>, {0x818, 32, 0, 0})
	DMember(float)                                     BurstSpawnThreatVisualsEndDelay                             ___ OFFSET(get<float>, {0x838, 4, 0, 0})
	CMember(TArray<FFortAIEncounterSpawnGroupCapsProfile>) EncounterSpawnGroupCapSettings                          ___ OFFSET(get<T>, {0x840, 16, 0, 0})
	CMember(TArray<FFortAIEncounterSpawnPointsProfile>) EncounterSpawnPointsSettings                               ___ OFFSET(get<T>, {0x850, 16, 0, 0})
	CMember(TArray<FFortAIEncounterPawnDifficultyLevelModifier>) EncounterPawnDifficultyLevelModifiers             ___ OFFSET(get<T>, {0x860, 16, 0, 0})
	CMember(TArray<FFortAISpawnGroupUpgradeData>)      SpawnGroupUpgrades                                          ___ OFFSET(get<T>, {0x870, 16, 0, 0})
	DMember(float)                                     GuaranteedUpgradeGroupUtilityBonus                          ___ OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(float)                                     DiscreteEncounterUtilityDesireMappings                      ___ OFFSET(get<float>, {0x884, 16, 0, 0})
	CMember(TEnumAsByte<EFortAIUtility>)               InitialDynamicUtilities                                     ___ OFFSET(get<T>, {0x894, 4, 0, 0})
	SMember(FEncounterEnvironmentQueryInfo)            SpawnLocationPlacementQueries                               ___ OFFSET(get<T>, {0x898, 160, 0, 0})
	SMember(FEncounterEnvironmentQueryInfo)            SpawnLocationActorSearchQueries                             ___ OFFSET(get<T>, {0x938, 160, 0, 0})
	CMember(UFortAIDirectorDataTrackingSettings*)      DataTrackingSettings                                        ___ OFFSET(get<T>, {0x9D8, 8, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               BaseLootDropData                                            ___ OFFSET(get<T>, {0x9E0, 16, 0, 0})
	CMember(TArray<FFortAILootDropModifiers>)          LootDropModifiers                                           ___ OFFSET(get<T>, {0x9F0, 16, 0, 0})
	SMember(FGameplayTagQuery)                         LootDropDenialQuery                                         ___ OFFSET(get<T>, {0xA00, 72, 0, 0})
	DMember(bool)                                      bDebugEncounterQueries                                      ___ OFFSET(get<bool>, {0xA48, 1, 1, 0})
	CMember(TArray<AFortPlayerControllerZone*>)        PlayerControllersForBVTree                                  ___ OFFSET(get<T>, {0xA60, 16, 0, 0})
	CMember(TArray<AFortPlayerPawn*>)                  PlayerPawnsForBVTree                                        ___ OFFSET(get<T>, {0xA70, 16, 0, 0})
	CMember(TArray<AFortAIController*>)                AIControllersForBVTree                                      ___ OFFSET(get<T>, {0xAB0, 16, 0, 0})
	CMember(TArray<AFortAIPawn*>)                      AIPawnsForBVTree                                            ___ OFFSET(get<T>, {0xAC0, 16, 0, 0})
	CMember(TArray<AFortAthenaAIBotController*>)       AIPlayerBotControllersForBVTree                             ___ OFFSET(get<T>, {0xB00, 16, 0, 0})
	CMember(TArray<AFortPlayerPawn*>)                  AIPlayerBotPawnsForBVTree                                   ___ OFFSET(get<T>, {0xB10, 16, 0, 0})
	CMember(TArray<AFortAthenaAIBotController*>)       AINonPlayerBotControllersForBVTree                          ___ OFFSET(get<T>, {0xB50, 16, 0, 0})
	CMember(TArray<AFortPlayerPawn*>)                  AINonPlayerBotPawnsForBVTree                                ___ OFFSET(get<T>, {0xB60, 16, 0, 0})
	CMember(TArray<AFortPlayerPawn*>)                  NonPlayerBotPawns                                           ___ OFFSET(get<T>, {0xBA0, 16, 0, 0})
	CMember(TArray<AFortPlayerPawn*>)                  PlayerBotPawns                                              ___ OFFSET(get<T>, {0xBB0, 16, 0, 0})
	CMember(TArray<AFortPlayerPawn*>)                  PlayerPawns                                                 ___ OFFSET(get<T>, {0xBC0, 16, 0, 0})
	CMember(TArray<AFortAIPawn*>)                      FortAIPawns                                                 ___ OFFSET(get<T>, {0xBD0, 16, 0, 0})
	DMember(bool)                                      bUseLODSettings                                             ___ OFFSET(get<bool>, {0xCE0, 1, 0, 0})
	CMember(TScriptInterface<Class>)                   CachedLODSettingsManager                                    ___ OFFSET(get<T>, {0xD50, 16, 0, 0})
	DMember(bool)                                      bAsyncProcessUpdateAliveAIs                                 ___ OFFSET(get<bool>, {0xD60, 1, 0, 0})
	DMember(bool)                                      bAllowProcessPlayerTargeting                                ___ OFFSET(get<bool>, {0xD61, 1, 0, 0})
	DMember(int32_t)                                   MaxNumLODAIProcessPerFrame                                  ___ OFFSET(get<int32_t>, {0xD64, 4, 0, 0})
	SMember(FFortEncounterPawnNumberCaps)              DefaultEncounterPawnCaps                                    ___ OFFSET(get<T>, {0xD68, 24, 0, 0})
	CMember(UReporterGraph*)                           IntensityGraph                                              ___ OFFSET(get<T>, {0xD88, 8, 0, 0})
	CMember(UReporterGraph*)                           UtilitiesGraph                                              ___ OFFSET(get<T>, {0xD90, 8, 0, 0})
	CMember(UReporterGraph*)                           PIDValuesGraph                                              ___ OFFSET(get<T>, {0xD98, 8, 0, 0})
	CMember(UReporterGraph*)                           PIDContributionsGraph                                       ___ OFFSET(get<T>, {0xDA0, 8, 0, 0})
	DMember(bool)                                      bNightActive                                                ___ OFFSET(get<bool>, {0xDA8, 1, 1, 0})
	DMember(bool)                                      bAIDisabled                                                 ___ OFFSET(get<bool>, {0xDA8, 1, 1, 1})
	DMember(bool)                                      bRegisteredForDayPhaseChange                                ___ OFFSET(get<bool>, {0xDA8, 1, 1, 2})
	DMember(bool)                                      bUseSpawnCap                                                ___ OFFSET(get<bool>, {0xDA8, 1, 1, 3})
	DMember(int32_t)                                   NightCount                                                  ___ OFFSET(get<int32_t>, {0xDAC, 4, 0, 0})
	DMember(float)                                     NightEncounterFailureBreatherTime                           ___ OFFSET(get<float>, {0xDB0, 4, 0, 0})
	DMember(float)                                     EncounterPawnSpawnInterval                                  ___ OFFSET(get<float>, {0xDB4, 4, 0, 0})
	CMember(UClass*)                                   DefaultNightEncounter                                       ___ OFFSET(get<T>, {0xDB8, 8, 0, 0})
	CMember(UClass*)                                   DummyDebugEncounter                                         ___ OFFSET(get<T>, {0xDC0, 8, 0, 0})
	CMember(UClass*)                                   BaseEncounterClass                                          ___ OFFSET(get<T>, {0xDC8, 8, 0, 0})
	DMember(int32_t)                                   MaxActiveAlive                                              ___ OFFSET(get<int32_t>, {0xDD0, 4, 0, 0})
	DMember(int32_t)                                   NumActiveAlive                                              ___ OFFSET(get<int32_t>, {0xDD4, 4, 0, 0})
	DMember(int32_t)                                   NumPendingCapRelevantAI                                     ___ OFFSET(get<int32_t>, {0xDD8, 4, 0, 0})
	CMember(TArray<FPendingSpawnInfo>)                 PendingSpawns                                               ___ OFFSET(get<T>, {0xE30, 16, 0, 0})
	DMember(int32_t)                                   MaxAISpawnedPerFrame                                        ___ OFFSET(get<int32_t>, {0xE40, 4, 0, 0})
	DMember(int32_t)                                   MaxAIDespawnedPerFrame                                      ___ OFFSET(get<int32_t>, {0xE44, 4, 0, 0})
	DMember(int32_t)                                   DespawnAllAIMaxAIDespawnedPerFrame                          ___ OFFSET(get<int32_t>, {0xE48, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    PendingDespawns                                             ___ OFFSET(get<T>, {0xE50, 16, 0, 0})
	DMember(int32_t)                                   NumWorldSubdivides                                          ___ OFFSET(get<int32_t>, {0xE68, 4, 0, 0})
	DMember(float)                                     MinAISpawnDistanceFromPlayers                               ___ OFFSET(get<float>, {0xE6C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     AmbientThreatPreferredPlacementActorTags                    ___ OFFSET(get<T>, {0xE70, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AmbientThreatRequiredPlacementActorTags                     ___ OFFSET(get<T>, {0xE90, 32, 0, 0})
	CMember(TArray<UFortAIEncounterInfo*>)             ActiveEncounters                                            ___ OFFSET(get<T>, {0xEB0, 16, 0, 0})
	CMember(TArray<UFortAIEncounterInfo*>)             InactiveEncounters                                          ___ OFFSET(get<T>, {0xEC0, 16, 0, 0})
	CMember(TArray<FFortPendingStoppedEncounterData>)  PendingStoppedEncounters                                    ___ OFFSET(get<T>, {0xED0, 16, 0, 0})
	CMember(UFortAIEncounterInfo*)                     ActiveDefaultEncounter                                      ___ OFFSET(get<T>, {0xEE0, 8, 0, 0})
	CMember(UFortAIEncounterInfo*)                     ActiveDummyDebugEncounter                                   ___ OFFSET(get<T>, {0xEE8, 8, 0, 0})
	CMember(TArray<UFortAIEncounterSequence*>)         EncounterSequences                                          ___ OFFSET(get<T>, {0xEF0, 16, 0, 0})
	CMember(UEQSRenderingComponent*)                   EQSRenderingComp                                            ___ OFFSET(get<T>, {0xF00, 8, 0, 0})
	DMember(int32_t)                                   DebugGraphUpdateFrequency                                   ___ OFFSET(get<int32_t>, {0xF08, 4, 0, 0})
	DMember(float)                                     MaxNormalLODDistanceToPlayer                                ___ OFFSET(get<float>, {0xF0C, 4, 0, 0})
	DMember(float)                                     AIRelevantDistanceToPlayer                                  ___ OFFSET(get<float>, {0xF10, 4, 0, 0})
	DMember(float)                                     EncounterRelevantDistanceToPlayer                           ___ OFFSET(get<float>, {0xF14, 4, 0, 0})
	DMember(float)                                     EncounterRelevantDistanceToDefender                         ___ OFFSET(get<float>, {0xF18, 4, 0, 0})
	CMember(TArray<TScriptInterface>)                  PatrolWards                                                 ___ OFFSET(get<T>, {0xF20, 16, 0, 0})
	DMember(int32_t)                                   MaxTotalActiveAliveAI                                       ___ OFFSET(get<int32_t>, {0xF34, 4, 0, 0})
	DMember(int32_t)                                   MaxEncounterActiveAliveAI                                   ___ OFFSET(get<int32_t>, {0xF38, 4, 0, 0})
	DMember(int32_t)                                   MaxSPUsed                                                   ___ OFFSET(get<int32_t>, {0xF3C, 4, 0, 0})
	CMember(TArray<FUtilityTypeFloatPair>)             DebugEncounterTopUtilityPercentages                         ___ OFFSET(get<T>, {0xF48, 16, 0, 0})
	CMember(TArray<UCurveFloat*>)                      DebugEncounterSpawnPointsCurves                             ___ OFFSET(get<T>, {0xF58, 16, 0, 0})
	DMember(bool)                                      bDebugAllowEncounterModifierTags                            ___ OFFSET(get<bool>, {0xF68, 1, 1, 0})
	DMember(int32_t)                                   SimulatedNumberOfPlayersForAIEncounters                     ___ OFFSET(get<int32_t>, {0xF6C, 4, 0, 0})
	DMember(int32_t)                                   MaxNumberOfEncounterGroups                                  ___ OFFSET(get<int32_t>, {0xFE8, 4, 0, 0})
	CMember(TArray<ABuildingProp_AISpawner*>)          RegisteredAISpawners                                        ___ OFFSET(get<T>, {0xFF0, 16, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIDirector
/// Size: 0x0008 (0x001008 - 0x001010)
class AAthenaAIDirector : public AFortAIDirector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4112;

public:
};

/// Class /Script/FortniteAI.AthenaAIDropper
/// Size: 0x0010 (0x000028 - 0x000038)
class UAthenaAIDropper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FDroppingAgentData>)                InactiveAgents                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIPerceptionManager
/// Size: 0x0010 (0x000038 - 0x000048)
class UAthenaAIPerceptionManager : public UAISubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/FortniteAI.AthenaNavSystemConfigOverride
/// Size: 0x0000 (0x0002A0 - 0x0002A0)
class AAthenaNavSystemConfigOverride : public ANavSystemConfigOverride
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
};

/// Class /Script/FortniteAI.AthenaAISettingsAIDIrectorLOD
/// Size: 0x00E8 (0x000030 - 0x000118)
class UAthenaAISettingsAIDIrectorLOD : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FPlayerLODViewConeConfig>)          PlayerLODViewConeConfigs                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FPlayerLODViewConeHysteresisConfig)        PlayerLODViewConeHysteresisConfig                           ___ OFFSET(get<T>, {0x40, 80, 0, 0})
	SMember(FScalableFloat)                            CouldBeVisibleViewConeAngleDegrees                          ___ OFFSET(get<T>, {0x90, 40, 0, 0})
	SMember(FScalableFloat)                            CouldBeVisibleMaxDistance                                   ___ OFFSET(get<T>, {0xB8, 40, 0, 0})
	SMember(FScalableFloat)                            LODSortHysteresisDistance                                   ___ OFFSET(get<T>, {0xE0, 40, 0, 0})
	CMember(TArray<FFortAIDirectorPerLODConfig>)       FortAIDirectorLODConfigs                                    ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAISettings
/// Size: 0x0068 (0x000030 - 0x000098)
class UAthenaAISettings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      bAllowAIDirector                                            ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bAllowAIGoalManager                                         ___ OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(bool)                                      bForceRVOUse                                                ___ OFFSET(get<bool>, {0x30, 1, 1, 2})
	DMember(float)                                     MaxPlayerSpeedScaleFootstepSounds                           ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MinFootstepHearingRange                                     ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxFootstepHearingRange                                     ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     DamagedHearingRange                                         ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     CrouchHearingModifier                                       ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaxNPCHearingRange                                          ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MaxPerceptualStimuliAge                                     ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     DeAggroRange                                                ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     ReducedDeAggroRange                                         ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     DurationReduceAggroLimits                                   ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	CMember(UClass*)                                   NavigationSystemConfig                                      ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TWeakObjectPtr<UAthenaAISettingsAIDIrectorLOD*>) AIDIrectorLOD                                         ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TArray<UClass*>)                           AIServices                                                  ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAISystem
/// Size: 0x00A0 (0x000178 - 0x000218)
class UFortAISystem : public UAISystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(TArray<UFortQueryTwoPointSolver*>)         TwoPointSolvers                                             ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(UFortInfluenceMap*)                        InfluenceMap                                                ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(UFortBotMissionManager*)                   BotManager                                                  ___ OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(TArray<UFortRiftBlockerComponent*>)        ActiveRiftBlockers                                          ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
	CMember(UAthenaAISpawner*)                         AISpawner                                                   ___ OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(UAthenaAIServiceManager*)                  AIServiceManager                                            ___ OFFSET(get<T>, {0x210, 8, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAISystem
/// Size: 0x0078 (0x000218 - 0x000290)
class UAthenaAISystem : public UFortAISystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(UAthenaAIPerceptionManager*)               PerceptionManager                                           ___ OFFSET(get<T>, {0x218, 8, 0, 0})
	CMember(UAthenaAIDropper*)                         AIDropper                                                   ___ OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(UAthenaAIPopulationTracker*)               AIPopulationTracker                                         ___ OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(UAthenaAIVehicleAvoidanceManager*)         AIVehicleAvoidanceManager                                   ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(TArray<AAthenaAIController*>)              AIControllers                                               ___ OFFSET(get<T>, {0x238, 16, 0, 0})
	CMember(TArray<UAthenaPathFollowingComponent*>)    PathFollowingComponents                                     ___ OFFSET(get<T>, {0x248, 16, 0, 0})
	CMember(TArray<AActor*>)                           RegisteredAISpawners                                        ___ OFFSET(get<T>, {0x258, 16, 0, 0})
	DMember(bool)                                      bUnlimitedAIHealth                                          ___ OFFSET(get<bool>, {0x268, 1, 1, 0})
	DMember(bool)                                      bNavigationReady                                            ___ OFFSET(get<bool>, {0x268, 1, 1, 1})
};

/// Class /Script/FortniteAI.AthenaCreativeRift
/// Size: 0x00F0 (0x000B30 - 0x000C20)
class AAthenaCreativeRift : public ABuildingRift
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3104;

public:
	CMember(USphereComponent*)                         DespawnSphereComponent                                      ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(ABuildingProp_AISpawner*)                  ParentTrap                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FFortEncounterSettings)                    OverrideEncounterSettings                                   ___ OFFSET(get<T>, {0xB38, 192, 0, 0})
	DMember(bool)                                      bHasLoadedSettings                                          ___ OFFSET(get<bool>, {0xBF8, 1, 0, 0})
	CMember(TArray<AFortPlayerPawn*>)                  DespawnPlayerOverlaps                                       ___ OFFSET(get<T>, {0xC00, 16, 0, 0})
	CMember(UFortAIManagerMinigameComponent*)          CachedAIMinigamecomponent                                   ___ OFFSET(get<T>, {0xC18, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortPathFollowingComponentBase
/// Size: 0x0020 (0x000318 - 0x000338)
class UFortPathFollowingComponentBase : public UCrowdFollowingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(AAIController*)                            AIController                                                ___ OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortPathFollowingComponent
/// Size: 0x00F0 (0x000338 - 0x000428)
class UFortPathFollowingComponent : public UFortPathFollowingComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(AFortAIController*)                        MyAI                                                        ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(float)                                     MovementBlockFrustrationCooldownSpeed                       ___ OFFSET(get<float>, {0x360, 4, 0, 0})
};

/// Class /Script/FortniteAI.AthenaPathFollowingComponent
/// Size: 0x0040 (0x000428 - 0x000468)
class UAthenaPathFollowingComponent : public UFortPathFollowingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	CMember(EAthenaPathFollowingFocus)                 FocusDirectionMethod                                        ___ OFFSET(get<T>, {0x428, 1, 0, 0})
	CMember(AAthenaAIController*)                      AthenaAIController                                          ___ OFFSET(get<T>, {0x448, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAITelemetryFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaAITelemetryFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAthenaAITelemetryData
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaAITelemetryData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAIComponent_Telemetry
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UFortAIComponent_Telemetry : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(AFortAIPawn*)                              PossessedPawn                                               ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(AAthenaAIController*)                      CachedAIController                                          ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(AController*)                              DeathInstigator                                             ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<UFortItemDefinition*>)              GrabbedPickups                                              ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<UFortItemDefinition*>)              DroppedPickups                                              ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_AIAnalytic*) AnalyticRuntimeParameters                                  ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TArray<UFortAthenaAITelemetryData*>)       TelemetryData                                               ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAIComponent_Voice
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFortAIComponent_Voice : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UFortTaggedSoundBank*)                     VoiceSoundBank                                              ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAIManagerMinigameComponent
/// Size: 0x0070 (0x0000A0 - 0x000110)
class UFortAIManagerMinigameComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FGameplayTag>)                      SpawnableAITypeTags                                         ___ OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAISpawnerUtilityComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UFortAISpawnerUtilityComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FGameplayTag)                              AIPawnSpawnTypeTag                                          ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
	CMember(UEnvQuery*)                                EnvironmentQuery                                            ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TArray<FEnvNamedValue>)                    QueryParams                                                 ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(float)                                     QueryRadius                                                 ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     QueryMinDistance                                            ___ OFFSET(get<float>, {0xC4, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnvironmentQueryFinishedDelegate                          ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUnownedPawnDiedDelegate                                   ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FVector>)                           FreeSpawnSlots                                              ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   CachedFortSpatialGameplay                                   ___ OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortPawnComponent_AIInventoryManagement
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortPawnComponent_AIInventoryManagement : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGameplayTagContainer)                     CanEquipItemTags                                            ___ OFFSET(get<T>, {0xA8, 32, 0, 0})
};

/// Class /Script/FortniteAI.FortAIDataProvider_Ability
/// Size: 0x0048 (0x000028 - 0x000070)
class UFortAIDataProvider_Ability : public UAIDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagContainer)                     AbilityTag                                                  ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AbilityBehaviorDistanceTag                                  ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	DMember(float)                                     BehaviorDistance                                            ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     MaxTargetSelectionRange                                     ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAIDataProvider_AIDirector
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortAIDataProvider_AIDirector : public UAIDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     AIRelevantDistanceToPlayer                                  ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     EncounterRelevantDistanceToPlayer                           ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAIDataProvider_FloatCurveOverGameDifficulty
/// Size: 0x0030 (0x000028 - 0x000058)
class UFortAIDataProvider_FloatCurveOverGameDifficulty : public UAIDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FScalableFloat)                            ScalableFloat                                               ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	DMember(float)                                     FloatValue                                                  ___ OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAIDataProvider_GoalProviderAbility
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAIDataProvider_GoalProviderAbility : public UFortAIDataProvider_Ability
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAI.FortAIDataProvider_Pawn
/// Size: 0x0038 (0x000028 - 0x000060)
class UFortAIDataProvider_Pawn : public UAIDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     SightRadius                                                 ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     HearingRadius                                               ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     ViewLocationOffsetFromGround                                ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MaxStepHeight                                               ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector)                                   TetheredBoxCenterLocation                                   ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(float)                                     TetheredBoxWidth                                            ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     TetheredBoxHeight                                           ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     TetheredBoxEQSGridSize                                      ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     TetheredBoxEQSSpaceBetween                                  ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAIDataProvider_ScalableFloat
/// Size: 0x0038 (0x000028 - 0x000060)
class UFortAIDataProvider_ScalableFloat : public UAIDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FScalableFloat)                            ScalableFloat                                               ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	DMember(float)                                     FloatValue                                                  ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   IntValue                                                    ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      BoolValue                                                   ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAIAssetLoader
/// Size: 0x0028 (0x000028 - 0x000050)
class UFortAIAssetLoader : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FPendingRequestManager>)            PendingRequests                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UObject*>)                          AssetsLoaded                                                ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAIAssignment
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class UFortAIAssignment : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FFortAIAssignmentIdentifier)               AssignmentIdentifier                                        ___ OFFSET(get<T>, {0x28, 48, 0, 0})
	CMember(UFortAIAssignmentSettings*)                AssignmentSettings                                          ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UFortAIGoalProvider*)                      GoalProvider                                                ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    GoalComponentsOnAssignment                                  ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FFortAIGoal>)                       Goals                                                       ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAIAssignmentSettings
/// Size: 0x0060 (0x000030 - 0x000090)
class UFortAIAssignmentSettings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FGoalSelectionQueryInfo>)           GoalSelectionQueryInfos                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bGoalLocationsAlwaysKnown                                   ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bIsEnemyAssignment                                          ___ OFFSET(get<bool>, {0x41, 1, 0, 0})
	SMember(FGameplayTagContainer)                     RequiredTags                                                ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ProhibitedTags                                              ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	DMember(float)                                     MaxAIAllowedForAssignment                                   ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     MaxAIAllowedPerGoal                                         ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAIBotDebugActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AFortAIBotDebugActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UAthenaAIBotDebugMiniMapIndicator*)        BotDebugMiniMapIndicator                                    ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAIBotPOIDebugActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AFortAIBotPOIDebugActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UAthenaAIBotPOIDebugMiniMapIndicator*)     BotPOIDebugMiniMapIndicator                                 ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAICustomTargetingComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UFortAICustomTargetingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<FAICustomTargetConfiguration>)      Configurations                                              ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAIDirectorLODAIConfig
/// Size: 0x0050 (0x000028 - 0x000078)
class UFortAIDirectorLODAIConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FScalableFloat)                            SingleAIUnitCost                                            ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            Priority                                                    ___ OFFSET(get<T>, {0x50, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAIDirectorDataManager
/// Size: 0x00E0 (0x000290 - 0x000370)
class AFortAIDirectorDataManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(UObject*)                                  OwnerObject                                                 ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TArray<FAIDirectorEventData>)              EventsToTrack                                               ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<FFortAIDirectorFactorData>)         FactorsToTrack                                              ___ OFFSET(get<T>, {0x2A8, 16, 0, 0})
	CMember(TArray<EFortAIDirectorFactor>)             FactorsBeingTracked                                         ___ OFFSET(get<T>, {0x358, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAIDirectorDataTrackingSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAIDirectorDataTrackingSettings : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UClass*)                                   PlayerDataManager                                           ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UClass*)                                   EncounterDataManager                                        ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAIDirectorEventManager
/// Size: 0x0050 (0x000290 - 0x0002E0)
class AFortAIDirectorEventManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Script/FortniteAI.FortAIEncounterInfo
/// Size: 0x0D70 (0x000028 - 0x000D98)
class UFortAIEncounterInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3480;

public:
	CMember(UFortAISpawnGroupProgressionInfo*)         SpawnGroupProgressionInfo                                   ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FFortSpawnPointsPercentageCurveSequenceInstanceInfo) SpawnPointsPercentageCurveSequence                ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FFortIntensityCurveSequenceInstanceInfo)   IntensityCurveSequence                                      ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(float)                                     BurstSpawnPointsPercentage                                  ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     SpawnPointsMultiplier                                       ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      bUseBreathers                                               ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FCurveTableRowHandle)                      LowPlayerPerformanceBreatherTimeSecondsCurve                ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      NormalPlayerPerformanceBreatherTimeSecondsCurve             ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FCurveTableRowHandle)                      HighPlayerPerformanceBreatherTimeSecondsCurve               ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(float)                                     EncounterTimeSeconds                                        ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	CMember(TArray<FUtilityTypeFloatPair>)             LockedUtilityValues                                         ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(int32_t)                                   NumFreeUtilities                                            ___ OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(float)                                     UtilityAdjustmentPeriodSeconds                              ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     MinSpawnDistance                                            ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     MaxSpawnDistance                                            ___ OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   NumDirections                                               ___ OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bChangeDirectionsOnRest                                     ___ OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(float)                                     SpawnPointsPercentageLimit                                  ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   PawnNumberLimit                                             ___ OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
	SMember(FFortEncounterPawnNumberCaps)              PawnNumberCaps                                              ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	DMember(float)                                     SpawningIntervalSeconds                                     ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     PreSpawnRequeryTime                                         ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	SMember(FFortEncounterSettingsFixedPace)           EncounterSettingsFixed                                      ___ OFFSET(get<T>, {0xF8, 20, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterSpawnDirectionsChosen                            ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(float)                                     NextRiftReplacementTime                                     ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     NextSpawningTime                                            ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	SMember(FFortAIEncounterSpawnGroupCapsProfile)     EncounterSpawnGroupCapsProfile                              ___ OFFSET(get<T>, {0x128, 48, 0, 0})
	CMember(TArray<FFortAIEncounterSpawnGroupCapsCategory>) AdditionalSpawnGroupCapsCategories                     ___ OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FFortAIEncounterSpawnPointsProfile)        EncounterSpawnPointsProfile                                 ___ OFFSET(get<T>, {0x168, 64, 0, 0})
	CMember(TArray<FFortAISpawnGroupUpgradeData>)      AvailableUpgrades                                           ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
	CMember(TArray<FCurveTableRowHandle>)              PawnDifficultyLevelModifiers                                ___ OFFSET(get<T>, {0x1B8, 16, 0, 0})
	CMember(TArray<FFortAIBaseLootDropRow>)            BaseLootDropRows                                            ___ OFFSET(get<T>, {0x1C8, 16, 0, 0})
	CMember(TArray<FFortAILootDropModifierRow>)        LootDropModifierRows                                        ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	DMember(bool)                                      bRequiresReinitializationFromProfile                        ___ OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	SMember(FCurveTableRowHandle)                      DesiredHostilityCurve                                       ___ OFFSET(get<T>, {0x1F0, 16, 0, 0})
	CMember(UFortIntensityCurveSequenceProgression*)   IntensitySequenceProgression                                ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	DMember(float)                                     AliveMultiplier                                             ___ OFFSET(get<float>, {0x278, 4, 0, 0})
	CMember(TEnumAsByte<EFortEncounterSpawnLimitType>) SpawnLimitType                                              ___ OFFSET(get<T>, {0x27C, 1, 0, 0})
	DMember(int32_t)                                   SpawnLimit                                                  ___ OFFSET(get<int32_t>, {0x280, 4, 0, 0})
	DMember(int32_t)                                   PawnNumberLimitProgress                                     ___ OFFSET(get<int32_t>, {0x284, 4, 0, 0})
	DMember(int32_t)                                   SpawnPointsLimitProgress                                    ___ OFFSET(get<int32_t>, {0x288, 4, 0, 0})
	DMember(bool)                                      bSpawnLimitReached                                          ___ OFFSET(get<bool>, {0x28C, 1, 0, 0})
	DMember(bool)                                      bHasSpawnedAllBurstSpawnAI                                  ___ OFFSET(get<bool>, {0x28D, 1, 0, 0})
	DMember(bool)                                      bOverrideAliveCounts                                        ___ OFFSET(get<bool>, {0x28E, 1, 0, 0})
	DMember(int32_t)                                   MinAliveOverride                                            ___ OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	DMember(int32_t)                                   MaxAliveOverride                                            ___ OFFSET(get<int32_t>, {0x294, 4, 0, 0})
	DMember(float)                                     HostilityThreshold                                          ___ OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     PeakTimeSeconds                                             ___ OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     BreatherTimeSeconds                                         ___ OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     MaxRampTimeSeconds                                          ___ OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     MinTimeBetweenBreathesSeconds                               ___ OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     MaxFadeTimeSeconds                                          ___ OFFSET(get<float>, {0x2AC, 4, 0, 0})
	DMember(float)                                     FadeEndIntensity                                            ___ OFFSET(get<float>, {0x2B0, 4, 0, 0})
	DMember(float)                                     FadeEndRemainingSpawnPointsPercentage                       ___ OFFSET(get<float>, {0x2B4, 4, 0, 0})
	DMember(float)                                     CompletionPercentageToDisableBreathers                      ___ OFFSET(get<float>, {0x2B8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterAllEnemiesKilled                                 ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterEnemySpawned                                     ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterEnemySpawnFailed                                 ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterAllBurstEnemiesSpawned                           ___ OFFSET(get<T>, {0x2F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterCompleted                                        ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterPawnDied                                         ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterSpawnedFinalEnemy                                ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterRiftSpawned                                      ___ OFFSET(get<T>, {0x330, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBuildingRiftBlockedShouldDie                              ___ OFFSET(get<T>, {0x340, 16, 0, 0})
	DMember(bool)                                      bDisplayThreatVisuals                                       ___ OFFSET(get<bool>, {0x353, 1, 0, 0})
	DMember(float)                                     BaseDesiredUtilities                                        ___ OFFSET(get<float>, {0x354, 64, 0, 0})
	SMember(FGameplayTagContainer)                     UtilitiesRequiredTags                                       ___ OFFSET(get<T>, {0x398, 512, 0, 0})
	SMember(FGameplayTagContainer)                     InjectedTagForUtilityCheck                                  ___ OFFSET(get<T>, {0x598, 32, 0, 0})
	DMember(float)                                     MaxLargeSpawnGroupDiscountInterval                          ___ OFFSET(get<float>, {0x5BC, 4, 0, 0})
	DMember(float)                                     MaxSelectionToSpawningDelay                                 ___ OFFSET(get<float>, {0x5C0, 4, 0, 0})
	CMember(TArray<FUtilityTypeFloatPair>)             CurrentDesiredUtilities                                     ___ OFFSET(get<T>, {0x618, 16, 0, 0})
	DMember(float)                                     UtilityRecentSelectionPenalties                             ___ OFFSET(get<float>, {0x628, 64, 0, 0})
	DMember(float)                                     UtilityEffectivenessMeasurements                            ___ OFFSET(get<float>, {0x668, 64, 0, 0})
	SMember(FCurveTableRowHandle)                      UtilityEffectivenessMultiplierCurve                         ___ OFFSET(get<T>, {0x6A8, 16, 0, 0})
	DMember(float)                                     UtilityEffectivenessInfluenceCap                            ___ OFFSET(get<float>, {0x6B8, 4, 0, 0})
	CMember(TArray<FUtilityTypeFloatPair>)             CurrentTopUtilityPercentages                                ___ OFFSET(get<T>, {0x6C0, 16, 0, 0})
	CMember(TArray<TEnumAsByte>)                       UsedTopUtilities                                            ___ OFFSET(get<T>, {0x6D0, 16, 0, 0})
	CMember(TArray<TEnumAsByte>)                       CurrentlySelectedFreeUtilities                              ___ OFFSET(get<T>, {0x6E0, 16, 0, 0})
	DMember(int32_t)                                   NumUtilitiesConsidered                                      ___ OFFSET(get<int32_t>, {0x6F0, 4, 0, 0})
	DMember(float)                                     ReactivityPercentage                                        ___ OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(bool)                                      bAdjustUtilitiesDuringRest                                  ___ OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(bool)                                      bDespawnAIsDuringRest                                       ___ OFFSET(get<bool>, {0x6F9, 1, 0, 0})
	DMember(float)                                     LastPlayerCombatFactorUpdateTime                            ___ OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     LastUtilityAdjustTime                                       ___ OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(float)                                     LastSpawnPointAdjustmentTime                                ___ OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(float)                                     LastLargeGroupSpawnTime                                     ___ OFFSET(get<float>, {0x708, 4, 0, 0})
	CMember(TArray<FAIEncounterSpawnGroupWeights>)     EnemySpawnData                                              ___ OFFSET(get<T>, {0x710, 16, 0, 0})
	SMember(FFortAIEncounterPIDController)             EncounterPIDController                                      ___ OFFSET(get<T>, {0x720, 104, 0, 0})
	DMember(int32_t)                                   CurrentSpawnPointsCap                                       ___ OFFSET(get<int32_t>, {0x788, 4, 0, 0})
	DMember(int32_t)                                   CurrentSpawnPointsUsed                                      ___ OFFSET(get<int32_t>, {0x78C, 4, 0, 0})
	DMember(int32_t)                                   FailSafeMinSpawnPoints                                      ___ OFFSET(get<int32_t>, {0x798, 4, 0, 0})
	CMember(TArray<FSpawnGroupInstanceInfo>)           ActiveSpawnGroups                                           ___ OFFSET(get<T>, {0x7A0, 16, 0, 0})
	DMember(float)                                     EncounterEngagementDistance                                 ___ OFFSET(get<float>, {0x7B0, 4, 0, 0})
	DMember(float)                                     MinRelevantBuildingDamagedDistance                          ___ OFFSET(get<float>, {0x7B4, 4, 0, 0})
	DMember(float)                                     MaxRelevantBuildingDamagedDistance                          ___ OFFSET(get<float>, {0x7B8, 4, 0, 0})
	CMember(AActor*)                                   CurrentGroupSpawnPoint                                      ___ OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(TEnumAsByte<EFortEncounterState>)          EncounterState                                              ___ OFFSET(get<T>, {0x7D8, 1, 0, 0})
	CMember(TEnumAsByte<EFortEncounterPacingState>)    PacingState                                                 ___ OFFSET(get<T>, {0x7D9, 1, 0, 0})
	DMember(float)                                     LastPacingStateTransitionTime                               ___ OFFSET(get<float>, {0x7DC, 4, 0, 0})
	SMember(FFortAIEncounterWaveProgressEstimation)    WaveProgressEstimate                                        ___ OFFSET(get<T>, {0x7E0, 28, 0, 0})
	DMember(float)                                     DesiredDifficultyLevel                                      ___ OFFSET(get<float>, {0x7FC, 4, 0, 0})
	DMember(float)                                     DifficultyLevelOverride                                     ___ OFFSET(get<float>, {0x800, 4, 0, 0})
	CMember(AFortAIDirector*)                          MyAIDirector                                                ___ OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(TArray<FFortGoalActorEncounterDataManagerPair>) DataManagers                                           ___ OFFSET(get<T>, {0x810, 16, 0, 0})
	CMember(AActor*)                                   TargetObjective                                             ___ OFFSET(get<T>, {0x820, 8, 0, 0})
	DMember(bool)                                      bOnlyActiveAtNight                                          ___ OFFSET(get<bool>, {0x828, 1, 0, 0})
	DMember(int32_t)                                   NumRiftsToUse                                               ___ OFFSET(get<int32_t>, {0x82C, 4, 0, 0})
	DMember(int32_t)                                   MinRiftsToUse                                               ___ OFFSET(get<int32_t>, {0x830, 4, 0, 0})
	DMember(int32_t)                                   NumRiftsUsed                                                ___ OFFSET(get<int32_t>, {0x834, 4, 0, 0})
	SMember(FFortEncounterSettings)                    EncounterSettings                                           ___ OFFSET(get<T>, {0x838, 192, 0, 0})
	DMember(float)                                     EncounterStartTime                                          ___ OFFSET(get<float>, {0x8F8, 4, 0, 0})
	DMember(float)                                     HostilityCurveStartTime                                     ___ OFFSET(get<float>, {0x8FC, 4, 0, 0})
	SMember(FEncounterEnvironmentQueryInfo)            DefaultEnvironmentQueryInfo                                 ___ OFFSET(get<T>, {0x900, 40, 0, 0})
	SMember(FEncounterEnvironmentQueryInfo)            FallbackEnvironmentQueryInfo                                ___ OFFSET(get<T>, {0x928, 40, 0, 0})
	SMember(FEncounterEnvironmentQueryInfo)            OverrideEnvironmentQueryInfo                                ___ OFFSET(get<T>, {0x950, 40, 0, 0})
	SMember(FEncounterEnvironmentQueryInfo)            CurrentEnvironmentQueryInfo                                 ___ OFFSET(get<T>, {0x978, 40, 0, 0})
	DMember(bool)                                      bNukeWavesAtDaybreak                                        ___ OFFSET(get<bool>, {0x9A0, 1, 0, 0})
	DMember(bool)                                      bNukeWavesAtEncounterEnd                                    ___ OFFSET(get<bool>, {0x9A1, 1, 0, 0})
	DMember(bool)                                      bNukeWavesAtEncounterDeactivation                           ___ OFFSET(get<bool>, {0x9A2, 1, 0, 0})
	DMember(int32_t)                                   ActiveEnemyCap                                              ___ OFFSET(get<int32_t>, {0x9A4, 4, 0, 0})
	DMember(float)                                     CurrentHostilityLevel                                       ___ OFFSET(get<float>, {0x9B0, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterRampStarted                                      ___ OFFSET(get<T>, {0x9B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterPeakStarted                                      ___ OFFSET(get<T>, {0x9C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterFadeStarted                                      ___ OFFSET(get<T>, {0x9D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterRestStarted                                      ___ OFFSET(get<T>, {0x9E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterCombatParticipation                              ___ OFFSET(get<T>, {0x9F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterOptionsChanged                                   ___ OFFSET(get<T>, {0xA08, 16, 0, 0})
	CMember(UClass*)                                   RiftClassTemplate                                           ___ OFFSET(get<T>, {0xA18, 8, 0, 0})
	CMember(TMap<TWeakObjectPtr, FFortAISpawnerData>)  ExternalAISpawners                                          ___ OFFSET(get<T>, {0xA40, 80, 0, 0})
	SMember(FFortAIEncounterQueryData)                 EncounterQueryData                                          ___ OFFSET(get<T>, {0xA90, 32, 0, 0})
	CMember(UFortAIEncounterRiftManager*)              RiftManager                                                 ___ OFFSET(get<T>, {0xAB0, 8, 0, 0})
	SMember(FString)                                   AssociatedMissionName                                       ___ OFFSET(get<T>, {0xAB8, 16, 0, 0})
	CMember(TEnumAsByte<EFortMissionType>)             AssociatedMissionType                                       ___ OFFSET(get<T>, {0xAC8, 1, 0, 0})
	DMember(bool)                                      bCanBeActive                                                ___ OFFSET(get<bool>, {0xACC, 1, 1, 0})
	CMember(TArray<UFortAIAssignment*>)                EncounterAssignments                                        ___ OFFSET(get<T>, {0xAD0, 16, 0, 0})
	CMember(UFortAIAssignmentSettings*)                DefaultEncounterAssignmentSettings                          ___ OFFSET(get<T>, {0xAE0, 8, 0, 0})
	DMember(int32_t)                                   MaxActiveAlive                                              ___ OFFSET(get<int32_t>, {0xB18, 4, 0, 0})
	DMember(int32_t)                                   MaxSpawnPointsUsed                                          ___ OFFSET(get<int32_t>, {0xB1C, 4, 0, 0})
	CMember(UCurveFloat*)                              OverrideSpawnPointsCurve                                    ___ OFFSET(get<T>, {0xB20, 8, 0, 0})
	DMember(bool)                                      bSendFullAnalyticsReport                                    ___ OFFSET(get<bool>, {0xD20, 1, 0, 0})
	DMember(bool)                                      bUseAILifespans                                             ___ OFFSET(get<bool>, {0xD21, 1, 0, 0})
	DMember(bool)                                      bTrackCombatParticipation                                   ___ OFFSET(get<bool>, {0xD22, 1, 0, 0})
	SMember(FGameplayTagContainer)                     ModifierTags                                                ___ OFFSET(get<T>, {0xD28, 32, 0, 0})
	CMember(TArray<FFortAIEncounterTimedModifierTags>) TimedModifierTags                                           ___ OFFSET(get<T>, {0xD48, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameContextTags                                             ___ OFFSET(get<T>, {0xD58, 32, 0, 0})
	CMember(AFortGameplayMutator_AILevelVariance*)     AILevelMutator                                              ___ OFFSET(get<T>, {0xD78, 8, 0, 0})
	CMember(TArray<AFortGameplayMutator_AIEncounterModifierTags*>) EncounterModifierTagsMutators                   ___ OFFSET(get<T>, {0xD80, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAIEncounterInfoOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAIEncounterInfoOwnerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAIEncounterRiftManager
/// Size: 0x0288 (0x000028 - 0x0002B0)
class UFortAIEncounterRiftManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(UFortAIEncounterInfo*)                     MyEncounter                                                 ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(AFortAIDirector*)                          AIDirector                                                  ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FFortAIEncounterSpawnArea)                 CurrentSpawnArea                                            ___ OFFSET(get<T>, {0x48, 88, 0, 0})
	SMember(FFortAIEncounterSpawnArea)                 FutureSpawnArea                                             ___ OFFSET(get<T>, {0xA0, 88, 0, 0})
	DMember(float)                                     UpdateIntervalTimeSeconds                                   ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(int32_t)                                   NumRiftsToUse                                               ___ OFFSET(get<int32_t>, {0xFC, 4, 0, 0})
	DMember(int32_t)                                   MinRiftsToUse                                               ___ OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	SMember(FFortEncounterSettings)                    EncounterSettings                                           ___ OFFSET(get<T>, {0x108, 192, 0, 0})
	DMember(float)                                     ExtraSpawnLocationPercentage                                ___ OFFSET(get<float>, {0x1C8, 4, 0, 0})
	SMember(FEncounterEnvironmentQueryInfo)            CurrentEnvironmentQueryInfo                                 ___ OFFSET(get<T>, {0x1D0, 40, 0, 0})
	SMember(FEncounterEnvironmentQueryInfo)            FallbackEnvironmentQueryInfo                                ___ OFFSET(get<T>, {0x1F8, 40, 0, 0})
	SMember(FFortAIEncounterQueryDirectionTracker)     EncounterQueryDirectionTracker                              ___ OFFSET(get<T>, {0x220, 72, 0, 0})
	CMember(UClass*)                                   RiftClassTemplate                                           ___ OFFSET(get<T>, {0x268, 8, 0, 0})
	DMember(float)                                     LastObjectiveBatchPathCostUpdateTime                        ___ OFFSET(get<float>, {0x270, 4, 0, 0})
	DMember(float)                                     LastPlayerBatchPathCostUpdateTime                           ___ OFFSET(get<float>, {0x274, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAIEncounterSequence
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UFortAIEncounterSequence : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FFortGeneratedEncounterSequence)           GeneratedEncounterSequence                                  ___ OFFSET(get<T>, {0x28, 48, 0, 0})
	DMember(int32_t)                                   CurrentEncounterIndexInSequence                             ___ OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(UFortAIEncounterInfo*)                     CurrentEncounter                                            ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(AFortAIDirector*)                          AssociatedAIDirector                                        ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(AFortMission*)                             AssociatedMission                                           ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TArray<AActor*>)                           TargetActors                                                ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(UFortAIAssignmentSettings*)                AssignmentSettings                                          ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FEncounterEnvironmentQueryInfo)            OverrideEnvironmentQueryInfo                                ___ OFFSET(get<T>, {0x90, 40, 0, 0})
	CMember(AActor*)                                   OptionalQueryActor                                          ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     InjectedTags                                                ___ OFFSET(get<T>, {0xC0, 32, 0, 0})
	SMember(FFortEncounterSettings)                    EncounterSettings                                           ___ OFFSET(get<T>, {0xE0, 192, 0, 0})
};

/// Class /Script/FortniteAI.FortAIEncounterTargetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAIEncounterTargetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAIFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAIFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAIGoalManager
/// Size: 0x0170 (0x000290 - 0x000400)
class AFortAIGoalManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(TArray<UFortAIAssignment*>)                WorldAssignments                                            ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<UFortAIAssignment*>)                WorldEnemyAssignments                                       ___ OFFSET(get<T>, {0x2A8, 16, 0, 0})
	CMember(UFortAIAssignment*)                        DefaultAttackPlayersAssignment                              ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(TArray<UEnvQuery*>)                        CombinedQueries                                             ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(UFortAIAssignmentSettings*)                DefaultEncounterAssignmentSettings                          ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UFortAIAssignmentSettings*)                DefaultEnemyAssignmentSettings                              ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(TArray<FPawnGoalSelectionTableEntry>)      PawnGoalSelectionTable                                      ___ OFFSET(get<T>, {0x390, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAINearbyActorsPerceptionComponent
/// Size: 0x0018 (0x0000C8 - 0x0000E0)
class UFortAINearbyActorsPerceptionComponent : public UFortNearbyActorsPerceptionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TScriptInterface<Class>)                   CachedLODSettingsManager                                    ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAIObjectiveInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAIObjectiveInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAIPawnCustomizationDefinition
/// Size: 0x0068 (0x000030 - 0x000098)
class UFortAIPawnCustomizationDefinition : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TWeakObjectPtr<USkeletalMesh*>)            SkeletalMesh                                                ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	CMember(TArray<FFortAIPawnMaterialDefinition>)     OverrideMaterials                                           ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AnimationBP                                                 ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TArray<UCustomCharacterPart*>)             CharacterParts                                              ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAIPawnVariant
/// Size: 0x0048 (0x000028 - 0x000070)
class UFortAIPawnVariant : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<UClass*>)                           PawnClasses                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FFortAIPawnVariantDefinition>)      PawnVariantDefinitions                                      ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(int32_t)                                   MinPlayersToSpawnVariant                                    ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FDataTableRowHandle)                       SpawnPointValueHandle                                       ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   CachedSpawnPointValue                                       ___ OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(float)                                     EncounterExpectedLifespan                                   ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(int32_t)                                   VersionNum                                                  ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAIRootAssignmentProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAIRootAssignmentProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAISpawnerActorBase
/// Size: 0x0000 (0x000290 - 0x000290)
class AFortAISpawnerActorBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/FortniteAI.FortAISpawnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAISpawnerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAISpawnGroup
/// Size: 0x0160 (0x000030 - 0x000190)
class UFortAISpawnGroup : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(float)                                     EnemyUtilities                                              ___ OFFSET(get<float>, {0x30, 64, 0, 0})
	CMember(TArray<FSpawnGroupEnemy>)                  EnemiesToSpawn                                              ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bIsPrototype                                                ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bIsValidForEnemySpawners                                    ___ OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(bool)                                      bIsLargeSpawnGroup                                          ___ OFFSET(get<bool>, {0x82, 1, 0, 0})
	DMember(float)                                     MaxDiscountRatio                                            ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      bUseWeightSystem                                            ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      ___ OFFSET(get<T>, {0x90, 40, 0, 0})
	SMember(FScalableFloat)                            MinNumber                                                   ___ OFFSET(get<T>, {0xB8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxNumber                                                   ___ OFFSET(get<T>, {0xE0, 40, 0, 0})
	SMember(FCurveTableRowHandle)                      MaxGroupCategoryPopulationDensityCurve                      ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<FFortSpawnGroupEncounterTypeData>)  EncounterTypeData                                           ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FGameplayTagContainer)                     SpawnGroupGameplayTags                                      ___ OFFSET(get<T>, {0x128, 32, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredTagQuery                                            ___ OFFSET(get<T>, {0x148, 72, 0, 0})
};

/// Class /Script/FortniteAI.FortAISpawnGroupCapsCategorySet
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortAISpawnGroupCapsCategorySet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FFortAIEncounterSpawnGroupCapsCategory>) SpawnGroupCapsCategories                               ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAISpawnGroupProgressionInfo
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAISpawnGroupProgressionInfo : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FSpawnGroupProgression>)            SpawnGroups                                                 ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAISpawnGroupUpgrade
/// Size: 0x00F0 (0x000028 - 0x000118)
class UFortAISpawnGroupUpgrade : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FGameplayTagContainer)                     UpgradeTags                                                 ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FGameplayTagQuery)                         GroupRequiredTagQuery                                       ___ OFFSET(get<T>, {0x48, 72, 0, 0})
	CMember(TArray<FFortAIPawnUpgrade>)                BasePawnUpgrades                                            ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FName)                                     AdditionalModifiersLootTierGroup                            ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
	DMember(bool)                                      bInvalidForEnemySpawners                                    ___ OFFSET(get<bool>, {0xA4, 1, 0, 0})
	DMember(float)                                     SpawnGroupDiscountPercentage                                ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	SMember(FFortAISpawnGroupUpgradeUIData)            UIData                                                      ___ OFFSET(get<T>, {0xB0, 104, 0, 0})
};

/// Class /Script/FortniteAI.FortAISpawnGroupUpgradeProbabilities
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortAISpawnGroupUpgradeProbabilities : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bIsGuaranteedUpgrade                                        ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<FFortAIPawnUpgradeProbability>)     UpgradeProbabilities                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAITetheringBoxBoundsInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAITetheringBoxBoundsInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings
/// Size: 0x0258 (0x000030 - 0x000288)
class UFortAsyncAction_MakeTieredWaveEncounterSettings : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	SMember(FMulticastInlineDelegate)                  OnComplete                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FTieredWaveSetData)                        WaveData                                                    ___ OFFSET(get<T>, {0x40, 376, 0, 0})
	SMember(FFortEncounterSettings)                    EncounterSettings                                           ___ OFFSET(get<T>, {0x1B8, 192, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotController
/// Size: 0x1378 (0x0003B8 - 0x001730)
class AFortAthenaAIBotController : public AAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5936;

public:
	SMember(FMulticastInlineDelegate)                  OnTeamSetDelegate                                           ___ OFFSET(get<T>, {0x408, 16, 0, 0})
	CMember(AActor*)                                   PreviousVehicle                                             ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPickupCreated                                             ___ OFFSET(get<T>, {0x440, 16, 0, 0})
	CMember(TMap<FGuid, FFortAbilitySetHandle>)        AppliedInGameModifierAbilitySetHandles                      ___ OFFSET(get<T>, {0x460, 80, 0, 0})
	CMember(TSet<FGuid>)                               GadgetTrackedAttributeItemInstanceIds                       ___ OFFSET(get<T>, {0x4B0, 80, 0, 0})
	SMember(FFortBotTargetHandler)                     TargetHandler                                               ___ OFFSET(get<T>, {0x550, 64, 0, 0})
	DMember(bool)                                      bIsAnAthenaGameParticipant                                  ___ OFFSET(get<bool>, {0x591, 1, 1, 1})
	CMember(EReachLocationValidationMode)              ReachLocationValidationMode                                 ___ OFFSET(get<T>, {0x598, 1, 0, 0})
	CMember(UBehaviorTree*)                            BehaviorTree                                                ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	SMember(FFortBotInventoryInfo)                     SlotItems                                                   ___ OFFSET(get<T>, {0x5A8, 624, 0, 0})
	CMember(UFortAthenaAIBotInventoryDigestedSkillSet*) CacheInventoryDigestedSkillSet                             ___ OFFSET(get<T>, {0x860, 8, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    PlayerBotPawn                                               ___ OFFSET(get<T>, {0x870, 8, 0, 0})
	CMember(UAthenaAIServicePlayerBots*)               CachedAIServicePlayerBots                                   ___ OFFSET(get<T>, {0x878, 8, 0, 0})
	CMember(AFortGameModeAthena*)                      CachedGameMode                                              ___ OFFSET(get<T>, {0x880, 8, 0, 0})
	CMember(UFortAthenaAIRuntimeParametersComponent*)  CachedAIRuntimeParametersComponent                          ___ OFFSET(get<T>, {0x888, 8, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_Leash*)     CachedLeashRuntimeParameters                                ___ OFFSET(get<T>, {0x890, 8, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_AffiliationBase*) CachedAffiliationRuntimeParameters                    ___ OFFSET(get<T>, {0x898, 8, 0, 0})
	CMember(UFortAthenaNpcPatrollingComponent*)        CachedPatrollingComponent                                   ___ OFFSET(get<T>, {0x8A0, 8, 0, 0})
	CMember(UFortAIControllerPerksComponent*)          CachedAIPerksComponent                                      ___ OFFSET(get<T>, {0x8A8, 8, 0, 0})
	CMember(UFortAICombatTokenConsumerComponent*)      CachedTokenConsumerComponent                                ___ OFFSET(get<T>, {0x8B0, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   CachedAIAimingInterface                                     ___ OFFSET(get<T>, {0x8B8, 16, 0, 0})
	CMember(TArray<FBotDelayedStimulus>)               DelayedStimulus                                             ___ OFFSET(get<T>, {0x8D0, 16, 0, 0})
	CMember(TArray<FFortBotThreatActorInfo>)           ObjectsThreatList                                           ___ OFFSET(get<T>, {0x8F8, 16, 0, 0})
	CMember(TArray<FFortBotThreatActorInfo>)           TrapsThreatList                                             ___ OFFSET(get<T>, {0x908, 16, 0, 0})
	CMember(EAlertLevel)                               CurrentAlertLevel                                           ___ OFFSET(get<T>, {0x918, 1, 0, 0})
	SMember(FAlertLevelInfo)                           DefaultAlertLevelInfo                                       ___ OFFSET(get<T>, {0x920, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAlertLevelChangedEventDelegate                            ___ OFFSET(get<T>, {0x930, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStealthMeterChangedEventDelegate                          ___ OFFSET(get<T>, {0x940, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAgentDBNOStatusChangedEventDelegate                       ___ OFFSET(get<T>, {0x958, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAgentDiedEventDelegate                                    ___ OFFSET(get<T>, {0x968, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAgentGameOver                                             ___ OFFSET(get<T>, {0x978, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerPawnKilledByBot                                     ___ OFFSET(get<T>, {0x9D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAIPawnKilledByBot                                         ___ OFFSET(get<T>, {0x9E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCurrentTargetChangedDelegate                              ___ OFFSET(get<T>, {0x9F0, 16, 0, 0})
	CMember(AFortInventory*)                           Inventory                                                   ___ OFFSET(get<T>, {0xA30, 8, 0, 0})
	DMember(float)                                     Skill                                                       ___ OFFSET(get<float>, {0xA38, 4, 0, 0})
	DMember(bool)                                      bAllowUnsupportedItemsInDefaultInventory                    ___ OFFSET(get<bool>, {0xA3C, 1, 1, 0})
	CMember(TArray<UClass*>)                           BotSkillSetClasses                                          ___ OFFSET(get<T>, {0xA40, 16, 0, 0})
	CMember(UFortAthenaAIBotInventoryItems*)           StartupInventory                                            ___ OFFSET(get<T>, {0xA70, 8, 0, 0})
	SMember(FFortAthenaLoadout)                        CosmeticLoadoutBC                                           ___ OFFSET(get<T>, {0xA78, 608, 0, 0})
	CMember(TArray<UCustomCharacterPart*>)             CustomCharacterPartOverridesBC                              ___ OFFSET(get<T>, {0xCD8, 16, 0, 0})
	CMember(UFortBotNameSettings*)                     NameSettingsBC                                              ___ OFFSET(get<T>, {0xCE8, 8, 0, 0})
	SMember(FScalableFloat)                            SpectateOnDeathMinTime                                      ___ OFFSET(get<T>, {0xCF0, 40, 0, 0})
	SMember(FScalableFloat)                            SpectateOnDeathMaxTime                                      ___ OFFSET(get<T>, {0xD18, 40, 0, 0})
	SMember(FScalableFloat)                            EmotesMaxCount                                              ___ OFFSET(get<T>, {0xD40, 40, 0, 0})
	SMember(FVector)                                   LeashGameplayVolumeProjectExtent                            ___ OFFSET(get<T>, {0xD68, 24, 0, 0})
	CMember(UFortAthenaAIBotPerceptionDigestedSkillSet*) CachePerceptionDigestedSkillSet                           ___ OFFSET(get<T>, {0xD80, 8, 0, 0})
	CMember(UFortAthenaAIBotHarvestDigestedSkillSet*)  CacheHarvestDigestedSkillSet                                ___ OFFSET(get<T>, {0xD88, 8, 0, 0})
	CMember(UFortAthenaAIBotMovementDigestedSkillSet*) CacheMovementSkillSet                                       ___ OFFSET(get<T>, {0xD90, 8, 0, 0})
	CMember(UFortAthenaAIBotLootingDigestedSkillSet*)  CacheLootingSkillSet                                        ___ OFFSET(get<T>, {0xD98, 8, 0, 0})
	CMember(UFortAthenaAIBotAttackingDigestedSkillSet*) CacheAttackingSkillSet                                     ___ OFFSET(get<T>, {0xDA0, 8, 0, 0})
	CMember(UFortAthenaAIBotPlayStyleDigestedSkillSet*) CachePlayStyleSkillSet                                     ___ OFFSET(get<T>, {0xDA8, 8, 0, 0})
	CMember(UFortAthenaAIBotUnstuckDigestedSkillSet*)  CacheUnstuckSkillSet                                        ___ OFFSET(get<T>, {0xDB0, 8, 0, 0})
	CMember(UFortAthenaAIBotRangeAttackDigestedSkillSet*) CacheRangeAttackSkillSet                                 ___ OFFSET(get<T>, {0xDB8, 8, 0, 0})
	CMember(UFortAthenaAIBotVehicleDigestedSkillSet*)  CacheVehicleSkillSet                                        ___ OFFSET(get<T>, {0xDC0, 8, 0, 0})
	CMember(UFortInteractContextInfo*)                 InteractContextInfo                                         ___ OFFSET(get<T>, {0xE28, 8, 0, 0})
	CMember(UFortAthenaAIBotAimingDigestedSkillSet*)   CacheAimingDigestedSkillSet                                 ___ OFFSET(get<T>, {0xEA8, 8, 0, 0})
	DMember(bool)                                      bCanBeDestroyedOnDeath                                      ___ OFFSET(get<bool>, {0xEB4, 1, 1, 1})
	SMember(FVector)                                   LastDeathLocation                                           ___ OFFSET(get<T>, {0xEC0, 24, 0, 0})
	SMember(FRotator)                                  LastDeathRotation                                           ___ OFFSET(get<T>, {0xED8, 24, 0, 0})
	CMember(UFortWorldItem*)                           CachedWorldItem                                             ___ OFFSET(get<T>, {0xEF0, 8, 0, 0})
	CMember(AFortWeapon*)                              CacheWeaponUsedToCalculateType                              ___ OFFSET(get<T>, {0xF00, 8, 0, 0})
	DMember(bool)                                      bCachedIsUsingArcedProjectileWeapon                         ___ OFFSET(get<bool>, {0xF08, 1, 0, 0})
	DMember(float)                                     CachedProjectileGravityScale                                ___ OFFSET(get<float>, {0xF0C, 4, 0, 0})
	CMember(AFortWeapon*)                              CachedWeaponUsedToCalculateProjectileData                   ___ OFFSET(get<T>, {0xF10, 8, 0, 0})
	CMember(UStatManager*)                             StatManager                                                 ___ OFFSET(get<T>, {0xF18, 8, 0, 0})
	CMember(TArray<FBuildingWeakSpotData>)             ActiveWeakSpots                                             ___ OFFSET(get<T>, {0xF20, 16, 0, 0})
	CMember(UClass*)                                   CacheBotPawnClass                                           ___ OFFSET(get<T>, {0xF58, 8, 0, 0})
	CMember(AActor*)                                   CurrentLootActor                                            ___ OFFSET(get<T>, {0xF68, 8, 0, 0})
	CMember(UAthenaMarkerComponent*)                   MarkerComponent                                             ___ OFFSET(get<T>, {0xF70, 8, 0, 0})
	SMember(FString)                                   BotPlayerName                                               ___ OFFSET(get<T>, {0xF78, 16, 0, 0})
	SMember(FGameplayTag)                              DescriptorTag                                               ___ OFFSET(get<T>, {0xF88, 4, 0, 0})
	SMember(FString)                                   BotIDSuffix                                                 ___ OFFSET(get<T>, {0xF90, 16, 0, 0})
	SMember(FString)                                   BotPlayerNameWithSkillRating                                ___ OFFSET(get<T>, {0xFA0, 16, 0, 0})
	CMember(UFortAthenaMutator_SpawningPolicyData*)    PolicyDataSpawner                                           ___ OFFSET(get<T>, {0xFC0, 8, 0, 0})
	CMember(UFortControllerComponent_Telemetry*)       FortControllerComponent_Telemetry                           ___ OFFSET(get<T>, {0x10F0, 8, 0, 0})
	DMember(bool)                                      bForceUsingBuildingTool                                     ___ OFFSET(get<bool>, {0x10F8, 1, 0, 0})
	DMember(bool)                                      bForceHolsterWeapon                                         ___ OFFSET(get<bool>, {0x10F9, 1, 0, 0})
	CMember(UFortWorldItem*)                           PendingEquipWeapon                                          ___ OFFSET(get<T>, {0x1100, 8, 0, 0})
	CMember(APawn*)                                    PlayerToSpectateOnDeath                                     ___ OFFSET(get<T>, {0x1158, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayerPawnAISpawnedDelegate                               ___ OFFSET(get<T>, {0x1160, 16, 0, 0})
	CMember(UAISenseConfig_Sight*)                     AISenseConfig_SightOverride                                 ___ OFFSET(get<T>, {0x1290, 8, 0, 0})
	CMember(UAISenseConfig_Hearing*)                   AISenseConfig_HearingOverride                               ___ OFFSET(get<T>, {0x1298, 8, 0, 0})
	CMember(AActor*)                                   BotOwner                                                    ___ OFFSET(get<T>, {0x12B0, 8, 0, 0})
	DMember(int32_t)                                   BotControllerUID                                            ___ OFFSET(get<int32_t>, {0x12B8, 4, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    ReviveTarget                                                ___ OFFSET(get<T>, {0x12C0, 8, 0, 0})
	CMember(UFortAthenaAIBotCustomizationData*)        BotData                                                     ___ OFFSET(get<T>, {0x1358, 8, 0, 0})
	SMember(FDebugMinimapData)                         DebugMinimapData                                            ___ OFFSET(get<T>, {0x1360, 432, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    RevivePlayerPawnToken                                       ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(AActor*)                                   LeashActorToFollow                                          ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	SMember(FVector)                                   LeashActorToFollowLocalOffset                               ___ OFFSET(get<T>, {0x1538, 24, 0, 0})
	CMember(AFortAthenaAILeashVolume*)                 LeashVolume                                                 ___ OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(TWeakObjectPtr<AGameplayVolume*>)          LeashGameplayVolume                                         ___ OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(UFortGameStateComponent_AffiliationManager*) CachedAffiliationManager                                  ___ OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UFortActorComponent_Affiliation*)          CachedAffiliationComponent                                  ___ OFFSET(get<T>, {0x1568, 8, 0, 0})
	DMember(bool)                                      bIsAffectedByMutatorHealthAndShieldModifiers                ___ OFFSET(get<bool>, {0x1570, 1, 0, 0})
	DMember(bool)                                      bHasChangedPawnCullDistanceToAggroMode                      ___ OFFSET(get<bool>, {0x1578, 1, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_AIBotRespawn*) RespawnRuntimeParameters                                 ___ OFFSET(get<T>, {0x1580, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   CurrentBlockingObstacle                                     ___ OFFSET(get<T>, {0x1588, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    NoSmashActors                                               ___ OFFSET(get<T>, {0x15A0, 16, 0, 0})
	CMember(APawn*)                                    FinisherPawn                                                ___ OFFSET(get<T>, {0x15B8, 8, 0, 0})
	CMember(EFortPawnStasisMode)                       PreviousStasisMode                                          ___ OFFSET(get<T>, {0x1614, 1, 0, 0})
	DMember(bool)                                      bPostponeGiveWeaponCheat                                    ___ OFFSET(get<bool>, {0x1615, 1, 0, 0})
	DMember(bool)                                      bPostponeGiveMaterialsCheat                                 ___ OFFSET(get<bool>, {0x1616, 1, 0, 0})
	DMember(float)                                     StartSpectatingTime                                         ___ OFFSET(get<float>, {0x1618, 4, 0, 0})
	CMember(UAthenaDanceItemDefinition*)               RequestedEmoteAsset                                         ___ OFFSET(get<T>, {0x16D0, 8, 0, 0})
	CMember(UBehaviorTree*)                            BTAssetToRunOnPawnAISpawned                                 ___ OFFSET(get<T>, {0x16E0, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotNameDataAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortAthenaAIBotNameDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               DefaultNameDataTable                                        ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               ChinaNameDataTable                                          ___ OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(TArray<FFortAthenaAIBotNameRegionData>)    RegionData                                                  ___ OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaTrackableAIObjectComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UFortAthenaTrackableAIObjectComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FGameplayTagContainer)                     GameplayTags                                                ___ OFFSET(get<T>, {0xB0, 32, 0, 0})
	CMember(UClass*)                                   CustomRegistrationClass                                     ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaTrackableAIObjectVehicleComponent
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UFortAthenaTrackableAIObjectVehicleComponent : public UFortAthenaTrackableAIObjectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/FortniteAI.FortBlackboardComponent
/// Size: 0x0000 (0x0001A8 - 0x0001A8)
class UFortBlackboardComponent : public UBlackboardComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
};

/// Class /Script/FortniteAI.FortBTDecorator_QueryGameplayAbility
/// Size: 0x0098 (0x000068 - 0x000100)
class UFortBTDecorator_QueryGameplayAbility : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FGameplayTagContainer)                     GameplayAbilityTag                                          ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	SMember(FBlackboardKeySelector)                    GameplayAbilityTagBlackboardKey                             ___ OFFSET(get<T>, {0x88, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    Target                                                      ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	SMember(FGameplayTagContainer)                     ActiveAbilityTagsToSkipTesting                              ___ OFFSET(get<T>, {0xD8, 32, 0, 0})
	DMember(bool)                                      bUseTarget                                                  ___ OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bUseBlackboardTag                                           ___ OFFSET(get<bool>, {0xF9, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortBTTask_TriggerVOEvent
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UFortBTTask_TriggerVOEvent : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bUseFeedbackBank                                            ___ OFFSET(get<bool>, {0x70, 1, 1, 0})
	SMember(FString)                                   CustomEventName                                             ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   SelectedEvent                                               ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(UFortFeedbackBank*)                        FeedbackBank                                                ___ OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortCreativeCreatureManagerInfoComponent
/// Size: 0x00B0 (0x000158 - 0x000208)
class UFortCreativeCreatureManagerInfoComponent : public UFortMinigameLogicComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TWeakObjectPtr<UClass*>)                   CreatureBlueprintClass                                      ___ OFFSET(get<T>, {0x170, 32, 0, 0})
	DMember(int32_t)                                   MaxHealth                                                   ___ OFFSET(get<int32_t>, {0x190, 4, 0, 0})
	DMember(float)                                     HearingAggroRange                                           ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(int32_t)                                   ScorePoints                                                 ___ OFFSET(get<int32_t>, {0x198, 4, 0, 0})
	DMember(float)                                     DamageCaused                                                ___ OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(float)                                     EnvironmentalDamageOverride                                 ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     MovementSpeedMultiplier                                     ___ OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(bool)                                      bImmuneToWeaponKnockback                                    ___ OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	CMember(UFortCreativeCreatureManagerComponent*)    CreatureManagerComponent                                    ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(UClass*)                                   DamageOverrideEffect                                        ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(UClass*)                                   EnvironmentalDamageOverrideEffect                           ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(UClass*)                                   MovementSpeedOverrideEffect                                 ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(UClass*)                                   WeaponKnockbackImmunityEffect                               ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(UClass*)                                   MaxHealthOverrideEffect                                     ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(EScoreDistributionType)                    ScoreDistribution                                           ___ OFFSET(get<T>, {0x1E0, 1, 0, 0})
	CMember(ECreatureManagerAffectedTargets)           AffectedTargetsType                                         ___ OFFSET(get<T>, {0x1E1, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortCreativeCreatureManagerComponent
/// Size: 0x00C0 (0x0000A0 - 0x000160)
class UFortCreativeCreatureManagerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TArray<UFortCreativeCreatureManagerInfoComponent*>) CreatureManagerInfos                               ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TMap<TWeakObjectPtr, UFortCreativeCreatureManagerInfoComponent*>) EnabledCreatureManagerInfos          ___ OFFSET(get<T>, {0xB0, 80, 0, 0})
};

/// Class /Script/FortniteAI.FortCrowdManager
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UFortCrowdManager : public UCrowdManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/FortniteAI.FortEnemySpawn
/// Size: 0x0008 (0x000710 - 0x000718)
class AFortEnemySpawn : public ABuildingActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1816;

public:
	DMember(float)                                     ClusterRadius                                               ___ OFFSET(get<float>, {0x710, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortEnvQueryManager
/// Size: 0x0060 (0x000158 - 0x0001B8)
class UFortEnvQueryManager : public UEnvQueryManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(TArray<FEnvQueryManagerConfig>)            EnvManagerConfigPerGamePhase                                ___ OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FEnvQueryManagerConfig)                    EnvManagerConfigSTW                                         ___ OFFSET(get<T>, {0x168, 48, 0, 0})
};

/// Class /Script/FortniteAI.FortQueryContext_WorldLocationParam
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_WorldLocationParam : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortQueryItemType_Goal
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortQueryItemType_Goal : public UEnvQueryItemType_ActorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortQueryTwoPointSolver
/// Size: 0x0118 (0x000028 - 0x000140)
class UFortQueryTwoPointSolver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(UEnvQuery*)                                QueryPointA                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UEnvQuery*)                                QueryPointB                                                 ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FEnvNamedValue>)                    QueryParamsA                                                ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FEnvNamedValue>)                    QueryParamsB                                                ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailed                                                    ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(ETwoPointSolverRotationA)                  RotationMode                                                ___ OFFSET(get<T>, {0x78, 1, 0, 0})
	SMember(FRotator)                                  MinRotationOffset                                           ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FRotator)                                  MaxRotationOffset                                           ___ OFFSET(get<T>, {0x98, 24, 0, 0})
	DMember(bool)                                      bUseNegativeAngleOffsets                                    ___ OFFSET(get<bool>, {0xB0, 1, 1, 0})
	DMember(bool)                                      bUsePositiveAngleOffsets                                    ___ OFFSET(get<bool>, {0xB0, 1, 1, 1})
	CMember(UFortAISystem*)                            AISys                                                       ___ OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(UObject*)                                  CachedQuerier                                               ___ OFFSET(get<T>, {0x138, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortForcedLODZone
/// Size: 0x0008 (0x000290 - 0x000298)
class AFortForcedLODZone : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(EFortAILODLevel)                           ForcedLODLevel                                              ___ OFFSET(get<T>, {0x290, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortGameplayAbility_TeleportToActor
/// Size: 0x0038 (0x000B28 - 0x000B60)
class UFortGameplayAbility_TeleportToActor : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2912;

public:
	DMember(bool)                                      bCheckPlayerLOSWhenTeleporting                              ___ OFFSET(get<bool>, {0xB2C, 1, 0, 0})
	DMember(float)                                     MaxDistanceToConsiderLOS                                    ___ OFFSET(get<float>, {0xB30, 4, 0, 0})
	DMember(float)                                     PlayerFOV                                                   ___ OFFSET(get<float>, {0xB34, 4, 0, 0})
	DMember(float)                                     TeleportDelay                                               ___ OFFSET(get<float>, {0xB38, 4, 0, 0})
	DMember(int32_t)                                   TeleportRetries                                             ___ OFFSET(get<int32_t>, {0xB3C, 4, 0, 0})
	DMember(float)                                     RetryDelay                                                  ___ OFFSET(get<float>, {0xB40, 4, 0, 0})
	CMember(UEnvQuery*)                                FindTeleportSpotEQSQuery                                    ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortIntensityCurveSequence
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortIntensityCurveSequence : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FDataTableRowHandle>)               IntensityCurves                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TEnumAsByte<EFortIntensityCurveSequenceType>) SequenceType                                             ___ OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortIntensityCurveSequenceProgression
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortIntensityCurveSequenceProgression : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FFortInstensityCurveSequenceProgression>) IntensityCurveSequences                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortJumpDownLink
/// Size: 0x0000 (0x0002E0 - 0x0002E0)
class AFortJumpDownLink : public ANavLinkProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Script/FortniteAI.FortNavGraphGoal
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AFortNavGraphGoal : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(float)                                     GraphRadius                                                 ___ OFFSET(get<float>, {0x298, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortNavLinkBlockerComponent
/// Size: 0x0000 (0x0005B0 - 0x0005B0)
class UFortNavLinkBlockerComponent : public UBoxComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
};

/// Class /Script/FortniteAI.FortNavLinkContainer
/// Size: 0x0000 (0x000290 - 0x000290)
class AFortNavLinkContainer : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/FortniteAI.FortNavLinkDefinition
/// Size: 0x0030 (0x000050 - 0x000080)
class UFortNavLinkDefinition : public UNavLinkDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FFortNavLinkPattern)                       Pattern                                                     ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<FFortNavLinkPattern>)               AdditionalPatterns                                          ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<TEnumAsByte>)                       StairsRailing                                               ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(EBuildingFloorRailing)                     FloorRailing                                                ___ OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(TEnumAsByte<EFortNavLinkPattern>)          PatternType                                                 ___ OFFSET(get<T>, {0x79, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortNavMesh
/// Size: 0x0008 (0x0005A8 - 0x0005B0)
class AFortNavMesh : public ARecastNavMesh
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(UFortAIHotSpotManager*)                    HotSpotManager                                              ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortNavObstacleComponent
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class UFortNavObstacleComponent : public UNavRelevantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(UClass*)                                   ObstacleAreaClass                                           ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortNavSystem
/// Size: 0x0240 (0x001588 - 0x0017C8)
class UFortNavSystem : public UNavigationSystemV1
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6088;

public:
	CMember(TWeakObjectPtr<UClass*>)                   DefaultSmashableArea                                        ___ OFFSET(get<T>, {0x1598, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   JumpDownArea                                                ___ OFFSET(get<T>, {0x15B8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   JumpDownSmashableArea2                                      ___ OFFSET(get<T>, {0x15F8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   JumpDownSmashableArea3                                      ___ OFFSET(get<T>, {0x1618, 32, 0, 0})
	CMember(TArray<UFortCustomNavLinkGlobalProxy*>)    LinkGlobalProxies                                           ___ OFFSET(get<T>, {0x1638, 16, 0, 0})
	CMember(TArray<ARecastNavMesh*>)                   NamedNavmeshes                                              ___ OFFSET(get<T>, {0x1648, 16, 0, 0})
	CMember(TArray<UFortNavLinkBlockerComponent*>)     NavLinkBlockers                                             ___ OFFSET(get<T>, {0x1658, 16, 0, 0})
	CMember(TArray<UFortPathCostEstimator*>)           PathEstimators                                              ___ OFFSET(get<T>, {0x1678, 16, 0, 0})
	CMember(TArray<UFortInescapableZoneTracker*>)      InescapableZones                                            ___ OFFSET(get<T>, {0x1688, 16, 0, 0})
	DMember(bool)                                      bAllowAutoRebuild                                           ___ OFFSET(get<bool>, {0x1698, 1, 1, 0})
	DMember(bool)                                      bRebuildOnInitialUnlock                                     ___ OFFSET(get<bool>, {0x1698, 1, 1, 1})
	DMember(bool)                                      bUsesStreamedInNavLevel                                     ___ OFFSET(get<bool>, {0x1698, 1, 1, 2})
	DMember(bool)                                      bUseStaticMeshLinks                                         ___ OFFSET(get<bool>, {0x1698, 1, 1, 3})
	DMember(bool)                                      bUseStaticWorldLinksDown                                    ___ OFFSET(get<bool>, {0x1698, 1, 1, 4})
	DMember(bool)                                      bUseStaticWorldLinksUp                                      ___ OFFSET(get<bool>, {0x1698, 1, 1, 5})
	DMember(bool)                                      bUseJumpLinkActors                                          ___ OFFSET(get<bool>, {0x1698, 1, 1, 6})
	DMember(bool)                                      bGenerateWallClimbLinks                                     ___ OFFSET(get<bool>, {0x1698, 1, 1, 7})
	DMember(bool)                                      bGenerateClamberLinks                                       ___ OFFSET(get<bool>, {0x1699, 1, 1, 0})
	DMember(int32_t)                                   UndermineHorizontalTileLimit                                ___ OFFSET(get<int32_t>, {0x169C, 4, 0, 0})
	DMember(int32_t)                                   UndermineVerticalTileLimit                                  ___ OFFSET(get<int32_t>, {0x16A0, 4, 0, 0})
	DMember(float)                                     DirtyAreasUpdateFreqInactive                                ___ OFFSET(get<float>, {0x16A4, 4, 0, 0})
	CMember(AFortNavigationGraph*)                     NavGraphData                                                ___ OFFSET(get<T>, {0x1780, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    CompositePathGoals                                          ___ OFFSET(get<T>, {0x1788, 16, 0, 0})
	CMember(TArray<FBox>)                              AtlasCells                                                  ___ OFFSET(get<T>, {0x1798, 16, 0, 0})
	CMember(TArray<FMetaNavCachedEntry>)               MetaNavCachedAreas                                          ___ OFFSET(get<T>, {0x17B8, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortNavSystemConfig
/// Size: 0x0008 (0x000058 - 0x000060)
class UFortNavSystemConfig : public UNavigationSystemModuleConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bAllowAutoRebuild                                           ___ OFFSET(get<bool>, {0x58, 1, 1, 0})
	DMember(bool)                                      bRebuildOnInitialUnlock                                     ___ OFFSET(get<bool>, {0x58, 1, 1, 1})
	DMember(bool)                                      bUsesStreamedInNavLevel                                     ___ OFFSET(get<bool>, {0x58, 1, 1, 2})
};

/// Class /Script/FortniteAI.FortPatrolWardInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortPatrolWardInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortPlacedPawnMarker
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class AFortPlacedPawnMarker : public ANavigationObjectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
};

/// Class /Script/FortniteAI.FortRiftBlockerComponent
/// Size: 0x0000 (0x0005B0 - 0x0005B0)
class UFortRiftBlockerComponent : public UBoxComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
};

/// Class /Script/FortniteAI.FortStaticMeshLinkComponent
/// Size: 0x0048 (0x0000F0 - 0x000138)
class UFortStaticMeshLinkComponent : public UNavRelevantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Script/FortniteAI.FortThreatVisualsManager
/// Size: 0x02B8 (0x000290 - 0x000548)
class AFortThreatVisualsManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
	CMember(UClass*)                                   CloudBlueprint                                              ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(float)                                     CloudRadius                                                 ___ OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     ThreatBoxVolumeTopPadding                                   ___ OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     ThreatBoxVolumeBottomPadding                                ___ OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(bool)                                      bUseLocalPlayersOnlyForCloudMinimumHeight                   ___ OFFSET(get<bool>, {0x2AC, 1, 0, 0})
	DMember(bool)                                      bHideClouds                                                 ___ OFFSET(get<bool>, {0x2AD, 1, 0, 0})
	DMember(float)                                     CloudMinimumHeightAbovePlayers                              ___ OFFSET(get<float>, {0x2B0, 4, 0, 0})
	DMember(float)                                     CloudMinimumHeightAboveGround                               ___ OFFSET(get<float>, {0x2B4, 4, 0, 0})
	DMember(float)                                     CloudMinimumAltitude                                        ___ OFFSET(get<float>, {0x2B8, 4, 0, 0})
	DMember(float)                                     CloudMaxVerticalDelta                                       ___ OFFSET(get<float>, {0x2BC, 4, 0, 0})
	DMember(float)                                     CloudMinSpeed                                               ___ OFFSET(get<float>, {0x2C0, 4, 0, 0})
	DMember(float)                                     CloudMaxSpeed                                               ___ OFFSET(get<float>, {0x2C4, 4, 0, 0})
	DMember(float)                                     StormWindCloudRadius                                        ___ OFFSET(get<float>, {0x2C8, 4, 0, 0})
	DMember(float)                                     StormWindGoalRadius                                         ___ OFFSET(get<float>, {0x2CC, 4, 0, 0})
	DMember(float)                                     StormWindFalloffRadius                                      ___ OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     StormWindInactiveMagnitude                                  ___ OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(float)                                     StormWindActiveMagnitude                                    ___ OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     StormWindDesiredDeltaBlendTime                              ___ OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     StormWindDirectionAdditionalAngle                           ___ OFFSET(get<float>, {0x2E0, 4, 0, 0})
	SMember(FThreatLocationArray)                      ThreatLocations                                             ___ OFFSET(get<T>, {0x2E8, 280, 0, 0})
	SMember(FStormWindArray)                           StormWindArray                                              ___ OFFSET(get<T>, {0x400, 280, 0, 0})
	CMember(TArray<FVector>)                           GoalActorLocations                                          ___ OFFSET(get<T>, {0x518, 16, 0, 0})
};

/// Class /Script/FortniteAI.AIGoalComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UAIGoalComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/FortniteAI.FortAIGoalComponent
/// Size: 0x0050 (0x000108 - 0x000158)
class UFortAIGoalComponent : public UAIGoalComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TMap<EFortAILODLevel, FScalableFloat>)     AssignmentUpdatePeriods                                     ___ OFFSET(get<T>, {0x108, 80, 0, 0})
};

/// Class /Script/FortniteAI.FortAIGoalProvider
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortAIGoalProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UWorld*)                                   World                                                       ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UFortAIAssignment*)                        AssignmentOwner                                             ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UFortAIEncounterInfo*)                     EncounterInfo                                               ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAIGoalProvider_EnvQuery
/// Size: 0x0088 (0x000048 - 0x0000D0)
class UFortAIGoalProvider_EnvQuery : public UFortAIGoalProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UEnvQuery*)                                GoalQuery                                                   ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(float)                                     AutomaticUpdatePeriodInSeconds                              ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FFortAIAssignmentIdentifier)               SpecificAssignmentContext                                   ___ OFFSET(get<T>, {0x60, 48, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AIPawnContext                                               ___ OFFSET(get<T>, {0x90, 32, 0, 0})
};

/// Class /Script/FortniteAI.FortAIEncounterGoalSelectionTable
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAIEncounterGoalSelectionTable : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FEncounterGoalSelectionTableEntry>) EncounterGoalSelectionCriteria                              ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FortniteAI.AIHotSpotConfig
/// Size: 0x0020 (0x000030 - 0x000050)
class UAIHotSpotConfig : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FAIHotSpotSlotConfig>)              Slots                                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bDetectUnreachableSlots                                     ___ OFFSET(get<bool>, {0x40, 1, 1, 0})
	CMember(UAIHotSpotSlotGenerator*)                  SlotGenerator                                               ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/FortniteAI.AIHotSpotSlotGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIHotSpotSlotGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.AIHotSpotSlotGenerator_OnBoundingBox
/// Size: 0x0070 (0x000028 - 0x000098)
class UAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UClass*)                                   SlotClass                                                   ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FVector)                                   MaxExtent                                                   ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(float)                                     ExpandBy                                                    ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     OffsetFromEdge                                              ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     Spacing                                                     ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bLimitMaxExtent                                             ___ OFFSET(get<bool>, {0x54, 1, 1, 0})
	DMember(bool)                                      bMustHitFocusActor                                          ___ OFFSET(get<bool>, {0x54, 1, 1, 1})
	CMember(EBoundingBoxSlotDirectionCalculation)      SlotDirectionCalculation                                    ___ OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Class /Script/FortniteAI.BuildingActorHotSpotConfig
/// Size: 0x0128 (0x000030 - 0x000158)
class UBuildingActorHotSpotConfig : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FBuildingActorHotSpotDirection)            DirectionSetup                                              ___ OFFSET(get<T>, {0x30, 240, 0, 0})
	SMember(FBuildingActorHotSpotDirection)            DefaultSetup                                                ___ OFFSET(get<T>, {0x120, 40, 0, 0})
	CMember(UAIHotSpotConfig*)                         ExtraTypeConfig                                             ___ OFFSET(get<T>, {0x148, 8, 0, 0})
	DMember(bool)                                      bHasDirectionalSetup                                        ___ OFFSET(get<bool>, {0x150, 1, 1, 0})
};

/// Class /Script/FortniteAI.BuildingActorHotSpotRenderingComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class UBuildingActorHotSpotRenderingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
};

/// Class /Script/FortniteAI.FortAIHotSpot
/// Size: 0x0028 (0x000440 - 0x000468)
class AFortAIHotSpot : public AAIHotSpot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
};

/// Class /Script/FortniteAI.FortAIHotSpotManager
/// Size: 0x0140 (0x000080 - 0x0001C0)
class UFortAIHotSpotManager : public UAIHotSpotManagerProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TWeakObjectPtr<UBuildingActorHotSpotConfig*>) FallbackHotspotConfig                                    ___ OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TArray<FAutoAcquireSlot>)                  AutoAcquireSlots                                            ___ OFFSET(get<T>, {0x190, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAIHotSpotSlot
/// Size: 0x0010 (0x000120 - 0x000130)
class UFortAIHotSpotSlot : public UAIHotSpotSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(EFortHotSpotSlot)                          SlotType                                                    ___ OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(bool)                                      bHasProjectedLocation                                       ___ OFFSET(get<bool>, {0x124, 1, 1, 0})
	DMember(bool)                                      bProjectedOnLowArea                                         ___ OFFSET(get<bool>, {0x124, 1, 1, 1})
	DMember(bool)                                      bIsAutoGenerated                                            ___ OFFSET(get<bool>, {0x124, 1, 1, 2})
	DMember(bool)                                      bCanDuplicateOnProjection                                   ___ OFFSET(get<bool>, {0x124, 1, 1, 3})
	DMember(bool)                                      bCanProjectUp                                               ___ OFFSET(get<bool>, {0x124, 1, 1, 4})
};

/// Class /Script/FortniteAI.FortAIHotSpotSlotGenerator_FromConfig
/// Size: 0x0028 (0x000028 - 0x000050)
class UFortAIHotSpotSlotGenerator_FromConfig : public UAIHotSpotSlotGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UAIHotSpotConfig*)                         BuildingConfig                                              ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FVector)                                   Offset                                                      ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bMirrorX                                                    ___ OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bMirrorY                                                    ___ OFFSET(get<bool>, {0x48, 1, 1, 1})
};

/// Class /Script/FortniteAI.FortAIHotSpotSlotGenerator_OnBoundingBox
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UFortAIHotSpotSlotGenerator_OnBoundingBox : public UAIHotSpotSlotGenerator_OnBoundingBox
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     DistanceForRangedSlots                                      ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     DistanceForHugeSlots                                        ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAIHotSpotSlotGenerator_RampTrace
/// Size: 0x0030 (0x000028 - 0x000058)
class UFortAIHotSpotSlotGenerator_RampTrace : public UAIHotSpotSlotGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/FortniteAI.FortAIHotSpot_Building
/// Size: 0x00E8 (0x000468 - 0x000550)
class AFortAIHotSpot_Building : public AFortAIHotSpot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	CMember(UAIHotSpotConfig*)                         ExtraTypeConfig                                             ___ OFFSET(get<T>, {0x468, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAIHotSpot_FakeBuilding
/// Size: 0x0000 (0x000468 - 0x000468)
class AFortAIHotSpot_FakeBuilding : public AFortAIHotSpot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
};

/// Class /Script/FortniteAI.FortAIHotSpot_Shooting
/// Size: 0x0000 (0x000468 - 0x000468)
class AFortAIHotSpot_Shooting : public AFortAIHotSpot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
};

/// Class /Script/FortniteAI.FortInfluenceMap
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UFortInfluenceMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(AFortNavigationGraph*)                     GraphData                                                   ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/FortniteAI.IrwinAIController
/// Size: 0x0000 (0x0005F0 - 0x0005F0)
class AIrwinAIController : public AAthenaAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
};

/// Class /Script/FortniteAI.LevelTestingActorBase
/// Size: 0x0000 (0x000290 - 0x000290)
class ALevelTestingActorBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/FortniteAI.FortBotController
/// Size: 0x0008 (0x000560 - 0x000568)
class AFortBotController : public AFortAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
	CMember(UFortBotMissionLogic*)                     CurrentMissionLogic                                         ___ OFFSET(get<T>, {0x560, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortBotMissionLogic
/// Size: 0x0050 (0x000028 - 0x000078)
class UFortBotMissionLogic : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(AFortMission*)                             Mission                                                     ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<AActor*>)                           Goals                                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<AFortBotStructureBuilder*>)         Builders                                                    ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(UBehaviorTree*)                            CurrentBehaviorAsset                                        ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<AFortBotController*>)               AssignedAI                                                  ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<char>)                              GoalHasLocator                                              ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortBotMissionManager
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UFortBotMissionManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TWeakObjectPtr<UClass*>)                   BotPawnClass                                                ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TArray<AFortPawn*>)                        BotPawns                                                    ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<UFortBotMissionLogic*>)             ActiveMissionsLogicData                                     ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(UFortBotMissionLogic*)                     PrimaryMissionLogicData                                     ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortBotStructureBuilder
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AFortBotStructureBuilder : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(UFortBuildingInstructions*)                BuildingInstructions                                        ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TArray<ABuildingActor*>)                   BuiltActors                                                 ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(AActor*)                                   CachedGoal                                                  ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortMetaNavArea_Obstacles
/// Size: 0x0008 (0x000048 - 0x000050)
class UFortMetaNavArea_Obstacles : public UNavAreaMeta
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   HealthThreshold                                             ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortNavAgentCostData
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortNavAgentCostData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     NavAgentName                                                ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(TArray<UClass*>)                           NavAreaStrengthBuckets                                      ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortNavAreaAutomatic
/// Size: 0x0018 (0x000050 - 0x000068)
class UFortNavAreaAutomatic : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FCurveTableRowHandle)                      NavCostCurveHandle                                          ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   NavAreaStrength                                             ___ OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(float)                                     AutomaticNavCost                                            ___ OFFSET(get<float>, {0x64, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortNavArea_BigMovingPawn
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_BigMovingPawn : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_CheapObstacle
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_CheapObstacle : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_Clamber
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_Clamber : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_ClosedDoors
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_ClosedDoors : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_Danger
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_Danger : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_DefenderNull
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_DefenderNull : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_HuskNull
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_HuskNull : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_LowJump
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_LowJump : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_LowSmashable
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_LowSmashable : public UFortNavArea_DefaultSmashable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_Obstacle
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_Obstacle : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_PortalOrSmash
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_PortalOrSmash : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_SmashableJump
/// Size: 0x0008 (0x000050 - 0x000058)
class UFortNavArea_SmashableJump : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   Strength                                                    ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortNavArea_Stairs
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_Stairs : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_StarlightCheapObstacle
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_StarlightCheapObstacle : public UFortNavArea_CheapObstacle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_StarlightObstacle
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_StarlightObstacle : public UFortNavArea_Obstacle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_StoneWall
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_StoneWall : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_TakerOnly
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_TakerOnly : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_TraceSmashable
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_TraceSmashable : public UFortNavArea_DefaultSmashable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_Unwalkable
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_Unwalkable : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_WalkOverWall
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_WalkOverWall : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_WallCorner
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_WallCorner : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_Zipline
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_Zipline : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.AthenaAvoidanceManager
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UAthenaAvoidanceManager : public UAvoidanceManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/FortniteAI.AthenaNavInvokerBox
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AAthenaNavInvokerBox : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(float)                                     GenerationRange                                             ___ OFFSET(get<float>, {0x290, 4, 0, 0})
	CMember(UNavigationInvokerComponent*)              InvokerComp                                                 ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/FortniteAI.AthenaNavMesh
/// Size: 0x0100 (0x0005B0 - 0x0006B0)
class AAthenaNavMesh : public AFortNavMesh
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	DMember(int32_t)                                   HotSpotPathfindingMaxSearchNodes                            ___ OFFSET(get<int32_t>, {0x5B0, 4, 0, 0})
	DMember(float)                                     ShallowWaterTraceStartOffsetZ                               ___ OFFSET(get<float>, {0x5B4, 4, 0, 0})
	DMember(float)                                     ShallowWaterTraceEndOffsetZ                                 ___ OFFSET(get<float>, {0x5B8, 4, 0, 0})
	DMember(int32_t)                                   MaximumTilesToProcessForWaterPerFrame                       ___ OFFSET(get<int32_t>, {0x5BC, 4, 0, 0})
	DMember(bool)                                      bSuspendNavmeshWhenNoAIUsersAlive                           ___ OFFSET(get<bool>, {0x5C0, 1, 0, 0})
	CMember(TArray<FBox>)                              SerializedDirtyAreas                                        ___ OFFSET(get<T>, {0x5C8, 16, 0, 0})
};

/// Class /Script/FortniteAI.AthenaNavMeshRenderingComponent
/// Size: 0x0000 (0x0005D0 - 0x0005D0)
class UAthenaNavMeshRenderingComponent : public UNavMeshRenderingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Script/FortniteAI.AthenaNavMesh_Big
/// Size: 0x0008 (0x0006B0 - 0x0006B8)
class AAthenaNavMesh_Big : public AAthenaNavMesh
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1720;

public:
	DMember(float)                                     MaximumDistanceToWaterForShallow                            ___ OFFSET(get<float>, {0x6B0, 4, 0, 0})
};

/// Class /Script/FortniteAI.AthenaNavOctTreeInclusionBounds
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class AAthenaNavOctTreeInclusionBounds : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/FortniteAI.AthenaNavPresenceDetectorComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UAthenaNavPresenceDetectorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(bool)                                      bDisableUponNavMeshPresence                                 ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bHasValidNavMesh                                            ___ OFFSET(get<bool>, {0xA1, 1, 0, 0})
	SMember(FName)                                     NavMeshNameToUse                                            ___ OFFSET(get<T>, {0xA4, 4, 0, 0})
	CMember(TArray<FNavMeshDetectedInfo>)              NavMeshesInfo                                               ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NavMeshPresenceDetected                                     ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NavMeshPresenceUndetected                                   ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
};

/// Class /Script/FortniteAI.AthenaNavRelevantActorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAthenaNavRelevantActorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.AthenaNavSystem
/// Size: 0x01B0 (0x0017C8 - 0x001978)
class UAthenaNavSystem : public UFortNavSystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6520;

public:
	CMember(TArray<FNavDataSetVariantSettings>)        NavDataSetVariants                                          ___ OFFSET(get<T>, {0x17D0, 16, 0, 0})
	DMember(bool)                                      bUseNavDataSetVariants                                      ___ OFFSET(get<bool>, {0x17E0, 1, 1, 0})
	DMember(bool)                                      bMarkBuildingFoundationDirty                                ___ OFFSET(get<bool>, {0x17E0, 1, 1, 1})
	DMember(bool)                                      bSupportRuntimeNavmeshDisabling                             ___ OFFSET(get<bool>, {0x17E0, 1, 1, 2})
	DMember(float)                                     NavGenerationObserverCheckInterval                          ___ OFFSET(get<float>, {0x17E4, 4, 0, 0})
	DMember(bool)                                      bAllowStaticNavigationInvokerBoxes                          ___ OFFSET(get<bool>, {0x1808, 1, 1, 0})
	CMember(TArray<FBoxNavInvoker>)                    BoxInvokers                                                 ___ OFFSET(get<T>, {0x1810, 16, 0, 0})
	CMember(TArray<FBox>)                              NavOctTreeInclusionBounds                                   ___ OFFSET(get<T>, {0x1958, 16, 0, 0})
};

/// Class /Script/FortniteAI.AthenaNavSystemConfig
/// Size: 0x0048 (0x000060 - 0x0000A8)
class UAthenaNavSystemConfig : public UFortNavSystemConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<FNavDataSetVariantSettings>)        NavDataSetVariants                                          ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(bool)                                      bUseNavDataSetVariants                                      ___ OFFSET(get<bool>, {0x70, 1, 1, 0})
	DMember(bool)                                      bDiscardNavDataFromSublevels                                ___ OFFSET(get<bool>, {0x70, 1, 1, 1})
	DMember(bool)                                      bUseNavigationInvokers                                      ___ OFFSET(get<bool>, {0x70, 1, 1, 2})
	DMember(bool)                                      bAllowStaticNavigationInvokerBoxes                          ___ OFFSET(get<bool>, {0x70, 1, 1, 3})
	DMember(bool)                                      bLazyOctree                                                 ___ OFFSET(get<bool>, {0x70, 1, 1, 4})
	DMember(bool)                                      bUseNavOctTreeInclusionBounds                               ___ OFFSET(get<bool>, {0x70, 1, 1, 5})
	DMember(bool)                                      bPrioritizeNavigationAroundSpawners                         ___ OFFSET(get<bool>, {0x70, 1, 1, 6})
	DMember(bool)                                      bResetDirtyAreasOnInitialBuildingRelease                    ___ OFFSET(get<bool>, {0x70, 1, 1, 7})
	DMember(bool)                                      bSupportRuntimeNavmeshDisabling                             ___ OFFSET(get<bool>, {0x71, 1, 1, 0})
	DMember(bool)                                      bNavOctreeUnlockedByDefaultWhenNotPreloadingNavData         ___ OFFSET(get<bool>, {0x71, 1, 1, 1})
	DMember(bool)                                      bConfigureDirtyAreaWarningSizeThreshold                     ___ OFFSET(get<bool>, {0x71, 1, 1, 2})
	DMember(float)                                     DirtyAreaWarningSizeThreshold                               ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	CMember(TArray<FOverriddenSupportedAgentsByReleaseVersion>) OverriddenSupportedAgentsByReleaseVersion          ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bSuspendNavmeshWhenNoPossibleUsers                          ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
	CMember(TArray<FName>)                             AllowedNavBoundsUniqueActorTags                             ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FNavAgentSelector)                         EnableAutoNavConfigForAgent                                 ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortNavArea_MetaReplacement
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_MetaReplacement : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_WallCornerReplacement
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_WallCornerReplacement : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_ObstacleReplacement
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_ObstacleReplacement : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortNavArea_TempWallReplacement
/// Size: 0x0000 (0x000068 - 0x000068)
class UFortNavArea_TempWallReplacement : public UFortNavAreaAutomatic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/FortniteAI.EdgeNavLinks
/// Size: 0x0050 (0x0002E0 - 0x000330)
class AEdgeNavLinks : public ANavLinkProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	DMember(float)                                     DistanceBetweenLinks                                        ___ OFFSET(get<float>, {0x2E0, 4, 0, 0})
	SMember(FVector)                                   Start                                                       ___ OFFSET(get<T>, {0x2E8, 24, 0, 0})
	SMember(FVector)                                   End                                                         ___ OFFSET(get<T>, {0x300, 24, 0, 0})
	DMember(float)                                     SnapRadius                                                  ___ OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(float)                                     SnapHeight                                                  ___ OFFSET(get<float>, {0x31C, 4, 0, 0})
	DMember(float)                                     LinkProjectionHeight                                        ___ OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(float)                                     RightLinkForwardOffset                                      ___ OFFSET(get<float>, {0x324, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannel                                            ___ OFFSET(get<T>, {0x328, 1, 0, 0})
	DMember(bool)                                      bManualAdjustment                                           ___ OFFSET(get<bool>, {0x32C, 1, 1, 0})
};

/// Class /Script/FortniteAI.EdgeNavLinksRenderingComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class UEdgeNavLinksRenderingComponent : public UNavLinkRenderingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/FortniteAI.FortCustomNavLinkGlobalProxy
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortCustomNavLinkGlobalProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FNavLinkId)                                LinkId                                                      ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UObject*)                                  Owner                                                       ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortClamberLinkGlobalProxy
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortClamberLinkGlobalProxy : public UFortCustomNavLinkGlobalProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/FortniteAI.FortDoorLinkComponent
/// Size: 0x0000 (0x0001E0 - 0x0001E0)
class UFortDoorLinkComponent : public UNavLinkCustomComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
};

/// Class /Script/FortniteAI.FortNavigationMetaFilter
/// Size: 0x0000 (0x000048 - 0x000048)
class UFortNavigationMetaFilter : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/FortniteAI.FortNavigationFilter_Hunting
/// Size: 0x0000 (0x000048 - 0x000048)
class UFortNavigationFilter_Hunting : public UFortNavigationMetaFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/FortniteAI.FortNavigationFilter_IgnoreSmashingCost
/// Size: 0x0000 (0x000048 - 0x000048)
class UFortNavigationFilter_IgnoreSmashingCost : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/FortniteAI.FortNavigationFilter_Leash
/// Size: 0x0000 (0x000048 - 0x000048)
class UFortNavigationFilter_Leash : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/FortniteAI.FortNavigationFilter_NoSmashing
/// Size: 0x0000 (0x000048 - 0x000048)
class UFortNavigationFilter_NoSmashing : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/FortniteAI.FortNavigationFilter_NoSmashingIncludeLow
/// Size: 0x0000 (0x000048 - 0x000048)
class UFortNavigationFilter_NoSmashingIncludeLow : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/FortniteAI.FortNavigationFilter_TetherZone
/// Size: 0x0000 (0x000048 - 0x000048)
class UFortNavigationFilter_TetherZone : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/FortniteAI.FortNavigationGraph
/// Size: 0x0158 (0x000490 - 0x0005E8)
class AFortNavigationGraph : public ANavigationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1512;

public:
};

/// Class /Script/FortniteAI.FortNavModifierVolume
/// Size: 0x0010 (0x0002E0 - 0x0002F0)
class AFortNavModifierVolume : public ANavModifierVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(TArray<UClass*>)                           EnableOnlyForNavmeshClasses                                 ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortNavPathRendererInfoInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortNavPathRendererInfoInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortNavPathRendererComponent
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UFortNavPathRendererComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(UNiagaraSystem*)                           PathVFX                                                     ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FVector)                                   PathVFXOffset                                               ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	CMember(TArray<FColor>)                            PathColors                                                  ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(UNiagaraComponent*)                        PathVFXComponent                                            ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(TArray<FPathRendererInfo>)                 PathRendererList                                            ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FVector4f>)                         AllPathsPoints                                              ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FVector>)                           NavPathPoints                                               ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<int32_t>)                           NavPathPointsStatus                                         ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(EPatrollingMode)                           PathMode                                                    ___ OFFSET(get<T>, {0x118, 1, 0, 0})
	DMember(int32_t)                                   CurrentPathColorIndex                                       ___ OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortZiplineLinkComponent
/// Size: 0x0040 (0x0001E0 - 0x000220)
class UFortZiplineLinkComponent : public UNavLinkCustomComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FVector)                                   LinkOffsetFromSplineStart                                   ___ OFFSET(get<T>, {0x1E0, 24, 0, 0})
	SMember(FVector)                                   LinkOffsetFromSplineEnd                                     ___ OFFSET(get<T>, {0x1F8, 24, 0, 0})
	DMember(bool)                                      bOverrideSnapRadius                                         ___ OFFSET(get<bool>, {0x210, 1, 0, 0})
	DMember(float)                                     SnapRadiusOverride                                          ___ OFFSET(get<float>, {0x214, 4, 0, 0})
	DMember(bool)                                      bOverrideSnapHeight                                         ___ OFFSET(get<bool>, {0x218, 1, 0, 0})
	DMember(float)                                     SnapHeightOverride                                          ___ OFFSET(get<float>, {0x21C, 4, 0, 0})
};

/// Class /Script/FortniteAI.JLargeNavMesh
/// Size: 0x0000 (0x0006B0 - 0x0006B0)
class AJLargeNavMesh : public AAthenaNavMesh
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
};

/// Class /Script/FortniteAI.JMediumNavMesh
/// Size: 0x0000 (0x0006B0 - 0x0006B0)
class AJMediumNavMesh : public AAthenaNavMesh
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
};

/// Class /Script/FortniteAI.JSmallNavMesh
/// Size: 0x0000 (0x0006B0 - 0x0006B0)
class AJSmallNavMesh : public AAthenaNavMesh
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
};

/// Class /Script/FortniteAI.FortInescapableZoneTracker
/// Size: 0x0068 (0x000028 - 0x000090)
class UFortInescapableZoneTracker : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(AFortNavigationGraph*)                     NavGraph                                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortPathCostEstimator
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UFortPathCostEstimator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TWeakObjectPtr<AActor*>)                   GoalActorWeak                                               ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(AFortNavigationGraph*)                     NavGraph                                                    ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/FortniteAI.NavGraphDebugActor
/// Size: 0x0000 (0x000290 - 0x000290)
class ANavGraphDebugActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/FortniteAI.AthenaAISense_Hearing
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UAthenaAISense_Hearing : public UAISense_Hearing
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/FortniteAI.FortAIControllerPerksComponent
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortAIControllerPerksComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/FortniteAI.FortAIPerkBase
/// Size: 0x0140 (0x000028 - 0x000168)
class UFortAIPerkBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FScalableFloat)                            CooldownDuration                                            ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            CooldownDurationRandomDeviation                             ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            ActivationCountBeforeCooldown                               ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            ActivationDuration                                          ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            ActivationDurationRandomDeviation                           ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            OddsToActivate                                              ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            FailedActivationCooldownDuration                            ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            FailedActivationCooldownDurationRandomDeviation             ___ OFFSET(get<T>, {0x140, 40, 0, 0})
};

/// Class /Script/FortniteAI.AITask_ExecuteAbility
/// Size: 0x0028 (0x000068 - 0x000090)
class UAITask_ExecuteAbility : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/FortniteAI.FortAITask_AdjustToSlot
/// Size: 0x0058 (0x000068 - 0x0000C0)
class UFortAITask_AdjustToSlot : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   SlotLocation                                                ___ OFFSET(get<T>, {0x68, 24, 0, 0})
	SMember(FVector)                                   SlotDirection                                               ___ OFFSET(get<T>, {0x80, 24, 0, 0})
};

/// Class /Script/FortniteAI.FortAITask_ExecuteAbility
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UFortAITask_ExecuteAbility : public UAITask_ExecuteAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/FortniteAI.FortAITask_FuzzyQueue
/// Size: 0x0020 (0x000118 - 0x000138)
class UFortAITask_FuzzyQueue : public UAITask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Class /Script/FortniteAI.FortAITask_MoveTo
/// Size: 0x0000 (0x000118 - 0x000118)
class UFortAITask_MoveTo : public UAITask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
};

/// Class /Script/FortniteAI.FortAITask_NavmeshWait
/// Size: 0x0010 (0x000068 - 0x000078)
class UFortAITask_NavmeshWait : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/FortniteAI.FortAITask_RotateToFace
/// Size: 0x0028 (0x000068 - 0x000090)
class UFortAITask_RotateToFace : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(AActor*)                                   FocusTarget                                                 ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FVector)                                   FocalPoint                                                  ___ OFFSET(get<T>, {0x70, 24, 0, 0})
};

/// Class /Script/FortniteAI.FortAITask_StepAside
/// Size: 0x0048 (0x000160 - 0x0001A8)
class UFortAITask_StepAside : public UFortAITask_Move
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(AActor*)                                   GoalActor                                                   ___ OFFSET(get<T>, {0x178, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAICloudVortex
/// Size: 0x0098 (0x000290 - 0x000328)
class AFortAICloudVortex : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TArray<USplineMeshComponent*>)             SplineMeshesBody                                            ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(UParticleSystemComponent*)                 VortexBase                                                  ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 VortexRing                                                  ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(TArray<FVector>)                           SplinePointsA                                               ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<FVector>)                           SplinePointsB                                               ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<FVector>)                           SplineTangentsA                                             ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(TArray<FVector>)                           SplineTangentsB                                             ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	CMember(TArray<double>)                            TimeRandomArray                                             ___ OFFSET(get<T>, {0x2F0, 16, 0, 0})
	DMember(float)                                     TwistOverTime                                               ___ OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(int32_t)                                   NumberOfSplinePoints                                        ___ OFFSET(get<int32_t>, {0x304, 4, 0, 0})
	DMember(bool)                                      bEnableVortexBaseParticleSystem                             ___ OFFSET(get<bool>, {0x308, 1, 0, 0})
	DMember(bool)                                      bEnableVortexRingParticleSystem                             ___ OFFSET(get<bool>, {0x309, 1, 0, 0})
	SMember(FVector)                                   BasePSOffset                                                ___ OFFSET(get<T>, {0x310, 24, 0, 0})
};

/// Class /Script/FortniteAI.ThreatCloud
/// Size: 0x0240 (0x000290 - 0x0004D0)
class AThreatCloud : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	CMember(TArray<UBoxComponent*>)                    LightningSourceAreas                                        ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(FSlateBrush)                               MiniMapIconBrush                                            ___ OFFSET(get<T>, {0x2A0, 192, 0, 0})
	DMember(float)                                     MiniMapIconPercent                                          ___ OFFSET(get<float>, {0x360, 4, 0, 0})
	SMember(FSlateBrush)                               MiniMapFarOffIconBrush                                      ___ OFFSET(get<T>, {0x370, 192, 0, 0})
	SMember(FLinearColor)                              ActiveTint                                                  ___ OFFSET(get<T>, {0x430, 16, 0, 0})
	SMember(FLinearColor)                              InActiveTint                                                ___ OFFSET(get<T>, {0x440, 16, 0, 0})
	DMember(float)                                     ActiveTransitionTime                                        ___ OFFSET(get<float>, {0x450, 4, 0, 0})
	DMember(float)                                     DeathTimerDuration                                          ___ OFFSET(get<float>, {0x454, 4, 0, 0})
	DMember(float)                                     CloudMiniMapTickInterval                                    ___ OFFSET(get<float>, {0x458, 4, 0, 0})
	DMember(float)                                     MiniMapFarOffIconDegreesOfArc                               ___ OFFSET(get<float>, {0x470, 4, 0, 0})
	SMember(FBox)                                      ThreatBoxVolume                                             ___ OFFSET(get<T>, {0x480, 56, 0, 0})
	DMember(float)                                     GroundLevelUnderCloud                                       ___ OFFSET(get<float>, {0x4B8, 4, 0, 0})
	CMember(TArray<FVector>)                           GoalActorLocations                                          ___ OFFSET(get<T>, {0x4C0, 16, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAthenaAIBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAICombatTokenConsumerComponent
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAICombatTokenConsumerComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(float)                                     TokenHoldMinDuration                                        ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     TokenHoldMaxDuration                                        ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	CMember(AFortAthenaAIBotController*)               CachedOwnerBotController                                    ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortAICombatTokenProviderComponent*>) CurrentTargetTokenProvider                       ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bHasToken                                                   ___ OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAICombatTokenProviderComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UFortAICombatTokenProviderComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FScalableFloat)                            TokenMaxCount                                               ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	DMember(int32_t)                                   TokenMaxCountRuntime                                        ___ OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Tokens                                                      ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotBuildingComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UFortAthenaAIBotBuildingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Script/FortniteAI.FortAthenaAlertStateComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFortAthenaAlertStateComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(float)                                     StealthMeterTarget                                          ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     StealthMeterTargetTime                                      ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaNPCLoopStateComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UFortAthenaNPCLoopStateComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bSpawnOutsideTheLoop                                        ___ OFFSET(get<bool>, {0xA0, 1, 1, 0})
	CMember(UFortAthenaAIRuntimeParameters_AIBotLoopSettings*) RuntimeLoopSettings                                 ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortPawnComponent_PingCommand
/// Size: 0x01A0 (0x0000A8 - 0x000248)
class UFortPawnComponent_PingCommand : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	SMember(FFortPingInfo)                             PingInfo                                                    ___ OFFSET(get<T>, {0xA8, 392, 0, 0})
};

/// Class /Script/FortniteAI.FortPawnComponent_AIBotPingCommand
/// Size: 0x0008 (0x000248 - 0x000250)
class UFortPawnComponent_AIBotPingCommand : public UFortPawnComponent_PingCommand
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(AAIController*)                            CachedOwnerController                                       ___ OFFSET(get<T>, {0x248, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortPawnComponent_AIFormation
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortPawnComponent_AIFormation : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<FVector>)                           Slots                                                       ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(float)                                     MaxDistanceFromSlotToSprint                                 ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	CMember(TArray<FFortAthenaAIFormationSlotRuntime>) RuntimeSlots                                                ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(float)                                     MaxDistanceFromSlotToSprintSqr                              ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortPawnComponent_AIGroup
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortPawnComponent_AIGroup : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      bCanBeGroupLeader                                           ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(int32_t)                                   GroupId                                                     ___ OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaPatrolPath
/// Size: 0x01C8 (0x000290 - 0x000458)
class AFortAthenaPatrolPath : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	CMember(EPatrollingMode)                           Mode                                                        ___ OFFSET(get<T>, {0x2A8, 1, 0, 0})
	CMember(TArray<AFortAthenaPatrolPoint*>)           PatrolPoints                                                ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	DMember(bool)                                      bUseRandomStartupPatrolPoint                                ___ OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bUseRandomStartupDirection                                  ___ OFFSET(get<bool>, {0x2C1, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                ___ OFFSET(get<T>, {0x2C8, 32, 0, 0})
	CMember(AActor*)                                   RadialLeashLocationActorOverride                            ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(float)                                     RadialLeashInnerRadiusOverride                              ___ OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(float)                                     RadialLeashOuterRadiusOverride                              ___ OFFSET(get<float>, {0x2F4, 4, 0, 0})
	CMember(TArray<FPatrolPathLeash>)                  PathLeashArray                                              ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
	SMember(FScalableFloat)                            WaterLevelIndexMax                                          ___ OFFSET(get<T>, {0x308, 40, 0, 0})
	SMember(FScalableFloat)                            WaterLevelIndexMin                                          ___ OFFSET(get<T>, {0x330, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPointFailedToReach                                  ___ OFFSET(get<T>, {0x358, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPointReached                                        ___ OFFSET(get<T>, {0x368, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPathStarted                                         ___ OFFSET(get<T>, {0x378, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPathStopped                                         ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPathActivationStatusChanged                         ___ OFFSET(get<T>, {0x398, 16, 0, 0})
	SMember(FScalableFloat)                            MaxConcurrentUsage                                          ___ OFFSET(get<T>, {0x3A8, 40, 0, 0})
	DMember(int32_t)                                   CurrentConcurrentUsage                                      ___ OFFSET(get<int32_t>, {0x3D0, 4, 0, 0})
	SMember(FScalableFloat)                            MaxLifetimeUsage                                            ___ OFFSET(get<T>, {0x3D8, 40, 0, 0})
	DMember(float)                                     DebugLinkWidthSelected                                      ___ OFFSET(get<float>, {0x400, 4, 0, 0})
	DMember(float)                                     DebugLinkWidthNotSelected                                   ___ OFFSET(get<float>, {0x404, 4, 0, 0})
	SMember(FLinearColor)                              DebugNotSelectedColor                                       ___ OFFSET(get<T>, {0x408, 16, 0, 0})
	DMember(bool)                                      bIsPatrolPathEnabled                                        ___ OFFSET(get<bool>, {0x418, 1, 1, 1})
};

/// Class /Script/FortniteAI.FortCreativePatrolPath
/// Size: 0x0028 (0x000458 - 0x000480)
class AFortCreativePatrolPath : public AFortAthenaPatrolPath
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(TArray<AFortCreativeDeviceProp*>)          CreativePatrolPoints                                        ___ OFFSET(get<T>, {0x458, 16, 0, 0})
	CMember(EFortCreativePatrolPathGroup)              PatrolPathGroup                                             ___ OFFSET(get<T>, {0x468, 1, 0, 0})
	CMember(ABuildingActor*)                           CreativePathRenderer                                        ___ OFFSET(get<T>, {0x470, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortAthenaAIRuntimeParameters : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   ExtractedLevel                                              ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotDigestedSkillSet
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAIBotDigestedSkillSet : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAIBotAimingDigestedSkillSet
/// Size: 0x0750 (0x000030 - 0x000780)
class UFortAthenaAIBotAimingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	SMember(FDigestedFocusSetting)                     DefaultFocusSetting                                         ___ OFFSET(get<T>, {0x30, 104, 0, 0})
	CMember(TArray<FDigestedFocusSetting>)             FocusSettings                                               ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FLookAtDigestedSetting)                    LookAtSettings                                              ___ OFFSET(get<T>, {0xA8, 64, 0, 0})
	DMember(bool)                                      bAllowScanAroundWhileSwimming                               ___ OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(float)                                     TrackingReactionTime                                        ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     InAirTrackingReactionTimeMultiplier                         ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     TrackingInterpTime                                          ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     TrackingInterpTimeMultForGroundVehicles                     ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     TrackingInterpTimeMultForFlyingVehicles                     ___ OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     MaxTrackingPredictionError                                  ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     MaxTrackingOffsetErrorMultiplier                            ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     AdjustedTrackingOffsetErrorMultiplierAgainstAIs             ___ OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     TrackingErrorUpdateInterval                                 ___ OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     TrackingInAirVelocityThreshold                              ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     TrackingInAirHeightDeltaThreshold                           ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     TargetAcquisitionRate                                       ___ OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     TimeToHitMultiplier                                         ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     MaxTimeToHitAddedCausedByTargetSpeed                        ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     MaxTimeToHitAddedCausedByTargetInAir                        ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     TimeToHitDelayMultiplierWhenTargetInAir                     ___ OFFSET(get<float>, {0x128, 4, 0, 0})
	SMember(FScalableFloat)                            TimeToHitDelayMultiplierCurveBasedOnSpeed                   ___ OFFSET(get<T>, {0x130, 40, 0, 0})
	DMember(bool)                                      bAimingCircleEnabled                                        ___ OFFSET(get<bool>, {0x158, 1, 0, 0})
	DMember(bool)                                      bTargetIdleDetectionEnabled                                 ___ OFFSET(get<bool>, {0x159, 1, 0, 0})
	DMember(bool)                                      bTargetIdleUseAgainstNPC                                    ___ OFFSET(get<bool>, {0x15A, 1, 0, 0})
	DMember(float)                                     TargetIdleLookBackTime                                      ___ OFFSET(get<float>, {0x15C, 4, 0, 0})
	DMember(float)                                     TargetIdleUnsuspectingCosAngle                              ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     TargetIdleUnsuspectingDistance                              ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     TargetIdleUnsuspectingDamageDuration                        ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     TargetIdleUnsuspectingTimeMultiplier                        ___ OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     TargetIdleVerticalSpeedThreshold                            ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     TargetIdleLateralSpeedThreshold                             ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     TargetIdleFrontalSpeedThreshold                             ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     TargetIdleRevivedGracePeriodDuration                        ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     MaxDistanceEvaluationErrorRatio                             ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     TargetingUpdateInterval                                     ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     TargetingUpdateIntervalMaxDeviation                         ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     ReachLeashLimitToleranceDistance                            ___ OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(bool)                                      bShootFloorTrapOnlyWhenHigherThanTrap                       ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(float)                                     TargetingRotationSpeedLimit                                 ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     TargetingRotationSnapThreshold                              ___ OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     BaseClampingDistance                                        ___ OFFSET(get<float>, {0x19C, 4, 0, 0})
	SMember(FDigestedWeaponAccuracy)                   NoWeaponAccuracy                                            ___ OFFSET(get<T>, {0x1A0, 808, 0, 0})
	CMember(TArray<FDigestedWeaponAccuracyCategory>)   WeaponAccuracies                                            ___ OFFSET(get<T>, {0x4C8, 16, 0, 0})
	CMember(TArray<FDigestedTargetBasedAccuracyCategory>) DigestedTargetBasedAccuracies                            ___ OFFSET(get<T>, {0x4D8, 16, 0, 0})
	SMember(FDigestedTrackingOffsetModifiers)          TrackingOffsetModifiers                                     ___ OFFSET(get<T>, {0x4E8, 288, 0, 0})
	SMember(FDigestedAimingCircleSettings)             DefaultAimingCircleSettings                                 ___ OFFSET(get<T>, {0x608, 360, 0, 0})
	CMember(TWeakObjectPtr<AFortWeapon*>)              CachedWeaponUsedToCalculateAccuracy                         ___ OFFSET(get<T>, {0x770, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotSkillSet
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortAthenaAIBotSkillSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAIBotAimingSkillSet
/// Size: 0x1568 (0x000030 - 0x001598)
class UFortAthenaAIBotAimingSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5528;

public:
	SMember(FFocusSetting)                             DefaultFocusSetting                                         ___ OFFSET(get<T>, {0x30, 320, 0, 0})
	CMember(TArray<FFocusSetting>)                     FocusSettings                                               ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	SMember(FLookAtSetting)                            LookAtSettings                                              ___ OFFSET(get<T>, {0x180, 640, 0, 0})
	SMember(FScalableFloat)                            AllowScanAroundWhileSwimming                                ___ OFFSET(get<T>, {0x400, 40, 0, 0})
	SMember(FScalableFloat)                            TrackingReactionTime                                        ___ OFFSET(get<T>, {0x428, 40, 0, 0})
	SMember(FScalableFloat)                            InAirTrackingReactionTimeMultiplier                         ___ OFFSET(get<T>, {0x450, 40, 0, 0})
	SMember(FScalableFloat)                            TrackingInterpTime                                          ___ OFFSET(get<T>, {0x478, 40, 0, 0})
	SMember(FScalableFloat)                            TrackingInterpTimeMultForGroundVehicles                     ___ OFFSET(get<T>, {0x4A0, 40, 0, 0})
	SMember(FScalableFloat)                            TrackingInterpTimeMultForFlyingVehicles                     ___ OFFSET(get<T>, {0x4C8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxTrackingPredictionError                                  ___ OFFSET(get<T>, {0x4F0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxTrackingOffsetErrorMultiplier                            ___ OFFSET(get<T>, {0x518, 40, 0, 0})
	SMember(FScalableFloat)                            AdjustedTrackingOffsetErrorMultiplierAgainstAIs             ___ OFFSET(get<T>, {0x540, 40, 0, 0})
	SMember(FScalableFloat)                            TrackingErrorUpdateInterval                                 ___ OFFSET(get<T>, {0x568, 40, 0, 0})
	SMember(FScalableFloat)                            TrackingInAirVelocityThreshold                              ___ OFFSET(get<T>, {0x590, 40, 0, 0})
	SMember(FScalableFloat)                            TrackingInAirHeightDeltaThreshold                           ___ OFFSET(get<T>, {0x5B8, 40, 0, 0})
	SMember(FScalableFloat)                            TargetAcquisitionRate                                       ___ OFFSET(get<T>, {0x5E0, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToHitMultiplier                                         ___ OFFSET(get<T>, {0x608, 40, 0, 0})
	SMember(FScalableFloat)                            MaxTimeToHitAddedCausedByTargetSpeed                        ___ OFFSET(get<T>, {0x630, 40, 0, 0})
	SMember(FScalableFloat)                            MaxTimeToHitAddedCausedByTargetInAir                        ___ OFFSET(get<T>, {0x658, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToHitDelayMultiplierWhenTargetInAir                     ___ OFFSET(get<T>, {0x680, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToHitDelayMultiplierCurveBasedOnSpeed                   ___ OFFSET(get<T>, {0x6A8, 40, 0, 0})
	SMember(FScalableFloat)                            AimingCircleEnabled                                         ___ OFFSET(get<T>, {0x6D0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetIdleDetectionEnabled                                  ___ OFFSET(get<T>, {0x6F8, 40, 0, 0})
	SMember(FScalableFloat)                            TargetIdleUseAgainstNPC                                     ___ OFFSET(get<T>, {0x720, 40, 0, 0})
	SMember(FScalableFloat)                            TargetIdleLookBackTime                                      ___ OFFSET(get<T>, {0x748, 40, 0, 0})
	SMember(FScalableFloat)                            TargetIdleUnsuspectingAngle                                 ___ OFFSET(get<T>, {0x770, 40, 0, 0})
	SMember(FScalableFloat)                            TargetIdleUnsuspectingDistance                              ___ OFFSET(get<T>, {0x798, 40, 0, 0})
	SMember(FScalableFloat)                            TargetIdleUnsuspectingDamageDuration                        ___ OFFSET(get<T>, {0x7C0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetIdleUnsuspectingTimeMultiplier                        ___ OFFSET(get<T>, {0x7E8, 40, 0, 0})
	SMember(FScalableFloat)                            TargetIdleVerticalSpeedThreshold                            ___ OFFSET(get<T>, {0x810, 40, 0, 0})
	SMember(FScalableFloat)                            TargetIdleLateralSpeedThreshold                             ___ OFFSET(get<T>, {0x838, 40, 0, 0})
	SMember(FScalableFloat)                            TargetIdleFrontalSpeedThreshold                             ___ OFFSET(get<T>, {0x860, 40, 0, 0})
	SMember(FScalableFloat)                            TargetIdleRevivedGracePeriodDuration                        ___ OFFSET(get<T>, {0x888, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceEvaluationErrorRatio                             ___ OFFSET(get<T>, {0x8B0, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingUpdateInterval                                     ___ OFFSET(get<T>, {0x8D8, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingUpdateIntervalMaxDeviation                         ___ OFFSET(get<T>, {0x900, 40, 0, 0})
	SMember(FScalableFloat)                            ReachLeashLimitToleranceDistance                            ___ OFFSET(get<T>, {0x928, 40, 0, 0})
	SMember(FScalableFloat)                            ShootFloorTrapOnlyWhenHigherThanTrap                        ___ OFFSET(get<T>, {0x950, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingRotationSpeedLimit                                 ___ OFFSET(get<T>, {0x978, 40, 0, 0})
	SMember(FScalableFloat)                            TargetingRotationSnapThreshold                              ___ OFFSET(get<T>, {0x9A0, 40, 0, 0})
	SMember(FScalableFloat)                            BaseClampingDistance                                        ___ OFFSET(get<T>, {0x9C8, 40, 0, 0})
	SMember(FWeaponAccuracy)                           NoWeaponAccuracy                                            ___ OFFSET(get<T>, {0x9F0, 1888, 0, 0})
	CMember(TArray<FWeaponAccuracyCategory>)           WeaponAccuracies                                            ___ OFFSET(get<T>, {0x1150, 16, 0, 0})
	CMember(TArray<FTargetBasedAccuracyCategory>)      TargetBasedAccuracies                                       ___ OFFSET(get<T>, {0x1160, 16, 0, 0})
	DMember(bool)                                      bDigestTrackingOffsetModifiersWithAvgMatchMMR               ___ OFFSET(get<bool>, {0x1170, 1, 1, 0})
	CMember(TArray<FTrackingOffsetModifierInfo>)       TrackingOffsetModifiers                                     ___ OFFSET(get<T>, {0x1178, 16, 0, 0})
	SMember(FAimingCircleSettings)                     DefaultAimingCircleSettings                                 ___ OFFSET(get<T>, {0x1188, 1040, 0, 0})
};

/// Class /Script/FortniteAI.AISenseScalableConfig
/// Size: 0x0000 (0x000028 - 0x000028)
class UAISenseScalableConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.AISenseScalableConfig_Sight
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UAISenseScalableConfig_Sight : public UAISenseScalableConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FScalableFloat)                            SightRadius                                                 ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            LoseSightRadius                                             ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            PeripheralVisionAngleDegrees                                ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            PointOfViewBackwardOffset                                   ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            NearClippingRadius                                          ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
};

/// Class /Script/FortniteAI.AISenseScalableConfig_Hearing
/// Size: 0x0028 (0x000028 - 0x000050)
class UAISenseScalableConfig_Hearing : public UAISenseScalableConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            HearingRange                                                ___ OFFSET(get<T>, {0x28, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotAlertLevelConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortAthenaAIBotAlertLevelConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   AlertLevels                                                 ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(UAISenseScalableConfig*)                   ScalableSenseConfig                                         ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotAttackingDigestedSkillSet
/// Size: 0x0160 (0x000030 - 0x000190)
class UFortAthenaAIBotAttackingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	DMember(float)                                     MaxDistanceToEngageMeleeSq                                  ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MinDistanceToGiveUpMeleeSq                                  ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxDistanceToThrowMeleeAttackSq                             ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     ExcludeReachingTargetInMeleeTime                            ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     ExcludeReachingTargetMoveDistanceSquared                    ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FGameplayTagQuery)                         ContinousMeleeAttackTagQuery                                ___ OFFSET(get<T>, {0x48, 72, 0, 0})
	DMember(bool)                                      bOnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon           ___ OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bOnlyUsePickaxeAgainstGameParticipants                      ___ OFFSET(get<bool>, {0x91, 1, 0, 0})
	DMember(float)                                     MaxDistanceToConsiderAsAnAlternateTargetSq                  ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(bool)                                      bEnableAlternateTargetRequiredTags                          ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
	SMember(FGameplayTagContainer)                     AlternateTargetRequiredTags                                 ___ OFFSET(get<T>, {0xA0, 32, 0, 0})
	DMember(bool)                                      bEnableWTFBehavior                                          ___ OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(float)                                     MinCooldownDelayBetweenMeleeAttackAttempts                  ___ OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     MaxCooldownDelayBetweenMeleeAttackAttempts                  ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     ThrowableGameplayTags                                       ___ OFFSET(get<T>, {0xD0, 32, 0, 0})
	SMember(FGameplayTagQuery)                         CombatMeleeTagQuery                                         ___ OFFSET(get<T>, {0xF0, 72, 0, 0})
	DMember(int32_t)                                   MinThrowableCount                                           ___ OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	DMember(int32_t)                                   MaxThrowableCount                                           ___ OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	DMember(float)                                     ThrowableCooldownMin                                        ___ OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     ThrowableCooldownMax                                        ___ OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     ThrowableMinimumRangeSquared                                ___ OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(bool)                                      bThrowableEvaluatorActive                                   ___ OFFSET(get<bool>, {0x14C, 1, 0, 0})
	DMember(float)                                     RetreatMinHealthRange                                       ___ OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     RetreatMaxHealthRange                                       ___ OFFSET(get<float>, {0x154, 4, 0, 0})
	DMember(float)                                     RetreatProbability                                          ___ OFFSET(get<float>, {0x158, 4, 0, 0})
	DMember(float)                                     RetreatRangeMinSquared                                      ___ OFFSET(get<float>, {0x15C, 4, 0, 0})
	DMember(float)                                     RetreatRangeMaxSquared                                      ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     RetreatMaxDuration                                          ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FVector)                                   RetreatPositionBoxExtent                                    ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	DMember(bool)                                      CautiousInvestigationEnabled                                ___ OFFSET(get<bool>, {0x180, 1, 0, 0})
	DMember(float)                                     TimeSinceLastStimToBeCautious                               ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     CautiousInvestigationTimeMax                                ___ OFFSET(get<float>, {0x188, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotAttackingSkillSet
/// Size: 0x0520 (0x000030 - 0x000550)
class UFortAthenaAIBotAttackingSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	SMember(FScalableFloat)                            MaxDistanceToEngageMelee                                    ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceToGiveUpMelee                                    ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceToThrowMeleeAttack                               ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FGameplayTagQuery)                         ContinousMeleeAttackTagQuery                                ___ OFFSET(get<T>, {0xA8, 72, 0, 0})
	SMember(FScalableFloat)                            OnlyEngageMeleeAgainstThreatThatHasNoRangeWeapon            ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            OnlyUsePickaxeAgainstGameParticipants                       ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            EnableWTFBehavior                                           ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            MinCooldownDelayBetweenMeleeAttackAttempts                  ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            MaxCooldownDelayBetweenMeleeAttackAttempts                  ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FGameplayTagQuery)                         CombatMeleeTagQuery                                         ___ OFFSET(get<T>, {0x1B8, 72, 0, 0})
	SMember(FScalableFloat)                            ExcludeReachingTargetInMeleeTime                            ___ OFFSET(get<T>, {0x200, 40, 0, 0})
	SMember(FScalableFloat)                            ExcludeReachingTargetMoveDistance                           ___ OFFSET(get<T>, {0x228, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceToConsiderAsAnAlternateTarget                    ___ OFFSET(get<T>, {0x250, 40, 0, 0})
	SMember(FScalableFloat)                            EnableAlternateTargetRequiredTags                           ___ OFFSET(get<T>, {0x278, 40, 0, 0})
	SMember(FGameplayTagContainer)                     AlternateTargetRequiredTags                                 ___ OFFSET(get<T>, {0x2A0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ThrowableGameplayTags                                       ___ OFFSET(get<T>, {0x2C0, 32, 0, 0})
	SMember(FScalableFloat)                            MinThrowableCount                                           ___ OFFSET(get<T>, {0x2E0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxThrowableCount                                           ___ OFFSET(get<T>, {0x308, 40, 0, 0})
	SMember(FScalableFloat)                            ThrowableCooldownMin                                        ___ OFFSET(get<T>, {0x330, 40, 0, 0})
	SMember(FScalableFloat)                            ThrowableCooldownMax                                        ___ OFFSET(get<T>, {0x358, 40, 0, 0})
	SMember(FScalableFloat)                            ThrowableMinimumRange                                       ___ OFFSET(get<T>, {0x380, 40, 0, 0})
	SMember(FScalableFloat)                            ThrowableEvaluatorActive                                    ___ OFFSET(get<T>, {0x3A8, 40, 0, 0})
	SMember(FScalableFloat)                            RetreatMinHealthRange                                       ___ OFFSET(get<T>, {0x3D0, 40, 0, 0})
	SMember(FScalableFloat)                            RetreatMaxHealthRange                                       ___ OFFSET(get<T>, {0x3F8, 40, 0, 0})
	SMember(FScalableFloat)                            RetreatProbability                                          ___ OFFSET(get<T>, {0x420, 40, 0, 0})
	SMember(FScalableFloat)                            RetreatRangeMin                                             ___ OFFSET(get<T>, {0x448, 40, 0, 0})
	SMember(FScalableFloat)                            RetreatRangeMax                                             ___ OFFSET(get<T>, {0x470, 40, 0, 0})
	SMember(FScalableFloat)                            RetreatMaxDuration                                          ___ OFFSET(get<T>, {0x498, 40, 0, 0})
	SMember(FVector)                                   RetreatPositionBoxExtent                                    ___ OFFSET(get<T>, {0x4C0, 24, 0, 0})
	SMember(FScalableFloat)                            CautiousInvestigationEnabled                                ___ OFFSET(get<T>, {0x4D8, 40, 0, 0})
	SMember(FScalableFloat)                            TimeSinceLastStimToBeCautious                               ___ OFFSET(get<T>, {0x500, 40, 0, 0})
	SMember(FScalableFloat)                            CautiousInvestigationTimeMax                                ___ OFFSET(get<T>, {0x528, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotBuildingDigestedSkillSet
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortAthenaAIBotBuildingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     DefensiveBuildingDelayBetweenBuilds                         ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     DefensiveBuildingDelayDeviationBetweenBuilds                ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DelayBetweenBuildPieces                                     ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     ForceEquipBuildToolDuration                                 ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     StealWallTurboBuildDetectionTime                            ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   StealWallAfterNumberOfTurboBuiltWall                        ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(float)                                     StealWallEfficiency                                         ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     StealWallBuildingTemplateWeights                            ___ OFFSET(get<float>, {0x4C, 20, 0, 0})
	CMember(TArray<FAthenaFortAIBotDigestedWeightedBuildingList>) WeightedBuildingLists                            ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotBuildingSkillSet
/// Size: 0x01F0 (0x000030 - 0x000220)
class UFortAthenaAIBotBuildingSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FScalableFloat)                            DefensiveBuildingDelayBetweenBuilds                         ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            DefensiveBuildingDelayDeviationBetweenBuilds                ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            DelayBetweenBuildPieces                                     ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            ForceEquipBuildToolDuration                                 ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	CMember(TArray<FAthenaFortAIBotWeightedBuildingList>) WeightedBuildingLists                                    ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FScalableFloat)                            StealWallTurboBuildDetectionTime                            ___ OFFSET(get<T>, {0xE0, 40, 0, 0})
	SMember(FScalableFloat)                            StealWallAfterNumberOfTurboBuiltWall                        ___ OFFSET(get<T>, {0x108, 40, 0, 0})
	SMember(FScalableFloat)                            StealWallEfficiency                                         ___ OFFSET(get<T>, {0x130, 40, 0, 0})
	SMember(FScalableFloat)                            StealWallBuildingTemplateWeights                            ___ OFFSET(get<T>, {0x158, 200, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotCosmeticData
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAthenaAIBotCosmeticData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<TWeakObjectPtr>)                    CosmeticLibraries                                           ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotCosmeticLibraryData
/// Size: 0x0190 (0x000030 - 0x0001C0)
class UFortAthenaAIBotCosmeticLibraryData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               PredefineSetsDataTable                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               CharactersDataTable                                         ___ OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               GlidersDataTable                                            ___ OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               SkyDiveContrailsDataTable                                   ___ OFFSET(get<T>, {0x90, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               BackpacksDataTable                                          ___ OFFSET(get<T>, {0xB0, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               PickaxesDataTable                                           ___ OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               FallbackCharactersDataTable                                 ___ OFFSET(get<T>, {0xF0, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               EmotesDataTable                                             ___ OFFSET(get<T>, {0x110, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               BannerIconDataTable                                         ___ OFFSET(get<T>, {0x130, 32, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               BannerColorDataTable                                        ___ OFFSET(get<T>, {0x150, 32, 0, 0})
	SMember(FScalableFloat)                            OddsToUseSameSetCosmeticItems                               ___ OFFSET(get<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            OddsToUseRandomItemWhenNoneFromSetAvailable                 ___ OFFSET(get<T>, {0x198, 40, 0, 0})
};

/// Class /Script/FortniteAI.BotCosmeticBlueprintHelperLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBotCosmeticBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAthenaAIBotCustomizationData
/// Size: 0x0150 (0x000030 - 0x000180)
class UFortAthenaAIBotCustomizationData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(UClass*)                                   PawnClass                                                   ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bRequiresUniqueNetId                                        ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(bool)                                      bHasCustomSquadId                                           ___ OFFSET(get<bool>, {0x38, 1, 1, 1})
	DMember(char)                                      CustomSquadId                                               ___ OFFSET(get<char>, {0x39, 1, 0, 0})
	DMember(bool)                                      bOverrideCanRespawnOnDeath                                  ___ OFFSET(get<bool>, {0x3A, 1, 1, 0})
	DMember(bool)                                      bCanRespawnOnDeath                                          ___ OFFSET(get<bool>, {0x3A, 1, 1, 1})
	DMember(bool)                                      bOverrideBehaviorTree                                       ___ OFFSET(get<bool>, {0x3A, 1, 1, 2})
	DMember(bool)                                      bOverrideCharacterCustomization                             ___ OFFSET(get<bool>, {0x3A, 1, 1, 3})
	DMember(bool)                                      bOverrideDBNOPlayStyle                                      ___ OFFSET(get<bool>, {0x3A, 1, 1, 4})
	DMember(bool)                                      bOverrideSkillLevel                                         ___ OFFSET(get<bool>, {0x3A, 1, 1, 5})
	DMember(bool)                                      bUseMatchMMRToOverrideSkillLevel                            ___ OFFSET(get<bool>, {0x3A, 1, 1, 6})
	DMember(bool)                                      bOverrideSkillSets                                          ___ OFFSET(get<bool>, {0x3A, 1, 1, 7})
	DMember(bool)                                      bOverrideStartupInventory                                   ___ OFFSET(get<bool>, {0x3B, 1, 1, 0})
	DMember(bool)                                      bOverrideBotNameSettings                                    ___ OFFSET(get<bool>, {0x3B, 1, 1, 1})
	DMember(bool)                                      bOverrideBotIDAnalyticsSuffix                               ___ OFFSET(get<bool>, {0x3B, 1, 1, 2})
	DMember(bool)                                      bOverrideConstructionBuildingInfo                           ___ OFFSET(get<bool>, {0x3B, 1, 1, 3})
	CMember(TWeakObjectPtr<UDataTable*>)               OverrideSkillLevelMMRTable                                  ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(UBehaviorTree*)                            BehaviorTree                                                ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(BotDataOverrideCosmeticMode)               OverrideCosmeticMode                                        ___ OFFSET(get<T>, {0x68, 1, 0, 0})
	CMember(UFortAthenaAIBotCharacterCustomization*)   CharacterCustomization                                      ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaAIBotCosmeticLibraryData*>) CosmeticCustomizationLibrary                     ___ OFFSET(get<T>, {0x78, 32, 0, 0})
	CMember(EDBNOPlayStyle)                            DBNOPlayStyle                                               ___ OFFSET(get<T>, {0x98, 1, 0, 0})
	DMember(float)                                     SkillLevel                                                  ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	CMember(TArray<UClass*>)                           SkillSetOverrideClasses                                     ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(UFortAthenaAIBotInventoryItems*)           StartupInventory                                            ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UFortBotNameSettings*)                     BotNameSettings                                             ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FString)                                   BotAnalyticsSuffix                                          ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(float)                                     SpawnTracePadding                                           ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	SMember(FConstructionBuildingInfo)                 OverrideConstructionBuildingInfo                            ___ OFFSET(get<T>, {0xE0, 144, 0, 0})
	CMember(UClass*)                                   AILODSettingsContainer                                      ___ OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(UFortAthenaAILODSettingsContainer*)        AILODSettingsContainerLoaded                                ___ OFFSET(get<T>, {0x178, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotDBNODigestedSkillSet
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortAthenaAIBotDBNODigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     MaxDBNOCrawlingResponseTime                                 ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MaxDBNOCrawlingResponseTimeDeviation                        ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     AllyEvaluationTime                                          ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     AllyEvaluationTimeDeviation                                 ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     AllyEvaluationMaxDistance                                   ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     OddsToLookForCover                                          ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     CoverEvaluationTime                                         ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     CoverEvaluationTimeDeviation                                ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotDBNOSkillSet
/// Size: 0x0140 (0x000030 - 0x000170)
class UFortAthenaAIBotDBNOSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FScalableFloat)                            MaxDBNOCrawlingResponseTime                                 ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDBNOCrawlingResponseTimeDeviation                        ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            AllyEvaluationTime                                          ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            AllyEvaluationTimeDeviation                                 ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            AllyEvaluationMaxDistance                                   ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            OddsToLookForCover                                          ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            CoverEvaluationTime                                         ___ OFFSET(get<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            CoverEvaluationTimeDeviation                                ___ OFFSET(get<T>, {0x148, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotEmoteDigestedSkillSet
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortAthenaAIBotEmoteDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     InfiniteEmoteMinDuration                                    ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     InfiniteEmoteMaxDuration                                    ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   EmotesMaxCount                                              ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     DanceOnKillMaxDistanceFromKillSqr                           ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     DanceOnKillMaxTimeFromKill                                  ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     DanceOnKillMinTimeFromLastTry                               ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     DanceOnKillChanceToDanceOnBots                              ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     DanceOnKillChanceToDanceOnPlayers                           ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotEmoteSkillSet
/// Size: 0x0118 (0x000030 - 0x000148)
class UFortAthenaAIBotEmoteSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FScalableFloat)                            InfiniteEmoteMinDuration                                    ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            InfiniteEmoteMaxDuration                                    ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            DanceOnKillMaxDistanceFromKill                              ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            DanceOnKillMaxTimeFromKill                                  ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            DanceOnKillMinTimeFromLastTry                               ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            DanceOnKillChanceToDanceOnBots                              ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            DanceOnKillChanceToDanceOnPlayers                           ___ OFFSET(get<T>, {0x120, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIEvaluator
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UFortAthenaAIEvaluator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UBehaviorTreeComponent*)                   CachedOwnerComp                                             ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(AAIController*)                            CachedAIController                                          ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UClass*)                                   OverrideNavigationFilterClass                               ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FName)                                     ExecutionStatusName                                         ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	CMember(TScriptInterface<Class>)                   CachedLODSettingsInterface                                  ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(UBlackboardKeyAccessValidator*)            KeyAccessValidator                                          ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotEvaluator
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UFortAthenaAIBotEvaluator : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(AFortAthenaAIBotController*)               CachedBotController                                         ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Movement
/// Size: 0x0100 (0x0000A8 - 0x0001A8)
class UFortAthenaAIBotEvaluator_Movement : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FName)                                     MovementStateKeyName                                        ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     MovementDestinationKeyName                                  ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     LastPartialPathTimeKeyName                                  ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     LastPartialPathCountKeyName                                 ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     LastBlockedPathCountKeyName                                 ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     UnstuckInWaterExecutionStatusName                           ___ OFFSET(get<T>, {0xBC, 4, 0, 0})
	SMember(FName)                                     UnstuckLastBlockedByActorKeyName                            ___ OFFSET(get<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     UnstuckExecutionStatusKeyName                               ___ OFFSET(get<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     TeleportExecutionStatusKeyName                              ___ OFFSET(get<T>, {0xC8, 4, 0, 0})
	SMember(FName)                                     UndermineExecutionStatusKeyName                             ___ OFFSET(get<T>, {0xCC, 4, 0, 0})
	SMember(FName)                                     UndermineTargetKeyName                                      ___ OFFSET(get<T>, {0xD0, 4, 0, 0})
	SMember(FName)                                     UndermineLocationImpactName                                 ___ OFFSET(get<T>, {0xD4, 4, 0, 0})
	SMember(FName)                                     UnstuckSteerExecutionStatusKeyName                          ___ OFFSET(get<T>, {0xD8, 4, 0, 0})
	SMember(FName)                                     UnstuckSteerDirectionKeyName                                ___ OFFSET(get<T>, {0xDC, 4, 0, 0})
	CMember(UAthenaAIServicePlayerBots*)               CachedAIServicePlayerBots                                   ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UFortAthenaAIBotMovementDigestedSkillSet*) CachedMovementDigestedSkillSet                              ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(UFortAthenaAIBotUnstuckDigestedSkillSet*)  UnstuckSkillSet                                             ___ OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotEvaluator_Loot
/// Size: 0x01C0 (0x0001A8 - 0x000368)
class UFortAthenaAIBotEvaluator_Loot : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(UAthenaAIServiceLoot*)                     CachedAIServiceLoot                                         ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(UFortAthenaAIBotLootingDigestedSkillSet*)  LootingSkillSet                                             ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	SMember(FName)                                     LootDestinationKeyName                                      ___ OFFSET(get<T>, {0x1C8, 4, 0, 0})
	SMember(FName)                                     LootObjectKeyName                                           ___ OFFSET(get<T>, {0x1CC, 4, 0, 0})
	SMember(FName)                                     LootTypeKeyName                                             ___ OFFSET(get<T>, {0x1D0, 4, 0, 0})
	SMember(FName)                                     POINavigationExecutionStatusKeyName                         ___ OFFSET(get<T>, {0x1D4, 4, 0, 0})
	CMember(EExecutionStatus)                          POINavigationExecutionStatus                                ___ OFFSET(get<T>, {0x1E0, 1, 0, 0})
	DMember(uint32_t)                                  CurrentLootOctreeElementId                                  ___ OFFSET(get<uint32_t>, {0x358, 4, 0, 0})
	CMember(AFortTeamInfoAthena*)                      CachedTeamInfo                                              ___ OFFSET(get<T>, {0x360, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotEvasiveManeuversDigestedSkillSet
/// Size: 0x0118 (0x000030 - 0x000148)
class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FDigestedEvasiveManeuverSkillSettings)     DefaultEvasiveManeuverSkillSettings                         ___ OFFSET(get<T>, {0x38, 88, 0, 0})
	CMember(TArray<FDigestedEvasiveManeuverSkillSettingsSpecialization>) EvasiveManeuverSkillSettingsSpecializations ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(float)                                     JetpackStrafeDelay                                          ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     JetpackStrafeRandomDeviationDelay                           ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     JetpackStrafeOverlayWeight                                  ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     JetpackStrafeDistanceMax                                    ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     JetpackStrafeDistanceMin                                    ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     JetpackStrafeActivationTime                                 ___ OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     JetpackStrafeActivationTimeRandomDeviation                  ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     JetpackStrafeTime                                           ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     JetpackStrafeTimeRandomDeviation                            ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     DodgeMaxDistanceSquared                                     ___ OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     CrouchMaxDistanceSquared                                    ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     JumpMaxDistanceSquared                                      ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     JetpackStrafeMaxDistanceSquared                             ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     AvoidProjectilesReactionDistanceSqr                         ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     AvoidProjectilesReactionTimeMin                             ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     AvoidProjectilesReactionTimeMax                             ___ OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     AvoidProjectilesEvasiveDistanceMin                          ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     AvoidProjectilesEvasiveDistanceMax                          ___ OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     AvoidPhysicsObjectsReactionDistanceMin                      ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     AvoidPhysicsObjectsReactionDistanceMax                      ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     AvoidPhysicsObjectsSpeedMin                                 ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     AvoidPhysicsObjectsSpeedMax                                 ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	SMember(FGameplayTagQuery)                         CanUseEvasiveManeuversTagQuery                              ___ OFFSET(get<T>, {0xF8, 72, 0, 0})
	DMember(bool)                                      bCanCrouchInUrgentMovement                                  ___ OFFSET(get<bool>, {0x140, 1, 0, 0})
	DMember(bool)                                      bCanDodgeInUrgentMovement                                   ___ OFFSET(get<bool>, {0x141, 1, 0, 0})
	DMember(bool)                                      bCanJumpInUrgentMovement                                    ___ OFFSET(get<bool>, {0x142, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotEvasiveManeuversSkillSet
/// Size: 0x0698 (0x000030 - 0x0006C8)
class UFortAthenaAIBotEvasiveManeuversSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1736;

public:
	SMember(FEvasiveManeuverSkillSettings)             DefaultEvasiveManeuverSkillSettings                         ___ OFFSET(get<T>, {0x30, 600, 0, 0})
	CMember(TArray<FEvasiveManeuverSkillSettingsSpecialization>) EvasiveManeuverSkillSettingsSpecializations       ___ OFFSET(get<T>, {0x288, 16, 0, 0})
	SMember(FScalableFloat)                            JetpackStrafeOverlayWeight                                  ___ OFFSET(get<T>, {0x298, 40, 0, 0})
	SMember(FScalableFloat)                            JetpackStrafeDelay                                          ___ OFFSET(get<T>, {0x2C0, 40, 0, 0})
	SMember(FScalableFloat)                            JetpackStrafeRandomDeviationDelay                           ___ OFFSET(get<T>, {0x2E8, 40, 0, 0})
	SMember(FScalableFloat)                            JetpackStrafeDistanceMax                                    ___ OFFSET(get<T>, {0x310, 40, 0, 0})
	SMember(FScalableFloat)                            JetpackStrafeDistanceMin                                    ___ OFFSET(get<T>, {0x338, 40, 0, 0})
	SMember(FScalableFloat)                            JetpackStrafeActivationTime                                 ___ OFFSET(get<T>, {0x360, 40, 0, 0})
	SMember(FScalableFloat)                            JetpackStrafeActivationTimeRandomDeviation                  ___ OFFSET(get<T>, {0x388, 40, 0, 0})
	SMember(FScalableFloat)                            JetpackStrafeTime                                           ___ OFFSET(get<T>, {0x3B0, 40, 0, 0})
	SMember(FScalableFloat)                            JetpackStrafeTimeRandomDeviation                            ___ OFFSET(get<T>, {0x3D8, 40, 0, 0})
	SMember(FScalableFloat)                            DodgeMaxDistance                                            ___ OFFSET(get<T>, {0x400, 40, 0, 0})
	SMember(FScalableFloat)                            CanDodgeInUrgentMovement                                    ___ OFFSET(get<T>, {0x428, 40, 0, 0})
	SMember(FScalableFloat)                            CrouchMaxDistance                                           ___ OFFSET(get<T>, {0x450, 40, 0, 0})
	SMember(FScalableFloat)                            CanCrouchInUrgentMovement                                   ___ OFFSET(get<T>, {0x478, 40, 0, 0})
	SMember(FScalableFloat)                            JumpMaxDistance                                             ___ OFFSET(get<T>, {0x4A0, 40, 0, 0})
	SMember(FScalableFloat)                            CanJumpInUrgentMovement                                     ___ OFFSET(get<T>, {0x4C8, 40, 0, 0})
	SMember(FScalableFloat)                            JetpackStrafeMaxDistance                                    ___ OFFSET(get<T>, {0x4F0, 40, 0, 0})
	SMember(FScalableFloat)                            AvoidProjectilesReactionDistanceMax                         ___ OFFSET(get<T>, {0x518, 40, 0, 0})
	SMember(FScalableFloat)                            AvoidProjectilesReactionTimeMin                             ___ OFFSET(get<T>, {0x540, 40, 0, 0})
	SMember(FScalableFloat)                            AvoidProjectilesReactionTimeMax                             ___ OFFSET(get<T>, {0x568, 40, 0, 0})
	SMember(FScalableFloat)                            AvoidProjectilesEvasiveDistanceMin                          ___ OFFSET(get<T>, {0x590, 40, 0, 0})
	SMember(FScalableFloat)                            AvoidProjectilesEvasiveDistanceMax                          ___ OFFSET(get<T>, {0x5B8, 40, 0, 0})
	SMember(FScalableFloat)                            AvoidPhysicsObjectsReactionDistanceMin                      ___ OFFSET(get<T>, {0x5E0, 40, 0, 0})
	SMember(FScalableFloat)                            AvoidPhysicsObjectsReactionDistanceMax                      ___ OFFSET(get<T>, {0x608, 40, 0, 0})
	SMember(FScalableFloat)                            AvoidPhysicsObjectsSpeedMin                                 ___ OFFSET(get<T>, {0x630, 40, 0, 0})
	SMember(FScalableFloat)                            AvoidPhysicsObjectsSpeedMax                                 ___ OFFSET(get<T>, {0x658, 40, 0, 0})
	SMember(FGameplayTagQuery)                         CanUseEvasiveManeuversTagQuery                              ___ OFFSET(get<T>, {0x680, 72, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotHarvestDigestedSkillSet
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAthenaAIBotHarvestDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     DelayBetweenHarvest                                         ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     DeviationTimeBetweenHarvest                                 ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     HarvestingMaxDistanceSquared                                ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     WeakSpotHitProbability                                      ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotHarvestSkillSet
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UFortAthenaAIBotHarvestSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FScalableFloat)                            DelayBetweenHarvest                                         ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            DeviationTimeBetweenHarvest                                 ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            HarvestingMaxDistance                                       ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            WeakSpotHitProbability                                      ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotHealingDigestedSkillSet
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortAthenaAIBotHealingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FFortBotDigestedHealingItemsList)          HealthItemsList                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FFortBotDigestedHealingItemsSpec>)  HealthItemsSpecializations                                  ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FFortBotDigestedHealingItemsList)          ShieldItemsList                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FFortBotDigestedHealingItemsSpec>)  ShieldItemsSpecializations                                  ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotHealingSkillSet
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortAthenaAIBotHealingSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FFortBotHealingItemsList)                  HealthItemsList                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FFortBotHealingItemsSpec>)          HealthItemsSpecializations                                  ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FFortBotHealingItemsList)                  ShieldItemsList                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FFortBotHealingItemsSpec>)          ShieldItemsSpecializations                                  ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotInventoryDigestedSkillSet
/// Size: 0x0170 (0x000030 - 0x0001A0)
class UFortAthenaAIBotInventoryDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(float)                                     DefaultWeaponSelectionDistance                              ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     DefaultWeaponSelectionDistanceDeviation                     ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bHasInfiniteResources                                       ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bHasInfiniteAmmoForAllWeapons                               ___ OFFSET(get<bool>, {0x39, 1, 0, 0})
	SMember(FGameplayTagContainer)                     InventorySlotPreference                                     ___ OFFSET(get<T>, {0x40, 192, 0, 0})
	CMember(TArray<FDigestedBotEquipWeaponInfo>)       EquipWeaponInfo                                             ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      bShouldPrioritizeRangedWeaponWithoutTarget                  ___ OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FGameplayTagContainer)                     InfiniteAmmoCheats                                          ___ OFFSET(get<T>, {0x118, 32, 0, 0})
	CMember(TArray<FItemAndCount>)                     MaterialItems                                               ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	DMember(float)                                     GiveMaterialsToBotFrequency                                 ___ OFFSET(get<float>, {0x148, 4, 0, 0})
	SMember(FGameplayTagContainer)                     CheckLoadedAmmoForInfiniteAmmoCheats                        ___ OFFSET(get<T>, {0x150, 32, 0, 0})
	DMember(float)                                     NoWeaponGiveWeaponAfterTime                                 ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     NoWeaponNoPlayerConeDistance                                ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     NoWeaponNoPlayerConeFOV                                     ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FName)                                     NoWeaponLootTierGroup                                       ___ OFFSET(get<T>, {0x17C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     IgnoredAsWeaponTags                                         ___ OFFSET(get<T>, {0x180, 32, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotInventorySkillSet
/// Size: 0x0280 (0x000030 - 0x0002B0)
class UFortAthenaAIBotInventorySkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FScalableFloat)                            DefaultWeaponSelectionDistance                              ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            DefaultWeaponSelectionDistanceDeviation                     ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            HasInfiniteResources                                        ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FGameplayTagContainer)                     InventorySlotPreference                                     ___ OFFSET(get<T>, {0xA8, 192, 0, 0})
	CMember(TArray<FBotEquipWeaponInfo>)               EquipWeaponInfo                                             ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FScalableFloat)                            ShouldPrioritizeRangedWeaponWithoutTarget                   ___ OFFSET(get<T>, {0x178, 40, 0, 0})
	SMember(FScalableFloat)                            HasInfiniteAmmoForAllWeapons                                ___ OFFSET(get<T>, {0x1A0, 40, 0, 0})
	CMember(TArray<FWeaponAmmoCheat>)                  AmmoCheats                                                  ___ OFFSET(get<T>, {0x1C8, 16, 0, 0})
	CMember(TArray<FItemAndCount>)                     MaterialItems                                               ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	SMember(FScalableFloat)                            GiveMaterialsToBotFrequency                                 ___ OFFSET(get<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            NoWeaponGiveWeaponAfterTime                                 ___ OFFSET(get<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            NoWeaponNoPlayerConeDistance                                ___ OFFSET(get<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            NoWeaponNoPlayerConeFOV                                     ___ OFFSET(get<T>, {0x260, 40, 0, 0})
	SMember(FName)                                     NoWeaponLootTierGroup                                       ___ OFFSET(get<T>, {0x288, 4, 0, 0})
	SMember(FGameplayTagContainer)                     IgnoredAsWeaponTags                                         ___ OFFSET(get<T>, {0x290, 32, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotLootingDigestedSkillSet
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UFortAthenaAIBotLootingDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     ThresholdDistanceToSwitchLootItem                           ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ThresholdDistanceSquaredToRescanForBetterLoot               ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     ThresholdTimeToRescanForBetterLoot                          ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FVector)                                   OctreeBoxHalfExtent                                         ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	DMember(float)                                     LootStateEvaluationRadiusSq                                 ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     MinLootDurationPerPOI                                       ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     MaxLootDurationPerPOI                                       ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     LootPickupInteractionTime                                   ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     LootPickupInteractionDeviationTime                          ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Distance2DScore                                             ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     HeightScore                                                 ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     ThreatMaxScore                                              ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	SMember(FScalableFloat)                            ThreatProximityScoreTable                                   ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	DMember(float)                                     PrioritizeWeaponScore                                       ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     PoiSelectionDistanceScore                                   ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     PoiSelectionBotPresenceScore                                ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotLootingSkillSet
/// Size: 0x0270 (0x000030 - 0x0002A0)
class UFortAthenaAIBotLootingSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FScalableFloat)                            ThresholdDistanceToSwitchLootItem                           ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            ThresholdDistanceToRescanForBetterLoot                      ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            ThresholdTimeToRescanForBetterLoot                          ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FVector)                                   OctreeBoxExtent                                             ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FScalableFloat)                            LootStateEvaluationRadius                                   ___ OFFSET(get<T>, {0xC0, 40, 0, 0})
	SMember(FScalableFloat)                            MinLootDurationPerPOI                                       ___ OFFSET(get<T>, {0xE8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxLootDurationPerPOI                                       ___ OFFSET(get<T>, {0x110, 40, 0, 0})
	SMember(FScalableFloat)                            LootPickupInteractionTime                                   ___ OFFSET(get<T>, {0x138, 40, 0, 0})
	SMember(FScalableFloat)                            LootPickupInteractionDeviationTime                          ___ OFFSET(get<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            Distance2DScore                                             ___ OFFSET(get<T>, {0x188, 40, 0, 0})
	SMember(FScalableFloat)                            HeightScore                                                 ___ OFFSET(get<T>, {0x1B0, 40, 0, 0})
	SMember(FScalableFloat)                            ThreatMaxScore                                              ___ OFFSET(get<T>, {0x1D8, 40, 0, 0})
	SMember(FScalableFloat)                            ThreatProximityScoreTable                                   ___ OFFSET(get<T>, {0x200, 40, 0, 0})
	SMember(FScalableFloat)                            PrioritizeWeaponScore                                       ___ OFFSET(get<T>, {0x228, 40, 0, 0})
	SMember(FScalableFloat)                            PoiSelectionDistanceScore                                   ___ OFFSET(get<T>, {0x250, 40, 0, 0})
	SMember(FScalableFloat)                            PoiSelectionBotPresenceScore                                ___ OFFSET(get<T>, {0x278, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotMovementDigestedSkillSet
/// Size: 0x0288 (0x000030 - 0x0002B8)
class UFortAthenaAIBotMovementDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	DMember(float)                                     SlowDownDistanceSquared                                     ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     TraversalSpeedEstimation                                    ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     TraversalSpeedEstimationWithThreat                          ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bOffPathDetectionEnabled                                    ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(float)                                     OffPathDistanceThresholdSquared                             ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     GliderDeployMinAngle                                        ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     GliderDeployMaxAngle                                        ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     GliderNoiseMinDistance                                      ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     GliderNoiseMaxDistance                                      ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     GliderNoiseMinDelay                                         ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     GliderNoiseMaxDelay                                         ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     GliderNoiseDistanceTreshold                                 ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     GliderStopRotationDistance                                  ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     GliderLandingDistance                                       ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     GliderRotationLerpDuration                                  ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      GliderBehaviorEnableFlag                                    ___ OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(float)                                     GliderBehaviorMinInterval                                   ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     GliderBehaviorMaxInterval                                   ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     GliderBehaviorMinRadius                                     ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     GliderBehaviorMaxRadius                                     ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     GliderBehaviorSurveyProbability                             ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(bool)                                      GliderMovementTypeEnableFlag                                ___ OFFSET(get<bool>, {0x84, 1, 0, 0})
	DMember(float)                                     GliderLinearProbability                                     ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     GliderSpiralMinRadius                                       ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     GliderSpiralMaxRadius                                       ___ OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     GliderSpiralMinAngle                                        ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     GliderSpiralMaxAngle                                        ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     GliderSpiralMinInterval                                     ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     GliderSpiralMaxInterval                                     ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     GliderSpiralProbability                                     ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     GliderSerpentineMinAngle                                    ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     GliderSerpentineMaxAngle                                    ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     GliderSerpentineMinRadius                                   ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     GliderSerpentineMaxRadius                                   ___ OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     GliderSerpentineMinInterval                                 ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     GliderSerpentineMaxInterval                                 ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     GliderSerpentineMinPeriod                                   ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     GliderSerpentineMaxPeriod                                   ___ OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     GliderSerpentineProbability                                 ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     JumpOffMinAngle                                             ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     JumpOffMaxAngle                                             ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     MinPatrolDistance                                           ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     MaxPatrolDistance                                           ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     MaxPatrolDistanceRandomDeviation                            ___ OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(float)                                     WobbleProbability                                           ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     MaxDelayBetweenWobblingMovement                             ___ OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     MaxDelayBetweenWobblingMovementRandomDeviation              ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(bool)                                      bAllowSwimWobble                                            ___ OFFSET(get<bool>, {0xEC, 1, 0, 0})
	DMember(float)                                     MaxWobblingDuration                                         ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     MaxWobblingDurationRandomDeviation                          ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     MaxWobblingIntensity                                        ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     WobblingIntensityDeviation                                  ___ OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     MaxWobblingFrequency                                        ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     WobblingFrequencyDeviation                                  ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     WobblingStickToPathCorridorStrength                         ___ OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     MaxAfterLaunchedPauseTime                                   ___ OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     MaxAfterLaunchedFromVortexPauseTime                         ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     AfterLaunchedPauseTimeDeviation                             ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(bool)                                      bSteerMovementWhenLaunched                                  ___ OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(float)                                     SteerMovementWhenLaunchedDirectionUpdateTime                ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     MaxReactionTimeToDangerZone                                 ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     MaxReactionTimeToDangerZoneDeviation                        ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(bool)                                      bLimitBlockingObstacleAngle                                 ___ OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(bool)                                      bEnableSwimSprintJump                                       ___ OFFSET(get<bool>, {0x129, 1, 0, 0})
	DMember(float)                                     SwimSprintJumpDelay                                         ___ OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     SwimSprintJumpDelayDeviation                                ___ OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     SwimUnblockJumpHeightThreshold                              ___ OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(bool)                                      bSwimSprintJumpNav2D                                        ___ OFFSET(get<bool>, {0x138, 1, 0, 0})
	DMember(float)                                     TacticalSprintEvaluationMinTime                             ___ OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(float)                                     TacticalSprintEvaluationMaxTime                             ___ OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     TacticalSprintMinTriggerChance                              ___ OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     TacticalSprintMaxTriggerChance                              ___ OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     TacticalSprintMinTriggerChanceInUrgentMovement              ___ OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     TacticalSprintMaxTriggerChanceInUrgentMovement              ___ OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     TacticalSprintMaxSlopeAngle                                 ___ OFFSET(get<float>, {0x154, 4, 0, 0})
	DMember(float)                                     TacticalSprintMinPathTargetDistance                         ___ OFFSET(get<float>, {0x158, 4, 0, 0})
	DMember(float)                                     TacticalSprintMaxPathAlignmentAngle                         ___ OFFSET(get<float>, {0x15C, 4, 0, 0})
	DMember(float)                                     TacticalSprintMaxPathConeAngle                              ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     TacticalSprintPathConeRearOffset                            ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(bool)                                      TacticalSprintUsageEnabled                                  ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	DMember(float)                                     TacticalSprintJumpTriggerChance                             ___ OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     TacticalSprintJumpDelay                                     ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     TacticalSprintJumpDelayDeviation                            ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     TacticalSprintJumpDelayInitialRatio                         ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FVector)                                   SlidingBoxExtent                                            ___ OFFSET(get<T>, {0x180, 24, 0, 0})
	DMember(float)                                     SlidingEnabled                                              ___ OFFSET(get<float>, {0x198, 16, 0, 0})
	DMember(float)                                     SlidingEvaluationMinTime                                    ___ OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     SlidingEvaluationMaxTime                                    ___ OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(float)                                     SlidingTriggerChanceStyleMalus                              ___ OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     SlidingTriggerChanceStyleMalusRandomDeviation               ___ OFFSET(get<float>, {0x1B4, 4, 0, 0})
	DMember(float)                                     SlidingTriggerChanceFlat                                    ___ OFFSET(get<float>, {0x1B8, 4, 0, 0})
	DMember(float)                                     SlidingTriggerChanceLittleSlope                             ___ OFFSET(get<float>, {0x1BC, 4, 0, 0})
	DMember(float)                                     SlidingTriggerChanceSteepSlope                              ___ OFFSET(get<float>, {0x1C0, 4, 0, 0})
	DMember(float)                                     SlidingDuringUrgentMovementTriggerChanceFlat                ___ OFFSET(get<float>, {0x1C4, 4, 0, 0})
	DMember(float)                                     SlidingDuringUrgentMovementTriggerChanceLittleSlope         ___ OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(float)                                     SlidingDuringUrgentMovementTriggerChanceSteepSlope          ___ OFFSET(get<float>, {0x1CC, 4, 0, 0})
	DMember(float)                                     MinSlidingDuration                                          ___ OFFSET(get<float>, {0x1D0, 4, 0, 0})
	DMember(float)                                     SlidingCooldownMinTime                                      ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(float)                                     SlidingCooldownMaxTime                                      ___ OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     SlidingStopMinDelay                                         ___ OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(float)                                     SlidingStopMaxDelay                                         ___ OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(float)                                     SlidingMaxPathConeAngle                                     ___ OFFSET(get<float>, {0x1E4, 4, 0, 0})
	DMember(float)                                     SlidingMinPathTargetDistance                                ___ OFFSET(get<float>, {0x1E8, 4, 0, 0})
	DMember(float)                                     SlidingAllowResumeFocusOnTargetTriggerChance                ___ OFFSET(get<float>, {0x1EC, 4, 0, 0})
	DMember(float)                                     MoveToRangeAttackMinOffset                                  ___ OFFSET(get<float>, {0x1F0, 4, 0, 0})
	DMember(float)                                     MoveToRangeAttackMaxOffset                                  ___ OFFSET(get<float>, {0x1F4, 4, 0, 0})
	DMember(float)                                     LKPMinOffset                                                ___ OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     LKPMaxOffset                                                ___ OFFSET(get<float>, {0x1FC, 4, 0, 0})
	DMember(bool)                                      bInvestigateAllowSearch                                     ___ OFFSET(get<bool>, {0x200, 1, 0, 0})
	DMember(float)                                     InvestigateWaitMinTime                                      ___ OFFSET(get<float>, {0x204, 4, 0, 0})
	DMember(float)                                     InvestigateWaitMaxTime                                      ___ OFFSET(get<float>, {0x208, 4, 0, 0})
	DMember(float)                                     InvestigateSearchMinDistance                                ___ OFFSET(get<float>, {0x20C, 4, 0, 0})
	DMember(float)                                     InvestigateSearchMaxDistance                                ___ OFFSET(get<float>, {0x210, 4, 0, 0})
	DMember(float)                                     SandTunnelJumpMinTime                                       ___ OFFSET(get<float>, {0x214, 4, 0, 0})
	DMember(float)                                     SandTunnelJumpMaxTime                                       ___ OFFSET(get<float>, {0x218, 4, 0, 0})
	DMember(float)                                     SandTunnelBurrowedAndHiddenChance                           ___ OFFSET(get<float>, {0x21C, 4, 0, 0})
	DMember(float)                                     SandTunnelBurrowedAndHiddenMinTime                          ___ OFFSET(get<float>, {0x220, 4, 0, 0})
	DMember(float)                                     SandTunnelBurrowedAndHiddenMaxTime                          ___ OFFSET(get<float>, {0x224, 4, 0, 0})
	SMember(FVector)                                   ZiplineOctreeBoxExtent                                      ___ OFFSET(get<T>, {0x228, 24, 0, 0})
	DMember(float)                                     ThresholdDistanceToRescanForZiplines                        ___ OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     CooldownBetweenZiplineUsages                                ___ OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(float)                                     DistanceToAddToZiplineStartPosition                         ___ OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     RadiusFromZiplineEnterPointToLookAtExit                     ___ OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(bool)                                      ZiplineUsageEnabled                                         ___ OFFSET(get<bool>, {0x250, 1, 0, 0})
	SMember(FDigestedBotKnockbackSettings)             DefaultKnockbackSettings                                    ___ OFFSET(get<T>, {0x258, 80, 0, 0})
	CMember(TArray<FDigestedBotKnockbackSettings>)     KnockbackSettingsSpecializations                            ___ OFFSET(get<T>, {0x2A8, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotMovementSkillSet
/// Size: 0x13C8 (0x000030 - 0x0013F8)
class UFortAthenaAIBotMovementSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5112;

public:
	SMember(FScalableFloat)                            SlowDownDistance                                            ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            TraversalSpeedEstimation                                    ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            TraversalSpeedEstimationWithThreat                          ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            OffPathDetectionEnabled                                     ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            OffPathDistanceThreshold                                    ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            GliderDeployMinAngle                                        ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            GliderDeployMaxAngle                                        ___ OFFSET(get<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            GliderNoiseMinDistance                                      ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            GliderNoiseMaxDistance                                      ___ OFFSET(get<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            GliderNoiseMinDelay                                         ___ OFFSET(get<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            GliderNoiseMaxDelay                                         ___ OFFSET(get<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            GliderNoiseDistanceTreshold                                 ___ OFFSET(get<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            GliderStopRotationDistance                                  ___ OFFSET(get<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            GliderLandingDistance                                       ___ OFFSET(get<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            GliderRotationLerpDuration                                  ___ OFFSET(get<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            GliderBehaviorEnableFlag                                    ___ OFFSET(get<T>, {0x288, 40, 0, 0})
	SMember(FScalableFloat)                            GliderBehaviorMinInterval                                   ___ OFFSET(get<T>, {0x2B0, 40, 0, 0})
	SMember(FScalableFloat)                            GliderBehaviorMaxInterval                                   ___ OFFSET(get<T>, {0x2D8, 40, 0, 0})
	SMember(FScalableFloat)                            GliderBehaviorMinRadius                                     ___ OFFSET(get<T>, {0x300, 40, 0, 0})
	SMember(FScalableFloat)                            GliderBehaviorMaxRadius                                     ___ OFFSET(get<T>, {0x328, 40, 0, 0})
	SMember(FScalableFloat)                            GliderBehaviorSurveyProbability                             ___ OFFSET(get<T>, {0x350, 40, 0, 0})
	SMember(FScalableFloat)                            GliderMovementTypeEnableFlag                                ___ OFFSET(get<T>, {0x378, 40, 0, 0})
	SMember(FScalableFloat)                            GliderLinearProbability                                     ___ OFFSET(get<T>, {0x3A0, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSpiralMinRadius                                       ___ OFFSET(get<T>, {0x3C8, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSpiralMaxRadius                                       ___ OFFSET(get<T>, {0x3F0, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSpiralMinAngle                                        ___ OFFSET(get<T>, {0x418, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSpiralMaxAngle                                        ___ OFFSET(get<T>, {0x440, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSpiralMinInterval                                     ___ OFFSET(get<T>, {0x468, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSpiralMaxInterval                                     ___ OFFSET(get<T>, {0x490, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSpiralProbability                                     ___ OFFSET(get<T>, {0x4B8, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSerpentineMinAngle                                    ___ OFFSET(get<T>, {0x4E0, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSerpentineMaxAngle                                    ___ OFFSET(get<T>, {0x508, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSerpentineMinRadius                                   ___ OFFSET(get<T>, {0x530, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSerpentineMaxRadius                                   ___ OFFSET(get<T>, {0x558, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSerpentineMinInterval                                 ___ OFFSET(get<T>, {0x580, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSerpentineMaxInterval                                 ___ OFFSET(get<T>, {0x5A8, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSerpentineMinPeriod                                   ___ OFFSET(get<T>, {0x5D0, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSerpentineMaxPeriod                                   ___ OFFSET(get<T>, {0x5F8, 40, 0, 0})
	SMember(FScalableFloat)                            GliderSerpentineProbability                                 ___ OFFSET(get<T>, {0x620, 40, 0, 0})
	SMember(FScalableFloat)                            JumpOffMinAngle                                             ___ OFFSET(get<T>, {0x648, 40, 0, 0})
	SMember(FScalableFloat)                            JumpOffMaxAngle                                             ___ OFFSET(get<T>, {0x670, 40, 0, 0})
	SMember(FScalableFloat)                            MinPatrolDistance                                           ___ OFFSET(get<T>, {0x698, 40, 0, 0})
	SMember(FScalableFloat)                            MaxPatrolDistance                                           ___ OFFSET(get<T>, {0x6C0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxPatrolDistanceRandomDeviation                            ___ OFFSET(get<T>, {0x6E8, 40, 0, 0})
	SMember(FScalableFloat)                            MoveToRangeAttackMinOffset                                  ___ OFFSET(get<T>, {0x710, 40, 0, 0})
	SMember(FScalableFloat)                            MoveToRangeAttackMaxOffset                                  ___ OFFSET(get<T>, {0x738, 40, 0, 0})
	SMember(FScalableFloat)                            LKPMinOffset                                                ___ OFFSET(get<T>, {0x760, 40, 0, 0})
	SMember(FScalableFloat)                            LKPMaxOffset                                                ___ OFFSET(get<T>, {0x788, 40, 0, 0})
	SMember(FScalableFloat)                            bInvestigateAllowSearch                                     ___ OFFSET(get<T>, {0x7B0, 40, 0, 0})
	SMember(FScalableFloat)                            InvestigateWaitMinTime                                      ___ OFFSET(get<T>, {0x7D8, 40, 0, 0})
	SMember(FScalableFloat)                            InvestigateWaitMaxTime                                      ___ OFFSET(get<T>, {0x800, 40, 0, 0})
	SMember(FScalableFloat)                            InvestigateSearchMinDistance                                ___ OFFSET(get<T>, {0x828, 40, 0, 0})
	SMember(FScalableFloat)                            InvestigateSearchMaxDistance                                ___ OFFSET(get<T>, {0x850, 40, 0, 0})
	SMember(FScalableFloat)                            SandTunnelJumpMinTime                                       ___ OFFSET(get<T>, {0x878, 40, 0, 0})
	SMember(FScalableFloat)                            SandTunnelJumpMaxTime                                       ___ OFFSET(get<T>, {0x8A0, 40, 0, 0})
	SMember(FScalableFloat)                            SandTunnelBurrowedAndHiddenChance                           ___ OFFSET(get<T>, {0x8C8, 40, 0, 0})
	SMember(FScalableFloat)                            SandTunnelBurrowedAndHiddenMinTime                          ___ OFFSET(get<T>, {0x8F0, 40, 0, 0})
	SMember(FScalableFloat)                            SandTunnelBurrowedAndHiddenMaxTime                          ___ OFFSET(get<T>, {0x918, 40, 0, 0})
	SMember(FScalableFloat)                            WobblingProbability                                         ___ OFFSET(get<T>, {0x940, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDelayBetweenWobblingMovement                             ___ OFFSET(get<T>, {0x968, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDelayBetweenWobblingMovementRandomDeviation              ___ OFFSET(get<T>, {0x990, 40, 0, 0})
	SMember(FScalableFloat)                            MaxWobblingDuration                                         ___ OFFSET(get<T>, {0x9B8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxWobblingDurationRandomDeviation                          ___ OFFSET(get<T>, {0x9E0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxWobblingIntensity                                        ___ OFFSET(get<T>, {0xA08, 40, 0, 0})
	SMember(FScalableFloat)                            WobblingIntensityDeviation                                  ___ OFFSET(get<T>, {0xA30, 40, 0, 0})
	SMember(FScalableFloat)                            MaxWobblingFrequency                                        ___ OFFSET(get<T>, {0xA58, 40, 0, 0})
	SMember(FScalableFloat)                            WobblingFrequencyDeviation                                  ___ OFFSET(get<T>, {0xA80, 40, 0, 0})
	SMember(FScalableFloat)                            WobblingStickToPathCorridorStrength                         ___ OFFSET(get<T>, {0xAA8, 40, 0, 0})
	SMember(FScalableFloat)                            LimitBlockingObstacleAngle                                  ___ OFFSET(get<T>, {0xAD0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAfterLaunchedPauseTime                                   ___ OFFSET(get<T>, {0xAF8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAfterLaunchedFromVortexPauseTime                         ___ OFFSET(get<T>, {0xB20, 40, 0, 0})
	SMember(FScalableFloat)                            AfterLaunchedPauseTimeDeviation                             ___ OFFSET(get<T>, {0xB48, 40, 0, 0})
	SMember(FScalableFloat)                            SteerMovementWhenLaunched                                   ___ OFFSET(get<T>, {0xB70, 40, 0, 0})
	SMember(FScalableFloat)                            SteerMovementWhenLaunchedDirectionUpdateTime                ___ OFFSET(get<T>, {0xB98, 40, 0, 0})
	SMember(FScalableFloat)                            MaxReactionTimeToDangerZone                                 ___ OFFSET(get<T>, {0xBC0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxReactionTimeToDangerZoneDeviation                        ___ OFFSET(get<T>, {0xBE8, 40, 0, 0})
	SMember(FScalableFloat)                            AllowSwimWobble                                             ___ OFFSET(get<T>, {0xC10, 40, 0, 0})
	SMember(FScalableFloat)                            EnableSwimSprintJump                                        ___ OFFSET(get<T>, {0xC38, 40, 0, 0})
	SMember(FScalableFloat)                            SwimSprintJumpDelay                                         ___ OFFSET(get<T>, {0xC60, 40, 0, 0})
	SMember(FScalableFloat)                            SwimSprintJumpDelayDeviation                                ___ OFFSET(get<T>, {0xC88, 40, 0, 0})
	SMember(FScalableFloat)                            SwimUnblockJumpHeightThreshold                              ___ OFFSET(get<T>, {0xCB0, 40, 0, 0})
	SMember(FScalableFloat)                            SwimSprintJumpNav2D                                         ___ OFFSET(get<T>, {0xCD8, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintEvaluationMinTime                             ___ OFFSET(get<T>, {0xD00, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintEvaluationMaxTime                             ___ OFFSET(get<T>, {0xD28, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintMinTriggerChance                              ___ OFFSET(get<T>, {0xD50, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintMaxTriggerChance                              ___ OFFSET(get<T>, {0xD78, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintMinTriggerChanceInUrgentMovement              ___ OFFSET(get<T>, {0xDA0, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintMaxTriggerChanceInUrgentMovement              ___ OFFSET(get<T>, {0xDC8, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintMaxSlopeAngle                                 ___ OFFSET(get<T>, {0xDF0, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintMinPathTargetDistance                         ___ OFFSET(get<T>, {0xE18, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintMaxPathAlignmentAngle                         ___ OFFSET(get<T>, {0xE40, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintMaxPathConeAngle                              ___ OFFSET(get<T>, {0xE68, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintPathConeRearOffset                            ___ OFFSET(get<T>, {0xE90, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintUsageEnabled                                  ___ OFFSET(get<T>, {0xEB8, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintJumpTriggerChance                             ___ OFFSET(get<T>, {0xEE0, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintJumpDelay                                     ___ OFFSET(get<T>, {0xF08, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintJumpDelayDeviation                            ___ OFFSET(get<T>, {0xF30, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintJumpDelayInitialRatio                         ___ OFFSET(get<T>, {0xF58, 40, 0, 0})
	SMember(FVector)                                   SlidingBoxExtent                                            ___ OFFSET(get<T>, {0xF80, 24, 0, 0})
	SMember(FScalableFloat)                            SlidingEnabled                                              ___ OFFSET(get<T>, {0xF98, 160, 0, 0})
	SMember(FScalableFloat)                            SlidingEvaluationMinTime                                    ___ OFFSET(get<T>, {0x1038, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingEvaluationMaxTime                                    ___ OFFSET(get<T>, {0x1060, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingTriggerChanceStyleMalus                              ___ OFFSET(get<T>, {0x1088, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingTriggerChanceStyleMalusRandomDeviation               ___ OFFSET(get<T>, {0x10B0, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingTriggerChanceFlat                                    ___ OFFSET(get<T>, {0x10D8, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingTriggerChanceLittleSlope                             ___ OFFSET(get<T>, {0x1100, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingTriggerChanceSteepSlope                              ___ OFFSET(get<T>, {0x1128, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingDuringUrgentMovementTriggerChanceFlat                ___ OFFSET(get<T>, {0x1150, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingDuringUrgentMovementTriggerChanceLittleSlope         ___ OFFSET(get<T>, {0x1178, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingDuringUrgentMovementTriggerChanceSteepSlope          ___ OFFSET(get<T>, {0x11A0, 40, 0, 0})
	SMember(FScalableFloat)                            MinSlidingDuration                                          ___ OFFSET(get<T>, {0x11C8, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingCooldownMinTime                                      ___ OFFSET(get<T>, {0x11F0, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingCooldownMaxTime                                      ___ OFFSET(get<T>, {0x1218, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingStopMinDelay                                         ___ OFFSET(get<T>, {0x1240, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingStopMaxDelay                                         ___ OFFSET(get<T>, {0x1268, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingMaxPathConeAngle                                     ___ OFFSET(get<T>, {0x1290, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingMinPathTargetDistance                                ___ OFFSET(get<T>, {0x12B8, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingAllowResumeFocusOnTargetTriggerChance                ___ OFFSET(get<T>, {0x12E0, 40, 0, 0})
	SMember(FVector)                                   ZiplineOctreeBoxExtent                                      ___ OFFSET(get<T>, {0x1308, 24, 0, 0})
	SMember(FScalableFloat)                            ThresholdDistanceToRescanForZiplines                        ___ OFFSET(get<T>, {0x1320, 40, 0, 0})
	SMember(FScalableFloat)                            CooldownBetweenZiplineUsages                                ___ OFFSET(get<T>, {0x1348, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceToAddToZiplineStartPosition                         ___ OFFSET(get<T>, {0x1370, 40, 0, 0})
	SMember(FScalableFloat)                            RadiusFromZiplineEnterPointToLookAtExit                     ___ OFFSET(get<T>, {0x1398, 40, 0, 0})
	SMember(FScalableFloat)                            ZiplineUsageEnabled                                         ___ OFFSET(get<T>, {0x13C0, 40, 0, 0})
	CMember(TArray<FBotKnockbackSettings>)             KnockbackSettings                                           ___ OFFSET(get<T>, {0x13E8, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotPathFollowingComponent
/// Size: 0x0238 (0x000338 - 0x000570)
class UFortAthenaAIBotPathFollowingComponent : public UFortPathFollowingComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(AFortAthenaAIBotController*)               BotController                                               ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(ABuildingActor*)                           HitBuilding                                                 ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UFortAthenaAIBotUnstuckDigestedSkillSet*)  CachedUnstuckSkillSet                                       ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UFortAthenaAIBotMovementDigestedSkillSet*) CachedMovementSkillSet                                      ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UFortAthenaAIBotVehicleDigestedSkillSet*)  CachedVehicleSkillSet                                       ___ OFFSET(get<T>, {0x358, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotPerceptionDigestedSkillSet
/// Size: 0x0320 (0x000030 - 0x000350)
class UFortAthenaAIBotPerceptionDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	DMember(float)                                     SightReactionTime                                           ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     SightRandomDeviation                                        ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TArray<FDigestedSightReactionSpecialization>) SightReactionSpecializations                             ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(float)                                     LoseSightTime                                               ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     LoseSightRandomDeviation                                    ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     SightSuspicionTime                                          ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     SightSuspicionRandomDeviation                               ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     EnemyMarkedReactionTime                                     ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     EnemyMarkedReactionRandomDeviation                          ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     ChancesToHelpOnMarkedEnemy                                  ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     DamageReactionTime                                          ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     DamageRandomDeviation                                       ___ OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     HearingReactionTime                                         ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(float)                                     HearingRandomDeviation                                      ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     MaxHearingLocationError                                     ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     ObstacleDistanceOverrideTargetingSq                         ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     ObstacleForgetDistanceSq                                    ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     ObstacleMinimumBlockingTime                                 ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	SMember(FFortAthenaAIBotDigestedTargetHeuristicSettings) DefaultTargetHeuristicSettings                        ___ OFFSET(get<T>, {0xB0, 400, 0, 0})
	CMember(TArray<FFortAthenaAIBotDigestedTargetHeuristicSettingsSpecialization>) TargetHeuristicsSettingsSpecializations ___ OFFSET(get<T>, {0x240, 16, 0, 0})
	SMember(FSoundPerceptionDigestedSetting)           SoundSettings                                               ___ OFFSET(get<T>, {0x250, 84, 0, 0})
	DMember(float)                                     AlertedAccumulatedLoudnessLimit                             ___ OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(float)                                     AlertedAccumulatedDamageLimit                               ___ OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     LKPAccumulatedLoudnessLimit                                 ___ OFFSET(get<float>, {0x2AC, 4, 0, 0})
	DMember(float)                                     EnemyMarkingDelay                                           ___ OFFSET(get<float>, {0x2B0, 4, 0, 0})
	DMember(float)                                     EnemyMarkingDelayRandomDeviation                            ___ OFFSET(get<float>, {0x2B4, 4, 0, 0})
	DMember(float)                                     AdditionalMarkedEnemyLKPForgetTime                          ___ OFFSET(get<float>, {0x2B8, 4, 0, 0})
	DMember(float)                                     AdditionalMarkedEnemyLKPForgetDistance                      ___ OFFSET(get<float>, {0x2BC, 4, 0, 0})
	SMember(FAlertLevelInfo)                           AlertLevelInfos                                             ___ OFFSET(get<T>, {0x2C0, 64, 0, 0})
	DMember(float)                                     ProjectileThreatForgetTime                                  ___ OFFSET(get<float>, {0x300, 4, 0, 0})
	SMember(FTrapPerceptionSettings)                   TrapPerceptionSettings                                      ___ OFFSET(get<T>, {0x304, 20, 0, 0})
	DMember(bool)                                      bStealthMeterEnable                                         ___ OFFSET(get<bool>, {0x318, 1, 0, 0})
	DMember(float)                                     StealthMeterThreshold                                       ___ OFFSET(get<float>, {0x31C, 4, 0, 0})
	SMember(FScalableFloat)                            StealthMeterIncreaseSpeed                                   ___ OFFSET(get<T>, {0x320, 40, 0, 0})
	DMember(float)                                     StealthMeterDecreaseSpeed                                   ___ OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(bool)                                      bStealthMeterAllowSharedTarget                              ___ OFFSET(get<bool>, {0x34C, 1, 0, 0})
	DMember(bool)                                      bStealthMeterForceLKPWhenDamagedAndThreatened               ___ OFFSET(get<bool>, {0x34D, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotPerceptionSkillSet
/// Size: 0x0CB0 (0x000030 - 0x000CE0)
class UFortAthenaAIBotPerceptionSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3296;

public:
	SMember(FScalableFloat)                            SightReactionTime                                           ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            SightRandomDeviation                                        ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            SightRandomAddition                                         ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	CMember(TArray<FSightReactionSpecialization>)      SightReactionSpecializations                                ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FScalableFloat)                            LoseSightTime                                               ___ OFFSET(get<T>, {0xB8, 40, 0, 0})
	SMember(FScalableFloat)                            LoseSightRandomDeviation                                    ___ OFFSET(get<T>, {0xE0, 40, 0, 0})
	SMember(FScalableFloat)                            SightSuspicionTime                                          ___ OFFSET(get<T>, {0x108, 40, 0, 0})
	SMember(FScalableFloat)                            SightSuspicionRandomDeviation                               ___ OFFSET(get<T>, {0x130, 40, 0, 0})
	SMember(FScalableFloat)                            EnemyMarkedReactionTime                                     ___ OFFSET(get<T>, {0x158, 40, 0, 0})
	SMember(FScalableFloat)                            EnemyMarkedReactionRandomDeviation                          ___ OFFSET(get<T>, {0x180, 40, 0, 0})
	SMember(FScalableFloat)                            ChancesToHelpOnMarkedEnemy                                  ___ OFFSET(get<T>, {0x1A8, 40, 0, 0})
	SMember(FScalableFloat)                            DamageReactionTime                                          ___ OFFSET(get<T>, {0x1D0, 40, 0, 0})
	SMember(FScalableFloat)                            DamageRandomDeviation                                       ___ OFFSET(get<T>, {0x1F8, 40, 0, 0})
	SMember(FScalableFloat)                            HearingReactionTime                                         ___ OFFSET(get<T>, {0x220, 40, 0, 0})
	SMember(FScalableFloat)                            HearingRandomDeviation                                      ___ OFFSET(get<T>, {0x248, 40, 0, 0})
	SMember(FScalableFloat)                            MaxHearingLocationError                                     ___ OFFSET(get<T>, {0x270, 40, 0, 0})
	SMember(FFortAthenaAIBotTargetHeuristicSettings)   DefaultTargetHeuristicSettings                              ___ OFFSET(get<T>, {0x298, 840, 0, 0})
	CMember(TArray<FFortAthenaAIBotTargetHeuristicSettingsSpecialization>) TargetHeuristicSettingsSpecializations  ___ OFFSET(get<T>, {0x5E0, 16, 0, 0})
	SMember(FScalableFloat)                            ObstacleDistanceOverrideTargeting                           ___ OFFSET(get<T>, {0x5F0, 40, 0, 0})
	SMember(FScalableFloat)                            ObstacleForgetDistance                                      ___ OFFSET(get<T>, {0x618, 40, 0, 0})
	SMember(FScalableFloat)                            ObstacleMinimumBlockingTime                                 ___ OFFSET(get<T>, {0x640, 40, 0, 0})
	SMember(FSoundPerceptionSetting)                   SoundSettings                                               ___ OFFSET(get<T>, {0x668, 840, 0, 0})
	SMember(FScalableFloat)                            AlertedAccumulatedLoudnessLimit                             ___ OFFSET(get<T>, {0x9B0, 40, 0, 0})
	SMember(FScalableFloat)                            AlertedAccumulatedDamageLimit                               ___ OFFSET(get<T>, {0x9D8, 40, 0, 0})
	SMember(FScalableFloat)                            LKPAccumulatedLoudnessLimit                                 ___ OFFSET(get<T>, {0xA00, 40, 0, 0})
	SMember(FScalableFloat)                            EnemyMarkingDelay                                           ___ OFFSET(get<T>, {0xA28, 40, 0, 0})
	SMember(FScalableFloat)                            EnemyMarkingDelayRandomDeviation                            ___ OFFSET(get<T>, {0xA50, 40, 0, 0})
	SMember(FScalableFloat)                            AdditionalMarkedEnemyLKPForgetTime                          ___ OFFSET(get<T>, {0xA78, 40, 0, 0})
	SMember(FScalableFloat)                            AdditionalMarkedEnemyLKPForgetDistance                      ___ OFFSET(get<T>, {0xAA0, 40, 0, 0})
	CMember(TArray<UFortAthenaAIBotAlertLevelConfig*>) AlertLevelConfigs                                           ___ OFFSET(get<T>, {0xAC8, 16, 0, 0})
	SMember(FScalableFloat)                            ProjectileThreatForgetTime                                  ___ OFFSET(get<T>, {0xAD8, 40, 0, 0})
	SMember(FScalableFloat)                            TrapDetectionDistanceMax                                    ___ OFFSET(get<T>, {0xB00, 40, 0, 0})
	SMember(FScalableFloat)                            TrapDetectionDistanceMaxDeviation                           ___ OFFSET(get<T>, {0xB28, 40, 0, 0})
	SMember(FScalableFloat)                            TrapDetectionChanceWhenPerpendicular                        ___ OFFSET(get<T>, {0xB50, 40, 0, 0})
	SMember(FScalableFloat)                            TrapDetectionChanceWhenParallel                             ___ OFFSET(get<T>, {0xB78, 40, 0, 0})
	SMember(FScalableFloat)                            TrapDetectionEvaluationAngleThreshold                       ___ OFFSET(get<T>, {0xBA0, 40, 0, 0})
	SMember(FScalableFloat)                            TrapDetectionAutomaticIfWithinCreationTime                  ___ OFFSET(get<T>, {0xBC8, 40, 0, 0})
	SMember(FScalableFloat)                            StealthMeterEnable                                          ___ OFFSET(get<T>, {0xBF0, 40, 0, 0})
	SMember(FScalableFloat)                            StealthMeterThreshold                                       ___ OFFSET(get<T>, {0xC18, 40, 0, 0})
	SMember(FScalableFloat)                            StealthMeterIncreaseSpeed                                   ___ OFFSET(get<T>, {0xC40, 40, 0, 0})
	SMember(FScalableFloat)                            StealthMeterDecreaseSpeed                                   ___ OFFSET(get<T>, {0xC68, 40, 0, 0})
	SMember(FScalableFloat)                            StealthMeterAllowSharedTarget                               ___ OFFSET(get<T>, {0xC90, 40, 0, 0})
	SMember(FScalableFloat)                            bStealthMeterForceLKPWhenDamagedAndThreatened               ___ OFFSET(get<T>, {0xCB8, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotPlayStyleDigestedSkillSet
/// Size: 0x0068 (0x000030 - 0x000098)
class UFortAthenaAIBotPlayStyleDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FScalableFloat)                            AggressiveTowardsThreatWeight                               ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            DefensiveTowardsThreatWeight                                ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	CMember(EDBNOPlayStyle)                            DBNOPlayStyle                                               ___ OFFSET(get<T>, {0x80, 1, 0, 0})
	CMember(TArray<FPlaystyleSwitchToAggressiveDataDigested>) ChangeToAggressiveData                               ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotPlayStyleSkillSet
/// Size: 0x00D8 (0x000030 - 0x000108)
class UFortAthenaAIBotPlayStyleSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FScalableFloat)                            AggressiveTowardsThreatWeight                               ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            DefensiveTowardsThreatWeight                                ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            PassiveDBNOPlayStyle                                        ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            ThirstyDBNOPlayStyle                                        ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            PassiveOnHumansDBNOPlayStyle                                ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	CMember(TArray<FPlaystyleSwitchToAggressiveData>)  ChangeToAggressiveData                                      ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotPropagateAwarenessDigestedSkillSet
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     PropagationMaxDistanceSQ                                    ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     CosineFOV                                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotPropagateAwarenessSkillSet
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortAthenaAIBotPropagateAwarenessSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FScalableFloat)                            PropagationMaxDistance                                      ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            FOV                                                         ___ OFFSET(get<T>, {0x58, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotRangeAttackDigestedSkillSet
/// Size: 0x0120 (0x000030 - 0x000150)
class UFortAthenaAIBotRangeAttackDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TWeakObjectPtr<AFortWeapon*>)              CachedWeaponUsedToCalculateSkillSet                         ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FDigestedRangedWeaponSkillCategory>) RangedWeaponCategorySkills                                 ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(float)                                     ChangeWeaponDelay                                           ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     ChangeWeaponDelayDeviation                                  ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     SwapInsteadOfReloadOdds                                     ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     SwapInsteadOfReloadRangeMax                                 ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     SwapInsteadOfReloadIgnoredWeaponTags                        ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	DMember(float)                                     InterruptReloadToShootOdds                                  ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     ReloadPartiallyEmptyWeaponsOdds                             ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     UseCoverOdds                                                ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     CoverDistanceMin                                            ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	SMember(FScalableFloat)                            CoverDistanceMaxCurve                                       ___ OFFSET(get<T>, {0x90, 40, 0, 0})
	DMember(float)                                     CoverDistanceToTargetMin                                    ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     MinimumDistanceToTargetWhileMovingToCover                   ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     CoverSearchCooldown                                         ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     MaximumPathDetourFactor                                     ___ OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     PostCoverCooldownMin                                        ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     PostCoverCooldownMax                                        ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bCanFindShootingPositionAround                              ___ OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(float)                                     PositioningMaxSearchRadius                                  ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     PositioningQueryCooldown                                    ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(float)                                     PositioningQueryCooldownDeviation                           ___ OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(int32_t)                                   CoverPeekCountMin                                           ___ OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	DMember(int32_t)                                   CoverPeekCountMax                                           ___ OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	DMember(float)                                     ShotDelayAfterTargetRevived                                 ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	CMember(TArray<FDigestedFiringPattern>)            DefaultTargetInAirFiringPatterns                            ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(bool)                                      bStepBackEnabled                                            ___ OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(float)                                     StepBackCooldown                                            ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     StepBackPercentageChance                                    ___ OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     StepBackDistanceBetweenAIPawnAndTargetMin                   ___ OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(float)                                     StepBackDistanceBetweenAIPawnAndTargetMax                   ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     StepBackDistanceBetweenCoverAndTargetMin                    ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     StepBackDistanceBetweenCoverAndTargetMax                    ___ OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     StepBackDistanceBetweenAIPawnAndCoverMin                    ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     StepBackDistanceBetweenAIPawnAndCoverMax                    ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(bool)                                      bFlankingEnabled                                            ___ OFFSET(get<bool>, {0x124, 1, 0, 0})
	DMember(float)                                     FlankingCooldown                                            ___ OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     FlankingPercentageChance                                    ___ OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     FlankingInnerRadius                                         ___ OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     FlankingOuterRadius                                         ___ OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(int32_t)                                   FlankingLayersCount                                         ___ OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	DMember(int32_t)                                   FlankingPointsPerLayerCount                                 ___ OFFSET(get<int32_t>, {0x13C, 4, 0, 0})
	DMember(float)                                     FlankingMaxAngleRad                                         ___ OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     FlankingScorePawnDetectionRadius                            ___ OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     LoFMaxDistanceToTest                                        ___ OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     LoFForceCrouchVehicleSeatZOffset                            ___ OFFSET(get<float>, {0x14C, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotRangeAttackSkillSet
/// Size: 0x06D0 (0x000030 - 0x000700)
class UFortAthenaAIBotRangeAttackSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	CMember(TArray<FRangedWeaponSkillCategory>)        RangedWeaponSkills                                          ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FScalableFloat)                            ChangeWeaponDelay                                           ___ OFFSET(get<T>, {0x40, 40, 0, 0})
	SMember(FScalableFloat)                            ChangeWeaponDelayDeviation                                  ___ OFFSET(get<T>, {0x68, 40, 0, 0})
	SMember(FScalableFloat)                            SwapInsteadOfReloadOdds                                     ___ OFFSET(get<T>, {0x90, 40, 0, 0})
	SMember(FScalableFloat)                            SwapInsteadOfReloadRangeMax                                 ___ OFFSET(get<T>, {0xB8, 40, 0, 0})
	SMember(FGameplayTagContainer)                     SwapInsteadOfReloadIgnoredWeaponTags                        ___ OFFSET(get<T>, {0xE0, 32, 0, 0})
	SMember(FScalableFloat)                            InterruptReloadToShootOdds                                  ___ OFFSET(get<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            ReloadPartiallyEmptyWeaponsOdds                             ___ OFFSET(get<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            UseCoverOdds                                                ___ OFFSET(get<T>, {0x150, 40, 0, 0})
	SMember(FScalableFloat)                            CoverDistanceMin                                            ___ OFFSET(get<T>, {0x178, 40, 0, 0})
	SMember(FScalableFloat)                            CoverDistanceMaxCurve                                       ___ OFFSET(get<T>, {0x1A0, 40, 0, 0})
	SMember(FScalableFloat)                            CoverDistanceToTargetMin                                    ___ OFFSET(get<T>, {0x1C8, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumDistanceToTargetWhileMovingToCover                   ___ OFFSET(get<T>, {0x1F0, 40, 0, 0})
	SMember(FScalableFloat)                            CoverSearchCooldown                                         ___ OFFSET(get<T>, {0x218, 40, 0, 0})
	SMember(FScalableFloat)                            MaximumPathDetourFactor                                     ___ OFFSET(get<T>, {0x240, 40, 0, 0})
	SMember(FScalableFloat)                            PostCoverCooldownMin                                        ___ OFFSET(get<T>, {0x268, 40, 0, 0})
	SMember(FScalableFloat)                            PostCoverCooldownMax                                        ___ OFFSET(get<T>, {0x290, 40, 0, 0})
	SMember(FScalableFloat)                            CanFindShootingPositionAround                               ___ OFFSET(get<T>, {0x2B8, 40, 0, 0})
	SMember(FScalableFloat)                            PositioningMaxSearchRadius                                  ___ OFFSET(get<T>, {0x2E0, 40, 0, 0})
	SMember(FScalableFloat)                            PositioningQueryCooldown                                    ___ OFFSET(get<T>, {0x308, 40, 0, 0})
	SMember(FScalableFloat)                            PositioningQueryCooldownDeviation                           ___ OFFSET(get<T>, {0x330, 40, 0, 0})
	SMember(FScalableFloat)                            CoverPeekCountMin                                           ___ OFFSET(get<T>, {0x358, 40, 0, 0})
	SMember(FScalableFloat)                            CoverPeekCountMax                                           ___ OFFSET(get<T>, {0x380, 40, 0, 0})
	SMember(FScalableFloat)                            ShotDelayAfterTargetRevived                                 ___ OFFSET(get<T>, {0x3A8, 40, 0, 0})
	CMember(TArray<FFiringPattern>)                    DefaultTargetInAirFiringPatterns                            ___ OFFSET(get<T>, {0x3D0, 16, 0, 0})
	SMember(FScalableFloat)                            StepBackEnabled                                             ___ OFFSET(get<T>, {0x3E0, 40, 0, 0})
	SMember(FScalableFloat)                            StepBackCooldown                                            ___ OFFSET(get<T>, {0x408, 40, 0, 0})
	SMember(FScalableFloat)                            StepBackPercentageChance                                    ___ OFFSET(get<T>, {0x430, 40, 0, 0})
	SMember(FScalableFloat)                            StepBackDistanceBetweenAIPawnAndTargetMin                   ___ OFFSET(get<T>, {0x458, 40, 0, 0})
	SMember(FScalableFloat)                            StepBackDistanceBetweenAIPawnAndTargetMax                   ___ OFFSET(get<T>, {0x480, 40, 0, 0})
	SMember(FScalableFloat)                            StepBackDistanceBetweenCoverAndTargetMin                    ___ OFFSET(get<T>, {0x4A8, 40, 0, 0})
	SMember(FScalableFloat)                            StepBackDistanceBetweenCoverAndTargetMax                    ___ OFFSET(get<T>, {0x4D0, 40, 0, 0})
	SMember(FScalableFloat)                            StepBackDistanceBetweenAIPawnAndCoverMin                    ___ OFFSET(get<T>, {0x4F8, 40, 0, 0})
	SMember(FScalableFloat)                            StepBackDistanceBetweenAIPawnAndCoverMax                    ___ OFFSET(get<T>, {0x520, 40, 0, 0})
	SMember(FScalableFloat)                            FlankingEnabled                                             ___ OFFSET(get<T>, {0x548, 40, 0, 0})
	SMember(FScalableFloat)                            FlankingCooldown                                            ___ OFFSET(get<T>, {0x570, 40, 0, 0})
	SMember(FScalableFloat)                            FlankingPercentageChance                                    ___ OFFSET(get<T>, {0x598, 40, 0, 0})
	SMember(FScalableFloat)                            FlankingInnerRadius                                         ___ OFFSET(get<T>, {0x5C0, 40, 0, 0})
	SMember(FScalableFloat)                            FlankingOuterRadius                                         ___ OFFSET(get<T>, {0x5E8, 40, 0, 0})
	SMember(FScalableFloat)                            FlankingLayersCount                                         ___ OFFSET(get<T>, {0x610, 40, 0, 0})
	SMember(FScalableFloat)                            FlankingPointsPerLayerCount                                 ___ OFFSET(get<T>, {0x638, 40, 0, 0})
	SMember(FScalableFloat)                            FlankingMaxAngle                                            ___ OFFSET(get<T>, {0x660, 40, 0, 0})
	SMember(FScalableFloat)                            FlankingScorePawnDetectionRadius                            ___ OFFSET(get<T>, {0x688, 40, 0, 0})
	SMember(FScalableFloat)                            LoFMaxDistanceToTest                                        ___ OFFSET(get<T>, {0x6B0, 40, 0, 0})
	SMember(FScalableFloat)                            LoFForceCrouchVehicleSeatZOffset                            ___ OFFSET(get<T>, {0x6D8, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotReviveDigestedSkillSet
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAthenaAIBotReviveDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     AllyEvaluationTime                                          ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     AllyEvaluationTimeDeviation                                 ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     CooldownOnCancel                                            ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotReviveSkillSet
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UFortAthenaAIBotReviveSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FScalableFloat)                            AllyEvaluationTime                                          ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            AllyEvaluationTimeDeviation                                 ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            CooldownOnCancel                                            ___ OFFSET(get<T>, {0x80, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotUnstuckDigestedSkillSet
/// Size: 0x0060 (0x000030 - 0x000090)
class UFortAthenaAIBotUnstuckDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bCanUndermineWhenStuck                                      ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bCanTeleportWhenStuck                                       ___ OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bAvoidsTeleportLocationsUnderTheLandscape                   ___ OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bCanTeleportWhenStuckWithPlayerAround                       ___ OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(float)                                     MaxDistanceSqToPlayerToTeleport                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     PlayerToPhoebeAngleVisibilityConeToTeleport                 ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     TimeBetweenPartialPathToConsiderPathStuck                   ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   ConsecutivePartialPathCountToConsiderPathStuck              ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     DistanceSqBetweenBlockedPathToConsiderPathStuck             ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     DistanceBetweenSampleToConsiderPathStuckInWater             ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     TimeBetweenSampleToConsiderPathStuckInWater                 ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     DistanceBetweenSampleToConsiderPathStuckOnGround            ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     TimeBetweenSampleToConsiderPathStuckOnGround                ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   ConsecutiveBlockedPathCountToConsiderPathStuck              ___ OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   MaxSafeZoneIndexToAllowTeleport                             ___ OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(float)                                     TimeToBreakBlockingDoor                                     ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     TimeToCloseBlockingDoor                                     ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     RiverbedObstacleCollisionNormalThreshold                    ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      bCanUseSteeringWhenStuckOnIsolatedIsland                    ___ OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(int32_t)                                   MaxSteeringDirectionAttempts                                ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(float)                                     SteeringAttemptDuration                                     ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     EvaluateIsolatedIslandSteeringTime                          ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(bool)                                      bCanSlideWhenBlocked                                        ___ OFFSET(get<bool>, {0x7C, 1, 0, 0})
	DMember(float)                                     SlidingDurationSeconds                                      ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     SlidingStartIntensity                                       ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     SlidingIntensityPerSeconds                                  ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     SlidingMaxIntensity                                         ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotUnstuckSkillSet
/// Size: 0x0438 (0x000030 - 0x000468)
class UFortAthenaAIBotUnstuckSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	SMember(FScalableFloat)                            CanUndermineWhenStuck                                       ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            CanTeleportWhenStuck                                        ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            AvoidsTeleportLocationsUnderTheLandscape                    ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            CanTeleportWhenStuckWithPlayerAround                        ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceToPlayerToTeleport                               ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            PlayerToPhoebeAngleVisibilityConeToTeleport                 ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSafeZoneIndexToAllowTeleport                             ___ OFFSET(get<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToCloseBlockingDoor                                     ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToBreakBlockingDoor                                     ___ OFFSET(get<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            RiverbedObstacleCollisionNormalThreshold                    ___ OFFSET(get<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            CanUseSteeringWhenStuckOnIsolatedIsland                     ___ OFFSET(get<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSteeringDirectionAttempts                                ___ OFFSET(get<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            SteeringAttemptDuration                                     ___ OFFSET(get<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            EvaluateIsolatedIslandSteeringTime                          ___ OFFSET(get<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            TimeBetweenPartialPathToConsiderPathStuck                   ___ OFFSET(get<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            ConsecutivePartialPathCountToConsiderPathStuck              ___ OFFSET(get<T>, {0x288, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceBetweenSampleToConsiderPathStuckInWater             ___ OFFSET(get<T>, {0x2B0, 40, 0, 0})
	SMember(FScalableFloat)                            TimeBetweenSampleToConsiderPathStuckInWater                 ___ OFFSET(get<T>, {0x2D8, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceBetweenSampleToConsiderPathStuckOnGround            ___ OFFSET(get<T>, {0x300, 40, 0, 0})
	SMember(FScalableFloat)                            TimeBetweenSampleToConsiderPathStuckOnGround                ___ OFFSET(get<T>, {0x328, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceBetweenBlockedPathToConsiderPathStuck               ___ OFFSET(get<T>, {0x350, 40, 0, 0})
	SMember(FScalableFloat)                            ConsecutiveBlockedPathCountToConsiderPathStuck              ___ OFFSET(get<T>, {0x378, 40, 0, 0})
	SMember(FScalableFloat)                            bCanSlideWhenBlocked                                        ___ OFFSET(get<T>, {0x3A0, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingDurationSeconds                                      ___ OFFSET(get<T>, {0x3C8, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingStartIntensity                                       ___ OFFSET(get<T>, {0x3F0, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingIntensityPerSeconds                                  ___ OFFSET(get<T>, {0x418, 40, 0, 0})
	SMember(FScalableFloat)                            SlidingMaxIntensity                                         ___ OFFSET(get<T>, {0x440, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotVehicleDigestedSkillSet
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UFortAthenaAIBotVehicleDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FDigestedVehicleDriving)                   NoMatchingVehicleDriving                                    ___ OFFSET(get<T>, {0x30, 184, 0, 0})
	CMember(TArray<FDigestedVehicleDrivingCategory>)   VehicleDrivingArray                                         ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotVehicleSkillSet
/// Size: 0x0310 (0x000030 - 0x000340)
class UFortAthenaAIBotVehicleSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FVehicleDriving)                           NoMatchingVehicleDriving                                    ___ OFFSET(get<T>, {0x30, 768, 0, 0})
	CMember(TArray<FVehicleDrivingCategory>)           VehicleDrivingArray                                         ___ OFFSET(get<T>, {0x330, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotWarmupDigestedSkillSet
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAthenaAIBotWarmupDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     WarmupPlayEmoteBehaviorWeight                               ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     WarmupLootAndShootBehaviorWeight                            ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     WarmupIdleBehaviorWeight                                    ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBotWarmupSkillSet
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UFortAthenaAIBotWarmupSkillSet : public UFortAthenaAIBotSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FScalableFloat)                            WarmupPlayEmoteBehaviorWeight                               ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            WarmupLootAndShootBehaviorWeight                            ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            WarmupIdleBehaviorWeight                                    ___ OFFSET(get<T>, {0x80, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIBot_EQSQueryContext_CurrentTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaAIBot_EQSQueryContext_CurrentTarget : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAthenaAICoverComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UFortAthenaAICoverComponent : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(UClass*)                                   CoverPositionFilterClass                                    ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FVector)                                   CoverBoxExtent                                              ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	DMember(float)                                     CoverOffset                                                 ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	CMember(AAIController*)                            CachedController                                            ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TWeakObjectPtr<ABuildingActor*>)           LastBuildingActorUsedForCover                               ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/FortniteAI.BlackboardKeyAccessValidator
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlackboardKeyAccessValidator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAthenaAIEvaluatorComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UFortAthenaAIEvaluatorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FMovementEvaluatorInfo>)            MovementEvaluatorInfo                                       ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<UFortAthenaAIEvaluator*>)           AIEvaluators                                                ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAILeashVolume
/// Size: 0x0020 (0x0002C8 - 0x0002E8)
class AFortAthenaAILeashVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FVector)                                   ProjectExtent                                               ___ OFFSET(get<T>, {0x2C8, 24, 0, 0})
	DMember(float)                                     IsInsideTolerance                                           ___ OFFSET(get<float>, {0x2E0, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAILODSettingsContainer
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UFortAthenaAILODSettingsContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<UClass*, TScriptInterface>)           ClassToSettings                                             ___ OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TArray<UClass*>)                           LODSettings_AIEvaluators                                    ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<UClass*>)                           LODSettings_CharacterMovement                               ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<UClass*>)                           LODSettings_FortWeaponRanged                                ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<UClass*>)                           LODSettings_GenericTickingObject                            ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(UClass*)                                   FortAIDirectorLODConfig                                     ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UFortAIDirectorLODAIConfig*)               FortAIDirectorObjectLODConfig                               ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAILODComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UFortAthenaAILODComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(EFortAILODLevel)                           CurrentFortAILODLevel                                       ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bCouldBeVisibleToPlayers                                    ___ OFFSET(get<bool>, {0xA3, 1, 1, 1})
	CMember(AFortPawn*)                                CachedFortPawn                                              ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UFortAthenaAILODSettingsContainer*)        AILODSettingsContainer                                      ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIObjectTracker
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UFortAthenaAIObjectTracker : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TMap<UClass*, FAITrackedObjectsSet>)       TrackedObjects                                              ___ OFFSET(get<T>, {0x58, 80, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParametersProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaAIRuntimeParametersProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParametersComponent
/// Size: 0x00A0 (0x0000A0 - 0x000140)
class UFortAthenaAIRuntimeParametersComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TMap<UClass*, TScriptInterface>)           RegisteredParametersProviders                               ___ OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TMap<UClass*, UFortAthenaAIRuntimeParameters*>) ExtractedRuntimeParameters                             ___ OFFSET(get<T>, {0xF0, 80, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase
/// Size: 0x00D0 (0x000030 - 0x000100)
class UFortAthenaAIRuntimeParameters_SmartObjectBase : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bChooseClosestSmartObject                                   ___ OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(float)                                     UnreachableBanDuration                                      ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     SelectedSmartObjectExpirationDelay                          ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     GlobalSmartObjectCooldownOnFinished                         ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     GlobalSmartObjectCooldownOnInterrupted                      ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	CMember(TArray<FAIRuntimeParametersSmartObjectActivity>) SmartObjectActivities                                 ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FSmartObjectRecentlyUsed>)          SmartObjectsMostRecentlyUsed                                ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FSmartObjectBanned>)                SmartObjectsBannedList                                      ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   SelectedActivityID                                          ___ OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	SMember(FSmartObjectRequestResult)                 SelectedResult                                              ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FSmartObjectSlotEntranceHandle)            SelectedEntranceHandle                                      ___ OFFSET(get<T>, {0x98, 24, 0, 0})
	DMember(float)                                     LastSelectedSmartObjectTimestamp                            ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FSmartObjectClaimHandle)                   ClaimedHandle                                               ___ OFFSET(get<T>, {0xB8, 32, 0, 0})
	CMember(UGameplayBehaviorConfig*)                  BehaviorConfig                                              ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(UGameplayBehavior*)                        GameplayBehavior                                            ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UGameplayInteractionSmartObjectBehaviorDefinition*) GameplayInteractionBehaviorDefinition              ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(float)                                     GlobalSmartObjectLastUseTimestamp                           ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     GlobalSmartObjectCooldown                                   ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(int32_t)                                   ActivitiesIDCount                                           ___ OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISmartObjectActivity
/// Size: 0x0130 (0x000028 - 0x000158)
class UFortAthenaAISmartObjectActivity : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FScalableFloat)                            Enabled                                                     ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FFortAthenaAISmartObjectActivityCondition) SmartObjectActivityCondition                                ___ OFFSET(get<T>, {0x50, 72, 0, 0})
	SMember(FFortAthenaAISmartObjectActivityConfig)    SmartObjectActivityConfig                                   ___ OFFSET(get<T>, {0x98, 192, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponentList
/// Size: 0x0030 (0x000028 - 0x000058)
class UFortAthenaAISpawnerDataComponentList : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_AffiliationBase
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAthenaAIRuntimeParameters_AffiliationBase : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bFullTeamAwarenessPropagation                               ___ OFFSET(get<bool>, {0x34, 1, 1, 0})
	DMember(bool)                                      bAwarenessPropagationIsBasedOnAlertLevel                    ___ OFFSET(get<bool>, {0x34, 1, 1, 1})
	DMember(bool)                                      bTurnHostileOnDamageIfNeutral                               ___ OFFSET(get<bool>, {0x34, 1, 1, 2})
	DMember(float)                                     TurnHostileWhenBlockedTime                                  ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bPropagateHostilityOnDamaged                                ___ OFFSET(get<bool>, {0x3C, 1, 1, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UFortAthenaAISpawnerDataComponent_AffiliationBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FGameplayTagContainer)                     FactionTags                                                 ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FScalableFloat)                            TurnHostileOnDamageIfNeutral                                ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            TurnHostileWhenBlockedTime                                  ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            PropagateHostilityOnDamaged                                 ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	CMember(TArray<FSpawnerDataComponentAffiliationSharedBBConfiguration>) FactionSharedBBConfigurations           ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bFullTeamAwarenessPropagation                               ___ OFFSET(get<bool>, {0xD8, 1, 1, 0})
	DMember(bool)                                      bAwarenessPropagationIsBasedOnAlertLevel                    ___ OFFSET(get<bool>, {0xD8, 1, 1, 1})
	DMember(float)                                     FullTeamAwarenessMaxDistance                                ___ OFFSET(get<float>, {0xDC, 4, 0, 0})
	DMember(bool)                                      bAddGameParticipantFactionAutomatically                     ___ OFFSET(get<bool>, {0xE0, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_Analytic
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortAthenaAIRuntimeParameters_Analytic : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagContainer)                     OnDeathGameplayTags                                         ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIAnalytic
/// Size: 0x0028 (0x000050 - 0x000078)
class UFortAthenaAIRuntimeParameters_AIAnalytic : public UFortAthenaAIRuntimeParameters_Analytic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FString)                                   AnalyticUniqueID                                            ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   AIType                                                      ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(bool)                                      bShouldSendSpawnEvents                                      ___ OFFSET(get<bool>, {0x70, 1, 1, 0})
	DMember(bool)                                      bShouldRecordGrabbedPickups                                 ___ OFFSET(get<bool>, {0x70, 1, 1, 1})
	DMember(bool)                                      bShouldRecordDroppedPickups                                 ___ OFFSET(get<bool>, {0x70, 1, 1, 2})
	DMember(bool)                                      bShouldRecordDeathInstigator                                ___ OFFSET(get<bool>, {0x70, 1, 1, 3})
	DMember(bool)                                      bShouldRecordRegularDowns                                   ___ OFFSET(get<bool>, {0x70, 1, 1, 4})
	DMember(bool)                                      bShouldRecordTetheredDowns                                  ___ OFFSET(get<bool>, {0x70, 1, 1, 5})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AnalyticBase
/// Size: 0x0030 (0x000030 - 0x000060)
class UFortAthenaAISpawnerDataComponent_AnalyticBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagContainer)                     OnDeathGameplayTags                                         ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIAnalytic
/// Size: 0x0100 (0x000060 - 0x000160)
class UFortAthenaAISpawnerDataComponent_AIAnalytic : public UFortAthenaAISpawnerDataComponent_AnalyticBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FString)                                   AIType                                                      ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FScalableFloat)                            ShouldSendSpawnEvents                                       ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FScalableFloat)                            ShouldRecordGrabbedPickups                                  ___ OFFSET(get<T>, {0x98, 40, 0, 0})
	SMember(FScalableFloat)                            ShouldRecordDroppedPickups                                  ___ OFFSET(get<T>, {0xC0, 40, 0, 0})
	SMember(FScalableFloat)                            ShouldRecordDeathInstigator                                 ___ OFFSET(get<T>, {0xE8, 40, 0, 0})
	SMember(FScalableFloat)                            ShouldRecordRegularDowns                                    ___ OFFSET(get<T>, {0x110, 40, 0, 0})
	SMember(FScalableFloat)                            ShouldRecordTetheredDowns                                   ___ OFFSET(get<T>, {0x138, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_Marker
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortAthenaAIRuntimeParameters_Marker : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bSupportsMarkerWithFaction                                  ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(float)                                     MarkerPropagationMaxDistanceSQ                              ___ OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIBotDisguise
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UFortAthenaAIRuntimeParameters_AIBotDisguise : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bShouldApplyDisguise                                        ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bRevealDisguiseOnDamage                                     ___ OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bRevealOnDamageExcludeAIPawnDamage                          ___ OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bRevealDisguiseOnPlayerProximity                            ___ OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(float)                                     RevealPlayerProximityDistanceSqr                            ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     RevealPlayerProximityMinDuration                            ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     RevealPlayerProximityMaxDuration                            ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(UFortBotNameSettings*)                     NameSettingsAfterReveal                                     ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FGameplayTagContainer)                     DisguisedFactionsBeforeReveal                               ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DisguisedFactionsAfterReveal                                ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TArray<UClass*>)                           DisguiseGameplayEffectBeforeReveal                          ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<UClass*>)                           DisguiseGameplayEffectAfterReveal                           ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FItemAndCount>)                     DisguiseInventory                                           ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       DisguiseLootInfo                                            ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(UClass*)                                   DisguiseConversationComponentOverride                       ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_Collection
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortAthenaAIRuntimeParameters_Collection : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bForceAddToCollectionOnDamage                               ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation
/// Size: 0x0208 (0x0000E8 - 0x0002F0)
class UFortAthenaAISpawnerDataComponent_AIBotAffiliation : public UFortAthenaAISpawnerDataComponent_AffiliationBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	DMember(bool)                                      bForceAddToCollectionOnDamage                               ___ OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bOverrideIsAnAthenaGameParticipant                          ___ OFFSET(get<bool>, {0xE9, 1, 1, 0})
	DMember(bool)                                      bIsAnAthenaGameParticipant                                  ___ OFFSET(get<bool>, {0xE9, 1, 1, 1})
	SMember(FScalableFloat)                            SupportsMarkerWithFaction                                   ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            MarkerPropagationMaxDistance                                ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            DisguiseProbability                                         ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            RevealDisguiseOnDamage                                      ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            RevealOnDamageExcludeAIPawnDamage                           ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            RevealDisguiseOnPlayerProximity                             ___ OFFSET(get<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            RevealPlayerProximityDistance                               ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            RevealPlayerProximityMinDuration                            ___ OFFSET(get<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            RevealPlayerProximityMaxDuration                            ___ OFFSET(get<T>, {0x230, 40, 0, 0})
	CMember(UFortBotNameSettings*)                     NameSettingsAfterReveal                                     ___ OFFSET(get<T>, {0x258, 8, 0, 0})
	SMember(FGameplayTagContainer)                     DisguisedFactionsBeforeReveal                               ___ OFFSET(get<T>, {0x260, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DisguisedFactionsAfterReveal                                ___ OFFSET(get<T>, {0x280, 32, 0, 0})
	CMember(TArray<UClass*>)                           DisguiseGameplayEffectBeforeReveal                          ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<UClass*>)                           DisguiseGameplayEffectAfterReveal                           ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<FItemAndCount>)                     DisguiseInventory                                           ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       DisguiseLootInfo                                            ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(UClass*)                                   DisguiseConversationComponent                               ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(int32_t)                                   OverrideTeamIndex                                           ___ OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAnalytic
/// Size: 0x0038 (0x000060 - 0x000098)
class UFortAthenaAISpawnerDataComponent_AIBotAnalytic : public UFortAthenaAISpawnerDataComponent_AnalyticBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      bUseDescriptorTagSuffix                                     ___ OFFSET(get<bool>, {0x60, 1, 1, 0})
	SMember(FString)                                   BotIDSuffix                                                 ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FScalableFloat>)                    IdleDetectionBucketsCutoffs                                 ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FScalableFloat>)                    DamageDistanceBuckets                                       ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortAthenaAIRuntimeParameters_BehaviorTreeControl : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(uint32_t)                                  BehaviorTreeControls                                        ___ OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_ReviveBehavior
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAthenaAIRuntimeParameters_ReviveBehavior : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bAllowReviveSquadmates                                      ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bAllowReviveSameFactionNPCs                                 ___ OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(bool)                                      bAllowReviveConverter                                       ___ OFFSET(get<bool>, {0x30, 1, 1, 2})
	DMember(bool)                                      bAllowReviveConverterSquadmates                             ___ OFFSET(get<bool>, {0x30, 1, 1, 3})
	DMember(bool)                                      bUseReviveToken                                             ___ OFFSET(get<bool>, {0x30, 1, 1, 4})
	DMember(float)                                     MaxDistanceToRevive                                         ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaxDistanceToReviveHumanPlayer                              ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_DBNOBehavior
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAthenaAIRuntimeParameters_DBNOBehavior : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bDieWhenAllAlliesAreDBNO                                    ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(float)                                     AliveAlliesMaxRangeSqr                                      ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat         ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_NPCBehavior
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortAthenaAIRuntimeParameters_NPCBehavior : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bSupportsHolsteredWeapon                                    ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_Behavior
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortAthenaAIRuntimeParameters_Behavior : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bSurfaceTypeCheckEnabled                                    ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior
/// Size: 0x0240 (0x000038 - 0x000278)
class UFortAthenaAISpawnerDataComponent_AIBotBehavior : public UFortAthenaAISpawnerDataComponent_Behavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	DMember(uint32_t)                                  BehaviorTreeControls                                        ___ OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bCanUseFallbackPatrolAround                                 ___ OFFSET(get<bool>, {0x3C, 1, 1, 0})
	DMember(bool)                                      bAllowReviveSquadmates                                      ___ OFFSET(get<bool>, {0x3C, 1, 1, 1})
	DMember(bool)                                      bAllowReviveSameFactionNPCs                                 ___ OFFSET(get<bool>, {0x3C, 1, 1, 2})
	SMember(FScalableFloat)                            AllowReviveConverter                                        ___ OFFSET(get<T>, {0x40, 40, 0, 0})
	SMember(FScalableFloat)                            AllowReviveConverterSquadmates                              ___ OFFSET(get<T>, {0x68, 40, 0, 0})
	DMember(bool)                                      bUseReviveToken                                             ___ OFFSET(get<bool>, {0x90, 1, 1, 0})
	SMember(FScalableFloat)                            MaxDistanceToRevive                                         ___ OFFSET(get<T>, {0x98, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceToReviveHumanPlayer                              ___ OFFSET(get<T>, {0xC0, 40, 0, 0})
	SMember(FScalableFloat)                            DieWhenAllAlliesAreDBNO                                     ___ OFFSET(get<T>, {0xE8, 40, 0, 0})
	SMember(FScalableFloat)                            AliveAlliesMaxRange                                         ___ OFFSET(get<T>, {0x110, 40, 0, 0})
	SMember(FScalableFloat)                            SecondsBeforeAutomaticReviveFromDBNOWhenOutOfCombat         ___ OFFSET(get<T>, {0x138, 40, 0, 0})
	SMember(FScalableFloat)                            SupportsHolsteredWeapon                                     ___ OFFSET(get<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            SurfaceTypeCheckEnabled                                     ___ OFFSET(get<T>, {0x188, 40, 0, 0})
	SMember(FScalableFloat)                            bShouldResetAggressivePlayStyleOnUnaware                    ___ OFFSET(get<T>, {0x1B0, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToKeepTrackOfDamagingActorsForAggressivePlayStyle       ___ OFFSET(get<T>, {0x1D8, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToIgnoreDamagingActorsWhenBeingControlled               ___ OFFSET(get<T>, {0x200, 40, 0, 0})
	SMember(FScalableFloat)                            PauseBehaviorOnSpawnDuration                                ___ OFFSET(get<T>, {0x228, 40, 0, 0})
	SMember(FScalableFloat)                            bShouldBeInvulnerableDuringPause                            ___ OFFSET(get<T>, {0x250, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotChanceEncounter
/// Size: 0x0030 (0x000030 - 0x000060)
class UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter : public UFortAthenaAISpawnerDataComponent_ChanceEncounterBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FScalableFloat)                            PassiveHealerEnable                                         ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	CMember(UClass*)                                   PassiveHealerComponentClass                                 ___ OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIBotLoopSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortAthenaAIRuntimeParameters_AIBotLoopSettings : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bSpawnOutsideTheLoop                                        ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bRespawnOustideTheLoop                                      ___ OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(bool)                                      bRemoveInvulnerabilityOutsideSafeZone                       ___ OFFSET(get<bool>, {0x30, 1, 1, 2})
	DMember(bool)                                      bDisableSpecialActorComponentUntilRespawn                   ___ OFFSET(get<bool>, {0x30, 1, 1, 3})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_Conversation
/// Size: 0x0030 (0x000030 - 0x000060)
class UFortAthenaAIRuntimeParameters_Conversation : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bEnterBTTaskConversationIfPlayerAround                      ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bCanConverseWhenConverted                                   ___ OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(float)                                     EnterBTTaskConversationIfPlayerAroundDistSqr                ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     WaitTimeWhileNotInConversationState                         ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     SecondsToDenyActorToWaitForConversation                     ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(TArray<UAthenaDanceItemDefinition*>)       GreetingEmotes                                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(float)                                     GreetingEmoteMaxDuration                                    ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(UFortTandemCharacterData*)                 CharacterData                                               ___ OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConversation
/// Size: 0x0210 (0x000030 - 0x000240)
class UFortAthenaAISpawnerDataComponent_AIBotConversation : public UFortAthenaAISpawnerDataComponent_ConversationBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(UClass*)                                   ConversationComponentClass                                  ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FGameplayTag)                              ConversationEntryTag                                        ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FGameplayTag)                              InteractorParticipantTag                                    ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	SMember(FGameplayTag)                              SelfParticipantTag                                          ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	SMember(FScalableFloat)                            EnterBTTaskConversationIfPlayerAround                       ___ OFFSET(get<T>, {0x48, 40, 0, 0})
	SMember(FScalableFloat)                            EnterBTTaskConversationIfPlayerAroundDist                   ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FScalableFloat)                            WaitTimeWhileNotInConversationState                         ___ OFFSET(get<T>, {0x98, 40, 0, 0})
	SMember(FScalableFloat)                            SecondsToDenyActorToWaitForConversation                     ___ OFFSET(get<T>, {0xC0, 40, 0, 0})
	CMember(TArray<UAthenaDanceItemDefinition*>)       GreetingEmotes                                              ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FScalableFloat)                            GreetingEmoteMaxDuration                                    ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	CMember(UFortTandemCharacterData*)                 CharacterData                                               ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FName)                                     ConversationInteractionCollisionProfile                     ___ OFFSET(get<T>, {0x128, 4, 0, 0})
	SMember(FVector)                                   ConversationInteractionBoxExtent                            ___ OFFSET(get<T>, {0x130, 24, 0, 0})
	SMember(FVector)                                   ConversationInteractionBoxOffset                            ___ OFFSET(get<T>, {0x148, 24, 0, 0})
	SMember(FScalableFloat)                            SpawnOutOfTheLoop                                           ___ OFFSET(get<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            RespawnOutsideTheLoop                                       ___ OFFSET(get<T>, {0x188, 40, 0, 0})
	SMember(FScalableFloat)                            RemoveInvulnerabilityOutsideSafeZone                        ___ OFFSET(get<T>, {0x1B0, 40, 0, 0})
	CMember(UClass*)                                   NPCLoopStateComponentClass                                  ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FScalableFloat)                            UseSpecialActorComponent                                    ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	CMember(UClass*)                                   SpecialActorComponentClass                                  ___ OFFSET(get<T>, {0x208, 8, 0, 0})
	SMember(FScalableFloat)                            BlockSpecialActorUntilOutsideTheLoop                        ___ OFFSET(get<T>, {0x210, 40, 0, 0})
	DMember(bool)                                      bCanConverseWhenConverted                                   ___ OFFSET(get<bool>, {0x238, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_CosmeticBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase : public UFortAthenaAISpawnerDataComponent_CosmeticBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<UAthenaCosmeticItemDefinition*>)    CosmeticOverrideList                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotDebug
/// Size: 0x01C0 (0x000030 - 0x0001F0)
class UFortAthenaAISpawnerDataComponent_AIBotDebug : public UFortAthenaAISpawnerDataComponent_DebugBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FDebugMinimapData)                         DebugMinimapData                                            ___ OFFSET(get<T>, {0x30, 432, 0, 0})
	CMember(TArray<FString>)                           EditorConsoleCommands                                       ___ OFFSET(get<T>, {0x1E0, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIConvert
/// Size: 0x00E0 (0x000030 - 0x000110)
class UFortAthenaAIRuntimeParameters_AIConvert : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(bool)                                      bCanBeConverted                                             ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bCanBeConvertedFromDBNO                                     ___ OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bForceKillWhenUnconverted                                   ___ OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bForceKillWhenConverterDies                                 ___ OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(bool)                                      bCopyConverterSpecificRelations                             ___ OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bRemoveFromAllFactions                                      ___ OFFSET(get<bool>, {0x35, 1, 0, 0})
	DMember(bool)                                      bAddConverterFactions                                       ___ OFFSET(get<bool>, {0x36, 1, 0, 0})
	DMember(float)                                     ReleaseDistanceSq                                           ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     CheckReleaseConditionsTimeInterval                          ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     AddToFactions                                               ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FGameplayTagContainer)                     RemoveFromFactions                                          ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	DMember(char)                                      PreConversionTeamIndex                                      ___ OFFSET(get<char>, {0x80, 1, 0, 0})
	SMember(FGameplayTagContainer)                     PreConversionFactions                                       ___ OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TArray<UFortAbilitySet*>)                  AbilitySetsForConverted                                     ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FTeleportSettings)                         TeleportSettings                                            ___ OFFSET(get<T>, {0xB8, 56, 0, 0})
	DMember(bool)                                      bEnableDBNO                                                 ___ OFFSET(get<bool>, {0xF0, 1, 0, 0})
	CMember(TEnumAsByte<TInteractionType>)             DBNOInteractionType                                         ___ OFFSET(get<T>, {0xF1, 1, 0, 0})
	DMember(float)                                     DBNOInteractionDuration                                     ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	CMember(TArray<FPickupTagConvertInfo>)             PickupTagConvertInfos                                       ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FGameplayTag)                              ConvertIdentifierTag                                        ___ OFFSET(get<T>, {0x108, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIBotConvert
/// Size: 0x00A8 (0x000110 - 0x0001B8)
class UFortAthenaAIRuntimeParameters_AIBotConvert : public UFortAthenaAIRuntimeParameters_AIConvert
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	DMember(bool)                                      bShouldLeashFollowConverter                                 ___ OFFSET(get<bool>, {0x110, 1, 1, 0})
	DMember(bool)                                      bShouldScanAroundWhenWaiting                                ___ OFFSET(get<bool>, {0x110, 1, 1, 1})
	DMember(bool)                                      bFollowingBehaviorEnabled                                   ___ OFFSET(get<bool>, {0x110, 1, 1, 2})
	DMember(bool)                                      bFollowerCanUseDBNO                                         ___ OFFSET(get<bool>, {0x110, 1, 1, 3})
	DMember(bool)                                      bMimicBehaviorEnabled                                       ___ OFFSET(get<bool>, {0x110, 1, 1, 4})
	DMember(bool)                                      bShouldTeleportTowardsConverter                             ___ OFFSET(get<bool>, {0x110, 1, 1, 5})
	DMember(bool)                                      bCanDanceWithConverter                                      ___ OFFSET(get<bool>, {0x110, 1, 1, 6})
	DMember(bool)                                      bTargetPawnConverterDamaged                                 ___ OFFSET(get<bool>, {0x110, 1, 1, 7})
	DMember(float)                                     SkillLevelOverride                                          ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     PreConversionSkillLevel                                     ___ OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     InnerLeashRadius                                            ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     OuterLeashRadius                                            ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_Leash*)     PreConversionLeashParams                                    ___ OFFSET(get<T>, {0x128, 8, 0, 0})
	DMember(float)                                     LeashFollowActorUpdateRate                                  ___ OFFSET(get<float>, {0x130, 4, 0, 0})
	SMember(FVector)                                   LeashFollowActorLocalOffset                                 ___ OFFSET(get<T>, {0x138, 24, 0, 0})
	DMember(float)                                     FollowingBehaviorRadiusSqr                                  ___ OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     FollowingBehaviorRadius                                     ___ OFFSET(get<float>, {0x154, 4, 0, 0})
	DMember(float)                                     FollowingBehaviorUrgenceRadiusSqr                           ___ OFFSET(get<float>, {0x158, 4, 0, 0})
	DMember(float)                                     FollowingBehaviorUrgenceRadius                              ___ OFFSET(get<float>, {0x15C, 4, 0, 0})
	DMember(float)                                     FollowingBehaviorBlockedSightAngleRad                       ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     FollowingBehaviorBlockedSightExitAngleRad                   ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	DMember(float)                                     FollowingBehaviorBlockedSightExitDistMin                    ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     MimicBehaviorRadiusSqr                                      ___ OFFSET(get<float>, {0x16C, 4, 0, 0})
	DMember(float)                                     MimicBehaviorRadius                                         ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     TeleportTowardsConverterDistanceSq                          ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     TeleportTowardsConverterInCombatDistanceSq                  ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     MinDistanceFromConverterWhenTeleported                      ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     MaxDistanceFromConverterWhenTeleported                      ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	CMember(TArray<UClass*>)                           ConvertedSkillSetClasses                                    ___ OFFSET(get<T>, {0x188, 16, 0, 0})
	CMember(TArray<UClass*>)                           PreConversionSkillSetClasses                                ___ OFFSET(get<T>, {0x198, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_Leash
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UFortAthenaAIRuntimeParameters_Leash : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FVector)                                   LeashLocation                                               ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(float)                                     LeashInnerRadius                                            ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     LeashOuterRadius                                            ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     LeashTeleportRadius                                         ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bCheckForReachabilityOnRandomLocationGeneration             ___ OFFSET(get<bool>, {0x54, 1, 0, 0})
	CMember(ELeashReturnLocationMode)                  LeashReturnLocationMode                                     ___ OFFSET(get<T>, {0x55, 1, 0, 0})
	SMember(FLeashInfoOverride)                        DefaultLeashInfo                                            ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TMap<EAlertLevel, FLeashInfoOverride>)     AlertLevelLeashOverride                                     ___ OFFSET(get<T>, {0x60, 80, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_AIBotRespawn
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAthenaAIRuntimeParameters_AIBotRespawn : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bCanRespawnOnDeath                                          ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bRespawnOnDeathLocation                                     ___ OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(float)                                     RespawnTime                                                 ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(UFortAthenaAISpawnerDataComponentList*)    AISpawnerDataComponentList                                  ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase
/// Size: 0x02C0 (0x000030 - 0x0002F0)
class UFortAthenaAISpawnerDataComponent_GameplayBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	DMember(bool)                                      bOverrideGlobalSpeedMultiplier                              ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FScalableFloat)                            GlobalSpeedMultiplier                                       ___ OFFSET(get<T>, {0x38, 40, 0, 0})
	SMember(FScalableFloat)                            CanBeConverted                                              ___ OFFSET(get<T>, {0x60, 40, 0, 0})
	SMember(FScalableFloat)                            CanBeConvertedFromDBNO                                      ___ OFFSET(get<T>, {0x88, 40, 0, 0})
	SMember(FScalableFloat)                            ForceKillWhenUnconverted                                    ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            ForceKillWhenConverterDies                                  ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            CopyConverterSpecificRelations                              ___ OFFSET(get<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            RemoveFromAllFactions                                       ___ OFFSET(get<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            AddConverterFactions                                        ___ OFFSET(get<T>, {0x150, 40, 0, 0})
	SMember(FScalableFloat)                            ReleaseDistance                                             ___ OFFSET(get<T>, {0x178, 40, 0, 0})
	SMember(FScalableFloat)                            CheckReleaseConditionsTimeInterval                          ___ OFFSET(get<T>, {0x1A0, 40, 0, 0})
	SMember(FGameplayTagContainer)                     AddToFactions                                               ___ OFFSET(get<T>, {0x1C8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     RemoveFromFactions                                          ___ OFFSET(get<T>, {0x1E8, 32, 0, 0})
	SMember(FScalableFloat)                            PawnCullDistance                                            ___ OFFSET(get<T>, {0x208, 40, 0, 0})
	CMember(TArray<UFortAbilitySet*>)                  AbilitySetsForConverted                                     ___ OFFSET(get<T>, {0x230, 16, 0, 0})
	SMember(FTeleportSettings)                         TeleportSettings                                            ___ OFFSET(get<T>, {0x240, 56, 0, 0})
	DMember(bool)                                      bApplyTaggedNavFilters                                      ___ OFFSET(get<bool>, {0x278, 1, 0, 0})
	SMember(FFortAITaggedNavFilterData)                NavFilterData                                               ___ OFFSET(get<T>, {0x280, 96, 0, 0})
	DMember(bool)                                      bEnableDBNO                                                 ___ OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	CMember(TEnumAsByte<TInteractionType>)             DBNOInteractionType                                         ___ OFFSET(get<T>, {0x2E1, 1, 0, 0})
	DMember(float)                                     DBNOInteractionDuration                                     ___ OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(bool)                                      bOnlyLeaderInteraction                                      ___ OFFSET(get<bool>, {0x2E8, 1, 0, 0})
	SMember(FGameplayTag)                              ConvertIdentifierTag                                        ___ OFFSET(get<T>, {0x2EC, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay
/// Size: 0x04E8 (0x0002F0 - 0x0007D8)
class UFortAthenaAISpawnerDataComponent_AIBotGameplay : public UFortAthenaAISpawnerDataComponent_GameplayBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2008;

public:
	CMember(UFortBotNameSettings*)                     NameSettings                                                ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      bRequiresUniqueNetId                                        ___ OFFSET(get<bool>, {0x2F8, 1, 1, 0})
	SMember(FScalableFloat)                            CanRespawnOnDeath                                           ___ OFFSET(get<T>, {0x300, 40, 0, 0})
	SMember(FScalableFloat)                            RespawnOnDeathLocation                                      ___ OFFSET(get<T>, {0x328, 40, 0, 0})
	SMember(FScalableFloat)                            RespawnTime                                                 ___ OFFSET(get<T>, {0x350, 40, 0, 0})
	DMember(float)                                     PawnCullDistanceAfterPlayerAggroMode                        ___ OFFSET(get<float>, {0x378, 4, 0, 0})
	CMember(EReachLocationValidationMode)              ReachLocationValidationMode                                 ___ OFFSET(get<T>, {0x37C, 1, 0, 0})
	SMember(FVector)                                   LeashLocation                                               ___ OFFSET(get<T>, {0x380, 24, 0, 0})
	DMember(float)                                     LeashInnerRadius                                            ___ OFFSET(get<float>, {0x398, 4, 0, 0})
	DMember(float)                                     LeashOuterRadius                                            ___ OFFSET(get<float>, {0x39C, 4, 0, 0})
	SMember(FScalableFloat)                            LeashTeleportRadius                                         ___ OFFSET(get<T>, {0x3A0, 40, 0, 0})
	DMember(bool)                                      bCheckForReachabilityOnRandomLocationGeneration             ___ OFFSET(get<bool>, {0x3C8, 1, 0, 0})
	CMember(ELeashReturnLocationMode)                  LeashReturnLocationMode                                     ___ OFFSET(get<T>, {0x3C9, 1, 0, 0})
	CMember(TMap<EAlertLevel, FLeashInfoOverride>)     AlertLevelLeashOverride                                     ___ OFFSET(get<T>, {0x3D0, 80, 0, 0})
	CMember(AFortAthenaPatrolPath*)                    AssociatedPatrolPath                                        ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(bool)                                      bCanInvestigateWithMeleeWeapon                              ___ OFFSET(get<bool>, {0x428, 1, 0, 0})
	DMember(bool)                                      bApplyMutatorsHealthAndShieldModifiers                      ___ OFFSET(get<bool>, {0x429, 1, 0, 0})
	DMember(bool)                                      bSupportsTethering                                          ___ OFFSET(get<bool>, {0x42A, 1, 0, 0})
	DMember(bool)                                      bEnableRenderCustomDepth                                    ___ OFFSET(get<bool>, {0x42B, 1, 0, 0})
	DMember(bool)                                      bDisableGiveWeaponCheat                                     ___ OFFSET(get<bool>, {0x42C, 1, 0, 0})
	DMember(bool)                                      bDisableGiveMaterialsCheat                                  ___ OFFSET(get<bool>, {0x42D, 1, 0, 0})
	SMember(FScalableFloat)                            InnerLeashRadius                                            ___ OFFSET(get<T>, {0x430, 40, 0, 0})
	SMember(FScalableFloat)                            OuterLeashRadius                                            ___ OFFSET(get<T>, {0x458, 40, 0, 0})
	SMember(FScalableFloat)                            ShouldLeashFollowConverter                                  ___ OFFSET(get<T>, {0x480, 40, 0, 0})
	SMember(FScalableFloat)                            LeashFollowActorUpdateRate                                  ___ OFFSET(get<T>, {0x4A8, 40, 0, 0})
	SMember(FVector)                                   LeashFollowActorLocalOffset                                 ___ OFFSET(get<T>, {0x4D0, 24, 0, 0})
	SMember(FScalableFloat)                            SkillLevelOverride                                          ___ OFFSET(get<T>, {0x4E8, 40, 0, 0})
	SMember(FScalableFloat)                            ShouldScanAroundWhenWaiting                                 ___ OFFSET(get<T>, {0x510, 40, 0, 0})
	SMember(FScalableFloat)                            ShouldTeleportTowardsConverter                              ___ OFFSET(get<T>, {0x538, 40, 0, 0})
	SMember(FScalableFloat)                            FollowingBehaviorEnabled                                    ___ OFFSET(get<T>, {0x560, 40, 0, 0})
	SMember(FScalableFloat)                            FollowerCanUseDBNO                                          ___ OFFSET(get<T>, {0x588, 40, 0, 0})
	SMember(FScalableFloat)                            FollowingBehaviorRadius                                     ___ OFFSET(get<T>, {0x5B0, 40, 0, 0})
	SMember(FScalableFloat)                            FollowingBehaviorUrgenceRadius                              ___ OFFSET(get<T>, {0x5D8, 40, 0, 0})
	SMember(FScalableFloat)                            FollowingBehaviorBlockedSightAngle                          ___ OFFSET(get<T>, {0x600, 40, 0, 0})
	SMember(FScalableFloat)                            FollowingBehaviorBlockedSightExitAngle                      ___ OFFSET(get<T>, {0x628, 40, 0, 0})
	SMember(FScalableFloat)                            FollowingBehaviorBlockedSightExitDistMin                    ___ OFFSET(get<T>, {0x650, 40, 0, 0})
	SMember(FScalableFloat)                            MimicBehaviorEnabled                                        ___ OFFSET(get<T>, {0x678, 40, 0, 0})
	SMember(FScalableFloat)                            MimicBehaviorRadius                                         ___ OFFSET(get<T>, {0x6A0, 40, 0, 0})
	SMember(FScalableFloat)                            CanDanceWithConverter                                       ___ OFFSET(get<T>, {0x6C8, 40, 0, 0})
	SMember(FScalableFloat)                            TeleportTowardsConverterDistance                            ___ OFFSET(get<T>, {0x6F0, 40, 0, 0})
	SMember(FScalableFloat)                            TeleportTowardsConverterInCombatDistance                    ___ OFFSET(get<T>, {0x718, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceFromConverterWhenTeleported                      ___ OFFSET(get<T>, {0x740, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceFromConverterWhenTeleported                      ___ OFFSET(get<T>, {0x768, 40, 0, 0})
	CMember(TArray<UClass*>)                           ConvertedSkillSetClasses                                    ___ OFFSET(get<T>, {0x790, 16, 0, 0})
	CMember(UClass*)                                   PingCommandComponentClass                                   ___ OFFSET(get<T>, {0x7A0, 8, 0, 0})
	SMember(FScalableFloat)                            TargetPawnConverterDamaged                                  ___ OFFSET(get<T>, {0x7A8, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FInitialGameplayEffectInfo>)        InitialGameplayEffect                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UFortAbilitySet*>)                  InitialGameplayAbilitiesSet                                 ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FGameplayTagContainer)                     LooseTagsToApplyToPawn                                      ___ OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase : public UFortAthenaAISpawnerDataComponent_GameplayAbilityBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UFortAthenaAISpawnerDataComponent_InventoryBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TArray<FItemAndCount>)                     Items                                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FScalableFloat)                            ShouldDropCurrencyOnDeath                                   ___ OFFSET(get<T>, {0x40, 40, 0, 0})
	SMember(FScalableFloat)                            DefaultInventoryIgnoresRestrictions                         ___ OFFSET(get<T>, {0x68, 40, 0, 0})
	SMember(FName)                                     CurrencyPayoutRowName                                       ___ OFFSET(get<T>, {0x90, 4, 0, 0})
	SMember(FDataTableRowHandle)                       LootInfo                                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bDeathTagsCanBlockLootDrop                                  ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bUseDefenderInventoryManagement                             ___ OFFSET(get<bool>, {0xA9, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotInventory
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UFortAthenaAISpawnerDataComponent_AIBotInventory : public UFortAthenaAISpawnerDataComponent_InventoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bItemsToGiveInEditorWhenCustomizationIsEnabled              ___ OFFSET(get<bool>, {0xB0, 1, 1, 0})
	CMember(TArray<FItemAndCount>)                     EditorOnlyItems                                             ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_PerceptionBase
/// Size: 0x0060 (0x000030 - 0x000090)
class UFortAthenaAISpawnerDataComponent_PerceptionBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bOverrideVisibilityRange                                    ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FGameplayTagContainer)                     OverrideVisibilityRangeConditionTag                         ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	DMember(float)                                     SightRadius                                                 ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LoseSightRadius                                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bRestrictSightOverrideToUnaware                             ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bOverrideHearingRange                                       ___ OFFSET(get<bool>, {0x61, 1, 0, 0})
	SMember(FGameplayTagContainer)                     OverrideHearingRangeConditionTag                            ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	DMember(float)                                     HearingRadius                                               ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(bool)                                      bRestrictHearingOverrideToUnaware                           ___ OFFSET(get<bool>, {0x8C, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotPerception
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortAthenaAISpawnerDataComponent_AIBotPerception : public UFortAthenaAISpawnerDataComponent_PerceptionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_SkillsetBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset
/// Size: 0x00E8 (0x000030 - 0x000118)
class UFortAthenaAISpawnerDataComponent_AIBotSkillset : public UFortAthenaAISpawnerDataComponent_SkillsetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(UClass*)                                   AimingSkillSet                                              ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UClass*)                                   AttackingSkillSet                                           ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UClass*)                                   BuildingSkillSet                                            ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UClass*)                                   DBNOSkillSet                                                ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UClass*)                                   EmoteSkillSet                                               ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UClass*)                                   EvasiveManeuversSkillSet                                    ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UClass*)                                   HarvestSkillSet                                             ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UClass*)                                   HealingSkillSet                                             ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UClass*)                                   InventorySkillSet                                           ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UClass*)                                   LootingSkillSet                                             ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(UClass*)                                   MovementSkillSet                                            ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UClass*)                                   PerceptionSkillSet                                          ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(UClass*)                                   PlayStyleSkillSet                                           ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UClass*)                                   PropagateAwarenessSkillSet                                  ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(UClass*)                                   RangeAttackSkillSet                                         ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UClass*)                                   ReviveSkillSet                                              ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UClass*)                                   UnstuckSkillSet                                             ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UClass*)                                   VehicleSkillSet                                             ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bUseMatchMMRToOverrideSkillLevel                            ___ OFFSET(get<bool>, {0xC0, 1, 1, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               OverrideSkillLevelMMRTable                                  ___ OFFSET(get<T>, {0xC8, 32, 0, 0})
	SMember(FScalableFloat)                            Skill                                                       ___ OFFSET(get<T>, {0xE8, 40, 0, 0})
	DMember(float)                                     SkillOverride                                               ___ OFFSET(get<float>, {0x110, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_PlayerBotSkillset
/// Size: 0x0008 (0x000118 - 0x000120)
class UFortAthenaAISpawnerDataComponent_PlayerBotSkillset : public UFortAthenaAISpawnerDataComponent_AIBotSkillset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(UClass*)                                   WarmUpSkillSet                                              ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIGameplay
/// Size: 0x0050 (0x0002F0 - 0x000340)
class UFortAthenaAISpawnerDataComponent_AIGameplay : public UFortAthenaAISpawnerDataComponent_GameplayBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(float)                                     MoveSoundStimulusBroadcastInterval                          ___ OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(float)                                     MaxMoveSoundRange                                           ___ OFFSET(get<float>, {0x2F4, 4, 0, 0})
	DMember(bool)                                      bGenerateSoundInAllMovementModes                            ___ OFFSET(get<bool>, {0x2F8, 1, 1, 0})
	SMember(FScalableFloat)                            DefaultLifespanAfterDeath                                   ___ OFFSET(get<T>, {0x300, 40, 0, 0})
	CMember(EFortAthenaAISpawnerDataComponentTriBool)  IsAlwaysGameplayRelevantOverride                            ___ OFFSET(get<T>, {0x328, 1, 0, 0})
	CMember(TArray<FPickupTagConvertInfo>)             PickupTagConvertInfos                                       ___ OFFSET(get<T>, {0x330, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase : public UFortAthenaAISpawnerDataComponent_CosmeticBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization : public UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTag)                              FallbackTag                                                 ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(UFortAIPawnCustomizationDefinition*)       CustomizationDefinition                                     ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bCanUnloadCustomization                                     ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_OptimBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_OptimBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnOptim
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortAthenaAISpawnerDataComponent_AIPawnOptim : public UFortAthenaAISpawnerDataComponent_OptimBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bRegisterToAIDropper                                        ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_AssembledMesh
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortAthenaAISpawnerDataComponent_AssembledMesh : public UFortAthenaAISpawnerDataComponent_CosmeticBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UAssembledMeshSchema*>)     AssembledMeshSchema                                         ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary
/// Size: 0x00B8 (0x000040 - 0x0000F8)
class UFortAthenaAISpawnerDataComponent_CosmeticLibrary : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<TWeakObjectPtr>)                    CosmeticLibraries                                           ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FScalableFloat)                            DefaultCosmeticLibraryWeight                                ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FGameplayTag)                              PredefinedCosmeticSetTag                                    ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FScalableFloat)                            EmotesMaxCount                                              ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            bUseFixedSeed                                               ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            FixedSeed                                                   ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLoadout
/// Size: 0x0298 (0x000040 - 0x0002D8)
class UFortAthenaAISpawnerDataComponent_CosmeticLoadout : public UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FFortAthenaLoadout)                        CosmeticLoadout                                             ___ OFFSET(get<T>, {0x40, 608, 0, 0})
	CMember(TArray<FFortAthenaAIWeightedCosmeticLoadout>) WeightedLoadouts                                         ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<UCustomCharacterPart*>)             CustomCharacterParts                                        ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	DMember(bool)                                      bCanShowDefaultSkin                                         ___ OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	SMember(FGameplayTag)                              FallbackTag                                                 ___ OFFSET(get<T>, {0x2C4, 4, 0, 0})
	CMember(UClass*)                                   AnimBPOverride                                              ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(int32_t)                                   AnimBPOverridePriority                                      ___ OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_CoverBase
/// Size: 0x0028 (0x000030 - 0x000058)
class UFortAthenaAISpawnerDataComponent_CoverBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UClass*)                                   CoverPositionFilterClass                                    ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FVector)                                   CoverBoxExtent                                              ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(float)                                     CoverOffset                                                 ___ OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_GroupBase
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UFortAthenaAISpawnerDataComponent_GroupBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FScalableFloat)                            EnableGroupComponent                                        ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            CanBeGroupLeader                                            ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            EnableFormationComponent                                    ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	CMember(TArray<FVector>)                           FormationSlots                                              ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceFromSlotToSprint                                 ___ OFFSET(get<T>, {0xB8, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_Inventory
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortAthenaAIRuntimeParameters_Inventory : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bShouldDropCurrencyOnDeath                                  ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bDefaultInventoryIgnoresRestrictions                        ___ OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(bool)                                      bSkipInventoryInitialization                                ___ OFFSET(get<bool>, {0x30, 1, 1, 2})
	SMember(FName)                                     CurrencyPayoutRowName                                       ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	DMember(bool)                                      bDeathTagsCanBlockLootDrop                                  ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
	SMember(FDataTableRowHandle)                       LootInfo                                                    ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_Hearing
/// Size: 0x0030 (0x000030 - 0x000060)
class UFortAthenaAIRuntimeParameters_Hearing : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bOverrideHearingRange                                       ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FGameplayTagContainer)                     OverrideHearingRangeConditionTag                            ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	DMember(float)                                     HearingRadius                                               ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(bool)                                      bRestrictOverrideToUnaware                                  ___ OFFSET(get<bool>, {0x5C, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIRuntimeParameters_Sight
/// Size: 0x0038 (0x000030 - 0x000068)
class UFortAthenaAIRuntimeParameters_Sight : public UFortAthenaAIRuntimeParameters
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bOverrideVisibilityRange                                    ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FGameplayTagContainer)                     OverrideVisibilityRangeConditionTag                         ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	DMember(float)                                     SightRadius                                                 ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LoseSightRadius                                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bRestrictOverrideToUnaware                                  ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_PerksBase
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAthenaAISpawnerDataComponent_PerksBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FPerkAvailabilityContainer>)        PerksContainers                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_RandomInventory
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UFortAthenaAISpawnerDataComponent_RandomInventory : public UFortAthenaAISpawnerDataComponent_InventoryBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FWeightedAIInventoryLoadout>)       Loadouts                                                    ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_ScriptBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_ScriptBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_SmartObjectBase
/// Size: 0x0120 (0x000030 - 0x000150)
class UFortAthenaAISpawnerDataComponent_SmartObjectBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FScalableFloat)                            Enabled                                                     ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            ChooseClosestSmartObject                                    ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            UnreachableBanDuration                                      ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            SelectedSmartObjectExpirationDelay                          ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            GlobalSmartObjectCooldownOnFinished                         ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            GlobalSmartObjectCooldownOnInterrupted                      ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	CMember(TArray<UClass*>)                           SmartObjectActivitiesCombined                               ___ OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<UClass*>)                           SmartObjectActivitiesToAdd                                  ___ OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TArray<UClass*>)                           SmartObjectActivitiesToRemove                               ___ OFFSET(get<T>, {0x140, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortAthenaAISpawnerDataComponent_SpawnParamsBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParams
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortAthenaAISpawnerDataComponent_SpawnParams : public UFortAthenaAISpawnerDataComponent_SpawnParamsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UClass*)                                   PawnClass                                                   ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UClass*)                                   AIControllerClass                                           ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PawnStatHandle                                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<UClass*>)                           SpawnerDataSpawnedAsChildren                                ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bSpawnInAir                                                 ___ OFFSET(get<bool>, {0x60, 1, 1, 0})
	DMember(bool)                                      bSetSkyDivingFromBus                                        ___ OFFSET(get<bool>, {0x60, 1, 1, 1})
	DMember(float)                                     InAirSpawnTraceStartHeight                                  ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     InAirSpawnTraceEndHeight                                    ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     InAirSpawnTraceSphereRadius                                 ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     SpawnTracePadding                                           ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bCheckForOverlaps                                           ___ OFFSET(get<bool>, {0x74, 1, 1, 0})
	DMember(bool)                                      bAddPOILocationTagsOnSpawn                                  ___ OFFSET(get<bool>, {0x74, 1, 1, 1})
	DMember(bool)                                      bSetPlayerPawnAttributesWithThisStatHandle                  ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_TokenBase
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UFortAthenaAISpawnerDataComponent_TokenBase : public UFortAthenaAISpawnerDataComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FScalableFloat)                            EnableTokenProviderComponent                                ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            TokenMaxCount                                               ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FScalableFloat)                            EnableTokenConsumerComponent                                ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            TokenHoldMinDuration                                        ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            TokenHoldMaxDuration                                        ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_Vehicle
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortAthenaAISpawnerDataComponent_Vehicle : public UFortAthenaAISpawnerDataComponent_VehicleBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UClass*)                                   VehicleToSpawnAndEnter                                      ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bSetInfiniteFuel                                            ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
	CMember(TArray<UClass*>)                           VehicleSkillSets                                            ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAISpawnerDataComponent_Voice
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortAthenaAISpawnerDataComponent_Voice : public UFortAthenaAISpawnerDataComponent_VoiceBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UClass*)                                   VoiceComponentClass                                         ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UFortTaggedSoundBank*)                     SoundBank                                                   ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UFortTaggedSoundBank*)                     MaleSoundBankOverride                                       ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UFortTaggedSoundBank*)                     FemaleSoundBankOverride                                     ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaBeaconComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UFortAthenaBeaconComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(int32_t)                                   MaxAttractedBots                                            ___ OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(float)                                     AttractionRadius                                            ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	CMember(TArray<AActor*>)                           RegisteredActors                                            ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConsumeEvent                                              ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(bool)                                      bIsConsumed                                                 ___ OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaBTTask_DynamicBlueprint
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_DynamicBlueprint : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     DynamicBlueprintStatusKeyName                               ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     DynamicBlueprintActorKeyName                                ___ OFFSET(get<T>, {0x74, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaLeashComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UFortAthenaLeashComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FScalableFloat)                            LeashRadius                                                 ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FVector)                                   LeashCenter                                                 ___ OFFSET(get<T>, {0xC8, 24, 0, 0})
	DMember(float)                                     LeashRadiusSqr                                              ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaLocalGameplayBehavior
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AFortAthenaLocalGameplayBehavior : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	DMember(bool)                                      bNeedToAwakeDuringExecution                                 ___ OFFSET(get<bool>, {0x290, 1, 0, 0})
	CMember(UFortAthenaBTTask_DynamicBlueprint*)       CachedTask                                                  ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaNavArea_ShallowWater
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortAthenaNavArea_ShallowWater : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortAthenaNavArea_Water
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortAthenaNavArea_Water : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAI.FortAthenaNpcGalileoComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UFortAthenaNpcGalileoComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(AFortAthenaAIBotController*)               CachedBotController                                         ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(AFortPawn*)                                PossessedPawn                                               ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TArray<FVector>)                           PatrolPath                                                  ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<AFortAthenaAIBotController*>)       CommunicationGroup                                          ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrollingStart                                           ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrollingStop                                            ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaNpcPatrollingComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UFortAthenaNpcPatrollingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(AAIController*)                            CachedAIController                                          ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartPatrollingEvent                                      ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStopPatrollingEvent                                       ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(AFortAthenaPatrolPath*)                    PatrolPath                                                  ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/FortniteAI.PatrolPathRenderingComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class UPatrolPathRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/FortniteAI.PatrolPointRenderingComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class UPatrolPointRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/FortniteAI.FortAthenaPatrolPoint
/// Size: 0x0008 (0x000290 - 0x000298)
class AFortAthenaPatrolPoint : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(AFortAthenaLocalGameplayBehavior*)         LocalGameplayBehavior                                       ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaTrackableAIObjectInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortAthenaTrackableAIObjectInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAI.AthenaAIPerceptionStimuliSourceComponent
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UAthenaAIPerceptionStimuliSourceComponent : public UAIPerceptionStimuliSourceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bIsConsideredAsThreateningObjectForBots                     ___ OFFSET(get<bool>, {0xB8, 1, 0, 0})
};

/// Class /Script/FortniteAI.AthenaPhysicsAIPerceptionStimuliSourceComponent
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UAthenaPhysicsAIPerceptionStimuliSourceComponent : public UAthenaAIPerceptionStimuliSourceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/FortniteAI.AthenaTrapAIPerceptionStimuliSourceComponent
/// Size: 0x0058 (0x0000B8 - 0x000110)
class UAthenaTrapAIPerceptionStimuliSourceComponent : public UAIPerceptionStimuliSourceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TMap<AActor*, FTrapDetectionState>)        TrapDiscoverabilityMap                                      ___ OFFSET(get<T>, {0xB8, 80, 0, 0})
	DMember(bool)                                      bEnablePerceptionSystemOnTrap                               ___ OFFSET(get<bool>, {0x108, 1, 1, 0})
};

/// Class /Script/FortniteAI.FortCollisionResponseSwapperComponent
/// Size: 0x0080 (0x0000A0 - 0x000120)
class UFortCollisionResponseSwapperComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(UPrimitiveComponent*)                      CollisionPrimitiveComponent                                 ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      OverlapPrimitiveComponent                                   ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TArray<AFortPawn*>)                        PawnsListenedTo                                             ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FScalableFloat)                            VisibilityModifiedTime                                      ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	CMember(TEnumAsByte<ECollisionResponse>)           NewCollisionResponse                                        ___ OFFSET(get<T>, {0x118, 1, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIPerk_Ambush
/// Size: 0x0000 (0x000168 - 0x000168)
class UFortAthenaAIPerk_Ambush : public UFortAIPerkBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
};

/// Class /Script/FortniteAI.FortAthenaAIPerk_Bunker
/// Size: 0x0168 (0x000168 - 0x0002D0)
class UFortAthenaAIPerk_Bunker : public UFortAIPerkBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FScalableFloat)                            OddsToBeUsedAgainstUnknownThreat                            ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            OddsToUseRoofBuilding                                       ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            OddsToBuildForwardRamp                                      ___ OFFSET(get<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            InitialBuildDelay                                           ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            SamePieceBuildDelay                                         ___ OFFSET(get<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            SamePieceBuildDelayRandomDeviation                          ___ OFFSET(get<T>, {0x230, 40, 0, 0})
	SMember(FScalableFloat)                            DifferentPieceBuildDelay                                    ___ OFFSET(get<T>, {0x258, 40, 0, 0})
	SMember(FScalableFloat)                            DifferentPieceBuildDelayRandomDeviation                     ___ OFFSET(get<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            OddsToSelectRandomMaterial                                  ___ OFFSET(get<T>, {0x2A8, 40, 0, 0})
};

/// Class /Script/FortniteAI.FortAthenaAIPerk_EvasiveManeuvers
/// Size: 0x02F0 (0x000168 - 0x000458)
class UFortAthenaAIPerk_EvasiveManeuvers : public UFortAIPerkBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FEvasiveManeuverSkillSettings)             EvasiveManeuverSkillSettings                                ___ OFFSET(get<T>, {0x168, 600, 0, 0})
	SMember(FScalableFloat)                            DistanceMin                                                 ___ OFFSET(get<T>, {0x3C0, 40, 0, 0})
	SMember(FScalableFloat)                            DistanceMax                                                 ___ OFFSET(get<T>, {0x3E8, 40, 0, 0})
	SMember(FGameplayTagQuery)                         WeaponTagQuery                                              ___ OFFSET(get<T>, {0x410, 72, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIBotDebugMiniMapIndicator
/// Size: 0x0130 (0x000140 - 0x000270)
class UAthenaAIBotDebugMiniMapIndicator : public UFortMiniMapIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(TArray<FBotDebugInfo>)                     BotDebugInfoList                                            ___ OFFSET(get<T>, {0x140, 16, 0, 0})
	SMember(FSlateBrush)                               DebugMinimapIconBrush                                       ___ OFFSET(get<T>, {0x150, 192, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIBotPOIDebugMiniMapIndicator
/// Size: 0x0048 (0x000140 - 0x000188)
class UAthenaAIBotPOIDebugMiniMapIndicator : public UFortMiniMapIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(TArray<FBotPOIDebugInfo>)                  BotPOIDebugInfoList                                         ___ OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(TArray<FBotPOIExcludedZonesDebugInfo>)     BotPOIExcludedZonesDebugInfoList                            ___ OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(TArray<FVector>)                           ClusteredLootLocationsDebug                                 ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	CMember(TArray<FString>)                           ClusteredLootNamesDebug                                     ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(int32_t)                                   ClusteredLootDrawDebugLevel                                 ___ OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	DMember(int32_t)                                   DynamicPOIDrawDebugLevel                                    ___ OFFSET(get<int32_t>, {0x184, 4, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIPopulationTracker
/// Size: 0x0138 (0x000038 - 0x000170)
class UAthenaAIPopulationTracker : public UAISubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FMulticastInlineDelegate)                  OnAIPawnDied                                                ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAIPawnDestroyed                                           ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAIPawnSpawned                                             ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<AController*>)                      AIList                                                      ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(AFortGameModeAthena*)                      CachedGameMode                                              ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIService
/// Size: 0x0050 (0x000028 - 0x000078)
class UAthenaAIService : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(AFortGameModeAthena*)                      CachedGameMode                                              ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(AFortGameStateAthena*)                     CachedGameState                                             ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UAthenaAIServiceManager*)                  AIServiceManager                                            ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIServiceCover
/// Size: 0x0050 (0x000078 - 0x0000C8)
class UAthenaAIServiceCover : public UAthenaAIService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(UClass*)                                   CoverPositionFilterClass                                    ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIServicePlayerBots
/// Size: 0x1218 (0x000078 - 0x001290)
class UAthenaAIServicePlayerBots : public UAthenaAIService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4752;

public:
	CMember(UFortAthenaAISpawnerDataComponentList*)    DefaultAISpawnerDataComponentList                           ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UFortAthenaAISpawnerDataComponent_SpawnParamsBase*) DefaultAISpawnComponent                            ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TArray<FFortServerBotInfo>)                DeadBots                                                    ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FFortServerBotInfo>)                PlayerBotsRestartLeft                                       ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FVector)                                   ZiplineOctreeCenter                                         ___ OFFSET(get<T>, {0xB0, 24, 0, 0})
	SMember(FScalableFloat)                            ZiplineOctreeRadius                                         ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            UseZiplines                                                 ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FDebugMinimapData)                         DebugMinimapData                                            ___ OFFSET(get<T>, {0x250, 432, 0, 0})
	SMember(FName)                                     MarkPlayerBotsAggressiveStencilName                         ___ OFFSET(get<T>, {0x400, 4, 0, 0})
	SMember(FName)                                     MarkPlayerBotsDefensiveStencilName                          ___ OFFSET(get<T>, {0x404, 4, 0, 0})
	DMember(bool)                                      bBotHostileToHumanPlayersOnly                               ___ OFFSET(get<bool>, {0x408, 1, 0, 0})
	SMember(FScalableFloat)                            UseAllBattleBusPOIsSquadRatio                               ___ OFFSET(get<T>, {0x410, 40, 0, 0})
	CMember(UCurveFloat*)                              TagQueryWeightChance                                        ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(TWeakObjectPtr<UEnvQuery*>)                FindLocationsAroundPOIQuery                                 ___ OFFSET(get<T>, {0x440, 32, 0, 0})
	CMember(TArray<FBattleBusPOI>)                     BattleBusTagQueryPOIList                                    ___ OFFSET(get<T>, {0x460, 16, 0, 0})
	CMember(TArray<FBattleBusPOI>)                     SecondaryBattleBusTagQueryPOIList                           ___ OFFSET(get<T>, {0x470, 16, 0, 0})
	CMember(TArray<FNavigationPOI>)                    OnGroundTagQueryPOIList                                     ___ OFFSET(get<T>, {0x488, 16, 0, 0})
	SMember(FConstructionBuildingInfo)                 ConstructionBuildingInfo                                    ___ OFFSET(get<T>, {0x498, 144, 0, 0})
	SMember(FScalableFloat)                            UseCustomSupportedItemList                                  ___ OFFSET(get<T>, {0x528, 40, 0, 0})
	CMember(UDataTable*)                               BotItemDataTable                                            ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	SMember(FName)                                     AugmentsRegistryName                                        ___ OFFSET(get<T>, {0x558, 4, 0, 0})
	CMember(UDataRegistry*)                            ItemBehaviorsRegistry                                       ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(TArray<UBehaviorTree*>)                    InjectionSupportingBehaviors                                ___ OFFSET(get<T>, {0x568, 16, 0, 0})
	SMember(FScalableFloat)                            UseRegionalNameList                                         ___ OFFSET(get<T>, {0x578, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAnonymousBotCount                                        ___ OFFSET(get<T>, {0x5A0, 40, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaAIBotNameDataAsset*>) BotNameDataAsset                                       ___ OFFSET(get<T>, {0x5C8, 32, 0, 0})
	SMember(FScalableFloat)                            CosmeticVariationCount                                      ___ OFFSET(get<T>, {0x5E8, 40, 0, 0})
	SMember(FScalableFloat)                            ThankBusDriverProbability                                   ___ OFFSET(get<T>, {0x610, 40, 0, 0})
	SMember(FScalableFloat)                            ThankBusDriverMinTime                                       ___ OFFSET(get<T>, {0x638, 40, 0, 0})
	SMember(FScalableFloat)                            ThankBusDriverMaxTime                                       ___ OFFSET(get<T>, {0x660, 40, 0, 0})
	SMember(FScalableFloat)                            TriggerEndGameBehaviorMinTime                               ___ OFFSET(get<T>, {0x688, 40, 0, 0})
	SMember(FScalableFloat)                            TriggerEndGameBehaviorMaxTime                               ___ OFFSET(get<T>, {0x6B0, 40, 0, 0})
	SMember(FScalableFloat)                            ShowSeasonLevelProbability                                  ___ OFFSET(get<T>, {0x6D8, 40, 0, 0})
	SMember(FScalableFloat)                            SpectateOthersOnDeath                                       ___ OFFSET(get<T>, {0x700, 40, 0, 0})
	SMember(FScalableFloat)                            MaxNumberOfBotsToSpawnAroundPlayer                          ___ OFFSET(get<T>, {0x728, 40, 0, 0})
	DMember(float)                                     MaxAroundBotDistanceToSearchPOIToLand                       ___ OFFSET(get<float>, {0x750, 4, 0, 0})
	SMember(FScalableFloat)                            BackfillEnabled                                             ___ OFFSET(get<T>, {0x758, 40, 0, 0})
	SMember(FScalableFloat)                            UsePlayerCosmeticForBackfill                                ___ OFFSET(get<T>, {0x780, 40, 0, 0})
	SMember(FScalableFloat)                            UsePlayerInventoryForBackfill                               ___ OFFSET(get<T>, {0x7A8, 40, 0, 0})
	SMember(FScalableFloat)                            OnlyUseBackfillDuringSafezones                              ___ OFFSET(get<T>, {0x7D0, 40, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   BackfillSpawnerData                                         ___ OFFSET(get<T>, {0x7F8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SupportedItemTags                                           ___ OFFSET(get<T>, {0x818, 32, 0, 0})
	CMember(TArray<FCachedPOIVolumeLocations>)         CachedValidPOIVolumeLocations                               ___ OFFSET(get<T>, {0x838, 16, 0, 0})
	CMember(TArray<ABuildingFoundation*>)              CachedBuildingFoundations                                   ___ OFFSET(get<T>, {0x848, 16, 0, 0})
	CMember(TArray<FFortBotAugmentsDataTableRow>)      CachedSupportedAugments                                     ___ OFFSET(get<T>, {0x858, 16, 0, 0})
	CMember(TScriptInterface<Class>)                   CachedAIAimingManager                                       ___ OFFSET(get<T>, {0x8C8, 16, 0, 0})
	CMember(AFortPlayerStartWarmup*)                   LastTeamPlayerStart                                         ___ OFFSET(get<T>, {0xA38, 8, 0, 0})
	CMember(TMap<int32_t, UCacheSafeZoneLocation*>)    CacheSafeZoneLocationsMap                                   ___ OFFSET(get<T>, {0xA48, 80, 0, 0})
	DMember(bool)                                      bCleanupBotsRegardlessOfRemainingSquadMembers               ___ OFFSET(get<bool>, {0xA98, 1, 0, 0})
	DMember(float)                                     DeadBotCleanupMinDelay                                      ___ OFFSET(get<float>, {0xA9C, 4, 0, 0})
	CMember(TSet<FString>)                             ReservedPlayerNames                                         ___ OFFSET(get<T>, {0xAA8, 80, 0, 0})
	CMember(TArray<int32_t>)                           LocationsInSafeZoneFreeIndices                              ___ OFFSET(get<T>, {0xB00, 16, 0, 0})
	CMember(AFortTeamInfoAthena*)                      CurrentFillingTeam                                          ___ OFFSET(get<T>, {0xB78, 8, 0, 0})
	SMember(FScalableFloat)                            BotsUniqueIDUseValidAccountID                               ___ OFFSET(get<T>, {0xBD8, 40, 0, 0})
	DMember(int32_t)                                   CurrentBotControllerUID                                     ___ OFFSET(get<int32_t>, {0xC00, 4, 0, 0})
	CMember(TArray<UFortAthenaBeaconComponent*>)       BeaconList                                                  ___ OFFSET(get<T>, {0xC08, 16, 0, 0})
	DMember(bool)                                      bWaitForNavmeshToBeLoaded                                   ___ OFFSET(get<bool>, {0xC18, 1, 1, 6})
	DMember(bool)                                      bDoSpawnBotFlow                                             ___ OFFSET(get<bool>, {0xC18, 1, 1, 7})
	DMember(bool)                                      bDoMapSampling                                              ___ OFFSET(get<bool>, {0xC19, 1, 1, 0})
	CMember(EAthenaGamePhase)                          GamePhaseToStartSpawning                                    ___ OFFSET(get<T>, {0xC1A, 1, 0, 0})
	CMember(UClass*)                                   DefaultBotAISpawnerData                                     ___ OFFSET(get<T>, {0xC20, 8, 0, 0})
	CMember(TWeakObjectPtr<UEnvQuery*>)                EQSMapSampling                                              ___ OFFSET(get<T>, {0xC38, 32, 0, 0})
	SMember(FScalableFloat)                            CanReviveDownedSquad                                        ___ OFFSET(get<T>, {0xC88, 40, 0, 0})
	CMember(UAthenaAIPopulationTracker*)               CachedAIPopulationTracker                                   ___ OFFSET(get<T>, {0xCB0, 8, 0, 0})
	CMember(TArray<FFortServerBotInfo>)                PlayerBots                                                  ___ OFFSET(get<T>, {0xCB8, 16, 0, 0})
	CMember(TArray<FFortServerBotInfo>)                NonAthenaParticipantBots                                    ___ OFFSET(get<T>, {0xCC8, 16, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               MMRSpawnTable                                               ___ OFFSET(get<T>, {0xD60, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    MMRSpawnTableOverrides                                      ___ OFFSET(get<T>, {0xD80, 16, 0, 0})
	SMember(FMMRSpawningPlayerBotsRuntimeInfo)         CachedMMRSpawningInfo                                       ___ OFFSET(get<T>, {0xD90, 56, 0, 0})
	SMember(FScalableFloat)                            OverridePOISpreadingSquadCount                              ___ OFFSET(get<T>, {0xDE8, 40, 0, 0})
	SMember(FScalableFloat)                            OnlyPickPOIsInSafeZone                                      ___ OFFSET(get<T>, {0xE78, 40, 0, 0})
	SMember(FVector)                                   KillVolumeOverlapCheckHalfExtent                            ___ OFFSET(get<T>, {0xEA0, 24, 0, 0})
	SMember(FScalableFloat)                            DynamicBotPOIEnabled                                        ___ OFFSET(get<T>, {0xEB8, 40, 0, 0})
	CMember(TWeakObjectPtr<UEnvQuery*>)                BotPOIEQS                                                   ___ OFFSET(get<T>, {0xEE0, 32, 0, 0})
	SMember(FScalableFloat)                            BotPOIMinimumWeightForSquadMembers                          ___ OFFSET(get<T>, {0xF00, 40, 0, 0})
	SMember(FScalableFloat)                            BotPOINextPOIDurationSecondByWeight                         ___ OFFSET(get<T>, {0xF28, 40, 0, 0})
	SMember(FScalableFloat)                            BotPOINextPOIMinDuration                                    ___ OFFSET(get<T>, {0xF50, 40, 0, 0})
	SMember(FScalableFloat)                            BotPOINextPOIMaxDuration                                    ___ OFFSET(get<T>, {0xF78, 40, 0, 0})
	CMember(UDataRegistry*)                            BotPOIExcludedZonesDataRegistry                             ___ OFFSET(get<T>, {0xFA0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     DynamicPOIPointProviderTags                                 ___ OFFSET(get<T>, {0xFA8, 32, 0, 0})
	SMember(FScalableFloat)                            JumpOffBusWithDynamicPOIEnabled                             ___ OFFSET(get<T>, {0xFC8, 40, 0, 0})
	SMember(FScalableFloat)                            BotPOIJumpMainPOICountMax                                   ___ OFFSET(get<T>, {0xFF0, 40, 0, 0})
	SMember(FScalableFloat)                            BotPOISquadJumpOnMainPOICountMax                            ___ OFFSET(get<T>, {0x1018, 40, 0, 0})
	SMember(FScalableFloat)                            DenyJumpBusBotPOIByProximityEnabled                         ___ OFFSET(get<T>, {0x1040, 40, 0, 0})
	SMember(FScalableFloat)                            DenyJumpBusBotPOIDistance                                   ___ OFFSET(get<T>, {0x1068, 40, 0, 0})
	SMember(FScalableFloat)                            NavigationWithDynamicPOIEnabled                             ___ OFFSET(get<T>, {0x1090, 40, 0, 0})
	SMember(FScalableFloat)                            FailToReachBotPOICountMax                                   ___ OFFSET(get<T>, {0x10B8, 40, 0, 0})
	SMember(FScalableFloat)                            BotPOIScoringWeightFactor                                   ___ OFFSET(get<T>, {0x10E0, 40, 0, 0})
	SMember(FScalableFloat)                            BotPOIScoringDistanceFactor                                 ___ OFFSET(get<T>, {0x1108, 40, 0, 0})
	SMember(FScalableFloat)                            BotPOIScoringOccupancyFactor                                ___ OFFSET(get<T>, {0x1130, 40, 0, 0})
	SMember(FScalableFloat)                            BotPOIScoringVisitedFactor                                  ___ OFFSET(get<T>, {0x1158, 40, 0, 0})
	SMember(FScalableFloat)                            ChanceToUseNextSafeZone                                     ___ OFFSET(get<T>, {0x1180, 40, 0, 0})
	DMember(int32_t)                                   BotPOIIdCount                                               ___ OFFSET(get<int32_t>, {0x11A8, 4, 0, 0})
	DMember(int32_t)                                   BotPOISquadJumpedOnMainPOICount                             ___ OFFSET(get<int32_t>, {0x11AC, 4, 0, 0})
	CMember(TArray<int32_t>)                           StartupPOIPendingEQSRequestIDList                           ___ OFFSET(get<T>, {0x11B0, 16, 0, 0})
	CMember(TArray<FBotPOI>)                           BotPOIList                                                  ___ OFFSET(get<T>, {0x11C0, 16, 0, 0})
	CMember(TArray<FBotPOI>)                           CachedMainJumpBotPOIList                                    ___ OFFSET(get<T>, {0x11D0, 16, 0, 0})
	CMember(TArray<FBotPOI>)                           CachedSecondaryJumpBotPOIList                               ___ OFFSET(get<T>, {0x11E0, 16, 0, 0})
	CMember(TArray<FBotPOIExcludedZone>)               CachedBotPOIExcludedZonesList                               ___ OFFSET(get<T>, {0x11F0, 16, 0, 0})
	DMember(bool)                                      bIsBotPOIJumpListSplit                                      ___ OFFSET(get<bool>, {0x1200, 1, 0, 0})
	DMember(bool)                                      bIsExcludedZoneGenerated                                    ___ OFFSET(get<bool>, {0x1201, 1, 0, 0})
	CMember(AFortAIBotPOIDebugActor*)                  BotPOIDebugDebugActor                                       ___ OFFSET(get<T>, {0x1208, 8, 0, 0})
	DMember(bool)                                      bCheatBotPOIDebugMiniMapEnabled                             ___ OFFSET(get<bool>, {0x1210, 1, 0, 0})
	CMember(AFortAIBotDebugActor*)                     BotDebugDebugActor                                          ___ OFFSET(get<T>, {0x1218, 8, 0, 0})
	DMember(bool)                                      bCheatBotDebugMiniMapEnabled                                ___ OFFSET(get<bool>, {0x1220, 1, 0, 0})
	CMember(UFortGameStateComponent_BattleRoyaleGamePhaseLogic*) CachedGamePhaseLogic                              ___ OFFSET(get<T>, {0x1228, 8, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIServiceCreativePlayerBots
/// Size: 0x0080 (0x001290 - 0x001310)
class UAthenaAIServiceCreativePlayerBots : public UAthenaAIServicePlayerBots
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4880;

public:
	SMember(FMulticastInlineDelegate)                  OnMinigameBotsReady                                         ___ OFFSET(get<T>, {0x1288, 16, 0, 0})
	CMember(TWeakObjectPtr<AFortMinigame*>)            CachedMinigame                                              ___ OFFSET(get<T>, {0x1298, 8, 0, 0})
	CMember(TMap<AActor*, APlayerController*>)         HiringHistory                                               ___ OFFSET(get<T>, {0x12A8, 80, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIServiceGroup
/// Size: 0x0018 (0x000078 - 0x000090)
class UAthenaAIServiceGroup : public UAthenaAIService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(int32_t)                                   GroupIndexCount                                             ___ OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	CMember(TArray<FAthenaAIServiceGroupInfo>)         GroupList                                                   ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIServiceLoot
/// Size: 0x0558 (0x000078 - 0x0005D0)
class UAthenaAIServiceLoot : public UAthenaAIService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	SMember(FVector)                                   LootOctreeCenter                                            ___ OFFSET(get<T>, {0x78, 24, 0, 0})
	SMember(FScalableFloat)                            LootOctreeRadius                                            ___ OFFSET(get<T>, {0x90, 40, 0, 0})
	SMember(FScalableFloat)                            SupplyDropStatusUpdateRate                                  ___ OFFSET(get<T>, {0xB8, 40, 0, 0})
	SMember(FScalableFloat)                            RemoveInvalidChestFromOctreeProbability                     ___ OFFSET(get<T>, {0xE0, 40, 0, 0})
	SMember(FScalableFloat)                            MovingLootTrackingEnabled                                   ___ OFFSET(get<T>, {0x108, 40, 0, 0})
	SMember(FScalableFloat)                            MovingLootUpdateRate                                        ___ OFFSET(get<T>, {0x130, 40, 0, 0})
	SMember(FScalableFloat)                            MovingLootOctreeUpdateDistanceThreshold                     ___ OFFSET(get<T>, {0x158, 40, 0, 0})
	CMember(TArray<UClass*>)                           HarvestableActorClassList                                   ___ OFFSET(get<T>, {0x180, 16, 0, 0})
	SMember(FScalableFloat)                            LootClusteringEnabled                                       ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            LootClusteringNeighborDistanceMax                           ___ OFFSET(get<T>, {0x1B8, 40, 0, 0})
	SMember(FScalableFloat)                            LootClusteringNeighborhoodCountMin                          ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	CMember(UDataRegistry*)                            LootClusteringItemWeightDataRegistry                        ___ OFFSET(get<T>, {0x208, 8, 0, 0})
	SMember(FScalableFloat)                            LootClusteringDefaultWeight                                 ___ OFFSET(get<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            LootClusteringExpandByBoxX                                  ___ OFFSET(get<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            LootClusteringExpandByBoxY                                  ___ OFFSET(get<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            LootClusteringExpandByBoxZ                                  ___ OFFSET(get<T>, {0x288, 40, 0, 0})
	CMember(TMap<TWeakObjectPtr, FMovingLootInfo>)     MovingLoots                                                 ___ OFFSET(get<T>, {0x4C0, 80, 0, 0})
	CMember(TArray<FCachedSupplyDrop>)                 CachedSupplyDrops                                           ___ OFFSET(get<T>, {0x518, 16, 0, 0})
	CMember(UFortWorldItem*)                           CachedWorldItem                                             ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UDataTable*)                               BotBuildingContainerExcludeListDataTable                    ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(EAthenaGamePhaseStep)                      LootClusterCalculationGamePhase                             ___ OFFSET(get<T>, {0x538, 1, 0, 0})
	CMember(TArray<FFortBotClusterLootWeightDataTableRow>) CachedLootClusteringItemWeightTable                     ___ OFFSET(get<T>, {0x598, 16, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIServiceManager
/// Size: 0x0048 (0x000038 - 0x000080)
class UAthenaAIServiceManager : public UAISubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<UAthenaAIService*>)                 AIServices                                                  ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/FortniteAI.CacheSafeZoneLocation
/// Size: 0x0038 (0x000028 - 0x000060)
class UCacheSafeZoneLocation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/FortniteAI.AthenaAIServiceVehicle
/// Size: 0x0050 (0x000078 - 0x0000C8)
class UAthenaAIServiceVehicle : public UAthenaAIService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     TimeToRefreshTree                                           ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIServiceZoneManager
/// Size: 0x0010 (0x000078 - 0x000088)
class UAthenaAIServiceZoneManager : public UAthenaAIService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FAthenaAITrackedZone>)              TrackedZones                                                ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAISpawner
/// Size: 0x00D0 (0x000038 - 0x000108)
class UAthenaAISpawner : public UAISubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  OnPawnPreFinishSpawningEvent                                ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPawnSpawnedEvent                                          ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/FortniteAI.AthenaAIVehicleAvoidanceManager
/// Size: 0x0050 (0x000038 - 0x000088)
class UAthenaAIVehicleAvoidanceManager : public UAISubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(float)                                     TimeToRefreshTree                                           ___ OFFSET(get<float>, {0x84, 4, 0, 0})
};

/// Class /Script/FortniteAI.DespawnExpiredPawnComponent
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UDespawnExpiredPawnComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Enum /Script/FortniteAI.EAlertLevel
/// Size: 0x06
enum EAlertLevel : uint8_t
{
	EAlertLevel__Unaware0                                                            = 0,
	EAlertLevel__Suspicious1                                                         = 1,
	EAlertLevel__LostTarget2                                                         = 2,
	EAlertLevel__Threatened3                                                         = 3,
	EAlertLevel__Count4                                                              = 4,
	EAlertLevel__EAlertLevel_MAX5                                                    = 5
};

/// Enum /Script/FortniteAI.EConvertedType
/// Size: 0x05
enum EConvertedType : uint8_t
{
	EConvertedType__NPC0                                                             = 0,
	EConvertedType__Creature1                                                        = 1,
	EConvertedType__All2                                                             = 2,
	EConvertedType__Unknown3                                                         = 3,
	EConvertedType__EConvertedType_MAX4                                              = 4
};

/// Enum /Script/FortniteAI.PingCommandType
/// Size: 0x10
enum PingCommandType : uint8_t
{
	PingCommandType__GoTo0                                                           = 0,
	PingCommandType__BackToMe1                                                       = 1,
	PingCommandType__BackToDefault2                                                  = 2,
	PingCommandType__HoldPosition3                                                   = 3,
	PingCommandType__Revive4                                                         = 4,
	PingCommandType__Dismiss5                                                        = 5,
	PingCommandType__Item6                                                           = 6,
	PingCommandType__Attack7                                                         = 7,
	PingCommandType__Invalid8                                                        = 8,
	PingCommandType__MAX9                                                            = 9
};

/// Enum /Script/FortniteAI.ENavigationObstacleOverride
/// Size: 0x05
enum ENavigationObstacleOverride : uint8_t
{
	ENavigationObstacleOverride__UseMeshSettings0                                    = 0,
	ENavigationObstacleOverride__ForceEnabled1                                       = 1,
	ENavigationObstacleOverride__ForceDisabled2                                      = 2,
	ENavigationObstacleOverride__ExportAsPrimitive3                                  = 3,
	ENavigationObstacleOverride__ENavigationObstacleOverride_MAX4                    = 4
};

/// Enum /Script/FortniteAI.EUnconvertReason
/// Size: 0x10
enum EUnconvertReason : uint8_t
{
	EUnconvertReason__StealByOtherPlayer0                                            = 0,
	EUnconvertReason__ConverterDeath1                                                = 1,
	EUnconvertReason__ConvertedDeath2                                                = 2,
	EUnconvertReason__TooManyConverted3                                              = 3,
	EUnconvertReason__TooFarFromConverter4                                           = 4,
	EUnconvertReason__GameplayTagBlockConvert5                                       = 5,
	EUnconvertReason__EndPlay6                                                       = 6,
	EUnconvertReason__Dismiss7                                                       = 7,
	EUnconvertReason__Unknown8                                                       = 8,
	EUnconvertReason__EUnconvertReason_MAX9                                          = 9
};

/// Enum /Script/FortniteAI.ELootElementType
/// Size: 0x05
enum ELootElementType : uint8_t
{
	ELootElementType__Pickup0                                                        = 0,
	ELootElementType__Chest1                                                         = 1,
	ELootElementType__SupplyDrop2                                                    = 2,
	ELootElementType__Invalid3                                                       = 255,
	ELootElementType__ELootElementType_MAX4                                          = 256
};

/// Enum /Script/FortniteAI.EBotNamingMode
/// Size: 0x07
enum EBotNamingMode : uint8_t
{
	EBotNamingMode__RealName0                                                        = 0,
	EBotNamingMode__SkinName1                                                        = 1,
	EBotNamingMode__Anonymous2                                                       = 2,
	EBotNamingMode__Custom3                                                          = 3,
	EBotNamingMode__CharacterDataDisplayName4                                        = 4,
	EBotNamingMode__CustomIncremental5                                               = 5,
	EBotNamingMode__EBotNamingMode_MAX6                                              = 6
};

/// Enum /Script/FortniteAI.EFortEncounterUtilityDesire
/// Size: 0x06
enum EFortEncounterUtilityDesire : uint8_t
{
	EFortEncounterUtilityDesire__Low0                                                = 0,
	EFortEncounterUtilityDesire__Medium1                                             = 1,
	EFortEncounterUtilityDesire__High2                                               = 2,
	EFortEncounterUtilityDesire__VeryHigh3                                           = 3,
	EFortEncounterUtilityDesire__Max_None4                                           = 4,
	EFortEncounterUtilityDesire__EFortEncounterUtilityDesire_MAX5                    = 5
};

/// Enum /Script/FortniteAI.EAIHotSpotSlotFilter
/// Size: 0x04
enum EAIHotSpotSlotFilter : uint8_t
{
	EAIHotSpotSlotFilter__All0                                                       = 0,
	EAIHotSpotSlotFilter__AvailableOnly1                                             = 1,
	EAIHotSpotSlotFilter__UnavailableOnly2                                           = 2,
	EAIHotSpotSlotFilter__EAIHotSpotSlotFilter_MAX3                                  = 3
};

/// Enum /Script/FortniteAI.EAIHotSpotAssignmentFilter
/// Size: 0x04
enum EAIHotSpotAssignmentFilter : uint8_t
{
	EAIHotSpotAssignmentFilter__All0                                                 = 0,
	EAIHotSpotAssignmentFilter__WithSlots1                                           = 1,
	EAIHotSpotAssignmentFilter__WaitingList2                                         = 2,
	EAIHotSpotAssignmentFilter__EAIHotSpotAssignmentFilter_MAX3                      = 3
};

/// Enum /Script/FortniteAI.EAIHotSpotSlot
/// Size: 0x06
enum EAIHotSpotSlot : uint8_t
{
	EAIHotSpotSlot__Free0                                                            = 0,
	EAIHotSpotSlot__Claimed1                                                         = 1,
	EAIHotSpotSlot__Occupied2                                                        = 2,
	EAIHotSpotSlot__Blocked3                                                         = 3,
	EAIHotSpotSlot__Disabled4                                                        = 4,
	EAIHotSpotSlot__EAIHotSpotSlot_MAX5                                              = 5
};

/// Enum /Script/FortniteAI.EAthenaPathFollowingFocus
/// Size: 0x03
enum EAthenaPathFollowingFocus : uint8_t
{
	EAthenaPathFollowingFocus__TowardsNextPathPoint0                                 = 0,
	EAthenaPathFollowingFocus__AlignWithSmoothedVelocity1                            = 1,
	EAthenaPathFollowingFocus__EAthenaPathFollowingFocus_MAX2                        = 2
};

/// Enum /Script/FortniteAI.EAthenaAITelemetryEventType
/// Size: 0x03
enum EAthenaAITelemetryEventType : uint8_t
{
	EAthenaAITelemetryEventType__Spawn0                                              = 0,
	EAthenaAITelemetryEventType__Despawn1                                            = 1,
	EAthenaAITelemetryEventType__EAthenaAITelemetryEventType_MAX2                    = 2
};

/// Enum /Script/FortniteAI.EAICustomTargetRequestType
/// Size: 0x04
enum EAICustomTargetRequestType : uint8_t
{
	EAICustomTargetRequestType__Movement0                                            = 1,
	EAICustomTargetRequestType__MeleeAttack1                                         = 2,
	EAICustomTargetRequestType__RangedAttack2                                        = 4,
	EAICustomTargetRequestType__EAICustomTargetRequestType_MAX3                      = 5
};

/// Enum /Script/FortniteAI.EDespawnAIType
/// Size: 0x03
enum EDespawnAIType : uint8_t
{
	EDespawnAIType__Relevancy0                                                       = 0,
	EDespawnAIType__Distance1                                                        = 1,
	EDespawnAIType__EDespawnAIType_MAX2                                              = 2
};

/// Enum /Script/FortniteAI.EFortAIDirectorEventContribution
/// Size: 0x03
enum EFortAIDirectorEventContribution : uint8_t
{
	EFortAIDirectorEventContribution__Increment0                                     = 0,
	EFortAIDirectorEventContribution__Set1                                           = 1,
	EFortAIDirectorEventContribution__EFortAIDirectorEventContribution_MAX2          = 2
};

/// Enum /Script/FortniteAI.EFortAIDirectorFactorContribution
/// Size: 0x03
enum EFortAIDirectorFactorContribution : uint8_t
{
	EFortAIDirectorFactorContribution__Direct0                                       = 0,
	EFortAIDirectorFactorContribution__Inverse1                                      = 1,
	EFortAIDirectorFactorContribution__EFortAIDirectorFactorContribution_MAX2        = 2
};

/// Enum /Script/FortniteAI.EFortEncounterPacingState
/// Size: 0x06
enum EFortEncounterPacingState : uint8_t
{
	EFortEncounterPacingState__Ramp0                                                 = 0,
	EFortEncounterPacingState__Peak1                                                 = 1,
	EFortEncounterPacingState__Fade2                                                 = 2,
	EFortEncounterPacingState__Rest3                                                 = 3,
	EFortEncounterPacingState__Max_None4                                             = 4,
	EFortEncounterPacingState__EFortEncounterPacingState_MAX5                        = 5
};

/// Enum /Script/FortniteAI.EFortEncounterState
/// Size: 0x08
enum EFortEncounterState : uint8_t
{
	EFortEncounterState__Uninitialized0                                              = 0,
	EFortEncounterState__InitializingProperties1                                     = 1,
	EFortEncounterState__InitializingRiftManager2                                    = 2,
	EFortEncounterState__AwaitingActivation3                                         = 3,
	EFortEncounterState__Active4                                                     = 4,
	EFortEncounterState__ReplacingRifts5                                             = 5,
	EFortEncounterState__Max_None6                                                   = 6,
	EFortEncounterState__EFortEncounterState_MAX7                                    = 7
};

/// Enum /Script/FortniteAI.EFortAIWaveProgressSection
/// Size: 0x04
enum EFortAIWaveProgressSection : uint8_t
{
	EFortAIWaveProgressSection__SectionOne0                                          = 0,
	EFortAIWaveProgressSection__SectionTwo1                                          = 1,
	EFortAIWaveProgressSection__Max_None2                                            = 2,
	EFortAIWaveProgressSection__EFortAIWaveProgressSection_MAX3                      = 3
};

/// Enum /Script/FortniteAI.EFortEncounterSequenceResult
/// Size: 0x04
enum EFortEncounterSequenceResult : uint8_t
{
	EFortEncounterSequenceResult__Success0                                           = 0,
	EFortEncounterSequenceResult__FailedEncounterInProgress1                         = 1,
	EFortEncounterSequenceResult__Failed2                                            = 2,
	EFortEncounterSequenceResult__EFortEncounterSequenceResult_MAX3                  = 3
};

/// Enum /Script/FortniteAI.EAssignmentCreationResult
/// Size: 0x04
enum EAssignmentCreationResult : uint8_t
{
	EAssignmentCreationResult__AssignmentNotFoundOrCreated0                          = 0,
	EAssignmentCreationResult__AssignmentCreated1                                    = 1,
	EAssignmentCreationResult__AssignmentFound2                                      = 2,
	EAssignmentCreationResult__EAssignmentCreationResult_MAX3                        = 3
};

/// Enum /Script/FortniteAI.ECorePerceptionTypes
/// Size: 0x07
enum ECorePerceptionTypes : uint8_t
{
	ECorePerceptionTypes__Sight0                                                     = 0,
	ECorePerceptionTypes__Hearing1                                                   = 1,
	ECorePerceptionTypes__Damage2                                                    = 2,
	ECorePerceptionTypes__Touch3                                                     = 3,
	ECorePerceptionTypes__Team4                                                      = 4,
	ECorePerceptionTypes__Prediction5                                                = 5,
	ECorePerceptionTypes__MAX6                                                       = 6
};

/// Enum /Script/FortniteAI.EFortAILODLevel
/// Size: 0x10
enum EFortAILODLevel : uint8_t
{
	EFortAILODLevel__Invalid0                                                        = 0,
	EFortAILODLevel__MIN1                                                            = 0,
	EFortAILODLevel__Dormant2                                                        = 1,
	EFortAILODLevel__BelowLower3                                                     = 2,
	EFortAILODLevel__Lower4                                                          = 3,
	EFortAILODLevel__AboveLower5                                                     = 4,
	EFortAILODLevel__BelowNormal6                                                    = 5,
	EFortAILODLevel__Normal7                                                         = 6,
	EFortAILODLevel__AboveNormal8                                                    = 7,
	EFortAILODLevel__MAX9                                                            = 8
};

/// Enum /Script/FortniteAI.EAssignmentType
/// Size: 0x06
enum EAssignmentType : uint8_t
{
	EAssignmentType__Invalid0                                                        = 0,
	EAssignmentType__Encounter1                                                      = 1,
	EAssignmentType__World2                                                          = 2,
	EAssignmentType__Enemy3                                                          = 3,
	EAssignmentType__NumAssignmentTypes4                                             = 4,
	EAssignmentType__EAssignmentType_MAX5                                            = 5
};

/// Enum /Script/FortniteAI.EBuildingWallArea
/// Size: 0x04
enum EBuildingWallArea : uint8_t
{
	EBuildingWallArea__Regular0                                                      = 0,
	EBuildingWallArea__Flat1                                                         = 1,
	EBuildingWallArea__Special2                                                      = 2,
	EBuildingWallArea__EBuildingWallArea_MAX3                                        = 3
};

/// Enum /Script/FortniteAI.EBuildingStairsRailing
/// Size: 0x04
enum EBuildingStairsRailing : uint8_t
{
	EBuildingStairsRailing__None0                                                    = 0,
	EBuildingStairsRailing__Partial1                                                 = 1,
	EBuildingStairsRailing__Full2                                                    = 2,
	EBuildingStairsRailing__EBuildingStairsRailing_MAX3                              = 3
};

/// Enum /Script/FortniteAI.EBuildingFloorRailing
/// Size: 0x03
enum EBuildingFloorRailing : uint8_t
{
	EBuildingFloorRailing__None0                                                     = 0,
	EBuildingFloorRailing__Balcony1                                                  = 1,
	EBuildingFloorRailing__EBuildingFloorRailing_MAX2                                = 2
};

/// Enum /Script/FortniteAI.EFortHotSpotSlot
/// Size: 0x05
enum EFortHotSpotSlot : uint8_t
{
	EFortHotSpotSlot__Melee0                                                         = 0,
	EFortHotSpotSlot__MeleeHuge1                                                     = 1,
	EFortHotSpotSlot__Ranged2                                                        = 2,
	EFortHotSpotSlot__None3                                                          = 3,
	EFortHotSpotSlot__EFortHotSpotSlot_MAX4                                          = 4
};

/// Enum /Script/FortniteAI.EFortHotSpotDirection
/// Size: 0x08
enum EFortHotSpotDirection : uint8_t
{
	EFortHotSpotDirection__PositiveX0                                                = 0,
	EFortHotSpotDirection__NegativeX1                                                = 1,
	EFortHotSpotDirection__PositiveY2                                                = 2,
	EFortHotSpotDirection__NegativeY3                                                = 3,
	EFortHotSpotDirection__PositiveZ4                                                = 4,
	EFortHotSpotDirection__NegativeZ5                                                = 5,
	EFortHotSpotDirection__Any6                                                      = 6,
	EFortHotSpotDirection__EFortHotSpotDirection_MAX7                                = 7
};

/// Enum /Script/FortniteAI.EFortHotSpotPreview
/// Size: 0x04
enum EFortHotSpotPreview : uint8_t
{
	EFortHotSpotPreview__None0                                                       = 0,
	EFortHotSpotPreview__Smashing1                                                   = 1,
	EFortHotSpotPreview__Shooting2                                                   = 2,
	EFortHotSpotPreview__EFortHotSpotPreview_MAX3                                    = 3
};

/// Enum /Script/FortniteAI.EHotspotTypeConfigMode
/// Size: 0x04
enum EHotspotTypeConfigMode : uint8_t
{
	EHotspotTypeConfigMode__AlwaysAdd0                                               = 0,
	EHotspotTypeConfigMode__WhenNotDefined1                                          = 1,
	EHotspotTypeConfigMode__WhenNotValid2                                            = 2,
	EHotspotTypeConfigMode__EHotspotTypeConfigMode_MAX3                              = 3
};

/// Enum /Script/FortniteAI.EFortPartialPathUsage
/// Size: 0x04
enum EFortPartialPathUsage : uint8_t
{
	EFortPartialPathUsage__Always0                                                   = 0,
	EFortPartialPathUsage__OnlyGoalsOnDestructible1                                  = 1,
	EFortPartialPathUsage__Never2                                                    = 2,
	EFortPartialPathUsage__EFortPartialPathUsage_MAX3                                = 3
};

/// Enum /Script/FortniteAI.ETargetDistanceComparisonType
/// Size: 0x04
enum ETargetDistanceComparisonType : uint8_t
{
	ETargetDistanceComparisonType__TwoDimensions0                                    = 0,
	ETargetDistanceComparisonType__ThreeDimensions1                                  = 1,
	ETargetDistanceComparisonType__CollisionHalfHeightMultiplier2                    = 2,
	ETargetDistanceComparisonType__ETargetDistanceComparisonType_MAX3                = 3
};

/// Enum /Script/FortniteAI.EAIScalableFloatScalingType
/// Size: 0x03
enum EAIScalableFloatScalingType : uint8_t
{
	EAIScalableFloatScalingType__Disabled0                                           = 0,
	EAIScalableFloatScalingType__ReceivedDamageByTarget1                             = 1,
	EAIScalableFloatScalingType__EAIScalableFloatScalingType_MAX2                    = 2
};

/// Enum /Script/FortniteAI.ETeleportReason
/// Size: 0x06
enum ETeleportReason : uint8_t
{
	ETeleportReason__AgentNotOnNavmesh0                                              = 0,
	ETeleportReason__AgentDestinationNotOnNavMesh1                                   = 1,
	ETeleportReason__AgentStuckInRepetitivePartialPaths2                             = 2,
	ETeleportReason__AgentBlocked3                                                   = 3,
	ETeleportReason__Unknown4                                                        = 4,
	ETeleportReason__ETeleportReason_MAX5                                            = 5
};

/// Enum /Script/FortniteAI.EObstacleType
/// Size: 0x06
enum EObstacleType : uint8_t
{
	EObstacleType__IncomingSmashable0                                                = 0,
	EObstacleType__BlockingSmashable1                                                = 1,
	EObstacleType__BlockingDetectedTrap2                                             = 2,
	EObstacleType__Unknown3                                                          = 3,
	EObstacleType__Count4                                                            = 3,
	EObstacleType__EObstacleType_MAX5                                                = 4
};

/// Enum /Script/FortniteAI.EHarvestResult
/// Size: 0x05
enum EHarvestResult : uint8_t
{
	EHarvestResult__None0                                                            = 0,
	EHarvestResult__InProgress1                                                      = 1,
	EHarvestResult__Success2                                                         = 2,
	EHarvestResult__Fail3                                                            = 3,
	EHarvestResult__EHarvestResult_MAX4                                              = 4
};

/// Enum /Script/FortniteAI.EReachLocationValidationMode
/// Size: 0x05
enum EReachLocationValidationMode : uint8_t
{
	EReachLocationValidationMode__None0                                              = 0,
	EReachLocationValidationMode__Storm1                                             = 1,
	EReachLocationValidationMode__Leash2                                             = 2,
	EReachLocationValidationMode__SoftLeash3                                         = 3,
	EReachLocationValidationMode__EReachLocationValidationMode_MAX4                  = 4
};

/// Enum /Script/FortniteAI.EBlackboardUpdateType
/// Size: 0x04
enum EBlackboardUpdateType : uint8_t
{
	EBlackboardUpdateType__NoUpdate0                                                 = 0,
	EBlackboardUpdateType__UpdateNow1                                                = 1,
	EBlackboardUpdateType__UpdateNextTick2                                           = 2,
	EBlackboardUpdateType__EBlackboardUpdateType_MAX3                                = 3
};

/// Enum /Script/FortniteAI.EBotControllerClamberStatus
/// Size: 0x05
enum EBotControllerClamberStatus : uint8_t
{
	EBotControllerClamberStatus__Invalid0                                            = 0,
	EBotControllerClamberStatus__MoveStarted1                                        = 1,
	EBotControllerClamberStatus__MoveDone2                                           = 2,
	EBotControllerClamberStatus__MoveFailed3                                         = 3,
	EBotControllerClamberStatus__EBotControllerClamberStatus_MAX4                    = 4
};

/// Enum /Script/FortniteAI.EDefensivePlayerStyleSource
/// Size: 0x03
enum EDefensivePlayerStyleSource : uint8_t
{
	EDefensivePlayerStyleSource__Unknown0                                            = 0,
	EDefensivePlayerStyleSource__Escape1                                             = 1,
	EDefensivePlayerStyleSource__MAX2                                                = 2
};

/// Enum /Script/FortniteAI.ETwoPointSolverRotationA
/// Size: 0x06
enum ETwoPointSolverRotationA : uint8_t
{
	ETwoPointSolverRotationA__PointAToQuerier0                                       = 0,
	ETwoPointSolverRotationA__QuerierToPointA1                                       = 1,
	ETwoPointSolverRotationA__PointAToQuerierWithRandomOffset2                       = 2,
	ETwoPointSolverRotationA__QuerierToPointAWithRandomOffset3                       = 3,
	ETwoPointSolverRotationA__Custom4                                                = 4,
	ETwoPointSolverRotationA__ETwoPointSolverRotationA_MAX5                          = 5
};

/// Enum /Script/FortniteAI.EFortIntensityCurveSequenceType
/// Size: 0x05
enum EFortIntensityCurveSequenceType : uint8_t
{
	EFortIntensityCurveSequenceType__Sequence0                                       = 0,
	EFortIntensityCurveSequenceType__Loop1                                           = 1,
	EFortIntensityCurveSequenceType__Random2                                         = 2,
	EFortIntensityCurveSequenceType__Max_None3                                       = 3,
	EFortIntensityCurveSequenceType__EFortIntensityCurveSequenceType_MAX4            = 4
};

/// Enum /Script/FortniteAI.EFortNavLinkPattern
/// Size: 0x05
enum EFortNavLinkPattern : uint8_t
{
	EFortNavLinkPattern__Floor0                                                      = 0,
	EFortNavLinkPattern__Stairs1                                                     = 1,
	EFortNavLinkPattern__Roof2                                                       = 2,
	EFortNavLinkPattern__Manual3                                                     = 3,
	EFortNavLinkPattern__EFortNavLinkPattern_MAX4                                    = 4
};

/// Enum /Script/FortniteAI.EFortNamedNavmesh
/// Size: 0x03
enum EFortNamedNavmesh : uint8_t
{
	EFortNamedNavmesh__Husk0                                                         = 0,
	EFortNamedNavmesh__Smasher1                                                      = 1,
	EFortNamedNavmesh__MAX2                                                          = 2
};

/// Enum /Script/FortniteAI.EPathObstacleAction
/// Size: 0x05
enum EPathObstacleAction : uint8_t
{
	EPathObstacleAction__Melee0                                                      = 0,
	EPathObstacleAction__Ignore1                                                     = 1,
	EPathObstacleAction__AbortMoveAsFailed2                                          = 2,
	EPathObstacleAction__FinishMoveAsSucceeded3                                      = 3,
	EPathObstacleAction__EPathObstacleAction_MAX4                                    = 4
};

/// Enum /Script/FortniteAI.EPathUndermineEvent
/// Size: 0x04
enum EPathUndermineEvent : uint8_t
{
	EPathUndermineEvent__Predicted0                                                  = 0,
	EPathUndermineEvent__Started1                                                    = 1,
	EPathUndermineEvent__Finished2                                                   = 2,
	EPathUndermineEvent__EPathUndermineEvent_MAX3                                    = 3
};

/// Enum /Script/FortniteAI.EWardAffectType
/// Size: 0x04
enum EWardAffectType : uint8_t
{
	EWardAffectType__AffectsBothStartAndEndPoints0                                   = 0,
	EWardAffectType__AffectsOnlyStartPoints1                                         = 1,
	EWardAffectType__AffectsOnlyEndPoints2                                           = 2,
	EWardAffectType__EWardAffectType_MAX3                                            = 3
};

/// Enum /Script/FortniteAI.ETagGoalScoringCategory
/// Size: 0x04
enum ETagGoalScoringCategory : uint8_t
{
	ETagGoalScoringCategory__Ignore0                                                 = 0,
	ETagGoalScoringCategory__HighInterest1                                           = 1,
	ETagGoalScoringCategory__NumCategories2                                          = 2,
	ETagGoalScoringCategory__ETagGoalScoringCategory_MAX3                            = 3
};

/// Enum /Script/FortniteAI.EBoundingBoxSlotDirectionCalculation
/// Size: 0x05
enum EBoundingBoxSlotDirectionCalculation : uint8_t
{
	EBoundingBoxSlotDirectionCalculation__Auto0                                      = 0,
	EBoundingBoxSlotDirectionCalculation__FaceWall1                                  = 1,
	EBoundingBoxSlotDirectionCalculation__FaceAwayFromWall2                          = 2,
	EBoundingBoxSlotDirectionCalculation__FaceCenter3                                = 3,
	EBoundingBoxSlotDirectionCalculation__EBoundingBoxSlotDirectionCalculation_MAX4  = 4
};

/// Enum /Script/FortniteAI.EFortAreaFlag
/// Size: 0x06
enum EFortAreaFlag : uint8_t
{
	EFortAreaFlag__Default0                                                          = 0,
	EFortAreaFlag__Obstacle1                                                         = 1,
	EFortAreaFlag__Smashable2                                                        = 2,
	EFortAreaFlag__Unwalkable3                                                       = 3,
	EFortAreaFlag__Interactable4                                                     = 4,
	EFortAreaFlag__EFortAreaFlag_MAX5                                                = 5
};

/// Enum /Script/FortniteAI.EInBoundsState
/// Size: 0x04
enum EInBoundsState : uint8_t
{
	EInBoundsState__NoBounds0                                                        = 0,
	EInBoundsState__NotInBounds1                                                     = 1,
	EInBoundsState__InBounds2                                                        = 2,
	EInBoundsState__EInBoundsState_MAX3                                              = 3
};

/// Enum /Script/FortniteAI.ENavPathRendererStatus
/// Size: 0x05
enum ENavPathRendererStatus : uint8_t
{
	ENavPathRendererStatus__INVALID0                                                 = 0,
	ENavPathRendererStatus__CALCULATING1                                             = 1,
	ENavPathRendererStatus__SUCCESS2                                                 = 2,
	ENavPathRendererStatus__FAILED3                                                  = 3,
	ENavPathRendererStatus__ENavPathRendererStatus_MAX4                              = 4
};

/// Enum /Script/FortniteAI.EFortThreatDeactivationType
/// Size: 0x03
enum EFortThreatDeactivationType : uint8_t
{
	EFortThreatDeactivationType__Off0                                                = 0,
	EFortThreatDeactivationType__Dormant1                                            = 1,
	EFortThreatDeactivationType__EFortThreatDeactivationType_MAX2                    = 2
};

/// Enum /Script/FortniteAI.EFortCreativePatrolPathGroup
/// Size: 0x102
enum EFortCreativePatrolPathGroup : uint8_t
{
	EFortCreativePatrolPathGroup__Group_None0                                        = 0,
	EFortCreativePatrolPathGroup__Group1                                             = 1,
	EFortCreativePatrolPathGroup__Group2                                             = 2,
	EFortCreativePatrolPathGroup__Group3                                             = 3,
	EFortCreativePatrolPathGroup__Group4                                             = 4,
	EFortCreativePatrolPathGroup__Group5                                             = 5,
	EFortCreativePatrolPathGroup__Group6                                             = 6,
	EFortCreativePatrolPathGroup__Group7                                             = 7,
	EFortCreativePatrolPathGroup__Group8                                             = 8,
	EFortCreativePatrolPathGroup__Group9                                             = 9,
	EFortCreativePatrolPathGroup__Group10                                            = 10,
	EFortCreativePatrolPathGroup__Group11                                            = 11,
	EFortCreativePatrolPathGroup__Group12                                            = 12,
	EFortCreativePatrolPathGroup__Group13                                            = 13,
	EFortCreativePatrolPathGroup__Group14                                            = 14,
	EFortCreativePatrolPathGroup__Group15                                            = 15,
	EFortCreativePatrolPathGroup__Group16                                            = 16,
	EFortCreativePatrolPathGroup__Group17                                            = 17,
	EFortCreativePatrolPathGroup__Group18                                            = 18,
	EFortCreativePatrolPathGroup__Group19                                            = 19,
	EFortCreativePatrolPathGroup__Group20                                            = 20,
	EFortCreativePatrolPathGroup__Group21                                            = 21,
	EFortCreativePatrolPathGroup__Group22                                            = 22,
	EFortCreativePatrolPathGroup__Group23                                            = 23,
	EFortCreativePatrolPathGroup__Group24                                            = 24,
	EFortCreativePatrolPathGroup__Group25                                            = 25,
	EFortCreativePatrolPathGroup__Group26                                            = 26,
	EFortCreativePatrolPathGroup__Group27                                            = 27,
	EFortCreativePatrolPathGroup__Group28                                            = 28,
	EFortCreativePatrolPathGroup__Group29                                            = 29,
	EFortCreativePatrolPathGroup__Group30                                            = 30,
	EFortCreativePatrolPathGroup__Group31                                            = 31,
	EFortCreativePatrolPathGroup__Group32                                            = 32,
	EFortCreativePatrolPathGroup__Group33                                            = 33,
	EFortCreativePatrolPathGroup__Group34                                            = 34,
	EFortCreativePatrolPathGroup__Group35                                            = 35,
	EFortCreativePatrolPathGroup__Group36                                            = 36,
	EFortCreativePatrolPathGroup__Group37                                            = 37,
	EFortCreativePatrolPathGroup__Group38                                            = 38,
	EFortCreativePatrolPathGroup__Group39                                            = 39,
	EFortCreativePatrolPathGroup__Group40                                            = 40,
	EFortCreativePatrolPathGroup__Group41                                            = 41,
	EFortCreativePatrolPathGroup__Group42                                            = 42,
	EFortCreativePatrolPathGroup__Group43                                            = 43,
	EFortCreativePatrolPathGroup__Group44                                            = 44,
	EFortCreativePatrolPathGroup__Group45                                            = 45,
	EFortCreativePatrolPathGroup__Group46                                            = 46,
	EFortCreativePatrolPathGroup__Group47                                            = 47,
	EFortCreativePatrolPathGroup__Group48                                            = 48,
	EFortCreativePatrolPathGroup__Group49                                            = 49,
	EFortCreativePatrolPathGroup__Group50                                            = 50,
	EFortCreativePatrolPathGroup__Group51                                            = 51,
	EFortCreativePatrolPathGroup__Group52                                            = 52,
	EFortCreativePatrolPathGroup__Group53                                            = 53,
	EFortCreativePatrolPathGroup__Group54                                            = 54,
	EFortCreativePatrolPathGroup__Group55                                            = 55,
	EFortCreativePatrolPathGroup__Group56                                            = 56,
	EFortCreativePatrolPathGroup__Group57                                            = 57,
	EFortCreativePatrolPathGroup__Group58                                            = 58,
	EFortCreativePatrolPathGroup__Group59                                            = 59,
	EFortCreativePatrolPathGroup__Group60                                            = 60,
	EFortCreativePatrolPathGroup__Group61                                            = 61,
	EFortCreativePatrolPathGroup__Group62                                            = 62,
	EFortCreativePatrolPathGroup__Group63                                            = 63,
	EFortCreativePatrolPathGroup__Group64                                            = 64,
	EFortCreativePatrolPathGroup__Group65                                            = 65,
	EFortCreativePatrolPathGroup__Group66                                            = 66,
	EFortCreativePatrolPathGroup__Group67                                            = 67,
	EFortCreativePatrolPathGroup__Group68                                            = 68,
	EFortCreativePatrolPathGroup__Group69                                            = 69,
	EFortCreativePatrolPathGroup__Group70                                            = 70,
	EFortCreativePatrolPathGroup__Group71                                            = 71,
	EFortCreativePatrolPathGroup__Group72                                            = 72,
	EFortCreativePatrolPathGroup__Group73                                            = 73,
	EFortCreativePatrolPathGroup__Group74                                            = 74,
	EFortCreativePatrolPathGroup__Group75                                            = 75,
	EFortCreativePatrolPathGroup__Group76                                            = 76,
	EFortCreativePatrolPathGroup__Group77                                            = 77,
	EFortCreativePatrolPathGroup__Group78                                            = 78,
	EFortCreativePatrolPathGroup__Group79                                            = 79,
	EFortCreativePatrolPathGroup__Group80                                            = 80,
	EFortCreativePatrolPathGroup__Group81                                            = 81,
	EFortCreativePatrolPathGroup__Group82                                            = 82,
	EFortCreativePatrolPathGroup__Group83                                            = 83,
	EFortCreativePatrolPathGroup__Group84                                            = 84,
	EFortCreativePatrolPathGroup__Group85                                            = 85,
	EFortCreativePatrolPathGroup__Group86                                            = 86,
	EFortCreativePatrolPathGroup__Group87                                            = 87,
	EFortCreativePatrolPathGroup__Group88                                            = 88,
	EFortCreativePatrolPathGroup__Group89                                            = 89,
	EFortCreativePatrolPathGroup__Group90                                            = 90,
	EFortCreativePatrolPathGroup__Group91                                            = 91,
	EFortCreativePatrolPathGroup__Group92                                            = 92,
	EFortCreativePatrolPathGroup__Group93                                            = 93,
	EFortCreativePatrolPathGroup__Group94                                            = 94,
	EFortCreativePatrolPathGroup__Group95                                            = 95,
	EFortCreativePatrolPathGroup__Group96                                            = 96,
	EFortCreativePatrolPathGroup__Group97                                            = 97,
	EFortCreativePatrolPathGroup__Group98                                            = 98,
	EFortCreativePatrolPathGroup__Group99                                            = 99,
	EFortCreativePatrolPathGroup__Group100                                           = 100,
	EFortCreativePatrolPathGroup__Group_MAX101                                       = 101
};

/// Enum /Script/FortniteAI.EAIBotBuildingTemplate
/// Size: 0x06
enum EAIBotBuildingTemplate : uint8_t
{
	EAIBotBuildingTemplate__SingleWall0                                              = 0,
	EAIBotBuildingTemplate__SingleRamp1                                              = 1,
	EAIBotBuildingTemplate__SingleRoof2                                              = 2,
	EAIBotBuildingTemplate__SingleBrace3                                             = 3,
	EAIBotBuildingTemplate__SingleWallWindow4                                        = 4,
	EAIBotBuildingTemplate__MAX5                                                     = 5
};

/// Enum /Script/FortniteAI.BotDataOverrideCosmeticMode
/// Size: 0x03
enum BotDataOverrideCosmeticMode : uint8_t
{
	BotDataOverrideCosmeticMode__SpecificLoadout0                                    = 0,
	BotDataOverrideCosmeticMode__CosmeticLibrary1                                    = 1,
	BotDataOverrideCosmeticMode__BotDataOverrideCosmeticMode_MAX2                    = 2
};

/// Enum /Script/FortniteAI.EAILootExcludeListReason
/// Size: 0x13
enum EAILootExcludeListReason : uint8_t
{
	EAILootExcludeListReason__Invalid0                                               = 0,
	EAILootExcludeListReason__ExecutionError1                                        = 1,
	EAILootExcludeListReason__CannotReachLootLocation2                               = 2,
	EAILootExcludeListReason__OutsideSafeZoneRadius3                                 = 3,
	EAILootExcludeListReason__NoInventorySpace4                                      = 4,
	EAILootExcludeListReason__LootStateUnavailable5                                  = 5,
	EAILootExcludeListReason__PathNotFound6                                          = 6,
	EAILootExcludeListReason__GoalOffNavmesh7                                        = 7,
	EAILootExcludeListReason__AgentBlocked8                                          = 8,
	EAILootExcludeListReason__IsolatedIsland9                                        = 9,
	EAILootExcludeListReason__UnsupportedItem10                                      = 10,
	EAILootExcludeListReason__Count11                                                = 11,
	EAILootExcludeListReason__EAILootExcludeListReason_MAX12                         = 12
};

/// Enum /Script/FortniteAI.EBotMovementState
/// Size: 0x13
enum EBotMovementState : uint8_t
{
	EBotMovementState__None0                                                         = 0,
	EBotMovementState__InProgress1                                                   = 1,
	EBotMovementState__Failed_NoPathFound2                                           = 2,
	EBotMovementState__Failed_Aborted3                                               = 3,
	EBotMovementState__Failed_AgentOffNavmesh4                                       = 4,
	EBotMovementState__Failed_GoalOffNavmesh5                                        = 5,
	EBotMovementState__Failed_Blocked6                                               = 6,
	EBotMovementState__Failed_OffPath7                                               = 7,
	EBotMovementState__Failed_Falling8                                               = 8,
	EBotMovementState__Success9                                                      = 9,
	EBotMovementState__Success_Partial10                                             = 10,
	EBotMovementState__Success_AlreadyAtGoal11                                       = 11,
	EBotMovementState__EBotMovementState_MAX12                                       = 12
};

/// Enum /Script/FortniteAI.EBotUnstuckSteeringReason
/// Size: 0x04
enum EBotUnstuckSteeringReason : uint8_t
{
	EBotUnstuckSteeringReason__Unknown0                                              = 0,
	EBotUnstuckSteeringReason__OffNavMesh1                                           = 1,
	EBotUnstuckSteeringReason__IsolatedIsland2                                       = 2,
	EBotUnstuckSteeringReason__EBotUnstuckSteeringReason_MAX3                        = 3
};

/// Enum /Script/FortniteAI.EExecutionStatus
/// Size: 0x06
enum EExecutionStatus : uint8_t
{
	EExecutionStatus__ExecutionError0                                                = 0,
	EExecutionStatus__ExecutionDenied1                                               = 1,
	EExecutionStatus__ExecutionSuccess2                                              = 2,
	EExecutionStatus__ExecutionPending3                                              = 3,
	EExecutionStatus__ExecutionAllowed4                                              = 4,
	EExecutionStatus__EExecutionStatus_MAX5                                          = 5
};

/// Enum /Script/FortniteAI.EFortAthenaAIObjectTrackerQueryOrder
/// Size: 0x03
enum EFortAthenaAIObjectTrackerQueryOrder : uint8_t
{
	EFortAthenaAIObjectTrackerQueryOrder__None0                                      = 0,
	EFortAthenaAIObjectTrackerQueryOrder__Distance1                                  = 1,
	EFortAthenaAIObjectTrackerQueryOrder__EFortAthenaAIObjectTrackerQueryOrder_MAX2  = 2
};

/// Enum /Script/FortniteAI.EFortAthenaSmartObjectPriority
/// Size: 0x11
enum EFortAthenaSmartObjectPriority : uint8_t
{
	EFortAthenaSmartObjectPriority__Lowest0                                          = 0,
	EFortAthenaSmartObjectPriority__Lower1                                           = 1,
	EFortAthenaSmartObjectPriority__Low2                                             = 2,
	EFortAthenaSmartObjectPriority__BelowNormal3                                     = 3,
	EFortAthenaSmartObjectPriority__Normal4                                          = 4,
	EFortAthenaSmartObjectPriority__AboveNormal5                                     = 5,
	EFortAthenaSmartObjectPriority__High6                                            = 6,
	EFortAthenaSmartObjectPriority__Higher7                                          = 7,
	EFortAthenaSmartObjectPriority__Highest8                                         = 8,
	EFortAthenaSmartObjectPriority__MIN9                                             = 0,
	EFortAthenaSmartObjectPriority__MAX10                                            = 8
};

/// Enum /Script/FortniteAI.EFortAthenaSmartObjectUrgency
/// Size: 0x04
enum EFortAthenaSmartObjectUrgency : uint8_t
{
	EFortAthenaSmartObjectUrgency__Low0                                              = 0,
	EFortAthenaSmartObjectUrgency__Normal1                                           = 1,
	EFortAthenaSmartObjectUrgency__High2                                             = 2,
	EFortAthenaSmartObjectUrgency__EFortAthenaSmartObjectUrgency_MAX3                = 3
};

/// Enum /Script/FortniteAI.EFortAthenaAISpawnerDataComponentTriBool
/// Size: 0x04
enum EFortAthenaAISpawnerDataComponentTriBool : uint8_t
{
	EFortAthenaAISpawnerDataComponentTriBool__Yes0                                   = 0,
	EFortAthenaAISpawnerDataComponentTriBool__No1                                    = 1,
	EFortAthenaAISpawnerDataComponentTriBool__DoNotModify2                           = 2,
	EFortAthenaAISpawnerDataComponentTriBool__EFortAthenaAISpawnerDataComponentTriBool_MAX3 = 3
};

/// Enum /Script/FortniteAI.EBehaviorTreeBranches
/// Size: 0x21
enum EBehaviorTreeBranches : uint8_t
{
	EBehaviorTreeBranches__CanUseDiving0                                             = 0,
	EBehaviorTreeBranches__CanUseGliding1                                            = 1,
	EBehaviorTreeBranches__CanReactToProjectile2                                     = 2,
	EBehaviorTreeBranches__CanReactToTraps3                                          = 3,
	EBehaviorTreeBranches__CanAvoidDangerArea4                                       = 4,
	EBehaviorTreeBranches__CanBeConverted5                                           = 5,
	EBehaviorTreeBranches__CanPropagateAwareness6                                    = 6,
	EBehaviorTreeBranches__CanUseThreatenedBehaviors7                                = 7,
	EBehaviorTreeBranches__CanUseLastKnownPositionBehavior8                          = 8,
	EBehaviorTreeBranches__CanUseAlertedBehavior9                                    = 9,
	EBehaviorTreeBranches__CanUseSmartObjects10                                      = 10,
	EBehaviorTreeBranches__CanReviveDBNOTeammates11                                  = 11,
	EBehaviorTreeBranches__CanPlayEmote12                                            = 12,
	EBehaviorTreeBranches__CanConverse13                                             = 13,
	EBehaviorTreeBranches__CanPatrolOnPath14                                         = 14,
	EBehaviorTreeBranches__CanPatrolAround15                                         = 15,
	EBehaviorTreeBranches__CanTeleportWhenStuck16                                    = 16,
	EBehaviorTreeBranches__CanEmoteWhenStuck17                                       = 17,
	EBehaviorTreeBranches__CanUseZiplines18                                          = 18,
	EBehaviorTreeBranches__Count19                                                   = 19,
	EBehaviorTreeBranches__EBehaviorTreeBranches_MAX20                               = 20
};

/// Enum /Script/FortniteAI.EBehaviorTreeBranchesBitmask
/// Size: 0x21
enum EBehaviorTreeBranchesBitmask : uint8_t
{
	EBehaviorTreeBranchesBitmask__CanUseDiving0                                      = 0,
	EBehaviorTreeBranchesBitmask__CanUseGliding1                                     = 1,
	EBehaviorTreeBranchesBitmask__CanReactToProjectile2                              = 2,
	EBehaviorTreeBranchesBitmask__CanReactToTraps3                                   = 3,
	EBehaviorTreeBranchesBitmask__CanAvoidDangerArea4                                = 4,
	EBehaviorTreeBranchesBitmask__CanBeConverted5                                    = 5,
	EBehaviorTreeBranchesBitmask__CanPropagateAwareness6                             = 6,
	EBehaviorTreeBranchesBitmask__CanUseThreatenedBehaviors7                         = 7,
	EBehaviorTreeBranchesBitmask__CanUseLastKnownPositionBehavior8                   = 8,
	EBehaviorTreeBranchesBitmask__CanUseAlertedBehavior9                             = 9,
	EBehaviorTreeBranchesBitmask__CanUseSmartObjects10                               = 10,
	EBehaviorTreeBranchesBitmask__CanReviveDBNOTeammates11                           = 11,
	EBehaviorTreeBranchesBitmask__CanPlayEmote12                                     = 12,
	EBehaviorTreeBranchesBitmask__CanConverse13                                      = 13,
	EBehaviorTreeBranchesBitmask__CanPatrolOnPath14                                  = 14,
	EBehaviorTreeBranchesBitmask__CanPatrolAround15                                  = 15,
	EBehaviorTreeBranchesBitmask__CanTeleportWhenStuck16                             = 16,
	EBehaviorTreeBranchesBitmask__CanEmoteWhenStuck17                                = 17,
	EBehaviorTreeBranchesBitmask__CanUseZiplines18                                   = 18,
	EBehaviorTreeBranchesBitmask__Count19                                            = 19,
	EBehaviorTreeBranchesBitmask__EBehaviorTreeBranchesBitmask_MAX20                 = 20
};

/// Enum /Script/FortniteAI.EPatrollingMode
/// Size: 0x04
enum EPatrollingMode : uint8_t
{
	EPatrollingMode__BackAndForth0                                                   = 0,
	EPatrollingMode__Loop1                                                           = 1,
	EPatrollingMode__StopAtEnd2                                                      = 2,
	EPatrollingMode__EPatrollingMode_MAX3                                            = 3
};

/// Enum /Script/FortniteAI.EDBNOPlayStyle
/// Size: 0x06
enum EDBNOPlayStyle : uint8_t
{
	EDBNOPlayStyle__Thirsty0                                                         = 0,
	EDBNOPlayStyle__Default1                                                         = 1,
	EDBNOPlayStyle__Passive2                                                         = 2,
	EDBNOPlayStyle__ThristyButPassiveOnPlayers3                                      = 3,
	EDBNOPlayStyle__DefaultButPassiveOnPlayers4                                      = 4,
	EDBNOPlayStyle__EDBNOPlayStyle_MAX5                                              = 5
};

/// Enum /Script/FortniteAI.EStimType
/// Size: 0x10
enum EStimType : uint8_t
{
	EStimType__Seeing0                                                               = 0,
	EStimType__Seen1                                                                 = 1,
	EStimType__MightHaveSeen2                                                        = 2,
	EStimType__Hurt3                                                                 = 3,
	EStimType__Heard4                                                                = 4,
	EStimType__Obstacle5                                                             = 5,
	EStimType__Enemy6                                                                = 6,
	EStimType__Unknown7                                                              = 7,
	EStimType__Count8                                                                = 7,
	EStimType__EStimType_MAX9                                                        = 8
};

/// Enum /Script/FortniteAI.EPerceptionState
/// Size: 0x10
enum EPerceptionState : uint8_t
{
	EPerceptionState__Threat_Seeing0                                                 = 0,
	EPerceptionState__Threat_LKP1                                                    = 1,
	EPerceptionState__Threat_Alerted2                                                = 2,
	EPerceptionState__ObstacleIncoming3                                              = 3,
	EPerceptionState__ObstacleBlockedBy4                                             = 4,
	EPerceptionState__ObstacleDetectedTrap5                                          = 5,
	EPerceptionState__Unknown6                                                       = 6,
	EPerceptionState__Count7                                                         = 6,
	EPerceptionState__Threat_Count8                                                  = 3,
	EPerceptionState__EPerceptionState_MAX9                                          = 7
};

/// Enum /Script/FortniteAI.ETrackingOffsetModifierCurve
/// Size: 0x04
enum ETrackingOffsetModifierCurve : uint8_t
{
	ETrackingOffsetModifierCurve__Default0                                           = 0,
	ETrackingOffsetModifierCurve__CombatStart1                                       = 1,
	ETrackingOffsetModifierCurve__TargetLowHealth2                                   = 2,
	ETrackingOffsetModifierCurve__MAX3                                               = 3
};

/// Enum /Script/FortniteAI.EPerceptionSoundType
/// Size: 0x08
enum EPerceptionSoundType : uint8_t
{
	EPerceptionSoundType__Default0                                                   = 0,
	EPerceptionSoundType__Explosion1                                                 = 1,
	EPerceptionSoundType__ProjectileFlyBy2                                           = 2,
	EPerceptionSoundType__ProjectileImpact3                                          = 3,
	EPerceptionSoundType__WeaponFiring4                                              = 4,
	EPerceptionSoundType__Building5                                                  = 5,
	EPerceptionSoundType__MeleeImpact6                                               = 6,
	EPerceptionSoundType__MAX7                                                       = 7
};

/// Enum /Script/FortniteAI.ELookAtType
/// Size: 0x05
enum ELookAtType : uint8_t
{
	ELookAtType__ScanAround0                                                         = 0,
	ELookAtType__Investigate1                                                        = 1,
	ELookAtType__HeardSound2                                                         = 2,
	ELookAtType__Ambush3                                                             = 3,
	ELookAtType__MAX4                                                                = 4
};

/// Enum /Script/FortniteAI.ELeashReturnLocationMode
/// Size: 0x05
enum ELeashReturnLocationMode : uint8_t
{
	ELeashReturnLocationMode__Closest0                                               = 0,
	ELeashReturnLocationMode__Random1                                                = 1,
	ELeashReturnLocationMode__ReturnToCenter2                                        = 2,
	ELeashReturnLocationMode__ReturnToCenterAvoidObstacle3                           = 3,
	ELeashReturnLocationMode__ELeashReturnLocationMode_MAX4                          = 4
};

/// Enum /Script/FortniteAI.EOrientedConstructionBuildingType
/// Size: 0x16
enum EOrientedConstructionBuildingType : uint8_t
{
	EOrientedConstructionBuildingType__WallX0                                        = 0,
	EOrientedConstructionBuildingType__WallY1                                        = 1,
	EOrientedConstructionBuildingType__Floor2                                        = 2,
	EOrientedConstructionBuildingType__StairsUpX3                                    = 3,
	EOrientedConstructionBuildingType__StairsUpY4                                    = 4,
	EOrientedConstructionBuildingType__StairsDownX5                                  = 5,
	EOrientedConstructionBuildingType__StairsDownY6                                  = 6,
	EOrientedConstructionBuildingType__Roof7                                         = 7,
	EOrientedConstructionBuildingType__BraceLeftX8                                   = 8,
	EOrientedConstructionBuildingType__BraceRightX9                                  = 9,
	EOrientedConstructionBuildingType__BraceLeftY10                                  = 10,
	EOrientedConstructionBuildingType__BraceRightY11                                 = 11,
	EOrientedConstructionBuildingType__WallWindowX12                                 = 12,
	EOrientedConstructionBuildingType__WallWindowY13                                 = 13,
	EOrientedConstructionBuildingType__Count14                                       = 14,
	EOrientedConstructionBuildingType__EOrientedConstructionBuildingType_MAX15       = 15
};

/// Enum /Script/FortniteAI.EConstructionBuildingType
/// Size: 0x08
enum EConstructionBuildingType : uint8_t
{
	EConstructionBuildingType__Wall0                                                 = 0,
	EConstructionBuildingType__Floor1                                                = 1,
	EConstructionBuildingType__Stairs2                                               = 2,
	EConstructionBuildingType__Roof3                                                 = 3,
	EConstructionBuildingType__Brace4                                                = 4,
	EConstructionBuildingType__WallWindow5                                           = 5,
	EConstructionBuildingType__Count6                                                = 6,
	EConstructionBuildingType__EConstructionBuildingType_MAX7                        = 7
};

/// Enum /Script/FortniteAI.EAthenaAIServicePOIList
/// Size: 0x04
enum EAthenaAIServicePOIList : uint8_t
{
	MainBusDrop0                                                                     = 0,
	SecondaryBusDrop1                                                                = 1,
	OnGround2                                                                        = 2,
	EAthenaAIServicePOIList_MAX3                                                     = 3
};

/// Enum /Script/FortniteAI.EAthenaAITrackedZoneType
/// Size: 0x03
enum EAthenaAITrackedZoneType : uint8_t
{
	EAthenaAITrackedZoneType__Occluder0                                              = 0,
	EAthenaAITrackedZoneType__Danger1                                                = 1,
	EAthenaAITrackedZoneType__EAthenaAITrackedZoneType_MAX2                          = 2
};

/// Enum /Script/FortniteAI.EBotPOIType
/// Size: 0x04
enum EBotPOIType : uint8_t
{
	EBotPOIType__Unknown0                                                            = 0,
	EBotPOIType__ClusterLoot1                                                        = 1,
	EBotPOIType__MidMatchObjective2                                                  = 2,
	EBotPOIType__EBotPOIType_MAX3                                                    = 3
};

/// Enum /Script/FortniteAI.EBotPOIUsageBitmask
/// Size: 0x04
enum EBotPOIUsageBitmask : uint8_t
{
	EBotPOIUsageBitmask__None0                                                       = 0,
	EBotPOIUsageBitmask__BotJumpOffBus1                                              = 1,
	EBotPOIUsageBitmask__BotNavigation2                                              = 2,
	EBotPOIUsageBitmask__EBotPOIUsageBitmask_MAX3                                    = 3
};

/// Enum /Script/FortniteAI.ERatingsEnforcementType
/// Size: 0x05
enum ERatingsEnforcementType : uint8_t
{
	ERatingsEnforcementType__Default0                                                = 0,
	ERatingsEnforcementType__IgnoreMaximums1                                         = 1,
	ERatingsEnforcementType__IgnoreParty2                                            = 2,
	ERatingsEnforcementType__IgnorePartyMaximum3                                     = 3,
	ERatingsEnforcementType__ERatingsEnforcementType_MAX4                            = 4
};

/// Enum /Script/FortniteAI.EClampType
/// Size: 0x03
enum EClampType : uint8_t
{
	EClampType__Minimum0                                                             = 0,
	EClampType__Maximum1                                                             = 1,
	EClampType__EClampType_MAX2                                                      = 2
};

