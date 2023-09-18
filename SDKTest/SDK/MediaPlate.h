/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MediaPlate.

/// Class /Script/MediaPlate.MediaPlate
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AMediaPlate : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UMediaPlateComponent*)                     MediaPlateComponent                                         ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMeshComponent                                         ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/MediaPlate.MediaPlateAssetUserData
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaPlateAssetUserData : public UAssetUserData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/MediaPlate.MediaPlateComponent
/// Size: 0x00C8 (0x0000A0 - 0x000168)
class UMediaPlateComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	DMember(bool)                                      bPlayOnOpen                                                 ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   ___ OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bEnableAudio                                                ___ OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(float)                                     StartTime                                                   ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	CMember(UMediaSoundComponent*)                     SoundComponent                                              ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMeshComponent                                         ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             Letterboxes                                                 ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(UMediaPlaylist*)                           MediaPlaylist                                               ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(int32_t)                                   PlaylistIndex                                               ___ OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	SMember(FMediaSourceCacheSettings)                 CacheSettings                                               ___ OFFSET(get<T>, {0xDC, 8, 0, 0})
	DMember(bool)                                      bIsMediaPlatePlaying                                        ___ OFFSET(get<bool>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bPlayOnlyWhenVisible                                        ___ OFFSET(get<bool>, {0xEC, 1, 0, 0})
	DMember(bool)                                      bLoop                                                       ___ OFFSET(get<bool>, {0xED, 1, 0, 0})
	CMember(EMediaTextureVisibleMipsTiles)             VisibleMipsTilesCalculations                                ___ OFFSET(get<T>, {0xEE, 1, 0, 0})
	DMember(float)                                     MipMapBias                                                  ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(bool)                                      bIsAspectRatioAuto                                          ___ OFFSET(get<bool>, {0xF4, 1, 0, 0})
	DMember(bool)                                      bEnableMipMapUpscaling                                      ___ OFFSET(get<bool>, {0xF5, 1, 0, 0})
	DMember(int32_t)                                   MipLevelToUpscale                                           ___ OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(float)                                     LetterboxAspectRatio                                        ___ OFFSET(get<float>, {0xFC, 4, 0, 0})
	SMember(FVector2D)                                 MeshRange                                                   ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<UMediaTexture*>)                    MediaTextures                                               ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(UMediaPlayer*)                             MediaPlayer                                                 ___ OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Enum /Script/MediaPlate.EMediaPlateEventState
/// Size: 0x08
enum EMediaPlateEventState : uint8_t
{
	EMediaPlateEventState__Play0                                                     = 0,
	EMediaPlateEventState__Open1                                                     = 1,
	EMediaPlateEventState__Close2                                                    = 2,
	EMediaPlateEventState__Pause3                                                    = 3,
	EMediaPlateEventState__Reverse4                                                  = 4,
	EMediaPlateEventState__Forward5                                                  = 5,
	EMediaPlateEventState__Rewind6                                                   = 6,
	EMediaPlateEventState__MAX7                                                      = 7
};

