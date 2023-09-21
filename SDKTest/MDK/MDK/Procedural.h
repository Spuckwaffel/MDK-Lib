
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/Procedural.ProceduralParameterModifier
/// Size: 0x0010 (0x000028 - 0x000038)
class UProceduralParameterModifier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     Contribution                                                ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(EProceduralParameterModifierBlendMode)     BlendMode                                                   ___ OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Class /Script/Procedural.ProceduralDensityModifier
/// Size: 0x0000 (0x000038 - 0x000038)
class UProceduralDensityModifier : public UProceduralParameterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Procedural.ProceduralDataMap
/// Size: 0x0008 (0x000028 - 0x000030)
class UProceduralDataMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bUseRemapCurve                                              ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/Procedural.ProceduralFloatDataMap
/// Size: 0x0088 (0x000030 - 0x0000B8)
class UProceduralFloatDataMap : public UProceduralDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FProceduralRemapFloatCurve)                RemapCurve                                                  ___ OFFSET(get<T>, {0x30, 136, 0, 0})
};

/// Class /Script/Procedural.ProceduralLandscapeLayerMap
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UProceduralLandscapeLayerMap : public UProceduralFloatDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     LandscapeLayerName                                          ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     LandscapeEditLayerName                                      ___ OFFSET(get<T>, {0xBC, 4, 0, 0})
};

/// Class /Script/Procedural.ProceduralRotationModifier
/// Size: 0x0000 (0x000038 - 0x000038)
class UProceduralRotationModifier : public UProceduralParameterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Procedural.ProceduralScaleModifier
/// Size: 0x0000 (0x000038 - 0x000038)
class UProceduralScaleModifier : public UProceduralParameterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Procedural.ProceduralTextureFloatMap
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UProceduralTextureFloatMap : public UProceduralFloatDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(EProceduralTextureColorChannel)            Channel                                                     ___ OFFSET(get<T>, {0xB8, 1, 0, 0})
	SMember(FProceduralTextureSource)                  Source                                                      ___ OFFSET(get<T>, {0xC0, 56, 0, 0})
};

/// Class /Script/Procedural.ProceduralVectorDataMap
/// Size: 0x0208 (0x000030 - 0x000238)
class UProceduralVectorDataMap : public UProceduralDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	SMember(FProceduralRemapVectorCurve)               RemapCurve                                                  ___ OFFSET(get<T>, {0x30, 520, 0, 0})
};

/// Class /Script/Procedural.ProceduralTextureVectorMap
/// Size: 0x0038 (0x000238 - 0x000270)
class UProceduralTextureVectorMap : public UProceduralVectorDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FProceduralTextureSource)                  Source                                                      ___ OFFSET(get<T>, {0x238, 56, 0, 0})
};

/// Class /Script/Procedural.ProceduralVertexColorMap
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UProceduralVertexColorMap : public UProceduralFloatDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(EProceduralTextureColorChannel)            Channel                                                     ___ OFFSET(get<T>, {0xB8, 1, 0, 0})
};

