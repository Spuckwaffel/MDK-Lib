
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ClothingSystemRuntimeInterface
/// dependency: CoreUObject

/// Class /Script/ClothingSystemRuntime.ClothingAssetCustomData
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingAssetCustomData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntime.ClothingAsset
/// Size: 0x0120 (0x000048 - 0x000168)
class UClothingAsset : public UClothingAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(UPhysicsAsset*)                            PhysicsAsset                                                OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FClothConfig)                              ClothConfig                                                 OFFSET(getStruct<T>, {0x50, 196, 0, 0})
	CMember(TArray<FClothLODData>)                     LODData                                                     OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TArray<int32_t>)                           LodMap                                                      OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<FName>)                             UsedBoneNames                                               OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TArray<int32_t>)                           UsedBoneIndices                                             OFFSET(get<T>, {0x148, 16, 0, 0})
	DMember(int32_t)                                   ReferenceBoneIndex                                          OFFSET(get<int32_t>, {0x158, 4, 0, 0})
	CMember(UClothingAssetCustomData*)                 CustomData                                                  OFFSET(get<T>, {0x160, 8, 0, 0})
};

/// Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingSimulationFactoryNv : public UClothingSimulationFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntime.ClothingSimulationInteractorNv
/// Size: 0x0010 (0x000030 - 0x000040)
class UClothingSimulationInteractorNv : public UClothingSimulationInteractor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:


	/// Functions
	// Function /Script/ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveSpringStiffness
	// void SetAnimDriveSpringStiffness(float InStiffness);                                                                     // [0x2769540] Final|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntime.ClothingSimulationInteractorNv.SetAnimDriveDamperStiffness
	// void SetAnimDriveDamperStiffness(float InStiffness);                                                                     // [0x27694c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntime.ClothingSimulationInteractorNv.EnableGravityOverride
	// void EnableGravityOverride(FVector& InVector);                                                                           // [0x2769430] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ClothingSystemRuntime.ClothingSimulationInteractorNv.DisableGravityOverride
	// void DisableGravityOverride();                                                                                           // [0x2769410] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ClothingSystemRuntime.ClothConfig
/// Size: 0x00C4 (0x000000 - 0x0000C4)
class FClothConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 196;

public:
	CMember(EClothingWindMethod)                       WindMethod                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FClothConstraintSetup)                     VerticalConstraintConfig                                    OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FClothConstraintSetup)                     HorizontalConstraintConfig                                  OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	SMember(FClothConstraintSetup)                     BendConstraintConfig                                        OFFSET(getStruct<T>, {0x24, 16, 0, 0})
	SMember(FClothConstraintSetup)                     ShearConstraintConfig                                       OFFSET(getStruct<T>, {0x34, 16, 0, 0})
	DMember(float)                                     SelfCollisionRadius                                         OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     SelfCollisionStiffness                                      OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     SelfCollisionCullScale                                      OFFSET(get<float>, {0x4C, 4, 0, 0})
	SMember(FVector)                                   Damping                                                     OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	DMember(float)                                     Friction                                                    OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     WindDragCoefficient                                         OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     WindLiftCoefficient                                         OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FVector)                                   LinearDrag                                                  OFFSET(getStruct<T>, {0x68, 12, 0, 0})
	SMember(FVector)                                   AngularDrag                                                 OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	SMember(FVector)                                   LinearInertiaScale                                          OFFSET(getStruct<T>, {0x80, 12, 0, 0})
	SMember(FVector)                                   AngularInertiaScale                                         OFFSET(getStruct<T>, {0x8C, 12, 0, 0})
	SMember(FVector)                                   CentrifugalInertiaScale                                     OFFSET(getStruct<T>, {0x98, 12, 0, 0})
	DMember(float)                                     SolverFrequency                                             OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     StiffnessFrequency                                          OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     TetherStiffness                                             OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     TetherLimit                                                 OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     AnimDriveSpringStiffness                                    OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     AnimDriveDamperStiffness                                    OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Struct /Script/ClothingSystemRuntime.ClothConstraintSetup
/// Size: 0x0010 (0x000000 - 0x000010)
class FClothConstraintSetup : public MDKBase
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

/// Struct /Script/ClothingSystemRuntime.ClothLODData
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FClothLODData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FClothPhysicalMeshData)                    PhysicalMeshData                                            OFFSET(getStruct<T>, {0x0, 168, 0, 0})
	SMember(FClothCollisionData)                       CollisionData                                               OFFSET(getStruct<T>, {0xA8, 48, 0, 0})
};

/// Struct /Script/ClothingSystemRuntime.ClothPhysicalMeshData
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FClothPhysicalMeshData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<FVector>)                           Vertices                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector>)                           Normals                                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<uint32_t>)                          Indices                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             MaxDistances                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<float>)                             BackstopDistances                                           OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<float>)                             BackstopRadiuses                                            OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<float>)                             AnimDriveMultipliers                                        OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<float>)                             InverseMasses                                               OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FClothVertBoneData>)                BoneData                                                    OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(int32_t)                                   MaxBoneWeights                                              OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   NumFixedVerts                                               OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	CMember(TArray<uint32_t>)                          SelfCollisionIndices                                        OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/ClothingSystemRuntime.ClothVertBoneData
/// Size: 0x0034 (0x000000 - 0x000034)
class FClothVertBoneData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 52;

public:
	DMember(int32_t)                                   NumInfluences                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(uint16_t)                                  BoneIndices                                                 OFFSET(get<uint16_t>, {0x4, 16, 0, 0})
	DMember(float)                                     BoneWeights                                                 OFFSET(get<float>, {0x14, 32, 0, 0})
};

/// Struct /Script/ClothingSystemRuntime.ClothParameterMask_PhysMesh
/// Size: 0x0030 (0x000000 - 0x000030)
class FClothParameterMask_PhysMesh : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     MaskName                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(MaskTarget_PhysMesh)                       CurrentTarget                                               OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(TArray<float>)                             Values                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Enum /Script/ClothingSystemRuntime.EClothingWindMethod
/// Size: 0x03
enum EClothingWindMethod : uint8_t
{
	EClothingWindMethod__Legacy0                                                     = 0,
	EClothingWindMethod__Accurate1                                                   = 1,
	EClothingWindMethod__EClothingWindMethod_MAX2                                    = 2
};

/// Enum /Script/ClothingSystemRuntime.MaskTarget_PhysMesh
/// Size: 0x06
enum MaskTarget_PhysMesh : uint8_t
{
	MaskTarget_PhysMesh__None0                                                       = 0,
	MaskTarget_PhysMesh__MaxDistance1                                                = 1,
	MaskTarget_PhysMesh__BackstopDistance2                                           = 2,
	MaskTarget_PhysMesh__BackstopRadius3                                             = 3,
	MaskTarget_PhysMesh__AnimDriveMultiplier4                                        = 4,
	MaskTarget_PhysMesh__MaskTarget_MAX5                                             = 5
};

