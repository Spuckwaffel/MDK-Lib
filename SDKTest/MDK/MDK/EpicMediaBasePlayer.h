
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo
/// Size: 0x0120 (0x000028 - 0x000148)
class UEpicBaseStreamingVideo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FMulticastInlineDelegate)                  VideoOnTerminalError                                        OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnSuccess                                              OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnClosed                                               OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnEndReached                                           OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnOpenTimeout                                          OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  VideoOnResumed                                              OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	CMember(UEpicStreamMediaSource*)                   MediaSource                                                 OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UMediaPlayer*)                             MediaPlayer                                                 OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FIntPoint)                                 VideoSize                                                   OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
	CMember(USoundSubmixBase*)                         DefaultSubmix                                               OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(USoundSubmixBase*)                         LicensedSubmix                                              OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(UMediaSoundComponent*)                     MediaSoundComponent                                         OFFSET(get<T>, {0x140, 8, 0, 0})


	/// Functions
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Stop
	// void Stop(bool bRelease, bool bStopPlayer);                                                                              // [0x708eb20] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Start
	// void Start(FString InVUID, UMediaTexture* InVideoTexture);                                                               // [0x708e4e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetVideoSize
	// void SetVideoSize(int32_t Width, int32_t Height);                                                                        // [0x708e418] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetSyncTimes
	// void SetSyncTimes(FDateTime InNowTime, FDateTime InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s);     // [0x708df4c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetSoundSubmixes
	// void SetSoundSubmixes(UMediaSoundComponent* InSoundComponent, USoundSubmixBase* InDefault, USoundSubmixBase* InLicensed); // [0x708de34] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetOpenTimeout
	// void SetOpenTimeout(double InTimeoutTime);                                                                               // [0x708ddb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.SetCreateAudioComponent
	// void SetCreateAudioComponent(bool bInCreateAudioComponent);                                                              // [0x708dd30] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.RetryOnError
	// bool RetryOnError(bool bFromPlayer);                                                                                     // [0x708dca0] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Release
	// void Release();                                                                                                          // [0x32bde40] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Open
	// bool Open(FMediaPlayerOptions InMediaOptions);                                                                           // [0x708db24] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.OnSuccessfulURL
	// void OnSuccessfulURL(FString URL);                                                                                       // [0x708d520] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.OnFailedURL
	// void OnFailedURL(FString URL);                                                                                           // [0x708cf1c] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.IsSyncStartTimeSet
	// bool IsSyncStartTimeSet();                                                                                               // [0x708cf04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.Init
	// bool Init(UMediaTexture* InVideoTexture, UMediaPlayer* InMediaPlayer, UEpicStreamMediaSource* InMediaSource, bool InCDNFailover); // [0x708cdc0] Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaResumed
	// void HandleMediaResumed();                                                                                               // [0x59ad0b4] Native|Protected     
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaOpenedFailed
	// void HandleMediaOpenedFailed(FString FailedUrl);                                                                         // [0x708c7bc] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaOpened
	// void HandleMediaOpened(FString OpenedUrl);                                                                               // [0x708c1b8] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaEndReached
	// void HandleMediaEndReached();                                                                                            // [0x708c198] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleMediaClosed
	// void HandleMediaClosed();                                                                                                // [0x708c184] Final|Native|Protected 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.HandleLicensedAudioTreatmentChanged
	// void HandleLicensedAudioTreatmentChanged(TEnumAsByte<UCPTypes> UCPType);                                                 // [0x708c100] Final|Native|Private 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetSoundComponent
	// UMediaSoundComponent* GetSoundComponent();                                                                               // [0x2742f14] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaSource
	// UEpicStreamMediaSource* GetMediaSource();                                                                                // [0x232e2fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaPlayerOptions
	// FMediaPlayerOptions GetMediaPlayerOptions();                                                                             // [0x708c0c0] Native|Public        
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetMediaPlayer
	// UMediaPlayer* GetMediaPlayer();                                                                                          // [0x708c0a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.GetLicensedAudio
	// bool GetLicensedAudio();                                                                                                 // [0x56ca300] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicMediaBasePlayer.EpicBaseStreamingVideo.ClearSyncTimes
	// void ClearSyncTimes();                                                                                                   // [0x708c074] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/EpicMediaBasePlayer.BaseMediaDelayConfig
/// Size: 0x0050 (0x000000 - 0x000050)
class FBaseMediaDelayConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UMediaTexture*)                            MediaTexture                                                OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaTerminalErrorReason
/// Size: 0x06
enum EBaseMediaTerminalErrorReason : uint8_t
{
	EBaseMediaTerminalErrorReason__Unknown0                                          = 0,
	EBaseMediaTerminalErrorReason__Source1                                           = 1,
	EBaseMediaTerminalErrorReason__Player2                                           = 2,
	EBaseMediaTerminalErrorReason__UCP3                                              = 3,
	EBaseMediaTerminalErrorReason__OpenTimeout4                                      = 4,
	EBaseMediaTerminalErrorReason__EBaseMediaTerminalErrorReason_MAX5                = 5
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaDelayAction
/// Size: 0x04
enum EBaseMediaDelayAction : uint8_t
{
	EBaseMediaDelayAction__Open0                                                     = 0,
	EBaseMediaDelayAction__Stop1                                                     = 1,
	EBaseMediaDelayAction__Start2                                                    = 2,
	EBaseMediaDelayAction__EBaseMediaDelayAction_MAX3                                = 3
};

/// Enum /Script/EpicMediaBasePlayer.EBaseMediaPlayerState
/// Size: 0x08
enum EBaseMediaPlayerState : uint8_t
{
	EBaseMediaPlayerState__None0                                                     = 0,
	EBaseMediaPlayerState__Released1                                                 = 1,
	EBaseMediaPlayerState__Stopped2                                                  = 2,
	EBaseMediaPlayerState__Started3                                                  = 3,
	EBaseMediaPlayerState__Opened4                                                   = 4,
	EBaseMediaPlayerState__Playing5                                                  = 5,
	EBaseMediaPlayerState__Error6                                                    = 6,
	EBaseMediaPlayerState__EBaseMediaPlayerState_MAX7                                = 7
};