/// Class /Script/Procedural.HISMBuilderSettings
/// Size: 0x01D8 (0x000028 - 0x000200)
class UHISMBuilderSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	CMember(TEnumAsByte<EComponentMobility>)           Mobility                                                    ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FInt32Interval)                            CullDistance                                                ___ OFFSET(get<T>, {0x2C, 8, 0, 0})
	DMember(float)                                     LODDistanceScale                                            ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bCastShadow                                                 ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(bool)                                      bAffectDynamicIndirectLighting                              ___ OFFSET(get<bool>, {0x38, 1, 1, 1})
	DMember(bool)                                      bAffectDistanceFieldLighting                                ___ OFFSET(get<bool>, {0x38, 1, 1, 2})
	DMember(bool)                                      bCastDynamicShadow                                          ___ OFFSET(get<bool>, {0x38, 1, 1, 3})
	DMember(bool)                                      bCastStaticShadow                                           ___ OFFSET(get<bool>, {0x38, 1, 1, 4})
	DMember(bool)                                      bCastShadowAsTwoSided                                       ___ OFFSET(get<bool>, {0x38, 1, 1, 5})
	DMember(bool)                                      bReceivesDecals                                             ___ OFFSET(get<bool>, {0x38, 1, 1, 6})
	DMember(bool)                                      bOverrideLightMapRes                                        ___ OFFSET(get<bool>, {0x38, 1, 1, 7})
	DMember(int32_t)                                   OverriddenLightMapRes                                       ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(ELightmapType)                             LightmapType                                                ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(bool)                                      bUseAsOccluder                                              ___ OFFSET(get<bool>, {0x44, 1, 1, 0})
	SMember(FBodyInstance)                             BodyInstance                                                ___ OFFSET(get<T>, {0x48, 392, 0, 0})
	CMember(TEnumAsByte<EHasCustomNavigableGeometry>)  CustomNavigableGeometry                                     ___ OFFSET(get<T>, {0x1D0, 1, 0, 0})
	SMember(FLightingChannels)                         LightingChannels                                            ___ OFFSET(get<T>, {0x1D1, 1, 0, 0})
	DMember(bool)                                      bRenderCustomDepth                                          ___ OFFSET(get<bool>, {0x1D4, 1, 1, 0})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 ___ OFFSET(get<T>, {0x1D8, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     ___ OFFSET(get<int32_t>, {0x1DC, 4, 0, 0})
	DMember(int32_t)                                   TranslucencySortPriority                                    ___ OFFSET(get<int32_t>, {0x1E0, 4, 0, 0})
	DMember(bool)                                      bEnableDensityScaling                                       ___ OFFSET(get<bool>, {0x1E4, 1, 1, 0})
	CMember(TArray<URuntimeVirtualTexture*>)           RuntimeVirtualTextures                                      ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	DMember(int32_t)                                   VirtualTextureCullMips                                      ___ OFFSET(get<int32_t>, {0x1F8, 4, 0, 0})
	CMember(ERuntimeVirtualTextureMainPassType)        VirtualTextureRenderPassType                                ___ OFFSET(get<T>, {0x1FC, 1, 0, 0})
};

/// Class /Script/Procedural.ProceduralContentVariationsWeightsModifier
/// Size: 0x0000 (0x000038 - 0x000038)
class UProceduralContentVariationsWeightsModifier : public UProceduralParameterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Procedural.ProceduralContentVariationsWeightsMapModifier
/// Size: 0x0010 (0x000038 - 0x000048)
class UProceduralContentVariationsWeightsMapModifier : public UProceduralContentVariationsWeightsModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FProceduralContentVariationMap>)    VariationsMaps                                              ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralGenerator
/// Size: 0x0010 (0x000028 - 0x000038)
class UProceduralGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FProceduralDebugSettings)                  DebugSettings                                               ___ OFFSET(get<T>, {0x28, 12, 0, 0})
};

