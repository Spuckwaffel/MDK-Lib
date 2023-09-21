
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameFeatures
/// dependency: GameplayInteractionsModule
/// dependency: ModularGameplay
/// dependency: SmartObjectsModule
/// dependency: StateTreeModule
/// dependency: WorldConditions

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Harvest
/// Size: 0x0070 (0x0001A8 - 0x000218)
class UFortAthenaAIBotEvaluator_Harvest : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(UClass*)                                   ProjectionNavigationQueryFilterClass                        ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(UClass*)                                   ValidNavigationQueryFilterClassOverride                     ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	SMember(FScalableFloat)                            MaximumTimeToHelpFromLastPlayerDamage                       ___ OFFSET(get<T>, {0x1D8, 40, 0, 0})
	SMember(FName)                                     HarvestTargetKeyName                                        ___ OFFSET(get<T>, {0x200, 4, 0, 0})
	SMember(FName)                                     HarvestTargetHitPointKeyName                                ___ OFFSET(get<T>, {0x208, 4, 0, 0})
	SMember(FName)                                     HarvestDestinationKeyName                                   ___ OFFSET(get<T>, {0x210, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ImitatePlayerEmote
/// Size: 0x0168 (0x0001A8 - 0x000310)
class UFortAthenaAIBotEvaluator_ImitatePlayerEmote : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FScalableFloat)                            MinDistanceFromPlayerToPlayEmote                            ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxImitationDuration                                        ___ OFFSET(get<T>, {0x208, 40, 0, 0})
	SMember(FFortNearbyActorsPerceptionConfiguration)  PerceptionConfiguration                                     ___ OFFSET(get<T>, {0x230, 208, 0, 0})
	SMember(FName)                                     ImitatePlayerEmoteTargetActorKeyName                        ___ OFFSET(get<T>, {0x300, 4, 0, 0})
	SMember(FName)                                     ImitatePlayerEmoteShouldMoveKeyName                         ___ OFFSET(get<T>, {0x308, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_AbovePhysicsObject
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UFortAthenaAIEvaluator_AbovePhysicsObject : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_MovementStyle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_MovementStyle : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TEnumAsByte<EFortMovementStyle>)           MovementStyle                                               ___ OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTWorldConditionSchema
/// Size: 0x0010 (0x000038 - 0x000048)
class UFortBTWorldConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_WorldCondition
/// Size: 0x0068 (0x000070 - 0x0000D8)
class UFortAthenaBTService_WorldCondition : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FWorldConditionQueryDefinition)            Conditions                                                  ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FName)                                     ConditionsResultName                                        ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	SMember(FWorldConditionQueryState)                 QueryState                                                  ___ OFFSET(get<T>, {0x90, 48, 0, 0})
	CMember(AAIController*)                            CachedOwnerController                                       ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(AActor*)                                   CachedOwnerPawn                                             ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Harvest
