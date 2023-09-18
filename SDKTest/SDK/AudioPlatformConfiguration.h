/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioPlatformConfiguration.

/// Struct /Script/AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
class FPlatformRuntimeAudioCompressionOverrides : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bOverrideCompressionTimes                                   ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     DurationThreshold                                           ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxNumRandomBranches                                        ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SoundCueQualityIndex                                        ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Enum /Script/AudioPlatformConfiguration.ESoundwaveSampleRateSettings
/// Size: 0x06
enum ESoundwaveSampleRateSettings : uint8_t
{
	ESoundwaveSampleRateSettings__Max0                                               = 0,
	ESoundwaveSampleRateSettings__High1                                              = 1,
	ESoundwaveSampleRateSettings__Medium2                                            = 2,
	ESoundwaveSampleRateSettings__Low3                                               = 3,
	ESoundwaveSampleRateSettings__Min4                                               = 4,
	ESoundwaveSampleRateSettings__MatchDevice_DEPRECATED5                            = 5
};

