/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Synthesis.

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (0x000000 - 0x000008)
class FSynth1PatchCable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Depth                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(ESynth1PatchDestination)                   Destination                                                 ___ OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (0x000000 - 0x000004)
class FPatchId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ID                                                          ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (0x000000 - 0x000018)
class FEpicSynth1Patch : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ESynth1PatchSource)                        PatchSource                                                 ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FSynth1PatchCable>)                 PatchCables                                                 ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FModularSynthPreset : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bEnablePolyphony                                            ___ OFFSET(get<bool>, {0x8, 1, 1, 0})
	CMember(ESynth1OscType)                            Osc1Type                                                    ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     Osc1Gain                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Osc1Octave                                                  ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Osc1Semitones                                               ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Osc1Cents                                                   ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Osc1PulseWidth                                              ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(ESynth1OscType)                            Osc2Type                                                    ___ OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(float)                                     Osc2Gain                                                    ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Osc2Octave                                                  ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Osc2Semitones                                               ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Osc2Cents                                                   ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Osc2PulseWidth                                              ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Portamento                                                  ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bEnableUnison                                               ___ OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bEnableOscillatorSync                                       ___ OFFSET(get<bool>, {0x40, 1, 1, 1})
	DMember(float)                                     Spread                                                      ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Pan                                                         ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     LFO1Frequency                                               ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     LFO1Gain                                                    ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(ESynthLFOType)                             LFO1Type                                                    ___ OFFSET(get<T>, {0x54, 1, 0, 0})
	CMember(ESynthLFOMode)                             LFO1Mode                                                    ___ OFFSET(get<T>, {0x55, 1, 0, 0})
	CMember(ESynthLFOPatchType)                        LFO1PatchType                                               ___ OFFSET(get<T>, {0x56, 1, 0, 0})
	DMember(float)                                     LFO2Frequency                                               ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LFO2Gain                                                    ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(ESynthLFOType)                             LFO2Type                                                    ___ OFFSET(get<T>, {0x60, 1, 0, 0})
	CMember(ESynthLFOMode)                             LFO2Mode                                                    ___ OFFSET(get<T>, {0x61, 1, 0, 0})
	CMember(ESynthLFOPatchType)                        LFO2PatchType                                               ___ OFFSET(get<T>, {0x62, 1, 0, 0})
	DMember(float)                                     GainDb                                                      ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     AttackTime                                                  ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     SustainGain                                                 ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	CMember(ESynthModEnvPatch)                         ModEnvPatchType                                             ___ OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(ESynthModEnvBiasPatch)                     ModEnvBiasPatchType                                         ___ OFFSET(get<T>, {0x79, 1, 0, 0})
	DMember(bool)                                      bInvertModulationEnvelope                                   ___ OFFSET(get<bool>, {0x7C, 1, 1, 0})
	DMember(bool)                                      bInvertModulationEnvelopeBias                               ___ OFFSET(get<bool>, {0x7C, 1, 1, 1})
	DMember(float)                                     ModulationEnvelopeDepth                                     ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     ModulationEnvelopeAttackTime                                ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     ModulationEnvelopeDecayTime                                 ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     ModulationEnvelopeSustainGain                               ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     ModulationEnvelopeReleaseTime                               ___ OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bLegato                                                     ___ OFFSET(get<bool>, {0x94, 1, 1, 0})
	DMember(bool)                                      bRetrigger                                                  ___ OFFSET(get<bool>, {0x94, 1, 1, 1})
	DMember(float)                                     FilterFrequency                                             ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	CMember(ESynthFilterType)                          FilterType                                                  ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(ESynthFilterAlgorithm)                     FilterAlgorithm                                             ___ OFFSET(get<T>, {0xA1, 1, 0, 0})
	DMember(bool)                                      bStereoDelayEnabled                                         ___ OFFSET(get<bool>, {0xA4, 1, 1, 0})
	CMember(ESynthStereoDelayMode)                     StereoDelayMode                                             ___ OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(float)                                     StereoDelayTime                                             ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     StereoDelayFeedback                                         ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     StereoDelayWetlevel                                         ___ OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     StereoDelayRatio                                            ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bChorusEnabled                                              ___ OFFSET(get<bool>, {0xBC, 1, 1, 0})
	DMember(float)                                     ChorusDepth                                                 ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     ChorusFeedback                                              ___ OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     ChorusFrequency                                             ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(TArray<FEpicSynth1Patch>)                  Patches                                                     ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FModularSynthPresetBankEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   PresetName                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FModularSynthPreset)                       Preset                                                      ___ OFFSET(get<T>, {0x10, 224, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherBaseSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSourceEffectBitCrusherBaseSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     SampleRate                                                  ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     BitDepth                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FSourceEffectBitCrusherSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     CrushedSampleRate                                           ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FSoundModulationDestinationSettings)       SampleRateModulation                                        ___ OFFSET(get<T>, {0x8, 88, 0, 0})
	DMember(float)                                     CrushedBits                                                 ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FSoundModulationDestinationSettings)       BitModulation                                               ___ OFFSET(get<T>, {0x68, 88, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectChorusBaseSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FSourceEffectChorusBaseSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Depth                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Spread                                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0228 (0x000000 - 0x000228)
class FSourceEffectChorusSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	DMember(float)                                     Depth                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Spread                                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FSoundModulationDestinationSettings)       DepthModulation                                             ___ OFFSET(get<T>, {0x18, 88, 0, 0})
	SMember(FSoundModulationDestinationSettings)       FrequencyModulation                                         ___ OFFSET(get<T>, {0x70, 88, 0, 0})
	SMember(FSoundModulationDestinationSettings)       FeedbackModulation                                          ___ OFFSET(get<T>, {0xC8, 88, 0, 0})
	SMember(FSoundModulationDestinationSettings)       WetModulation                                               ___ OFFSET(get<T>, {0x120, 88, 0, 0})
	SMember(FSoundModulationDestinationSettings)       DryModulation                                               ___ OFFSET(get<T>, {0x178, 88, 0, 0})
	SMember(FSoundModulationDestinationSettings)       SpreadModulation                                            ___ OFFSET(get<T>, {0x1D0, 88, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectConvolutionReverbSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSourceEffectConvolutionReverbSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     NormalizationVolumeDb                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     WetVolumeDb                                                 ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DryVolumeDb                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bBypass                                                     ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FSourceEffectDynamicsProcessorSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(ESourceEffectDynamicsProcessorType)        DynamicsProcessorType                                       ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESourceEffectDynamicsPeakMode)             PeakMode                                                    ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     LookAheadMsec                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AttackTimeMsec                                              ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ReleaseTimeMsec                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ThresholdDb                                                 ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Ratio                                                       ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     KneeBandwidthDb                                             ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     InputGainDb                                                 ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bStereoLinked                                               ___ OFFSET(get<bool>, {0x24, 1, 1, 0})
	DMember(bool)                                      bAnalogMode                                                 ___ OFFSET(get<bool>, {0x24, 1, 1, 1})
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSourceEffectEnvelopeFollowerSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     AttackTime                                                  ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EEnvelopeFollowerPeakMode)                 PeakMode                                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      bIsAnalogMode                                               ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
class FSourceEffectEQBand : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Bandwidth                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GainDb                                                      ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0xC, 1, 1, 0})
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSourceEffectEQSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSourceEffectEQBand>)               EQBands                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FSourceEffectFilterAudioBusModulationSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UAudioBus*)                                AudioBus                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   EnvelopeFollowerAttackTimeMsec                              ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   EnvelopeFollowerReleaseTimeMsec                             ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     EnvelopeGainMultiplier                                      ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(ESourceEffectFilterParam)                  FilterParam                                                 ___ OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(float)                                     MinFrequencyModulation                                      ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxFrequencyModulation                                      ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinResonanceModulation                                      ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaxResonanceModulation                                      ___ OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FSourceEffectFilterSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ESourceEffectFilterCircuit)                FilterCircuit                                               ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESourceEffectFilterType)                   FilterType                                                  ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     CutoffFrequency                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TArray<FSourceEffectFilterAudioBusModulationSettings>) AudioBusModulation                              ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSourceEffectFoldbackDistortionSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     InputGainDb                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ThresholdDb                                                 ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSourceEffectMidSideSpreaderSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     SpreadAmount                                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(EStereoChannelMode)                        InputMode                                                   ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EStereoChannelMode)                        OutputMode                                                  ___ OFFSET(get<T>, {0x5, 1, 0, 0})
	DMember(bool)                                      bEqualPower                                                 ___ OFFSET(get<bool>, {0x6, 1, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectIndividualFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSourceEffectIndividualFilterSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ESourceEffectMotionFilterCircuit)          FilterCircuit                                               ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESourceEffectMotionFilterType)             FilterType                                                  ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     CutoffFrequency                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectMotionFilterModulationSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FSourceEffectMotionFilterModulationSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ESourceEffectMotionFilterModSource)        ModulationSource                                            ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector2D)                                 ModulationInputRange                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 ModulationOutputMinimumRange                                ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FVector2D)                                 ModulationOutputMaximumRange                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(float)                                     UpdateEaseMS                                                ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectMotionFilterSettings
