
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/Chaos.ClosestPhysicsObjectResult
/// Size: 0x0028 (0x000000 - 0x000028)
class FClosestPhysicsObjectResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Chaos.ChaosSolverConfiguration
/// Size: 0x0068 (0x000000 - 0x000068)
class FChaosSolverConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(int32_t)                                   PositionIterations                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   VelocityIterations                                          OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ProjectionIterations                                        OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     CollisionMarginFraction                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     CollisionMarginMax                                          OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     CollisionCullDistance                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CollisionMaxPushOutVelocity                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ClusterConnectionFactor                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(EClusterUnionMethod)                       ClusterUnionConnectionType                                  OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bGenerateCollisionData                                      OFFSET(get<bool>, {0x21, 1, 0, 0})
	SMember(FSolverCollisionFilterSettings)            CollisionFilterSettings                                     OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	DMember(bool)                                      bGenerateBreakData                                          OFFSET(get<bool>, {0x34, 1, 0, 0})
	SMember(FSolverBreakingFilterSettings)             BreakingFilterSettings                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bGenerateTrailingData                                       OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FSolverTrailingFilterSettings)             TrailingFilterSettings                                      OFFSET(getStruct<T>, {0x4C, 16, 0, 0})
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   PushOutIterations                                           OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(bool)                                      bGenerateContactGraph                                       OFFSET(get<bool>, {0x64, 1, 0, 0})
};

/// Struct /Script/Chaos.SolverTrailingFilterSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSolverTrailingFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      FilterEnabled                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinVolume                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Chaos.SolverBreakingFilterSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSolverBreakingFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      FilterEnabled                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinVolume                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Chaos.SolverCollisionFilterSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSolverCollisionFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      FilterEnabled                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinImpulse                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Chaos.ManagedArrayCollection
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FManagedArrayCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/Chaos.SolverCollisionData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FSolverCollisionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   AccumulatedImpulse                                          OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Velocity1                                                   OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   Velocity2                                                   OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity1                                            OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity2                                            OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	DMember(float)                                     Mass1                                                       OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     Mass2                                                       OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   LevelsetIndex                                               OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndexMesh                                           OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   LevelsetIndexMesh                                           OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
};

/// Struct /Script/Chaos.SolverBreakingData
/// Size: 0x0058 (0x000000 - 0x000058)
class FSolverBreakingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndexMesh                                           OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Struct /Script/Chaos.SolverTrailingData
/// Size: 0x0058 (0x000000 - 0x000058)
class FSolverTrailingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndexMesh                                           OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

/// Struct /Script/Chaos.RecordedFrame
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FRecordedFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           TransformIndices                                            OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           PreviousTransformIndices                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<bool>)                              DisabledFlags                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FSolverCollisionData>)              Collisions                                                  OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FSolverBreakingData>)               Breakings                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TSet<FSolverTrailingData>)                 Trailings                                                   OFFSET(get<T>, {0x60, 80, 0, 0})
	DMember(float)                                     Timestamp                                                   OFFSET(get<float>, {0xB0, 4, 0, 0})
};

/// Struct /Script/Chaos.RecordedTransformTrack
/// Size: 0x0010 (0x000000 - 0x000010)
class FRecordedTransformTrack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRecordedFrame>)                    Records                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Chaos.SolverRemovalFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSolverRemovalFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      FilterEnabled                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinVolume                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Enum /Script/Chaos.ChaosDeformableSimSpace
/// Size: 0x04
enum ChaosDeformableSimSpace : uint8_t
{
	World0                                                                           = 0,
	ComponentXf1                                                                     = 1,
	bone2                                                                            = 2,
	ChaosDeformableSimSpace_MAX3                                                     = 3
};

/// Enum /Script/Chaos.ESetMaskConditionType
/// Size: 0x05
enum ESetMaskConditionType : uint8_t
{
	Field_Set_Always0                                                                = 0,
	Field_Set_IFF_NOT_Interior1                                                      = 1,
	Field_Set_IFF_NOT_Exterior2                                                      = 2,
	Field_MaskCondition_Max3                                                         = 3,
	Field_MAX4                                                                       = 4
};

