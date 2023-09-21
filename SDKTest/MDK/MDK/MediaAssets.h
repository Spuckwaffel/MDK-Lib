
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MediaAssets.MediaSourceRendererInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaSourceRendererInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MediaAssets.MediaTexture
/// Size: 0x00E8 (0x000138 - 0x000220)
class UMediaTexture : public UTexture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TEnumAsByte<TextureAddress>)               AddressX                                                    ___ OFFSET(get<T>, {0x138, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               AddressY                                                    ___ OFFSET(get<T>, {0x139, 1, 0, 0})
	DMember(bool)                                      AutoClear                                                   ___ OFFSET(get<bool>, {0x13A, 1, 0, 0})
	SMember(FLinearColor)                              ClearColor                                                  ___ OFFSET(get<T>, {0x13C, 16, 0, 0})
	DMember(bool)                                      EnableGenMips                                               ___ OFFSET(get<bool>, {0x14C, 1, 0, 0})
	DMember(char)                                      NumMips                                                     ___ OFFSET(get<char>, {0x14D, 1, 0, 0})
	DMember(bool)                                      NewStyleOutput                                              ___ OFFSET(get<bool>, {0x14E, 1, 0, 0})
	CMember(TEnumAsByte<MediaTextureOutputFormat>)     OutputFormat                                                ___ OFFSET(get<T>, {0x14F, 1, 0, 0})
	DMember(float)                                     CurrentAspectRatio                                          ___ OFFSET(get<float>, {0x150, 4, 0, 0})
	CMember(TEnumAsByte<MediaTextureOrientation>)      CurrentOrientation                                          ___ OFFSET(get<T>, {0x154, 1, 0, 0})
	CMember(UMediaPlayer*)                             MediaPlayer                                                 ___ OFFSET(get<T>, {0x158, 8, 0, 0})
};

/// Class /Script/MediaAssets.MediaSource
/// Size: 0x0058 (0x000028 - 0x000080)
class UMediaSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/MediaAssets.BaseMediaSource
/// Size: 0x0008 (0x000080 - 0x000088)
class UBaseMediaSource : public UMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     PlayerName                                                  ___ OFFSET(get<T>, {0x80, 4, 0, 0})
};

/// Class /Script/MediaAssets.FileMediaSource
/// Size: 0x0028 (0x000088 - 0x0000B0)
class UFileMediaSource : public UBaseMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FString)                                   FilePath                                                    ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      PrecacheFile                                                ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Class /Script/MediaAssets.MediaComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UMediaComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UMediaTexture*)                            MediaTexture                                                ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UMediaPlayer*)                             MediaPlayer                                                 ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/MediaAssets.MediaTimeStampInfo
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaTimeStampInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FTimespan)                                 Time                                                        ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(int64_t)                                   SequenceIndex                                               ___ OFFSET(get<int64_t>, {0x30, 8, 0, 0})
};

/// Class /Script/MediaAssets.MediaPlayer
/// Size: 0x0140 (0x000028 - 0x000168)
class UMediaPlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FMulticastInlineDelegate)                  OnEndReached                                                ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaClosed                                               ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaOpened                                               ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaOpenFailed                                           ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlaybackResumed                                           ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlaybackSuspended                                         ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSeekCompleted                                             ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTracksChanged                                             ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetadataChanged                                           ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FTimespan)                                 CacheAhead                                                  ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FTimespan)                                 CacheBehind                                                 ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FTimespan)                                 CacheBehindGame                                             ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      NativeAudioOut                                              ___ OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      PlayOnOpen                                                  ___ OFFSET(get<bool>, {0xD9, 1, 0, 0})
	DMember(bool)                                      Shuffle                                                     ___ OFFSET(get<bool>, {0xDC, 1, 1, 0})
	DMember(bool)                                      Loop                                                        ___ OFFSET(get<bool>, {0xDC, 1, 1, 1})
	CMember(UMediaPlaylist*)                           Playlist                                                    ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(int32_t)                                   PlaylistIndex                                               ___ OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	SMember(FTimespan)                                 TimeDelay                                                   ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(float)                                     HorizontalFieldOfView                                       ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     VerticalFieldOfView                                         ___ OFFSET(get<float>, {0xFC, 4, 0, 0})
	SMember(FRotator)                                  ViewRotation                                                ___ OFFSET(get<T>, {0x100, 24, 0, 0})
	SMember(FGuid)                                     PlayerGuid                                                  ___ OFFSET(get<T>, {0x140, 16, 0, 0})
};