/// Size: 0x0078 (0x000000 - 0x000078)
class FSourceEffectMotionFilterSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(ESourceEffectMotionFilterTopology)         MotionFilterTopology                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     MotionFilterMix                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FSourceEffectIndividualFilterSettings)     FilterASettings                                             ___ OFFSET(get<T>, {0x8, 12, 0, 0})
	SMember(FSourceEffectIndividualFilterSettings)     FilterBSettings                                             ___ OFFSET(get<T>, {0x14, 12, 0, 0})
	CMember(TMap<ESourceEffectMotionFilterModDestination, FSourceEffectMotionFilterModulationSettings>) ModulationMappings ___ OFFSET(get<T>, {0x20, 80, 0, 0})
	DMember(float)                                     DryVolumeDb                                                 ___ OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSourceEffectPannerSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Spread                                                      ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Pan                                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSourceEffectPhaserSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     WetLevel                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EPhaserLFOType)                            LFOType                                                     ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(bool)                                      UseQuadraturePhase                                          ___ OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FSourceEffectRingModulationSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ERingModulatorTypeSourceEffect)            ModulatorType                                               ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Depth                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(UAudioBus*)                                AudioBusModulator                                           ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FSourceEffectSimpleDelaySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     SpeedOfSound                                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DelayAmount                                                 ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DryAmount                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WetAmount                                                   ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Feedback                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bDelayBasedOnDistance                                       ___ OFFSET(get<bool>, {0x14, 1, 1, 0})
	DMember(bool)                                      bUseDistanceOverride                                        ___ OFFSET(get<bool>, {0x14, 1, 1, 1})
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FSourceEffectStereoDelaySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(EStereoDelaySourceEffect)                  DelayMode                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     DelayTimeMsec                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DelayRatio                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bFilterEnabled                                              ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(EStereoDelayFiltertype)                    FilterType                                                  ___ OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(float)                                     FilterFrequency                                             ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSourceEffectWaveShaperSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Amount                                                      ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FSubmixEffectConvolutionReverbSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     NormalizationVolumeDb                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     WetVolumeDb                                                 ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DryVolumeDb                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bBypass                                                     ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bMixInputChannelFormatToImpulseResponseFormat               ___ OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(bool)                                      bMixReverbOutputToOutputChannelFormat                       ___ OFFSET(get<bool>, {0xE, 1, 0, 0})
	DMember(float)                                     SurroundRearChannelBleedDb                                  ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bInvertRearChannelBleedPhase                                ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bSurroundRearChannelFlip                                    ___ OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(float)                                     SurroundRearChannelBleedAmount                              ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(UAudioImpulseResponse*)                    ImpulseResponse                                             ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      AllowHardwareAcceleration                                   ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSubmixEffectDelaySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MaximumDelayLength                                          ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     InterpolationTime                                           ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DelayLength                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSubmixEffectFilterSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ESubmixFilterType)                         FilterType                                                  ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESubmixFilterAlgorithm)                    FilterAlgorithm                                             ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     FilterFrequency                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSubmixEffectFlexiverbSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     PreDelay                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RoomDampening                                               ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Complexity                                                  ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Synthesis.DynamicsBandSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FDynamicsBandSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     CrossoverTopFrequency                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AttackTimeMsec                                              ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ReleaseTimeMsec                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ThresholdDb                                                 ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Ratio                                                       ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     KneeBandwidthDb                                             ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     InputGainDb                                                 ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectMultibandCompressorSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FSubmixEffectMultibandCompressorSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(ESubmixEffectDynamicsProcessorType)        DynamicsProcessorType                                       ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESubmixEffectDynamicsPeakMode)             PeakMode                                                    ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ESubmixEffectDynamicsChannelLinkMode)      LinkMode                                                    ___ OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(float)                                     LookAheadMsec                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bAnalogMode                                                 ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bFourPole                                                   ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bBypass                                                     ___ OFFSET(get<bool>, {0xA, 1, 0, 0})
	CMember(ESubmixEffectDynamicsKeySource)            KeySource                                                   ___ OFFSET(get<T>, {0xB, 1, 0, 0})
	CMember(UAudioBus*)                                ExternalAudioBus                                            ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(USoundSubmix*)                             ExternalSubmix                                              ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(float)                                     KeyGainDb                                                   ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bKeyAudition                                                ___ OFFSET(get<bool>, {0x24, 1, 0, 0})
	CMember(TArray<FDynamicsBandSettings>)             Bands                                                       ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectStereoDelaySettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FSubmixEffectStereoDelaySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(EStereoDelaySourceEffect)                  DelayMode                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     DelayTimeMsec                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DelayRatio                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bFilterEnabled                                              ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(EStereoDelayFiltertype)                    FilterType                                                  ___ OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(float)                                     FilterFrequency                                             ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectStereoToQuadSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSubmixEffectStereoToQuadSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bFlipChannels                                               ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     RearChannelGain                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FTapDelayInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ETapLineMode)                              TapLineMode                                                 ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     DelayLength                                                 ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Gain                                                        ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   OutputChannel                                               ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     PanInDegrees                                                ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   TapId                                                       ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FSubmixEffectTapDelaySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     MaximumDelayLength                                          ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     InterpolationTime                                           ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TArray<FTapDelayInfo>)                     Taps                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x03D8 (0x000008 - 0x0003E0)
