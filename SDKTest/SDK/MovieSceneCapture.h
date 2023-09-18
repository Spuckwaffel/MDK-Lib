/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MovieSceneCapture.

/// Struct /Script/MovieSceneCapture.CompositionGraphCapturePasses
/// Size: 0x0010 (0x000000 - 0x000010)
class FCompositionGraphCapturePasses : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           Value                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MovieSceneCapture.CaptureResolution
/// Size: 0x0008 (0x000000 - 0x000008)
class FCaptureResolution : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   ResX                                                        ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ResY                                                        ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/MovieSceneCapture.MovieSceneCaptureSettings
/// Size: 0x0070 (0x000000 - 0x000070)
class FMovieSceneCaptureSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FDirectoryPath)                            OutputDirectory                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(UClass*)                                   GameModeOverride                                            ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FString)                                   OutputFormat                                                ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bOverwriteExisting                                          ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bUseRelativeFrameNumbers                                    ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   HandleFrames                                                ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FString)                                   MovieExtension                                              ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(char)                                      ZeroPadFrameNumbers                                         ___ OFFSET(get<char>, {0x40, 1, 0, 0})
	SMember(FFrameRate)                                FrameRate                                                   ___ OFFSET(get<T>, {0x44, 8, 0, 0})
	DMember(bool)                                      bUseCustomFrameRate                                         ___ OFFSET(get<bool>, {0x4C, 1, 0, 0})
	SMember(FFrameRate)                                CustomFrameRate                                             ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FCaptureResolution)                        Resolution                                                  ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	DMember(bool)                                      bEnableTextureStreaming                                     ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bCinematicEngineScalability                                 ___ OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(bool)                                      bCinematicMode                                              ___ OFFSET(get<bool>, {0x62, 1, 0, 0})
	DMember(bool)                                      bAllowMovement                                              ___ OFFSET(get<bool>, {0x63, 1, 0, 0})
	DMember(bool)                                      bAllowTurning                                               ___ OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(bool)                                      bShowPlayer                                                 ___ OFFSET(get<bool>, {0x65, 1, 0, 0})
	DMember(bool)                                      bShowHUD                                                    ___ OFFSET(get<bool>, {0x66, 1, 0, 0})
	DMember(bool)                                      bUsePathTracer                                              ___ OFFSET(get<bool>, {0x67, 1, 0, 0})
	DMember(int32_t)                                   PathTracerSamplePerPixel                                    ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
};

/// Struct /Script/MovieSceneCapture.FrameMetrics
/// Size: 0x0010 (0x000000 - 0x000010)
class FFrameMetrics : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     TotalElapsedTime                                            ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     FrameDelta                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   FrameNumber                                                 ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   NumDroppedFrames                                            ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/MovieSceneCapture.CapturedPixelsID
/// Size: 0x0050 (0x000000 - 0x000050)
class FCapturedPixelsID : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FName, FName>)                        Identifiers                                                 ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/MovieSceneCapture.CapturedPixels
/// Size: 0x0010 (0x000000 - 0x000010)
class FCapturedPixels : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureProtocolBase
/// Size: 0x0030 (0x000028 - 0x000058)
class UMovieSceneCaptureProtocolBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EMovieSceneCaptureProtocolState)           State                                                       ___ OFFSET(get<T>, {0x50, 1, 0, 0})
};

/// Class /Script/MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneCapture.NullAudioCaptureProtocol
/// Size: 0x0000 (0x000058 - 0x000058)
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneCapture.MasterAudioSubmixCaptureProtocol
/// Size: 0x0038 (0x000058 - 0x000090)
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   Filename                                                    ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/MovieSceneCapture.MovieSceneImageCaptureProtocolBase
/// Size: 0x0000 (0x000058 - 0x000058)
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/MovieSceneCapture.CompositionGraphCaptureProtocol
/// Size: 0x0068 (0x000058 - 0x0000C0)
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FCompositionGraphCapturePasses)            IncludeRenderPasses                                         ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bCaptureFramesInHDR                                         ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(int32_t)                                   HDRCompressionQuality                                       ___ OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	CMember(TEnumAsByte<EHDRCaptureGamut>)             CaptureGamut                                                ___ OFFSET(get<T>, {0x70, 1, 0, 0})
	SMember(FSoftObjectPath)                           PostProcessingMaterial                                      ___ OFFSET(get<T>, {0x78, 24, 0, 0})
	DMember(bool)                                      bDisableScreenPercentage                                    ___ OFFSET(get<bool>, {0x90, 1, 0, 0})
	CMember(UMaterialInterface*)                       PostProcessingMaterialPtr                                   ___ OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCaptureInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneCapture.FrameGrabberProtocol
