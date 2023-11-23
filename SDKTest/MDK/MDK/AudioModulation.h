
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioExtensions
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: WaveTable

/// Class /Script/AudioModulation.AudioModulationStyle
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioModulationStyle : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioModulation.AudioModulationSettings
/// Size: 0x0010 (0x000030 - 0x000040)
class UAudioModulationSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FSoftObjectPath>)                   Parameters                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AudioModulation.AudioModulationStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioModulationStatics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioModulation.SoundModulationGenerator
/// Size: 0x0000 (0x000030 - 0x000030)
class USoundModulationGenerator : public USoundModulatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AudioModulation.SoundModulationGeneratorADEnvelope
/// Size: 0x0018 (0x000030 - 0x000048)
class USoundModulationGeneratorADEnvelope : public USoundModulationGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FSoundModulationADEnvelopeParams)          Params                                                      OFFSET(getStruct<T>, {0x30, 20, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationGeneratorEnvelopeFollower
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundModulationGeneratorEnvelopeFollower : public USoundModulationGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FEnvelopeFollowerGeneratorParams)          Params                                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationGeneratorLFO
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundModulationGeneratorLFO : public USoundModulationGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSoundModulationLFOParams)                 Params                                                      OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Class /Script/AudioModulation.SoundControlBus
/// Size: 0x0030 (0x000030 - 0x000060)
class USoundControlBus : public USoundModulatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   address                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TArray<USoundModulationGenerator*>)        Generators                                                  OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(USoundModulationParameter*)                Parameter                                                   OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/AudioModulation.SoundControlBusMix
/// Size: 0x0018 (0x000028 - 0x000040)
class USoundControlBusMix : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  ProfileIndex                                                OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FSoundControlBusMixStage>)          MixStages                                                   OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/AudioModulation.SoundControlBusMix.SoloMix
	// void SoloMix();                                                                                                          // [0x732ba80] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.SaveMixToProfile
	// void SaveMixToProfile();                                                                                                 // [0x732b9d8] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.LoadMixFromProfile
	// void LoadMixFromProfile();                                                                                               // [0x732b8ac] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.DeactivateMix
	// void DeactivateMix();                                                                                                    // [0x732b3bc] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.DeactivateAllMixes
	// void DeactivateAllMixes();                                                                                               // [0x732b11c] Final|Native|Protected 
	// Function /Script/AudioModulation.SoundControlBusMix.ActivateMix
	// void ActivateMix();                                                                                                      // [0x732a314] Final|Native|Protected 
};

/// Class /Script/AudioModulation.SoundModulationParameter
/// Size: 0x0010 (0x000028 - 0x000038)
class USoundModulationParameter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSoundModulationParameterSettings)         Settings                                                    OFFSET(getStruct<T>, {0x30, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameterScaled
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterScaled : public USoundModulationParameter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     UnitMin                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     UnitMax                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameterFrequencyBase
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundModulationParameterFrequencyBase : public USoundModulationParameter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AudioModulation.SoundModulationParameterFrequency
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterFrequency : public USoundModulationParameterFrequencyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     UnitMin                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     UnitMax                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameterFilterFrequency
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundModulationParameterFilterFrequency : public USoundModulationParameterFrequencyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AudioModulation.SoundModulationParameterLPFFrequency
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundModulationParameterLPFFrequency : public USoundModulationParameterFilterFrequency
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AudioModulation.SoundModulationParameterHPFFrequency
/// Size: 0x0000 (0x000038 - 0x000038)
class USoundModulationParameterHPFFrequency : public USoundModulationParameterFilterFrequency
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/AudioModulation.SoundModulationParameterBipolar
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterBipolar : public USoundModulationParameter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     UnitRange                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameterVolume
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterVolume : public USoundModulationParameter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     MinVolume                                                   OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameterAdditive
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterAdditive : public USoundModulationParameter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     UnitMin                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     UnitMax                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationPatch
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundModulationPatch : public USoundModulatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSoundControlModulationPatch)              PatchSettings                                               OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationWatcher
/// Size: 0x0018 (0x000028 - 0x000040)
class USoundModulationWatcher : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(USoundModulatorBase*)                      Modulator                                                   OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Script/AudioModulation.SoundModulationWatcher.SetModulator
	// bool SetModulator(USoundModulatorBase* InModulator);                                                                     // [0x732b9f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AudioModulation.SoundModulationWatcher.GetValue
	// float GetValue();                                                                                                        // [0x732b694] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioModulation.SoundModulationWatcher.GetModulator
	// USoundModulatorBase* GetModulator();                                                                                     // [0x732b458] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AudioModulation.SoundModulationWatcher.ClearModulator
	// bool ClearModulator();                                                                                                   // [0x732a4fc] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/AudioModulation.SoundModulationADEnvelopeParams
/// Size: 0x0014 (0x000000 - 0x000014)
class FSoundModulationADEnvelopeParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     AttackTime                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AttackCurve                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DecayCurve                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/AudioModulation.EnvelopeFollowerGeneratorParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FEnvelopeFollowerGeneratorParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bInvert                                                     OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(UAudioBus*)                                AudioBus                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Gain                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AttackTime                                                  OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationLFOParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoundModulationLFOParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ESoundModulationLFOShape)                  Shape                                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ExponentialFactor                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Amplitude                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Offset                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Phase                                                       OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0x1D, 1, 0, 0})
};

/// Struct /Script/AudioModulation.SoundControlBusMixStage
/// Size: 0x0028 (0x000000 - 0x000028)
class FSoundControlBusMixStage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(USoundControlBus*)                         Bus                                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSoundModulationMixValue)                  Value                                                       OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationMixValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoundModulationMixValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     TargetValue                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AttackTime                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationParameterSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FSoundModulationParameterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     ValueNormalized                                             OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationTransform
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class FSoundModulationTransform : public FWaveTableTransform
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/AudioModulation.SoundControlModulationInput
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FSoundControlModulationInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bSampleAndHold                                              OFFSET(get<bool>, {0x0, 1, 1, 0})
	SMember(FSoundModulationTransform)                 Transform                                                   OFFSET(getStruct<T>, {0x8, 184, 0, 0})
	CMember(USoundControlBus*)                         Bus                                                         OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Struct /Script/AudioModulation.SoundControlModulationPatch
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoundControlModulationPatch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(USoundModulationParameter*)                OutputParameter                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FSoundControlModulationInput>)      Inputs                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/AudioModulation.ESoundModulationLFOShape
/// Size: 0x09
enum ESoundModulationLFOShape : uint8_t
{
	ESoundModulationLFOShape__Sine0                                                  = 0,
	ESoundModulationLFOShape__UpSaw1                                                 = 1,
	ESoundModulationLFOShape__DownSaw2                                               = 2,
	ESoundModulationLFOShape__Square3                                                = 3,
	ESoundModulationLFOShape__Triangle4                                              = 4,
	ESoundModulationLFOShape__Exponential5                                           = 5,
	ESoundModulationLFOShape__RandomSampleHold6                                      = 6,
	ESoundModulationLFOShape__COUNT7                                                 = 7,
	ESoundModulationLFOShape__ESoundModulationLFOShape_MAX8                          = 8
};

