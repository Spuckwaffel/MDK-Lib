/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Foliage.

/// Struct /Script/Foliage.FoliageVertexColorChannelMask
/// Size: 0x000C (0x000000 - 0x00000C)
class FFoliageVertexColorChannelMask : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      UseMask                                                     ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(float)                                     MaskThreshold                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      InvertMask                                                  ___ OFFSET(get<bool>, {0x8, 1, 1, 0})
};

/// Struct /Script/Foliage.FoliageDensityFalloff
/// Size: 0x0090 (0x000000 - 0x000090)
class FFoliageDensityFalloff : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      bUseFalloffCurve                                            ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        FalloffCurve                                                ___ OFFSET(get<T>, {0x8, 136, 0, 0})
};

/// Struct /Script/Foliage.FoliageTypeObject
/// Size: 0x0020 (0x000000 - 0x000020)
class FFoliageTypeObject : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UObject*)                                  FoliageTypeObject                                           ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UFoliageType*)                             TypeInstance                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsAsset                                                    ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(UClass*)                                   Type                                                        ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/Foliage.ProceduralFoliageInstance
/// Size: 0x0080 (0x000000 - 0x000080)
class FProceduralFoliageInstance : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FQuat)                                     Rotation                                                    ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     Age                                                         ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FVector)                                   Normal                                                      ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	CMember(UFoliageType*)                             Type                                                        ___ OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/Foliage.FoliageInstancedStaticMeshComponent
/// Size: 0x0030 (0x000900 - 0x000930)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
	SMember(FMulticastInlineDelegate)                  OnInstanceTakePointDamage                                   ___ OFFSET(get<T>, {0x8F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInstanceTakeRadialDamage                                  ___ OFFSET(get<T>, {0x908, 16, 0, 0})
	DMember(bool)                                      bEnableDiscardOnLoad                                        ___ OFFSET(get<bool>, {0x918, 1, 0, 0})
	SMember(FGuid)                                     GenerationGuid                                              ___ OFFSET(get<T>, {0x91C, 16, 0, 0})
};

/// Class /Script/Foliage.FoliageType
/// Size: 0x0490 (0x000028 - 0x0004B8)
class UFoliageType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	SMember(FGuid)                                     UpdateGuid                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(float)                                     Density                                                     ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     DensityAdjustmentFactor                                     ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bSingleInstanceModeOverrideRadius                           ___ OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     SingleInstanceModeRadius                                    ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(EFoliageScaling)                           Scaling                                                     ___ OFFSET(get<T>, {0x4C, 1, 0, 0})
	SMember(FFloatInterval)                            ScaleX                                                      ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleY                                                      ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleZ                                                      ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FFoliageVertexColorChannelMask)            VertexColorMaskByChannel                                    ___ OFFSET(get<T>, {0x68, 48, 0, 0})
	CMember(TEnumAsByte<FoliageVertexColorMask>)       VertexColorMask                                             ___ OFFSET(get<T>, {0x98, 1, 0, 0})
	DMember(float)                                     VertexColorMaskThreshold                                    ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(bool)                                      VertexColorMaskInvert                                       ___ OFFSET(get<bool>, {0xA0, 1, 1, 0})
	SMember(FFloatInterval)                            ZOffset                                                     ___ OFFSET(get<T>, {0xA4, 8, 0, 0})
	DMember(bool)                                      AlignToNormal                                               ___ OFFSET(get<bool>, {0xAC, 1, 1, 0})
	DMember(bool)                                      AverageNormal                                               ___ OFFSET(get<bool>, {0xAC, 1, 1, 1})
	DMember(bool)                                      AverageNormalSingleComponent                                ___ OFFSET(get<bool>, {0xAC, 1, 1, 2})
	DMember(float)                                     AlignMaxAngle                                               ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(bool)                                      RandomYaw                                                   ___ OFFSET(get<bool>, {0xB4, 1, 1, 0})
	DMember(float)                                     RandomPitchAngle                                            ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	SMember(FFloatInterval)                            GroundSlopeAngle                                            ___ OFFSET(get<T>, {0xBC, 8, 0, 0})
	SMember(FFloatInterval)                            Height                                                      ___ OFFSET(get<T>, {0xC4, 8, 0, 0})
	CMember(TArray<FName>)                             LandscapeLayers                                             ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(float)                                     MinimumLayerWeight                                          ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
	CMember(TArray<FName>)                             ExclusionLandscapeLayers                                    ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(float)                                     MinimumExclusionLayerWeight                                 ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	SMember(FName)                                     LandscapeLayer                                              ___ OFFSET(get<T>, {0xFC, 4, 0, 0})
	DMember(bool)                                      CollisionWithWorld                                          ___ OFFSET(get<bool>, {0x100, 1, 1, 0})
	SMember(FVector)                                   CollisionScale                                              ___ OFFSET(get<T>, {0x108, 24, 0, 0})
	DMember(int32_t)                                   AverageNormalSampleCount                                    ___ OFFSET(get<int32_t>, {0x120, 4, 0, 0})
	SMember(FBoxSphereBounds)                          MeshBounds                                                  ___ OFFSET(get<T>, {0x128, 56, 0, 0})
	SMember(FVector)                                   LowBoundOriginRadius                                        ___ OFFSET(get<T>, {0x160, 24, 0, 0})
	CMember(TEnumAsByte<EComponentMobility>)           Mobility                                                    ___ OFFSET(get<T>, {0x178, 1, 0, 0})
	SMember(FInt32Interval)                            CullDistance                                                ___ OFFSET(get<T>, {0x17C, 8, 0, 0})
	DMember(bool)                                      bEnableStaticLighting                                       ___ OFFSET(get<bool>, {0x184, 1, 1, 0})
	DMember(bool)                                      CastShadow                                                  ___ OFFSET(get<bool>, {0x184, 1, 1, 1})
	DMember(bool)                                      bAffectDynamicIndirectLighting                              ___ OFFSET(get<bool>, {0x184, 1, 1, 2})
	DMember(bool)                                      bAffectDistanceFieldLighting                                ___ OFFSET(get<bool>, {0x184, 1, 1, 3})
	DMember(bool)                                      bCastDynamicShadow                                          ___ OFFSET(get<bool>, {0x184, 1, 1, 4})
	DMember(bool)                                      bCastStaticShadow                                           ___ OFFSET(get<bool>, {0x184, 1, 1, 5})
	DMember(bool)                                      bCastContactShadow                                          ___ OFFSET(get<bool>, {0x188, 1, 1, 0})
	DMember(bool)                                      bCastShadowAsTwoSided                                       ___ OFFSET(get<bool>, {0x18C, 1, 1, 0})
	DMember(bool)                                      bReceivesDecals                                             ___ OFFSET(get<bool>, {0x18C, 1, 1, 1})
	DMember(bool)                                      bOverrideLightMapRes                                        ___ OFFSET(get<bool>, {0x18C, 1, 1, 2})
	CMember(EShadowCacheInvalidationBehavior)          ShadowCacheInvalidationBehavior                             ___ OFFSET(get<T>, {0x190, 1, 0, 0})
	DMember(int32_t)                                   OverriddenLightMapRes                                       ___ OFFSET(get<int32_t>, {0x194, 4, 0, 0})
	CMember(ELightmapType)                             LightmapType                                                ___ OFFSET(get<T>, {0x198, 1, 0, 0})
	DMember(bool)                                      bUseAsOccluder                                              ___ OFFSET(get<bool>, {0x19C, 1, 1, 0})
	DMember(bool)                                      bVisibleInRayTracing                                        ___ OFFSET(get<bool>, {0x1A0, 1, 1, 0})
	DMember(bool)                                      bEvaluateWorldPositionOffset                                ___ OFFSET(get<bool>, {0x1A0, 1, 1, 1})
	DMember(int32_t)                                   WorldPositionOffsetDisableDistance                          ___ OFFSET(get<int32_t>, {0x1A4, 4, 0, 0})
	SMember(FBodyInstance)                             BodyInstance                                                ___ OFFSET(get<T>, {0x1A8, 392, 0, 0})
	CMember(TEnumAsByte<EHasCustomNavigableGeometry>)  CustomNavigableGeometry                                     ___ OFFSET(get<T>, {0x330, 1, 0, 0})
	SMember(FLightingChannels)                         LightingChannels                                            ___ OFFSET(get<T>, {0x331, 1, 0, 0})
	DMember(bool)                                      bRenderCustomDepth                                          ___ OFFSET(get<bool>, {0x334, 1, 1, 0})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 ___ OFFSET(get<T>, {0x338, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     ___ OFFSET(get<int32_t>, {0x33C, 4, 0, 0})
	DMember(int32_t)                                   TranslucencySortPriority                                    ___ OFFSET(get<int32_t>, {0x340, 4, 0, 0})
	DMember(float)                                     CollisionRadius                                             ___ OFFSET(get<float>, {0x344, 4, 0, 0})
	DMember(float)                                     ShadeRadius                                                 ___ OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(int32_t)                                   NumSteps                                                    ___ OFFSET(get<int32_t>, {0x34C, 4, 0, 0})
	DMember(float)                                     InitialSeedDensity                                          ___ OFFSET(get<float>, {0x350, 4, 0, 0})
	DMember(float)                                     AverageSpreadDistance                                       ___ OFFSET(get<float>, {0x354, 4, 0, 0})
	DMember(float)                                     SpreadVariance                                              ___ OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(int32_t)                                   SeedsPerStep                                                ___ OFFSET(get<int32_t>, {0x35C, 4, 0, 0})
	DMember(int32_t)                                   DistributionSeed                                            ___ OFFSET(get<int32_t>, {0x360, 4, 0, 0})
	DMember(float)                                     MaxInitialSeedOffset                                        ___ OFFSET(get<float>, {0x364, 4, 0, 0})
	DMember(bool)                                      bCanGrowInShade                                             ___ OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(bool)                                      bSpawnsInShade                                              ___ OFFSET(get<bool>, {0x369, 1, 0, 0})
	DMember(float)                                     MaxInitialAge                                               ___ OFFSET(get<float>, {0x36C, 4, 0, 0})
	DMember(float)                                     MaxAge                                                      ___ OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(float)                                     OverlapPriority                                             ___ OFFSET(get<float>, {0x374, 4, 0, 0})
	SMember(FFloatInterval)                            ProceduralScale                                             ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	SMember(FRuntimeFloatCurve)                        ScaleCurve                                                  ___ OFFSET(get<T>, {0x380, 136, 0, 0})
	SMember(FFoliageDensityFalloff)                    DensityFalloff                                              ___ OFFSET(get<T>, {0x408, 144, 0, 0})
	DMember(int32_t)                                   ChangeCount                                                 ___ OFFSET(get<int32_t>, {0x498, 4, 0, 0})
	DMember(bool)                                      ReapplyDensity                                              ___ OFFSET(get<bool>, {0x49C, 1, 1, 0})
	DMember(bool)                                      ReapplyRadius                                               ___ OFFSET(get<bool>, {0x49C, 1, 1, 1})
	DMember(bool)                                      ReapplyAlignToNormal                                        ___ OFFSET(get<bool>, {0x49C, 1, 1, 2})
	DMember(bool)                                      ReapplyRandomYaw                                            ___ OFFSET(get<bool>, {0x49C, 1, 1, 3})
	DMember(bool)                                      ReapplyScaling                                              ___ OFFSET(get<bool>, {0x49C, 1, 1, 4})
	DMember(bool)                                      ReapplyScaleX                                               ___ OFFSET(get<bool>, {0x49C, 1, 1, 5})
	DMember(bool)                                      ReapplyScaleY                                               ___ OFFSET(get<bool>, {0x49C, 1, 1, 6})
	DMember(bool)                                      ReapplyScaleZ                                               ___ OFFSET(get<bool>, {0x49C, 1, 1, 7})
	DMember(bool)                                      ReapplyRandomPitchAngle                                     ___ OFFSET(get<bool>, {0x49D, 1, 1, 0})
	DMember(bool)                                      ReapplyGroundSlope                                          ___ OFFSET(get<bool>, {0x49D, 1, 1, 1})
	DMember(bool)                                      ReapplyHeight                                               ___ OFFSET(get<bool>, {0x49D, 1, 1, 2})
	DMember(bool)                                      ReapplyLandscapeLayers                                      ___ OFFSET(get<bool>, {0x49D, 1, 1, 3})
	DMember(bool)                                      ReapplyZOffset                                              ___ OFFSET(get<bool>, {0x49D, 1, 1, 4})
	DMember(bool)                                      ReapplyCollisionWithWorld                                   ___ OFFSET(get<bool>, {0x49D, 1, 1, 5})
	DMember(bool)                                      ReapplyVertexColorMask                                      ___ OFFSET(get<bool>, {0x49D, 1, 1, 6})
	DMember(bool)                                      bEnableDensityScaling                                       ___ OFFSET(get<bool>, {0x49D, 1, 1, 7})
	DMember(bool)                                      bEnableDiscardOnLoad                                        ___ OFFSET(get<bool>, {0x49E, 1, 1, 0})
	DMember(bool)                                      bEnableCullDistanceScaling                                  ___ OFFSET(get<bool>, {0x49E, 1, 1, 1})
	CMember(TArray<URuntimeVirtualTexture*>)           RuntimeVirtualTextures                                      ___ OFFSET(get<T>, {0x4A0, 16, 0, 0})
	DMember(int32_t)                                   VirtualTextureCullMips                                      ___ OFFSET(get<int32_t>, {0x4B0, 4, 0, 0})
	CMember(ERuntimeVirtualTextureMainPassType)        VirtualTextureRenderPassType                                ___ OFFSET(get<T>, {0x4B4, 1, 0, 0})
};

/// Class /Script/Foliage.FoliageType_Actor
/// Size: 0x0018 (0x0004B8 - 0x0004D0)
class UFoliageType_Actor : public UFoliageType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	CMember(UClass*)                                   ActorClass                                                  ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	DMember(bool)                                      bShouldAttachToBaseComponent                                ___ OFFSET(get<bool>, {0x4C0, 1, 0, 0})
	DMember(bool)                                      bStaticMeshOnly                                             ___ OFFSET(get<bool>, {0x4C1, 1, 0, 0})
	CMember(UClass*)                                   StaticMeshOnlyComponentClass                                ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
};

