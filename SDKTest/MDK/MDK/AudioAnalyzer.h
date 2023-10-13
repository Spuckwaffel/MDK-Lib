
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
	CMember(UAudioBus*)                                AudioBus                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UAudioAnalyzerSubsystem*)                  AudioAnalyzerSubsystem                                      OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/AudioAnalyzer.AudioAnalyzer.StopAnalyzing
	// void StopAnalyzing(UObject* WorldContextObject);                                                                         // [0x9971d34] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
	// Function /Script/AudioAnalyzer.AudioAnalyzer.StartAnalyzing
	// void StartAnalyzing(UObject* WorldContextObject, UAudioBus* AudioBusToAnalyze);                                          // [0x9971910] Final|RequiredAPI|BlueprintCosmetic|Native|Public|BlueprintCallable 
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
	CMember(USoundWave*)                               sound                                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(float)                                     DurationInSeconds                                           OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/AudioAnalyzer.AudioAnalyzerSubsystem
/// Size: 0x0020 (0x000030 - 0x000050)
class UAudioAnalyzerSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<UAudioAnalyzer*>)                   AudioAnalyzers                                              OFFSET(get<T>, {0x30, 16, 0, 0})
};