/// Class /Script/MediaAssets.MediaPlayerProxyInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaPlayerProxyInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MediaAssets.MediaPlaylist
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaPlaylist : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UMediaSource*>)                     Items                                                       ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/MediaAssets.MediaSoundComponent
/// Size: 0x00E0 (0x000900 - 0x0009E0)
class UMediaSoundComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2528;

public:
	CMember(EMediaSoundChannels)                       Channels                                                    ___ OFFSET(get<T>, {0x900, 4, 0, 0})
	DMember(bool)                                      DynamicRateAdjustment                                       ___ OFFSET(get<bool>, {0x904, 1, 0, 0})
	DMember(float)                                     RateAdjustmentFactor                                        ___ OFFSET(get<float>, {0x908, 4, 0, 0})
	SMember(FFloatRange)                               RateAdjustmentRange                                         ___ OFFSET(get<T>, {0x90C, 16, 0, 0})
	CMember(UMediaPlayer*)                             MediaPlayer                                                 ___ OFFSET(get<T>, {0x920, 8, 0, 0})
};

/// Class /Script/MediaAssets.PlatformMediaSource
/// Size: 0x0008 (0x000080 - 0x000088)
class UPlatformMediaSource : public UMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(UMediaSource*)                             MediaSource                                                 ___ OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/MediaAssets.StreamMediaSource
/// Size: 0x0010 (0x000088 - 0x000098)
class UStreamMediaSource : public UBaseMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   StreamUrl                                                   ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/MediaAssets.TimeSynchronizableMediaSource
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bUseTimeSynchronization                                     ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(int32_t)                                   FrameDelay                                                  ___ OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(double)                                    TimeDelay                                                   ___ OFFSET(get<double>, {0x90, 8, 0, 0})
	DMember(bool)                                      bAutoDetectInput                                            ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Class /Script/MediaAssets.MediaBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/MediaAssets.MediaMetadataItemBPT
/// Size: 0x0040 (0x000000 - 0x000040)
class FMediaMetadataItemBPT : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   LanguageCode                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   MimeType                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   StringData                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<char>)                              BinaryData                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/MediaAssets.MediaMetadataItemsBPT
/// Size: 0x0010 (0x000000 - 0x000010)
class FMediaMetadataItemsBPT : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMediaMetadataItemBPT>)             Items                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MediaAssets.MediaSoundComponentSpectralData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMediaSoundComponentSpectralData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     FrequencyHz                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MediaAssets.MediaSourceCacheSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FMediaSourceCacheSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bOverride                                                   ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     TimeToLookAhead                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MediaAssets.MediaCaptureDevice
/// Size: 0x0028 (0x000000 - 0x000028)
class FMediaCaptureDevice : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   URL                                                         ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Enum /Script/MediaAssets.MediaTextureOutputFormat
/// Size: 0x03
enum MediaTextureOutputFormat : uint8_t
{
	MTOF_Default0                                                                    = 0,
	MTOF_SRGB_LINOUT1                                                                = 1,
	MTOF_MAX2                                                                        = 2
};

/// Enum /Script/MediaAssets.MediaTextureOrientation
/// Size: 0x05
enum MediaTextureOrientation : uint8_t
{
	MTORI_Original0                                                                  = 0,
	MTORI_CW901                                                                      = 1,
	MTORI_CW1802                                                                     = 2,
	MTORI_CW2703                                                                     = 3,
	MTORI_MAX4                                                                       = 4
};