/// Enum /Script/Chaos.EWaveFunctionType
/// Size: 0x05
enum EWaveFunctionType : uint8_t
{
	Field_Wave_Cosine0                                                               = 0,
	Field_Wave_Gaussian1                                                             = 1,
	Field_Wave_Falloff2                                                              = 2,
	Field_Wave_Decay3                                                                = 3,
	Field_Wave_Max4                                                                  = 4
};

/// Enum /Script/Chaos.EFieldOperationType
/// Size: 0x05
enum EFieldOperationType : uint8_t
{
	Field_Multiply0                                                                  = 0,
	Field_Divide1                                                                    = 1,
	Field_Add2                                                                       = 2,
	Field_Substract3                                                                 = 3,
	Field_Operation_Max4                                                             = 4
};

/// Enum /Script/Chaos.EFieldCullingOperationType
/// Size: 0x04
enum EFieldCullingOperationType : uint8_t
{
	Field_Culling_Inside0                                                            = 0,
	Field_Culling_Outside1                                                           = 1,
	Field_Culling_Operation_Max2                                                     = 2,
	Field_Culling_MAX3                                                               = 3
};

/// Enum /Script/Chaos.EFieldResolutionType
/// Size: 0x04
enum EFieldResolutionType : uint8_t
{
	Field_Resolution_Minimal0                                                        = 0,
	Field_Resolution_DisabledParents1                                                = 1,
	Field_Resolution_Maximum2                                                        = 2,
	Field_Resolution_Max3                                                            = 3
};

/// Enum /Script/Chaos.EFieldFilterType
/// Size: 0x07
enum EFieldFilterType : uint8_t
{
	Field_Filter_Dynamic0                                                            = 0,
	Field_Filter_Kinematic1                                                          = 1,
	Field_Filter_Static2                                                             = 2,
	Field_Filter_All3                                                                = 3,
	Field_Filter_Sleeping4                                                           = 4,
	Field_Filter_Disabled5                                                           = 5,
	Field_Filter_Max6                                                                = 6
};

/// Enum /Script/Chaos.EFieldObjectType
/// Size: 0x06
enum EFieldObjectType : uint8_t
{
	Field_Object_Rigid0                                                              = 0,
	Field_Object_Cloth1                                                              = 1,
	Field_Object_Destruction2                                                        = 2,
	Field_Object_Character3                                                          = 3,
	Field_Object_All4                                                                = 4,
	Field_Object_Max5                                                                = 5
};

/// Enum /Script/Chaos.EFieldPositionType
/// Size: 0x03
enum EFieldPositionType : uint8_t
{
	Field_Position_CenterOfMass0                                                     = 0,
	Field_Position_PivotPoint1                                                       = 1,
	Field_Position_Max2                                                              = 2
};

/// Enum /Script/Chaos.EFieldFalloffType
/// Size: 0x06
enum EFieldFalloffType : uint8_t
{
	Field_FallOff_None0                                                              = 0,
	Field_Falloff_Linear1                                                            = 1,
	Field_Falloff_Inverse2                                                           = 2,
	Field_Falloff_Squared3                                                           = 3,
	Field_Falloff_Logarithmic4                                                       = 4,
	Field_Falloff_Max5                                                               = 5
};

/// Enum /Script/Chaos.EFieldPhysicsType
/// Size: 0x21
enum EFieldPhysicsType : uint8_t
{
	Field_None0                                                                      = 0,
	Field_DynamicState1                                                              = 1,
	Field_LinearForce2                                                               = 2,
	Field_ExternalClusterStrain3                                                     = 3,
	Field_Kill4                                                                      = 4,
	Field_LinearVelocity5                                                            = 5,
	Field_AngularVelociy6                                                            = 6,
	Field_AngularTorque7                                                             = 7,
	Field_InternalClusterStrain8                                                     = 8,
	Field_DisableThreshold9                                                          = 9,
	Field_SleepingThreshold10                                                        = 10,
	Field_PositionStatic11                                                           = 11,
	Field_PositionAnimated12                                                         = 12,
	Field_PositionTarget13                                                           = 13,
	Field_DynamicConstraint14                                                        = 14,
	Field_CollisionGroup15                                                           = 15,
	Field_ActivateDisabled16                                                         = 16,
	Field_InitialLinearVelocity17                                                    = 17,
	Field_InitialAngularVelocity18                                                   = 18,
	Field_LinearImpulse19                                                            = 19,
	Field_PhysicsType_Max20                                                          = 20
};

