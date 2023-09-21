
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
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFail                                                      ___ OFFSET(get<T>, {0x38, 16, 0, 0})
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
	SMember(FColor)                                    DebugColor                                                  ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(float)                                     MaxAge                                                      ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bStartsEnabled                                              ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
};

/// Class /Script/AIModule.AISenseConfig_Blueprint
/// Size: 0x0008 (0x000048 - 0x000050)
class UAISenseConfig_Blueprint : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UClass*)                                   Implementation                                              ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/AIModule.AISenseConfig_Hearing
/// Size: 0x0018 (0x000048 - 0x000060)
class UAISenseConfig_Hearing : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UClass*)                                   Implementation                                              ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     HearingRange                                                ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LoSHearingRange                                             ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUseLoSHearing                                              ___ OFFSET(get<bool>, {0x58, 1, 1, 0})
	SMember(FAISenseAffiliationFilter)                 DetectionByAffiliation                                      ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
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
	CMember(UClass*)                                   Implementation                                              ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     SightRadius                                                 ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LoseSightRadius                                             ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     PeripheralVisionAngleDegrees                                ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FAISenseAffiliationFilter)                 DetectionByAffiliation                                      ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	DMember(float)                                     AutoSuccessRangeFromLastSeenLocation                        ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     PointOfViewBackwardOffset                                   ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     NearClippingRadius                                          ___ OFFSET(get<float>, {0x68, 4, 0, 0})
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
	SMember(FAIDamageEvent)                            Event                                                       ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/AIModule.AISenseEvent_Hearing
/// Size: 0x0038 (0x000028 - 0x000060)
class UAISenseEvent_Hearing : public UAISenseEvent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FAINoiseEvent)                             Event                                                       ___ OFFSET(get<T>, {0x28, 56, 0, 0})
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
	CMember(UPawnAction*)                              ChildAction                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UPawnAction*)                              ParentAction                                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UPawnActionsComponent*)                    OwnerComponent                                              ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UObject*)                                  Instigator                                                  ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UBrainComponent*)                          BrainComp                                                   ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bAllowNewSameClassInstance                                  ___ OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bReplaceActiveSameClassInstance                             ___ OFFSET(get<bool>, {0x80, 1, 1, 1})
	DMember(bool)                                      bShouldPauseMovement                                        ___ OFFSET(get<bool>, {0x80, 1, 1, 2})
	DMember(bool)                                      bAlwaysNotifyOnFinished                                     ___ OFFSET(get<bool>, {0x80, 1, 1, 3})
};

/// Class /Script/AIModule.PawnActionsComponent
/// Size: 0x0038 (0x0000A0 - 0x0000D8)
class UPawnActionsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(APawn*)                                    ControlledPawn                                              ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TArray<FPawnActionStack>)                  ActionStacks                                                ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FPawnActionEvent>)                  ActionEvents                                                ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(UPawnAction*)                              CurrentAction                                               ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
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
	CMember(AActor*)                                   GoalActor                                                   ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FVector)                                   GoalLocation                                                ___ OFFSET(get<T>, {0x98, 24, 0, 0})
	DMember(float)                                     AcceptableRadius                                            ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	DMember(bool)                                      bAllowStrafe                                                ___ OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(bool)                                      bFinishOnOverlap                                            ___ OFFSET(get<bool>, {0xC0, 1, 1, 1})
	DMember(bool)                                      bUsePathfinding                                             ___ OFFSET(get<bool>, {0xC0, 1, 1, 2})
	DMember(bool)                                      bAllowPartialPath                                           ___ OFFSET(get<bool>, {0xC0, 1, 1, 3})
	DMember(bool)                                      bProjectGoalToNavigation                                    ___ OFFSET(get<bool>, {0xC0, 1, 1, 4})
	DMember(bool)                                      bUpdatePathToGoal                                           ___ OFFSET(get<bool>, {0xC0, 1, 1, 5})
	DMember(bool)                                      bAbortSubActionOnPathChange                                 ___ OFFSET(get<bool>, {0xC0, 1, 1, 6})
};

/// Class /Script/AIModule.PawnAction_Repeat
/// Size: 0x0020 (0x000090 - 0x0000B0)
class UPawnAction_Repeat : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UPawnAction*)                              ActionToRepeat                                              ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UPawnAction*)                              RecentActionCopy                                            ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TEnumAsByte<EPawnActionFailHandling>)      ChildFailureHandlingMode                                    ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
};

/// Class /Script/AIModule.PawnAction_Sequence
/// Size: 0x0028 (0x000090 - 0x0000B8)
class UPawnAction_Sequence : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<UPawnAction*>)                      ActionSequence                                              ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TEnumAsByte<EPawnActionFailHandling>)      ChildFailureHandlingMode                                    ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(UPawnAction*)                              RecentActionCopy                                            ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/AIModule.PawnAction_Wait
/// Size: 0x0010 (0x000090 - 0x0000A0)
class UPawnAction_Wait : public UPawnAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     TimeToWait                                                  ___ OFFSET(get<float>, {0x90, 4, 0, 0})
};

/// Class /Script/AIModule.AIController
/// Size: 0x0090 (0x000328 - 0x0003B8)
class AAIController : public AController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	DMember(bool)                                      bStartAILogicOnPossess                                      ___ OFFSET(get<bool>, {0x360, 1, 1, 0})
	DMember(bool)                                      bStopAILogicOnUnposses                                      ___ OFFSET(get<bool>, {0x360, 1, 1, 1})
	DMember(bool)                                      bLOSflag                                                    ___ OFFSET(get<bool>, {0x360, 1, 1, 2})
	DMember(bool)                                      bSkipExtraLOSChecks                                         ___ OFFSET(get<bool>, {0x360, 1, 1, 3})
	DMember(bool)                                      bAllowStrafe                                                ___ OFFSET(get<bool>, {0x360, 1, 1, 4})
	DMember(bool)                                      bWantsPlayerState                                           ___ OFFSET(get<bool>, {0x360, 1, 1, 5})
	DMember(bool)                                      bSetControlRotationFromPawnOrientation                      ___ OFFSET(get<bool>, {0x360, 1, 1, 6})
	CMember(UPathFollowingComponent*)                  PathFollowingComponent                                      ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UBrainComponent*)                          BrainComponent                                              ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UAIPerceptionComponent*)                   PerceptionComponent                                         ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UPawnActionsComponent*)                    ActionsComp                                                 ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UBlackboardComponent*)                     Blackboard                                                  ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UGameplayTasksComponent*)                  CachedGameplayTasksComponent                                ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UClass*)                                   DefaultNavigationFilterClass                                ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  ReceiveMoveCompleted                                        ___ OFFSET(get<T>, {0x3A0, 16, 0, 0})
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
	CMember(UAISystem*)                                AISystem                                                    ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AIModule.AISystem
