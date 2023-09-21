
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MediaPlate.MediaPlate
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AMediaPlate : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UMediaPlateComponent*)                     MediaPlateComponent                                         OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMeshComponent                                         OFFSET(get<T>, {0x298, 8, 0, 0})
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
	DMember(bool)                                      bPlayOnOpen                                                 OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bAutoPlay                                                   OFFSET(get<bool>, {0xA9, 1, 0, 0})
	DMember(bool)                                      bEnableAudio                                                OFFSET(get<bool>, {0xAA, 1, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0xAC, 4, 0, 0})
	CMember(UMediaSoundComponent*)                     SoundComponent                                              OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMeshComponent                                         OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             Letterboxes                                                 OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(UMediaPlaylist*)                           MediaPlaylist                                               OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(int32_t)                                   PlaylistIndex                                               OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	SMember(FMediaSourceCacheSettings)                 CacheSettings                                               OFFSET(getStruct<T>, {0xDC, 8, 0, 0})
	DMember(bool)                                      bIsMediaPlatePlaying                                        OFFSET(get<bool>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bPlayOnlyWhenVisible                                        OFFSET(get<bool>, {0xEC, 1, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0xED, 1, 0, 0})
	CMember(EMediaTextureVisibleMipsTiles)             VisibleMipsTilesCalculations                                OFFSET(get<T>, {0xEE, 1, 0, 0})
	DMember(float)                                     MipMapBias                                                  OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(bool)                                      bIsAspectRatioAuto                                          OFFSET(get<bool>, {0xF4, 1, 0, 0})
	DMember(bool)                                      bEnableMipMapUpscaling                                      OFFSET(get<bool>, {0xF5, 1, 0, 0})
	DMember(int32_t)                                   MipLevelToUpscale                                           OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(float)                                     LetterboxAspectRatio                                        OFFSET(get<float>, {0xFC, 4, 0, 0})
	SMember(FVector2D)                                 MeshRange                                                   OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	CMember(TArray<UMediaTexture*>)                    MediaTextures                                               OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(UMediaPlayer*)                             MediaPlayer                                                 OFFSET(get<T>, {0x128, 8, 0, 0})


	/// Functions
	// Function /Script/MediaPlate.MediaPlateComponent.SetPlayOnlyWhenVisible
	// void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);                                                                // [0xa66c764] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetMeshRange
	// void SetMeshRange(FVector2D InMeshRange);                                                                                // [0xa66c60c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLoop
	// void SetLoop(bool bInLoop);                                                                                              // [0xa66c57c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetLetterboxAspectRatio
	// void SetLetterboxAspectRatio(float AspectRatio);                                                                         // [0xa66c4fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.SetIsAspectRatioAuto
	// void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);                                                                    // [0xa66c46c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Seek
	// bool Seek(FTimespan& Time);                                                                                              // [0xa66c3d4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Rewind
	// bool Rewind();                                                                                                           // [0xa66c3a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Play
	// void Play();                                                                                                             // [0xa66c36c] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Pause
	// void Pause();                                                                                                            // [0xa66c338] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.Open
	// void Open();                                                                                                             // [0xa66c324] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaOpened
	// void OnMediaOpened(FString DeviceUrl);                                                                                   // [0xa66bc78] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.OnMediaEnd
	// void OnMediaEnd();                                                                                                       // [0xa66bc64] Final|Native|Private 
	// Function /Script/MediaPlate.MediaPlateComponent.IsMediaPlatePlaying
	// bool IsMediaPlatePlaying();                                                                                              // [0xa66bc4c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMeshRange
	// FVector2D GetMeshRange();                                                                                                // [0xa66bc30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaTexture
	// UMediaTexture* GetMediaTexture(int32_t Index);                                                                           // [0xa66bba4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetMediaPlayer
	// UMediaPlayer* GetMediaPlayer();                                                                                          // [0x9765d34] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLoop
	// bool GetLoop();                                                                                                          // [0xa66bb8c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MediaPlate.MediaPlateComponent.GetLetterboxAspectRatio
	// float GetLetterboxAspectRatio();                                                                                         // [0xa66bb74] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaPlate.MediaPlateComponent.GetIsAspectRatioAuto
	// bool GetIsAspectRatioAuto();                                                                                             // [0x7f0c9a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaPlate.MediaPlateComponent.Close
	// void Close();                                                                                                            // [0xa66bb60] Final|Native|Public|BlueprintCallable 
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

