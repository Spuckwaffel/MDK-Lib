
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/StateTreeModule.StateTreeSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UStateTreeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bAutoStartDebuggerTracesOnNonEditorTargets                  OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/StateTreeModule.StateTreeNodeBlueprintBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UStateTreeNodeBlueprintBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UObject*)                                  CachedOwner                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
};



	/// Functions
	// Function /Script/StateTreeModule.StateTreeNodeBlueprintBase.SendEvent
	// void SendEvent(FStateTreeEvent& Event);                                                                                  // [0x64b9328] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/StateTreeModule.StateTreeNodeBlueprintBase.RequestTransition
	// void RequestTransition(FStateTreeStateLink& TargetState, EStateTreeTransitionPriority Priority);                         // [0x64b9188] Final|Native|Public|HasOutParms|BlueprintCallable 
/// Class /Script/StateTreeModule.StateTreeConditionBlueprintBase
/// Size: 0x0008 (0x000040 - 0x000048)
class UStateTreeConditionBlueprintBase : public UStateTreeNodeBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/StateTreeModule.StateTreeEvaluatorBlueprintBase
/// Size: 0x0008 (0x000040 - 0x000048)
class UStateTreeEvaluatorBlueprintBase : public UStateTreeNodeBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/StateTreeModule.StateTreeTaskBlueprintBase
/// Size: 0x0008 (0x000040 - 0x000048)
class UStateTreeTaskBlueprintBase : public UStateTreeNodeBlueprintBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bShouldStateChangeOnReselect                                OFFSET(get<bool>, {0x41, 1, 1, 0})
	DMember(bool)                                      bShouldCallTickOnlyOnEvents                                 OFFSET(get<bool>, {0x41, 1, 1, 2})
	DMember(bool)                                      bShouldCopyBoundPropertiesOnTick                            OFFSET(get<bool>, {0x41, 1, 1, 3})
	DMember(bool)                                      bShouldCopyBoundPropertiesOnExitState                       OFFSET(get<bool>, {0x41, 1, 1, 4})
};



	/// Functions
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveTick
	// EStateTreeRunStatus ReceiveTick(float DeltaTime);                                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveStateCompleted
	// void ReceiveStateCompleted(EStateTreeRunStatus CompletionStatus, FStateTreeActiveStates CompletedActiveStates);          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveLatentTick
	// void ReceiveLatentTick(float DeltaTime);                                                                                 // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveLatentEnterState
	// void ReceiveLatentEnterState(FStateTreeTransitionResult& TRANSITION);                                                    // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveExitState
	// void ReceiveExitState(FStateTreeTransitionResult& TRANSITION);                                                           // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.ReceiveEnterState
	// EStateTreeRunStatus ReceiveEnterState(FStateTreeTransitionResult& TRANSITION);                                           // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/StateTreeModule.StateTreeTaskBlueprintBase.FinishTask
	// void FinishTask(bool bSucceeded);                                                                                        // [0x64b910c] Final|Native|Protected|BlueprintCallable 
/// Class /Script/StateTreeModule.StateTree
/// Size: 0x0150 (0x000030 - 0x000180)
class UStateTree : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	DMember(uint32_t)                                  LastCompiledEditorDataHash                                  OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	CMember(UStateTreeSchema*)                         Schema                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<FCompactStateTreeState>)            States                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FCompactStateTransition>)           Transitions                                                 OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FInstancedStructContainer)                 Nodes                                                       OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FStateTreeInstanceData)                    DefaultInstanceData                                         OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FStateTreeInstanceData)                    SharedInstanceData                                          OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FStateTreeExternalDataDesc>)        ContextDataDescs                                            OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FStateTreePropertyBindings)                PropertyBindings                                            OFFSET(get<T>, {0xB8, 88, 0, 0})
	CMember(TArray<FStateTreeStateIdToHandle>)         IDToStateMappings                                           OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<FStateTreeNodeIdToIndex>)           IDToNodeMappings                                            OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(TArray<FStateTreeTransitionIdToIndex>)     IDToTransitionMappings                                      OFFSET(get<T>, {0x130, 16, 0, 0})
	SMember(FInstancedPropertyBag)                     Parameters                                                  OFFSET(get<T>, {0x140, 16, 0, 0})
	SMember(FStateTreeIndex8)                          ParametersDataViewIndex                                     OFFSET(get<T>, {0x150, 1, 0, 0})
	DMember(uint16_t)                                  EvaluatorsBegin                                             OFFSET(get<uint16_t>, {0x152, 2, 0, 0})
	DMember(uint16_t)                                  EvaluatorsNum                                               OFFSET(get<uint16_t>, {0x154, 2, 0, 0})
	DMember(uint16_t)                                  GlobalTasksBegin                                            OFFSET(get<uint16_t>, {0x156, 2, 0, 0})
	DMember(uint16_t)                                  GlobalTasksNum                                              OFFSET(get<uint16_t>, {0x158, 2, 0, 0})
	DMember(bool)                                      bHasGlobalTransitionTasks                                   OFFSET(get<bool>, {0x15A, 1, 0, 0})
	CMember(TArray<FStateTreeExternalDataDesc>)        ExternalDataDescs                                           OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(int32_t)                                   ExternalDataBaseIndex                                       OFFSET(get<int32_t>, {0x170, 4, 0, 0})
	DMember(int32_t)                                   NumDataViews                                                OFFSET(get<int32_t>, {0x174, 4, 0, 0})
};

