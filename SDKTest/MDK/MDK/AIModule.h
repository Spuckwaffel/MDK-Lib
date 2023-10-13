
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTasks

/// Class /Script/AIModule.AIHotSpotManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIHotSpotManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AIController
/// Size: 0x0090 (0x000380 - 0x000410)
class AAIController : public AController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	DMember(bool)                                      bStopAILogicOnUnposses                                      OFFSET(get<bool>, {0x3B8, 1, 1, 0})
	DMember(bool)                                      bLOSflag                                                    OFFSET(get<bool>, {0x3B8, 1, 1, 1})
	DMember(bool)                                      bSkipExtraLOSChecks                                         OFFSET(get<bool>, {0x3B8, 1, 1, 2})
	DMember(bool)                                      bAllowStrafe                                                OFFSET(get<bool>, {0x3B8, 1, 1, 3})
	DMember(bool)                                      bWantsPlayerState                                           OFFSET(get<bool>, {0x3B8, 1, 1, 4})
	DMember(bool)                                      bSetControlRotationFromPawnOrientation                      OFFSET(get<bool>, {0x3B8, 1, 1, 5})
	CMember(UPathFollowingComponent*)                  PathFollowingComponent                                      OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UBrainComponent*)                          BrainComponent                                              OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UAIPerceptionComponent*)                   PerceptionComponent                                         OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UPawnActionsComponent*)                    ActionsComp                                                 OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UBlackboardComponent*)                     Blackboard                                                  OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UGameplayTasksComponent*)                  CachedGameplayTasksComponent                                OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UClass*)                                   DefaultNavigationFilterClass                                OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UMulticastDelegate)                        ReceiveMoveCompleted                                        OFFSET(get<T>, {0x3F8, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIController.UseBlackboard
	// bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent*& BlackboardComponent);                        // [0x1f3b800] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIController.UnclaimTaskResource
	// void UnclaimTaskResource(UClass* ResourceClass);                                                                         // [0x1f3b5d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetMoveBlockDetection
	// void SetMoveBlockDetection(bool bEnable);                                                                                // [0x1f3b2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.RunBehaviorTree
	// bool RunBehaviorTree(UBehaviorTree* BTAsset);                                                                            // [0x1f3b0d0] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.OnUsingBlackBoard
	// void OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);                          // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.AIController.OnUnpossess
	// void OnUnpossess(APawn* UnpossessedPawn);                                                                                // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AIController.OnPossess
	// void OnPossess(APawn* PossessedPawn);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AIController.OnGameplayTaskResourcesClaimed
	// void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);            // [0x1f3aae0] Native|Public        
	// Function /Script/AIModule.AIController.MoveToLocation
	// TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath); // [0x1f3a870] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.MoveToActor
	// TEnumAsByte<EPathFollowingRequestResult> MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath); // [0x1f3a650] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocus
	// void K2_SetFocus(AActor* NewFocus);                                                                                      // [0x1f3a4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocalPoint
	// void K2_SetFocalPoint(FVector FP);                                                                                       // [0x1f3a430] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_ClearFocus
	// void K2_ClearFocus();                                                                                                    // [0x1f3a410] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.HasPartialPath
	// bool HasPartialPath();                                                                                                   // [0x1f3a230] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetPathFollowingComponent
	// UPathFollowingComponent* GetPathFollowingComponent();                                                                    // [0x1f39f50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetMoveStatus
	// TEnumAsByte<EPathFollowingStatus> GetMoveStatus();                                                                       // [0x1f39f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetImmediateMoveDestination
	// FVector GetImmediateMoveDestination();                                                                                   // [0x1f39df0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocusActor
	// AActor* GetFocusActor();                                                                                                 // [0x1f39dc0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPointOnActor
	// FVector GetFocalPointOnActor(AActor* Actor);                                                                             // [0x1f39d10] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPoint
	// FVector GetFocalPoint();                                                                                                 // [0x1f39cd0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetAIPerceptionComponent
	// UAIPerceptionComponent* GetAIPerceptionComponent();                                                                      // [0x1f399c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIController.ClaimTaskResource
	// void ClaimTaskResource(UClass* ResourceClass);                                                                           // [0x1f39700] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIPerceptionComponent
/// Size: 0x00D8 (0x0000F0 - 0x0001C8)
class UAIPerceptionComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(TArray<UAISenseConfig*>)                   SensesConfig                                                OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(UClass*)                                   DominantSense                                               OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(AAIController*)                            AIOwner                                                     OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(UMulticastDelegate)                        OnPerceptionUpdated                                         OFFSET(get<T>, {0x1A0, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnTargetPerceptionUpdated                                   OFFSET(get<T>, {0x1B0, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIPerceptionComponent.SetSenseEnabled
	// void SetSenseEnabled(UClass* SenseClass, bool bEnable);                                                                  // [0x1f3b330] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	// void RequestStimuliListenerUpdate();                                                                                     // [0x1f3b0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.OnOwnerEndPlay
	// void OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                           // [0x1f3ac70] Final|Native|Public  
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	// void GetPerceivedHostileActors(TArray<AActor*>& OutActors);                                                              // [0x1f3a060] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedActors
	// void GetPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors);                                                 // [0x1f39f70] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	// void GetKnownPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors);                                            // [0x1f39e30] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	// void GetCurrentlyPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors);                                        // [0x1f39be0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetActorsPerception
	// bool GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo& Info);                                            // [0x1f399e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.PathFollowingComponent
/// Size: 0x02C0 (0x0000F0 - 0x0003B0)
class UPathFollowingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(UNavMovementComponent*)                    MovementComp                                                OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(ANavigationData*)                          MyNavData                                                   OFFSET(get<T>, {0x230, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.PathFollowingComponent.OnNavDataRegistered
	// void OnNavDataRegistered(ANavigationData* NavData);                                                                      // [0x1f519a0] Final|Native|Protected 
	// Function /Script/AIModule.PathFollowingComponent.OnActorBump
	// void OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);                         // [0x1f51800] Native|Public|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PathFollowingComponent.GetPathDestination
	// FVector GetPathDestination();                                                                                            // [0x1f51460] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PathFollowingComponent.GetPathActionType
	// TEnumAsByte<EPathFollowingAction> GetPathActionType();                                                                   // [0x1f51430] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.CrowdFollowingComponent
/// Size: 0x0050 (0x0003B0 - 0x000400)
class UCrowdFollowingComponent : public UPathFollowingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	SMember(FVector)                                   CrowdAgentMoveDirection                                     OFFSET(getStruct<T>, {0x3B0, 12, 0, 0})
	CMember(UCharacterMovementComponent*)              CharacterMovement                                           OFFSET(get<T>, {0x3C0, 8, 0, 0})
	SMember(FNavAvoidanceMask)                         AvoidanceGroup                                              OFFSET(getStruct<T>, {0x3C8, 4, 0, 0})
	SMember(FNavAvoidanceMask)                         GroupsToAvoid                                               OFFSET(getStruct<T>, {0x3CC, 4, 0, 0})
	SMember(FNavAvoidanceMask)                         GroupsToIgnore                                              OFFSET(getStruct<T>, {0x3D0, 4, 0, 0})


	/// Functions
	// Function /Script/AIModule.CrowdFollowingComponent.SuspendCrowdSteering
	// void SuspendCrowdSteering(bool bSuspend);                                                                                // [0x1f4a9c0] Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIDataProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIDataProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.EnvQueryContext
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AISystem
/// Size: 0x00D8 (0x000050 - 0x000128)
class UAISystem : public UAISystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FSoftClassPath)                            PerceptionSystemClassName                                   OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FSoftClassPath)                            HotSpotManagerClassName                                     OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	DMember(float)                                     AcceptanceRadius                                            OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     PathfollowingRegularPathPointAcceptanceRadius               OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     PathfollowingNavLinkAcceptanceRadius                        OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(bool)                                      bFinishMoveOnGoalOverlap                                    OFFSET(get<bool>, {0x8C, 1, 0, 0})
	DMember(bool)                                      bAcceptPartialPaths                                         OFFSET(get<bool>, {0x8D, 1, 0, 0})
	DMember(bool)                                      bAllowStrafing                                              OFFSET(get<bool>, {0x8E, 1, 0, 0})
	DMember(bool)                                      bEnableBTAITasks                                            OFFSET(get<bool>, {0x8F, 1, 0, 0})
	DMember(bool)                                      bAllowControllersAsEQSQuerier                               OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bEnableDebuggerPlugin                                       OFFSET(get<bool>, {0x91, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DefaultSightCollisionChannel                                OFFSET(get<T>, {0x92, 1, 0, 0})
	CMember(UBehaviorTreeManager*)                     BehaviorTreeManager                                         OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(UEnvQueryManager*)                         EnvironmentQueryManager                                     OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UAIPerceptionSystem*)                      PerceptionSystem                                            OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TArray<UAIAsyncTaskBlueprintProxy*>)       AllProxyObjects                                             OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(UAIHotSpotManager*)                        HotSpotManager                                              OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UNavLocalGridManager*)                     NavLocalGrids                                               OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISystem.AILoggingVerbose
	// void AILoggingVerbose();                                                                                                 // [0x2663c10] Exec|Native|Public   
	// Function /Script/AIModule.AISystem.AIIgnorePlayers
	// void AIIgnorePlayers();                                                                                                  // [0x116fff0] Exec|Native|Public   
};

/// Class /Script/AIModule.AITask
/// Size: 0x0008 (0x000068 - 0x000070)
class UAITask : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(AAIController*)                            OwnerController                                             OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/AIModule.AITask_MoveTo
/// Size: 0x00A0 (0x000070 - 0x000110)
class UAITask_MoveTo : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(UMulticastDelegate)                        OnRequestFailed                                             OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnMoveFinished                                              OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FAIMoveRequest)                            MoveRequest                                                 OFFSET(getStruct<T>, {0x90, 64, 0, 0})


	/// Functions
	// Function /Script/AIModule.AITask_MoveTo.AIMoveTo
	// UAITask_MoveTo* AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking); // [0x1f3f410] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AIPerceptionSystem
/// Size: 0x0108 (0x000028 - 0x000130)
class UAIPerceptionSystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<UAISense*>)                         Senses                                                      OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(float)                                     PerceptionAgingRate                                         OFFSET(get<float>, {0x90, 4, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIPerceptionSystem.ReportPerceptionEvent
	// void ReportPerceptionEvent(UObject* WorldContextObject, UAISenseEvent* PerceptionEvent);                                 // [0x1f3b000] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.ReportEvent
	// void ReportEvent(UAISenseEvent* PerceptionEvent);                                                                        // [0x1f3af80] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	// bool RegisterPerceptionStimuliSource(UObject* WorldContextObject, UClass* Sense, AActor* Target);                        // [0x1f3ae70] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	// void OnPerceptionStimuliSourceEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                         // [0x1f3ad30] Final|Native|Protected 
	// Function /Script/AIModule.AIPerceptionSystem.GetSenseClassForStimulus
	// UClass* GetSenseClassForStimulus(UObject* WorldContextObject, FAIStimulus& Stimulus);                                    // [0x1f3a110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.BrainComponent
/// Size: 0x0060 (0x0000F0 - 0x000150)
class UBrainComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(UBlackboardComponent*)                     BlackboardComp                                              OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(AAIController*)                            AIOwner                                                     OFFSET(get<T>, {0x100, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.BrainComponent.StopLogic
	// void StopLogic(FString Reason);                                                                                          // [0x1f46cc0] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.RestartLogic
	// void RestartLogic();                                                                                                     // [0x1f45fd0] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.IsRunning
	// bool IsRunning();                                                                                                        // [0x1f45fa0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BrainComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0x1f45f70] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BehaviorTreeComponent
/// Size: 0x0140 (0x000150 - 0x000290)
class UBehaviorTreeComponent : public UBrainComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(TArray<UBTNode*>)                          NodeInstances                                               OFFSET(get<T>, {0x170, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.BehaviorTreeComponent.SetDynamicSubtree
	// void SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset);                                            // [0x1f409b0] Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	// float GetTagCooldownEndTime(FGameplayTag CooldownTag);                                                                   // [0x1f3fb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BehaviorTreeComponent.AddCooldownTagDuration
	// void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);              // [0x1f3f6a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.BTNode
/// Size: 0x0030 (0x000028 - 0x000058)
class UBTNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   NodeName                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(UBehaviorTree*)                            TreeAsset                                                   OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UBTCompositeNode*)                         ParentNode                                                  OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/AIModule.BTAuxiliaryNode
/// Size: 0x0008 (0x000058 - 0x000060)
class UBTAuxiliaryNode : public UBTNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/AIModule.BTService
/// Size: 0x0010 (0x000060 - 0x000070)
class UBTService : public UBTAuxiliaryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     Interval                                                    OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     RandomDeviation                                             OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      bCallTickOnSearchStart                                      OFFSET(get<bool>, {0x68, 1, 1, 0})
	DMember(bool)                                      bRestartTimerOnEachActivation                               OFFSET(get<bool>, {0x68, 1, 1, 1})
};

/// Class /Script/AIModule.BTDecorator
/// Size: 0x0008 (0x000060 - 0x000068)
class UBTDecorator : public UBTAuxiliaryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bInverseCondition                                           OFFSET(get<bool>, {0x60, 1, 1, 7})
	CMember(TEnumAsByte<EBTFlowAbortMode>)             FlowAbortMode                                               OFFSET(get<T>, {0x64, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_BlackboardBase
/// Size: 0x0028 (0x000068 - 0x000090)
class UBTDecorator_BlackboardBase : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               OFFSET(getStruct<T>, {0x68, 40, 0, 0})
};

/// Class /Script/AIModule.BTService_BlackboardBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTService_BlackboardBase : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               OFFSET(getStruct<T>, {0x70, 40, 0, 0})
};

/// Class /Script/AIModule.BTTaskNode
/// Size: 0x0018 (0x000058 - 0x000070)
class UBTTaskNode : public UBTNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<UBTService*>)                       Services                                                    OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bIgnoreRestartSelf                                          OFFSET(get<bool>, {0x68, 1, 1, 0})
};

/// Class /Script/AIModule.BTTask_BlackboardBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTTask_BlackboardBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               OFFSET(getStruct<T>, {0x70, 40, 0, 0})
};

/// Class /Script/AIModule.BTTask_GameplayTaskBase
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bWaitForGameplayTask                                        OFFSET(get<bool>, {0x70, 1, 1, 0})
};

/// Class /Script/AIModule.BTTask_MoveTo
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     AcceptableRadius                                            OFFSET(get<float>, {0x98, 4, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(float)                                     ObservedBlackboardValueTolerance                            OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bObserveBlackboardValue                                     OFFSET(get<bool>, {0xAC, 1, 1, 0})
	DMember(bool)                                      bAllowStrafe                                                OFFSET(get<bool>, {0xAC, 1, 1, 1})
	DMember(bool)                                      bAllowPartialPath                                           OFFSET(get<bool>, {0xAC, 1, 1, 2})
	DMember(bool)                                      bTrackMovingGoal                                            OFFSET(get<bool>, {0xAC, 1, 1, 3})
	DMember(bool)                                      bProjectGoalLocation                                        OFFSET(get<bool>, {0xAC, 1, 1, 4})
	DMember(bool)                                      bReachTestIncludesAgentRadius                               OFFSET(get<bool>, {0xAC, 1, 1, 5})
	DMember(bool)                                      bReachTestIncludesGoalRadius                                OFFSET(get<bool>, {0xAC, 1, 1, 6})
	DMember(bool)                                      bStopOnOverlap                                              OFFSET(get<bool>, {0xAC, 1, 1, 7})
	DMember(bool)                                      bStopOnOverlapNeedsUpdate                                   OFFSET(get<bool>, {0xAD, 1, 1, 0})
};

/// Class /Script/AIModule.CrowdManager
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UCrowdManager : public UCrowdManagerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(ANavigationData*)                          MyNavData                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FCrowdAvoidanceConfig>)             AvoidanceConfig                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCrowdAvoidanceSamplingPattern>)    SamplingPatterns                                            OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   MaxAgents                                                   OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(float)                                     MaxAgentRadius                                              OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   MaxAvoidedAgents                                            OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   MaxAvoidedWalls                                             OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(float)                                     NavmeshCheckInterval                                        OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     PathOptimizationInterval                                    OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     SeparationDirClamp                                          OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     PathOffsetRadiusMultiplier                                  OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bResolveCollisions                                          OFFSET(get<bool>, {0x70, 1, 1, 4})
};

