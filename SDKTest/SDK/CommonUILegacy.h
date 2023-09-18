/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CommonUILegacy.

/// Struct /Script/CommonUILegacy.Operation
/// Size: 0x0028 (0x000000 - 0x000028)
class FOperation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EOperation)                                Operation                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UCommonActivatablePanelLegacy*)            Panel                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIntroPanel                                                 ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bActivatePanel                                              ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bOutroPanelBelow                                            ___ OFFSET(get<bool>, {0x12, 1, 0, 0})
};

/// Struct /Script/CommonUILegacy.CommonInputActionData
/// Size: 0x05F0 (0x000360 - 0x000950)
class FCommonInputActionData : public FCommonInputActionDataBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2384;

public:
	CMember(TMap<ECommonGamepadType, FCommonInputTypeInfo>) GamepadInputTypeInfoOverrides                          ___ OFFSET(get<T>, {0x360, 80, 0, 0})
	SMember(FCommonInputTypeInfo)                      GamepadInputTypeInfos                                       ___ OFFSET(get<T>, {0x3B0, 1440, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonActivatablePanelLegacy
/// Size: 0x0138 (0x0003E8 - 0x000520)
class UCommonActivatablePanelLegacy : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	SMember(FMulticastInlineDelegate)                  OnWidgetActivated                                           ___ OFFSET(get<T>, {0x3F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWidgetDeactivated                                         ___ OFFSET(get<T>, {0x400, 16, 0, 0})
	DMember(bool)                                      bConsumeAllActions                                          ___ OFFSET(get<bool>, {0x410, 1, 0, 0})
	DMember(bool)                                      bExposeActionsExternally                                    ___ OFFSET(get<bool>, {0x411, 1, 0, 0})
	DMember(bool)                                      bShouldBypassStack                                          ___ OFFSET(get<bool>, {0x412, 1, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonButtonInternalLegacy
/// Size: 0x0000 (0x000640 - 0x000640)
class UCommonButtonInternalLegacy : public UCommonButtonInternalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
};

/// Class /Script/CommonUILegacy.CommonButtonLegacy
/// Size: 0x0050 (0x001470 - 0x0014C0)
class UCommonButtonLegacy : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectedChanged                                           ___ OFFSET(get<T>, {0x1470, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonClicked                                             ___ OFFSET(get<T>, {0x1480, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonDoubleClicked                                       ___ OFFSET(get<T>, {0x1490, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonHovered                                             ___ OFFSET(get<T>, {0x14A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonUnhovered                                           ___ OFFSET(get<T>, {0x14B0, 16, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonGlobalInputHandlerLegacy
/// Size: 0x0048 (0x000028 - 0x000070)
class UCommonGlobalInputHandlerLegacy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CommonUILegacy.CommonInputManagerLegacy
/// Size: 0x00E0 (0x000028 - 0x000108)
class UCommonInputManagerLegacy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TScriptInterface<Class>)                   CurrentlyHeldActionInputHandler                             ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<UCommonActivatablePanelLegacy*>)    ActivatablePanelStack                                       ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(UCommonGlobalInputHandlerLegacy*)          GlobalInputHandler                                          ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TArray<FOperation>)                        Operations                                                  ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonInputReflectorLegacy
/// Size: 0x0030 (0x0002D0 - 0x000300)
class UCommonInputReflectorLegacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(UClass*)                                   ButtonType                                                  ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(TArray<UCommonButtonLegacy*>)              ActiveButtons                                               ___ OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<UCommonButtonLegacy*>)              InactiveButtons                                             ___ OFFSET(get<T>, {0x2E8, 16, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonPopupButtonLegacy
/// Size: 0x0010 (0x0014C0 - 0x0014D0)
class UCommonPopupButtonLegacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UCommonPopupMenuLegacy*)                   PopupMenu                                                   ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonPopupMenuLegacy
/// Size: 0x0018 (0x000520 - 0x000538)
class UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	DMember(bool)                                      bUseInputStack                                              ___ OFFSET(get<bool>, {0x520, 1, 0, 0})
	CMember(TWeakObjectPtr<UMenuAnchor*>)              OwningMenuAnchor                                            ___ OFFSET(get<T>, {0x524, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ContextProvidingObject                                      ___ OFFSET(get<T>, {0x52C, 8, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonTabListWidgetLegacy
/// Size: 0x0020 (0x0003C0 - 0x0003E0)
class UCommonTabListWidgetLegacy : public UCommonTabListWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FMulticastInlineDelegate)                  OnTabButtonCreated                                          ___ OFFSET(get<T>, {0x3C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabButtonRemoved                                          ___ OFFSET(get<T>, {0x3D0, 16, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonUISubsystemLegacy
/// Size: 0x0030 (0x000040 - 0x000070)
class UCommonUISubsystemLegacy : public UCommonUISubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FMulticastInlineDelegate)                  OnInputSuspensionChanged                                    ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(UCommonInputManagerLegacy*)                CommonInputManager                                          ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonVisibilityWidgetLegacy
/// Size: 0x0010 (0x000320 - 0x000330)
class UCommonVisibilityWidgetLegacy : public UCommonBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	DMember(bool)                                      bShowForGamepad                                             ___ OFFSET(get<bool>, {0x320, 1, 0, 0})
	DMember(bool)                                      bShowForMouseAndKeyboard                                    ___ OFFSET(get<bool>, {0x321, 1, 0, 0})
	DMember(bool)                                      bShowForTouch                                               ___ OFFSET(get<bool>, {0x322, 1, 0, 0})
	DMember(bool)                                      bShowForPC                                                  ___ OFFSET(get<bool>, {0x323, 1, 0, 0})
	DMember(bool)                                      bShowForMac                                                 ___ OFFSET(get<bool>, {0x324, 1, 0, 0})
	DMember(bool)                                      bShowForPS4                                                 ___ OFFSET(get<bool>, {0x325, 1, 0, 0})
	DMember(bool)                                      bShowForPS5                                                 ___ OFFSET(get<bool>, {0x326, 1, 0, 0})
	DMember(bool)                                      bShowForXBox                                                ___ OFFSET(get<bool>, {0x327, 1, 0, 0})
	DMember(bool)                                      bShowForXSX                                                 ___ OFFSET(get<bool>, {0x328, 1, 0, 0})
	DMember(bool)                                      bShowForIOS                                                 ___ OFFSET(get<bool>, {0x329, 1, 0, 0})
	DMember(bool)                                      bShowForAndroid                                             ___ OFFSET(get<bool>, {0x32A, 1, 0, 0})
	DMember(bool)                                      bShowForErebus                                              ___ OFFSET(get<bool>, {0x32B, 1, 0, 0})
	CMember(ESlateVisibility)                          VisibleType                                                 ___ OFFSET(get<T>, {0x32C, 1, 0, 0})
	CMember(ESlateVisibility)                          HiddenType                                                  ___ OFFSET(get<T>, {0x32D, 1, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonWidgetStackLegacy
/// Size: 0x0010 (0x0001C8 - 0x0001D8)
class UCommonWidgetStackLegacy : public UCommonVisibilitySwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FMulticastInlineDelegate)                  OnActiveWidgetChangedLegacyEvent                            ___ OFFSET(get<T>, {0x1C8, 16, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonWidgetSwitcherLegacy
/// Size: 0x0028 (0x000218 - 0x000240)
class UCommonWidgetSwitcherLegacy : public UCommonAnimatedSwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FMulticastInlineDelegate)                  OnActiveWidgetDeactivated                                   ___ OFFSET(get<T>, {0x218, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActiveWidgetChanged                                       ___ OFFSET(get<T>, {0x228, 16, 0, 0})
	DMember(bool)                                      bWidgetActivationEnabled                                    ___ OFFSET(get<bool>, {0x238, 1, 0, 0})
	DMember(bool)                                      bOutroPanelBelow                                            ___ OFFSET(get<bool>, {0x239, 1, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonButtonGroupLegacy
/// Size: 0x00A0 (0x000110 - 0x0001B0)
class UCommonButtonGroupLegacy : public UCommonButtonGroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectedButtonChanged                                     ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHoveredButtonChanged                                      ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonClicked                                             ___ OFFSET(get<T>, {0x160, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonDoubleClicked                                       ___ OFFSET(get<T>, {0x188, 16, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonUIActionRouterLegacy
/// Size: 0x0008 (0x000170 - 0x000178)
class UCommonUIActionRouterLegacy : public UCommonUIActionRouterBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Enum /Script/CommonUILegacy.EOperation
/// Size: 0x06
enum EOperation : uint8_t
{
	EOperation__Intro0                                                               = 0,
	EOperation__Outro1                                                               = 1,
	EOperation__Push2                                                                = 2,
	EOperation__Pop3                                                                 = 3,
	EOperation__Invalid4                                                             = 4,
	EOperation__EOperation_MAX5                                                      = 5
};

/// Enum /Script/CommonUILegacy.ECommonPlatformType
/// Size: 0x11
enum ECommonPlatformType : uint8_t
{
	ECommonPlatformType__PC0                                                         = 0,
	ECommonPlatformType__Mac1                                                        = 1,
	ECommonPlatformType__PS42                                                        = 2,
	ECommonPlatformType__XBox3                                                       = 3,
	ECommonPlatformType__IOS4                                                        = 4,
	ECommonPlatformType__Android5                                                    = 5,
	ECommonPlatformType__Switch6                                                     = 6,
	ECommonPlatformType__XSX7                                                        = 7,
	ECommonPlatformType__PS58                                                        = 8,
	ECommonPlatformType__Count9                                                      = 9,
	ECommonPlatformType__ECommonPlatformType_MAX10                                   = 10
};

/// Enum /Script/CommonUILegacy.ECommonGamepadType
/// Size: 0x08
enum ECommonGamepadType : uint8_t
{
	ECommonGamepadType__XboxOneController0                                           = 0,
	ECommonGamepadType__PS4Controller1                                               = 1,
	ECommonGamepadType__SwitchController2                                            = 2,
	ECommonGamepadType__GenericController3                                           = 3,
	ECommonGamepadType__XboxSeriesXController4                                       = 4,
	ECommonGamepadType__PS5Controller5                                               = 5,
	ECommonGamepadType__Count6                                                       = 6,
	ECommonGamepadType__ECommonGamepadType_MAX7                                      = 7
};