/// Class /Script/StateTreeModule.StateTreeSchema
/// Size: 0x0000 (0x000028 - 0x000028)
class UStateTreeSchema : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/StateTreeModule.StateTreeAnyEnum
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeAnyEnum : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint32_t)                                  Value                                                       OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	CMember(UEnum*)                                    Enum                                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeExternalDataHandle
/// Size: 0x0002 (0x000000 - 0x000002)
class FStateTreeExternalDataHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	SMember(FStateTreeIndex16)                         DataViewIndex                                               OFFSET(get<T>, {0x0, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeIndex16
/// Size: 0x0002 (0x000000 - 0x000002)
class FStateTreeIndex16 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(uint16_t)                                  Value                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeExternalDataDesc
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeExternalDataDesc : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UStruct*)                                  Struct                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FStateTreeExternalDataHandle)              Handle                                                      OFFSET(get<T>, {0xC, 2, 0, 0})
	CMember(EStateTreeExternalDataRequirement)         Requirement                                                 OFFSET(get<T>, {0xE, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeTransitionRequest
/// Size: 0x0006 (0x000000 - 0x000006)
class FStateTreeTransitionRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	SMember(FStateTreeStateHandle)                     SourceState                                                 OFFSET(get<T>, {0x0, 2, 0, 0})
	SMember(FStateTreeStateHandle)                     TargetState                                                 OFFSET(get<T>, {0x2, 2, 0, 0})
	CMember(EStateTreeTransitionPriority)              Priority                                                    OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeStateHandle
/// Size: 0x0002 (0x000000 - 0x000002)
class FStateTreeStateHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(uint16_t)                                  Index                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeActiveStates
/// Size: 0x0012 (0x000000 - 0x000012)
class FStateTreeActiveStates : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 18;

public:
	SMember(FStateTreeStateHandle)                     States                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(char)                                      NumStates                                                   OFFSET(get<char>, {0x10, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeTransitionSource
/// Size: 0x0008 (0x000000 - 0x000008)
class FStateTreeTransitionSource : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/StateTreeModule.StateTreeTransitionResult
/// Size: 0x002E (0x000000 - 0x00002E)
class FStateTreeTransitionResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 46;

public:
	SMember(FStateTreeActiveStates)                    CurrentActiveStates                                         OFFSET(get<T>, {0x0, 18, 0, 0})
	CMember(EStateTreeRunStatus)                       CurrentRunStatus                                            OFFSET(get<T>, {0x12, 1, 0, 0})
	SMember(FStateTreeStateHandle)                     SourceState                                                 OFFSET(get<T>, {0x14, 2, 0, 0})
	SMember(FStateTreeStateHandle)                     TargetState                                                 OFFSET(get<T>, {0x16, 2, 0, 0})
	SMember(FStateTreeActiveStates)                    NextActiveStates                                            OFFSET(get<T>, {0x18, 18, 0, 0})
	SMember(FStateTreeStateHandle)                     CurrentState                                                OFFSET(get<T>, {0x2A, 2, 0, 0})
	CMember(EStateTreeStateChangeType)                 ChangeType                                                  OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(EStateTreeTransitionPriority)              Priority                                                    OFFSET(get<T>, {0x2D, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeExecutionState
/// Size: 0x0030 (0x000000 - 0x000030)
class FStateTreeExecutionState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/StateTreeModule.StateTreeIndex8
/// Size: 0x0001 (0x000000 - 0x000001)
class FStateTreeIndex8 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(char)                                      Value                                                       OFFSET(get<char>, {0x0, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeNodeBase
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateTreeNodeBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FStateTreeIndex16)                         BindingsBatch                                               OFFSET(get<T>, {0xC, 2, 0, 0})
	SMember(FStateTreeIndex16)                         DataViewIndex                                               OFFSET(get<T>, {0xE, 2, 0, 0})
	SMember(FStateTreeIndex16)                         InstanceIndex                                               OFFSET(get<T>, {0x10, 2, 0, 0})
	DMember(bool)                                      bInstanceIsObject                                           OFFSET(get<bool>, {0x12, 1, 1, 0})
};

/// Struct /Script/StateTreeModule.StateTreeConditionBase
/// Size: 0x0008 (0x000018 - 0x000020)
class FStateTreeConditionBase : public FStateTreeNodeBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(EStateTreeConditionOperand)                Operand                                                     OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(int8_t)                                    DeltaIndent                                                 OFFSET(get<int8_t>, {0x19, 1, 0, 0})
	CMember(EStateTreeConditionEvaluationMode)         EvaluationMode                                              OFFSET(get<T>, {0x1A, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeBlueprintConditionWrapper
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeBlueprintConditionWrapper : public FStateTreeConditionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UClass*)                                   ConditionClass                                              OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeEvaluatorBase
/// Size: 0x0000 (0x000018 - 0x000018)
class FStateTreeEvaluatorBase : public FStateTreeNodeBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/StateTreeModule.StateTreeBlueprintEvaluatorWrapper
/// Size: 0x0008 (0x000018 - 0x000020)
class FStateTreeBlueprintEvaluatorWrapper : public FStateTreeEvaluatorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UClass*)                                   EvaluatorClass                                              OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeTaskBase
/// Size: 0x0008 (0x000018 - 0x000020)
class FStateTreeTaskBase : public FStateTreeNodeBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bTaskEnabled                                                OFFSET(get<bool>, {0x18, 1, 1, 6})
};

/// Struct /Script/StateTreeModule.StateTreeBlueprintTaskWrapper
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeBlueprintTaskWrapper : public FStateTreeTaskBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UClass*)                                   TaskClass                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareIntConditionInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FStateTreeCompareIntConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Left                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Right                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeConditionCommonBase
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeConditionCommonBase : public FStateTreeConditionBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/StateTreeModule.StateTreeCompareIntCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeCompareIntCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(EGenericAICheck)                           Operator                                                    OFFSET(get<T>, {0x21, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareFloatConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeCompareFloatConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    Left                                                        OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Right                                                       OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareFloatCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeCompareFloatCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(EGenericAICheck)                           Operator                                                    OFFSET(get<T>, {0x21, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareBoolConditionInstanceData
/// Size: 0x0002 (0x000000 - 0x000002)
class FStateTreeCompareBoolConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bLeft                                                       OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bRight                                                      OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareBoolCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeCompareBoolCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareEnumConditionInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FStateTreeCompareEnumConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FStateTreeAnyEnum)                         Left                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FStateTreeAnyEnum)                         Right                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareEnumCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeCompareEnumCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareDistanceConditionInstanceData
/// Size: 0x0038 (0x000000 - 0x000038)
class FStateTreeCompareDistanceConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Source                                                      OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Target                                                      OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(double)                                    Distance                                                    OFFSET(get<double>, {0x30, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeCompareDistanceCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeCompareDistanceCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(EGenericAICheck)                           Operator                                                    OFFSET(get<T>, {0x21, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeRandomConditionInstanceData
/// Size: 0x0004 (0x000000 - 0x000004)
class FStateTreeRandomConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Threshold                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeRandomCondition
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeRandomCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/StateTreeModule.GameplayTagMatchConditionInstanceData
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayTagMatchConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     TagContainer                                                OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTag)                              tag                                                         OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/StateTreeModule.GameplayTagMatchCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayTagMatchCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bExactMatch                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.GameplayTagContainerMatchConditionInstanceData
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayTagContainerMatchConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayTagContainer)                     TagContainer                                                OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     OtherContainer                                              OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/StateTreeModule.GameplayTagContainerMatchCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FGameplayTagContainerMatchCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EGameplayContainerMatchType)               MatchType                                                   OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bExactMatch                                                 OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x22, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.GameplayTagQueryConditionInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTagQueryConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTagContainer)                     TagContainer                                                OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/StateTreeModule.GameplayTagQueryCondition
/// Size: 0x0050 (0x000020 - 0x000070)
class FGameplayTagQueryCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(get<T>, {0x20, 72, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeObjectIsValidConditionInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FStateTreeObjectIsValidConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UObject*)                                  Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeObjectIsValidCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeObjectIsValidCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeObjectEqualsConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeObjectEqualsConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UObject*)                                  Left                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UObject*)                                  Right                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeObjectEqualsCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeObjectEqualsCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeObjectIsChildOfClassConditionInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeObjectIsChildOfClassConditionInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UObject*)                                  Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   Class                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeObjectIsChildOfClassCondition
/// Size: 0x0008 (0x000020 - 0x000028)
class FStateTreeObjectIsChildOfClassCondition : public FStateTreeConditionCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeEvaluatorCommonBase
/// Size: 0x0000 (0x000018 - 0x000018)
class FStateTreeEvaluatorCommonBase : public FStateTreeEvaluatorBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/StateTreeModule.StateTreeEvent
/// Size: 0x0020 (0x000000 - 0x000020)
class FStateTreeEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FInstancedStruct)                          Payload                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     Origin                                                      OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeEventQueue
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeEventQueue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FStateTreeEvent>)                   Events                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeInstanceStorage
/// Size: 0x0040 (0x000000 - 0x000040)
class FStateTreeInstanceStorage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FInstancedStructContainer)                 InstanceStructs                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<UObject*>)                          InstanceObjects                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FStateTreeEventQueue)                      EventQueue                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FStateTreeTransitionRequest>)       TransitionRequests                                          OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FInstancedStruct)                          InstanceStorage                                             OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeBindableStructDesc
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeBindableStructDesc : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UStruct*)                                  Struct                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(EStateTreeBindableStructSource)            DataSource                                                  OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyPathSegment
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreePropertyPathSegment : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ArrayIndex                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(UStruct*)                                  InstanceStruct                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyPath
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreePropertyPath : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FStateTreePropertyPathSegment>)     Segments                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeEditorPropertyPath
/// Size: 0x0020 (0x000000 - 0x000020)
class FStateTreeEditorPropertyPath : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     StructID                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Path                                                        OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyPathBinding
/// Size: 0x0028 (0x000000 - 0x000028)
class FStateTreePropertyPathBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FStateTreePropertyPath)                    SourcePropertyPath                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FStateTreePropertyPath)                    TargetPropertyPath                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FStateTreeIndex16)                         CompiledSourceStructIndex                                   OFFSET(get<T>, {0x20, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertySegment
/// Size: 0x000C (0x000000 - 0x00000C)
class FStateTreePropertySegment : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FStateTreeIndex16)                         ArrayIndex                                                  OFFSET(get<T>, {0x4, 2, 0, 0})
	SMember(FStateTreeIndex16)                         NextIndex                                                   OFFSET(get<T>, {0x6, 2, 0, 0})
	CMember(EStateTreePropertyAccessType)              Type                                                        OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyBinding
/// Size: 0x001C (0x000000 - 0x00001C)
class FStateTreePropertyBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FStateTreePropertySegment)                 SourcePath                                                  OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FStateTreePropertySegment)                 TargetPath                                                  OFFSET(get<T>, {0xC, 12, 0, 0})
	SMember(FStateTreeIndex16)                         SourceStructIndex                                           OFFSET(get<T>, {0x18, 2, 0, 0})
	CMember(EStateTreePropertyCopyType)                CopyType                                                    OFFSET(get<T>, {0x1A, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyIndirection
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateTreePropertyIndirection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FStateTreeIndex16)                         ArrayIndex                                                  OFFSET(get<T>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Offset                                                      OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	SMember(FStateTreeIndex16)                         NextIndex                                                   OFFSET(get<T>, {0x4, 2, 0, 0})
	CMember(EStateTreePropertyAccessType)              Type                                                        OFFSET(get<T>, {0x6, 1, 0, 0})
	CMember(UStruct*)                                  InstanceStruct                                              OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyCopy
/// Size: 0x0048 (0x000000 - 0x000048)
class FStateTreePropertyCopy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FStateTreePropertyIndirection)             SourceIndirection                                           OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FStateTreePropertyIndirection)             TargetIndirection                                           OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(int32_t)                                   CopySize                                                    OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FStateTreeIndex16)                         SourceStructIndex                                           OFFSET(get<T>, {0x44, 2, 0, 0})
	CMember(EStateTreePropertyCopyType)                Type                                                        OFFSET(get<T>, {0x46, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyCopyBatch
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateTreePropertyCopyBatch : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FStateTreeBindableStructDesc)              TargetStruct                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(uint16_t)                                  BindingsBegin                                               OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  BindingsEnd                                                 OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreePropertyBindings
/// Size: 0x0058 (0x000000 - 0x000058)
class FStateTreePropertyBindings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FStateTreeBindableStructDesc>)      SourceStructs                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FStateTreePropertyCopyBatch>)       CopyBatches                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FStateTreePropertyPathBinding>)     PropertyPathBindings                                        OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FStateTreePropertyCopy>)            PropertyCopies                                              OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FStateTreePropertyIndirection>)     PropertyIndirections                                        OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeReference
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateTreeReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UStateTree*)                               StateTree                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FInstancedPropertyBag)                     Parameters                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeTaskCommonBase
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeTaskCommonBase : public FStateTreeTaskBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/StateTreeModule.StateTreeRandomTimeDuration
/// Size: 0x0004 (0x000000 - 0x000004)
class FStateTreeRandomTimeDuration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint16_t)                                  Duration                                                    OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  RandomVariance                                              OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.CompactStateTransition
/// Size: 0x0010 (0x000000 - 0x000010)
class FCompactStateTransition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              EventTag                                                    OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(uint16_t)                                  ConditionsBegin                                             OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	SMember(FStateTreeStateHandle)                     State                                                       OFFSET(get<T>, {0x6, 2, 0, 0})
	SMember(FStateTreeRandomTimeDuration)              Delay                                                       OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(EStateTreeTransitionTrigger)               Trigger                                                     OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(EStateTreeTransitionPriority)              Priority                                                    OFFSET(get<T>, {0xD, 1, 0, 0})
	DMember(char)                                      ConditionsNum                                               OFFSET(get<char>, {0xE, 1, 0, 0})
	DMember(bool)                                      bTransitionEnabled                                          OFFSET(get<bool>, {0xF, 1, 1, 0})
};

