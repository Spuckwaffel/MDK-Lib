/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AudioCapture.

/// Struct /Script/AudioCapture.AudioInputDeviceInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FAudioInputDeviceInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   DeviceName                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DeviceID                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   InputChannels                                               ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   PreferredSampleRate                                         ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(bool)                                      bSupportsHardwareAEC                                        ___ OFFSET(get<bool>, {0x28, 1, 1, 0})
};

/// Struct /Script/AudioCapture.AudioCaptureDeviceInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FAudioCaptureDeviceInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     DeviceName                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   NumInputChannels                                            ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Class /Script/AudioCapture.AudioCapture
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UAudioCapture : public UAudioGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/AudioCapture.AudioCaptureFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioCapture.AudioCaptureBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioCaptureBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioCapture.AudioCaptureComponent
/// Size: 0x00C0 (0x000900 - 0x0009C0)
class UAudioCaptureComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2496;

public:
	DMember(int32_t)                                   JitterLatencyFrames                                         ___ OFFSET(get<int32_t>, {0x900, 4, 0, 0})
};