/// Size: 0x0120 (0x000058 - 0x000178)
class UAISystem : public UAISystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FSoftClassPath)                            PerceptionSystemClassName                                   ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FSoftClassPath)                            HotSpotManagerClassName                                     ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FSoftClassPath)                            EnvQueryManagerClassName                                    ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	DMember(float)                                     AcceptanceRadius                                            ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     PathfollowingRegularPathPointAcceptanceRadius               ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     PathfollowingNavLinkAcceptanceRadius                        ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bFinishMoveOnGoalOverlap                                    ___ OFFSET(get<bool>, {0xAC, 1, 0, 0})
	DMember(bool)                                      bAcceptPartialPaths                                         ___ OFFSET(get<bool>, {0xAD, 1, 0, 0})
	DMember(bool)                                      bAllowStrafing                                              ___ OFFSET(get<bool>, {0xAE, 1, 0, 0})
	DMember(bool)                                      bAllowControllersAsEQSQuerier                               ___ OFFSET(get<bool>, {0xAF, 1, 0, 0})
	DMember(bool)                                      bEnableDebuggerPlugin                                       ___ OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bForgetStaleActors                                          ___ OFFSET(get<bool>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bAddBlackboardSelfKey                                       ___ OFFSET(get<bool>, {0xB2, 1, 0, 0})
	DMember(bool)                                      bClearBBEntryOnBTEQSFail                                    ___ OFFSET(get<bool>, {0xB3, 1, 0, 0})
	DMember(bool)                                      bBlackboardKeyDecoratorAllowsNoneAsValue                    ___ OFFSET(get<bool>, {0xB4, 1, 0, 0})
	CMember(TWeakObjectPtr<UBlackboardData*>)          DefaultBlackboard                                           ___ OFFSET(get<T>, {0xB8, 32, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DefaultSightCollisionChannel                                ___ OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(UBehaviorTreeManager*)                     BehaviorTreeManager                                         ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(UEnvQueryManager*)                         EnvironmentQueryManager                                     ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UAIPerceptionSystem*)                      PerceptionSystem                                            ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<UAIAsyncTaskBlueprintProxy*>)       AllProxyObjects                                             ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(UAIHotSpotManager*)                        HotSpotManager                                              ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(UNavLocalGridManager*)                     NavLocalGrids                                               ___ OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Class /Script/AIModule.BehaviorTree
/// Size: 0x0040 (0x000028 - 0x000068)
class UBehaviorTree : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UBTCompositeNode*)                         RootNode                                                    ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UBlackboardData*)                          BlackboardAsset                                             ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<UBTDecorator*>)                     RootDecorators                                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FBTDecoratorLogic>)                 RootDecoratorOps                                            ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/AIModule.BrainComponent
/// Size: 0x0058 (0x0000A0 - 0x0000F8)
class UBrainComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(UBlackboardComponent*)                     BlackboardComp                                              ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(AAIController*)                            AIOwner                                                     ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/AIModule.BehaviorTreeComponent
/// Size: 0x01A0 (0x0000F8 - 0x000298)
class UBehaviorTreeComponent : public UBrainComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(TArray<UBTNode*>)                          NodeInstances                                               ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(UBehaviorTree*)                            DefaultBehaviorTreeAsset                                    ___ OFFSET(get<T>, {0x270, 8, 0, 0})
};

/// Class /Script/AIModule.BehaviorTreeManager
/// Size: 0x0028 (0x000028 - 0x000050)
class UBehaviorTreeManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   MaxDebuggerSteps                                            ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FBehaviorTreeTemplateInfo>)         LoadedTemplates                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UBehaviorTreeComponent*>)           ActiveComponents                                            ___ OFFSET(get<T>, {0x40, 16, 0, 0})
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
	CMember(UBrainComponent*)                          BrainComp                                                   ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UBlackboardData*)                          DefaultBlackboardAsset                                      ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UBlackboardData*)                          BlackboardAsset                                             ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<UBlackboardKeyType*>)               KeyInstances                                                ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/AIModule.BlackboardData
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UBlackboardData*)                          Parent                                                      ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FBlackboardEntry>)                  Keys                                                        ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bHasSynchronizedKeys                                        ___ OFFSET(get<bool>, {0x48, 1, 1, 0})
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
	CMember(UClass*)                                   BaseClass                                                   ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Enum
/// Size: 0x0020 (0x000030 - 0x000050)
class UBlackboardKeyType_Enum : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UEnum*)                                    EnumType                                                    ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FString)                                   EnumName                                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bIsEnumNameValid                                            ___ OFFSET(get<bool>, {0x48, 1, 1, 0})
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
	SMember(FString)                                   EnumName                                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UEnum*)                                    EnumType                                                    ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/AIModule.BlackboardKeyType_Object
/// Size: 0x0008 (0x000030 - 0x000038)
class UBlackboardKeyType_Object : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UClass*)                                   BaseClass                                                   ___ OFFSET(get<T>, {0x30, 8, 0, 0})
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
	SMember(FString)                                   StringValue                                                 ___ OFFSET(get<T>, {0x30, 16, 0, 0})
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
	SMember(FString)                                   NodeName                                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UBehaviorTree*)                            TreeAsset                                                   ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UBTCompositeNode*)                         ParentNode                                                  ___ OFFSET(get<T>, {0x48, 8, 0, 0})
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
	CMember(TArray<FBTCompositeChild>)                 Children                                                    ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<UBTService*>)                       Services                                                    ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bApplyDecoratorScope                                        ___ OFFSET(get<bool>, {0x78, 1, 1, 0})
};

/// Class /Script/AIModule.BTDecorator
/// Size: 0x0008 (0x000060 - 0x000068)
class UBTDecorator : public UBTAuxiliaryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bInverseCondition                                           ___ OFFSET(get<bool>, {0x60, 1, 1, 7})
	CMember(TEnumAsByte<EBTFlowAbortMode>)             FlowAbortMode                                               ___ OFFSET(get<T>, {0x64, 1, 0, 0})
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
	DMember(float)                                     Interval                                                    ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     RandomDeviation                                             ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(bool)                                      bCallTickOnSearchStart                                      ___ OFFSET(get<bool>, {0x68, 1, 1, 0})
	DMember(bool)                                      bRestartTimerOnEachActivation                               ___ OFFSET(get<bool>, {0x68, 1, 1, 1})
};

