
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x0010 (0x000620 - 0x000630)
class UControlPointMeshComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	DMember(float)                                     VirtualTextureMainPassMaxDrawDistance                       ___ OFFSET(get<float>, {0x620, 4, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class ULandscapeSplineInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Landscape.LandscapeProxy
/// Size: 0x0380 (0x000290 - 0x000610)
class ALandscapeProxy : public APartitionActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	CMember(ULandscapeSplinesComponent*)               SplineComponent                                             ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FGuid)                                     LandscapeGuid                                               ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	DMember(bool)                                      bEnableNanite                                               ___ OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	CMember(TArray<FLandscapePerLODMaterialOverride>)  PerLODOverrideMaterials                                     ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
	SMember(FIntPoint)                                 LandscapeSectionOffset                                      ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(int32_t)                                   MaxLODLevel                                                 ___ OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	DMember(float)                                     ComponentScreenSizeToUseSubSections                         ___ OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     LOD0ScreenSize                                              ___ OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(uint32_t)                                  LODGroupKey                                                 ___ OFFSET(get<uint32_t>, {0x2EC, 4, 0, 0})
	DMember(float)                                     LOD0DistributionSetting                                     ___ OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(float)                                     LODDistributionSetting                                      ___ OFFSET(get<float>, {0x2F4, 4, 0, 0})
	DMember(int32_t)                                   StaticLightingLOD                                           ___ OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	CMember(UPhysicalMaterial*)                        DefaultPhysMaterial                                         ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(float)                                     StreamingDistanceMultiplier                                 ___ OFFSET(get<float>, {0x308, 4, 0, 0})
	CMember(UMaterialInterface*)                       LandscapeMaterial                                           ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UMaterialInterface*)                       LandscapeHoleMaterial                                       ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(TArray<URuntimeVirtualTexture*>)           RuntimeVirtualTextures                                      ___ OFFSET(get<T>, {0x340, 16, 0, 0})
	DMember(bool)                                      bSetCreateRuntimeVirtualTextureVolumes                      ___ OFFSET(get<bool>, {0x350, 1, 0, 0})
	DMember(bool)                                      bVirtualTextureRenderWithQuad                               ___ OFFSET(get<bool>, {0x351, 1, 0, 0})
	DMember(bool)                                      bVirtualTextureRenderWithQuadHQ                             ___ OFFSET(get<bool>, {0x352, 1, 0, 0})
	DMember(int32_t)                                   VirtualTextureNumLods                                       ___ OFFSET(get<int32_t>, {0x354, 4, 0, 0})
	DMember(int32_t)                                   VirtualTextureLodBias                                       ___ OFFSET(get<int32_t>, {0x358, 4, 0, 0})
	CMember(ERuntimeVirtualTextureMainPassType)        VirtualTextureRenderPassType                                ___ OFFSET(get<T>, {0x35C, 1, 0, 0})
	DMember(float)                                     NegativeZBoundsExtension                                    ___ OFFSET(get<float>, {0x360, 4, 0, 0})
	DMember(float)                                     PositiveZBoundsExtension                                    ___ OFFSET(get<float>, {0x364, 4, 0, 0})
	CMember(TArray<ULandscapeComponent*>)              LandscapeComponents                                         ___ OFFSET(get<T>, {0x368, 16, 0, 0})
	CMember(TArray<ULandscapeHeightfieldCollisionComponent*>) CollisionComponents                                  ___ OFFSET(get<T>, {0x378, 16, 0, 0})
	CMember(TArray<UHierarchicalInstancedStaticMeshComponent*>) FoliageComponents                                  ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	CMember(ULandscapeNaniteComponent*)                NaniteComponent                                             ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(TArray<ULandscapeNaniteComponent*>)        NaniteComponents                                            ___ OFFSET(get<T>, {0x3A0, 16, 0, 0})
	DMember(bool)                                      bHasLandscapeGrass                                          ___ OFFSET(get<bool>, {0x414, 1, 0, 0})
	DMember(float)                                     StaticLightingResolution                                    ___ OFFSET(get<float>, {0x418, 4, 0, 0})
	DMember(bool)                                      CastShadow                                                  ___ OFFSET(get<bool>, {0x41C, 1, 1, 0})
	DMember(bool)                                      bCastDynamicShadow                                          ___ OFFSET(get<bool>, {0x41C, 1, 1, 1})
	DMember(bool)                                      bCastStaticShadow                                           ___ OFFSET(get<bool>, {0x41C, 1, 1, 2})
	CMember(EShadowCacheInvalidationBehavior)          ShadowCacheInvalidationBehavior                             ___ OFFSET(get<T>, {0x41D, 1, 0, 0})
	DMember(bool)                                      bCastContactShadow                                          ___ OFFSET(get<bool>, {0x41E, 1, 1, 0})
	DMember(bool)                                      bCastFarShadow                                              ___ OFFSET(get<bool>, {0x420, 1, 1, 0})
	DMember(bool)                                      bCastHiddenShadow                                           ___ OFFSET(get<bool>, {0x424, 1, 1, 0})
	DMember(bool)                                      bCastShadowAsTwoSided                                       ___ OFFSET(get<bool>, {0x428, 1, 1, 0})
	DMember(bool)                                      bAffectDistanceFieldLighting                                ___ OFFSET(get<bool>, {0x42C, 1, 1, 0})
	SMember(FLightingChannels)                         LightingChannels                                            ___ OFFSET(get<T>, {0x42D, 1, 0, 0})
	DMember(bool)                                      bUseMaterialPositionOffsetInStaticLighting                  ___ OFFSET(get<bool>, {0x430, 1, 1, 0})
	DMember(bool)                                      bRenderCustomDepth                                          ___ OFFSET(get<bool>, {0x430, 1, 1, 1})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 ___ OFFSET(get<T>, {0x434, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     ___ OFFSET(get<int32_t>, {0x438, 4, 0, 0})
	DMember(float)                                     LDMaxDrawDistance                                           ___ OFFSET(get<float>, {0x43C, 4, 0, 0})
	SMember(FLightmassPrimitiveSettings)               LightmassSettings                                           ___ OFFSET(get<T>, {0x440, 24, 0, 0})
	DMember(int32_t)                                   CollisionMipLevel                                           ___ OFFSET(get<int32_t>, {0x458, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionMipLevel                                     ___ OFFSET(get<int32_t>, {0x45C, 4, 0, 0})
	SMember(FBodyInstance)                             BodyInstance                                                ___ OFFSET(get<T>, {0x468, 392, 0, 0})
	DMember(bool)                                      bGenerateOverlapEvents                                      ___ OFFSET(get<bool>, {0x5F0, 1, 1, 0})
	DMember(bool)                                      bBakeMaterialPositionOffsetIntoCollision                    ___ OFFSET(get<bool>, {0x5F0, 1, 1, 1})
	DMember(int32_t)                                   ComponentSizeQuads                                          ___ OFFSET(get<int32_t>, {0x5F4, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         ___ OFFSET(get<int32_t>, {0x5F8, 4, 0, 0})
	DMember(int32_t)                                   NumSubsections                                              ___ OFFSET(get<int32_t>, {0x5FC, 4, 0, 0})
	DMember(bool)                                      bUsedForNavigation                                          ___ OFFSET(get<bool>, {0x600, 1, 1, 0})
	DMember(bool)                                      bFillCollisionUnderLandscapeForNavmesh                      ___ OFFSET(get<bool>, {0x600, 1, 1, 1})
	CMember(ENavDataGatheringMode)                     NavigationGeometryGatheringMode                             ___ OFFSET(get<T>, {0x604, 1, 0, 0})
	DMember(bool)                                      bUseDynamicMaterialInstance                                 ___ OFFSET(get<bool>, {0x605, 1, 0, 0})
	DMember(bool)                                      bUseLandscapeForCullingInvisibleHLODVertices                ___ OFFSET(get<bool>, {0x606, 1, 0, 0})
	DMember(bool)                                      bHasLayersContent                                           ___ OFFSET(get<bool>, {0x607, 1, 0, 0})
	DMember(bool)                                      bUseCompressedHeightmapStorage                              ___ OFFSET(get<bool>, {0x608, 1, 0, 0})
};

/// Class /Script/Landscape.Landscape
/// Size: 0x0000 (0x000610 - 0x000610)
class ALandscape : public ALandscapeProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
};

/// Class /Script/Landscape.LandscapeLODStreamingProxy_DEPRECATED
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class ULandscapeLODStreamingProxy_DEPRECATED : public UStreamableRenderAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Landscape.LandscapeComponent
/// Size: 0x01F0 (0x000570 - 0x000760)
class ULandscapeComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1888;

public:
	DMember(int32_t)                                   SectionBaseX                                                ___ OFFSET(get<int32_t>, {0x568, 4, 0, 0})
	DMember(int32_t)                                   SectionBaseY                                                ___ OFFSET(get<int32_t>, {0x56C, 4, 0, 0})
	DMember(int32_t)                                   ComponentSizeQuads                                          ___ OFFSET(get<int32_t>, {0x570, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         ___ OFFSET(get<int32_t>, {0x574, 4, 0, 0})
	DMember(int32_t)                                   NumSubsections                                              ___ OFFSET(get<int32_t>, {0x578, 4, 0, 0})
	CMember(UMaterialInterface*)                       OverrideMaterial                                            ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UMaterialInterface*)                       OverrideHoleMaterial                                        ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(TArray<UMaterialInstanceConstant*>)        MaterialInstances                                           ___ OFFSET(get<T>, {0x590, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MaterialInstancesDynamic                                    ___ OFFSET(get<T>, {0x5A0, 16, 0, 0})
	CMember(TArray<int8_t>)                            LODIndexToMaterialIndex                                     ___ OFFSET(get<T>, {0x5B0, 16, 0, 0})
	CMember(UTexture2D*)                               XYOffsetmapTexture                                          ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
	SMember(FVector4)                                  WeightmapScaleBias                                          ___ OFFSET(get<T>, {0x5D0, 32, 0, 0})
	DMember(float)                                     WeightmapSubsectionOffset                                   ___ OFFSET(get<float>, {0x5F0, 4, 0, 0})
	SMember(FVector4)                                  HeightmapScaleBias                                          ___ OFFSET(get<T>, {0x600, 32, 0, 0})
	SMember(FBox)                                      CachedLocalBox                                              ___ OFFSET(get<T>, {0x620, 56, 0, 0})
	CMember(ULandscapeHeightfieldCollisionComponent*)  CollisionComponentRef                                       ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	DMember(bool)                                      bUserTriggeredChangeRequested                               ___ OFFSET(get<bool>, {0x660, 1, 0, 0})
	DMember(bool)                                      bNaniteActive                                               ___ OFFSET(get<bool>, {0x661, 1, 0, 0})
	CMember(UTexture2D*)                               HeightmapTexture                                            ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(TArray<FWeightmapLayerAllocationInfo>)     WeightmapLayerAllocations                                   ___ OFFSET(get<T>, {0x670, 16, 0, 0})
	CMember(TArray<UTexture2D*>)                       WeightmapTextures                                           ___ OFFSET(get<T>, {0x680, 16, 0, 0})
	CMember(TArray<FLandscapePerLODMaterialOverride>)  PerLODOverrideMaterials                                     ___ OFFSET(get<T>, {0x690, 16, 0, 0})
	SMember(FGuid)                                     MapBuildDataId                                              ___ OFFSET(get<T>, {0x6A0, 16, 0, 0})
	DMember(int32_t)                                   CollisionMipLevel                                           ___ OFFSET(get<int32_t>, {0x6B0, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionMipLevel                                     ___ OFFSET(get<int32_t>, {0x6B4, 4, 0, 0})
	DMember(float)                                     NegativeZBoundsExtension                                    ___ OFFSET(get<float>, {0x6B8, 4, 0, 0})
	DMember(float)                                     PositiveZBoundsExtension                                    ___ OFFSET(get<float>, {0x6BC, 4, 0, 0})
	DMember(float)                                     StaticLightingResolution                                    ___ OFFSET(get<float>, {0x6C0, 4, 0, 0})
	DMember(int32_t)                                   ForcedLOD                                                   ___ OFFSET(get<int32_t>, {0x6C4, 4, 0, 0})
	DMember(int32_t)                                   LODBias                                                     ___ OFFSET(get<int32_t>, {0x6C8, 4, 0, 0})
	SMember(FGuid)                                     StateId                                                     ___ OFFSET(get<T>, {0x6CC, 16, 0, 0})
	CMember(UMaterialInterface*)                       MobileMaterialInterface                                     ___ OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               MobileMaterialInterfaces                                    ___ OFFSET(get<T>, {0x708, 16, 0, 0})
	CMember(TArray<UTexture2D*>)                       MobileWeightmapTextures                                     ___ OFFSET(get<T>, {0x718, 16, 0, 0})
	CMember(TArray<FWeightmapLayerAllocationInfo>)     MobileWeightmapLayerAllocations                             ___ OFFSET(get<T>, {0x728, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeGizmoActor
/// Size: 0x0000 (0x000290 - 0x000290)
class ALandscapeGizmoActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/Landscape.LandscapeGizmoActiveActor
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Script/Landscape.LandscapeGizmoRenderComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/Landscape.LandscapeGrassType
/// Size: 0x0038 (0x000028 - 0x000060)
class ULandscapeGrassType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FGrassVariety>)                     GrassVarieties                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bEnableDensityScaling                                       ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
	CMember(UStaticMesh*)                              GrassMesh                                                   ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(float)                                     GrassDensity                                                ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PlacementJitter                                             ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   StartCullDistance                                           ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   EndCullDistance                                             ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      RandomRotation                                              ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      AlignToSurface                                              ___ OFFSET(get<bool>, {0x59, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x00E0 (0x000570 - 0x000650)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	CMember(TArray<ULandscapeLayerInfoObject*>)        ComponentLayerInfos                                         ___ OFFSET(get<T>, {0x568, 16, 0, 0})
	DMember(int32_t)                                   SectionBaseX                                                ___ OFFSET(get<int32_t>, {0x578, 4, 0, 0})
	DMember(int32_t)                                   SectionBaseY                                                ___ OFFSET(get<int32_t>, {0x57C, 4, 0, 0})
	DMember(int32_t)                                   CollisionSizeQuads                                          ___ OFFSET(get<int32_t>, {0x580, 4, 0, 0})
	DMember(float)                                     CollisionScale                                              ___ OFFSET(get<float>, {0x584, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionSizeQuads                                    ___ OFFSET(get<int32_t>, {0x588, 4, 0, 0})
	CMember(TArray<char>)                              CollisionQuadFlags                                          ___ OFFSET(get<T>, {0x590, 16, 0, 0})
	SMember(FGuid)                                     HeightfieldGuid                                             ___ OFFSET(get<T>, {0x5A0, 16, 0, 0})
	SMember(FBox)                                      CachedLocalBox                                              ___ OFFSET(get<T>, {0x5B0, 56, 0, 0})
	CMember(ULandscapeComponent*)                      RenderComponentRef                                          ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(TArray<UPhysicalMaterial*>)                CookedPhysicalMaterials                                     ___ OFFSET(get<T>, {0x600, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeLayerInfoObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     LayerName                                                   ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(UPhysicalMaterial*)                        PhysMaterial                                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     Hardness                                                    ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FLinearColor)                              LayerUsageDebugColor                                        ___ OFFSET(get<T>, {0x3C, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x0018 (0x000248 - 0x000260)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(TArray<FLandscapeMaterialTextureStreamingInfo>) TextureStreamingInfo                                   ___ OFFSET(get<T>, {0x248, 16, 0, 0})
	DMember(bool)                                      bIsLayerThumbnail                                           ___ OFFSET(get<bool>, {0x258, 1, 1, 0})
	DMember(bool)                                      bDisableTessellation                                        ___ OFFSET(get<bool>, {0x258, 1, 1, 1})
	DMember(bool)                                      bMobile                                                     ___ OFFSET(get<bool>, {0x258, 1, 1, 2})
	DMember(bool)                                      bEditorToolUsage                                            ___ OFFSET(get<bool>, {0x258, 1, 1, 3})
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x0020 (0x000650 - 0x000670)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FGuid)                                     MeshGuid                                                    ___ OFFSET(get<T>, {0x650, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ALandscapeMeshProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(ULandscapeMeshProxyComponent*)             LandscapeMeshProxyComponent                                 ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x0030 (0x000620 - 0x000650)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	SMember(FGuid)                                     LandscapeGuid                                               ___ OFFSET(get<T>, {0x620, 16, 0, 0})
	CMember(TArray<FIntPoint>)                         ProxyComponentBases                                         ___ OFFSET(get<T>, {0x630, 16, 0, 0})
	DMember(int8_t)                                    ProxyLOD                                                    ___ OFFSET(get<int8_t>, {0x640, 1, 0, 0})
	DMember(uint32_t)                                  LODGroupKey                                                 ___ OFFSET(get<uint32_t>, {0x644, 4, 0, 0})
};

/// Class /Script/Landscape.LandscapeSettings
/// Size: 0x0060 (0x000030 - 0x000090)
class ULandscapeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(int32_t)                                   MaxNumberOfLayers                                           ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MaxComponents                                               ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(uint32_t)                                  MaxImageImportCacheSizeMegaBytes                            ___ OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     PaintStrengthGamma                                          ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bDisablePaintingStartupSlowdown                             ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(ELandscapeDirtyingMode)                    LandscapeDirtyingMode                                       ___ OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(int32_t)                                   SideResolutionLimit                                         ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       DefaultLandscapeMaterial                                    ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<ULandscapeLayerInfoObject*>) DefaultLayerInfoObject                                     ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	DMember(bool)                                      bRestrictiveMode                                            ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x0030 (0x000570 - 0x0005A0)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(TArray<ULandscapeSplineControlPoint*>)     ControlPoints                                               ___ OFFSET(get<T>, {0x568, 16, 0, 0})
	CMember(TArray<ULandscapeSplineSegment*>)          Segments                                                    ___ OFFSET(get<T>, {0x578, 16, 0, 0})
	CMember(TArray<UMeshComponent*>)                   CookedForeignMeshComponents                                 ___ OFFSET(get<T>, {0x588, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class ULandscapeSplineControlPoint : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	DMember(float)                                     Width                                                       ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LayerWidthRatio                                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     SideFalloff                                                 ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     LeftSideFalloffFactor                                       ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     RightSideFalloffFactor                                      ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     LeftSideLayerFalloffFactor                                  ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     RightSideLayerFalloffFactor                                 ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     EndFalloff                                                  ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	CMember(TArray<FLandscapeSplineConnection>)        ConnectedSegments                                           ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FLandscapeSplineInterpPoint>)       Points                                                      ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      ___ OFFSET(get<T>, {0x98, 56, 0, 0})
	CMember(UControlPointMeshComponent*)               LocalMeshComponent                                          ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x0090 (0x000028 - 0x0000B8)
class ULandscapeSplineSegment : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FLandscapeSplineSegmentConnection)         Connections                                                 ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FInterpCurveVector)                        SplineInfo                                                  ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	CMember(TArray<FLandscapeSplineInterpPoint>)       Points                                                      ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      ___ OFFSET(get<T>, {0x70, 56, 0, 0})
	CMember(TArray<USplineMeshComponent*>)             LocalMeshComponents                                         ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x0070 (0x000610 - 0x000680)
class ALandscapeStreamingProxy : public ALandscapeProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	CMember(TWeakObjectPtr<ALandscape*>)               LandscapeActorRef                                           ___ OFFSET(get<T>, {0x610, 32, 0, 0})
	CMember(TSet<FString>)                             OverriddenSharedProperties                                  ___ OFFSET(get<T>, {0x630, 80, 0, 0})
};

/// Class /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandscapeWeightmapUsage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(ULandscapeComponent*)                      ChannelUsage                                                ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FGuid)                                     LayerGuid                                                   ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FGrassInput>)                       GrassTypes                                                  ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FLayerBlendInput>)                  Layers                                                      ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TEnumAsByte<ETerrainCoordMappingType>)     MappingType                                                 ___ OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(TEnumAsByte<ELandscapeCustomizedCoordType>) CustomUVType                                               ___ OFFSET(get<T>, {0xB1, 1, 0, 0})
	DMember(float)                                     MappingScale                                                ___ OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     MappingRotation                                             ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     MappingPanU                                                 ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     MappingPanV                                                 ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Class /Script/Landscape.ControlPointMeshActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AControlPointMeshActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UControlPointMeshComponent*)               ControlPointMeshComponent                                   ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeBlueprintBrushBase
/// Size: 0x0000 (0x000290 - 0x000290)
class ALandscapeBlueprintBrushBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/Landscape.LandscapeHLODBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class ULandscapeHLODBuilder : public UHLODBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Landscape.LandscapeInfo
/// Size: 0x0200 (0x000028 - 0x000228)
class ULandscapeInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	CMember(TWeakObjectPtr<ALandscape*>)               LandscapeActor                                              ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FGuid)                                     LandscapeGuid                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   ComponentSizeQuads                                          ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   ComponentNumSubsections                                     ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FVector)                                   DrawScale                                                   ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    StreamingProxies                                            ___ OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeInfoMap
/// Size: 0x0058 (0x000028 - 0x000080)
class ULandscapeInfoMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/Landscape.LandscapeNaniteComponent
/// Size: 0x0020 (0x000620 - 0x000640)
class ULandscapeNaniteComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	SMember(FGuid)                                     ProxyContentId                                              ___ OFFSET(get<T>, {0x620, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x630, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ALandscapeSplineActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FGuid)                                     LandscapeGuid                                               ___ OFFSET(get<T>, {0x298, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineMeshesActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ALandscapeSplineMeshesActor : public APartitionActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(TArray<UStaticMeshComponent*>)             StaticMeshComponents                                        ___ OFFSET(get<T>, {0x290, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeSubsystem
/// Size: 0x0020 (0x000040 - 0x000060)
class ULandscapeSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/Landscape.LandscapeTextureStorageProviderFactory
/// Size: 0x0038 (0x000028 - 0x000060)
class ULandscapeTextureStorageProviderFactory : public UTextureAllMipDataProviderFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSample
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FName)                                     ParameterName                                               ___ OFFSET(get<T>, {0xB0, 4, 0, 0})
	DMember(float)                                     PreviewWeight                                               ___ OFFSET(get<float>, {0xB4, 4, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0058 (0x0000B0 - 0x000108)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FExpressionInput)                          LayerUsed                                                   ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          LayerNotUsed                                                ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
	SMember(FName)                                     ParameterName                                               ___ OFFSET(get<T>, {0x100, 4, 0, 0})
	DMember(bool)                                      PreviewUsed                                                 ___ OFFSET(get<bool>, {0x104, 1, 1, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0070 (0x0000B0 - 0x000120)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FExpressionInput)                          base                                                        ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          Layer                                                       ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
	SMember(FName)                                     ParameterName                                               ___ OFFSET(get<T>, {0x100, 4, 0, 0})
	DMember(float)                                     PreviewWeight                                               ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	SMember(FVector)                                   ConstBase                                                   ___ OFFSET(get<T>, {0x108, 24, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FPhysicalMaterialInput>)            Inputs                                                      ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/Landscape.LandscapeLayerBrush
/// Size: 0x0001 (0x000000 - 0x000001)
class FLandscapeLayerBrush : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeLayer
/// Size: 0x0088 (0x000000 - 0x000088)
class FLandscapeLayer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGuid)                                     Guid                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bVisible                                                    ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bLocked                                                     ___ OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(float)                                     HeightmapAlpha                                              ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     WeightmapAlpha                                              ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(TEnumAsByte<ELandscapeBlendMode>)          BlendMode                                                   ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TArray<FLandscapeLayerBrush>)              Brushes                                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TMap<ULandscapeLayerInfoObject*, bool>)    WeightmapLayerAllocationBlend                               ___ OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeEditToolRenderData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UMaterialInterface*)                       ToolMaterial                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMaterialInterface*)                       GizmoMaterial                                               ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SelectedType                                                ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelR                                               ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelG                                               ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelB                                               ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	CMember(UTexture2D*)                               DataTexture                                                 ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(UTexture2D*)                               LayerContributionTexture                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UTexture2D*)                               DirtyTexture                                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/Landscape.WeightmapLayerAllocationInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FWeightmapLayerAllocationInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ULandscapeLayerInfoObject*)                LayerInfo                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(char)                                      WeightmapTextureIndex                                       ___ OFFSET(get<char>, {0x8, 1, 0, 0})
	DMember(char)                                      WeightmapTextureChannel                                     ___ OFFSET(get<char>, {0x9, 1, 0, 0})
};

/// Struct /Script/Landscape.LandscapeComponentMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeComponentMaterialOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPerPlatformInt)                           LODIndex                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapePerLODMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapePerLODMaterialOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   LODIndex                                                    ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Landscape.WeightmapData
/// Size: 0x0030 (0x000000 - 0x000030)
class FWeightmapData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<UTexture2D*>)                       Textures                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FWeightmapLayerAllocationInfo>)     LayerAllocations                                            ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<ULandscapeWeightmapUsage*>)         TextureUsages                                               ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Landscape.HeightmapData
/// Size: 0x0008 (0x000000 - 0x000008)
class FHeightmapData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UTexture2D*)                               Texture                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeLayerComponentData
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeLayerComponentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FHeightmapData)                            HeightmapData                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FWeightmapData)                            WeightmapData                                               ___ OFFSET(get<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/Landscape.GizmoSelectData
/// Size: 0x0050 (0x000000 - 0x000050)
class FGizmoSelectData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/Landscape.GrassVariety
/// Size: 0x01A8 (0x000000 - 0x0001A8)
class FGrassVariety : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(UStaticMesh*)                              GrassMesh                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               OverrideMaterials                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FPerPlatformFloat)                         GrassDensity                                                ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FPerQualityLevelFloat)                     GrassDensityQuality                                         ___ OFFSET(get<T>, {0x20, 104, 0, 0})
	DMember(bool)                                      bUseGrid                                                    ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(float)                                     PlacementJitter                                             ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	SMember(FPerPlatformInt)                           StartCullDistance                                           ___ OFFSET(get<T>, {0x90, 4, 0, 0})
	SMember(FPerQualityLevelInt)                       StartCullDistanceQuality                                    ___ OFFSET(get<T>, {0x98, 104, 0, 0})
	SMember(FPerPlatformInt)                           EndCullDistance                                             ___ OFFSET(get<T>, {0x100, 4, 0, 0})
	SMember(FPerQualityLevelInt)                       EndCullDistanceQuality                                      ___ OFFSET(get<T>, {0x108, 104, 0, 0})
	DMember(int32_t)                                   MinLOD                                                      ___ OFFSET(get<int32_t>, {0x170, 4, 0, 0})
	CMember(EGrassScaling)                             Scaling                                                     ___ OFFSET(get<T>, {0x174, 1, 0, 0})
	SMember(FFloatInterval)                            ScaleX                                                      ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleY                                                      ___ OFFSET(get<T>, {0x180, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleZ                                                      ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	DMember(bool)                                      RandomRotation                                              ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      AlignToSurface                                              ___ OFFSET(get<bool>, {0x191, 1, 0, 0})
	DMember(bool)                                      bUseLandscapeLightmap                                       ___ OFFSET(get<bool>, {0x192, 1, 0, 0})
	SMember(FLightingChannels)                         LightingChannels                                            ___ OFFSET(get<T>, {0x193, 1, 0, 0})
	DMember(bool)                                      bReceivesDecals                                             ___ OFFSET(get<bool>, {0x194, 1, 0, 0})
	DMember(bool)                                      bAffectDistanceFieldLighting                                ___ OFFSET(get<bool>, {0x195, 1, 0, 0})
	DMember(bool)                                      bCastDynamicShadow                                          ___ OFFSET(get<bool>, {0x196, 1, 0, 0})
	DMember(bool)                                      bCastContactShadow                                          ___ OFFSET(get<bool>, {0x197, 1, 0, 0})
	DMember(bool)                                      bKeepInstanceBufferCPUCopy                                  ___ OFFSET(get<bool>, {0x198, 1, 0, 0})
	DMember(uint32_t)                                  InstanceWorldPositionOffsetDisableDistance                  ___ OFFSET(get<uint32_t>, {0x19C, 4, 0, 0})
	CMember(EShadowCacheInvalidationBehavior)          ShadowCacheInvalidationBehavior                             ___ OFFSET(get<T>, {0x1A0, 1, 0, 0})
};

/// Struct /Script/Landscape.LandscapeMaterialTextureStreamingInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FLandscapeMaterialTextureStreamingInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     TextureName                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     TexelFactor                                                 ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeSplineConnection
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeSplineConnection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ULandscapeSplineSegment*)                  Segment                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      End                                                         ___ OFFSET(get<bool>, {0x8, 1, 1, 0})
};

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignControlPointData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.ForeignSplineSegmentData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignSplineSegmentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignWorldSplineData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FLandscapeSplineInterpPoint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FVector)                                   Center                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Left                                                        ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Right                                                       ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   FalloffLeft                                                 ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   FalloffRight                                                ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	SMember(FVector)                                   LayerLeft                                                   ___ OFFSET(get<T>, {0x78, 24, 0, 0})
	SMember(FVector)                                   LayerRight                                                  ___ OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FVector)                                   LayerFalloffLeft                                            ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FVector)                                   LayerFalloffRight                                           ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
	DMember(float)                                     StartEndFalloff                                             ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeSplineSegmentConnection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ULandscapeSplineControlPoint*)             ControlPoint                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TangentLen                                                  ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FName)                                     SocketName                                                  ___ OFFSET(get<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FLandscapeSplineMeshEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UStaticMesh*)                              Mesh                                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               MaterialOverrides                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bCenterH                                                    ___ OFFSET(get<bool>, {0x18, 1, 1, 0})
	SMember(FVector2D)                                 CenterAdjust                                                ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bScaleToWidth                                               ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	SMember(FVector)                                   Scale                                                       ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	CMember(TEnumAsByte<LandscapeSplineMeshOrientation>) Orientation                                               ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              ForwardAxis                                                 ___ OFFSET(get<T>, {0x51, 1, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              UpAxis                                                      ___ OFFSET(get<T>, {0x52, 1, 0, 0})
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0038 (0x000000 - 0x000038)
class FGrassInput : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ULandscapeGrassType*)                      GrassType                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FExpressionInput)                          Input                                                       ___ OFFSET(get<T>, {0x10, 40, 0, 0})
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x0080 (0x000000 - 0x000080)
class FLayerBlendInput : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     LayerName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ELandscapeLayerBlendType>)     BlendType                                                   ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FExpressionInput)                          LayerInput                                                  ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FExpressionInput)                          HeightInput                                                 ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	DMember(float)                                     PreviewWeight                                               ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FVector)                                   ConstLayerInput                                             ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	DMember(float)                                     ConstHeightInput                                            ___ OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeBrushParameters
/// Size: 0x0018 (0x000000 - 0x000018)
class FLandscapeBrushParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ELandscapeToolTargetType)                  LayerType                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UTextureRenderTarget2D*)                   CombinedResult                                              ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     WeightmapLayerName                                          ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeInfoLayerSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeInfoLayerSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ULandscapeLayerInfoObject*)                LayerInfoObj                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     LayerName                                                   ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (0x000000 - 0x000001)
class FLandscapeEditorLayerSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeLayerStruct
/// Size: 0x0008 (0x000000 - 0x000008)
class FLandscapeLayerStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(ULandscapeLayerInfoObject*)                LayerInfoObj                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeImportLayerInfo
/// Size: 0x0001 (0x000000 - 0x000001)
class FLandscapeImportLayerInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeProxyMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeProxyMaterialOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPerPlatformInt)                           LODIndex                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeTexture2DMipMap
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeTexture2DMipMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   SizeX                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SizeY                                                       ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bCompressed                                                 ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/Landscape.PhysicalMaterialInput
/// Size: 0x0030 (0x000000 - 0x000030)
class FPhysicalMaterialInput : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UPhysicalMaterial*)                        PhysicalMaterial                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FExpressionInput)                          Input                                                       ___ OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Enum /Script/Landscape.ELandscapeSetupErrors
/// Size: 0x05
enum ELandscapeSetupErrors : uint8_t
{
	LSE_None0                                                                        = 0,
	LSE_NoLandscapeInfo1                                                             = 1,
	LSE_CollsionXY2                                                                  = 2,
	LSE_NoLayerInfo3                                                                 = 3,
	LSE_MAX4                                                                         = 4
};