/// Class /Script/AIModule.EnvQueryNode
/// Size: 0x0008 (0x000028 - 0x000030)
class UEnvQueryNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   VerNum                                                      OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator
/// Size: 0x0020 (0x000030 - 0x000050)
class UEnvQueryGenerator : public UEnvQueryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   OptionName                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(UClass*)                                   ItemType                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bAutoSortTests                                              OFFSET(get<bool>, {0x48, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_ActorsOfClass
/// Size: 0x0070 (0x000050 - 0x0000C0)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UClass*)                                   SearchedActorClass                                          OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderBoolValue)                  GenerateOnlyActorsInRadius                                  OFFSET(getStruct<T>, {0x58, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SearchRadius                                                OFFSET(getStruct<T>, {0x88, 48, 0, 0})
	CMember(UClass*)                                   SearchCenter                                                OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_ProjectedPoints
/// Size: 0x0030 (0x000050 - 0x000080)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FEnvTraceData)                             ProjectionData                                              OFFSET(getStruct<T>, {0x50, 48, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_OnCircle
/// Size: 0x0168 (0x000080 - 0x0001E8)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FAIDataProviderFloatValue)                 CircleRadius                                                OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
	SMember(FAIDataProviderIntValue)                   NumberOfPoints                                              OFFSET(getStruct<T>, {0xE0, 48, 0, 0})
	CMember(EPointOnCircleSpacingMethod)               PointOnCircleSpacingMethod                                  OFFSET(get<T>, {0x110, 1, 0, 0})
	SMember(FEnvDirection)                             ArcDirection                                                OFFSET(getStruct<T>, {0x118, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ArcAngle                                                    OFFSET(getStruct<T>, {0x138, 48, 0, 0})
	DMember(float)                                     AngleRadians                                                OFFSET(get<float>, {0x168, 4, 0, 0})
	CMember(UClass*)                                   CircleCenter                                                OFFSET(get<T>, {0x170, 8, 0, 0})
	DMember(bool)                                      bIgnoreAnyContextActorsWhenGeneratingCircle                 OFFSET(get<bool>, {0x178, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 CircleCenterZOffset                                         OFFSET(getStruct<T>, {0x180, 48, 0, 0})
	SMember(FEnvTraceData)                             TraceData                                                   OFFSET(getStruct<T>, {0x1B0, 48, 0, 0})
	DMember(bool)                                      bDefineArc                                                  OFFSET(get<bool>, {0x1E0, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryItemType
/// Size: 0x0008 (0x000028 - 0x000030)
class UEnvQueryItemType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryItemType_VectorBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_VectorBase : public UEnvQueryItemType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryItemType_ActorBase
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_ActorBase : public UEnvQueryItemType_VectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryItemType_Point
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryTest
/// Size: 0x0190 (0x000030 - 0x0001C0)
class UEnvQueryTest : public UEnvQueryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	DMember(int32_t)                                   TestOrder                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TEnumAsByte<EEnvTestPurpose>)              TestPurpose                                                 OFFSET(get<T>, {0x34, 1, 0, 0})
	SMember(FString)                                   TestComment                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EEnvTestFilterOperator>)       MultipleContextFilterOp                                     OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EEnvTestScoreOperator>)        MultipleContextScoreOp                                      OFFSET(get<T>, {0x49, 1, 0, 0})
	CMember(TEnumAsByte<EEnvTestFilterType>)           FilterType                                                  OFFSET(get<T>, {0x4A, 1, 0, 0})
	SMember(FAIDataProviderBoolValue)                  BoolValue                                                   OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 FloatValueMin                                               OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 FloatValueMax                                               OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
	CMember(TEnumAsByte<EEnvTestScoreEquation>)        ScoringEquation                                             OFFSET(get<T>, {0xE1, 1, 0, 0})
	CMember(TEnumAsByte<EEnvQueryTestClamping>)        ClampMinType                                                OFFSET(get<T>, {0xE2, 1, 0, 0})
	CMember(TEnumAsByte<EEnvQueryTestClamping>)        ClampMaxType                                                OFFSET(get<T>, {0xE3, 1, 0, 0})
	CMember(EEQSNormalizationType)                     NormalizationType                                           OFFSET(get<T>, {0xE4, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreClampMin                                               OFFSET(getStruct<T>, {0xE8, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreClampMax                                               OFFSET(getStruct<T>, {0x118, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoringFactor                                               OFFSET(getStruct<T>, {0x148, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ReferenceValue                                              OFFSET(getStruct<T>, {0x178, 48, 0, 0})
	DMember(bool)                                      bDefineReferenceValue                                       OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(bool)                                      bWorkOnFloatValues                                          OFFSET(get<bool>, {0x1B8, 1, 1, 0})
};

/// Class /Script/AIModule.GenericTeamAgentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGenericTeamAgentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AIAsyncTaskBlueprintProxy
/// Size: 0x0040 (0x000028 - 0x000068)
class UAIAsyncTaskBlueprintProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFail                                                      OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	// void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x1f3abb0] Final|Native|Public  
};

/// Class /Script/AIModule.AIBlueprintHelperLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation
	// void UnlockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic);              // [0x1f3b650] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass
	// APawn* SpawnAIFromClass(UObject* WorldContextObject, UClass* PawnClass, UBehaviorTree* BehaviorTree, FVector Location, FRotator Rotation, bool bNoCollisionFail); // [0x1f3b400] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.SendAIMessage
	// void SendAIMessage(APawn* Target, FName MESSAGE, UObject* MessageSource, bool bSuccess);                                 // [0x1f3b170] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation
	// void LockAIResourcesWithAnimation(UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic);                    // [0x1f3a540] Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIRotation
	// bool IsValidAIRotation(FRotator Rotation);                                                                               // [0x1f3a380] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAILocation
	// bool IsValidAILocation(FVector Location);                                                                                // [0x1f3a2f0] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.IsValidAIDirection
	// bool IsValidAIDirection(FVector DirectionVector);                                                                        // [0x1f3a260] Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetCurrentPath
	// UNavigationPath* GetCurrentPath(AController* Controller);                                                                // [0x1f39b60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetBlackboard
	// UBlackboardComponent* GetBlackboard(AActor* Target);                                                                     // [0x1f39ae0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.GetAIController
	// AAIController* GetAIController(AActor* ControlledActor);                                                                 // [0x1f39940] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject
	// UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(UObject* WorldContextObject, APawn* Pawn, FVector Destination, AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // [0x1f39780] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AIDataProvider_QueryParams
/// Size: 0x0018 (0x000028 - 0x000040)
class UAIDataProvider_QueryParams : public UAIDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   IntValue                                                    OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/AIModule.AIDataProvider_Random
/// Size: 0x0010 (0x000040 - 0x000050)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Min                                                         OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Max                                                         OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      bInteger                                                    OFFSET(get<bool>, {0x48, 1, 1, 0})
};

/// Class /Script/AIModule.AIPerceptionListenerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIPerceptionListenerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AIPerceptionStimuliSourceComponent
/// Size: 0x0018 (0x0000F0 - 0x000108)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(bool)                                      bAutoRegisterAsSource                                       OFFSET(get<bool>, {0xF0, 1, 1, 0})
	CMember(TArray<UClass*>)                           RegisterAsSourceForSenses                                   OFFSET(get<T>, {0xF8, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	// void UnregisterFromSense(UClass* SenseClass);                                                                            // [0x1f3b780] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	// void UnregisterFromPerceptionSystem();                                                                                   // [0x1f3b760] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	// void RegisterWithPerceptionSystem();                                                                                     // [0x1f3af60] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
	// void RegisterForSense(UClass* SenseClass);                                                                               // [0x1f3adf0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIResourceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIResourceInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AIResource_Movement
/// Size: 0x0000 (0x000038 - 0x000038)
class UAIResource_Movement : public UGameplayTaskResource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AIModule.AIResource_Logic
/// Size: 0x0000 (0x000038 - 0x000038)
class UAIResource_Logic : public UGameplayTaskResource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AIModule.AISense
/// Size: 0x00F8 (0x000028 - 0x000120)
class UAISense : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(float)                                     DefaultExpirationAge                                        OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(EAISenseNotifyType)                        NotifyType                                                  OFFSET(get<T>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bWantsNewPawnNotification                                   OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bAutoRegisterAllPawnsAsSources                              OFFSET(get<bool>, {0x30, 1, 1, 1})
	CMember(UAIPerceptionSystem*)                      PerceptionSystemInstance                                    OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/AIModule.AISense_Blueprint
/// Size: 0x0030 (0x000120 - 0x000150)
class UAISense_Blueprint : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(UClass*)                                   ListenerDataType                                            OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(TArray<UAIPerceptionComponent*>)           ListenerContainer                                           OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<UAISenseEvent*>)                    UnprocessedEvents                                           OFFSET(get<T>, {0x138, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Blueprint.OnUpdate
	// float OnUpdate(TArray<UAISenseEvent*>& EventsToProcess);                                                                 // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUpdated
	// void OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);                              // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUnregistered
	// void OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerRegistered
	// void OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);                           // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.K2_OnNewPawn
	// void K2_OnNewPawn(APawn* NewPawn);                                                                                       // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerComponents
	// void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents);                                      // [0x1f3f8f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerActors
	// void GetAllListenerActors(TArray<AActor*>& ListenerActors);                                                              // [0x1f3f840] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.AISense_Damage
/// Size: 0x0010 (0x000120 - 0x000130)
class UAISense_Damage : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FAIDamageEvent>)                    RegisteredEvents                                            OFFSET(get<T>, {0x120, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Damage.ReportDamageEvent
	// void ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation); // [0x1f40360] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Hearing
/// Size: 0x0070 (0x000120 - 0x000190)
class UAISense_Hearing : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(TArray<FAINoiseEvent>)                     NoiseEvents                                                 OFFSET(get<T>, {0x120, 16, 0, 0})
	DMember(float)                                     SpeedOfSoundSq                                              OFFSET(get<float>, {0x130, 4, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Hearing.ReportNoiseEvent
	// void ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName Tag); // [0x1f40530] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Prediction
/// Size: 0x0010 (0x000120 - 0x000130)
class UAISense_Prediction : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FAIPredictionEvent>)                RegisteredEvents                                            OFFSET(get<T>, {0x120, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Prediction.RequestPawnPredictionEvent
	// void RequestPawnPredictionEvent(APawn* Requestor, AActor* PredictedActor, float PredictionTime);                         // [0x1f407f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AISense_Prediction.RequestControllerPredictionEvent
	// void RequestControllerPredictionEvent(AAIController* Requestor, AActor* PredictedActor, float PredictionTime);           // [0x1f406f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Sight
/// Size: 0x00E0 (0x000120 - 0x000200)
class UAISense_Sight : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(int32_t)                                   MaxTracesPerTick                                            OFFSET(get<int32_t>, {0x1D0, 4, 0, 0})
	DMember(int32_t)                                   MinQueriesPerTimeSliceCheck                                 OFFSET(get<int32_t>, {0x1D4, 4, 0, 0})
	DMember(double)                                    MaxTimeSlicePerTick                                         OFFSET(get<double>, {0x1D8, 8, 0, 0})
	DMember(float)                                     HighImportanceQueryDistanceThreshold                        OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(float)                                     MaxQueryImportance                                          OFFSET(get<float>, {0x1E8, 4, 0, 0})
	DMember(float)                                     SightLimitQueryImportance                                   OFFSET(get<float>, {0x1EC, 4, 0, 0})
};

/// Class /Script/AIModule.AISense_Team
/// Size: 0x0010 (0x000120 - 0x000130)
class UAISense_Team : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FAITeamStimulusEvent>)              RegisteredEvents                                            OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/AIModule.AISense_Touch
/// Size: 0x0010 (0x000120 - 0x000130)
class UAISense_Touch : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FAITouchEvent>)                     RegisteredEvents                                            OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/AIModule.AISenseBlueprintListener
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UAISenseBlueprintListener : public UUserDefinedStruct
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/AIModule.AISenseConfig
/// Size: 0x0020 (0x000028 - 0x000048)
class UAISenseConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FColor)                                    DebugColor                                                  OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxAge                                                      OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bStartsEnabled                                              OFFSET(get<bool>, {0x30, 1, 1, 0})
};

/// Class /Script/AIModule.AISenseConfig_Blueprint
/// Size: 0x0008 (0x000048 - 0x000050)
class UAISenseConfig_Blueprint : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UClass*)                                   Implementation                                              OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/AIModule.AISenseConfig_Damage
/// Size: 0x0008 (0x000048 - 0x000050)
class UAISenseConfig_Damage : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UClass*)                                   Implementation                                              OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/AIModule.AISenseConfig_Hearing
/// Size: 0x0018 (0x000048 - 0x000060)
class UAISenseConfig_Hearing : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UClass*)                                   Implementation                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     HearingRange                                                OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LoSHearingRange                                             OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUseLoSHearing                                              OFFSET(get<bool>, {0x58, 1, 1, 0})
	SMember(FAISenseAffiliationFilter)                 DetectionByAffiliation                                      OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
};

/// Class /Script/AIModule.AISenseConfig_Prediction
/// Size: 0x0000 (0x000048 - 0x000048)
class UAISenseConfig_Prediction : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/AIModule.AISenseConfig_Sight
/// Size: 0x0020 (0x000048 - 0x000068)
class UAISenseConfig_Sight : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UClass*)                                   Implementation                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     SightRadius                                                 OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LoseSightRadius                                             OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     PeripheralVisionAngleDegrees                                OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FAISenseAffiliationFilter)                 DetectionByAffiliation                                      OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
	DMember(float)                                     AutoSuccessRangeFromLastSeenLocation                        OFFSET(get<float>, {0x60, 4, 0, 0})
};

/// Class /Script/AIModule.AISenseConfig_Team
/// Size: 0x0000 (0x000048 - 0x000048)
class UAISenseConfig_Team : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/AIModule.AISenseConfig_Touch
/// Size: 0x0000 (0x000048 - 0x000048)
class UAISenseConfig_Touch : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/AIModule.AISenseEvent
/// Size: 0x0000 (0x000028 - 0x000028)
class UAISenseEvent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AISenseEvent_Damage
/// Size: 0x0030 (0x000028 - 0x000058)
class UAISenseEvent_Damage : public UAISenseEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FAIDamageEvent)                            Event                                                       OFFSET(getStruct<T>, {0x28, 48, 0, 0})
};

/// Class /Script/AIModule.AISenseEvent_Hearing
/// Size: 0x0030 (0x000028 - 0x000058)
class UAISenseEvent_Hearing : public UAISenseEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FAINoiseEvent)                             Event                                                       OFFSET(getStruct<T>, {0x28, 48, 0, 0})
};

/// Class /Script/AIModule.AISightTargetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAISightTargetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AITask_LockLogic
/// Size: 0x0000 (0x000070 - 0x000070)
class UAITask_LockLogic : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AIModule.AITask_RunEQS
/// Size: 0x00E0 (0x000070 - 0x000150)
class UAITask_RunEQS : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:


	/// Functions
	// Function /Script/AIModule.AITask_RunEQS.RunEQS
	// UAITask_RunEQS* RunEQS(AAIController* Controller, UEnvQuery* QueryTemplate);                                             // [0x1f408f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.BehaviorTree
/// Size: 0x0038 (0x000028 - 0x000060)
class UBehaviorTree : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UBTCompositeNode*)                         RootNode                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UBlackboardData*)                          BlackboardAsset                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<UBTDecorator*>)                     RootDecorators                                              OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FBTDecoratorLogic>)                 RootDecoratorOps                                            OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/AIModule.BehaviorTreeManager
/// Size: 0x0028 (0x000028 - 0x000050)
class UBehaviorTreeManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   MaxDebuggerSteps                                            OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FBehaviorTreeTemplateInfo>)         LoadedTemplates                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UBehaviorTreeComponent*>)           ActiveComponents                                            OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/AIModule.BehaviorTreeTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class UBehaviorTreeTypes : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.BlackboardComponent
/// Size: 0x00F8 (0x0000F0 - 0x0001E8)
class UBlackboardComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	CMember(UBrainComponent*)                          BrainComp                                                   OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(UBlackboardData*)                          BlackboardAsset                                             OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TArray<UBlackboardKeyType*>)               KeyInstances                                                OFFSET(get<T>, {0x120, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.BlackboardComponent.SetValueAsVector
	// void SetValueAsVector(FName& KeyName, FVector VectorValue);                                                              // [0x1f41260] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsString
	// void SetValueAsString(FName& KeyName, FString StringValue);                                                              // [0x1f41120] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsRotator
	// void SetValueAsRotator(FName& KeyName, FRotator VectorValue);                                                            // [0x1f41030] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsObject
	// void SetValueAsObject(FName& KeyName, UObject* ObjectValue);                                                             // [0x1f40f60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsName
	// void SetValueAsName(FName& KeyName, FName NameValue);                                                                    // [0x1f40e90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsInt
	// void SetValueAsInt(FName& KeyName, int32_t IntValue);                                                                    // [0x1f40dc0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsFloat
	// void SetValueAsFloat(FName& KeyName, float FloatValue);                                                                  // [0x1f40cf0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsEnum
	// void SetValueAsEnum(FName& KeyName, unsigned char EnumValue);                                                            // [0x1f40c20] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsClass
	// void SetValueAsClass(FName& KeyName, UClass* ClassValue);                                                                // [0x1f40b50] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsBool
	// void SetValueAsBool(FName& KeyName, bool BoolValue);                                                                     // [0x1f40a80] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.IsVectorValueSet
	// bool IsVectorValueSet(FName& KeyName);                                                                                   // [0x1f402c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsVector
	// FVector GetValueAsVector(FName& KeyName);                                                                                // [0x1f40210] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsString
	// FString GetValueAsString(FName& KeyName);                                                                                // [0x1f40130] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsRotator
	// FRotator GetValueAsRotator(FName& KeyName);                                                                              // [0x1f40080] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsObject
	// UObject* GetValueAsObject(FName& KeyName);                                                                               // [0x1f3ffe0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsName
	// FName GetValueAsName(FName& KeyName);                                                                                    // [0x1f3ff40] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsInt
	// int32_t GetValueAsInt(FName& KeyName);                                                                                   // [0x1f3fea0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsFloat
	// float GetValueAsFloat(FName& KeyName);                                                                                   // [0x1f3fe00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsEnum
	// unsigned char GetValueAsEnum(FName& KeyName);                                                                            // [0x1f3fd60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsClass
	// UClass* GetValueAsClass(FName& KeyName);                                                                                 // [0x1f3fcc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsBool
	// bool GetValueAsBool(FName& KeyName);                                                                                     // [0x1f3fc20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetRotationFromEntry
	// bool GetRotationFromEntry(FName& KeyName, FRotator& ResultRotation);                                                     // [0x1f3fa90] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetLocationFromEntry
	// bool GetLocationFromEntry(FName& KeyName, FVector& ResultLocation);                                                      // [0x1f3f9a0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.ClearValue
	// void ClearValue(FName& KeyName);                                                                                         // [0x1f3f7b0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.BlackboardData
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UBlackboardData*)                          Parent                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FBlackboardEntry>)                  Keys                                                        OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bHasSynchronizedKeys                                        OFFSET(get<bool>, {0x48, 1, 1, 0})
};

