
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: MediaAssets

/// Class /Script/EpicStreamMediaSource.EpicStreamMediaSource
/// Size: 0x0718 (0x000098 - 0x0007B0)
class UEpicStreamMediaSource : public UStreamMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	SMember(FString)                                   VideoStreamSource                                           OFFSET(getStruct<T>, {0x98, 16, 0, 0})
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
	SMember(FString)                                   MimeType                                                    OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FString)                                   StreamDenyHTTPCode                                          OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	CMember(UEpicMediaMetadataResolver*)               MetadataResolver                                            OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(UEpicMediaCDNHostnames*)                   CDNHostNames                                                OFFSET(get<T>, {0x140, 8, 0, 0})
	DMember(bool)                                      bEnableBLURLRetries                                         OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(bool)                                      bEnableScrubOptimization                                    OFFSET(get<bool>, {0x149, 1, 0, 0})
	DMember(int32_t)                                   SeekBitrate                                                 OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	DMember(int32_t)                                   CacheSizeKiB                                                OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(int32_t)                                   TimeToCacheMilliseconds                                     OFFSET(get<int32_t>, {0x154, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVideoUrlSuccess                                           OFFSET(getStruct<T>, {0x4D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVideoUrlFailed                                            OFFSET(getStruct<T>, {0x4E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetaDataFailure                                           OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaLicensedAudioTreatmentChanged                        OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	CMember(UEpicMediaDownloadLocalizedOverlays*)      EpicMediaDownloadLocalizedOverlays                          OFFSET(get<T>, {0x520, 8, 0, 0})
	SMember(FString)                                   ProtectUserFromAVSettings                                   OFFSET(getStruct<T>, {0x528, 16, 0, 0})
	SMember(FString)                                   StreamID                                                    OFFSET(getStruct<T>, {0x538, 16, 0, 0})
	SMember(FString)                                   StreamID_Development                                        OFFSET(getStruct<T>, {0x548, 16, 0, 0})
	CMember(UMediaSource*)                             LocalFilePlaybackAsset                                      OFFSET(get<T>, {0x558, 8, 0, 0})
	DMember(double)                                    HighestFramerate                                            OFFSET(get<double>, {0x560, 8, 0, 0})


	/// Functions
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.UpdateStreamUrlArguments
	// void UpdateStreamUrlArguments();                                                                                         // [0x708a094] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.UpdatePlayerOptions
	// FMediaPlayerOptions UpdatePlayerOptions(FMediaPlayerOptions PlayerOptions);                                              // [0x7089f04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ShouldStreamBePlaying
	// bool ShouldStreamBePlaying(UObject* WorldContextObject, UPrimitiveComponent* PrimitiveComponent, float CullRadius);      // [0x7089c88] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ShouldProtectPlayerFromContent
	// TEnumAsByte<UCPTypes> ShouldProtectPlayerFromContent();                                                                  // [0x58369d4] Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetUrl
	// void SetUrl(FString& InURL);                                                                                             // [0x7089668] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetSyncTimes
	// void SetSyncTimes(FDateTime InNowTime, FDateTime InStartTime, bool DynamicStart, float InOffset_s, float InDelay_s);     // [0x708919c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetPlaybackStartTime
	// void SetPlaybackStartTime(float StartTime);                                                                              // [0x708911c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.SetLocalizedOverlaysV2
	// void SetLocalizedOverlaysV2(UEpicMediaDownloadLocalizedOverlays* InOverlays);                                            // [0x7089090] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.RequestVideoUrl
	// void RequestVideoUrl(APlayerController* FortPC);                                                                         // [0x7089014] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ReinstateSharing
	// void ReinstateSharing();                                                                                                 // [0x32bde40] Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.MetadataResultHandler
	// void MetadataResultHandler(FEpicMediaMetadataExt& MetaData, bool bSuccess);                                              // [0x7088e38] Final|Native|Public|HasOutParms 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.IsScreenRecordingInProgress
	// bool IsScreenRecordingInProgress();                                                                                      // [0x29d4b34] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.HasLocalFilePlayback
	// bool HasLocalFilePlayback();                                                                                             // [0x7088dc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ForceSegmentCaching
	// void ForceSegmentCaching(bool bForce);                                                                                   // [0x7088d44] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.DisableSharing
	// void DisableSharing();                                                                                                   // [0x16e29e4] Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.ClearSyncTimes
	// void ClearSyncTimes();                                                                                                   // [0x7088d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/EpicStreamMediaSource.EpicStreamMediaSource.CancelVideoUrlRequest
	// void CancelVideoUrlRequest(bool bInCancelled);                                                                           // [0x7088cb0] Final|Native|Public|BlueprintCallable 
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

