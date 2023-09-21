
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Class /Script/PhysicsCore.PhysicalMaterialPropertyBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UPhysicalMaterialPropertyBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PhysicsCore.BodySetupCore
/// Size: 0x0008 (0x000028 - 0x000030)
class UBodySetupCore : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     BoneName                                                    OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(TEnumAsByte<EPhysicsType>)                 PhysicsType                                                 OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionTraceFlag>)          CollisionTraceFlag                                          OFFSET(get<T>, {0x2D, 1, 0, 0})
	CMember(TEnumAsByte<EBodyCollisionResponse>)       CollisionReponse                                            OFFSET(get<T>, {0x2E, 1, 0, 0})
};

/// Class /Script/PhysicsCore.ChaosPhysicalMaterial
/// Size: 0x0020 (0x000028 - 0x000048)
class UChaosPhysicalMaterial : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     StaticFriction                                              OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Restitution                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     LinearEtherDrag                                             OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     AngularEtherDrag                                            OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     SleepingLinearVelocityThreshold                             OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     SleepingAngularVelocityThreshold                            OFFSET(get<float>, {0x40, 4, 0, 0})
};

/// Class /Script/PhysicsCore.PhysicalMaterial
/// Size: 0x0060 (0x000028 - 0x000088)
class UPhysicalMaterial : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     StaticFriction                                              OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(TEnumAsByte<EFrictionCombineMode>)         FrictionCombineMode                                         OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(bool)                                      bOverrideFrictionCombineMode                                OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(float)                                     Restitution                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TEnumAsByte<EFrictionCombineMode>)         RestitutionCombineMode                                      OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bOverrideRestitutionCombineMode                             OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     SleepLinearVelocityThreshold                                OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SleepAngularVelocityThreshold                               OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   SleepCounterThreshold                                       OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     RaiseMassToPower                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     DestructibleDamageThresholdScale                            OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(UPhysicalMaterialPropertyBase*)            PhysicalMaterialProperty                                    OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             SurfaceType                                                 OFFSET(get<T>, {0x60, 1, 0, 0})
	SMember(FPhysicalMaterialStrength)                 Strength                                                    OFFSET(get<T>, {0x64, 12, 0, 0})
};

/// Class /Script/PhysicsCore.PhysicsSettingsCore
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UPhysicsSettingsCore : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	DMember(float)                                     DefaultGravityZ                                             OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     DefaultTerminalVelocity                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DefaultFluidFriction                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   SimulateScratchMemorySize                                   OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   RagdollAggregateThreshold                                   OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     TriangleMeshTriangleMinAreaThreshold                        OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(bool)                                      bEnableEnhancedDeterminism                                  OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bEnableShapeSharing                                         OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      bEnablePCM                                                  OFFSET(get<bool>, {0x4A, 1, 0, 0})
	DMember(bool)                                      bEnableStabilization                                        OFFSET(get<bool>, {0x4B, 1, 0, 0})
	DMember(bool)                                      bWarnMissingLocks                                           OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      bEnable2DPhysics                                            OFFSET(get<bool>, {0x4D, 1, 0, 0})
	DMember(bool)                                      bDefaultHasComplexCollision                                 OFFSET(get<bool>, {0x4E, 1, 0, 0})
	DMember(float)                                     BounceThresholdVelocity                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(TEnumAsByte<EFrictionCombineMode>)         FrictionCombineMode                                         OFFSET(get<T>, {0x54, 1, 0, 0})
	CMember(TEnumAsByte<EFrictionCombineMode>)         RestitutionCombineMode                                      OFFSET(get<T>, {0x55, 1, 0, 0})
	DMember(float)                                     MaxAngularVelocity                                          OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     MaxDepenetrationVelocity                                    OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     ContactOffsetMultiplier                                     OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     MinContactOffset                                            OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     MaxContactOffset                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(bool)                                      bSimulateSkeletalMeshOnDedicatedServer                      OFFSET(get<bool>, {0x6C, 1, 0, 0})
	CMember(TEnumAsByte<ECollisionTraceFlag>)          DefaultShapeComplexity                                      OFFSET(get<T>, {0x6D, 1, 0, 0})
	SMember(FChaosSolverConfiguration)                 SolverOptions                                               OFFSET(get<T>, {0x70, 104, 0, 0})
};

