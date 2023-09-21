
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: Landscape

/// Class /Script/LandscapePatch.LandscapePatchComponent
/// Size: 0x0070 (0x0002A0 - 0x000310)
class ULandscapePatchComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(TWeakObjectPtr<ALandscape*>)               Landscape                                                   ___ OFFSET(get<T>, {0x2A0, 32, 0, 0})
	CMember(TWeakObjectPtr<ALandscapePatchManager*>)   PatchManager                                                ___ OFFSET(get<T>, {0x2C0, 32, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	DMember(bool)                                      bPropertiesCopiedIndicator                                  ___ OFFSET(get<bool>, {0x2E3, 1, 0, 0})
	CMember(TWeakObjectPtr<ALandscapePatchManager*>)   PreviousPatchManager                                        ___ OFFSET(get<T>, {0x2E8, 32, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeCircleHeightPatch
/// Size: 0x0010 (0x000310 - 0x000320)
class ULandscapeCircleHeightPatch : public ULandscapePatchComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     Falloff                                                     ___ OFFSET(get<float>, {0x30C, 4, 0, 0})
	DMember(bool)                                      bEditVisibility                                             ___ OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      bExclusiveRadius                                            ___ OFFSET(get<bool>, {0x311, 1, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapePatchManager
/// Size: 0x0070 (0x000290 - 0x000300)
class ALandscapePatchManager : public ALandscapeBlueprintBrushBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(TArray<TWeakObjectPtr>)                    PatchComponents                                             ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(FTransform)                                HeightmapCoordsToWorld                                      ___ OFFSET(get<T>, {0x2A0, 96, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeTextureBackedRenderTargetBase
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeTextureBackedRenderTargetBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UTextureRenderTarget2D*)                   PostLoadRT                                                  ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UTexture2D*)                               InternalTexture                                             ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UTextureRenderTarget2D*)                   RenderTarget                                                ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   SizeX                                                       ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   SizeY                                                       ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bUseInternalTextureOnly                                     ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeWeightTextureBackedRenderTarget
/// Size: 0x0008 (0x000050 - 0x000058)
class ULandscapeWeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bUseAlphaChannel                                            ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeHeightTextureBackedRenderTarget
/// Size: 0x0010 (0x000050 - 0x000060)
class ULandscapeHeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FLandscapeHeightPatchConvertToNativeParams) ConversionParams                                           ___ OFFSET(get<T>, {0x50, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   RenderTargetFormat                                          ___ OFFSET(get<T>, {0x5C, 1, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeWeightPatchTextureInfo
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandscapeWeightPatchTextureInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     WeightmapLayerName                                          ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(bool)                                      bEditVisibilityLayer                                        ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
	CMember(UTexture*)                                 TextureAsset                                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(ULandscapeWeightTextureBackedRenderTarget*) InternalData                                               ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(ELandscapeTexturePatchSourceMode)          SourceMode                                                  ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(ELandscapeTexturePatchSourceMode)          DetailPanelSourceMode                                       ___ OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(bool)                                      bUseAlphaChannel                                            ___ OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bOverrideBlendMode                                          ___ OFFSET(get<bool>, {0x43, 1, 0, 0})
	CMember(ELandscapeTexturePatchBlendMode)           OverrideBlendMode                                           ___ OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TWeakObjectPtr<ULandscapeTexturePatch*>)   OwningPatch                                                 ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeTexturePatch
/// Size: 0x0080 (0x000310 - 0x000390)
class ULandscapeTexturePatch : public ULandscapePatchComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	DMember(int32_t)                                   ResolutionX                                                 ___ OFFSET(get<int32_t>, {0x308, 4, 0, 0})
	DMember(int32_t)                                   ResolutionY                                                 ___ OFFSET(get<int32_t>, {0x30C, 4, 0, 0})
	SMember(FVector2D)                                 UnscaledPatchCoverage                                       ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(ELandscapeTexturePatchBlendMode)           BlendMode                                                   ___ OFFSET(get<T>, {0x320, 1, 0, 0})
	CMember(ELandscapeTexturePatchFalloffMode)         FalloffMode                                                 ___ OFFSET(get<T>, {0x321, 1, 0, 0})
	DMember(float)                                     Falloff                                                     ___ OFFSET(get<float>, {0x324, 4, 0, 0})
	CMember(ELandscapeTexturePatchSourceMode)          HeightSourceMode                                            ___ OFFSET(get<T>, {0x328, 1, 0, 0})
	CMember(ELandscapeTexturePatchSourceMode)          DetailPanelHeightSourceMode                                 ___ OFFSET(get<T>, {0x329, 1, 0, 0})
	CMember(ULandscapeHeightTextureBackedRenderTarget*) HeightInternalData                                         ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UTexture*)                                 HeightTextureAsset                                          ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(bool)                                      bUseTextureAlphaForHeight                                   ___ OFFSET(get<bool>, {0x340, 1, 0, 0})
	CMember(ELandscapeTextureHeightPatchEncoding)      HeightEncoding                                              ___ OFFSET(get<T>, {0x341, 1, 0, 0})
	SMember(FLandscapeTexturePatchEncodingSettings)    HeightEncodingSettings                                      ___ OFFSET(get<T>, {0x348, 16, 0, 0})
	CMember(ELandscapeTextureHeightPatchZeroHeightMeaning) ZeroHeightMeaning                                       ___ OFFSET(get<T>, {0x358, 1, 0, 0})
	DMember(bool)                                      bApplyComponentZScale                                       ___ OFFSET(get<bool>, {0x359, 1, 0, 0})
	CMember(TArray<ULandscapeWeightPatchTextureInfo*>) WeightPatches                                               ___ OFFSET(get<T>, {0x360, 16, 0, 0})
	DMember(int32_t)                                   NumWeightPatches                                            ___ OFFSET(get<int32_t>, {0x370, 4, 0, 0})
	DMember(bool)                                      bBaseResolutionOffLandscape                                 ___ OFFSET(get<bool>, {0x375, 1, 0, 0})
	DMember(float)                                     ResolutionMultiplier                                        ___ OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(int32_t)                                   InitTextureSizeX                                            ___ OFFSET(get<int32_t>, {0x37C, 4, 0, 0})
	DMember(int32_t)                                   InitTextureSizeY                                            ___ OFFSET(get<int32_t>, {0x380, 4, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   HeightRenderTargetFormat                                    ___ OFFSET(get<T>, {0x384, 1, 0, 0})
};

/// Struct /Script/LandscapePatch.LandscapePatchComponentInstanceData
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class FLandscapePatchComponentInstanceData : public FSceneComponentInstanceData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(int32_t)                                   IndexInManager                                              ___ OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
};

/// Struct /Script/LandscapePatch.LandscapeTexturePatchEncodingSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeTexturePatchEncodingSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    ZeroInEncoding                                              ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    WorldSpaceEncodingScale                                     ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/LandscapePatch.LandscapeHeightPatchConvertToNativeParams
/// Size: 0x000C (0x000000 - 0x00000C)
class FLandscapeHeightPatchConvertToNativeParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     ZeroInEncoding                                              ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     HeightScale                                                 ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     HeightOffset                                                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Enum /Script/LandscapePatch.ELandscapeTexturePatchSourceMode
/// Size: 0x05
enum ELandscapeTexturePatchSourceMode : uint8_t
{
	ELandscapeTexturePatchSourceMode__None0                                          = 0,
	ELandscapeTexturePatchSourceMode__InternalTexture1                               = 1,
	ELandscapeTexturePatchSourceMode__TextureBackedRenderTarget2                     = 2,
	ELandscapeTexturePatchSourceMode__TextureAsset3                                  = 3,
	ELandscapeTexturePatchSourceMode__ELandscapeTexturePatchSourceMode_MAX4          = 4
};

/// Enum /Script/LandscapePatch.ELandscapeTexturePatchBlendMode
/// Size: 0x04
enum ELandscapeTexturePatchBlendMode : uint8_t
{
	ELandscapeTexturePatchBlendMode__AlphaBlend0                                     = 0,
	ELandscapeTexturePatchBlendMode__Additive1                                       = 1,
	ELandscapeTexturePatchBlendMode__Min2                                            = 2,
	ELandscapeTexturePatchBlendMode__Max3                                            = 3
};

/// Enum /Script/LandscapePatch.ELandscapeTexturePatchFalloffMode
/// Size: 0x03
enum ELandscapeTexturePatchFalloffMode : uint8_t
{
	ELandscapeTexturePatchFalloffMode__Circle0                                       = 0,
	ELandscapeTexturePatchFalloffMode__RoundedRectangle1                             = 1,
	ELandscapeTexturePatchFalloffMode__ELandscapeTexturePatchFalloffMode_MAX2        = 2
};

/// Enum /Script/LandscapePatch.ELandscapeTextureHeightPatchEncoding
/// Size: 0x04
enum ELandscapeTextureHeightPatchEncoding : uint8_t
{
	ELandscapeTextureHeightPatchEncoding__ZeroToOne0                                 = 0,
	ELandscapeTextureHeightPatchEncoding__WorldUnits1                                = 1,
	ELandscapeTextureHeightPatchEncoding__NativePackedHeight2                        = 2,
	ELandscapeTextureHeightPatchEncoding__ELandscapeTextureHeightPatchEncoding_MAX3  = 3
};

/// Enum /Script/LandscapePatch.ELandscapeTextureHeightPatchZeroHeightMeaning
/// Size: 0x04
enum ELandscapeTextureHeightPatchZeroHeightMeaning : uint8_t
{
	ELandscapeTextureHeightPatchZeroHeightMeaning__PatchZ0                           = 0,
	ELandscapeTextureHeightPatchZeroHeightMeaning__LandscapeZ1                       = 1,
	ELandscapeTextureHeightPatchZeroHeightMeaning__WorldZero2                        = 2,
	ELandscapeTextureHeightPatchZeroHeightMeaning__ELandscapeTextureHeightPatchZeroHeightMeaning_MAX3 = 3
};

