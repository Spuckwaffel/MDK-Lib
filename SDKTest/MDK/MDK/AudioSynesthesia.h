
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioAnalyzer
/// dependency: CoreUObject

/// Class /Script/AudioSynesthesia.AudioSynesthesiaSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioSynesthesiaSettings : public UAudioAnalyzerSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRTSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioSynesthesiaNRTSettings : public UAudioAnalyzerNRTSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioSynesthesia.AudioSynesthesiaNRT
/// Size: 0x0000 (0x000078 - 0x000078)
class UAudioSynesthesiaNRT : public UAudioAnalyzerNRT
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/AudioSynesthesia.ConstantQNRTSettings
/// Size: 0x0020 (0x000028 - 0x000048)
class UConstantQNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     StartingFrequency                                           ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumBands                                                    ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     NumBandsPerOctave                                           ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     AnalysisPeriod                                              ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bDownmixToMono                                              ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(EConstantQFFTSizeEnum)                     FFTSize                                                     ___ OFFSET(get<T>, {0x39, 1, 0, 0})
	CMember(EFFTWindowType)                            WindowType                                                  ___ OFFSET(get<T>, {0x3A, 1, 0, 0})
	CMember(EAudioSpectrumType)                        SpectrumType                                                ___ OFFSET(get<T>, {0x3B, 1, 0, 0})
	DMember(float)                                     BandWidthStretch                                            ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(EConstantQNormalizationEnum)               CQTNormalization                                            ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                ___ OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.ConstantQNRT
/// Size: 0x0008 (0x000078 - 0x000080)
class UConstantQNRT : public UAudioSynesthesiaNRT
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UConstantQNRTSettings*)                    Settings                                                    ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/AudioSynesthesia.LoudnessSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class ULoudnessSettings : public UAudioSynesthesiaSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     AnalysisPeriod                                              ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(ELoudnessCurveTypeEnum)                    CurveType                                                   ___ OFFSET(get<T>, {0x34, 1, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     ExpectedMaxLoudness                                         ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.LoudnessAnalyzer
/// Size: 0x0048 (0x000090 - 0x0000D8)
class ULoudnessAnalyzer : public UAudioAnalyzer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(ULoudnessSettings*)                        Settings                                                    ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOverallLoudnessResults                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPerChannelLoudnessResults                                 ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLatestOverallLoudnessResults                              ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLatestPerChannelLoudnessResults                           ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
};

/// Class /Script/AudioSynesthesia.LoudnessNRTSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class ULoudnessNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     AnalysisPeriod                                              ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(ELoudnessNRTCurveTypeEnum)                 CurveType                                                   ___ OFFSET(get<T>, {0x34, 1, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.LoudnessNRT
/// Size: 0x0008 (0x000078 - 0x000080)
class ULoudnessNRT : public UAudioSynesthesiaNRT
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(ULoudnessNRTSettings*)                     Settings                                                    ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/AudioSynesthesia.MeterSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UMeterSettings : public UAudioSynesthesiaSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     AnalysisPeriod                                              ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(EMeterPeakType)                            PeakMode                                                    ___ OFFSET(get<T>, {0x2C, 1, 0, 0})
	DMember(int32_t)                                   MeterAttackTime                                             ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MeterReleaseTime                                            ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   PeakHoldTime                                                ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     ClippingThreshold                                           ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.MeterAnalyzer
/// Size: 0x00A8 (0x000090 - 0x000138)
class UMeterAnalyzer : public UAudioAnalyzer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	CMember(UMeterSettings*)                           Settings                                                    ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOverallMeterResults                                       ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPerChannelMeterResults                                    ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLatestOverallMeterResults                                 ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLatestPerChannelMeterResults                              ___ OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Class /Script/AudioSynesthesia.OnsetNRTSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UOnsetNRTSettings : public UAudioSynesthesiaNRTSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bDownmixToMono                                              ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     GranularityInSeconds                                        ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Sensitivity                                                 ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/AudioSynesthesia.OnsetNRT
/// Size: 0x0008 (0x000078 - 0x000080)
class UOnsetNRT : public UAudioSynesthesiaNRT
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UOnsetNRTSettings*)                        Settings                                                    ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/AudioSynesthesia.SynesthesiaSpectrumAnalysisSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class USynesthesiaSpectrumAnalysisSettings : public UAudioSynesthesiaSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     AnalysisPeriod                                              ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(EFFTSize)                                  FFTSize                                                     ___ OFFSET(get<T>, {0x2C, 1, 0, 0})
	CMember(EAudioSpectrumType)                        SpectrumType                                                ___ OFFSET(get<T>, {0x2D, 1, 0, 0})
	CMember(EFFTWindowType)                            WindowType                                                  ___ OFFSET(get<T>, {0x2E, 1, 0, 0})
	DMember(bool)                                      bDownmixToMono                                              ___ OFFSET(get<bool>, {0x2F, 1, 0, 0})
};

