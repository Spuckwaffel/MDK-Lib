
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x0028 (0x0000F0 - 0x000118)
class UProceduralFoliageComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(UProceduralFoliageSpawner*)                FoliageSpawner                                              OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(float)                                     TileOverlap                                                 OFFSET(get<float>, {0xF8, 4, 0, 0})
	CMember(AVolume*)                                  SpawningVolume                                              OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FGuid)                                     ProceduralGuid                                              OFFSET(getStruct<T>, {0x108, 16, 0, 0})
};

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x0020 (0x000860 - 0x000880)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2176;

public:
	CMember(UMulticastDelegate)                        OnInstanceTakePointDamage                                   OFFSET(get<T>, {0x860, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnInstanceTakeRadialDamage                                  OFFSET(get<T>, {0x870, 16, 0, 0})
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0000 (0x000028 - 0x000028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingSphereCount
	// int32_t FoliageOverlappingSphereCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FVector CenterPosition, float Radius); // [0x1c5db00] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Foliage.FoliageStatistics.FoliageOverlappingBoxCount
	// int32_t FoliageOverlappingBoxCount(UObject* WorldContextObject, UStaticMesh* StaticMesh, FBox Box);                      // [0x1c5d9e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x03C8 (0x000028 - 0x0003F0)
class UFoliageType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FGuid)                                     UpdateGuid                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     DensityAdjustmentFactor                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	CMember(EFoliageScaling)                           Scaling                                                     OFFSET(get<T>, {0x44, 1, 0, 0})
	SMember(FFloatInterval)                            ScaleX                                                      OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleY                                                      OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleZ                                                      OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	SMember(FFoliageVertexColorChannelMask)            VertexColorMaskByChannel                                    OFFSET(getStruct<T>, {0x60, 48, 0, 0})
	CMember(TEnumAsByte<FoliageVertexColorMask>)       VertexColorMask                                             OFFSET(get<T>, {0x90, 1, 0, 0})
	DMember(float)                                     VertexColorMaskThreshold                                    OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(bool)                                      VertexColorMaskInvert                                       OFFSET(get<bool>, {0x98, 1, 1, 0})
	SMember(FFloatInterval)                            ZOffset                                                     OFFSET(getStruct<T>, {0x9C, 8, 0, 0})
	DMember(bool)                                      AlignToNormal                                               OFFSET(get<bool>, {0xA4, 1, 1, 0})
	DMember(float)                                     AlignMaxAngle                                               OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(bool)                                      RandomYaw                                                   OFFSET(get<bool>, {0xAC, 1, 1, 0})
	DMember(float)                                     RandomPitchAngle                                            OFFSET(get<float>, {0xB0, 4, 0, 0})
	SMember(FFloatInterval)                            GroundSlopeAngle                                            OFFSET(getStruct<T>, {0xB4, 8, 0, 0})
	SMember(FFloatInterval)                            Height                                                      OFFSET(getStruct<T>, {0xBC, 8, 0, 0})
	CMember(TArray<FName>)                             LandscapeLayers                                             OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FName)                                     LandscapeLayer                                              OFFSET(getStruct<T>, {0xD8, 8, 0, 0})
	DMember(bool)                                      CollisionWithWorld                                          OFFSET(get<bool>, {0xE0, 1, 1, 0})
	SMember(FVector)                                   CollisionScale                                              OFFSET(getStruct<T>, {0xE4, 12, 0, 0})
	DMember(float)                                     MinimumLayerWeight                                          OFFSET(get<float>, {0xF0, 4, 0, 0})
	SMember(FBoxSphereBounds)                          MeshBounds                                                  OFFSET(getStruct<T>, {0xF4, 28, 0, 0})
	SMember(FVector)                                   LowBoundOriginRadius                                        OFFSET(getStruct<T>, {0x110, 12, 0, 0})
	CMember(TEnumAsByte<EComponentMobility>)           Mobility                                                    OFFSET(get<T>, {0x11C, 1, 0, 0})
	SMember(FInt32Interval)                            CullDistance                                                OFFSET(getStruct<T>, {0x120, 8, 0, 0})
	DMember(bool)                                      bEnableStaticLighting                                       OFFSET(get<bool>, {0x128, 1, 1, 0})
	DMember(bool)                                      CastShadow                                                  OFFSET(get<bool>, {0x128, 1, 1, 1})
	DMember(bool)                                      bAffectDynamicIndirectLighting                              OFFSET(get<bool>, {0x128, 1, 1, 2})
	DMember(bool)                                      bAffectDistanceFieldLighting                                OFFSET(get<bool>, {0x128, 1, 1, 3})
	DMember(bool)                                      bCastDynamicShadow                                          OFFSET(get<bool>, {0x128, 1, 1, 4})
	DMember(bool)                                      bCastStaticShadow                                           OFFSET(get<bool>, {0x128, 1, 1, 5})
	DMember(bool)                                      bCastShadowAsTwoSided                                       OFFSET(get<bool>, {0x128, 1, 1, 6})
	DMember(bool)                                      bReceivesDecals                                             OFFSET(get<bool>, {0x128, 1, 1, 7})
	DMember(bool)                                      bOverrideLightMapRes                                        OFFSET(get<bool>, {0x129, 1, 1, 0})
	DMember(int32_t)                                   OverriddenLightMapRes                                       OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	CMember(ELightmapType)                             LightmapType                                                OFFSET(get<T>, {0x130, 1, 0, 0})
	DMember(bool)                                      bUseAsOccluder                                              OFFSET(get<bool>, {0x134, 1, 1, 0})
	SMember(FBodyInstance)                             BodyInstance                                                OFFSET(getStruct<T>, {0x140, 480, 0, 0})
	CMember(TEnumAsByte<EHasCustomNavigableGeometry>)  CustomNavigableGeometry                                     OFFSET(get<T>, {0x320, 1, 0, 0})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x321, 1, 0, 0})
	DMember(bool)                                      bRenderCustomDepth                                          OFFSET(get<bool>, {0x324, 1, 1, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     OFFSET(get<int32_t>, {0x328, 4, 0, 0})
	DMember(float)                                     CollisionRadius                                             OFFSET(get<float>, {0x32C, 4, 0, 0})
	DMember(float)                                     ShadeRadius                                                 OFFSET(get<float>, {0x330, 4, 0, 0})
	DMember(int32_t)                                   NumSteps                                                    OFFSET(get<int32_t>, {0x334, 4, 0, 0})
	DMember(float)                                     InitialSeedDensity                                          OFFSET(get<float>, {0x338, 4, 0, 0})
	DMember(float)                                     AverageSpreadDistance                                       OFFSET(get<float>, {0x33C, 4, 0, 0})
	DMember(float)                                     SpreadVariance                                              OFFSET(get<float>, {0x340, 4, 0, 0})
	DMember(int32_t)                                   SeedsPerStep                                                OFFSET(get<int32_t>, {0x344, 4, 0, 0})
	DMember(int32_t)                                   DistributionSeed                                            OFFSET(get<int32_t>, {0x348, 4, 0, 0})
	DMember(float)                                     MaxInitialSeedOffset                                        OFFSET(get<float>, {0x34C, 4, 0, 0})
	DMember(bool)                                      bCanGrowInShade                                             OFFSET(get<bool>, {0x350, 1, 0, 0})
	DMember(bool)                                      bSpawnsInShade                                              OFFSET(get<bool>, {0x351, 1, 0, 0})
	DMember(float)                                     MaxInitialAge                                               OFFSET(get<float>, {0x354, 4, 0, 0})
	DMember(float)                                     MaxAge                                                      OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(float)                                     OverlapPriority                                             OFFSET(get<float>, {0x35C, 4, 0, 0})
	SMember(FFloatInterval)                            ProceduralScale                                             OFFSET(getStruct<T>, {0x360, 8, 0, 0})
	SMember(FRuntimeFloatCurve)                        ScaleCurve                                                  OFFSET(getStruct<T>, {0x368, 120, 0, 0})
	DMember(int32_t)                                   ChangeCount                                                 OFFSET(get<int32_t>, {0x3E0, 4, 0, 0})
	DMember(bool)                                      ReapplyDensity                                              OFFSET(get<bool>, {0x3E4, 1, 1, 0})
	DMember(bool)                                      ReapplyRadius                                               OFFSET(get<bool>, {0x3E4, 1, 1, 1})
	DMember(bool)                                      ReapplyAlignToNormal                                        OFFSET(get<bool>, {0x3E4, 1, 1, 2})
	DMember(bool)                                      ReapplyRandomYaw                                            OFFSET(get<bool>, {0x3E4, 1, 1, 3})
	DMember(bool)                                      ReapplyScaling                                              OFFSET(get<bool>, {0x3E4, 1, 1, 4})
	DMember(bool)                                      ReapplyScaleX                                               OFFSET(get<bool>, {0x3E4, 1, 1, 5})
	DMember(bool)                                      ReapplyScaleY                                               OFFSET(get<bool>, {0x3E4, 1, 1, 6})
	DMember(bool)                                      ReapplyScaleZ                                               OFFSET(get<bool>, {0x3E4, 1, 1, 7})
	DMember(bool)                                      ReapplyRandomPitchAngle                                     OFFSET(get<bool>, {0x3E5, 1, 1, 0})
	DMember(bool)                                      ReapplyGroundSlope                                          OFFSET(get<bool>, {0x3E5, 1, 1, 1})
	DMember(bool)                                      ReapplyHeight                                               OFFSET(get<bool>, {0x3E5, 1, 1, 2})
	DMember(bool)                                      ReapplyLandscapeLayers                                      OFFSET(get<bool>, {0x3E5, 1, 1, 3})
	DMember(bool)                                      ReapplyZOffset                                              OFFSET(get<bool>, {0x3E5, 1, 1, 4})
	DMember(bool)                                      ReapplyCollisionWithWorld                                   OFFSET(get<bool>, {0x3E5, 1, 1, 5})
	DMember(bool)                                      ReapplyVertexColorMask                                      OFFSET(get<bool>, {0x3E5, 1, 1, 6})
	DMember(bool)                                      bEnableDensityScaling                                       OFFSET(get<bool>, {0x3E5, 1, 1, 7})
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x0020 (0x0003F0 - 0x000410)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(UStaticMesh*)                              Mesh                                                        OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               OverrideMaterials                                           OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(UClass*)                                   ComponentClass                                              OFFSET(get<T>, {0x400, 8, 0, 0})
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x0050 (0x000318 - 0x000368)
class AInstancedFoliageActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0060 (0x000328 - 0x000388)
class AInteractiveFoliageActor : public AStaticMeshActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(UCapsuleComponent*)                        CapsuleComponent                                            OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FVector)                                   TouchingActorEntryPosition                                  OFFSET(getStruct<T>, {0x330, 12, 0, 0})
	SMember(FVector)                                   FoliageVelocity                                             OFFSET(getStruct<T>, {0x33C, 12, 0, 0})
	SMember(FVector)                                   FoliageForce                                                OFFSET(getStruct<T>, {0x348, 12, 0, 0})
	SMember(FVector)                                   FoliagePosition                                             OFFSET(getStruct<T>, {0x354, 12, 0, 0})
	DMember(float)                                     FoliageDamageImpulseScale                                   OFFSET(get<float>, {0x360, 4, 0, 0})
	DMember(float)                                     FoliageTouchImpulseScale                                    OFFSET(get<float>, {0x364, 4, 0, 0})
	DMember(float)                                     FoliageStiffness                                            OFFSET(get<float>, {0x368, 4, 0, 0})
	DMember(float)                                     FoliageStiffnessQuadratic                                   OFFSET(get<float>, {0x36C, 4, 0, 0})
	DMember(float)                                     FoliageDamping                                              OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(float)                                     MaxDamageImpulse                                            OFFSET(get<float>, {0x374, 4, 0, 0})
	DMember(float)                                     MaxTouchImpulse                                             OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(float)                                     MaxForce                                                    OFFSET(get<float>, {0x37C, 4, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x380, 4, 0, 0})


	/// Functions
	// Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched
	// void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // [0x1c5d7f0] Final|Native|Protected|HasOutParms 
};

