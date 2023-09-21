
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioGameplay
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AmbientAudio.AmbientAudioComponent
/// Size: 0x0030 (0x0000A8 - 0x0000D8)
class UAmbientAudioComponent : public UAudioGameplayComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(UAmbientAudioDataAsset*)                   AmbientAsset                                                ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(int32_t)                                   Priority                                                    ___ OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(float)                                     CrossfadeTime                                               ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FGuid)                                     AmbientGuid                                                 ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FName)                                     DisplayName                                                 ___ OFFSET(get<T>, {0xD0, 4, 0, 0})
};

/// Class /Script/AmbientAudio.AmbientAudioDataAsset
/// Size: 0x0028 (0x000030 - 0x000058)
class UAmbientAudioDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FAmbientAudioLoop>)                 LoopingSounds                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FAmbientAudioOneShot>)              OneShotSounds                                               ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(float)                                     TagCrossfadeTime                                            ___ OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Class /Script/AmbientAudio.AmbientAudioSubsystem
/// Size: 0x0228 (0x000030 - 0x000258)
class UAmbientAudioSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	SMember(FMulticastInlineDelegate)                  OnTagChanged                                                ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEntryChanged                                              ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<UAmbientAudioComponent*>)           AmbientComponents                                           ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(AAmbientAudioParameterActor*)              ParameterActor                                              ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/AmbientAudio.AmbientAudioParameterActor
/// Size: 0x0008 (0x000290 - 0x000298)
class AAmbientAudioParameterActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UAudioParameterComponent*)                 Parameters                                                  ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Struct /Script/AmbientAudio.AmbientAudioBase
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FAmbientAudioBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TWeakObjectPtr<USoundBase*>)               sound                                                       ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagQuery)                         Requirements                                                ___ OFFSET(get<T>, {0x20, 72, 0, 0})
	SMember(FAudioGameplayRequirements)                PlaybackRequirements                                        ___ OFFSET(get<T>, {0x68, 80, 0, 0})
};

/// Struct /Script/AmbientAudio.AmbientAudioLoop
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class FAmbientAudioLoop : public FAmbientAudioBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/AmbientAudio.AmbientAudioOneShot
/// Size: 0x0020 (0x0000B8 - 0x0000D8)
class FAmbientAudioOneShot : public FAmbientAudioBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FVector2D)                                 RetriggerTimeRange                                          ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FVector2D)                                 TriggerDistanceRange                                        ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
};

/// Enum /Script/AmbientAudio.EAmbientAudioEntryActionType
/// Size: 0x05
enum EAmbientAudioEntryActionType : uint8_t
{
	EAmbientAudioEntryActionType__Added0                                             = 0,
	EAmbientAudioEntryActionType__Updated1                                           = 1,
	EAmbientAudioEntryActionType__Removed2                                           = 2,
	EAmbientAudioEntryActionType__Count3                                             = 3,
	EAmbientAudioEntryActionType__EAmbientAudioEntryActionType_MAX4                  = 4
};

/// Enum /Script/AmbientAudio.EAmbientAudioTagActionType
/// Size: 0x04
enum EAmbientAudioTagActionType : uint8_t
{
	EAmbientAudioTagActionType__Added0                                               = 0,
	EAmbientAudioTagActionType__Removed1                                             = 1,
	EAmbientAudioTagActionType__Count2                                               = 2,
	EAmbientAudioTagActionType__EAmbientAudioTagActionType_MAX3                      = 3
};

