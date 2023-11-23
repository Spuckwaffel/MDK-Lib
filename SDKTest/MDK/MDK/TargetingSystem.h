
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: GameplayTasks

/// Class /Script/TargetingSystem.AbilityTask_PerformTargeting
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UAbilityTask_PerformTargeting : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  OnTargetReady                                               OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/TargetingSystem.AbilityTask_PerformTargeting.PerformTargetingRequest
	// UAbilityTask_PerformTargeting* PerformTargetingRequest(UGameplayAbility* OwningAbility, UTargetingPreset* InTargetingPreset, bool bAllowAsync); // [0x6c57c14] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TargetingSystem.AbilityTask_PerformTargeting.PerformFilteringRequest
	// UAbilityTask_PerformTargeting* PerformFilteringRequest(UGameplayAbility* OwningAbility, UTargetingPreset* TargetingPreset, TArray<AActor*> InTargets, bool bAllowAsync); // [0x6c57788] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/TargetingSystem.AsyncAction_PerformTargeting
/// Size: 0x0038 (0x000030 - 0x000068)
class UAsyncAction_PerformTargeting : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  Targeted                                                    OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(UTargetingPreset*)                         TargetingPreset                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   WeakSourceActor                                             OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<AActor*>)                           InitialTargets                                              OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FTargetingRequestHandle)                   TargetingHandle                                             OFFSET(getStruct<T>, {0x60, 4, 0, 0})
	DMember(bool)                                      bUseAsyncTargeting                                          OFFSET(get<bool>, {0x64, 1, 1, 0})


	/// Functions
	// Function /Script/TargetingSystem.AsyncAction_PerformTargeting.PerformTargetingRequest
	// UAsyncAction_PerformTargeting* PerformTargetingRequest(AActor* SourceActor, UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting); // [0x6c57d44] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TargetingSystem.AsyncAction_PerformTargeting.PerformFilteringRequest
	// UAsyncAction_PerformTargeting* PerformFilteringRequest(AActor* SourceActor, UTargetingPreset* TargetingPreset, bool bUseAsyncTargeting, TArray<AActor*> InTargets); // [0x6c57950] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/TargetingSystem.AsyncAction_PerformTargeting.GetTargetingHandle
	// FTargetingRequestHandle GetTargetingHandle();                                                                            // [0x6c56c48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/TargetingSystem.TargetingTask
/// Size: 0x0000 (0x000028 - 0x000028)
class UTargetingTask : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TargetingSystem.TargetingFilterTask_BasicFilterTemplate
/// Size: 0x0000 (0x000028 - 0x000028)
class UTargetingFilterTask_BasicFilterTemplate : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TargetingSystem.SimpleTargetingFilterTask
/// Size: 0x0000 (0x000028 - 0x000028)
class USimpleTargetingFilterTask : public UTargetingFilterTask_BasicFilterTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TargetingSystem.SimpleTargetingSelectionTask
/// Size: 0x0000 (0x000028 - 0x000028)
class USimpleTargetingSelectionTask : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TargetingSystem.TargetingSortTask_Base
/// Size: 0x0008 (0x000028 - 0x000030)
class UTargetingSortTask_Base : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bAscending                                                  OFFSET(get<bool>, {0x28, 1, 1, 0})
};

