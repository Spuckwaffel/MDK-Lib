
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
	CMember(TWeakObjectPtr<ALandscape*>)               Landscape                                                   OFFSET(get<T>, {0x2A0, 32, 0, 0})
	CMember(TWeakObjectPtr<ALandscapePatchManager*>)   PatchManager                                                OFFSET(get<T>, {0x2C0, 32, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	DMember(bool)                                      bPropertiesCopiedIndicator                                  OFFSET(get<bool>, {0x2E3, 1, 0, 0})
	CMember(TWeakObjectPtr<ALandscapePatchManager*>)   PreviousPatchManager                                        OFFSET(get<T>, {0x2E8, 32, 0, 0})


	/// Functions
	// Function /Script/LandscapePatch.LandscapePatchComponent.SetPatchManager
	// void SetPatchManager(ALandscapePatchManager* NewPatchManager);                                                           // [0xac67068] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchComponent.SetLandscape
	// void SetLandscape(ALandscape* NewLandscape);                                                                             // [0xac66fe4] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchComponent.SetIsEnabled
	// void SetIsEnabled(bool bEnabledIn);                                                                                      // [0xac66f5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchComponent.RequestLandscapeUpdate
	// void RequestLandscapeUpdate(bool bInUserTriggeredUpdate);                                                                // [0x550d6d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapePatchComponent.MoveToTop
	// void MoveToTop();                                                                                                        // [0xac669b4] Final|Native|Protected 
	// Function /Script/LandscapePatch.LandscapePatchComponent.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xac6698c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapePatchComponent.GetPatchManager
	// ALandscapePatchManager* GetPatchManager();                                                                               // [0xac6673c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapePatchComponent.GetLandscapeHeightmapCoordsToWorld
	// FTransform GetLandscapeHeightmapCoordsToWorld();                                                                         // [0xac666c0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/LandscapePatch.LandscapeCircleHeightPatch
/// Size: 0x0010 (0x000310 - 0x000320)
class ULandscapeCircleHeightPatch : public ULandscapePatchComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0x30C, 4, 0, 0})
	DMember(bool)                                      bEditVisibility                                             OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(bool)                                      bExclusiveRadius                                            OFFSET(get<bool>, {0x311, 1, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapePatchManager
/// Size: 0x0070 (0x000290 - 0x000300)
class ALandscapePatchManager : public ALandscapeBlueprintBrushBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(TArray<TWeakObjectPtr>)                    PatchComponents                                             OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(FTransform)                                HeightmapCoordsToWorld                                      OFFSET(getStruct<T>, {0x2A0, 96, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeTextureBackedRenderTargetBase
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeTextureBackedRenderTargetBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UTextureRenderTarget2D*)                   PostLoadRT                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UTexture2D*)                               InternalTexture                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UTextureRenderTarget2D*)                   RenderTarget                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   SizeX                                                       OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   SizeY                                                       OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bUseInternalTextureOnly                                     OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeWeightTextureBackedRenderTarget
/// Size: 0x0008 (0x000050 - 0x000058)
class ULandscapeWeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bUseAlphaChannel                                            OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeHeightTextureBackedRenderTarget
/// Size: 0x0010 (0x000050 - 0x000060)
class ULandscapeHeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FLandscapeHeightPatchConvertToNativeParams) ConversionParams                                           OFFSET(getStruct<T>, {0x50, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   RenderTargetFormat                                          OFFSET(get<T>, {0x5C, 1, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeWeightPatchTextureInfo
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandscapeWeightPatchTextureInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     WeightmapLayerName                                          OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	DMember(bool)                                      bEditVisibilityLayer                                        OFFSET(get<bool>, {0x2C, 1, 0, 0})
	CMember(UTexture*)                                 TextureAsset                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(ULandscapeWeightTextureBackedRenderTarget*) InternalData                                               OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(ELandscapeTexturePatchSourceMode)          SourceMode                                                  OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(ELandscapeTexturePatchSourceMode)          DetailPanelSourceMode                                       OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(bool)                                      bUseAlphaChannel                                            OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bOverrideBlendMode                                          OFFSET(get<bool>, {0x43, 1, 0, 0})
	CMember(ELandscapeTexturePatchBlendMode)           OverrideBlendMode                                           OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TWeakObjectPtr<ULandscapeTexturePatch*>)   OwningPatch                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/LandscapePatch.LandscapeTexturePatch
/// Size: 0x0080 (0x000310 - 0x000390)
class ULandscapeTexturePatch : public ULandscapePatchComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	DMember(int32_t)                                   ResolutionX                                                 OFFSET(get<int32_t>, {0x308, 4, 0, 0})
	DMember(int32_t)                                   ResolutionY                                                 OFFSET(get<int32_t>, {0x30C, 4, 0, 0})
	SMember(FVector2D)                                 UnscaledPatchCoverage                                       OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	CMember(ELandscapeTexturePatchBlendMode)           BlendMode                                                   OFFSET(get<T>, {0x320, 1, 0, 0})
	CMember(ELandscapeTexturePatchFalloffMode)         FalloffMode                                                 OFFSET(get<T>, {0x321, 1, 0, 0})
	DMember(float)                                     Falloff                                                     OFFSET(get<float>, {0x324, 4, 0, 0})
	CMember(ELandscapeTexturePatchSourceMode)          HeightSourceMode                                            OFFSET(get<T>, {0x328, 1, 0, 0})
	CMember(ELandscapeTexturePatchSourceMode)          DetailPanelHeightSourceMode                                 OFFSET(get<T>, {0x329, 1, 0, 0})
	CMember(ULandscapeHeightTextureBackedRenderTarget*) HeightInternalData                                         OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UTexture*)                                 HeightTextureAsset                                          OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(bool)                                      bUseTextureAlphaForHeight                                   OFFSET(get<bool>, {0x340, 1, 0, 0})
	CMember(ELandscapeTextureHeightPatchEncoding)      HeightEncoding                                              OFFSET(get<T>, {0x341, 1, 0, 0})
	SMember(FLandscapeTexturePatchEncodingSettings)    HeightEncodingSettings                                      OFFSET(getStruct<T>, {0x348, 16, 0, 0})
	CMember(ELandscapeTextureHeightPatchZeroHeightMeaning) ZeroHeightMeaning                                       OFFSET(get<T>, {0x358, 1, 0, 0})
	DMember(bool)                                      bApplyComponentZScale                                       OFFSET(get<bool>, {0x359, 1, 0, 0})
	CMember(TArray<ULandscapeWeightPatchTextureInfo*>) WeightPatches                                               OFFSET(get<T>, {0x360, 16, 0, 0})
	DMember(int32_t)                                   NumWeightPatches                                            OFFSET(get<int32_t>, {0x370, 4, 0, 0})
	DMember(bool)                                      bBaseResolutionOffLandscape                                 OFFSET(get<bool>, {0x375, 1, 0, 0})
	DMember(float)                                     ResolutionMultiplier                                        OFFSET(get<float>, {0x378, 4, 0, 0})
	DMember(int32_t)                                   InitTextureSizeX                                            OFFSET(get<int32_t>, {0x37C, 4, 0, 0})
	DMember(int32_t)                                   InitTextureSizeY                                            OFFSET(get<int32_t>, {0x380, 4, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   HeightRenderTargetFormat                                    OFFSET(get<T>, {0x384, 1, 0, 0})


	/// Functions
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SnapToLandscape
	// void SnapToLandscape();                                                                                                  // [0x2b7b1c8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetZeroHeightMeaning
	// void SetZeroHeightMeaning(ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn);                            // [0xac677c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetWeightPatchTextureAsset
	// void SetWeightPatchTextureAsset(FName& InWeightmapLayerName, UTexture* TextureIn);                                       // [0xac676b8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetWeightPatchSourceMode
	// void SetWeightPatchSourceMode(FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode NewMode);                    // [0xac675a4] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetWeightPatchBlendModeOverride
	// void SetWeightPatchBlendModeOverride(FName& InWeightmapLayerName, ELandscapeTexturePatchBlendMode BlendMode);            // [0xac67490] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForWeightPatch
	// void SetUseAlphaChannelForWeightPatch(FName& InWeightmapLayerName, bool bUseAlphaChannel);                               // [0xac6737c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForHeight
	// void SetUseAlphaChannelForHeight(bool bUse);                                                                             // [0x88ac974] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetUnscaledCoverage
	// void SetUnscaledCoverage(FVector2D Coverage);                                                                            // [0xac67234] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetResolution
	// void SetResolution(FVector2D ResolutionIn);                                                                              // [0xac670ec] Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightTextureAsset
	// void SetHeightTextureAsset(UTexture* TextureIn);                                                                         // [0x9a46ca4] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightSourceMode
	// void SetHeightSourceMode(ELandscapeTexturePatchSourceMode NewMode);                                                      // [0xac66ed8] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightRenderTargetFormat
	// void SetHeightRenderTargetFormat(TEnumAsByte<ETextureRenderTargetFormat> Format);                                        // [0xac66e58] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightEncodingSettings
	// void SetHeightEncodingSettings(FLandscapeTexturePatchEncodingSettings& Settings);                                        // [0xac66dc4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightEncodingMode
	// void SetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode);                                           // [0xac66d48] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetFalloff
	// void SetFalloff(float FalloffIn);                                                                                        // [0xac66cc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetEditVisibilityLayer
	// void SetEditVisibilityLayer(FName& InWeightmapLayerName, bool bEditVisibilityLayer);                                     // [0xac66bb4] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetBlendMode
	// void SetBlendMode(ELandscapeTexturePatchBlendMode BlendModeIn);                                                          // [0xac66b38] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.ResetHeightEncodingMode
	// void ResetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode);                                         // [0xac66a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.RemoveWeightPatch
	// void RemoveWeightPatch(FName& InWeightmapLayerName);                                                                     // [0xac669e0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.RemoveAllWeightPatches
	// void RemoveAllWeightPatches();                                                                                           // [0xac669c8] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.ReinitializeWeights
	// void ReinitializeWeights();                                                                                              // [0x2b7b1c8] Final|Native|Protected 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.ReinitializeHeight
	// void ReinitializeHeight();                                                                                               // [0x2b7b1c8] Final|Native|Protected 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetWeightPatchSourceMode
	// ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(FName& InWeightmapLayerName);                                  // [0xac668ec] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetWeightPatchRenderTarget
	// UTextureRenderTarget2D* GetWeightPatchRenderTarget(FName& InWeightmapLayerName);                                         // [0xac6684c] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetUnscaledCoverage
	// FVector2D GetUnscaledCoverage();                                                                                         // [0xac66818] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetResolution
	// FVector2D GetResolution();                                                                                               // [0xac667e4] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetPatchToWorldTransform
	// FTransform GetPatchToWorldTransform();                                                                                   // [0xac66764] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetInitResolutionFromLandscape
	// bool GetInitResolutionFromLandscape(float ResolutionMultiplier, FVector2D& ResolutionOut);                               // [0xac665e0] Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetHeightSourceMode
	// ELandscapeTexturePatchSourceMode GetHeightSourceMode();                                                                  // [0xac665b8] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetHeightRenderTarget
	// UTextureRenderTarget2D* GetHeightRenderTarget(bool bMarkDirty);                                                          // [0xac66520] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetFullUnscaledWorldSize
	// FVector2D GetFullUnscaledWorldSize();                                                                                    // [0xac664ec] Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetAllWeightPatchLayerNames
	// TArray<FName> GetAllWeightPatchLayerNames();                                                                             // [0xac664ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.DisableAllWeightPatches
	// void DisableAllWeightPatches();                                                                                          // [0xac66494] Native|Public|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.ClearWeightPatchBlendModeOverride
	// void ClearWeightPatchBlendModeOverride(FName& InWeightmapLayerName);                                                     // [0xac66404] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/LandscapePatch.LandscapeTexturePatch.AddWeightPatch
	// void AddWeightPatch(FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel);    // [0xac66278] Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/LandscapePatch.LandscapePatchComponentInstanceData
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class FLandscapePatchComponentInstanceData : public FSceneComponentInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(int32_t)                                   IndexInManager                                              OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
};

/// Struct /Script/LandscapePatch.LandscapeTexturePatchEncodingSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeTexturePatchEncodingSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(double)                                    ZeroInEncoding                                              OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    WorldSpaceEncodingScale                                     OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/LandscapePatch.LandscapeHeightPatchConvertToNativeParams
/// Size: 0x000C (0x000000 - 0x00000C)
class FLandscapeHeightPatchConvertToNativeParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     ZeroInEncoding                                              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     HeightScale                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     HeightOffset                                                OFFSET(get<float>, {0x8, 4, 0, 0})
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