/// Struct /Script/PhysicsCore.BodyInstanceCore
/// Size: 0x0018 (0x000000 - 0x000018)
class FBodyInstanceCore : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bSimulatePhysics                                            OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bOverrideMass                                               OFFSET(get<bool>, {0x10, 1, 1, 1})
	DMember(bool)                                      bEnableGravity                                              OFFSET(get<bool>, {0x10, 1, 1, 2})
	DMember(bool)                                      bUpdateKinematicFromSimulation                              OFFSET(get<bool>, {0x10, 1, 1, 3})
	DMember(bool)                                      bAutoWeld                                                   OFFSET(get<bool>, {0x10, 1, 1, 4})
	DMember(bool)                                      bStartAwake                                                 OFFSET(get<bool>, {0x10, 1, 1, 5})
	DMember(bool)                                      bGenerateWakeEvents                                         OFFSET(get<bool>, {0x10, 1, 1, 6})
	DMember(bool)                                      bUpdateMassWhenScaleChanges                                 OFFSET(get<bool>, {0x10, 1, 1, 7})
};

/// Struct /Script/PhysicsCore.PhysicalMaterialStrength
/// Size: 0x000C (0x000000 - 0x00000C)
class FPhysicalMaterialStrength : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     TensileStrength                                             OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CompressionStrength                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ShearStrength                                               OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Enum /Script/PhysicsCore.ECollisionTraceFlag
/// Size: 0x05
enum ECollisionTraceFlag : uint8_t
{
	CTF_UseDefault0                                                                  = 0,
	CTF_UseSimpleAndComplex1                                                         = 1,
	CTF_UseSimpleAsComplex2                                                          = 2,
	CTF_UseComplexAsSimple3                                                          = 3,
	CTF_MAX4                                                                         = 4
};

/// Enum /Script/PhysicsCore.EPhysicsType
/// Size: 0x04
enum EPhysicsType : uint8_t
{
	PhysType_Default0                                                                = 0,
	PhysType_Kinematic1                                                              = 1,
	PhysType_Simulated2                                                              = 2,
	PhysType_MAX3                                                                    = 3
};

/// Enum /Script/PhysicsCore.EBodyCollisionResponse
/// Size: 0x03
enum EBodyCollisionResponse : uint8_t
{
	EBodyCollisionResponse__BodyCollision_Enabled0                                   = 0,
	EBodyCollisionResponse__BodyCollision_Disabled1                                  = 1,
	EBodyCollisionResponse__BodyCollision_MAX2                                       = 2
};