/// Class /Script/TargetingSystem.SimpleTargetingSortTask
/// Size: 0x0000 (0x000030 - 0x000030)
class USimpleTargetingSortTask : public UTargetingSortTask_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/TargetingSystem.TargetingFilterTask_ActorClass
/// Size: 0x0020 (0x000028 - 0x000048)
class UTargetingFilterTask_ActorClass : public UTargetingFilterTask_BasicFilterTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<UClass*>)                           RequiredActorClassFilters                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UClass*>)                           IgnoredActorClassFilters                                    OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/TargetingSystem.TargetingPreset
/// Size: 0x0010 (0x000030 - 0x000040)
class UTargetingPreset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTargetingTaskSet)                         TargetingTaskSet                                            OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Class /Script/TargetingSystem.TargetingSelectionTask_AOE
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UTargetingSelectionTask_AOE : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(ETargetingAOEShape)                        ShapeType                                                   OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannel                                            OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FCollisionProfileName)                     CollisionProfileName                                        OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	CMember(TArray<TEnumAsByte>)                       CollisionObjectTypes                                        OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FVector)                                   DefaultSourceOffset                                         OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bUseRelativeOffset                                          OFFSET(get<bool>, {0x58, 1, 1, 0})
	DMember(bool)                                      bIgnoreSourceActor                                          OFFSET(get<bool>, {0x58, 1, 1, 1})
	DMember(bool)                                      bIgnoreInstigatorActor                                      OFFSET(get<bool>, {0x58, 1, 1, 2})
	SMember(FVector)                                   HalfExtent                                                  OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FScalableFloat)                            Radius                                                      OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            HalfHeight                                                  OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FName)                                     ComponentTag                                                OFFSET(getStruct<T>, {0xC8, 4, 0, 0})


	/// Functions
	// Function /Script/TargetingSystem.TargetingSelectionTask_AOE.GetSourceRotation
	// FQuat GetSourceRotation(FTargetingRequestHandle& TargetingHandle);                                                       // [0x6c56af8] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_AOE.GetSourceOffset
	// FVector GetSourceOffset(FTargetingRequestHandle& TargetingHandle);                                                       // [0x6c56998] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_AOE.GetSourceLocation
	// FVector GetSourceLocation(FTargetingRequestHandle& TargetingHandle);                                                     // [0x6c56838] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
};

/// Class /Script/TargetingSystem.TargetingSelectionTask_SourceActor
/// Size: 0x0000 (0x000028 - 0x000028)
class UTargetingSelectionTask_SourceActor : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TargetingSystem.TargetingSelectionTask_Trace
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UTargetingSelectionTask_Trace : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(ETargetingTraceType)                       TraceType                                                   OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              TraceChannel                                                OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FCollisionProfileName)                     CollisionProfileName                                        OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	SMember(FScalableFloat)                            DefaultSweptTraceRadius                                     OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            DefaultTraceLength                                          OFFSET(getStruct<T>, {0x58, 40, 0, 0})
	SMember(FVector)                                   DefaultSourceOffset                                         OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	SMember(FVector)                                   ExplicitTraceDirection                                      OFFSET(getStruct<T>, {0x98, 24, 0, 0})
	DMember(bool)                                      bComplexTrace                                               OFFSET(get<bool>, {0xB0, 1, 1, 0})
	DMember(bool)                                      bIgnoreSourceActor                                          OFFSET(get<bool>, {0xB0, 1, 1, 1})
	DMember(bool)                                      bIgnoreInstigatorActor                                      OFFSET(get<bool>, {0xB0, 1, 1, 2})


	/// Functions
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetTraceLength
	// float GetTraceLength(FTargetingRequestHandle& TargetingHandle);                                                          // [0x6c574d0] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetTraceDirection
	// FVector GetTraceDirection(FTargetingRequestHandle& TargetingHandle);                                                     // [0x6c57420] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSweptTraceRadius
	// float GetSweptTraceRadius(FTargetingRequestHandle& TargetingHandle);                                                     // [0x6c56ba8] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSourceOffset
	// FVector GetSourceOffset(FTargetingRequestHandle& TargetingHandle);                                                       // [0x6c56a48] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetSourceLocation
	// FVector GetSourceLocation(FTargetingRequestHandle& TargetingHandle);                                                     // [0x6c568e8] Native|Event|Protected|HasOutParms|HasDefaults|BlueprintEvent|Const 
	// Function /Script/TargetingSystem.TargetingSelectionTask_Trace.GetAdditionalActorsToIgnore
	// void GetAdditionalActorsToIgnore(FTargetingRequestHandle& TargetingHandle, TArray<AActor*>& OutAdditionalActorsToIgnore); // [0x6c566fc] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/TargetingSystem.TargetingSubsystem
