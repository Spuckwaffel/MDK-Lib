
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C
/// Size: 0x0053 (0x0002A8 - 0x0002FB)
class UWBP_UIKit_Block_Base_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 763;

public:
	DMember(double)                                    TimeHovering                                                OFFSET(get<double>, {0x2A8, 8, 0, 0})
	DMember(double)                                    TimeUnhovering                                              OFFSET(get<double>, {0x2B0, 8, 0, 0})
	DMember(double)                                    TimeFocusing                                                OFFSET(get<double>, {0x2B8, 8, 0, 0})
	DMember(double)                                    TimeUnfocusing                                              OFFSET(get<double>, {0x2C0, 8, 0, 0})
	DMember(double)                                    TimePressing                                                OFFSET(get<double>, {0x2C8, 8, 0, 0})
	DMember(double)                                    TimeReleasing                                               OFFSET(get<double>, {0x2D0, 8, 0, 0})
	DMember(double)                                    TimeDisabling                                               OFFSET(get<double>, {0x2D8, 8, 0, 0})
	DMember(double)                                    TimeEnabling                                                OFFSET(get<double>, {0x2E0, 8, 0, 0})
	DMember(double)                                    TimeSelecting                                               OFFSET(get<double>, {0x2E8, 8, 0, 0})
	DMember(double)                                    TimeDeselecting                                             OFFSET(get<double>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      IsSelectable                                                OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	DMember(bool)                                      IsSelected                                                  OFFSET(get<bool>, {0x2F9, 1, 0, 0})
	DMember(bool)                                      IsLocked                                                    OFFSET(get<bool>, {0x2FA, 1, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetIsSelectable
	// void SetIsSelectable(bool Is Selectable);                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.GetIsSelectable
	// void GetIsSelectable(bool& IsSelectable);                                                                                // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetIsLocked
	// void SetIsLocked(bool Is Locked);                                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.GetIsLocked
	// void GetIsLocked(bool& IsLocked);                                                                                        // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetIsSelected
	// void SetIsSelected(bool IsSelected);                                                                                     // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.GetIsSelected
	// void GetIsSelected(bool& IsSelected);                                                                                    // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetLocked
	// void SetLocked();                                                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetSelected
	// void SetSelected();                                                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetDisabled
	// void SetDisabled();                                                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.SetEnabled
	// void SetEnabled();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionDeselectedFocused
	// void TransitionDeselectedFocused(UWidgetAnimation* AnimTransition);                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionDeselectedIdle
	// void TransitionDeselectedIdle(UWidgetAnimation* AnimTransition);                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionSelected
	// void TransitionSelected(UWidgetAnimation* AnimTransition);                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionEnabled
	// void TransitionEnabled(UWidgetAnimation* AnimTransition);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionDisabled
	// void TransitionDisabled(UWidgetAnimation* AnimTransition);                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionReleased
	// void TransitionReleased(UWidgetAnimation* AnimTransition);                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionPressed
	// void TransitionPressed(UWidgetAnimation* AnimTransition);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionUnfocused
	// void TransitionUnfocused(UWidgetAnimation* AnimTransition);                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionFocused
	// void TransitionFocused(UWidgetAnimation* AnimTransition);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionUnhovered
	// void TransitionUnhovered(UWidgetAnimation* AnimTransition);                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionHovered
	// void TransitionHovered(UWidgetAnimation* AnimTransition);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/Blocks/WBP_UIKit_Block_Base.WBP_UIKit_Block_Base_C.TransitionState
	// void TransitionState(UWidgetAnimation* TransitionAnimation, double TransitionTime, bool PlayForward);                    // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
};

/// Class /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C
/// Size: 0x0570 (0x001480 - 0x0019F0)
class UWBP_UIKit_ButtonCTA_Base_C : public UFortCTAButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6640;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x1480, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Base                                           OFFSET(get<T>, {0x1488, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Base                                           OFFSET(get<T>, {0x1490, 8, 0, 0})
	CMember(UWBP_UIKit_ButtonBackground_CTA_C*)        Background                                                  OFFSET(get<T>, {0x1498, 8, 0, 0})
	CMember(UGridPanel*)                               Button                                                      OFFSET(get<T>, {0x14A0, 8, 0, 0})
	CMember(UImage*)                                   HoldIcon                                                    OFFSET(get<T>, {0x14A8, 8, 0, 0})
	CMember(UImage*)                                   HoldProgressBar                                             OFFSET(get<T>, {0x14B0, 8, 0, 0})
	CMember(UGridPanel*)                               Prompt                                                      OFFSET(get<T>, {0x14B8, 8, 0, 0})
	CMember(UGridPanel*)                               PromptAlignment                                             OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UWBP_UIKit_ButtonText_CTA_C*)              SecondaryTextBlock                                          OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UWBP_UIKit_ButtonText_CTA_C*)              TextBlock                                                   OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Text                                            OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(TEnumAsByte<ModularButtonSize>)            ButtonSize                                                  OFFSET(get<T>, {0x14E0, 1, 0, 0})
	SMember(FText)                                     Text                                                        OFFSET(get<T>, {0x14E8, 24, 0, 0})
	SMember(FText)                                     TextSecondary                                               OFFSET(get<T>, {0x1500, 24, 0, 0})
	CMember(TArray<UWBP_UIKit_Block_Base_C*>)          ModularBlocks                                               OFFSET(get<T>, {0x1518, 16, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 InputActionProgressMaterial                                 OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UMaterialInstance*)                        BackgroundMaterial                                          OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UMaterialInstance*)                        BorderMaterial                                              OFFSET(get<T>, {0x1538, 8, 0, 0})
	DMember(bool)                                      IsBorderAdditive                                            OFFSET(get<bool>, {0x1540, 1, 0, 0})
	DMember(int32_t)                                   LargeHeight                                                 OFFSET(get<int32_t>, {0x1544, 4, 0, 0})
	DMember(int32_t)                                   MediumHeight                                                OFFSET(get<int32_t>, {0x1548, 4, 0, 0})
	DMember(int32_t)                                   SmallHeight                                                 OFFSET(get<int32_t>, {0x154C, 4, 0, 0})
	SMember(FMargin)                                   SingleTextLargePadding                                      OFFSET(get<T>, {0x1550, 16, 0, 0})
	SMember(FMargin)                                   SingleTextMediumPadding                                     OFFSET(get<T>, {0x1560, 16, 0, 0})
	SMember(FMargin)                                   SingleTextSmallPadding                                      OFFSET(get<T>, {0x1570, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextLargePadding                                      OFFSET(get<T>, {0x1580, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextMediumPadding                                     OFFSET(get<T>, {0x1590, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSmallPadding                                      OFFSET(get<T>, {0x15A0, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondaryLargePadding                             OFFSET(get<T>, {0x15B0, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondaryMediumPadding                            OFFSET(get<T>, {0x15C0, 16, 0, 0})
	SMember(FMargin)                                   DoubleTextSecondarySmallPadding                             OFFSET(get<T>, {0x15D0, 16, 0, 0})
	DMember(int32_t)                                   GridUnit                                                    OFFSET(get<int32_t>, {0x15E0, 4, 0, 0})
	SMember(FSlateFontInfo)                            LargePrimaryFont                                            OFFSET(get<T>, {0x15E8, 88, 0, 0})
	SMember(FSlateFontInfo)                            MediumPrimaryFont                                           OFFSET(get<T>, {0x1640, 88, 0, 0})
	SMember(FSlateFontInfo)                            SmallPrimaryFont                                            OFFSET(get<T>, {0x1698, 88, 0, 0})
	SMember(FSlateFontInfo)                            LargeSecondaryFont                                          OFFSET(get<T>, {0x16F0, 88, 0, 0})
	SMember(FSlateFontInfo)                            MeduimSecondaryFont                                         OFFSET(get<T>, {0x1748, 88, 0, 0})
	SMember(FSlateFontInfo)                            SmallSecondaryFont                                          OFFSET(get<T>, {0x17A0, 88, 0, 0})
	SMember(FWidgetTransform)                          LeftToRightTransform                                        OFFSET(get<T>, {0x17F8, 56, 0, 0})
	SMember(FWidgetTransform)                          RightToLeftTransform                                        OFFSET(get<T>, {0x1830, 56, 0, 0})
	DMember(bool)                                      SingleText                                                  OFFSET(get<bool>, {0x1868, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFocusChanged                                              OFFSET(get<T>, {0x1870, 16, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierLarge                               OFFSET(get<double>, {0x1880, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierMedium                              OFFSET(get<double>, {0x1888, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSmall                               OFFSET(get<double>, {0x1890, 8, 0, 0})
	DMember(int32_t)                                   MobileMinWidth                                              OFFSET(get<int32_t>, {0x1898, 4, 0, 0})
	DMember(bool)                                      OverrideDefaultHeight                                       OFFSET(get<bool>, {0x189C, 1, 0, 0})
	DMember(int32_t)                                   MobileMinHeight                                             OFFSET(get<int32_t>, {0x18A0, 4, 0, 0})
	DMember(int32_t)                                   MobileLargeHeight                                           OFFSET(get<int32_t>, {0x18A4, 4, 0, 0})
	DMember(int32_t)                                   MobileMediumHeight                                          OFFSET(get<int32_t>, {0x18A8, 4, 0, 0})
	DMember(int32_t)                                   MobileSmallHeight                                           OFFSET(get<int32_t>, {0x18AC, 4, 0, 0})
	SMember(FMargin)                                   MobileSingleTextLargePadding                                OFFSET(get<T>, {0x18B0, 16, 0, 0})
	SMember(FMargin)                                   MobileSingleTextMediumPadding                               OFFSET(get<T>, {0x18C0, 16, 0, 0})
	SMember(FMargin)                                   MobileSingleTextSmallPadding                                OFFSET(get<T>, {0x18D0, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextLargePadding                                OFFSET(get<T>, {0x18E0, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextMediumPadding                               OFFSET(get<T>, {0x18F0, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextSmallPadding                                OFFSET(get<T>, {0x1900, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextSecondaryLargePadding                       OFFSET(get<T>, {0x1910, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextSecondaryMediumPadding                      OFFSET(get<T>, {0x1920, 16, 0, 0})
	SMember(FMargin)                                   MobileDoubleTextSecondarySmallPadding                       OFFSET(get<T>, {0x1930, 16, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSecondaryLarge                      OFFSET(get<double>, {0x1940, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSecondaryMedium                     OFFSET(get<double>, {0x1948, 8, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSecondarySmall                      OFFSET(get<double>, {0x1950, 8, 0, 0})
	DMember(bool)                                      OverrideDefaultMobileFontSizeMultiplier                     OFFSET(get<bool>, {0x1958, 1, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierOverride                            OFFSET(get<double>, {0x1960, 8, 0, 0})
	DMember(bool)                                      LastEnabledEvent                                            OFFSET(get<bool>, {0x1968, 1, 0, 0})
	DMember(double)                                    FadeInTime                                                  OFFSET(get<double>, {0x1970, 8, 0, 0})
	DMember(double)                                    FadeOutTime                                                 OFFSET(get<double>, {0x1978, 8, 0, 0})
	CMember(USoundBase*)                               PressedSound                                                OFFSET(get<T>, {0x1980, 8, 0, 0})
	CMember(USoundBase*)                               HoveredSound                                                OFFSET(get<T>, {0x1988, 8, 0, 0})
	CMember(ECommonInputType)                          CurrentInputType                                            OFFSET(get<T>, {0x1990, 1, 0, 0})
	DMember(bool)                                      OverrideSecondaryTextSize                                   OFFSET(get<bool>, {0x1991, 1, 0, 0})
	DMember(double)                                    OverrideSecondaryTextSizeMultiplier                         OFFSET(get<double>, {0x1998, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHoldCompleted                                             OFFSET(get<T>, {0x19A0, 16, 0, 0})
	DMember(double)                                    MobileFontSizeMultiplierSecondaryOverride                   OFFSET(get<double>, {0x19B0, 8, 0, 0})
	CMember(USoundBase*)                               HoldPressedSound                                            OFFSET(get<T>, {0x19B8, 8, 0, 0})
	CMember(USoundBase*)                               HoldSound                                                   OFFSET(get<T>, {0x19C0, 8, 0, 0})
	CMember(USoundBase*)                               HoldReleasedSound                                           OFFSET(get<T>, {0x19C8, 8, 0, 0})
	CMember(USoundBase*)                               HoldCompletedSound                                          OFFSET(get<T>, {0x19D0, 8, 0, 0})
	CMember(UAudioComponent*)                          HoldSoundAudioComponent                                     OFFSET(get<T>, {0x19D8, 8, 0, 0})
	CMember(UAudioComponent*)                          PressedSoundAudioComponent                                  OFFSET(get<T>, {0x19E0, 8, 0, 0})
	DMember(double)                                    CurrentHoldProgress                                         OFFSET(get<double>, {0x19E8, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Fade Out Sound
	// void Fade Out Sound();                                                                                                   // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PlaySoundHoldCompleted
	// void PlaySoundHoldCompleted();                                                                                           // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Stop Sound Hold Released
	// void Stop Sound Hold Released();                                                                                         // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PlaySoundHoldPressed
	// void PlaySoundHoldPressed();                                                                                             // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PlaySoundPressed
	// void PlaySoundPressed();                                                                                                 // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PlaySoundHovered
	// void PlaySoundHovered();                                                                                                 // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.IsPromptHoldable
	// void IsPromptHoldable(bool& Holdable);                                                                                   // [0x1ebf994] Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetHoldPercentage
	// void SetHoldPercentage(double HeldPercentageValue);                                                                      // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.IsPromptIcon
	// void IsPromptIcon(bool& Valid);                                                                                          // [0x1ebf994] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetButtonIsEnabled
	// void SetButtonIsEnabled();                                                                                               // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetLanguageDirection
	// void SetLanguageDirection(bool RightToLeft);                                                                             // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateButtonSIze
	// void UpdateButtonSIze();                                                                                                 // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ShowPromptFallbackAction
	// void ShowPromptFallbackAction(bool Show);                                                                                // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdatePrompt
	// void UpdatePrompt(ECommonInputType InputType);                                                                           // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Set Prompt
	// void Set Prompt();                                                                                                       // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateButtonSizeToGrid
	// void UpdateButtonSizeToGrid();                                                                                           // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.UpdateFonts
	// void UpdateFonts();                                                                                                      // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBlockTiming
	// void SetBlockTiming(UWBP_UIKit_Block_Base_C* bLock, double Time Hovering, double Time Unhovering, double Time Focusing, double Time Unfocusing, double Time Pressing, double Time Releasing, double Time Disabling, double Time Enabling); // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetButtonTiming
	// void SetButtonTiming(double Time Hovering, double Time Unhovering, double Time Focusing, double Time Unfocusing, double Time Pressing, double Time Releasing, double Time Disabling, double Time Enabling); // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBackgroundMaterial
	// void SetBackgroundMaterial(UMaterialInstance* Background);                                                               // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBackgroundVisibility
	// void SetBackgroundVisibility(bool Visible);                                                                              // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetBorderMaterial
	// void SetBorderMaterial(UMaterialInstance* BorderMaterial, bool IsAdditive);                                              // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.AddModularBlock
	// void AddModularBlock(UWBP_UIKit_Block_Base_C* Modular Block);                                                            // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ResetButtonState
	// void ResetButtonState();                                                                                                 // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ShowInputActionText
	// void ShowInputActionText();                                                                                              // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.SetButtonSize
	// void SetButtonSize(TEnumAsByte<ModularButtonSize> ButtonSize);                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnHovered
	// void BP_OnHovered();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnUnhovered
	// void BP_OnUnhovered();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnPressed
	// void BP_OnPressed();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnReleased
	// void BP_OnReleased();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnDisabled
	// void BP_OnDisabled();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnEnabled
	// void BP_OnEnabled();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnInputMethodChanged
	// void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_SetText
	// void BP_SetText(FText& Text);                                                                                            // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_SetSecondaryText
	// void BP_SetSecondaryText(FText& Text);                                                                                   // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.EventOnFocusedManually
	// void EventOnFocusedManually();                                                                                           // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnFocusReceived
	// void BP_OnFocusReceived();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnFocusLost
	// void BP_OnFocusLost();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Construct
	// void Construct();                                                                                                        // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnInputActionUpdated
	// void BP_OnInputActionUpdated();                                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.BP_OnClicked
	// void BP_OnClicked();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.Destruct
	// void Destruct();                                                                                                         // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base
	// void ExecuteUbergraph_WBP_UIKit_ButtonCTA_Base(int32_t EntryPoint);                                                      // [0x1ebf994] Final|HasDefaults    
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.OnHoldCompleted__DelegateSignature
	// void OnHoldCompleted__DelegateSignature();                                                                               // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/ModularButton/WBP_UIKit_ButtonCTA_Base.WBP_UIKit_ButtonCTA_Base_C.OnFocusChanged__DelegateSignature
	// void OnFocusChanged__DelegateSignature(bool HasFocus);                                                                   // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C
/// Size: 0x0050 (0x0002A8 - 0x0002F8)
class UWBP_UIKit_Scrim_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_FadeOut                                                OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_FadeIn                                                 OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UBackgroundBlur*)                          BlurWidget                                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UButton*)                                  ClickCatcher                                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UBorder*)                                  DimBorder                                                   OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(double)                                    Blur                                                        OFFSET(get<double>, {0x2D8, 8, 0, 0})
	SMember(FLinearColor)                              Dim_Color                                                   OFFSET(get<T>, {0x2E0, 16, 0, 0})
	CMember(UMaterialInstance*)                        Dim_Material                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.FadeOut
	// void FadeOut();                                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.FadeIn
	// void FadeIn();                                                                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Scrim.WBP_UIKit_Scrim_C.ExecuteUbergraph_WBP_UIKit_Scrim
	// void ExecuteUbergraph_WBP_UIKit_Scrim(int32_t EntryPoint);                                                               // [0x1ebf994] Final                
};

/// Class /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C
/// Size: 0x0538 (0x0003E8 - 0x000920)
class UWBP_UIKit_Dialog_Base_C : public UUIKitDialogBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2336;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_OnDeactivate_Base                                      OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_OnActivate_Base                                        OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UHorizontalBox*)                           ButtonsContainer                                            OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UGridPanel*)                               Content                                                     OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(USizeBox*)                                 ContentSize                                                 OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UImage*)                                   Image_Background                                            OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UImage*)                                   Image_BottomBar                                             OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UGridPanel*)                               Main                                                        OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Body                                               OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UGridPanel*)                               Root                                                        OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UWBP_UIKit_Scrim_C*)                       Scrim                                                       OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UNamedSlot*)                               Slot_Content                                                OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UNamedSlot*)                               Slot_Main                                                   OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(TArray<UWBP_UIKit_ButtonCTA_Base_C*>)      ButtonWidgets                                               OFFSET(get<T>, {0x468, 16, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup                                                 OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FS_UI_DialogStyle)                         DialogStyle                                                 OFFSET(get<T>, {0x480, 1152, 0, 0})
	SMember(FMulticastInlineDelegate)                  DialogButtonClickedDispatcher                               OFFSET(get<T>, {0x900, 16, 0, 0})
	DMember(int32_t)                                   StartFocusButton                                            OFFSET(get<int32_t>, {0x910, 4, 0, 0})
	DMember(bool)                                      ImageMatchTextureSize                                       OFFSET(get<bool>, {0x914, 1, 0, 0})
	CMember(UDataTable*)                               DefaultInputActionDataTable                                 OFFSET(get<T>, {0x918, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetButtonFocus
	// void SetButtonFocus(int32_t& Focus Index, int32_t Last Index);                                                           // [0x1ebf994] Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetActionButton
	// void SetActionButton(UWBP_UIKit_ButtonCTA_Base_C*& Button, UUIKitDialogButtonViewModel* Button Data);                    // [0x1ebf994] Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.UpdateDialogStyle
	// void UpdateDialogStyle(FS_UI_DialogStyle& S_UI_DialogStyle);                                                             // [0x1ebf994] Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogImage
	// void SetDialogImage(UTexture2D* Texture);                                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogButtons
	// void SetDialogButtons(TArray<UUIKitDialogButtonViewModel*>& Action Buttons);                                             // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.DeactivateDialog
	// void DeactivateDialog();                                                                                                 // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.ActivateDialog
	// void ActivateDialog();                                                                                                   // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.ClearButtonWidgets
	// void ClearButtonWidgets();                                                                                               // [0x1ebf994] Private|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetSizeBox
	// void SetSizeBox(FS_UI_SizeBox& S_UI_SizeBox);                                                                            // [0x1ebf994] Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogText
	// void SetDialogText(FText Text);                                                                                          // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogTitle
	// void SetDialogTitle(FText Title);                                                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogStyleFromDT
	// void SetDialogStyleFromDT(FName Style ID);                                                                               // [0x1ebf994] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogStyle
	// void SetDialogStyle(FS_UI_DialogStyle style);                                                                            // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetDialogData
	// void SetDialogData(UUIKitDialogViewModel* Data);                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridNudge
	// void SetGridNudge(UWidget* Widget, FVector2D Nudge);                                                                     // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridPadding
	// void SetGridPadding(UWidget* Widget, FMargin Padding);                                                                   // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridLayer
	// void SetGridLayer(UWidget* Widget, int32_t Layer);                                                                       // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridAlignment
	// void SetGridAlignment(UWidget* Widget, TEnumAsByte<EHorizontalAlignment> Horizontal, TEnumAsByte<EVerticalAlignment> Vertical); // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetGridColumnAndRow
	// void SetGridColumnAndRow(UWidget* Widget, int32_t Row, int32_t Row Span, int32_t Column, int32_t Column Span);           // [0x1ebf994] Protected|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.SetPlacement
	// void SetPlacement(UWidget* Widget, FS_UI_Placement Placement);                                                           // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.OnDialogButtonClicked
	// void OnDialogButtonClicked(UCommonButtonBase* AssociatedButton, int32_t ButtonIndex);                                    // [0x1ebf994] BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.ExecuteUbergraph_WBP_UIKit_Dialog_Base
	// void ExecuteUbergraph_WBP_UIKit_Dialog_Base(int32_t EntryPoint);                                                         // [0x1ebf994] Final                
	// Function /FortUILibrary/Systems/Dialog/WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C.DialogButtonClickedDispatcher__DelegateSignature
	// void DialogButtonClickedDispatcher__DelegateSignature(int32_t ButtonIndex);                                              // [0x1ebf994] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_SizeBox.S_UI_SizeBox
/// Size: 0x0080 (0x000000 - 0x000080)
class FS_UI_SizeBox : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(bool)                                      UseWidthOverride_72_BA6840BC46D2FCB3C33564AA0BCC88B7        OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(double)                                    WidthOverride_28_A94CBD4C4E96C298CF51F6B49895AE3D           OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(bool)                                      UseHeightOverride_73_4C3EEBD24F01FABDFDF46EA8948AAB5D       OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(double)                                    HeightOverride_30_985448F847722BFC0ECD01B46F54E873          OFFSET(get<double>, {0x18, 8, 0, 0})
	DMember(bool)                                      UseMinDesiredWidth_74_D5A0686649714C9EFFA370887C3F1CAA      OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(double)                                    MinDesiredWidth_32_AB4B30464E6C5F6D4923D7BB59F1DCA1         OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(bool)                                      UseMinDesiredHeight_75_2437CEFB49C112B12BDAD5B825FA1CA0     OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(double)                                    MinDesiredHeight_34_F14D30CC4F7BF3A05A0342AFF4F2C7FF        OFFSET(get<double>, {0x38, 8, 0, 0})
	DMember(bool)                                      UseMaxDesiredWidth_76_65A135704F09BC785AF7EDB477AD84A4      OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(double)                                    MaxDesiredWidth_36_74DF0470480CF4662560B786F6878973         OFFSET(get<double>, {0x48, 8, 0, 0})
	DMember(bool)                                      UseMaxDesiredHeight_77_3DD826AB4F381CD08BF25787E9DB9BD5     OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(double)                                    MaxDesiredHeight_38_F6C9BD4C471DCA757638EB8D32FC28C7        OFFSET(get<double>, {0x58, 8, 0, 0})
	DMember(bool)                                      UseMinAspectRatio_78_1F5494B4432A23F9546CAFAA1051E04C       OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(double)                                    MinAspectRatio_40_0E556247436783AE9300D3939DB064AA          OFFSET(get<double>, {0x68, 8, 0, 0})
	DMember(bool)                                      UseMaxAspectRatio_80_EC81EB044C1A0BD57CCB4FA58394E246       OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(double)                                    MaxAspectRatio_42_F1DC874242251011C0B1E2BD2F2B46D3          OFFSET(get<double>, {0x78, 8, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_GridCell.S_UI_GridCell
/// Size: 0x0028 (0x000000 - 0x000028)
class FS_UI_GridCell : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Row_15_A94CBD4C4E96C298CF51F6B49895AE3D                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   RowSpan_17_A0786E70484526B60C8B42A95AD3AB35                 OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Column_19_EE61B90B4EE25EADECB506AEC3137A46                  OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ColumnSpan_21_37271BC54501DA614C3829B82CDFEA3E              OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   Layer_23_5EB8311C4EBCD402805DEE9E676A7772                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FVector2D)                                 Nudge_26_A5E5651A47EF74CCA30424AB0F22341D                   OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_Placement.S_UI_Placement
/// Size: 0x0040 (0x000000 - 0x000040)
class FS_UI_Placement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment_4_A94CBD4C4E96C298CF51F6B49895AE3D      OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment_5_BC3E4CD143DBC026850F4BAE098F6937        OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FMargin)                                   Padding_8_030D86C14EBE7996733C89A951279A61                  OFFSET(get<T>, {0x4, 16, 0, 0})
	SMember(FS_UI_GridCell)                            Grid_19_3148B55D43C5889FC5D1FF82667A7D01                    OFFSET(get<T>, {0x18, 40, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_DialogText.S_UI_DialogText
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FS_UI_DialogText : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FS_UI_Placement)                           Placement_67_A94CBD4C4E96C298CF51F6B49895AE3D               OFFSET(get<T>, {0x0, 64, 0, 0})
	SMember(FSlateFontInfo)                            Font_45_B587C32B43943172D2272F8558ACC8B2                    OFFSET(get<T>, {0x40, 88, 0, 0})
	SMember(FSlateColor)                               Color_65_9CB9A5174FD065187E30878106948A3B                   OFFSET(get<T>, {0x98, 20, 0, 0})
	CMember(ETextTransformPolicy)                      TransformPolicy_49_52395AC7440E291527A8768E37D08B2A         OFFSET(get<T>, {0xAC, 1, 0, 0})
	CMember(TEnumAsByte<ETextJustify>)                 Justification_52_5897D4F946C704E9C5D67E9DD207EF16           OFFSET(get<T>, {0xAD, 1, 0, 0})
	DMember(double)                                    LineHeightPercentage_55_2509C2B04F6144283C7BADBF36AAA8F6    OFFSET(get<double>, {0xB0, 8, 0, 0})
	DMember(bool)                                      AutoWrapText_58_064D5C3A4DD3D362216942A761DDC8D0            OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(int32_t)                                   WrapTextAt_68_39091237442DEAE1CAFAE3AB75A757F1              OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_DialogImage.S_UI_DialogImage
/// Size: 0x0050 (0x000000 - 0x000050)
class FS_UI_DialogImage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FS_UI_Placement)                           Placement_67_A94CBD4C4E96C298CF51F6B49895AE3D               OFFSET(get<T>, {0x0, 64, 0, 0})
	SMember(FVector2D)                                 ImageSize_72_3E7C183E49CE6543B65BBEB8E5C3DEF9               OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/Structs/S_UI_DialogButtons.S_UI_DialogButtons
/// Size: 0x0064 (0x000000 - 0x000064)
class FS_UI_DialogButtons : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 100;

public:
	SMember(FS_UI_Placement)                           GroupPlacement_71_A94CBD4C4E96C298CF51F6B49895AE3D          OFFSET(get<T>, {0x0, 64, 0, 0})
	DMember(double)                                    SpaceBetweenButtons_62_39091237442DEAE1CAFAE3AB75A757F1     OFFSET(get<double>, {0x40, 8, 0, 0})
	CMember(TEnumAsByte<ModularButtonSize>)            EachButtonSize_74_7A1E34E243F1F10533E9EA910463B328          OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         EachButtonHorizontalAlignment_67_3A1B89E0481CE49778D5E39C0BD7E90C OFFSET(get<T>, {0x49, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           EachButtonVerticalAlignment_68_68D332304FA9E9F9D60D0E8B410EE23F OFFSET(get<T>, {0x4A, 1, 0, 0})
	DMember(int32_t)                                   EachButtonMinWidth_77_CA4A0FEF4CF6FF0700E0DB8F95AC917B      OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	CMember(TArray<TEnumAsByte>)                       CTAButtonstypes_81_963DA1ED40E4193862297D976DA12A11         OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   FocuseButton_85_CC6A212C4012DDFDC810689A87324E54            OFFSET(get<int32_t>, {0x60, 4, 0, 0})
};

/// Struct /FortUILibrary/Systems/Dialog/Data/S_UI_DialogStyle.S_UI_DialogStyle
/// Size: 0x0478 (0x000000 - 0x000478)
class FS_UI_DialogStyle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FS_UI_SizeBox)                             DialogSize_55_CE6987424DF46947352F678CF5E52CC1              OFFSET(get<T>, {0x0, 128, 0, 0})
	SMember(FS_UI_Placement)                           DialogPlacement_65_59E2551640BABE52A5754CA2E5941FCF         OFFSET(get<T>, {0x80, 64, 0, 0})
	SMember(FSlateBrush)                               BackgroundMaterial_52_853CB3A44926A4DC7A0AF6AFEDF77E4A      OFFSET(get<T>, {0xC0, 192, 0, 0})
	SMember(FSlateBrush)                               BottomBarMaterial_72_59B1CCA84957A7878829E9819798B47E       OFFSET(get<T>, {0x180, 192, 0, 0})
	SMember(FS_UI_DialogText)                          Title_47_7E0D422D440CE71F166354B2BFE6C254                   OFFSET(get<T>, {0x240, 192, 0, 0})
	SMember(FS_UI_DialogText)                          Text_48_23B8288A403C2D3FE669F581F37D77B0                    OFFSET(get<T>, {0x300, 192, 0, 0})
	SMember(FS_UI_DialogImage)                         Image_69_F993EDF444B2B22A5DEFDDBA00055A97                   OFFSET(get<T>, {0x3C0, 80, 0, 0})
	SMember(FS_UI_DialogButtons)                       ButtonsGroup_66_9B96F603486F8FBAC3896087AA45CDDB            OFFSET(get<T>, {0x410, 104, 0, 0})
};

/// Enum /FortUILibrary/Systems/ModularButton/Data/E_UI_CTAButtonType.E_UI_CTAButtonType
/// Size: 0x04
enum E_UI_CTAButtonType : uint8_t
{
	E_UI_CTAButtonType__NewEnumerator00                                              = 0,
	E_UI_CTAButtonType__NewEnumerator11                                              = 1,
	E_UI_CTAButtonType__NewEnumerator22                                              = 2,
	E_UI_CTAButtonType__E_UI_MAX3                                                    = 3
};

/// Enum /FortUILibrary/Systems/ModularButton/ModularButtonSize.ModularButtonSize
/// Size: 0x04
enum ModularButtonSize : uint8_t
{
	ModularButtonSize__NewEnumerator00                                               = 0,
	ModularButtonSize__NewEnumerator11                                               = 1,
	ModularButtonSize__NewEnumerator22                                               = 2,
	ModularButtonSize__ModularButtonSize_MAX3                                        = 3
};

/// Enum /FortUILibrary/Systems/Dialog/Data/E_UI_ButtonVisualType.E_UI_ButtonVisualType
/// Size: 0x03
enum E_UI_ButtonVisualType : uint8_t
{
	E_UI_ButtonVisualType__NewEnumerator00                                           = 0,
	E_UI_ButtonVisualType__NewEnumerator11                                           = 1,
	E_UI_ButtonVisualType__E_UI_MAX2                                                 = 2
};