/// Enum /Script/Chaos.EFieldVectorType
/// Size: 0x10
enum EFieldVectorType : uint8_t
{
	Vector_LinearForce0                                                              = 0,
	Vector_LinearVelocity1                                                           = 1,
	Vector_AngularVelocity2                                                          = 2,
	Vector_AngularTorque3                                                            = 3,
	Vector_PositionTarget4                                                           = 4,
	Vector_InitialLinearVelocity5                                                    = 5,
	Vector_InitialAngularVelocity6                                                   = 6,
	Vector_LinearImpulse7                                                            = 7,
	Vector_TargetMax8                                                                = 8,
	Vector_MAX9                                                                      = 9
};

/// Enum /Script/Chaos.EFieldScalarType
/// Size: 0x08
enum EFieldScalarType : uint8_t
{
	Scalar_ExternalClusterStrain0                                                    = 0,
	Scalar_Kill1                                                                     = 1,
	Scalar_DisableThreshold2                                                         = 2,
	Scalar_SleepingThreshold3                                                        = 3,
	Scalar_InternalClusterStrain4                                                    = 4,
	Scalar_DynamicConstraint5                                                        = 5,
	Scalar_TargetMax6                                                                = 6,
	Scalar_MAX7                                                                      = 7
};

/// Enum /Script/Chaos.EFieldIntegerType
/// Size: 0x07
enum EFieldIntegerType : uint8_t
{
	Integer_DynamicState0                                                            = 0,
	Integer_ActivateDisabled1                                                        = 1,
	Integer_CollisionGroup2                                                          = 2,
	Integer_PositionAnimated3                                                        = 3,
	Integer_PositionStatic4                                                          = 4,
	Integer_TargetMax5                                                               = 5,
	Integer_MAX6                                                                     = 6
};

/// Enum /Script/Chaos.EFieldOutputType
/// Size: 0x04
enum EFieldOutputType : uint8_t
{
	Field_Output_Vector0                                                             = 0,
	Field_Output_Scalar1                                                             = 1,
	Field_Output_Integer2                                                            = 2,
	Field_Output_Max3                                                                = 3
};

/// Enum /Script/Chaos.EFieldPhysicsDefaultFields
/// Size: 0x06
enum EFieldPhysicsDefaultFields : uint8_t
{
	Field_RadialIntMask0                                                             = 0,
	Field_RadialFalloff1                                                             = 1,
	Field_UniformVector2                                                             = 2,
	Field_RadialVector3                                                              = 3,
	Field_RadialVectorFalloff4                                                       = 4,
	Field_EFieldPhysicsDefaultFields_Max5                                            = 5
};

/// Enum /Script/Chaos.EConvexOverlapRemoval
/// Size: 0x05
enum EConvexOverlapRemoval : uint8_t
{
	EConvexOverlapRemoval__None0                                                     = 0,
	EConvexOverlapRemoval__All1                                                      = 1,
	EConvexOverlapRemoval__OnlyClusters2                                             = 2,
	EConvexOverlapRemoval__OnlyClustersVsClusters3                                   = 3,
	EConvexOverlapRemoval__EConvexOverlapRemoval_MAX4                                = 4
};

/// Enum /Script/Chaos.EGenerateConvexMethod
/// Size: 0x04
enum EGenerateConvexMethod : uint8_t
{
	EGenerateConvexMethod__ExternalCollision0                                        = 0,
	EGenerateConvexMethod__ComputedFromGeometry1                                     = 1,
	EGenerateConvexMethod__IntersectExternalWithComputed2                            = 2,
	EGenerateConvexMethod__EGenerateConvexMethod_MAX3                                = 3
};

/// Enum /Script/Chaos.EAllowConvexMergeMethod
/// Size: 0x03
enum EAllowConvexMergeMethod : uint8_t
{
	EAllowConvexMergeMethod__ByProximity0                                            = 0,
	EAllowConvexMergeMethod__Any1                                                    = 1,
	EAllowConvexMergeMethod__EAllowConvexMergeMethod_MAX2                            = 2
};