/// Enum /Script/PhysicsCore.EPhysicalSurface
/// Size: 0x65
enum EPhysicalSurface : uint8_t
{
	SurfaceType_Default0                                                             = 0,
	SurfaceType11                                                                    = 1,
	SurfaceType22                                                                    = 2,
	SurfaceType33                                                                    = 3,
	SurfaceType44                                                                    = 4,
	SurfaceType55                                                                    = 5,
	SurfaceType66                                                                    = 6,
	SurfaceType77                                                                    = 7,
	SurfaceType88                                                                    = 8,
	SurfaceType99                                                                    = 9,
	SurfaceType1010                                                                  = 10,
	SurfaceType1111                                                                  = 11,
	SurfaceType1212                                                                  = 12,
	SurfaceType1313                                                                  = 13,
	SurfaceType1414                                                                  = 14,
	SurfaceType1515                                                                  = 15,
	SurfaceType1616                                                                  = 16,
	SurfaceType1717                                                                  = 17,
	SurfaceType1818                                                                  = 18,
	SurfaceType1919                                                                  = 19,
	SurfaceType2020                                                                  = 20,
	SurfaceType2121                                                                  = 21,
	SurfaceType2222                                                                  = 22,
	SurfaceType2323                                                                  = 23,
	SurfaceType2424                                                                  = 24,
	SurfaceType2525                                                                  = 25,
	SurfaceType2626                                                                  = 26,
	SurfaceType2727                                                                  = 27,
	SurfaceType2828                                                                  = 28,
	SurfaceType2929                                                                  = 29,
	SurfaceType3030                                                                  = 30,
	SurfaceType3131                                                                  = 31,
	SurfaceType3232                                                                  = 32,
	SurfaceType3333                                                                  = 33,
	SurfaceType3434                                                                  = 34,
	SurfaceType3535                                                                  = 35,
	SurfaceType3636                                                                  = 36,
	SurfaceType3737                                                                  = 37,
	SurfaceType3838                                                                  = 38,
	SurfaceType3939                                                                  = 39,
	SurfaceType4040                                                                  = 40,
	SurfaceType4141                                                                  = 41,
	SurfaceType4242                                                                  = 42,
	SurfaceType4343                                                                  = 43,
	SurfaceType4444                                                                  = 44,
	SurfaceType4545                                                                  = 45,
	SurfaceType4646                                                                  = 46,
	SurfaceType4747                                                                  = 47,
	SurfaceType4848                                                                  = 48,
	SurfaceType4949                                                                  = 49,
	SurfaceType5050                                                                  = 50,
	SurfaceType5151                                                                  = 51,
	SurfaceType5252                                                                  = 52,
	SurfaceType5353                                                                  = 53,
	SurfaceType5454                                                                  = 54,
	SurfaceType5555                                                                  = 55,
	SurfaceType5656                                                                  = 56,
	SurfaceType5757                                                                  = 57,
	SurfaceType5858                                                                  = 58,
	SurfaceType5959                                                                  = 59,
	SurfaceType6060                                                                  = 60,
	SurfaceType6161                                                                  = 61,
	SurfaceType6262                                                                  = 62,
	SurfaceType_Max63                                                                = 63,
	EPhysicalSurface_MAX64                                                           = 64
};

/// Enum /Script/PhysicsCore.ERadialImpulseFalloff
/// Size: 0x03
enum ERadialImpulseFalloff : uint8_t
{
	RIF_Constant0                                                                    = 0,
	RIF_Linear1                                                                      = 1,
	RIF_MAX2                                                                         = 2
};

/// Enum /Script/PhysicsCore.ESleepFamily
/// Size: 0x04
enum ESleepFamily : uint8_t
{
	ESleepFamily__Normal0                                                            = 0,
	ESleepFamily__Sensitive1                                                         = 1,
	ESleepFamily__Custom2                                                            = 2,
	ESleepFamily__ESleepFamily_MAX3                                                  = 3
};

/// Enum /Script/PhysicsCore.EAngularConstraintMotion
/// Size: 0x04
enum EAngularConstraintMotion : uint8_t
{
	ACM_Free0                                                                        = 0,
	ACM_Limited1                                                                     = 1,
	ACM_Locked2                                                                      = 2,
	ACM_MAX3                                                                         = 3
};

/// Enum /Script/PhysicsCore.EConstraintFrame
/// Size: 0x03
enum EConstraintFrame : uint8_t
{
	EConstraintFrame__Frame10                                                        = 0,
	EConstraintFrame__Frame21                                                        = 1,
	EConstraintFrame__EConstraintFrame_MAX2                                          = 2
};

/// Enum /Script/PhysicsCore.EConstraintPlasticityType
/// Size: 0x04
enum EConstraintPlasticityType : uint8_t
{
	CCPT_Free0                                                                       = 0,
	CCPT_Shrink1                                                                     = 1,
	CCPT_Grow2                                                                       = 2,
	CCPT_MAX3                                                                        = 3
};

/// Enum /Script/PhysicsCore.ELinearConstraintMotion
/// Size: 0x04
enum ELinearConstraintMotion : uint8_t
{
	LCM_Free0                                                                        = 0,
	LCM_Limited1                                                                     = 1,
	LCM_Locked2                                                                      = 2,
	LCM_MAX3                                                                         = 3
};

/// Enum /Script/PhysicsCore.EFrictionCombineMode
/// Size: 0x04
enum EFrictionCombineMode : uint8_t
{
	EFrictionCombineMode__Average0                                                   = 0,
	EFrictionCombineMode__Min1                                                       = 1,
	EFrictionCombineMode__Multiply2                                                  = 2,
	EFrictionCombineMode__Max3                                                       = 3
};

