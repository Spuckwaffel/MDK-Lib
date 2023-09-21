
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
	CMember(TEnumAsByte<TextureAddress>)               AddressX                                                    OFFSET(get<T>, {0x138, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               AddressY                                                    OFFSET(get<T>, {0x139, 1, 0, 0})
	DMember(bool)                                      AutoClear                                                   OFFSET(get<bool>, {0x13A, 1, 0, 0})
	SMember(FLinearColor)                              ClearColor                                                  OFFSET(get<T>, {0x13C, 16, 0, 0})
	DMember(bool)                                      EnableGenMips                                               OFFSET(get<bool>, {0x14C, 1, 0, 0})
	DMember(char)                                      NumMips                                                     OFFSET(get<char>, {0x14D, 1, 0, 0})
	DMember(bool)                                      NewStyleOutput                                              OFFSET(get<bool>, {0x14E, 1, 0, 0})
	CMember(TEnumAsByte<MediaTextureOutputFormat>)     OutputFormat                                                OFFSET(get<T>, {0x14F, 1, 0, 0})
	DMember(float)                                     CurrentAspectRatio                                          OFFSET(get<float>, {0x150, 4, 0, 0})
	CMember(TEnumAsByte<MediaTextureOrientation>)      CurrentOrientation                                          OFFSET(get<T>, {0x154, 1, 0, 0})
	CMember(UMediaPlayer*)                             MediaPlayer                                                 OFFSET(get<T>, {0x158, 8, 0, 0})
};



	/// Functions
	// Function /Script/MediaAssets.MediaTexture.UpdateResource
	// void UpdateResource();                                                                                                   // [0x5982274] Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.SetMediaPlayer
	// void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);                                                                       // [0x59818b8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaTexture.GetWidth
	// int32_t GetWidth();                                                                                                      // [0x597e60c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetTextureNumMips
	// int32_t GetTextureNumMips();                                                                                             // [0x597d790] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetMediaPlayer
	// UMediaPlayer* GetMediaPlayer();                                                                                          // [0x597bd7c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetHeight
	// int32_t GetHeight();                                                                                                     // [0x597bc24] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaTexture.GetAspectRatio
	// float GetAspectRatio();                                                                                                  // [0x597b848] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	SMember(FName)                                     PlayerName                                                  OFFSET(get<T>, {0x80, 4, 0, 0})
};

/// Class /Script/MediaAssets.FileMediaSource
/// Size: 0x0028 (0x000088 - 0x0000B0)
class UFileMediaSource : public UBaseMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FString)                                   FilePath                                                    OFFSET(get<T>, {0x88, 16, 0, 0})
	DMember(bool)                                      PrecacheFile                                                OFFSET(get<bool>, {0x98, 1, 0, 0})
};



	/// Functions
	// Function /Script/MediaAssets.FileMediaSource.SetFilePath
	// void SetFilePath(FString Path);                                                                                          // [0x59804ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
/// Class /Script/MediaAssets.MediaComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UMediaComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UMediaTexture*)                            MediaTexture                                                OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UMediaPlayer*)                             MediaPlayer                                                 OFFSET(get<T>, {0xA8, 8, 0, 0})
};



	/// Functions
	// Function /Script/MediaAssets.MediaComponent.GetMediaTexture
	// UMediaTexture* GetMediaTexture();                                                                                        // [0x2bcf41c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaComponent.GetMediaPlayer
	// UMediaPlayer* GetMediaPlayer();                                                                                          // [0x597bd64] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/MediaAssets.MediaTimeStampInfo
/// Size: 0x0010 (0x000028 - 0x000038)
class UMediaTimeStampInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FTimespan)                                 Time                                                        OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(int64_t)                                   SequenceIndex                                               OFFSET(get<int64_t>, {0x30, 8, 0, 0})
};

