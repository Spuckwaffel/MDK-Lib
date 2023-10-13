
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTasks
/// dependency: NavigationSystem

/// Class /Script/AIModule.AIAsyncTaskBlueprintProxy
/// Size: 0x0040 (0x000028 - 0x000068)
class UAIAsyncTaskBlueprintProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFail                                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted
	// void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);                          // [0x6433e28] Final|RequiredAPI|Native|Public 
};

/// Class /Script/AIModule.AIResourceInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIResourceInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AISenseBlueprintListener
/// Size: 0x0000 (0x000108 - 0x000108)
class UAISenseBlueprintListener : public UUserDefinedStruct
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

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
/// Size: 0x0028 (0x000048 - 0x000070)
class UAISenseConfig_Sight : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UClass*)                                   Implementation                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     SightRadius                                                 OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LoseSightRadius                                             OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     PeripheralVisionAngleDegrees                                OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FAISenseAffiliationFilter)                 DetectionByAffiliation                                      OFFSET(getStruct<T>, {0x5C, 4, 0, 0})
	DMember(float)                                     AutoSuccessRangeFromLastSeenLocation                        OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     PointOfViewBackwardOffset                                   OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     NearClippingRadius                                          OFFSET(get<float>, {0x68, 4, 0, 0})
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
/// Size: 0x0050 (0x000028 - 0x000078)
class UAISenseEvent_Damage : public UAISenseEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FAIDamageEvent)                            Event                                                       OFFSET(getStruct<T>, {0x28, 80, 0, 0})
};

/// Class /Script/AIModule.AISenseEvent_Hearing
/// Size: 0x0038 (0x000028 - 0x000060)
class UAISenseEvent_Hearing : public UAISenseEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FAINoiseEvent)                             Event                                                       OFFSET(getStruct<T>, {0x28, 56, 0, 0})
};

/// Class /Script/AIModule.CrowdAgentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrowdAgentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
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

/// Class /Script/AIModule.GenericTeamAgentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGenericTeamAgentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.PawnAction
/// Size: 0x0068 (0x000028 - 0x000090)
class UPawnAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UPawnAction*)                              ChildAction                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UPawnAction*)                              ParentAction                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UPawnActionsComponent*)                    OwnerComponent                                              OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UObject*)                                  Instigator                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UBrainComponent*)                          BrainComp                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bAllowNewSameClassInstance                                  OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bReplaceActiveSameClassInstance                             OFFSET(get<bool>, {0x80, 1, 1, 1})
	DMember(bool)                                      bShouldPauseMovement                                        OFFSET(get<bool>, {0x80, 1, 1, 2})
	DMember(bool)                                      bAlwaysNotifyOnFinished                                     OFFSET(get<bool>, {0x80, 1, 1, 3})


	/// Functions
	// Function /Script/AIModule.PawnAction.GetActionPriority
	// TEnumAsByte<EAIRequestPriority> GetActionPriority();                                                                     // [0x6432cd0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.PawnAction.Finish
	// void Finish(TEnumAsByte<EPawnActionResult> WithResult);                                                                  // [0x6432c34] RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.PawnAction.CreateActionInstance
	// UPawnAction* CreateActionInstance(UObject* WorldContextObject, UClass* ActionClass);                                     // [0x6432ab8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.PawnActionsComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UPawnActionsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(APawn*)                                    ControlledPawn                                              OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TArray<FPawnActionStack>)                  ActionStacks                                                OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FPawnActionEvent>)                  ActionEvents                                                OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(UPawnAction*)                              CurrentAction                                               OFFSET(get<T>, {0xC8, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.PawnActionsComponent.K2_PushAction
	// bool K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, UObject* Instigator);               // [0x6433130] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_PerformAction
	// bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);                       // [0x6432fec] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_ForceAbortAction
	// TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(UPawnAction* ActionToAbort);                                      // [0x6432f60] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnActionsComponent.K2_AbortAction
	// TEnumAsByte<EPawnActionAbortState> K2_AbortAction(UPawnAction* ActionToAbort);                                           // [0x6432eac] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.PawnAction_BlueprintBase
/// Size: 0x0000 (0x000090 - 0x000090)
class UPawnAction_BlueprintBase : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/AIModule.PawnAction_Move
/// Size: 0x0060 (0x000090 - 0x0000F0)
class UPawnAction_Move : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(AActor*)                                   GoalActor                                                   OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FVector)                                   GoalLocation                                                OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	DMember(float)                                     AcceptableRadius                                            OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 OFFSET(get<T>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bAllowStrafe                                                OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(bool)                                      bFinishOnOverlap                                            OFFSET(get<bool>, {0xC0, 1, 1, 1})
	DMember(bool)                                      bUsePathfinding                                             OFFSET(get<bool>, {0xC0, 1, 1, 2})
	DMember(bool)                                      bAllowPartialPath                                           OFFSET(get<bool>, {0xC0, 1, 1, 3})
	DMember(bool)                                      bProjectGoalToNavigation                                    OFFSET(get<bool>, {0xC0, 1, 1, 4})
	DMember(bool)                                      bUpdatePathToGoal                                           OFFSET(get<bool>, {0xC0, 1, 1, 5})
	DMember(bool)                                      bAbortSubActionOnPathChange                                 OFFSET(get<bool>, {0xC0, 1, 1, 6})
};

/// Class /Script/AIModule.PawnAction_Repeat
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UPawnAction_Repeat : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UPawnAction*)                              ActionToRepeat                                              OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UPawnAction*)                              RecentActionCopy                                            OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TEnumAsByte<EPawnActionFailHandling>)      ChildFailureHandlingMode                                    OFFSET(get<T>, {0xA0, 1, 0, 0})
};

/// Class /Script/AIModule.PawnAction_Sequence
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UPawnAction_Sequence : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<UPawnAction*>)                      ActionSequence                                              OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TEnumAsByte<EPawnActionFailHandling>)      ChildFailureHandlingMode                                    OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(UPawnAction*)                              RecentActionCopy                                            OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/AIModule.PawnAction_Wait
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UPawnAction_Wait : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     TimeToWait                                                  OFFSET(get<float>, {0x90, 4, 0, 0})
};

