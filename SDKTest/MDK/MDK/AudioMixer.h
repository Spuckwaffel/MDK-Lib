
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioMixer.SynthComponent
/// Size: 0x03C0 (0x000290 - 0x000650)
class USynthComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	DMember(bool)                                      bAutoDestroy                                                OFFSET(get<bool>, {0x290, 1, 1, 0})
	DMember(bool)                                      bStopWhenOwnerDestroyed                                     OFFSET(get<bool>, {0x290, 1, 1, 1})
	DMember(bool)                                      bAllowSpatialization                                        OFFSET(get<bool>, {0x290, 1, 1, 2})
	DMember(bool)                                      bOverrideAttenuation                                        OFFSET(get<bool>, {0x290, 1, 1, 3})
	CMember(USoundAttenuation*)                        AttenuationSettings                                         OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FSoundAttenuationSettings)                 AttenuationOverrides                                        OFFSET(getStruct<T>, {0x2A0, 680, 0, 0})
	CMember(USoundConcurrency*)                        ConcurrencySettings                                         OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(USoundClass*)                              SoundClass                                                  OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(USoundEffectSourcePresetChain*)            SourceEffectChain                                           OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(USoundSubmix*)                             SoundSubmix                                                 OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(TArray<FSoundSubmixSendInfo>)              SoundSubmixSends                                            OFFSET(get<T>, {0x568, 16, 0, 0})
	DMember(bool)                                      bIsUISound                                                  OFFSET(get<bool>, {0x578, 1, 1, 0})
	DMember(int32_t)                                   EnvelopeFollowerAttackTime                                  OFFSET(get<int32_t>, {0x57C, 4, 0, 0})
	DMember(int32_t)                                   EnvelopeFollowerReleaseTime                                 OFFSET(get<int32_t>, {0x580, 4, 0, 0})
	CMember(UMulticastDelegate)                        OnAudioEnvelopeValue                                        OFFSET(get<T>, {0x588, 16, 0, 0})
	CMember(USynthSound*)                              Synth                                                       OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UAudioComponent*)                          AudioComponent                                              OFFSET(get<T>, {0x620, 8, 0, 0})


	/// Functions
	// Function /Script/AudioMixer.SynthComponent.Stop
	// void Stop();                                                                                                             // [0x27a0050] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.Start
	// void Start();                                                                                                            // [0x27a0030] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetVolumeMultiplier
	// void SetVolumeMultiplier(float VolumeMultiplier);                                                                        // [0x279ffb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.SetSubmixSend
	// void SetSubmixSend(USoundSubmix* Submix, float SendLevel);                                                               // [0x279fee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SynthComponent.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x279f900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/AudioMixer.AudioMixerBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry
	// void SetBypassSourceEffectChainEntry(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // [0x279fad0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain
	// void RemoveSourceEffectFromPresetChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // [0x279f9e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect
	// void RemoveMasterSubmixEffect(UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);                // [0x279f930] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain
	// int32_t GetNumberOfEntriesInSourceEffectChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain);  // [0x279f840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects
	// void ClearMasterSubmixEffects(UObject* WorldContextObject);                                                              // [0x279f7d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain
	// void AddSourceEffectToPresetChain(UObject* WorldContextObject, USoundEffectSourcePresetChain* PresetChain, FSourceEffectChainEntry Entry); // [0x279f6d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect
	// void AddMasterSubmixEffect(UObject* WorldContextObject, USoundEffectSubmixPreset* SubmixEffectPreset);                   // [0x279f620] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset
/// Size: 0x0078 (0x000040 - 0x0000B8)
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FSubmixEffectDynamicsProcessorSettings)    Settings                                                    OFFSET(getStruct<T>, {0x90, 40, 0, 0})


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
	// void SetSettings(FSubmixEffectDynamicsProcessorSettings& InSettings);                                                    // [0x279fc00] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.SubmixEffectSubmixEQPreset
/// Size: 0x0048 (0x000040 - 0x000088)
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FSubmixEffectSubmixEQSettings)             Settings                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
	// void SetSettings(FSubmixEffectSubmixEQSettings& InSettings);                                                             // [0x279fd60] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.SubmixEffectReverbPreset
/// Size: 0x0088 (0x000040 - 0x0000C8)
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FSubmixEffectReverbSettings)               Settings                                                    OFFSET(getStruct<T>, {0x98, 48, 0, 0})


	/// Functions
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
	// void SetSettingsWithReverbEffect(UReverbEffect* InReverbEffect, float WetLevel);                                         // [0x279fe10] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioMixer.SubmixEffectReverbPreset.SetSettings
	// void SetSettings(FSubmixEffectReverbSettings& InSettings);                                                               // [0x279fcb0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/AudioMixer.SynthSound
/// Size: 0x0020 (0x000290 - 0x0002B0)
class USynthSound : public USoundWaveProcedural
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Struct /Script/AudioMixer.SubmixEffectDynamicsProcessorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FSubmixEffectDynamicsProcessorSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(ESubmixEffectDynamicsProcessorType)        DynamicsProcessorType                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESubmixEffectDynamicsPeakMode)             PeakMode                                                    OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     LookAheadMsec                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AttackTimeMsec                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ReleaseTimeMsec                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ThresholdDb                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     KneeBandwidthDb                                             OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     InputGainDb                                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bChannelLinked                                              OFFSET(get<bool>, {0x24, 1, 1, 0})
	DMember(bool)                                      bAnalogMode                                                 OFFSET(get<bool>, {0x24, 1, 1, 1})
};

/// Struct /Script/AudioMixer.SubmixEffectSubmixEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSubmixEffectSubmixEQSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSubmixEffectEQBand>)               EQBands                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AudioMixer.SubmixEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
class FSubmixEffectEQBand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Bandwidth                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GainDb                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xC, 1, 1, 0})
};

/// Struct /Script/AudioMixer.SubmixEffectReverbSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FSubmixEffectReverbSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     Density                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Diffusion                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Gain                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     GainHF                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DecayHFRatio                                                OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ReflectionsGain                                             OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ReflectionsDelay                                            OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     LateGain                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     LateDelay                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     AirAbsorptionGainHF                                         OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
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

/// Enum /Script/AudioMixer.ESubmixEffectDynamicsProcessorType
/// Size: 0x06
enum ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor0                                  = 0,
	ESubmixEffectDynamicsProcessorType__Limiter1                                     = 1,
	ESubmixEffectDynamicsProcessorType__Expander2                                    = 2,
	ESubmixEffectDynamicsProcessorType__Gate3                                        = 3,
	ESubmixEffectDynamicsProcessorType__Count4                                       = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX5      = 5
};