/// Size: 0x0028 (0x000070 - 0x000098)
class UFortAthenaBTTask_Harvest : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     HarvestExecutionStatusKeyName                               ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     HarvestTargetKeyName                                        ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     HarvestTargetHitPointKeyName                                ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     HarvestDestinationKeyName                                   ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeKeyName                                   ___ OFFSET(get<T>, {0x90, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_VehicleSwitchSeat
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_VehicleSwitchSeat : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TEnumAsByte<SwitchSeatType>)               SwitchSeatType                                              ___ OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortStateTreeConditionSchema
/// Size: 0x0018 (0x000038 - 0x000050)
class UFortStateTreeConditionSchema : public UWorldConditionSchema
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_AIBotVehicleSeatStatus
/// Size: 0x0008 (0x000068 - 0x000070)
class UFortBTDecorator_AIBotVehicleSeatStatus : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TEnumAsByte<SeatStatusType>)               SeatType                                                    ___ OFFSET(get<T>, {0x68, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTService_AIEvaluatorsInjector
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortBTService_AIEvaluatorsInjector : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<UObject*>)                          ReferenceHolder                                             ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FFortBTService_InjectionTagKey>)    InjectionTagsKeys                                           ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTService_ClearGoalAndAssignment
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTService_ClearGoalAndAssignment : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortGameFeatureAction_InjectAIBehavior
/// Size: 0x0010 (0x000038 - 0x000048)
class UFortGameFeatureAction_InjectAIBehavior : public UFortGameInstanceGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FFortAISpawnerTagQueryInjectedBehavior>) InjectedBehaviors                                      ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortInjectedBehaviorsComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UFortInjectedBehaviorsComponent : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_PlayspaceVolume
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_PlayspaceVolume : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GridInBox
/// Size: 0x00B0 (0x000088 - 0x000138)
class UFortQueryGenerator_GridInBox : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FAIDataProviderFloatValue)                 BoxWidth                                                    ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 BoxLength                                                   ___ OFFSET(get<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                ___ OFFSET(get<T>, {0xF8, 56, 0, 0})
	CMember(UClass*)                                   GenerateAround                                              ___ OFFSET(get<T>, {0x130, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GridInVolume
/// Size: 0x0040 (0x000088 - 0x0000C8)
class UFortQueryGenerator_GridInVolume : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	CMember(UClass*)                                   GenerateInVolume                                            ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortWorldConditionTimeOfDayState
/// Size: 0x0038 (0x000028 - 0x000060)
class UFortWorldConditionTimeOfDayState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/FortniteAIServer.FortGameFeatureAction_InjectAIEvaluators
/// Size: 0x0010 (0x000028 - 0x000038)
class UFortGameFeatureAction_InjectAIEvaluators : public UGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGameFeatureFortAIEvaluatorEntry>)  AIEvaluatorList                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortEnvQueryGenerator_ProjectedPoints
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     OverridenAgentNameForNavmesh                                ___ OFFSET(get<T>, {0x88, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortEnvQueryGenerator_SimpleGrid
/// Size: 0x0078 (0x000090 - 0x000108)
class UFortEnvQueryGenerator_SimpleGrid : public UFortEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FAIDataProviderFloatValue)                 GridSize                                                    ___ OFFSET(get<T>, {0x90, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                ___ OFFSET(get<T>, {0xC8, 56, 0, 0})
	CMember(UClass*)                                   GenerateAround                                              ___ OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTService_ContextOverride
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTService_ContextOverride : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortBTContext_MoveUrgency
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortBTContext_MoveUrgency : public UFortBTService_ContextOverride
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TEnumAsByte<EFortMovementUrgency>)         MoveUrgency                                                 ___ OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTContext_SkipNotPerceivedGoals
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTContext_SkipNotPerceivedGoals : public UFortBTService_ContextOverride
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortBTContext_SuppressGoalUpdate
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortBTContext_SuppressGoalUpdate : public UFortBTService_ContextOverride
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bUnregisterFromGoalManager                                  ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_CanBeConsideredAirborne
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortBTDecorator_CanBeConsideredAirborne : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_DistanceBetween
/// Size: 0x0068 (0x000068 - 0x0000D0)
class UFortBTDecorator_DistanceBetween : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TEnumAsByte<EArithmeticKeyOperation>)      Operator                                                    ___ OFFSET(get<T>, {0x68, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyA                                              ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyB                                              ___ OFFSET(get<T>, {0x98, 40, 0, 0})
	DMember(float)                                     SpecifiedDistance                                           ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bUseSelf                                                    ___ OFFSET(get<bool>, {0xC4, 1, 1, 0})
	DMember(bool)                                      bCalculateAs2D                                              ___ OFFSET(get<bool>, {0xC4, 1, 1, 1})
	DMember(float)                                     DistanceCalculationUpdateRate                               ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CanActivate
/// Size: 0x0000 (0x000100 - 0x000100)
class UFortBTDecorator_GameplayAbility_CanActivate : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CanHitTarget
/// Size: 0x0008 (0x000100 - 0x000108)
class UFortBTDecorator_GameplayAbility_CanHitTarget : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(bool)                                      UseIdealYawRotationToTarget                                 ___ OFFSET(get<bool>, {0x100, 1, 1, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_CompareDistance
/// Size: 0x0010 (0x000100 - 0x000110)
class UFortBTDecorator_GameplayAbility_CompareDistance : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FDistanceToTargetComparison>)       DistanceComparisons                                         ___ OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
/// Size: 0x0000 (0x000100 - 0x000100)
class UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_HasGameplayAbility
/// Size: 0x0078 (0x000068 - 0x0000E0)
class UFortBTDecorator_GameplayAbility_HasGameplayAbility : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FBlackboardKeySelector)                    AbilityOwningActorKey                                       ___ OFFSET(get<T>, {0x68, 40, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayAbilityTag                                          ___ OFFSET(get<T>, {0x90, 32, 0, 0})
	SMember(FBlackboardKeySelector)                    GameplayAbilityTagBlackboardKey                             ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	DMember(bool)                                      bOnlyTestActiveAbility                                      ___ OFFSET(get<bool>, {0xD8, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_HasNearbyPawns
/// Size: 0x0008 (0x000100 - 0x000108)
class UFortBTDecorator_GameplayAbility_HasNearbyPawns : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(float)                                     NearbyPawnDistance                                          ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(bool)                                      bFilterAIPawns                                              ___ OFFSET(get<bool>, {0x104, 1, 0, 0})
	DMember(bool)                                      bFilterPlayerPawns                                          ___ OFFSET(get<bool>, {0x105, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsClosestPawnInRange
/// Size: 0x0008 (0x000100 - 0x000108)
class UFortBTDecorator_GameplayAbility_IsClosestPawnInRange : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(float)                                     NearbyPawnDistance                                          ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(bool)                                      bFilterAIPawns                                              ___ OFFSET(get<bool>, {0x104, 1, 0, 0})
	DMember(bool)                                      bFilterPlayerPawns                                          ___ OFFSET(get<bool>, {0x105, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsOnCooldown
/// Size: 0x0000 (0x000100 - 0x000100)
class UFortBTDecorator_GameplayAbility_IsOnCooldown : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget
/// Size: 0x0000 (0x000100 - 0x000100)
class UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange
/// Size: 0x0000 (0x000100 - 0x000100)
class UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_IsGoalPawn
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortBTDecorator_IsGoalPawn : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_IsInBotEndGame
/// Size: 0x0000 (0x000068 - 0x000068)
class UFortBTDecorator_IsInBotEndGame : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_IsMoving
/// Size: 0x0048 (0x000100 - 0x000148)
class UFortBTDecorator_IsMoving : public UFortBTDecorator_QueryGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(float)                                     UpdateInterval                                              ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     MinTime                                                     ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(bool)                                      bUseMinDist                                                 ___ OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(float)                                     MinDistMinTime                                              ___ OFFSET(get<float>, {0x10C, 4, 0, 0})
	SMember(FDistanceToTargetComparison)               MinDistanceComparison                                       ___ OFFSET(get<T>, {0x110, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTDecorator_IsTakerAirborne
/// Size: 0x0000 (0x000068 - 0x000068)
class UFortBTDecorator_IsTakerAirborne : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/FortniteAIServer.FortBTDecorator_WeaponStatus
/// Size: 0x0030 (0x000068 - 0x000098)
class UFortBTDecorator_WeaponStatus : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(float)                                     WeaponStatusUpdateRate                                      ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      bTestIfCurrentWeaponIsValid                                 ___ OFFSET(get<bool>, {0x6C, 1, 1, 0})
	DMember(bool)                                      bCurrentWeaponShouldBeValid                                 ___ OFFSET(get<bool>, {0x6C, 1, 1, 1})
	DMember(bool)                                      bTestAllowedCurrentWeaponTags                               ___ OFFSET(get<bool>, {0x6C, 1, 1, 2})
	SMember(FGameplayTagContainer)                     AllowedCurrentWeaponTags                                    ___ OFFSET(get<T>, {0x70, 32, 0, 0})
	DMember(bool)                                      bTestIfCurrentWeaponIsReloading                             ___ OFFSET(get<bool>, {0x90, 1, 1, 0})
	DMember(bool)                                      bCurrentWeaponShouldBeReloading                             ___ OFFSET(get<bool>, {0x90, 1, 1, 1})
	DMember(bool)                                      bTestIfCurrentWeaponHasAmmoInMagazine                       ___ OFFSET(get<bool>, {0x90, 1, 1, 2})
	DMember(bool)                                      bCurrentWeaponShouldHaveAmmoInMagazine                      ___ OFFSET(get<bool>, {0x90, 1, 1, 3})
	DMember(bool)                                      bTestIfCurrentWeaponHasExtraAmmo                            ___ OFFSET(get<bool>, {0x90, 1, 1, 4})
	DMember(bool)                                      bCurrentWeaponShouldHaveExtraAmmo                           ___ OFFSET(get<bool>, {0x90, 1, 1, 5})
	DMember(bool)                                      bAllInterestedTestsMustPass                                 ___ OFFSET(get<bool>, {0x90, 1, 1, 6})
};

/// Class /Script/FortniteAIServer.FortBTService_ActivateAbility
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UFortBTService_ActivateAbility : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FGameplayTagContainer)                     AbilityTags                                                 ___ OFFSET(get<T>, {0x70, 32, 0, 0})
	DMember(bool)                                      bRequireCanHitTargetWithAbility                             ___ OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bPawnTargetsOnly                                            ___ OFFSET(get<bool>, {0x91, 1, 0, 0})
	SMember(FGameplayTagContainer)                     ProhibitedTargetTags                                        ___ OFFSET(get<T>, {0x98, 32, 0, 0})
	DMember(bool)                                      bCanActivateWhenMoving                                      ___ OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(TArray<FDistanceToTargetComparison>)       DistanceChecks                                              ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTService_UpdateBotMissionBuilding
/// Size: 0x0050 (0x000070 - 0x0000C0)
class UFortBTService_UpdateBotMissionBuilding : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FBlackboardKeySelector)                    InterestLocationKey                                         ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BuildOrderKey                                               ___ OFFSET(get<T>, {0x98, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTService_UpdateBotMissionGoal
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UFortBTService_UpdateBotMissionGoal : public UBTService_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bRequireInteraction                                         ___ OFFSET(get<bool>, {0x98, 1, 1, 0})
	DMember(bool)                                      bRequireInteractionOrLocator                                ___ OFFSET(get<bool>, {0x98, 1, 1, 1})
	DMember(bool)                                      bRequireEncounter                                           ___ OFFSET(get<bool>, {0x98, 1, 1, 2})
	DMember(bool)                                      bPickClosest                                                ___ OFFSET(get<bool>, {0x98, 1, 1, 3})
};

/// Class /Script/FortniteAIServer.FortBTTask_BotMissionBuild
/// Size: 0x0000 (0x000098 - 0x000098)
class UFortBTTask_BotMissionBuild : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/FortniteAIServer.FortBTTask_BotMissionInteract
/// Size: 0x0000 (0x000098 - 0x000098)
class UFortBTTask_BotMissionInteract : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/FortniteAIServer.FortBTTask_ExecuteGameplayAbility
/// Size: 0x0050 (0x000078 - 0x0000C8)
class UFortBTTask_ExecuteGameplayAbility : public UBTTask_GameplayTaskBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGameplayTagContainer)                     GameplayAbilityTag                                          ___ OFFSET(get<T>, {0x78, 32, 0, 0})
	SMember(FBlackboardKeySelector)                    GameplayAbilityTagBlackboardKey                             ___ OFFSET(get<T>, {0x98, 40, 0, 0})
	DMember(bool)                                      bUseBlackboardTag                                           ___ OFFSET(get<bool>, {0xC0, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTTask_GameMoveTo
/// Size: 0x0070 (0x0000B0 - 0x000120)
class UFortBTTask_GameMoveTo : public UBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FBlackboardKeySelector)                    FocalPointWhileMoving                                       ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	CMember(TEnumAsByte<EPathObstacleAction>)          PathObstacleAction                                          ___ OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(UClass*)                                   PushBumpedPawnClass                                         ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	SMember(FGameplayTag)                              NavFilterTag                                                ___ OFFSET(get<T>, {0xE8, 4, 0, 0})
	DMember(bool)                                      bDetectUnexpectedPathBlockingObstacles                      ___ OFFSET(get<bool>, {0xEC, 1, 1, 0})
	DMember(bool)                                      bEnableSlowdownAtGoal                                       ___ OFFSET(get<bool>, {0xEC, 1, 1, 1})
	DMember(bool)                                      bStopAtGoal                                                 ___ OFFSET(get<bool>, {0xEC, 1, 1, 2})
	DMember(bool)                                      bFinishMoveOnOverlap                                        ___ OFFSET(get<bool>, {0xEC, 1, 1, 3})
	SMember(FBlackboardKeySelector)                    AcceptableRadiusKey                                         ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	DMember(bool)                                      bDeimosFlavor                                               ___ OFFSET(get<bool>, {0x118, 1, 1, 0})
};

/// Class /Script/FortniteAIServer.FortBTTask_GameMoveDirectlyToward
/// Size: 0x0000 (0x000120 - 0x000120)
class UFortBTTask_GameMoveDirectlyToward : public UFortBTTask_GameMoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/FortniteAIServer.FortBTTask_RequestUndermining
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTTask_RequestUndermining : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortBTTask_RotateToFaceBBEntryWithTags
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UFortBTTask_RotateToFaceBBEntryWithTags : public UBTTask_RotateToFaceBBEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGameplayTagContainer)                     TagsToApply                                                 ___ OFFSET(get<T>, {0xA0, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTTask_SetFrustrationDiscouragement
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortBTTask_SetFrustrationDiscouragement : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     DiscouragementDuration                                      ___ OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortBTTask_Sleep
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortBTTask_Sleep : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortBTTask_TakerMoveToNavmesh
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UFortBTTask_TakerMoveToNavmesh : public UBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/FortniteAIServer.FortEQSPrevisActor
/// Size: 0x0038 (0x000290 - 0x0002C8)
class AFortEQSPrevisActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(USceneComponent*)                          SceneRoot                                                   ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                ___ OFFSET(get<T>, {0x2A8, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryContext_AIPawnSpawnLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AIPawnSpawnLocation : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllBots
/// Size: 0x0050 (0x000028 - 0x000078)
class UFortQueryContext_AllBots : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bIncludeOnlyAthenaGameParticipantBots                       ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FGameplayTagQuery)                         BotTagQuery                                                 ___ OFFSET(get<T>, {0x30, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllEnemies
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AllEnemies : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllGoals
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AllGoals : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllPlayers
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AllPlayers : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AllPOIVolumes
/// Size: 0x0048 (0x000028 - 0x000070)
class UFortQueryContext_AllPOIVolumes : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagQuery)                         VolumeLocationTagQuery                                      ___ OFFSET(get<T>, {0x28, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneCenter
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AthenaCurrentSafeZoneCenter : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_AthenaSafeZonePredictedLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_AthenaSafeZonePredictedLocation : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_BlackboardKeyLeader
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_BlackboardKeyLeader : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_BuildingRifts
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_BuildingRifts : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterFallbackTarget
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterFallbackTarget : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterGoalsCenterLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterGoalsCenterLocation : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterGoalsOnGround
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterGoalsOnGround : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterPrimaryAssignmentGoals
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterPrimaryAssignmentGoals : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterProvidedQueryLocations
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterProvidedQueryLocations : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterQueryActor
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterQueryActor : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterRandomDirection
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterRandomDirection : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_EncounterTargetObjective
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_EncounterTargetObjective : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_Goal
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_Goal : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_GoalProviderRootAssignmentGoals
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_GoalProviderRootAssignmentGoals : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_Goal_SpawnLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_Goal_SpawnLocation : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyAIPawns
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyAIPawns : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyAIPawnsMoveDestinations
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyAIPawnsMoveDestinations : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawns
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyFriendlyAIPawns : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_NearbyFriends
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_NearbyFriends : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_RandomDirectionXY
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_RandomDirectionXY : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_StWStormShield
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_StWStormShield : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_TwoPointSolverPointA
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_TwoPointSolverPointA : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryContext_TwoPointSolverRotationA
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortQueryContext_TwoPointSolverRotationA : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/FortniteAIServer.FortQueryData_CurvesAroundLine
/// Size: 0x0060 (0x000030 - 0x000090)
class UFortQueryData_CurvesAroundLine : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFortPointsOnCurve)                        PointsOnSideA                                               ___ OFFSET(get<T>, {0x30, 48, 0, 0})
	SMember(FFortPointsOnCurve)                        PointsOnSideB                                               ___ OFFSET(get<T>, {0x60, 48, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_ActorsAround
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UFortQueryGenerator_ActorsAround : public UEnvQueryGenerator_ActorsOfClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_Allies
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_Allies : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_AssignmentGoal
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_AssignmentGoal : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_BuildingRifts
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_BuildingRifts : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_Buildings
/// Size: 0x01D8 (0x000050 - 0x000228)
class UFortQueryGenerator_Buildings : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FFortAIAssignmentIdentifier)               AssignmentIdentifier                                        ___ OFFSET(get<T>, {0x50, 48, 0, 0})
	CMember(UFortAIAssignmentSettings*)                AssignmentSettings                                          ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UClass*)                                   BuildingGridVolumeCenter                                    ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FAIDataProviderIntValue)                   HorizontalBuildingCellRadius                                ___ OFFSET(get<T>, {0x90, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   BuildingCellsAbove                                          ___ OFFSET(get<T>, {0xC8, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   BuildingCellsBelow                                          ___ OFFSET(get<T>, {0x100, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bIncludeWalls                                               ___ OFFSET(get<T>, {0x138, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bIncludeFloors                                              ___ OFFSET(get<T>, {0x170, 56, 0, 0})
	CMember(TArray<EFloorPatternType>)                 FloorPatternsToIgnore                                       ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bIncludeCenterCell                                          ___ OFFSET(get<T>, {0x1B8, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   MaxBuildingActorsPerVolumeCenterToCollect                   ___ OFFSET(get<T>, {0x1F0, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_BuildingsOnCachedPath
/// Size: 0x00B0 (0x000050 - 0x000100)
class UFortQueryGenerator_BuildingsOnCachedPath : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(UClass*)                                   CachedPathSource                                            ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bIncludeWalls                                               ___ OFFSET(get<T>, {0x58, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bIncludeFloors                                              ___ OFFSET(get<T>, {0x90, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bIncludeCenterCell                                          ___ OFFSET(get<T>, {0xC8, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_EncounterTargets
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_EncounterTargets : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_Enemies
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UFortQueryGenerator_Enemies : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bPerceivedEnemiesOnly                                       ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      bSleepCapableAIUsePerceivedEnemiesOnly                      ___ OFFSET(get<bool>, {0x51, 1, 0, 0})
	DMember(bool)                                      bIgnoreDBNOPawns                                            ___ OFFSET(get<bool>, {0x52, 1, 0, 0})
	DMember(bool)                                      bIgnoreSleepingAIs                                          ___ OFFSET(get<bool>, {0x53, 1, 0, 0})
	DMember(bool)                                      bAddEnemiesFromAbilityRange                                 ___ OFFSET(get<bool>, {0x54, 1, 0, 0})
	SMember(FGameplayTagContainer)                     AbilityTags                                                 ___ OFFSET(get<T>, {0x58, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DistanceTags                                                ___ OFFSET(get<T>, {0x78, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxTimeSincePerceived                                       ___ OFFSET(get<T>, {0x98, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GoalActorsOfClass
/// Size: 0x0048 (0x000050 - 0x000098)
class UFortQueryGenerator_GoalActorsOfClass : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UClass*)                                   SearchedActorClass                                          ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SearchRadius                                                ___ OFFSET(get<T>, {0x58, 56, 0, 0})
	CMember(UClass*)                                   SearchCenter                                                ___ OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GoalOnCircle
/// Size: 0x0040 (0x000220 - 0x000260)
class UFortQueryGenerator_GoalOnCircle : public UEnvQueryGenerator_OnCircle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	DMember(bool)                                      bIncludeCenterActorInGeneratedGoals                         ___ OFFSET(get<bool>, {0x220, 1, 0, 0})
	CMember(UFortAIAssignmentSettings*)                OptionalAssignmentSettings                                  ___ OFFSET(get<T>, {0x228, 8, 0, 0})
	SMember(FFortAIAssignmentIdentifier)               OptionalAssignmentIdentifier                                ___ OFFSET(get<T>, {0x230, 48, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GoalPlayerPawns
/// Size: 0x0008 (0x000050 - 0x000058)
class UFortQueryGenerator_GoalPlayerPawns : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bOnlyAthenaGameParticipants                                 ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_GoalTrackableAIObjects
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UFortQueryGenerator_GoalTrackableAIObjects : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FFortAIAssignmentIdentifier)               AssignmentIdentifier                                        ___ OFFSET(get<T>, {0x50, 48, 0, 0})
	CMember(UClass*)                                   SearchedActorClass                                          ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FGameplayTag)                              RequiredTag                                                 ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SearchRadius                                                ___ OFFSET(get<T>, {0x90, 56, 0, 0})
	CMember(UClass*)                                   SearchCenter                                                ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_HotspotSlots
/// Size: 0x0050 (0x000050 - 0x0000A0)
class UFortQueryGenerator_HotspotSlots : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UClass*)                                   GenerateAround                                              ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 Radius                                                      ___ OFFSET(get<T>, {0x58, 56, 0, 0})
	DMember(bool)                                      bUseTetherZone                                              ___ OFFSET(get<bool>, {0x90, 1, 1, 0})
	CMember(UClass*)                                   HotspotClass                                                ___ OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_InfluenceMapPoints
/// Size: 0x0048 (0x000088 - 0x0000D0)
class UFortQueryGenerator_InfluenceMapPoints : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FAIDataProviderIntValue)                   Density                                                     ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	DMember(bool)                                      bOnlyFlatSurface                                            ___ OFFSET(get<bool>, {0xC0, 1, 1, 0})
	CMember(UClass*)                                   GenerateAround                                              ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_LootGoalsAthena
/// Size: 0x00D8 (0x000050 - 0x000128)
class UFortQueryGenerator_LootGoalsAthena : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FFortAIAssignmentIdentifier)               AssignmentIdentifier                                        ___ OFFSET(get<T>, {0x50, 48, 0, 0})
	CMember(UFortAIAssignmentSettings*)                AssignmentSettings                                          ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 HorizontalHalfExtents                                       ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 VerticalHalfExtents                                         ___ OFFSET(get<T>, {0xC0, 56, 0, 0})
	CMember(UClass*)                                   SearchCenter                                                ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(bool)                                      bAvailableLootOnly                                          ___ OFFSET(get<bool>, {0x100, 1, 1, 0})
	SMember(FGameplayTagContainer)                     ExcludedAILootGameplayTags                                  ___ OFFSET(get<T>, {0x108, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_MissionPlacementActors
/// Size: 0x0048 (0x000050 - 0x000098)
class UFortQueryGenerator_MissionPlacementActors : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayTagQuery)                         MissionPlacementActorTagQuery                               ___ OFFSET(get<T>, {0x50, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_MutatorActorQueryResults
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_MutatorActorQueryResults : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_MutatorBaseQueryResults
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortQueryGenerator_MutatorBaseQueryResults : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PerceivedActors
/// Size: 0x00D8 (0x000050 - 0x000128)
class UFortQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bGenerateHostileActorGoal                                   ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	SMember(FFortQueryGenerator_PerceivedActors_Settings) HostileActorSettings                                     ___ OFFSET(get<T>, {0x58, 64, 0, 0})
	DMember(bool)                                      bGenerateNeutralActorGoal                                   ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
	SMember(FFortQueryGenerator_PerceivedActors_Settings) NeutralActorSettings                                     ___ OFFSET(get<T>, {0xA0, 64, 0, 0})
	DMember(bool)                                      bGenerateFriendlyActorGoal                                  ___ OFFSET(get<bool>, {0xE0, 1, 0, 0})
	SMember(FFortQueryGenerator_PerceivedActors_Settings) FriendlyActorSettings                                    ___ OFFSET(get<T>, {0xE8, 64, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsAroundLine
/// Size: 0x0098 (0x000088 - 0x000120)
class UFortQueryGenerator_PointsAroundLine : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(UClass*)                                   GenerateAround                                              ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FAIDataProviderIntValue)                   MaxPointsPerClusterLocation                                 ___ OFFSET(get<T>, {0x90, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ClusterRadius                                               ___ OFFSET(get<T>, {0xC8, 56, 0, 0})
	CMember(TWeakObjectPtr<UFortQueryData_CurvesAroundLine*>) CurvesAroundLineAsset                                ___ OFFSET(get<T>, {0x100, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsFromNavGraph
/// Size: 0x0150 (0x000088 - 0x0001D8)
class UFortQueryGenerator_PointsFromNavGraph : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FAIDataProviderFloatValue)                 MinPathDistance                                             ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxPathDistance                                             ___ OFFSET(get<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   Density                                                     ___ OFFSET(get<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ExploreDirectionYaw                                         ___ OFFSET(get<T>, {0x130, 56, 0, 0})
	SMember(FEnvDirection)                             ExploreDirection                                            ___ OFFSET(get<T>, {0x168, 32, 0, 0})
	DMember(float)                                     ExploreAngleDot                                             ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ExploreInnerRadius                                          ___ OFFSET(get<T>, {0x190, 56, 0, 0})
	DMember(bool)                                      bLimitExplorationDirection                                  ___ OFFSET(get<bool>, {0x1C8, 1, 1, 0})
	DMember(bool)                                      bOnlyFlatSurface                                            ___ OFFSET(get<bool>, {0x1C8, 1, 1, 1})
	DMember(bool)                                      bUseParameterizedDirection                                  ___ OFFSET(get<bool>, {0x1C8, 1, 1, 2})
	DMember(bool)                                      bUseHeightCheck                                             ___ OFFSET(get<bool>, {0x1C8, 1, 1, 3})
	DMember(bool)                                      bFilterAllowTerrain                                         ___ OFFSET(get<bool>, {0x1C8, 1, 1, 4})
	DMember(bool)                                      bFilterAllowBuildings                                       ___ OFFSET(get<bool>, {0x1C8, 1, 1, 5})
	DMember(bool)                                      bFilterAllowDropdown                                        ___ OFFSET(get<bool>, {0x1C8, 1, 1, 6})
	DMember(bool)                                      bFilterAllowClimbup                                         ___ OFFSET(get<bool>, {0x1C8, 1, 1, 7})
	DMember(bool)                                      bFilterAllowSmash                                           ___ OFFSET(get<bool>, {0x1C9, 1, 1, 0})
	CMember(TEnumAsByte<EFortPointsFromNavGraphGoalPathDistanceFilterOperator>) PathDistanceFilterOperator         ___ OFFSET(get<T>, {0x1CC, 1, 0, 0})
	CMember(UClass*)                                   GenerateAround                                              ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsInVolume
/// Size: 0x0048 (0x000050 - 0x000098)
class UFortQueryGenerator_PointsInVolume : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FAIDataProviderIntValue)                   NumberOfPoints                                              ___ OFFSET(get<T>, {0x50, 56, 0, 0})
	CMember(TEnumAsByte<EFortNamedNavmesh>)            NavMeshToUse                                                ___ OFFSET(get<T>, {0x88, 1, 0, 0})
	CMember(UClass*)                                   GenerateIn                                                  ___ OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsOnBuildingActors
/// Size: 0x01C8 (0x000088 - 0x000250)
class UFortQueryGenerator_PointsOnBuildingActors : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FAIDataProviderFloatValue)                 BoundingBoxExtentXY                                         ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 BoundingBoxExtentZ                                          ___ OFFSET(get<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 PointDensity                                                ___ OFFSET(get<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   MaxGeneratedPoints                                          ___ OFFSET(get<T>, {0x130, 56, 0, 0})
	SMember(FFortTaggedActorOctreeFilter)              ActorLookupFilter                                           ___ OFFSET(get<T>, {0x168, 168, 0, 0})
	SMember(FAIDataProviderFloatValue)                 RandomChanceToSkip                                          ___ OFFSET(get<T>, {0x210, 56, 0, 0})
	CMember(UClass*)                                   GenerateAround                                              ___ OFFSET(get<T>, {0x248, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsOnBuildingGrid
/// Size: 0x0080 (0x000088 - 0x000108)
class UFortQueryGenerator_PointsOnBuildingGrid : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FAIDataProviderIntValue)                   HorizontalGridSize                                          ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   VerticalGridSize                                            ___ OFFSET(get<T>, {0xC0, 56, 0, 0})
	DMember(bool)                                      bStartGridFromBottom                                        ___ OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bUsePointInVerticalCenterOfCell                             ___ OFFSET(get<bool>, {0xF9, 1, 0, 0})
	CMember(UClass*)                                   GenerateAround                                              ___ OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_PointsOnWaterShoreLine
/// Size: 0x0028 (0x000088 - 0x0000B0)
class UFortQueryGenerator_PointsOnWaterShoreLine : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UClass*)                                   GenerateAround                                              ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortQueryData_CurvesAroundLine*>) CurvesAroundLineAsset                                ___ OFFSET(get<T>, {0x90, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_RandomPointsInBoundingVolume
/// Size: 0x0040 (0x000088 - 0x0000C8)
class UFortQueryGenerator_RandomPointsInBoundingVolume : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(UClass*)                                   GenerateIn                                                  ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 RandomPointsCount                                           ___ OFFSET(get<T>, {0x90, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_SpecificAssignmentGoals
/// Size: 0x0040 (0x000050 - 0x000090)
class UFortQueryGenerator_SpecificAssignmentGoals : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFortAIAssignmentIdentifier)               AssignmentIdentifier                                        ___ OFFSET(get<T>, {0x50, 48, 0, 0})
	CMember(UFortAIAssignmentSettings*)                AssignmentSettings                                          ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UClass*)                                   GoalProvider                                                ___ OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_SquadMembers
/// Size: 0x0118 (0x000050 - 0x000168)
class UFortQueryGenerator_SquadMembers : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FAIDataProviderBoolValue)                  LookingForHumanPlayers                                      ___ OFFSET(get<T>, {0x50, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  LookingForPlayerBots                                        ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  LookingForNpcs                                              ___ OFFSET(get<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  LookingForAiPawns                                           ___ OFFSET(get<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  IncludeSelf                                                 ___ OFFSET(get<T>, {0x130, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_TerrainDonut
/// Size: 0x00F0 (0x000050 - 0x000140)
class UFortQueryGenerator_TerrainDonut : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(UClass*)                                   Center                                                      ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 Radius                                                      ___ OFFSET(get<T>, {0x58, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 RadiusWidth                                                 ___ OFFSET(get<T>, {0x90, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpacingArc                                                  ___ OFFSET(get<T>, {0xC8, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   NumRings                                                    ___ OFFSET(get<T>, {0x100, 56, 0, 0})
	DMember(bool)                                      bFilterAllowTerrain                                         ___ OFFSET(get<bool>, {0x138, 1, 1, 0})
	DMember(bool)                                      bFilterAllowBuildings                                       ___ OFFSET(get<bool>, {0x138, 1, 1, 1})
};

/// Class /Script/FortniteAIServer.FortQueryGenerator_ValidSpawnRiftActors
/// Size: 0x0038 (0x000050 - 0x000088)
class UFortQueryGenerator_ValidSpawnRiftActors : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FAIDataProviderIntValue)                   NumAIForGroup                                               ___ OFFSET(get<T>, {0x50, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryItemType_PointOrSlot
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortQueryItemType_PointOrSlot : public UEnvQueryItemType_Point
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalBase
/// Size: 0x0070 (0x0001F8 - 0x000268)
class UFortQueryTest_GoalBase : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	DMember(bool)                                      bScoreEnemies                                               ___ OFFSET(get<bool>, {0x1F8, 1, 1, 0})
	DMember(bool)                                      bScoreEncounterGoals                                        ___ OFFSET(get<bool>, {0x1F8, 1, 1, 1})
	DMember(bool)                                      bScoreWorldGoals                                            ___ OFFSET(get<bool>, {0x1F8, 1, 1, 2})
	DMember(bool)                                      bScoreSpecificAssignments                                   ___ OFFSET(get<bool>, {0x1F8, 1, 1, 3})
	CMember(TArray<FFortAIAssignmentIdentifier>)       AssignmentIDs                                               ___ OFFSET(get<T>, {0x200, 16, 0, 0})
	CMember(TArray<FFortAIAssignmentIdentifier>)       ProhibitedAssignmentIDs                                     ___ OFFSET(get<T>, {0x210, 16, 0, 0})
	SMember(FGameplayTagQuery)                         GoalActorTagQuery                                           ___ OFFSET(get<T>, {0x220, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_AssignmentTypeInterest
/// Size: 0x01C0 (0x000268 - 0x000428)
class UFortQueryTest_AssignmentTypeInterest : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	SMember(FAIDataProviderFloatValue)                 InvalidTypeStartInterest                                    ___ OFFSET(get<T>, {0x268, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 InvalidTypeEndInterest                                      ___ OFFSET(get<T>, {0x2A0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 InvalidTypeTimeBeforeLerp                                   ___ OFFSET(get<T>, {0x2D8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 InvalidTypeLerpDuration                                     ___ OFFSET(get<T>, {0x310, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValidTypeStartInterest                                      ___ OFFSET(get<T>, {0x348, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValidTypeEndInterest                                        ___ OFFSET(get<T>, {0x380, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValidTypeTimeBeforeLerp                                     ___ OFFSET(get<T>, {0x3B8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValidTypeLerpDuration                                       ___ OFFSET(get<T>, {0x3F0, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_BuildingCriteria
/// Size: 0x0650 (0x000268 - 0x0008B8)
class UFortQueryTest_BuildingCriteria : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2232;

public:
	SMember(FAIDataProviderFloatValue)                 ScoreForGroundSupportedFloor                                ___ OFFSET(get<T>, {0x268, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreForBeingGroundSupported                                ___ OFFSET(get<T>, {0x2A0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreForTraps                                               ___ OFFSET(get<T>, {0x2D8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreForWalls                                               ___ OFFSET(get<T>, {0x310, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreForNavigableOpening                                    ___ OFFSET(get<T>, {0x348, 56, 0, 0})
	SMember(FFortAIAssignmentIdentifier)               RootAssignmentID                                            ___ OFFSET(get<T>, {0x380, 48, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bPreferCloserToRootAssignment                               ___ OFFSET(get<T>, {0x3B0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreForDistanceFromClosestRootAssignmentGoal               ___ OFFSET(get<T>, {0x3E8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MinDistanceForDistanceScoring                               ___ OFFSET(get<T>, {0x420, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxDistanceForDistanceScoring                               ___ OFFSET(get<T>, {0x458, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxHealthScore                                              ___ OFFSET(get<T>, {0x490, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bPreferHigherHealth                                         ___ OFFSET(get<T>, {0x4C8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ClampMaxHealthValue                                         ___ OFFSET(get<T>, {0x500, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ClampMinHealthValue                                         ___ OFFSET(get<T>, {0x538, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bPreferHigherHealthPercentage                               ___ OFFSET(get<T>, {0x570, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxHealthPercentageScore                                    ___ OFFSET(get<T>, {0x5A8, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bWantsBuildingRepairableByOwner                             ___ OFFSET(get<T>, {0x5E0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 RepairableBuildingScore                                     ___ OFFSET(get<T>, {0x618, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 NotRepairableBuildingScore                                  ___ OFFSET(get<T>, {0x650, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 NeedsRepairBuildingScore                                    ___ OFFSET(get<T>, {0x688, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DoesntNeedsRepairBuildingScore                              ___ OFFSET(get<T>, {0x6C0, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bWantsDamagedByFriendly                                     ___ OFFSET(get<T>, {0x6F8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DamagedByFriendlyMaxLifespan                                ___ OFFSET(get<T>, {0x730, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DamagedByFriendlyMinDamage                                  ___ OFFSET(get<T>, {0x768, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DamagedByFriendlyScore                                      ___ OFFSET(get<T>, {0x7A0, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  bWantsDamagedByEnemy                                        ___ OFFSET(get<T>, {0x7D8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DamagedByEnemyMaxLifespan                                   ___ OFFSET(get<T>, {0x810, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DamagedByEnemyMinDamage                                     ___ OFFSET(get<T>, {0x848, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DamagedByEnemyScore                                         ___ OFFSET(get<T>, {0x880, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_CanAttackTarget
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_CanAttackTarget : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_CanBeDamaged
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_CanBeDamaged : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_CanHitWithGameplayAbility
/// Size: 0x0030 (0x0001F8 - 0x000228)
class UFortQueryTest_CanHitWithGameplayAbility : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(UClass*)                                   AIsUsingAbility                                             ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(UClass*)                                   AbilityTargets                                              ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayAbilityTag                                          ___ OFFSET(get<T>, {0x208, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_CurieState
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UFortQueryTest_CurieState : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FGameplayTagQuery)                         CurieStateQuery                                             ___ OFFSET(get<T>, {0x1F8, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_DecoyDistance
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_DecoyDistance : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(UClass*)                                   DistanceTo                                                  ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_DeltaDistance
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_DeltaDistance : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(UClass*)                                   LocationProviderContext                                     ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	DMember(bool)                                      bUseDistance2D                                              ___ OFFSET(get<bool>, {0x200, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_DistanceToActorBound
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_DistanceToActorBound : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(UClass*)                                   DistanceTo                                                  ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_DistanceToIndestructibleBuilding
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_DistanceToIndestructibleBuilding : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_EnvironmentalDanger
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_EnvironmentalDanger : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(bool)                                      bUse3DBoundsCheck                                           ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FGameplayTag)                              DangerSourceActorRegistryTag                                ___ OFFSET(get<T>, {0x1FC, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GameplayTagsPerDifficulty
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_GameplayTagsPerDifficulty : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TArray<FFortGameplayTagQueryPerDifficulty>) TagQueriesPerDifficulty                                    ___ OFFSET(get<T>, {0x1F8, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalActorDot
/// Size: 0x0018 (0x000268 - 0x000280)
class UFortQueryTest_GoalActorDot : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(UClass*)                                   LineATo                                                     ___ OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(UClass*)                                   LineBTo                                                     ___ OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(EFortTestGoalActorDot)                     TestMode                                                    ___ OFFSET(get<T>, {0x278, 1, 0, 0})
	DMember(bool)                                      bAbsoluteValue                                              ___ OFFSET(get<bool>, {0x279, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalActorTimeSinceSpawn
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalActorTimeSinceSpawn : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalDiscouragement
/// Size: 0x0038 (0x000268 - 0x0002A0)
class UFortQueryTest_GoalDiscouragement : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FAIDataProviderBoolValue)                  DisableDiscouragementWhenUndermining                        ___ OFFSET(get<T>, {0x268, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalDistance
/// Size: 0x0018 (0x000268 - 0x000280)
class UFortQueryTest_GoalDistance : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(EDistanceMode)                             DistanceMode                                                ___ OFFSET(get<T>, {0x268, 1, 0, 0})
	CMember(UClass*)                                   DistanceTo                                                  ___ OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(TEnumAsByte<EEnvTestDistance>)             TestMode                                                    ___ OFFSET(get<T>, {0x278, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalDistanceRanges
/// Size: 0x0028 (0x000268 - 0x000290)
class UFortQueryTest_GoalDistanceRanges : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(EDistanceMode)                             DistanceMode                                                ___ OFFSET(get<T>, {0x268, 1, 0, 0})
	CMember(UClass*)                                   DistanceTo                                                  ___ OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(TEnumAsByte<EEnvTestDistance>)             ScreeningTestMode                                           ___ OFFSET(get<T>, {0x278, 1, 0, 0})
	CMember(TEnumAsByte<EEnvTestDistance>)             TestMode                                                    ___ OFFSET(get<T>, {0x279, 1, 0, 0})
	CMember(TArray<FGoalDistanceData>)                 GoalDistanceDataRanges                                      ___ OFFSET(get<T>, {0x280, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalFrustrationDiscouragement
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalFrustrationDiscouragement : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalGameplayTags
/// Size: 0x0058 (0x000268 - 0x0002C0)
class UFortQueryTest_GoalGameplayTags : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(bool)                                      bShouldLookupQueryByTag                                     ___ OFFSET(get<bool>, {0x268, 1, 0, 0})
	SMember(FGameplayTagQuery)                         TagQueryToMatch                                             ___ OFFSET(get<T>, {0x270, 72, 0, 0})
	SMember(FGameplayTag)                              QueryLookupTag                                              ___ OFFSET(get<T>, {0x2B8, 4, 0, 0})
	DMember(bool)                                      bShouldPassWhenQueryNotFound                                ___ OFFSET(get<bool>, {0x2BC, 1, 0, 0})
	DMember(bool)                                      bRequireAllProvidedTagQueriesPass                           ___ OFFSET(get<bool>, {0x2BD, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalMarkedByPlayer
/// Size: 0x0080 (0x000268 - 0x0002E8)
class UFortQueryTest_GoalMarkedByPlayer : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FGameplayTagQuery)                         OwnerTagQuery                                               ___ OFFSET(get<T>, {0x268, 72, 0, 0})
	SMember(FAIDataProviderBoolValue)                  OnlyConverterMarkedTargets                                  ___ OFFSET(get<T>, {0x2B0, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalNumberOfAIAssigned
/// Size: 0x0008 (0x000268 - 0x000270)
class UFortQueryTest_GoalNumberOfAIAssigned : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(ECountAIAssignedToType)                    TypeOfMatchToCount                                          ___ OFFSET(get<T>, {0x268, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalOverallDamageCaused
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalOverallDamageCaused : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalPickupFilter
/// Size: 0x0008 (0x000268 - 0x000270)
class UFortQueryTest_GoalPickupFilter : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	DMember(float)                                     MaxLifetime                                                 ___ OFFSET(get<float>, {0x268, 4, 0, 0})
	CMember(EFortPickupSpawnSource)                    RequiredPickupSpawnSource                                   ___ OFFSET(get<T>, {0x26C, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalProject
/// Size: 0x0038 (0x000268 - 0x0002A0)
class UFortQueryTest_GoalProject : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FEnvTraceData)                             ProjectionData                                              ___ OFFSET(get<T>, {0x268, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalStickiness
/// Size: 0x0118 (0x000268 - 0x000380)
class UFortQueryTest_GoalStickiness : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FAIDataProviderFloatValue)                 StartValueForGoal                                           ___ OFFSET(get<T>, {0x268, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 EndValueForGoal                                             ___ OFFSET(get<T>, {0x2A0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 TimeBeforeValueLerp                                         ___ OFFSET(get<T>, {0x2D8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValueLerpDuration                                           ___ OFFSET(get<T>, {0x310, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  ApplyStickinessToAllGoalsWithSameActor                      ___ OFFSET(get<T>, {0x348, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalType
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalType : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_GoalWithinTetheredBounds
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_GoalWithinTetheredBounds : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_HasNearbyBuildings
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_HasNearbyBuildings : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	DMember(bool)                                      bIncludeCenter                                              ___ OFFSET(get<bool>, {0x1F8, 1, 1, 0})
	DMember(bool)                                      bIncludeFloors                                              ___ OFFSET(get<bool>, {0x1F8, 1, 1, 1})
	DMember(bool)                                      bIncludeFloorsAbove                                         ___ OFFSET(get<bool>, {0x1F8, 1, 1, 2})
	DMember(bool)                                      bIncludeWalls                                               ___ OFFSET(get<bool>, {0x1F8, 1, 1, 3})
	DMember(int32_t)                                   ExtentXY                                                    ___ OFFSET(get<int32_t>, {0x1FC, 4, 0, 0})
	DMember(int32_t)                                   ExtentZ                                                     ___ OFFSET(get<int32_t>, {0x200, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_HasNearbyEncounterGoals
/// Size: 0x0040 (0x0001F8 - 0x000238)
class UFortQueryTest_HasNearbyEncounterGoals : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	DMember(bool)                                      bOnlyActiveEncounters                                       ___ OFFSET(get<bool>, {0x1F8, 1, 1, 0})
	SMember(FAIDataProviderFloatValue)                 TestDistance                                                ___ OFFSET(get<T>, {0x200, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_Health
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_Health : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(bool)                                      bUsePercentHealth                                           ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_HealthAndShield
/// Size: 0x00F8 (0x0001F8 - 0x0002F0)
class UFortQueryTest_HealthAndShield : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	DMember(bool)                                      bConsiderHealth                                             ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 HealthMin                                                   ___ OFFSET(get<T>, {0x200, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 HealthMax                                                   ___ OFFSET(get<T>, {0x238, 56, 0, 0})
	DMember(bool)                                      bHealthAsPercent                                            ___ OFFSET(get<bool>, {0x270, 1, 0, 0})
	DMember(bool)                                      bConsiderShield                                             ___ OFFSET(get<bool>, {0x271, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ShieldMin                                                   ___ OFFSET(get<T>, {0x278, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ShieldMax                                                   ___ OFFSET(get<T>, {0x2B0, 56, 0, 0})
	DMember(bool)                                      bShieldAsPercent                                            ___ OFFSET(get<bool>, {0x2E8, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_HotspotSlotOrientation
/// Size: 0x0040 (0x0001F8 - 0x000238)
class UFortQueryTest_HotspotSlotOrientation : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(UClass*)                                   FaceToward                                                  ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DotThreshold                                                ___ OFFSET(get<T>, {0x200, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_HotspotSlotState
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_HotspotSlotState : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(EAIHotSpotSlot)                            SlotState                                                   ___ OFFSET(get<T>, {0x1F8, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_InfluenceScore
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_InfluenceScore : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideAIBotLeash
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_InsideAIBotLeash : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideAthenaLeash
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_InsideAthenaLeash : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideAthenaSafeZone
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UFortQueryTest_InsideAthenaSafeZone : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	DMember(bool)                                      bUseCurrentSafeZoneIndicatorRadius                          ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FAIDataProviderIntValue)                   SafeZoneIndex                                               ___ OFFSET(get<T>, {0x200, 56, 0, 0})
	DMember(bool)                                      bNextSafeZone                                               ___ OFFSET(get<bool>, {0x238, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideBuilding
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_InsideBuilding : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_InsideWater
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_InsideWater : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(float)                                     TestRadius                                                  ___ OFFSET(get<float>, {0x1F8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsCloseToHotspotSlot
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UFortQueryTest_IsCloseToHotspotSlot : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(UClass*)                                   HotspotClass                                                ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 Radius                                                      ___ OFFSET(get<T>, {0x200, 56, 0, 0})
	DMember(bool)                                      bIgnoreItemsWithSlotData                                    ___ OFFSET(get<bool>, {0x238, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsCloseToPatrolWard
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_IsCloseToPatrolWard : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(EWardAffectType)                           WardEffectTypeFilter                                        ___ OFFSET(get<T>, {0x1F8, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsGoalForAssignment
/// Size: 0x0038 (0x0001F8 - 0x000230)
class UFortQueryTest_IsGoalForAssignment : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	DMember(bool)                                      bRetrieveRootAssignmentFromOwner                            ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FFortAIAssignmentIdentifier)               RootAssignmentID                                            ___ OFFSET(get<T>, {0x200, 48, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsGoalHostile
/// Size: 0x00B8 (0x000268 - 0x000320)
class UFortQueryTest_IsGoalHostile : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FGameplayTagQuery)                         OwnerTagQuery                                               ___ OFFSET(get<T>, {0x268, 72, 0, 0})
	SMember(FGameplayTagQuery)                         EnemyPawnTagsToConsider                                     ___ OFFSET(get<T>, {0x2B0, 72, 0, 0})
	SMember(FGameplayTagContainer)                     BuildingTagsToConsider                                      ___ OFFSET(get<T>, {0x2F8, 32, 0, 0})
	DMember(bool)                                      bConsiderDefenders                                          ___ OFFSET(get<bool>, {0x318, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsInLeaderLOS
/// Size: 0x0058 (0x0001F8 - 0x000250)
class UFortQueryTest_IsInLeaderLOS : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FGameplayTagQuery)                         OwnerTagQuery                                               ___ OFFSET(get<T>, {0x1F8, 72, 0, 0})
	DMember(bool)                                      bRequireLOSRayCast                                          ___ OFFSET(get<bool>, {0x240, 1, 0, 0})
	DMember(float)                                     RayCastLeaderVerticalOffset                                 ___ OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(float)                                     RayCastItemVerticalOffset                                   ___ OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     MinDotProduct                                               ___ OFFSET(get<float>, {0x24C, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsObstructed
/// Size: 0x00A8 (0x0002E0 - 0x000388)
class UFortQueryTest_IsObstructed : public UEnvQueryTest_Trace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FAIDataProviderBoolValue)                  OverrideContextLocationXWithItemLocationX                   ___ OFFSET(get<T>, {0x2E0, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  OverrideContextLocationYWithItemLocationY                   ___ OFFSET(get<T>, {0x318, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  OverrideContextLocationZWithItemLocationZ                   ___ OFFSET(get<T>, {0x350, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_IsObstructedOverlap
/// Size: 0x00A8 (0x0002E0 - 0x000388)
class UFortQueryTest_IsObstructedOverlap : public UEnvQueryTest_Trace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FAIDataProviderBoolValue)                  OverrideContextLocationXWithItemLocationX                   ___ OFFSET(get<T>, {0x2E0, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  OverrideContextLocationYWithItemLocationY                   ___ OFFSET(get<T>, {0x318, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  OverrideContextLocationZWithItemLocationZ                   ___ OFFSET(get<T>, {0x350, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_MissionGameplayTagMatch
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UFortQueryTest_MissionGameplayTagMatch : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FGameplayTagQuery)                         MissionPlacementActorTagQuery                               ___ OFFSET(get<T>, {0x1F8, 72, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTagsToMatch                                         ___ OFFSET(get<T>, {0x240, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_MissionSameMap
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UFortQueryTest_MissionSameMap : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FGameplayTagQuery)                         MissionPlacementActorTagQuery                               ___ OFFSET(get<T>, {0x1F8, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_NavGraphDistance
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_NavGraphDistance : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(UClass*)                                   DistanceTo                                                  ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_OnFlatSurface
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_OnFlatSurface : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     ToleranceZ                                                  ___ OFFSET(get<float>, {0x1FC, 4, 0, 0})
	DMember(float)                                     TraceOffsetUp                                               ___ OFFSET(get<float>, {0x200, 4, 0, 0})
	DMember(float)                                     TraceOffsetDown                                             ___ OFFSET(get<float>, {0x204, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_OnFlatSurfaceNoNavMesh
/// Size: 0x0020 (0x0001F8 - 0x000218)
class UFortQueryTest_OnFlatSurfaceNoNavMesh : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(float)                                     ZTolerance                                                  ___ OFFSET(get<float>, {0x1FC, 4, 0, 0})
	DMember(float)                                     NormalTolerance                                             ___ OFFSET(get<float>, {0x200, 4, 0, 0})
	DMember(float)                                     TraceOffset                                                 ___ OFFSET(get<float>, {0x204, 4, 0, 0})
	CMember(TArray<UClass*>)                           ActorClassesToIgnoreInTrace                                 ___ OFFSET(get<T>, {0x208, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PathfindingBatch
/// Size: 0x0008 (0x0002B8 - 0x0002C0)
class UFortQueryTest_PathfindingBatch : public UEnvQueryTest_PathfindingBatch
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FGameplayTag)                              NavFilterTag                                                ___ OFFSET(get<T>, {0x2B8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PawnHealth
/// Size: 0x0008 (0x000268 - 0x000270)
class UFortQueryTest_PawnHealth : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	DMember(bool)                                      bUsePercentHealth                                           ___ OFFSET(get<bool>, {0x268, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PawnIsDBNO
/// Size: 0x0000 (0x000268 - 0x000268)
class UFortQueryTest_PawnIsDBNO : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_PerceptionAge
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_PerceptionAge : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TEnumAsByte<ECorePerceptionTypes>)         Sense                                                       ___ OFFSET(get<T>, {0x1F8, 1, 0, 0})
	CMember(UClass*)                                   SenseClass                                                  ___ OFFSET(get<T>, {0x200, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PerceptionAll
/// Size: 0x0210 (0x000268 - 0x000478)
class UFortQueryTest_PerceptionAll : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FAIDataProviderFloatValue)                 SenseScores                                                 ___ OFFSET(get<T>, {0x268, 336, 0, 0})
	CMember(TMap<UClass*, FAIDataProviderFloatValue>)  AdditionalSenseScores                                       ___ OFFSET(get<T>, {0x3B8, 80, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MinSenseAge                                                 ___ OFFSET(get<T>, {0x408, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxSenseAge                                                 ___ OFFSET(get<T>, {0x440, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PerceptionExists
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UFortQueryTest_PerceptionExists : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TEnumAsByte<ECorePerceptionTypes>)         Sense                                                       ___ OFFSET(get<T>, {0x1F8, 1, 0, 0})
	CMember(UClass*)                                   SenseClass                                                  ___ OFFSET(get<T>, {0x200, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PickupDropper
/// Size: 0x0118 (0x000268 - 0x000380)
class UFortQueryTest_PickupDropper : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FAIDataProviderFloatValue)                 ValueConverterDroppedPickup                                 ___ OFFSET(get<T>, {0x268, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValueOtherDroppedPickupInitial                              ___ OFFSET(get<T>, {0x2A0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ValueOtherDroppedPickupFinal                                ___ OFFSET(get<T>, {0x2D8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 TimeOtherDroppedPickupFinal                                 ___ OFFSET(get<T>, {0x310, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  LerpFromInitialToFinal                                      ___ OFFSET(get<T>, {0x348, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PointInBuildingFoundation
/// Size: 0x0028 (0x0001F8 - 0x000220)
class UFortQueryTest_PointInBuildingFoundation : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(UClass*)                                   BuildingFoundationContext                                   ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(UClass*)                                   BuildingFoundationClass                                     ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(FVector)                                   BoundingBoxScale                                            ___ OFFSET(get<T>, {0x208, 24, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_PrimaryAssignment
/// Size: 0x0120 (0x000268 - 0x000388)
class UFortQueryTest_PrimaryAssignment : public UFortQueryTest_GoalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	DMember(bool)                                      bUseItemActorLocation                                       ___ OFFSET(get<bool>, {0x268, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DistanceClose                                               ___ OFFSET(get<T>, {0x270, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 DistanceFar                                                 ___ OFFSET(get<T>, {0x2A8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 PercentValueClose                                           ___ OFFSET(get<T>, {0x2E0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 PercentValueRegular                                         ___ OFFSET(get<T>, {0x318, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 PercentValueFar                                             ___ OFFSET(get<T>, {0x350, 56, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_ProjectOnNavMesh
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UFortQueryTest_ProjectOnNavMesh : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/FortniteAIServer.FortQueryTest_Random
/// Size: 0x0008 (0x0001F8 - 0x000200)
class UFortQueryTest_Random : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(bool)                                      bUseRandomSeedForAI                                         ___ OFFSET(get<bool>, {0x1F8, 1, 1, 0})
	DMember(bool)                                      bUseRandomSeedForOthers                                     ___ OFFSET(get<bool>, {0x1F8, 1, 1, 1})
};

/// Class /Script/FortniteAIServer.FortQueryTest_TowardNextAthenaSafeZone
/// Size: 0x0058 (0x0001F8 - 0x000250)
class UFortQueryTest_TowardNextAthenaSafeZone : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FAIDataProviderIntValue)                   SafeZoneIndex                                               ___ OFFSET(get<T>, {0x1F8, 56, 0, 0})
	DMember(bool)                                      bCheckAcceptanceAngleTowardNextCenter                       ___ OFFSET(get<bool>, {0x230, 1, 0, 0})
	DMember(float)                                     AcceptanceAngleTowardNextCenter                             ___ OFFSET(get<float>, {0x234, 4, 0, 0})
	CMember(TArray<int32_t>)                           ExclusionSafeZoneIndex                                      ___ OFFSET(get<T>, {0x238, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_ValidSurface
/// Size: 0x0120 (0x0001F8 - 0x000318)
class UFortQueryTest_ValidSurface : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FAIDataProviderFloatValue)                 Radius                                                      ___ OFFSET(get<T>, {0x1F8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 TraceOffsetUp                                               ___ OFFSET(get<T>, {0x230, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 TraceOffsetDown                                             ___ OFFSET(get<T>, {0x268, 56, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            TraceCollisionChannel                                       ___ OFFSET(get<T>, {0x2A0, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 FlatSurfaceToleranceZ                                       ___ OFFSET(get<T>, {0x2A8, 56, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SurfaceMaterials                                            ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	DMember(bool)                                      bAreSurfaceMaterialsValid                                   ___ OFFSET(get<bool>, {0x2F0, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ValidHitActorClasses                                        ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    InvalidHitActorClasses                                      ___ OFFSET(get<T>, {0x308, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_WithinHotfixVolumeBounds
/// Size: 0x0028 (0x0001F8 - 0x000220)
class UFortQueryTest_WithinHotfixVolumeBounds : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(UDataTable*)                               BoundsTable                                                 ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	SMember(FVector)                                   BoundsExtentBuffer                                          ___ OFFSET(get<T>, {0x200, 24, 0, 0})
	DMember(bool)                                      bXYOnly                                                     ___ OFFSET(get<bool>, {0x218, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryTest_WithinTaggedArea
/// Size: 0x0068 (0x0001F8 - 0x000260)
class UFortQueryTest_WithinTaggedArea : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x1F8, 72, 0, 0})
	SMember(FVector)                                   AreaExtentBuffer                                            ___ OFFSET(get<T>, {0x240, 24, 0, 0})
	DMember(bool)                                      bAssumeInfiniteHeightForArea                                ___ OFFSET(get<bool>, {0x258, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortGameplayInteractionSmartObjectBehaviorDefinition
/// Size: 0x0000 (0x000040 - 0x000040)
class UFortGameplayInteractionSmartObjectBehaviorDefinition : public UGameplayInteractionSmartObjectBehaviorDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_BotAmbushPlayer
/// Size: 0x0090 (0x000078 - 0x000108)
class UFortAthenaBTTask_BotAmbushPlayer : public UBTTask_Wait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(float)                                     FacingPrecision                                             ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     WeaponCooldown                                              ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bClearBlackboardOnFinished                                  ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    TargetedPlayerKeySelector                                   ___ OFFSET(get<T>, {0x88, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    MaxLocationErrorKeySelector                                 ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    MinLocationErrorKeySelector                                 ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTDecorator_BehaviorControls
/// Size: 0x0008 (0x000068 - 0x000070)
class UFortAthenaBTDecorator_BehaviorControls : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EBehaviorTreeBranches)                     BehaviorTreeBranch                                          ___ OFFSET(get<T>, {0x68, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_AimDownSight
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAthenaAIBotEvaluator_AimDownSight : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     WeaponKeyName                                               ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     ThrowableAttacksName                                        ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     UrgentMovementName                                          ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	DMember(bool)                                      bSkipTargetChecks                                           ___ OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(UFortAthenaAIBotAimingDigestedSkillSet*)   CacheAimingDigestedSkillSet                                 ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Ambush
/// Size: 0x0068 (0x0001A8 - 0x000210)
class UFortAthenaAIBotEvaluator_Ambush : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FName)                                     LastKnownPositionName                                       ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     DestinationKeyName                                          ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     MoveToDestinationKeyName                                    ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     AggressivenessName                                          ___ OFFSET(get<T>, {0x1B4, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Attack
/// Size: 0x0018 (0x0001A8 - 0x0001C0)
class UFortAthenaAIBotEvaluator_Attack : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FName)                                     WeaponKeyName                                               ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     MoveToDestinationKeyName                                    ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             ___ OFFSET(get<T>, {0x1B4, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_AvoidThreat
/// Size: 0x0028 (0x0001A8 - 0x0001D0)
class UFortAthenaAIBotEvaluator_AvoidThreat : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FName)                                     AvoidThreatKeyName                                          ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     AvoidThreatMovementStateKeyName                             ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     AvoidThreatDestinationKeyName                               ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	CMember(AActor*)                                   CurrentThreatActorAvoiding                                  ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet*) CacheEMDigestedSkillSet                             ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Bunker
/// Size: 0x00B8 (0x0001A8 - 0x000260)
class UFortAthenaAIBotEvaluator_Bunker : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FName)                                     BuildExecutionStatusKeyName                                 ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     HealingStatusKeyName                                        ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FGameplayTagContainer)                     DangerTags                                                  ___ OFFSET(get<T>, {0x1B0, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_CanMove
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_CanMove : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     CanMoveKeyName                                              ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched
/// Size: 0x0040 (0x0000A8 - 0x0000E8)
class UFortAthenaAIBotEvaluator_CharacterLaunched : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(bool)                                      bSteerInSameDirectionAsLaunchVelocity                       ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FName)                                     CharacterLaunchedExecutionStatusKeyName                     ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     SteerDirectionKeyName                                       ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FVector)                                   LastLaunchVelocity                                          ___ OFFSET(get<T>, {0xB8, 24, 0, 0})
	CMember(UFortAthenaAIBotMovementDigestedSkillSet*) CachedMovementSkillSet                                      ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Conversation
/// Size: 0x0188 (0x0000A8 - 0x000230)
class UFortAthenaAIBotEvaluator_Conversation : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FName)                                     IsInConversationStateName                                   ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(TArray<FName>)                             ExecutionStatusesToCheckedToAvoidStoppingWhenNearActorNames ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FName>)                             ExecutionStatusesToCheckForAllowToAvoidStoppingWhenNearActorNames ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FName>)                             MovementStatusesToCheckedToAvoidStoppingWhenNearActorNames  ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(bool)                                      bForceStopIfNoPlayerNearby                                  ___ OFFSET(get<bool>, {0x110, 1, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_Conversation*) ConversationRuntimeParameters                            ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(AActor*)                                   ActorToFocus                                                ___ OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Converted
/// Size: 0x0070 (0x0001A8 - 0x000218)
class UFortAthenaAIBotEvaluator_Converted : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FName)                                     ShouldMoveTowardsConverterName                              ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     ShouldTeleportTowardsConverterName                          ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     ConvertedAllowPatrolAroundName                              ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     ConvertedAllowScanAroundWhenWaitingName                     ___ OFFSET(get<T>, {0x1B4, 4, 0, 0})
	SMember(FName)                                     ConvertedDestinationName                                    ___ OFFSET(get<T>, {0x1B8, 4, 0, 0})
	SMember(FName)                                     CrouchExecutionStatusName                                   ___ OFFSET(get<T>, {0x1BC, 4, 0, 0})
	SMember(FVector)                                   TeleportLocationProjectionExtent                            ___ OFFSET(get<T>, {0x1C0, 24, 0, 0})
	SMember(FVector)                                   MovingFromLosLocationProjectionExtent                       ___ OFFSET(get<T>, {0x1D8, 24, 0, 0})
	CMember(AFortPawn*)                                ConverterPawn                                               ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_AIBotConvert*) CachedAIBotConvertParameters                             ___ OFFSET(get<T>, {0x200, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DanceOnKill
/// Size: 0x0028 (0x0000A8 - 0x0000D0)
class UFortAthenaAIBotEvaluator_DanceOnKill : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     LastKillPositionKeyName                                     ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     LastKillTimeKeyName                                         ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     LastKillWasABotKeyName                                      ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     PlayEmoteExecutionStatusKeyName                             ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	CMember(UFortAthenaAIBotEmoteDigestedSkillSet*)    CacheEmoteDigestedSkillSet                                  ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TagQuery
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UFortAthenaAIBotEvaluator_TagQuery : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0xA8, 72, 0, 0})
	CMember(UAbilitySystemComponent*)                  CachedAbilitySystemComponent                                ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DangerDetection
/// Size: 0x0050 (0x0000F8 - 0x000148)
class UFortAthenaAIBotEvaluator_DangerDetection : public UFortAthenaAIBotEvaluator_TagQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	CMember(UClass*)                                   DangerNavAreaClass                                          ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	DMember(float)                                     TimeToCheckForDangerAfterValidQuery                         ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     MaxRadiusToSearchForSafePlace                               ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	SMember(FName)                                     DangerZoneDetectedExecutionStatusName                       ___ OFFSET(get<T>, {0x118, 4, 0, 0})
	SMember(FName)                                     DangerZoneDetectedSafeLocationKeyName                       ___ OFFSET(get<T>, {0x11C, 4, 0, 0})
	CMember(UFortAthenaAIBotMovementDigestedSkillSet*) CachedMovementSkillSet                                      ___ OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(UAthenaAIServiceZoneManager*)              CacheZoneManager                                            ___ OFFSET(get<T>, {0x130, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DBNO
/// Size: 0x0058 (0x0001A8 - 0x000200)
class UFortAthenaAIBotEvaluator_DBNO : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FName)                                     DBNODestinationKeyName                                      ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	DMember(bool)                                      bAllowReachSquadmates                                       ___ OFFSET(get<bool>, {0x1AE, 1, 1, 0})
	DMember(bool)                                      bAllowReachSameFactionNPCs                                  ___ OFFSET(get<bool>, {0x1AE, 1, 1, 1})
	CMember(TArray<AFortPlayerPawnAthena*>)            AllyPawns                                                   ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
	SMember(FVector)                                   CachedCurrentDestination                                    ___ OFFSET(get<T>, {0x1C0, 24, 0, 0})
	CMember(UFortAthenaAIBotDBNODigestedSkillSet*)     DBNOSkillSet                                                ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(UFortAthenaAICoverComponent*)              CachedCoverComponent                                        ___ OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_DBNOBehavior*) DBNOBehaviorRuntimeParameters                            ___ OFFSET(get<T>, {0x1E8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_DefensiveBuilding
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortAthenaAIBotEvaluator_DefensiveBuilding : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UFortAthenaAIBotBuildingDigestedSkillSet*) CachedBuildingDigestedSkillSet                              ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UFortAthenaAIBotBuildingComponent*)        CachedBuildingComponent                                     ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Escape
/// Size: 0x0030 (0x0001A8 - 0x0001D8)
class UFortAthenaAIBotEvaluator_Escape : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FGameplayTagContainer)                     EscapeTags                                                  ___ OFFSET(get<T>, {0x1A8, 32, 0, 0})
	DMember(float)                                     CooldownBetweenAggressivenessChanges                        ___ OFFSET(get<float>, {0x1C8, 4, 0, 0})
	SMember(FName)                                     AggressivenessName                                          ___ OFFSET(get<T>, {0x1CC, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers
/// Size: 0x01E8 (0x0000A8 - 0x000290)
class UFortAthenaAIBotEvaluator_EvasiveManeuvers : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FName)                                     CrouchExecutionStatusName                                   ___ OFFSET(get<T>, {0x150, 4, 0, 0})
	SMember(FName)                                     JumpExecutionStatusName                                     ___ OFFSET(get<T>, {0x154, 4, 0, 0})
	SMember(FName)                                     JetpackStrafeExecutionStatusName                            ___ OFFSET(get<T>, {0x158, 4, 0, 0})
	SMember(FName)                                     DodgeName                                                   ___ OFFSET(get<T>, {0x15C, 4, 0, 0})
	SMember(FName)                                     DestinationKeyName                                          ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FName)                                     UrgentMoveKeyName                                           ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	DMember(bool)                                      bDoCrouching                                                ___ OFFSET(get<bool>, {0x174, 1, 0, 0})
	DMember(bool)                                      bDoDodging                                                  ___ OFFSET(get<bool>, {0x175, 1, 0, 0})
	DMember(bool)                                      bDoJumping                                                  ___ OFFSET(get<bool>, {0x176, 1, 0, 0})
	DMember(bool)                                      bDoJumpingDistanceCheck                                     ___ OFFSET(get<bool>, {0x177, 1, 0, 0})
	DMember(bool)                                      bDoJetpackStrafing                                          ___ OFFSET(get<bool>, {0x178, 1, 0, 0})
	DMember(bool)                                      bDoJetpackStrafingDistanceCheck                             ___ OFFSET(get<bool>, {0x179, 1, 0, 0})
	DMember(float)                                     JetpackStrafingRequiredFuelPercent                          ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     JetpackStrafeNavPadding                                     ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredTagQuery                                            ___ OFFSET(get<T>, {0x188, 72, 0, 0})
	SMember(FGameplayTagQuery)                         JetpackRequiredTagQuery                                     ___ OFFSET(get<T>, {0x1D0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         JumpRequiredTagQuery                                        ___ OFFSET(get<T>, {0x218, 72, 0, 0})
	CMember(UClass*)                                   ForcedPerkClass                                             ___ OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet*) CacheEMDigestedSkillSet                             ___ OFFSET(get<T>, {0x268, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Flanking
/// Size: 0x0078 (0x0001A8 - 0x000220)
class UFortAthenaAIBotEvaluator_Flanking : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(AFortAIDirector*)                          CachedAIDirector                                            ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(UFortAthenaAIBotRangeAttackDigestedSkillSet*) CachedRangeAttackDigestedSkillSet                        ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	SMember(FName)                                     FlankingExecutionStatusKeyName                              ___ OFFSET(get<T>, {0x1B8, 4, 0, 0})
	SMember(FName)                                     FlankingMovementStateKeyName                                ___ OFFSET(get<T>, {0x1BC, 4, 0, 0})
	SMember(FName)                                     FlankingDestinationKeyName                                  ___ OFFSET(get<T>, {0x1C0, 4, 0, 0})
	CMember(TArray<FFlankingLocationInfo>)             LocationsToEvaluate                                         ___ OFFSET(get<T>, {0x1D0, 16, 0, 0})
	CMember(TArray<FFlankingLocationInfo>)             BestLocations                                               ___ OFFSET(get<T>, {0x1E0, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ActorsInArea                                                ___ OFFSET(get<T>, {0x1F0, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Flee
/// Size: 0x0038 (0x0001A8 - 0x0001E0)
class UFortAthenaAIBotEvaluator_Flee : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	DMember(float)                                     MinDistanceFromTarget                                       ___ OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     MinValidDistanceForFleeLocation                             ___ OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(float)                                     FleeDistance                                                ___ OFFSET(get<float>, {0x1B0, 4, 0, 0})
	DMember(float)                                     MaxDistanceFromTargetWhenFleeing                            ___ OFFSET(get<float>, {0x1B4, 4, 0, 0})
	DMember(float)                                     MinDistanceHysteresisWhenChangingTarget                     ___ OFFSET(get<float>, {0x1B8, 4, 0, 0})
	SMember(FName)                                     FleeKeyName                                                 ___ OFFSET(get<T>, {0x1BC, 4, 0, 0})
	SMember(FName)                                     FleeMovementStateKeyName                                    ___ OFFSET(get<T>, {0x1C0, 4, 0, 0})
	SMember(FName)                                     FleeDestinationKeyName                                      ___ OFFSET(get<T>, {0x1C4, 4, 0, 0})
	SMember(FName)                                     FleeActorKeyName                                            ___ OFFSET(get<T>, {0x1C8, 4, 0, 0})
	CMember(AActor*)                                   CurrentActorFleeingFrom                                     ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_FreeFalling
/// Size: 0x0108 (0x0000A8 - 0x0001B0)
class UFortAthenaAIBotEvaluator_FreeFalling : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FName)                                     DiveExecutionStatusKeyName                                  ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     DiveDestinationKeyName                                      ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     GlideExecutionStatusKeyName                                 ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     GlideDestinationKeyName                                     ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     JumpOffBusDestinationName                                   ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bRandomlySelectFreeFallingMode                              ___ OFFSET(get<bool>, {0xC6, 1, 0, 0})
	SMember(FScalableFloat)                            IdleWeight                                                  ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            RandomWeight                                                ___ OFFSET(get<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            TowardNearestAllyWeight                                     ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	CMember(EFreeFallingMode)                          FreeFallingMode                                             ___ OFFSET(get<T>, {0x140, 1, 0, 0})
	DMember(float)                                     MaxOffsetRangeFromNearestAlly                               ___ OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(bool)                                      bShouldRecomputeDestinationWhenTowardNearestAlly            ___ OFFSET(get<bool>, {0x148, 1, 1, 0})
	DMember(bool)                                      bShouldSearchAllyInSquad                                    ___ OFFSET(get<bool>, {0x148, 1, 1, 1})
	DMember(bool)                                      bShouldSearchAllyInTeam                                     ___ OFFSET(get<bool>, {0x148, 1, 1, 2})
	DMember(bool)                                      bGlideAllowed                                               ___ OFFSET(get<bool>, {0x148, 1, 1, 3})
	DMember(float)                                     SkyTubeDivingStuckTimeThreshold                             ___ OFFSET(get<float>, {0x14C, 4, 0, 0})
	CMember(AFortPlayerStateAthena*)                   NearestAlly                                                 ___ OFFSET(get<T>, {0x170, 8, 0, 0})
	SMember(FVector)                                   CachedLatestDestination                                     ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	CMember(UFortAthenaAIBotMovementDigestedSkillSet*) CacheMovementDigestedSkillSet                               ___ OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(AFortSkyTube*)                             CachedSkyTube                                               ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Ground
/// Size: 0x0088 (0x0000A8 - 0x000130)
class UFortAthenaAIBotEvaluator_Ground : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FVector)                                   SurfaceTypeRaycastDir                                       ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_Behavior*)  CachedBehaviorRuntimeParameters                             ___ OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_HandleFocusing
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class UFortAthenaAIBotEvaluator_HandleFocusing : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     TargetActorName                                             ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     InteractActorName                                           ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     TargetLocationName                                          ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     FocusActorName                                              ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     FocalPointName                                              ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     WeaponFireName                                              ___ OFFSET(get<T>, {0xBC, 4, 0, 0})
	SMember(FName)                                     RangeAttackIsReadyToFireName                                ___ OFFSET(get<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeName                                      ___ OFFSET(get<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     LastKnownPositionName                                       ___ OFFSET(get<T>, {0xC8, 4, 0, 0})
	SMember(FName)                                     TacticalSprintExecutionStatusName                           ___ OFFSET(get<T>, {0xCC, 4, 0, 0})
	CMember(EFocusingBehavior)                         FocusingBehavior                                            ___ OFFSET(get<T>, {0xE4, 1, 0, 0})
	CMember(EFocusingBehavior)                         NoRangedWeaponFocusBehavior                                 ___ OFFSET(get<T>, {0xE5, 1, 0, 0})
	DMember(bool)                                      bPrioritizeThreatOverCurrentTarget                          ___ OFFSET(get<bool>, {0xE6, 1, 0, 0})
	DMember(bool)                                      bUseTargetActorKeyAsFocusTarget                             ___ OFFSET(get<bool>, {0xE7, 1, 0, 0})
	DMember(bool)                                      bFocusOnTargetLocation                                      ___ OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(float)                                     AmbushMaxLKPLookAtAngleDegree                               ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(bool)                                      bStopFocusingWhenMoving                                     ___ OFFSET(get<bool>, {0xF0, 1, 0, 0})
	DMember(float)                                     ResumeFocusingWhenMovingDist                                ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     StopFocusingWhenMovingDist                                  ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(bool)                                      bResumeFocusWhileSliding                                    ___ OFFSET(get<bool>, {0xFC, 1, 0, 0})
	CMember(UFortAthenaAIBotAimingDigestedSkillSet*)   CacheAimingDigestedSkillSet                                 ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(UFortAthenaAIBotMovementDigestedSkillSet*) CacheMovementDigestedSkillSet                               ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(AActor*)                                   LastTargetedThreat                                          ___ OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(AActor*)                                   FocusActor                                                  ___ OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Heal
/// Size: 0x0070 (0x0000A8 - 0x000118)
class UFortAthenaAIBotEvaluator_Heal : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FName)                                     HealingObjectKeyName                                        ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredTagQuery                                            ___ OFFSET(get<T>, {0xB8, 72, 0, 0})
	DMember(bool)                                      bAllowEvaluationRetry                                       ___ OFFSET(get<bool>, {0x100, 1, 0, 0})
	CMember(UFortAthenaAIBotHealingDigestedSkillSet*)  HealingSkillSet                                             ___ OFFSET(get<T>, {0x108, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_HitAndRun
/// Size: 0x00F8 (0x0001A8 - 0x0002A0)
class UFortAthenaAIBotEvaluator_HitAndRun : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FScalableFloat)                            AttackDurationBeforeEvade                                   ___ OFFSET(get<T>, {0x1A8, 40, 0, 0})
	SMember(FScalableFloat)                            MeleeAttackMaxDistToEvade                                   ___ OFFSET(get<T>, {0x1D0, 40, 0, 0})
	SMember(FScalableFloat)                            ClampEvadeDistanceEnable                                    ___ OFFSET(get<T>, {0x1F8, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistanceToEvade                                          ___ OFFSET(get<T>, {0x220, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDistanceToEvade                                          ___ OFFSET(get<T>, {0x248, 40, 0, 0})
	SMember(FName)                                     EvadeKeyName                                                ___ OFFSET(get<T>, {0x270, 4, 0, 0})
	SMember(FName)                                     EvadeMovementStateKeyName                                   ___ OFFSET(get<T>, {0x274, 4, 0, 0})
	SMember(FName)                                     EvadeDestinationKeyName                                     ___ OFFSET(get<T>, {0x278, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeName                                      ___ OFFSET(get<T>, {0x27C, 4, 0, 0})
	DMember(float)                                     MeleeAttackMaxDistToEvadeSqr                                ___ OFFSET(get<float>, {0x290, 4, 0, 0})
	DMember(float)                                     MaxDistanceToEvadeSqr                                       ___ OFFSET(get<float>, {0x294, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_HolsterWeapon
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_HolsterWeapon : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UFortAthenaAIRuntimeParameters_NPCBehavior*) CachedNPCBehaviorParameters                               ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Investigate
/// Size: 0x00C0 (0x0001A8 - 0x000268)
class UFortAthenaAIBotEvaluator_Investigate : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FName)                                     LastKnownPositionName                                       ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     DestinationKeyName                                          ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     MoveToDestinationKeyName                                    ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     AggressivenessName                                          ___ OFFSET(get<T>, {0x1B4, 4, 0, 0})
	SMember(FName)                                     CautiousKeyName                                             ___ OFFSET(get<T>, {0x1B8, 4, 0, 0})
	SMember(FName)                                     AlertLevelName                                              ___ OFFSET(get<T>, {0x1BC, 4, 0, 0})
	CMember(UClass*)                                   SearchQueryFilterClass                                      ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(UFortAthenaAIBotAimingDigestedSkillSet*)   CacheAimingDigestedSkillSet                                 ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(UFortAthenaAIBotAttackingDigestedSkillSet*) CacheAttackingDigestedSkillSet                             ___ OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(UFortAthenaAIBotUnstuckDigestedSkillSet*)  CachedUnstuckSkillSet                                       ___ OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(AActor*)                                   InvestigatingSupportingActor                                ___ OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(ABuildingSMActor*)                         UnderminingBuildingActor                                    ___ OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(AActor*)                                   ExcludeReachingTarget                                       ___ OFFSET(get<T>, {0x248, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_JumpOffBus
/// Size: 0x0048 (0x0000A8 - 0x0000F0)
class UFortAthenaAIBotEvaluator_JumpOffBus : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FName)                                     JumpOffBusDestinationName                                   ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     JumpOffBusDestinationVolumeKeyName                          ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	CMember(AFortPoiVolume*)                           BusDroppingVolume                                           ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(AFortGameStateAthena*)                     CachedAthenaGameState                                       ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(UFortAthenaAIBotMovementDigestedSkillSet*) CacheMovementDigestedSkillSet                               ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_MeleeAttack
/// Size: 0x0028 (0x0001C0 - 0x0001E8)
class UFortAthenaAIBotEvaluator_MeleeAttack : public UFortAthenaAIBotEvaluator_Attack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FName)                                     WeaponTriggerMeleeName                                      ___ OFFSET(get<T>, {0x1C4, 4, 0, 0})
	SMember(FName)                                     ThrowableAttacksAllowedName                                 ___ OFFSET(get<T>, {0x1C8, 4, 0, 0})
	SMember(FName)                                     TraversalBlockMeleeAttackName                               ___ OFFSET(get<T>, {0x1CC, 4, 0, 0})
	CMember(UFortAthenaAIBotAttackingDigestedSkillSet*) AttackingSkillSet                                          ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Observe
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortAthenaAIBotEvaluator_Observe : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FName)                                     AggressivenessName                                          ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     ObserveDestinationKeyName                                   ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bContinueMovementOnStart                                    ___ OFFSET(get<bool>, {0xB4, 1, 0, 0})
	DMember(float)                                     MaxMovementDuration                                         ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PathExists
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortAthenaAIBotEvaluator_PathExists : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FName)                                     PathExistsKeyName                                           ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     GoalKeyName                                                 ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	DMember(float)                                     AcceptableRadius                                            ___ OFFSET(get<float>, {0xB4, 4, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TEnumAsByte<EPathTestQueryType>)           PathQueryType                                               ___ OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bProjectGoalLocation                                        ___ OFFSET(get<bool>, {0xC4, 1, 1, 0})
	DMember(bool)                                      bReachTestIncludesAgentRadius                               ___ OFFSET(get<bool>, {0xC4, 1, 1, 1})
	DMember(bool)                                      bReachTestIncludesGoalRadius                                ___ OFFSET(get<bool>, {0xC4, 1, 1, 2})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PatrolAround
/// Size: 0x0090 (0x0001A8 - 0x000238)
class UFortAthenaAIBotEvaluator_PatrolAround : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  ___ OFFSET(get<T>, {0x1A8, 72, 0, 0})
	CMember(UClass*)                                   NavigationQueryFilterClass                                  ___ OFFSET(get<T>, {0x1F0, 8, 0, 0})
	DMember(bool)                                      bFallbackToPointWithNoCustomNavigationQueryFilter           ___ OFFSET(get<bool>, {0x1F8, 1, 0, 0})
	SMember(FName)                                     PatrolDestinationName                                       ___ OFFSET(get<T>, {0x1FC, 4, 0, 0})
	SMember(FName)                                     PatrolExecutionStatusName                                   ___ OFFSET(get<T>, {0x200, 4, 0, 0})
	SMember(FName)                                     PatrolMovementStateName                                     ___ OFFSET(get<T>, {0x204, 4, 0, 0})
	SMember(FName)                                     BestTargetActorName                                         ___ OFFSET(get<T>, {0x208, 4, 0, 0})
	CMember(AFortGameModeAthena*)                      CacheAthenaGameMode                                         ___ OFFSET(get<T>, {0x210, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PlayEmote
/// Size: 0x0020 (0x0001A8 - 0x0001C8)
class UFortAthenaAIBotEvaluator_PlayEmote : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FName)                                     PlayEmoteExecutionStatusKeyName                             ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     PlayEmoteDestinationKeyName                                 ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	CMember(AActor*)                                   ExcludeReachingTarget                                       ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_PropagateAwareness
/// Size: 0x0088 (0x0000A8 - 0x000130)
class UFortAthenaAIBotEvaluator_PropagateAwareness : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FGameplayTagQuery)                         AwarenessTagQuery                                           ___ OFFSET(get<T>, {0xA8, 72, 0, 0})
	CMember(UClass*)                                   AwarenessGameplayEffectClass                                ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<AFortPlayerPawnAthena*>)            AwareAllyPawns                                              ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<AFortPlayerPawnAthena*>)            AlreadyTestedPawns                                          ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UFortAthenaAIBotPropagateAwarenessDigestedSkillSet*) PropagateAwarenessSkillSet                        ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_BehaviorTreeControl*) BehaviorControlsRuntimeParameters                 ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_AffiliationBase*) AffiliationRuntimeParameters                          ___ OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_RangeAttack
/// Size: 0x0150 (0x0001C0 - 0x000310)
class UFortAthenaAIBotEvaluator_RangeAttack : public UFortAthenaAIBotEvaluator_Attack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FName)                                     WeaponReloadName                                            ___ OFFSET(get<T>, {0x1D8, 4, 0, 0})
	SMember(FName)                                     WeaponFireName                                              ___ OFFSET(get<T>, {0x1DC, 4, 0, 0})
	SMember(FName)                                     RangeAttackIsReadyToFireName                                ___ OFFSET(get<T>, {0x1E0, 4, 0, 0})
	SMember(FName)                                     WeaponTargetingName                                         ___ OFFSET(get<T>, {0x1E4, 4, 0, 0})
	SMember(FName)                                     AggressivenessName                                          ___ OFFSET(get<T>, {0x1E8, 4, 0, 0})
	SMember(FName)                                     HasLoSOnThreatName                                          ___ OFFSET(get<T>, {0x1EC, 4, 0, 0})
	SMember(FName)                                     UrgentMovementKeyName                                       ___ OFFSET(get<T>, {0x1F0, 4, 0, 0})
	DMember(bool)                                      bAlwaysAllowTargetingEvaluation                             ___ OFFSET(get<bool>, {0x202, 1, 0, 0})
	DMember(bool)                                      bSkipADSEvaluation                                          ___ OFFSET(get<bool>, {0x203, 1, 0, 0})
	DMember(bool)                                      bConsiderLoF                                                ___ OFFSET(get<bool>, {0x204, 1, 0, 0})
	DMember(float)                                     RangeReachHysteresisRatio                                   ___ OFFSET(get<float>, {0x208, 4, 0, 0})
	CMember(UFortAthenaAIBotRangeAttackDigestedSkillSet*) CacheRangeAttackDigestedSkillSet                         ___ OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(UFortAthenaAIBotAimingDigestedSkillSet*)   CacheAimingDigestedSkillSet                                 ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(UFortAthenaAIBotPerceptionDigestedSkillSet*) CachePerceptionDigestedSkillSet                           ___ OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(UFortAthenaAIBotAttackingDigestedSkillSet*) CacheAttackingDigestedSkillSet                             ___ OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(TWeakObjectPtr<UAthenaAIServiceZoneManager*>) CacheZoneManager                                         ___ OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(TWeakObjectPtr<UAthenaAIServiceCover*>)    CachedAIServiceCover                                        ___ OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(AActor*)                                   ExcludeReachingTarget                                       ___ OFFSET(get<T>, {0x258, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReachBeacon
/// Size: 0x0020 (0x0001A8 - 0x0001C8)
class UFortAthenaAIBotEvaluator_ReachBeacon : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FName)                                     ReachBeaconStatusKeyName                                    ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     ReachBeaconMovementStateKeyName                             ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     ReachBeaconTargetKeyName                                    ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaBeaconComponent*>) CurrentBeacon                                             ___ OFFSET(get<T>, {0x1BC, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_RecoverLineOfSight
/// Size: 0x0068 (0x0001A8 - 0x000210)
class UFortAthenaAIBotEvaluator_RecoverLineOfSight : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FScalableFloat)                            RecoveringLineOfSightMaxDuration                            ___ OFFSET(get<T>, {0x1A8, 40, 0, 0})
	CMember(TArray<FName>)                             ExecutionStatusToListenKeyNames                             ___ OFFSET(get<T>, {0x1D0, 16, 0, 0})
	SMember(FName)                                     RecoverLineOfSightExecutionStatusKeyName                    ___ OFFSET(get<T>, {0x1E0, 4, 0, 0})
	SMember(FName)                                     RecoverLineOfSightMovementStateKeyName                      ___ OFFSET(get<T>, {0x1E4, 4, 0, 0})
	SMember(FName)                                     RecoverLineOfSightDestinationKeyName                        ___ OFFSET(get<T>, {0x1E8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ReloadWeapon
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_ReloadWeapon : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     WeaponKeyName                                               ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bCanReloadWeaponsInInventory                                ___ OFFSET(get<bool>, {0xAE, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Retreat
/// Size: 0x0028 (0x0001A8 - 0x0001D0)
class UFortAthenaAIBotEvaluator_Retreat : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FName)                                     RetreatDestinationName                                      ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	CMember(UFortAthenaAIBotAttackingDigestedSkillSet*) CacheAttackingDigestedSkillSet                             ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(UFortAthenaAICoverComponent*)              CachedCoverComponent                                        ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Revive
/// Size: 0x0068 (0x0001A8 - 0x000210)
class UFortAthenaAIBotEvaluator_Revive : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FScalableFloat)                            LastReviveTargetExpiration                                  ___ OFFSET(get<T>, {0x1A8, 40, 0, 0})
	SMember(FName)                                     ReviveTargetKeyName                                         ___ OFFSET(get<T>, {0x1D0, 4, 0, 0})
	SMember(FName)                                     ReviveLastTargetKeyName                                     ___ OFFSET(get<T>, {0x1D4, 4, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_ReviveBehavior*) ReviveBehaviorRuntimeParameters                        ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    CurrentReviveTarget                                         ___ OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(TArray<AFortPlayerPawnAthena*>)            DBNOAllyPawns                                               ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	CMember(UFortAthenaAIBotReviveDigestedSkillSet*)   ReviveSkillSet                                              ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel
/// Size: 0x0078 (0x0000F8 - 0x000170)
class UFortAthenaAIBotEvaluator_SandTunnel : public UFortAthenaAIBotEvaluator_TagQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FName)                                     JumpExecutionStatusName                                     ___ OFFSET(get<T>, {0xF8, 4, 0, 0})
	SMember(FName)                                     LootInteractionExecutionStatusName                          ___ OFFSET(get<T>, {0xFC, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeName                                      ___ OFFSET(get<T>, {0x100, 4, 0, 0})
	SMember(FName)                                     WeaponFireName                                              ___ OFFSET(get<T>, {0x104, 4, 0, 0})
	SMember(FGameplayTagQuery)                         BuriedTagQuery                                              ___ OFFSET(get<T>, {0x110, 72, 0, 0})
	CMember(UFortAthenaAIBotMovementDigestedSkillSet*) CacheMovementDigestedSkillSet                               ___ OFFSET(get<T>, {0x158, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI
/// Size: 0x0078 (0x0001A8 - 0x000220)
class UFortAthenaAIBotEvaluator_SelectNextDynamicPOI : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FName)                                     DynamicPOIExecutionStatusKeyName                            ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     DynamicPOILocationKeyName                                   ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	CMember(AFortTeamInfoAthena*)                      CachedTeamInfo                                              ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(UFortGameStateComponent_BattleRoyaleGamePhaseLogic*) CachedGamePhaseLogic                              ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	SMember(FTimerHandle)                              NextSearchTimerHandle                                       ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	CMember(TArray<FFailedToReachPOI>)                 FailedBotPOIList                                            ___ OFFSET(get<T>, {0x208, 16, 0, 0})
	DMember(int32_t)                                   CachedSelectedBotPOIID                                      ___ OFFSET(get<int32_t>, {0x218, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextPOI
/// Size: 0x0038 (0x0001A8 - 0x0001E0)
class UFortAthenaAIBotEvaluator_SelectNextPOI : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FName)                                     NextPOIKeyName                                              ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     MarkerLocationKeyName                                       ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	CMember(AFortPoiVolume*)                           StartingGroundPOI                                           ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	DMember(bool)                                      bCheckForStartingGroundPOI                                  ___ OFFSET(get<bool>, {0x1C0, 1, 0, 0})
	DMember(float)                                     CurrentPOICompletionTime                                    ___ OFFSET(get<float>, {0x1C4, 4, 0, 0})
	DMember(float)                                     DurationInsideCurrentPOI                                    ___ OFFSET(get<float>, {0x1C8, 4, 0, 0})
	CMember(AFortTeamInfoAthena*)                      CachedTeamInfo                                              ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(UFortAthenaAIBotLootingDigestedSkillSet*)  CachedLootingSkillSet                                       ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SelectVehicle
/// Size: 0x00E0 (0x0001A8 - 0x000288)
class UFortAthenaAIBotEvaluator_SelectVehicle : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	SMember(FName)                                     VehicleDestinationKeyName                                   ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     SelectVehicleMovementStateKeyName                           ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     SelectVehicleStatusKeyName                                  ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     SelectedVehicleKeyName                                      ___ OFFSET(get<T>, {0x1B4, 4, 0, 0})
	SMember(FScalableFloat)                            Enabled                                                     ___ OFFSET(get<T>, {0x1C0, 40, 0, 0})
	DMember(float)                                     VehicleSearchRadius                                         ___ OFFSET(get<float>, {0x1E8, 4, 0, 0})
	DMember(bool)                                      bCanEnterOnlyWithHisConverter                               ___ OFFSET(get<bool>, {0x1EC, 1, 0, 0})
	DMember(bool)                                      bCanEnterAsDriver                                           ___ OFFSET(get<bool>, {0x1ED, 1, 0, 0})
	DMember(bool)                                      bCanEnterVehiclesInWater                                    ___ OFFSET(get<bool>, {0x1EE, 1, 0, 0})
	DMember(bool)                                      bCanEnterOutOfFuelVehicles                                  ___ OFFSET(get<bool>, {0x1EF, 1, 0, 0})
	DMember(bool)                                      bCanEnterWithPlayerDriver                                   ___ OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	DMember(bool)                                      bCanEnterOnlyMatchingPatrols                                ___ OFFSET(get<bool>, {0x1F1, 1, 0, 0})
	SMember(FGameplayTagQuery)                         VehiclesFilterTagQuery                                      ___ OFFSET(get<T>, {0x1F8, 72, 0, 0})
	SMember(FGameplayTagQuery)                         SeatsFilterTagQuery                                         ___ OFFSET(get<T>, {0x240, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjects
/// Size: 0x0078 (0x0001A8 - 0x000220)
class UFortAthenaAIBotEvaluator_SmartObjects : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(UFortAthenaAIRuntimeParameters_SmartObjectBase*) SmartObjectRuntimeParameters                          ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(USmartObjectSubsystem*)                    SmartObjectSubsystem                                        ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	DMember(bool)                                      bEvaluateSOValidityAfterChosen                              ___ OFFSET(get<bool>, {0x1C0, 1, 0, 0})
	DMember(bool)                                      bEnableEntryLocationsSupport                                ___ OFFSET(get<bool>, {0x1C1, 1, 0, 0})
	CMember(UCurveFloat*)                              DistanceToWeightCurveForSlotPicking                         ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(UClass*)                                   OverridenFilterClassForEntryPoints                          ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(TArray<FName>)                             ExecutionStatusesToCheckForAllowToAvoidGoingToSOKeyNames    ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	SMember(FName)                                     SmartObjectExecutionStatusKeyName                           ___ OFFSET(get<T>, {0x1F8, 4, 0, 0})
	SMember(FName)                                     SmartObjectMovementStateKeyName                             ___ OFFSET(get<T>, {0x1FC, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationKeyName                               ___ OFFSET(get<T>, {0x200, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationRotationKeyName                       ___ OFFSET(get<T>, {0x204, 4, 0, 0})
	SMember(FName)                                     SmartObjectShouldMoveKeyName                                ___ OFFSET(get<T>, {0x208, 4, 0, 0})
	SMember(FName)                                     SmartObjectUrgencyKeyName                                   ___ OFFSET(get<T>, {0x20C, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Sprinting
/// Size: 0x0080 (0x0000A8 - 0x000128)
class UFortAthenaAIBotEvaluator_Sprinting : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FName)                                     AllowSprintKeyName                                          ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     AllowSlideKeyName                                           ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     JumpExecutionStatusName                                     ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     TacticalSprintExecutionStatusName                           ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     SlideExecutionStatusName                                    ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     UrgentMovementKeyName                                       ___ OFFSET(get<T>, {0xBC, 4, 0, 0})
	SMember(FName)                                     RangeAttackExecutionStatusName                              ___ OFFSET(get<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     MeleeAttackExecutionStatusName                              ___ OFFSET(get<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     ThrowableAttackExecutionStatusName                          ___ OFFSET(get<T>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bSprintOnlyInWater                                          ___ OFFSET(get<bool>, {0xDE, 1, 0, 0})
	DMember(bool)                                      bSprintOnlyInUrgentMode                                     ___ OFFSET(get<bool>, {0xDF, 1, 0, 0})
	CMember(UFortAthenaAIBotMovementDigestedSkillSet*) MovementSkillSet                                            ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UFortAthenaAIBotAimingDigestedSkillSet*)   AimingSkillSet                                              ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(float)                                     TacticalSprintTriggerChance                                 ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     TacticalSprintTriggerChanceInUrgentMovement                 ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     TacticalSprintJumpTriggerChance                             ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_StealWall
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class UFortAthenaAIBotEvaluator_StealWall : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     StealWallBuildTypeName                                      ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     StealWallBuildGridCoordName                                 ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	CMember(UFortAthenaAIBotBuildingDigestedSkillSet*) CacheBuildingDigestedSkillSet                               ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(ABuildingActor*)                           CurrentBuildingTarget                                       ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_StepBack
/// Size: 0x0030 (0x0001A8 - 0x0001D8)
class UFortAthenaAIBotEvaluator_StepBack : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(UFortAthenaAIBotRangeAttackDigestedSkillSet*) CachedRangeAttackDigestedSkillSet                        ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(UAthenaAIServiceCover*)                    CachedAIServiceCover                                        ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	SMember(FName)                                     StepBackExecutionStatusKeyName                              ___ OFFSET(get<T>, {0x1C0, 4, 0, 0})
	SMember(FName)                                     StepBackMovementStateKeyName                                ___ OFFSET(get<T>, {0x1C4, 4, 0, 0})
	SMember(FName)                                     StepBackDestinationKeyName                                  ___ OFFSET(get<T>, {0x1C8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Storm
/// Size: 0x0060 (0x0001A8 - 0x000208)
class UFortAthenaAIBotEvaluator_Storm : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FName)                                     StormDestinationName                                        ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	CMember(AFortGameModeAthena*)                      CacheAthenaGameMode                                         ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(UBehaviorTreeComponent*)                   CachedBTComp                                                ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(UFortGameStateComponent_BattleRoyaleGamePhaseLogic*) CachedGamePhaseLogic                              ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TagQueryToBBKey
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortAthenaAIBotEvaluator_TagQueryToBBKey : public UFortAthenaAIBotEvaluator_TagQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     LinkedBBKeyName                                             ___ OFFSET(get<T>, {0xF8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TakeCover
/// Size: 0x0090 (0x0001A8 - 0x000238)
class UFortAthenaAIBotEvaluator_TakeCover : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(UFortAthenaAIBotRangeAttackDigestedSkillSet*) CacheRangeAttackDigestedSkillSet                         ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(UFortAthenaAIBotAimingDigestedSkillSet*)   CacheAimingDigestedSkillSet                                 ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(UAthenaAIServiceCover*)                    CachedAIServiceCover                                        ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	SMember(FName)                                     DestinationKeyName                                          ___ OFFSET(get<T>, {0x1C0, 4, 0, 0})
	SMember(FName)                                     MoveToDestinationKeyName                                    ___ OFFSET(get<T>, {0x1C4, 4, 0, 0})
	SMember(FName)                                     HealingStatusKeyName                                        ___ OFFSET(get<T>, {0x1C8, 4, 0, 0})
	SMember(FName)                                     WeaponFireName                                              ___ OFFSET(get<T>, {0x1CC, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             ___ OFFSET(get<T>, {0x1D0, 4, 0, 0})
	SMember(FName)                                     BunkerStatusKeyName                                         ___ OFFSET(get<T>, {0x1D4, 4, 0, 0})
	CMember(ABuildingActor*)                           CachedCoverBuildingActor                                    ___ OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(TArray<ABuildingActor*>)                   ExcludedBuildingActors                                      ___ OFFSET(get<T>, {0x1F0, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_ThrowableAttack
/// Size: 0x0050 (0x0001C0 - 0x000210)
class UFortAthenaAIBotEvaluator_ThrowableAttack : public UFortAthenaAIBotEvaluator_Attack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FName)                                     WeaponTriggerThrowableName                                  ___ OFFSET(get<T>, {0x1C0, 4, 0, 0})
	SMember(FName)                                     ThrowableAttackIsReadyToThrowName                           ___ OFFSET(get<T>, {0x1C4, 4, 0, 0})
	CMember(UFortAthenaAIBotAttackingDigestedSkillSet*) AttackingSkillSet                                          ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(UFortAthenaAIBotRangeAttackDigestedSkillSet*) RangeAttackSkillSet                                      ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(UFortAthenaAIBotAimingDigestedSkillSet*)   AimingSkillSet                                              ___ OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(UFortWorldItem*)                           ChosenWeapon                                                ___ OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(AFortPawn*)                                CachedFortPawn                                              ___ OFFSET(get<T>, {0x1F0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_TrapOnPathDetected
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAthenaAIBotEvaluator_TrapOnPathDetected : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(UFortAthenaAIBotAimingDigestedSkillSet*)   CacheAimingDigestedSkillSet                                 ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FName)                                     TrapOnPathKeyName                                           ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     TrapActorOnPathKeyName                                      ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     AlertLevelName                                              ___ OFFSET(get<T>, {0xBC, 4, 0, 0})
	SMember(FName)                                     RangeAttackExecutionStatusName                              ___ OFFSET(get<T>, {0xC0, 4, 0, 0})
	CMember(ABuildingTrap*)                            CurrentTrapTarget                                           ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleLeaveSeat
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_VehicleLeaveSeat : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     LeaveSeatStatusKeyName                                      ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bLeaveSeatWhenPlayerInVehicle                               ___ OFFSET(get<bool>, {0xAE, 1, 0, 0})
	DMember(bool)                                      bLeaveSeatWhenConverterLeave                                ___ OFFSET(get<bool>, {0xAF, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_VehicleSwitchSeat
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_VehicleSwitchSeat : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     SwitchSeatStatusKeyName                                     ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bSwitchToEmptyDriverSeat                                    ___ OFFSET(get<bool>, {0xAE, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_WaitForPassengers
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortAthenaAIBotEvaluator_WaitForPassengers : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     WaitForPassengersStatusKeyName                              ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Warmup
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAthenaAIBotEvaluator_Warmup : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     WarmupPlayEmoteExecutionStatusKeyName                       ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     WarmupLootAndShootExecutionStatusKeyName                    ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     WarmupIdleExecutionStatusKeyName                            ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	CMember(UFortAthenaAIBotWarmupDigestedSkillSet*)   CacheWarmupDigestedSkillSet                                 ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_WeaponSelection
/// Size: 0x0038 (0x0000A8 - 0x0000E0)
class UFortAthenaAIBotEvaluator_WeaponSelection : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FName)                                     ThrowableAttackIsReadyToThrowName                           ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     WeaponKeyName                                               ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     TargetActorName                                             ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	CMember(UFortAthenaAIBotRangeAttackDigestedSkillSet*) CacheRangeAttackDigestedSkillSet                         ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(UFortAthenaAIBotAttackingDigestedSkillSet*) CacheAttackingDigestedSkillSet                             ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UFortAthenaAIBotAimingDigestedSkillSet*)   CacheAimingDigestedSkillSet                                 ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIBotEvaluator_Zipline
/// Size: 0x00A0 (0x0001A8 - 0x000248)
class UFortAthenaAIBotEvaluator_Zipline : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	SMember(FName)                                     CurrentDestinationKeyName                                   ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     ZiplineTargetKeyName                                        ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     LastZiplineUsedName                                         ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     ZiplineMoveExecutionStatusKeyName                           ___ OFFSET(get<T>, {0x1B4, 4, 0, 0})
	SMember(FName)                                     ZiplineEntryLocationKeyName                                 ___ OFFSET(get<T>, {0x1B8, 4, 0, 0})
	SMember(FName)                                     ZiplineExitLocationKeyName                                  ___ OFFSET(get<T>, {0x1BC, 4, 0, 0})
	SMember(FName)                                     ZiplineLastUsageTimeName                                    ___ OFFSET(get<T>, {0x1C0, 4, 0, 0})
	SMember(FName)                                     ZiplineUsageExecutionStatusName                             ___ OFFSET(get<T>, {0x1C4, 4, 0, 0})
	SMember(FScalableFloat)                            WaitTimeBetweenZiplineRandomChoices                         ___ OFFSET(get<T>, {0x1C8, 40, 0, 0})
	SMember(FScalableFloat)                            ProbabilityToUseZipline                                     ___ OFFSET(get<T>, {0x1F0, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UFortAthenaAIEvaluator_BlueprintBase : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(bool)                                      bBlockWeaponActions                                         ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bGameplayAbilityEvaluator                                   ___ OFFSET(get<bool>, {0xA9, 1, 0, 0})
	SMember(FGameplayAbilityEvaluatorModule)           GameplayAbilityEvaluatorModule                              ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_DormantUntilPhase
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UFortAthenaAIEvaluator_DormantUntilPhase : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FScalableFloat)                            bIsEnabled                                                  ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	DMember(bool)                                      bDisabledInCreative                                         ___ OFFSET(get<bool>, {0xC8, 1, 0, 0})
	CMember(EAthenaGamePhaseStep)                      RequiredGamePhaseStep                                       ___ OFFSET(get<T>, {0xC9, 1, 0, 0})
	SMember(FScalableFloat)                            DelayAfterPhase                                             ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            RandomDeviationAfterPhase                                   ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_FleeEnvDanger
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UFortAthenaAIEvaluator_FleeEnvDanger : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     MaximumCheckDistance                                        ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     AdditionalFleeDistance                                      ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	SMember(FName)                                     EnvironmentalDangerExecutionStatusName                      ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FName)                                     EnvironmentalDangerFleeDirectionFromKeyName                 ___ OFFSET(get<T>, {0xAC, 4, 0, 0})
	SMember(FName)                                     EnvironmentalDangerFleeDirectionToKeyName                   ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     EnvironmentalDangerFleeDistanceKeyName                      ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	CMember(AAIController*)                            CachedController                                            ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_FollowGroupLeader
/// Size: 0x0020 (0x0001A8 - 0x0001C8)
class UFortAthenaAIEvaluator_FollowGroupLeader : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FName)                                     FollowGroupLeaderStatusKeyName                              ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     FollowGroupLeaderMovementStateKeyName                       ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     FollowGroupLeaderDestinationKeyName                         ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     TooFarFromLeaderKeyName                                     ___ OFFSET(get<T>, {0x1B4, 4, 0, 0})
	CMember(UFortPawnComponent_AIGroup*)               CachedAIGroupComponent                                      ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_Leash
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UFortAthenaAIEvaluator_Leash : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     GoalIsInsideLeashKeyName                                    ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
	SMember(FName)                                     AIIsInsideLeashKeyName                                      ___ OFFSET(get<T>, {0xA4, 4, 0, 0})
	CMember(UFortAthenaLeashComponent*)                CachedLeashComponent                                        ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UFortAIGoalComponent*)                     CachedAIGoalComponent                                       ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_NearbyActorsPerception
/// Size: 0x01B0 (0x0000A0 - 0x000250)
class UFortAthenaAIEvaluator_NearbyActorsPerception : public UFortAthenaAIEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FName)                                     FoundNearbyActorKeyName                                     ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
	SMember(FScalableFloat)                            MinimumUpdateInterval                                       ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	DMember(int32_t)                                   RequiredTypes                                               ___ OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	SMember(FScalableFloat)                            MinimumDistanceToActors                                     ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
	CMember(TArray<TEnumAsByte>)                       RequiredAttitudes                                           ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      bRequireLoS                                                 ___ OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FGameplayTagQuery)                         RequiredTagsQuery                                           ___ OFFSET(get<T>, {0x118, 72, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAIEvaluator_SpeechBubble
/// Size: 0x0000 (0x000250 - 0x000250)
class UFortAthenaAIEvaluator_SpeechBubble : public UFortAthenaAIEvaluator_NearbyActorsPerception
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTContext_SuppressAutomaticAttackCheck
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTContext_SuppressAutomaticAttackCheck : public UFortBTService_ContextOverride
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_AIEvaluator
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTService_AIEvaluator : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTag)                              InjectionTag                                                ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	CMember(UClass*)                                   AIEvaluatorClass                                            ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ApplyGameplayTags
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortAthenaBTService_ApplyGameplayTags : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FGameplayTagContainer)                     GameplayTagsToApply                                         ___ OFFSET(get<T>, {0x70, 32, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_BuildConstruction
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTService_BuildConstruction : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     StealWallBuildName                                          ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     StealWallBuildTypeName                                      ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     StealWallBuildGridCoordName                                 ___ OFFSET(get<T>, {0x78, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Clamber
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UFortAthenaBTService_Clamber : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     ClamberExecutionStatusName                                  ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     ClamberOriginLocationName                                   ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     ClamberDestinationLocationName                              ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     ClamberAbilityStatusName                                    ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     JumpExecutionStatusName                                     ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     CrouchExecutionStatusName                                   ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	DMember(uint32_t)                                  FirstJumpRetryMaxCount                                      ___ OFFSET(get<uint32_t>, {0x94, 4, 0, 0})
	DMember(float)                                     FirstJumpRetryDelay                                         ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     FirstJumpClamberMaxStartDelay                               ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_CopyBlackboardVariable
/// Size: 0x0058 (0x000070 - 0x0000C8)
class UFortAthenaBTService_CopyBlackboardVariable : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FBlackboardKeySelector)                    SourceBlackboardKey                                         ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    DestinationBlackboardKey                                    ___ OFFSET(get<T>, {0x98, 40, 0, 0})
	DMember(bool)                                      bCopyOnBecomeRelevant                                       ___ OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(bool)                                      bCopyOnCeaseRelevant                                        ___ OFFSET(get<bool>, {0xC0, 1, 1, 1})
	DMember(bool)                                      bCopyWhenSourceValueChange                                  ___ OFFSET(get<bool>, {0xC0, 1, 1, 2})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Crouch
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_Crouch : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     CrouchExecutionStatusName                                   ___ OFFSET(get<T>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_DontForgetCurrentThreat
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTService_DontForgetCurrentThreat : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Escape
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTService_Escape : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     EscapeKeyName                                               ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     EscapeFromStormKeyName                                      ___ OFFSET(get<T>, {0x78, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Interact
/// Size: 0x00D0 (0x000070 - 0x000140)
class UFortAthenaBTService_Interact : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FBlackboardKeySelector)                    InteractExecutionStatusKeySelector                          ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    InteractContextInfoKeySelector                              ___ OFFSET(get<T>, {0x98, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    InteractObjectKeySelector                                   ___ OFFSET(get<T>, {0xC0, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    ExecutionStatusKeySelector                                  ___ OFFSET(get<T>, {0xE8, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    MovementStateKeySelector                                    ___ OFFSET(get<T>, {0x110, 40, 0, 0})
	CMember(TEnumAsByte<EInteractionBeingAttempted>)   InteractionBeingAttempted                                   ___ OFFSET(get<T>, {0x138, 1, 0, 0})
	DMember(bool)                                      bRequireDistanceCheck                                       ___ OFFSET(get<bool>, {0x139, 1, 0, 0})
	DMember(bool)                                      bRequireBlockedCheck                                        ___ OFFSET(get<bool>, {0x13A, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Jump
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTService_Jump : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     JumpExecutionStatusName                                     ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     CrouchExecutionStatusName                                   ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	DMember(float)                                     JumpInputReleaseDelay                                       ___ OFFSET(get<float>, {0x80, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_JetpackStrafe
/// Size: 0x0010 (0x000088 - 0x000098)
class UFortAthenaBTService_JetpackStrafe : public UFortAthenaBTService_Jump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     JetpackStrafeExecutionStatusName                            ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	CMember(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet*) CacheEMDigestedSkillSet                             ___ OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_JumpOffBus
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_JumpOffBus : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     JumpOffBusExecutionStatusName                               ___ OFFSET(get<T>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ManageWeapon
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UFortAthenaBTService_ManageWeapon : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     WeaponFireName                                              ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeName                                      ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerThrowableName                                  ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     WeaponReloadName                                            ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     WeaponName                                                  ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     WeaponTargetingName                                         ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     SprintExecutionStatusName                                   ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	SMember(FName)                                     TacticalSprintExecutionStatusName                           ___ OFFSET(get<T>, {0x8C, 4, 0, 0})
	SMember(FName)                                     HealingStatusKeyName                                        ___ OFFSET(get<T>, {0x90, 4, 0, 0})
	SMember(FName)                                     BlockWeaponActionsKeyName                                   ___ OFFSET(get<T>, {0x94, 4, 0, 0})
	DMember(bool)                                      bEndChargeOnFireStop                                        ___ OFFSET(get<bool>, {0xAC, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ManageVehicleWeapon
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UFortAthenaBTService_ManageVehicleWeapon : public UFortAthenaBTService_ManageWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween
/// Size: 0x0070 (0x000070 - 0x0000E0)
class UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKeyA                                              ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyB                                              ___ OFFSET(get<T>, {0x98, 40, 0, 0})
	DMember(float)                                     MinDistance                                                 ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 ___ OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     MinDistanceSpeed                                            ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     MaxDistanceSpeed                                            ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(bool)                                      bCalculateAs2D                                              ___ OFFSET(get<bool>, {0xD0, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Patrolling
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortAthenaBTService_Patrolling : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     PatrollingAppendDestinationKeyName                          ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	DMember(float)                                     AcceptableRadius                                            ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bAllowPartialPath                                           ___ OFFSET(get<bool>, {0x88, 1, 1, 0})
	DMember(bool)                                      bProjectGoalLocation                                        ___ OFFSET(get<bool>, {0x88, 1, 1, 1})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_PauseVehicle
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTService_PauseVehicle : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_PickUpLoot
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortAthenaBTService_PickUpLoot : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     LootObjectKeyName                                           ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     ExecutionStatusName                                         ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     InteractionExecutionStatusName                              ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     InteractionContextInfoName                                  ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     MovementStateKeyName                                        ___ OFFSET(get<T>, {0x80, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_PropagatePatrolProgressToPassengers
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_PropagatePatrolProgressToPassengers : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     PatrollingAppendDestinationKeyName                          ___ OFFSET(get<T>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Revive
/// Size: 0x0020 (0x000070 - 0x000090)
class UFortAthenaBTService_Revive : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     ReviveTargetKeyName                                         ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     ExecutionStatusName                                         ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     MoveToPathMovementStateName                                 ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     InteractionExecutionStatusName                              ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     InteractionContextInfoName                                  ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	DMember(bool)                                      bDisableLeash                                               ___ OFFSET(get<bool>, {0x84, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_SetBlackboardBool
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UFortAthenaBTService_SetBlackboardBool : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	DMember(bool)                                      bBlackboardValue                                            ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
	CMember(EBTSetBlackboardBoolExitActions)           ExitAction                                                  ___ OFFSET(get<T>, {0x99, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_SetExecutionStatus
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UFortAthenaBTService_SetExecutionStatus : public UBTService_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(EExecutionStatus)                          ExecutionStatus                                             ___ OFFSET(get<T>, {0x98, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Slide
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_Slide : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     SlideExecutionStatusName                                    ___ OFFSET(get<T>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_SmartObject
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTService_SmartObject : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     SmartObjectStatusKeyName                                    ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationKeyName                               ___ OFFSET(get<T>, {0x74, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Sprinting
/// Size: 0x0058 (0x000070 - 0x0000C8)
class UFortAthenaBTService_Sprinting : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FName)                                     SprintExecutionStatusName                                   ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     TacticalSprintExecutionStatusName                           ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
	SMember(FName)                                     TacticalSprintOverridenName                                 ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_UpdateTarget
/// Size: 0x0000 (0x000070 - 0x000070)
class UFortAthenaBTService_UpdateTarget : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_WaitForPassengers
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTService_WaitForPassengers : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     WaitForPassengersStatusKeyName                              ___ OFFSET(get<T>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTService_Zipline
/// Size: 0x0048 (0x000070 - 0x0000B8)
class UFortAthenaBTService_Zipline : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FName)                                     ZiplineTargetName                                           ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     InteractionExecutionStatusName                              ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     InteractionContextInfoName                                  ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     UsageExecutionStatusName                                    ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     ZiplineEntryLocationName                                    ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FName)                                     ZiplineExitLocationKeyName                                  ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     MoveToPathMovementStateName                                 ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	SMember(FName)                                     MoveExecutionStatusName                                     ___ OFFSET(get<T>, {0x8C, 4, 0, 0})
	SMember(FName)                                     FocalPointName                                              ___ OFFSET(get<T>, {0x90, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ActivateVehicleBoost
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_ActivateVehicleBoost : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bActivateBoost                                              ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(float)                                     BoostLength                                                 ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      bIgnoreMinimumDistanceLeft                                  ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_MoveTo
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UFortAthenaBTTask_MoveTo : public UBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     MovementResultKeyName                                       ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	SMember(FName)                                     ExecutionStatusKeyName                                      ___ OFFSET(get<T>, {0xB4, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_BotMoveTo
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UFortAthenaBTTask_BotMoveTo : public UFortAthenaBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FName)                                     NoSmashMoveGoalActorKeyName                                 ___ OFFSET(get<T>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bAllowRandomWobble                                          ___ OFFSET(get<bool>, {0xC6, 1, 1, 0})
	DMember(bool)                                      bIsUrgentMovement                                           ___ OFFSET(get<bool>, {0xC6, 1, 1, 1})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_BotUnstuckTeleport
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UFortAthenaBTTask_BotUnstuckTeleport : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  ___ OFFSET(get<T>, {0x70, 72, 0, 0})
	SMember(FName)                                     CanReachDestinationKeyName                                  ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     TeleportExecutionStatusKeyName                              ___ OFFSET(get<T>, {0xBC, 4, 0, 0})
	SMember(FName)                                     LastPartialPathTimeKeyName                                  ___ OFFSET(get<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     LastPartialPathCountKeyName                                 ___ OFFSET(get<T>, {0xC4, 4, 0, 0})
	CMember(UFortAthenaAIBotUnstuckDigestedSkillSet*)  UnstuckSkillSet                                             ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_BotWait
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UFortAthenaBTTask_BotWait : public UBTTask_Wait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBlackboardKeySelector)                    WaitCompleteKeySelector                                     ___ OFFSET(get<T>, {0x78, 40, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Build
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_Build : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     ExecutionStatusKeyName                                      ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     FocalPointName                                              ___ OFFSET(get<T>, {0x74, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Conversation
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_Conversation : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     ConversationStatusKeyName                                   ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	DMember(bool)                                      bResetEvaluatorStatusKeyOnFinish                            ___ OFFSET(get<bool>, {0x76, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Dive
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_Dive : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     ExecutionStatusKeyName                                      ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     DiveDestinationKeyName                                      ___ OFFSET(get<T>, {0x74, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_EnterVehicle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_EnterVehicle : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     SelectedVehicleKeyName                                      ___ OFFSET(get<T>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Glide
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_Glide : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     ExecutionStatusKeyName                                      ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     GlideDestinationKeyName                                     ___ OFFSET(get<T>, {0x74, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Interact
/// Size: 0x0078 (0x000070 - 0x0000E8)
class UFortAthenaBTTask_Interact : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     AttemptInterval                                             ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(int32_t)                                   MaxInteractAttempts                                         ___ OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(bool)                                      bShouldFocusOnInteraction                                   ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    InteractExecutionStatusKeySelector                          ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    InteractContextInfoKeySelector                              ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FName)                                     FocalPointName                                              ___ OFFSET(get<T>, {0xD0, 4, 0, 0})
	SMember(FName)                                     InteractActorName                                           ___ OFFSET(get<T>, {0xD4, 4, 0, 0})
	SMember(FName)                                     JumpExecutionStatusName                                     ___ OFFSET(get<T>, {0xD8, 4, 0, 0})
	SMember(FName)                                     WeaponTriggerMeleeName                                      ___ OFFSET(get<T>, {0xDC, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_LeaveVehicle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_LeaveVehicle : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bWaitVehicleStop                                            ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ModulateVehicleSpeed
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_ModulateVehicleSpeed : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     NewDrivingSpeed                                             ___ OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_PauseVehicle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_PauseVehicle : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bPausePathFollow                                            ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_PlayEmote
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTTask_PlayEmote : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     PlayEmoteExecutionStatusKeyName                             ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	CMember(TArray<UAthenaDanceItemDefinition*>)       BespokeEmotes                                               ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ReverseVehicle
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_ReverseVehicle : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bReverseVehicle                                             ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_RunDynamicSubtree
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortAthenaBTTask_RunDynamicSubtree : public UBTTask_RunBehaviorDynamic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bCallParentOnInstanceCreated                                ___ OFFSET(get<bool>, {0x88, 1, 1, 0})
	DMember(bool)                                      bUpdateBlackboardAsset                                      ___ OFFSET(get<bool>, {0x88, 1, 1, 1})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_SetAggressiveDriving
/// Size: 0x0008 (0x000070 - 0x000078)
class UFortAthenaBTTask_SetAggressiveDriving : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bAggressiveDriving                                          ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_ShootTrap
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UFortAthenaBTTask_ShootTrap : public UBTTask_Wait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FBlackboardKeySelector)                    TargetActorKey                                              ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FName)                                     TrapOnPathKeyName                                           ___ OFFSET(get<T>, {0xA0, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_SteerMovement
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UFortAthenaBTTask_SteerMovement : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBlackboardKeySelector)                    SteerDirectionKeySelector                                   ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	DMember(bool)                                      bSetControlRotation                                         ___ OFFSET(get<bool>, {0x98, 1, 1, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Undermine
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTTask_Undermine : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     UndermineTargetKeyName                                      ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     UndermineLocationImpactName                                 ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     UndermineExecutionStatusKeyName                             ___ OFFSET(get<T>, {0x78, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_UseItem
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTTask_UseItem : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     ActionObjectKeyName                                         ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     ExecutionStatusKeyName                                      ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	DMember(float)                                     MinWaitTimeBetweenUses                                      ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     MaxWaitTimeBetweenUses                                      ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bValidateAbility                                            ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bResetActionObjectKey                                       ___ OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(bool)                                      bUseAlternateMode                                           ___ OFFSET(get<bool>, {0x82, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_UseSmartObject
/// Size: 0x00A0 (0x000070 - 0x000110)
class UFortAthenaBTTask_UseSmartObject : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FName)                                     SmartObjectsStatusKeyName                                   ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     SmartObjectDestinationRotationKeyName                       ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	DMember(bool)                                      bHandleAbortWithSoftDisable                                 ___ OFFSET(get<bool>, {0x7E, 1, 0, 0})
	SMember(FGameplayInteractionContext)               GameplayInteractionContext                                  ___ OFFSET(get<T>, {0xA8, 104, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_VehicleHonk
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_VehicleHonk : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     MaxHonkTime                                                 ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MinHonkTime                                                 ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     MaxFlickerTime                                              ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     MinFlickerTime                                              ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_VehicleTurnTo
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UFortAthenaBTTask_VehicleTurnTo : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     Precision                                                   ___ OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_VerseNPCMoveTo
/// Size: 0x0018 (0x0000C0 - 0x0000D8)
class UFortAthenaBTTask_VerseNPCMoveTo : public UFortAthenaBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FName)                                     AcceptableRadiusKeyName                                     ___ OFFSET(get<T>, {0xC0, 4, 0, 0})
	SMember(FName)                                     AllowStrafeKeyName                                          ___ OFFSET(get<T>, {0xC4, 4, 0, 0})
	SMember(FName)                                     AllowPartialPathName                                        ___ OFFSET(get<T>, {0xC8, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaBTTask_Zipline
/// Size: 0x0010 (0x000070 - 0x000080)
class UFortAthenaBTTask_Zipline : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     UsageExecutionStatusName                                    ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FName)                                     ZiplineTargetName                                           ___ OFFSET(get<T>, {0x78, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_Encampment
/// Size: 0x02A8 (0x0001A8 - 0x000450)
class UFortAthenaNpcEvaluator_Encampment : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FScalableFloat)                            EncampmentEnable                                            ___ OFFSET(get<T>, {0x1A8, 40, 0, 0})
	SMember(FScalableFloat)                            EncampmentTentativeDelayMin                                 ___ OFFSET(get<T>, {0x1D0, 40, 0, 0})
	SMember(FScalableFloat)                            EncampmentTentativeDelayMax                                 ___ OFFSET(get<T>, {0x1F8, 40, 0, 0})
	SMember(FScalableFloat)                            EncampmentDurationMin                                       ___ OFFSET(get<T>, {0x220, 40, 0, 0})
	SMember(FScalableFloat)                            EncampmentDurationMax                                       ___ OFFSET(get<T>, {0x248, 40, 0, 0})
	SMember(FScalableFloat)                            BuilderPercentage                                           ___ OFFSET(get<T>, {0x270, 40, 0, 0})
	SMember(FScalableFloat)                            BuilderMinDistance                                          ___ OFFSET(get<T>, {0x298, 40, 0, 0})
	SMember(FScalableFloat)                            BuilderMaxDistance                                          ___ OFFSET(get<T>, {0x2C0, 40, 0, 0})
	SMember(FScalableFloat)                            GuardMinDistance                                            ___ OFFSET(get<T>, {0x2E8, 40, 0, 0})
	SMember(FScalableFloat)                            GuardMaxDistance                                            ___ OFFSET(get<T>, {0x310, 40, 0, 0})
	SMember(FScalableFloat)                            AllowInSwimming                                             ___ OFFSET(get<T>, {0x338, 40, 0, 0})
	SMember(FScalableFloat)                            AllowInFalling                                              ___ OFFSET(get<T>, {0x360, 40, 0, 0})
	SMember(FScalableFloat)                            MinSquadMembersCountToBuild                                 ___ OFFSET(get<T>, {0x388, 40, 0, 0})
	SMember(FName)                                     EncampmentStatusKeyName                                     ___ OFFSET(get<T>, {0x3B0, 4, 0, 0})
	SMember(FName)                                     EncampmentMovementStateKeyName                              ___ OFFSET(get<T>, {0x3B8, 4, 0, 0})
	SMember(FName)                                     EncampmentCenterLocationKeyName                             ___ OFFSET(get<T>, {0x3C0, 4, 0, 0})
	SMember(FName)                                     EncampmentDestinationKeyName                                ___ OFFSET(get<T>, {0x3C8, 4, 0, 0})
	SMember(FName)                                     EncampmentAroundCampFireLocationKeyName                     ___ OFFSET(get<T>, {0x3D0, 4, 0, 0})
	SMember(FName)                                     EncampmentRoleKeyName                                       ___ OFFSET(get<T>, {0x3D8, 4, 0, 0})
	SMember(FName)                                     DefensiveBuildName                                          ___ OFFSET(get<T>, {0x3E0, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_FollowPatrolPath
/// Size: 0x0038 (0x0001A8 - 0x0001E0)
class UFortAthenaNpcEvaluator_FollowPatrolPath : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FName)                                     FollowPatrolPathKeyName                                     ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     FollowPatrolPathMovementStateKeyName                        ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     FollowPatrolPathDestinationKeyName                          ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	DMember(float)                                     ChanceToTakeABreak                                          ___ OFFSET(get<float>, {0x1BC, 4, 0, 0})
	DMember(float)                                     BreakDurationMin                                            ___ OFFSET(get<float>, {0x1C0, 4, 0, 0})
	DMember(float)                                     BreakDurationMax                                            ___ OFFSET(get<float>, {0x1C4, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_FollowSquadLeader
/// Size: 0x0150 (0x0001A8 - 0x0002F8)
class UFortAthenaNpcEvaluator_FollowSquadLeader : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FScalableFloat)                            FormationOffsetRadiusMin                                    ___ OFFSET(get<T>, {0x1A8, 40, 0, 0})
	SMember(FScalableFloat)                            FormationOffsetRadiusMax                                    ___ OFFSET(get<T>, {0x1D0, 40, 0, 0})
	SMember(FScalableFloat)                            TooFarFromSquadLeaderDistance                               ___ OFFSET(get<T>, {0x1F8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxNoiseRadius                                              ___ OFFSET(get<T>, {0x220, 40, 0, 0})
	SMember(FScalableFloat)                            MinDurationNoiseEvaluate                                    ___ OFFSET(get<T>, {0x248, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDurationNoiseEvaluate                                    ___ OFFSET(get<T>, {0x270, 40, 0, 0})
	SMember(FName)                                     FollowSquadLeaderStatusKeyName                              ___ OFFSET(get<T>, {0x298, 4, 0, 0})
	SMember(FName)                                     FollowSquadLeaderMovementStateKeyName                       ___ OFFSET(get<T>, {0x2A0, 4, 0, 0})
	SMember(FName)                                     FollowSquadLeaderDestinationKeyName                         ___ OFFSET(get<T>, {0x2A8, 4, 0, 0})
	SMember(FName)                                     TooFarFromLeaderKeyName                                     ___ OFFSET(get<T>, {0x2B0, 4, 0, 0})
	SMember(FVector)                                   CachedSquadFormationOffset                                  ___ OFFSET(get<T>, {0x2B8, 24, 0, 0})
	SMember(FVector)                                   CachedNoiseOffset                                           ___ OFFSET(get<T>, {0x2D0, 24, 0, 0})
	DMember(float)                                     CachedTooFarFromSquadLeaderDistanceSqr                      ___ OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(float)                                     LastNoiseOffsetUpdateTime                                   ___ OFFSET(get<float>, {0x2EC, 4, 0, 0})
	DMember(float)                                     DurationNoiseEvaluate                                       ___ OFFSET(get<float>, {0x2F0, 4, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_Leash
/// Size: 0x0040 (0x0001A8 - 0x0001E8)
class UFortAthenaNpcEvaluator_Leash : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FName)                                     LeashKeyName                                                ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     LeashMovementStateKeyName                                   ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     LeashDestinationKeyName                                     ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     LeashLocationKeyName                                        ___ OFFSET(get<T>, {0x1B4, 4, 0, 0})
	SMember(FName)                                     LeashOuterRadiusKeyName                                     ___ OFFSET(get<T>, {0x1B8, 4, 0, 0})
	SMember(FName)                                     ShouldTeleportInLeashKeyName                                ___ OFFSET(get<T>, {0x1BC, 4, 0, 0})
	DMember(bool)                                      bAlwaysForceMoveToLeashCenter                               ___ OFFSET(get<bool>, {0x1C0, 1, 0, 0})
	CMember(UClass*)                                   AvoidObstaclesFilterClass                                   ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(UFortAthenaAIRuntimeParameters_Leash*)     LeashRuntimeParameters                                      ___ OFFSET(get<T>, {0x1E0, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaNpcEvaluator_Patrolling
/// Size: 0x0050 (0x0001A8 - 0x0001F8)
class UFortAthenaNpcEvaluator_Patrolling : public UFortAthenaAIBotEvaluator_Movement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	SMember(FName)                                     PatrollingKeyName                                           ___ OFFSET(get<T>, {0x1A8, 4, 0, 0})
	SMember(FName)                                     PatrollingMovementStateKeyName                              ___ OFFSET(get<T>, {0x1AC, 4, 0, 0})
	SMember(FName)                                     PatrollingDestinationKeyName                                ___ OFFSET(get<T>, {0x1B0, 4, 0, 0})
	SMember(FName)                                     DynamicBlueprintStatusKeyName                               ___ OFFSET(get<T>, {0x1B4, 4, 0, 0})
	SMember(FName)                                     DynamicBlueprintActorKeyName                                ___ OFFSET(get<T>, {0x1B8, 4, 0, 0})
	SMember(FName)                                     PatrollingShouldMoveKeyName                                 ___ OFFSET(get<T>, {0x1BC, 4, 0, 0})
	SMember(FName)                                     PatrollingAppendDestinationKeyName                          ___ OFFSET(get<T>, {0x1C0, 4, 0, 0})
	DMember(float)                                     DistanceToTestPoint                                         ___ OFFSET(get<float>, {0x1D4, 4, 0, 0})
	DMember(bool)                                      bCanDisablePatrolling                                       ___ OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(bool)                                      bCanReenablePatrolling                                      ___ OFFSET(get<bool>, {0x1D9, 1, 0, 0})
	DMember(float)                                     ReenableTimer                                               ___ OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(bool)                                      bCanSelectNearestPatrolPointAtStart                         ___ OFFSET(get<bool>, {0x1E0, 1, 0, 0})
	CMember(UFortAthenaNpcPatrollingComponent*)        CachedNpcPatrollingComponent                                ___ OFFSET(get<T>, {0x1E8, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortQueryContext_BotPOIVolume
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortQueryContext_BotPOIVolume : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bSetProjectedToNavmeshLocationAsContext                     ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FVector)                                   ProjectionExtent                                            ___ OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaAttachToActorStateTreeTask
/// Size: 0x0048 (0x000048 - 0x000090)
class UFortAthenaAttachToActorStateTreeTask : public UStateTreeTaskBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) AttachExecutionMode                                      ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	DMember(bool)                                      bHandleAthenaMovComponent                                   ___ OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(bool)                                      bSetPhysicsToQueryOnlyWhileAttached                         ___ OFFSET(get<bool>, {0x5D, 1, 0, 0})
	DMember(bool)                                      bTryToAttachToSkeletalMeshOnTargetActor                     ___ OFFSET(get<bool>, {0x5E, 1, 0, 0})
	DMember(bool)                                      bChangeBaseToSkeletalMeshOnTargetActor                      ___ OFFSET(get<bool>, {0x5F, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentLocationRule                                      ___ OFFSET(get<T>, {0x60, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentRotationRule                                      ___ OFFSET(get<T>, {0x61, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentScaleRule                                         ___ OFFSET(get<T>, {0x62, 1, 0, 0})
	DMember(bool)                                      bWeldSimulatedBodiesOnAttach                                ___ OFFSET(get<bool>, {0x63, 1, 0, 0})
	SMember(FName)                                     AttachmentSocketName                                        ___ OFFSET(get<T>, {0x64, 4, 0, 0})
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) DetachExecutionMode                                      ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(bool)                                      bForceChangeBaseOnDetach                                    ___ OFFSET(get<bool>, {0x6C, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentLocationRule                                      ___ OFFSET(get<T>, {0x6D, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentRotationRule                                      ___ OFFSET(get<T>, {0x6E, 1, 0, 0})
	CMember(EDetachmentRule)                           DetachmentScaleRule                                         ___ OFFSET(get<T>, {0x6F, 1, 0, 0})
	DMember(bool)                                      bCallModifyOnDetach                                         ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bHandleLaunchCharacter                                      ___ OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(bool)                                      bHasHandledLaunchCharacter                                  ___ OFFSET(get<bool>, {0x72, 1, 0, 0})
	CMember(AFortPawn*)                                FortPawnActor                                               ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData
/// Size: 0x00D8 (0x000028 - 0x000100)
class UFortAthenaPlayContextualAnimTaskInstanceData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(AActor*)                                   PrimaryActor                                                ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(AActor*)                                   SecondaryActor                                              ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     SecondaryRole                                               ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	CMember(AActor*)                                   TertiaryActor                                               ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FName)                                     TertiaryRole                                                ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	CMember(UContextualAnimSceneAsset*)                SceneAsset                                                  ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FName)                                     SectionName                                                 ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FGameplayTagContainer)                     PrimaryActorExternalTags                                    ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SecondaryActorExternalTags                                  ___ OFFSET(get<T>, {0x80, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TertiaryActorExternalTags                                   ___ OFFSET(get<T>, {0xA0, 32, 0, 0})
	CMember(EFortAthenaPlayContextualAnimExecutionMethod) ExecutionMethod                                          ___ OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bWaitForNotifyEventToEnd                                    ___ OFFSET(get<bool>, {0xC1, 1, 0, 0})
	SMember(FName)                                     NotifyEventNameToEnd                                        ___ OFFSET(get<T>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   LoopsToRun                                                  ___ OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bLoopForever                                                ___ OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(float)                                     DelayBetweenLoops                                           ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     RandomDeviationBetweenLoops                                 ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	CMember(TArray<FContextualAnimWarpTarget>)         WarpTargets                                                 ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTask
/// Size: 0x0080 (0x000048 - 0x0000C8)
class UFortAthenaPlayInteractionStateTreeTask : public UStateTreeTaskBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(AActor*)                                   InteractorActor                                             ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(AActor*)                                   InteractableActor                                           ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UAnimMontage*)                             InteractorMontage                                           ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UAnimMontage*)                             InteractableMontage                                         ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bWaitForNotifyEventToEnd                                    ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FName)                                     NotifyEventNameToEnd                                        ___ OFFSET(get<T>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bAddMotionWarpingTargets                                    ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bDisableCollisionBetweenActors                              ___ OFFSET(get<bool>, {0x71, 1, 0, 0})
	DMember(bool)                                      bSetMovementModeToFlying                                    ___ OFFSET(get<bool>, {0x72, 1, 0, 0})
	DMember(int32_t)                                   LoopsToRun                                                  ___ OFFSET(get<int32_t>, {0x74, 4, 0, 0})
	DMember(bool)                                      bLoopForever                                                ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(float)                                     DelayBetweenLoops                                           ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     RandomDeviationBetweenLoops                                 ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(bool)                                      bStopInteractorAnimMontageOnExit                            ___ OFFSET(get<bool>, {0x84, 1, 0, 0})
	DMember(bool)                                      bStopInteractableAnimMontageOnExit                          ___ OFFSET(get<bool>, {0x85, 1, 0, 0})
};

/// Class /Script/FortniteAIServer.FortAthenaPlayMontageStateTreeTask
/// Size: 0x0048 (0x000048 - 0x000090)
class UFortAthenaPlayMontageStateTreeTask : public UStateTreeTaskBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UAnimMontage*)                             Montage                                                     ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(bool)                                      bWaitForNotifyEventToEnd                                    ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	SMember(FName)                                     NotifyEventNameToEnd                                        ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bSetMovementModeToFlying                                    ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(int32_t)                                   LoopsToRun                                                  ___ OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bLoopForever                                                ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     DelayBetweenLoops                                           ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     RandomDeviationBetweenLoops                                 ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bStopAnimMontageOnExit                                      ___ OFFSET(get<bool>, {0x74, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortAthenaHandleSoftDisableGuardStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FStateTreeStructRef)                       SoftDisableStateReference                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<AActor*>)                           ActorsToTeleportOnFailure                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaHandleSoftDisableGuardStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaHandleSoftDisableGuardStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaSoftDisableStateTreeParameter
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaSoftDisableStateTreeParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<AActor*>)                           ActorsToTeleportOnExit                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaHandleSoftDisableStateTreeTaskInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortAthenaHandleSoftDisableStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<AActor*>)                           ActorsToCleanup                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bHasReceivedSoftDisableEvent                                ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FGameplayTag)                              ReceivedSoftDisableEvent                                    ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FFortAthenaSoftDisableStateTreeParameter)  OutState                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaHandleSoftDisableStateTreeTask
/// Size: 0x0028 (0x000020 - 0x000048)
class FFortAthenaHandleSoftDisableStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTag)                              StateTreeEventTag                                           ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FVector)                                   TeleportOnNavmeshQueryBoxExtents                            ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(int32_t)                                   MaxTeleportToTryPerActor                                    ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaPickRandomMontageConfig
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaPickRandomMontageConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UAnimMontage*)                             Montage                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   RandomWeight                                                ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaPickRandomMontageStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAthenaPickRandomMontageStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FFortAthenaPickRandomMontageConfig>) PossibleMontages                                           ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(UAnimMontage*)                             PickedMontage                                               ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaPickRandomMontageStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaPickRandomMontageStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaToggleAllowInteractStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaToggleAllowInteractStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaToggleAllowInteractStateTreeTaskTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FFortAthenaToggleAllowInteractStateTreeTaskTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) AddExecutionMode                                         ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) RemoveExecutionMode                                      ___ OFFSET(get<T>, {0x24, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventConsumeStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAthenaTrackEventConsumeStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FStateTreeStructRef)                       ReferencedEvent                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventConsumeStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaTrackEventConsumeStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventStateTreeTaskStateTreeParameter
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortAthenaTrackEventStateTreeTaskStateTreeParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bHasReceivedTrackedEvent                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FGameplayTag)                              ReceivedEventTag                                            ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventStateTreeTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortAthenaTrackEventStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FFortAthenaTrackEventStateTreeTaskStateTreeParameter) OutParameter                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaTrackEventStateTreeTask
/// Size: 0x0050 (0x000020 - 0x000070)
class FFortAthenaTrackEventStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagQuery)                         EventTagQuery                                               ___ OFFSET(get<T>, {0x20, 72, 0, 0})
	SMember(FGameplayTag)                              StateTreeEventTag                                           ___ OFFSET(get<T>, {0x68, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaWorldConditionInstanceData
/// Size: 0x0050 (0x000000 - 0x000050)
class FFortAthenaWorldConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(AActor*)                                   ActorA                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AActor*)                                   ActorB                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(AActor*)                                   ActorC                                                      ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bOutResult                                                  ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FWorldConditionQueryState)                 QueryState                                                  ___ OFFSET(get<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaWorldConditionInstanceDataStateTreeTask
/// Size: 0x0020 (0x000020 - 0x000040)
class FFortAthenaWorldConditionInstanceDataStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FWorldConditionQueryDefinition)            Conditions                                                  ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FGameplayTag)                              StateTreeEventTag                                           ___ OFFSET(get<T>, {0x38, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortBTService_InjectionTagKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortBTService_InjectionTagKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              InjectionTag                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     InjectionKeyName                                            ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortWorldConditionGameplayTagActorQueryState
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortWorldConditionGameplayTagActorQueryState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/FortniteAIServer.FortWorldConditionGameplayTagActor
/// Size: 0x0030 (0x000010 - 0x000040)
class FFortWorldConditionGameplayTagActor : public FWorldConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FWorldConditionContextDataRef)             ActorContextRef                                             ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TagContainerToCheck                                         ___ OFFSET(get<T>, {0x18, 32, 0, 0})
	CMember(EHasMatchingGameplayTagContainerTestType)  TestType                                                    ___ OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortWorldConditionPlayerHasConvertedNPC
/// Size: 0x0010 (0x000010 - 0x000020)
class FFortWorldConditionPlayerHasConvertedNPC : public FWorldConditionCommonActorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FWorldConditionContextDataRef)             ActorRef                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(EFortWorldConditionPlayerHasConvertedNPCCondition) ConditionToCheck                                    ___ OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortWorldConditionTimeOfDay
/// Size: 0x0010 (0x000010 - 0x000020)
class FFortWorldConditionTimeOfDay : public FWorldConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FWorldConditionContextDataRef)             ActorContextRef                                             ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   ValidTimesOfDay                                             ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.GameFeatureFortAIEvaluatorEntry
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameFeatureFortAIEvaluatorEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UBehaviorTree*>)            TreeAsset                                                   ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTag)                              InjectionTag                                                ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AIEvaluatorClass                                            ___ OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortPointOnCurveRange
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortPointOnCurveRange : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     MinPercentage                                               ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxPercentage                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortPointsOnCurve
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortPointsOnCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UCurveFloat*>)              Curve                                                       ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TArray<FFortPointOnCurveRange>)            RangesForPointsOnCurve                                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortQueryGenerator_PerceivedActors_Settings
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortQueryGenerator_PerceivedActors_Settings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bIgnoreDBNOPawns                                            ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIgnoreSleepingAIs                                          ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 MaxTimeSincePerceived                                       ___ OFFSET(get<T>, {0x8, 56, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortGameplayTagQueryPerDifficulty
/// Size: 0x0060 (0x000000 - 0x000060)
class FFortGameplayTagQueryPerDifficulty : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FDataTableRowHandle)                       DifficultyInfo                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTagQuery)                         TagQueryToMatch                                             ___ OFFSET(get<T>, {0x10, 72, 0, 0})
	DMember(float)                                     Difficulty                                                  ___ OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.GoalDistanceData
/// Size: 0x0098 (0x000000 - 0x000098)
class FGoalDistanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      bIgnoreScreeningDistance                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScreeningTestMaxDistance                                    ___ OFFSET(get<T>, {0x8, 56, 0, 0})
	CMember(TWeakObjectPtr<UCurveFloat*>)              TestScoreCurve                                              ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 CurveDistanceScale                                          ___ OFFSET(get<T>, {0x60, 56, 0, 0})
};

/// Struct /Script/FortniteAIServer.FlankingLocationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FFlankingLocationInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FailedToReachPOI
/// Size: 0x0008 (0x000000 - 0x000008)
class FFailedToReachPOI : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   BotPOIID                                                    ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   FailCount                                                   ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.SmartObjectActivityResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FSmartObjectActivityResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/FortniteAIServer.GameplayAbilityEvaluatorModule
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayAbilityEvaluatorModule : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     GameplayAbilityTag                                          ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(UAbilitySystemComponent*)                  CachedAbilitySystemComponent                                ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayTagInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayTagActorHasMatchingGameplayTagInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              TagToCheck                                                  ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayTagCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayTagActorHasMatchingGameplayTagCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayTagContainerInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayTagActorHasMatchingGameplayTagContainerInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TagContainerToCheck                                         ___ OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/FortniteAIServer.GameplayTagActorHasMatchingGameplayContainerTagCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayTagActorHasMatchingGameplayContainerTagCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EHasMatchingGameplayTagContainerTestType)  TestType                                                    ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bInvert                                                     ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaAddGameplayTagsStateTreeTaskInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortAthenaAddGameplayTagsStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaAddGameplayTagsStateTreeTask
/// Size: 0x0010 (0x000020 - 0x000030)
class FFortAthenaAddGameplayTagsStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bReplicateChange                                            ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) AddExecutionMode                                         ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) RemoveExecutionMode                                      ___ OFFSET(get<T>, {0x28, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaArithmeticStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FFortAthenaArithmeticStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EGameplayInteractionTaskTrigger)           OperationTrigger                                            ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(EFortAthenaArithmeticOperation)            Operation                                                   ___ OFFSET(get<T>, {0x21, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaIntArithmeticStateTreeTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAthenaIntArithmeticStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   FirstOperand                                                ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SecondOperand                                               ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FStateTreeStructRef)                       ReferencedResult                                            ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaIntArithmeticStateTreeTask
/// Size: 0x0000 (0x000028 - 0x000028)
class FFortAthenaIntArithmeticStateTreeTask : public FFortAthenaArithmeticStateTreeTask
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaFocusAtStateTreeTaskInstanceData
/// Size: 0x0090 (0x000000 - 0x000090)
class FFortAthenaFocusAtStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AActor*)                                   FocusActor                                                  ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   FocusActorOffset                                            ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   FocusWorldPoint                                             ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bSetBackOnExit                                              ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaFocusAtStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaFocusAtStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaIntStateTreeParameter
/// Size: 0x0004 (0x000000 - 0x000004)
class FFortAthenaIntStateTreeParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Int                                                         ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaMakeIntVariableStateTreeTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortAthenaMakeIntVariableStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   DefaultIntValue                                             ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FFortAthenaIntStateTreeParameter)          OutInt                                                      ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaMakeIntVariableStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FFortAthenaMakeIntVariableStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bResetOnReselect                                            ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaPlayContextualAnimStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaPlayContextualAnimStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaPlayInteractionStateTreeTaskActorInfo
/// Size: 0x0024 (0x000000 - 0x000024)
class FFortAthenaPlayInteractionStateTreeTaskActorInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeCrouchTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortAthenaStateTreeCrouchTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeCrouchTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaStateTreeCrouchTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeInteractTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortAthenaStateTreeInteractTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TEnumAsByte<TInteractionType>)             InteractType                                                ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(AActor*)                                   InteractTargetActor                                         ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(float)                                     InteractDuration                                            ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Timer                                                       ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeInteractTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaStateTreeInteractTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeLookAroundTaskInstanceData
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAthenaStateTreeLookAroundTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     LookAtDurationMin                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LookAtDurationMax                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     LookAtDuration                                              ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Timer                                                       ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaStateTreeLookAroundTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaStateTreeLookAroundTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaTeleportToActorStateTreeTaskInstanceData
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortAthenaTeleportToActorStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   TeleportRelativeLocation                                    ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FRotator)                                  TeleportRelativeRotation                                    ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaTeleportToActorStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FFortAthenaTeleportToActorStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/FortniteAIServer.FortAthenaToggleGameplayEffectStateTreeTaskInstanceData
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FFortAthenaToggleGameplayEffectStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(AActor*)                                   Actor                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<UClass*>)                           GameplayEffectClassesToAdd                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bAutomaticallyRemoveAddedEffectsOnExit                      ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TArray<UClass*>)                           GameplayEffectClassesToRemove                               ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayEffectsByTagsToRemove                               ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayEffectsBySourceTagsToRemove                         ___ OFFSET(get<T>, {0x58, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayEffectsByAppliedTagsToRemove                        ___ OFFSET(get<T>, {0x78, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayEffectsByGrantedTagsToRemove                        ___ OFFSET(get<T>, {0x98, 32, 0, 0})
};

/// Struct /Script/FortniteAIServer.FortAthenaToggleGameplayEffectStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FFortAthenaToggleGameplayEffectStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) AddExecutionMode                                         ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(EFortAthenaStateTreeTaskFeatureExecutionMode) RemoveExecutionMode                                      ___ OFFSET(get<T>, {0x24, 4, 0, 0})
};

/// Enum /Script/FortniteAIServer.SwitchSeatType
/// Size: 0x05
enum SwitchSeatType : uint8_t
{
	ToDriver0                                                                        = 0,
	ToPassenger1                                                                     = 1,
	ToGunner2                                                                        = 2,
	ToSpotter3                                                                       = 3,
	SwitchSeatType_MAX4                                                              = 4
};

/// Enum /Script/FortniteAIServer.EFortAthenaStateTreeTaskFeatureExecutionMode
/// Size: 0x04
enum EFortAthenaStateTreeTaskFeatureExecutionMode : uint8_t
{
	EFortAthenaStateTreeTaskFeatureExecutionMode__DoNotExecute0                      = 0,
	EFortAthenaStateTreeTaskFeatureExecutionMode__ExecuteOnEnter1                    = 1,
	EFortAthenaStateTreeTaskFeatureExecutionMode__ExecuteOnExit2                     = 2,
	EFortAthenaStateTreeTaskFeatureExecutionMode__EFortAthenaStateTreeTaskFeatureExecutionMode_MAX3 = 3
};

/// Enum /Script/FortniteAIServer.SeatStatusType
/// Size: 0x05
enum SeatStatusType : uint8_t
{
	Driver0                                                                          = 0,
	Passenger1                                                                       = 1,
	Gunner2                                                                          = 2,
	Spotter3                                                                         = 3,
	SeatStatusType_MAX4                                                              = 4
};

/// Enum /Script/FortniteAIServer.EFortWorldConditionPlayerHasConvertedNPCCondition
/// Size: 0x03
enum EFortWorldConditionPlayerHasConvertedNPCCondition : uint8_t
{
	EFortWorldConditionPlayerHasConvertedNPCCondition__HasReachedConvertedNPCLimit0  = 0,
	EFortWorldConditionPlayerHasConvertedNPCCondition__HasAnotherConvertedNPC1       = 1,
	EFortWorldConditionPlayerHasConvertedNPCCondition__EFortWorldConditionPlayerHasConvertedNPCCondition_MAX2 = 2
};

/// Enum /Script/FortniteAIServer.EFortPointsFromNavGraphGoalPathDistanceFilterOperator
/// Size: 0x03
enum EFortPointsFromNavGraphGoalPathDistanceFilterOperator : uint8_t
{
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__AllGoalsInRange0          = 0,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__AnyGoalInRange1           = 1,
	EFortPointsFromNavGraphGoalPathDistanceFilterOperator__EFortPointsFromNavGraphGoalPathDistanceFilterOperator_MAX2 = 2
};

/// Enum /Script/FortniteAIServer.EFortTestGoalActorDot
/// Size: 0x03
enum EFortTestGoalActorDot : uint8_t
{
	EFortTestGoalActorDot__Dot3D0                                                    = 0,
	EFortTestGoalActorDot__Dot2D1                                                    = 1,
	EFortTestGoalActorDot__EFortTestGoalActorDot_MAX2                                = 2
};

/// Enum /Script/FortniteAIServer.EDistanceMode
/// Size: 0x04
enum EDistanceMode : uint8_t
{
	EDistanceMode__DistItemToContext0                                                = 0,
	EDistanceMode__DistItemGoalActorToContext1                                       = 1,
	EDistanceMode__DistItemToItemGoalActor2                                          = 2,
	EDistanceMode__EDistanceMode_MAX3                                                = 3
};

/// Enum /Script/FortniteAIServer.ECountAIAssignedToType
/// Size: 0x04
enum ECountAIAssignedToType : uint8_t
{
	ECountAIAssignedToType__Goal0                                                    = 0,
	ECountAIAssignedToType__Actor1                                                   = 1,
	ECountAIAssignedToType__Assignment2                                              = 2,
	ECountAIAssignedToType__ECountAIAssignedToType_MAX3                              = 3
};

/// Enum /Script/FortniteAIServer.EFortAthenaAICanMoveState
/// Size: 0x07
enum EFortAthenaAICanMoveState : uint8_t
{
	EFortAthenaAICanMoveState__None0                                                 = 0,
	EFortAthenaAICanMoveState__Failed_AgentOffNavmesh1                               = 1,
	EFortAthenaAICanMoveState__Failed_GoalOffNavmesh2                                = 2,
	EFortAthenaAICanMoveState__Failed_Falling3                                       = 3,
	EFortAthenaAICanMoveState__Success4                                              = 4,
	EFortAthenaAICanMoveState__Success_Partial5                                      = 5,
	EFortAthenaAICanMoveState__EFortAthenaAICanMoveState_MAX6                        = 6
};

/// Enum /Script/FortniteAIServer.EEvasiveManeuverType
/// Size: 0x06
enum EEvasiveManeuverType : uint8_t
{
	EEvasiveManeuverType__Crouch0                                                    = 0,
	EEvasiveManeuverType__Dodge1                                                     = 1,
	EEvasiveManeuverType__Jump2                                                      = 2,
	EEvasiveManeuverType__JetpackStrafe3                                             = 3,
	EEvasiveManeuverType__None4                                                      = 4,
	EEvasiveManeuverType__EEvasiveManeuverType_MAX5                                  = 5
};

/// Enum /Script/FortniteAIServer.EFreeFallingMode
/// Size: 0x05
enum EFreeFallingMode : uint8_t
{
	EFreeFallingMode__Idle0                                                          = 0,
	EFreeFallingMode__Random1                                                        = 1,
	EFreeFallingMode__TowardNearestAlly2                                             = 2,
	EFreeFallingMode__PatrolPath3                                                    = 3,
	EFreeFallingMode__EFreeFallingMode_MAX4                                          = 4
};

/// Enum /Script/FortniteAIServer.EFocusingBehavior
/// Size: 0x11
enum EFocusingBehavior : uint8_t
{
	EFocusingBehavior__FocusCurrentTarget0                                           = 0,
	EFocusingBehavior__IgnoreThreatAfterTimer1                                       = 1,
	EFocusingBehavior__IgnoreThreatAlways2                                           = 2,
	EFocusingBehavior__IgnoreThreatToFlee3                                           = 3,
	EFocusingBehavior__LookAtInvestigate4                                            = 4,
	EFocusingBehavior__LookAtAmbush5                                                 = 5,
	EFocusingBehavior__LookAtHeardSound6                                             = 6,
	EFocusingBehavior__LookAtScanAround7                                             = 7,
	EFocusingBehavior__LookAtScanAroundOnly8                                         = 8,
	EFocusingBehavior__Invalid9                                                      = 9,
	EFocusingBehavior__EFocusingBehavior_MAX10                                       = 10
};

/// Enum /Script/FortniteAIServer.EPathTestQueryType
/// Size: 0x04
enum EPathTestQueryType : uint8_t
{
	EPathTestQueryType__NavmeshRaycast2D0                                            = 0,
	EPathTestQueryType__HierarchicalQuery1                                           = 1,
	EPathTestQueryType__RegularPathFinding2                                          = 2,
	EPathTestQueryType__EPathTestQueryType_MAX3                                      = 3
};

/// Enum /Script/FortniteAIServer.EBTSetBlackboardBoolExitActions
/// Size: 0x04
enum EBTSetBlackboardBoolExitActions : uint8_t
{
	EBTSetBlackboardBoolExitActions__Invert0                                         = 0,
	EBTSetBlackboardBoolExitActions__Revert1                                         = 1,
	EBTSetBlackboardBoolExitActions__Keep2                                           = 2,
	EBTSetBlackboardBoolExitActions__EBTSetBlackboardBoolExitActions_MAX3            = 3
};

/// Enum /Script/FortniteAIServer.EGlideBehavior
/// Size: 0x03
enum EGlideBehavior : uint8_t
{
	EGlideBehavior__GlideFocusOnDestination0                                         = 0,
	EGlideBehavior__GlideSurveyArea1                                                 = 1,
	EGlideBehavior__EGlideBehavior_MAX2                                              = 2
};

/// Enum /Script/FortniteAIServer.EGlideMovementType
/// Size: 0x04
enum EGlideMovementType : uint8_t
{
	EGlideMovementType__GlideMovementLinear0                                         = 0,
	EGlideMovementType__GlideMovementSpiral1                                         = 1,
	EGlideMovementType__GlideMovementSerpentine2                                     = 2,
	EGlideMovementType__EGlideMovementType_MAX3                                      = 3
};

/// Enum /Script/FortniteAIServer.EActionState
/// Size: 0x08
enum EActionState : uint8_t
{
	EActionState__TryingToEquip0                                                     = 0,
	EActionState__EquippingItem1                                                     = 1,
	EActionState__UsingItem2                                                         = 2,
	EActionState__WaitingItemTermination3                                            = 3,
	EActionState__WaitBeforeEquippingNextItem4                                       = 4,
	EActionState__ActionEndedWithNoError5                                            = 5,
	EActionState__ActionEndedWithError6                                              = 6,
	EActionState__EActionState_MAX7                                                  = 7
};

/// Enum /Script/FortniteAIServer.EEncampmentRole
/// Size: 0x04
enum EEncampmentRole : uint8_t
{
	EEncampmentRole__Guard0                                                          = 0,
	EEncampmentRole__Build1                                                          = 1,
	EEncampmentRole__Count2                                                          = 2,
	EEncampmentRole__EEncampmentRole_MAX3                                            = 3
};

/// Enum /Script/FortniteAIServer.EHasMatchingGameplayTagContainerTestType
/// Size: 0x03
enum EHasMatchingGameplayTagContainerTestType : uint8_t
{
	EHasMatchingGameplayTagContainerTestType__Any0                                   = 0,
	EHasMatchingGameplayTagContainerTestType__All1                                   = 1,
	EHasMatchingGameplayTagContainerTestType__EHasMatchingGameplayTagContainerTestType_MAX2 = 2
};

/// Enum /Script/FortniteAIServer.EFortAthenaArithmeticOperation
/// Size: 0x05
enum EFortAthenaArithmeticOperation : uint8_t
{
	EFortAthenaArithmeticOperation__Add0                                             = 0,
	EFortAthenaArithmeticOperation__Subtract1                                        = 1,
	EFortAthenaArithmeticOperation__Multiply2                                        = 2,
	EFortAthenaArithmeticOperation__Divide3                                          = 3,
	EFortAthenaArithmeticOperation__EFortAthenaArithmeticOperation_MAX4              = 4
};

/// Enum /Script/FortniteAIServer.EFortAthenaPlayContextualAnimExecutionMethod
/// Size: 0x05
enum EFortAthenaPlayContextualAnimExecutionMethod : uint8_t
{
	EFortAthenaPlayContextualAnimExecutionMethod__StartInteraction0                  = 0,
	EFortAthenaPlayContextualAnimExecutionMethod__JoinInteraction1                   = 1,
	EFortAthenaPlayContextualAnimExecutionMethod__TransitionAllActors2               = 2,
	EFortAthenaPlayContextualAnimExecutionMethod__TransitionSingleActor3             = 3,
	EFortAthenaPlayContextualAnimExecutionMethod__EFortAthenaPlayContextualAnimExecutionMethod_MAX4 = 4
};