/// Class /Script/Procedural.ProceduralCustomGenerator
/// Size: 0x0010 (0x000038 - 0x000048)
class UProceduralCustomGenerator : public UProceduralGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UClass*)                                   GeneratorContextClass                                       ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UProceduralGeneratorContext*)              GeneratorContext                                            ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralDensityMapModifier
/// Size: 0x0008 (0x000038 - 0x000040)
class UProceduralDensityMapModifier : public UProceduralDensityModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UProceduralFloatDataMap*)                  Map                                                         ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralGenerationBlockingVolume
/// Size: 0x0010 (0x0002C8 - 0x0002D8)
class AProceduralGenerationBlockingVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(TArray<AProceduralGenerationVolume*>)      BlockedVolumes                                              ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralGenerationComponent
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UProceduralGenerationComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UProceduralGenerator*)                     Generator                                                   ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bShowDebugVisualization                                     ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	SMember(FGuid)                                     ProceduralGenerationGuid                                    ___ OFFSET(get<T>, {0xAC, 16, 0, 0})
	CMember(AVolume*)                                  GenerationVolume                                            ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UProceduralGenerationContext*)             GenerationContext                                           ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralGenerationContext
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UProceduralGenerationContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(UProceduralGeneratorContext*)              GeneratorContext                                            ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<UProceduralGeneratorContext*>)      GeneratedContexts                                           ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UProceduralGeneratorContext*>)      RegisteredContexts                                          ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TMap<FGuid, UProceduralGeneratorContext*>) GeneratorContexts                                           ___ OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Class /Script/Procedural.ProceduralGenerationVolume
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class AProceduralGenerationVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(UProceduralGenerationComponent*)           ProceduralComponent                                         ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralGeneratorContext
/// Size: 0x0030 (0x000028 - 0x000058)
class UProceduralGeneratorContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UProceduralGenerator*)                     Generator                                                   ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UProceduralGenerationContext*)             GenerationContext                                           ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UProceduralGeneratorContext*)              OwnerContext                                                ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<UObject*>)                          GeneratedObjects                                            ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(UProceduralPointCloud*)                    ExportedPointCloud                                          ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralGeneratorStack
/// Size: 0x0010 (0x000038 - 0x000048)
class UProceduralGeneratorStack : public UProceduralGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FProceduralGenerationStackElement>) Generators                                                  ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralGeneratorStackContext
/// Size: 0x0000 (0x000058 - 0x000058)
class UProceduralGeneratorStackContext : public UProceduralGeneratorContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/Procedural.ProceduralPointCloud
/// Size: 0x0010 (0x000028 - 0x000038)
class UProceduralPointCloud : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FProceduralPointCloudPoint>)        Points                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralRotationMapModifier
/// Size: 0x0028 (0x000038 - 0x000060)
class UProceduralRotationMapModifier : public UProceduralRotationModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UProceduralVectorDataMap*)                 Map                                                         ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(EProceduralRotationFormat)                 RotationFormat                                              ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FFloatInterval)                            Roll                                                        ___ OFFSET(get<T>, {0x44, 8, 0, 0})
	SMember(FFloatInterval)                            Pitch                                                       ___ OFFSET(get<T>, {0x4C, 8, 0, 0})
	SMember(FFloatInterval)                            Yaw                                                         ___ OFFSET(get<T>, {0x54, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralRotationNoiseModifier
/// Size: 0x0028 (0x000038 - 0x000060)
class UProceduralRotationNoiseModifier : public UProceduralRotationModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bRandomRoll                                                 ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
	SMember(FFloatInterval)                            RandomRoll                                                  ___ OFFSET(get<T>, {0x3C, 8, 0, 0})
	DMember(bool)                                      bRandomPitch                                                ___ OFFSET(get<bool>, {0x44, 1, 1, 0})
	SMember(FFloatInterval)                            RandomPitch                                                 ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(bool)                                      bRandomYaw                                                  ___ OFFSET(get<bool>, {0x50, 1, 1, 0})
	SMember(FFloatInterval)                            RandomYaw                                                   ___ OFFSET(get<T>, {0x54, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralScaleMapModifier
/// Size: 0x0018 (0x000038 - 0x000050)
class UProceduralScaleMapModifier : public UProceduralScaleModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bRemapScale                                                 ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FFloatInterval)                            RemapScale                                                  ___ OFFSET(get<T>, {0x3C, 8, 0, 0})
	CMember(UProceduralFloatDataMap*)                  Map                                                         ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralScaleNoiseModifier
/// Size: 0x0008 (0x000038 - 0x000040)
class UProceduralScaleNoiseModifier : public UProceduralScaleModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FFloatInterval)                            Scale                                                       ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterContentVariation
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UProceduralScatterContentVariation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(EProceduralScatterContentPivotMode)        PivotMode                                                   ___ OFFSET(get<T>, {0x2C, 1, 0, 0})
	SMember(FVector)                                   AdditionalPivotOffset                                       ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(float)                                     FootprintBoundingBoxRatio                                   ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(TArray<FName>)                             SetActorTags                                                ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterActorContentVariation
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
class UProceduralScatterActorContentVariation : public UProceduralScatterContentVariation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(UClass*)                                   ActorClass                                                  ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterContentSettings
/// Size: 0x0040 (0x000028 - 0x000068)
class UProceduralScatterContentSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FName>)                             SetActorTags                                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UProceduralScatterContentVariation*>) Variations                                                ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterActorContentSettings
/// Size: 0x0008 (0x000068 - 0x000070)
class UProceduralScatterActorContentSettings : public UProceduralScatterContentSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bHideFromWorldOutliner                                      ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterGenerator
/// Size: 0x00A0 (0x000038 - 0x0000D8)
class UProceduralScatterGenerator : public UProceduralGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(EProceduralScatterMethod)                  ScatterMethod                                               ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FProceduralScatterTileSettings)            TileSettings                                                ___ OFFSET(get<T>, {0x3C, 20, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   NumUniqueSourcePointPatterns                                ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	SMember(FVector2D)                                 GridSize                                                    ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FVector2D)                                 GridJitter                                                  ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     GridRotation                                                ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	SMember(FVector2D)                                 GridOffset                                                  ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FProceduralScatterSettingsElement>) ScatterSettingsElements                                     ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FName>)                             BlockingActorTags                                           ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(bool)                                      bAllScatterPointsBlocking                                   ___ OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bLocalDistribution                                          ___ OFFSET(get<bool>, {0xB1, 1, 0, 0})
	CMember(TArray<FName>)                             BlockingScatterPointTags                                    ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FProceduralScatterDebugSettings)           ScatterDebugSettings                                        ___ OFFSET(get<T>, {0xC8, 12, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterGeneratorContext
/// Size: 0x0328 (0x000058 - 0x000380)
class UProceduralScatterGeneratorContext : public UProceduralGeneratorContext
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FScatteredPointCloud)                      ScatteredPointCloud                                         ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<UProceduralScatterGeneratorTile*>)  UniqueTiles                                                 ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FSourcePointGenerator>)             SourcePointGenerators                                       ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FProceduralScatterProjectionPoint>) ProjectionPointCloud                                        ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(UProceduralPointCloud*)                    SourcePointCloud                                            ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(UProceduralPointCloud*)                    BlockerPointCloud                                           ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ProjectionVectorMaterial                                    ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterGeneratorTile
/// Size: 0x0140 (0x000028 - 0x000168)
class UProceduralScatterGeneratorTile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(UProceduralScatterGenerator*)              Generator                                                   ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FProceduralScatter2DPoint>)         GeneratedPoints                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterSettings
/// Size: 0x01B0 (0x000028 - 0x0001D8)
class UProceduralScatterSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(UProceduralScatterContentSettings*)        Content                                                     ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bContentVariationsModifiersEnabled                          ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	SMember(FProceduralContentVariationsModifiers)     ContentVariationsModifiers                                  ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FName>)                             SetPointTags                                                ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(float)                                     CollisionRadius                                             ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(bool)                                      bAutomaticCollisionRadius                                   ___ OFFSET(get<bool>, {0x5C, 1, 1, 0})
	DMember(bool)                                      bUseSphericalBoundsForAutomaticCollisionRadius              ___ OFFSET(get<bool>, {0x5C, 1, 1, 1})
	DMember(float)                                     AutomaticCollisionRadiusScaleFactor                         ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   DistributionSeed                                            ___ OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bDensityModifiersEnabled                                    ___ OFFSET(get<bool>, {0x68, 1, 1, 0})
	SMember(FProceduralDensityModifiers)               DensityModifiers                                            ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(float)                                     Density                                                     ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(TArray<FName>)                             SourcePointTagIncludes                                      ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(TArray<FName>)                             SourcePointTagExcludes                                      ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TArray<FName>)                             SourceActorTagIncludes                                      ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FName>)                             SourceActorTagExcludes                                      ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FName>)                             SourceComponentTagIncludes                                  ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FName>)                             SourceComponentTagExcludes                                  ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FFloatInterval)                            SourcePointDistance                                         ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	DMember(bool)                                      bUseSourcePointExactNumber                                  ___ OFFSET(get<bool>, {0xF0, 1, 1, 0})
	DMember(int32_t)                                   SourcePointExactNumber                                      ___ OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	DMember(bool)                                      bScaleModifiersEnabled                                      ___ OFFSET(get<bool>, {0xF8, 1, 1, 0})
	SMember(FProceduralScaleModifiers)                 ScaleModifiers                                              ___ OFFSET(get<T>, {0x100, 32, 0, 0})
	DMember(bool)                                      bRotationModifiersEnabled                                   ___ OFFSET(get<bool>, {0x120, 1, 1, 0})
	SMember(FProceduralRotationModifiers)              RotationModifiers                                           ___ OFFSET(get<T>, {0x128, 16, 0, 0})
	DMember(bool)                                      bAlignToNormal                                              ___ OFFSET(get<bool>, {0x138, 1, 1, 0})
	DMember(float)                                     AlignMaxAngle                                               ___ OFFSET(get<float>, {0x13C, 4, 0, 0})
	SMember(FProceduralScatterTargetSurface)           TargetSurface                                               ___ OFFSET(get<T>, {0x140, 72, 0, 0})
	DMember(bool)                                      bDetectOverhangingLedge                                     ___ OFFSET(get<bool>, {0x188, 1, 1, 0})
	DMember(int32_t)                                   OverhangingLedgeDetectionRayCount                           ___ OFFSET(get<int32_t>, {0x18C, 4, 0, 0})
	DMember(float)                                     OverhangingLedgeDetectionLength                             ___ OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(float)                                     OverhangingLedgeDetectionVerticalThreshold                  ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     OverhangingLedgeDetectionRadiusScale                        ___ OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     FilterMinimumScale                                          ___ OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(float)                                     OverlapPriority                                             ___ OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(bool)                                      bCollisionWithWorld                                         ___ OFFSET(get<bool>, {0x1A4, 1, 1, 0})
	SMember(FVector)                                   CollisionScale                                              ___ OFFSET(get<T>, {0x1A8, 24, 0, 0})
	SMember(FColor)                                    DebugColor                                                  ___ OFFSET(get<T>, {0x1C0, 4, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterStaticMeshContentVariation
/// Size: 0x0080 (0x0000E8 - 0x000168)
class UProceduralScatterStaticMeshContentVariation : public UProceduralScatterContentVariation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	CMember(EProceduralScatterStaticMeshMode)          StaticMeshMode                                              ___ OFFSET(get<T>, {0xE8, 1, 0, 0})
	CMember(UStaticMesh*)                              Mesh                                                        ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(UClass*)                                   ActorClass                                                  ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               OverrideMaterials                                           ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(UHISMBuilderSettings*)                     OverrideInstancingSettings                                  ___ OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralScatterStaticMeshContentSettings
/// Size: 0x0018 (0x000068 - 0x000080)
class UProceduralScatterStaticMeshContentSettings : public UProceduralScatterContentSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UClass*)                                   ComponentClass                                              ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FName)                                     ComponentTag                                                ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	CMember(UHISMBuilderSettings*)                     VariationsInstancingSettings                                ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralSurfaceHeightMap
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UProceduralSurfaceHeightMap : public UProceduralFloatDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bNormalizedHeight                                           ___ OFFSET(get<bool>, {0xB8, 1, 0, 0})
	SMember(FFloatInterval)                            HeightRange                                                 ___ OFFSET(get<T>, {0xBC, 8, 0, 0})
};

