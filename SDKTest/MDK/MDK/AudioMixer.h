
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioMixer.AudioBusSubsystem
/// Size: 0x0060 (0x000030 - 0x000090)
class UAudioBusSubsystem : public UAudioEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/AudioMixer.AudioDeviceNotificationSubsystem
/// Size: 0x00F8 (0x000030 - 0x000128)
class UAudioDeviceNotificationSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FMulticastInlineDelegate)                  DefaultCaptureDeviceChanged                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DefaultRenderDeviceChanged                                  ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DeviceAdded                                                 ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DeviceRemoved                                               ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DeviceStateChanged                                          ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DeviceSwitched                                              ___ OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Class /Script/AudioMixer.AudioMixerBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioMixer.SynthSound
/// Size: 0x0020 (0x000480 - 0x0004A0)
class USynthSound : public USoundWaveProcedural
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(TWeakObjectPtr<USynthComponent*>)          OwningSynthComponent                                        ___ OFFSET(get<T>, {0x480, 8, 0, 0})
};

/// Class /Script/AudioMixer.SynthComponent
/// Size: 0x0660 (0x0002A0 - 0x000900)
class USynthComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2304;

public:
	DMember(bool)                                      bAutoDestroy                                                ___ OFFSET(get<bool>, {0x2A0, 1, 1, 0})
	DMember(bool)                                      bStopWhenOwnerDestroyed                                     ___ OFFSET(get<bool>, {0x2A0, 1, 1, 1})
	DMember(bool)                                      bAllowSpatialization                                        ___ OFFSET(get<bool>, {0x2A0, 1, 1, 2})
	DMember(bool)                                      bOverrideAttenuation                                        ___ OFFSET(get<bool>, {0x2A0, 1, 1, 3})
	DMember(bool)                                      bEnableBusSends                                             ___ OFFSET(get<bool>, {0x2A4, 1, 1, 0})
	DMember(bool)                                      bEnableBaseSubmix                                           ___ OFFSET(get<bool>, {0x2A4, 1, 1, 1})
	DMember(bool)                                      bEnableSubmixSends                                          ___ OFFSET(get<bool>, {0x2A4, 1, 1, 2})
	CMember(USoundAttenuation*)                        AttenuationSettings                                         ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(FSoundAttenuationSettings)                 AttenuationOverrides                                        ___ OFFSET(get<T>, {0x2B0, 976, 0, 0})
	CMember(USoundConcurrency*)                        ConcurrencySettings                                         ___ OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(TSet<USoundConcurrency*>)                  ConcurrencySet                                              ___ OFFSET(get<T>, {0x688, 80, 0, 0})
	SMember(FSoundModulationDefaultRoutingSettings)    ModulationRouting                                           ___ OFFSET(get<T>, {0x6D8, 360, 0, 0})
	CMember(USoundClass*)                              SoundClass                                                  ___ OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(USoundEffectSourcePresetChain*)            SourceEffectChain                                           ___ OFFSET(get<T>, {0x848, 8, 0, 0})
	CMember(USoundSubmixBase*)                         SoundSubmix                                                 ___ OFFSET(get<T>, {0x850, 8, 0, 0})
	CMember(TArray<FSoundSubmixSendInfo>)              SoundSubmixSends                                            ___ OFFSET(get<T>, {0x858, 16, 0, 0})
	CMember(TArray<FSoundSourceBusSendInfo>)           BusSends                                                    ___ OFFSET(get<T>, {0x868, 16, 0, 0})
	CMember(TArray<FSoundSourceBusSendInfo>)           PreEffectBusSends                                           ___ OFFSET(get<T>, {0x878, 16, 0, 0})
	DMember(bool)                                      bIsUISound                                                  ___ OFFSET(get<bool>, {0x888, 1, 1, 0})
	DMember(bool)                                      bIsPreviewSound                                             ___ OFFSET(get<bool>, {0x888, 1, 1, 1})
	DMember(int32_t)                                   EnvelopeFollowerAttackTime                                  ___ OFFSET(get<int32_t>, {0x88C, 4, 0, 0})
	DMember(int32_t)                                   EnvelopeFollowerReleaseTime                                 ___ OFFSET(get<int32_t>, {0x890, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAudioEnvelopeValue                                        ___ OFFSET(get<T>, {0x898, 16, 0, 0})
	CMember(USynthSound*)                              Synth                                                       ___ OFFSET(get<T>, {0x8C8, 8, 0, 0})
	CMember(UAudioComponent*)                          AudioComponent                                              ___ OFFSET(get<T>, {0x8D0, 8, 0, 0})
};

/// Class /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
/// Size: 0x00E8 (0x000068 - 0x000150)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FSubmixEffectDynamicsProcessorSettings)    Settings                                                    ___ OFFSET(get<T>, {0xF0, 96, 0, 0})
};