/// Enum /Script/MediaAssets.EMediaPlayerTrack
/// Size: 0x08
enum EMediaPlayerTrack : uint8_t
{
	EMediaPlayerTrack__Audio0                                                        = 0,
	EMediaPlayerTrack__Caption1                                                      = 1,
	EMediaPlayerTrack__Metadata2                                                     = 2,
	EMediaPlayerTrack__Script3                                                       = 3,
	EMediaPlayerTrack__Subtitle4                                                     = 4,
	EMediaPlayerTrack__Text5                                                         = 5,
	EMediaPlayerTrack__Video6                                                        = 6,
	EMediaPlayerTrack__EMediaPlayerTrack_MAX7                                        = 7
};

/// Enum /Script/MediaAssets.EMediaSoundChannels
/// Size: 0x04
enum EMediaSoundChannels : uint8_t
{
	EMediaSoundChannels__Mono0                                                       = 0,
	EMediaSoundChannels__Stereo1                                                     = 1,
	EMediaSoundChannels__Surround2                                                   = 2,
	EMediaSoundChannels__EMediaSoundChannels_MAX3                                    = 3
};

/// Enum /Script/MediaAssets.EMediaSoundComponentFFTSize
/// Size: 0x05
enum EMediaSoundComponentFFTSize : uint8_t
{
	EMediaSoundComponentFFTSize__Min0                                                = 0,
	EMediaSoundComponentFFTSize__Small1                                              = 1,
	EMediaSoundComponentFFTSize__Medium2                                             = 2,
	EMediaSoundComponentFFTSize__Large3                                              = 3,
	EMediaSoundComponentFFTSize__EMediaSoundComponentFFTSize_MAX4                    = 4
};

/// Enum /Script/MediaAssets.EMediaTextureVisibleMipsTiles
/// Size: 0x04
enum EMediaTextureVisibleMipsTiles : uint8_t
{
	EMediaTextureVisibleMipsTiles__None0                                             = 0,
	EMediaTextureVisibleMipsTiles__Plane1                                            = 1,
	EMediaTextureVisibleMipsTiles__Sphere2                                           = 2,
	EMediaTextureVisibleMipsTiles__EMediaTextureVisibleMipsTiles_MAX3                = 3
};

/// Enum /Script/MediaAssets.EMediaAudioCaptureDeviceFilter
/// Size: 0x06
enum EMediaAudioCaptureDeviceFilter : uint8_t
{
	EMediaAudioCaptureDeviceFilter__None0                                            = 0,
	EMediaAudioCaptureDeviceFilter__Card1                                            = 1,
	EMediaAudioCaptureDeviceFilter__Microphone2                                      = 2,
	EMediaAudioCaptureDeviceFilter__Software3                                        = 4,
	EMediaAudioCaptureDeviceFilter__Unknown4                                         = 8,
	EMediaAudioCaptureDeviceFilter__EMediaAudioCaptureDeviceFilter_MAX5              = 9
};

/// Enum /Script/MediaAssets.EMediaVideoCaptureDeviceFilter
/// Size: 0x06
enum EMediaVideoCaptureDeviceFilter : uint8_t
{
	EMediaVideoCaptureDeviceFilter__None0                                            = 0,
	EMediaVideoCaptureDeviceFilter__Card1                                            = 1,
	EMediaVideoCaptureDeviceFilter__Software2                                        = 2,
	EMediaVideoCaptureDeviceFilter__Unknown3                                         = 4,
	EMediaVideoCaptureDeviceFilter__Webcam4                                          = 8,
	EMediaVideoCaptureDeviceFilter__EMediaVideoCaptureDeviceFilter_MAX5              = 9
};

/// Enum /Script/MediaAssets.EMediaWebcamCaptureDeviceFilter
/// Size: 0x06
enum EMediaWebcamCaptureDeviceFilter : uint8_t
{
	EMediaWebcamCaptureDeviceFilter__None0                                           = 0,
	EMediaWebcamCaptureDeviceFilter__DepthSensor1                                    = 1,
	EMediaWebcamCaptureDeviceFilter__Front2                                          = 2,
	EMediaWebcamCaptureDeviceFilter__Rear3                                           = 4,
	EMediaWebcamCaptureDeviceFilter__Unknown4                                        = 8,
	EMediaWebcamCaptureDeviceFilter__EMediaWebcamCaptureDeviceFilter_MAX5            = 9
};