/// Size: 0x0048 (0x000030 - 0x000078)
class UTargetingSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FTargetingRequestHandle>)           AsyncTargetingRequests                                      OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/TargetingSystem.TargetingSubsystem.StartAsyncTargetingRequest
	// FTargetingRequestHandle StartAsyncTargetingRequest(UTargetingPreset* TargetingPreset, FTargetingSourceContext& InSourceContext, FDelegateProperty CompletionDynamicDelegate); // [0x6c58010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TargetingSystem.TargetingSubsystem.RemoveAsyncTargetingRequestWithHandle
	// void RemoveAsyncTargetingRequestWithHandle(FTargetingRequestHandle& TargetingHandle);                                    // [0x6c57f84] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TargetingSystem.TargetingSubsystem.OverrideCollisionQueryTaskData
	// void OverrideCollisionQueryTaskData(FTargetingRequestHandle TargetingHandle, FCollisionQueryTaskData& CollisionQueryDataOverride); // [0x6c57570] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/TargetingSystem.TargetingSubsystem.GetTargetingSourceContext
	// FTargetingSourceContext GetTargetingSourceContext(FTargetingRequestHandle TargetingHandle);                              // [0x6c5723c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TargetingSystem.TargetingSubsystem.GetTargetingResultsActors
	// void GetTargetingResultsActors(FTargetingRequestHandle TargetingHandle, TArray<AActor*>& Targets);                       // [0x6c56ffc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TargetingSystem.TargetingSubsystem.GetTargetingResults
	// void GetTargetingResults(FTargetingRequestHandle TargetingHandle, TArray<FHitResult>& OutTargets);                       // [0x6c56c5c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TargetingSystem.TargetingSubsystem.ExecuteTargetingRequest
	// void ExecuteTargetingRequest(UTargetingPreset* TargetingPreset, FTargetingSourceContext& InSourceContext, FDelegateProperty CompletionDynamicDelegate); // [0x6c56414] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/TargetingSystem.TargetingFilterTask_SortByDistance
/// Size: 0x0000 (0x000030 - 0x000030)
class UTargetingFilterTask_SortByDistance : public UTargetingSortTask_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/TargetingSystem.TargetingRequestHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FTargetingRequestHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/TargetingSystem.CollisionQueryTaskData
/// Size: 0x0010 (0x000000 - 0x000010)
class FCollisionQueryTaskData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<AActor*>)                           IgnoredActors                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingTaskSet
/// Size: 0x0010 (0x000000 - 0x000010)
class FTargetingTaskSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UTargetingTask*>)                   Tasks                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingDefaultResultData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FTargetingDefaultResultData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FHitResult)                                HitResult                                                   OFFSET(getStruct<T>, {0x0, 232, 0, 0})
	DMember(float)                                     Score                                                       OFFSET(get<float>, {0xE8, 4, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingDefaultResultsSet
/// Size: 0x0010 (0x000000 - 0x000010)
class FTargetingDefaultResultsSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTargetingDefaultResultData>)       TargetResults                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingSourceContext
/// Size: 0x0038 (0x000000 - 0x000038)
class FTargetingSourceContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(AActor*)                                   SourceActor                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AActor*)                                   InstigatorActor                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   SourceLocation                                              OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FName)                                     SourceSocketName                                            OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(UObject*)                                  SourceObject                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingRequestData
/// Size: 0x0030 (0x000000 - 0x000030)
class FTargetingRequestData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FDelegateProperty)                         TargetingRequestDynamicDelegate                             OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingAsyncTaskData
/// Size: 0x0008 (0x000000 - 0x000008)
class FTargetingAsyncTaskData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TargetingSystem.TargetingImmediateTaskData
/// Size: 0x0001 (0x000000 - 0x000001)
class FTargetingImmediateTaskData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TargetingSystem.TargetingDebugData
/// Size: 0x0001 (0x000000 - 0x000001)
class FTargetingDebugData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/TargetingSystem.ETargetingAOEShape
/// Size: 0x06
enum ETargetingAOEShape : uint8_t
{
	ETargetingAOEShape__Box0                                                         = 0,
	ETargetingAOEShape__Cylinder1                                                    = 1,
	ETargetingAOEShape__Sphere2                                                      = 2,
	ETargetingAOEShape__Capsule3                                                     = 3,
	ETargetingAOEShape__SourceComponent4                                             = 4,
	ETargetingAOEShape__ETargetingAOEShape_MAX5                                      = 5
};

/// Enum /Script/TargetingSystem.ETargetingTraceType
/// Size: 0x03
enum ETargetingTraceType : uint8_t
{
	ETargetingTraceType__Line0                                                       = 0,
	ETargetingTraceType__Sweep1                                                      = 1,
	ETargetingTraceType__ETargetingTraceType_MAX2                                    = 2
};