/// Enum /Script/Landscape.ERTDrawingType
/// Size: 0x06
enum ERTDrawingType : uint8_t
{
	ERTDrawingType__RTAtlas0                                                         = 0,
	ERTDrawingType__RTAtlasToNonAtlas1                                               = 1,
	ERTDrawingType__RTNonAtlasToAtlas2                                               = 2,
	ERTDrawingType__RTNonAtlas3                                                      = 3,
	ERTDrawingType__RTMips4                                                          = 4,
	ERTDrawingType__ERTDrawingType_MAX5                                              = 5
};

/// Enum /Script/Landscape.EHeightmapRTType
/// Size: 0x14
enum EHeightmapRTType : uint8_t
{
	EHeightmapRTType__HeightmapRT_CombinedAtlas0                                     = 0,
	EHeightmapRTType__HeightmapRT_CombinedNonAtlas1                                  = 1,
	EHeightmapRTType__HeightmapRT_Scratch12                                          = 2,
	EHeightmapRTType__HeightmapRT_Scratch23                                          = 3,
	EHeightmapRTType__HeightmapRT_Scratch34                                          = 4,
	EHeightmapRTType__HeightmapRT_Mip15                                              = 5,
	EHeightmapRTType__HeightmapRT_Mip26                                              = 6,
	EHeightmapRTType__HeightmapRT_Mip37                                              = 7,
	EHeightmapRTType__HeightmapRT_Mip48                                              = 8,
	EHeightmapRTType__HeightmapRT_Mip59                                              = 9,
	EHeightmapRTType__HeightmapRT_Mip610                                             = 10,
	EHeightmapRTType__HeightmapRT_Mip711                                             = 11,
	EHeightmapRTType__HeightmapRT_Count12                                            = 12,
	EHeightmapRTType__HeightmapRT_MAX13                                              = 13
};