/// Class /Script/Foliage.FoliageType_InstancedStaticMesh
/// Size: 0x0030 (0x0004B8 - 0x0004E8)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	CMember(UStaticMesh*)                              Mesh                                                        ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               OverrideMaterials                                           ___ OFFSET(get<T>, {0x4C0, 16, 0, 0})
	CMember(TArray<UMaterialInterface*>)               NaniteOverrideMaterials                                     ___ OFFSET(get<T>, {0x4D0, 16, 0, 0})
	CMember(UClass*)                                   ComponentClass                                              ___ OFFSET(get<T>, {0x4E0, 8, 0, 0})
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
	CMember(UCapsuleComponent*)                        CapsuleComponent                                            ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	SMember(FVector)                                   TouchingActorEntryPosition                                  ___ OFFSET(get<T>, {0x2A8, 24, 0, 0})
	SMember(FVector)                                   FoliageVelocity                                             ___ OFFSET(get<T>, {0x2C0, 24, 0, 0})
	SMember(FVector)                                   FoliageForce                                                ___ OFFSET(get<T>, {0x2D8, 24, 0, 0})
	SMember(FVector)                                   FoliagePosition                                             ___ OFFSET(get<T>, {0x2F0, 24, 0, 0})
	DMember(float)                                     FoliageDamageImpulseScale                                   ___ OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     FoliageTouchImpulseScale                                    ___ OFFSET(get<float>, {0x30C, 4, 0, 0})
	DMember(float)                                     FoliageStiffness                                            ___ OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(float)                                     FoliageStiffnessQuadratic                                   ___ OFFSET(get<float>, {0x314, 4, 0, 0})
	DMember(float)                                     FoliageDamping                                              ___ OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(float)                                     MaxDamageImpulse                                            ___ OFFSET(get<float>, {0x31C, 4, 0, 0})
	DMember(float)                                     MaxTouchImpulse                                             ___ OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(float)                                     MaxForce                                                    ___ OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     Mass                                                        ___ OFFSET(get<float>, {0x328, 4, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageBlockingVolume
/// Size: 0x0098 (0x0002C8 - 0x000360)
class AProceduralFoliageBlockingVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(AProceduralFoliageVolume*)                 ProceduralFoliageVolume                                     ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FFoliageDensityFalloff)                    DensityFalloff                                              ___ OFFSET(get<T>, {0x2D0, 144, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageComponent
/// Size: 0x0028 (0x0000A0 - 0x0000C8)
class UProceduralFoliageComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(UProceduralFoliageSpawner*)                FoliageSpawner                                              ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(float)                                     TileOverlap                                                 ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(AVolume*)                                  SpawningVolume                                              ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FGuid)                                     ProceduralGuid                                              ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageSpawner
/// Size: 0x0058 (0x000028 - 0x000080)
class UProceduralFoliageSpawner : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int32_t)                                   RandomSeed                                                  ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(float)                                     TileSize                                                    ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   NumUniqueTiles                                              ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(float)                                     MinimumQuadTreeSize                                         ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(TArray<FFoliageTypeObject>)                FoliageTypes                                                ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bUseOverrideFoliageTerrainMaterials                         ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    OverrideFoliageTerrainMaterials                             ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageTile
/// Size: 0x0148 (0x000028 - 0x000170)
class UProceduralFoliageTile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	CMember(UProceduralFoliageSpawner*)                FoliageSpawner                                              ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FProceduralFoliageInstance>)        InstancesArray                                              ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/Foliage.ProceduralFoliageVolume
/// Size: 0x0010 (0x0002C8 - 0x0002D8)
class AProceduralFoliageVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UProceduralFoliageComponent*)              ProceduralComponent                                         ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
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