/// Class /Script/AIModule.BTTaskNode
/// Size: 0x0018 (0x000058 - 0x000070)
class UBTTaskNode : public UBTNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<UBTService*>)                       Services                                                    ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bIgnoreRestartSelf                                          ___ OFFSET(get<bool>, {0x68, 1, 1, 0})
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
	CMember(TEnumAsByte<EBTParallelMode>)              FinishMode                                                  ___ OFFSET(get<T>, {0x80, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_BlackboardBase
/// Size: 0x0028 (0x000068 - 0x000090)
class UBTDecorator_BlackboardBase : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               ___ OFFSET(get<T>, {0x68, 40, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_Blackboard
/// Size: 0x0030 (0x000090 - 0x0000C0)
class UBTDecorator_Blackboard : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(int32_t)                                   IntValue                                                    ___ OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	SMember(FString)                                   StringValue                                                 ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   CachedDescription                                           ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	DMember(char)                                      OperationType                                               ___ OFFSET(get<char>, {0xB8, 1, 0, 0})
	CMember(TEnumAsByte<EBTBlackboardRestart>)         NotifyObserver                                              ___ OFFSET(get<T>, {0xB9, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_BlueprintBase
/// Size: 0x0038 (0x000068 - 0x0000A0)
class UBTDecorator_BlueprintBase : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(AAIController*)                            AIOwner                                                     ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(AActor*)                                   ActorOwner                                                  ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TArray<FName>)                             ObservedKeyNames                                            ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bShowPropertyDetails                                        ___ OFFSET(get<bool>, {0x98, 1, 1, 0})
	DMember(bool)                                      bCheckConditionOnlyBlackBoardChanges                        ___ OFFSET(get<bool>, {0x98, 1, 1, 1})
};

/// Class /Script/AIModule.BTDecorator_CheckGameplayTagsOnActor
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UBTDecorator_CheckGameplayTagsOnActor : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FBlackboardKeySelector)                    ActorToCheck                                                ___ OFFSET(get<T>, {0x68, 40, 0, 0})
	CMember(EGameplayContainerMatchType)               TagsToMatch                                                 ___ OFFSET(get<T>, {0x90, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                ___ OFFSET(get<T>, {0x98, 32, 0, 0})
	SMember(FString)                                   CachedDescription                                           ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_CompareBBEntries
/// Size: 0x0058 (0x000068 - 0x0000C0)
class UBTDecorator_CompareBBEntries : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TEnumAsByte<EBlackBoardEntryComparison>)   Operator                                                    ___ OFFSET(get<T>, {0x68, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyA                                              ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyB                                              ___ OFFSET(get<T>, {0x98, 40, 0, 0})
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
	DMember(float)                                     ConeHalfAngle                                               ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FBlackboardKeySelector)                    ConeOrigin                                                  ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    ConeDirection                                               ___ OFFSET(get<T>, {0x98, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    Observed                                                    ___ OFFSET(get<T>, {0xC0, 40, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_Cooldown
/// Size: 0x0008 (0x000068 - 0x000070)
class UBTDecorator_Cooldown : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     CoolDownTime                                                ___ OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_DoesPathExist
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UBTDecorator_DoesPathExist : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKeyA                                              ___ OFFSET(get<T>, {0x68, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    BlackboardKeyB                                              ___ OFFSET(get<T>, {0x90, 40, 0, 0})
	DMember(bool)                                      bUseSelf                                                    ___ OFFSET(get<bool>, {0xB8, 1, 1, 0})
	CMember(TEnumAsByte<EPathExistanceQueryType>)      PathQueryType                                               ___ OFFSET(get<T>, {0xBC, 1, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
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
	DMember(float)                                     AcceptableRadius                                            ___ OFFSET(get<float>, {0x90, 4, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ParametrizedAcceptableRadius                                ___ OFFSET(get<T>, {0x98, 56, 0, 0})
	SMember(FAIDistanceType)                           GeometricDistanceType                                       ___ OFFSET(get<T>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bUseParametrizedRadius                                      ___ OFFSET(get<bool>, {0xD4, 1, 1, 0})
	DMember(bool)                                      bUseNavAgentGoalLocation                                    ___ OFFSET(get<bool>, {0xD4, 1, 1, 1})
	DMember(bool)                                      bPathFindingBasedTest                                       ___ OFFSET(get<bool>, {0xD4, 1, 1, 2})
};

/// Class /Script/AIModule.BTDecorator_IsBBEntryOfClass
/// Size: 0x0008 (0x000090 - 0x000098)
class UBTDecorator_IsBBEntryOfClass : public UBTDecorator_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UClass*)                                   TestClass                                                   ___ OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_KeepInCone
/// Size: 0x0060 (0x000068 - 0x0000C8)
class UBTDecorator_KeepInCone : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     ConeHalfAngle                                               ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FBlackboardKeySelector)                    ConeOrigin                                                  ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FBlackboardKeySelector)                    Observed                                                    ___ OFFSET(get<T>, {0x98, 40, 0, 0})
	DMember(bool)                                      bUseSelfAsOrigin                                            ___ OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(bool)                                      bUseSelfAsObserved                                          ___ OFFSET(get<bool>, {0xC0, 1, 1, 1})
};

/// Class /Script/AIModule.BTDecorator_Loop
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTDecorator_Loop : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   NumLoops                                                    ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(bool)                                      bInfiniteLoop                                               ___ OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(float)                                     InfiniteLoopTimeoutTime                                     ___ OFFSET(get<float>, {0x70, 4, 0, 0})
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
	SMember(FGameplayTag)                              CooldownTag                                                 ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(float)                                     CooldownDuration                                            ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bAddToExistingDuration                                      ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_TagCooldown
/// Size: 0x0010 (0x000068 - 0x000078)
class UBTDecorator_TagCooldown : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTag)                              CooldownTag                                                 ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	DMember(float)                                     CooldownDuration                                            ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bAddToExistingDuration                                      ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bActivatesCooldown                                          ___ OFFSET(get<bool>, {0x71, 1, 0, 0})
};

/// Class /Script/AIModule.BTDecorator_TimeLimit
/// Size: 0x0008 (0x000068 - 0x000070)
class UBTDecorator_TimeLimit : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     TimeLimit                                                   ___ OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Class /Script/AIModule.BTService_BlackboardBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTService_BlackboardBase : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               ___ OFFSET(get<T>, {0x70, 40, 0, 0})
};

/// Class /Script/AIModule.BTService_BlueprintBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTService_BlueprintBase : public UBTService
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(AAIController*)                            AIOwner                                                     ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(AActor*)                                   ActorOwner                                                  ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bShowPropertyDetails                                        ___ OFFSET(get<bool>, {0x90, 1, 1, 0})
	DMember(bool)                                      bShowEventDetails                                           ___ OFFSET(get<bool>, {0x90, 1, 1, 1})
};

/// Class /Script/AIModule.BTService_DefaultFocus
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UBTService_DefaultFocus : public UBTService_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(char)                                      FocusPriority                                               ___ OFFSET(get<char>, {0x98, 1, 0, 0})
};

/// Class /Script/AIModule.BTService_RunEQS
/// Size: 0x0060 (0x000098 - 0x0000F8)
class UBTService_RunEQS : public UBTService_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  ___ OFFSET(get<T>, {0x98, 72, 0, 0})
	DMember(bool)                                      bUpdateBBOnFail                                             ___ OFFSET(get<bool>, {0xE0, 1, 0, 0})
};

/// Class /Script/AIModule.BTTask_BlackboardBase
/// Size: 0x0028 (0x000070 - 0x000098)
class UBTTask_BlackboardBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               ___ OFFSET(get<T>, {0x70, 40, 0, 0})
};

/// Class /Script/AIModule.BTTask_BlueprintBase
/// Size: 0x0038 (0x000070 - 0x0000A8)
class UBTTask_BlueprintBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(AAIController*)                            AIOwner                                                     ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(AActor*)                                   ActorOwner                                                  ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FIntervalCountdown)                        TickInterval                                                ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bShowPropertyDetails                                        ___ OFFSET(get<bool>, {0xA0, 1, 1, 0})
};

/// Class /Script/AIModule.BTTask_FinishWithResult
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_FinishWithResult : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TEnumAsByte<EBTNodeResult>)                Result                                                      ___ OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Class /Script/AIModule.BTTask_GameplayTaskBase
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_GameplayTaskBase : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bWaitForGameplayTask                                        ___ OFFSET(get<bool>, {0x70, 1, 1, 0})
};

/// Class /Script/AIModule.BTTask_MakeNoise
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_MakeNoise : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     Loudnes                                                     ___ OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/AIModule.BTTask_MoveTo
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     AcceptableRadius                                            ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(float)                                     ObservedBlackboardValueTolerance                            ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      bObserveBlackboardValue                                     ___ OFFSET(get<bool>, {0xAC, 1, 1, 0})
	DMember(bool)                                      bAllowStrafe                                                ___ OFFSET(get<bool>, {0xAC, 1, 1, 1})
	DMember(bool)                                      bAllowPartialPath                                           ___ OFFSET(get<bool>, {0xAC, 1, 1, 2})
	DMember(bool)                                      bTrackMovingGoal                                            ___ OFFSET(get<bool>, {0xAC, 1, 1, 3})
	DMember(bool)                                      bRequireNavigableEndLocation                                ___ OFFSET(get<bool>, {0xAC, 1, 1, 4})
	DMember(bool)                                      bProjectGoalLocation                                        ___ OFFSET(get<bool>, {0xAC, 1, 1, 5})
	DMember(bool)                                      bReachTestIncludesAgentRadius                               ___ OFFSET(get<bool>, {0xAC, 1, 1, 6})
	DMember(bool)                                      bReachTestIncludesGoalRadius                                ___ OFFSET(get<bool>, {0xAC, 1, 1, 7})
	DMember(bool)                                      bStopOnOverlap                                              ___ OFFSET(get<bool>, {0xAD, 1, 1, 0})
	DMember(bool)                                      bStopOnOverlapNeedsUpdate                                   ___ OFFSET(get<bool>, {0xAD, 1, 1, 1})
};

