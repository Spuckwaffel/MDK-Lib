
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/Landmass.BrushEffectBlurring
/// Size: 0x0008 (0x000000 - 0x000008)
class FBrushEffectBlurring : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bBlurShape                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Radius                                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Landmass.BrushEffectCurlNoise
/// Size: 0x0010 (0x000000 - 0x000010)
class FBrushEffectCurlNoise : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Curl1Amount                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Curl2Amount                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Curl1Tiling                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Curl2Tiling                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Landmass.BrushEffectCurves
/// Size: 0x0020 (0x000000 - 0x000020)
class FBrushEffectCurves : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bUseCurveChannel                                            OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(UCurveFloat*)                              ElevationCurveAsset                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ChannelEdgeOffset                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ChannelDepth                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CurveRampWidth                                              OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/Landmass.BrushEffectDisplacement
/// Size: 0x0028 (0x000000 - 0x000028)
class FBrushEffectDisplacement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     DisplacementHeight                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DisplacementTiling                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(UTexture2D*)                               Texture                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Midpoint                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FLinearColor)                              Channel                                                     OFFSET(get<T>, {0x14, 16, 0, 0})
	DMember(float)                                     WeightmapInfluence                                          OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/Landmass.BrushEffectSmoothBlending
/// Size: 0x0008 (0x000000 - 0x000008)
class FBrushEffectSmoothBlending : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     InnerSmoothDistance                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     OuterSmoothDistance                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Landmass.BrushEffectTerracing
/// Size: 0x0014 (0x000000 - 0x000014)
class FBrushEffectTerracing : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     TerraceAlpha                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TerraceSpacing                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TerraceSmoothness                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaskLength                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaskStartOffset                                             OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Landmass.LandmassBrushEffectsList
/// Size: 0x0060 (0x000000 - 0x000060)
class FLandmassBrushEffectsList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FBrushEffectBlurring)                      Blurring                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FBrushEffectCurlNoise)                     CurlNoise                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FBrushEffectDisplacement)                  displacement                                                OFFSET(get<T>, {0x18, 40, 0, 0})
	SMember(FBrushEffectSmoothBlending)                SmoothBlending                                              OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FBrushEffectTerracing)                     Terracing                                                   OFFSET(get<T>, {0x48, 20, 0, 0})
};

/// Struct /Script/Landmass.LandmassFalloffSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FLandmassFalloffSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EBrushFalloffMode)                         FalloffMode                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     FalloffAngle                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FalloffWidth                                                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EdgeOffset                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ZOffset                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Landmass.LandmassTerrainCarvingSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FLandmassTerrainCarvingSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EBrushBlendType)                           BlendMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bInvertShape                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FLandmassFalloffSettings)                  FalloffSettings                                             OFFSET(get<T>, {0x4, 20, 0, 0})
	SMember(FLandmassBrushEffectsList)                 Effects                                                     OFFSET(get<T>, {0x18, 96, 0, 0})
	DMember(int32_t)                                   Priority                                                    OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Enum /Script/Landmass.EBrushFalloffMode
/// Size: 0x03
enum EBrushFalloffMode : uint8_t
{
	EBrushFalloffMode__Angle0                                                        = 0,
	EBrushFalloffMode__Width1                                                        = 1,
	EBrushFalloffMode__EBrushFalloffMode_MAX2                                        = 2
};

/// Enum /Script/Landmass.EBrushBlendType
/// Size: 0x04
enum EBrushBlendType : uint8_t
{
	EBrushBlendType__AlphaBlend0                                                     = 0,
	EBrushBlendType__Min1                                                            = 1,
	EBrushBlendType__Max2                                                            = 2,
	EBrushBlendType__Additive3                                                       = 3
};

