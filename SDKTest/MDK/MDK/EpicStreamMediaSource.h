
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
	SMember(FString)                                   VideoStreamSource                                           ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(float)                                     VideoStreamSourceAB                                         ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	CMember(TMap<FString, FString>)                    VideoId                                                     ___ OFFSET(get<T>, {0xB0, 80, 0, 0})
	DMember(bool)                                      bIsLive                                                     ___ OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(bool)                                      bBlurlLive                                                  ___ OFFSET(get<bool>, {0x101, 1, 0, 0})
	DMember(int32_t)                                   MaxResolution                                               ___ OFFSET(get<int32_t>, {0x104, 4, 0, 0})
	DMember(int32_t)                                   MaxBandwidth                                                ___ OFFSET(get<int32_t>, {0x108, 4, 0, 0})
	DMember(float)                                     AspectRatio                                                 ___ OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(bool)                                      bShareLock                                                  ___ OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      bAudioOnly                                                  ___ OFFSET(get<bool>, {0x111, 1, 0, 0})
	DMember(bool)                                      bPartySync                                                  ___ OFFSET(get<bool>, {0x112, 1, 0, 0})
	DMember(float)                                     MediaDuration                                               ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	SMember(FString)                                   MimeType                                                    ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FString)                                   StreamDenyHTTPCode                                          ___ OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(UEpicMediaMetadataResolver*)               MetadataResolver                                            ___ OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(UEpicMediaCDNHostnames*)                   CDNHostNames                                                ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	DMember(bool)                                      bEnableBLURLRetries                                         ___ OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(bool)                                      bEnableScrubOptimization                                    ___ OFFSET(get<bool>, {0x149, 1, 0, 0})
	DMember(int32_t)                                   SeekBitrate                                                 ___ OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	DMember(int32_t)                                   CacheSizeKiB                                                ___ OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(int32_t)                                   TimeToCacheMilliseconds                                     ___ OFFSET(get<int32_t>, {0x154, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVideoUrlSuccess                                           ___ OFFSET(get<T>, {0x488, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnVideoUrlFailed                                            ___ OFFSET(get<T>, {0x498, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetaDataFailure                                           ___ OFFSET(get<T>, {0x4A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaLicensedAudioTreatmentChanged                        ___ OFFSET(get<T>, {0x4B8, 16, 0, 0})
	CMember(UEpicMediaDownloadLocalizedOverlays*)      EpicMediaDownloadLocalizedOverlays                          ___ OFFSET(get<T>, {0x4D8, 8, 0, 0})
	SMember(FString)                                   ProtectUserFromAVSettings                                   ___ OFFSET(get<T>, {0x4E0, 16, 0, 0})
	SMember(FString)                                   StreamID                                                    ___ OFFSET(get<T>, {0x4F0, 16, 0, 0})
	SMember(FString)                                   StreamID_Development                                        ___ OFFSET(get<T>, {0x500, 16, 0, 0})
	CMember(UMediaSource*)                             LocalFilePlaybackAsset                                      ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	DMember(double)                                    HighestFramerate                                            ___ OFFSET(get<double>, {0x518, 8, 0, 0})
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