/// Class /Script/AudioMixer.SubmixEffectSubmixEQPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSubmixEffectSubmixEQSettings)             Settings                                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/AudioMixer.SubmixEffectReverbPreset
/// Size: 0x00A8 (0x000068 - 0x000110)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FSubmixEffectReverbSettings)               Settings                                                    ___ OFFSET(get<T>, {0xD0, 64, 0, 0})
};

/// Class /Script/AudioMixer.AudioGenerator
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UAudioGenerator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/AudioMixer.QuartzClockHandle
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UQuartzClockHandle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Script/AudioMixer.QuartzSubsystem
/// Size: 0x0020 (0x000040 - 0x000060)
class UQuartzSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/AudioMixer.AudioOutputDeviceInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FAudioOutputDeviceInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DeviceID                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   NumChannels                                                 ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	CMember(EAudioMixerStreamDataFormatType)           Format                                                      ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TArray<EAudioMixerChannelType>)            OutputChannelArray                                          ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bIsSystemDefault                                            ___ OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bIsCurrentDevice                                            ___ OFFSET(get<bool>, {0x40, 1, 1, 1})
};

/// Struct /Script/AudioMixer.SwapAudioOutputResult
/// Size: 0x0028 (0x000000 - 0x000028)
class FSwapAudioOutputResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   CurrentDeviceId                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RequestedDeviceId                                           ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(ESwapAudioOutputDeviceResultState)         Result                                                      ___ OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicProcessorFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSubmixEffectDynamicProcessorFilterSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(float)                                     Cutoff                                                      ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GainDb                                                      ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FSubmixEffectDynamicsProcessorSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(ESubmixEffectDynamicsProcessorType)        DynamicsProcessorType                                       ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESubmixEffectDynamicsPeakMode)             PeakMode                                                    ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ESubmixEffectDynamicsChannelLinkMode)      LinkMode                                                    ___ OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(float)                                     InputGainDb                                                 ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ThresholdDb                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Ratio                                                       ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     KneeBandwidthDb                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     LookAheadMsec                                               ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AttackTimeMsec                                              ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ReleaseTimeMsec                                             ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	CMember(ESubmixEffectDynamicsKeySource)            KeySource                                                   ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(UAudioBus*)                                ExternalAudioBus                                            ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(USoundSubmix*)                             ExternalSubmix                                              ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bChannelLinked                                              ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(bool)                                      bAnalogMode                                                 ___ OFFSET(get<bool>, {0x38, 1, 1, 1})
	DMember(bool)                                      bBypass                                                     ___ OFFSET(get<bool>, {0x38, 1, 1, 2})
	DMember(bool)                                      bKeyAudition                                                ___ OFFSET(get<bool>, {0x38, 1, 1, 3})
	DMember(float)                                     KeyGainDb                                                   ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FSubmixEffectDynamicProcessorFilterSettings) KeyHighshelf                                              ___ OFFSET(get<T>, {0x44, 12, 0, 0})
	SMember(FSubmixEffectDynamicProcessorFilterSettings) KeyLowshelf                                               ___ OFFSET(get<T>, {0x50, 12, 0, 0})
};

/// Struct /Script/AudioMixer.SubmixEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
class FSubmixEffectEQBand : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Bandwidth                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GainDb                                                      ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0xC, 1, 1, 0})
};