/// Class /Script/Procedural.ProceduralSurfaceSlopeAngleMap
/// Size: 0x0010 (0x0000B8 - 0x0000C8)
class UProceduralSurfaceSlopeAngleMap : public UProceduralFloatDataMap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bNormalizedSlopeAngle                                       ___ OFFSET(get<bool>, {0xB8, 1, 0, 0})
	SMember(FFloatInterval)                            SlopeAngleRange                                             ___ OFFSET(get<T>, {0xBC, 8, 0, 0})
};

/// Struct /Script/Procedural.ProceduralPointCloudPoint
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FProceduralPointCloudPoint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FTransform)                                Transform                                                   ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FVector)                                   SurfaceNormal                                               ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	CMember(UObject*)                                  SurfaceObject                                               ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(UObject*)                                  Object                                                      ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(int32_t)                                   ObjectVariation                                             ___ OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(float)                                     CollisionRadius                                             ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     SourcePointGeneratorIndex                                   ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatterPoint
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FProceduralScatterPoint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(UProceduralScatterSettings*)               ScatterSettings                                             ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   VariationIdx                                                ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FVector)                                   GenerationLocation                                          ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FProceduralHitPoint)                       HitPoint                                                    ___ OFFSET(get<T>, {0x60, 64, 0, 0})
};

/// Struct /Script/Procedural.ProceduralHitPoint
/// Size: 0x0040 (0x000000 - 0x000040)
class FProceduralHitPoint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bIsTraceDone                                                ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      Component                                                   ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatterProjectionPoint
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FProceduralScatterProjectionPoint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FVector)                                   GenerationLocation                                          ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(UProceduralScatterSettings*)               ScatterSettings                                             ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   VariationIdx                                                ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	SMember(FVector)                                   StartTrace                                                  ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FVector)                                   EndTrace                                                    ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	SMember(FProceduralHitPoint)                       HitPoint                                                    ___ OFFSET(get<T>, {0x78, 64, 0, 0})
};

