/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TextureUtilitiesCommon.

/// Class /Script/TextureUtilitiesCommon.TextureImportSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UTextureImportSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   AutoVTSize                                                  ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bEnableNormalizeNormals                                     ___ OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(bool)                                      bEnableFastMipFilter                                        ___ OFFSET(get<bool>, {0x35, 1, 0, 0})
	CMember(ETextureImportFloatingPointFormat)         CompressedFormatForFloatTextures                            ___ OFFSET(get<T>, {0x36, 1, 0, 0})
	CMember(ETextureImportPNGInfill)                   PNGInfill                                                   ___ OFFSET(get<T>, {0x37, 1, 0, 0})
};

/// Enum /Script/TextureUtilitiesCommon.ETextureImportFloatingPointFormat
/// Size: 0x05
enum ETextureImportFloatingPointFormat : uint8_t
{
	ETextureImportFloatingPointFormat__HDR_F160                                      = 0,
	ETextureImportFloatingPointFormat__HDRCompressed_BC61                            = 1,
	ETextureImportFloatingPointFormat__HDR_F32_or_F162                               = 2,
	ETextureImportFloatingPointFormat__PreviousDefault3                              = 0,
	ETextureImportFloatingPointFormat__ETextureImportFloatingPointFormat_MAX4        = 3
};

/// Enum /Script/TextureUtilitiesCommon.ETextureImportPNGInfill
/// Size: 0x05
enum ETextureImportPNGInfill : uint8_t
{
	ETextureImportPNGInfill__Default0                                                = 0,
	ETextureImportPNGInfill__Never1                                                  = 1,
	ETextureImportPNGInfill__OnlyOnBinaryTransparency2                               = 2,
	ETextureImportPNGInfill__Always3                                                 = 3,
	ETextureImportPNGInfill__ETextureImportPNGInfill_MAX4                            = 4
};

