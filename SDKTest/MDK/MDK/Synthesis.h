
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0030 (0x000028 - 0x000058)
class UAudioImpulseResponse : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<float>)                             ImpulseResponse                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   NumChannels                                                 OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     NormalizationVolumeDb                                       OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bTrueStereo                                                 OFFSET(get<bool>, {0x44, 1, 0, 0})
	CMember(TArray<float>)                             IRData                                                      OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0010 (0x000028 - 0x000038)
class UModularSynthPresetBank : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FModularSynthPresetBankEntry>)      Presets                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
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
	DMember(int32_t)                                   VoiceCount                                                  OFFSET(get<int32_t>, {0x900, 4, 0, 0})


	/// Functions
	// Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset
	// void SetSynthPreset(FModularSynthPreset& SynthPreset);                                                                   // [0x6c62ef4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSustainGain
	// void SetSustainGain(float SustainGain);                                                                                  // [0x6c62db8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	// void SetStereoDelayWetlevel(float DelayWetlevel);                                                                        // [0x6c62cb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime
	// void SetStereoDelayTime(float DelayTimeMsec);                                                                            // [0x6c62c38] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio
	// void SetStereoDelayRatio(float DelayRatio);                                                                              // [0x6c62bb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode
	// void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);                                                          // [0x6c62b38] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	// void SetStereoDelayIsEnabled(bool StereoDelayEnabled);                                                                   // [0x6c62ab8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	// void SetStereoDelayFeedback(float DelayFeedback);                                                                        // [0x6c62a38] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSpread
	// void SetSpread(float Spread);                                                                                            // [0x6c626ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime
	// void SetReleaseTime(float ReleaseTimeMsec);                                                                              // [0x6c5fe14] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPortamento
	// void SetPortamento(float Portamento);                                                                                    // [0x6c5f764] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPitchBend
	// void SetPitchBend(float PitchBend);                                                                                      // [0x6c5f568] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPan
	// void SetPan(float Pan);                                                                                                  // [0x6c5f424] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscType
	// void SetOscType(int32_t OscIndex, ESynth1OscType OscType);                                                               // [0x6c5f360] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSync
	// void SetOscSync(bool bIsSynced);                                                                                         // [0x6c5f2a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones
	// void SetOscSemitones(int32_t OscIndex, float Semitones);                                                                 // [0x6c5f1e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth
	// void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);                                                               // [0x6c5f11c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscOctave
	// void SetOscOctave(int32_t OscIndex, float Octave);                                                                       // [0x6c5f058] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod
	// void SetOscGainMod(int32_t OscIndex, float OscGainMod);                                                                  // [0x6c5ef94] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGain
	// void SetOscGain(int32_t OscIndex, float OscGain);                                                                        // [0x6c5eed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod
	// void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);                                                             // [0x6c5ee0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscCents
	// void SetOscCents(int32_t OscIndex, float Cents);                                                                         // [0x6c5ed48] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain
	// void SetModEnvSustainGain(float SustainGain);                                                                            // [0x6c5eae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	// void SetModEnvReleaseTime(float Release);                                                                                // [0x6c5ea60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch
	// void SetModEnvPatch(ESynthModEnvPatch InPatchType);                                                                      // [0x6c5e9a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert
	// void SetModEnvInvert(bool bInvert);                                                                                      // [0x6c5e8ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth
	// void SetModEnvDepth(float Depth);                                                                                        // [0x6c5e86c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime
	// void SetModEnvDecayTime(float DecayTimeMsec);                                                                            // [0x6c5e7ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	// void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);                                                              // [0x6c5e734] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	// void SetModEnvBiasInvert(bool bInvert);                                                                                  // [0x6c5e678] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime
	// void SetModEnvAttackTime(float AttackTimeMsec);                                                                          // [0x6c5e5f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOType
	// void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType);                                                                // [0x6c5e130] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch
	// void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType);                                                     // [0x6c5e03c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOMode
	// void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode);                                                                // [0x6c5df48] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod
	// void SetLFOGainMod(int32_t LFOIndex, float GainMod);                                                                     // [0x6c5de84] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGain
	// void SetLFOGain(int32_t LFOIndex, float Gain);                                                                           // [0x6c5ddc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	// void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);                                                         // [0x6c5dcfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency
	// void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);                                                               // [0x6c5dc38] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetGainDb
	// void SetGainDb(float GainDb);                                                                                            // [0x6c5cee8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterType
	// void SetFilterType(ESynthFilterType FilterType);                                                                         // [0x6c5c988] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod
	// void SetFilterQMod(float FilterQ);                                                                                       // [0x6c5c888] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQ
	// void SetFilterQ(float FilterQ);                                                                                          // [0x6c5c788] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	// void SetFilterFrequencyMod(float FilterFrequencyHz);                                                                     // [0x6c5c708] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency
	// void SetFilterFrequency(float FilterFrequencyHz);                                                                        // [0x6c5c688] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm
	// void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);                                                          // [0x6c5bff4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison
	// void SetEnableUnison(bool EnableUnison);                                                                                 // [0x6c5bc98] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger
	// void SetEnableRetrigger(bool RetriggerEnabled);                                                                          // [0x6c5bc18] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony
	// void SetEnablePolyphony(bool bEnablePolyphony);                                                                          // [0x6c5bb98] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch
	// bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled);                                                                  // [0x6c5b90c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato
	// void SetEnableLegato(bool LegatoEnabled);                                                                                // [0x6c5b88c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetDecayTime
	// void SetDecayTime(float DecayTimeMsec);                                                                                  // [0x6c5b110] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency
	// void SetChorusFrequency(float Frequency);                                                                                // [0x6c5ae18] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback
	// void SetChorusFeedback(float Feedback);                                                                                  // [0x6c5ad98] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled
	// void SetChorusEnabled(bool EnableChorus);                                                                                // [0x6c5ad18] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth
	// void SetChorusDepth(float Depth);                                                                                        // [0x6c5ac98] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetAttackTime
	// void SetAttackTime(float AttackTimeMsec);                                                                                // [0x6c5a934] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOn
	// void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0x6c59fcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOff
	// void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);                                                         // [0x6c59d48] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.CreatePatch
	// FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault);     // [0x6c58ca0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x01A8 (0x000068 - 0x000210)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FSourceEffectBitCrusherSettings)           Settings                                                    OFFSET(get<T>, {0x150, 192, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings
	// void SetSettings(FSourceEffectBitCrusherBaseSettings& Settings);                                                         // [0x6c60310] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators
	// void SetSampleRateModulators(TSet<USoundModulatorBase*>& InModulators);                                                  // [0x6c60034] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
	// void SetSampleRateModulator(USoundModulatorBase* Modulator);                                                             // [0x6c5ff94] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
	// void SetSampleRate(float SampleRate);                                                                                    // [0x6c5ff14] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
	// void SetModulationSettings(FSourceEffectBitCrusherSettings& ModulationSettings);                                         // [0x6c5eb60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBits
	// void SetBits(float Bits);                                                                                                // [0x6c5ac18] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulators
	// void SetBitModulators(TSet<USoundModulatorBase*>& InModulators);                                                         // [0x6c5ab34] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
	// void SetBitModulator(USoundModulatorBase* Modulator);                                                                    // [0x6c5aa94] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectChorusPreset
