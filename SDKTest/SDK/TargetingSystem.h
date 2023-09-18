/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TargetingSystem.

/// Struct /Script/TargetingSystem.TargetingRequestHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FTargetingRequestHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/TargetingSystem.CollisionQueryTaskData
/// Size: 0x0010 (0x000000 - 0x000010)
class FCollisionQueryTaskData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<AActor*>)                           IgnoredActors                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingTaskSet
/// Size: 0x0010 (0x000000 - 0x000010)
class FTargetingTaskSet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UTargetingTask*>)                   Tasks                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingDefaultResultData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FTargetingDefaultResultData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FHitResult)                                HitResult                                                   ___ OFFSET(get<T>, {0x0, 224, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingDefaultResultsSet
/// Size: 0x0010 (0x000000 - 0x000010)
class FTargetingDefaultResultsSet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FTargetingDefaultResultData>)       TargetResults                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingSourceContext
/// Size: 0x0038 (0x000000 - 0x000038)
class FTargetingSourceContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(AActor*)                                   SourceActor                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(AActor*)                                   InstigatorActor                                             ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   SourceLocation                                              ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FName)                                     SourceSocketName                                            ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(UObject*)                                  SourceObject                                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingRequestData
/// Size: 0x0028 (0x000000 - 0x000028)
class FTargetingRequestData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FDelegateProperty)                         TargetingRequestDynamicDelegate                             ___ OFFSET(get<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/TargetingSystem.TargetingAsyncTaskData
/// Size: 0x0008 (0x000000 - 0x000008)
class FTargetingAsyncTaskData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/TargetingSystem.TargetingImmediateTaskData
/// Size: 0x0001 (0x000000 - 0x000001)
class FTargetingImmediateTaskData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/TargetingSystem.TargetingDebugData
/// Size: 0x0001 (0x000000 - 0x000001)
class FTargetingDebugData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Class /Script/TargetingSystem.AbilityTask_PerformTargeting
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UAbilityTask_PerformTargeting : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  OnTargetReady                                               ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/TargetingSystem.AsyncAction_PerformTargeting
/// Size: 0x0038 (0x000030 - 0x000068)
class UAsyncAction_PerformTargeting : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  Targeted                                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UTargetingPreset*)                         TargetingPreset                                             ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   WeakSourceActor                                             ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<AActor*>)                           InitialTargets                                              ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FTargetingRequestHandle)                   TargetingHandle                                             ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	DMember(bool)                                      bUseAsyncTargeting                                          ___ OFFSET(get<bool>, {0x64, 1, 1, 0})
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

/// Class /Script/TargetingSystem.TargetingFilterTask_ActorClass
/// Size: 0x0020 (0x000028 - 0x000048)
class UTargetingFilterTask_ActorClass : public UTargetingFilterTask_BasicFilterTemplate
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<UClass*>)                           RequiredActorClassFilters                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UClass*>)                           IgnoredActorClassFilters                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/TargetingSystem.TargetingPreset
/// Size: 0x0010 (0x000030 - 0x000040)
class UTargetingPreset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTargetingTaskSet)                         TargetingTaskSet                                            ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/TargetingSystem.TargetingSelectionTask_AOE
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UTargetingSelectionTask_AOE : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(ETargetingAOEShape)                        ShapeType                                                   ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannel                                            ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FCollisionProfileName)                     CollisionProfileName                                        ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	CMember(TArray<TEnumAsByte>)                       CollisionObjectTypes                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FVector)                                   DefaultSourceOffset                                         ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bUseRelativeOffset                                          ___ OFFSET(get<bool>, {0x58, 1, 1, 0})
	DMember(bool)                                      bIgnoreSourceActor                                          ___ OFFSET(get<bool>, {0x58, 1, 1, 1})
	DMember(bool)                                      bIgnoreInstigatorActor                                      ___ OFFSET(get<bool>, {0x58, 1, 1, 2})
	SMember(FVector)                                   HalfExtent                                                  ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	SMember(FScalableFloat)                            Radius                                                      ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            HalfHeight                                                  ___ OFFSET(get<T>, {0xA0, 40, 0, 0})
	SMember(FName)                                     ComponentTag                                                ___ OFFSET(get<T>, {0xC8, 4, 0, 0})
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
	CMember(ETargetingTraceType)                       TraceType                                                   ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              TraceChannel                                                ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	SMember(FCollisionProfileName)                     CollisionProfileName                                        ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	SMember(FScalableFloat)                            DefaultSweptTraceRadius                                     ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            DefaultTraceLength                                          ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FVector)                                   DefaultSourceOffset                                         ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	SMember(FVector)                                   ExplicitTraceDirection                                      ___ OFFSET(get<T>, {0x98, 24, 0, 0})
	DMember(bool)                                      bComplexTrace                                               ___ OFFSET(get<bool>, {0xB0, 1, 1, 0})
	DMember(bool)                                      bIgnoreSourceActor                                          ___ OFFSET(get<bool>, {0xB0, 1, 1, 1})
	DMember(bool)                                      bIgnoreInstigatorActor                                      ___ OFFSET(get<bool>, {0xB0, 1, 1, 2})
};

/// Class /Script/TargetingSystem.TargetingSortTask_Base
/// Size: 0x0008 (0x000028 - 0x000030)
class UTargetingSortTask_Base : public UTargetingTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bAscending                                                  ___ OFFSET(get<bool>, {0x28, 1, 1, 0})
};

/// Class /Script/TargetingSystem.TargetingSubsystem
/// Size: 0x0048 (0x000030 - 0x000078)
class UTargetingSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FTargetingRequestHandle>)           AsyncTargetingRequests                                      ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/TargetingSystem.TargetingFilterTask_SortByDistance
/// Size: 0x0000 (0x000030 - 0x000030)
class UTargetingFilterTask_SortByDistance : public UTargetingSortTask_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

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