/// Class /Script/AIModule.BlackboardKeyType
/// Size: 0x0008 (0x000028 - 0x000030)
class UBlackboardKeyType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.BlackboardKeyType_Bool
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_Bool : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.BlackboardKeyType_Class
/// Size: 0x0008 (0x000030 - 0x000038)
class UBlackboardKeyType_Class : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UClass*)                                   BASEClass                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Enum
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UEnum*)                                    EnumType                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FString)                                   EnumName                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bIsEnumNameValid                                            OFFSET(get<bool>, {0x48, 1, 1, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Float
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_Float : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.BlackboardKeyType_Int
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_Int : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.BlackboardKeyType_Name
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_Name : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.BlackboardKeyType_NativeEnum
/// Size: 0x0018 (0x000030 - 0x000048)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   EnumName                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(UEnum*)                                    EnumType                                                    OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Object
/// Size: 0x0008 (0x000030 - 0x000038)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UClass*)                                   BASEClass                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Rotator
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_Rotator : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.BlackboardKeyType_String
/// Size: 0x0010 (0x000030 - 0x000040)
class UBlackboardKeyType_String : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   StringValue                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Vector
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_Vector : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.BTCompositeNode
/// Size: 0x0078 (0x000058 - 0x0000D0)
class UBTCompositeNode : public UBTNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FBTCompositeChild>)                 Children                                                    OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<UBTService*>)                       Services                                                    OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bApplyDecoratorScope                                        OFFSET(get<bool>, {0xC0, 1, 1, 0})
};

/// Class /Script/AIModule.BTComposite_Selector
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UBTComposite_Selector : public UBTCompositeNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/AIModule.BTComposite_Sequence
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UBTComposite_Sequence : public UBTCompositeNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/AIModule.BTComposite_SimpleParallel
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/AIModule.BTDecorator_Blackboard
/// Size: 0x0030 (0x000090 - 0x0000C0)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(int32_t)                                   IntValue                                                    OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x94, 4, 0, 0})
	SMember(FString)                                   StringValue                                                 OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   CachedDescription                                           OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	DMember(unsigned char)                             OperationType                                               OFFSET(get<unsigned char>, {0xB8, 1, 0, 0})
	CMember(TEnumAsByte<EBTBlackboardRestart>)         NotifyObserver                                              OFFSET(get<T>, {0xB9, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_BlueprintBase
/// Size: 0x0038 (0x000068 - 0x0000A0)
class UBTDecorator_BlueprintBase : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(AAIController*)                            AIOwner                                                     OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(AActor*)                                   ActorOwner                                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TArray<FName>)                             ObservedKeyNames                                            OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bShowPropertyDetails                                        OFFSET(get<bool>, {0x98, 1, 1, 0})
	DMember(bool)                                      bCheckConditionOnlyBlackBoardChanges                        OFFSET(get<bool>, {0x98, 1, 1, 1})
	DMember(bool)                                      bIsObservingBB                                              OFFSET(get<bool>, {0x98, 1, 1, 2})


	/// Functions
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTick
	// void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	// void ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn);                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	// void ReceiveObserverDeactivated(AActor* OwnerActor);                                                                     // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	// void ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn);                                  // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	// void ReceiveObserverActivated(AActor* OwnerActor);                                                                       // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	// void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	// void ReceiveExecutionStart(AActor* OwnerActor);                                                                          // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	// void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult); // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	// void ReceiveExecutionFinish(AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);                                  // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	// bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	// bool PerformConditionCheck(AActor* OwnerActor);                                                                          // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	// bool IsDecoratorObserverActive();                                                                                        // [0x1f45f40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	// bool IsDecoratorExecutionActive();                                                                                       // [0x1f45f10] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTDecorator_CheckGameplayTagsOnActor
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FBlackboardKeySelector)                    ActorToCheck                                                OFFSET(getStruct<T>, {0x68, 40, 0, 0})
	CMember(EGameplayContainerMatchType)               TagsToMatch                                                 OFFSET(get<T>, {0x90, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x98, 32, 0, 0})
	SMember(FString)                                   CachedDescription                                           OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_CompareBBEntries
