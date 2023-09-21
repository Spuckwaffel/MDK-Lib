
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GameplayTasks.GameplayTask
/// Size: 0x0038 (0x000028 - 0x000060)
class UGameplayTask : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     InstanceName                                                OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(ETaskResourceOverlapPolicy)                ResourceOverlapPolicy                                       OFFSET(get<T>, {0x36, 1, 0, 0})
	CMember(UGameplayTask*)                            ChildTask                                                   OFFSET(get<T>, {0x58, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask.ReadyForActivation
	// void ReadyForActivation();                                                                                               // [0x637ea30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	// void GenericGameplayTaskDelegate__DelegateSignature();                                                                   // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayTasks.GameplayTask.EndTask
	// void EndTask();                                                                                                          // [0x637e30c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTaskOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayTaskOwnerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayTasks.GameplayTaskResource
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameplayTaskResource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   ManualResourceID                                            OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int8_t)                                    AutoResourceID                                              OFFSET(get<int8_t>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bManuallySetID                                              OFFSET(get<bool>, {0x30, 1, 1, 0})
};

/// Class /Script/GameplayTasks.GameplayTasksComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UGameplayTasksComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<UGameplayTask*>)                    TaskPriorityQueue                                           OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<UGameplayTask*>)                    TickingTasks                                                OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<UGameplayTask*>)                    KnownTasks                                                  OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnClaimedResourcesChange                                    OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<UGameplayTask*>)                    SimulatedTasks                                              OFFSET(get<T>, {0x108, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	// void OnRep_SimulatedTasks(TArray<UGameplayTask*>& PreviousSimulatedTasks);                                               // [0x19f9ef4] Final|RequiredAPI|Native|Public|HasOutParms 
	// Function /Script/GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	// EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<Class> TaskOwner, UGameplayTask* Task, char Priority, TArray<UClass*> AdditionalRequiredResources, TArray<UClass*> AdditionalClaimedResources); // [0x637e3e8] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_ClaimResource
/// Size: 0x0000 (0x000060 - 0x000060)
class UGameplayTask_ClaimResource : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/GameplayTasks.GameplayTask_SpawnActor
/// Size: 0x0058 (0x000060 - 0x0000B8)
class UGameplayTask_SpawnActor : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  Success                                                     OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DidNotSpawn                                                 OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(UClass*)                                   ClassToSpawn                                                OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	// UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<Class> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, UClass* Class, bool bSpawnOnlyOnAuthority); // [0x637ea44] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	// void FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor);                                             // [0x637e320] Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	// bool BeginSpawningActor(UObject* WorldContextObject, AActor*& SpawnedActor);                                             // [0x637d898] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
/// Size: 0x0038 (0x000060 - 0x000098)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTimeExpired                                               OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/GameplayTasks.GameplayTask_WaitDelay
/// Size: 0x0020 (0x000060 - 0x000080)
class UGameplayTask_WaitDelay : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    OFFSET(get<T>, {0x60, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	// UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<Class> TaskOwner, float Time, char Priority);                    // [0x637f010] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	// void TaskDelayDelegate__DelegateSignature();                                                                             // [0x1ebf994] MulticastDelegate|Public|Delegate 
};

/// Struct /Script/GameplayTasks.GameplayResourceSet
/// Size: 0x0002 (0x000000 - 0x000002)
class FGameplayResourceSet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
};

/// Enum /Script/GameplayTasks.ETaskResourceOverlapPolicy
/// Size: 0x05
enum ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop0                                          = 0,
	ETaskResourceOverlapPolicy__StartAtEnd1                                          = 1,
	ETaskResourceOverlapPolicy__RequestCancelAndStartOnTop2                          = 2,
	ETaskResourceOverlapPolicy__RequestCancelAndStartAtEnd3                          = 3,
	ETaskResourceOverlapPolicy__ETaskResourceOverlapPolicy_MAX4                      = 4
};

/// Enum /Script/GameplayTasks.EGameplayTaskState
/// Size: 0x06
enum EGameplayTaskState : uint8_t
{
	EGameplayTaskState__Uninitialized0                                               = 0,
	EGameplayTaskState__AwaitingActivation1                                          = 1,
	EGameplayTaskState__Paused2                                                      = 2,
	EGameplayTaskState__Active3                                                      = 3,
	EGameplayTaskState__Finished4                                                    = 4,
	EGameplayTaskState__EGameplayTaskState_MAX5                                      = 5
};

/// Enum /Script/GameplayTasks.EGameplayTaskRunResult
/// Size: 0x06
enum EGameplayTaskRunResult : uint8_t
{
	EGameplayTaskRunResult__Error0                                                   = 0,
	EGameplayTaskRunResult__Failed1                                                  = 1,
	EGameplayTaskRunResult__Success_Paused2                                          = 2,
	EGameplayTaskRunResult__Success_Active3                                          = 3,
	EGameplayTaskRunResult__Success_Finished4                                        = 4,
	EGameplayTaskRunResult__EGameplayTaskRunResult_MAX5                              = 5
};