/// Class /Script/AIModule.BTTask_MoveDirectlyToward
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UBTTask_MoveDirectlyToward : public UBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bDisablePathUpdateOnGoalLocationChange                      ___ OFFSET(get<bool>, {0xB0, 1, 1, 0})
	DMember(bool)                                      bProjectVectorGoalToNavigation                              ___ OFFSET(get<bool>, {0xB0, 1, 1, 1})
	DMember(bool)                                      bUpdatedDeprecatedProperties                                ___ OFFSET(get<bool>, {0xB0, 1, 1, 2})
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
	CMember(UAnimationAsset*)                          AnimationToPlay                                             ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(bool)                                      bLooping                                                    ___ OFFSET(get<bool>, {0x78, 1, 1, 0})
	DMember(bool)                                      bNonBlocking                                                ___ OFFSET(get<bool>, {0x78, 1, 1, 1})
	CMember(UBehaviorTreeComponent*)                   MyOwnerComp                                                 ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   CachedSkelMesh                                              ___ OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_PlaySound
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_PlaySound : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(USoundCue*)                                SoundToPlay                                                 ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_PushPawnAction
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_PushPawnAction : public UBTTask_PawnActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UPawnAction*)                              Action                                                      ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_RotateToFaceBBEntry
/// Size: 0x0008 (0x000098 - 0x0000A0)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     Precision                                                   ___ OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Class /Script/AIModule.BTTask_RunBehavior
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_RunBehavior : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UBehaviorTree*)                            BehaviorAsset                                               ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_RunBehaviorDynamic
/// Size: 0x0018 (0x000070 - 0x000088)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTag)                              InjectionTag                                                ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	CMember(UBehaviorTree*)                            DefaultBehaviorAsset                                        ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(UBehaviorTree*)                            BehaviorAsset                                               ___ OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/AIModule.BTTask_RunEQSQuery
/// Size: 0x00C0 (0x000098 - 0x000158)
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UEnvQuery*)                                QueryTemplate                                               ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TArray<FEnvNamedValue>)                    QueryParams                                                 ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             RunMode                                                     ___ OFFSET(get<T>, {0xC0, 1, 0, 0})
	SMember(FBlackboardKeySelector)                    EQSQueryBlackboardKey                                       ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	DMember(bool)                                      bUseBBKey                                                   ___ OFFSET(get<bool>, {0xF0, 1, 0, 0})
	SMember(FEQSParametrizedQueryExecutionRequest)     EQSRequest                                                  ___ OFFSET(get<T>, {0xF8, 72, 0, 0})
	DMember(bool)                                      bUpdateBBOnFail                                             ___ OFFSET(get<bool>, {0x140, 1, 0, 0})
};

/// Class /Script/AIModule.BTTask_SetTagCooldown
/// Size: 0x0010 (0x000070 - 0x000080)
class UBTTask_SetTagCooldown : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FGameplayTag)                              CooldownTag                                                 ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	DMember(bool)                                      bAddToExistingDuration                                      ___ OFFSET(get<bool>, {0x74, 1, 0, 0})
	DMember(float)                                     CooldownDuration                                            ___ OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Class /Script/AIModule.BTTask_Wait
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_Wait : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(float)                                     WaitTime                                                    ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     RandomDeviation                                             ___ OFFSET(get<float>, {0x74, 4, 0, 0})
};

/// Class /Script/AIModule.BTTask_WaitBlackboardTime
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBlackboardKeySelector)                    BlackboardKey                                               ___ OFFSET(get<T>, {0x78, 40, 0, 0})
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
	SMember(FName)                                     ParamName                                                   ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   IntValue                                                    ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      BoolValue                                                   ___ OFFSET(get<bool>, {0x34, 1, 0, 0})
};

/// Class /Script/AIModule.AIDataProvider_Random
/// Size: 0x0010 (0x000038 - 0x000048)
class UAIDataProvider_Random : public UAIDataProvider_QueryParams
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     min                                                         ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     max                                                         ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bInteger                                                    ___ OFFSET(get<bool>, {0x40, 1, 1, 0})
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
	SMember(FName)                                     QueryName                                                   ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(TArray<UEnvQueryOption*>)                  Options                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
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
	DMember(int32_t)                                   VerNum                                                      ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator
/// Size: 0x0020 (0x000030 - 0x000050)
class UEnvQueryGenerator : public UEnvQueryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   OptionName                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UClass*)                                   ItemType                                                    ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bAutoSortTests                                              ___ OFFSET(get<bool>, {0x48, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryInstanceBlueprintWrapper
/// Size: 0x0050 (0x000028 - 0x000078)
class UEnvQueryInstanceBlueprintWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   QueryID                                                     ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(UClass*)                                   ItemType                                                    ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(int32_t)                                   OptionIndex                                                 ___ OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnQueryFinishedEvent                                        ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/AIModule.EnvQueryManager
/// Size: 0x0120 (0x000038 - 0x000158)
class UEnvQueryManager : public UAISubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(TArray<FEnvQueryInstanceCache>)            InstanceCache                                               ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<UEnvQueryContext*>)                 LocalContexts                                               ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<UEnvQueryInstanceBlueprintWrapper*>) GCShieldedWrappers                                         ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(float)                                     MaxAllowedTestingTime                                       ___ OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(bool)                                      bTestQueriesUsingBreadth                                    ___ OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(int32_t)                                   QueryCountWarningThreshold                                  ___ OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	DMember(double)                                    QueryCountWarningInterval                                   ___ OFFSET(get<double>, {0x138, 8, 0, 0})
	DMember(double)                                    ExecutionTimeWarningSeconds                                 ___ OFFSET(get<double>, {0x140, 8, 0, 0})
	DMember(double)                                    HandlingResultTimeWarningSeconds                            ___ OFFSET(get<double>, {0x148, 8, 0, 0})
	DMember(double)                                    GenerationTimeWarningSeconds                                ___ OFFSET(get<double>, {0x150, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryOption
/// Size: 0x0018 (0x000028 - 0x000040)
class UEnvQueryOption : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UEnvQueryGenerator*)                       Generator                                                   ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<UEnvQueryTest*>)                    Tests                                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest
/// Size: 0x01C8 (0x000030 - 0x0001F8)
class UEnvQueryTest : public UEnvQueryNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	DMember(int32_t)                                   TestOrder                                                   ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TEnumAsByte<EEnvTestPurpose>)              TestPurpose                                                 ___ OFFSET(get<T>, {0x34, 1, 0, 0})
	SMember(FString)                                   TestComment                                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EEnvTestFilterOperator>)       MultipleContextFilterOp                                     ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EEnvTestScoreOperator>)        MultipleContextScoreOp                                      ___ OFFSET(get<T>, {0x49, 1, 0, 0})
	CMember(TEnumAsByte<EEnvTestFilterType>)           FilterType                                                  ___ OFFSET(get<T>, {0x4A, 1, 0, 0})
	SMember(FAIDataProviderBoolValue)                  BoolValue                                                   ___ OFFSET(get<T>, {0x50, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 FloatValueMin                                               ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 FloatValueMax                                               ___ OFFSET(get<T>, {0xC0, 56, 0, 0})
	CMember(TEnumAsByte<EEnvTestScoreEquation>)        ScoringEquation                                             ___ OFFSET(get<T>, {0xF9, 1, 0, 0})
	CMember(TEnumAsByte<EEnvQueryTestClamping>)        ClampMinType                                                ___ OFFSET(get<T>, {0xFA, 1, 0, 0})
	CMember(TEnumAsByte<EEnvQueryTestClamping>)        ClampMaxType                                                ___ OFFSET(get<T>, {0xFB, 1, 0, 0})
	CMember(EEQSNormalizationType)                     NormalizationType                                           ___ OFFSET(get<T>, {0xFC, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreClampMin                                               ___ OFFSET(get<T>, {0x100, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoreClampMax                                               ___ OFFSET(get<T>, {0x138, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScoringFactor                                               ___ OFFSET(get<T>, {0x170, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ReferenceValue                                              ___ OFFSET(get<T>, {0x1A8, 56, 0, 0})
	DMember(bool)                                      bDefineReferenceValue                                       ___ OFFSET(get<bool>, {0x1E0, 1, 0, 0})
	DMember(bool)                                      bWorkOnFloatValues                                          ___ OFFSET(get<bool>, {0x1F0, 1, 1, 0})
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
	CMember(UEnvQuery*)                                QueryTemplate                                               ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(TArray<FEnvNamedValue>)                    QueryParams                                                 ___ OFFSET(get<T>, {0x670, 16, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 ___ OFFSET(get<T>, {0x680, 16, 0, 0})
	DMember(float)                                     TimeLimitPerStep                                            ___ OFFSET(get<float>, {0x690, 4, 0, 0})
	DMember(int32_t)                                   StepToDebugDraw                                             ___ OFFSET(get<int32_t>, {0x694, 4, 0, 0})
	CMember(EEnvQueryHightlightMode)                   HighlightMode                                               ___ OFFSET(get<T>, {0x698, 1, 0, 0})
	DMember(bool)                                      bDrawLabels                                                 ___ OFFSET(get<bool>, {0x69C, 1, 1, 0})
	DMember(bool)                                      bDrawFailedItems                                            ___ OFFSET(get<bool>, {0x69C, 1, 1, 1})
	DMember(bool)                                      bReRunQueryOnlyOnFinishedMove                               ___ OFFSET(get<bool>, {0x69C, 1, 1, 2})
	DMember(bool)                                      bShouldBeVisibleInGame                                      ___ OFFSET(get<bool>, {0x69C, 1, 1, 3})
	DMember(bool)                                      bTickDuringGame                                             ___ OFFSET(get<bool>, {0x69C, 1, 1, 4})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             QueryingMode                                                ___ OFFSET(get<T>, {0x6A0, 1, 0, 0})
	SMember(FNavAgentProperties)                       NavAgentProperties                                          ___ OFFSET(get<T>, {0x6A8, 48, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_ActorsOfClass
/// Size: 0x0080 (0x000050 - 0x0000D0)
class UEnvQueryGenerator_ActorsOfClass : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UClass*)                                   SearchedActorClass                                          ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderBoolValue)                  GenerateOnlyActorsInRadius                                  ___ OFFSET(get<T>, {0x58, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SearchRadius                                                ___ OFFSET(get<T>, {0x90, 56, 0, 0})
	CMember(UClass*)                                   SearchCenter                                                ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_BlueprintBase
/// Size: 0x0038 (0x000050 - 0x000088)
class UEnvQueryGenerator_BlueprintBase : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FText)                                     GeneratorsActionDescription                                 ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	CMember(UClass*)                                   Context                                                     ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UClass*)                                   GeneratedItemType                                           ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_Composite
/// Size: 0x0020 (0x000050 - 0x000070)
class UEnvQueryGenerator_Composite : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<UEnvQueryGenerator*>)               Generators                                                  ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bAllowDifferentItemTypes                                    ___ OFFSET(get<bool>, {0x60, 1, 1, 0})
	DMember(bool)                                      bHasMatchingItemType                                        ___ OFFSET(get<bool>, {0x60, 1, 1, 1})
	CMember(UClass*)                                   ForcedItemType                                              ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_ProjectedPoints
/// Size: 0x0038 (0x000050 - 0x000088)
class UEnvQueryGenerator_ProjectedPoints : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FEnvTraceData)                             ProjectionData                                              ___ OFFSET(get<T>, {0x50, 56, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_Cone
/// Size: 0x00F0 (0x000088 - 0x000178)
class UEnvQueryGenerator_Cone : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FAIDataProviderFloatValue)                 AlignedPointsDistance                                       ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ConeDegrees                                                 ___ OFFSET(get<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 AngleStep                                                   ___ OFFSET(get<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 Range                                                       ___ OFFSET(get<T>, {0x130, 56, 0, 0})
	CMember(UClass*)                                   CenterActor                                                 ___ OFFSET(get<T>, {0x168, 8, 0, 0})
	DMember(bool)                                      bIncludeContextLocation                                     ___ OFFSET(get<bool>, {0x170, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_CurrentLocation
/// Size: 0x0008 (0x000050 - 0x000058)
class UEnvQueryGenerator_CurrentLocation : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UClass*)                                   QueryContext                                                ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_Donut
/// Size: 0x0150 (0x000088 - 0x0001D8)
class UEnvQueryGenerator_Donut : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FAIDataProviderFloatValue)                 InnerRadius                                                 ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 OuterRadius                                                 ___ OFFSET(get<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   NumberOfRings                                               ___ OFFSET(get<T>, {0xF8, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   PointsPerRing                                               ___ OFFSET(get<T>, {0x130, 56, 0, 0})
	SMember(FEnvDirection)                             ArcDirection                                                ___ OFFSET(get<T>, {0x168, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ArcAngle                                                    ___ OFFSET(get<T>, {0x188, 56, 0, 0})
	DMember(bool)                                      bUseSpiralPattern                                           ___ OFFSET(get<bool>, {0x1C0, 1, 0, 0})
	CMember(UClass*)                                   Center                                                      ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	DMember(bool)                                      bDefineArc                                                  ___ OFFSET(get<bool>, {0x1D0, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_OnCircle
/// Size: 0x0198 (0x000088 - 0x000220)
class UEnvQueryGenerator_OnCircle : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FAIDataProviderFloatValue)                 CircleRadius                                                ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                ___ OFFSET(get<T>, {0xC0, 56, 0, 0})
	SMember(FAIDataProviderIntValue)                   NumberOfPoints                                              ___ OFFSET(get<T>, {0xF8, 56, 0, 0})
	CMember(EPointOnCircleSpacingMethod)               PointOnCircleSpacingMethod                                  ___ OFFSET(get<T>, {0x130, 1, 0, 0})
	SMember(FEnvDirection)                             ArcDirection                                                ___ OFFSET(get<T>, {0x138, 32, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ArcAngle                                                    ___ OFFSET(get<T>, {0x158, 56, 0, 0})
	DMember(float)                                     AngleRadians                                                ___ OFFSET(get<float>, {0x190, 4, 0, 0})
	CMember(UClass*)                                   CircleCenter                                                ___ OFFSET(get<T>, {0x198, 8, 0, 0})
	DMember(bool)                                      bIgnoreAnyContextActorsWhenGeneratingCircle                 ___ OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	SMember(FAIDataProviderFloatValue)                 CircleCenterZOffset                                         ___ OFFSET(get<T>, {0x1A8, 56, 0, 0})
	SMember(FEnvTraceData)                             TraceData                                                   ___ OFFSET(get<T>, {0x1E0, 56, 0, 0})
	DMember(bool)                                      bDefineArc                                                  ___ OFFSET(get<bool>, {0x218, 1, 1, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_SimpleGrid
/// Size: 0x0078 (0x000088 - 0x000100)
class UEnvQueryGenerator_SimpleGrid : public UEnvQueryGenerator_ProjectedPoints
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FAIDataProviderFloatValue)                 GridSize                                                    ___ OFFSET(get<T>, {0x88, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SpaceBetween                                                ___ OFFSET(get<T>, {0xC0, 56, 0, 0})
	CMember(UClass*)                                   GenerateAround                                              ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_PathingGrid
/// Size: 0x0078 (0x000100 - 0x000178)
class UEnvQueryGenerator_PathingGrid : public UEnvQueryGenerator_SimpleGrid
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FAIDataProviderBoolValue)                  PathToItem                                                  ___ OFFSET(get<T>, {0x100, 56, 0, 0})
	CMember(UClass*)                                   NavigationFilter                                            ___ OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ScanRangeMultiplier                                         ___ OFFSET(get<T>, {0x140, 56, 0, 0})
};

/// Class /Script/AIModule.EnvQueryGenerator_PerceivedActors
/// Size: 0x0058 (0x000050 - 0x0000A8)
class UEnvQueryGenerator_PerceivedActors : public UEnvQueryGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UClass*)                                   AllowedActorClass                                           ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FAIDataProviderFloatValue)                 SearchRadius                                                ___ OFFSET(get<T>, {0x58, 56, 0, 0})
	CMember(UClass*)                                   ListenerContext                                             ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UClass*)                                   SenseToUse                                                  ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	DMember(bool)                                      bIncludeKnownActors                                         ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
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
	CMember(TEnumAsByte<EEnvTestDistance>)             TestMode                                                    ___ OFFSET(get<T>, {0x1F8, 1, 0, 0})
	CMember(UClass*)                                   DistanceTo                                                  ___ OFFSET(get<T>, {0x200, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Dot
/// Size: 0x0048 (0x0001F8 - 0x000240)
class UEnvQueryTest_Dot : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FEnvDirection)                             LineA                                                       ___ OFFSET(get<T>, {0x1F8, 32, 0, 0})
	SMember(FEnvDirection)                             LineB                                                       ___ OFFSET(get<T>, {0x218, 32, 0, 0})
	CMember(EEnvTestDot)                               TestMode                                                    ___ OFFSET(get<T>, {0x238, 1, 0, 0})
	DMember(bool)                                      bAbsoluteValue                                              ___ OFFSET(get<bool>, {0x239, 1, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_GameplayTags
/// Size: 0x0070 (0x0001F8 - 0x000268)
class UEnvQueryTest_GameplayTags : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	SMember(FGameplayTagQuery)                         TagQueryToMatch                                             ___ OFFSET(get<T>, {0x1F8, 72, 0, 0})
	DMember(bool)                                      bRejectIncompatibleItems                                    ___ OFFSET(get<bool>, {0x240, 1, 0, 0})
	DMember(bool)                                      bUpdatedToUseQuery                                          ___ OFFSET(get<bool>, {0x241, 1, 0, 0})
	CMember(EGameplayContainerMatchType)               TagsToMatch                                                 ___ OFFSET(get<T>, {0x242, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                ___ OFFSET(get<T>, {0x248, 32, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Overlap
/// Size: 0x0030 (0x0001F8 - 0x000228)
class UEnvQueryTest_Overlap : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FEnvOverlapData)                           OverlapData                                                 ___ OFFSET(get<T>, {0x1F8, 48, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Pathfinding
/// Size: 0x0088 (0x0001F8 - 0x000280)
class UEnvQueryTest_Pathfinding : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(TEnumAsByte<EEnvTestPathfinding>)          TestMode                                                    ___ OFFSET(get<T>, {0x1F8, 1, 0, 0})
	CMember(UClass*)                                   Context                                                     ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	SMember(FAIDataProviderBoolValue)                  PathFromContext                                             ___ OFFSET(get<T>, {0x208, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  SkipUnreachable                                             ___ OFFSET(get<T>, {0x240, 56, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 ___ OFFSET(get<T>, {0x278, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_PathfindingBatch
/// Size: 0x0038 (0x000280 - 0x0002B8)
class UEnvQueryTest_PathfindingBatch : public UEnvQueryTest_Pathfinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FAIDataProviderFloatValue)                 ScanRangeMultiplier                                         ___ OFFSET(get<T>, {0x280, 56, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Project
/// Size: 0x0038 (0x0001F8 - 0x000230)
class UEnvQueryTest_Project : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FEnvTraceData)                             ProjectionData                                              ___ OFFSET(get<T>, {0x1F8, 56, 0, 0})
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
	SMember(FEnvTraceData)                             TraceData                                                   ___ OFFSET(get<T>, {0x1F8, 56, 0, 0})
	SMember(FAIDataProviderBoolValue)                  TraceFromContext                                            ___ OFFSET(get<T>, {0x230, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ItemHeightOffset                                            ___ OFFSET(get<T>, {0x268, 56, 0, 0})
	SMember(FAIDataProviderFloatValue)                 ContextHeightOffset                                         ___ OFFSET(get<T>, {0x2A0, 56, 0, 0})
	CMember(UClass*)                                   Context                                                     ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/AIModule.EnvQueryTest_Volume
/// Size: 0x0018 (0x0001F8 - 0x000210)
class UEnvQueryTest_Volume : public UEnvQueryTest
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(UClass*)                                   VolumeContext                                               ___ OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(UClass*)                                   VolumeClass                                                 ___ OFFSET(get<T>, {0x200, 8, 0, 0})
	DMember(bool)                                      bDoComplexVolumeTest                                        ___ OFFSET(get<bool>, {0x208, 1, 1, 0})
	DMember(bool)                                      bSkipTestIfNoVolumes                                        ___ OFFSET(get<bool>, {0x208, 1, 1, 1})
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
	CMember(UNavMovementComponent*)                    MovementComp                                                ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(ANavigationData*)                          MyNavData                                                   ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/AIModule.CrowdFollowingComponent
/// Size: 0x0050 (0x0002C8 - 0x000318)
class UCrowdFollowingComponent : public UPathFollowingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FVector)                                   CrowdAgentMoveDirection                                     ___ OFFSET(get<T>, {0x2E0, 24, 0, 0})
};

/// Class /Script/AIModule.CrowdManager
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UCrowdManager : public UCrowdManagerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(ANavigationData*)                          MyNavData                                                   ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FCrowdAvoidanceConfig>)             AvoidanceConfig                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCrowdAvoidanceSamplingPattern>)    SamplingPatterns                                            ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   MaxAgents                                                   ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(float)                                     MaxAgentRadius                                              ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   MaxAvoidedAgents                                            ___ OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   MaxAvoidedWalls                                             ___ OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(float)                                     NavmeshCheckInterval                                        ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     PathOptimizationInterval                                    ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     SeparationDirClamp                                          ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     PathOffsetRadiusMultiplier                                  ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(bool)                                      bResolveCollisions                                          ___ OFFSET(get<bool>, {0x70, 1, 1, 4})
};

/// Class /Script/AIModule.GridPathFollowingComponent
/// Size: 0x0030 (0x0002C8 - 0x0002F8)
class UGridPathFollowingComponent : public UPathFollowingComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UNavLocalGridManager*)                     GridManager                                                 ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
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
	CMember(TArray<FNavigationLink>)                   PointLinks                                                  ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<FNavigationSegmentLink>)            SegmentLinks                                                ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(UNavLinkCustomComponent*)                  SmartLinkComp                                               ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	DMember(bool)                                      bSmartLinkIsRelevant                                        ___ OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSmartLinkReached                                          ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
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
	CMember(TArray<UAISenseConfig*>)                   SensesConfig                                                ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(UClass*)                                   DominantSense                                               ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(AAIController*)                            AIOwner                                                     ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPerceptionUpdated                                         ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTargetPerceptionForgotten                                 ___ OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTargetPerceptionUpdated                                   ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTargetPerceptionInfoUpdated                               ___ OFFSET(get<T>, {0x178, 16, 0, 0})
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
	DMember(bool)                                      bAutoRegisterAsSource                                       ___ OFFSET(get<bool>, {0xA0, 1, 1, 0})
	CMember(TArray<UClass*>)                           RegisterAsSourceForSenses                                   ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/AIModule.AIPerceptionSystem
/// Size: 0x00F8 (0x000038 - 0x000130)
class UAIPerceptionSystem : public UAISubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<UAISense*>)                         Senses                                                      ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(float)                                     PerceptionAgingRate                                         ___ OFFSET(get<float>, {0x98, 4, 0, 0})
};

/// Class /Script/AIModule.AISense
/// Size: 0x0050 (0x000028 - 0x000078)
class UAISense : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(EAISenseNotifyType)                        NotifyType                                                  ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(bool)                                      bWantsNewPawnNotification                                   ___ OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(bool)                                      bAutoRegisterAllPawnsAsSources                              ___ OFFSET(get<bool>, {0x2C, 1, 1, 1})
	CMember(UAIPerceptionSystem*)                      PerceptionSystemInstance                                    ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/AIModule.AISenseConfig_Damage
/// Size: 0x0008 (0x000048 - 0x000050)
class UAISenseConfig_Damage : public UAISenseConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UClass*)                                   Implementation                                              ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/AIModule.AISense_Blueprint
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UAISense_Blueprint : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UClass*)                                   ListenerDataType                                            ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(TArray<UAIPerceptionComponent*>)           ListenerContainer                                           ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<UAISenseEvent*>)                    UnprocessedEvents                                           ___ OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/AIModule.AISense_Damage
/// Size: 0x0010 (0x000078 - 0x000088)
class UAISense_Damage : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FAIDamageEvent>)                    RegisteredEvents                                            ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/AIModule.AISense_Hearing
/// Size: 0x0068 (0x000078 - 0x0000E0)
class UAISense_Hearing : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FAINoiseEvent>)                     NoiseEvents                                                 ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(float)                                     SpeedOfSoundSq                                              ___ OFFSET(get<float>, {0x88, 4, 0, 0})
};

/// Class /Script/AIModule.AISense_Prediction
/// Size: 0x0010 (0x000078 - 0x000088)
class UAISense_Prediction : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FAIPredictionEvent>)                RegisteredEvents                                            ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/AIModule.AISense_Sight
/// Size: 0x0130 (0x000078 - 0x0001A8)
class UAISense_Sight : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(int32_t)                                   MaxTracesPerTick                                            ___ OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(int32_t)                                   MaxAsyncTracesPerTick                                       ___ OFFSET(get<int32_t>, {0x154, 4, 0, 0})
	DMember(int32_t)                                   MinQueriesPerTimeSliceCheck                                 ___ OFFSET(get<int32_t>, {0x158, 4, 0, 0})
	DMember(double)                                    MaxTimeSlicePerTick                                         ___ OFFSET(get<double>, {0x160, 8, 0, 0})
	DMember(float)                                     HighImportanceQueryDistanceThreshold                        ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	DMember(float)                                     MaxQueryImportance                                          ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(float)                                     SightLimitQueryImportance                                   ___ OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(float)                                     PendingQueriesBudgetReductionRatio                          ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(bool)                                      bUseAsynchronousTraceForDefaultSightQueries                 ___ OFFSET(get<bool>, {0x17C, 1, 0, 0})
};

/// Class /Script/AIModule.AISense_Team
/// Size: 0x0010 (0x000078 - 0x000088)
class UAISense_Team : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FAITeamStimulusEvent>)              RegisteredEvents                                            ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/AIModule.AISense_Touch
/// Size: 0x0010 (0x000078 - 0x000088)
class UAISense_Touch : public UAISense
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FAITouchEvent>)                     RegisteredEvents                                            ___ OFFSET(get<T>, {0x78, 16, 0, 0})
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
	DMember(float)                                     HearingThreshold                                            ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     LOSHearingThreshold                                         ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     SightRadius                                                 ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     SensingInterval                                             ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     HearingMaxSoundAge                                          ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      bEnableSensingUpdates                                       ___ OFFSET(get<bool>, {0xB4, 1, 1, 0})
	DMember(bool)                                      bOnlySensePlayers                                           ___ OFFSET(get<bool>, {0xB4, 1, 1, 1})
	DMember(bool)                                      bSeePawns                                                   ___ OFFSET(get<bool>, {0xB4, 1, 1, 2})
	DMember(bool)                                      bHearNoises                                                 ___ OFFSET(get<bool>, {0xB4, 1, 1, 3})
	SMember(FMulticastInlineDelegate)                  OnSeePawn                                                   ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHearNoise                                                 ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(float)                                     PeripheralVisionAngle                                       ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     PeripheralVisionCosine                                      ___ OFFSET(get<float>, {0xE4, 4, 0, 0})
};

/// Class /Script/AIModule.AITask
/// Size: 0x0008 (0x000060 - 0x000068)
class UAITask : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(AAIController*)                            OwnerController                                             ___ OFFSET(get<T>, {0x60, 8, 0, 0})
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
	SMember(FMulticastInlineDelegate)                  OnRequestFailed                                             ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMoveFinished                                              ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FAIMoveRequest)                            MoveRequest                                                 ___ OFFSET(get<T>, {0x88, 80, 0, 0})
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
class FActorPerceptionUpdateInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(int32_t)                                   TargetId                                                    ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Target                                                      ___ OFFSET(get<T>, {0x4, 8, 0, 0})
	SMember(FAIStimulus)                               Stimulus                                                    ___ OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/AIModule.AIStimulus
/// Size: 0x0050 (0x000000 - 0x000050)
class FAIStimulus : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Age                                                         ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ExpirationAge                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Strength                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   StimulusLocation                                            ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   ReceiverLocation                                            ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FName)                                     tag                                                         ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	DMember(bool)                                      bSuccessfullySensed                                         ___ OFFSET(get<bool>, {0x4C, 1, 1, 1})
};

/// Struct /Script/AIModule.AIRequestID
/// Size: 0x0004 (0x000000 - 0x000004)
class FAIRequestID : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  RequestID                                                   ___ OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/AIModule.EnvNamedValue
/// Size: 0x000C (0x000000 - 0x00000C)
class FEnvNamedValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ParamName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EAIParamType)                              ParamType                                                   ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDynamicParam
/// Size: 0x0038 (0x000000 - 0x000038)
class FAIDynamicParam : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     ParamName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EAIParamType)                              ParamType                                                   ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FBlackboardKeySelector)                    BBKey                                                       ___ OFFSET(get<T>, {0x10, 40, 0, 0})
};

/// Struct /Script/AIModule.BlackboardKeySelector
/// Size: 0x0028 (0x000000 - 0x000028)
class FBlackboardKeySelector : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<UBlackboardKeyType*>)               AllowedTypes                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     SelectedKeyName                                             ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(UClass*)                                   SelectedKeyType                                             ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   SelectedKeyID                                               ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(bool)                                      bNoneIsAllowedValue                                         ___ OFFSET(get<bool>, {0x24, 1, 1, 0})
};

/// Struct /Script/AIModule.AIMoveRequest
/// Size: 0x0050 (0x000000 - 0x000050)
class FAIMoveRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<AActor*>)                   GoalActor                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.IntervalCountdown
/// Size: 0x0008 (0x000000 - 0x000008)
class FIntervalCountdown : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Interval                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/AIModule.EnvDirection
/// Size: 0x0020 (0x000000 - 0x000020)
class FEnvDirection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UClass*)                                   LineFrom                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   LineTo                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UClass*)                                   Rotation                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TEnumAsByte<EEnvDirection>)                DirMode                                                     ___ OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/AIModule.EnvTraceData
/// Size: 0x0038 (0x000000 - 0x000038)
class FEnvTraceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   VersionNum                                                  ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(UClass*)                                   NavigationFilter                                            ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ProjectDown                                                 ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ProjectUp                                                   ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ExtentX                                                     ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ExtentY                                                     ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     ExtentZ                                                     ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     PostProjectionVerticalOffset                                ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              TraceChannel                                                ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            SerializedChannel                                           ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FName)                                     TraceProfileName                                            ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	CMember(TEnumAsByte<EEnvTraceShape>)               TraceShape                                                  ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TEnumAsByte<EEnvQueryTrace>)               TraceMode                                                   ___ OFFSET(get<T>, {0x31, 1, 0, 0})
	DMember(bool)                                      bTraceComplex                                               ___ OFFSET(get<bool>, {0x34, 1, 1, 0})
	DMember(bool)                                      bOnlyBlockingHits                                           ___ OFFSET(get<bool>, {0x34, 1, 1, 1})
	DMember(bool)                                      bCanTraceOnNavMesh                                          ___ OFFSET(get<bool>, {0x34, 1, 1, 2})
	DMember(bool)                                      bCanTraceOnGeometry                                         ___ OFFSET(get<bool>, {0x34, 1, 1, 3})
	DMember(bool)                                      bCanDisableTrace                                            ___ OFFSET(get<bool>, {0x34, 1, 1, 4})
	DMember(bool)                                      bCanProjectDown                                             ___ OFFSET(get<bool>, {0x34, 1, 1, 5})
};