/// Enum /Script/Landscape.EWeightmapRTType
/// Size: 0x14
enum EWeightmapRTType : uint8_t
{
	EWeightmapRTType__WeightmapRT_Scratch_RGBA0                                      = 0,
	EWeightmapRTType__WeightmapRT_Scratch11                                          = 1,
	EWeightmapRTType__WeightmapRT_Scratch22                                          = 2,
	EWeightmapRTType__WeightmapRT_Scratch33                                          = 3,
	EWeightmapRTType__WeightmapRT_Mip04                                              = 4,
	EWeightmapRTType__WeightmapRT_Mip15                                              = 5,
	EWeightmapRTType__WeightmapRT_Mip26                                              = 6,
	EWeightmapRTType__WeightmapRT_Mip37                                              = 7,
	EWeightmapRTType__WeightmapRT_Mip48                                              = 8,
	EWeightmapRTType__WeightmapRT_Mip59                                              = 9,
	EWeightmapRTType__WeightmapRT_Mip610                                             = 10,
	EWeightmapRTType__WeightmapRT_Mip711                                             = 11,
	EWeightmapRTType__WeightmapRT_Count12                                            = 12,
	EWeightmapRTType__WeightmapRT_MAX13                                              = 13
};

/// Enum /Script/Landscape.ELandscapeBlendMode
/// Size: 0x03
enum ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend0                                                              = 0,
	LSBM_AlphaBlend1                                                                 = 1,
	LSBM_MAX2                                                                        = 2
};

