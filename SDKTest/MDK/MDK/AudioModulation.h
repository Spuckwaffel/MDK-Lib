
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
	CMember(TArray<FSoftObjectPath>)                   Parameters                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
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
	SMember(FSoundModulationADEnvelopeParams)          Params                                                      ___ OFFSET(get<T>, {0x30, 20, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationGeneratorEnvelopeFollower
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundModulationGeneratorEnvelopeFollower : public USoundModulationGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FEnvelopeFollowerGeneratorParams)          Params                                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationGeneratorLFO
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundModulationGeneratorLFO : public USoundModulationGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSoundModulationLFOParams)                 Params                                                      ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/AudioModulation.SoundControlBus
/// Size: 0x0030 (0x000030 - 0x000060)
class USoundControlBus : public USoundModulatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bBypass                                                     ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	SMember(FString)                                   Address                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<USoundModulationGenerator*>)        Generators                                                  ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(USoundModulationParameter*)                Parameter                                                   ___ OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/AudioModulation.SoundControlBusMix
/// Size: 0x0018 (0x000028 - 0x000040)
class USoundControlBusMix : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  ProfileIndex                                                ___ OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FSoundControlBusMixStage>)          MixStages                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameter
/// Size: 0x0010 (0x000028 - 0x000038)
class USoundModulationParameter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FSoundModulationParameterSettings)         Settings                                                    ___ OFFSET(get<T>, {0x30, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameterScaled
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterScaled : public USoundModulationParameter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     UnitMin                                                     ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     UnitMax                                                     ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
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
	DMember(float)                                     UnitMin                                                     ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     UnitMax                                                     ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
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
	DMember(float)                                     UnitRange                                                   ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationParameterVolume
/// Size: 0x0008 (0x000038 - 0x000040)
class USoundModulationParameterVolume : public USoundModulationParameter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     MinVolume                                                   ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/AudioModulation.SoundModulationPatch
/// Size: 0x0020 (0x000030 - 0x000050)
class USoundModulationPatch : public USoundModulatorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSoundControlModulationPatch)              PatchSettings                                               ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationADEnvelopeParams
/// Size: 0x0014 (0x000000 - 0x000014)
class FSoundModulationADEnvelopeParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     AttackTime                                                  ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AttackCurve                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DecayCurve                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bBypass                                                     ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/AudioModulation.EnvelopeFollowerGeneratorParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FEnvelopeFollowerGeneratorParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bBypass                                                     ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bInvert                                                     ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(UAudioBus*)                                AudioBus                                                    ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     Gain                                                        ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AttackTime                                                  ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationLFOParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoundModulationLFOParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ESoundModulationLFOShape)                  Shape                                                       ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ExponentialFactor                                           ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Width                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Amplitude                                                   ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Offset                                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Phase                                                       ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(bool)                                      bLooping                                                    ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(bool)                                      bBypass                                                     ___ OFFSET(get<bool>, {0x1D, 1, 0, 0})
};

/// Struct /Script/AudioModulation.SoundControlBusMixStage
/// Size: 0x0028 (0x000000 - 0x000028)
class FSoundControlBusMixStage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(USoundControlBus*)                         Bus                                                         ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FSoundModulationMixValue)                  Value                                                       ___ OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationMixValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoundModulationMixValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     TargetValue                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AttackTime                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationParameterSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FSoundModulationParameterSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     ValueNormalized                                             ___ OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/AudioModulation.SoundModulationTransform
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class FSoundModulationTransform : public FWaveTableTransform
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/AudioModulation.SoundControlModulationInput
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FSoundControlModulationInput : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(bool)                                      bSampleAndHold                                              ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	SMember(FSoundModulationTransform)                 Transform                                                   ___ OFFSET(get<T>, {0x8, 184, 0, 0})
	CMember(USoundControlBus*)                         Bus                                                         ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Struct /Script/AudioModulation.SoundControlModulationPatch
/// Size: 0x0020 (0x000000 - 0x000020)
class FSoundControlModulationPatch : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bBypass                                                     ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(USoundModulationParameter*)                OutputParameter                                             ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FSoundControlModulationInput>)      Inputs                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
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