/// Size: 0x0478 (0x000068 - 0x0004E0)
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	SMember(FSourceEffectChorusSettings)               Settings                                                    OFFSET(get<T>, {0x2B8, 552, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulators
	// void SetWetModulators(TSet<USoundModulatorBase*>& Modulators);                                                           // [0x6c63494] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulator
	// void SetWetModulator(USoundModulatorBase* Modulator);                                                                    // [0x6c633f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWet
	// void SetWet(float WetAmount);                                                                                            // [0x6c63374] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulators
	// void SetSpreadModulators(TSet<USoundModulatorBase*>& Modulators);                                                        // [0x6c6284c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulator
	// void SetSpreadModulator(USoundModulatorBase* Modulator);                                                                 // [0x6c627ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpread
	// void SetSpread(float Spread);                                                                                            // [0x6c6272c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings
	// void SetSettings(FSourceEffectChorusBaseSettings& Settings);                                                             // [0x6c603a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetModulationSettings
	// void SetModulationSettings(FSourceEffectChorusSettings& ModulationSettings);                                             // [0x6c5ec54] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulators
	// void SetFrequencyModulators(TSet<USoundModulatorBase*>& Modulators);                                                     // [0x6c5cd04] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
	// void SetFrequencyModulator(USoundModulatorBase* Modulator);                                                              // [0x6c5cc64] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequency
	// void SetFrequency(float Frequency);                                                                                      // [0x6c5cadc] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulators
	// void SetFeedbackModulators(TSet<USoundModulatorBase*>& Modulators);                                                      // [0x6c5bf10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
	// void SetFeedbackModulator(USoundModulatorBase* Modulator);                                                               // [0x6c5be70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedback
	// void SetFeedback(float Feedback);                                                                                        // [0x6c5bdf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulators
	// void SetDryModulators(TSet<USoundModulatorBase*>& Modulators);                                                           // [0x6c5b7a8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulator
	// void SetDryModulator(USoundModulatorBase* Modulator);                                                                    // [0x6c5b708] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDry
	// void SetDry(float DryAmount);                                                                                            // [0x6c5b688] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulators
	// void SetDepthModulators(TSet<USoundModulatorBase*>& Modulators);                                                         // [0x6c5b5a4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulator
	// void SetDepthModulator(USoundModulatorBase* Modulator);                                                                  // [0x6c5b504] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepth
	// void SetDepth(float Depth);                                                                                              // [0x6c5b484] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectConvolutionReverbPreset
/// Size: 0x0058 (0x000068 - 0x0000C0)
class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UAudioImpulseResponse*)                    ImpulseResponse                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FSourceEffectConvolutionReverbSettings)    Settings                                                    OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(ESubmixEffectConvolutionReverbBlockSize)   BlockSize                                                   OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(bool)                                      bEnableHardwareAcceleration                                 OFFSET(get<bool>, {0x81, 1, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectConvolutionReverbPreset.SetSettings
	// void SetSettings(FSourceEffectConvolutionReverbSettings& InSettings);                                                    // [0x6c60440] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse
	// void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);                                                       // [0x6c5d7a0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x0078 (0x000068 - 0x0000E0)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FSourceEffectDynamicsProcessorSettings)    Settings                                                    OFFSET(get<T>, {0xB8, 40, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	// void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings);                                                    // [0x6c604f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UEnvelopeFollowerListener : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMulticastInlineDelegate)                  OnEnvelopeFollowerUpdate                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSourceEffectEnvelopeFollowerSettings)     Settings                                                    OFFSET(get<T>, {0x9C, 12, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	// void UnregisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);                            // [0x6c63578] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	// void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings);                                                     // [0x6c60690] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	// void RegisterEnvelopeFollowerListener(UEnvelopeFollowerListener* EnvelopeFollowerListener);                              // [0x6c5a21c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USourceEffectEQPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSourceEffectEQSettings)                   Settings                                                    OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectEQPreset.SetSettings
	// void SetSettings(FSourceEffectEQSettings& InSettings);                                                                   // [0x6c605c4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x0068 (0x000068 - 0x0000D0)
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSourceEffectFilterSettings)               Settings                                                    OFFSET(get<T>, {0xB0, 32, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectFilterPreset.SetSettings
	// void SetSettings(FSourceEffectFilterSettings& InSettings);                                                               // [0x6c6072c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSourceEffectFoldbackDistortionSettings)   Settings                                                    OFFSET(get<T>, {0x9C, 12, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	// void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings);                                                   // [0x6c60df4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSourceEffectMidSideSpreaderSettings)      Settings                                                    OFFSET(get<T>, {0x98, 8, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	// void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings);                                                      // [0x6c60e8c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectMotionFilterPreset
/// Size: 0x0118 (0x000068 - 0x000180)
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FSourceEffectMotionFilterSettings)         Settings                                                    OFFSET(get<T>, {0x108, 120, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectMotionFilterPreset.SetSettings
	// void SetSettings(FSourceEffectMotionFilterSettings& InSettings);                                                         // [0x6c60f24] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSourceEffectPannerSettings)               Settings                                                    OFFSET(get<T>, {0x98, 8, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings
	// void SetSettings(FSourceEffectPannerSettings& InSettings);                                                               // [0x6c6100c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSourceEffectPhaserSettings)               Settings                                                    OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings
	// void SetSettings(FSourceEffectPhaserSettings& InSettings);                                                               // [0x6c610a0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x0068 (0x000068 - 0x0000D0)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSourceEffectRingModulationSettings)       Settings                                                    OFFSET(get<T>, {0xB0, 32, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectRingModulationPreset.SetSettings
	// void SetSettings(FSourceEffectRingModulationSettings& InSettings);                                                       // [0x6c61140] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x0058 (0x000068 - 0x0000C0)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FSourceEffectSimpleDelaySettings)          Settings                                                    OFFSET(get<T>, {0xA8, 24, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	// void SetSettings(FSourceEffectSimpleDelaySettings& InSettings);                                                          // [0x6c611dc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FSourceEffectStereoDelaySettings)          Settings                                                    OFFSET(get<T>, {0xB4, 36, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectStereoDelayPreset.SetSettings
	// void SetSettings(FSourceEffectStereoDelaySettings& InSettings);                                                          // [0x6c612a4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSourceEffectWaveShaperSettings)           Settings                                                    OFFSET(get<T>, {0x98, 8, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectWaveShaperPreset.SetSettings
	// void SetSettings(FSourceEffectWaveShaperSettings& InSettings);                                                           // [0x6c6100c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x0098 (0x000068 - 0x000100)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(UAudioImpulseResponse*)                    ImpulseResponse                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FSubmixEffectConvolutionReverbSettings)    Settings                                                    OFFSET(get<T>, {0x70, 48, 0, 0})
	CMember(ESubmixEffectConvolutionReverbBlockSize)   BlockSize                                                   OFFSET(get<T>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bEnableHardwareAcceleration                                 OFFSET(get<bool>, {0xA1, 1, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	// void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings);                                                    // [0x6c61334] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	// void SetImpulseResponse(UAudioImpulseResponse* InImpulseResponse);                                                       // [0x6c5d828] Final|Native|Public|BlueprintCallable 
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
	SMember(FSubmixEffectDelaySettings)                Settings                                                    OFFSET(get<T>, {0x9C, 12, 0, 0})
	SMember(FSubmixEffectDelaySettings)                DynamicSettings                                             OFFSET(get<T>, {0xA8, 12, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectDelaySettings& InSettings);                                                                // [0x6c6142c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	// void SetInterpolationTime(float Time);                                                                                   // [0x6c5d96c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay
	// void SetDelay(float Length);                                                                                             // [0x6c5b22c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDefaultSettings
	// void SetDefaultSettings(FSubmixEffectDelaySettings& InSettings);                                                         // [0x6c5b190] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	// float GetMaxDelayInMilliseconds();                                                                                       // [0x315ad40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSubmixEffectFilterSettings)               Settings                                                    OFFSET(get<T>, {0x9C, 12, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings
	// void SetSettings(FSubmixEffectFilterSettings& InSettings);                                                               // [0x6c614dc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType
	// void SetFilterType(ESubmixFilterType InType);                                                                            // [0x6c5ca40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	// void SetFilterQMod(float InQ);                                                                                           // [0x6c5c908] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ
	// void SetFilterQ(float InQ);                                                                                              // [0x6c5c808] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	// void SetFilterCutoffFrequencyMod(float InFrequency);                                                                     // [0x6c5c190] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	// void SetFilterCutoffFrequency(float InFrequency);                                                                        // [0x6c5c110] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	// void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);                                                             // [0x6c5c074] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSubmixEffectFlexiverbSettings)            Settings                                                    OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	// void SetSettings(FSubmixEffectFlexiverbSettings& InSettings);                                                            // [0x6c61574] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset
/// Size: 0x0098 (0x000068 - 0x000100)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FSubmixEffectMultibandCompressorSettings)  Settings                                                    OFFSET(get<T>, {0xC8, 56, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
	// void SetSettings(FSubmixEffectMultibandCompressorSettings& InSettings);                                                  // [0x6c61618] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix
	// void SetExternalSubmix(USoundSubmix* Submix);                                                                            // [0x6c5bd18] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus
	// void SetAudioBus(UAudioBus* AudioBus);                                                                                   // [0x6c5a9b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.ResetKey
	// void ResetKey();                                                                                                         // [0x6c5a32c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectStereoDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FSubmixEffectStereoDelaySettings)          Settings                                                    OFFSET(get<T>, {0xB4, 36, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectStereoDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectStereoDelaySettings& InSettings);                                                          // [0xea14f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectStereoToQuadPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSubmixEffectStereoToQuadSettings)         Settings                                                    OFFSET(get<T>, {0x98, 8, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectStereoToQuadPreset.SetSettings
	// void SetSettings(FSubmixEffectStereoToQuadSettings& InSettings);                                                         // [0x6c61cf4] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FSubmixEffectTapDelaySettings)             Settings                                                    OFFSET(get<T>, {0xA8, 24, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap
	// void SetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0x6c62f98] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectTapDelaySettings& InSettings);                                                             // [0x6c61d84] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	// void SetInterpolationTime(float Time);                                                                                   // [0x6c5dbb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	// void RemoveTap(int32_t TapId);                                                                                           // [0x6c5a2ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	// void GetTapIds(TArray<int32_t>& TapIds);                                                                                 // [0x6c59aa8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap
	// void GetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0x6c599b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	// float GetMaxDelayInMilliseconds();                                                                                       // [0x58f324c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap
	// void AddTap(int32_t& TapId);                                                                                             // [0x6c58c14] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x03E0 (0x000900 - 0x000CE0)
class UGranularSynth : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3296;

public:
	CMember(USoundWave*)                               GranulatedSoundWave                                         OFFSET(get<T>, {0x900, 8, 0, 0})


	/// Functions
	// Function /Script/Synthesis.GranularSynth.SetSustainGain
	// void SetSustainGain(float SustainGain);                                                                                  // [0x6c62d38] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetSoundWave
	// void SetSoundWave(USoundWave* InSoundWave);                                                                              // [0x6c6259c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetScrubMode
	// void SetScrubMode(bool bScrubMode);                                                                                      // [0x6c60118] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec
	// void SetReleaseTimeMsec(float ReleaseTimeMsec);                                                                          // [0x6c5fe94] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlayheadTime
	// void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);                           // [0x6c5f668] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed
	// void SetPlaybackSpeed(float InPlayheadRate);                                                                             // [0x6c5f5e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainVolume
	// void SetGrainVolume(float BaseVolume, FVector2D VolumeRange);                                                            // [0x6c5d580] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond
	// void SetGrainsPerSecond(float InGrainsPerSecond);                                                                        // [0x6c5d720] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainProbability
	// void SetGrainProbability(float InGrainProbability);                                                                      // [0x6c5d500] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPitch
	// void SetGrainPitch(float BasePitch, FVector2D PitchRange);                                                               // [0x6c5d360] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPan
	// void SetGrainPan(float BasePan, FVector2D PanRange);                                                                     // [0x6c5d1c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType
	// void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);                                                      // [0x6c5d108] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainDuration
	// void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange);                                                  // [0x6c5cf68] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetDecayTime
	// void SetDecayTime(float DecayTimeMsec);                                                                                  // [0x6c5a8b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetAttackTime
	// void SetAttackTime(float AttackTimeMsec);                                                                                // [0x6c5a8b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOn
	// void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0x6c59ed4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOff
	// void NoteOff(float Note, bool bKill);                                                                                    // [0x6c59c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.IsLoaded
	// bool IsLoaded();                                                                                                         // [0x6c59c50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetSampleDuration
	// float GetSampleDuration();                                                                                               // [0x6c59980] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime
	// float GetCurrentPlayheadTime();                                                                                          // [0x6c594ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0148 (0x000028 - 0x000170)
class UMonoWaveTableSynthPreset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FString)                                   PresetName                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bLockKeyframesToGridBool                                    OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(int32_t)                                   LockKeyframesToGrid                                         OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   WaveTableResolution                                         OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TArray<FRuntimeFloatCurve>)                WaveTable                                                   OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bNormalizeWaveTables                                        OFFSET(get<bool>, {0x58, 1, 1, 0})
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0750 (0x000900 - 0x001050)
class USynthComponentMonoWaveTable : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4176;

public:
	SMember(FMulticastInlineDelegate)                  OnTableAltered                                              OFFSET(get<T>, {0x900, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNumTablesChanged                                          OFFSET(get<T>, {0x910, 16, 0, 0})
	CMember(UMonoWaveTableSynthPreset*)                CurrentPreset                                               OFFSET(get<T>, {0x920, 8, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	// void SetWaveTablePosition(float InPosition);                                                                             // [0x6c632f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	// void SetSustainPedalState(bool InSustainPedalState);                                                                     // [0x6c62e38] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	// void SetPosLfoType(ESynthLFOType InLfoType);                                                                             // [0x6c5f8e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	// void SetPosLfoFrequency(float InLfoFrequency);                                                                           // [0x6c5f864] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	// void SetPosLfoDepth(float InLfoDepth);                                                                                   // [0x6c5f7e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	// void SetPositionEnvelopeSustainGain(float InSustainGain);                                                                // [0x6c5fd94] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	// void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);                                                            // [0x6c5fd14] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	// void SetPositionEnvelopeInvert(bool bInInvert);                                                                          // [0x6c5fc58] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	// void SetPositionEnvelopeDepth(float InDepth);                                                                            // [0x6c5fbd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	// void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);                                                                // [0x6c5fb58] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	// void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);                                                                  // [0x6c5fa9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	// void SetPositionEnvelopeBiasDepth(float InDepth);                                                                        // [0x6c5fa1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	// void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);                                                              // [0x6c5f99c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	// void SetLowPassFilterResonance(float InNewQ);                                                                            // [0x6c5e39c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	// void SetFrequencyWithMidiNote(float InMidiNote);                                                                         // [0x6c5ce68] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	// void SetFrequencyPitchBend(float FrequencyOffsetCents);                                                                  // [0x6c5cde8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency
	// void SetFrequency(float FrequencyHz);                                                                                    // [0x6c5cb5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	// void SetFilterEnvelopeSustainGain(float InSustainGain);                                                                  // [0x6c5c588] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	// void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);                                                              // [0x6c5c508] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	// void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);                                                                 // [0x6c5c608] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	// void SetFilterEnvelopeInvert(bool bInInvert);                                                                            // [0x6c5c44c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	// void SetFilterEnvelopeDepth(float InDepth);                                                                              // [0x6c5c3cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	// void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);                                                                    // [0x6c5c310] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	// void SetFilterEnvelopeBiasDepth(float InDepth);                                                                          // [0x6c5c290] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	// void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);                                                                // [0x6c5c210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	// bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);                                           // [0x6c5b018] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	// bool SetCurveTangent(int32_t TableIndex, float InNewTangent);                                                            // [0x6c5af58] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	// bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex);                            // [0x6c5ae98] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	// void SetAmpEnvelopeSustainGain(float InSustainGain);                                                                     // [0x6c5a834] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	// void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);                                                                 // [0x6c5a7b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	// void SetAmpEnvelopeInvert(bool bInInvert);                                                                               // [0x6c5a6f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	// void SetAmpEnvelopeDepth(float InDepth);                                                                                 // [0x6c5a678] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	// void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);                                                                     // [0x6c5a5f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	// void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);                                                                       // [0x6c5a53c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	// void SetAmpEnvelopeBiasDepth(float InDepth);                                                                             // [0x6c5a4bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	// void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);                                                                   // [0x6c5a43c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	// void RefreshWaveTable(int32_t Index);                                                                                    // [0x6c5a19c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	// void RefreshAllWaveTables();                                                                                             // [0x6c5a188] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn
	// void NoteOn(float InMidiNote, float InVelocity);                                                                         // [0x6c5a0c4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff
	// void NoteOff(float InMidiNote);                                                                                          // [0x6c59e54] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	// int32_t GetNumTableEntries();                                                                                            // [0x6c59960] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	// int32_t GetMaxTableIndex();                                                                                              // [0x6c59938] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	// TArray<float> GetKeyFrameValuesForTable(float TableIndex);                                                               // [0x6c59594] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	// float GetCurveTangent(int32_t TableIndex);                                                                               // [0x6c59504] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthComponentToneGenerator
/// Size: 0x00F0 (0x000900 - 0x0009F0)
class USynthComponentToneGenerator : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2544;

public:
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(float)                                     Volume                                                      OFFSET(get<float>, {0x904, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        DistanceAttenuationCurve                                    OFFSET(get<T>, {0x908, 136, 0, 0})
	SMember(FVector2D)                                 DistanceRange                                               OFFSET(get<T>, {0x990, 16, 0, 0})
	DMember(float)                                     AttenuationDbAtMaxRange                                     OFFSET(get<float>, {0x9A0, 4, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetVolume
	// void SetVolume(float InVolume);                                                                                          // [0x6c6326c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetFrequency
	// void SetFrequency(float InFrequency);                                                                                    // [0x6c5cbdc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x0130 (0x000900 - 0x000A30)
class USynthSamplePlayer : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2608;

public:
	CMember(USoundWave*)                               SoundWave                                                   OFFSET(get<T>, {0x900, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSampleLoaded                                              OFFSET(get<T>, {0x908, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSamplePlaybackProgress                                    OFFSET(get<T>, {0x918, 16, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave
	// void SetSoundWave(USoundWave* InSoundWave);                                                                              // [0x6c6261c] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	// void SetScrubTimeWidth(float InScrubTimeWidthSec);                                                                       // [0x6c60290] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode
	// void SetScrubMode(bool bScrubMode);                                                                                      // [0x6c601d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetPitch
	// void SetPitch(float InPitch, float TimeSec);                                                                             // [0x6c5f4a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SeekToTime
	// void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);                                              // [0x6c5a340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.IsLoaded
	// bool IsLoaded();                                                                                                         // [0x6c59c68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration
	// float GetSampleDuration();                                                                                               // [0x6c59998] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	// float GetCurrentPlaybackProgressTime();                                                                                  // [0x6c594d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	// float GetCurrentPlaybackProgressPercent();                                                                               // [0x6c594b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	DMember(float)                                     ValueX                                                      OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     ValueY                                                      OFFSET(get<float>, {0x17C, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueXDelegate                                              OFFSET(get<T>, {0x180, 12, 0, 0})
	SMember(FDelegateProperty)                         ValueYDelegate                                              OFFSET(get<T>, {0x18C, 12, 0, 0})
	SMember(FSynth2DSliderStyle)                       WidgetStyle                                                 OFFSET(get<T>, {0x1A0, 992, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           OFFSET(get<T>, {0x580, 16, 0, 0})
	DMember(bool)                                      IndentHandle                                                OFFSET(get<bool>, {0x590, 1, 0, 0})
	DMember(bool)                                      Locked                                                      OFFSET(get<bool>, {0x591, 1, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0x594, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x598, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureBegin                                         OFFSET(get<T>, {0x5A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureEnd                                           OFFSET(get<T>, {0x5B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureBegin                                    OFFSET(get<T>, {0x5C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureEnd                                      OFFSET(get<T>, {0x5D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChangedX                                             OFFSET(get<T>, {0x5E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChangedY                                             OFFSET(get<T>, {0x5F0, 16, 0, 0})


	/// Functions
	// Function /Script/Synthesis.Synth2DSlider.SetValue
	// void SetValue(FVector2D InValue);                                                                                        // [0x6c63090] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x6c62930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x6c62440] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x6c5e224] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                      // [0x6c5d8b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.GetValue
	// FVector2D GetValue();                                                                                                    // [0x6c59b94] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x03E8 (0x000178 - 0x000560)
class USynthKnob : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x178, 4, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0x17C, 4, 0, 0})
	DMember(float)                                     MouseSpeed                                                  OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     MouseFineTuneSpeed                                          OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(bool)                                      ShowTooltipInfo                                             OFFSET(get<bool>, {0x188, 1, 1, 0})
	SMember(FText)                                     ParameterName                                               OFFSET(get<T>, {0x190, 24, 0, 0})
	SMember(FText)                                     ParameterUnits                                              OFFSET(get<T>, {0x1A8, 24, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(get<T>, {0x1C0, 12, 0, 0})
	SMember(FSynthKnobStyle)                           WidgetStyle                                                 OFFSET(get<T>, {0x1D0, 800, 0, 0})
	DMember(bool)                                      Locked                                                      OFFSET(get<bool>, {0x4F0, 1, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x4F1, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureBegin                                         OFFSET(get<T>, {0x4F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureEnd                                           OFFSET(get<T>, {0x508, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureBegin                                    OFFSET(get<T>, {0x518, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureEnd                                      OFFSET(get<T>, {0x528, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(get<T>, {0x538, 16, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SynthKnob.SetValue
	// void SetValue(float InValue);                                                                                            // [0x6c631ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x6c629b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x6c5e2e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.GetValue
	// float GetValue();                                                                                                        // [0x6c59c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (0x000000 - 0x000008)
class FSynth1PatchCable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(ESynth1PatchDestination)                   Destination                                                 OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (0x000000 - 0x000004)
class FPatchId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (0x000000 - 0x000018)
class FEpicSynth1Patch : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ESynth1PatchSource)                        PatchSource                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FSynth1PatchCable>)                 PatchCables                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FModularSynthPreset : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bEnablePolyphony                                            OFFSET(get<bool>, {0x8, 1, 1, 0})
	CMember(ESynth1OscType)                            Osc1Type                                                    OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     Osc1Gain                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Osc1Octave                                                  OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Osc1Semitones                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Osc1Cents                                                   OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Osc1PulseWidth                                              OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(ESynth1OscType)                            Osc2Type                                                    OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(float)                                     Osc2Gain                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Osc2Octave                                                  OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Osc2Semitones                                               OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Osc2Cents                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Osc2PulseWidth                                              OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Portamento                                                  OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bEnableUnison                                               OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bEnableOscillatorSync                                       OFFSET(get<bool>, {0x40, 1, 1, 1})
	DMember(float)                                     Spread                                                      OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Pan                                                         OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     LFO1Frequency                                               OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     LFO1Gain                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(ESynthLFOType)                             LFO1Type                                                    OFFSET(get<T>, {0x54, 1, 0, 0})
	CMember(ESynthLFOMode)                             LFO1Mode                                                    OFFSET(get<T>, {0x55, 1, 0, 0})
	CMember(ESynthLFOPatchType)                        LFO1PatchType                                               OFFSET(get<T>, {0x56, 1, 0, 0})
	DMember(float)                                     LFO2Frequency                                               OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LFO2Gain                                                    OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(ESynthLFOType)                             LFO2Type                                                    OFFSET(get<T>, {0x60, 1, 0, 0})
	CMember(ESynthLFOMode)                             LFO2Mode                                                    OFFSET(get<T>, {0x61, 1, 0, 0})
	CMember(ESynthLFOPatchType)                        LFO2PatchType                                               OFFSET(get<T>, {0x62, 1, 0, 0})
	DMember(float)                                     GainDb                                                      OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     AttackTime                                                  OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     SustainGain                                                 OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 OFFSET(get<float>, {0x74, 4, 0, 0})
	CMember(ESynthModEnvPatch)                         ModEnvPatchType                                             OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(ESynthModEnvBiasPatch)                     ModEnvBiasPatchType                                         OFFSET(get<T>, {0x79, 1, 0, 0})
	DMember(bool)                                      bInvertModulationEnvelope                                   OFFSET(get<bool>, {0x7C, 1, 1, 0})
	DMember(bool)                                      bInvertModulationEnvelopeBias                               OFFSET(get<bool>, {0x7C, 1, 1, 1})
	DMember(float)                                     ModulationEnvelopeDepth                                     OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     ModulationEnvelopeAttackTime                                OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     ModulationEnvelopeDecayTime                                 OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     ModulationEnvelopeSustainGain                               OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     ModulationEnvelopeReleaseTime                               OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bLegato                                                     OFFSET(get<bool>, {0x94, 1, 1, 0})
	DMember(bool)                                      bRetrigger                                                  OFFSET(get<bool>, {0x94, 1, 1, 1})
	DMember(float)                                     FilterFrequency                                             OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x9C, 4, 0, 0})
	CMember(ESynthFilterType)                          FilterType                                                  OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(ESynthFilterAlgorithm)                     FilterAlgorithm                                             OFFSET(get<T>, {0xA1, 1, 0, 0})
	DMember(bool)                                      bStereoDelayEnabled                                         OFFSET(get<bool>, {0xA4, 1, 1, 0})
	CMember(ESynthStereoDelayMode)                     StereoDelayMode                                             OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(float)                                     StereoDelayTime                                             OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     StereoDelayFeedback                                         OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     StereoDelayWetlevel                                         OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     StereoDelayRatio                                            OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bChorusEnabled                                              OFFSET(get<bool>, {0xBC, 1, 1, 0})
	DMember(float)                                     ChorusDepth                                                 OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     ChorusFeedback                                              OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     ChorusFrequency                                             OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(TArray<FEpicSynth1Patch>)                  Patches                                                     OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FModularSynthPresetBankEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   PresetName                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FModularSynthPreset)                       Preset                                                      OFFSET(get<T>, {0x10, 224, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherBaseSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSourceEffectBitCrusherBaseSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     SampleRate                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     BitDepth                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FSourceEffectBitCrusherSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(float)                                     CrushedSampleRate                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FSoundModulationDestinationSettings)       SampleRateModulation                                        OFFSET(get<T>, {0x8, 88, 0, 0})
	DMember(float)                                     CrushedBits                                                 OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FSoundModulationDestinationSettings)       BitModulation                                               OFFSET(get<T>, {0x68, 88, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectChorusBaseSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FSourceEffectChorusBaseSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Spread                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0228 (0x000000 - 0x000228)
class FSourceEffectChorusSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Spread                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FSoundModulationDestinationSettings)       DepthModulation                                             OFFSET(get<T>, {0x18, 88, 0, 0})
	SMember(FSoundModulationDestinationSettings)       FrequencyModulation                                         OFFSET(get<T>, {0x70, 88, 0, 0})
	SMember(FSoundModulationDestinationSettings)       FeedbackModulation                                          OFFSET(get<T>, {0xC8, 88, 0, 0})
	SMember(FSoundModulationDestinationSettings)       WetModulation                                               OFFSET(get<T>, {0x120, 88, 0, 0})
	SMember(FSoundModulationDestinationSettings)       DryModulation                                               OFFSET(get<T>, {0x178, 88, 0, 0})
	SMember(FSoundModulationDestinationSettings)       SpreadModulation                                            OFFSET(get<T>, {0x1D0, 88, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectConvolutionReverbSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSourceEffectConvolutionReverbSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     NormalizationVolumeDb                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     WetVolumeDb                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DryVolumeDb                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FSourceEffectDynamicsProcessorSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(ESourceEffectDynamicsProcessorType)        DynamicsProcessorType                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESourceEffectDynamicsPeakMode)             PeakMode                                                    OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     LookAheadMsec                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AttackTimeMsec                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ReleaseTimeMsec                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ThresholdDb                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     KneeBandwidthDb                                             OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     InputGainDb                                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bStereoLinked                                               OFFSET(get<bool>, {0x24, 1, 1, 0})
	DMember(bool)                                      bAnalogMode                                                 OFFSET(get<bool>, {0x24, 1, 1, 1})
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSourceEffectEnvelopeFollowerSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     AttackTime                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EEnvelopeFollowerPeakMode)                 PeakMode                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      bIsAnalogMode                                               OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
class FSourceEffectEQBand : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Bandwidth                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GainDb                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xC, 1, 1, 0})
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSourceEffectEQSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSourceEffectEQBand>)               EQBands                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FSourceEffectFilterAudioBusModulationSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UAudioBus*)                                AudioBus                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   EnvelopeFollowerAttackTimeMsec                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   EnvelopeFollowerReleaseTimeMsec                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     EnvelopeGainMultiplier                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(ESourceEffectFilterParam)                  FilterParam                                                 OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(float)                                     MinFrequencyModulation                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxFrequencyModulation                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinResonanceModulation                                      OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaxResonanceModulation                                      OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FSourceEffectFilterSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ESourceEffectFilterCircuit)                FilterCircuit                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESourceEffectFilterType)                   FilterType                                                  OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     CutoffFrequency                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TArray<FSourceEffectFilterAudioBusModulationSettings>) AudioBusModulation                              OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSourceEffectFoldbackDistortionSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     InputGainDb                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ThresholdDb                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSourceEffectMidSideSpreaderSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     SpreadAmount                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(EStereoChannelMode)                        InputMode                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EStereoChannelMode)                        OutputMode                                                  OFFSET(get<T>, {0x5, 1, 0, 0})
	DMember(bool)                                      bEqualPower                                                 OFFSET(get<bool>, {0x6, 1, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectIndividualFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSourceEffectIndividualFilterSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ESourceEffectMotionFilterCircuit)          FilterCircuit                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESourceEffectMotionFilterType)             FilterType                                                  OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     CutoffFrequency                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectMotionFilterModulationSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FSourceEffectMotionFilterModulationSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ESourceEffectMotionFilterModSource)        ModulationSource                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector2D)                                 ModulationInputRange                                        OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 ModulationOutputMinimumRange                                OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FVector2D)                                 ModulationOutputMaximumRange                                OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(float)                                     UpdateEaseMS                                                OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectMotionFilterSettings
/// Size: 0x0078 (0x000000 - 0x000078)
class FSourceEffectMotionFilterSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(ESourceEffectMotionFilterTopology)         MotionFilterTopology                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     MotionFilterMix                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FSourceEffectIndividualFilterSettings)     FilterASettings                                             OFFSET(get<T>, {0x8, 12, 0, 0})
	SMember(FSourceEffectIndividualFilterSettings)     FilterBSettings                                             OFFSET(get<T>, {0x14, 12, 0, 0})
	CMember(TMap<ESourceEffectMotionFilterModDestination, FSourceEffectMotionFilterModulationSettings>) ModulationMappings OFFSET(get<T>, {0x20, 80, 0, 0})
	DMember(float)                                     DryVolumeDb                                                 OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSourceEffectPannerSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Spread                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Pan                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSourceEffectPhaserSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EPhaserLFOType)                            LFOType                                                     OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(bool)                                      UseQuadraturePhase                                          OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FSourceEffectRingModulationSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ERingModulatorTypeSourceEffect)            ModulatorType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(UAudioBus*)                                AudioBusModulator                                           OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FSourceEffectSimpleDelaySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     SpeedOfSound                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DelayAmount                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DryAmount                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WetAmount                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Feedback                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bDelayBasedOnDistance                                       OFFSET(get<bool>, {0x14, 1, 1, 0})
	DMember(bool)                                      bUseDistanceOverride                                        OFFSET(get<bool>, {0x14, 1, 1, 1})
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FSourceEffectStereoDelaySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(EStereoDelaySourceEffect)                  DelayMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     DelayTimeMsec                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DelayRatio                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bFilterEnabled                                              OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(EStereoDelayFiltertype)                    FilterType                                                  OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(float)                                     FilterFrequency                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSourceEffectWaveShaperSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Amount                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FSubmixEffectConvolutionReverbSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     NormalizationVolumeDb                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     WetVolumeDb                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DryVolumeDb                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bMixInputChannelFormatToImpulseResponseFormat               OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(bool)                                      bMixReverbOutputToOutputChannelFormat                       OFFSET(get<bool>, {0xE, 1, 0, 0})
	DMember(float)                                     SurroundRearChannelBleedDb                                  OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bInvertRearChannelBleedPhase                                OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bSurroundRearChannelFlip                                    OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(float)                                     SurroundRearChannelBleedAmount                              OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(UAudioImpulseResponse*)                    ImpulseResponse                                             OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      AllowHardwareAcceleration                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSubmixEffectDelaySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MaximumDelayLength                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     InterpolationTime                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DelayLength                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSubmixEffectFilterSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ESubmixFilterType)                         FilterType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESubmixFilterAlgorithm)                    FilterAlgorithm                                             OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     FilterFrequency                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSubmixEffectFlexiverbSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     PreDelay                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RoomDampening                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Complexity                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Synthesis.DynamicsBandSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FDynamicsBandSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     CrossoverTopFrequency                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AttackTimeMsec                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ReleaseTimeMsec                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ThresholdDb                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     KneeBandwidthDb                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     InputGainDb                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectMultibandCompressorSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FSubmixEffectMultibandCompressorSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(ESubmixEffectDynamicsProcessorType)        DynamicsProcessorType                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESubmixEffectDynamicsPeakMode)             PeakMode                                                    OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ESubmixEffectDynamicsChannelLinkMode)      LinkMode                                                    OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(float)                                     LookAheadMsec                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bAnalogMode                                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bFourPole                                                   OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0xA, 1, 0, 0})
	CMember(ESubmixEffectDynamicsKeySource)            KeySource                                                   OFFSET(get<T>, {0xB, 1, 0, 0})
	CMember(UAudioBus*)                                ExternalAudioBus                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(USoundSubmix*)                             ExternalSubmix                                              OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(float)                                     KeyGainDb                                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bKeyAudition                                                OFFSET(get<bool>, {0x24, 1, 0, 0})
	CMember(TArray<FDynamicsBandSettings>)             Bands                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectStereoDelaySettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FSubmixEffectStereoDelaySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(EStereoDelaySourceEffect)                  DelayMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     DelayTimeMsec                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DelayRatio                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bFilterEnabled                                              OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(EStereoDelayFiltertype)                    FilterType                                                  OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(float)                                     FilterFrequency                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectStereoToQuadSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSubmixEffectStereoToQuadSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bFlipChannels                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     RearChannelGain                                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FTapDelayInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ETapLineMode)                              TapLineMode                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     DelayLength                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Gain                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   OutputChannel                                               OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     PanInDegrees                                                OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   TapId                                                       OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FSubmixEffectTapDelaySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     MaximumDelayLength                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     InterpolationTime                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TArray<FTapDelayInfo>)                     Taps                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x03D8 (0x000008 - 0x0003E0)
class FSynth2DSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FSlateBrush)                               NormalThumbImage                                            OFFSET(get<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               DisabledThumbImage                                          OFFSET(get<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               NormalBarImage                                              OFFSET(get<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               DisabledBarImage                                            OFFSET(get<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(get<T>, {0x310, 192, 0, 0})
	DMember(float)                                     BarThickness                                                OFFSET(get<float>, {0x3D0, 4, 0, 0})
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0318 (0x000008 - 0x000320)
class FSynthKnobStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FSlateBrush)                               LargeKnob                                                   OFFSET(get<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               LargeKnobOverlay                                            OFFSET(get<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               MediumKnob                                                  OFFSET(get<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               MediumKnobOverlay                                           OFFSET(get<T>, {0x250, 192, 0, 0})
	DMember(float)                                     MinValueAngle                                               OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(float)                                     MaxValueAngle                                               OFFSET(get<float>, {0x314, 4, 0, 0})
	CMember(ESynthKnobSize)                            KnobSize                                                    OFFSET(get<T>, {0x318, 1, 0, 0})
};

/// Struct /Script/Synthesis.SynthSlateStyle
/// Size: 0x0008 (0x000008 - 0x000010)
class FSynthSlateStyle : public FSlateWidgetStyle
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ESynthSlateSizeType)                       SizeType                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(ESynthSlateColorStyle)                     ColorStyle                                                  OFFSET(get<T>, {0x9, 1, 0, 0})
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