/// Struct /Script/AudioMixer.SubmixEffectSubmixEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSubmixEffectSubmixEQSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSubmixEffectEQBand>)               EQBands                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AudioMixer.SubmixEffectReverbSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FSubmixEffectReverbSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bBypassEarlyReflections                                     ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     ReflectionsDelay                                            ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GainHF                                                      ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ReflectionsGain                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bBypassLateReflections                                      ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     LateDelay                                                   ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Density                                                     ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Diffusion                                                   ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     AirAbsorptionGainHF                                         ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     DecayHFRatio                                                ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     LateGain                                                    ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Gain                                                        ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bBypass                                                     ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Enum /Script/AudioMixer.EAudioDeviceChangedRole
/// Size: 0x06
enum EAudioDeviceChangedRole : uint8_t
{
	EAudioDeviceChangedRole__Invalid0                                                = 0,
	EAudioDeviceChangedRole__Console1                                                = 1,
	EAudioDeviceChangedRole__Multimedia2                                             = 2,
	EAudioDeviceChangedRole__Communications3                                         = 3,
	EAudioDeviceChangedRole__Count4                                                  = 4,
	EAudioDeviceChangedRole__EAudioDeviceChangedRole_MAX5                            = 5
};

/// Enum /Script/AudioMixer.EAudioDeviceChangedState
/// Size: 0x07
enum EAudioDeviceChangedState : uint8_t
{
	EAudioDeviceChangedState__Invalid0                                               = 0,
	EAudioDeviceChangedState__Active1                                                = 1,
	EAudioDeviceChangedState__Disabled2                                              = 2,
	EAudioDeviceChangedState__NotPresent3                                            = 3,
	EAudioDeviceChangedState__Unplugged4                                             = 4,
	EAudioDeviceChangedState__Count5                                                 = 5,
	EAudioDeviceChangedState__EAudioDeviceChangedState_MAX6                          = 6
};

/// Enum /Script/AudioMixer.EAudioMixerChannelType
/// Size: 0x22
enum EAudioMixerChannelType : uint8_t
{
	EAudioMixerChannelType__FrontLeft0                                               = 0,
	EAudioMixerChannelType__FrontRight1                                              = 1,
	EAudioMixerChannelType__FrontCenter2                                             = 2,
	EAudioMixerChannelType__LowFrequency3                                            = 3,
	EAudioMixerChannelType__BackLeft4                                                = 4,
	EAudioMixerChannelType__BackRight5                                               = 5,
	EAudioMixerChannelType__FrontLeftOfCenter6                                       = 6,
	EAudioMixerChannelType__FrontRightOfCenter7                                      = 7,
	EAudioMixerChannelType__BackCenter8                                              = 8,
	EAudioMixerChannelType__SideLeft9                                                = 9,
	EAudioMixerChannelType__SideRight10                                              = 10,
	EAudioMixerChannelType__TopCenter11                                              = 11,
	EAudioMixerChannelType__TopFrontLeft12                                           = 12,
	EAudioMixerChannelType__TopFrontCenter13                                         = 13,
	EAudioMixerChannelType__TopFrontRight14                                          = 14,
	EAudioMixerChannelType__TopBackLeft15                                            = 15,
	EAudioMixerChannelType__TopBackCenter16                                          = 16,
	EAudioMixerChannelType__TopBackRight17                                           = 17,
	EAudioMixerChannelType__Unknown18                                                = 18,
	EAudioMixerChannelType__ChannelTypeCount19                                       = 19,
	EAudioMixerChannelType__DefaultChannel20                                         = 0,
	EAudioMixerChannelType__EAudioMixerChannelType_MAX21                             = 20
};

/// Enum /Script/AudioMixer.EAudioMixerStreamDataFormatType
/// Size: 0x05
enum EAudioMixerStreamDataFormatType : uint8_t
{
	EAudioMixerStreamDataFormatType__Unknown0                                        = 0,
	EAudioMixerStreamDataFormatType__Float1                                          = 1,
	EAudioMixerStreamDataFormatType__Int162                                          = 2,
	EAudioMixerStreamDataFormatType__Unsupported3                                    = 3,
	EAudioMixerStreamDataFormatType__EAudioMixerStreamDataFormatType_MAX4            = 4
};

