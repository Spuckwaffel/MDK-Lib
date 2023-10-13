
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
/// Size: 0x0095 (0x0002F3 - 0x000388)
class UWBP_UIKit_ButtonText_CTA_C : public UWBP_UIKit_Block_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Bounce                                                 OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Transition                                     OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock                                                   OFFSET(get<T>, {0x320, 8, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x328, 88, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 FontDynamicMaterial                                         OFFSET(get<T>, {0x380, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetMobileFontSizeMultiplier
	// void SetMobileFontSizeMultiplier(float MobileFontSizeMultiplier);                                                        // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetFont
	// void SetFont(FSlateFontInfo& Font);                                                                                      // [0x1d9241c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.SetText
	// void SetText(FText Text, bool& Empty);                                                                                   // [0x1d9241c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.OnTransitionPressedRequested
	// void OnTransitionPressedRequested();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.OnTransitionUnfocusedRequested
	// void OnTransitionUnfocusedRequested();                                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.OnTransitionReleasedRequested
	// void OnTransitionReleasedRequested();                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.OnTransitionDisabledRequested
	// void OnTransitionDisabledRequested();                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.OnTransitionEnabledRequested
	// void OnTransitionEnabledRequested();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.OnTransitionFocusedRequested
	// void OnTransitionFocusedRequested();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.OnInstantTransitionToEnabled
	// void OnInstantTransitionToEnabled();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.OnInstantTransitionToDisabled
	// void OnInstantTransitionToDisabled();                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonText_CTA.WBP_UIKit_ButtonText_CTA_C.ExecuteUbergraph_WBP_UIKit_ButtonText_CTA
	// void ExecuteUbergraph_WBP_UIKit_ButtonText_CTA(int32_t EntryPoint);                                                      // [0x1d9241c] Final                
};

/// Class /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C
/// Size: 0x0061 (0x000320 - 0x000381)
class UWBP_UIKit_ButtonBackground_CTA_C : public UWBP_UIKit_BlockBackground_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 897;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Outline_Glow                                           OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Outline                                                OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Transition                                     OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Hovered_Transition                                     OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UImage*)                                   Backing                                                     OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UImage*)                                   FocusOutline                                                OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UImage*)                                   FocusOutline_Glow                                           OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UImage*)                                   Glow                                                        OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UOverlay*)                                 Root                                                        OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(bool)                                      AdditiveBorder                                              OFFSET(get<bool>, {0x380, 1, 0, 0})


	/// Functions
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.SetBorderMaterial
	// void SetBorderMaterial(UMaterialInstance* Border Material, bool IsAdditive);                                             // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.OnTransitionHoveredRequested
	// void OnTransitionHoveredRequested();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.OnTransitionUnhoveredRequested
	// void OnTransitionUnhoveredRequested();                                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.OnTransitionFocusedRequested
	// void OnTransitionFocusedRequested();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.OnTransitionUnfocusedRequested
	// void OnTransitionUnfocusedRequested();                                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.OnTransitionPressedRequested
	// void OnTransitionPressedRequested();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.OnTransitionReleasedRequested
	// void OnTransitionReleasedRequested();                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.OnTransitionDisabledRequested
	// void OnTransitionDisabledRequested();                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.OnTransitionEnabledRequested
	// void OnTransitionEnabledRequested();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1d9241c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.OnInstantTransitionToEnabled
	// void OnInstantTransitionToEnabled();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.OnInstantTransitionToDisabled
	// void OnInstantTransitionToDisabled();                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C.ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA
	// void ExecuteUbergraph_WBP_UIKit_ButtonBackground_CTA(int32_t EntryPoint);                                                // [0x1d9241c] Final                
};

/// Class /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C
/// Size: 0x0070 (0x000320 - 0x000390)
class UWBP_UIKit_Block_BackgroundWithOutline_C : public UWBP_UIKit_BlockBackground_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Hover_Transition                                       OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Sheen                                                  OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_OutlineUnhover                                         OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_OutlineHover                                           OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UImage*)                                   Backing                                                     OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UImage*)                                   FocusOutline                                                OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(bool)                                      RadiusInPixels                                              OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(double)                                    TopLeftCornerRadius                                         OFFSET(get<double>, {0x370, 8, 0, 0})
	DMember(double)                                    TopRightCornerRadius                                        OFFSET(get<double>, {0x378, 8, 0, 0})
	DMember(double)                                    BottomRightCornerRadius                                     OFFSET(get<double>, {0x380, 8, 0, 0})
	DMember(double)                                    BottomLeftCornerRadius                                      OFFSET(get<double>, {0x388, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.SetOutlineMaterial
	// void SetOutlineMaterial(UMaterialInstance*& Material Instance);                                                          // [0x1d9241c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.SetBackgroundMaterial
	// void SetBackgroundMaterial(UMaterialInstance*& Material Instance);                                                       // [0x1d9241c] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.SetCornerRadiuses
	// void SetCornerRadiuses(float TopLeft, float TopRight, float BottomLeft, float BottomRight, bool RadiusInPixels);         // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.OnTransitionFocusedRequested
	// void OnTransitionFocusedRequested();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.OnTransitionUnfocusedRequested
	// void OnTransitionUnfocusedRequested();                                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.OnTransitionDisabledRequested
	// void OnTransitionDisabledRequested();                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.OnInstantTransitionToEnabled
	// void OnInstantTransitionToEnabled();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.OnInstantTransitionToDisabled
	// void OnInstantTransitionToDisabled();                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.Construct
	// void Construct();                                                                                                        // [0x1d9241c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1d9241c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.OnTransitionPressedRequested
	// void OnTransitionPressedRequested();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.OnTransitionReleasedRequested
	// void OnTransitionReleasedRequested();                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.OnTransitionEnabledRequested
	// void OnTransitionEnabledRequested();                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_Block_BackgroundWithOutline.WBP_UIKit_Block_BackgroundWithOutline_C.ExecuteUbergraph_WBP_UIKit_Block_BackgroundWithOutline
	// void ExecuteUbergraph_WBP_UIKit_Block_BackgroundWithOutline(int32_t EntryPoint);                                         // [0x1d9241c] Final                
};

/// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C
/// Size: 0x000D (0x001AA4 - 0x001AB1)
class UWBP_UIKit_Button_Quiet_C : public UWBP_UIKit_ButtonCTA_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6833;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1AA8, 8, 0, 0})
	DMember(bool)                                      isDarkBackground                                            OFFSET(get<bool>, {0x1AB0, 1, 0, 0})


	/// Functions
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.HideBackground
	// void HideBackground(ECommonInputType InputType);                                                                         // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.BP_OnPressed
	// void BP_OnPressed();                                                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.BP_OnReleased
	// void BP_OnReleased();                                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.BP_OnInputMethodChanged
	// void BP_OnInputMethodChanged(ECommonInputType CurrentInputType);                                                         // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1d9241c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.Construct
	// void Construct();                                                                                                        // [0x1d9241c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.ExecuteUbergraph_WBP_UIKit_Button_Quiet
	// void ExecuteUbergraph_WBP_UIKit_Button_Quiet(int32_t EntryPoint);                                                        // [0x1d9241c] Final                
};

/// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C
/// Size: 0x000D (0x001AA4 - 0x001AB1)
class UWBP_UIKit_Button_Regular_C : public UWBP_UIKit_ButtonCTA_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6833;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1AA8, 8, 0, 0})
	CMember(TEnumAsByte<E_UI_CTAButtonType>)           ButtonType                                                  OFFSET(get<T>, {0x1AB0, 1, 0, 0})


	/// Functions
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C.SetButtonType
	// void SetButtonType(TEnumAsByte<E_UI_CTAButtonType> ButtonType);                                                          // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C.OverrideFontMaterials
	// void OverrideFontMaterials(UMaterialInstance* PrimaryFontMaterial, UMaterialInstance* SecondaryFontMaterial);            // [0x1d9241c] Private|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1d9241c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C.ExecuteUbergraph_WBP_UIKit_Button_Regular
	// void ExecuteUbergraph_WBP_UIKit_Button_Regular(int32_t EntryPoint);                                                      // [0x1d9241c] Final                
};

/// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C
/// Size: 0x000C (0x001AA4 - 0x001AB0)
class UWBP_UIKit_Button_Loud_C : public UWBP_UIKit_ButtonCTA_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1AA8, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1d9241c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C.ExecuteUbergraph_WBP_UIKit_Button_Loud
	// void ExecuteUbergraph_WBP_UIKit_Button_Loud(int32_t EntryPoint);                                                         // [0x1d9241c] Final                
};

/// Class /FortUILibrary/UIKit/Buttons/Blocks/ButtonStyle_UIKit_CTA.ButtonStyle_UIKit_CTA_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UButtonStyle_UIKit_CTA_C : public UButtonStyle_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /FortUILibrary/UIKit/Backplates/WBP_UIKit_Backplate_Glass.WBP_UIKit_Backplate_Glass_C
/// Size: 0x0008 (0x000330 - 0x000338)
class UWBP_UIKit_Backplate_Glass_C : public UWBP_UIKit_Backplate_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/UIKit/Backplates/WBP_UIKit_Backplate_Glass.WBP_UIKit_Backplate_Glass_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1d9241c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Backplates/WBP_UIKit_Backplate_Glass.WBP_UIKit_Backplate_Glass_C.ExecuteUbergraph_WBP_UIKit_Backplate_Glass
	// void ExecuteUbergraph_WBP_UIKit_Backplate_Glass(int32_t EntryPoint);                                                     // [0x1d9241c] Final                
};

/// Class /FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C
/// Size: 0x0018 (0x000400 - 0x000418)
class UWBP_UIKit_Dialog_C : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x400, 8, 0, 0})
	CMember(UUIKitDialogViewModel*)                    UIKitDialogViewModel                                        OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UWBP_UIKit_Dialog_Base_C*)                 Dialog_Base                                                 OFFSET(get<T>, {0x410, 8, 0, 0})


	/// Functions
	// Function /FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.SetUIKitDialogViewModel
	// void SetUIKitDialogViewModel(UUIKitDialogViewModel* ViewModel);                                                          // [0x1d9241c] Final|Public|BlueprintCallable|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.PreConstruct
	// void PreConstruct(bool IsDesignTime);                                                                                    // [0x1d9241c] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.BP_OnDeactivated
	// void BP_OnDeactivated();                                                                                                 // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.BP_OnActivated
	// void BP_OnActivated();                                                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /FortUILibrary/UIKit/Dialogs/WBP_UIKit_Dialog.WBP_UIKit_Dialog_C.ExecuteUbergraph_WBP_UIKit_Dialog
	// void ExecuteUbergraph_WBP_UIKit_Dialog(int32_t EntryPoint);                                                              // [0x1d9241c] Final                
};

