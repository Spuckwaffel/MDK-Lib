/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ClothingSystemRuntimeInterface.

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
/// Size: 0x0020 (0x000000 - 0x000020)
class FClothCollisionPrim_Sphere : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(int32_t)                                   BoneIndex                                                   ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   LocalPosition                                               ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
/// Size: 0x0008 (0x000000 - 0x000008)
class FClothCollisionPrim_SphereConnection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SphereIndices                                               ___ OFFSET(get<int32_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
/// Size: 0x0030 (0x000000 - 0x000030)
class FClothCollisionPrim_ConvexFace : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FPlane)                                    Plane                                                       ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TArray<int32_t>)                           Indices                                                     ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
/// Size: 0x0028 (0x000000 - 0x000028)
class FClothCollisionPrim_Convex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FClothCollisionPrim_ConvexFace>)    Faces                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector>)                           SurfacePoints                                               ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   BoneIndex                                                   ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
/// Size: 0x0060 (0x000000 - 0x000060)
class FClothCollisionPrim_Box : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   LocalPosition                                               ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FQuat)                                     LocalRotation                                               ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FVector)                                   HalfExtents                                                 ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	DMember(int32_t)                                   BoneIndex                                                   ___ OFFSET(get<int32_t>, {0x58, 4, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothVertBoneData
/// Size: 0x004C (0x000000 - 0x00004C)
class FClothVertBoneData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 76;

public:
	DMember(int32_t)                                   NumInfluences                                               ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(uint16_t)                                  BoneIndices                                                 ___ OFFSET(get<uint16_t>, {0x4, 24, 0, 0})
	DMember(float)                                     BoneWeights                                                 ___ OFFSET(get<float>, {0x1C, 48, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionData
/// Size: 0x0040 (0x000000 - 0x000040)
class FClothCollisionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FClothCollisionPrim_Sphere>)        Spheres                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FClothCollisionPrim_SphereConnection>) SphereConnections                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FClothCollisionPrim_Convex>)        Convexes                                                    ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FClothCollisionPrim_Box>)           Boxes                                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingAssetBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UClothingAssetBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ImportedFilePath                                            ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FGuid)                                     AssetGuid                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothConfigBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothConfigBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothSharedSimConfigBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingSimulationFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingInteractor
/// Size: 0x0008 (0x000028 - 0x000030)
class UClothingInteractor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
/// Size: 0x0068 (0x000028 - 0x000090)
class UClothingSimulationInteractor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TMap<FName, UClothingInteractor*>)         ClothingInteractors                                         ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UClothPhysicalMeshDataBase_Legacy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(TArray<FVector3f>)                         Vertices                                                    ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FVector3f>)                         Normals                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<uint32_t>)                          Indices                                                     ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<float>)                             InverseMasses                                               ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FClothVertBoneData>)                BoneData                                                    ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   NumFixedVerts                                               ___ OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   MaxBoneWeights                                              ___ OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	CMember(TArray<uint32_t>)                          SelfCollisionIndices                                        ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

