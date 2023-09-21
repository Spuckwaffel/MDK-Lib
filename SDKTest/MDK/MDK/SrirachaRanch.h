
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioGameplay
/// dependency: AudioShapes
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: McpProfileSys
/// dependency: ModularGameplay

/// Class /Script/SrirachaRanch.StreamingRadioAudioShapeComponent
/// Size: 0x0058 (0x000148 - 0x0001A0)
class UStreamingRadioAudioShapeComponent : public UFortAudioShapeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x148, 4, 0, 0})
	CMember(UStreamingRadioPlayerComponent*)           RadioPlayer                                                 ___ OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /Script/SrirachaRanch.SrirachaRanchComponentTemplateWrapper
/// Size: 0x0008 (0x000030 - 0x000038)
class USrirachaRanchComponentTemplateWrapper : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UMediaSoundComponent*)                     MediaSoundPlayerTemplate                                    ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SrirachaRanch.StreamingRadioPlayerComponent
/// Size: 0x03D0 (0x0000A8 - 0x000478)
class UStreamingRadioPlayerComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	CMember(TMap<FName, FSrirachaInputMappingData>)    InputMappingData                                            ___ OFFSET(get<T>, {0xB8, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSourceLoading                                             ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSourcePlayed                                              ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSourceStopped                                             ___ OFFSET(get<T>, {0x128, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSourceFailed                                              ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMetadataChanged                                           ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRadioExplicitStop                                         ___ OFFSET(get<T>, {0x158, 16, 0, 0})
	DMember(float)                                     PercentAutostartRadio                                       ___ OFFSET(get<float>, {0x168, 4, 0, 0})
	CMember(TArray<FName>)                             DisabledVehicleList                                         ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	CMember(TMap<FName, float>)                        ExteriorVolumeMultiplierMap                                 ___ OFFSET(get<T>, {0x180, 80, 0, 0})
	CMember(TMap<FName, float>)                        InteriorVolumeMultiplierMap                                 ___ OFFSET(get<T>, {0x1D0, 80, 0, 0})
	DMember(bool)                                      bMinimalStateOnPlatform                                     ___ OFFSET(get<bool>, {0x220, 1, 0, 0})
	CMember(TArray<FString>)                           DisabledStationList                                         ___ OFFSET(get<T>, {0x228, 16, 0, 0})
	DMember(bool)                                      bAutostartOnEntry                                           ___ OFFSET(get<bool>, {0x238, 1, 0, 0})
	DMember(bool)                                      bDisabledForCurrentPlayerState                              ___ OFFSET(get<bool>, {0x239, 1, 0, 0})
	SMember(FStreamingRadioSourceData)                 ReplicatedRadioSourceData                                   ___ OFFSET(get<T>, {0x240, 104, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReplicatedStateChangedDelegate                            ___ OFFSET(get<T>, {0x2A8, 16, 0, 0})
	CMember(UMediaSoundComponent*)                     SoundComponent                                              ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UStreamingRadioAudioShapeComponent*)       AudioShape                                                  ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(USrirachaRanchComponentTemplateWrapper*)   SoundCompTemplateSource                                     ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FAthenaRadioStation)                       LastSource                                                  ___ OFFSET(get<T>, {0x2D0, 88, 0, 0})
	CMember(TArray<URadioContentSourceItemDefinition*>) Sources                                                    ___ OFFSET(get<T>, {0x328, 16, 0, 0})
	SMember(FAthenaRadioStation)                       FallbackSource                                              ___ OFFSET(get<T>, {0x338, 88, 0, 0})
	CMember(TMap<FGameplayTag, FSrirachaPerClassSpecialSeats>) SpecialSeatList                                     ___ OFFSET(get<T>, {0x390, 80, 0, 0})
	CMember(UFortBaseStreamingVideo*)                  BasePlayerInstance                                          ___ OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(USoundSubmixBase*)                         DefaultSoundSubmix                                          ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(USoundSubmixBase*)                         LicensedSoundSubmix                                         ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(ERadioSource)                              CurrentMode                                                 ___ OFFSET(get<T>, {0x3F8, 1, 0, 0})
	DMember(int32_t)                                   MaximumRetries                                              ___ OFFSET(get<int32_t>, {0x3FC, 4, 0, 0})
	DMember(int32_t)                                   FadeoutWhenUnpoweredInMS                                    ___ OFFSET(get<int32_t>, {0x400, 4, 0, 0})
	DMember(int32_t)                                   FadeoutWhenOwnerBeingDestroyedInMS                          ___ OFFSET(get<int32_t>, {0x404, 4, 0, 0})
	DMember(int32_t)                                   MaxFadeoutTimeMS                                            ___ OFFSET(get<int32_t>, {0x408, 4, 0, 0})
	DMember(int32_t)                                   DefaultPlayingIndex                                         ___ OFFSET(get<int32_t>, {0x40C, 4, 0, 0})
	CMember(USoundMix*)                                SoundMixInside                                              ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(USoundMix*)                                SoundMixOutside                                             ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	DMember(float)                                     ActivationRadius                                            ___ OFFSET(get<float>, {0x424, 4, 0, 0})
	SMember(FName)                                     ComponentToAttachTo                                         ___ OFFSET(get<T>, {0x428, 4, 0, 0})
	SMember(FName)                                     ComponentSocketAttachTo                                     ___ OFFSET(get<T>, {0x42C, 4, 0, 0})
	CMember(UFortStreamMediaSource*)                   MediaSource                                                 ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(TArray<FAthenaRadioStation>)               RadioStationList                                            ___ OFFSET(get<T>, {0x438, 16, 0, 0})
	CMember(UObject*)                                  DelegateContextObject                                       ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	DMember(float)                                     MediaStartTimeFromInit                                      ___ OFFSET(get<float>, {0x450, 4, 0, 0})
};

/// Class /Script/SrirachaRanch.RadioContentSourceItemDefinition
/// Size: 0x0018 (0x0003F0 - 0x000408)
class URadioContentSourceItemDefinition : public UFortAccountItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
	SMember(FString)                                   ResourceID                                                  ___ OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(UFortStreamMediaSource*)                   MediaSource                                                 ___ OFFSET(get<T>, {0x400, 8, 0, 0})
};

/// Struct /Script/SrirachaRanch.AthenaRadioStation
/// Size: 0x0058 (0x000000 - 0x000058)
class FAthenaRadioStation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FText)                                     Title                                                       ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   StationImage                                                ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   ResourceID                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FString>)                           GameplayTagDenylist                                         ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FString>)                           GameplayTagAllowlist                                        ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/SrirachaRanch.SrirachaPerClassSpecialSeats
/// Size: 0x0010 (0x000000 - 0x000010)
class FSrirachaPerClassSpecialSeats : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           OutsideSeatIndices                                          ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SrirachaRanch.StreamingRadioSourceData
/// Size: 0x0068 (0x000000 - 0x000068)
class FStreamingRadioSourceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(EStreamingRadioSourceState)                State                                                       ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   PlayingIndex                                                ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     FadeoutSeconds                                              ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FAthenaRadioStation)                       SourceOverride                                              ___ OFFSET(get<T>, {0x10, 88, 0, 0})
};