/// Struct /Script/Procedural.ProceduralTextureSource
/// Size: 0x0038 (0x000000 - 0x000038)
class FProceduralTextureSource : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bUseRenderTarget                                            ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(UTexture2D*)                               Texture                                                     ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UTextureRenderTarget2D*)                   RenderTarget                                                ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UMaterialInterface*)                       RenderTargetMaterial                                        ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(bool)                                      bStretchToFit                                               ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     TexelSize                                                   ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     XOffset                                                     ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     YOffset                                                     ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Rotation                                                    ___ OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralContentVariationMap
/// Size: 0x0018 (0x000000 - 0x000018)
class FProceduralContentVariationMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   VariationIndex                                              ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(UProceduralFloatDataMap*)                  Map                                                         ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Weight                                                      ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralRemapFloatCurve
/// Size: 0x0088 (0x000000 - 0x000088)
class FProceduralRemapFloatCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FRuntimeFloatCurve)                        RemapCurve                                                  ___ OFFSET(get<T>, {0x0, 136, 0, 0})
};

/// Struct /Script/Procedural.ProceduralRemapVectorCurve
/// Size: 0x0208 (0x000000 - 0x000208)
class FProceduralRemapVectorCurve : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	SMember(FRuntimeCurveLinearColor)                  RemapCurve                                                  ___ OFFSET(get<T>, {0x0, 520, 0, 0})
};