/// Size: 0x0058 (0x000068 - 0x0000C0)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TEnumAsByte<EBlackBoardEntryComparison>)   Operator                                                    OFFSET(get<T>, {0x68, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyA                                              OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyB                                              OFFSET(getStruct<T>, {0x98, 40, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_ConditionalLoop
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UBTDecorator_ConditionalLoop : public UBTDecorator_Blackboard
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/AIModule.BTDecorator_ConeCheck
/// Size: 0x0088 (0x000068 - 0x0000F0)
class UBTDecorator_ConeCheck : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(float)                                     ConeHalfAngle                                               OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FBlackboardKeySelector)                    ConeOrigin                                                  OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    ConeDirection                                               OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    Observed                                                    OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_Cooldown
/// Size: 0x0008 (0x000068 - 0x000070)
class UBTDecorator_Cooldown : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     CoolDownTime                                                OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_DoesPathExist
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UBTDecorator_DoesPathExist : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKeyA                                              OFFSET(getStruct<T>, {0x68, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyB                                              OFFSET(getStruct<T>, {0x90, 40, 0, 0})
	DMember(bool)                                      bUseSelf                                                    OFFSET(get<bool>, {0xB8, 1, 1, 0})
	CMember(TEnumAsByte<EPathExistanceQueryType>)      PathQueryType                                               OFFSET(get<T>, {0xBC, 1, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_ForceSuccess
/// Size: 0x0000 (0x000068 - 0x000068)
class UBTDecorator_ForceSuccess : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/AIModule.BTDecorator_IsAtLocation
/// Size: 0x0040 (0x000090 - 0x0000D0)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     AcceptableRadius                                            OFFSET(get<float>, {0x90, 4, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ParametrizedAcceptableRadius                                OFFSET(getStruct<T>, {0x98, 48, 0, 0})
	SMember(FAIDistanceType)                           GeometricDistanceType                                       OFFSET(getStruct<T>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bUseParametrizedRadius                                      OFFSET(get<bool>, {0xCC, 1, 1, 0})
	DMember(bool)                                      bUseNavAgentGoalLocation                                    OFFSET(get<bool>, {0xCC, 1, 1, 1})
	DMember(bool)                                      bPathFindingBasedTest                                       OFFSET(get<bool>, {0xCC, 1, 1, 2})
};

/// Class /Script/AIModule.BTDecorator_IsBBEntryOfClass
/// Size: 0x0008 (0x000090 - 0x000098)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UClass*)                                   TestClass                                                   OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_KeepInCone
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UBTDecorator_KeepInCone : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     ConeHalfAngle                                               OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FBlackboardKeySelector)                    ConeOrigin                                                  OFFSET(getStruct<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    Observed                                                    OFFSET(getStruct<T>, {0x98, 40, 0, 0})
	DMember(bool)                                      bUseSelfAsOrigin                                            OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(bool)                                      bUseSelfAsObserved                                          OFFSET(get<bool>, {0xC0, 1, 1, 1})
};

/// Class /Script/AIModule.BTDecorator_Loop
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTDecorator_Loop : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   NumLoops                                                    OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bInfiniteLoop                                               OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(float)                                     InfiniteLoopTimeoutTime                                     OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_ReachedMoveGoal
/// Size: 0x0000 (0x000068 - 0x000068)
class UBTDecorator_ReachedMoveGoal : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/AIModule.BTDecorator_SetTagCooldown
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTDecorator_SetTagCooldown : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTag)                              CooldownTag                                                 OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     CooldownDuration                                            OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bAddToExistingDuration                                      OFFSET(get<bool>, {0x74, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_TagCooldown
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTDecorator_TagCooldown : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTag)                              CooldownTag                                                 OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     CooldownDuration                                            OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(bool)                                      bAddToExistingDuration                                      OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(bool)                                      bActivatesCooldown                                          OFFSET(get<bool>, {0x75, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_TimeLimit
/// Size: 0x0008 (0x000068 - 0x000070)
class UBTDecorator_TimeLimit : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     TimeLimit                                                   OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Class /Script/AIModule.BTFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AIModule.BTFunctionLibrary.StopUsingExternalEvent
	// void StopUsingExternalEvent(UBTNode* NodeOwner);                                                                         // [0x2b767b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.StartUsingExternalEvent
	// void StartUsingExternalEvent(UBTNode* NodeOwner, AActor* OwningActor);                                                   // [0x2735c60] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsVector
	// void SetBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FVector Value);                         // [0x1f46b80] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsString
	// void SetBlackboardValueAsString(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FString Value);                         // [0x1f469f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator
	// void SetBlackboardValueAsRotator(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FRotator Value);                       // [0x1f468b0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsObject
	// void SetBlackboardValueAsObject(UBTNode* NodeOwner, FBlackboardKeySelector& Key, UObject* Value);                        // [0x1f46770] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsName
	// void SetBlackboardValueAsName(UBTNode* NodeOwner, FBlackboardKeySelector& Key, FName Value);                             // [0x1f46630] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsInt
	// void SetBlackboardValueAsInt(UBTNode* NodeOwner, FBlackboardKeySelector& Key, int32_t Value);                            // [0x1f464f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat
	// void SetBlackboardValueAsFloat(UBTNode* NodeOwner, FBlackboardKeySelector& Key, float Value);                            // [0x1f463b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum
	// void SetBlackboardValueAsEnum(UBTNode* NodeOwner, FBlackboardKeySelector& Key, unsigned char Value);                     // [0x1f46270] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsClass
	// void SetBlackboardValueAsClass(UBTNode* NodeOwner, FBlackboardKeySelector& Key, UClass* Value);                          // [0x1f46130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.SetBlackboardValueAsBool
	// void SetBlackboardValueAsBool(UBTNode* NodeOwner, FBlackboardKeySelector& Key, bool Value);                              // [0x1f45ff0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.GetOwnersBlackboard
	// UBlackboardComponent* GetOwnersBlackboard(UBTNode* NodeOwner);                                                           // [0x1f45e90] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetOwnerComponent
	// UBehaviorTreeComponent* GetOwnerComponent(UBTNode* NodeOwner);                                                           // [0x1f45e10] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsVector
	// FVector GetBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                     // [0x1f45d00] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsString
	// FString GetBlackboardValueAsString(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                     // [0x1f45bc0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator
	// FRotator GetBlackboardValueAsRotator(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                   // [0x1f45ab0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsObject
	// UObject* GetBlackboardValueAsObject(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                    // [0x1f459b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsName
	// FName GetBlackboardValueAsName(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                         // [0x1f458b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsInt
	// int32_t GetBlackboardValueAsInt(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                        // [0x1f457b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat
	// float GetBlackboardValueAsFloat(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                        // [0x1f456b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum
	// unsigned char GetBlackboardValueAsEnum(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                 // [0x1f455b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsClass
	// UClass* GetBlackboardValueAsClass(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                      // [0x1f454b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsBool
	// bool GetBlackboardValueAsBool(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                          // [0x1f453b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.GetBlackboardValueAsActor
	// AActor* GetBlackboardValueAsActor(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                      // [0x1f452b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector
	// void ClearBlackboardValueAsVector(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                      // [0x1f451c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BTFunctionLibrary.ClearBlackboardValue
	// void ClearBlackboardValue(UBTNode* NodeOwner, FBlackboardKeySelector& Key);                                              // [0x1f451c0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.BTService_BlueprintBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTService_BlueprintBase : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(AAIController*)                            AIOwner                                                     OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(AActor*)                                   ActorOwner                                                  OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bShowPropertyDetails                                        OFFSET(get<bool>, {0x90, 1, 1, 0})
	DMember(bool)                                      bShowEventDetails                                           OFFSET(get<bool>, {0x90, 1, 1, 1})


	/// Functions
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTick
	// void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	// void ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn);                                        // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStart
	// void ReceiveSearchStart(AActor* OwnerActor);                                                                             // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	// void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);                                       // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivation
	// void ReceiveDeactivation(AActor* OwnerActor);                                                                            // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivationAI
	// void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);                                         // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivation
	// void ReceiveActivation(AActor* OwnerActor);                                                                              // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.IsServiceActive
	// bool IsServiceActive();                                                                                                  // [0x1f4a7f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTService_DefaultFocus
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(unsigned char)                             FocusPriority                                               OFFSET(get<unsigned char>, {0x98, 1, 0, 0})
};

/// Class /Script/AIModule.BTService_RunEQS
/// Size: 0x0088 (0x000098 - 0x000120)
class UBTService_RunEQS : public UBTService_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0x98, 72, 0, 0})
};

/// Class /Script/AIModule.BTTask_BlueprintBase
/// Size: 0x0030 (0x000070 - 0x0000A0)
class UBTTask_BlueprintBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(AAIController*)                            AIOwner                                                     OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(AActor*)                                   ActorOwner                                                  OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bShowPropertyDetails                                        OFFSET(get<bool>, {0x98, 1, 1, 0})


	/// Functions
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	// void SetFinishOnMessageWithId(FName MessageName, int32_t RequestID);                                                     // [0x1f4a900] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	// void SetFinishOnMessage(FName MessageName);                                                                              // [0x1f4a880] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTick
	// void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	// void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecute
	// void ReceiveExecute(AActor* OwnerActor);                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	// void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);                                              // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbort
	// void ReceiveAbort(AActor* OwnerActor);                                                                                   // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskExecuting
	// bool IsTaskExecuting();                                                                                                  // [0x1f4a850] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskAborting
	// bool IsTaskAborting();                                                                                                   // [0x1f4a820] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishExecute
	// void FinishExecute(bool bSuccess);                                                                                       // [0x1f4a730] Final|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishAbort
	// void FinishAbort();                                                                                                      // [0x1f4a710] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/AIModule.BTTask_MakeNoise
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_MakeNoise : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     Loudnes                                                     OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/AIModule.BTTask_MoveDirectlyToward
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bDisablePathUpdateOnGoalLocationChange                      OFFSET(get<bool>, {0xB0, 1, 1, 0})
	DMember(bool)                                      bProjectVectorGoalToNavigation                              OFFSET(get<bool>, {0xB0, 1, 1, 1})
	DMember(bool)                                      bUpdatedDeprecatedProperties                                OFFSET(get<bool>, {0xB0, 1, 1, 2})
};

/// Class /Script/AIModule.BTTask_PawnActionBase
/// Size: 0x0000 (0x000070 - 0x000070)
class UBTTask_PawnActionBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/AIModule.BTTask_PlayAnimation
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UBTTask_PlayAnimation : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(UAnimationAsset*)                          AnimationToPlay                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x78, 1, 1, 0})
	DMember(bool)                                      bNonBlocking                                                OFFSET(get<bool>, {0x78, 1, 1, 1})
	CMember(UBehaviorTreeComponent*)                   MyOwnerComp                                                 OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   CachedSkelMesh                                              OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_PlaySound
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_PlaySound : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(USoundCue*)                                SoundToPlay                                                 OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_PushPawnAction
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UPawnAction*)                              Action                                                      OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_RotateToFaceBBEntry
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Class /Script/AIModule.BTTask_RunBehavior
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_RunBehavior : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UBehaviorTree*)                            BehaviorAsset                                               OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_RunBehaviorDynamic
/// Size: 0x0018 (0x000070 - 0x000088)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTag)                              InjectionTag                                                OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	CMember(UBehaviorTree*)                            DefaultBehaviorAsset                                        OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(UBehaviorTree*)                            BehaviorAsset                                               OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_RunEQSQuery
/// Size: 0x00E8 (0x000098 - 0x000180)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(UEnvQuery*)                                QueryTemplate                                               OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TArray<FEnvNamedValue>)                    QueryParams                                                 OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             RunMode                                                     OFFSET(get<T>, {0xC0, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    EQSQueryBlackboardKey                                       OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	DMember(bool)                                      bUseBBKey                                                   OFFSET(get<bool>, {0xF0, 1, 0, 0})
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0xF8, 72, 0, 0})
};

/// Class /Script/AIModule.BTTask_SetTagCooldown
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTTask_SetTagCooldown : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTag)                              CooldownTag                                                 OFFSET(getStruct<T>, {0x70, 8, 0, 0})
	DMember(bool)                                      bAddToExistingDuration                                      OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(float)                                     CooldownDuration                                            OFFSET(get<float>, {0x7C, 4, 0, 0})
};

