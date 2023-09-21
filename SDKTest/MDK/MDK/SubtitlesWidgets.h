
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/SubtitlesWidgets.SubtitleDisplayOptions
/// Size: 0x0170 (0x000030 - 0x0001A0)
class USubtitleDisplayOptions : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x30, 88, 0, 0})
	DMember(int32_t)                                   DisplayTextSizes                                            OFFSET(get<int32_t>, {0x88, 20, 0, 0})
	SMember(FLinearColor)                              DisplayTextColors                                           OFFSET(getStruct<T>, {0x9C, 32, 0, 0})
	DMember(float)                                     DisplayBorderSize                                           OFFSET(get<float>, {0xBC, 12, 0, 0})
	DMember(float)                                     DisplayBackgroundOpacity                                    OFFSET(get<float>, {0xC8, 20, 0, 0})
	SMember(FSlateBrush)                               BackgroundBrush                                             OFFSET(getStruct<T>, {0xE0, 192, 0, 0})
};

/// Class /Script/SubtitlesWidgets.SubtitleDisplay
/// Size: 0x0418 (0x000178 - 0x000590)
class USubtitleDisplay : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	SMember(FSubtitleFormat)                           Format                                                      OFFSET(getStruct<T>, {0x178, 4, 0, 0})
	CMember(USubtitleDisplayOptions*)                  Options                                                     OFFSET(get<T>, {0x180, 8, 0, 0})
	DMember(float)                                     WrapTextAt                                                  OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(bool)                                      bPreviewMode                                                OFFSET(get<bool>, {0x18C, 1, 0, 0})
	SMember(FText)                                     PreviewText                                                 OFFSET(getStruct<T>, {0x190, 24, 0, 0})
	SMember(FTextBlockStyle)                           GeneratedStyle                                              OFFSET(getStruct<T>, {0x1B0, 784, 0, 0})
	SMember(FSlateBrush)                               GeneratedBackgroundBorder                                   OFFSET(getStruct<T>, {0x4C0, 192, 0, 0})


	/// Functions
	// Function /Script/SubtitlesWidgets.SubtitleDisplay.HasSubtitles
	// bool HasSubtitles();                                                                                                     // [0x713dedc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SubtitlesWidgets.SubtitleDisplayNative
/// Size: 0x03F8 (0x000028 - 0x000420)
class USubtitleDisplayNative : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	CMember(USubtitleDisplayOptions*)                  Options                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FTextBlockStyle)                           GeneratedStyle                                              OFFSET(getStruct<T>, {0x40, 784, 0, 0})
	SMember(FSlateBrush)                               GeneratedBackgroundBorder                                   OFFSET(getStruct<T>, {0x350, 192, 0, 0})
};

/// Class /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer
/// Size: 0x0030 (0x000028 - 0x000058)
class UFortMediaSubtitlesPlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UOverlays*)                                SourceSubtitles                                             OFFSET(get<T>, {0x30, 8, 0, 0})


	/// Functions
	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop
	// void Stop();                                                                                                             // [0x713dfbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles
	// void SetSubtitles(UOverlays* Subtitles);                                                                                 // [0x713df40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.Play
	// void Play();                                                                                                             // [0x713df2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer
	// void BindToMediaPlayer(UMediaPlayer* InMediaPlayer);                                                                     // [0x713dde8] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SubtitlesWidgets.SubtitleDisplaySubsystem
/// Size: 0x0020 (0x000030 - 0x000050)
class USubtitleDisplaySubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FSubtitleFormat)                           SubtitleFormat                                              OFFSET(getStruct<T>, {0x48, 4, 0, 0})
};

/// Struct /Script/SubtitlesWidgets.SubtitleFormat
/// Size: 0x0004 (0x000000 - 0x000004)
class FSubtitleFormat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	CMember(ESubtitleDisplayTextSize)                  SubtitleTextSize                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESubtitleDisplayTextColor)                 SubtitleTextColor                                           OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ESubtitleDisplayTextBorder)                SubtitleTextBorder                                          OFFSET(get<T>, {0x2, 1, 0, 0})
	CMember(ESubtitleDisplayBackgroundOpacity)         SubtitleBackgroundOpacity                                   OFFSET(get<T>, {0x3, 1, 0, 0})
};

/// Enum /Script/SubtitlesWidgets.ESubtitleDisplayTextSize
/// Size: 0x06
enum ESubtitleDisplayTextSize : uint8_t
{
	ESubtitleDisplayTextSize__ExtraSmall0                                            = 0,
	ESubtitleDisplayTextSize__Small1                                                 = 1,
	ESubtitleDisplayTextSize__Medium2                                                = 2,
	ESubtitleDisplayTextSize__Large3                                                 = 3,
	ESubtitleDisplayTextSize__ExtraLarge4                                            = 4,
	ESubtitleDisplayTextSize__ESubtitleDisplayTextSize_MAX5                          = 5
};

/// Enum /Script/SubtitlesWidgets.ESubtitleDisplayTextColor
/// Size: 0x03
enum ESubtitleDisplayTextColor : uint8_t
{
	ESubtitleDisplayTextColor__White0                                                = 0,
	ESubtitleDisplayTextColor__Yellow1                                               = 1,
	ESubtitleDisplayTextColor__ESubtitleDisplayTextColor_MAX2                        = 2
};

/// Enum /Script/SubtitlesWidgets.ESubtitleDisplayTextBorder
/// Size: 0x04
enum ESubtitleDisplayTextBorder : uint8_t
{
	ESubtitleDisplayTextBorder__None0                                                = 0,
	ESubtitleDisplayTextBorder__Outline1                                             = 1,
	ESubtitleDisplayTextBorder__DropShadow2                                          = 2,
	ESubtitleDisplayTextBorder__ESubtitleDisplayTextBorder_MAX3                      = 3
};

/// Enum /Script/SubtitlesWidgets.ESubtitleDisplayBackgroundOpacity
/// Size: 0x06
enum ESubtitleDisplayBackgroundOpacity : uint8_t
{
	ESubtitleDisplayBackgroundOpacity__Clear0                                        = 0,
	ESubtitleDisplayBackgroundOpacity__Low1                                          = 1,
	ESubtitleDisplayBackgroundOpacity__Medium2                                       = 2,
	ESubtitleDisplayBackgroundOpacity__High3                                         = 3,
	ESubtitleDisplayBackgroundOpacity__Solid4                                        = 4,
	ESubtitleDisplayBackgroundOpacity__ESubtitleDisplayBackgroundOpacity_MAX5        = 5
};

