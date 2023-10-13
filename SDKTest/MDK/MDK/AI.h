
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/AI/BehaviorTrees/Tasks/Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C
/// Size: 0x00F9 (0x0000A0 - 0x000199)
class UTask_SetBlackboardBoolValues_C : public UBTTask_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 409;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      Update_1_                                                   OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    BoolKey1                                                    OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	DMember(bool)                                      BoolKey1Value                                               OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      Update_2_                                                   OFFSET(get<bool>, {0xD9, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    BoolKey2                                                    OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	DMember(bool)                                      BoolKey2Value                                               OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      Update_3_                                                   OFFSET(get<bool>, {0x109, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    BoolKey3                                                    OFFSET(getStruct<T>, {0x110, 40, 0, 0})
	DMember(bool)                                      BoolKey3Value                                               OFFSET(get<bool>, {0x138, 1, 0, 0})
	DMember(bool)                                      Update_4_                                                   OFFSET(get<bool>, {0x139, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    BoolKey4                                                    OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	DMember(bool)                                      BoolKey4Value                                               OFFSET(get<bool>, {0x168, 1, 0, 0})
	DMember(bool)                                      Update_5_                                                   OFFSET(get<bool>, {0x169, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    BoolKey5                                                    OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	DMember(bool)                                      BoolKey5Value                                               OFFSET(get<bool>, {0x198, 1, 0, 0})


	/// Functions
	// Function /Game/AI/BehaviorTrees/Tasks/Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C.ReceiveExecute
	// void ReceiveExecute(AActor* OwnerActor);                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/AI/BehaviorTrees/Tasks/Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C.ExecuteUbergraph_Task_SetBlackboardBoolValues
	// void ExecuteUbergraph_Task_SetBlackboardBoolValues(int32_t EntryPoint);                                                  // [0x154a140] None                 
};

/// Class /Game/AI/BehaviorTrees/Tasks/BTTask_StopMovement.BTTask_StopMovement_C
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UBTTask_StopMovement_C : public UBTTask_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Game/AI/BehaviorTrees/Tasks/BTTask_StopMovement.BTTask_StopMovement_C.ReceiveExecute
	// void ReceiveExecute(AActor* OwnerActor);                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/AI/BehaviorTrees/Tasks/BTTask_StopMovement.BTTask_StopMovement_C.ExecuteUbergraph_BTTask_StopMovement
	// void ExecuteUbergraph_BTTask_StopMovement(int32_t EntryPoint);                                                           // [0x154a140] None                 
};

/// Class /Game/AI/BehaviorTrees/Services/FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UFortBTService_ForceNormalAILOD_C : public UBTService_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x98, 8, 0, 0})


	/// Functions
	// Function /Game/AI/BehaviorTrees/Services/FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C.ReceiveActivation
	// void ReceiveActivation(AActor* OwnerActor);                                                                              // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/AI/BehaviorTrees/Services/FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C.ReceiveDeactivation
	// void ReceiveDeactivation(AActor* OwnerActor);                                                                            // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/AI/BehaviorTrees/Services/FortBTService_ForceNormalAILOD.FortBTService_ForceNormalAILOD_C.ExecuteUbergraph_FortBTService_ForceNormalAILOD
	// void ExecuteUbergraph_FortBTService_ForceNormalAILOD(int32_t EntryPoint);                                                // [0x154a140] None                 
};

/// Class /Game/AI/BehaviorTrees/Decorators/BTDecorator_IsCharging.BTDecorator_IsCharging_C
/// Size: 0x0029 (0x0000A0 - 0x0000C9)
class UBTDecorator_IsCharging_C : public UBTDecorator_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 201;

public:
	SMember(FBlackboardKeySelector)                    OtherActorKey                                               OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	DMember(bool)                                      SucceedOnNOTCharging                                        OFFSET(get<bool>, {0xC8, 1, 0, 0})


	/// Functions
	// Function /Game/AI/BehaviorTrees/Decorators/BTDecorator_IsCharging.BTDecorator_IsCharging_C.PerformConditionCheckAI
	// bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/NavFilters/NavFilter_SmasherCheapWalls.NavFilter_SmasherCheapWalls_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_SmasherCheapWalls_C : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UBTTask_AlwaysSuccess_C : public UBTTask_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C.ReceiveExecute
	// void ReceiveExecute(AActor* OwnerActor);                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C.ExecuteUbergraph_BTTask_AlwaysSuccess
	// void ExecuteUbergraph_BTTask_AlwaysSuccess(int32_t EntryPoint);                                                          // [0x154a140] None                 
};

/// Class /Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysFail.BTTask_AlwaysFail_C
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UBTTask_AlwaysFail_C : public UBTTask_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysFail.BTTask_AlwaysFail_C.ReceiveExecute
	// void ReceiveExecute(AActor* OwnerActor);                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/AI/BehaviorTrees/Tasks/BTTask_AlwaysFail.BTTask_AlwaysFail_C.ExecuteUbergraph_BTTask_AlwaysFail
	// void ExecuteUbergraph_BTTask_AlwaysFail(int32_t EntryPoint);                                                             // [0x154a140] None                 
};

/// Class /Game/AI/BehaviorTrees/Decorators/IsStandingOnStructurallyUnsupportedFloor.IsStandingOnStructurallyUnsupportedFloor_C
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UIsStandingOnStructurallyUnsupportedFloor_C : public UBTDecorator_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FBlackboardKeySelector)                    ActorToCheck                                                OFFSET(getStruct<T>, {0xA0, 40, 0, 0})


	/// Functions
	// Function /Game/AI/BehaviorTrees/Decorators/IsStandingOnStructurallyUnsupportedFloor.IsStandingOnStructurallyUnsupportedFloor_C.PerformConditionCheckAI
	// bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/BehaviorTrees/Decorators/IsStandingOnActor.IsStandingOnActor_C
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UIsStandingOnActor_C : public UBTDecorator_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FBlackboardKeySelector)                    ActorToCheck                                                OFFSET(getStruct<T>, {0xA0, 40, 0, 0})


	/// Functions
	// Function /Game/AI/BehaviorTrees/Decorators/IsStandingOnActor.IsStandingOnActor_C.PerformConditionCheckAI
	// bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/BehaviorTrees/Decorators/IsActorAirbornePawn.IsActorAirbornePawn_C
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UIsActorAirbornePawn_C : public UBTDecorator_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FBlackboardKeySelector)                    ActorKeyToTest                                              OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    TakerAirborneKeyToMoveTo                                    OFFSET(getStruct<T>, {0xC8, 40, 0, 0})


	/// Functions
	// Function /Game/AI/BehaviorTrees/Decorators/IsActorAirbornePawn.IsActorAirbornePawn_C.PerformConditionCheckAI
	// bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x154a140] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/BehaviorTrees/Decorators/GameplayTags.GameplayTags_C
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UGameplayTags_C : public UBTDecorator_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FGameplayTagContainer)                     TC_BTDecoratorGameplayTags                                  OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	DMember(bool)                                      Inverse_Condition                                           OFFSET(get<bool>, {0xC0, 1, 0, 0})
	CMember(AActor*)                                   OwnerActor                                                  OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Game/AI/BehaviorTrees/Decorators/GameplayTags.GameplayTags_C.PerformConditionCheckAI
	// bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/BehaviorTrees/Services/ActivateAbilityByTag.ActivateAbilityByTag_C