/// Class /Script/AIModule.BTTask_Wait
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_Wait : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     WaitTime                                                    OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     RandomDeviation                                             OFFSET(get<float>, {0x74, 4, 0, 0})
};

/// Class /Script/AIModule.BTTask_WaitBlackboardTime
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               OFFSET(getStruct<T>, {0x78, 40, 0, 0})
};

/// Class /Script/AIModule.CrowdAgentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrowdAgentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.DetourCrowdAIController
/// Size: 0x0000 (0x000410 - 0x000410)
class ADetourCrowdAIController : public AAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
};

/// Class /Script/AIModule.EnvQuery
/// Size: 0x0018 (0x000030 - 0x000048)
class UEnvQuery : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     QueryName                                                   OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	CMember(TArray<UEnvQueryOption*>)                  Options                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/AIModule.EnvQueryContext_BlueprintBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation
	// void ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation);                    // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor
	// void ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor);                          // [0x154a140] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet
	// void ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet);           // [0x154a140] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet
	// void ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet);                // [0x154a140] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/AIModule.EnvQueryContext_Item
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryContext_Item : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.EnvQueryContext_Querier
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryContext_Querier : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.EnvQueryDebugHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryDebugHelpers : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.EnvQueryGenerator_BlueprintBase
/// Size: 0x0030 (0x000050 - 0x000080)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FText)                                     GeneratorsActionDescription                                 OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(UClass*)                                   Context                                                     OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UClass*)                                   GeneratedItemType                                           OFFSET(get<T>, {0x70, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	// UObject* GetQuerier();                                                                                                   // [0x1f4a7c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	// void DoItemGeneration(TArray<FVector>& ContextLocations);                                                                // [0x154a140] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	// void AddGeneratedVector(FVector GeneratedVector);                                                                        // [0x1f4a680] Final|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	// void AddGeneratedActor(AActor* GeneratedActor);                                                                          // [0x1f4a600] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/AIModule.EnvQueryGenerator_Composite
/// Size: 0x0020 (0x000050 - 0x000070)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<UEnvQueryGenerator*>)               Generators                                                  OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bAllowDifferentItemTypes                                    OFFSET(get<bool>, {0x60, 1, 1, 0})
	DMember(bool)                                      bHasMatchingItemType                                        OFFSET(get<bool>, {0x60, 1, 1, 1})
	CMember(UClass*)                                   ForcedItemType                                              OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_Cone
/// Size: 0x00D0 (0x000080 - 0x000150)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FAIDataProviderFloatValue)                 AlignedPointsDistance                                       OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ConeDegrees                                                 OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 AngleStep                                                   OFFSET(getStruct<T>, {0xE0, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 Range                                                       OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	CMember(UClass*)                                   CenterActor                                                 OFFSET(get<T>, {0x140, 8, 0, 0})
	DMember(bool)                                      bIncludeContextLocation                                     OFFSET(get<bool>, {0x148, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_CurrentLocation
/// Size: 0x0008 (0x000050 - 0x000058)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UClass*)                                   QueryContext                                                OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_Donut
/// Size: 0x0128 (0x000080 - 0x0001A8)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FAIDataProviderFloatValue)                 InnerRadius                                                 OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 OuterRadius                                                 OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
	SMember(FAIDataProviderIntValue)                   NumberOfRings                                               OFFSET(getStruct<T>, {0xE0, 48, 0, 0})
	SMember(FAIDataProviderIntValue)                   PointsPerRing                                               OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	SMember(FEnvDirection)                             ArcDirection                                                OFFSET(getStruct<T>, {0x140, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ArcAngle                                                    OFFSET(getStruct<T>, {0x160, 48, 0, 0})
	DMember(bool)                                      bUseSpiralPattern                                           OFFSET(get<bool>, {0x190, 1, 0, 0})
	CMember(UClass*)                                   Center                                                      OFFSET(get<T>, {0x198, 8, 0, 0})
	DMember(bool)                                      bDefineArc                                                  OFFSET(get<bool>, {0x1A0, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_SimpleGrid
/// Size: 0x0068 (0x000080 - 0x0000E8)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FAIDataProviderFloatValue)                 GridSize                                                    OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
	CMember(UClass*)                                   GenerateAround                                              OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_PathingGrid
/// Size: 0x0068 (0x0000E8 - 0x000150)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FAIDataProviderBoolValue)                  PathToItem                                                  OFFSET(getStruct<T>, {0xE8, 48, 0, 0})
	CMember(UClass*)                                   NavigationFilter                                            OFFSET(get<T>, {0x118, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScanRangeMultiplier                                         OFFSET(getStruct<T>, {0x120, 48, 0, 0})
};

/// Class /Script/AIModule.EnvQueryInstanceBlueprintWrapper
/// Size: 0x0050 (0x000028 - 0x000078)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   QueryID                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(UClass*)                                   ItemType                                                    OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(int32_t)                                   OptionIndex                                                 OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	CMember(UMulticastDelegate)                        OnQueryFinishedEvent                                        OFFSET(get<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	// void SetNamedParam(FName ParamName, float Value);                                                                        // [0x1f4e720] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	// TArray<FVector> GetResultsAsLocations();                                                                                 // [0x1f4e510] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	// TArray<AActor*> GetResultsAsActors();                                                                                    // [0x1f4e490] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	// float GetItemScore(int32_t ItemIndex);                                                                                   // [0x1f4e400] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
	// void EQSQueryDoneSignature__DelegateSignature(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus); // [0x154a140] MulticastDelegate|Public|Delegate 
};

/// Class /Script/AIModule.EnvQueryItemType_Actor
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_Actor : public UEnvQueryItemType_ActorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryItemType_Direction
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_Direction : public UEnvQueryItemType_VectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryManager
/// Size: 0x0110 (0x000028 - 0x000138)
class UEnvQueryManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(TArray<FEnvQueryInstanceCache>)            InstanceCache                                               OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<UEnvQueryContext*>)                 LocalContexts                                               OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<UEnvQueryInstanceBlueprintWrapper*>) GCShieldedWrappers                                         OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(float)                                     MaxAllowedTestingTime                                       OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(bool)                                      bTestQueriesUsingBreadth                                    OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(int32_t)                                   QueryCountWarningThreshold                                  OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	DMember(double)                                    QueryCountWarningInterval                                   OFFSET(get<double>, {0x130, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.EnvQueryManager.RunEQSQuery
	// UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, UClass* WrapperClass); // [0x1f4e590] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.EnvQueryOption
/// Size: 0x0018 (0x000028 - 0x000040)
class UEnvQueryOption : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UEnvQueryGenerator*)                       Generator                                                   OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<UEnvQueryTest*>)                    Tests                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Distance
/// Size: 0x0010 (0x0001C0 - 0x0001D0)
class UEnvQueryTest_Distance : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	CMember(TEnumAsByte<EEnvTestDistance>)             TestMode                                                    OFFSET(get<T>, {0x1C0, 1, 0, 0})
	CMember(UClass*)                                   DistanceTo                                                  OFFSET(get<T>, {0x1C8, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Dot
/// Size: 0x0048 (0x0001C0 - 0x000208)
class UEnvQueryTest_Dot : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FEnvDirection)                             LineA                                                       OFFSET(getStruct<T>, {0x1C0, 32, 0, 0})
	SMember(FEnvDirection)                             LineB                                                       OFFSET(getStruct<T>, {0x1E0, 32, 0, 0})
	CMember(EEnvTestDot)                               TestMode                                                    OFFSET(get<T>, {0x200, 1, 0, 0})
	DMember(bool)                                      bAbsoluteValue                                              OFFSET(get<bool>, {0x201, 1, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_GameplayTags
/// Size: 0x0070 (0x0001C0 - 0x000230)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FGameplayTagQuery)                         TagQueryToMatch                                             OFFSET(getStruct<T>, {0x1C0, 72, 0, 0})
	DMember(bool)                                      bUpdatedToUseQuery                                          OFFSET(get<bool>, {0x208, 1, 0, 0})
	CMember(EGameplayContainerMatchType)               TagsToMatch                                                 OFFSET(get<T>, {0x209, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x210, 32, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Overlap
/// Size: 0x0020 (0x0001C0 - 0x0001E0)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FEnvOverlapData)                           OverlapData                                                 OFFSET(getStruct<T>, {0x1C0, 32, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Pathfinding
/// Size: 0x0078 (0x0001C0 - 0x000238)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(TEnumAsByte<EEnvTestPathfinding>)          TestMode                                                    OFFSET(get<T>, {0x1C0, 1, 0, 0})
	CMember(UClass*)                                   Context                                                     OFFSET(get<T>, {0x1C8, 8, 0, 0})
	SMember(FAIDataProviderBoolValue)                  PathFromContext                                             OFFSET(getStruct<T>, {0x1D0, 48, 0, 0})
	SMember(FAIDataProviderBoolValue)                  SkipUnreachable                                             OFFSET(getStruct<T>, {0x200, 48, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 OFFSET(get<T>, {0x230, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_PathfindingBatch
/// Size: 0x0030 (0x000238 - 0x000268)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FAIDataProviderFloatValue)                 ScanRangeMultiplier                                         OFFSET(getStruct<T>, {0x238, 48, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Project
/// Size: 0x0030 (0x0001C0 - 0x0001F0)
class UEnvQueryTest_Project : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FEnvTraceData)                             ProjectionData                                              OFFSET(getStruct<T>, {0x1C0, 48, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Random
/// Size: 0x0000 (0x0001C0 - 0x0001C0)
class UEnvQueryTest_Random : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
};

/// Class /Script/AIModule.EnvQueryTest_Trace
/// Size: 0x00C8 (0x0001C0 - 0x000288)
class UEnvQueryTest_Trace : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	SMember(FEnvTraceData)                             TraceData                                                   OFFSET(getStruct<T>, {0x1C0, 48, 0, 0})
	SMember(FAIDataProviderBoolValue)                  TraceFromContext                                            OFFSET(getStruct<T>, {0x1F0, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ItemHeightOffset                                            OFFSET(getStruct<T>, {0x220, 48, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ContextHeightOffset                                         OFFSET(getStruct<T>, {0x250, 48, 0, 0})
	CMember(UClass*)                                   Context                                                     OFFSET(get<T>, {0x280, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryTypes : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.EQSQueryResultSourceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEQSQueryResultSourceInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.EQSRenderingComponent
/// Size: 0x0040 (0x000640 - 0x000680)
class UEQSRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
};

/// Class /Script/AIModule.EQSTestingPawn
/// Size: 0x0090 (0x000730 - 0x0007C0)
class AEQSTestingPawn : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1984;

public:
	CMember(UEnvQuery*)                                QueryTemplate                                               OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(TArray<FEnvNamedValue>)                    QueryParams                                                 OFFSET(get<T>, {0x740, 16, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 OFFSET(get<T>, {0x750, 16, 0, 0})
	DMember(float)                                     TimeLimitPerStep                                            OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(int32_t)                                   StepToDebugDraw                                             OFFSET(get<int32_t>, {0x764, 4, 0, 0})
	CMember(EEnvQueryHightlightMode)                   HighlightMode                                               OFFSET(get<T>, {0x768, 1, 0, 0})
	DMember(bool)                                      bDrawLabels                                                 OFFSET(get<bool>, {0x76C, 1, 1, 0})
	DMember(bool)                                      bDrawFailedItems                                            OFFSET(get<bool>, {0x76C, 1, 1, 1})
	DMember(bool)                                      bReRunQueryOnlyOnFinishedMove                               OFFSET(get<bool>, {0x76C, 1, 1, 2})
	DMember(bool)                                      bShouldBeVisibleInGame                                      OFFSET(get<bool>, {0x76C, 1, 1, 3})
	DMember(bool)                                      bTickDuringGame                                             OFFSET(get<bool>, {0x76C, 1, 1, 4})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             QueryingMode                                                OFFSET(get<T>, {0x770, 1, 0, 0})
	SMember(FNavAgentProperties)                       NavAgentProperties                                          OFFSET(getStruct<T>, {0x778, 32, 0, 0})
};

/// Class /Script/AIModule.GridPathAIController
/// Size: 0x0000 (0x000410 - 0x000410)
class AGridPathAIController : public AAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
};

/// Class /Script/AIModule.GridPathFollowingComponent
/// Size: 0x0030 (0x0003B0 - 0x0003E0)
class UGridPathFollowingComponent : public UPathFollowingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(UNavLocalGridManager*)                     GridManager                                                 OFFSET(get<T>, {0x3A8, 8, 0, 0})
};

/// Class /Script/AIModule.NavFilter_AIControllerDefault
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/AIModule.NavLocalGridManager
/// Size: 0x0030 (0x000028 - 0x000058)
class UNavLocalGridManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:


	/// Functions
	// Function /Script/AIModule.NavLocalGridManager.SetLocalNavigationGridDensity
	// bool SetLocalNavigationGridDensity(UObject* WorldContextObject, float CellSize);                                         // [0x1f51b10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.RemoveLocalNavigationGrid
	// void RemoveLocalNavigationGrid(UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids);                         // [0x1f51a20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.FindLocalNavigationGridPath
	// bool FindLocalNavigationGridPath(UObject* WorldContextObject, FVector& Start, FVector& End, TArray<FVector>& PathPoints); // [0x1f511f0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints
	// int32_t AddLocalNavigationGridForPoints(UObject* WorldContextObject, TArray<FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x1f50f70] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint
	// int32_t AddLocalNavigationGridForPoint(UObject* WorldContextObject, FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x1f50dc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule
	// int32_t AddLocalNavigationGridForCapsule(UObject* WorldContextObject, FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x1f50bc0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForBox
	// int32_t AddLocalNavigationGridForBox(UObject* WorldContextObject, FVector& Location, FVector Extent, FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // [0x1f509a0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.PawnAction
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UPawnAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UPawnAction*)                              ChildAction                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UPawnAction*)                              ParentAction                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UPawnActionsComponent*)                    OwnerComponent                                              OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UObject*)                                  Instigator                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UBrainComponent*)                          BrainComp                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bAllowNewSameClassInstance                                  OFFSET(get<bool>, {0xB8, 1, 1, 0})
	DMember(bool)                                      bReplaceActiveSameClassInstance                             OFFSET(get<bool>, {0xB8, 1, 1, 1})
	DMember(bool)                                      bShouldPauseMovement                                        OFFSET(get<bool>, {0xB8, 1, 1, 2})
	DMember(bool)                                      bAlwaysNotifyOnFinished                                     OFFSET(get<bool>, {0xB8, 1, 1, 3})


	/// Functions
	// Function /Script/AIModule.PawnAction.GetActionPriority
	// TEnumAsByte<EAIRequestPriority> GetActionPriority();                                                                     // [0x1f51410] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.PawnAction.Finish
	// void Finish(TEnumAsByte<EPawnActionResult> WithResult);                                                                  // [0x1f51380] Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.PawnAction.CreateActionInstance
	// UPawnAction* CreateActionInstance(UObject* WorldContextObject, UClass* ActionClass);                                     // [0x1f51130] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.PawnAction_BlueprintBase
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UPawnAction_BlueprintBase : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:


	/// Functions
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionTick
	// void ActionTick(APawn* ControlledPawn, float DeltaSeconds);                                                              // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionStart
	// void ActionStart(APawn* ControlledPawn);                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionResume
	// void ActionResume(APawn* ControlledPawn);                                                                                // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionPause
	// void ActionPause(APawn* ControlledPawn);                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Script/AIModule.PawnAction_BlueprintBase.ActionFinished
	// void ActionFinished(APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);                                   // [0x154a140] Event|Public|BlueprintEvent 
};

/// Class /Script/AIModule.PawnAction_Move
/// Size: 0x0050 (0x0000D0 - 0x000120)
class UPawnAction_Move : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(AActor*)                                   GoalActor                                                   OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FVector)                                   GoalLocation                                                OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	DMember(float)                                     AcceptableRadius                                            OFFSET(get<float>, {0xE4, 4, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(bool)                                      bAllowStrafe                                                OFFSET(get<bool>, {0xF0, 1, 1, 0})
	DMember(bool)                                      bFinishOnOverlap                                            OFFSET(get<bool>, {0xF0, 1, 1, 1})
	DMember(bool)                                      bUsePathfinding                                             OFFSET(get<bool>, {0xF0, 1, 1, 2})
	DMember(bool)                                      bAllowPartialPath                                           OFFSET(get<bool>, {0xF0, 1, 1, 3})
	DMember(bool)                                      bProjectGoalToNavigation                                    OFFSET(get<bool>, {0xF0, 1, 1, 4})
	DMember(bool)                                      bUpdatePathToGoal                                           OFFSET(get<bool>, {0xF0, 1, 1, 5})
	DMember(bool)                                      bAbortChildActionOnPathChange                               OFFSET(get<bool>, {0xF0, 1, 1, 6})
};

/// Class /Script/AIModule.PawnAction_Repeat
/// Size: 0x0020 (0x0000D0 - 0x0000F0)
class UPawnAction_Repeat : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(UPawnAction*)                              ActionToRepeat                                              OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UPawnAction*)                              RecentActionCopy                                            OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(TEnumAsByte<EPawnActionFailHandling>)      ChildFailureHandlingMode                                    OFFSET(get<T>, {0xE0, 1, 0, 0})
};

/// Class /Script/AIModule.PawnAction_Sequence
/// Size: 0x0030 (0x0000D0 - 0x000100)
class UPawnAction_Sequence : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(TArray<UPawnAction*>)                      ActionSequence                                              OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TEnumAsByte<EPawnActionFailHandling>)      ChildFailureHandlingMode                                    OFFSET(get<T>, {0xE0, 1, 0, 0})
	CMember(UPawnAction*)                              RecentActionCopy                                            OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/AIModule.PawnAction_Wait
/// Size: 0x0010 (0x0000D0 - 0x0000E0)
class UPawnAction_Wait : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(float)                                     TimeToWait                                                  OFFSET(get<float>, {0xD0, 4, 0, 0})
};

/// Class /Script/AIModule.PawnActionsComponent
/// Size: 0x0038 (0x0000F0 - 0x000128)
class UPawnActionsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(APawn*)                                    ControlledPawn                                              OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<FPawnActionStack>)                  ActionStacks                                                OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FPawnActionEvent>)                  ActionEvents                                                OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UPawnAction*)                              CurrentAction                                               OFFSET(get<T>, {0x118, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.PawnActionsComponent.K2_PushAction
	// bool K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, UObject* Instigator);               // [0x1f51700] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_PerformAction
	// bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);                       // [0x1f51600] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_ForceAbortAction
	// TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(UPawnAction* ActionToAbort);                                      // [0x1f51570] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_AbortAction
	// TEnumAsByte<EPawnActionAbortState> K2_AbortAction(UPawnAction* ActionToAbort);                                           // [0x1f514e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.PawnSensingComponent
/// Size: 0x0048 (0x0000F0 - 0x000138)
class UPawnSensingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(float)                                     HearingThreshold                                            OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     LOSHearingThreshold                                         OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     SightRadius                                                 OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     SensingInterval                                             OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     HearingMaxSoundAge                                          OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(bool)                                      bEnableSensingUpdates                                       OFFSET(get<bool>, {0x104, 1, 1, 0})
	DMember(bool)                                      bOnlySensePlayers                                           OFFSET(get<bool>, {0x104, 1, 1, 1})
	DMember(bool)                                      bSeePawns                                                   OFFSET(get<bool>, {0x104, 1, 1, 2})
	DMember(bool)                                      bHearNoises                                                 OFFSET(get<bool>, {0x104, 1, 1, 3})
	CMember(UMulticastDelegate)                        OnSeePawn                                                   OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnHearNoise                                                 OFFSET(get<T>, {0x120, 16, 0, 0})
	DMember(float)                                     PeripheralVisionAngle                                       OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     PeripheralVisionCosine                                      OFFSET(get<float>, {0x134, 4, 0, 0})


	/// Functions
	// Function /Script/AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	// void SetSensingUpdatesEnabled(bool bEnabled);                                                                            // [0x1f51ce0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetSensingInterval
	// void SetSensingInterval(float NewSensingInterval);                                                                       // [0x1f51c60] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	// void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);                                                           // [0x1f51be0] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	// void SeePawnDelegate__DelegateSignature(APawn* Pawn);                                                                    // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	// void HearNoiseDelegate__DelegateSignature(APawn* Instigator, FVector& Location, float Volume);                           // [0x154a140] MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	// float GetPeripheralVisionCosine();                                                                                       // [0x1f514c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	// float GetPeripheralVisionAngle();                                                                                        // [0x1f514a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.VisualLoggerExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UVisualLoggerExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/AIModule.AIRequestID
/// Size: 0x0004 (0x000000 - 0x000004)
class FAIRequestID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  RequestID                                                   OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/AIModule.AIStimulus
/// Size: 0x0048 (0x000000 - 0x000048)
class FAIStimulus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Age                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ExpirationAge                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   StimulusLocation                                            OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   ReceiverLocation                                            OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FName)                                     Tag                                                         OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bSuccessfullySensed                                         OFFSET(get<bool>, {0x40, 1, 1, 1})
};

/// Struct /Script/AIModule.EnvNamedValue
/// Size: 0x0010 (0x000000 - 0x000010)
class FEnvNamedValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(EAIParamType)                              ParamType                                                   OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FAIDataProviderValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UProperty*)                                CachedProperty                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UAIDataProvider*)                          DataBinding                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     DataField                                                   OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderTypedValue
/// Size: 0x0008 (0x000020 - 0x000028)
class FAIDataProviderTypedValue : public FAIDataProviderValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UClass*)                                   PropertyType                                                OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderFloatValue
/// Size: 0x0008 (0x000028 - 0x000030)
class FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     DefaultValue                                                OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderBoolValue
/// Size: 0x0008 (0x000028 - 0x000030)
class FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      DefaultValue                                                OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderIntValue
/// Size: 0x0008 (0x000028 - 0x000030)
class FAIDataProviderIntValue : public FAIDataProviderTypedValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   DefaultValue                                                OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderStructValue
/// Size: 0x0010 (0x000020 - 0x000030)
class FAIDataProviderStructValue : public FAIDataProviderValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/AIModule.ActorPerceptionBlueprintInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FActorPerceptionBlueprintInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AActor*)                                   Target                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FAIStimulus>)                       LastSensedStimuli                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bIsHostile                                                  OFFSET(get<bool>, {0x18, 1, 1, 0})
};

