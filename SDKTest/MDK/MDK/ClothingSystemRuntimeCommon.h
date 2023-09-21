
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

/// Class /Script/ClothingSystemRuntimeCommon.ClothConfigCommon
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothConfigCommon : public UClothConfigBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothSharedConfigCommon
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothSharedConfigCommon : public UClothConfigCommon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCustomData
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingAssetCustomData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCommon
/// Size: 0x00A8 (0x000048 - 0x0000F0)
class UClothingAssetCommon : public UClothingAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(UPhysicsAsset*)                            PhysicsAsset                                                OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TMap<FName, UClothConfigBase*>)            ClothConfigs                                                OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TArray<FClothLODDataCommon>)               LodData                                                     OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<int32_t>)                           LodMap                                                      OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FName>)                             UsedBoneNames                                               OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<int32_t>)                           UsedBoneIndices                                             OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(int32_t)                                   ReferenceBoneIndex                                          OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	CMember(UClothingAssetCustomData*)                 CustomData                                                  OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
/// Size: 0x0140 (0x000028 - 0x000168)
class UClothLODDataCommon_Legacy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(UClothPhysicalMeshDataBase_Legacy*)        PhysicalMeshData                                            OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FClothPhysicalMeshData)                    ClothPhysicalMeshData                                       OFFSET(getStruct<T>, {0x30, 216, 0, 0})
	SMember(FClothCollisionData)                       CollisionData                                               OFFSET(getStruct<T>, {0x108, 64, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
/// Size: 0x0010 (0x000000 - 0x000010)
class FClothConstraintSetup_Legacy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StiffnessMultiplier                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StretchLimit                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CompressionLimit                                            OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothConfig_Legacy
/// Size: 0x0130 (0x000000 - 0x000130)
class FClothConfig_Legacy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(EClothingWindMethod_Legacy)                WindMethod                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              VerticalConstraintConfig                                    OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              HorizontalConstraintConfig                                  OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              BendConstraintConfig                                        OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              ShearConstraintConfig                                       OFFSET(getStruct<T>, {0x34, 16, 0, 0})
	DMember(float)                                     SelfCollisionRadius                                         OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     SelfCollisionStiffness                                      OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     SelfCollisionCullScale                                      OFFSET(get<float>, {0x4C, 4, 0, 0})
	SMember(FVector)                                   Damping                                                     OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     WindDragCoefficient                                         OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     WindLiftCoefficient                                         OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FVector)                                   LinearDrag                                                  OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FVector)                                   AngularDrag                                                 OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FVector)                                   LinearInertiaScale                                          OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FVector)                                   AngularInertiaScale                                         OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	SMember(FVector)                                   CentrifugalInertiaScale                                     OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	DMember(float)                                     SolverFrequency                                             OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     StiffnessFrequency                                          OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0xF8, 4, 0, 0})
	SMember(FVector)                                   GravityOverride                                             OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	DMember(bool)                                      bUseGravityOverride                                         OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(float)                                     TetherStiffness                                             OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     TetherLimit                                                 OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     AnimDriveSpringStiffness                                    OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     AnimDriveDamperStiffness                                    OFFSET(get<float>, {0x12C, 4, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeCommon.PointWeightMap
/// Size: 0x0010 (0x000000 - 0x000010)
class FPointWeightMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<float>)                             Values                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon
/// Size: 0x0148 (0x000000 - 0x000148)
class FClothLODDataCommon : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FClothPhysicalMeshData)                    PhysicalMeshData                                            OFFSET(getStruct<T>, {0x0, 216, 0, 0})
	SMember(FClothCollisionData)                       CollisionData                                               OFFSET(getStruct<T>, {0xD8, 64, 0, 0})
	DMember(bool)                                      bUseMultipleInfluences                                      OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(float)                                     SkinningKernelRadius                                        OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(bool)                                      bSmoothTransition                                           OFFSET(get<bool>, {0x120, 1, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothPhysicalMeshData
/// Size: 0x00D8 (0x000000 - 0x0000D8)
class FClothPhysicalMeshData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<FVector3f>)                         Vertices                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector3f>)                         Normals                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<uint32_t>)                          Indices                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TMap<uint32_t, FPointWeightMap>)           WeightMaps                                                  OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<float>)                             InverseMasses                                               OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FClothVertBoneData>)                BoneData                                                    OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<uint32_t>)                          SelfCollisionIndices                                        OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FClothTetherData)                          EuclideanTethers                                            OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FClothTetherData)                          GeodesicTethers                                             OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	DMember(int32_t)                                   MaxBoneWeights                                              OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   NumFixedVerts                                               OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothTetherData
/// Size: 0x0010 (0x000000 - 0x000010)
class FClothTetherData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
/// Size: 0x0028 (0x000000 - 0x000028)
class FClothParameterMask_Legacy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     MaskName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EWeightMapTargetCommon)                    CurrentTarget                                               OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(TArray<float>)                             Values                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Enum /Script/ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
/// Size: 0x03
enum EClothingWindMethod_Legacy : uint8_t
{
	EClothingWindMethod_Legacy__Legacy0                                              = 0,
	EClothingWindMethod_Legacy__Accurate1                                            = 1,
	EClothingWindMethod_Legacy__EClothingWindMethod_MAX2                             = 2
};

/// Enum /Script/ClothingSystemRuntimeCommon.EWeightMapTargetCommon
/// Size: 0x07
enum EWeightMapTargetCommon : uint8_t
{
	EWeightMapTargetCommon__None0                                                    = 0,
	EWeightMapTargetCommon__MaxDistance1                                             = 1,
	EWeightMapTargetCommon__BackstopDistance2                                        = 2,
	EWeightMapTargetCommon__BackstopRadius3                                          = 3,
	EWeightMapTargetCommon__AnimDriveStiffness4                                      = 4,
	EWeightMapTargetCommon__AnimDriveDamping_DEPRECATED5                             = 5,
	EWeightMapTargetCommon__EWeightMapTargetCommon_MAX6                              = 6
};

/// Enum /Script/ClothingSystemRuntimeCommon.EClothMassMode
/// Size: 0x05
enum EClothMassMode : uint8_t
{
	EClothMassMode__UniformMass0                                                     = 0,
	EClothMassMode__TotalMass1                                                       = 1,
	EClothMassMode__Density2                                                         = 2,
	EClothMassMode__MaxClothMassMode3                                                = 3,
	EClothMassMode__EClothMassMode_MAX4                                              = 4
};

