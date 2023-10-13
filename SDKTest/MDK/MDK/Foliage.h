
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x0030 (0x000900 - 0x000930)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
	SMember(FMulticastInlineDelegate)                  OnInstanceTakePointDamage                                   OFFSET(getStruct<T>, {0x8F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInstanceTakeRadialDamage                                  OFFSET(getStruct<T>, {0x908, 16, 0, 0})
	DMember(bool)                                      bEnableDiscardOnLoad                                        OFFSET(get<bool>, {0x918, 1, 0, 0})
	SMember(FGuid)                                     GenerationGuid                                              OFFSET(getStruct<T>, {0x91C, 16, 0, 0})
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x0490 (0x000028 - 0x0004B8)
class UFoliageType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	SMember(FGuid)                                     UpdateGuid                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     DensityAdjustmentFactor                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bSingleInstanceModeOverrideRadius                           OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     SingleInstanceModeRadius                                    OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(EFoliageScaling)                           Scaling                                                     OFFSET(get<T>, {0x4C, 1, 0, 0})
	SMember(FFloatInterval)                            ScaleX                                                      OFFSET(getStruct<T>, {0x50, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleY                                                      OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleZ                                                      OFFSET(getStruct<T>, {0x60, 8, 0, 0})
	SMember(FFoliageVertexColorChannelMask)            VertexColorMaskByChannel                                    OFFSET(getStruct<T>, {0x68, 48, 0, 0})
	CMember(TEnumAsByte<FoliageVertexColorMask>)       VertexColorMask                                             OFFSET(get<T>, {0x98, 1, 0, 0})
	DMember(float)                                     VertexColorMaskThreshold                                    OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(bool)                                      VertexColorMaskInvert                                       OFFSET(get<bool>, {0xA0, 1, 1, 0})
	SMember(FFloatInterval)                            ZOffset                                                     OFFSET(getStruct<T>, {0xA4, 8, 0, 0})
	DMember(bool)                                      AlignToNormal                                               OFFSET(get<bool>, {0xAC, 1, 1, 0})
	DMember(bool)                                      AverageNormal                                               OFFSET(get<bool>, {0xAC, 1, 1, 1})
	DMember(bool)                                      AverageNormalSingleComponent                                OFFSET(get<bool>, {0xAC, 1, 1, 2})
	DMember(float)                                     AlignMaxAngle                                               OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      RandomYaw                                                   OFFSET(get<bool>, {0xB4, 1, 1, 0})
	DMember(float)                                     RandomPitchAngle                                            OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FFloatInterval)                            GroundSlopeAngle                                            OFFSET(getStruct<T>, {0xBC, 8, 0, 0})
	SMember(FFloatInterval)                            Height                                                      OFFSET(getStruct<T>, {0xC4, 8, 0, 0})
	CMember(TArray<FName>)                             LandscapeLayers                                             OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(float)                                     MinimumLayerWeight                                          OFFSET(get<float>, {0xE0, 4, 0, 0})
	CMember(TArray<FName>)                             ExclusionLandscapeLayers                                    OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(float)                                     MinimumExclusionLayerWeight                                 OFFSET(get<float>, {0xF8, 4, 0, 0})
	SMember(FName)                                     LandscapeLayer                                              OFFSET(getStruct<T>, {0xFC, 4, 0, 0})
	DMember(bool)                                      CollisionWithWorld                                          OFFSET(get<bool>, {0x100, 1, 1, 0})
	SMember(FVector)                                   CollisionScale                                              OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	DMember(int32_t)                                   AverageNormalSampleCount                                    OFFSET(get<int32_t>, {0x120, 4, 0, 0})
	SMember(FBoxSphereBounds)                          MeshBounds                                                  OFFSET(getStruct<T>, {0x128, 56, 0, 0})
	SMember(FVector)                                   LowBoundOriginRadius                                        OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	CMember(TEnumAsByte<EComponentMobility>)           Mobility                                                    OFFSET(get<T>, {0x178, 1, 0, 0})
	SMember(FInt32Interval)                            CullDistance                                                OFFSET(getStruct<T>, {0x17C, 8, 0, 0})
	DMember(bool)                                      bEnableStaticLighting                                       OFFSET(get<bool>, {0x184, 1, 1, 0})
	DMember(bool)                                      CastShadow                                                  OFFSET(get<bool>, {0x184, 1, 1, 1})
	DMember(bool)                                      bAffectDynamicIndirectLighting                              OFFSET(get<bool>, {0x184, 1, 1, 2})
	DMember(bool)                                      bAffectDistanceFieldLighting                                OFFSET(get<bool>, {0x184, 1, 1, 3})
	DMember(bool)                                      bCastDynamicShadow                                          OFFSET(get<bool>, {0x184, 1, 1, 4})
	DMember(bool)                                      bCastStaticShadow                                           OFFSET(get<bool>, {0x184, 1, 1, 5})
	DMember(bool)                                      bCastContactShadow                                          OFFSET(get<bool>, {0x188, 1, 1, 0})
	DMember(bool)                                      bCastShadowAsTwoSided                                       OFFSET(get<bool>, {0x18C, 1, 1, 0})
	DMember(bool)                                      bReceivesDecals                                             OFFSET(get<bool>, {0x18C, 1, 1, 1})
	DMember(bool)                                      bOverrideLightMapRes                                        OFFSET(get<bool>, {0x18C, 1, 1, 2})
	CMember(EShadowCacheInvalidationBehavior)          ShadowCacheInvalidationBehavior                             OFFSET(get<T>, {0x190, 1, 0, 0})
	DMember(int32_t)                                   OverriddenLightMapRes                                       OFFSET(get<int32_t>, {0x194, 4, 0, 0})
	CMember(ELightmapType)                             LightmapType                                                OFFSET(get<T>, {0x198, 1, 0, 0})
	DMember(bool)                                      bUseAsOccluder                                              OFFSET(get<bool>, {0x19C, 1, 1, 0})
	DMember(bool)                                      bVisibleInRayTracing                                        OFFSET(get<bool>, {0x1A0, 1, 1, 0})
	DMember(bool)                                      bEvaluateWorldPositionOffset                                OFFSET(get<bool>, {0x1A0, 1, 1, 1})
	DMember(int32_t)                                   WorldPositionOffsetDisableDistance                          OFFSET(get<int32_t>, {0x1A4, 4, 0, 0})
	SMember(FBodyInstance)                             BodyInstance                                                OFFSET(getStruct<T>, {0x1A8, 392, 0, 0})
	CMember(TEnumAsByte<EHasCustomNavigableGeometry>)  CustomNavigableGeometry                                     OFFSET(get<T>, {0x330, 1, 0, 0})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x331, 1, 0, 0})
	DMember(bool)                                      bRenderCustomDepth                                          OFFSET(get<bool>, {0x334, 1, 1, 0})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 OFFSET(get<T>, {0x338, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     OFFSET(get<int32_t>, {0x33C, 4, 0, 0})
	DMember(int32_t)                                   TranslucencySortPriority                                    OFFSET(get<int32_t>, {0x340, 4, 0, 0})
	DMember(float)                                     CollisionRadius                                             OFFSET(get<float>, {0x344, 4, 0, 0})
	DMember(float)                                     ShadeRadius                                                 OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(int32_t)                                   NumSteps                                                    OFFSET(get<int32_t>, {0x34C, 4, 0, 0})
	DMember(float)                                     InitialSeedDensity                                          OFFSET(get<float>, {0x350, 4, 0, 0})
	DMember(float)                                     AverageSpreadDistance                                       OFFSET(get<float>, {0x354, 4, 0, 0})
	DMember(float)                                     SpreadVariance                                              OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(int32_t)                                   SeedsPerStep                                                OFFSET(get<int32_t>, {0x35C, 4, 0, 0})
	DMember(int32_t)                                   DistributionSeed                                            OFFSET(get<int32_t>, {0x360, 4, 0, 0})
	DMember(float)                                     MaxInitialSeedOffset                                        OFFSET(get<float>, {0x364, 4, 0, 0})
	DMember(bool)                                      bCanGrowInShade                                             OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(bool)                                      bSpawnsInShade                                              OFFSET(get<bool>, {0x369, 1, 0, 0})
	DMember(float)                                     MaxInitialAge                                               OFFSET(get<float>, {0x36C, 4, 0, 0})
	DMember(float)                                     MaxAge                                                      OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(float)                                     OverlapPriority                                             OFFSET(get<float>, {0x374, 4, 0, 0})
	SMember(FFloatInterval)                            ProceduralScale                                             OFFSET(getStruct<T>, {0x378, 8, 0, 0})
	SMember(FRuntimeFloatCurve)                        ScaleCurve                                                  OFFSET(getStruct<T>, {0x380, 136, 0, 0})
	SMember(FFoliageDensityFalloff)                    DensityFalloff                                              OFFSET(getStruct<T>, {0x408, 144, 0, 0})
	DMember(int32_t)                                   ChangeCount                                                 OFFSET(get<int32_t>, {0x498, 4, 0, 0})
	DMember(bool)                                      ReapplyDensity                                              OFFSET(get<bool>, {0x49C, 1, 1, 0})
	DMember(bool)                                      ReapplyRadius                                               OFFSET(get<bool>, {0x49C, 1, 1, 1})
	DMember(bool)                                      ReapplyAlignToNormal                                        OFFSET(get<bool>, {0x49C, 1, 1, 2})
	DMember(bool)                                      ReapplyRandomYaw                                            OFFSET(get<bool>, {0x49C, 1, 1, 3})
	DMember(bool)                                      ReapplyScaling                                              OFFSET(get<bool>, {0x49C, 1, 1, 4})
	DMember(bool)                                      ReapplyScaleX                                               OFFSET(get<bool>, {0x49C, 1, 1, 5})
	DMember(bool)                                      ReapplyScaleY                                               OFFSET(get<bool>, {0x49C, 1, 1, 6})
	DMember(bool)                                      ReapplyScaleZ                                               OFFSET(get<bool>, {0x49C, 1, 1, 7})
	DMember(bool)                                      ReapplyRandomPitchAngle                                     OFFSET(get<bool>, {0x49D, 1, 1, 0})
	DMember(bool)                                      ReapplyGroundSlope                                          OFFSET(get<bool>, {0x49D, 1, 1, 1})
	DMember(bool)                                      ReapplyHeight                                               OFFSET(get<bool>, {0x49D, 1, 1, 2})
	DMember(bool)                                      ReapplyLandscapeLayers                                      OFFSET(get<bool>, {0x49D, 1, 1, 3})
	DMember(bool)                                      ReapplyZOffset                                              OFFSET(get<bool>, {0x49D, 1, 1, 4})
	DMember(bool)                                      ReapplyCollisionWithWorld                                   OFFSET(get<bool>, {0x49D, 1, 1, 5})
	DMember(bool)                                      ReapplyVertexColorMask                                      OFFSET(get<bool>, {0x49D, 1, 1, 6})
	DMember(bool)                                      bEnableDensityScaling                                       OFFSET(get<bool>, {0x49D, 1, 1, 7})
	DMember(bool)                                      bEnableDiscardOnLoad                                        OFFSET(get<bool>, {0x49E, 1, 1, 0})
	DMember(bool)                                      bEnableCullDistanceScaling                                  OFFSET(get<bool>, {0x49E, 1, 1, 1})
	CMember(TArray<URuntimeVirtualTexture*>)           RuntimeVirtualTextures                                      OFFSET(get<T>, {0x4A0, 16, 0, 0})
	DMember(int32_t)                                   VirtualTextureCullMips                                      OFFSET(get<int32_t>, {0x4B0, 4, 0, 0})
	CMember(ERuntimeVirtualTextureMainPassType)        VirtualTextureRenderPassType                                OFFSET(get<T>, {0x4B4, 1, 0, 0})
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x0018 (0x0004B8 - 0x0004D0)
class UFoliageType_Actor : public UFoliageType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	CMember(UClass*)                                   ActorClass                                                  OFFSET(get<T>, {0x4B8, 8, 0, 0})
	DMember(bool)                                      bShouldAttachToBaseComponent                                OFFSET(get<bool>, {0x4C0, 1, 0, 0})
	DMember(bool)                                      bStaticMeshOnly                                             OFFSET(get<bool>, {0x4C1, 1, 0, 0})
	CMember(UClass*)                                   StaticMeshOnlyComponentClass                                OFFSET(get<T>, {0x4C8, 8, 0, 0})
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x0030 (0x0004B8 - 0x0004E8)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	CMember(UStaticMesh*)                              Mesh                                                        OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               OverrideMaterials                                           OFFSET(get<T>, {0x4C0, 16, 0, 0})
	CMember(TArray<UMaterialInterface*>)               NaniteOverrideMaterials                                     OFFSET(get<T>, {0x4D0, 16, 0, 0})
	CMember(UClass*)                                   ComponentClass                                              OFFSET(get<T>, {0x4E0, 8, 0, 0})
};

/// Class /Script/Foliage.InstancedFoliageActor
/// Size: 0x0050 (0x0002A0 - 0x0002F0)
class AInstancedFoliageActor : public AISMPartitionActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
};

/// Class /Script/Foliage.InteractiveFoliageComponent
/// Size: 0x0010 (0x000620 - 0x000630)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
};