/// Struct /Script/AIModule.AISenseAffiliationFilter
/// Size: 0x0004 (0x000000 - 0x000004)
class FAISenseAffiliationFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bDetectEnemies                                              OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bDetectNeutrals                                             OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bDetectFriendlies                                           OFFSET(get<bool>, {0x0, 1, 1, 2})
};

/// Struct /Script/AIModule.AIDamageEvent
/// Size: 0x0030 (0x000000 - 0x000030)
class FAIDamageEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     Amount                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	CMember(AActor*)                                   DamagedActor                                                OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(AActor*)                                   Instigator                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/AIModule.AINoiseEvent
/// Size: 0x0030 (0x000000 - 0x000030)
class FAINoiseEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   NoiseLocation                                               OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	DMember(float)                                     Loudness                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(AActor*)                                   Instigator                                                  OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     Tag                                                         OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/AIModule.AIPredictionEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FAIPredictionEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AActor*)                                   Requestor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AActor*)                                   PredictedActor                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/AIModule.AISightEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FAISightEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AActor*)                                   SeenActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(AActor*)                                   Observer                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/AIModule.AITeamStimulusEvent
/// Size: 0x0038 (0x000000 - 0x000038)
class FAITeamStimulusEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(AActor*)                                   Broadcaster                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(AActor*)                                   Enemy                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/AIModule.AITouchEvent
/// Size: 0x0020 (0x000000 - 0x000020)
class FAITouchEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AActor*)                                   TouchReceiver                                               OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(AActor*)                                   OtherActor                                                  OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/AIModule.AIMoveRequest
/// Size: 0x0040 (0x000000 - 0x000040)
class FAIMoveRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(AActor*)                                   GoalActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.BehaviorTreeTemplateInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FBehaviorTreeTemplateInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UBehaviorTree*)                            Asset                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UBTCompositeNode*)                         Template                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/AIModule.BlackboardKeySelector
/// Size: 0x0028 (0x000000 - 0x000028)
class FBlackboardKeySelector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<UBlackboardKeyType*>)               AllowedTypes                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     SelectedKeyName                                             OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(UClass*)                                   SelectedKeyType                                             OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(unsigned char)                             SelectedKeyID                                               OFFSET(get<unsigned char>, {0x20, 1, 0, 0})
	DMember(bool)                                      bNoneIsAllowedValue                                         OFFSET(get<bool>, {0x24, 1, 1, 0})
};

/// Struct /Script/AIModule.BlackboardEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FBlackboardEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     EntryName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(UBlackboardKeyType*)                       KeyType                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bInstanceSynced                                             OFFSET(get<bool>, {0x10, 1, 1, 0})
};

/// Struct /Script/AIModule.BTCompositeChild
/// Size: 0x0030 (0x000000 - 0x000030)
class FBTCompositeChild : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UBTCompositeNode*)                         ChildComposite                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UBTTaskNode*)                              ChildTask                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<UBTDecorator*>)                     Decorators                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FBTDecoratorLogic>)                 DecoratorOps                                                OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AIModule.BTDecoratorLogic
/// Size: 0x0004 (0x000000 - 0x000004)
class FBTDecoratorLogic : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(TEnumAsByte<EBTDecoratorLogic>)            Operation                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint16_t)                                  Number                                                      OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/AIModule.CrowdAvoidanceSamplingPattern
/// Size: 0x0020 (0x000000 - 0x000020)
class FCrowdAvoidanceSamplingPattern : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             Angles                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<float>)                             Radii                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AIModule.CrowdAvoidanceConfig
/// Size: 0x001C (0x000000 - 0x00001C)
class FCrowdAvoidanceConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     VelocityBias                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DesiredVelocityWeight                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CurrentVelocityWeight                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SideBiasWeight                                              OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ImpactTimeWeight                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ImpactTimeRange                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(unsigned char)                             CustomPatternIdx                                            OFFSET(get<unsigned char>, {0x18, 1, 0, 0})
	DMember(unsigned char)                             AdaptiveDivisions                                           OFFSET(get<unsigned char>, {0x19, 1, 0, 0})
	DMember(unsigned char)                             AdaptiveRings                                               OFFSET(get<unsigned char>, {0x1A, 1, 0, 0})
	DMember(unsigned char)                             AdaptiveDepth                                               OFFSET(get<unsigned char>, {0x1B, 1, 0, 0})
};