/// Size: 0x0068 (0x000098 - 0x000100)
class UActivateAbilityByTag_C : public UBTService_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x98, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_AbilityToActivate                                        OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	DMember(bool)                                      RequireCanHitTargetWithAbility                              OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      PawnTargetsOnly                                             OFFSET(get<bool>, {0xC1, 1, 0, 0})
	SMember(FGameplayTagContainer)                     ProhibitedTargetTags                                        OFFSET(getStruct<T>, {0xC8, 32, 0, 0})
	CMember(AFortAIController*)                        OwnerAIController                                           OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(AFortAIPawn*)                              OwnerPawn                                                   OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(AActor*)                                   OwnerGoalActor                                              OFFSET(get<T>, {0xF8, 8, 0, 0})


	/// Functions
	// Function /Game/AI/BehaviorTrees/Services/ActivateAbilityByTag.ActivateAbilityByTag_C.ReceiveActivation
	// void ReceiveActivation(AActor* OwnerActor);                                                                              // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/AI/BehaviorTrees/Services/ActivateAbilityByTag.ActivateAbilityByTag_C.ReceiveDeactivation
	// void ReceiveDeactivation(AActor* OwnerActor);                                                                            // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/AI/BehaviorTrees/Services/ActivateAbilityByTag.ActivateAbilityByTag_C.ReceiveTick
	// void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/AI/BehaviorTrees/Services/ActivateAbilityByTag.ActivateAbilityByTag_C.ExecuteUbergraph_ActivateAbilityByTag
	// void ExecuteUbergraph_ActivateAbilityByTag(int32_t EntryPoint);                                                          // [0x154a140] None                 
};