/// Class /Script/Foliage.FoliageStatistics
/// Size: 0x0000 (0x000028 - 0x000028)
class UFoliageStatistics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Foliage.GrassInstancedStaticMeshComponent
/// Size: 0x0000 (0x000900 - 0x000900)
class UGrassInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2304;

public:
};

/// Class /Script/Foliage.InteractiveFoliageActor
/// Size: 0x0090 (0x0002A0 - 0x000330)
class AInteractiveFoliageActor : public AStaticMeshActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(UCapsuleComponent*)                        CapsuleComponent                                            OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(FVector)                                   TouchingActorEntryPosition                                  OFFSET(getStruct<T>, {0x2A8, 24, 0, 0})
	SMember(FVector)                                   FoliageVelocity                                             OFFSET(getStruct<T>, {0x2C0, 24, 0, 0})
	SMember(FVector)                                   FoliageForce                                                OFFSET(getStruct<T>, {0x2D8, 24, 0, 0})
	SMember(FVector)                                   FoliagePosition                                             OFFSET(getStruct<T>, {0x2F0, 24, 0, 0})
	DMember(float)                                     FoliageDamageImpulseScale                                   OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     FoliageTouchImpulseScale                                    OFFSET(get<float>, {0x30C, 4, 0, 0})
	DMember(float)                                     FoliageStiffness                                            OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(float)                                     FoliageStiffnessQuadratic                                   OFFSET(get<float>, {0x314, 4, 0, 0})
	DMember(float)                                     FoliageDamping                                              OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(float)                                     MaxDamageImpulse                                            OFFSET(get<float>, {0x31C, 4, 0, 0})
	DMember(float)                                     MaxTouchImpulse                                             OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(float)                                     MaxForce                                                    OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x328, 4, 0, 0})


	/// Functions
	// Function /Script/Foliage.InteractiveFoliageActor.CapsuleTouched
	// void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& OverlapInfo); // [0x56a4738] Final|Native|Protected|HasOutParms 
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0098 (0x0002C8 - 0x000360)
class AProceduralFoliageBlockingVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(AProceduralFoliageVolume*)                 ProceduralFoliageVolume                                     OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FFoliageDensityFalloff)                    DensityFalloff                                              OFFSET(getStruct<T>, {0x2D0, 144, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UProceduralFoliageComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(UProceduralFoliageSpawner*)                FoliageSpawner                                              OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(float)                                     TileOverlap                                                 OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(AVolume*)                                  SpawningVolume                                              OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FGuid)                                     ProceduralGuid                                              OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0058 (0x000028 - 0x000080)
class UProceduralFoliageSpawner : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     TileSize                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   NumUniqueTiles                                              OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     MinimumQuadTreeSize                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TArray<FFoliageTypeObject>)                FoliageTypes                                                OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bUseOverrideFoliageTerrainMaterials                         OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    OverrideFoliageTerrainMaterials                             OFFSET(get<T>, {0x58, 16, 0, 0})


	/// Functions
	// Function /Script/Foliage.ProceduralFoliageSpawner.Simulate
	// void Simulate(int32_t NumSteps);                                                                                         // [0x56a51b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0148 (0x000028 - 0x000170)
