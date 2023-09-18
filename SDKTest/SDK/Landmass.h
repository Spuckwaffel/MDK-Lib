/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Landmass.

/// Struct /Script/Landmass.BrushEffectBlurring
/// Size: 0x0008 (0x000000 - 0x000008)
class FBrushEffectBlurring : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bBlurShape                                                  ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Radius                                                      ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Landmass.BrushEffectCurlNoise
/// Size: 0x0010 (0x000000 - 0x000010)
class FBrushEffectCurlNoise : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Curl1Amount                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Curl2Amount                                                 ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Curl1Tiling                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Curl2Tiling                                                 ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Landmass.BrushEffectCurves
/// Size: 0x0020 (0x000000 - 0x000020)
class FBrushEffectCurves : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bUseCurveChannel                                            ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(UCurveFloat*)                              ElevationCurveAsset                                         ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ChannelEdgeOffset                                           ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ChannelDepth                                                ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CurveRampWidth                                              ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/Landmass.BrushEffectDisplacement
/// Size: 0x0028 (0x000000 - 0x000028)
class FBrushEffectDisplacement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     DisplacementHeight                                          ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DisplacementTiling                                          ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(UTexture2D*)                               Texture                                                     ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Midpoint                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FLinearColor)                              Channel                                                     ___ OFFSET(get<T>, {0x14, 16, 0, 0})
	DMember(float)                                     WeightmapInfluence                                          ___ OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/Landmass.BrushEffectSmoothBlending
/// Size: 0x0008 (0x000000 - 0x000008)
class FBrushEffectSmoothBlending : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     InnerSmoothDistance                                         ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     OuterSmoothDistance                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Landmass.BrushEffectTerracing
/// Size: 0x0014 (0x000000 - 0x000014)
class FBrushEffectTerracing : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     TerraceAlpha                                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TerraceSpacing                                              ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TerraceSmoothness                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaskLength                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaskStartOffset                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Landmass.LandmassBrushEffectsList
/// Size: 0x0060 (0x000000 - 0x000060)
class FLandmassBrushEffectsList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FBrushEffectBlurring)                      Blurring                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FBrushEffectCurlNoise)                     CurlNoise                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FBrushEffectDisplacement)                  displacement                                                ___ OFFSET(get<T>, {0x18, 40, 0, 0})
	SMember(FBrushEffectSmoothBlending)                SmoothBlending                                              ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FBrushEffectTerracing)                     Terracing                                                   ___ OFFSET(get<T>, {0x48, 20, 0, 0})
};

/// Struct /Script/Landmass.LandmassFalloffSettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FLandmassFalloffSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(EBrushFalloffMode)                         FalloffMode                                                 ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     FalloffAngle                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FalloffWidth                                                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EdgeOffset                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ZOffset                                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Landmass.LandmassTerrainCarvingSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FLandmassTerrainCarvingSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(EBrushBlendType)                           BlendMode                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bInvertShape                                                ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FLandmassFalloffSettings)                  FalloffSettings                                             ___ OFFSET(get<T>, {0x4, 20, 0, 0})
	SMember(FLandmassBrushEffectsList)                 Effects                                                     ___ OFFSET(get<T>, {0x18, 96, 0, 0})
	DMember(int32_t)                                   Priority                                                    ___ OFFSET(get<int32_t>, {0x78, 4, 0, 0})
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