/// Enum /Script/Landscape.ELandscapeClearMode
/// Size: 0x04
enum ELandscapeClearMode : uint8_t
{
	Clear_Weightmap0                                                                 = 1,
	Clear_Heightmap1                                                                 = 2,
	Clear_All2                                                                       = 3,
	Clear_MAX3                                                                       = 4
};

/// Enum /Script/Landscape.ELandscapeToolTargetType
/// Size: 0x05
enum ELandscapeToolTargetType : uint8_t
{
	ELandscapeToolTargetType__Heightmap0                                             = 0,
	ELandscapeToolTargetType__Weightmap1                                             = 1,
	ELandscapeToolTargetType__Visibility2                                            = 2,
	ELandscapeToolTargetType__Invalid3                                               = 3,
	ELandscapeToolTargetType__ELandscapeToolTargetType_MAX4                          = 4
};

/// Enum /Script/Landscape.ELandscapeGizmoType
/// Size: 0x04
enum ELandscapeGizmoType : uint8_t
{
	LGT_None0                                                                        = 0,
	LGT_Height1                                                                      = 1,
	LGT_Weight2                                                                      = 2,
	LGT_MAX3                                                                         = 3
};

/// Enum /Script/Landscape.ELandscapeGizmoSnapType
/// Size: 0x04
enum ELandscapeGizmoSnapType : uint8_t
{
	ELandscapeGizmoSnapType__None0                                                   = 0,
	ELandscapeGizmoSnapType__Component1                                              = 1,
	ELandscapeGizmoSnapType__Texel2                                                  = 2,
	ELandscapeGizmoSnapType__ELandscapeGizmoSnapType_MAX3                            = 3
};