/// Class /Script/AIModule.AIController
/// Size: 0x0090 (0x000328 - 0x0003B8)
class AAIController : public AController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	DMember(bool)                                      bStartAILogicOnPossess                                      OFFSET(get<bool>, {0x360, 1, 1, 0})
	DMember(bool)                                      bStopAILogicOnUnposses                                      OFFSET(get<bool>, {0x360, 1, 1, 1})
	DMember(bool)                                      bLOSflag                                                    OFFSET(get<bool>, {0x360, 1, 1, 2})
	DMember(bool)                                      bSkipExtraLOSChecks                                         OFFSET(get<bool>, {0x360, 1, 1, 3})
	DMember(bool)                                      bAllowStrafe                                                OFFSET(get<bool>, {0x360, 1, 1, 4})
	DMember(bool)                                      bWantsPlayerState                                           OFFSET(get<bool>, {0x360, 1, 1, 5})
	DMember(bool)                                      bSetControlRotationFromPawnOrientation                      OFFSET(get<bool>, {0x360, 1, 1, 6})
	CMember(UPathFollowingComponent*)                  PathFollowingComponent                                      OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UBrainComponent*)                          BrainComponent                                              OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UAIPerceptionComponent*)                   PerceptionComponent                                         OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UPawnActionsComponent*)                    ActionsComp                                                 OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UBlackboardComponent*)                     Blackboard                                                  OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UGameplayTasksComponent*)                  CachedGameplayTasksComponent                                OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UClass*)                                   DefaultNavigationFilterClass                                OFFSET(get<T>, {0x398, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  ReceiveMoveCompleted                                        OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIController.UseBlackboard
	// bool UseBlackboard(UBlackboardData* BlackboardAsset, UBlackboardComponent*& BlackboardComponent);                        // [0x64342b8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIController.UnclaimTaskResource
	// void UnclaimTaskResource(UClass* ResourceClass);                                                                         // [0x6434238] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetPathFollowingComponent
	// void SetPathFollowingComponent(UPathFollowingComponent* NewPFComponent);                                                 // [0x64341b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.SetMoveBlockDetection
	// void SetMoveBlockDetection(bool bEnable);                                                                                // [0x6434134] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.RunBehaviorTree
	// bool RunBehaviorTree(UBehaviorTree* BTAsset);                                                                            // [0x64340a0] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.OnUsingBlackBoard
	// void OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset);                          // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.AIController.OnGameplayTaskResourcesClaimed
	// void OnGameplayTaskResourcesClaimed(FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased);            // [0x6433ba8] RequiredAPI|Native|Public 
	// Function /Script/AIModule.AIController.MoveToLocation
	// TEnumAsByte<EPathFollowingRequestResult> MoveToLocation(FVector& Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath); // [0x6433664] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.MoveToActor
	// TEnumAsByte<EPathFollowingRequestResult> MoveToActor(AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, UClass* FilterClass, bool bAllowPartialPath); // [0x6433434] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocus
	// void K2_SetFocus(AActor* NewFocus);                                                                                      // [0x64333ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_SetFocalPoint
	// void K2_SetFocalPoint(FVector FP);                                                                                       // [0x6433238] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.AIController.K2_ClearFocus
	// void K2_ClearFocus();                                                                                                    // [0x6432f44] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIController.HasPartialPath
	// bool HasPartialPath();                                                                                                   // [0x6432e70] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetPathFollowingComponent
	// UPathFollowingComponent* GetPathFollowingComponent();                                                                    // [0x6432e58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetMoveStatus
	// TEnumAsByte<EPathFollowingStatus> GetMoveStatus();                                                                       // [0x6432e38] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetImmediateMoveDestination
	// FVector GetImmediateMoveDestination();                                                                                   // [0x6432e00] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocusActor
	// AActor* GetFocusActor();                                                                                                 // [0x6432ddc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPointOnActor
	// FVector GetFocalPointOnActor(AActor* Actor);                                                                             // [0x6432d34] RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetFocalPoint
	// FVector GetFocalPoint();                                                                                                 // [0x6432cfc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetDeprecatedActionsComponent
	// UPawnActionsComponent* GetDeprecatedActionsComponent();                                                                  // [0x6432ce4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIController.GetAIPerceptionComponent
	// UAIPerceptionComponent* GetAIPerceptionComponent();                                                                      // [0x6432cb8] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AIModule.AIController.ClaimTaskResource
	// void ClaimTaskResource(UClass* ResourceClass);                                                                           // [0x64329c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
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

/// Class /Script/AIModule.AISubsystem
/// Size: 0x0010 (0x000028 - 0x000038)
class UAISubsystem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UAISystem*)                                AISystem                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AIModule.AISystem
/// Size: 0x0120 (0x000058 - 0x000178)
class UAISystem : public UAISystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FSoftClassPath)                            PerceptionSystemClassName                                   OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FSoftClassPath)                            HotSpotManagerClassName                                     OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FSoftClassPath)                            EnvQueryManagerClassName                                    OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	DMember(float)                                     AcceptanceRadius                                            OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     PathfollowingRegularPathPointAcceptanceRadius               OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     PathfollowingNavLinkAcceptanceRadius                        OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bFinishMoveOnGoalOverlap                                    OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bAcceptPartialPaths                                         OFFSET(get<bool>, {0xAD, 1, 0, 0})
	DMember(bool)                                      bAllowStrafing                                              OFFSET(get<bool>, {0xAE, 1, 0, 0})
	DMember(bool)                                      bAllowControllersAsEQSQuerier                               OFFSET(get<bool>, {0xAF, 1, 0, 0})
	DMember(bool)                                      bEnableDebuggerPlugin                                       OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bForgetStaleActors                                          OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bAddBlackboardSelfKey                                       OFFSET(get<bool>, {0xB2, 1, 0, 0})
	DMember(bool)                                      bClearBBEntryOnBTEQSFail                                    OFFSET(get<bool>, {0xB3, 1, 0, 0})
	DMember(bool)                                      bBlackboardKeyDecoratorAllowsNoneAsValue                    OFFSET(get<bool>, {0xB4, 1, 0, 0})
	CMember(TWeakObjectPtr<UBlackboardData*>)          DefaultBlackboard                                           OFFSET(get<T>, {0xB8, 32, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DefaultSightCollisionChannel                                OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(UBehaviorTreeManager*)                     BehaviorTreeManager                                         OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UEnvQueryManager*)                         EnvironmentQueryManager                                     OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UAIPerceptionSystem*)                      PerceptionSystem                                            OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<UAIAsyncTaskBlueprintProxy*>)       AllProxyObjects                                             OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(UAIHotSpotManager*)                        HotSpotManager                                              OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(UNavLocalGridManager*)                     NavLocalGrids                                               OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISystem.AILoggingVerbose
	// void AILoggingVerbose();                                                                                                 // [0x2dce03c] RequiredAPI|Exec|Native|Public 
	// Function /Script/AIModule.AISystem.AIIgnorePlayers
	// void AIIgnorePlayers();                                                                                                  // [0x1dda2b8] RequiredAPI|Exec|Native|Public 
};

/// Class /Script/AIModule.BehaviorTree
/// Size: 0x0040 (0x000028 - 0x000068)
class UBehaviorTree : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UBTCompositeNode*)                         RootNode                                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UBlackboardData*)                          BlackboardAsset                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<UBTDecorator*>)                     RootDecorators                                              OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FBTDecoratorLogic>)                 RootDecoratorOps                                            OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/AIModule.BrainComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UBrainComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(UBlackboardComponent*)                     BlackboardComp                                              OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(AAIController*)                            AIOwner                                                     OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.BrainComponent.StopLogic
	// void StopLogic(FString Reason);                                                                                          // [0x6499f30] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.StartLogic
	// void StartLogic();                                                                                                       // [0x2c410f8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.RestartLogic
	// void RestartLogic();                                                                                                     // [0x6499194] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BrainComponent.IsRunning
	// bool IsRunning();                                                                                                        // [0x6498aec] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BrainComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0x6498ac4] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BehaviorTreeComponent
/// Size: 0x01A0 (0x0000F8 - 0x000298)
class UBehaviorTreeComponent : public UBrainComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(TArray<UBTNode*>)                          NodeInstances                                               OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(UBehaviorTree*)                            DefaultBehaviorTreeAsset                                    OFFSET(get<T>, {0x270, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.BehaviorTreeComponent.SetDynamicSubtree
	// void SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset);                                            // [0x645d6e4] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.BehaviorTreeComponent.GetTagCooldownEndTime
	// double GetTagCooldownEndTime(FGameplayTag CooldownTag);                                                                  // [0x645b350] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BehaviorTreeComponent.AddCooldownTagDuration
	// void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);              // [0x6459930] Final|RequiredAPI|Native|Public|BlueprintCallable 
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

/// Class /Script/AIModule.BlackboardAssetProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlackboardAssetProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.BlackboardComponent
/// Size: 0x0108 (0x0000A0 - 0x0001A8)
class UBlackboardComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(UBrainComponent*)                          BrainComp                                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UBlackboardData*)                          DefaultBlackboardAsset                                      OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UBlackboardData*)                          BlackboardAsset                                             OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<UBlackboardKeyType*>)               KeyInstances                                                OFFSET(get<T>, {0xD8, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.BlackboardComponent.SetValueAsVector
	// void SetValueAsVector(FName& KeyName, FVector VectorValue);                                                              // [0x645eb90] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsString
	// void SetValueAsString(FName& KeyName, FString StringValue);                                                              // [0x645e3fc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsRotator
	// void SetValueAsRotator(FName& KeyName, FRotator VectorValue);                                                            // [0x645e244] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsObject
	// void SetValueAsObject(FName& KeyName, UObject* ObjectValue);                                                             // [0x645e110] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsName
	// void SetValueAsName(FName& KeyName, FName NameValue);                                                                    // [0x645dfc8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsInt
	// void SetValueAsInt(FName& KeyName, int32_t IntValue);                                                                    // [0x645de80] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsFloat
	// void SetValueAsFloat(FName& KeyName, float FloatValue);                                                                  // [0x645dd4c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsEnum
	// void SetValueAsEnum(FName& KeyName, char EnumValue);                                                                     // [0x645dc04] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsClass
	// void SetValueAsClass(FName& KeyName, UClass* ClassValue);                                                                // [0x645dab8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.SetValueAsBool
	// void SetValueAsBool(FName& KeyName, bool BoolValue);                                                                     // [0x645d960] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.BlackboardComponent.IsVectorValueSet
	// bool IsVectorValueSet(FName& KeyName);                                                                                   // [0x645bbc0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsVector
	// FVector GetValueAsVector(FName& KeyName);                                                                                // [0x645ba34] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsString
	// FString GetValueAsString(FName& KeyName);                                                                                // [0x645b984] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsRotator
	// FRotator GetValueAsRotator(FName& KeyName);                                                                              // [0x645b8d8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsObject
	// UObject* GetValueAsObject(FName& KeyName);                                                                               // [0x645b840] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsName
	// FName GetValueAsName(FName& KeyName);                                                                                    // [0x645b7b0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsInt
	// int32_t GetValueAsInt(FName& KeyName);                                                                                   // [0x645b718] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsFloat
	// float GetValueAsFloat(FName& KeyName);                                                                                   // [0x645b67c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsEnum
	// char GetValueAsEnum(FName& KeyName);                                                                                     // [0x645b5e4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsClass
	// UClass* GetValueAsClass(FName& KeyName);                                                                                 // [0x645b54c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetValueAsBool
	// bool GetValueAsBool(FName& KeyName);                                                                                     // [0x645b4b4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetRotationFromEntry
	// bool GetRotationFromEntry(FName& KeyName, FRotator& ResultRotation);                                                     // [0x645b254] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.GetLocationFromEntry
	// bool GetLocationFromEntry(FName& KeyName, FVector& ResultLocation);                                                      // [0x645b048] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BlackboardComponent.ClearValue
	// void ClearValue(FName& KeyName);                                                                                         // [0x6459dbc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
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
	CMember(UClass*)                                   BaseClass                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
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
	CMember(UClass*)                                   BaseClass                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
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

/// Class /Script/AIModule.BTCompositeNode
/// Size: 0x0028 (0x000058 - 0x000080)
class UBTCompositeNode : public UBTNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FBTCompositeChild>)                 Children                                                    OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<UBTService*>)                       Services                                                    OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bApplyDecoratorScope                                        OFFSET(get<bool>, {0x78, 1, 1, 0})
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