/// Struct /Script/SrirachaRanch.SrirachaInputMappingData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSrirachaInputMappingData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     MainActionName                                              ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     GamepadActionName                                           ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Enum /Script/SrirachaRanch.EStreamingRadioSourceState
/// Size: 0x05
enum EStreamingRadioSourceState : uint8_t
{
	EStreamingRadioSourceState__None0                                                = 0,
	EStreamingRadioSourceState__LoadingPlayer1                                       = 1,
	EStreamingRadioSourceState__LoadedPlayer2                                        = 2,
	EStreamingRadioSourceState__Playing3                                             = 3,
	EStreamingRadioSourceState__EStreamingRadioSourceState_MAX4                      = 4
};

/// Enum /Script/SrirachaRanch.EOnlineRadioSourceType
/// Size: 0x02
enum EOnlineRadioSourceType : uint8_t
{
	EOnlineRadioSourceType__Epic0                                                    = 0,
	EOnlineRadioSourceType__EOnlineRadioSourceType_MAX1                              = 1
};

/// Enum /Script/SrirachaRanch.ERadioSource
/// Size: 0x03
enum ERadioSource : uint8_t
{
	ERadioSource__Invalid0                                                           = 0,
	ERadioSource__Vehicle1                                                           = 1,
	ERadioSource__ERadioSource_MAX2                                                  = 2
};