/// Class /Script/Foliage.InteractiveFoliageComponent
/// Size: 0x0010 (0x0006D0 - 0x0006E0)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0008 (0x000350 - 0x000358)
class AProceduralFoliageBlockingVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(AProceduralFoliageVolume*)                 ProceduralFoliageVolume                                     OFFSET(get<T>, {0x350, 8, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0048 (0x000028 - 0x000070)
class UProceduralFoliageSpawner : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     TileSize                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   NumUniqueTiles                                              OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     MinimumQuadTreeSize                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TArray<FFoliageTypeObject>)                FoliageTypes                                                OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bNeedsSimulation                                            OFFSET(get<bool>, {0x50, 1, 0, 0})


	/// Functions
	// Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
	// void Simulate(int32_t NumSteps);                                                                                         // [0x1c5dc50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0130 (0x000028 - 0x000158)
class UProceduralFoliageTile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UProceduralFoliageSpawner*)                FoliageSpawner                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FProceduralFoliageInstance>)        InstancesArray                                              OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0008 (0x000350 - 0x000358)
class AProceduralFoliageVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(UProceduralFoliageComponent*)              ProceduralComponent                                         OFFSET(get<T>, {0x350, 8, 0, 0})
};

/// Struct /Script/Foliage.FoliageVertexColorChannelMask
/// Size: 0x000C (0x000000 - 0x00000C)
class FFoliageVertexColorChannelMask : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      UseMask                                                     OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(float)                                     MaskThreshold                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      InvertMask                                                  OFFSET(get<bool>, {0x8, 1, 1, 0})
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (0x000000 - 0x000020)
class FFoliageTypeObject : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UObject*)                                  FoliageTypeObject                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UFoliageType_InstancedStaticMesh*)         TypeInstance                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsAsset                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(UClass*)                                   Type                                                        OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0060 (0x000000 - 0x000060)
class FProceduralFoliageInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     Age                                                         OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(UFoliageType_InstancedStaticMesh*)         Type                                                        OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Enum /Script/Foliage.EFoliageScaling
/// Size: 0x06
enum EFoliageScaling : uint8_t
{
	EFoliageScaling__Uniform0                                                        = 0,
	EFoliageScaling__Free1                                                           = 1,
	EFoliageScaling__LockXY2                                                         = 2,
	EFoliageScaling__LockXZ3                                                         = 3,
	EFoliageScaling__LockYZ4                                                         = 4,
	EFoliageScaling__EFoliageScaling_MAX5                                            = 5
};

