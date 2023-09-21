
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: Systems
/// dependency: UI
/// dependency: UMG

/// Class /FortUILibrary/UIKit/Buttons/Blocks/ButtonStyle_UIKit_Empty.ButtonStyle_UIKit_Empty_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_UIKit_Empty_C : public UButtonStyle_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C
/// Size: 0x0095 (0x0002FB - 0x000390)
class UWBP_UIKit_ButtonText_CTA_C : public UWBP_UIKit_Block_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Bounce                                                 OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Transition                                     OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock                                                   OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(get<T>, {0x330, 88, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 FontDynamicMaterial                                         OFFSET(get<T>, {0x388, 8, 0, 0})
};



	/// Functions
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetDisabled
	// void SetDisabled();                                                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetMobileFontSizeMultiplier
	// void SetMobileFontSizeMultiplier(float MobileFontSizeMultiplier);                                                        // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetEnabled
	// void SetEnabled();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionEnabled
	// void TransitionEnabled(UWidgetAnimation* AnimTransition);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionDisabled
	// void TransitionDisabled(UWidgetAnimation* AnimTransition);                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionReleased
	// void TransitionReleased(UWidgetAnimation* AnimTransition);                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionPressed
	// void TransitionPressed(UWidgetAnimation* AnimTransition);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionUnfocused
	// void TransitionUnfocused(UWidgetAnimation* AnimTransition);                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.TransitionFocused
	// void TransitionFocused(UWidgetAnimation* AnimTransition);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetFont
	// void SetFont(FSlateFontInfo& Font);                                                                                      // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetText
	// void SetText(FText Text, bool& Empty);                                                                                   // [0x1ebf994] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.ExecuteUbergraph_WBP_UIKit_ButtonText_CTA
	// void ExecuteUbergraph_WBP_UIKit_ButtonText_CTA(int32_t EntryPoint);                                                      // [0x1ebf994] Final                
/// Class /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C
/// Size: 0x007D (0x0002FB - 0x000378)
class UWBP_UIKit_ButtonBackground_CTA_C : public UWBP_UIKit_Block_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Outline_Glow                                           OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Outline                                                OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Transition                                     OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Hovered_Transition                                     OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UImage*)                                   Backing                                                     OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   FocusOutline                                                OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UImage*)                                   FocusOutline_Glow                                           OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UImage*)                                   Glow                                                        OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UOverlay*)                                 Root                                                        OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UMaterialInstance*)                        BackgroundMaterial                                          OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(bool)                                      AdditiveBorder                                              OFFSET(get<bool>, {0x368, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 BackgroundDynamicMaterial                                   OFFSET(get<T>, {0x370, 8, 0, 0})
};



	/// Functions
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetDisabled
	// void SetDisabled();                                                                                                      // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetEnabled
	// void SetEnabled();                                                                                                       // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetBorderMaterial
	// void SetBorderMaterial(UMaterialInstance* Border Material, bool IsAdditive);                                             // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetBackgroundMaterial
	// void SetBackgroundMaterial(UMaterialInstance*& Brush);                                                                   // [0x1ebf994] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionEnabled
	// void TransitionEnabled(UWidgetAnimation* AnimTransition);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionDisabled
	// void TransitionDisabled(UWidgetAnimation* AnimTransition);                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionReleased
	// void TransitionReleased(UWidgetAnimation* AnimTransition);                                                               // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionPressed
	// void TransitionPressed(UWidgetAnimation* AnimTransition);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionUnfocused
	// void TransitionUnfocused(UWidgetAnimation* AnimTransition);                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionFocused
	// void TransitionFocused(UWidgetAnimation* AnimTransition);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionUnhovered
	// void TransitionUnhovered(UWidgetAnimation* AnimTransition);                                                              // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.TransitionHovered
	// void TransitionHovered(UWidgetAnimation* AnimTransition);                                                                // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA
	// void ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA(int32_t EntryPoint);                                                // [0x1ebf994] Final                
/// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C
/// Size: 0x0009 (0x0019F0 - 0x0019F9)
class UWBP_UIKit_Button_Quiet_C : public UWBP_UIKit_ButtonCTA_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6649;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x19F0, 8, 0, 0})
	DMember(bool)                                      isDarkBackground                                            OFFSET(get<bool>, {0x19F8, 1, 0, 0})
};



	/// Functions
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.HideBackground
	// void HideBackground(ECommonInputType InputType);                                                                         // [0x1ebf994] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.BP_OnPressed
	// void BP_OnPressed();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.BP_OnReleased
	// void BP_OnReleased();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.BP_OnInputMethodChanged
	// void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.ExecuteUbergraph_WBP_UIKit_Button_Quiet
	// void ExecuteUbergraph_WBP_UIKit_Button_Quiet(int32_t EntryPoint);                                                        // [0x1ebf994] Final                
/// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C
/// Size: 0x0009 (0x0019F0 - 0x0019F9)
class UWBP_UIKit_Button_Regular_C : public UWBP_UIKit_ButtonCTA_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6649;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x19F0, 8, 0, 0})
	CMember(TEnumAsByte<E_UI_CTAButtonType>)           ButtonType                                                  OFFSET(get<T>, {0x19F8, 1, 0, 0})
};



	/// Functions
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C.OverrideFontMaterials
	// void OverrideFontMaterials(UMaterialInstance* PrimaryFontMaterial, UMaterialInstance* SecondaryFontMaterial);            // [0x1ebf994] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C.ExecuteUbergraph_WBP_UIKit_Button_Regular
	// void ExecuteUbergraph_WBP_UIKit_Button_Regular(int32_t EntryPoint);                                                      // [0x1ebf994] Final                
/// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C
/// Size: 0x0008 (0x0019F0 - 0x0019F8)
class UWBP_UIKit_Button_Loud_C : public UWBP_UIKit_ButtonCTA_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6648;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x19F0, 8, 0, 0})
};



	/// Functions
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C.ExecuteUbergraph_WBP_UIKit_Button_Loud
	// void ExecuteUbergraph_WBP_UIKit_Button_Loud(int32_t EntryPoint);                                                         // [0x1ebf994] Final                
/// Class /FortUILibrary/UIKit/Buttons/Blocks/ButtonStyle_UIKit_CTA.ButtonStyle_UIKit_CTA_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_UIKit_CTA_C : public UButtonStyle_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C
/// Size: 0x0010 (0x000920 - 0x000930)
class UWBP_UIKit_Dialog_C : public UWBP_UIKit_Dialog_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2352;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(get<T>, {0x920, 8, 0, 0})
	CMember(UUIKitDialogViewModel*)                    UIKitDialogViewModel                                        OFFSET(get<T>, {0x928, 8, 0, 0})
};



	/// Functions
	// Function /FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.SetUIKitDialogViewModel
	// void SetUIKitDialogViewModel(UUIKitDialogViewModel* ViewModel);                                                          // [0x1ebf994] Final|Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1ebf994] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.ExecuteUbergraph_WBP_UIKit_Dialog
	// void ExecuteUbergraph_WBP_UIKit_Dialog(int32_t EntryPoint);                                                              // [0x1ebf994] Final                