/// Struct /Script/StateTreeModule.CompactStateTreeState
/// Size: 0x0020 (0x000000 - 0x000020)
class FCompactStateTreeState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FStateTreeStateHandle)                     LinkedState                                                 OFFSET(get<T>, {0x4, 2, 0, 0})
	SMember(FStateTreeStateHandle)                     Parent                                                      OFFSET(get<T>, {0x6, 2, 0, 0})
	DMember(uint16_t)                                  ChildrenBegin                                               OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(uint16_t)                                  ChildrenEnd                                                 OFFSET(get<uint16_t>, {0xA, 2, 0, 0})
	DMember(uint16_t)                                  EnterConditionsBegin                                        OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
	DMember(uint16_t)                                  TransitionsBegin                                            OFFSET(get<uint16_t>, {0xE, 2, 0, 0})
	DMember(uint16_t)                                  TasksBegin                                                  OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	SMember(FStateTreeIndex16)                         ParameterInstanceIndex                                      OFFSET(get<T>, {0x12, 2, 0, 0})
	SMember(FStateTreeIndex16)                         ParameterDataViewIndex                                      OFFSET(get<T>, {0x14, 2, 0, 0})
	DMember(char)                                      EnterConditionsNum                                          OFFSET(get<char>, {0x16, 1, 0, 0})
	DMember(char)                                      TransitionsNum                                              OFFSET(get<char>, {0x17, 1, 0, 0})
	DMember(char)                                      TasksNum                                                    OFFSET(get<char>, {0x18, 1, 0, 0})
	DMember(char)                                      TaskInstanceStructNum                                       OFFSET(get<char>, {0x19, 1, 0, 0})
	DMember(char)                                      TaskInstanceObjectNum                                       OFFSET(get<char>, {0x1A, 1, 0, 0})
	CMember(EStateTreeStateType)                       Type                                                        OFFSET(get<T>, {0x1B, 1, 0, 0})
	CMember(EStateTreeStateSelectionBehavior)          SelectionBehavior                                           OFFSET(get<T>, {0x1C, 1, 0, 0})
	DMember(bool)                                      bHasTransitionTasks                                         OFFSET(get<bool>, {0x1D, 1, 1, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1D, 1, 1, 1})
};