/// Size: 0x0010 (0x000058 - 0x000068)
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol
/// Size: 0x0070 (0x000068 - 0x0000D8)
class UImageSequenceProtocol : public UFrameGrabberProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Script/MovieSceneCapture.CompressedImageSequenceProtocol
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(int32_t)                                   CompressionQuality                                          ___ OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_BMP
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_PNG
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_JPG
/// Size: 0x0000 (0x0000E0 - 0x0000E0)
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Class /Script/MovieSceneCapture.ImageSequenceProtocol_EXR
/// Size: 0x0010 (0x0000D8 - 0x0000E8)
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(bool)                                      bCompressed                                                 ___ OFFSET(get<bool>, {0xD8, 1, 0, 0})
	CMember(TEnumAsByte<EHDRCaptureGamut>)             CaptureGamut                                                ___ OFFSET(get<T>, {0xD9, 1, 0, 0})
};

/// Class /Script/MovieSceneCapture.MovieSceneCapture
/// Size: 0x0200 (0x000028 - 0x000228)
class UMovieSceneCapture : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FSoftClassPath)                            ImageCaptureProtocolType                                    ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FSoftClassPath)                            AudioCaptureProtocolType                                    ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	CMember(UMovieSceneImageCaptureProtocolBase*)      ImageCaptureProtocol                                        ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UMovieSceneAudioCaptureProtocolBase*)      AudioCaptureProtocol                                        ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FMovieSceneCaptureSettings)                Settings                                                    ___ OFFSET(get<T>, {0x78, 112, 0, 0})
	DMember(bool)                                      bUseSeparateProcess                                         ___ OFFSET(get<bool>, {0xE8, 1, 0, 0})
	DMember(bool)                                      bCloseEditorWhenCaptureStarts                               ___ OFFSET(get<bool>, {0xE9, 1, 0, 0})
	SMember(FString)                                   AdditionalCommandLineArguments                              ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FString)                                   InheritedCommandLineArguments                               ___ OFFSET(get<T>, {0x100, 16, 0, 0})
};

/// Class /Script/MovieSceneCapture.LevelCapture
/// Size: 0x0020 (0x000228 - 0x000248)
class ULevelCapture : public UMovieSceneCapture
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	DMember(bool)                                      bAutoStartCapture                                           ___ OFFSET(get<bool>, {0x228, 1, 0, 0})
	SMember(FGuid)                                     PrerequisiteActorId                                         ___ OFFSET(get<T>, {0x234, 16, 0, 0})
};

/// Class /Script/MovieSceneCapture.MovieSceneCaptureEnvironment
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneCaptureEnvironment : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MovieSceneCapture.UserDefinedCaptureProtocol
/// Size: 0x0080 (0x000058 - 0x0000D8)
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(UWorld*)                                   World                                                       ___ OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/MovieSceneCapture.UserDefinedImageCaptureProtocol
/// Size: 0x0008 (0x0000D8 - 0x0000E0)
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(EDesiredImageFormat)                       Format                                                      ___ OFFSET(get<T>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bEnableCompression                                          ___ OFFSET(get<bool>, {0xD9, 1, 0, 0})
	DMember(int32_t)                                   CompressionQuality                                          ___ OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
};

/// Class /Script/MovieSceneCapture.VideoCaptureProtocol
/// Size: 0x0018 (0x000068 - 0x000080)
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      bUseCompression                                             ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(float)                                     CompressionQuality                                          ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
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

/// Enum /Script/MovieSceneCapture.EMovieSceneCaptureProtocolState
/// Size: 0x05
enum EMovieSceneCaptureProtocolState : uint8_t
{
	EMovieSceneCaptureProtocolState__Idle0                                           = 0,
	EMovieSceneCaptureProtocolState__Initialized1                                    = 1,
	EMovieSceneCaptureProtocolState__Capturing2                                      = 2,
	EMovieSceneCaptureProtocolState__Finalizing3                                     = 3,
	EMovieSceneCaptureProtocolState__EMovieSceneCaptureProtocolState_MAX4            = 4
};

