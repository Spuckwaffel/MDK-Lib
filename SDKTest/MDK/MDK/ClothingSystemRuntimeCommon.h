
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
	CMember(UPhysicsAsset*)                            PhysicsAsset                                                ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TMap<FName, UClothConfigBase*>)            ClothConfigs                                                ___ OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TArray<FClothLODDataCommon>)               LodData                                                     ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<int32_t>)                           LodMap                                                      ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FName>)                             UsedBoneNames                                               ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<int32_t>)                           UsedBoneIndices                                             ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(int32_t)                                   ReferenceBoneIndex                                          ___ OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	CMember(UClothingAssetCustomData*)                 CustomData                                                  ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
/// Size: 0x0140 (0x000028 - 0x000168)
class UClothLODDataCommon_Legacy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(UClothPhysicalMeshDataBase_Legacy*)        PhysicalMeshData                                            ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FClothPhysicalMeshData)                    ClothPhysicalMeshData                                       ___ OFFSET(get<T>, {0x30, 216, 0, 0})
	SMember(FClothCollisionData)                       CollisionData                                               ___ OFFSET(get<T>, {0x108, 64, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
/// Size: 0x0010 (0x000000 - 0x000010)
class FClothConstraintSetup_Legacy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Stiffness                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StiffnessMultiplier                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     StretchLimit                                                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CompressionLimit                                            ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothConfig_Legacy
/// Size: 0x0130 (0x000000 - 0x000130)
class FClothConfig_Legacy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(EClothingWindMethod_Legacy)                WindMethod                                                  ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              VerticalConstraintConfig                                    ___ OFFSET(get<T>, {0x4, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              HorizontalConstraintConfig                                  ___ OFFSET(get<T>, {0x14, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              BendConstraintConfig                                        ___ OFFSET(get<T>, {0x24, 16, 0, 0})
	SMember(FClothConstraintSetup_Legacy)              ShearConstraintConfig                                       ___ OFFSET(get<T>, {0x34, 16, 0, 0})
	DMember(float)                                     SelfCollisionRadius                                         ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     SelfCollisionStiffness                                      ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     SelfCollisionCullScale                                      ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	SMember(FVector)                                   Damping                                                     ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	DMember(float)                                     Friction                                                    ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     WindDragCoefficient                                         ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     WindLiftCoefficient                                         ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FVector)                                   LinearDrag                                                  ___ OFFSET(get<T>, {0x78, 24, 0, 0})
	SMember(FVector)                                   AngularDrag                                                 ___ OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FVector)                                   LinearInertiaScale                                          ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FVector)                                   AngularInertiaScale                                         ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FVector)                                   CentrifugalInertiaScale                                     ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	DMember(float)                                     SolverFrequency                                             ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     StiffnessFrequency                                          ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     GravityScale                                                ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	SMember(FVector)                                   GravityOverride                                             ___ OFFSET(get<T>, {0x100, 24, 0, 0})
	DMember(bool)                                      bUseGravityOverride                                         ___ OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(float)                                     TetherStiffness                                             ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     TetherLimit                                                 ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     AnimDriveSpringStiffness                                    ___ OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     AnimDriveDamperStiffness                                    ___ OFFSET(get<float>, {0x12C, 4, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeCommon.PointWeightMap
/// Size: 0x0010 (0x000000 - 0x000010)
class FPointWeightMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<float>)                             Values                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothLODDataCommon
/// Size: 0x0148 (0x000000 - 0x000148)
class FClothLODDataCommon : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FClothPhysicalMeshData)                    PhysicalMeshData                                            ___ OFFSET(get<T>, {0x0, 216, 0, 0})
	SMember(FClothCollisionData)                       CollisionData                                               ___ OFFSET(get<T>, {0xD8, 64, 0, 0})
	DMember(bool)                                      bUseMultipleInfluences                                      ___ OFFSET(get<bool>, {0x118, 1, 0, 0})
	DMember(float)                                     SkinningKernelRadius                                        ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(bool)                                      bSmoothTransition                                           ___ OFFSET(get<bool>, {0x120, 1, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothPhysicalMeshData
/// Size: 0x00D8 (0x000000 - 0x0000D8)
class FClothPhysicalMeshData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TArray<FVector3f>)                         Vertices                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector3f>)                         Normals                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<uint32_t>)                          Indices                                                     ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TMap<uint32_t, FPointWeightMap>)           WeightMaps                                                  ___ OFFSET(get<T>, {0x30, 80, 0, 0})
	CMember(TArray<float>)                             InverseMasses                                               ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FClothVertBoneData>)                BoneData                                                    ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<uint32_t>)                          SelfCollisionIndices                                        ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FClothTetherData)                          EuclideanTethers                                            ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FClothTetherData)                          GeodesicTethers                                             ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	DMember(int32_t)                                   MaxBoneWeights                                              ___ OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	DMember(int32_t)                                   NumFixedVerts                                               ___ OFFSET(get<int32_t>, {0xD4, 4, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothTetherData
/// Size: 0x0010 (0x000000 - 0x000010)
class FClothTetherData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
/// Size: 0x0028 (0x000000 - 0x000028)
class FClothParameterMask_Legacy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     MaskName                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EWeightMapTargetCommon)                    CurrentTarget                                               ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	DMember(float)                                     MaxValue                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinValue                                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(TArray<float>)                             Values                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
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

