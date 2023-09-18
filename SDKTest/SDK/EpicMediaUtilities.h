/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EpicMediaUtilities.

/// Struct /Script/EpicMediaUtilities.EpicMediaImageDataExt
/// Size: 0x0030 (0x000000 - 0x000030)
class FEpicMediaImageDataExt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   URL                                                         ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   FullUrl                                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   Width                                                       ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   Height                                                      ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(float)                                     AspectRatio                                                 ___ OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioOnlyPeriodDataExt
/// Size: 0x0028 (0x000000 - 0x000028)
class FEpicMediaAudioOnlyPeriodDataExt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bColorSet                                                   ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(double)                                    StartFrame                                                  ___ OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(double)                                    EndFrame                                                    ___ OFFSET(get<double>, {0x20, 8, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaVolumeChangeDataExt
/// Size: 0x0028 (0x000000 - 0x000028)
class FEpicMediaVolumeChangeDataExt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(double)                                    Frame                                                       ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    Level                                                       ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    Lerp                                                        ___ OFFSET(get<double>, {0x10, 8, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaPlaylistExt
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FEpicMediaPlaylistExt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FString)                                   Language                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Type                                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   URL                                                         ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   RelUrl                                                      ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Data                                                        ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(double)                                    Duration                                                    ___ OFFSET(get<double>, {0x50, 8, 0, 0})
	DMember(double)                                    FPS                                                         ___ OFFSET(get<double>, {0x58, 8, 0, 0})
	CMember(TArray<FEpicMediaImageDataExt>)            Images                                                      ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FEpicMediaAudioOnlyPeriodDataExt>)  AudioOnlyPeriods                                            ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FEpicMediaVolumeChangeDataExt>)     VolumeChanges                                               ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(double)                                    SkipBoundaryTime                                            ___ OFFSET(get<double>, {0x90, 8, 0, 0})
	DMember(double)                                    PreEndEventTime                                             ___ OFFSET(get<double>, {0x98, 8, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaRegionLockExt
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FEpicMediaRegionLockExt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      AllowOnError                                                ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   Type                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FString>)                           AllowList                                                   ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FString>)                           DenyList                                                    ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TMap<FString, FString>)                    Limits                                                      ___ OFFSET(get<T>, {0x38, 80, 0, 0})
	SMember(FString)                                   ContentId                                                   ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioMetadataTrackIndicesExt
/// Size: 0x0010 (0x000000 - 0x000010)
class FEpicMediaAudioMetadataTrackIndicesExt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           Indices                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioMetadataTrackExt
/// Size: 0x0050 (0x000000 - 0x000050)
class FEpicMediaAudioMetadataTrackExt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FEpicMediaAudioMetadataTrackIndicesExt>) TrackData                                       ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioMetadataDataExt
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FEpicMediaAudioMetadataDataExt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FString)                                   ShortName                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   SongID                                                      ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FString)                                   Title                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   Artist                                                      ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Album                                                       ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   Genre                                                       ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(int32_t)                                   Year                                                        ___ OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(TMap<FString, int32_t>)                    Difficulty                                                  ___ OFFSET(get<T>, {0x60, 80, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaAudioMetadataExt
/// Size: 0x0130 (0x000000 - 0x000130)
class FEpicMediaAudioMetadataExt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TMap<FString, FEpicMediaAudioMetadataTrackIndicesExt>) Tracks                                          ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<float>)                             Pans                                                        ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<float>)                             Volumes                                                     ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<char>)                              Midi                                                        ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FEpicMediaAudioMetadataDataExt)            MetadataData                                                ___ OFFSET(get<T>, {0x80, 176, 0, 0})
};

/// Struct /Script/EpicMediaUtilities.EpicMediaMetadataExt
/// Size: 0x0290 (0x000000 - 0x000290)
class FEpicMediaMetadataExt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(TArray<FEpicMediaPlaylistExt>)             Playlists                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FEpicMediaPlaylistExt>)             StateStreamPlaylists                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FEpicMediaPlaylistExt>)             SelectedPlaylists                                           ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   Type                                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Envelope                                                    ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   Limits                                                      ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   Subtitles                                                   ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   UserContentProtection                                       ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      Sharelock                                                   ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      AudioOnly                                                   ___ OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(float)                                     AspectRatio                                                 ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(bool)                                      PartySync                                                   ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      Live                                                        ___ OFFSET(get<bool>, {0x89, 1, 0, 0})
	SMember(FString)                                   DenyHTTPCode                                                ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FEpicMediaRegionLockExt)                   RegionLockData                                              ___ OFFSET(get<T>, {0xA0, 168, 0, 0})
	SMember(FEpicMediaAudioMetadataExt)                AudioMetadata                                               ___ OFFSET(get<T>, {0x148, 304, 0, 0})
	DMember(bool)                                      bQuicksilverEP                                              ___ OFFSET(get<bool>, {0x278, 1, 0, 0})
};

/// Class /Script/EpicMediaUtilities.EpicMediaServerTime
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AEpicMediaServerTime : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

