
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/REVRuntime.REVComponent
/// Size: 0x0030 (0x000900 - 0x000930)
class UREVComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
	CMember(UREVModel*)                                Model                                                       ___ OFFSET(get<T>, {0x908, 8, 0, 0})
	CMember(URevSettings*)                             SimSettings                                                 ___ OFFSET(get<T>, {0x910, 8, 0, 0})
	DMember(float)                                     PitchMultiplier                                             ___ OFFSET(get<float>, {0x918, 4, 0, 0})
};

/// Class /Script/REVRuntime.REVModel
/// Size: 0x0048 (0x000028 - 0x000070)
class UREVModel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     SampleRate                                                  ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   NumChannels                                                 ___ OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
};

/// Class /Script/REVRuntime.RevSettings
/// Size: 0x0058 (0x000028 - 0x000080)
class URevSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     UpShiftDuration                                             ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     UpShiftAttackDuration                                       ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     UpShiftAttackVolumeSpike                                    ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     UpShiftAttackRPM                                            ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     UpShiftAttackThrottleTime                                   ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     UpShiftWobblePitchFreq                                      ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     UpShiftWobblePitchAmp                                       ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(bool)                                      UpShiftWobbleEnabled                                        ___ OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(float)                                     UpShiftWobbleVolFreq                                        ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     UpShiftWobbleVolAmp                                         ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     UpShiftWobbleDuration                                       ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     DownShiftDuration                                           ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     PopDuration                                                 ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     ClutchRPMSpike                                              ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     ClutchRPMSpikeDuration                                      ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     ClutchRPMMergeTime                                          ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
};