/// Class /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer
/// Size: 0x0058 (0x000090 - 0x0000E8)
class USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(USynesthesiaSpectrumAnalysisSettings*)     Settings                                                    ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSpectrumResults                                           ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLatestSpectrumResults                                     ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
};

/// Struct /Script/AudioSynesthesia.LoudnessResults
/// Size: 0x0010 (0x000000 - 0x000010)
class FLoudnessResults : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Loudness                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     NormalizedLoudness                                          ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PerceptualEnergy                                            ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     TimeSeconds                                                 ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/AudioSynesthesia.MeterResults
/// Size: 0x0014 (0x000000 - 0x000014)
class FMeterResults : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     TimeSeconds                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MeterValue                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PeakValue                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   NumSamplesClipping                                          ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     ClippingValue                                               ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/AudioSynesthesia.SynesthesiaSpectrumResults
/// Size: 0x0018 (0x000000 - 0x000018)
class FSynesthesiaSpectrumResults : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     TimeSeconds                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<float>)                             SpectrumValues                                              ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/AudioSynesthesia.EConstantQNormalizationEnum
/// Size: 0x04
enum EConstantQNormalizationEnum : uint8_t
{
	EConstantQNormalizationEnum__EqualEuclideanNorm0                                 = 0,
	EConstantQNormalizationEnum__EqualEnergy1                                        = 1,
	EConstantQNormalizationEnum__EqualAmplitude2                                     = 2,
	EConstantQNormalizationEnum__EConstantQNormalizationEnum_MAX3                    = 3
};

/// Enum /Script/AudioSynesthesia.EConstantQFFTSizeEnum
/// Size: 0x09
enum EConstantQFFTSizeEnum : uint8_t
{
	EConstantQFFTSizeEnum__Min0                                                      = 0,
	EConstantQFFTSizeEnum__XXSmall1                                                  = 1,
	EConstantQFFTSizeEnum__XSmall2                                                   = 2,
	EConstantQFFTSizeEnum__Small3                                                    = 3,
	EConstantQFFTSizeEnum__Medium4                                                   = 4,
	EConstantQFFTSizeEnum__Large5                                                    = 5,
	EConstantQFFTSizeEnum__XLarge6                                                   = 6,
	EConstantQFFTSizeEnum__XXLarge7                                                  = 7,
	EConstantQFFTSizeEnum__Max8                                                      = 8
};

/// Enum /Script/AudioSynesthesia.ELoudnessCurveTypeEnum
/// Size: 0x06
enum ELoudnessCurveTypeEnum : uint8_t
{
	ELoudnessCurveTypeEnum__A0                                                       = 0,
	ELoudnessCurveTypeEnum__B1                                                       = 1,
	ELoudnessCurveTypeEnum__C2                                                       = 2,
	ELoudnessCurveTypeEnum__D3                                                       = 3,
	ELoudnessCurveTypeEnum__None4                                                    = 4,
	ELoudnessCurveTypeEnum__ELoudnessCurveTypeEnum_MAX5                              = 5
};

/// Enum /Script/AudioSynesthesia.ELoudnessNRTCurveTypeEnum
/// Size: 0x06
enum ELoudnessNRTCurveTypeEnum : uint8_t
{
	ELoudnessNRTCurveTypeEnum__A0                                                    = 0,
	ELoudnessNRTCurveTypeEnum__B1                                                    = 1,
	ELoudnessNRTCurveTypeEnum__C2                                                    = 2,
	ELoudnessNRTCurveTypeEnum__D3                                                    = 3,
	ELoudnessNRTCurveTypeEnum__None4                                                 = 4,
	ELoudnessNRTCurveTypeEnum__ELoudnessNRTCurveTypeEnum_MAX5                        = 5
};

/// Enum /Script/AudioSynesthesia.EMeterPeakType
/// Size: 0x05
enum EMeterPeakType : uint8_t
{
	EMeterPeakType__MeanSquared0                                                     = 0,
	EMeterPeakType__RootMeanSquared1                                                 = 1,
	EMeterPeakType__Peak2                                                            = 2,
	EMeterPeakType__Count3                                                           = 3,
	EMeterPeakType__EMeterPeakType_MAX4                                              = 4
};