/// Struct /Script/AIModule.EnvQueryInstanceCache
/// Size: 0x01C0 (0x000000 - 0x0001C0)
class FEnvQueryInstanceCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(UEnvQuery*)                                Template                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.EnvQueryRequest
/// Size: 0x0068 (0x000000 - 0x000068)
class FEnvQueryRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UEnvQuery*)                                QueryTemplate                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UObject*)                                  Owner                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UWorld*)                                   World                                                       OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/AIModule.EQSParametrizedQueryExecutionRequest
/// Size: 0x0048 (0x000000 - 0x000048)
class FEQSParametrizedQueryExecutionRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UEnvQuery*)                                QueryTemplate                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FBlackboardKeySelector)                    EQSQueryBlackboardKey                                       OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             RunMode                                                     OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(bool)                                      bUseBBKeyForQueryTemplate                                   OFFSET(get<bool>, {0x44, 1, 1, 0})
};

/// Struct /Script/AIModule.AIDynamicParam
/// Size: 0x0038 (0x000000 - 0x000038)
class FAIDynamicParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(EAIParamType)                              ParamType                                                   OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	SMember(FBlackboardKeySelector)                    BBKey                                                       OFFSET(getStruct<T>, {0x10, 40, 0, 0})
};

/// Struct /Script/AIModule.EnvQueryResult
/// Size: 0x0040 (0x000000 - 0x000040)
class FEnvQueryResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UClass*)                                   ItemType                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   OptionIndex                                                 OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   QueryID                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/AIModule.EnvOverlapData
/// Size: 0x0020 (0x000000 - 0x000020)
class FEnvOverlapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     ExtentX                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ExtentY                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ExtentZ                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   ShapeOffset                                                 OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            OverlapChannel                                              OFFSET(get<T>, {0x18, 1, 0, 0})
	CMember(TEnumAsByte<EEnvOverlapShape>)             OverlapShape                                                OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(bool)                                      bOnlyBlockingHits                                           OFFSET(get<bool>, {0x1C, 1, 1, 0})
	DMember(bool)                                      bOverlapComplex                                             OFFSET(get<bool>, {0x1C, 1, 1, 1})
};

/// Struct /Script/AIModule.EnvTraceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEnvTraceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   VersionNum                                                  OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(UClass*)                                   NavigationFilter                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ProjectDown                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ProjectUp                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ExtentX                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ExtentY                                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     ExtentZ                                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     PostProjectionVerticalOffset                                OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              TraceChannel                                                OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            SerializedChannel                                           OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(TEnumAsByte<EEnvTraceShape>)               TraceShape                                                  OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(TEnumAsByte<EEnvQueryTrace>)               TraceMode                                                   OFFSET(get<T>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bTraceComplex                                               OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(bool)                                      bOnlyBlockingHits                                           OFFSET(get<bool>, {0x2C, 1, 1, 1})
	DMember(bool)                                      bCanTraceOnNavMesh                                          OFFSET(get<bool>, {0x2C, 1, 1, 2})
	DMember(bool)                                      bCanTraceOnGeometry                                         OFFSET(get<bool>, {0x2C, 1, 1, 3})
	DMember(bool)                                      bCanDisableTrace                                            OFFSET(get<bool>, {0x2C, 1, 1, 4})
	DMember(bool)                                      bCanProjectDown                                             OFFSET(get<bool>, {0x2C, 1, 1, 5})
};

/// Struct /Script/AIModule.EnvDirection
/// Size: 0x0020 (0x000000 - 0x000020)
class FEnvDirection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UClass*)                                   LineFrom                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   LineTo                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UClass*)                                   Rotation                                                    OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TEnumAsByte<EEnvDirection>)                DirMode                                                     OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/AIModule.GenericTeamId
/// Size: 0x0001 (0x000000 - 0x000001)
class FGenericTeamId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(unsigned char)                             TeamId                                                      OFFSET(get<unsigned char>, {0x0, 1, 0, 0})
};

/// Struct /Script/AIModule.PawnActionStack
/// Size: 0x0008 (0x000000 - 0x000008)
class FPawnActionStack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UPawnAction*)                              TopAction                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.PawnActionEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FPawnActionEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UPawnAction*)                              Action                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Enum /Script/AIModule.EPathFollowingResult
/// Size: 0x07
enum EPathFollowingResult : uint8_t
{
	EPathFollowingResult__Success0                                                   = 0,
	EPathFollowingResult__Blocked1                                                   = 1,
	EPathFollowingResult__OffPath2                                                   = 2,
	EPathFollowingResult__Aborted3                                                   = 3,
	EPathFollowingResult__Skipped_DEPRECATED4                                        = 4,
	EPathFollowingResult__Invalid5                                                   = 5,
	EPathFollowingResult__EPathFollowingResult_MAX6                                  = 6
};

/// Enum /Script/AIModule.EEnvQueryStatus
/// Size: 0x07
enum EEnvQueryStatus : uint8_t
{
	EEnvQueryStatus__Processing0                                                     = 0,
	EEnvQueryStatus__Success1                                                        = 1,
	EEnvQueryStatus__Failed2                                                         = 2,
	EEnvQueryStatus__Aborted3                                                        = 3,
	EEnvQueryStatus__OwnerLost4                                                      = 4,
	EEnvQueryStatus__MissingParam5                                                   = 5,
	EEnvQueryStatus__EEnvQueryStatus_MAX6                                            = 6
};

/// Enum /Script/AIModule.EAISenseNotifyType
/// Size: 0x03
enum EAISenseNotifyType : uint8_t
{
	EAISenseNotifyType__OnEveryPerception0                                           = 0,
	EAISenseNotifyType__OnPerceptionChange1                                          = 1,
	EAISenseNotifyType__EAISenseNotifyType_MAX2                                      = 2
};

/// Enum /Script/AIModule.EAITaskPriority
/// Size: 0x06
enum EAITaskPriority : uint8_t
{
	EAITaskPriority__Lowest0                                                         = 0,
	EAITaskPriority__Low1                                                            = 64,
	EAITaskPriority__AutonomousAI2                                                   = 127,
	EAITaskPriority__High3                                                           = 192,
	EAITaskPriority__Ultimate4                                                       = 254,
	EAITaskPriority__EAITaskPriority_MAX5                                            = 255
};

/// Enum /Script/AIModule.EGenericAICheck
/// Size: 0x08
enum EGenericAICheck : uint8_t
{
	EGenericAICheck__Less0                                                           = 0,
	EGenericAICheck__LessOrEqual1                                                    = 1,
	EGenericAICheck__Equal2                                                          = 2,
	EGenericAICheck__NotEqual3                                                       = 3,
	EGenericAICheck__GreaterOrEqual4                                                 = 4,
	EGenericAICheck__Greater5                                                        = 5,
	EGenericAICheck__IsTrue6                                                         = 6,
	EGenericAICheck__MAX7                                                            = 7
};

/// Enum /Script/AIModule.EAILockSource
/// Size: 0x05
enum EAILockSource : uint8_t
{
	EAILockSource__Animation0                                                        = 0,
	EAILockSource__Logic1                                                            = 1,
	EAILockSource__Script2                                                           = 2,
	EAILockSource__Gameplay3                                                         = 3,
	EAILockSource__MAX4                                                              = 4
};

/// Enum /Script/AIModule.EAIRequestPriority
/// Size: 0x06
enum EAIRequestPriority : uint8_t
{
	EAIRequestPriority__SoftScript0                                                  = 0,
	EAIRequestPriority__Logic1                                                       = 1,
	EAIRequestPriority__HardScript2                                                  = 2,
	EAIRequestPriority__Reaction3                                                    = 3,
	EAIRequestPriority__Ultimate4                                                    = 4,
	EAIRequestPriority__MAX5                                                         = 5
};

/// Enum /Script/AIModule.EPawnActionEventType
/// Size: 0x07
enum EPawnActionEventType : uint8_t
{
	EPawnActionEventType__Invalid0                                                   = 0,
	EPawnActionEventType__FailedToStart1                                             = 1,
	EPawnActionEventType__InstantAbort2                                              = 2,
	EPawnActionEventType__FinishedAborting3                                          = 3,
	EPawnActionEventType__FinishedExecution4                                         = 4,
	EPawnActionEventType__Push5                                                      = 5,
	EPawnActionEventType__EPawnActionEventType_MAX6                                  = 6
};

/// Enum /Script/AIModule.EPawnActionResult
/// Size: 0x06
enum EPawnActionResult : uint8_t
{
	EPawnActionResult__NotStarted0                                                   = 0,
	EPawnActionResult__InProgress1                                                   = 1,
	EPawnActionResult__Success2                                                      = 2,
	EPawnActionResult__Failed3                                                       = 3,
	EPawnActionResult__Aborted4                                                      = 4,
	EPawnActionResult__EPawnActionResult_MAX5                                        = 5
};

/// Enum /Script/AIModule.EPawnActionAbortState
/// Size: 0x06
enum EPawnActionAbortState : uint8_t
{
	EPawnActionAbortState__NeverStarted0                                             = 0,
	EPawnActionAbortState__NotBeingAborted1                                          = 1,
	EPawnActionAbortState__MarkPendingAbort2                                         = 2,
	EPawnActionAbortState__LatentAbortInProgress3                                    = 3,
	EPawnActionAbortState__AbortDone4                                                = 4,
	EPawnActionAbortState__MAX5                                                      = 5
};

/// Enum /Script/AIModule.FAIDistanceType
/// Size: 0x04
enum FAIDistanceType : uint8_t
{
	FAIDistanceType__Distance3D0                                                     = 0,
	FAIDistanceType__Distance2D1                                                     = 1,
	FAIDistanceType__DistanceZ2                                                      = 2,
	FAIDistanceType__MAX3                                                            = 3
};

/// Enum /Script/AIModule.EAIOptionFlag
/// Size: 0x04
enum EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default0                                                          = 0,
	EAIOptionFlag__Enable1                                                           = 1,
	EAIOptionFlag__Disable2                                                          = 2,
	EAIOptionFlag__MAX3                                                              = 3
};

/// Enum /Script/AIModule.EBTFlowAbortMode
/// Size: 0x05
enum EBTFlowAbortMode : uint8_t
{
	EBTFlowAbortMode__None0                                                          = 0,
	EBTFlowAbortMode__LowerPriority1                                                 = 1,
	EBTFlowAbortMode__Self2                                                          = 2,
	EBTFlowAbortMode__Both3                                                          = 3,
	EBTFlowAbortMode__EBTFlowAbortMode_MAX4                                          = 4
};

/// Enum /Script/AIModule.EBTNodeResult
/// Size: 0x05
enum EBTNodeResult : uint8_t
{
	EBTNodeResult__Succeeded0                                                        = 0,
	EBTNodeResult__Failed1                                                           = 1,
	EBTNodeResult__Aborted2                                                          = 2,
	EBTNodeResult__InProgress3                                                       = 3,
	EBTNodeResult__EBTNodeResult_MAX4                                                = 4
};

/// Enum /Script/AIModule.ETextKeyOperation
/// Size: 0x05
enum ETextKeyOperation : uint8_t
{
	ETextKeyOperation__Equal0                                                        = 0,
	ETextKeyOperation__NotEqual1                                                     = 1,
	ETextKeyOperation__Contain2                                                      = 2,
	ETextKeyOperation__NotContain3                                                   = 3,
	ETextKeyOperation__ETextKeyOperation_MAX4                                        = 4
};

/// Enum /Script/AIModule.EArithmeticKeyOperation
/// Size: 0x07
enum EArithmeticKeyOperation : uint8_t
{
	EArithmeticKeyOperation__Equal0                                                  = 0,
	EArithmeticKeyOperation__NotEqual1                                               = 1,
	EArithmeticKeyOperation__Less2                                                   = 2,
	EArithmeticKeyOperation__LessOrEqual3                                            = 3,
	EArithmeticKeyOperation__Greater4                                                = 4,
	EArithmeticKeyOperation__GreaterOrEqual5                                         = 5,
	EArithmeticKeyOperation__EArithmeticKeyOperation_MAX6                            = 6
};

/// Enum /Script/AIModule.EBasicKeyOperation
/// Size: 0x03
enum EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set0                                                         = 0,
	EBasicKeyOperation__NotSet1                                                      = 1,
	EBasicKeyOperation__EBasicKeyOperation_MAX2                                      = 2
};

/// Enum /Script/AIModule.EBTParallelMode
/// Size: 0x03
enum EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground0                                                = 0,
	EBTParallelMode__WaitForBackground1                                              = 1,
	EBTParallelMode__EBTParallelMode_MAX2                                            = 2
};

