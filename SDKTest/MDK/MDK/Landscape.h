
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x0000 (0x000640 - 0x000640)
class UControlPointMeshComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
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
/// Size: 0x0360 (0x000290 - 0x0005F0)
class ALandscapeProxy : public APartitionActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	CMember(ULandscapeSplinesComponent*)               SplineComponent                                             OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x2A0, 16, 0, 0})
	DMember(bool)                                      bEnableNanite                                               OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	CMember(TArray<FLandscapePerLODMaterialOverride>)  PerLODOverrideMaterials                                     OFFSET(get<T>, {0x2C8, 16, 0, 0})
	SMember(FIntPoint)                                 LandscapeSectionOffset                                      OFFSET(getStruct<T>, {0x2D8, 8, 0, 0})
	DMember(int32_t)                                   MaxLODLevel                                                 OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	DMember(float)                                     ComponentScreenSizeToUseSubSections                         OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     LOD0ScreenSize                                              OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(uint32_t)                                  LODGroupKey                                                 OFFSET(get<uint32_t>, {0x2EC, 4, 0, 0})
	DMember(float)                                     LOD0DistributionSetting                                     OFFSET(get<float>, {0x2F0, 4, 0, 0})
	DMember(float)                                     LODDistributionSetting                                      OFFSET(get<float>, {0x2F4, 4, 0, 0})
	DMember(int32_t)                                   StaticLightingLOD                                           OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	CMember(UPhysicalMaterial*)                        DefaultPhysMaterial                                         OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(float)                                     StreamingDistanceMultiplier                                 OFFSET(get<float>, {0x308, 4, 0, 0})
	CMember(UMaterialInterface*)                       LandscapeMaterial                                           OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UMaterialInterface*)                       LandscapeHoleMaterial                                       OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(TArray<URuntimeVirtualTexture*>)           RuntimeVirtualTextures                                      OFFSET(get<T>, {0x320, 16, 0, 0})
	DMember(bool)                                      bSetCreateRuntimeVirtualTextureVolumes                      OFFSET(get<bool>, {0x330, 1, 0, 0})
	DMember(bool)                                      bVirtualTextureRenderWithQuad                               OFFSET(get<bool>, {0x331, 1, 0, 0})
	DMember(bool)                                      bVirtualTextureRenderWithQuadHQ                             OFFSET(get<bool>, {0x332, 1, 0, 0})
	DMember(int32_t)                                   VirtualTextureNumLods                                       OFFSET(get<int32_t>, {0x334, 4, 0, 0})
	DMember(int32_t)                                   VirtualTextureLodBias                                       OFFSET(get<int32_t>, {0x338, 4, 0, 0})
	CMember(ERuntimeVirtualTextureMainPassType)        VirtualTextureRenderPassType                                OFFSET(get<T>, {0x33C, 1, 0, 0})
	DMember(float)                                     NegativeZBoundsExtension                                    OFFSET(get<float>, {0x340, 4, 0, 0})
	DMember(float)                                     PositiveZBoundsExtension                                    OFFSET(get<float>, {0x344, 4, 0, 0})
	CMember(TArray<ULandscapeComponent*>)              LandscapeComponents                                         OFFSET(get<T>, {0x348, 16, 0, 0})
	CMember(TArray<ULandscapeHeightfieldCollisionComponent*>) CollisionComponents                                  OFFSET(get<T>, {0x358, 16, 0, 0})
	CMember(TArray<UHierarchicalInstancedStaticMeshComponent*>) FoliageComponents                                  OFFSET(get<T>, {0x368, 16, 0, 0})
	CMember(ULandscapeNaniteComponent*)                NaniteComponent                                             OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(TArray<ULandscapeNaniteComponent*>)        NaniteComponents                                            OFFSET(get<T>, {0x380, 16, 0, 0})
	DMember(bool)                                      bHasLandscapeGrass                                          OFFSET(get<bool>, {0x3F4, 1, 0, 0})
	DMember(float)                                     GrassTypesMaxDiscardDistance                                OFFSET(get<float>, {0x3F8, 4, 0, 0})
	DMember(float)                                     StaticLightingResolution                                    OFFSET(get<float>, {0x3FC, 4, 0, 0})
	DMember(bool)                                      CastShadow                                                  OFFSET(get<bool>, {0x400, 1, 1, 0})
	DMember(bool)                                      bCastDynamicShadow                                          OFFSET(get<bool>, {0x400, 1, 1, 1})
	DMember(bool)                                      bCastStaticShadow                                           OFFSET(get<bool>, {0x400, 1, 1, 2})
	CMember(EShadowCacheInvalidationBehavior)          ShadowCacheInvalidationBehavior                             OFFSET(get<T>, {0x401, 1, 0, 0})
	DMember(bool)                                      bCastContactShadow                                          OFFSET(get<bool>, {0x402, 1, 1, 0})
	DMember(bool)                                      bCastFarShadow                                              OFFSET(get<bool>, {0x404, 1, 1, 0})
	DMember(bool)                                      bCastHiddenShadow                                           OFFSET(get<bool>, {0x408, 1, 1, 0})
	DMember(bool)                                      bCastShadowAsTwoSided                                       OFFSET(get<bool>, {0x40C, 1, 1, 0})
	DMember(bool)                                      bAffectDistanceFieldLighting                                OFFSET(get<bool>, {0x410, 1, 1, 0})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x411, 1, 0, 0})
	DMember(bool)                                      bUseMaterialPositionOffsetInStaticLighting                  OFFSET(get<bool>, {0x414, 1, 1, 0})
	DMember(bool)                                      bRenderCustomDepth                                          OFFSET(get<bool>, {0x414, 1, 1, 1})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 OFFSET(get<T>, {0x418, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     OFFSET(get<int32_t>, {0x41C, 4, 0, 0})
	DMember(float)                                     LDMaxDrawDistance                                           OFFSET(get<float>, {0x420, 4, 0, 0})
	SMember(FLightmassPrimitiveSettings)               LightmassSettings                                           OFFSET(getStruct<T>, {0x424, 24, 0, 0})
	DMember(int32_t)                                   CollisionMipLevel                                           OFFSET(get<int32_t>, {0x43C, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionMipLevel                                     OFFSET(get<int32_t>, {0x440, 4, 0, 0})
	SMember(FBodyInstance)                             BodyInstance                                                OFFSET(getStruct<T>, {0x448, 392, 0, 0})
	DMember(bool)                                      bGenerateOverlapEvents                                      OFFSET(get<bool>, {0x5D0, 1, 1, 0})
	DMember(bool)                                      bBakeMaterialPositionOffsetIntoCollision                    OFFSET(get<bool>, {0x5D0, 1, 1, 1})
	DMember(int32_t)                                   ComponentSizeQuads                                          OFFSET(get<int32_t>, {0x5D4, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         OFFSET(get<int32_t>, {0x5D8, 4, 0, 0})
	DMember(int32_t)                                   NumSubsections                                              OFFSET(get<int32_t>, {0x5DC, 4, 0, 0})
	DMember(bool)                                      bUsedForNavigation                                          OFFSET(get<bool>, {0x5E0, 1, 1, 0})
	DMember(bool)                                      bFillCollisionUnderLandscapeForNavmesh                      OFFSET(get<bool>, {0x5E0, 1, 1, 1})
	CMember(ENavDataGatheringMode)                     NavigationGeometryGatheringMode                             OFFSET(get<T>, {0x5E4, 1, 0, 0})
	DMember(bool)                                      bUseDynamicMaterialInstance                                 OFFSET(get<bool>, {0x5E5, 1, 0, 0})
	DMember(bool)                                      bUseLandscapeForCullingInvisibleHLODVertices                OFFSET(get<bool>, {0x5E6, 1, 0, 0})
	DMember(bool)                                      bHasLayersContent                                           OFFSET(get<bool>, {0x5E7, 1, 0, 0})
	DMember(bool)                                      bUseCompressedHeightmapStorage                              OFFSET(get<bool>, {0x5E8, 1, 0, 0})
	DMember(bool)                                      bStripPhysicsWhenCookedClient                               OFFSET(get<bool>, {0x5E9, 1, 0, 0})
	DMember(bool)                                      bStripPhysicsWhenCookedServer                               OFFSET(get<bool>, {0x5EA, 1, 0, 0})
	DMember(bool)                                      bStripGrassWhenCookedClient                                 OFFSET(get<bool>, {0x5EB, 1, 0, 0})
	DMember(bool)                                      bStripGrassWhenCookedServer                                 OFFSET(get<bool>, {0x5EC, 1, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeProxy.SetVirtualTextureRenderPassType
	// void SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType InType);                                         // [0x551cf84] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	// void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);                                  // [0x551cdf8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	// void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value);                                    // [0x551cd34] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	// void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);                                         // [0x551cc70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	// bool LandscapeExportHeightmapToRenderTarget(UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // [0x551cb8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.GetLandscapeActor
	// ALandscape* GetLandscapeActor();                                                                                         // [0x551cb64] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	// void EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial);                                               // [0x551cb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorApplySpline
	// void EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName); // [0x551c804] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor
	// void ChangeLODDistanceFactor(float InLODDistanceFactor);                                                                 // [0x551c780] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	// void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);                             // [0x551c6fc] Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.Landscape
/// Size: 0x0000 (0x0005F0 - 0x0005F0)
class ALandscape : public ALandscapeProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

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
/// Size: 0x0200 (0x000580 - 0x000780)
class ULandscapeComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	DMember(int32_t)                                   SectionBaseX                                                OFFSET(get<int32_t>, {0x578, 4, 0, 0})
	DMember(int32_t)                                   SectionBaseY                                                OFFSET(get<int32_t>, {0x57C, 4, 0, 0})
	DMember(int32_t)                                   ComponentSizeQuads                                          OFFSET(get<int32_t>, {0x580, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         OFFSET(get<int32_t>, {0x584, 4, 0, 0})
	DMember(int32_t)                                   NumSubsections                                              OFFSET(get<int32_t>, {0x588, 4, 0, 0})
	CMember(UMaterialInterface*)                       OverrideMaterial                                            OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UMaterialInterface*)                       OverrideHoleMaterial                                        OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(TArray<UMaterialInstanceConstant*>)        MaterialInstances                                           OFFSET(get<T>, {0x5A0, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MaterialInstancesDynamic                                    OFFSET(get<T>, {0x5B0, 16, 0, 0})
	CMember(TArray<int8_t>)                            LODIndexToMaterialIndex                                     OFFSET(get<T>, {0x5C0, 16, 0, 0})
	CMember(UTexture2D*)                               XYOffsetmapTexture                                          OFFSET(get<T>, {0x5D0, 8, 0, 0})
	SMember(FVector4)                                  WeightmapScaleBias                                          OFFSET(getStruct<T>, {0x5E0, 32, 0, 0})
	DMember(float)                                     WeightmapSubsectionOffset                                   OFFSET(get<float>, {0x600, 4, 0, 0})
	SMember(FVector4)                                  HeightmapScaleBias                                          OFFSET(getStruct<T>, {0x610, 32, 0, 0})
	SMember(FBox)                                      CachedLocalBox                                              OFFSET(getStruct<T>, {0x630, 56, 0, 0})
	CMember(ULandscapeHeightfieldCollisionComponent*)  CollisionComponentRef                                       OFFSET(get<T>, {0x668, 8, 0, 0})
	DMember(bool)                                      bUserTriggeredChangeRequested                               OFFSET(get<bool>, {0x670, 1, 0, 0})
	DMember(bool)                                      bNaniteActive                                               OFFSET(get<bool>, {0x671, 1, 0, 0})
	CMember(UTexture2D*)                               HeightmapTexture                                            OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(TArray<FWeightmapLayerAllocationInfo>)     WeightmapLayerAllocations                                   OFFSET(get<T>, {0x680, 16, 0, 0})
	CMember(TArray<UTexture2D*>)                       WeightmapTextures                                           OFFSET(get<T>, {0x690, 16, 0, 0})
	CMember(TArray<FLandscapePerLODMaterialOverride>)  PerLODOverrideMaterials                                     OFFSET(get<T>, {0x6A0, 16, 0, 0})
	CMember(TArray<ULandscapeGrassType*>)              GrassTypes                                                  OFFSET(get<T>, {0x6B0, 16, 0, 0})
	DMember(float)                                     GrassTypesMaxDiscardDistance                                OFFSET(get<float>, {0x6C0, 4, 0, 0})
	SMember(FGuid)                                     MapBuildDataId                                              OFFSET(getStruct<T>, {0x6C4, 16, 0, 0})
	DMember(int32_t)                                   CollisionMipLevel                                           OFFSET(get<int32_t>, {0x6D4, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionMipLevel                                     OFFSET(get<int32_t>, {0x6D8, 4, 0, 0})
	DMember(float)                                     NegativeZBoundsExtension                                    OFFSET(get<float>, {0x6DC, 4, 0, 0})
	DMember(float)                                     PositiveZBoundsExtension                                    OFFSET(get<float>, {0x6E0, 4, 0, 0})
	DMember(float)                                     StaticLightingResolution                                    OFFSET(get<float>, {0x6E4, 4, 0, 0})
	DMember(int32_t)                                   ForcedLOD                                                   OFFSET(get<int32_t>, {0x6E8, 4, 0, 0})
	DMember(int32_t)                                   LODBias                                                     OFFSET(get<int32_t>, {0x6EC, 4, 0, 0})
	SMember(FGuid)                                     StateId                                                     OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})
	CMember(UMaterialInterface*)                       MobileMaterialInterface                                     OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               MobileMaterialInterfaces                                    OFFSET(get<T>, {0x728, 16, 0, 0})
	CMember(TArray<UTexture2D*>)                       MobileWeightmapTextures                                     OFFSET(get<T>, {0x738, 16, 0, 0})
	CMember(TArray<FWeightmapLayerAllocationInfo>)     MobileWeightmapLayerAllocations                             OFFSET(get<T>, {0x748, 16, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeComponent.SetLODBias
	// void SetLODBias(int32_t InLODBias);                                                                                      // [0x5503acc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.SetForcedLOD
	// void SetForcedLOD(int32_t InForcedLOD);                                                                                  // [0x5503a4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	// UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);                                                   // [0x5503120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	// float EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName);                            // [0x5502fec] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	// float EditorGetPaintLayerWeightAtLocation(FVector& InLocation, ULandscapeLayerInfoObject* PaintLayer);                   // [0x5502eb8] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
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
/// Size: 0x0000 (0x000580 - 0x000580)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
};

/// Class /Script/Landscape.LandscapeGrassType
/// Size: 0x0038 (0x000028 - 0x000060)
class ULandscapeGrassType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FGrassVariety>)                     GrassVarieties                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bEnableDensityScaling                                       OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(uint32_t)                                  StateHash                                                   OFFSET(get<uint32_t>, {0x3C, 4, 0, 0})
	CMember(UStaticMesh*)                              GrassMesh                                                   OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(float)                                     GrassDensity                                                OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PlacementJitter                                             OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   StartCullDistance                                           OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   EndCullDistance                                             OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      RandomRotation                                              OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      AlignToSurface                                              OFFSET(get<bool>, {0x59, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x0100 (0x000580 - 0x000680)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	CMember(TArray<ULandscapeLayerInfoObject*>)        ComponentLayerInfos                                         OFFSET(get<T>, {0x578, 16, 0, 0})
	DMember(int32_t)                                   SectionBaseX                                                OFFSET(get<int32_t>, {0x588, 4, 0, 0})
	DMember(int32_t)                                   SectionBaseY                                                OFFSET(get<int32_t>, {0x58C, 4, 0, 0})
	DMember(int32_t)                                   CollisionSizeQuads                                          OFFSET(get<int32_t>, {0x590, 4, 0, 0})
	DMember(float)                                     CollisionScale                                              OFFSET(get<float>, {0x594, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionSizeQuads                                    OFFSET(get<int32_t>, {0x598, 4, 0, 0})
	CMember(TArray<char>)                              CollisionQuadFlags                                          OFFSET(get<T>, {0x5A0, 16, 0, 0})
	SMember(FGuid)                                     HeightfieldGuid                                             OFFSET(getStruct<T>, {0x5B0, 16, 0, 0})
	SMember(FBox)                                      CachedLocalBox                                              OFFSET(getStruct<T>, {0x5C0, 56, 0, 0})
	CMember(ULandscapeComponent*)                      RenderComponentRef                                          OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(TArray<UPhysicalMaterial*>)                CookedPhysicalMaterials                                     OFFSET(get<T>, {0x618, 16, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	// ULandscapeComponent* GetRenderComponent();                                                                               // [0x550442c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeLayerInfoObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(UPhysicalMaterial*)                        PhysMaterial                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     Hardness                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FLinearColor)                              LayerUsageDebugColor                                        OFFSET(getStruct<T>, {0x3C, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x0018 (0x000240 - 0x000258)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	CMember(TArray<FLandscapeMaterialTextureStreamingInfo>) TextureStreamingInfo                                   OFFSET(get<T>, {0x240, 16, 0, 0})
	DMember(bool)                                      bIsLayerThumbnail                                           OFFSET(get<bool>, {0x250, 1, 1, 0})
	DMember(bool)                                      bDisableTessellation                                        OFFSET(get<bool>, {0x250, 1, 1, 1})
	DMember(bool)                                      bMobile                                                     OFFSET(get<bool>, {0x250, 1, 1, 2})
	DMember(bool)                                      bEditorToolUsage                                            OFFSET(get<bool>, {0x250, 1, 1, 3})
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x0010 (0x000680 - 0x000690)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	SMember(FGuid)                                     MeshGuid                                                    OFFSET(getStruct<T>, {0x678, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ALandscapeMeshProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(ULandscapeMeshProxyComponent*)             LandscapeMeshProxyComponent                                 OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x0070 (0x000640 - 0x0006B0)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x638, 16, 0, 0})
	CMember(TArray<FIntPoint>)                         ProxyComponentBases                                         OFFSET(get<T>, {0x648, 16, 0, 0})
	CMember(TArray<FVector>)                           ProxyComponentCentersObjectSpace                            OFFSET(get<T>, {0x658, 16, 0, 0})
	SMember(FVector)                                   ComponentXVectorObjectSpace                                 OFFSET(getStruct<T>, {0x668, 24, 0, 0})
	SMember(FVector)                                   ComponentYVectorObjectSpace                                 OFFSET(getStruct<T>, {0x680, 24, 0, 0})
	DMember(int32_t)                                   ComponentResolution                                         OFFSET(get<int32_t>, {0x698, 4, 0, 0})
	DMember(int8_t)                                    ProxyLOD                                                    OFFSET(get<int8_t>, {0x69C, 1, 0, 0})
	DMember(uint32_t)                                  LODGroupKey                                                 OFFSET(get<uint32_t>, {0x6A0, 4, 0, 0})
};

/// Class /Script/Landscape.LandscapeSettings
/// Size: 0x0068 (0x000030 - 0x000098)
class ULandscapeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(int32_t)                                   MaxNumberOfLayers                                           OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MaxComponents                                               OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(uint32_t)                                  MaxImageImportCacheSizeMegaBytes                            OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     PaintStrengthGamma                                          OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bDisablePaintingStartupSlowdown                             OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(ELandscapeDirtyingMode)                    LandscapeDirtyingMode                                       OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(int32_t)                                   SideResolutionLimit                                         OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       DefaultLandscapeMaterial                                    OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<ULandscapeLayerInfoObject*>) DefaultLayerInfoObject                                     OFFSET(get<T>, {0x68, 32, 0, 0})
	DMember(float)                                     BrushSizeUIMax                                              OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     BrushSizeClampMax                                           OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(bool)                                      bRestrictiveMode                                            OFFSET(get<bool>, {0x90, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x0030 (0x000580 - 0x0005B0)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(TArray<ULandscapeSplineControlPoint*>)     ControlPoints                                               OFFSET(get<T>, {0x578, 16, 0, 0})
	CMember(TArray<ULandscapeSplineSegment*>)          Segments                                                    OFFSET(get<T>, {0x588, 16, 0, 0})
	CMember(TArray<UMeshComponent*>)                   CookedForeignMeshComponents                                 OFFSET(get<T>, {0x598, 16, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	// TArray<USplineMeshComponent*> GetSplineMeshComponents();                                                                 // [0x5504444] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x00B0 (0x000028 - 0x0000D8)
class ULandscapeSplineControlPoint : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LayerWidthRatio                                             OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     SideFalloff                                                 OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     LeftSideFalloffFactor                                       OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     RightSideFalloffFactor                                      OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     LeftSideLayerFalloffFactor                                  OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     RightSideLayerFalloffFactor                                 OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     EndFalloff                                                  OFFSET(get<float>, {0x74, 4, 0, 0})
	CMember(TArray<FLandscapeSplineConnection>)        ConnectedSegments                                           OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FLandscapeSplineInterpPoint>)       Points                                                      OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x98, 56, 0, 0})
	CMember(UControlPointMeshComponent*)               LocalMeshComponent                                          OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x0090 (0x000028 - 0x0000B8)
class ULandscapeSplineSegment : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FLandscapeSplineSegmentConnection)         Connections                                                 OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FInterpCurveVector)                        SplineInfo                                                  OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(TArray<FLandscapeSplineInterpPoint>)       Points                                                      OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x70, 56, 0, 0})
	CMember(TArray<USplineMeshComponent*>)             LocalMeshComponents                                         OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x0070 (0x0005F0 - 0x000660)
class ALandscapeStreamingProxy : public ALandscapeProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	CMember(TWeakObjectPtr<ALandscape*>)               LandscapeActorRef                                           OFFSET(get<T>, {0x5F0, 32, 0, 0})
	CMember(TSet<FString>)                             OverriddenSharedProperties                                  OFFSET(get<T>, {0x610, 80, 0, 0})
};

/// Class /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandscapeWeightmapUsage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(ULandscapeComponent*)                      ChannelUsage                                                OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FGuid)                                     LayerGuid                                                   OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FGrassInput>)                       GrassTypes                                                  OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FLayerBlendInput>)                  Layers                                                      OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TEnumAsByte<ETerrainCoordMappingType>)     MappingType                                                 OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(TEnumAsByte<ELandscapeCustomizedCoordType>) CustomUVType                                               OFFSET(get<T>, {0xB1, 1, 0, 0})
	DMember(float)                                     MappingScale                                                OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     MappingRotation                                             OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     MappingPanU                                                 OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     MappingPanV                                                 OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Class /Script/Landscape.ControlPointMeshActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AControlPointMeshActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UControlPointMeshComponent*)               ControlPointMeshComponent                                   OFFSET(get<T>, {0x290, 8, 0, 0})
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
	CMember(TWeakObjectPtr<ALandscape*>)               LandscapeActor                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   ComponentSizeQuads                                          OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   ComponentNumSubsections                                     OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FVector)                                   DrawScale                                                   OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    StreamingProxies                                            OFFSET(get<T>, {0x118, 16, 0, 0})
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
/// Size: 0x0010 (0x000640 - 0x000650)
class ULandscapeNaniteComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	SMember(FGuid)                                     ProxyContentId                                              OFFSET(getStruct<T>, {0x638, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x648, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineActor
/// Size: 0x0018 (0x000290 - 0x0002A8)
class ALandscapeSplineActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x298, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineMeshesActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ALandscapeSplineMeshesActor : public APartitionActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(TArray<UStaticMeshComponent*>)             StaticMeshComponents                                        OFFSET(get<T>, {0x290, 16, 0, 0})
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
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0xB0, 4, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0xB4, 4, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0058 (0x0000B0 - 0x000108)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FExpressionInput)                          LayerUsed                                                   OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          LayerNotUsed                                                OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	DMember(bool)                                      PreviewUsed                                                 OFFSET(get<bool>, {0x104, 1, 1, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0070 (0x0000B0 - 0x000120)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FExpressionInput)                          base                                                        OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          Layer                                                       OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0x104, 4, 0, 0})
	SMember(FVector)                                   ConstBase                                                   OFFSET(getStruct<T>, {0x108, 24, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FPhysicalMaterialInput>)            Inputs                                                      OFFSET(get<T>, {0xB0, 16, 0, 0})
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
class FLandscapeLayerBrush : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeLayer
/// Size: 0x0088 (0x000000 - 0x000088)
class FLandscapeLayer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bLocked                                                     OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(float)                                     HeightmapAlpha                                              OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     WeightmapAlpha                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(TEnumAsByte<ELandscapeBlendMode>)          BlendMode                                                   OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(TArray<FLandscapeLayerBrush>)              Brushes                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TMap<ULandscapeLayerInfoObject*, bool>)    WeightmapLayerAllocationBlend                               OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeEditToolRenderData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UMaterialInterface*)                       ToolMaterial                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMaterialInterface*)                       GizmoMaterial                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SelectedType                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelR                                               OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelG                                               OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelB                                               OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	CMember(UTexture2D*)                               DataTexture                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(UTexture2D*)                               LayerContributionTexture                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UTexture2D*)                               DirtyTexture                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/Landscape.WeightmapLayerAllocationInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FWeightmapLayerAllocationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ULandscapeLayerInfoObject*)                LayerInfo                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(char)                                      WeightmapTextureIndex                                       OFFSET(get<char>, {0x8, 1, 0, 0})
	DMember(char)                                      WeightmapTextureChannel                                     OFFSET(get<char>, {0x9, 1, 0, 0})
};

/// Struct /Script/Landscape.LandscapeComponentMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeComponentMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPerPlatformInt)                           LODIndex                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapePerLODMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapePerLODMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   LODIndex                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Landscape.WeightmapData
/// Size: 0x0030 (0x000000 - 0x000030)
class FWeightmapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<UTexture2D*>)                       Textures                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FWeightmapLayerAllocationInfo>)     LayerAllocations                                            OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<ULandscapeWeightmapUsage*>)         TextureUsages                                               OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Landscape.HeightmapData
/// Size: 0x0008 (0x000000 - 0x000008)
class FHeightmapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UTexture2D*)                               Texture                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeLayerComponentData
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeLayerComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FHeightmapData)                            HeightmapData                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FWeightmapData)                            WeightmapData                                               OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/Landscape.GizmoSelectData
/// Size: 0x0050 (0x000000 - 0x000050)
class FGizmoSelectData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/Landscape.GrassVariety
/// Size: 0x01B0 (0x000000 - 0x0001B0)
class FGrassVariety : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(UStaticMesh*)                              GrassMesh                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               OverrideMaterials                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FPerPlatformFloat)                         GrassDensity                                                OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FPerQualityLevelFloat)                     GrassDensityQuality                                         OFFSET(getStruct<T>, {0x20, 104, 0, 0})
	DMember(bool)                                      bUseGrid                                                    OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(float)                                     PlacementJitter                                             OFFSET(get<float>, {0x8C, 4, 0, 0})
	SMember(FPerPlatformInt)                           StartCullDistance                                           OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	SMember(FPerQualityLevelInt)                       StartCullDistanceQuality                                    OFFSET(getStruct<T>, {0x98, 104, 0, 0})
	SMember(FPerPlatformInt)                           EndCullDistance                                             OFFSET(getStruct<T>, {0x100, 4, 0, 0})
	SMember(FPerQualityLevelInt)                       EndCullDistanceQuality                                      OFFSET(getStruct<T>, {0x108, 104, 0, 0})
	DMember(int32_t)                                   MinLOD                                                      OFFSET(get<int32_t>, {0x170, 4, 0, 0})
	CMember(EGrassScaling)                             Scaling                                                     OFFSET(get<T>, {0x174, 1, 0, 0})
	SMember(FFloatInterval)                            ScaleX                                                      OFFSET(getStruct<T>, {0x178, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleY                                                      OFFSET(getStruct<T>, {0x180, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleZ                                                      OFFSET(getStruct<T>, {0x188, 8, 0, 0})
	DMember(bool)                                      bWeightAttenuatesMaxScale                                   OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(float)                                     MaxScaleWeightAttenuation                                   OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(bool)                                      RandomRotation                                              OFFSET(get<bool>, {0x198, 1, 0, 0})
	DMember(bool)                                      AlignToSurface                                              OFFSET(get<bool>, {0x199, 1, 0, 0})
	DMember(bool)                                      bUseLandscapeLightmap                                       OFFSET(get<bool>, {0x19A, 1, 0, 0})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x19B, 1, 0, 0})
	DMember(bool)                                      bReceivesDecals                                             OFFSET(get<bool>, {0x19C, 1, 0, 0})
	DMember(bool)                                      bAffectDistanceFieldLighting                                OFFSET(get<bool>, {0x19D, 1, 0, 0})
	DMember(bool)                                      bCastDynamicShadow                                          OFFSET(get<bool>, {0x19E, 1, 0, 0})
	DMember(bool)                                      bCastContactShadow                                          OFFSET(get<bool>, {0x19F, 1, 0, 0})
	DMember(bool)                                      bKeepInstanceBufferCPUCopy                                  OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	DMember(uint32_t)                                  InstanceWorldPositionOffsetDisableDistance                  OFFSET(get<uint32_t>, {0x1A4, 4, 0, 0})
	CMember(EShadowCacheInvalidationBehavior)          ShadowCacheInvalidationBehavior                             OFFSET(get<T>, {0x1A8, 1, 0, 0})
};

/// Struct /Script/Landscape.LandscapeMaterialTextureStreamingInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FLandscapeMaterialTextureStreamingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     TextureName                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     TexelFactor                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeSplineConnection
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeSplineConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ULandscapeSplineSegment*)                  Segment                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      End                                                         OFFSET(get<bool>, {0x8, 1, 1, 0})
};

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignControlPointData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.ForeignSplineSegmentData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignSplineSegmentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignWorldSplineData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FLandscapeSplineInterpPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Left                                                        OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Right                                                       OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   FalloffLeft                                                 OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   FalloffRight                                                OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	SMember(FVector)                                   LayerLeft                                                   OFFSET(getStruct<T>, {0x78, 24, 0, 0})
	SMember(FVector)                                   LayerRight                                                  OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FVector)                                   LayerFalloffLeft                                            OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	SMember(FVector)                                   LayerFalloffRight                                           OFFSET(getStruct<T>, {0xC0, 24, 0, 0})
	DMember(float)                                     StartEndFalloff                                             OFFSET(get<float>, {0xD8, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeSplineSegmentConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ULandscapeSplineControlPoint*)             ControlPoint                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TangentLen                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0058 (0x000000 - 0x000058)
class FLandscapeSplineMeshEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UStaticMesh*)                              Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               MaterialOverrides                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bCenterH                                                    OFFSET(get<bool>, {0x18, 1, 1, 0})
	SMember(FVector2D)                                 CenterAdjust                                                OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bScaleToWidth                                               OFFSET(get<bool>, {0x30, 1, 1, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	CMember(TEnumAsByte<LandscapeSplineMeshOrientation>) orientation                                               OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              ForwardAxis                                                 OFFSET(get<T>, {0x51, 1, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              UpAxis                                                      OFFSET(get<T>, {0x52, 1, 0, 0})
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0038 (0x000000 - 0x000038)
class FGrassInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(ULandscapeGrassType*)                      GrassType                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0x10, 40, 0, 0})
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x0080 (0x000000 - 0x000080)
class FLayerBlendInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<ELandscapeLayerBlendType>)     BlendType                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FExpressionInput)                          LayerInput                                                  OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FExpressionInput)                          HeightInput                                                 OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FVector)                                   ConstLayerInput                                             OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	DMember(float)                                     ConstHeightInput                                            OFFSET(get<float>, {0x78, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeBrushParameters
/// Size: 0x0018 (0x000000 - 0x000018)
class FLandscapeBrushParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ELandscapeToolTargetType)                  LayerType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UTextureRenderTarget2D*)                   CombinedResult                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     WeightmapLayerName                                          OFFSET(getStruct<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeInfoLayerSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeInfoLayerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ULandscapeLayerInfoObject*)                LayerInfoObj                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (0x000000 - 0x000001)
class FLandscapeEditorLayerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeLayerStruct
/// Size: 0x0008 (0x000000 - 0x000008)
class FLandscapeLayerStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(ULandscapeLayerInfoObject*)                LayerInfoObj                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeImportLayerInfo
/// Size: 0x0001 (0x000000 - 0x000001)
class FLandscapeImportLayerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeProxyMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeProxyMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPerPlatformInt)                           LODIndex                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeTexture2DMipMap
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeTexture2DMipMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   SizeX                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SizeY                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bCompressed                                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/Landscape.PhysicalMaterialInput
/// Size: 0x0030 (0x000000 - 0x000030)
class FPhysicalMaterialInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UPhysicalMaterial*)                        PhysicalMaterial                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0x8, 40, 0, 0})
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
/// Size: 0x15
enum EHeightmapRTType : uint8_t
{
	EHeightmapRTType__HeightmapRT_CombinedAtlas0                                     = 0,
	EHeightmapRTType__HeightmapRT_CombinedNonAtlas1                                  = 1,
	EHeightmapRTType__HeightmapRT_Scratch12                                          = 2,
	EHeightmapRTType__HeightmapRT_Scratch23                                          = 3,
	EHeightmapRTType__HeightmapRT_Scratch34                                          = 4,
	EHeightmapRTType__HeightmapRT_BoundaryNormal5                                    = 5,
	EHeightmapRTType__HeightmapRT_Mip16                                              = 6,
	EHeightmapRTType__HeightmapRT_Mip27                                              = 7,
	EHeightmapRTType__HeightmapRT_Mip38                                              = 8,
	EHeightmapRTType__HeightmapRT_Mip49                                              = 9,
	EHeightmapRTType__HeightmapRT_Mip510                                             = 10,
	EHeightmapRTType__HeightmapRT_Mip611                                             = 11,
	EHeightmapRTType__HeightmapRT_Mip712                                             = 12,
	EHeightmapRTType__HeightmapRT_Count13                                            = 13,
	EHeightmapRTType__HeightmapRT_MAX14                                              = 14
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

