
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AudioAnalyzer.AudioAnalyzerAssetBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioAnalyzerAssetBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioAnalyzerSettings : public UAudioAnalyzerAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzer
/// Size: 0x0068 (0x000028 - 0x000090)
class UAudioAnalyzer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UAudioBus*)                                AudioBus                                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UAudioAnalyzerSubsystem*)                  AudioAnalyzerSubsystem                                      ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRTSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UAudioAnalyzerNRTSettings : public UAudioAnalyzerAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerNRT
/// Size: 0x0050 (0x000028 - 0x000078)
class UAudioAnalyzerNRT : public UAudioAnalyzerAssetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(USoundWave*)                               sound                                                       ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     DurationInSeconds                                           ___ OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerSubsystem
/// Size: 0x0020 (0x000030 - 0x000050)
class UAudioAnalyzerSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<UAudioAnalyzer*>)                   AudioAnalyzers                                              ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

