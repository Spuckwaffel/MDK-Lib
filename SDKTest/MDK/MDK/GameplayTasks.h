
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GameplayTasks.GameplayTasksComponent
/// Size: 0x0080 (0x0000F0 - 0x000170)
class UGameplayTasksComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	DMember(bool)                                      bIsNetDirty                                                 OFFSET(get<bool>, {0xF8, 1, 0, 0})
	CMember(TArray<UGameplayTask*>)                    SimulatedTasks                                              OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<UGameplayTask*>)                    TaskPriorityQueue                                           OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(TArray<UGameplayTask*>)                    TickingTasks                                                OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TArray<UGameplayTask*>)                    KnownTasks                                                  OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnClaimedResourcesChange                                    OFFSET(get<T>, {0x158, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks
	// void OnRep_SimulatedTasks();                                                                                             // [0x1eb8ba0] Final|Native|Public  
	// Function /Script/GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask
	// EGameplayTaskRunResult K2_RunGameplayTask(TScriptInterface<Class> TaskOwner, UGameplayTask* Task, unsigned char Priority, TArray<UClass*> AdditionalRequiredResources, TArray<UClass*> AdditionalClaimedResources); // [0x1eb8960] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask
/// Size: 0x0040 (0x000028 - 0x000068)
class UGameplayTask : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     InstanceName                                                OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	CMember(ETaskResourceOverlapPolicy)                ResourceOverlapPolicy                                       OFFSET(get<T>, {0x3A, 1, 0, 0})
	CMember(UGameplayTask*)                            ChildTask                                                   OFFSET(get<T>, {0x60, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask.ReadyForActivation
	// void ReadyForActivation();                                                                                               // [0x1eb8bc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature
	// void GenericGameplayTaskDelegate__DelegateSignature();                                                                   // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayTasks.GameplayTask.EndTask
	// void EndTask();                                                                                                          // [0x1eb8870] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_ClaimResource
/// Size: 0x0000 (0x000068 - 0x000068)
class UGameplayTask_ClaimResource : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResources
	// UGameplayTask_ClaimResource* ClaimResources(TScriptInterface<Class> InTaskOwner, TArray<UClass*> ResourceClasses, unsigned char Priority, FName TaskInstanceName); // [0x1eb86d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_ClaimResource.ClaimResource
	// UGameplayTask_ClaimResource* ClaimResource(TScriptInterface<Class> InTaskOwner, UClass* ResourceClass, unsigned char Priority, FName TaskInstanceName); // [0x1eb8580] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_SpawnActor
/// Size: 0x0040 (0x000068 - 0x0000A8)
class UGameplayTask_SpawnActor : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UMulticastDelegate)                        Success                                                     OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(UMulticastDelegate)                        DidNotSpawn                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(UClass*)                                   ClassToSpawn                                                OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.SpawnActor
	// UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<Class> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, UClass* Class, bool bSpawnOnlyOnAuthority); // [0x1eb8be0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor
	// void FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor);                                             // [0x1eb8890] Native|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor
	// bool BeginSpawningActor(UObject* WorldContextObject, AActor*& SpawnedActor);                                             // [0x1eb84a0] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayTasks.GameplayTask_TimeLimitedExecution
/// Size: 0x0030 (0x000068 - 0x000098)
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UMulticastDelegate)                        OnFinished                                                  OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnTimeExpired                                               OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayTasks.GameplayTask_WaitDelay
/// Size: 0x0018 (0x000068 - 0x000080)
class UGameplayTask_WaitDelay : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UMulticastDelegate)                        OnFinish                                                    OFFSET(get<T>, {0x68, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay
	// UGameplayTask_WaitDelay* TaskWaitDelay(TScriptInterface<Class> TaskOwner, float Time, unsigned char Priority);           // [0x1eb8d90] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature
	// void TaskDelayDelegate__DelegateSignature();                                                                             // [0x154a140] MulticastDelegate|Public|Delegate 
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

/// Struct /Script/GameplayTasks.GameplayResourceSet
/// Size: 0x0002 (0x000000 - 0x000002)
class FGameplayResourceSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
};

/// Enum /Script/GameplayTasks.ETaskResourceOverlapPolicy
/// Size: 0x03
enum ETaskResourceOverlapPolicy : uint8_t
{
	ETaskResourceOverlapPolicy__StartOnTop0                                          = 0,
	ETaskResourceOverlapPolicy__StartAtEnd1                                          = 1,
	ETaskResourceOverlapPolicy__ETaskResourceOverlapPolicy_MAX2                      = 2
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

