
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: MediaAssets

/// Class /Script/EpicStreamMediaSource.EpicStreamMediaSource
/// Size: 0x06B0 (0x000098 - 0x000748)
class UEpicStreamMediaSource : public UStreamMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
	SMember(FString)                                   VideoStreamSource                                           OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(float)                                     VideoStreamSourceAB                                         OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(TMap<FString, FString>)                    VideoId                                                     OFFSET(get<T>, {0xB0, 80, 0, 0})
	DMember(bool)                                      bIsLive                                                     OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(bool)                                      bBlurlLive                                                  OFFSET(get<bool>, {0x101, 1, 0, 0})
	DMember(int32_t)                                   MaxResolution                                               OFFSET(get<int32_t>, {0x104, 4, 0, 0})
	DMember(int32_t)                                   MaxBandwidth                                                OFFSET(get<int32_t>, {0x108, 4, 0, 0})
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(bool)                                      bShareLock                                                  OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      bAudioOnly                                                  OFFSET(get<bool>, {0x111, 1, 0, 0})
	DMember(bool)                                      bPartySync                                                  OFFSET(get<bool>, {0x112, 1, 0, 0})
	DMember(float)                                     MediaDuration                                               OFFSET(get<float>, {0x114, 4, 0, 0})
	SMember(FString)                                   MimeType                                                    OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FString)                                   StreamDenyHTTPCode                                          OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(UEpicMediaMetadataResolver*)               MetadataResolver                                            OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(UEpicMediaCDNHostnames*)                   CDNHostNames                                                OFFSET(get<T>, {0x140, 8, 0, 0})
	DMember(bool)                                      bEnableBLURLRetries                                         OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(bool)                                      bEnableScrubOptimization                                    OFFSET(get<bool>, {0x149, 1, 0, 0})
	DMember(int32_t)                                   SeekBitrate                                                 OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	DMember(int32_t)                                   CacheSizeKiB                                                OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(int32_t)                                   TimeToCacheMilliseconds                                     OFFSET(get<int32_t>, {0x154, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVideoUrlSuccess                                           OFFSET(get<T>, {0x488, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVideoUrlFailed                                            OFFSET(get<T>, {0x498, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetaDataFailure                                           OFFSET(get<T>, {0x4A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaLicensedAudioTreatmentChanged                        OFFSET(get<T>, {0x4B8, 16, 0, 0})
	CMember(UEpicMediaDownloadLocalizedOverlays*)      EpicMediaDownloadLocalizedOverlays                          OFFSET(get<T>, {0x4D8, 8, 0, 0})
	SMember(FString)                                   ProtectUserFromAVSettings                                   OFFSET(get<T>, {0x4E0, 16, 0, 0})
	SMember(FString)                                   StreamID                                                    OFFSET(get<T>, {0x4F0, 16, 0, 0})
	SMember(FString)                                   StreamID_Development                                        OFFSET(get<T>, {0x500, 16, 0, 0})
	CMember(UMediaSource*)                             LocalFilePlaybackAsset                                      OFFSET(get<T>, {0x510, 8, 0, 0})
	DMember(double)                                    HighestFramerate                                            OFFSET(get<double>, {0x518, 8, 0, 0})


	/// Functions
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.UpdateStreamUrlArguments
	// void UpdateStreamUrlArguments();                                                                                         // [0x6d49544] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.UpdatePlayerOptions
	// FMediaPlayerOptions UpdatePlayerOptions(FMediaPlayerOptions PlayerOptions);                                              // [0x6d4939c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ShouldStreamBePlaying
	// bool ShouldStreamBePlaying(UObject* WorldContextObject, UPrimitiveComponent* PrimitiveComponent, float CullRadius);      // [0x6d49120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ShouldProtectPlayerFromContent
	// TEnumAsByte<UCPTypes> ShouldProtectPlayerFromContent();                                                                  // [0x599a0d8] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetUrl
	// void SetUrl(FString& InURL);                                                                                             // [0x6d48a64] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetSyncTimes
	// void SetSyncTimes(FDateTime InNowTime, FDateTime InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s);     // [0x6d484b4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetPlaybackStartTime
	// void SetPlaybackStartTime(float StartTime);                                                                              // [0x6d48434] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetLocalizedOverlaysV2
	// void SetLocalizedOverlaysV2(UEpicMediaDownloadLocalizedOverlays* InOverlays);                                            // [0x6d483b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.RequestVideoUrl
	// void RequestVideoUrl(APlayerController* FortPC);                                                                         // [0x6d48338] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ReinstateSharing
	// void ReinstateSharing();                                                                                                 // [0xd30dac] Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.MetadataResultHandler
	// void MetadataResultHandler(FEpicMediaMetadataExt& MetaData, bool bSuccess);                                              // [0x1c8ef70] Final|Native|Public|HasOutParms 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.IsScreenRecordingInProgress
	// bool IsScreenRecordingInProgress();                                                                                      // [0x2a22dac] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.HasLocalFilePlayback
	// bool HasLocalFilePlayback();                                                                                             // [0x6d482c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.DisableSharing
	// void DisableSharing();                                                                                                   // [0x19b1658] Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ClearSyncTimes
	// void ClearSyncTimes();                                                                                                   // [0x6d482b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.CancelVideoUrlRequest
	// void CancelVideoUrlRequest(bool bInCancelled);                                                                           // [0x6d48230] Final|Native|Public|BlueprintCallable 
};

/// Enum /Script/EpicStreamMediaSource.UCPTypes
/// Size: 0x05
enum UCPTypes : uint8_t
{
	UCPAudio0                                                                        = 0,
	UCPVideo1                                                                        = 1,
	UCPBoth2                                                                         = 2,
	UCPNone3                                                                         = 3,
	UCPTypes_MAX4                                                                    = 4
};

/// Enum /Script/EpicStreamMediaSource.EStreamMediaContainerType
/// Size: 0x05
enum EStreamMediaContainerType : uint8_t
{
	CONTAINER_DASH0                                                                  = 0,
	CONTAINER_HLS1                                                                   = 1,
	CONTAINER_MP42                                                                   = 2,
	CONTAINER_UNKNOWN3                                                               = 3,
	CONTAINER_MAX4                                                                   = 4
};

