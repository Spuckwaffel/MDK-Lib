
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/ClothingSystemRuntimeInterface.ClothingAssetBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UClothingAssetBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ImportedFilePath                                            OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FGuid)                                     AssetGuid                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationFactory
/// Size: 0x0000 (0x000028 - 0x000028)
class UClothingSimulationFactory : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor
/// Size: 0x0008 (0x000028 - 0x000030)
class UClothingSimulationInteractor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated
	// void PhysicsAssetUpdated();                                                                                              // [0x2627840] Native|Public|BlueprintCallable 
	// Function /Script/ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated
	// void ClothConfigUpdated();                                                                                               // [0x1296620] Native|Public|BlueprintCallable 
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionData
/// Size: 0x0030 (0x000000 - 0x000030)
class FClothCollisionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FClothCollisionPrim_Sphere>)        Spheres                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FClothCollisionPrim_SphereConnection>) SphereConnections                                        OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FClothCollisionPrim_Convex>)        Convexes                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
/// Size: 0x0018 (0x000000 - 0x000018)
class FClothCollisionPrim_Convex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FPlane>)                            Planes                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   BoneIndex                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_SphereConnection
/// Size: 0x0008 (0x000000 - 0x000008)
class FClothCollisionPrim_SphereConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SphereIndices                                               OFFSET(get<int32_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
/// Size: 0x0014 (0x000000 - 0x000014)
class FClothCollisionPrim_Sphere : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   BoneIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   LocalPosition                                               OFFSET(getStruct<T>, {0x8, 12, 0, 0})
};