/// Enum /Script/AudioMixer.ESwapAudioOutputDeviceResultState
/// Size: 0x04
enum ESwapAudioOutputDeviceResultState : uint8_t
{
	ESwapAudioOutputDeviceResultState__Failure0                                      = 0,
	ESwapAudioOutputDeviceResultState__Success1                                      = 1,
	ESwapAudioOutputDeviceResultState__None2                                         = 2,
	ESwapAudioOutputDeviceResultState__ESwapAudioOutputDeviceResultState_MAX3        = 3
};

/// Enum /Script/AudioMixer.ESourceManagerRenderThreadPhase
/// Size: 0x14
enum ESourceManagerRenderThreadPhase : uint8_t
{
	Begin0                                                                           = 0,
	PumpMpscCmds1                                                                    = 1,
	PumpCmds2                                                                        = 2,
	ProcessModulators3                                                               = 3,
	UpdatePendingReleaseData4                                                        = 4,
	GenerateSrcAudio_WithBusses5                                                     = 5,
	ComputeBusses6                                                                   = 6,
	GenerateSrcAudio_WithoutBusses7                                                  = 7,
	UpdateBusses8                                                                    = 8,
	SpatialInterface_OnAllSourcesProcessed9                                          = 9,
	SourceDataOverride_OnAllSourcesProcessed10                                       = 10,
	UpdateGameThreadCopies11                                                         = 11,
	Finished12                                                                       = 12,
	ESourceManagerRenderThreadPhase_MAX13                                            = 13
};

/// Enum /Script/AudioMixer.EMusicalNoteName
/// Size: 0x13
enum EMusicalNoteName : uint8_t
{
	EMusicalNoteName__C0                                                             = 0,
	EMusicalNoteName__Db1                                                            = 1,
	EMusicalNoteName__D2                                                             = 2,
	EMusicalNoteName__Eb3                                                            = 3,
	EMusicalNoteName__E4                                                             = 4,
	EMusicalNoteName__F5                                                             = 5,
	EMusicalNoteName__Gb6                                                            = 6,
	EMusicalNoteName__G7                                                             = 7,
	EMusicalNoteName__Ab8                                                            = 8,
	EMusicalNoteName__A9                                                             = 9,
	EMusicalNoteName__Bb10                                                           = 10,
	EMusicalNoteName__B11                                                            = 11,
	EMusicalNoteName__EMusicalNoteName_MAX12                                         = 12
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsProcessorType
/// Size: 0x07
enum ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor0                                  = 0,
	ESubmixEffectDynamicsProcessorType__Limiter1                                     = 1,
	ESubmixEffectDynamicsProcessorType__Expander2                                    = 2,
	ESubmixEffectDynamicsProcessorType__Gate3                                        = 3,
	ESubmixEffectDynamicsProcessorType__UpwardsCompressor4                           = 4,
	ESubmixEffectDynamicsProcessorType__Count5                                       = 5,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX6      = 6
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsPeakMode
/// Size: 0x05
enum ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared0                                      = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared1                                  = 1,
	ESubmixEffectDynamicsPeakMode__Peak2                                             = 2,
	ESubmixEffectDynamicsPeakMode__Count3                                            = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX4                = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsChannelLinkMode
/// Size: 0x05
enum ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	ESubmixEffectDynamicsChannelLinkMode__Disabled0                                  = 0,
	ESubmixEffectDynamicsChannelLinkMode__Average1                                   = 1,
	ESubmixEffectDynamicsChannelLinkMode__Peak2                                      = 2,
	ESubmixEffectDynamicsChannelLinkMode__Count3                                     = 3,
	ESubmixEffectDynamicsChannelLinkMode__ESubmixEffectDynamicsChannelLinkMode_MAX4  = 4
};

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsKeySource
/// Size: 0x05
enum ESubmixEffectDynamicsKeySource : uint8_t
{
	ESubmixEffectDynamicsKeySource__Default0                                         = 0,
	ESubmixEffectDynamicsKeySource__AudioBus1                                        = 1,
	ESubmixEffectDynamicsKeySource__Submix2                                          = 2,
	ESubmixEffectDynamicsKeySource__Count3                                           = 3,
	ESubmixEffectDynamicsKeySource__ESubmixEffectDynamicsKeySource_MAX4              = 4
};

