
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x0000 (0x0006D0 - 0x0006D0)
class UControlPointMeshComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
};

/// Class /Script/Landscape.LandscapeProxy
/// Size: 0x0398 (0x000318 - 0x0006B0)
class ALandscapeProxy : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	CMember(ULandscapeSplinesComponent*)               SplineComponent                                             OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	SMember(FIntPoint)                                 LandscapeSectionOffset                                      OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	DMember(int32_t)                                   MaxLODLevel                                                 OFFSET(get<int32_t>, {0x338, 4, 0, 0})
	DMember(float)                                     LODDistanceFactor                                           OFFSET(get<float>, {0x33C, 4, 0, 0})
	CMember(TEnumAsByte<ELandscapeLODFalloff>)         LODFalloff                                                  OFFSET(get<T>, {0x340, 1, 0, 0})
	DMember(float)                                     ComponentScreenSizeToUseSubSections                         OFFSET(get<float>, {0x344, 4, 0, 0})
	DMember(float)                                     LOD0DistributionSetting                                     OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(float)                                     LODDistributionSetting                                      OFFSET(get<float>, {0x34C, 4, 0, 0})
	DMember(float)                                     TessellationComponentScreenSize                             OFFSET(get<float>, {0x350, 4, 0, 0})
	DMember(bool)                                      UseTessellationComponentScreenSizeFalloff                   OFFSET(get<bool>, {0x354, 1, 0, 0})
	DMember(float)                                     TessellationComponentScreenSizeFalloff                      OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(int32_t)                                   OccluderGeometryLOD                                         OFFSET(get<int32_t>, {0x35C, 4, 0, 0})
	DMember(int32_t)                                   StaticLightingLOD                                           OFFSET(get<int32_t>, {0x360, 4, 0, 0})
	CMember(UPhysicalMaterial*)                        DefaultPhysMaterial                                         OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(float)                                     StreamingDistanceMultiplier                                 OFFSET(get<float>, {0x370, 4, 0, 0})
	CMember(UMaterialInterface*)                       LandscapeMaterial                                           OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UMaterialInterface*)                       LandscapeHoleMaterial                                       OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(float)                                     NegativeZBoundsExtension                                    OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(float)                                     PositiveZBoundsExtension                                    OFFSET(get<float>, {0x38C, 4, 0, 0})
	CMember(TArray<ULandscapeComponent*>)              LandscapeComponents                                         OFFSET(get<T>, {0x390, 16, 0, 0})
	CMember(TArray<ULandscapeHeightfieldCollisionComponent*>) CollisionComponents                                  OFFSET(get<T>, {0x3A0, 16, 0, 0})
	CMember(TArray<UHierarchicalInstancedStaticMeshComponent*>) FoliageComponents                                  OFFSET(get<T>, {0x3B0, 16, 0, 0})
	DMember(bool)                                      bHasLandscapeGrass                                          OFFSET(get<bool>, {0x424, 1, 0, 0})
	DMember(float)                                     StaticLightingResolution                                    OFFSET(get<float>, {0x428, 4, 0, 0})
	DMember(bool)                                      bCastStaticShadow                                           OFFSET(get<bool>, {0x42C, 1, 1, 0})
	DMember(bool)                                      bCastShadowAsTwoSided                                       OFFSET(get<bool>, {0x42C, 1, 1, 1})
	DMember(bool)                                      bCastFarShadow                                              OFFSET(get<bool>, {0x42C, 1, 1, 2})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x430, 1, 0, 0})
	DMember(bool)                                      bUseMaterialPositionOffsetInStaticLighting                  OFFSET(get<bool>, {0x434, 1, 1, 0})
	DMember(bool)                                      bRenderCustomDepth                                          OFFSET(get<bool>, {0x434, 1, 1, 1})
	DMember(int32_t)                                   CustomDepthStencilValue                                     OFFSET(get<int32_t>, {0x438, 4, 0, 0})
	SMember(FLightmassPrimitiveSettings)               LightmassSettings                                           OFFSET(getStruct<T>, {0x43C, 24, 0, 0})
	DMember(int32_t)                                   CollisionMipLevel                                           OFFSET(get<int32_t>, {0x454, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionMipLevel                                     OFFSET(get<int32_t>, {0x458, 4, 0, 0})
	DMember(float)                                     CollisionThickness                                          OFFSET(get<float>, {0x45C, 4, 0, 0})
	SMember(FBodyInstance)                             BodyInstance                                                OFFSET(getStruct<T>, {0x460, 480, 0, 0})
	DMember(bool)                                      bGenerateOverlapEvents                                      OFFSET(get<bool>, {0x640, 1, 1, 0})
	DMember(bool)                                      bBakeMaterialPositionOffsetIntoCollision                    OFFSET(get<bool>, {0x640, 1, 1, 1})
	DMember(int32_t)                                   ComponentSizeQuads                                          OFFSET(get<int32_t>, {0x644, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         OFFSET(get<int32_t>, {0x648, 4, 0, 0})
	DMember(int32_t)                                   NumSubsections                                              OFFSET(get<int32_t>, {0x64C, 4, 0, 0})
	DMember(bool)                                      bUsedForNavigation                                          OFFSET(get<bool>, {0x650, 1, 1, 0})
	DMember(bool)                                      bUseDynamicMaterialInstance                                 OFFSET(get<bool>, {0x654, 1, 0, 0})
	CMember(ENavDataGatheringMode)                     NavigationGeometryGatheringMode                             OFFSET(get<T>, {0x655, 1, 0, 0})
	DMember(bool)                                      bUseLandscapeForCullingInvisibleHLODVertices                OFFSET(get<bool>, {0x656, 1, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	// void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);                                  // [0x1c8c300] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	// void SetLandscapeMaterialTextureParameterValue(FName ParameterName, UTexture* Value);                                    // [0x1c8c240] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	// void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);                                         // [0x1c8c170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	// void EditorSetLandscapeMaterial(UMaterialInterface* NewLandscapeMaterial);                                               // [0x2b5f400] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorApplySpline
	// void EditorApplySpline(USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, ULandscapeLayerInfoObject* PaintLayer); // [0x1c8bdd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
	// void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);                        // [0x1c8bd40] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
	// void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);                    // [0x1c8bcc0] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
	// void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);                                     // [0x1c8bc40] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor
	// void ChangeLODDistanceFactor(float InLODDistanceFactor);                                                                 // [0x1c8bbc0] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	// void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);                             // [0x1c8bb40] Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.Landscape
/// Size: 0x0000 (0x0006B0 - 0x0006B0)
class ALandscape : public ALandscapeProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
};

/// Class /Script/Landscape.LandscapeComponent
/// Size: 0x0190 (0x000640 - 0x0007D0)
class ULandscapeComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2000;

public:
	DMember(int32_t)                                   SectionBaseX                                                OFFSET(get<int32_t>, {0x640, 4, 0, 0})
	DMember(int32_t)                                   SectionBaseY                                                OFFSET(get<int32_t>, {0x644, 4, 0, 0})
	DMember(int32_t)                                   ComponentSizeQuads                                          OFFSET(get<int32_t>, {0x648, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         OFFSET(get<int32_t>, {0x64C, 4, 0, 0})
	DMember(int32_t)                                   NumSubsections                                              OFFSET(get<int32_t>, {0x650, 4, 0, 0})
	CMember(UMaterialInterface*)                       OverrideMaterial                                            OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UMaterialInterface*)                       OverrideHoleMaterial                                        OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(TArray<UMaterialInstanceConstant*>)        MaterialInstances                                           OFFSET(get<T>, {0x668, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MaterialInstancesDynamic                                    OFFSET(get<T>, {0x678, 16, 0, 0})
	CMember(TArray<FWeightmapLayerAllocationInfo>)     WeightmapLayerAllocations                                   OFFSET(get<T>, {0x688, 16, 0, 0})
	CMember(TArray<UTexture2D*>)                       WeightmapTextures                                           OFFSET(get<T>, {0x698, 16, 0, 0})
	CMember(UTexture2D*)                               XYOffsetmapTexture                                          OFFSET(get<T>, {0x6A8, 8, 0, 0})
	SMember(FVector4)                                  WeightmapScaleBias                                          OFFSET(getStruct<T>, {0x6B0, 16, 0, 0})
	DMember(float)                                     WeightmapSubsectionOffset                                   OFFSET(get<float>, {0x6C0, 4, 0, 0})
	SMember(FVector4)                                  HeightmapScaleBias                                          OFFSET(getStruct<T>, {0x6D0, 16, 0, 0})
	CMember(UTexture2D*)                               HeightmapTexture                                            OFFSET(get<T>, {0x6E0, 8, 0, 0})
	SMember(FBox)                                      CachedLocalBox                                              OFFSET(getStruct<T>, {0x6E8, 28, 0, 0})
	CMember(ULandscapeHeightfieldCollisionComponent*)  CollisionComponent                                          OFFSET(get<T>, {0x704, 28, 0, 0})
	SMember(FGuid)                                     MapBuildDataId                                              OFFSET(getStruct<T>, {0x720, 16, 0, 0})
	CMember(TArray<FGuid>)                             IrrelevantLights                                            OFFSET(get<T>, {0x730, 16, 0, 0})
	DMember(int32_t)                                   CollisionMipLevel                                           OFFSET(get<int32_t>, {0x740, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionMipLevel                                     OFFSET(get<int32_t>, {0x744, 4, 0, 0})
	DMember(float)                                     NegativeZBoundsExtension                                    OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     PositiveZBoundsExtension                                    OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     StaticLightingResolution                                    OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(int32_t)                                   ForcedLOD                                                   OFFSET(get<int32_t>, {0x754, 4, 0, 0})
	DMember(int32_t)                                   LODBias                                                     OFFSET(get<int32_t>, {0x758, 4, 0, 0})
	SMember(FGuid)                                     StateId                                                     OFFSET(getStruct<T>, {0x75C, 16, 0, 0})
	SMember(FGuid)                                     BakedTextureMaterialGuid                                    OFFSET(getStruct<T>, {0x76C, 16, 0, 0})
	CMember(UTexture2D*)                               GIBakedBaseColorTexture                                     OFFSET(get<T>, {0x780, 8, 0, 0})
	DMember(unsigned char)                             MobileBlendableLayerMask                                    OFFSET(get<unsigned char>, {0x788, 1, 0, 0})
	CMember(UMaterialInterface*)                       MobileMaterialInterface                                     OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UTexture2D*)                               MobileWeightNormalmapTexture                                OFFSET(get<T>, {0x798, 8, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	// UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);                                                   // [0x1c8c0e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Landscape.LandscapeGizmoActor
/// Size: 0x0000 (0x000318 - 0x000318)
class ALandscapeGizmoActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
};

/// Class /Script/Landscape.LandscapeGizmoActiveActor
/// Size: 0x0050 (0x000318 - 0x000368)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
};

/// Class /Script/Landscape.LandscapeGizmoRenderComponent
/// Size: 0x0000 (0x000640 - 0x000640)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

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
	CMember(UStaticMesh*)                              GrassMesh                                                   OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(float)                                     GrassDensity                                                OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PlacementJitter                                             OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   StartCullDistance                                           OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   EndCullDistance                                             OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      RandomRotation                                              OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      AlignToSurface                                              OFFSET(get<bool>, {0x59, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x00E0 (0x000640 - 0x000720)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	CMember(TArray<ULandscapeLayerInfoObject*>)        ComponentLayerInfos                                         OFFSET(get<T>, {0x640, 16, 0, 0})
	DMember(int32_t)                                   SectionBaseX                                                OFFSET(get<int32_t>, {0x650, 4, 0, 0})
	DMember(int32_t)                                   SectionBaseY                                                OFFSET(get<int32_t>, {0x654, 4, 0, 0})
	DMember(int32_t)                                   CollisionSizeQuads                                          OFFSET(get<int32_t>, {0x658, 4, 0, 0})
	DMember(float)                                     CollisionScale                                              OFFSET(get<float>, {0x65C, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionSizeQuads                                    OFFSET(get<int32_t>, {0x660, 4, 0, 0})
	CMember(TArray<unsigned char>)                     CollisionQuadFlags                                          OFFSET(get<T>, {0x668, 16, 0, 0})
	SMember(FGuid)                                     HeightfieldGuid                                             OFFSET(getStruct<T>, {0x678, 16, 0, 0})
	SMember(FBox)                                      CachedLocalBox                                              OFFSET(getStruct<T>, {0x688, 28, 0, 0})
	CMember(ULandscapeComponent*)                      RenderComponent                                             OFFSET(get<T>, {0x6A4, 28, 0, 0})
	CMember(TArray<UPhysicalMaterial*>)                CookedPhysicalMaterials                                     OFFSET(get<T>, {0x6D0, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeInfo
/// Size: 0x01D8 (0x000028 - 0x000200)
class ULandscapeInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(ALandscape*)                               LandscapeActor                                              OFFSET(get<T>, {0x28, 28, 0, 0})
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x44, 16, 0, 0})
	DMember(int32_t)                                   ComponentSizeQuads                                          OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   ComponentNumSubsections                                     OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	SMember(FVector)                                   DrawScale                                                   OFFSET(getStruct<T>, {0x60, 12, 0, 0})
};

/// Class /Script/Landscape.LandscapeInfoMap
/// Size: 0x0058 (0x000028 - 0x000080)
class ULandscapeInfoMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeLayerInfoObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(UPhysicalMaterial*)                        PhysMaterial                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     Hardness                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FLinearColor)                              LayerUsageDebugColor                                        OFFSET(getStruct<T>, {0x3C, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x0008 (0x0001D0 - 0x0001D8)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	DMember(bool)                                      bIsLayerThumbnail                                           OFFSET(get<bool>, {0x1D0, 1, 1, 0})
	DMember(bool)                                      bDisableTessellation                                        OFFSET(get<bool>, {0x1D0, 1, 1, 1})
	DMember(bool)                                      bMobile                                                     OFFSET(get<bool>, {0x1D0, 1, 1, 2})
	DMember(bool)                                      bEditorToolUsage                                            OFFSET(get<bool>, {0x1D0, 1, 1, 3})
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x0020 (0x000720 - 0x000740)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1856;

public:
	SMember(FGuid)                                     MeshGuid                                                    OFFSET(getStruct<T>, {0x720, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x0008 (0x000318 - 0x000320)
class ALandscapeMeshProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(ULandscapeMeshProxyComponent*)             LandscapeMeshProxyComponent                                 OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x0030 (0x0006D0 - 0x000700)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x6D0, 16, 0, 0})
	CMember(TArray<FIntPoint>)                         ProxyComponentBases                                         OFFSET(get<T>, {0x6E0, 16, 0, 0})
	DMember(int8_t)                                    ProxyLOD                                                    OFFSET(get<int8_t>, {0x6F0, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x0030 (0x000640 - 0x000670)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	CMember(TArray<ULandscapeSplineControlPoint*>)     ControlPoints                                               OFFSET(get<T>, {0x640, 16, 0, 0})
	CMember(TArray<ULandscapeSplineSegment*>)          Segments                                                    OFFSET(get<T>, {0x650, 16, 0, 0})
	CMember(TArray<UMeshComponent*>)                   CookedForeignMeshComponents                                 OFFSET(get<T>, {0x660, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x0070 (0x000028 - 0x000098)
class ULandscapeSplineControlPoint : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SideFalloff                                                 OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     EndFalloff                                                  OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(TArray<FLandscapeSplineConnection>)        ConnectedSegments                                           OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FLandscapeSplineInterpPoint>)       Points                                                      OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x70, 28, 0, 0})
	CMember(UControlPointMeshComponent*)               LocalMeshComponent                                          OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x0088 (0x000028 - 0x0000B0)
class ULandscapeSplineSegment : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FLandscapeSplineSegmentConnection)         Connections                                                 OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	SMember(FInterpCurveVector)                        SplineInfo                                                  OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	CMember(TArray<FLandscapeSplineInterpPoint>)       Points                                                      OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x80, 28, 0, 0})
	CMember(TArray<USplineMeshComponent*>)             LocalMeshComponents                                         OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x0020 (0x0006B0 - 0x0006D0)
class ALandscapeStreamingProxy : public ALandscapeProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	CMember(ALandscape*)                               LandscapeActor                                              OFFSET(get<T>, {0x6A8, 28, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x0010 (0x000040 - 0x000050)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FGrassInput>)                       GrassTypes                                                  OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x0020 (0x000040 - 0x000060)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FLayerBlendInput>)                  Layers                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FGuid)                                     ExpressionGUID                                              OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x0018 (0x000040 - 0x000058)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TEnumAsByte<ETerrainCoordMappingType>)     MappingType                                                 OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(TEnumAsByte<ELandscapeCustomizedCoordType>) CustomUVType                                               OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(float)                                     MappingScale                                                OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MappingRotation                                             OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     MappingPanU                                                 OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     MappingPanV                                                 OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSample
/// Size: 0x0020 (0x000040 - 0x000060)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FGuid)                                     ExpressionGUID                                              OFFSET(getStruct<T>, {0x4C, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0080 (0x000040 - 0x0000C0)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FExpressionInput)                          LayerUsed                                                   OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FExpressionInput)                          LayerNotUsed                                                OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      PreviewUsed                                                 OFFSET(get<bool>, {0xA8, 1, 1, 0})
	SMember(FGuid)                                     ExpressionGUID                                              OFFSET(getStruct<T>, {0xAC, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0088 (0x000040 - 0x0000C8)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FExpressionInput)                          Base                                                        OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FExpressionInput)                          Layer                                                       OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0xA8, 4, 0, 0})
	SMember(FVector)                                   ConstBase                                                   OFFSET(getStruct<T>, {0xAC, 12, 0, 0})
	SMember(FGuid)                                     ExpressionGUID                                              OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
/// Size: 0x0010 (0x000040 - 0x000050)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGuid)                                     ExpressionGUID                                              OFFSET(getStruct<T>, {0x40, 16, 0, 0})
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
	DMember(unsigned char)                             WeightmapTextureIndex                                       OFFSET(get<unsigned char>, {0x8, 1, 0, 0})
	DMember(unsigned char)                             WeightmapTextureChannel                                     OFFSET(get<unsigned char>, {0x9, 1, 0, 0})
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0028 (0x000000 - 0x000028)
class FLandscapeEditToolRenderData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UMaterialInterface*)                       ToolMaterial                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMaterialInterface*)                       GizmoMaterial                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SelectedType                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelR                                               OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelG                                               OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelB                                               OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	CMember(UTexture2D*)                               DataTexture                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
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
/// Size: 0x0048 (0x000000 - 0x000048)
class FGrassVariety : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UStaticMesh*)                              GrassMesh                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FPerPlatformFloat)                         GrassDensity                                                OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bUseGrid                                                    OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(float)                                     PlacementJitter                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FPerPlatformInt)                           StartCullDistance                                           OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	SMember(FPerPlatformInt)                           EndCullDistance                                             OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MinLOD                                                      OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	CMember(EGrassScaling)                             Scaling                                                     OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FFloatInterval)                            ScaleX                                                      OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleY                                                      OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleZ                                                      OFFSET(getStruct<T>, {0x34, 8, 0, 0})
	DMember(bool)                                      RandomRotation                                              OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      AlignToSurface                                              OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(bool)                                      bUseLandscapeLightmap                                       OFFSET(get<bool>, {0x3E, 1, 0, 0})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x3F, 1, 0, 0})
	DMember(bool)                                      bReceivesDecals                                             OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bCastDynamicShadow                                          OFFSET(get<bool>, {0x41, 1, 0, 0})
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
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
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

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (0x000000 - 0x000001)
class FLandscapeEditorLayerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0020 (0x000000 - 0x000020)
class FLandscapeWeightmapUsage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ULandscapeComponent*)                      ChannelUsage                                                OFFSET(get<T>, {0x0, 32, 0, 0})
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

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignWorldSplineData : public MDKBase
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

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignControlPointData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeSplineMeshEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UStaticMesh*)                              Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               MaterialOverrides                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bCenterH                                                    OFFSET(get<bool>, {0x18, 1, 1, 0})
	SMember(FVector2D)                                 CenterAdjust                                                OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	DMember(bool)                                      bScaleToWidth                                               OFFSET(get<bool>, {0x24, 1, 1, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	CMember(TEnumAsByte<LandscapeSplineMeshOrientation>) Orientation                                               OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              ForwardAxis                                                 OFFSET(get<T>, {0x35, 1, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              UpAxis                                                      OFFSET(get<T>, {0x36, 1, 0, 0})
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0018 (0x000000 - 0x000018)
class FLandscapeSplineSegmentConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ULandscapeSplineControlPoint*)             ControlPoint                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TangentLen                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x0040 (0x000000 - 0x000040)
class FLandscapeSplineInterpPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Left                                                        OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   Right                                                       OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   FalloffLeft                                                 OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FVector)                                   FalloffRight                                                OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	DMember(float)                                     StartEndFalloff                                             OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0040 (0x000000 - 0x000040)
class FGrassInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(ULandscapeGrassType*)                      GrassType                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x0088 (0x000000 - 0x000088)
class FLayerBlendInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TEnumAsByte<ELandscapeLayerBlendType>)     BlendType                                                   OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FExpressionInput)                          LayerInput                                                  OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FExpressionInput)                          HeightInput                                                 OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0x70, 4, 0, 0})
	SMember(FVector)                                   ConstLayerInput                                             OFFSET(getStruct<T>, {0x74, 12, 0, 0})
	DMember(float)                                     ConstHeightInput                                            OFFSET(get<float>, {0x80, 4, 0, 0})
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

/// Enum /Script/Landscape.ELandscapeGizmoType
/// Size: 0x04
enum ELandscapeGizmoType : uint8_t
{
	LGT_None0                                                                        = 0,
	LGT_Height1                                                                      = 1,
	LGT_Weight2                                                                      = 2,
	LGT_MAX3                                                                         = 3
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

/// Enum /Script/Landscape.ELandscapeLODFalloff
/// Size: 0x03
enum ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear0                                                    = 0,
	ELandscapeLODFalloff__SquareRoot1                                                = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX2                                  = 2
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

/// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
/// Size: 0x05
enum ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None0                                        = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers1                                = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly2                                = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist3                       = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX4      = 4
};

/// Enum /Script/Landscape.ELandscapeImportAlphamapType
/// Size: 0x03
enum ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive0                                          = 0,
	ELandscapeImportAlphamapType__Layered1                                           = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX2                  = 2
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