/// Struct /Script/AIModule.EnvOverlapData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEnvOverlapData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     ExtentX                                                     ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ExtentY                                                     ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ExtentZ                                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FVector)                                   ShapeOffset                                                 ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            OverlapChannel                                              ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<EEnvOverlapShape>)             OverlapShape                                                ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(bool)                                      bOnlyBlockingHits                                           ___ OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(bool)                                      bOverlapComplex                                             ___ OFFSET(get<bool>, {0x2C, 1, 1, 1})
	DMember(bool)                                      bSkipOverlapQuerier                                         ___ OFFSET(get<bool>, {0x2C, 1, 1, 2})
};

/// Struct /Script/AIModule.EnvQueryResult
/// Size: 0x0040 (0x000000 - 0x000040)
class FEnvQueryResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UClass*)                                   ItemType                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   OptionIndex                                                 ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   QueryID                                                     ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/AIModule.EQSParametrizedQueryExecutionRequest
/// Size: 0x0048 (0x000000 - 0x000048)
class FEQSParametrizedQueryExecutionRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UEnvQuery*)                                QueryTemplate                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FAIDynamicParam>)                   QueryConfig                                                 ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FBlackboardKeySelector)                    EQSQueryBlackboardKey                                       ___ OFFSET(get<T>, {0x18, 40, 0, 0})
	CMember(TEnumAsByte<EEnvQueryRunMode>)             RunMode                                                     ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(bool)                                      bUseBBKeyForQueryTemplate                                   ___ OFFSET(get<bool>, {0x44, 1, 1, 0})
};

