
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MotoSynth.MotoSynthPreset
/// Size: 0x0138 (0x000028 - 0x000160)
class UMotoSynthPreset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FMotoSynthRuntimeSettings)                 Settings                                                    ___ OFFSET(get<T>, {0x28, 312, 0, 0})
};

/// Class /Script/MotoSynth.MotoSynthSource
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UMotoSynthSource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	DMember(bool)                                      bConvertTo8Bit                                              ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     DownSampleFactor                                            ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        RpmCurve                                                    ___ OFFSET(get<T>, {0x30, 136, 0, 0})
	CMember(TArray<float>)                             SourceData                                                  ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<int16_t>)                           SourceDataPCM                                               ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(int32_t)                                   SourceSampleRate                                            ___ OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	CMember(TArray<FGrainTableEntry>)                  GrainTable                                                  ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/MotoSynth.SynthComponentMoto
/// Size: 0x01A0 (0x000900 - 0x000AA0)
class USynthComponentMoto : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2720;

public:
	CMember(UMotoSynthPreset*)                         MotoSynthPreset                                             ___ OFFSET(get<T>, {0x900, 8, 0, 0})
	DMember(float)                                     RPM                                                         ___ OFFSET(get<float>, {0x908, 4, 0, 0})
};

/// Struct /Script/MotoSynth.MotoSynthRuntimeSettings
/// Size: 0x0138 (0x000000 - 0x000138)
class FMotoSynthRuntimeSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	DMember(bool)                                      bSynthToneEnabled                                           ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector2D)                                 SynthToneVolumeRange                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 SynthToneFilterFrequencyRange                               ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bSynthToneEnvelopeEnabled                                   ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FVector2D)                                 SynthToneAttackTimeMsecRange                                ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FVector2D)                                 SynthToneAttackCurveRange                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FVector2D)                                 SynthToneDecayTimeMsecRange                                 ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FVector2D)                                 SynthToneDecayCurveRange                                    ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(int32_t)                                   SynthOctaveShift                                            ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(bool)                                      bNoiseEnabled                                               ___ OFFSET(get<bool>, {0x74, 1, 0, 0})
	SMember(FVector2D)                                 NoiseVolumeRange                                            ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bNoiseEnvelopeEnabled                                       ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FVector2D)                                 NoiseLPFRange                                               ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FVector2D)                                 NoiseAttackTimeMsecRange                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FVector2D)                                 NoiseAttackCurveRange                                       ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FVector2D)                                 NoiseDecayTimeMsecRange                                     ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FVector2D)                                 NoiseDecayCurveRange                                        ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	DMember(bool)                                      bGranularEngineEnabled                                      ___ OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(float)                                     GranularEngineVolume                                        ___ OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(float)                                     GranularEnginePitchScale                                    ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(int32_t)                                   NumSamplesToCrossfadeBetweenGrains                          ___ OFFSET(get<int32_t>, {0xEC, 4, 0, 0})
	DMember(int32_t)                                   NumGrainTableEntriesPerGrain                                ___ OFFSET(get<int32_t>, {0xF0, 4, 0, 0})
	DMember(int32_t)                                   GrainTableRandomOffsetForConstantRPMs                       ___ OFFSET(get<int32_t>, {0xF4, 4, 0, 0})
	DMember(int32_t)                                   GrainCrossfadeSamplesForConstantRPMs                        ___ OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	CMember(UMotoSynthSource*)                         AccelerationSource                                          ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(UMotoSynthSource*)                         DecelerationSource                                          ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	DMember(bool)                                      bStereoWidenerEnabled                                       ___ OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(float)                                     StereoDelayMsec                                             ___ OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     StereoFeedback                                              ___ OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     StereoWidenerWetlevel                                       ___ OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     StereoWidenerDryLevel                                       ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     StereoWidenerDelayRatio                                     ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(bool)                                      bStereoWidenerFilterEnabled                                 ___ OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(float)                                     StereoWidenerFilterFrequency                                ___ OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     StereoWidenerFilterQ                                        ___ OFFSET(get<float>, {0x130, 4, 0, 0})
};

/// Struct /Script/MotoSynth.GrainTableEntry
/// Size: 0x0008 (0x000000 - 0x000008)
class FGrainTableEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SampleIndex                                                 ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     RPM                                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