/// Enum /Script/Foliage.EVertexColorMaskChannel
/// Size: 0x06
enum EVertexColorMaskChannel : uint8_t
{
	EVertexColorMaskChannel__Red0                                                    = 0,
	EVertexColorMaskChannel__Green1                                                  = 1,
	EVertexColorMaskChannel__Blue2                                                   = 2,
	EVertexColorMaskChannel__Alpha3                                                  = 3,
	EVertexColorMaskChannel__MAX_None4                                               = 4,
	EVertexColorMaskChannel__EVertexColorMaskChannel_MAX5                            = 5
};

/// Enum /Script/Foliage.FoliageVertexColorMask
/// Size: 0x06
enum FoliageVertexColorMask : uint8_t
{
	FOLIAGEVERTEXCOLORMASK_Disabled0                                                 = 0,
	FOLIAGEVERTEXCOLORMASK_Red1                                                      = 1,
	FOLIAGEVERTEXCOLORMASK_Green2                                                    = 2,
	FOLIAGEVERTEXCOLORMASK_Blue3                                                     = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha4                                                    = 4,
	FOLIAGEVERTEXCOLORMASK_MAX5                                                      = 5
};

/// Enum /Script/Foliage.ESimulationQuery
/// Size: 0x04
enum ESimulationQuery : uint8_t
{
	ESimulationQuery__CollisionOverlap0                                              = 1,
	ESimulationQuery__ShadeOverlap1                                                  = 2,
	ESimulationQuery__AnyOverlap2                                                    = 3,
	ESimulationQuery__ESimulationQuery_MAX3                                          = 4
};

/// Enum /Script/Foliage.ESimulationOverlap
/// Size: 0x04
enum ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap0                                            = 0,
	ESimulationOverlap__ShadeOverlap1                                                = 1,
	ESimulationOverlap__None2                                                        = 2,
	ESimulationOverlap__ESimulationOverlap_MAX3                                      = 3
};