/// Class /Script/AIModule.BTFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBTFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

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

/// Class /Script/AIModule.BTComposite_Selector
/// Size: 0x0000 (0x000080 - 0x000080)
class UBTComposite_Selector : public UBTCompositeNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/AIModule.BTComposite_Sequence
/// Size: 0x0000 (0x000080 - 0x000080)
class UBTComposite_Sequence : public UBTCompositeNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/AIModule.BTComposite_SimpleParallel
/// Size: 0x0008 (0x000080 - 0x000088)
class UBTComposite_SimpleParallel : public UBTCompositeNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TEnumAsByte<EBTParallelMode>)              FinishMode                                                  OFFSET(get<T>, {0x80, 1, 0, 0})
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
	DMember(char)                                      OperationType                                               OFFSET(get<char>, {0xB8, 1, 0, 0})
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


	/// Functions
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTick
	// void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);                                                                // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI
	// void ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn);                                // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated
	// void ReceiveObserverDeactivated(AActor* OwnerActor);                                                                     // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI
	// void ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn);                                  // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated
	// void ReceiveObserverActivated(AActor* OwnerActor);                                                                       // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI
	// void ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart
	// void ReceiveExecutionStart(AActor* OwnerActor);                                                                          // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI
	// void ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult); // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish
	// void ReceiveExecutionFinish(AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);                                  // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI
	// bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);                                     // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheck
	// bool PerformConditionCheck(AActor* OwnerActor);                                                                          // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive
	// bool IsDecoratorObserverActive();                                                                                        // [0x645bb58] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive
	// bool IsDecoratorExecutionActive();                                                                                       // [0x645bae0] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
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
/// Size: 0x0048 (0x000090 - 0x0000D8)
class UBTDecorator_IsAtLocation : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(float)                                     AcceptableRadius                                            OFFSET(get<float>, {0x90, 4, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ParametrizedAcceptableRadius                                OFFSET(getStruct<T>, {0x98, 56, 0, 0})
	SMember(FAIDistanceType)                           GeometricDistanceType                                       OFFSET(getStruct<T>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bUseParametrizedRadius                                      OFFSET(get<bool>, {0xD4, 1, 1, 0})
	DMember(bool)                                      bUseNavAgentGoalLocation                                    OFFSET(get<bool>, {0xD4, 1, 1, 1})
	DMember(bool)                                      bPathFindingBasedTest                                       OFFSET(get<bool>, {0xD4, 1, 1, 2})
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
	SMember(FGameplayTag)                              CooldownTag                                                 OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	DMember(float)                                     CooldownDuration                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bAddToExistingDuration                                      OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_TagCooldown
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTDecorator_TagCooldown : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTag)                              CooldownTag                                                 OFFSET(getStruct<T>, {0x68, 4, 0, 0})
	DMember(float)                                     CooldownDuration                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bAddToExistingDuration                                      OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bActivatesCooldown                                          OFFSET(get<bool>, {0x71, 1, 0, 0})
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

/// Class /Script/AIModule.BTService_BlackboardBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTService_BlackboardBase : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               OFFSET(getStruct<T>, {0x70, 40, 0, 0})
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
	// void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTick
	// void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);                                                                // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStartAI
	// void ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn);                                        // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStart
	// void ReceiveSearchStart(AActor* OwnerActor);                                                                             // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivationAI
	// void ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn);                                       // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivation
	// void ReceiveDeactivation(AActor* OwnerActor);                                                                            // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivationAI
	// void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);                                         // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivation
	// void ReceiveActivation(AActor* OwnerActor);                                                                              // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTService_BlueprintBase.IsServiceActive
	// bool IsServiceActive();                                                                                                  // [0x6498b14] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.BTService_DefaultFocus
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(char)                                      FocusPriority                                               OFFSET(get<char>, {0x98, 1, 0, 0})
};

/// Class /Script/AIModule.BTService_RunEQS
/// Size: 0x0060 (0x000098 - 0x0000F8)
class UBTService_RunEQS : public UBTService_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0x98, 72, 0, 0})
	DMember(bool)                                      bUpdateBBOnFail                                             OFFSET(get<bool>, {0xE0, 1, 0, 0})
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

/// Class /Script/AIModule.BTTask_BlueprintBase
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UBTTask_BlueprintBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(AAIController*)                            AIOwner                                                     OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(AActor*)                                   ActorOwner                                                  OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FIntervalCountdown)                        TickInterval                                                OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bShowPropertyDetails                                        OFFSET(get<bool>, {0xA0, 1, 1, 0})


	/// Functions
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId
	// void SetFinishOnMessageWithId(FName MessageName, int32_t RequestID);                                                     // [0x64996b0] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessage
	// void SetFinishOnMessage(FName MessageName);                                                                              // [0x6499614] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTickAI
	// void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);                           // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTick
	// void ReceiveTick(AActor* OwnerActor, float DeltaSeconds);                                                                // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecuteAI
	// void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);                                            // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecute
	// void ReceiveExecute(AActor* OwnerActor);                                                                                 // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbortAI
	// void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);                                              // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbort
	// void ReceiveAbort(AActor* OwnerActor);                                                                                   // [0x1d9241c] RequiredAPI|Event|Protected|BlueprintEvent 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskExecuting
	// bool IsTaskExecuting();                                                                                                  // [0x6498b88] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskAborting
	// bool IsTaskAborting();                                                                                                   // [0x6498b6c] Final|RequiredAPI|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishExecute
	// void FinishExecute(bool bSuccess);                                                                                       // [0x64983e8] Final|RequiredAPI|Native|Protected|BlueprintCallable 
	// Function /Script/AIModule.BTTask_BlueprintBase.FinishAbort
	// void FinishAbort();                                                                                                      // [0x6498380] Final|RequiredAPI|Native|Protected|BlueprintCallable 
};

/// Class /Script/AIModule.BTTask_FinishWithResult
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_FinishWithResult : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TEnumAsByte<EBTNodeResult>)                Result                                                      OFFSET(get<T>, {0x70, 1, 0, 0})
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

/// Class /Script/AIModule.BTTask_MakeNoise
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_MakeNoise : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     Loudnes                                                     OFFSET(get<float>, {0x70, 4, 0, 0})
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
	DMember(bool)                                      bRequireNavigableEndLocation                                OFFSET(get<bool>, {0xAC, 1, 1, 4})
	DMember(bool)                                      bProjectGoalLocation                                        OFFSET(get<bool>, {0xAC, 1, 1, 5})
	DMember(bool)                                      bReachTestIncludesAgentRadius                               OFFSET(get<bool>, {0xAC, 1, 1, 6})
	DMember(bool)                                      bReachTestIncludesGoalRadius                                OFFSET(get<bool>, {0xAC, 1, 1, 7})
	DMember(bool)                                      bStopOnOverlap                                              OFFSET(get<bool>, {0xAD, 1, 1, 0})
	DMember(bool)                                      bStopOnOverlapNeedsUpdate                                   OFFSET(get<bool>, {0xAD, 1, 1, 1})
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
/// Size: 0x0040 (0x000070 - 0x0000B0)
class UBTTask_PlayAnimation : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

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
	SMember(FGameplayTag)                              InjectionTag                                                OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	CMember(UBehaviorTree*)                            DefaultBehaviorAsset                                        OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(UBehaviorTree*)                            BehaviorAsset                                               OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_RunEQSQuery
/// Size: 0x00C0 (0x000098 - 0x000158)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UEnvQuery*)                                QueryTemplate                                               OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TArray<FEnvNamedValue>)                    QueryParams                                                 OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             RunMode                                                     OFFSET(get<T>, {0xC0, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    EQSQueryBlackboardKey                                       OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	DMember(bool)                                      bUseBBKey                                                   OFFSET(get<bool>, {0xF0, 1, 0, 0})
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  OFFSET(getStruct<T>, {0xF8, 72, 0, 0})
	DMember(bool)                                      bUpdateBBOnFail                                             OFFSET(get<bool>, {0x140, 1, 0, 0})
};

/// Class /Script/AIModule.BTTask_SetTagCooldown
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTTask_SetTagCooldown : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTag)                              CooldownTag                                                 OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	DMember(bool)                                      bAddToExistingDuration                                      OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(float)                                     CooldownDuration                                            OFFSET(get<float>, {0x78, 4, 0, 0})
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

/// Class /Script/AIModule.AIBlueprintHelperLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIBlueprintHelperLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AIDataProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIDataProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AIDataProvider_QueryParams
/// Size: 0x0010 (0x000028 - 0x000038)
class UAIDataProvider_QueryParams : public UAIDataProvider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   IntValue                                                    OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x34, 1, 0, 0})
};

/// Class /Script/AIModule.AIDataProvider_Random
/// Size: 0x0010 (0x000038 - 0x000048)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     min                                                         OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     max                                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bInteger                                                    OFFSET(get<bool>, {0x40, 1, 1, 0})
};

/// Class /Script/AIModule.DetourCrowdAIController
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class ADetourCrowdAIController : public AAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

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

/// Class /Script/AIModule.EnvQueryContext_BlueprintBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UEnvQueryContext_BlueprintBase : public UEnvQueryContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
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