class UProceduralFoliageTile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(UProceduralFoliageSpawner*)                FoliageSpawner                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FProceduralFoliageInstance>)        InstancesArray                                              OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0010 (0x0002C8 - 0x0002D8)
class AProceduralFoliageVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UProceduralFoliageComponent*)              ProceduralComponent                                         OFFSET(get<T>, {0x2D0, 8, 0, 0})
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

/// Struct /Script/Foliage.FoliageDensityFalloff
/// Size: 0x0090 (0x000000 - 0x000090)
class FFoliageDensityFalloff : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bUseFalloffCurve                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        FalloffCurve                                                OFFSET(getStruct<T>, {0x8, 136, 0, 0})
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
	CMember(UFoliageType*)                             TypeInstance                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsAsset                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(UClass*)                                   Type                                                        OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0080 (0x000000 - 0x000080)
class FProceduralFoliageInstance : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Age                                                         OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x58, 4, 0, 0})
	CMember(UFoliageType*)                             Type                                                        OFFSET(get<T>, {0x60, 8, 0, 0})
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

/// Enum /Script/Foliage.ESimulationOverlap
/// Size: 0x04
enum ESimulationOverlap : uint8_t
{
	ESimulationOverlap__CollisionOverlap0                                            = 0,
	ESimulationOverlap__ShadeOverlap1                                                = 1,
	ESimulationOverlap__None2                                                        = 2,
	ESimulationOverlap__ESimulationOverlap_MAX3                                      = 3
};

/// Enum /Script/Foliage.ESimulationQuery
/// Size: 0x05
enum ESimulationQuery : uint8_t
{
	ESimulationQuery__None0                                                          = 0,
	ESimulationQuery__CollisionOverlap1                                              = 1,
	ESimulationQuery__ShadeOverlap2                                                  = 2,
	ESimulationQuery__AnyOverlap3                                                    = 3,
	ESimulationQuery__ESimulationQuery_MAX4                                          = 4
};