class FSynth2DSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FSlateBrush)                               NormalThumbImage                                            ___ OFFSET(get<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               DisabledThumbImage                                          ___ OFFSET(get<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               NormalBarImage                                              ___ OFFSET(get<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               DisabledBarImage                                            ___ OFFSET(get<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundImage                                             ___ OFFSET(get<T>, {0x310, 192, 0, 0})
	DMember(float)                                     BarThickness                                                ___ OFFSET(get<float>, {0x3D0, 4, 0, 0})
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0318 (0x000008 - 0x000320)
class FSynthKnobStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FSlateBrush)                               LargeKnob                                                   ___ OFFSET(get<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               LargeKnobOverlay                                            ___ OFFSET(get<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               MediumKnob                                                  ___ OFFSET(get<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               MediumKnobOverlay                                           ___ OFFSET(get<T>, {0x250, 192, 0, 0})
	DMember(float)                                     MinValueAngle                                               ___ OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(float)                                     MaxValueAngle                                               ___ OFFSET(get<float>, {0x314, 4, 0, 0})
	CMember(ESynthKnobSize)                            KnobSize                                                    ___ OFFSET(get<T>, {0x318, 1, 0, 0})
};

/// Struct /Script/Synthesis.SynthSlateStyle
/// Size: 0x0008 (0x000008 - 0x000010)
class FSynthSlateStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ESynthSlateSizeType)                       SizeType                                                    ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(ESynthSlateColorStyle)                     ColorStyle                                                  ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0030 (0x000028 - 0x000058)
class UAudioImpulseResponse : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<float>)                             ImpulseResponse                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   NumChannels                                                 ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     NormalizationVolumeDb                                       ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bTrueStereo                                                 ___ OFFSET(get<bool>, {0x44, 1, 0, 0})
	CMember(TArray<float>)                             IRData                                                      ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0010 (0x000028 - 0x000038)
class UModularSynthPresetBank : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FModularSynthPresetBankEntry>)      Presets                                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Synthesis.ModularSynthLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Synthesis.ModularSynthComponent
/// Size: 0x06D0 (0x000900 - 0x000FD0)
class UModularSynthComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4048;

public:
	DMember(int32_t)                                   VoiceCount                                                  ___ OFFSET(get<int32_t>, {0x900, 4, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x01A8 (0x000068 - 0x000210)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSourceEffectBitCrusherSettings)           Settings                                                    ___ OFFSET(get<T>, {0x150, 192, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectChorusPreset
/// Size: 0x0478 (0x000068 - 0x0004E0)
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	SMember(FSourceEffectChorusSettings)               Settings                                                    ___ OFFSET(get<T>, {0x2B8, 552, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectConvolutionReverbPreset
/// Size: 0x0058 (0x000068 - 0x0000C0)
class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UAudioImpulseResponse*)                    ImpulseResponse                                             ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FSourceEffectConvolutionReverbSettings)    Settings                                                    ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(ESubmixEffectConvolutionReverbBlockSize)   BlockSize                                                   ___ OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(bool)                                      bEnableHardwareAcceleration                                 ___ OFFSET(get<bool>, {0x81, 1, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x0078 (0x000068 - 0x0000E0)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FSourceEffectDynamicsProcessorSettings)    Settings                                                    ___ OFFSET(get<T>, {0xB8, 40, 0, 0})
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UEnvelopeFollowerListener : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMulticastInlineDelegate)                  OnEnvelopeFollowerUpdate                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSourceEffectEnvelopeFollowerSettings)     Settings                                                    ___ OFFSET(get<T>, {0x9C, 12, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USourceEffectEQPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSourceEffectEQSettings)                   Settings                                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x0068 (0x000068 - 0x0000D0)
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSourceEffectFilterSettings)               Settings                                                    ___ OFFSET(get<T>, {0xB0, 32, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSourceEffectFoldbackDistortionSettings)   Settings                                                    ___ OFFSET(get<T>, {0x9C, 12, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSourceEffectMidSideSpreaderSettings)      Settings                                                    ___ OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectMotionFilterPreset
/// Size: 0x0118 (0x000068 - 0x000180)
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FSourceEffectMotionFilterSettings)         Settings                                                    ___ OFFSET(get<T>, {0x108, 120, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSourceEffectPannerSettings)               Settings                                                    ___ OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSourceEffectPhaserSettings)               Settings                                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x0068 (0x000068 - 0x0000D0)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSourceEffectRingModulationSettings)       Settings                                                    ___ OFFSET(get<T>, {0xB0, 32, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x0058 (0x000068 - 0x0000C0)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FSourceEffectSimpleDelaySettings)          Settings                                                    ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FSourceEffectStereoDelaySettings)          Settings                                                    ___ OFFSET(get<T>, {0xB4, 36, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSourceEffectWaveShaperSettings)           Settings                                                    ___ OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x0098 (0x000068 - 0x000100)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(UAudioImpulseResponse*)                    ImpulseResponse                                             ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FSubmixEffectConvolutionReverbSettings)    Settings                                                    ___ OFFSET(get<T>, {0x70, 48, 0, 0})
	CMember(ESubmixEffectConvolutionReverbBlockSize)   BlockSize                                                   ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bEnableHardwareAcceleration                                 ___ OFFSET(get<bool>, {0xA1, 1, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectDelayStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Synthesis.SubmixEffectDelayPreset
/// Size: 0x0050 (0x000068 - 0x0000B8)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FSubmixEffectDelaySettings)                Settings                                                    ___ OFFSET(get<T>, {0x9C, 12, 0, 0})
	SMember(FSubmixEffectDelaySettings)                DynamicSettings                                             ___ OFFSET(get<T>, {0xA8, 12, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSubmixEffectFilterSettings)               Settings                                                    ___ OFFSET(get<T>, {0x9C, 12, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSubmixEffectFlexiverbSettings)            Settings                                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset
/// Size: 0x0098 (0x000068 - 0x000100)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FSubmixEffectMultibandCompressorSettings)  Settings                                                    ___ OFFSET(get<T>, {0xC8, 56, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectStereoDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FSubmixEffectStereoDelaySettings)          Settings                                                    ___ OFFSET(get<T>, {0xB4, 36, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectStereoToQuadPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSubmixEffectStereoToQuadSettings)         Settings                                                    ___ OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FSubmixEffectTapDelaySettings)             Settings                                                    ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x03E0 (0x000900 - 0x000CE0)
class UGranularSynth : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3296;

public:
	CMember(USoundWave*)                               GranulatedSoundWave                                         ___ OFFSET(get<T>, {0x900, 8, 0, 0})
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0148 (0x000028 - 0x000170)
class UMonoWaveTableSynthPreset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FString)                                   PresetName                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bLockKeyframesToGridBool                                    ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(int32_t)                                   LockKeyframesToGrid                                         ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   WaveTableResolution                                         ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TArray<FRuntimeFloatCurve>)                WaveTable                                                   ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bNormalizeWaveTables                                        ___ OFFSET(get<bool>, {0x58, 1, 1, 0})
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0750 (0x000900 - 0x001050)
class USynthComponentMonoWaveTable : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4176;

public:
	SMember(FMulticastInlineDelegate)                  OnTableAltered                                              ___ OFFSET(get<T>, {0x900, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNumTablesChanged                                          ___ OFFSET(get<T>, {0x910, 16, 0, 0})
	CMember(UMonoWaveTableSynthPreset*)                CurrentPreset                                               ___ OFFSET(get<T>, {0x920, 8, 0, 0})
};

/// Class /Script/Synthesis.SynthComponentToneGenerator
/// Size: 0x00F0 (0x000900 - 0x0009F0)
class USynthComponentToneGenerator : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2544;

public:
	DMember(float)                                     Frequency                                                   ___ OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(float)                                     Volume                                                      ___ OFFSET(get<float>, {0x904, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        DistanceAttenuationCurve                                    ___ OFFSET(get<T>, {0x908, 136, 0, 0})
	SMember(FVector2D)                                 DistanceRange                                               ___ OFFSET(get<T>, {0x990, 16, 0, 0})
	DMember(float)                                     AttenuationDbAtMaxRange                                     ___ OFFSET(get<float>, {0x9A0, 4, 0, 0})
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x0130 (0x000900 - 0x000A30)
class USynthSamplePlayer : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2608;

public:
	CMember(USoundWave*)                               SoundWave                                                   ___ OFFSET(get<T>, {0x900, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSampleLoaded                                              ___ OFFSET(get<T>, {0x908, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSamplePlaybackProgress                                    ___ OFFSET(get<T>, {0x918, 16, 0, 0})
};

/// Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Synthesis.Synth2DSlider
/// Size: 0x0498 (0x000178 - 0x000610)
class USynth2DSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	DMember(float)                                     ValueX                                                      ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     ValueY                                                      ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueXDelegate                                              ___ OFFSET(get<T>, {0x180, 12, 0, 0})
	SMember(FDelegateProperty)                         ValueYDelegate                                              ___ OFFSET(get<T>, {0x18C, 12, 0, 0})
	SMember(FSynth2DSliderStyle)                       WidgetStyle                                                 ___ OFFSET(get<T>, {0x1A0, 992, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           ___ OFFSET(get<T>, {0x580, 16, 0, 0})
	DMember(bool)                                      IndentHandle                                                ___ OFFSET(get<bool>, {0x590, 1, 0, 0})
	DMember(bool)                                      Locked                                                      ___ OFFSET(get<bool>, {0x591, 1, 0, 0})
	DMember(float)                                     StepSize                                                    ___ OFFSET(get<float>, {0x594, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 ___ OFFSET(get<bool>, {0x598, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureBegin                                         ___ OFFSET(get<T>, {0x5A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureEnd                                           ___ OFFSET(get<T>, {0x5B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureBegin                                    ___ OFFSET(get<T>, {0x5C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureEnd                                      ___ OFFSET(get<T>, {0x5D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChangedX                                             ___ OFFSET(get<T>, {0x5E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChangedY                                             ___ OFFSET(get<T>, {0x5F0, 16, 0, 0})
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x03E8 (0x000178 - 0x000560)
class USynthKnob : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     StepSize                                                    ___ OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     MouseSpeed                                                  ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     MouseFineTuneSpeed                                          ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(bool)                                      ShowTooltipInfo                                             ___ OFFSET(get<bool>, {0x188, 1, 1, 0})
	SMember(FText)                                     ParameterName                                               ___ OFFSET(get<T>, {0x190, 24, 0, 0})
	SMember(FText)                                     ParameterUnits                                              ___ OFFSET(get<T>, {0x1A8, 24, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               ___ OFFSET(get<T>, {0x1C0, 12, 0, 0})
	SMember(FSynthKnobStyle)                           WidgetStyle                                                 ___ OFFSET(get<T>, {0x1D0, 800, 0, 0})
	DMember(bool)                                      Locked                                                      ___ OFFSET(get<bool>, {0x4F0, 1, 0, 0})
	DMember(bool)                                      IsFocusable                                                 ___ OFFSET(get<bool>, {0x4F1, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureBegin                                         ___ OFFSET(get<T>, {0x4F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureEnd                                           ___ OFFSET(get<T>, {0x508, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureBegin                                    ___ OFFSET(get<T>, {0x518, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureEnd                                      ___ OFFSET(get<T>, {0x528, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              ___ OFFSET(get<T>, {0x538, 16, 0, 0})
};

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x07
enum ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine0                                                            = 0,
	ESynth1OscType__Saw1                                                             = 1,
	ESynth1OscType__Triangle2                                                        = 2,
	ESynth1OscType__Square3                                                          = 3,
	ESynth1OscType__Noise4                                                           = 4,
	ESynth1OscType__Count5                                                           = 5,
	ESynth1OscType__ESynth1OscType_MAX6                                              = 6
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x09
enum ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine0                                                             = 0,
	ESynthLFOType__UpSaw1                                                            = 1,
	ESynthLFOType__DownSaw2                                                          = 2,
	ESynthLFOType__Square3                                                           = 3,
	ESynthLFOType__Triangle4                                                         = 4,
	ESynthLFOType__Exponential5                                                      = 5,
	ESynthLFOType__RandomSampleHold6                                                 = 6,
	ESynthLFOType__Count7                                                            = 7,
	ESynthLFOType__ESynthLFOType_MAX8                                                = 8
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x05
enum ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync0                                                             = 0,
	ESynthLFOMode__OneShot1                                                          = 1,
	ESynthLFOMode__Free2                                                             = 2,
	ESynthLFOMode__Count3                                                            = 3,
	ESynthLFOMode__ESynthLFOMode_MAX4                                                = 4
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x11
enum ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone0                                                 = 0,
	ESynthLFOPatchType__PatchToGain1                                                 = 1,
	ESynthLFOPatchType__PatchToOscFreq2                                              = 2,
	ESynthLFOPatchType__PatchToFilterFreq3                                           = 3,
	ESynthLFOPatchType__PatchToFilterQ4                                              = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth5                                        = 5,
	ESynthLFOPatchType__PatchToOscPan6                                               = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency7                                    = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain8                                         = 8,
	ESynthLFOPatchType__Count9                                                       = 9,
	ESynthLFOPatchType__ESynthLFOPatchType_MAX10                                     = 10
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x10
enum ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone0                                                  = 0,
	ESynthModEnvPatch__PatchToOscFreq1                                               = 1,
	ESynthModEnvPatch__PatchToFilterFreq2                                            = 2,
	ESynthModEnvPatch__PatchToFilterQ3                                               = 3,
	ESynthModEnvPatch__PatchToLFO1Gain4                                              = 4,
	ESynthModEnvPatch__PatchToLFO2Gain5                                              = 5,
	ESynthModEnvPatch__PatchToLFO1Freq6                                              = 6,
	ESynthModEnvPatch__PatchToLFO2Freq7                                              = 7,
	ESynthModEnvPatch__Count8                                                        = 8,
	ESynthModEnvPatch__ESynthModEnvPatch_MAX9                                        = 9
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x10
enum ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone0                                              = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq1                                           = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq2                                        = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ3                                           = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain4                                          = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain5                                          = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq6                                          = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq7                                          = 7,
	ESynthModEnvBiasPatch__Count8                                                    = 8,
	ESynthModEnvBiasPatch__ESynthModEnvBiasPatch_MAX9                                = 9
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x06
enum ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass0                                                       = 0,
	ESynthFilterType__HighPass1                                                      = 1,
	ESynthFilterType__BandPass2                                                      = 2,
	ESynthFilterType__BandStop3                                                      = 3,
	ESynthFilterType__Count4                                                         = 4,
	ESynthFilterType__ESynthFilterType_MAX5                                          = 5
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x05
enum ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole0                                                  = 0,
	ESynthFilterAlgorithm__StateVariable1                                            = 1,
	ESynthFilterAlgorithm__Ladder2                                                   = 2,
	ESynthFilterAlgorithm__Count3                                                    = 3,
	ESynthFilterAlgorithm__ESynthFilterAlgorithm_MAX4                                = 4
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x05
enum ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal0                                                   = 0,
	ESynthStereoDelayMode__Cross1                                                    = 1,
	ESynthStereoDelayMode__PingPong2                                                 = 2,
	ESynthStereoDelayMode__Count3                                                    = 3,
	ESynthStereoDelayMode__ESynthStereoDelayMode_MAX4                                = 4
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x06
enum ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO10                                                        = 0,
	ESynth1PatchSource__LFO21                                                        = 1,
	ESynth1PatchSource__Envelope2                                                    = 2,
	ESynth1PatchSource__BiasEnvelope3                                                = 3,
	ESynth1PatchSource__Count4                                                       = 4,
	ESynth1PatchSource__ESynth1PatchSource_MAX5                                      = 5
};

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x16
enum ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain0                                               = 0,
	ESynth1PatchDestination__Osc1Frequency1                                          = 1,
	ESynth1PatchDestination__Osc1Pulsewidth2                                         = 2,
	ESynth1PatchDestination__Osc2Gain3                                               = 3,
	ESynth1PatchDestination__Osc2Frequency4                                          = 4,
	ESynth1PatchDestination__Osc2Pulsewidth5                                         = 5,
	ESynth1PatchDestination__FilterFrequency6                                        = 6,
	ESynth1PatchDestination__FilterQ7                                                = 7,
	ESynth1PatchDestination__Gain8                                                   = 8,
	ESynth1PatchDestination__Pan9                                                    = 9,
	ESynth1PatchDestination__LFO1Frequency10                                         = 10,
	ESynth1PatchDestination__LFO1Gain11                                              = 11,
	ESynth1PatchDestination__LFO2Frequency12                                         = 12,
	ESynth1PatchDestination__LFO2Gain13                                              = 13,
	ESynth1PatchDestination__Count14                                                 = 14,
	ESynth1PatchDestination__ESynth1PatchDestination_MAX15                           = 15
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x04
enum ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize2560                           = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize5121                           = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize10242                          = 2,
	ESubmixEffectConvolutionReverbBlockSize__ESubmixEffectConvolutionReverbBlockSize_MAX3 = 3
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x07
enum ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor0                                  = 0,
	ESourceEffectDynamicsProcessorType__Limiter1                                     = 1,
	ESourceEffectDynamicsProcessorType__Expander2                                    = 2,
	ESourceEffectDynamicsProcessorType__Gate3                                        = 3,
	ESourceEffectDynamicsProcessorType__UpwardsCompressor4                           = 4,
	ESourceEffectDynamicsProcessorType__Count5                                       = 5,
	ESourceEffectDynamicsProcessorType__ESourceEffectDynamicsProcessorType_MAX6      = 6
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x05
enum ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared0                                      = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared1                                  = 1,
	ESourceEffectDynamicsPeakMode__Peak2                                             = 2,
	ESourceEffectDynamicsPeakMode__Count3                                            = 3,
	ESourceEffectDynamicsPeakMode__ESourceEffectDynamicsPeakMode_MAX4                = 4
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x05
enum EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared0                                          = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared1                                      = 1,
	EEnvelopeFollowerPeakMode__Peak2                                                 = 2,
	EEnvelopeFollowerPeakMode__Count3                                                = 3,
	EEnvelopeFollowerPeakMode__EEnvelopeFollowerPeakMode_MAX4                        = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x05
enum ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole0                                             = 0,
	ESourceEffectFilterCircuit__StateVariable1                                       = 1,
	ESourceEffectFilterCircuit__Ladder2                                              = 2,
	ESourceEffectFilterCircuit__Count3                                               = 3,
	ESourceEffectFilterCircuit__ESourceEffectFilterCircuit_MAX4                      = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x06
enum ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass0                                                = 0,
	ESourceEffectFilterType__HighPass1                                               = 1,
	ESourceEffectFilterType__BandPass2                                               = 2,
	ESourceEffectFilterType__BandStop3                                               = 3,
	ESourceEffectFilterType__Count4                                                  = 4,
	ESourceEffectFilterType__ESourceEffectFilterType_MAX5                            = 5
};

/// Enum /Script/Synthesis.ESourceEffectFilterParam
/// Size: 0x04
enum ESourceEffectFilterParam : uint8_t
{
	ESourceEffectFilterParam__FilterFrequency0                                       = 0,
	ESourceEffectFilterParam__FilterResonance1                                       = 1,
	ESourceEffectFilterParam__Count2                                                 = 2,
	ESourceEffectFilterParam__ESourceEffectFilterParam_MAX3                          = 3
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x04
enum EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide0                                                     = 0,
	EStereoChannelMode__LeftRight1                                                   = 1,
	EStereoChannelMode__count2                                                       = 2,
	EStereoChannelMode__EStereoChannelMode_MAX3                                      = 3
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterModSource
/// Size: 0x07
enum ESourceEffectMotionFilterModSource : uint8_t
{
	ESourceEffectMotionFilterModSource__DistanceFromListener0                        = 0,
	ESourceEffectMotionFilterModSource__SpeedRelativeToListener1                     = 1,
	ESourceEffectMotionFilterModSource__SpeedOfSourceEmitter2                        = 2,
	ESourceEffectMotionFilterModSource__SpeedOfListener3                             = 3,
	ESourceEffectMotionFilterModSource__SpeedOfAngleDelta4                           = 4,
	ESourceEffectMotionFilterModSource__Count5                                       = 5,
	ESourceEffectMotionFilterModSource__ESourceEffectMotionFilterModSource_MAX6      = 6
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterModDestination
/// Size: 0x09
enum ESourceEffectMotionFilterModDestination : uint8_t
{
	ESourceEffectMotionFilterModDestination__FilterACutoffFrequency0                 = 0,
	ESourceEffectMotionFilterModDestination__FilterAResonance1                       = 1,
	ESourceEffectMotionFilterModDestination__FilterAOutputVolumeDB2                  = 2,
	ESourceEffectMotionFilterModDestination__FilterBCutoffFrequency3                 = 3,
	ESourceEffectMotionFilterModDestination__FilterBResonance4                       = 4,
	ESourceEffectMotionFilterModDestination__FilterBOutputVolumeDB5                  = 5,
	ESourceEffectMotionFilterModDestination__FilterMix6                              = 6,
	ESourceEffectMotionFilterModDestination__Count7                                  = 7,
	ESourceEffectMotionFilterModDestination__ESourceEffectMotionFilterModDestination_MAX8 = 8
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterTopology
/// Size: 0x04
enum ESourceEffectMotionFilterTopology : uint8_t
{
	ESourceEffectMotionFilterTopology__SerialMode0                                   = 0,
	ESourceEffectMotionFilterTopology__ParallelMode1                                 = 1,
	ESourceEffectMotionFilterTopology__Count2                                        = 2,
	ESourceEffectMotionFilterTopology__ESourceEffectMotionFilterTopology_MAX3        = 3
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterCircuit
/// Size: 0x05
enum ESourceEffectMotionFilterCircuit : uint8_t
{
	ESourceEffectMotionFilterCircuit__OnePole0                                       = 0,
	ESourceEffectMotionFilterCircuit__StateVariable1                                 = 1,
	ESourceEffectMotionFilterCircuit__Ladder2                                        = 2,
	ESourceEffectMotionFilterCircuit__Count3                                         = 3,
	ESourceEffectMotionFilterCircuit__ESourceEffectMotionFilterCircuit_MAX4          = 4
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterType
/// Size: 0x06
enum ESourceEffectMotionFilterType : uint8_t
{
	ESourceEffectMotionFilterType__LowPass0                                          = 0,
	ESourceEffectMotionFilterType__HighPass1                                         = 1,
	ESourceEffectMotionFilterType__BandPass2                                         = 2,
	ESourceEffectMotionFilterType__BandStop3                                         = 3,
	ESourceEffectMotionFilterType__Count4                                            = 4,
	ESourceEffectMotionFilterType__ESourceEffectMotionFilterType_MAX5                = 5
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x09
enum EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine0                                                            = 0,
	EPhaserLFOType__UpSaw1                                                           = 1,
	EPhaserLFOType__DownSaw2                                                         = 2,
	EPhaserLFOType__Square3                                                          = 3,
	EPhaserLFOType__Triangle4                                                        = 4,
	EPhaserLFOType__Exponential5                                                     = 5,
	EPhaserLFOType__RandomSampleHold6                                                = 6,
	EPhaserLFOType__Count7                                                           = 7,
	EPhaserLFOType__EPhaserLFOType_MAX8                                              = 8
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x06
enum ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine0                                            = 0,
	ERingModulatorTypeSourceEffect__Saw1                                             = 1,
	ERingModulatorTypeSourceEffect__Triangle2                                        = 2,
	ERingModulatorTypeSourceEffect__Square3                                          = 3,
	ERingModulatorTypeSourceEffect__Count4                                           = 4,
	ERingModulatorTypeSourceEffect__ERingModulatorTypeSourceEffect_MAX5              = 5
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x05
enum EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal0                                                = 0,
	EStereoDelaySourceEffect__Cross1                                                 = 1,
	EStereoDelaySourceEffect__PingPong2                                              = 2,
	EStereoDelaySourceEffect__Count3                                                 = 3,
	EStereoDelaySourceEffect__EStereoDelaySourceEffect_MAX4                          = 4
};

/// Enum /Script/Synthesis.EStereoDelayFiltertype
/// Size: 0x06
enum EStereoDelayFiltertype : uint8_t
{
	EStereoDelayFiltertype__Lowpass0                                                 = 0,
	EStereoDelayFiltertype__Highpass1                                                = 1,
	EStereoDelayFiltertype__Bandpass2                                                = 2,
	EStereoDelayFiltertype__Notch3                                                   = 3,
	EStereoDelayFiltertype__Count4                                                   = 4,
	EStereoDelayFiltertype__EStereoDelayFiltertype_MAX5                              = 5
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x06
enum ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass0                                                      = 0,
	ESubmixFilterType__HighPass1                                                     = 1,
	ESubmixFilterType__BandPass2                                                     = 2,
	ESubmixFilterType__BandStop3                                                     = 3,
	ESubmixFilterType__Count4                                                        = 4,
	ESubmixFilterType__ESubmixFilterType_MAX5                                        = 5
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x05
enum ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole0                                                 = 0,
	ESubmixFilterAlgorithm__StateVariable1                                           = 1,
	ESubmixFilterAlgorithm__Ladder2                                                  = 2,
	ESubmixFilterAlgorithm__Count3                                                   = 3,
	ESubmixFilterAlgorithm__ESubmixFilterAlgorithm_MAX4                              = 4
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x04
enum ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel0                                                     = 0,
	ETapLineMode__Panning1                                                           = 1,
	ETapLineMode__Disabled2                                                          = 2,
	ETapLineMode__ETapLineMode_MAX3                                                  = 3
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x16
enum EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular0                                         = 0,
	EGranularSynthEnvelopeType__Triangle1                                            = 1,
	EGranularSynthEnvelopeType__DownwardTriangle2                                    = 2,
	EGranularSynthEnvelopeType__UpwardTriangle3                                      = 3,
	EGranularSynthEnvelopeType__ExponentialDecay4                                    = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease5                                 = 5,
	EGranularSynthEnvelopeType__Gaussian6                                            = 6,
	EGranularSynthEnvelopeType__Hanning7                                             = 7,
	EGranularSynthEnvelopeType__Lanczos8                                             = 8,
	EGranularSynthEnvelopeType__Cosine9                                              = 9,
	EGranularSynthEnvelopeType__CosineSquared10                                      = 10,
	EGranularSynthEnvelopeType__Welch11                                              = 11,
	EGranularSynthEnvelopeType__Blackman12                                           = 12,
	EGranularSynthEnvelopeType__BlackmanHarris13                                     = 13,
	EGranularSynthEnvelopeType__Count14                                              = 14,
	EGranularSynthEnvelopeType__EGranularSynthEnvelopeType_MAX15                     = 15
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x04
enum EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning0                                           = 0,
	EGranularSynthSeekType__FromCurrentPosition1                                     = 1,
	EGranularSynthSeekType__Count2                                                   = 2,
	EGranularSynthSeekType__EGranularSynthSeekType_MAX3                              = 3
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x04
enum CurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP0                                              = 0,
	CurveInterpolationType__LINEAR1                                                  = 1,
	CurveInterpolationType__CONSTANT2                                                = 2,
	CurveInterpolationType__CurveInterpolationType_MAX3                              = 3
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x05
enum ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning0                                            = 0,
	ESamplePlayerSeekType__FromCurrentPosition1                                      = 1,
	ESamplePlayerSeekType__FromEnd2                                                  = 2,
	ESamplePlayerSeekType__Count3                                                    = 3,
	ESamplePlayerSeekType__ESamplePlayerSeekType_MAX4                                = 4
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x04
enum ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium0                                                          = 0,
	ESynthKnobSize__Large1                                                           = 1,
	ESynthKnobSize__Count2                                                           = 2,
	ESynthKnobSize__ESynthKnobSize_MAX3                                              = 3
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x05
enum ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small0                                                      = 0,
	ESynthSlateSizeType__Medium1                                                     = 1,
	ESynthSlateSizeType__Large2                                                      = 2,
	ESynthSlateSizeType__Count3                                                      = 3,
	ESynthSlateSizeType__ESynthSlateSizeType_MAX4                                    = 4
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x04
enum ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light0                                                    = 0,
	ESynthSlateColorStyle__Dark1                                                     = 1,
	ESynthSlateColorStyle__Count2                                                    = 2,
	ESynthSlateColorStyle__ESynthSlateColorStyle_MAX3                                = 3
};

