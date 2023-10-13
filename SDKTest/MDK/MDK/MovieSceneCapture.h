
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/MovieSceneCapture.MovieSceneCapture
/// Size: 0x0218 (0x000028 - 0x000240)
class UMovieSceneCapture : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FCaptureProtocolID)                        CaptureType                                                 OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	CMember(UMovieSceneCaptureProtocolSettings*)       ProtocolSettings                                            OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FMovieSceneCaptureSettings)                Settings                                                    OFFSET(getStruct<T>, {0x48, 72, 0, 0})
	DMember(bool)                                      bUseSeparateProcess                                         OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bCloseEditorWhenCaptureStarts                               OFFSET(get<bool>, {0x91, 1, 0, 0})
	SMember(FString)                                   AdditionalCommandLineArguments                              OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   InheritedCommandLineArguments                               OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/MovieSceneCapture.AutomatedLevelSequenceCapture
/// Size: 0x0000 (0x000240 - 0x000240)
class UAutomatedLevelSequenceCapture : public UMovieSceneCapture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureProtocolSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCaptureProtocolSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneCapture.CompositionGraphCaptureSettings
/// Size: 0x0038 (0x000028 - 0x000060)
class UCompositionGraphCaptureSettings : public UMovieSceneCaptureProtocolSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FCompositionGraphCapturePasses)            IncludeRenderPasses                                         OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bCaptureFramesInHDR                                         OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   HDRCompressionQuality                                       OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TEnumAsByte<EHDRCaptureGamut>)             CaptureGamut                                                OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FSoftObjectPath)                           PostProcessingMaterial                                      OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Class /Script/MovieSceneCapture.FrameGrabberProtocolSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UFrameGrabberProtocolSettings : public UMovieSceneCaptureProtocolSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/MovieSceneCapture.BmpImageCaptureSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UBmpImageCaptureSettings : public UMovieSceneCaptureProtocolSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneCapture.ImageCaptureSettings
/// Size: 0x0008 (0x000030 - 0x000038)
class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   CompressionQuality                                          OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCaptureInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneCapture.LevelCapture
/// Size: 0x0020 (0x000240 - 0x000260)
class ULevelCapture : public UMovieSceneCapture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	DMember(bool)                                      bAutoStartCapture                                           OFFSET(get<bool>, {0x238, 1, 0, 0})
	SMember(FGuid)                                     PrerequisiteActorId                                         OFFSET(getStruct<T>, {0x244, 16, 0, 0})
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCaptureEnvironment : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber
	// int32_t GetCaptureFrameNumber();                                                                                         // [0x1f791e0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime
	// float GetCaptureElapsedTime();                                                                                           // [0x1f791b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/MovieSceneCapture.VideoCaptureSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bUseCompression                                             OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     CompressionQuality                                          OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FString)                                   VideoCodec                                                  OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/MovieSceneCapture.CompositionGraphCapturePasses
/// Size: 0x0010 (0x000000 - 0x000010)
class FCompositionGraphCapturePasses : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           Value                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieSceneCapture.CaptureProtocolID
/// Size: 0x0008 (0x000000 - 0x000008)
class FCaptureProtocolID : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Identifier                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MovieSceneCapture.MovieSceneCaptureSettings
/// Size: 0x0048 (0x000000 - 0x000048)
class FMovieSceneCaptureSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FDirectoryPath)                            OutputDirectory                                             OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(UClass*)                                   GameModeOverride                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FString)                                   OutputFormat                                                OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bOverwriteExisting                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bUseRelativeFrameNumbers                                    OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   HandleFrames                                                OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(unsigned char)                             ZeroPadFrameNumbers                                         OFFSET(get<unsigned char>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   FrameRate                                                   OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	SMember(FCaptureResolution)                        Resolution                                                  OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bEnableTextureStreaming                                     OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bCinematicEngineScalability                                 OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bCinematicMode                                              OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bAllowMovement                                              OFFSET(get<bool>, {0x43, 1, 0, 0})
	DMember(bool)                                      bAllowTurning                                               OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(bool)                                      bShowPlayer                                                 OFFSET(get<bool>, {0x45, 1, 0, 0})
	DMember(bool)                                      bShowHUD                                                    OFFSET(get<bool>, {0x46, 1, 0, 0})
};

/// Struct /Script/MovieSceneCapture.CaptureResolution
/// Size: 0x0008 (0x000000 - 0x000008)
class FCaptureResolution : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint32_t)                                  ResX                                                        OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  ResY                                                        OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
};

/// Enum /Script/MovieSceneCapture.EHDRCaptureGamut
/// Size: 0x07
enum EHDRCaptureGamut : uint8_t
{
	HCGM_Rec7090                                                                     = 0,
	HCGM_P3DCI1                                                                      = 1,
	HCGM_Rec20202                                                                    = 2,
	HCGM_ACES3                                                                       = 3,
	HCGM_ACEScg4                                                                     = 4,
	HCGM_Linear5                                                                     = 5,
	HCGM_MAX6                                                                        = 6
};

