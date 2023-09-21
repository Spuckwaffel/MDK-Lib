
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GLTFExporter.GLTFExportOptions
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UGLTFExportOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     ExportUniformScale                                          OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bExportPreviewMesh                                          OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bSkipNearDefaultValues                                      OFFSET(get<bool>, {0x2D, 1, 0, 0})
	DMember(bool)                                      bIncludeCopyrightNotice                                     OFFSET(get<bool>, {0x2E, 1, 0, 0})
	DMember(bool)                                      bExportProxyMaterials                                       OFFSET(get<bool>, {0x2F, 1, 0, 0})
	DMember(bool)                                      bExportUnlitMaterials                                       OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bExportClearCoatMaterials                                   OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bExportEmissiveStrength                                     OFFSET(get<bool>, {0x32, 1, 0, 0})
	CMember(EGLTFMaterialBakeMode)                     BakeMaterialInputs                                          OFFSET(get<T>, {0x33, 1, 0, 0})
	CMember(EGLTFMaterialBakeSizePOT)                  DefaultMaterialBakeSize                                     OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                DefaultMaterialBakeFilter                                   OFFSET(get<T>, {0x35, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               DefaultMaterialBakeTiling                                   OFFSET(get<T>, {0x36, 1, 0, 0})
	CMember(TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings>) DefaultInputBakeSettings          OFFSET(get<T>, {0x38, 80, 0, 0})
	DMember(int32_t)                                   DefaultLevelOfDetail                                        OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(bool)                                      bExportVertexColors                                         OFFSET(get<bool>, {0x8C, 1, 0, 0})
	DMember(bool)                                      bExportVertexSkinWeights                                    OFFSET(get<bool>, {0x8D, 1, 0, 0})
	DMember(bool)                                      bUseMeshQuantization                                        OFFSET(get<bool>, {0x8E, 1, 0, 0})
	DMember(bool)                                      bExportLevelSequences                                       OFFSET(get<bool>, {0x8F, 1, 0, 0})
	DMember(bool)                                      bExportAnimationSequences                                   OFFSET(get<bool>, {0x90, 1, 0, 0})
	CMember(EGLTFTextureImageFormat)                   TextureImageFormat                                          OFFSET(get<T>, {0x91, 1, 0, 0})
	DMember(int32_t)                                   TextureImageQuality                                         OFFSET(get<int32_t>, {0x94, 4, 0, 0})
	DMember(bool)                                      bExportTextureTransforms                                    OFFSET(get<bool>, {0x98, 1, 0, 0})
	DMember(bool)                                      bAdjustNormalmaps                                           OFFSET(get<bool>, {0x99, 1, 0, 0})
	DMember(bool)                                      bExportHiddenInGame                                         OFFSET(get<bool>, {0x9A, 1, 0, 0})
	DMember(bool)                                      bExportLights                                               OFFSET(get<bool>, {0x9B, 1, 0, 0})
	DMember(bool)                                      bExportCameras                                              OFFSET(get<bool>, {0x9C, 1, 0, 0})
	CMember(EGLTFMaterialVariantMode)                  ExportMaterialVariants                                      OFFSET(get<T>, {0x9D, 1, 0, 0})


	/// Functions
	// Function /Script/GLTFExporter.GLTFExportOptions.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0xa49448c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFExporter : public UExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFAnimSequenceExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFAnimSequenceExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFLevelExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFLevelSequenceExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelSequenceExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFLevelVariantSetsExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFLevelVariantSetsExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFMaterialExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFMaterialExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFSkeletalMeshExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFSkeletalMeshExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFStaticMeshExporter
/// Size: 0x0000 (0x000078 - 0x000078)
class UGLTFStaticMeshExporter : public UGLTFExporter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/GLTFExporter.GLTFProxyOptions
/// Size: 0x0058 (0x000028 - 0x000080)
class UGLTFProxyOptions : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bBakeMaterialInputs                                         OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(EGLTFMaterialBakeSizePOT)                  DefaultMaterialBakeSize                                     OFFSET(get<T>, {0x29, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                DefaultMaterialBakeFilter                                   OFFSET(get<T>, {0x2A, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               DefaultMaterialBakeTiling                                   OFFSET(get<T>, {0x2B, 1, 0, 0})
	CMember(TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings>) DefaultInputBakeSettings          OFFSET(get<T>, {0x30, 80, 0, 0})


	/// Functions
	// Function /Script/GLTFExporter.GLTFProxyOptions.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0xa4944a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GLTFExporter.GLTFMaterialExportOptions
/// Size: 0x0060 (0x000028 - 0x000088)
class UGLTFMaterialExportOptions : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(UMaterialInterface*)                       Proxy                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FGLTFOverrideMaterialBakeSettings)         Default                                                     OFFSET(getStruct<T>, {0x30, 6, 0, 0})
	CMember(TMap<EGLTFMaterialPropertyGroup, FGLTFOverrideMaterialBakeSettings>) Inputs                            OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Struct /Script/GLTFExporter.GLTFExportMessages
/// Size: 0x0030 (0x000000 - 0x000030)
class FGLTFExportMessages : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FString>)                           Suggestions                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Warnings                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Errors                                                      OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GLTFExporter.GLTFOverrideMaterialBakeSettings
/// Size: 0x0006 (0x000000 - 0x000006)
class FGLTFOverrideMaterialBakeSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(bool)                                      bOverrideSize                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(EGLTFMaterialBakeSizePOT)                  Size                                                        OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(bool)                                      bOverrideFilter                                             OFFSET(get<bool>, {0x2, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                Filter                                                      OFFSET(get<T>, {0x3, 1, 0, 0})
	DMember(bool)                                      bOverrideTiling                                             OFFSET(get<bool>, {0x4, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               Tiling                                                      OFFSET(get<T>, {0x5, 1, 0, 0})
};

/// Enum /Script/GLTFExporter.EGLTFTextureImageFormat
/// Size: 0x04
enum EGLTFTextureImageFormat : uint8_t
{
	EGLTFTextureImageFormat__None0                                                   = 0,
	EGLTFTextureImageFormat__PNG1                                                    = 1,
	EGLTFTextureImageFormat__JPEG2                                                   = 2,
	EGLTFTextureImageFormat__EGLTFTextureImageFormat_MAX3                            = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialVariantMode
/// Size: 0x04
enum EGLTFMaterialVariantMode : uint8_t
{
	EGLTFMaterialVariantMode__None0                                                  = 0,
	EGLTFMaterialVariantMode__Simple1                                                = 1,
	EGLTFMaterialVariantMode__UseMeshData2                                           = 2,
	EGLTFMaterialVariantMode__EGLTFMaterialVariantMode_MAX3                          = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialBakeMode
/// Size: 0x04
enum EGLTFMaterialBakeMode : uint8_t
{
	EGLTFMaterialBakeMode__Disabled0                                                 = 0,
	EGLTFMaterialBakeMode__Simple1                                                   = 1,
	EGLTFMaterialBakeMode__UseMeshData2                                              = 2,
	EGLTFMaterialBakeMode__EGLTFMaterialBakeMode_MAX3                                = 3
};

/// Enum /Script/GLTFExporter.EGLTFMaterialBakeSizePOT
/// Size: 0x15
enum EGLTFMaterialBakeSizePOT : uint8_t
{
	EGLTFMaterialBakeSizePOT__POT0                                                   = 0,
	EGLTFMaterialBakeSizePOT__POT1                                                   = 1,
	EGLTFMaterialBakeSizePOT__POT2                                                   = 2,
	EGLTFMaterialBakeSizePOT__POT3                                                   = 3,
	EGLTFMaterialBakeSizePOT__POT4                                                   = 4,
	EGLTFMaterialBakeSizePOT__POT5                                                   = 5,
	EGLTFMaterialBakeSizePOT__POT6                                                   = 6,
	EGLTFMaterialBakeSizePOT__POT7                                                   = 7,
	EGLTFMaterialBakeSizePOT__POT8                                                   = 8,
	EGLTFMaterialBakeSizePOT__POT9                                                   = 9,
	EGLTFMaterialBakeSizePOT__POT10                                                  = 10,
	EGLTFMaterialBakeSizePOT__POT11                                                  = 11,
	EGLTFMaterialBakeSizePOT__POT12                                                  = 12,
	EGLTFMaterialBakeSizePOT__POT13                                                  = 13,
	EGLTFMaterialBakeSizePOT__POT_MAX14                                              = 14
};

/// Enum /Script/GLTFExporter.EGLTFMaterialPropertyGroup
/// Size: 0x09
enum EGLTFMaterialPropertyGroup : uint8_t
{
	EGLTFMaterialPropertyGroup__None0                                                = 0,
	EGLTFMaterialPropertyGroup__BaseColorOpacity1                                    = 1,
	EGLTFMaterialPropertyGroup__MetallicRoughness2                                   = 2,
	EGLTFMaterialPropertyGroup__EmissiveColor3                                       = 3,
	EGLTFMaterialPropertyGroup__Normal4                                              = 4,
	EGLTFMaterialPropertyGroup__AmbientOcclusion5                                    = 5,
	EGLTFMaterialPropertyGroup__ClearCoatRoughness6                                  = 6,
	EGLTFMaterialPropertyGroup__ClearCoatBottomNormal7                               = 7,
	EGLTFMaterialPropertyGroup__EGLTFMaterialPropertyGroup_MAX8                      = 8
};

