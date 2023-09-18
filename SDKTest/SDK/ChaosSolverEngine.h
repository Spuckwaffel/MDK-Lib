/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ChaosSolverEngine.

/// Struct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FChaosPhysicsCollisionInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UPrimitiveComponent*)                      Component                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      OtherComponent                                              ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   AccumulatedImpulse                                          ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FVector)                                   OtherVelocity                                               ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	SMember(FVector)                                   OtherAngularVelocity                                        ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	DMember(float)                                     Mass                                                        ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     OtherMass                                                   ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
};

/// Struct /Script/ChaosSolverEngine.BreakEventCallbackWrapper
/// Size: 0x0040 (0x000000 - 0x000040)
class FBreakEventCallbackWrapper : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ChaosSolverEngine.RemovalEventCallbackWrapper
/// Size: 0x0040 (0x000000 - 0x000040)
class FRemovalEventCallbackWrapper : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ChaosSolverEngine.CrumblingEventCallbackWrapper
/// Size: 0x0040 (0x000000 - 0x000040)
class FCrumblingEventCallbackWrapper : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ChaosSolverEngine.ChaosHandlerSet
/// Size: 0x0058 (0x000000 - 0x000058)
class FChaosHandlerSet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TSet<UObject*>)                            ChaosHandlers                                               ___ OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/ChaosSolverEngine.ChaosDebugSubstepControl
/// Size: 0x0003 (0x000000 - 0x000003)
class FChaosDebugSubstepControl : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bPause                                                      ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bSubstep                                                    ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bStep                                                       ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UChaosDebugDrawComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/ChaosSolverEngine.ChaosEventListenerComponent
/// Size: 0x0008 (0x0000A0 - 0x0000A8)
class UChaosEventListenerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
/// Size: 0x0210 (0x0000A8 - 0x0002B8)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(TMap<UPrimitiveComponent*, FChaosHandlerSet>) CollisionEventRegistrations                              ___ OFFSET(get<T>, {0x168, 80, 0, 0})
	CMember(TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper>) BreakEventRegistrations                        ___ OFFSET(get<T>, {0x1B8, 80, 0, 0})
	CMember(TMap<UPrimitiveComponent*, FRemovalEventCallbackWrapper>) RemovalEventRegistrations                    ___ OFFSET(get<T>, {0x208, 80, 0, 0})
	CMember(TMap<UPrimitiveComponent*, FCrumblingEventCallbackWrapper>) CrumblingEventRegistrations                ___ OFFSET(get<T>, {0x258, 80, 0, 0})
};

/// Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosNotifyHandlerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolver
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosSolver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverActor
/// Size: 0x00F8 (0x000290 - 0x000388)
class AChaosSolverActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FChaosSolverConfiguration)                 Properties                                                  ___ OFFSET(get<T>, {0x290, 104, 0, 0})
	DMember(float)                                     TimeStepMultiplier                                          ___ OFFSET(get<float>, {0x2F8, 4, 0, 0})
	DMember(int32_t)                                   CollisionIterations                                         ___ OFFSET(get<int32_t>, {0x2FC, 4, 0, 0})
	DMember(int32_t)                                   PushOutIterations                                           ___ OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	DMember(int32_t)                                   PushOutPairIterations                                       ___ OFFSET(get<int32_t>, {0x304, 4, 0, 0})
	DMember(float)                                     ClusterConnectionFactor                                     ___ OFFSET(get<float>, {0x308, 4, 0, 0})
	CMember(EClusterConnectionTypeEnum)                ClusterUnionConnectionType                                  ___ OFFSET(get<T>, {0x30C, 1, 0, 0})
	DMember(bool)                                      DoGenerateCollisionData                                     ___ OFFSET(get<bool>, {0x30D, 1, 0, 0})
	SMember(FSolverCollisionFilterSettings)            CollisionFilterSettings                                     ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	DMember(bool)                                      DoGenerateBreakingData                                      ___ OFFSET(get<bool>, {0x320, 1, 0, 0})
	SMember(FSolverBreakingFilterSettings)             BreakingFilterSettings                                      ___ OFFSET(get<T>, {0x324, 16, 0, 0})
	DMember(bool)                                      DoGenerateTrailingData                                      ___ OFFSET(get<bool>, {0x334, 1, 0, 0})
	SMember(FSolverTrailingFilterSettings)             TrailingFilterSettings                                      ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	DMember(float)                                     MassScale                                                   ___ OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(bool)                                      bHasFloor                                                   ___ OFFSET(get<bool>, {0x34C, 1, 0, 0})
	DMember(float)                                     FloorHeight                                                 ___ OFFSET(get<float>, {0x350, 4, 0, 0})
	SMember(FChaosDebugSubstepControl)                 ChaosDebugSubstepControl                                    ___ OFFSET(get<T>, {0x354, 3, 0, 0})
	CMember(UBillboardComponent*)                      SpriteComponent                                             ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UChaosGameplayEventDispatcher*)            GameplayEventDispatcherComponent                            ___ OFFSET(get<T>, {0x378, 8, 0, 0})
};

/// Class /Script/ChaosSolverEngine.ChaosSolverSettings
/// Size: 0x0020 (0x000030 - 0x000050)
class UChaosSolverSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSoftClassPath)                            DefaultChaosSolverActorClass                                ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
/// Size: 0x08
enum EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit0                                 = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation1                         = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation2    = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay3     = 3,
	EClusterConnectionTypeEnum__Chaos_BoundsOverlapFilteredDelaunayTriangulation4    = 4,
	EClusterConnectionTypeEnum__Chaos_None5                                          = 5,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max6                = 6,
	EClusterConnectionTypeEnum__Chaos_MAX7                                           = 7
};