/// Struct /Script/AIModule.GenericTeamId
/// Size: 0x0001 (0x000000 - 0x000001)
class FGenericTeamId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      TeamId                                                      ___ OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/AIModule.SimpleIndexedHandleBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FSimpleIndexedHandleBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/AIModule.IndexedHandleBase
/// Size: 0x0004 (0x000004 - 0x000008)
class FIndexedHandleBase : public FSimpleIndexedHandleBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/AIModule.CompactIndexedHandleBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FCompactIndexedHandleBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/AIModule.SequentialIDBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FSequentialIDBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint32_t)                                  Value                                                       ___ OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/AIModule.PawnActionEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FPawnActionEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UPawnAction*)                              Action                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.PawnActionStack
/// Size: 0x0008 (0x000000 - 0x000008)
class FPawnActionStack : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UPawnAction*)                              TopAction                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.BehaviorTreeTemplateInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FBehaviorTreeTemplateInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UBehaviorTree*)                            Asset                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UBTCompositeNode*)                         Template                                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/AIModule.BlackboardEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FBlackboardEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     EntryName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UBlackboardKeyType*)                       KeyType                                                     ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bInstanceSynced                                             ___ OFFSET(get<bool>, {0x10, 1, 1, 0})
};

/// Struct /Script/AIModule.BTDecoratorLogic
/// Size: 0x0004 (0x000000 - 0x000004)
class FBTDecoratorLogic : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(TEnumAsByte<EBTDecoratorLogic>)            Operation                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(uint16_t)                                  Number                                                      ___ OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/AIModule.BTCompositeChild
/// Size: 0x0030 (0x000000 - 0x000030)
class FBTCompositeChild : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UBTCompositeNode*)                         ChildComposite                                              ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UBTTaskNode*)                              ChildTask                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<UBTDecorator*>)                     Decorators                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FBTDecoratorLogic>)                 DecoratorOps                                                ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FAIDataProviderValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UAIDataProvider*)                          DataBinding                                                 ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     DataField                                                   ___ OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderTypedValue
/// Size: 0x0010 (0x000020 - 0x000030)
class FAIDataProviderTypedValue : public FAIDataProviderValue
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UClass*)                                   PropertyType                                                ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderStructValue
/// Size: 0x0010 (0x000020 - 0x000030)
class FAIDataProviderStructValue : public FAIDataProviderValue
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/AIModule.AIDataProviderIntValue
/// Size: 0x0008 (0x000030 - 0x000038)
class FAIDataProviderIntValue : public FAIDataProviderTypedValue
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   DefaultValue                                                ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderFloatValue
/// Size: 0x0008 (0x000030 - 0x000038)
class FAIDataProviderFloatValue : public FAIDataProviderTypedValue
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     DefaultValue                                                ___ OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/AIModule.AIDataProviderBoolValue
/// Size: 0x0008 (0x000030 - 0x000038)
class FAIDataProviderBoolValue : public FAIDataProviderTypedValue
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      DefaultValue                                                ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/AIModule.EnvQueryManagerConfig
/// Size: 0x0030 (0x000000 - 0x000030)
class FEnvQueryManagerConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     MaxAllowedTestingTime                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(bool)                                      bTestQueriesUsingBreadth                                    ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   QueryCountWarningThreshold                                  ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(double)                                    QueryCountWarningInterval                                   ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    ExecutionTimeWarningSeconds                                 ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    HandlingResultTimeWarningSeconds                            ___ OFFSET(get<double>, {0x20, 8, 0, 0})
	DMember(double)                                    GenerationTimeWarningSeconds                                ___ OFFSET(get<double>, {0x28, 8, 0, 0})
};

