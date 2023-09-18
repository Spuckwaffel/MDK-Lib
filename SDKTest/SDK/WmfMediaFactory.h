/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package WmfMediaFactory.

/// Class /Script/WmfMediaFactory.WmfMediaSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UWmfMediaSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      AllowNonStandardCodecs                                      ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      LowLatency                                                  ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      NativeAudioOut                                              ___ OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      HardwareAcceleratedVideoDecoding                            ___ OFFSET(get<bool>, {0x2B, 1, 0, 0})
};

