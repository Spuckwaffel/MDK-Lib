/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UIKit.

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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Bounce                                                 ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Transition                                     ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock                                                   ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FSlateFontInfo)                            Font                                                        ___ OFFSET(get<T>, {0x330, 88, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 FontDynamicMaterial                                         ___ OFFSET(get<T>, {0x388, 8, 0, 0})
};

/// Class /FortUILibrary/UIKit/Buttons/Blocks/WBP_UIKit_ButtonBackground_CTA.WBP_UIKit_ButtonBackground_CTA_C
/// Size: 0x007D (0x0002FB - 0x000378)
class UWBP_UIKit_ButtonBackground_CTA_C : public UWBP_UIKit_Block_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Outline_Glow                                           ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Outline                                                ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Disabled_Transition                                    ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Pressed_Transition                                     ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Focused_Transition                                     ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Anim_Hovered_Transition                                     ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UImage*)                                   Backing                                                     ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   FocusOutline                                                ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UImage*)                                   FocusOutline_Glow                                           ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UImage*)                                   Glow                                                        ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UOverlay*)                                 Root                                                        ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UMaterialInstance*)                        BackgroundMaterial                                          ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	DMember(bool)                                      AdditiveBorder                                              ___ OFFSET(get<bool>, {0x368, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 BackgroundDynamicMaterial                                   ___ OFFSET(get<T>, {0x370, 8, 0, 0})
};

/// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C
/// Size: 0x0009 (0x0019F0 - 0x0019F9)
class UWBP_UIKit_Button_Quiet_C : public UWBP_UIKit_ButtonCTA_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6649;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x19F0, 8, 0, 0})
	DMember(bool)                                      isDarkBackground                                            ___ OFFSET(get<bool>, {0x19F8, 1, 0, 0})
};

/// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Regular.WBP_UIKit_Button_Regular_C
/// Size: 0x0009 (0x0019F0 - 0x0019F9)
class UWBP_UIKit_Button_Regular_C : public UWBP_UIKit_ButtonCTA_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6649;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x19F0, 8, 0, 0})
	CMember(TEnumAsByte<E_UI_CTAButtonType>)           ButtonType                                                  ___ OFFSET(get<T>, {0x19F8, 1, 0, 0})
};

/// Class /FortUILibrary/UIKit/Buttons/WBP_UIKit_Button_Loud.WBP_UIKit_Button_Loud_C
/// Size: 0x0008 (0x0019F0 - 0x0019F8)
class UWBP_UIKit_Button_Loud_C : public UWBP_UIKit_ButtonCTA_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6648;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x19F0, 8, 0, 0})
};

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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x920, 8, 0, 0})
	CMember(UUIKitDialogViewModel*)                    UIKitDialogViewModel                                        ___ OFFSET(get<T>, {0x928, 8, 0, 0})
};