/// Class /Script/MediaAssets.MediaPlayer
/// Size: 0x0140 (0x000028 - 0x000168)
class UMediaPlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FMulticastInlineDelegate)                  OnEndReached                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaClosed                                               OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaOpened                                               OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMediaOpenFailed                                           OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlaybackResumed                                           OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlaybackSuspended                                         OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSeekCompleted                                             OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTracksChanged                                             OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetadataChanged                                           OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FTimespan)                                 CacheAhead                                                  OFFSET(get<T>, {0xC0, 8, 0, 0})
	SMember(FTimespan)                                 CacheBehind                                                 OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FTimespan)                                 CacheBehindGame                                             OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      NativeAudioOut                                              OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      PlayOnOpen                                                  OFFSET(get<bool>, {0xD9, 1, 0, 0})
	DMember(bool)                                      Shuffle                                                     OFFSET(get<bool>, {0xDC, 1, 1, 0})
	DMember(bool)                                      Loop                                                        OFFSET(get<bool>, {0xDC, 1, 1, 1})
	CMember(UMediaPlaylist*)                           Playlist                                                    OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(int32_t)                                   PlaylistIndex                                               OFFSET(get<int32_t>, {0xE8, 4, 0, 0})
	SMember(FTimespan)                                 TimeDelay                                                   OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(float)                                     HorizontalFieldOfView                                       OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     VerticalFieldOfView                                         OFFSET(get<float>, {0xFC, 4, 0, 0})
	SMember(FRotator)                                  ViewRotation                                                OFFSET(get<T>, {0x100, 24, 0, 0})
	SMember(FGuid)                                     PlayerGuid                                                  OFFSET(get<T>, {0x140, 16, 0, 0})
};



	/// Functions
	// Function /Script/MediaAssets.MediaPlayer.SupportsSeeking
	// bool SupportsSeeking();                                                                                                  // [0x5982250] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsScrubbing
	// bool SupportsScrubbing();                                                                                                // [0x59821d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SupportsRate
	// bool SupportsRate(float Rate, bool Unthinned);                                                                           // [0x598210c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.SetViewRotation
	// bool SetViewRotation(FRotator& Rotation, bool Absolute);                                                                 // [0x5981fc4] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetViewField
	// bool SetViewField(float Horizontal, float Vertical, bool Absolute);                                                      // [0x5981ec4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetVideoTrackFrameRate
	// bool SetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex, float FrameRate);                                   // [0x5981dcc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTrackFormat
	// bool SetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex, int32_t FormatIndex);                               // [0x5981cd4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetTimeDelay
	// void SetTimeDelay(FTimespan TimeDelay);                                                                                  // [0x5981b80] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetRate
	// bool SetRate(float Rate);                                                                                                // [0x59819e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetNativeVolume
	// bool SetNativeVolume(float Volume);                                                                                      // [0x5981938] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetMediaOptions
	// void SetMediaOptions(UMediaSource* Options);                                                                             // [0x598177c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetLooping
	// bool SetLooping(bool Looping);                                                                                           // [0x5980ba0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetDesiredPlayerName
	// void SetDesiredPlayerName(FName PlayerName);                                                                             // [0x598021c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SetBlockOnTime
	// void SetBlockOnTime(FTimespan& Time);                                                                                    // [0x5980190] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.SelectTrack
	// bool SelectTrack(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                       // [0x59800d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Seek
	// bool Seek(FTimespan& Time);                                                                                              // [0x5980038] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Rewind
	// bool Rewind();                                                                                                           // [0x597ffa8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Reopen
	// bool Reopen();                                                                                                           // [0x597feb0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Previous
	// bool Previous();                                                                                                         // [0x597fd34] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.PlayAndSeek
	// void PlayAndSeek();                                                                                                      // [0x597fd20] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Play
	// bool Play();                                                                                                             // [0x597fcfc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Pause
	// bool Pause();                                                                                                            // [0x597fcd8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenUrl
	// bool OpenUrl(FString URL);                                                                                               // [0x597f628] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceWithOptions
	// bool OpenSourceWithOptions(UMediaSource* MediaSource, FMediaPlayerOptions& Options);                                     // [0x597f544] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSourceLatent
	// void OpenSourceLatent(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UMediaSource* MediaSource, FMediaPlayerOptions& Options, bool& bSuccess); // [0x597f164] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenSource
	// bool OpenSource(UMediaSource* MediaSource);                                                                              // [0x597f0d4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylistIndex
	// bool OpenPlaylistIndex(UMediaPlaylist* InPlaylist, int32_t Index);                                                       // [0x597f010] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylist
	// bool OpenPlaylist(UMediaPlaylist* InPlaylist);                                                                           // [0x597ef80] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.OpenFile
	// bool OpenFile(FString FilePath);                                                                                         // [0x597e8d0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.Next
	// bool Next();                                                                                                             // [0x597e898] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.IsReady
	// bool IsReady();                                                                                                          // [0x597e874] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPreparing
	// bool IsPreparing();                                                                                                      // [0x597e848] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x597e81c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsPaused
	// bool IsPaused();                                                                                                         // [0x597e7f8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsLooping
	// bool IsLooping();                                                                                                        // [0x597e7d4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsConnecting
	// bool IsConnecting();                                                                                                     // [0x597e75c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsClosed
	// bool IsClosed();                                                                                                         // [0x597e738] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.IsBuffering
	// bool IsBuffering();                                                                                                      // [0x597e714] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.HasError
	// bool HasError();                                                                                                         // [0x597e624] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetViewRotation
	// FRotator GetViewRotation();                                                                                              // [0x597e5d4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackType
	// FString GetVideoTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x597e4e8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRates
	// FFloatRange GetVideoTrackFrameRates(int32_t TrackIndex, int32_t FormatIndex);                                            // [0x597e418] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRate
	// float GetVideoTrackFrameRate(int32_t TrackIndex, int32_t FormatIndex);                                                   // [0x597e350] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackDimensions
	// FIntPoint GetVideoTrackDimensions(int32_t TrackIndex, int32_t FormatIndex);                                              // [0x597e284] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackAspectRatio
	// float GetVideoTrackAspectRatio(int32_t TrackIndex, int32_t FormatIndex);                                                 // [0x597e1bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetVerticalFieldOfView
	// float GetVerticalFieldOfView();                                                                                          // [0x597e194] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetUrl
	// FString GetUrl();                                                                                                        // [0x597e12c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackLanguage
	// FString GetTrackLanguage(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                               // [0x597da08] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackFormat
	// int32_t GetTrackFormat(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                                 // [0x597d940] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTrackDisplayName
	// FText GetTrackDisplayName(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                              // [0x597d85c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeStamp
	// UMediaTimeStampInfo* GetTimeStamp();                                                                                     // [0x597d7f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTimeDelay
	// FTimespan GetTimeDelay();                                                                                                // [0x597d7d4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetTime
	// FTimespan GetTime();                                                                                                     // [0x597d7a8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSupportedRates
	// void GetSupportedRates(TArray<FFloatRange>& OutRates, bool Unthinned);                                                   // [0x597cfb4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetSelectedTrack
	// int32_t GetSelectedTrack(EMediaPlayerTrack TrackType);                                                                   // [0x597c890] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetRate
	// float GetRate();                                                                                                         // [0x597c864] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylistIndex
	// int32_t GetPlaylistIndex();                                                                                              // [0x597c71c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlaylist
	// UMediaPlaylist* GetPlaylist();                                                                                           // [0x597c6e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetPlayerName
	// FName GetPlayerName();                                                                                                   // [0x597c6b8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTracks
	// int32_t GetNumTracks(EMediaPlayerTrack TrackType);                                                                       // [0x597c5e4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetNumTrackFormats
	// int32_t GetNumTrackFormats(EMediaPlayerTrack TrackType, int32_t TrackIndex);                                             // [0x597c4cc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaName
	// FText GetMediaName();                                                                                                    // [0x597bd1c] RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetMediaMetadataItems
	// TMap<FString, FMediaMetadataItemsBPT> GetMediaMetadataItems();                                                           // [0x597bc64] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetHorizontalFieldOfView
	// float GetHorizontalFieldOfView();                                                                                        // [0x597bc3c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDuration
	// FTimespan GetDuration();                                                                                                 // [0x597bbcc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDisplayTimeStamp
	// UMediaTimeStampInfo* GetDisplayTimeStamp();                                                                              // [0x597bb60] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDisplayTime
	// FTimespan GetDisplayTime();                                                                                              // [0x597bb10] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetDesiredPlayerName
	// FName GetDesiredPlayerName();                                                                                            // [0x597baf4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackType
	// FString GetAudioTrackType(int32_t TrackIndex, int32_t FormatIndex);                                                      // [0x597ba08] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackSampleRate
	// int32_t GetAudioTrackSampleRate(int32_t TrackIndex, int32_t FormatIndex);                                                // [0x597b944] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackChannels
	// int32_t GetAudioTrackChannels(int32_t TrackIndex, int32_t FormatIndex);                                                  // [0x597b880] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaPlayer.Close
	// void Close();                                                                                                            // [0x597b2bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlayUrl
	// bool CanPlayUrl(FString URL);                                                                                            // [0x597ab90] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPlaySource
	// bool CanPlaySource(UMediaSource* MediaSource);                                                                           // [0x597aa34] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlayer.CanPause
	// bool CanPause();                                                                                                         // [0x597a9bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	CMember(TArray<UMediaSource*>)                     Items                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};



	/// Functions
	// Function /Script/MediaAssets.MediaPlaylist.Replace
	// bool Replace(int32_t Index, UMediaSource* Replacement);                                                                  // [0x597fed4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.RemoveAt
	// bool RemoveAt(int32_t Index);                                                                                            // [0x597fde8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Remove
	// bool Remove(UMediaSource* MediaSource);                                                                                  // [0x597fd58] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Num
	// int32_t Num();                                                                                                           // [0x597e8bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Insert
	// void Insert(UMediaSource* MediaSource, int32_t Index);                                                                   // [0x597e650] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetRandom
	// UMediaSource* GetRandom(int32_t& OutIndex);                                                                              // [0x597c7cc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetPrevious
	// UMediaSource* GetPrevious(int32_t& InOutIndex);                                                                          // [0x597c734] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.GetNext
	// UMediaSource* GetNext(int32_t& InOutIndex);                                                                              // [0x597bda0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Get
	// UMediaSource* Get(int32_t Index);                                                                                        // [0x597b7bc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddUrl
	// bool AddUrl(FString URL);                                                                                                // [0x597a1c8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.AddFile
	// bool AddFile(FString FilePath);                                                                                          // [0x5979aa0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaPlaylist.Add
	// bool Add(UMediaSource* MediaSource);                                                                                     // [0x59799e8] Final|RequiredAPI|Native|Public|BlueprintCallable 