/// Enum /Script/Chaos.EProximityMethod
/// Size: 0x03
enum EProximityMethod : uint8_t
{
	EProximityMethod__Precise0                                                       = 0,
	EProximityMethod__ConvexHull1                                                    = 1,
	EProximityMethod__EProximityMethod_MAX2                                          = 2
};

/// Enum /Script/Chaos.EProximityContactMethod
/// Size: 0x04
enum EProximityContactMethod : uint8_t
{
	EProximityContactMethod__MinOverlapInProjectionToMajorAxes0                      = 0,
	EProximityContactMethod__ConvexHullSharpContact1                                 = 1,
	EProximityContactMethod__ConvexHullAreaContact2                                  = 2,
	EProximityContactMethod__EProximityContactMethod_MAX3                            = 3
};

/// Enum /Script/Chaos.EConnectionContactMethod
/// Size: 0x03
enum EConnectionContactMethod : uint8_t
{
	EConnectionContactMethod__None0                                                  = 0,
	EConnectionContactMethod__ConvexHullContactArea1                                 = 1,
	EConnectionContactMethod__EConnectionContactMethod_MAX2                          = 2
};

/// Enum /Script/Chaos.ECollisionTypeEnum
/// Size: 0x03
enum ECollisionTypeEnum : uint8_t
{
	ECollisionTypeEnum__Chaos_Volumetric0                                            = 0,
	ECollisionTypeEnum__Chaos_Surface_Volumetric1                                    = 1,
	ECollisionTypeEnum__Chaos_Max2                                                   = 2
};

/// Enum /Script/Chaos.EImplicitTypeEnum
/// Size: 0x07
enum EImplicitTypeEnum : uint8_t
{
	EImplicitTypeEnum__Chaos_Implicit_Box0                                           = 0,
	EImplicitTypeEnum__Chaos_Implicit_Sphere1                                        = 1,
	EImplicitTypeEnum__Chaos_Implicit_Capsule2                                       = 2,
	EImplicitTypeEnum__Chaos_Implicit_LevelSet3                                      = 3,
	EImplicitTypeEnum__Chaos_Implicit_None4                                          = 4,
	EImplicitTypeEnum__Chaos_Implicit_Convex5                                        = 5,
	EImplicitTypeEnum__Chaos_Max6                                                    = 6
};

/// Enum /Script/Chaos.EObjectStateTypeEnum
/// Size: 0x07
enum EObjectStateTypeEnum : uint8_t
{
	EObjectStateTypeEnum__Chaos_NONE0                                                = 0,
	EObjectStateTypeEnum__Chaos_Object_Sleeping1                                     = 1,
	EObjectStateTypeEnum__Chaos_Object_Kinematic2                                    = 2,
	EObjectStateTypeEnum__Chaos_Object_Static3                                       = 3,
	EObjectStateTypeEnum__Chaos_Object_Dynamic4                                      = 4,
	EObjectStateTypeEnum__Chaos_Object_UserDefined5                                  = 100,
	EObjectStateTypeEnum__Chaos_Max6                                                 = 101
};

/// Enum /Script/Chaos.EGeometryCollectionPhysicsTypeEnum
/// Size: 0x14
enum EGeometryCollectionPhysicsTypeEnum : uint8_t
{
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularVelocity0                       = 0,
	EGeometryCollectionPhysicsTypeEnum__Chaos_DynamicState1                          = 1,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearVelocity2                        = 2,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialAngularVelocity3                = 3,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InitialLinearVelocity4                 = 4,
	EGeometryCollectionPhysicsTypeEnum__Chaos_CollisionGroup5                        = 5,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearForce6                           = 6,
	EGeometryCollectionPhysicsTypeEnum__Chaos_AngularTorque7                         = 7,
	EGeometryCollectionPhysicsTypeEnum__Chaos_DisableThreshold8                      = 8,
	EGeometryCollectionPhysicsTypeEnum__Chaos_SleepingThreshold9                     = 9,
	EGeometryCollectionPhysicsTypeEnum__Chaos_ExternalClusterStrain10                = 10,
	EGeometryCollectionPhysicsTypeEnum__Chaos_InternalClusterStrain11                = 11,
	EGeometryCollectionPhysicsTypeEnum__Chaos_LinearImpulse12                        = 12,
	EGeometryCollectionPhysicsTypeEnum__Chaos_Max13                                  = 13
};

