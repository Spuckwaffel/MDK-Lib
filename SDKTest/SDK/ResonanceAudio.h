/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ResonanceAudio.

/// Struct /Script/ResonanceAudio.ResonanceAudioReverbPluginSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FResonanceAudioReverbPluginSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bEnableRoomEffects                                          ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bGetTransformFromAudioVolume                                ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	SMember(FVector)                                   RoomPosition                                                ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FQuat)                                     RoomRotation                                                ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FVector)                                   RoomDimensions                                              ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	CMember(ERaMaterialName)                           LeftWallMaterial                                            ___ OFFSET(get<T>, {0x58, 1, 0, 0})
	CMember(ERaMaterialName)                           RightWallMaterial                                           ___ OFFSET(get<T>, {0x59, 1, 0, 0})
	CMember(ERaMaterialName)                           FloorMaterial                                               ___ OFFSET(get<T>, {0x5A, 1, 0, 0})
	CMember(ERaMaterialName)                           CeilingMaterial                                             ___ OFFSET(get<T>, {0x5B, 1, 0, 0})
	CMember(ERaMaterialName)                           FrontWallMaterial                                           ___ OFFSET(get<T>, {0x5C, 1, 0, 0})
	CMember(ERaMaterialName)                           BackWallMaterial                                            ___ OFFSET(get<T>, {0x5D, 1, 0, 0})
	DMember(float)                                     ReflectionScalar                                            ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     ReverbGain                                                  ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     ReverbTimeModifier                                          ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     ReverbBrightness                                            ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Class /Script/ResonanceAudio.ResonanceAudioSoundfieldSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UResonanceAudioSoundfieldSettings : public USoundfieldEncodingSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EResonanceRenderMode)                      RenderMode                                                  ___ OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ResonanceAudio.ResonanceAudioDirectivityVisualizer
/// Size: 0x0080 (0x000290 - 0x000310)
class AResonanceAudioDirectivityVisualizer : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UMaterial*)                                Material                                                    ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UResonanceAudioSpatializationSourceSettings*) Settings                                                 ___ OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset
/// Size: 0x0108 (0x000068 - 0x000170)
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FResonanceAudioReverbPluginSettings)       Settings                                                    ___ OFFSET(get<T>, {0x100, 112, 0, 0})
};

/// Class /Script/ResonanceAudio.ResonanceAudioSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UResonanceAudioSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FSoftObjectPath)                           OutputSubmix                                                ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	CMember(ERaQualityMode)                            QualityMode                                                 ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FSoftObjectPath)                           GlobalReverbPreset                                          ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FSoftObjectPath)                           GlobalSourcePreset                                          ___ OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Class /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(ERaSpatializationMethod)                   SpatializationMethod                                        ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(float)                                     Pattern                                                     ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Sharpness                                                   ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bToggleVisualization                                        ___ OFFSET(get<bool>, {0x34, 1, 0, 0})
	DMember(float)                                     Scale                                                       ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Spread                                                      ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(ERaDistanceRolloffModel)                   Rolloff                                                     ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     MinDistance                                                 ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 ___ OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Enum /Script/ResonanceAudio.ERaQualityMode
/// Size: 0x05
enum ERaQualityMode : uint8_t
{
	ERaQualityMode__STEREO_PANNING0                                                  = 0,
	ERaQualityMode__BINAURAL_LOW1                                                    = 1,
	ERaQualityMode__BINAURAL_MEDIUM2                                                 = 2,
	ERaQualityMode__BINAURAL_HIGH3                                                   = 3,
	ERaQualityMode__ERaQualityMode_MAX4                                              = 4
};

/// Enum /Script/ResonanceAudio.ERaSpatializationMethod
/// Size: 0x03
enum ERaSpatializationMethod : uint8_t
{
	ERaSpatializationMethod__STEREO_PANNING0                                         = 0,
	ERaSpatializationMethod__HRTF1                                                   = 1,
	ERaSpatializationMethod__ERaSpatializationMethod_MAX2                            = 2
};

/// Enum /Script/ResonanceAudio.ERaDistanceRolloffModel
/// Size: 0x04
enum ERaDistanceRolloffModel : uint8_t
{
	ERaDistanceRolloffModel__LOGARITHMIC0                                            = 0,
	ERaDistanceRolloffModel__LINEAR1                                                 = 1,
	ERaDistanceRolloffModel__NONE2                                                   = 2,
	ERaDistanceRolloffModel__ERaDistanceRolloffModel_MAX3                            = 3
};

/// Enum /Script/ResonanceAudio.ERaMaterialName
/// Size: 0x25
enum ERaMaterialName : uint8_t
{
	ERaMaterialName__TRANSPARENT0                                                    = 0,
	ERaMaterialName__ACOUSTIC_CEILING_TILES1                                         = 1,
	ERaMaterialName__BRICK_BARE2                                                     = 2,
	ERaMaterialName__BRICK_PAINTED3                                                  = 3,
	ERaMaterialName__CONCRETE_BLOCK_COARSE4                                          = 4,
	ERaMaterialName__CONCRETE_BLOCK_PAINTED5                                         = 5,
	ERaMaterialName__CURTAIN_HEAVY6                                                  = 6,
	ERaMaterialName__FIBER_GLASS_INSULATION7                                         = 7,
	ERaMaterialName__GLASS_THIN8                                                     = 8,
	ERaMaterialName__GLASS_THICK9                                                    = 9,
	ERaMaterialName__GRASS10                                                         = 10,
	ERaMaterialName__LINOLEUM_ON_CONCRETE11                                          = 11,
	ERaMaterialName__MARBLE12                                                        = 12,
	ERaMaterialName__METAL13                                                         = 13,
	ERaMaterialName__PARQUET_ONCONCRETE14                                            = 14,
	ERaMaterialName__PLASTER_ROUGH15                                                 = 15,
	ERaMaterialName__PLASTER_SMOOTH16                                                = 16,
	ERaMaterialName__PLYWOOD_PANEL17                                                 = 17,
	ERaMaterialName__POLISHED_CONCRETE_OR_TILE18                                     = 18,
	ERaMaterialName__SHEETROCK19                                                     = 19,
	ERaMaterialName__WATER_OR_ICE_SURFACE20                                          = 20,
	ERaMaterialName__WOOD_CEILING21                                                  = 21,
	ERaMaterialName__WOOD_PANEL22                                                    = 22,
	ERaMaterialName__UNIFORM23                                                       = 23,
	ERaMaterialName__ERaMaterialName_MAX24                                           = 24
};

/// Enum /Script/ResonanceAudio.EResonanceRenderMode
/// Size: 0x06
enum EResonanceRenderMode : uint8_t
{
	EResonanceRenderMode__StereoPanning0                                             = 0,
	EResonanceRenderMode__BinauralLowQuality1                                        = 1,
	EResonanceRenderMode__BinauralMediumQuality2                                     = 2,
	EResonanceRenderMode__BinauralHighQuality3                                       = 3,
	EResonanceRenderMode__RoomEffectsOnly4                                           = 4,
	EResonanceRenderMode__EResonanceRenderMode_MAX5                                  = 5
};