/// Struct /Script/AIModule.EnvQueryRequest
/// Size: 0x0068 (0x000000 - 0x000068)
class FEnvQueryRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(UEnvQuery*)                                QueryTemplate                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UObject*)                                  Owner                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UWorld*)                                   World                                                       ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/AIModule.EnvQueryInstanceCache
/// Size: 0x0180 (0x000000 - 0x000180)
class FEnvQueryInstanceCache : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(UEnvQuery*)                                Template                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.CrowdAvoidanceConfig
/// Size: 0x001C (0x000000 - 0x00001C)
class FCrowdAvoidanceConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     VelocityBias                                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DesiredVelocityWeight                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CurrentVelocityWeight                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SideBiasWeight                                              ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ImpactTimeWeight                                            ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ImpactTimeRange                                             ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(char)                                      CustomPatternIdx                                            ___ OFFSET(get<char>, {0x18, 1, 0, 0})
	DMember(char)                                      AdaptiveDivisions                                           ___ OFFSET(get<char>, {0x19, 1, 0, 0})
	DMember(char)                                      AdaptiveRings                                               ___ OFFSET(get<char>, {0x1A, 1, 0, 0})
	DMember(char)                                      AdaptiveDepth                                               ___ OFFSET(get<char>, {0x1B, 1, 0, 0})
};

/// Struct /Script/AIModule.CrowdAvoidanceSamplingPattern
/// Size: 0x0020 (0x000000 - 0x000020)
class FCrowdAvoidanceSamplingPattern : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<float>)                             Angles                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<float>)                             Radii                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/AIModule.RecastGraphWrapper
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FRecastGraphWrapper : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(ARecastNavMesh*)                           RecastNavMeshActor                                          ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/AIModule.ActorPerceptionBlueprintInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FActorPerceptionBlueprintInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AActor*)                                   Target                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FAIStimulus>)                       LastSensedStimuli                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bIsHostile                                                  ___ OFFSET(get<bool>, {0x18, 1, 1, 0})
};

/// Struct /Script/AIModule.AISenseAffiliationFilter
/// Size: 0x0004 (0x000000 - 0x000004)
class FAISenseAffiliationFilter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bDetectEnemies                                              ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bDetectNeutrals                                             ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bDetectFriendlies                                           ___ OFFSET(get<bool>, {0x0, 1, 1, 2})
};

/// Struct /Script/AIModule.AIDamageEvent
/// Size: 0x0050 (0x000000 - 0x000050)
class FAIDamageEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Amount                                                      ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   HitLocation                                                 ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(AActor*)                                   DamagedActor                                                ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(AActor*)                                   Instigator                                                  ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FName)                                     tag                                                         ___ OFFSET(get<T>, {0x48, 4, 0, 0})
};

/// Struct /Script/AIModule.AINoiseEvent
/// Size: 0x0038 (0x000000 - 0x000038)
class FAINoiseEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   NoiseLocation                                               ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(float)                                     Loudness                                                    ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaxRange                                                    ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	CMember(AActor*)                                   Instigator                                                  ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     tag                                                         ___ OFFSET(get<T>, {0x30, 4, 0, 0})
};

/// Struct /Script/AIModule.AIPredictionEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FAIPredictionEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AActor*)                                   Requestor                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AActor*)                                   PredictedActor                                              ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/AIModule.AISightEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FAISightEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AActor*)                                   SeenActor                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(AActor*)                                   Observer                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/AIModule.AITeamStimulusEvent
/// Size: 0x0050 (0x000000 - 0x000050)
class FAITeamStimulusEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(AActor*)                                   Broadcaster                                                 ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(AActor*)                                   Enemy                                                       ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/AIModule.AITouchEvent
/// Size: 0x0028 (0x000000 - 0x000028)
class FAITouchEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(AActor*)                                   TouchReceiver                                               ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(AActor*)                                   OtherActor                                                  ___ OFFSET(get<T>, {0x20, 8, 0, 0})
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

