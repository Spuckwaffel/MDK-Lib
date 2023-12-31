
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/VoiceRep.FortVoiceReportIntroModal
/// Size: 0x0010 (0x000400 - 0x000410)
class UFortVoiceReportIntroModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(UCommonTextBlock*)                         Text_VoiceReportingTitle                                    OFFSET(get<T>, {0x400, 8, 0, 0})


	/// Functions
	// Function /Script/VoiceRep.FortVoiceReportIntroModal.UpdateVisuals
	// void UpdateVisuals(UFortVoiceReportIntroModalType DescriptionType);                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/VoiceRep.FortVoiceReportIntroModal.HandleTurnOnClicked
	// void HandleTurnOnClicked();                                                                                              // [0xab0cecc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/VoiceRep.FortVoiceReportIntroModal.HandleTurnOffClicked
	// void HandleTurnOffClicked();                                                                                             // [0xab0ceb8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/VoiceRep.VoiceRepTooltipBase
/// Size: 0x0008 (0x000460 - 0x000468)
class UVoiceRepTooltipBase : public UFortSidebarOnboardTooltipWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	DMember(int32_t)                                   AutoDismissTimerInterval                                    OFFSET(get<int32_t>, {0x460, 4, 0, 0})
};

/// Class /Script/VoiceRep.VoiceRepDataAsset
/// Size: 0x0020 (0x000030 - 0x000050)
class UVoiceRepDataAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UClass*)                                   VoiceChatTooltipWidgetClass                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UClass*)                                   FirstOnboardingWidgetClass                                  OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UClass*)                                   SecondOnboardingWidgetClass                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UClass*)                                   ReportVoiceWidgetClass                                      OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Enum /Script/VoiceRep.UFortVoiceReportIntroModalType
/// Size: 0x05
enum UFortVoiceReportIntroModalType : uint8_t
{
	UFortVoiceReportIntroModalType__IsFreshAccount0                                  = 0,
	UFortVoiceReportIntroModalType__IsUnder181                                       = 1,
	UFortVoiceReportIntroModalType__Over18VoiceChatEnabled2                          = 2,
	UFortVoiceReportIntroModalType__Over18VoiceChatDisabled3                         = 3,
	UFortVoiceReportIntroModalType__UFortVoiceReportIntroModalType_MAX4              = 4
};