/// Struct /Script/StateTreeModule.CompactStateTreeParameters
/// Size: 0x0018 (0x000000 - 0x000018)
class FCompactStateTreeParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FStateTreeIndex16)                         BindingsBatch                                               OFFSET(get<T>, {0x0, 2, 0, 0})
	SMember(FInstancedPropertyBag)                     Parameters                                                  OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeStateIdToHandle
/// Size: 0x0014 (0x000000 - 0x000014)
class FStateTreeStateIdToHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FStateTreeStateHandle)                     Handle                                                      OFFSET(get<T>, {0x10, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeNodeIdToIndex
/// Size: 0x0014 (0x000000 - 0x000014)
class FStateTreeNodeIdToIndex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FStateTreeIndex16)                         Index                                                       OFFSET(get<T>, {0x10, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeTransitionIdToIndex
/// Size: 0x0014 (0x000000 - 0x000014)
class FStateTreeTransitionIdToIndex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FStateTreeIndex16)                         Index                                                       OFFSET(get<T>, {0x10, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeStructRef
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeStructRef : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/StateTreeModule.StateTreeStateLink
/// Size: 0x0002 (0x000000 - 0x000002)
class FStateTreeStateLink : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	SMember(FStateTreeStateHandle)                     StateHandle                                                 OFFSET(get<T>, {0x0, 2, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeDebugTextTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FStateTreeDebugTextTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(AActor*)                                   ReferenceActor                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeDebugTextTask
/// Size: 0x0038 (0x000020 - 0x000058)
class FStateTreeDebugTextTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   Text                                                        OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FColor)                                    TextColor                                                   OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(float)                                     FontScale                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector)                                   Offset                                                      OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeDelayTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStateTreeDelayTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RandomDeviation                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bRunForever                                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/StateTreeModule.StateTreeDelayTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FStateTreeDelayTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Enum /Script/StateTreeModule.EStateTreeBreakpointType
/// Size: 0x05
enum EStateTreeBreakpointType : uint8_t
{
	EStateTreeBreakpointType__Unset0                                                 = 0,
	EStateTreeBreakpointType__OnEnter1                                               = 1,
	EStateTreeBreakpointType__OnExit2                                                = 2,
	EStateTreeBreakpointType__OnTransition3                                          = 3,
	EStateTreeBreakpointType__EStateTreeBreakpointType_MAX4                          = 4
};

/// Enum /Script/StateTreeModule.EStateTreeUpdatePhase
/// Size: 0x16
enum EStateTreeUpdatePhase : uint8_t
{
	EStateTreeUpdatePhase__Unset0                                                    = 0,
	EStateTreeUpdatePhase__StartTree1                                                = 1,
	EStateTreeUpdatePhase__StopTree2                                                 = 2,
	EStateTreeUpdatePhase__StartGlobalTasks3                                         = 3,
	EStateTreeUpdatePhase__StopGlobalTasks4                                          = 4,
	EStateTreeUpdatePhase__TickStateTree5                                            = 5,
	EStateTreeUpdatePhase__ApplyTransitions6                                         = 6,
	EStateTreeUpdatePhase__TriggerTransitions7                                       = 7,
	EStateTreeUpdatePhase__TickingGlobalTasks8                                       = 8,
	EStateTreeUpdatePhase__TickingTasks9                                             = 9,
	EStateTreeUpdatePhase__TransitionConditions10                                    = 10,
	EStateTreeUpdatePhase__StateSelection11                                          = 11,
	EStateTreeUpdatePhase__EnterConditions12                                         = 12,
	EStateTreeUpdatePhase__EnterStates13                                             = 13,
	EStateTreeUpdatePhase__ExitStates14                                              = 14,
	EStateTreeUpdatePhase__EStateTreeUpdatePhase_MAX15                               = 15
};

/// Enum /Script/StateTreeModule.EStateTreeRunStatus
/// Size: 0x06
enum EStateTreeRunStatus : uint8_t
{
	EStateTreeRunStatus__Running0                                                    = 0,
	EStateTreeRunStatus__Failed1                                                     = 1,
	EStateTreeRunStatus__Succeeded2                                                  = 2,
	EStateTreeRunStatus__Stopped3                                                    = 3,
	EStateTreeRunStatus__Unset4                                                      = 4,
	EStateTreeRunStatus__EStateTreeRunStatus_MAX5                                    = 5
};

/// Enum /Script/StateTreeModule.EStateTreeStateChangeType
/// Size: 0x04
enum EStateTreeStateChangeType : uint8_t
{
	EStateTreeStateChangeType__None0                                                 = 0,
	EStateTreeStateChangeType__Changed1                                              = 1,
	EStateTreeStateChangeType__Sustained2                                            = 2,
	EStateTreeStateChangeType__EStateTreeStateChangeType_MAX3                        = 3
};

/// Enum /Script/StateTreeModule.EStateTreeConditionEvaluationMode
/// Size: 0x04
enum EStateTreeConditionEvaluationMode : uint8_t
{
	EStateTreeConditionEvaluationMode__Evaluated0                                    = 0,
	EStateTreeConditionEvaluationMode__ForcedTrue1                                   = 1,
	EStateTreeConditionEvaluationMode__ForcedFalse2                                  = 2,
	EStateTreeConditionEvaluationMode__EStateTreeConditionEvaluationMode_MAX3        = 3
};

/// Enum /Script/StateTreeModule.EStateTreeTransitionSourceType
/// Size: 0x05
enum EStateTreeTransitionSourceType : uint8_t
{
	EStateTreeTransitionSourceType__Unset0                                           = 0,
	EStateTreeTransitionSourceType__Asset1                                           = 1,
	EStateTreeTransitionSourceType__ExternalRequest2                                 = 2,
	EStateTreeTransitionSourceType__Internal3                                        = 3,
	EStateTreeTransitionSourceType__EStateTreeTransitionSourceType_MAX4              = 4
};

/// Enum /Script/StateTreeModule.EStateTreeLinkerStatus
/// Size: 0x03
enum EStateTreeLinkerStatus : uint8_t
{
	EStateTreeLinkerStatus__Succeeded0                                               = 0,
	EStateTreeLinkerStatus__Failed1                                                  = 1,
	EStateTreeLinkerStatus__EStateTreeLinkerStatus_MAX2                              = 2
};

/// Enum /Script/StateTreeModule.EStateTreeTraceEventType
/// Size: 0x19
enum EStateTreeTraceEventType : uint8_t
{
	EStateTreeTraceEventType__Unset0                                                 = 0,
	EStateTreeTraceEventType__OnEntering1                                            = 1,
	EStateTreeTraceEventType__OnEntered2                                             = 2,
	EStateTreeTraceEventType__OnExiting3                                             = 3,
	EStateTreeTraceEventType__OnExited4                                              = 4,
	EStateTreeTraceEventType__Push5                                                  = 5,
	EStateTreeTraceEventType__Pop6                                                   = 6,
	EStateTreeTraceEventType__OnStateSelected7                                       = 7,
	EStateTreeTraceEventType__OnStateCompleted8                                      = 8,
	EStateTreeTraceEventType__OnTicking9                                             = 9,
	EStateTreeTraceEventType__OnTaskCompleted10                                      = 10,
	EStateTreeTraceEventType__OnTicked11                                             = 11,
	EStateTreeTraceEventType__Passed12                                               = 12,
	EStateTreeTraceEventType__Failed13                                               = 13,
	EStateTreeTraceEventType__OnEvaluating14                                         = 14,
	EStateTreeTraceEventType__OnTransition15                                         = 15,
	EStateTreeTraceEventType__OnTreeStarted16                                        = 16,
	EStateTreeTraceEventType__OnTreeStopped17                                        = 17,
	EStateTreeTraceEventType__EStateTreeTraceEventType_MAX18                         = 18
};

/// Enum /Script/StateTreeModule.EStateTreeBlueprintPropertyCategory
/// Size: 0x06
enum EStateTreeBlueprintPropertyCategory : uint8_t
{
	EStateTreeBlueprintPropertyCategory__NotSet0                                     = 0,
	EStateTreeBlueprintPropertyCategory__Input1                                      = 1,
	EStateTreeBlueprintPropertyCategory__Parameter2                                  = 2,
	EStateTreeBlueprintPropertyCategory__Output3                                     = 3,
	EStateTreeBlueprintPropertyCategory__ContextObject4                              = 4,
	EStateTreeBlueprintPropertyCategory__EStateTreeBlueprintPropertyCategory_MAX5    = 5
};

/// Enum /Script/StateTreeModule.EStateTreeLoopEvents
/// Size: 0x03
enum EStateTreeLoopEvents : uint8_t
{
	EStateTreeLoopEvents__Next0                                                      = 0,
	EStateTreeLoopEvents__Break1                                                     = 1,
	EStateTreeLoopEvents__EStateTreeLoopEvents_MAX2                                  = 2
};

/// Enum /Script/StateTreeModule.EStateTreeBindableStructSource
/// Size: 0x08
enum EStateTreeBindableStructSource : uint8_t
{
	EStateTreeBindableStructSource__Context0                                         = 0,
	EStateTreeBindableStructSource__Parameter1                                       = 1,
	EStateTreeBindableStructSource__Evaluator2                                       = 2,
	EStateTreeBindableStructSource__GlobalTask3                                      = 3,
	EStateTreeBindableStructSource__State4                                           = 4,
	EStateTreeBindableStructSource__Task5                                            = 5,
	EStateTreeBindableStructSource__Condition6                                       = 6,
	EStateTreeBindableStructSource__EStateTreeBindableStructSource_MAX7              = 7
};

/// Enum /Script/StateTreeModule.EStateTreePropertyAccessType
/// Size: 0x08
enum EStateTreePropertyAccessType : uint8_t
{
	EStateTreePropertyAccessType__Offset0                                            = 0,
	EStateTreePropertyAccessType__Object1                                            = 1,
	EStateTreePropertyAccessType__WeakObject2                                        = 2,
	EStateTreePropertyAccessType__SoftObject3                                        = 3,
	EStateTreePropertyAccessType__ObjectInstance4                                    = 4,
	EStateTreePropertyAccessType__StructInstance5                                    = 5,
	EStateTreePropertyAccessType__IndexArray6                                        = 6,
	EStateTreePropertyAccessType__EStateTreePropertyAccessType_MAX7                  = 7
};

/// Enum /Script/StateTreeModule.EStateTreePropertyCopyType
/// Size: 0x33
enum EStateTreePropertyCopyType : uint8_t
{
	EStateTreePropertyCopyType__None0                                                = 0,
	EStateTreePropertyCopyType__CopyPlain1                                           = 1,
	EStateTreePropertyCopyType__CopyComplex2                                         = 2,
	EStateTreePropertyCopyType__CopyBool3                                            = 3,
	EStateTreePropertyCopyType__CopyStruct4                                          = 4,
	EStateTreePropertyCopyType__CopyObject5                                          = 5,
	EStateTreePropertyCopyType__CopyName6                                            = 6,
	EStateTreePropertyCopyType__CopyFixedArray7                                      = 7,
	EStateTreePropertyCopyType__StructReference8                                     = 8,
	EStateTreePropertyCopyType__PromoteBoolToByte9                                   = 9,
	EStateTreePropertyCopyType__PromoteBoolToInt3210                                 = 10,
	EStateTreePropertyCopyType__PromoteBoolToUInt3211                                = 11,
	EStateTreePropertyCopyType__PromoteBoolToInt6412                                 = 12,
	EStateTreePropertyCopyType__PromoteBoolToFloat13                                 = 13,
	EStateTreePropertyCopyType__PromoteBoolToDouble14                                = 14,
	EStateTreePropertyCopyType__PromoteByteToInt3215                                 = 15,
	EStateTreePropertyCopyType__PromoteByteToUInt3216                                = 16,
	EStateTreePropertyCopyType__PromoteByteToInt6417                                 = 17,
	EStateTreePropertyCopyType__PromoteByteToFloat18                                 = 18,
	EStateTreePropertyCopyType__PromoteByteToDouble19                                = 19,
	EStateTreePropertyCopyType__PromoteInt32ToInt6420                                = 20,
	EStateTreePropertyCopyType__PromoteInt32ToFloat21                                = 21,
	EStateTreePropertyCopyType__PromoteInt32ToDouble22                               = 22,
	EStateTreePropertyCopyType__PromoteUInt32ToInt6423                               = 23,
	EStateTreePropertyCopyType__PromoteUInt32ToFloat24                               = 24,
	EStateTreePropertyCopyType__PromoteUInt32ToDouble25                              = 25,
	EStateTreePropertyCopyType__PromoteFloatToInt3226                                = 26,
	EStateTreePropertyCopyType__PromoteFloatToInt6427                                = 27,
	EStateTreePropertyCopyType__PromoteFloatToDouble28                               = 28,
	EStateTreePropertyCopyType__DemoteDoubleToInt3229                                = 29,
	EStateTreePropertyCopyType__DemoteDoubleToInt6430                                = 30,
	EStateTreePropertyCopyType__DemoteDoubleToFloat31                                = 31,
	EStateTreePropertyCopyType__EStateTreePropertyCopyType_MAX32                     = 32
};

/// Enum /Script/StateTreeModule.EStateTreeTransitionType
/// Size: 0x07
enum EStateTreeTransitionType : uint8_t
{
	EStateTreeTransitionType__None0                                                  = 0,
	EStateTreeTransitionType__Succeeded1                                             = 1,
	EStateTreeTransitionType__Failed2                                                = 2,
	EStateTreeTransitionType__GotoState3                                             = 3,
	EStateTreeTransitionType__NextState4                                             = 4,
	EStateTreeTransitionType__NotSet5                                                = 5,
	EStateTreeTransitionType__EStateTreeTransitionType_MAX6                          = 6
};

/// Enum /Script/StateTreeModule.EStateTreeConditionOperand
/// Size: 0x04
enum EStateTreeConditionOperand : uint8_t
{
	EStateTreeConditionOperand__Copy0                                                = 0,
	EStateTreeConditionOperand__And1                                                 = 1,
	EStateTreeConditionOperand__Or2                                                  = 2,
	EStateTreeConditionOperand__EStateTreeConditionOperand_MAX3                      = 3
};

/// Enum /Script/StateTreeModule.EStateTreeStateType
/// Size: 0x05
enum EStateTreeStateType : uint8_t
{
	EStateTreeStateType__State0                                                      = 0,
	EStateTreeStateType__Group1                                                      = 1,
	EStateTreeStateType__Linked2                                                     = 2,
	EStateTreeStateType__Subtree3                                                    = 3,
	EStateTreeStateType__EStateTreeStateType_MAX4                                    = 4
};

/// Enum /Script/StateTreeModule.EStateTreeStateSelectionBehavior
/// Size: 0x05
enum EStateTreeStateSelectionBehavior : uint8_t
{
	EStateTreeStateSelectionBehavior__None0                                          = 0,
	EStateTreeStateSelectionBehavior__TryEnterState1                                 = 1,
	EStateTreeStateSelectionBehavior__TrySelectChildrenInOrder2                      = 2,
	EStateTreeStateSelectionBehavior__TryFollowTransitions3                          = 3,
	EStateTreeStateSelectionBehavior__EStateTreeStateSelectionBehavior_MAX4          = 4
};

/// Enum /Script/StateTreeModule.EStateTreeTransitionTrigger
/// Size: 0x07
enum EStateTreeTransitionTrigger : uint8_t
{
	EStateTreeTransitionTrigger__None0                                               = 0,
	EStateTreeTransitionTrigger__OnStateCompleted1                                   = 3,
	EStateTreeTransitionTrigger__OnStateSucceeded2                                   = 1,
	EStateTreeTransitionTrigger__OnStateFailed3                                      = 2,
	EStateTreeTransitionTrigger__OnTick4                                             = 4,
	EStateTreeTransitionTrigger__OnEvent5                                            = 8,
	EStateTreeTransitionTrigger__MAX6                                                = 9
};

/// Enum /Script/StateTreeModule.EStateTreeTransitionPriority
/// Size: 0x06
enum EStateTreeTransitionPriority : uint8_t
{
	EStateTreeTransitionPriority__None0                                              = 0,
	EStateTreeTransitionPriority__Normal1                                            = 1,
	EStateTreeTransitionPriority__Medium2                                            = 2,
	EStateTreeTransitionPriority__High3                                              = 3,
	EStateTreeTransitionPriority__Critical4                                          = 4,
	EStateTreeTransitionPriority__EStateTreeTransitionPriority_MAX5                  = 5
};

/// Enum /Script/StateTreeModule.EStateTreeExternalDataRequirement
/// Size: 0x03
enum EStateTreeExternalDataRequirement : uint8_t
{
	EStateTreeExternalDataRequirement__Required0                                     = 0,
	EStateTreeExternalDataRequirement__Optional1                                     = 1,
	EStateTreeExternalDataRequirement__EStateTreeExternalDataRequirement_MAX2        = 2
};

/// Enum /Script/StateTreeModule.EStateTreePropertyUsage
/// Size: 0x06
enum EStateTreePropertyUsage : uint8_t
{
	EStateTreePropertyUsage__Invalid0                                                = 0,
	EStateTreePropertyUsage__Context1                                                = 1,
	EStateTreePropertyUsage__Input2                                                  = 2,
	EStateTreePropertyUsage__Parameter3                                              = 3,
	EStateTreePropertyUsage__Output4                                                 = 4,
	EStateTreePropertyUsage__EStateTreePropertyUsage_MAX5                            = 5
};