/// Enum /Script/Landscape.EGrassScaling
/// Size: 0x04
enum EGrassScaling : uint8_t
{
	EGrassScaling__Uniform0                                                          = 0,
	EGrassScaling__Free1                                                             = 1,
	EGrassScaling__LockXY2                                                           = 2,
	EGrassScaling__EGrassScaling_MAX3                                                = 3
};

/// Enum /Script/Landscape.ESplineModulationColorMask
/// Size: 0x05
enum ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red0                                                 = 0,
	ESplineModulationColorMask__Green1                                               = 1,
	ESplineModulationColorMask__Blue2                                                = 2,
	ESplineModulationColorMask__Alpha3                                               = 3,
	ESplineModulationColorMask__ESplineModulationColorMask_MAX4                      = 4
};

/// Enum /Script/Landscape.ELandscapeDirtyingMode
/// Size: 0x04
enum ELandscapeDirtyingMode : uint8_t
{
	ELandscapeDirtyingMode__Auto0                                                    = 0,
	ELandscapeDirtyingMode__InLandscapeModeOnly1                                     = 1,
	ELandscapeDirtyingMode__InLandscapeModeAndUserTriggeredChanges2                  = 2,
	ELandscapeDirtyingMode__ELandscapeDirtyingMode_MAX3                              = 3
};