/// Class /Game/AI/EQS/Contexts/HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C
/// Size: 0x0001 (0x000030 - 0x000031)
class UHuntingGeneratorLocationContext_C : public UEnvQueryContext_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 49;

public:
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0x30, 1, 0, 0})


	/// Functions
	// Function /Game/AI/EQS/Contexts/HuntingGeneratorLocationContext.HuntingGeneratorLocationContext_C.ProvideSingleLocation
	// void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation);                    // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/BehaviorTrees/Decorators/IsPlayingMontage.IsPlayingMontage_C
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UIsPlayingMontage_C : public UBTDecorator_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Game/AI/BehaviorTrees/Decorators/IsPlayingMontage.IsPlayingMontage_C.PerformConditionCheckAI
	// bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/BehaviorTrees/Decorators/AllowedToSleep.AllowedToSleep_C
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UAllowedToSleep_C : public UBTDecorator_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:


	/// Functions
	// Function /Game/AI/BehaviorTrees/Decorators/AllowedToSleep.AllowedToSleep_C.PerformConditionCheckAI
	// bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/BehaviorTrees/Services/TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C
/// Size: 0x0038 (0x000098 - 0x0000D0)
class UTriggerAggroAudioFeedbackEvents_C : public UBTService_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x98, 8, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0xA0, 1, 0, 0})
	CMember(AFortAIController*)                        AIController                                                OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(AFortAIPawn*)                              AIPawn                                                      OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(AFortPawn*)                                CurrentGoalPawn                                             OFFSET(get<T>, {0xB8, 8, 0, 0})
	DMember(float)                                     DistanceBetweenAIAndGoal                                    OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(bool)                                      TriggeredVisibilityEvent                                    OFFSET(get<bool>, {0xC4, 1, 0, 0})
	DMember(bool)                                      TriggeredAcquisitionEvent                                   OFFSET(get<bool>, {0xC5, 1, 0, 0})
	DMember(float)                                     DistanceToTriggerEvents                                     OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     DistanceToResetEvents                                       OFFSET(get<float>, {0xCC, 4, 0, 0})


	/// Functions
	// Function /Game/AI/BehaviorTrees/Services/TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ReceiveTick
	// void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/AI/BehaviorTrees/Services/TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ReceiveDeactivation
	// void ReceiveDeactivation(AActor* OwnerActor);                                                                            // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/AI/BehaviorTrees/Services/TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ReceiveActivation
	// void ReceiveActivation(AActor* OwnerActor);                                                                              // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/AI/BehaviorTrees/Services/TriggerAggroAudioFeedbackEvents.TriggerAggroAudioFeedbackEvents_C.ExecuteUbergraph_TriggerAggroAudioFeedbackEvents
	// void ExecuteUbergraph_TriggerAggroAudioFeedbackEvents(int32_t EntryPoint);                                               // [0x154a140] HasDefaults          
};