/// Class /Script/MediaAssets.MediaSoundComponent
/// Size: 0x00E0 (0x000900 - 0x0009E0)
class UMediaSoundComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2528;

public:
	CMember(EMediaSoundChannels)                       Channels                                                    OFFSET(get<T>, {0x900, 4, 0, 0})
	DMember(bool)                                      DynamicRateAdjustment                                       OFFSET(get<bool>, {0x904, 1, 0, 0})
	DMember(float)                                     RateAdjustmentFactor                                        OFFSET(get<float>, {0x908, 4, 0, 0})
	SMember(FFloatRange)                               RateAdjustmentRange                                         OFFSET(get<T>, {0x90C, 16, 0, 0})
	CMember(UMediaPlayer*)                             MediaPlayer                                                 OFFSET(get<T>, {0x920, 8, 0, 0})
};



	/// Functions
	// Function /Script/MediaAssets.MediaSoundComponent.SetSpectralAnalysisSettings
	// void SetSpectralAnalysisSettings(TArray<float> InFrequenciesToAnalyze, EMediaSoundComponentFFTSize InFFTSize);           // [0x5981a70] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetMediaPlayer
	// void SetMediaPlayer(UMediaPlayer* NewMediaPlayer);                                                                       // [0x5981838] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnvelopeFollowingsettings
	// void SetEnvelopeFollowingsettings(int32_t AttackTimeMsec, int32_t ReleaseTimeMsec);                                      // [0x5980400] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableSpectralAnalysis
	// void SetEnableSpectralAnalysis(bool bInSpectralAnalysisEnabled);                                                         // [0x5980350] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.SetEnableEnvelopeFollowing
	// void SetEnableEnvelopeFollowing(bool bInEnvelopeFollowing);                                                              // [0x598029c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetSpectralData
	// TArray<FMediaSoundComponentSpectralData> GetSpectralData();                                                              // [0x597c920] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetNormalizedSpectralData
	// TArray<FMediaSoundComponentSpectralData> GetNormalizedSpectralData();                                                    // [0x597be38] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/MediaAssets.MediaSoundComponent.GetMediaPlayer
	// UMediaPlayer* GetMediaPlayer();                                                                                          // [0x3280a30] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.GetEnvelopeValue
	// float GetEnvelopeValue();                                                                                                // [0x597bbf8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MediaAssets.MediaSoundComponent.BP_GetAttenuationSettingsToApply
	// bool BP_GetAttenuationSettingsToApply(FSoundAttenuationSettings& OutAttenuationSettings);                                // [0x597a8cc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