/// Enum /Script/Landscape.LandscapeSplineMeshOrientation
/// Size: 0x03
enum LandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp0                                                                        = 0,
	LSMO_YUp1                                                                        = 1,
	LSMO_MAX2                                                                        = 2
};

/// Enum /Script/Landscape.ELandscapeLayerBlendType
/// Size: 0x04
enum ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend0                                                                  = 0,
	LB_AlphaBlend1                                                                   = 1,
	LB_HeightBlend2                                                                  = 2,
	LB_MAX3                                                                          = 3
};

/// Enum /Script/Landscape.ETerrainCoordMappingType
/// Size: 0x05
enum ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto0                                                                       = 0,
	TCMT_XY1                                                                         = 1,
	TCMT_XZ2                                                                         = 2,
	TCMT_YZ3                                                                         = 3,
	TCMT_MAX4                                                                        = 4
};

/// Enum /Script/Landscape.ELandscapeCustomizedCoordType
/// Size: 0x06
enum ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None0                                                                       = 0,
	LCCT_CustomUV01                                                                  = 1,
	LCCT_CustomUV12                                                                  = 2,
	LCCT_CustomUV23                                                                  = 3,
	LCCT_WeightMapUV4                                                                = 4,
	LCCT_MAX5                                                                        = 5
};

