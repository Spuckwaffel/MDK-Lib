
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer
/// Size: 0x0030 (0x000028 - 0x000058)
class UFortMediaSubtitlesPlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UOverlays*)                                SourceSubtitles                                             OFFSET(get<T>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop
	// void Stop();                                                                                                             // [0x7d8b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles
	// void SetSubtitles(UOverlays* Subtitles);                                                                                 // [0x7d8b10] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.Play
	// void Play();                                                                                                             // [0x7d8af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer
	// void BindToMediaPlayer(UMediaPlayer* InMediaPlayer);                                                                     // [0x7d8a40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SubtitlesWidgets.SubtitleDisplay
/// Size: 0x0270 (0x000100 - 0x000370)
class USubtitleDisplay : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FSlateFontInfo)                            FontInfo                                                    OFFSET(getStruct<T>, {0x100, 80, 0, 0})
	SMember(FLinearColor)                              ColorAndOpacity                                             OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	DMember(float)                                     WrapTextAt                                                  OFFSET(get<float>, {0x160, 4, 0, 0})


	/// Functions
	// Function /Script/SubtitlesWidgets.SubtitleDisplay.HasSubtitles
	// bool HasSubtitles();                                                                                                     // [0x7d8ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