/// Class /Script/MediaAssets.PlatformMediaSource
/// Size: 0x0008 (0x000080 - 0x000088)
class UPlatformMediaSource : public UMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(UMediaSource*)                             MediaSource                                                 OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/MediaAssets.StreamMediaSource
/// Size: 0x0010 (0x000088 - 0x000098)
class UStreamMediaSource : public UBaseMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   StreamUrl                                                   OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/MediaAssets.TimeSynchronizableMediaSource
/// Size: 0x0018 (0x000088 - 0x0000A0)
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bUseTimeSynchronization                                     OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(int32_t)                                   FrameDelay                                                  OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
	DMember(double)                                    TimeDelay                                                   OFFSET(get<double>, {0x90, 8, 0, 0})
	DMember(bool)                                      bAutoDetectInput                                            OFFSET(get<bool>, {0x98, 1, 0, 0})
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
	SMember(FString)                                   LanguageCode                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   MimeType                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   StringData                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<char>)                              BinaryData                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/MediaAssets.MediaMetadataItemsBPT
/// Size: 0x0010 (0x000000 - 0x000010)
class FMediaMetadataItemsBPT : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FMediaMetadataItemBPT>)             Items                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MediaAssets.MediaSoundComponentSpectralData
/// Size: 0x0008 (0x000000 - 0x000008)
class FMediaSoundComponentSpectralData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     FrequencyHz                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MediaAssets.MediaSourceCacheSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FMediaSourceCacheSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bOverride                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     TimeToLookAhead                                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/MediaAssets.MediaCaptureDevice
/// Size: 0x0028 (0x000000 - 0x000028)
class FMediaCaptureDevice : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   URL                                                         OFFSET(get<T>, {0x18, 16, 0, 0})
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