/// Class /Game/AI/NavFilters/NavFilter_TakerUsePortals.NavFilter_TakerUsePortals_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_TakerUsePortals_C : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/AI/GoalSelection/GoalProviders/CircleAroundPrimaryAssignmentGoals_Blaster.CircleAroundPrimaryAssignmentGoals_Blaster_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UCircleAroundPrimaryAssignmentGoals_Blaster_C : public UFortAIGoalProvider_EnvQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Game/AI/GoalSelection/GoalProviders/CircleAroundPrimaryAssignmentGoals_MiniBoss.CircleAroundPrimaryAssignmentGoals_MiniBoss_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UCircleAroundPrimaryAssignmentGoals_MiniBoss_C : public UFortAIGoalProvider_EnvQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Game/AI/GoalSelection/GoalProviders/StructuralBuildingsAroundPrimaryAssignments.StructuralBuildingsAroundPrimaryAssignments_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UStructuralBuildingsAroundPrimaryAssignments_C : public UFortAIGoalProvider_EnvQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Game/AI/GoalSelection/GoalProviders/CircleAroundPrimaryAssignmentGoals_Flinger.CircleAroundPrimaryAssignmentGoals_Flinger_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UCircleAroundPrimaryAssignmentGoals_Flinger_C : public UFortAIGoalProvider_EnvQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Game/AI/GoalSelection/GoalProviders/CircleAroundPrimaryAssignmentGoals_Bombshell_Poison.CircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UCircleAroundPrimaryAssignmentGoals_Bombshell_Poison_C : public UFortAIGoalProvider_EnvQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Game/AI/GoalSelection/GoalProviders/StructuralBuildingsInCachedPathOfPrimaryAssignments.StructuralBuildingsInCachedPathOfPrimaryAssignments_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UStructuralBuildingsInCachedPathOfPrimaryAssignments_C : public UFortAIGoalProvider_EnvQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Game/AI/GoalSelection/GoalProviders/CircleAroundPrimaryAssignmentGoals_Bombshell.CircleAroundPrimaryAssignmentGoals_Bombshell_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UCircleAroundPrimaryAssignmentGoals_Bombshell_C : public UFortAIGoalProvider_EnvQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Game/AI/GoalSelection/GoalProviders/CircleAroundPrimaryAssignmentGoals_Taker.CircleAroundPrimaryAssignmentGoals_Taker_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UCircleAroundPrimaryAssignmentGoals_Taker_C : public UFortAIGoalProvider_EnvQuery
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Game/AI/EQS/Contexts/NearestPlayerContext.NearestPlayerContext_C
/// Size: 0x0039 (0x000030 - 0x000069)
class UNearestPlayerContext_C : public UEnvQueryContext_BlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 105;

public:
	SMember(FVector)                                   QuerierLocation                                             OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   GoalActorLocation                                           OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	DMember(float)                                     DistanceBetweenQuerierAndGoal                               OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     FinalHuntingRadiusToUse                                     OFFSET(get<float>, {0x4C, 4, 0, 0})
	SMember(FVector)                                   FinalHuntingRadiusLocationToUse                             OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	CMember(AFortAIPawn*)                              Querier                                                     OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0x68, 1, 0, 0})


	/// Functions
	// Function /Game/AI/EQS/Contexts/NearestPlayerContext.NearestPlayerContext_C.ProvideSingleLocation
	// void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation);                    // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/AI/GoalSelection/AIGoalManager.AIGoalManager_C
/// Size: 0x0008 (0x000430 - 0x000438)
class AAIGoalManager_C : public AFortAIGoalManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Game/AI/NavFilters/NavFilter_MissionBots.NavFilter_MissionBots_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_MissionBots_C : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable3.FortNavArea_JumpDownSmashable3_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_JumpDownSmashable3_C : public UFortNavArea_SmashableJump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable2.FortNavArea_JumpDownSmashable2_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_JumpDownSmashable2_C : public UFortNavArea_SmashableJump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/AI/NavAreas/FortNavArea_JumpDownSmashable.FortNavArea_JumpDownSmashable_C
/// Size: 0x0000 (0x000050 - 0x000050)
class UFortNavArea_JumpDownSmashable_C : public UFortNavArea_SmashableJump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Game/AI/NavAreas/FortNavArea_JumpDown.FortNavArea_JumpDown_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UFortNavArea_JumpDown_C : public UFortNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