/// Enum /Script/Chaos.EInitialVelocityTypeEnum
/// Size: 0x03
enum EInitialVelocityTypeEnum : uint8_t
{
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_User_Defined0                   = 0,
	EInitialVelocityTypeEnum__Chaos_Initial_Velocity_None1                           = 1,
	EInitialVelocityTypeEnum__Chaos_Max2                                             = 2
};

/// Enum /Script/Chaos.EEmissionPatternTypeEnum
/// Size: 0x03
enum EEmissionPatternTypeEnum : uint8_t
{
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_First_Frame0                    = 0,
	EEmissionPatternTypeEnum__Chaos_Emission_Pattern_On_Demand1                      = 1,
	EEmissionPatternTypeEnum__Chaos_Max2                                             = 2
};

/// Enum /Script/Chaos.EDamageModelTypeEnum
/// Size: 0x03
enum EDamageModelTypeEnum : uint8_t
{
	EDamageModelTypeEnum__Chaos_Damage_Model_UserDefined_Damage_Threshold0           = 0,
	EDamageModelTypeEnum__Chaos_Damage_Model_Material_Strength_And_Connectivity_DamageThreshold1 = 1,
	EDamageModelTypeEnum__Chaos_Max2                                                 = 2
};

/// Enum /Script/Chaos.EChaosSolverTickMode
/// Size: 0x05
enum EChaosSolverTickMode : uint8_t
{
	EChaosSolverTickMode__Fixed0                                                     = 0,
	EChaosSolverTickMode__Variable1                                                  = 1,
	EChaosSolverTickMode__VariableCapped2                                            = 2,
	EChaosSolverTickMode__VariableCappedWithTarget3                                  = 3,
	EChaosSolverTickMode__EChaosSolverTickMode_MAX4                                  = 4
};

/// Enum /Script/Chaos.EChaosThreadingMode
/// Size: 0x06
enum EChaosThreadingMode : uint8_t
{
	EChaosThreadingMode__DedicatedThread0                                            = 0,
	EChaosThreadingMode__TaskGraph1                                                  = 1,
	EChaosThreadingMode__SingleThread2                                               = 2,
	EChaosThreadingMode__Num3                                                        = 3,
	EChaosThreadingMode__Invalid4                                                    = 4,
	EChaosThreadingMode__EChaosThreadingMode_MAX5                                    = 5
};

/// Enum /Script/Chaos.EChaosBufferMode
/// Size: 0x05
enum EChaosBufferMode : uint8_t
{
	EChaosBufferMode__Double0                                                        = 0,
	EChaosBufferMode__Triple1                                                        = 1,
	EChaosBufferMode__Num2                                                           = 2,
	EChaosBufferMode__Invalid3                                                       = 3,
	EChaosBufferMode__EChaosBufferMode_MAX4                                          = 4
};

/// Enum /Script/Chaos.EClusterUnionMethod
/// Size: 0x07
enum EClusterUnionMethod : uint8_t
{
	EClusterUnionMethod__PointImplicit0                                              = 0,
	EClusterUnionMethod__DelaunayTriangulation1                                      = 1,
	EClusterUnionMethod__MinimalSpanningSubsetDelaunayTriangulation2                 = 2,
	EClusterUnionMethod__PointImplicitAugmentedWithMinimalDelaunay3                  = 3,
	EClusterUnionMethod__BoundsOverlapFilteredDelaunayTriangulation4                 = 4,
	EClusterUnionMethod__None5                                                       = 5,
	EClusterUnionMethod__EClusterUnionMethod_MAX6                                    = 6
};

/// Enum /Script/Chaos.EGeometryCollectionCacheType
/// Size: 0x05
enum EGeometryCollectionCacheType : uint8_t
{
	EGeometryCollectionCacheType__None0                                              = 0,
	EGeometryCollectionCacheType__Record1                                            = 1,
	EGeometryCollectionCacheType__Play2                                              = 2,
	EGeometryCollectionCacheType__RecordAndPlay3                                     = 3,
	EGeometryCollectionCacheType__EGeometryCollectionCacheType_MAX4                  = 4
};

