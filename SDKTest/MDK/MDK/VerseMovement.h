
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityActor
/// dependency: EntityCore

/// Class /Script/VerseMovement.NetPhysicsMoveConfig
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UNetPhysicsMoveConfig : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FNetPhysicsMoveConfigEntry>)        Entries                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FNetPhysicsMoveLimits)                     Limits                                                      ___ OFFSET(get<T>, {0x40, 128, 0, 0})
};

/// Class /Script/VerseMovement.NetPhysicsMoveComponent
/// Size: 0x0078 (0x0000A0 - 0x000118)
class UNetPhysicsMoveComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(UNetPhysicsMoveConfig*)                    MoveConfig                                                  ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	SMember(FNetPhysicsMoveObject)                     SimOutput                                                   ___ OFFSET(get<T>, {0x100, 1, 0, 0})
	CMember(APlayerController*)                        CachedPC                                                    ___ OFFSET(get<T>, {0x108, 8, 0, 0})
};

/// Class /Script/VerseMovement.VerseMovementComponentBase
/// Size: 0x0000 (0x000088 - 0x000088)
class UVerseMovementComponentBase : public UEntityActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/VerseMovement.NetPhysicsMoveInputTriggerParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FNetPhysicsMoveInputTriggerParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bIsAxis                                                     ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(UCurveFloat*)                              AxisToMagnitudeCurve                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      AccumulateAxisInput                                         ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FVector2D)                                 ClampAxis                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMovePhysicsTriggerParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FNetPhysicsMovePhysicsTriggerParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   SpeedInDirection                                            ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveTraceTriggerParams
/// Size: 0x0050 (0x000000 - 0x000050)
class FNetPhysicsMoveTraceTriggerParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Direction                                                   ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(ENetPhysicsMoveResponseFrame)              Frame                                                       ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(float)                                     Length                                                      ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            CollisionChannel                                            ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FCollisionResponseContainer)               ResponseParams                                              ___ OFFSET(get<T>, {0x21, 32, 0, 0})
	DMember(bool)                                      bProportionalToHitDistance                                  ___ OFFSET(get<bool>, {0x41, 1, 0, 0})
	CMember(UCurveFloat*)                              HitDistanceToMagnitudeCurve                                 ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveTrigger
/// Size: 0x0098 (0x000000 - 0x000098)
class FNetPhysicsMoveTrigger : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(ENetPhysicsMoveTriggerType)                Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FNetPhysicsMoveInputTriggerParams)         InputParams                                                 ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FNetPhysicsMovePhysicsTriggerParams)       PhysicsParams                                               ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FNetPhysicsMoveTraceTriggerParams)         TraceParams                                                 ___ OFFSET(get<T>, {0x48, 80, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveResponse
/// Size: 0x0050 (0x000000 - 0x000050)
class FNetPhysicsMoveResponse : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Vector                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(UCurveFloat*)                              MagnitudeCurve                                              ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(ENetPhysicsMoveResponseType)               Type                                                        ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(ENetPhysicsMoveResponseFrame)              Frame                                                       ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(ENetPhysicsMoveResponseEffect)             Effect                                                      ___ OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(ENetPhysicsMoveResponseModifier)           Modifier                                                    ___ OFFSET(get<T>, {0x2B, 1, 0, 0})
	SMember(FVector)                                   ClampVector                                                 ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	CMember(ENetPhysicsMoveResponseFrame)              ClampFrame                                                  ___ OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveConfigEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FNetPhysicsMoveConfigEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNetPhysicsMoveTrigger>)            Triggers                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FNetPhysicsMoveResponse>)           Responses                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveLimits
/// Size: 0x0080 (0x000000 - 0x000080)
class FNetPhysicsMoveLimits : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bClampVelocity                                              ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   MaxVelocity                                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bClampAngularVelocity                                       ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FVector)                                   MaxAngularVelocity                                          ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bClampMaxPosition                                           ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	SMember(FVector)                                   MaxPosition                                                 ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(bool)                                      bClampMinPosition                                           ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FVector)                                   MinPosition                                                 ___ OFFSET(get<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveInputCmd
/// Size: 0x0038 (0x000000 - 0x000038)
class FNetPhysicsMoveInputCmd : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<float>)                             AxisValues                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<bool>)                              ActionValues                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRotator)                                  ViewRotation                                                ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveObject
/// Size: 0x0001 (0x000000 - 0x000001)
class FNetPhysicsMoveObject : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/VerseMovement.NetPhysicsMoveObjectLocal
/// Size: 0x0088 (0x000000 - 0x000088)
class FNetPhysicsMoveObjectLocal : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveTriggerType
/// Size: 0x06
enum ENetPhysicsMoveTriggerType : uint8_t
{
	ENetPhysicsMoveTriggerType__Input0                                               = 0,
	ENetPhysicsMoveTriggerType__Constraint1                                          = 1,
	ENetPhysicsMoveTriggerType__Physics2                                             = 2,
	ENetPhysicsMoveTriggerType__Trace3                                               = 3,
	ENetPhysicsMoveTriggerType__Constant4                                            = 4,
	ENetPhysicsMoveTriggerType__ENetPhysicsMoveTriggerType_MAX5                      = 5
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveResponseType
/// Size: 0x03
enum ENetPhysicsMoveResponseType : uint8_t
{
	ENetPhysicsMoveResponseType__Linear0                                             = 0,
	ENetPhysicsMoveResponseType__Angular1                                            = 1,
	ENetPhysicsMoveResponseType__ENetPhysicsMoveResponseType_MAX2                    = 2
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveResponseFrame
/// Size: 0x04
enum ENetPhysicsMoveResponseFrame : uint8_t
{
	ENetPhysicsMoveResponseFrame__Absolute0                                          = 0,
	ENetPhysicsMoveResponseFrame__Object1                                            = 1,
	ENetPhysicsMoveResponseFrame__Camera2                                            = 2,
	ENetPhysicsMoveResponseFrame__ENetPhysicsMoveResponseFrame_MAX3                  = 3
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveResponseEffect
/// Size: 0x04
enum ENetPhysicsMoveResponseEffect : uint8_t
{
	ENetPhysicsMoveResponseEffect__Force0                                            = 0,
	ENetPhysicsMoveResponseEffect__VelocityChange1                                   = 1,
	ENetPhysicsMoveResponseEffect__Transform2                                        = 2,
	ENetPhysicsMoveResponseEffect__ENetPhysicsMoveResponseEffect_MAX3                = 3
};

/// Enum /Script/VerseMovement.ENetPhysicsMoveResponseModifier
/// Size: 0x06
enum ENetPhysicsMoveResponseModifier : uint8_t
{
	ENetPhysicsMoveResponseModifier__Add0                                            = 0,
	ENetPhysicsMoveResponseModifier__TargetTransform1                                = 1,
	ENetPhysicsMoveResponseModifier__TargetVelocity2                                 = 2,
	ENetPhysicsMoveResponseModifier__OverrideTransform3                              = 3,
	ENetPhysicsMoveResponseModifier__OverrideVelocity4                               = 4,
	ENetPhysicsMoveResponseModifier__ENetPhysicsMoveResponseModifier_MAX5            = 5
};