/// Class /Script/AIModule.EnvQuery
/// Size: 0x0018 (0x000030 - 0x000048)
class UEnvQuery : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     QueryName                                                   OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	CMember(TArray<UEnvQueryOption*>)                  Options                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/AIModule.EnvQueryDebugHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnvQueryDebugHelpers : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
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
	SMember(FMulticastInlineDelegate)                  OnQueryFinishedEvent                                        OFFSET(getStruct<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam
	// void SetNamedParam(FName ParamName, float Value);                                                                        // [0x6499784] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations
	// TArray<FVector> GetResultsAsLocations();                                                                                 // [0x6498a84] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors
	// TArray<AActor*> GetResultsAsActors();                                                                                    // [0x6498a44] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations
	// bool GetQueryResultsAsLocations(TArray<FVector>& ResultLocations);                                                       // [0x6498998] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors
	// bool GetQueryResultsAsActors(TArray<AActor*>& ResultActors);                                                             // [0x64988ec] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore
	// float GetItemScore(int32_t ItemIndex);                                                                                   // [0x6498794] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature
	// void EQSQueryDoneSignature__DelegateSignature(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus); // [0x1d9241c] MulticastDelegate|Public|Delegate 
};

/// Class /Script/AIModule.EnvQueryManager
/// Size: 0x0120 (0x000038 - 0x000158)
class UEnvQueryManager : public UAISubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TArray<FEnvQueryInstanceCache>)            InstanceCache                                               OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<UEnvQueryContext*>)                 LocalContexts                                               OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<UEnvQueryInstanceBlueprintWrapper*>) GCShieldedWrappers                                         OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(float)                                     MaxAllowedTestingTime                                       OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(bool)                                      bTestQueriesUsingBreadth                                    OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(int32_t)                                   QueryCountWarningThreshold                                  OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	DMember(double)                                    QueryCountWarningInterval                                   OFFSET(get<double>, {0x138, 8, 0, 0})
	DMember(double)                                    ExecutionTimeWarningSeconds                                 OFFSET(get<double>, {0x140, 8, 0, 0})
	DMember(double)                                    HandlingResultTimeWarningSeconds                            OFFSET(get<double>, {0x148, 8, 0, 0})
	DMember(double)                                    GenerationTimeWarningSeconds                                OFFSET(get<double>, {0x150, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.EnvQueryManager.RunEQSQuery
	// UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(UObject* WorldContextObject, UEnvQuery* QueryTemplate, UObject* Querier, TEnumAsByte<EEnvQueryRunMode> RunMode, UClass* WrapperClass); // [0x64991ac] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
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

/// Class /Script/AIModule.EnvQueryTest
/// Size: 0x01C8 (0x000030 - 0x0001F8)
class UEnvQueryTest : public UEnvQueryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	DMember(int32_t)                                   TestOrder                                                   OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TEnumAsByte<EEnvTestPurpose>)              TestPurpose                                                 OFFSET(get<T>, {0x34, 1, 0, 0})
	SMember(FString)                                   TestComment                                                 OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EEnvTestFilterOperator>)       MultipleContextFilterOp                                     OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EEnvTestScoreOperator>)        MultipleContextScoreOp                                      OFFSET(get<T>, {0x49, 1, 0, 0})
	CMember(TEnumAsByte<EEnvTestFilterType>)           FilterType                                                  OFFSET(get<T>, {0x4A, 1, 0, 0})
	SMember(FAIDataProviderBoolValue)                  BoolValue                                                   OFFSET(getStruct<T>, {0x50, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 FloatValueMin                                               OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 FloatValueMax                                               OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	CMember(TEnumAsByte<EEnvTestScoreEquation>)        ScoringEquation                                             OFFSET(get<T>, {0xF9, 1, 0, 0})
	CMember(TEnumAsByte<EEnvQueryTestClamping>)        ClampMinType                                                OFFSET(get<T>, {0xFA, 1, 0, 0})
	CMember(TEnumAsByte<EEnvQueryTestClamping>)        ClampMaxType                                                OFFSET(get<T>, {0xFB, 1, 0, 0})
	CMember(EEQSNormalizationType)                     NormalizationType                                           OFFSET(get<T>, {0xFC, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreClampMin                                               OFFSET(getStruct<T>, {0x100, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreClampMax                                               OFFSET(getStruct<T>, {0x138, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoringFactor                                               OFFSET(getStruct<T>, {0x170, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ReferenceValue                                              OFFSET(getStruct<T>, {0x1A8, 56, 0, 0})
	DMember(bool)                                      bDefineReferenceValue                                       OFFSET(get<bool>, {0x1E0, 1, 0, 0})
	DMember(bool)                                      bWorkOnFloatValues                                          OFFSET(get<bool>, {0x1F0, 1, 1, 0})
};

/// Class /Script/AIModule.EQSRenderingComponent
/// Size: 0x0030 (0x0005C0 - 0x0005F0)
class UEQSRenderingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
};

/// Class /Script/AIModule.EQSTestingPawn
/// Size: 0x00A0 (0x000660 - 0x000700)
class AEQSTestingPawn : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	CMember(UEnvQuery*)                                QueryTemplate                                               OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(TArray<FEnvNamedValue>)                    QueryParams                                                 OFFSET(get<T>, {0x670, 16, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 OFFSET(get<T>, {0x680, 16, 0, 0})
	DMember(float)                                     TimeLimitPerStep                                            OFFSET(get<float>, {0x690, 4, 0, 0})
	DMember(int32_t)                                   StepToDebugDraw                                             OFFSET(get<int32_t>, {0x694, 4, 0, 0})
	CMember(EEnvQueryHightlightMode)                   HighlightMode                                               OFFSET(get<T>, {0x698, 1, 0, 0})
	DMember(bool)                                      bDrawLabels                                                 OFFSET(get<bool>, {0x69C, 1, 1, 0})
	DMember(bool)                                      bDrawFailedItems                                            OFFSET(get<bool>, {0x69C, 1, 1, 1})
	DMember(bool)                                      bReRunQueryOnlyOnFinishedMove                               OFFSET(get<bool>, {0x69C, 1, 1, 2})
	DMember(bool)                                      bShouldBeVisibleInGame                                      OFFSET(get<bool>, {0x69C, 1, 1, 3})
	DMember(bool)                                      bTickDuringGame                                             OFFSET(get<bool>, {0x69C, 1, 1, 4})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             QueryingMode                                                OFFSET(get<T>, {0x6A0, 1, 0, 0})
	SMember(FNavAgentProperties)                       NavAgentProperties                                          OFFSET(getStruct<T>, {0x6A8, 48, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_ActorsOfClass
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UClass*)                                   SearchedActorClass                                          OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderBoolValue)                  GenerateOnlyActorsInRadius                                  OFFSET(getStruct<T>, {0x58, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SearchRadius                                                OFFSET(getStruct<T>, {0x90, 56, 0, 0})
	CMember(UClass*)                                   SearchCenter                                                OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_BlueprintBase
/// Size: 0x0038 (0x000050 - 0x000088)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FText)                                     GeneratorsActionDescription                                 OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(UClass*)                                   Context                                                     OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UClass*)                                   GeneratedItemType                                           OFFSET(get<T>, {0x70, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier
	// UObject* GetQuerier();                                                                                                   // [0x64988c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGenerationFromActors
	// void DoItemGenerationFromActors(TArray<AActor*>& ContextActors);                                                         // [0x1d9241c] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration
	// void DoItemGeneration(TArray<FVector>& ContextLocations);                                                                // [0x1d9241c] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector
	// void AddGeneratedVector(FVector GeneratedVector);                                                                        // [0x6497cec] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|Const 
	// Function /Script/AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor
	// void AddGeneratedActor(AActor* GeneratedActor);                                                                          // [0x6497c6c] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
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

/// Class /Script/AIModule.EnvQueryGenerator_ProjectedPoints
/// Size: 0x0038 (0x000050 - 0x000088)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FEnvTraceData)                             ProjectionData                                              OFFSET(getStruct<T>, {0x50, 56, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_Cone
/// Size: 0x00F0 (0x000088 - 0x000178)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FAIDataProviderFloatValue)                 AlignedPointsDistance                                       OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ConeDegrees                                                 OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 AngleStep                                                   OFFSET(getStruct<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 Range                                                       OFFSET(getStruct<T>, {0x130, 56, 0, 0})
	CMember(UClass*)                                   CenterActor                                                 OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bIncludeContextLocation                                     OFFSET(get<bool>, {0x170, 1, 1, 0})
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
/// Size: 0x0150 (0x000088 - 0x0001D8)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FAIDataProviderFloatValue)                 InnerRadius                                                 OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 OuterRadius                                                 OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   NumberOfRings                                               OFFSET(getStruct<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   PointsPerRing                                               OFFSET(getStruct<T>, {0x130, 56, 0, 0})
	SMember(FEnvDirection)                             ArcDirection                                                OFFSET(getStruct<T>, {0x168, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ArcAngle                                                    OFFSET(getStruct<T>, {0x188, 56, 0, 0})
	DMember(bool)                                      bUseSpiralPattern                                           OFFSET(get<bool>, {0x1C0, 1, 0, 0})
	CMember(UClass*)                                   Center                                                      OFFSET(get<T>, {0x1C8, 8, 0, 0})
	DMember(bool)                                      bDefineArc                                                  OFFSET(get<bool>, {0x1D0, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_OnCircle
/// Size: 0x0198 (0x000088 - 0x000220)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FAIDataProviderFloatValue)                 CircleRadius                                                OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   NumberOfPoints                                              OFFSET(getStruct<T>, {0xF8, 56, 0, 0})
	CMember(EPointOnCircleSpacingMethod)               PointOnCircleSpacingMethod                                  OFFSET(get<T>, {0x130, 1, 0, 0})
	SMember(FEnvDirection)                             ArcDirection                                                OFFSET(getStruct<T>, {0x138, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ArcAngle                                                    OFFSET(getStruct<T>, {0x158, 56, 0, 0})
	DMember(float)                                     AngleRadians                                                OFFSET(get<float>, {0x190, 4, 0, 0})
	CMember(UClass*)                                   CircleCenter                                                OFFSET(get<T>, {0x198, 8, 0, 0})
	DMember(bool)                                      bIgnoreAnyContextActorsWhenGeneratingCircle                 OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 CircleCenterZOffset                                         OFFSET(getStruct<T>, {0x1A8, 56, 0, 0})
	SMember(FEnvTraceData)                             TraceData                                                   OFFSET(getStruct<T>, {0x1E0, 56, 0, 0})
	DMember(bool)                                      bDefineArc                                                  OFFSET(get<bool>, {0x218, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_SimpleGrid
/// Size: 0x0078 (0x000088 - 0x000100)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAIDataProviderFloatValue)                 GridSize                                                    OFFSET(getStruct<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                OFFSET(getStruct<T>, {0xC0, 56, 0, 0})
	CMember(UClass*)                                   GenerateAround                                              OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_PathingGrid
/// Size: 0x0078 (0x000100 - 0x000178)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FAIDataProviderBoolValue)                  PathToItem                                                  OFFSET(getStruct<T>, {0x100, 56, 0, 0})
	CMember(UClass*)                                   NavigationFilter                                            OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScanRangeMultiplier                                         OFFSET(getStruct<T>, {0x140, 56, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_PerceivedActors
/// Size: 0x0058 (0x000050 - 0x0000A8)
class UEnvQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UClass*)                                   AllowedActorClass                                           OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SearchRadius                                                OFFSET(getStruct<T>, {0x58, 56, 0, 0})
	CMember(UClass*)                                   ListenerContext                                             OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UClass*)                                   SenseToUse                                                  OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(bool)                                      bIncludeKnownActors                                         OFFSET(get<bool>, {0xA0, 1, 0, 0})
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

/// Class /Script/AIModule.EnvQueryItemType_Point
/// Size: 0x0000 (0x000030 - 0x000030)
class UEnvQueryItemType_Point : public UEnvQueryItemType_VectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AIModule.EnvQueryTest_Distance
/// Size: 0x0010 (0x0001F8 - 0x000208)
class UEnvQueryTest_Distance : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(TEnumAsByte<EEnvTestDistance>)             TestMode                                                    OFFSET(get<T>, {0x1F8, 1, 0, 0})
	CMember(UClass*)                                   DistanceTo                                                  OFFSET(get<T>, {0x200, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Dot
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UEnvQueryTest_Dot : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FEnvDirection)                             LineA                                                       OFFSET(getStruct<T>, {0x1F8, 32, 0, 0})
	SMember(FEnvDirection)                             LineB                                                       OFFSET(getStruct<T>, {0x218, 32, 0, 0})
	CMember(EEnvTestDot)                               TestMode                                                    OFFSET(get<T>, {0x238, 1, 0, 0})
	DMember(bool)                                      bAbsoluteValue                                              OFFSET(get<bool>, {0x239, 1, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_GameplayTags
/// Size: 0x0070 (0x0001F8 - 0x000268)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FGameplayTagQuery)                         TagQueryToMatch                                             OFFSET(getStruct<T>, {0x1F8, 72, 0, 0})
	DMember(bool)                                      bRejectIncompatibleItems                                    OFFSET(get<bool>, {0x240, 1, 0, 0})
	DMember(bool)                                      bUpdatedToUseQuery                                          OFFSET(get<bool>, {0x241, 1, 0, 0})
	CMember(EGameplayContainerMatchType)               TagsToMatch                                                 OFFSET(get<T>, {0x242, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(getStruct<T>, {0x248, 32, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Overlap
/// Size: 0x0030 (0x0001F8 - 0x000228)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FEnvOverlapData)                           OverlapData                                                 OFFSET(getStruct<T>, {0x1F8, 48, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Pathfinding
/// Size: 0x0088 (0x0001F8 - 0x000280)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(TEnumAsByte<EEnvTestPathfinding>)          TestMode                                                    OFFSET(get<T>, {0x1F8, 1, 0, 0})
	CMember(UClass*)                                   Context                                                     OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(FAIDataProviderBoolValue)                  PathFromContext                                             OFFSET(getStruct<T>, {0x208, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  SkipUnreachable                                             OFFSET(getStruct<T>, {0x240, 56, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 OFFSET(get<T>, {0x278, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_PathfindingBatch
/// Size: 0x0038 (0x000280 - 0x0002B8)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FAIDataProviderFloatValue)                 ScanRangeMultiplier                                         OFFSET(getStruct<T>, {0x280, 56, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Project
/// Size: 0x0038 (0x0001F8 - 0x000230)
class UEnvQueryTest_Project : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FEnvTraceData)                             ProjectionData                                              OFFSET(getStruct<T>, {0x1F8, 56, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Random
/// Size: 0x0000 (0x0001F8 - 0x0001F8)
class UEnvQueryTest_Random : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
};

/// Class /Script/AIModule.EnvQueryTest_Trace
/// Size: 0x00E8 (0x0001F8 - 0x0002E0)
class UEnvQueryTest_Trace : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FEnvTraceData)                             TraceData                                                   OFFSET(getStruct<T>, {0x1F8, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  TraceFromContext                                            OFFSET(getStruct<T>, {0x230, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ItemHeightOffset                                            OFFSET(getStruct<T>, {0x268, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ContextHeightOffset                                         OFFSET(getStruct<T>, {0x2A0, 56, 0, 0})
	CMember(UClass*)                                   Context                                                     OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Volume
/// Size: 0x0018 (0x0001F8 - 0x000210)
class UEnvQueryTest_Volume : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(UClass*)                                   VolumeContext                                               OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(UClass*)                                   VolumeClass                                                 OFFSET(get<T>, {0x200, 8, 0, 0})
	DMember(bool)                                      bDoComplexVolumeTest                                        OFFSET(get<bool>, {0x208, 1, 1, 0})
	DMember(bool)                                      bSkipTestIfNoVolumes                                        OFFSET(get<bool>, {0x208, 1, 1, 1})
};

/// Class /Script/AIModule.GridPathAIController
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class AGridPathAIController : public AAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

/// Class /Script/AIModule.AIHotSpotManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UAIHotSpotManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.PathFollowingComponent
/// Size: 0x0228 (0x0000A0 - 0x0002C8)
class UPathFollowingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(UNavMovementComponent*)                    MovementComp                                                OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(ANavigationData*)                          MyNavData                                                   OFFSET(get<T>, {0xE8, 8, 0, 0})


	/// Functions
	// Function /Script/AIModule.PathFollowingComponent.OnNavDataRegistered
	// void OnNavDataRegistered(ANavigationData* NavData);                                                                      // [0x64be8e8] Final|RequiredAPI|Native|Protected 
	// Function /Script/AIModule.PathFollowingComponent.OnActorBump
	// void OnActorBump(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);                         // [0x64be66c] RequiredAPI|Native|Public|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PathFollowingComponent.GetPathDestination
	// FVector GetPathDestination();                                                                                            // [0x64be394] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PathFollowingComponent.GetPathActionType
	// TEnumAsByte<EPathFollowingAction> GetPathActionType();                                                                   // [0x64be31c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.CrowdFollowingComponent
/// Size: 0x0050 (0x0002C8 - 0x000318)
class UCrowdFollowingComponent : public UPathFollowingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FVector)                                   CrowdAgentMoveDirection                                     OFFSET(getStruct<T>, {0x2E0, 24, 0, 0})


	/// Functions
	// Function /Script/AIModule.CrowdFollowingComponent.SuspendCrowdSteering
	// void SuspendCrowdSteering(bool bSuspend);                                                                                // [0x64bee8c] RequiredAPI|Native|Public|BlueprintCallable 
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

/// Class /Script/AIModule.GridPathFollowingComponent
/// Size: 0x0030 (0x0002C8 - 0x0002F8)
class UGridPathFollowingComponent : public UPathFollowingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UNavLocalGridManager*)                     GridManager                                                 OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Class /Script/AIModule.NavFilter_AIControllerDefault
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_AIControllerDefault : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/AIModule.NavLinkProxy
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ANavLinkProxy : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(TArray<FNavigationLink>)                   PointLinks                                                  OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<FNavigationSegmentLink>)            SegmentLinks                                                OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(UNavLinkCustomComponent*)                  SmartLinkComp                                               OFFSET(get<T>, {0x2C0, 8, 0, 0})
	DMember(bool)                                      bSmartLinkIsRelevant                                        OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSmartLinkReached                                          OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.NavLinkProxy.SetSmartLinkEnabled
	// void SetSmartLinkEnabled(bool bEnabled);                                                                                 // [0x64bee08] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLinkProxy.ResumePathFollowing
	// void ResumePathFollowing(AActor* Agent);                                                                                 // [0x64beba4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.NavLinkProxy.ReceiveSmartLinkReached
	// void ReceiveSmartLinkReached(AActor* Agent, FVector& Destination);                                                       // [0x1d9241c] RequiredAPI|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/AIModule.NavLinkProxy.IsSmartLinkEnabled
	// bool IsSmartLinkEnabled();                                                                                               // [0x64be648] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.NavLinkProxy.HasMovingAgents
	// bool HasMovingAgents();                                                                                                  // [0x64be550] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.NavLocalGridManager
/// Size: 0x0030 (0x000028 - 0x000058)
class UNavLocalGridManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/AIModule.PathFollowingManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UPathFollowingManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.AIPerceptionComponent
/// Size: 0x00E8 (0x0000A0 - 0x000188)
class UAIPerceptionComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(TArray<UAISenseConfig*>)                   SensesConfig                                                OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(UClass*)                                   DominantSense                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(AAIController*)                            AIOwner                                                     OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPerceptionUpdated                                         OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTargetPerceptionForgotten                                 OFFSET(getStruct<T>, {0x158, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTargetPerceptionUpdated                                   OFFSET(getStruct<T>, {0x168, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTargetPerceptionInfoUpdated                               OFFSET(getStruct<T>, {0x178, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIPerceptionComponent.SetSenseEnabled
	// void SetSenseEnabled(UClass* SenseClass, bool bEnable);                                                                  // [0x64bed40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate
	// void RequestStimuliListenerUpdate();                                                                                     // [0x64beb90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.OnOwnerEndPlay
	// void OnOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                           // [0x64be9bc] Final|RequiredAPI|Native|Public 
	// Function /Script/AIModule.AIPerceptionComponent.IsSenseEnabled
	// bool IsSenseEnabled(UClass* SenseClass);                                                                                 // [0x64be5b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActorsBySense
	// void GetPerceivedHostileActorsBySense(UClass* SenseToUse, TArray<AActor*>& OutActors);                                   // [0x64be46c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetPerceivedHostileActors
	// void GetPerceivedHostileActors(TArray<AActor*>& OutActors);                                                              // [0x64be3cc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetKnownPerceivedActors
	// void GetKnownPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors);                                            // [0x64be238] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors
	// void GetCurrentlyPerceivedActors(UClass* SenseToUse, TArray<AActor*>& OutActors);                                        // [0x64be154] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AIPerceptionComponent.GetActorsPerception
	// bool GetActorsPerception(AActor* Actor, FActorPerceptionBlueprintInfo& Info);                                            // [0x64bdf08] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionComponent.ForgetAll
	// void ForgetAll();                                                                                                        // [0x64bdef4] Final|RequiredAPI|Native|Public|BlueprintCallable 
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
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bAutoRegisterAsSource                                       OFFSET(get<bool>, {0xA0, 1, 1, 0})
	CMember(TArray<UClass*>)                           RegisterAsSourceForSenses                                   OFFSET(get<T>, {0xA8, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense
	// void UnregisterFromSense(UClass* SenseClass);                                                                            // [0x64cd22c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem
	// void UnregisterFromPerceptionSystem();                                                                                   // [0x64cd218] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem
	// void RegisterWithPerceptionSystem();                                                                                     // [0x64cbec0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense
	// void RegisterForSense(UClass* SenseClass);                                                                               // [0x64cbbe8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AIPerceptionSystem
/// Size: 0x00F8 (0x000038 - 0x000130)
class UAIPerceptionSystem : public UAISubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<UAISense*>)                         Senses                                                      OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(float)                                     PerceptionAgingRate                                         OFFSET(get<float>, {0x98, 4, 0, 0})


	/// Functions
	// Function /Script/AIModule.AIPerceptionSystem.ReportPerceptionEvent
	// void ReportPerceptionEvent(UObject* WorldContextObject, UAISenseEvent* PerceptionEvent);                                 // [0x64cc9f8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.ReportEvent
	// void ReportEvent(UAISenseEvent* PerceptionEvent);                                                                        // [0x64cc35c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource
	// bool RegisterPerceptionStimuliSource(UObject* WorldContextObject, UClass* Sense, AActor* Target);                        // [0x64cbcf4] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay
	// void OnPerceptionStimuliSourceEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                         // [0x1af99e4] Final|RequiredAPI|Native|Protected 
	// Function /Script/AIModule.AIPerceptionSystem.GetSenseClassForStimulus
	// UClass* GetSenseClassForStimulus(UObject* WorldContextObject, FAIStimulus& Stimulus);                                    // [0x64cba48] Final|RequiredAPI|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AIModule.AISense
/// Size: 0x0050 (0x000028 - 0x000078)
class UAISense : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EAISenseNotifyType)                        NotifyType                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(bool)                                      bWantsNewPawnNotification                                   OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(bool)                                      bAutoRegisterAllPawnsAsSources                              OFFSET(get<bool>, {0x2C, 1, 1, 1})
	CMember(UAIPerceptionSystem*)                      PerceptionSystemInstance                                    OFFSET(get<T>, {0x30, 8, 0, 0})
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

/// Class /Script/AIModule.AISense_Blueprint
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UAISense_Blueprint : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UClass*)                                   ListenerDataType                                            OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TArray<UAIPerceptionComponent*>)           ListenerContainer                                           OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<UAISenseEvent*>)                    UnprocessedEvents                                           OFFSET(get<T>, {0x90, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Blueprint.OnUpdate
	// float OnUpdate(TArray<UAISenseEvent*>& EventsToProcess);                                                                 // [0x1d9241c] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUpdated
	// void OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);                              // [0x1d9241c] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerUnregistered
	// void OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);                         // [0x1d9241c] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.OnListenerRegistered
	// void OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent);                           // [0x1d9241c] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.K2_OnNewPawn
	// void K2_OnNewPawn(APawn* NewPawn);                                                                                       // [0x1d9241c] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerComponents
	// void GetAllListenerComponents(TArray<UAIPerceptionComponent*>& ListenerComponents);                                      // [0x64cb320] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.AISense_Blueprint.GetAllListenerActors
	// void GetAllListenerActors(TArray<AActor*>& ListenerActors);                                                              // [0x64cb284] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.AISense_Damage
/// Size: 0x0010 (0x000078 - 0x000088)
class UAISense_Damage : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FAIDamageEvent>)                    RegisteredEvents                                            OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Damage.ReportDamageEvent
	// void ReportDamageEvent(UObject* WorldContextObject, AActor* DamagedActor, AActor* Instigator, float DamageAmount, FVector EventLocation, FVector HitLocation, FName tag); // [0x64cbed4] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Hearing
/// Size: 0x0068 (0x000078 - 0x0000E0)
class UAISense_Hearing : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FAINoiseEvent>)                     NoiseEvents                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(float)                                     SpeedOfSoundSq                                              OFFSET(get<float>, {0x88, 4, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Hearing.ReportNoiseEvent
	// void ReportNoiseEvent(UObject* WorldContextObject, FVector NoiseLocation, float Loudness, AActor* Instigator, float MaxRange, FName tag); // [0x64cc41c] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Prediction
/// Size: 0x0010 (0x000078 - 0x000088)
class UAISense_Prediction : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FAIPredictionEvent>)                RegisteredEvents                                            OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Prediction.RequestPawnPredictionEvent
	// void RequestPawnPredictionEvent(APawn* Requestor, AActor* PredictedActor, float PredictionTime);                         // [0x64cce90] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/AIModule.AISense_Prediction.RequestControllerPredictionEvent
	// void RequestControllerPredictionEvent(AAIController* Requestor, AActor* PredictedActor, float PredictionTime);           // [0x64ccd98] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AIModule.AISense_Sight
/// Size: 0x0130 (0x000078 - 0x0001A8)
class UAISense_Sight : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(int32_t)                                   MaxTracesPerTick                                            OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(int32_t)                                   MaxAsyncTracesPerTick                                       OFFSET(get<int32_t>, {0x154, 4, 0, 0})
	DMember(int32_t)                                   MinQueriesPerTimeSliceCheck                                 OFFSET(get<int32_t>, {0x158, 4, 0, 0})
	DMember(double)                                    MaxTimeSlicePerTick                                         OFFSET(get<double>, {0x160, 8, 0, 0})
	DMember(float)                                     HighImportanceQueryDistanceThreshold                        OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     MaxQueryImportance                                          OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     SightLimitQueryImportance                                   OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     PendingQueriesBudgetReductionRatio                          OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(bool)                                      bUseAsynchronousTraceForDefaultSightQueries                 OFFSET(get<bool>, {0x17C, 1, 0, 0})
};

/// Class /Script/AIModule.AISense_Team
/// Size: 0x0010 (0x000078 - 0x000088)
class UAISense_Team : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FAITeamStimulusEvent>)              RegisteredEvents                                            OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/AIModule.AISense_Touch
/// Size: 0x0010 (0x000078 - 0x000088)
class UAISense_Touch : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FAITouchEvent>)                     RegisteredEvents                                            OFFSET(get<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/AIModule.AISense_Touch.ReportTouchEvent
	// void ReportTouchEvent(UObject* WorldContextObject, AActor* TouchReceiver, AActor* OtherActor, FVector Location);         // [0x64ccb90] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AISightTargetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAISightTargetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AIModule.PawnSensingComponent
/// Size: 0x0048 (0x0000A0 - 0x0000E8)
class UPawnSensingComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     HearingThreshold                                            OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     LOSHearingThreshold                                         OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     SightRadius                                                 OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     SensingInterval                                             OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     HearingMaxSoundAge                                          OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bEnableSensingUpdates                                       OFFSET(get<bool>, {0xB4, 1, 1, 0})
	DMember(bool)                                      bOnlySensePlayers                                           OFFSET(get<bool>, {0xB4, 1, 1, 1})
	DMember(bool)                                      bSeePawns                                                   OFFSET(get<bool>, {0xB4, 1, 1, 2})
	DMember(bool)                                      bHearNoises                                                 OFFSET(get<bool>, {0xB4, 1, 1, 3})
	SMember(FMulticastInlineDelegate)                  OnSeePawn                                                   OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHearNoise                                                 OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	DMember(float)                                     PeripheralVisionAngle                                       OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     PeripheralVisionCosine                                      OFFSET(get<float>, {0xE4, 4, 0, 0})


	/// Functions
	// Function /Script/AIModule.PawnSensingComponent.SetSensingUpdatesEnabled
	// void SetSensingUpdatesEnabled(bool bEnabled);                                                                            // [0x64cd194] RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetSensingInterval
	// void SetSensingInterval(float NewSensingInterval);                                                                       // [0x64cd110] RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SetPeripheralVisionAngle
	// void SetPeripheralVisionAngle(float NewPeripheralVisionAngle);                                                           // [0x64cd08c] RequiredAPI|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature
	// void SeePawnDelegate__DelegateSignature(APawn* Pawn);                                                                    // [0x1d9241c] MulticastDelegate|Public|Delegate 
	// Function /Script/AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature
	// void HearNoiseDelegate__DelegateSignature(APawn* Instigator, FVector& Location, float Volume);                           // [0x1d9241c] MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionCosine
	// float GetPeripheralVisionCosine();                                                                                       // [0x64cba30] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIModule.PawnSensingComponent.GetPeripheralVisionAngle
	// float GetPeripheralVisionAngle();                                                                                        // [0x64cba18] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AIModule.AITask
/// Size: 0x0008 (0x000060 - 0x000068)
class UAITask : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(AAIController*)                            OwnerController                                             OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/AIModule.AITask_LockLogic
/// Size: 0x0000 (0x000068 - 0x000068)
class UAITask_LockLogic : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/AIModule.AITask_MoveTo
/// Size: 0x00B0 (0x000068 - 0x000118)
class UAITask_MoveTo : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FMulticastInlineDelegate)                  OnRequestFailed                                             OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoveFinished                                              OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FAIMoveRequest)                            MoveRequest                                                 OFFSET(getStruct<T>, {0x88, 80, 0, 0})


	/// Functions
	// Function /Script/AIModule.AITask_MoveTo.AIMoveTo
	// UAITask_MoveTo* AIMoveTo(AAIController* Controller, FVector GoalLocation, AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuousGoalTracking, TEnumAsByte<EAIOptionFlag> ProjectGoalOnNavigation); // [0x64ca840] Final|RequiredAPI|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/AIModule.AITask_RunEQS
/// Size: 0x0078 (0x000068 - 0x0000E0)
class UAITask_RunEQS : public UAITask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/AIModule.VisualLoggerExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UVisualLoggerExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/AIModule.ActorPerceptionUpdateInfo
/// Size: 0x0060 (0x000000 - 0x000060)
class FActorPerceptionUpdateInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   TargetId                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Target                                                      OFFSET(get<T>, {0x4, 8, 0, 0})
	SMember(FAIStimulus)                               Stimulus                                                    OFFSET(getStruct<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/AIModule.AIStimulus
/// Size: 0x0050 (0x000000 - 0x000050)
class FAIStimulus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Age                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ExpirationAge                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   StimulusLocation                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   ReceiverLocation                                            OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FName)                                     tag                                                         OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	DMember(bool)                                      bSuccessfullySensed                                         OFFSET(get<bool>, {0x4C, 1, 1, 1})
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

/// Struct /Script/AIModule.EnvNamedValue
/// Size: 0x000C (0x000000 - 0x00000C)
class FEnvNamedValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EAIParamType)                              ParamType                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDynamicParam
/// Size: 0x0038 (0x000000 - 0x000038)
class FAIDynamicParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EAIParamType)                              ParamType                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FBlackboardKeySelector)                    BBKey                                                       OFFSET(getStruct<T>, {0x10, 40, 0, 0})
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
	SMember(FName)                                     SelectedKeyName                                             OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	CMember(UClass*)                                   SelectedKeyType                                             OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   SelectedKeyID                                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      bNoneIsAllowedValue                                         OFFSET(get<bool>, {0x24, 1, 1, 0})
};

/// Struct /Script/AIModule.AIMoveRequest
/// Size: 0x0050 (0x000000 - 0x000050)
class FAIMoveRequest : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<AActor*>)                   GoalActor                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.IntervalCountdown
/// Size: 0x0008 (0x000000 - 0x000008)
class FIntervalCountdown : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Interval                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
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

/// Struct /Script/AIModule.EnvTraceData
/// Size: 0x0038 (0x000000 - 0x000038)
class FEnvTraceData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

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
	SMember(FName)                                     TraceProfileName                                            OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	CMember(TEnumAsByte<EEnvTraceShape>)               TraceShape                                                  OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TEnumAsByte<EEnvQueryTrace>)               TraceMode                                                   OFFSET(get<T>, {0x31, 1, 0, 0})
	DMember(bool)                                      bTraceComplex                                               OFFSET(get<bool>, {0x34, 1, 1, 0})
	DMember(bool)                                      bOnlyBlockingHits                                           OFFSET(get<bool>, {0x34, 1, 1, 1})
	DMember(bool)                                      bCanTraceOnNavMesh                                          OFFSET(get<bool>, {0x34, 1, 1, 2})
	DMember(bool)                                      bCanTraceOnGeometry                                         OFFSET(get<bool>, {0x34, 1, 1, 3})
	DMember(bool)                                      bCanDisableTrace                                            OFFSET(get<bool>, {0x34, 1, 1, 4})
	DMember(bool)                                      bCanProjectDown                                             OFFSET(get<bool>, {0x34, 1, 1, 5})
};

/// Struct /Script/AIModule.EnvOverlapData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEnvOverlapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     ExtentX                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ExtentY                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ExtentZ                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   ShapeOffset                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            OverlapChannel                                              OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<EEnvOverlapShape>)             OverlapShape                                                OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(bool)                                      bOnlyBlockingHits                                           OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(bool)                                      bOverlapComplex                                             OFFSET(get<bool>, {0x2C, 1, 1, 1})
	DMember(bool)                                      bSkipOverlapQuerier                                         OFFSET(get<bool>, {0x2C, 1, 1, 2})
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

/// Struct /Script/AIModule.GenericTeamId
/// Size: 0x0001 (0x000000 - 0x000001)
class FGenericTeamId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      TeamId                                                      OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/AIModule.SimpleIndexedHandleBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FSimpleIndexedHandleBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/AIModule.IndexedHandleBase
/// Size: 0x0004 (0x000004 - 0x000008)
class FIndexedHandleBase : public FSimpleIndexedHandleBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/AIModule.CompactIndexedHandleBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FCompactIndexedHandleBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/AIModule.SequentialIDBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FSequentialIDBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Value                                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
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

/// Struct /Script/AIModule.BlackboardEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FBlackboardEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     EntryName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(UBlackboardKeyType*)                       KeyType                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bInstanceSynced                                             OFFSET(get<bool>, {0x10, 1, 1, 0})
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

/// Struct /Script/AIModule.AIDataProviderValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FAIDataProviderValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UAIDataProvider*)                          DataBinding                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     DataField                                                   OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderTypedValue
/// Size: 0x0010 (0x000020 - 0x000030)
class FAIDataProviderTypedValue : public FAIDataProviderValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UClass*)                                   PropertyType                                                OFFSET(get<T>, {0x20, 8, 0, 0})
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

/// Struct /Script/AIModule.AIDataProviderIntValue
/// Size: 0x0008 (0x000030 - 0x000038)
class FAIDataProviderIntValue : public FAIDataProviderTypedValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   DefaultValue                                                OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderFloatValue
/// Size: 0x0008 (0x000030 - 0x000038)
class FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     DefaultValue                                                OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderBoolValue
/// Size: 0x0008 (0x000030 - 0x000038)
class FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      DefaultValue                                                OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/AIModule.EnvQueryManagerConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FEnvQueryManagerConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     MaxAllowedTestingTime                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bTestQueriesUsingBreadth                                    OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   QueryCountWarningThreshold                                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(double)                                    QueryCountWarningInterval                                   OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    ExecutionTimeWarningSeconds                                 OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    HandlingResultTimeWarningSeconds                            OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(double)                                    GenerationTimeWarningSeconds                                OFFSET(get<double>, {0x28, 8, 0, 0})
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

/// Struct /Script/AIModule.EnvQueryInstanceCache
/// Size: 0x0180 (0x000000 - 0x000180)
class FEnvQueryInstanceCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(UEnvQuery*)                                Template                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
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
	DMember(char)                                      CustomPatternIdx                                            OFFSET(get<char>, {0x18, 1, 0, 0})
	DMember(char)                                      AdaptiveDivisions                                           OFFSET(get<char>, {0x19, 1, 0, 0})
	DMember(char)                                      AdaptiveRings                                               OFFSET(get<char>, {0x1A, 1, 0, 0})
	DMember(char)                                      AdaptiveDepth                                               OFFSET(get<char>, {0x1B, 1, 0, 0})
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

/// Struct /Script/AIModule.RecastGraphWrapper
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FRecastGraphWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(ARecastNavMesh*)                           RecastNavMeshActor                                          OFFSET(get<T>, {0x0, 8, 0, 0})
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
	DMember(bool)                                      bIsFriendly                                                 OFFSET(get<bool>, {0x18, 1, 1, 1})
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
/// Size: 0x0050 (0x000000 - 0x000050)
class FAIDamageEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Amount                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(AActor*)                                   DamagedActor                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(AActor*)                                   Instigator                                                  OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FName)                                     tag                                                         OFFSET(getStruct<T>, {0x48, 4, 0, 0})
};

/// Struct /Script/AIModule.AINoiseEvent
/// Size: 0x0038 (0x000000 - 0x000038)
class FAINoiseEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   NoiseLocation                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Loudness                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(AActor*)                                   Instigator                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     tag                                                         OFFSET(getStruct<T>, {0x30, 4, 0, 0})
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
/// Size: 0x0050 (0x000000 - 0x000050)
class FAITeamStimulusEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(AActor*)                                   Broadcaster                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(AActor*)                                   Enemy                                                       OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/AIModule.AITouchEvent
/// Size: 0x0028 (0x000000 - 0x000028)
class FAITouchEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(AActor*)                                   TouchReceiver                                               OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(AActor*)                                   OtherActor                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
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

/// Enum /Script/AIModule.EAIOptionFlag
/// Size: 0x04
enum EAIOptionFlag : uint8_t
{
	EAIOptionFlag__Default0                                                          = 0,
	EAIOptionFlag__Enable1                                                           = 1,
	EAIOptionFlag__Disable2                                                          = 2,
	EAIOptionFlag__MAX3                                                              = 3
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

/// Enum /Script/AIModule.EBasicKeyOperation
/// Size: 0x03
enum EBasicKeyOperation : uint8_t
{
	EBasicKeyOperation__Set0                                                         = 0,
	EBasicKeyOperation__NotSet1                                                      = 1,
	EBasicKeyOperation__EBasicKeyOperation_MAX2                                      = 2
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

/// Enum /Script/AIModule.EEnvTestPurpose
/// Size: 0x04
enum EEnvTestPurpose : uint8_t
{
	EEnvTestPurpose__Filter0                                                         = 0,
	EEnvTestPurpose__Score1                                                          = 1,
	EEnvTestPurpose__FilterAndScore2                                                 = 2,
	EEnvTestPurpose__EEnvTestPurpose_MAX3                                            = 3
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

/// Enum /Script/AIModule.EEnvTestCost
/// Size: 0x04
enum EEnvTestCost : uint8_t
{
	EEnvTestCost__Low0                                                               = 0,
	EEnvTestCost__Medium1                                                            = 1,
	EEnvTestCost__High2                                                              = 2,
	EEnvTestCost__EEnvTestCost_MAX3                                                  = 3
};

/// Enum /Script/AIModule.EEnvTestFilterOperator
/// Size: 0x03
enum EEnvTestFilterOperator : uint8_t
{
	EEnvTestFilterOperator__AllPass0                                                 = 0,
	EEnvTestFilterOperator__AnyPass1                                                 = 1,
	EEnvTestFilterOperator__EEnvTestFilterOperator_MAX2                              = 2
};

/// Enum /Script/AIModule.EEnvTestScoreOperator
/// Size: 0x05
enum EEnvTestScoreOperator : uint8_t
{
	EEnvTestScoreOperator__AverageScore0                                             = 0,
	EEnvTestScoreOperator__MinScore1                                                 = 1,
	EEnvTestScoreOperator__MaxScore2                                                 = 2,
	EEnvTestScoreOperator__Multiply3                                                 = 3,
	EEnvTestScoreOperator__EEnvTestScoreOperator_MAX4                                = 4
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

/// Enum /Script/AIModule.EEnvQueryParam
/// Size: 0x04
enum EEnvQueryParam : uint8_t
{
	EEnvQueryParam__Float0                                                           = 0,
	EEnvQueryParam__Int1                                                             = 1,
	EEnvQueryParam__Bool2                                                            = 2,
	EEnvQueryParam__EEnvQueryParam_MAX3                                              = 3
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

/// Enum /Script/AIModule.EEnvQueryTrace
/// Size: 0x06
enum EEnvQueryTrace : uint8_t
{
	EEnvQueryTrace__None0                                                            = 0,
	EEnvQueryTrace__Navigation1                                                      = 1,
	EEnvQueryTrace__GeometryByChannel2                                               = 2,
	EEnvQueryTrace__GeometryByProfile3                                               = 3,
	EEnvQueryTrace__NavigationOverLedges4                                            = 4,
	EEnvQueryTrace__EEnvQueryTrace_MAX5                                              = 5
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

/// Enum /Script/AIModule.EEnvOverlapShape
/// Size: 0x04
enum EEnvOverlapShape : uint8_t
{
	EEnvOverlapShape__Box0                                                           = 0,
	EEnvOverlapShape__Sphere1                                                        = 1,
	EEnvOverlapShape__Capsule2                                                       = 2,
	EEnvOverlapShape__EEnvOverlapShape_MAX3                                          = 3
};

/// Enum /Script/AIModule.EEnvDirection
/// Size: 0x03
enum EEnvDirection : uint8_t
{
	EEnvDirection__TwoPoints0                                                        = 0,
	EEnvDirection__Rotation1                                                         = 1,
	EEnvDirection__EEnvDirection_MAX2                                                = 2
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

/// Enum /Script/AIModule.ETeamAttitude
/// Size: 0x04
enum ETeamAttitude : uint8_t
{
	ETeamAttitude__Friendly0                                                         = 0,
	ETeamAttitude__Neutral1                                                          = 1,
	ETeamAttitude__Hostile2                                                          = 2,
	ETeamAttitude__ETeamAttitude_MAX3                                                = 3
};

/// Enum /Script/AIModule.EPawnSubActionTriggeringPolicy
/// Size: 0x03
enum EPawnSubActionTriggeringPolicy : uint8_t
{
	EPawnSubActionTriggeringPolicy__CopyBeforeTriggering0                            = 0,
	EPawnSubActionTriggeringPolicy__ReuseInstances1                                  = 1,
	EPawnSubActionTriggeringPolicy__EPawnSubActionTriggeringPolicy_MAX2              = 2
};

/// Enum /Script/AIModule.EPawnActionFailHandling
/// Size: 0x03
enum EPawnActionFailHandling : uint8_t
{
	EPawnActionFailHandling__RequireSuccess0                                         = 0,
	EPawnActionFailHandling__IgnoreFailure1                                          = 1,
	EPawnActionFailHandling__EPawnActionFailHandling_MAX2                            = 2
};

/// Enum /Script/AIModule.EPawnActionMoveMode
/// Size: 0x03
enum EPawnActionMoveMode : uint8_t
{
	EPawnActionMoveMode__UsePathfinding0                                             = 0,
	EPawnActionMoveMode__StraightLine1                                               = 1,
	EPawnActionMoveMode__EPawnActionMoveMode_MAX2                                    = 2
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

/// Enum /Script/AIModule.EBTChildIndex
/// Size: 0x03
enum EBTChildIndex : uint8_t
{
	EBTChildIndex__FirstNode0                                                        = 0,
	EBTChildIndex__TaskNode1                                                         = 1,
	EBTChildIndex__EBTChildIndex_MAX2                                                = 2
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

/// Enum /Script/AIModule.EBTParallelMode
/// Size: 0x03
enum EBTParallelMode : uint8_t
{
	EBTParallelMode__AbortBackground0                                                = 0,
	EBTParallelMode__WaitForBackground1                                              = 1,
	EBTParallelMode__EBTParallelMode_MAX2                                            = 2
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

/// Enum /Script/AIModule.EEQSNormalizationType
/// Size: 0x03
enum EEQSNormalizationType : uint8_t
{
	EEQSNormalizationType__Absolute0                                                 = 0,
	EEQSNormalizationType__RelativeToScores1                                         = 1,
	EEQSNormalizationType__EEQSNormalizationType_MAX2                                = 2
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

/// Enum /Script/AIModule.EPointOnCircleSpacingMethod
/// Size: 0x03
enum EPointOnCircleSpacingMethod : uint8_t
{
	EPointOnCircleSpacingMethod__BySpaceBetween0                                     = 0,
	EPointOnCircleSpacingMethod__ByNumberOfPoints1                                   = 1,
	EPointOnCircleSpacingMethod__EPointOnCircleSpacingMethod_MAX2                    = 2
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

/// Enum /Script/AIModule.EPathFollowingRequestResult
/// Size: 0x04
enum EPathFollowingRequestResult : uint8_t
{
	EPathFollowingRequestResult__Failed0                                             = 0,
	EPathFollowingRequestResult__AlreadyAtGoal1                                      = 1,
	EPathFollowingRequestResult__RequestSuccessful2                                  = 2,
	EPathFollowingRequestResult__EPathFollowingRequestResult_MAX3                    = 3
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