/// Struct /Script/Procedural.ProceduralDebugSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FProceduralDebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bShowDebugPointCloud                                        ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FColor)                                    DebugPointColor                                             ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(float)                                     DebugCullingDistance                                        ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralGenerationStackElement
/// Size: 0x0010 (0x000000 - 0x000010)
class FProceduralGenerationStackElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(UProceduralGenerator*)                     Generator                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatter2DPoint
/// Size: 0x0060 (0x000000 - 0x000060)
class FProceduralScatter2DPoint : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(UProceduralScatterSettings*)               ScatterSettings                                             ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FBox2D)                                    MaxAABB                                                     ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	DMember(float)                                     CollisionRadius                                             ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bBlocker                                                    ___ OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(int32_t)                                   RandomNumber                                                ___ OFFSET(get<int32_t>, {0x58, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatterSettingsElement
/// Size: 0x0018 (0x000000 - 0x000018)
class FProceduralScatterSettingsElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(UProceduralScatterSettings*)               ScatterSettings                                             ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   MaxPoints                                                   ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatterDebugSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FProceduralScatterDebugSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bShowDebugPlane                                             ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bShowDebugTrace                                             ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bShowDebugFootprint                                         ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bShowDebugHitNormal                                         ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bShowDebugPoints                                            ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bShowDebugPivots                                            ___ OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(float)                                     DebugMaxCullingDistance                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatterTileSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FProceduralScatterTileSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   NumUniqueTiles                                              ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     TileSize                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TileOverlapPercentage                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinimumQuadTreeSize                                         ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	CMember(EProceduralScatterTileRandomGenerator)     RandomGenerator                                             ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/Procedural.SourcePointGenerator
/// Size: 0x0018 (0x000000 - 0x000018)
class FSourcePointGenerator : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/Procedural.ScatteredPointCloud
/// Size: 0x0010 (0x000000 - 0x000010)
class FScatteredPointCloud : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FProceduralScatterPoint>)           Points                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScatterTargetSurface
/// Size: 0x0048 (0x000000 - 0x000048)
class FProceduralScatterTargetSurface : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bAllowLandscape                                             ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAllowBSP                                                   ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bAllowStaticMesh                                            ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bAllowTranslucent                                           ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
	CMember(TArray<FName>)                             AllowedActorTags                                            ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FName>)                             DisallowedActorTags                                         ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FName>)                             AllowedComponentTags                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FName>)                             DisallowedComponentTags                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/Procedural.ProceduralContentVariationsModifiers
/// Size: 0x0010 (0x000000 - 0x000010)
class FProceduralContentVariationsModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UProceduralContentVariationsWeightsModifier*>) Modifiers                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Procedural.ProceduralDensityModifiers
/// Size: 0x0010 (0x000000 - 0x000010)
class FProceduralDensityModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UProceduralDensityModifier*>)       Modifiers                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Procedural.ProceduralScaleModifiers
/// Size: 0x0020 (0x000000 - 0x000020)
class FProceduralScaleModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bRandomScaleEnabled                                         ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FFloatInterval)                            RandomScale                                                 ___ OFFSET(get<T>, {0x4, 8, 0, 0})
	CMember(TArray<UProceduralScaleModifier*>)         Modifiers                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Procedural.ProceduralRotationModifiers