/// Enum /Script/Landscape.ELandscapeResizeMode
/// Size: 0x04
enum ELandscapeResizeMode : uint8_t
{
	ELandscapeResizeMode__Resample0                                                  = 0,
	ELandscapeResizeMode__Clip1                                                      = 1,
	ELandscapeResizeMode__Expand2                                                    = 2,
	ELandscapeResizeMode__ELandscapeResizeMode_MAX3                                  = 3
};

/// Enum /Script/Landscape.ELandscapeImportAlphamapType
/// Size: 0x03
enum ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive0                                          = 0,
	ELandscapeImportAlphamapType__Layered1                                           = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX2                  = 2
};

/// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
/// Size: 0x05
enum ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None0                                        = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers1                                = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly2                                = 2,
	ELandscapeLayerPaintingRestriction__UseComponentAllowList3                       = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX4      = 4
};

/// Enum /Script/Landscape.ELandscapeLayerDisplayMode
/// Size: 0x04
enum ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default0                                             = 0,
	ELandscapeLayerDisplayMode__Alphabetical1                                        = 1,
	ELandscapeLayerDisplayMode__UserSpecific2                                        = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX3                      = 3
};

/// Enum /Script/Landscape.ELandscapeLODFalloff
/// Size: 0x03
enum ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear0                                                    = 0,
	ELandscapeLODFalloff__SquareRoot1                                                = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX2                                  = 2
};