/// Enum /Script/AIModule.EBTDecoratorLogic
/// Size: 0x06
enum EBTDecoratorLogic : uint8_t
{
	EBTDecoratorLogic__Invalid0                                                      = 0,
	EBTDecoratorLogic__Test1                                                         = 1,
	EBTDecoratorLogic__And2                                                          = 2,
	EBTDecoratorLogic__Or3                                                           = 3,
	EBTDecoratorLogic__Not4                                                          = 4,
	EBTDecoratorLogic__EBTDecoratorLogic_MAX5                                        = 5
};

/// Enum /Script/AIModule.EBTChildIndex
/// Size: 0x03
enum EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode0                                                        = 0,
	EBTChildIndex__TaskNode1                                                         = 1,
	EBTChildIndex__EBTChildIndex_MAX2                                                = 2
};

/// Enum /Script/AIModule.EBTBlackboardRestart
/// Size: 0x03
enum EBTBlackboardRestart : uint8_t
{
	EBTBlackboardRestart__ValueChange0                                               = 0,
	EBTBlackboardRestart__ResultChange1                                              = 1,
	EBTBlackboardRestart__EBTBlackboardRestart_MAX2                                  = 2
};

/// Enum /Script/AIModule.EBlackBoardEntryComparison
/// Size: 0x03
enum EBlackBoardEntryComparison : uint8_t
{
	EBlackBoardEntryComparison__Equal0                                               = 0,
	EBlackBoardEntryComparison__NotEqual1                                            = 1,
	EBlackBoardEntryComparison__EBlackBoardEntryComparison_MAX2                      = 2
};

/// Enum /Script/AIModule.EPathExistanceQueryType
/// Size: 0x04
enum EPathExistanceQueryType : uint8_t
{
	EPathExistanceQueryType__NavmeshRaycast2D0                                       = 0,
	EPathExistanceQueryType__HierarchicalQuery1                                      = 1,
	EPathExistanceQueryType__RegularPathFinding2                                     = 2,
	EPathExistanceQueryType__EPathExistanceQueryType_MAX3                            = 3
};

/// Enum /Script/AIModule.EPointOnCircleSpacingMethod
/// Size: 0x03
enum EPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod__BySpaceBetween0                                     = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints1                                   = 1,
	EPointOnCircleSpacingMethod__EPointOnCircleSpacingMethod_MAX2                    = 2
};

/// Enum /Script/AIModule.EEQSNormalizationType
/// Size: 0x03
enum EEQSNormalizationType : uint8_t
{
	EEQSNormalizationType__Absolute0                                                 = 0,
	EEQSNormalizationType__RelativeToScores1                                         = 1,
	EEQSNormalizationType__EEQSNormalizationType_MAX2                                = 2
};

/// Enum /Script/AIModule.EEnvTestDistance
/// Size: 0x05
enum EEnvTestDistance : uint8_t
{
	EEnvTestDistance__Distance3D0                                                    = 0,
	EEnvTestDistance__Distance2D1                                                    = 1,
	EEnvTestDistance__DistanceZ2                                                     = 2,
	EEnvTestDistance__DistanceAbsoluteZ3                                             = 3,
	EEnvTestDistance__EEnvTestDistance_MAX4                                          = 4
};

/// Enum /Script/AIModule.EEnvTestDot
/// Size: 0x03
enum EEnvTestDot : uint8_t
{
	EEnvTestDot__Dot3D0                                                              = 0,
	EEnvTestDot__Dot2D1                                                              = 1,
	EEnvTestDot__EEnvTestDot_MAX2                                                    = 2
};

/// Enum /Script/AIModule.EEnvTestPathfinding
/// Size: 0x04
enum EEnvTestPathfinding : uint8_t
{
	EEnvTestPathfinding__PathExist0                                                  = 0,
	EEnvTestPathfinding__PathCost1                                                   = 1,
	EEnvTestPathfinding__PathLength2                                                 = 2,
	EEnvTestPathfinding__EEnvTestPathfinding_MAX3                                    = 3
};

/// Enum /Script/AIModule.EEnvQueryTestClamping
/// Size: 0x04
enum EEnvQueryTestClamping : uint8_t
{
	EEnvQueryTestClamping__None0                                                     = 0,
	EEnvQueryTestClamping__SpecifiedValue1                                           = 1,
	EEnvQueryTestClamping__FilterThreshold2                                          = 2,
	EEnvQueryTestClamping__EEnvQueryTestClamping_MAX3                                = 3
};

/// Enum /Script/AIModule.EEnvDirection
/// Size: 0x03
enum EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints0                                                        = 0,
	EEnvDirection__Rotation1                                                         = 1,
	EEnvDirection__EEnvDirection_MAX2                                                = 2
};

/// Enum /Script/AIModule.EEnvOverlapShape
/// Size: 0x04
enum EEnvOverlapShape : uint8_t
{
	EEnvOverlapShape__Box0                                                           = 0,
	EEnvOverlapShape__Sphere1                                                        = 1,
	EEnvOverlapShape__Capsule2                                                       = 2,
	EEnvOverlapShape__EEnvOverlapShape_MAX3                                          = 3
};

/// Enum /Script/AIModule.EEnvTraceShape
/// Size: 0x05
enum EEnvTraceShape : uint8_t
{
	EEnvTraceShape__Line0                                                            = 0,
	EEnvTraceShape__Box1                                                             = 1,
	EEnvTraceShape__Sphere2                                                          = 2,
	EEnvTraceShape__Capsule3                                                         = 3,
	EEnvTraceShape__EEnvTraceShape_MAX4                                              = 4
};

/// Enum /Script/AIModule.EEnvQueryTrace
/// Size: 0x05
enum EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None0                                                            = 0,
	EEnvQueryTrace__Navigation1                                                      = 1,
	EEnvQueryTrace__Geometry2                                                        = 2,
	EEnvQueryTrace__NavigationOverLedges3                                            = 3,
	EEnvQueryTrace__EEnvQueryTrace_MAX4                                              = 4
};

/// Enum /Script/AIModule.EAIParamType
/// Size: 0x04
enum EAIParamType : uint8_t
{
	EAIParamType__Float0                                                             = 0,
	EAIParamType__Int1                                                               = 1,
	EAIParamType__Bool2                                                              = 2,
	EAIParamType__MAX3                                                               = 3
};

/// Enum /Script/AIModule.EEnvQueryParam
/// Size: 0x04
enum EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float0                                                           = 0,
	EEnvQueryParam__Int1                                                             = 1,
	EEnvQueryParam__Bool2                                                            = 2,
	EEnvQueryParam__EEnvQueryParam_MAX3                                              = 3
};

/// Enum /Script/AIModule.EEnvQueryRunMode
/// Size: 0x05
enum EEnvQueryRunMode : uint8_t
{
	EEnvQueryRunMode__SingleResult0                                                  = 0,
	EEnvQueryRunMode__RandomBest5Pct1                                                = 1,
	EEnvQueryRunMode__RandomBest25Pct2                                               = 2,
	EEnvQueryRunMode__AllMatching3                                                   = 3,
	EEnvQueryRunMode__EEnvQueryRunMode_MAX4                                          = 4
};

/// Enum /Script/AIModule.EEnvTestScoreOperator
/// Size: 0x04
enum EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore0                                             = 0,
	EEnvTestScoreOperator__MinScore1                                                 = 1,
	EEnvTestScoreOperator__MaxScore2                                                 = 2,
	EEnvTestScoreOperator__EEnvTestScoreOperator_MAX3                                = 3
};

/// Enum /Script/AIModule.EEnvTestFilterOperator
/// Size: 0x03
enum EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass0                                                 = 0,
	EEnvTestFilterOperator__AnyPass1                                                 = 1,
	EEnvTestFilterOperator__EEnvTestFilterOperator_MAX2                              = 2
};

/// Enum /Script/AIModule.EEnvTestCost
/// Size: 0x04
enum EEnvTestCost : uint8_t
{
	EEnvTestCost__Low0                                                               = 0,
	EEnvTestCost__Medium1                                                            = 1,
	EEnvTestCost__High2                                                              = 2,
	EEnvTestCost__EEnvTestCost_MAX3                                                  = 3
};

/// Enum /Script/AIModule.EEnvTestWeight
/// Size: 0x07
enum EEnvTestWeight : uint8_t
{
	EEnvTestWeight__None0                                                            = 0,
	EEnvTestWeight__Square1                                                          = 1,
	EEnvTestWeight__Inverse2                                                         = 2,
	EEnvTestWeight__Unused3                                                          = 3,
	EEnvTestWeight__Constant4                                                        = 4,
	EEnvTestWeight__Skip5                                                            = 5,
	EEnvTestWeight__EEnvTestWeight_MAX6                                              = 6
};

/// Enum /Script/AIModule.EEnvTestScoreEquation
/// Size: 0x06
enum EEnvTestScoreEquation : uint8_t
{
	EEnvTestScoreEquation__Linear0                                                   = 0,
	EEnvTestScoreEquation__Square1                                                   = 1,
	EEnvTestScoreEquation__InverseLinear2                                            = 2,
	EEnvTestScoreEquation__SquareRoot3                                               = 3,
	EEnvTestScoreEquation__Constant4                                                 = 4,
	EEnvTestScoreEquation__EEnvTestScoreEquation_MAX5                                = 5
};

/// Enum /Script/AIModule.EEnvTestFilterType
/// Size: 0x05
enum EEnvTestFilterType : uint8_t
{
	EEnvTestFilterType__Minimum0                                                     = 0,
	EEnvTestFilterType__Maximum1                                                     = 1,
	EEnvTestFilterType__Range2                                                       = 2,
	EEnvTestFilterType__Match3                                                       = 3,
	EEnvTestFilterType__EEnvTestFilterType_MAX4                                      = 4
};

/// Enum /Script/AIModule.EEnvTestPurpose
/// Size: 0x04
enum EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter0                                                         = 0,
	EEnvTestPurpose__Score1                                                          = 1,
	EEnvTestPurpose__FilterAndScore2                                                 = 2,
	EEnvTestPurpose__EEnvTestPurpose_MAX3                                            = 3
};

/// Enum /Script/AIModule.EEnvQueryHightlightMode
/// Size: 0x04
enum EEnvQueryHightlightMode : uint8_t
{
	EEnvQueryHightlightMode__All0                                                    = 0,
	EEnvQueryHightlightMode__Best5Pct1                                               = 1,
	EEnvQueryHightlightMode__Best25Pct2                                              = 2,
	EEnvQueryHightlightMode__EEnvQueryHightlightMode_MAX3                            = 3
};

/// Enum /Script/AIModule.ETeamAttitude
/// Size: 0x04
enum ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly0                                                         = 0,
	ETeamAttitude__Neutral1                                                          = 1,
	ETeamAttitude__Hostile2                                                          = 2,
	ETeamAttitude__ETeamAttitude_MAX3                                                = 3
};

/// Enum /Script/AIModule.EPathFollowingRequestResult
/// Size: 0x04
enum EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed0                                             = 0,
	EPathFollowingRequestResult__AlreadyAtGoal1                                      = 1,
	EPathFollowingRequestResult__RequestSuccessful2                                  = 2,
	EPathFollowingRequestResult__EPathFollowingRequestResult_MAX3                    = 3
};

/// Enum /Script/AIModule.EPathFollowingAction
/// Size: 0x06
enum EPathFollowingAction : uint8_t
{
	EPathFollowingAction__Error0                                                     = 0,
	EPathFollowingAction__NoMove1                                                    = 1,
	EPathFollowingAction__DirectMove2                                                = 2,
	EPathFollowingAction__PartialPath3                                               = 3,
	EPathFollowingAction__PathToGoal4                                                = 4,
	EPathFollowingAction__EPathFollowingAction_MAX5                                  = 5
};

/// Enum /Script/AIModule.EPathFollowingStatus
/// Size: 0x05
enum EPathFollowingStatus : uint8_t
{
	EPathFollowingStatus__Idle0                                                      = 0,
	EPathFollowingStatus__Waiting1                                                   = 1,
	EPathFollowingStatus__Paused2                                                    = 2,
	EPathFollowingStatus__Moving3                                                    = 3,
	EPathFollowingStatus__EPathFollowingStatus_MAX4                                  = 4
};

/// Enum /Script/AIModule.EPawnActionFailHandling
/// Size: 0x03
enum EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess0                                         = 0,
	EPawnActionFailHandling__IgnoreFailure1                                          = 1,
	EPawnActionFailHandling__EPawnActionFailHandling_MAX2                            = 2
};

/// Enum /Script/AIModule.EPawnSubActionTriggeringPolicy
/// Size: 0x03
enum EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering0                            = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances1                                  = 1,
	EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX2              = 2
};

/// Enum /Script/AIModule.EPawnActionMoveMode
/// Size: 0x03
enum EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding0                                             = 0,
	EPawnActionMoveMode__StraightLine1                                               = 1,
	EPawnActionMoveMode__EPawnActionMoveMode_MAX2                                    = 2
};