/// Size: 0x0010 (0x000000 - 0x000010)
class FProceduralRotationModifiers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UProceduralRotationModifier*>)      Modifiers                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/Procedural.EProceduralParameterModifierBlendMode
/// Size: 0x06
enum EProceduralParameterModifierBlendMode : uint8_t
{
	EProceduralParameterModifierBlendMode__Min0                                      = 0,
	EProceduralParameterModifierBlendMode__Max1                                      = 1,
	EProceduralParameterModifierBlendMode__Additive2                                 = 2,
	EProceduralParameterModifierBlendMode__Subtractive3                              = 3,
	EProceduralParameterModifierBlendMode__Multiply4                                 = 4,
	EProceduralParameterModifierBlendMode__Interpolate5                              = 5
};

/// Enum /Script/Procedural.EProceduralRotationFormat
/// Size: 0x14
enum EProceduralRotationFormat : uint8_t
{
	EProceduralRotationFormat__VectorXAxis0                                          = 0,
	EProceduralRotationFormat__VectorXAxisNegative1                                  = 1,
	EProceduralRotationFormat__VectorYAxis2                                          = 2,
	EProceduralRotationFormat__VectorYAxisNegative3                                  = 3,
	EProceduralRotationFormat__VectorZAxis4                                          = 4,
	EProceduralRotationFormat__VectorZAxisNegative5                                  = 5,
	EProceduralRotationFormat__Vector2DXAxis6                                        = 6,
	EProceduralRotationFormat__Vector2DXAxisNegative7                                = 7,
	EProceduralRotationFormat__Vector2DYAxis8                                        = 8,
	EProceduralRotationFormat__Vector2DYAxisNegative9                                = 9,
	EProceduralRotationFormat__Vector2DZAxis10                                       = 10,
	EProceduralRotationFormat__Vector2DZAxisNegative11                               = 11,
	EProceduralRotationFormat__RangedRotator12                                       = 12,
	EProceduralRotationFormat__EProceduralRotationFormat_MAX13                       = 13
};

/// Enum /Script/Procedural.EProceduralTextureColorChannel
/// Size: 0x05
enum EProceduralTextureColorChannel : uint8_t
{
	EProceduralTextureColorChannel__Red0                                             = 0,
	EProceduralTextureColorChannel__Green1                                           = 1,
	EProceduralTextureColorChannel__Blue2                                            = 2,
	EProceduralTextureColorChannel__Alpha3                                           = 3,
	EProceduralTextureColorChannel__EProceduralTextureColorChannel_MAX4              = 4
};

/// Enum /Script/Procedural.EProceduralScatterContentPivotMode
/// Size: 0x05
enum EProceduralScatterContentPivotMode : uint8_t
{
	EProceduralScatterContentPivotMode__UsePivot0                                    = 0,
	EProceduralScatterContentPivotMode__UseBoundingBoxCenter1                        = 1,
	EProceduralScatterContentPivotMode__UseBoundingBoxBottomCenter2                  = 2,
	EProceduralScatterContentPivotMode__UseFootprintBoundingBoxBottomCenter3         = 3,
	EProceduralScatterContentPivotMode__EProceduralScatterContentPivotMode_MAX4      = 4
};

/// Enum /Script/Procedural.EProceduralScatterTileRandomGenerator
/// Size: 0x03
enum EProceduralScatterTileRandomGenerator : uint8_t
{
	EProceduralScatterTileRandomGenerator__PseudoRandom0                             = 0,
	EProceduralScatterTileRandomGenerator__HaltonSequence1                           = 1,
	EProceduralScatterTileRandomGenerator__EProceduralScatterTileRandomGenerator_MAX2 = 2
};

/// Enum /Script/Procedural.EProceduralScatterMethod
/// Size: 0x04
enum EProceduralScatterMethod : uint8_t
{
	EProceduralScatterMethod__Density0                                               = 0,
	EProceduralScatterMethod__SourcePoints1                                          = 1,
	EProceduralScatterMethod__Grid2                                                  = 2,
	EProceduralScatterMethod__EProceduralScatterMethod_MAX3                          = 3
};

/// Enum /Script/Procedural.EProceduralScatterStaticMeshMode
/// Size: 0x03
enum EProceduralScatterStaticMeshMode : uint8_t
{
	EProceduralScatterStaticMeshMode__FromStaticMesh0                                = 0,
	EProceduralScatterStaticMeshMode__FromActor1                                     = 1,
	EProceduralScatterStaticMeshMode__EProceduralScatterStaticMeshMode_MAX2          = 2
};

