/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CommonUI.

/// Struct /Script/CommonUI.CommonNumberFormattingOptions
/// Size: 0x0014 (0x000000 - 0x000014)
class FCommonNumberFormattingOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(TEnumAsByte<ERoundingMode>)                RoundingMode                                                ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      UseGrouping                                                 ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(int32_t)                                   MinimumIntegralDigits                                       ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaximumIntegralDigits                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MinimumFractionalDigits                                     ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaximumFractionalDigits                                     ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CommonUI.CommonRegisteredTabInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FCommonRegisteredTabInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   TabIndex                                                    ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(UCommonButtonBase*)                        TabButton                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UWidget*)                                  ContentInstance                                             ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/CommonUI.UIInputConfig
/// Size: 0x0005 (0x000000 - 0x000005)
class FUIInputConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 5;

public:
	DMember(bool)                                      bIgnoreMoveInput                                            ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIgnoreLookInput                                            ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(ECommonInputMode)                          InputMode                                                   ___ OFFSET(get<T>, {0x2, 1, 0, 0})
	CMember(EMouseCaptureMode)                         MouseCaptureMode                                            ___ OFFSET(get<T>, {0x3, 1, 0, 0})
	DMember(bool)                                      bHideCursorDuringViewportCapture                            ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/CommonUI.CommonInputActionHandlerData
/// Size: 0x0020 (0x000000 - 0x000020)
class FCommonInputActionHandlerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       InputActionRow                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(EInputActionState)                         State                                                       ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/CommonUI.UITag
/// Size: 0x0000 (0x000004 - 0x000004)
class FUITag : public FGameplayTag
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/CommonUI.UIActionTag
/// Size: 0x0000 (0x000004 - 0x000004)
class FUIActionTag : public FUITag
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/CommonUI.CommonButtonStyleOptionalSlateSound
/// Size: 0x0020 (0x000000 - 0x000020)
class FCommonButtonStyleOptionalSlateSound : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bHasSound                                                   ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FSlateSound)                               sound                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/CommonUI.RichTextIconData
/// Size: 0x0048 (0x000008 - 0x000050)
class FRichTextIconData : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ResourceObject                                              ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FVector2D)                                 ImageSize                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/CommonUI.CommonInputTypeInfo
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FCommonInputTypeInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FKey)                                      Key                                                         ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	CMember(EInputActionState)                         OverrrideState                                              ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bActionRequiresHold                                         ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(float)                                     HoldTime                                                    ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     HoldRollbackTime                                            ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	SMember(FSlateBrush)                               OverrideBrush                                               ___ OFFSET(get<T>, {0x30, 192, 0, 0})
};

/// Struct /Script/CommonUI.CommonInputActionDataBase
/// Size: 0x0358 (0x000008 - 0x000360)
class FCommonInputActionDataBase : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     HoldDisplayName                                             ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(int32_t)                                   NavBarPriority                                              ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FCommonInputTypeInfo)                      KeyboardInputTypeInfo                                       ___ OFFSET(get<T>, {0x40, 240, 0, 0})
	SMember(FCommonInputTypeInfo)                      DefaultGamepadInputTypeInfo                                 ___ OFFSET(get<T>, {0x130, 240, 0, 0})
	CMember(TMap<FName, FCommonInputTypeInfo>)         GamepadInputOverrides                                       ___ OFFSET(get<T>, {0x220, 80, 0, 0})
	SMember(FCommonInputTypeInfo)                      TouchInputTypeInfo                                          ___ OFFSET(get<T>, {0x270, 240, 0, 0})
};

/// Struct /Script/CommonUI.UIActionKeyMapping
/// Size: 0x0020 (0x000000 - 0x000020)
class FUIActionKeyMapping : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FKey)                                      Key                                                         ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     HoldTime                                                    ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     HoldRollbackTime                                            ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/CommonUI.UIInputAction
/// Size: 0x0030 (0x000000 - 0x000030)
class FUIInputAction : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FUIActionTag)                              ActionTag                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     DefaultDisplayName                                          ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(TArray<FUIActionKeyMapping>)               KeyMappings                                                 ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/CommonUI.CommonAnalogCursorSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FCommonAnalogCursorSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	DMember(int32_t)                                   PreprocessorPriority                                        ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bEnableCursorAcceleration                                   ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     CursorAcceleration                                          ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CursorMaxSpeed                                              ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     CursorDeadZone                                              ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     HoverSlowdownFactor                                         ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     ScrollDeadZone                                              ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     ScrollUpdatePeriod                                          ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     ScrollMultiplier                                            ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Class /Script/CommonUI.CommonBoundActionButtonInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonBoundActionButtonInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.AnalogSlider
/// Size: 0x0020 (0x0006C0 - 0x0006E0)
class UAnalogSlider : public USlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	SMember(FMulticastInlineDelegate)                  OnAnalogCapture                                             ___ OFFSET(get<T>, {0x6C0, 16, 0, 0})
};

/// Class /Script/CommonUI.CommonActionHandlerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonActionHandlerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.CommonActionWidget
/// Size: 0x02E8 (0x000178 - 0x000460)
class UCommonActionWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FMulticastInlineDelegate)                  OnInputMethodChanged                                        ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FSlateBrush)                               ProgressMaterialBrush                                       ___ OFFSET(get<T>, {0x190, 192, 0, 0})
	SMember(FName)                                     ProgressMaterialParam                                       ___ OFFSET(get<T>, {0x250, 4, 0, 0})
	SMember(FSlateBrush)                               IconRimBrush                                                ___ OFFSET(get<T>, {0x260, 192, 0, 0})
	CMember(TArray<FDataTableRowHandle>)               InputActions                                                ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(UInputAction*)                             EnhancedInputAction                                         ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ProgressDynamicMaterial                                     ___ OFFSET(get<T>, {0x340, 8, 0, 0})
};

/// Class /Script/CommonUI.CommonUserWidget
/// Size: 0x0028 (0x0002A8 - 0x0002D0)
class UCommonUserWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	DMember(bool)                                      bDisplayInActionBar                                         ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bConsumePointerInput                                        ___ OFFSET(get<bool>, {0x2A9, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonActivatableWidget
/// Size: 0x0118 (0x0002D0 - 0x0003E8)
class UCommonActivatableWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	DMember(bool)                                      bIsBackHandler                                              ___ OFFSET(get<bool>, {0x2D0, 1, 0, 0})
	DMember(bool)                                      bIsBackActionDisplayedInActionBar                           ___ OFFSET(get<bool>, {0x2D1, 1, 0, 0})
	DMember(bool)                                      bAutoActivate                                               ___ OFFSET(get<bool>, {0x2D2, 1, 0, 0})
	DMember(bool)                                      bSupportsActivationFocus                                    ___ OFFSET(get<bool>, {0x2D3, 1, 0, 0})
	DMember(bool)                                      bIsModal                                                    ___ OFFSET(get<bool>, {0x2D4, 1, 0, 0})
	DMember(bool)                                      bAutoRestoreFocus                                           ___ OFFSET(get<bool>, {0x2D5, 1, 0, 0})
	DMember(bool)                                      bOverrideActionDomain                                       ___ OFFSET(get<bool>, {0x2D6, 1, 0, 0})
	CMember(UInputMappingContext*)                     InputMapping                                                ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(int32_t)                                   InputMappingPriority                                        ___ OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	CMember(TWeakObjectPtr<UCommonInputActionDomain*>) ActionDomainOverride                                        ___ OFFSET(get<T>, {0x2E8, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnWidgetActivated                                        ___ OFFSET(get<T>, {0x308, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnWidgetDeactivated                                      ___ OFFSET(get<T>, {0x318, 16, 0, 0})
	DMember(bool)                                      bIsActive                                                   ___ OFFSET(get<bool>, {0x328, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    VisibilityBoundWidgets                                      ___ OFFSET(get<T>, {0x330, 16, 0, 0})
	DMember(bool)                                      bSetVisibilityOnActivated                                   ___ OFFSET(get<bool>, {0x3E0, 1, 0, 0})
	CMember(ESlateVisibility)                          ActivatedVisibility                                         ___ OFFSET(get<T>, {0x3E1, 1, 0, 0})
	DMember(bool)                                      bSetVisibilityOnDeactivated                                 ___ OFFSET(get<bool>, {0x3E2, 1, 0, 0})
	CMember(ESlateVisibility)                          DeactivatedVisibility                                       ___ OFFSET(get<T>, {0x3E3, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonAnimatedSwitcher
/// Size: 0x0070 (0x0001A8 - 0x000218)
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(ECommonSwitcherTransition)                 TransitionType                                              ___ OFFSET(get<T>, {0x1D8, 1, 0, 0})
	CMember(ETransitionCurve)                          TransitionCurveType                                         ___ OFFSET(get<T>, {0x1D9, 1, 0, 0})
	DMember(float)                                     TransitionDuration                                          ___ OFFSET(get<float>, {0x1DC, 4, 0, 0})
};

/// Class /Script/CommonUI.CommonActivatableWidgetSwitcher
/// Size: 0x0010 (0x000218 - 0x000228)
class UCommonActivatableWidgetSwitcher : public UCommonAnimatedSwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
};

/// Class /Script/CommonUI.CommonBorderStyle
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UCommonBorderStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FSlateBrush)                               Background                                                  ___ OFFSET(get<T>, {0x30, 192, 0, 0})
};

/// Class /Script/CommonUI.CommonBorder
/// Size: 0x0020 (0x000300 - 0x000320)
class UCommonBorder : public UBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UClass*)                                   style                                                       ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bReducePaddingBySafezone                                    ___ OFFSET(get<bool>, {0x308, 1, 0, 0})
	SMember(FMargin)                                   MinimumPadding                                              ___ OFFSET(get<T>, {0x30C, 16, 0, 0})
};

/// Class /Script/CommonUI.CommonButtonStyle
/// Size: 0x0708 (0x000028 - 0x000730)
class UCommonButtonStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
	DMember(bool)                                      bSingleMaterial                                             ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FSlateBrush)                               SingleMaterialBrush                                         ___ OFFSET(get<T>, {0x30, 192, 0, 0})
	SMember(FSlateBrush)                               NormalBase                                                  ___ OFFSET(get<T>, {0xF0, 192, 0, 0})
	SMember(FSlateBrush)                               NormalHovered                                               ___ OFFSET(get<T>, {0x1B0, 192, 0, 0})
	SMember(FSlateBrush)                               NormalPressed                                               ___ OFFSET(get<T>, {0x270, 192, 0, 0})
	SMember(FSlateBrush)                               SelectedBase                                                ___ OFFSET(get<T>, {0x330, 192, 0, 0})
	SMember(FSlateBrush)                               SelectedHovered                                             ___ OFFSET(get<T>, {0x3F0, 192, 0, 0})
	SMember(FSlateBrush)                               SelectedPressed                                             ___ OFFSET(get<T>, {0x4B0, 192, 0, 0})
	SMember(FSlateBrush)                               Disabled                                                    ___ OFFSET(get<T>, {0x570, 192, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               ___ OFFSET(get<T>, {0x630, 16, 0, 0})
	SMember(FMargin)                                   CustomPadding                                               ___ OFFSET(get<T>, {0x640, 16, 0, 0})
	DMember(int32_t)                                   MinWidth                                                    ___ OFFSET(get<int32_t>, {0x650, 4, 0, 0})
	DMember(int32_t)                                   MinHeight                                                   ___ OFFSET(get<int32_t>, {0x654, 4, 0, 0})
	CMember(UClass*)                                   NormalTextStyle                                             ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UClass*)                                   NormalHoveredTextStyle                                      ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UClass*)                                   SelectedTextStyle                                           ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UClass*)                                   SelectedHoveredTextStyle                                    ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UClass*)                                   DisabledTextStyle                                           ___ OFFSET(get<T>, {0x678, 8, 0, 0})
	SMember(FSlateSound)                               PressedSlateSound                                           ___ OFFSET(get<T>, {0x680, 24, 0, 0})
	SMember(FCommonButtonStyleOptionalSlateSound)      SelectedPressedSlateSound                                   ___ OFFSET(get<T>, {0x698, 32, 0, 0})
	SMember(FCommonButtonStyleOptionalSlateSound)      LockedPressedSlateSound                                     ___ OFFSET(get<T>, {0x6B8, 32, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSound                                           ___ OFFSET(get<T>, {0x6D8, 24, 0, 0})
	SMember(FCommonButtonStyleOptionalSlateSound)      SelectedHoveredSlateSound                                   ___ OFFSET(get<T>, {0x6F0, 32, 0, 0})
	SMember(FCommonButtonStyleOptionalSlateSound)      LockedHoveredSlateSound                                     ___ OFFSET(get<T>, {0x710, 32, 0, 0})
};

/// Class /Script/CommonUI.CommonButtonInternalBase
/// Size: 0x0070 (0x0005D0 - 0x000640)
class UCommonButtonInternalBase : public UButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	SMember(FMulticastInlineDelegate)                  OnDoubleClicked                                             ___ OFFSET(get<T>, {0x5D8, 16, 0, 0})
	DMember(int32_t)                                   MinWidth                                                    ___ OFFSET(get<int32_t>, {0x608, 4, 0, 0})
	DMember(int32_t)                                   MinHeight                                                   ___ OFFSET(get<int32_t>, {0x60C, 4, 0, 0})
	DMember(bool)                                      bButtonEnabled                                              ___ OFFSET(get<bool>, {0x610, 1, 0, 0})
	DMember(bool)                                      bInteractionEnabled                                         ___ OFFSET(get<bool>, {0x611, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonButtonBase
/// Size: 0x11A0 (0x0002D0 - 0x001470)
class UCommonButtonBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5232;

public:
	SMember(FWidgetEventField)                         ClickEvent                                                  ___ OFFSET(get<T>, {0x2D0, 1, 0, 0})
	DMember(int32_t)                                   MinWidth                                                    ___ OFFSET(get<int32_t>, {0x2D4, 4, 0, 0})
	DMember(int32_t)                                   MinHeight                                                   ___ OFFSET(get<int32_t>, {0x2D8, 4, 0, 0})
	CMember(UClass*)                                   style                                                       ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(bool)                                      bHideInputAction                                            ___ OFFSET(get<bool>, {0x2E8, 1, 0, 0})
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   ___ OFFSET(get<T>, {0x2F0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   ___ OFFSET(get<T>, {0x308, 24, 0, 0})
	SMember(FSlateSound)                               SelectedPressedSlateSoundOverride                           ___ OFFSET(get<T>, {0x320, 24, 0, 0})
	SMember(FSlateSound)                               SelectedHoveredSlateSoundOverride                           ___ OFFSET(get<T>, {0x338, 24, 0, 0})
	SMember(FSlateSound)                               LockedPressedSlateSoundOverride                             ___ OFFSET(get<T>, {0x350, 24, 0, 0})
	SMember(FSlateSound)                               LockedHoveredSlateSoundOverride                             ___ OFFSET(get<T>, {0x368, 24, 0, 0})
	DMember(bool)                                      bApplyAlphaOnDisable                                        ___ OFFSET(get<bool>, {0x380, 1, 1, 0})
	DMember(bool)                                      bLocked                                                     ___ OFFSET(get<bool>, {0x380, 1, 1, 1})
	DMember(bool)                                      bSelectable                                                 ___ OFFSET(get<bool>, {0x380, 1, 1, 2})
	DMember(bool)                                      bShouldSelectUponReceivingFocus                             ___ OFFSET(get<bool>, {0x380, 1, 1, 3})
	DMember(bool)                                      bInteractableWhenSelected                                   ___ OFFSET(get<bool>, {0x380, 1, 1, 4})
	DMember(bool)                                      bToggleable                                                 ___ OFFSET(get<bool>, {0x380, 1, 1, 5})
	DMember(bool)                                      bTriggerClickedAfterSelection                               ___ OFFSET(get<bool>, {0x380, 1, 1, 6})
	DMember(bool)                                      bDisplayInputActionWhenNotInteractable                      ___ OFFSET(get<bool>, {0x380, 1, 1, 7})
	DMember(bool)                                      bHideInputActionWithKeyboard                                ___ OFFSET(get<bool>, {0x381, 1, 1, 0})
	DMember(bool)                                      bShouldUseFallbackDefaultInputAction                        ___ OFFSET(get<bool>, {0x381, 1, 1, 1})
	DMember(bool)                                      bRequiresHold                                               ___ OFFSET(get<bool>, {0x381, 1, 1, 2})
	CMember(UClass*)                                   HoldData                                                    ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	DMember(bool)                                      bSimulateHoverOnTouchInput                                  ___ OFFSET(get<bool>, {0x390, 1, 0, 0})
	CMember(TEnumAsByte<EButtonClickMethod>)           ClickMethod                                                 ___ OFFSET(get<T>, {0x392, 1, 0, 0})
	CMember(TEnumAsByte<EButtonTouchMethod>)           TouchMethod                                                 ___ OFFSET(get<T>, {0x393, 1, 0, 0})
	CMember(TEnumAsByte<EButtonPressMethod>)           PressMethod                                                 ___ OFFSET(get<T>, {0x394, 1, 0, 0})
	DMember(int32_t)                                   InputPriority                                               ___ OFFSET(get<int32_t>, {0x398, 4, 0, 0})
	SMember(FDataTableRowHandle)                       TriggeringInputAction                                       ___ OFFSET(get<T>, {0x3A0, 16, 0, 0})
	CMember(UInputAction*)                             TriggeringEnhancedInputAction                               ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectedChangedBase                                       ___ OFFSET(get<T>, {0x3C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseClicked                                         ___ OFFSET(get<T>, {0x3D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseDoubleClicked                                   ___ OFFSET(get<T>, {0x3E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseHovered                                         ___ OFFSET(get<T>, {0x3F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseUnhovered                                       ___ OFFSET(get<T>, {0x408, 16, 0, 0})
	DMember(bool)                                      bIsPersistentBinding                                        ___ OFFSET(get<bool>, {0x448, 1, 0, 0})
	CMember(ECommonInputMode)                          InputModeOverride                                           ___ OFFSET(get<T>, {0x449, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 SingleMaterialStyleMID                                      ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	SMember(FButtonStyle)                              NormalStyle                                                 ___ OFFSET(get<T>, {0x490, 944, 0, 0})
	SMember(FButtonStyle)                              SelectedStyle                                               ___ OFFSET(get<T>, {0x840, 944, 0, 0})
	SMember(FButtonStyle)                              DisabledStyle                                               ___ OFFSET(get<T>, {0xBF0, 944, 0, 0})
	SMember(FButtonStyle)                              LockedStyle                                                 ___ OFFSET(get<T>, {0xFA0, 944, 0, 0})
	DMember(bool)                                      bStopDoubleClickPropagation                                 ___ OFFSET(get<bool>, {0x1350, 1, 1, 0})
	CMember(UCommonActionWidget*)                      InputActionWidget                                           ___ OFFSET(get<T>, {0x1468, 8, 0, 0})
};

/// Class /Script/CommonUI.WidgetLockedStateRegistration
/// Size: 0x0000 (0x000028 - 0x000028)
class UWidgetLockedStateRegistration : public UWidgetBinaryStateRegistration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.CommonCustomNavigation
/// Size: 0x0010 (0x000300 - 0x000310)
class UCommonCustomNavigation : public UBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FDelegateProperty)                         OnNavigationEvent                                           ___ OFFSET(get<T>, {0x300, 12, 0, 0})
};

/// Class /Script/CommonUI.CommonTextBlock
/// Size: 0x0030 (0x000350 - 0x000380)
class UCommonTextBlock : public UTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	DMember(float)                                     MobileFontSizeMultiplier                                    ___ OFFSET(get<float>, {0x348, 4, 0, 0})
	CMember(UClass*)                                   style                                                       ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UClass*)                                   ScrollStyle                                                 ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(bool)                                      bIsScrollingEnabled                                         ___ OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(bool)                                      bDisplayAllCaps                                             ___ OFFSET(get<bool>, {0x361, 1, 0, 0})
	DMember(bool)                                      bAutoCollapseWithEmptyText                                  ___ OFFSET(get<bool>, {0x362, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonDateTimeTextBlock
/// Size: 0x0050 (0x000380 - 0x0003D0)
class UCommonDateTimeTextBlock : public UCommonTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Script/CommonUI.CommonGameViewportClient
/// Size: 0x0040 (0x000398 - 0x0003D8)
class UCommonGameViewportClient : public UGameViewportClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
};

/// Class /Script/CommonUI.CommonHardwareVisibilityBorder
/// Size: 0x0050 (0x000320 - 0x000370)
class UCommonHardwareVisibilityBorder : public UCommonBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FGameplayTagQuery)                         VisibilityQuery                                             ___ OFFSET(get<T>, {0x320, 72, 0, 0})
	CMember(ESlateVisibility)                          VisibleType                                                 ___ OFFSET(get<T>, {0x368, 1, 0, 0})
	CMember(ESlateVisibility)                          HiddenType                                                  ___ OFFSET(get<T>, {0x369, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonHierarchicalScrollBox
/// Size: 0x0000 (0x000C10 - 0x000C10)
class UCommonHierarchicalScrollBox : public UScrollBox
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3088;

public:
};

/// Class /Script/CommonUI.CommonLazyImage
/// Size: 0x0100 (0x0002B0 - 0x0003B0)
class UCommonLazyImage : public UImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FSlateBrush)                               LoadingBackgroundBrush                                      ___ OFFSET(get<T>, {0x2B0, 192, 0, 0})
	SMember(FName)                                     MaterialTextureParamName                                    ___ OFFSET(get<T>, {0x370, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnLoadingStateChanged                                    ___ OFFSET(get<T>, {0x378, 16, 0, 0})
};

/// Class /Script/CommonUI.CommonLazyWidget
/// Size: 0x0148 (0x000178 - 0x0002C0)
class UCommonLazyWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FSlateBrush)                               LoadingBackgroundBrush                                      ___ OFFSET(get<T>, {0x180, 192, 0, 0})
	CMember(UUserWidget*)                              Content                                                     ___ OFFSET(get<T>, {0x240, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnLoadingStateChanged                                    ___ OFFSET(get<T>, {0x270, 16, 0, 0})
};

/// Class /Script/CommonUI.CommonListView
/// Size: 0x0000 (0x000BD0 - 0x000BD0)
class UCommonListView : public UListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:
};

/// Class /Script/CommonUI.LoadGuardSlot
/// Size: 0x0028 (0x000038 - 0x000060)
class ULoadGuardSlot : public UPanelSlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMargin)                                   Padding                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         HorizontalAlignment                                         ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           VerticalAlignment                                           ___ OFFSET(get<T>, {0x49, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonLoadGuard
/// Size: 0x0150 (0x000190 - 0x0002E0)
class UCommonLoadGuard : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FSlateBrush)                               LoadingBackgroundBrush                                      ___ OFFSET(get<T>, {0x190, 192, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ThrobberAlignment                                           ___ OFFSET(get<T>, {0x250, 1, 0, 0})
	SMember(FMargin)                                   ThrobberPadding                                             ___ OFFSET(get<T>, {0x254, 16, 0, 0})
	SMember(FText)                                     LoadingText                                                 ___ OFFSET(get<T>, {0x268, 24, 0, 0})
	CMember(UClass*)                                   TextStyle                                                   ___ OFFSET(get<T>, {0x280, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BP_OnLoadingStateChanged                                    ___ OFFSET(get<T>, {0x288, 16, 0, 0})
	SMember(FSoftObjectPath)                           SpinnerMaterialPath                                         ___ OFFSET(get<T>, {0x298, 24, 0, 0})
};

/// Class /Script/CommonUI.CommonNumericTextBlock
/// Size: 0x00A0 (0x000380 - 0x000420)
class UCommonNumericTextBlock : public UCommonTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	SMember(FMulticastInlineDelegate)                  OnInterpolationStartedEvent                                 ___ OFFSET(get<T>, {0x378, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterpolationUpdatedEvent                                 ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOutroEvent                                                ___ OFFSET(get<T>, {0x398, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterpolationEndedEvent                                   ___ OFFSET(get<T>, {0x3A8, 16, 0, 0})
	DMember(float)                                     CurrentNumericValue                                         ___ OFFSET(get<float>, {0x3B8, 4, 0, 0})
	CMember(ECommonNumericType)                        NumericType                                                 ___ OFFSET(get<T>, {0x3BC, 1, 0, 0})
	SMember(FCommonNumberFormattingOptions)            FormattingSpecification                                     ___ OFFSET(get<T>, {0x3C0, 20, 0, 0})
	DMember(float)                                     EaseOutInterpolationExponent                                ___ OFFSET(get<float>, {0x3D4, 4, 0, 0})
	DMember(float)                                     InterpolationUpdateInterval                                 ___ OFFSET(get<float>, {0x3D8, 4, 0, 0})
	DMember(float)                                     PostInterpolationShrinkDuration                             ___ OFFSET(get<float>, {0x3DC, 4, 0, 0})
	DMember(bool)                                      PerformSizeInterpolation                                    ___ OFFSET(get<bool>, {0x3E0, 1, 0, 0})
	DMember(bool)                                      IsPercentage                                                ___ OFFSET(get<bool>, {0x3E1, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonPoolableWidgetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonPoolableWidgetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.CommonRichTextBlock
/// Size: 0x0040 (0x000830 - 0x000870)
class UCommonRichTextBlock : public URichTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	CMember(ERichTextInlineIconDisplayMode)            InlineIconDisplayMode                                       ___ OFFSET(get<T>, {0x830, 1, 0, 0})
	DMember(bool)                                      bTintInlineIcon                                             ___ OFFSET(get<bool>, {0x831, 1, 0, 0})
	CMember(UClass*)                                   DefaultTextStyleOverrideClass                               ___ OFFSET(get<T>, {0x838, 8, 0, 0})
	DMember(float)                                     MobileTextBlockScale                                        ___ OFFSET(get<float>, {0x840, 4, 0, 0})
	CMember(UClass*)                                   ScrollStyle                                                 ___ OFFSET(get<T>, {0x848, 8, 0, 0})
	DMember(bool)                                      bIsScrollingEnabled                                         ___ OFFSET(get<bool>, {0x850, 1, 0, 0})
	DMember(bool)                                      bDisplayAllCaps                                             ___ OFFSET(get<bool>, {0x851, 1, 0, 0})
	DMember(bool)                                      bAutoCollapseWithEmptyText                                  ___ OFFSET(get<bool>, {0x852, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonRotator
/// Size: 0x0060 (0x001470 - 0x0014D0)
class UCommonRotator : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	SMember(FMulticastInlineDelegate)                  OnRotated                                                   ___ OFFSET(get<T>, {0x1480, 16, 0, 0})
	CMember(UCommonTextBlock*)                         MyText                                                      ___ OFFSET(get<T>, {0x14A8, 8, 0, 0})
};

/// Class /Script/CommonUI.CommonTabListWidgetBase
/// Size: 0x00F0 (0x0002D0 - 0x0003C0)
class UCommonTabListWidgetBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	SMember(FMulticastInlineDelegate)                  OnTabSelected                                               ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabButtonCreation                                         ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabButtonRemoval                                          ___ OFFSET(get<T>, {0x2F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabListRebuilt                                            ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextTabInputActionData                                      ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousTabInputActionData                                  ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(UInputAction*)                             NextTabEnhancedInputAction                                  ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UInputAction*)                             PreviousTabEnhancedInputAction                              ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(bool)                                      bAutoListenForInput                                         ___ OFFSET(get<bool>, {0x340, 1, 0, 0})
	DMember(bool)                                      bDeferRebuildingTabList                                     ___ OFFSET(get<bool>, {0x341, 1, 0, 0})
	CMember(TWeakObjectPtr<UCommonAnimatedSwitcher*>)  LinkedSwitcher                                              ___ OFFSET(get<T>, {0x344, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   TabButtonGroup                                              ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(TMap<FName, FCommonRegisteredTabInfo>)     RegisteredTabsByID                                          ___ OFFSET(get<T>, {0x360, 80, 0, 0})
};

/// Class /Script/CommonUI.CommonTextStyle
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UCommonTextStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FSlateFontInfo)                            Font                                                        ___ OFFSET(get<T>, {0x28, 88, 0, 0})
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bUsesDropShadow                                             ___ OFFSET(get<bool>, {0x90, 1, 0, 0})
	SMember(FVector2D)                                 ShadowOffset                                                ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FLinearColor)                              ShadowColor                                                 ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FMargin)                                   Margin                                                      ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FSlateBrush)                               StrikeBrush                                                 ___ OFFSET(get<T>, {0xD0, 192, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        ___ OFFSET(get<float>, {0x190, 4, 0, 0})
};

/// Class /Script/CommonUI.CommonTextScrollStyle
/// Size: 0x0018 (0x000028 - 0x000040)
class UCommonTextScrollStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Speed                                                       ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     StartDelay                                                  ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     EndDelay                                                    ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     FadeInDelay                                                 ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     FadeOutDelay                                                ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/CommonUI.CommonTileView
/// Size: 0x0000 (0x000C00 - 0x000C00)
class UCommonTileView : public UTileView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3072;

public:
};

/// Class /Script/CommonUI.CommonTreeView
/// Size: 0x0000 (0x000C30 - 0x000C30)
class UCommonTreeView : public UTreeView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3120;

public:
};

/// Class /Script/CommonUI.CommonUIEditorSettings
/// Size: 0x0068 (0x000028 - 0x000090)
class UCommonUIEditorSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TWeakObjectPtr<UClass*>)                   TemplateTextStyle                                           ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TemplateButtonStyle                                         ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TemplateBorderStyle                                         ___ OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Class /Script/CommonUI.CommonUILibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonUILibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.CommonUIRichTextData
/// Size: 0x0008 (0x000028 - 0x000030)
class UCommonUIRichTextData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UDataTable*)                               InlineIconSet                                               ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/CommonUI.CommonUISettings
/// Size: 0x0188 (0x000028 - 0x0001B0)
class UCommonUISettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	DMember(bool)                                      bAutoLoadData                                               ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  DefaultImageResourceObject                                  ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       DefaultThrobberMaterial                                     ___ OFFSET(get<T>, {0x50, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultRichTextDataClass                                    ___ OFFSET(get<T>, {0x70, 32, 0, 0})
	CMember(TArray<FGameplayTag>)                      PlatformTraits                                              ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(UObject*)                                  DefaultImageResourceObjectInstance                          ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(UMaterialInterface*)                       DefaultThrobberMaterialInstance                             ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FSlateBrush)                               DefaultThrobberBrush                                        ___ OFFSET(get<T>, {0xE0, 192, 0, 0})
	CMember(UCommonUIRichTextData*)                    RichTextDataInstance                                        ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
};

/// Class /Script/CommonUI.CommonUISubsystemBase
/// Size: 0x0010 (0x000030 - 0x000040)
class UCommonUISubsystemBase : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/CommonUI.CommonInputMetadata
/// Size: 0x0008 (0x000028 - 0x000030)
class UCommonInputMetadata : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   NavBarPriority                                              ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(bool)                                      bIsGenericInputAction                                       ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonMappingContextMetadataInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonMappingContextMetadataInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.CommonMappingContextMetadata
/// Size: 0x0060 (0x000030 - 0x000090)
class UCommonMappingContextMetadata : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UCommonInputMetadata*)                     EnhancedInputMetadata                                       ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TMap<UInputAction*, UCommonInputMetadata*>) PerActionEnhancedInputMetadata                             ___ OFFSET(get<T>, {0x40, 80, 0, 0})
};

/// Class /Script/CommonUI.CommonUIVisibilitySubsystem
/// Size: 0x0058 (0x000030 - 0x000088)
class UCommonUIVisibilitySubsystem : public ULocalPlayerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/CommonUI.CommonVideoPlayer
/// Size: 0x0148 (0x000178 - 0x0002C0)
class UCommonVideoPlayer : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(UMediaSource*)                             Video                                                       ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(UMediaPlayer*)                             MediaPlayer                                                 ___ OFFSET(get<T>, {0x180, 8, 0, 0})
	CMember(UMediaTexture*)                            MediaTexture                                                ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(UMaterial*)                                VideoMaterial                                               ___ OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(UMediaSoundComponent*)                     SoundComponent                                              ___ OFFSET(get<T>, {0x198, 8, 0, 0})
	SMember(FSlateBrush)                               VideoBrush                                                  ___ OFFSET(get<T>, {0x1A0, 192, 0, 0})
};

/// Class /Script/CommonUI.CommonVisibilitySwitcher
/// Size: 0x0028 (0x0001A0 - 0x0001C8)
class UCommonVisibilitySwitcher : public UOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(ESlateVisibility)                          ShownVisibility                                             ___ OFFSET(get<T>, {0x1A0, 1, 0, 0})
	DMember(int32_t)                                   ActiveWidgetIndex                                           ___ OFFSET(get<int32_t>, {0x1A4, 4, 0, 0})
	DMember(bool)                                      bAutoActivateSlot                                           ___ OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(bool)                                      bActivateFirstSlotOnAdding                                  ___ OFFSET(get<bool>, {0x1A9, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonVisibilitySwitcherSlot
/// Size: 0x0010 (0x000058 - 0x000068)
class UCommonVisibilitySwitcherSlot : public UOverlaySlot
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Script/CommonUI.UCommonVisibilityWidgetBase
/// Size: 0x0060 (0x000320 - 0x000380)
class UUCommonVisibilityWidgetBase : public UCommonBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(TMap<FName, bool>)                         VisibilityControls                                          ___ OFFSET(get<T>, {0x320, 80, 0, 0})
	DMember(bool)                                      bShowForGamepad                                             ___ OFFSET(get<bool>, {0x370, 1, 0, 0})
	DMember(bool)                                      bShowForMouseAndKeyboard                                    ___ OFFSET(get<bool>, {0x371, 1, 0, 0})
	DMember(bool)                                      bShowForTouch                                               ___ OFFSET(get<bool>, {0x372, 1, 0, 0})
	CMember(ESlateVisibility)                          VisibleType                                                 ___ OFFSET(get<T>, {0x373, 1, 0, 0})
	CMember(ESlateVisibility)                          HiddenType                                                  ___ OFFSET(get<T>, {0x374, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonVisualAttachment
/// Size: 0x0020 (0x0001C8 - 0x0001E8)
class UCommonVisualAttachment : public USizeBox
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FVector2D)                                 ContentAnchor                                               ___ OFFSET(get<T>, {0x1C8, 16, 0, 0})
};

/// Class /Script/CommonUI.CommonWidgetCarousel
/// Size: 0x0048 (0x000190 - 0x0001D8)
class UCommonWidgetCarousel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	DMember(int32_t)                                   ActiveWidgetIndex                                           ___ OFFSET(get<int32_t>, {0x190, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCurrentPageIndexChanged                                   ___ OFFSET(get<T>, {0x198, 16, 0, 0})
};

/// Class /Script/CommonUI.CommonWidgetCarouselNavBar
/// Size: 0x0048 (0x000178 - 0x0001C0)
class UCommonWidgetCarouselNavBar : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(UClass*)                                   ButtonWidgetType                                            ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               ___ OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(UCommonWidgetCarousel*)                    LinkedCarousel                                              ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup                                                 ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TArray<UCommonButtonBase*>)                Buttons                                                     ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
};

/// Class /Script/CommonUI.CommonWidgetGroupBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonWidgetGroupBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.CommonButtonGroupBase
/// Size: 0x00E8 (0x000028 - 0x000110)
class UCommonButtonGroupBase : public UCommonWidgetGroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectedButtonBaseChanged                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHoveredButtonBaseChanged                                  ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseClicked                                         ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonBaseDoubleClicked                                   ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectionCleared                                          ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bSelectionRequired                                          ___ OFFSET(get<bool>, {0xF0, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonBoundActionBar
/// Size: 0x0018 (0x000258 - 0x000270)
class UCommonBoundActionBar : public UDynamicEntryBoxBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	CMember(UClass*)                                   ActionButtonClass                                           ___ OFFSET(get<T>, {0x260, 8, 0, 0})
	DMember(bool)                                      bDisplayOwningPlayerActionsOnly                             ___ OFFSET(get<bool>, {0x268, 1, 0, 0})
	DMember(bool)                                      bIgnoreDuplicateActions                                     ___ OFFSET(get<bool>, {0x269, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonBoundActionButton
/// Size: 0x0020 (0x001470 - 0x001490)
class UCommonBoundActionButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5264;

public:
	CMember(UCommonTextBlock*)                         Text_ActionName                                             ___ OFFSET(get<T>, {0x1478, 8, 0, 0})
};

/// Class /Script/CommonUI.CommonGenericInputActionDataTable
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UCommonGenericInputActionDataTable : public UDataTable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/CommonUI.CommonInputActionDataProcessor
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonInputActionDataProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.CommonUIActionRouterBase
/// Size: 0x0140 (0x000030 - 0x000170)
class UCommonUIActionRouterBase : public ULocalPlayerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
};

/// Class /Script/CommonUI.CommonUIInputSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UCommonUIInputSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(bool)                                      bLinkCursorToGamepadFocus                                   ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(int32_t)                                   UIActionProcessingPriority                                  ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TArray<FUIInputAction>)                    InputActions                                                ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FUIInputAction>)                    ActionOverrides                                             ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FCommonAnalogCursorSettings)               AnalogCursorSettings                                        ___ OFFSET(get<T>, {0x50, 36, 0, 0})
};

/// Class /Script/CommonUI.CommonActivatableWidgetContainerBase
/// Size: 0x0120 (0x000178 - 0x000298)
class UCommonActivatableWidgetContainerBase : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(ECommonSwitcherTransition)                 TransitionType                                              ___ OFFSET(get<T>, {0x190, 1, 0, 0})
	CMember(ETransitionCurve)                          TransitionCurveType                                         ___ OFFSET(get<T>, {0x191, 1, 0, 0})
	DMember(float)                                     TransitionDuration                                          ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	CMember(TArray<UCommonActivatableWidget*>)         WidgetList                                                  ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	CMember(UCommonActivatableWidget*)                 DisplayedWidget                                             ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(FUserWidgetPool)                           GeneratedWidgetsPool                                        ___ OFFSET(get<T>, {0x1B0, 136, 0, 0})
};

/// Class /Script/CommonUI.CommonActivatableWidgetStack
/// Size: 0x0010 (0x000298 - 0x0002A8)
class UCommonActivatableWidgetStack : public UCommonActivatableWidgetContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(UClass*)                                   RootContentWidgetClass                                      ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UCommonActivatableWidget*)                 RootContentWidget                                           ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Class /Script/CommonUI.CommonActivatableWidgetQueue
/// Size: 0x0000 (0x000298 - 0x000298)
class UCommonActivatableWidgetQueue : public UCommonActivatableWidgetContainerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Enum /Script/CommonUI.ECommonNumericType
/// Size: 0x05
enum ECommonNumericType : uint8_t
{
	ECommonNumericType__Number0                                                      = 0,
	ECommonNumericType__Percentage1                                                  = 1,
	ECommonNumericType__Seconds2                                                     = 2,
	ECommonNumericType__Distance3                                                    = 3,
	ECommonNumericType__ECommonNumericType_MAX4                                      = 4
};

/// Enum /Script/CommonUI.ERichTextInlineIconDisplayMode
/// Size: 0x04
enum ERichTextInlineIconDisplayMode : uint8_t
{
	ERichTextInlineIconDisplayMode__IconOnly0                                        = 0,
	ERichTextInlineIconDisplayMode__TextOnly1                                        = 1,
	ERichTextInlineIconDisplayMode__IconAndText2                                     = 2,
	ERichTextInlineIconDisplayMode__MAX3                                             = 3
};

/// Enum /Script/CommonUI.EInputActionState
/// Size: 0x05
enum EInputActionState : uint8_t
{
	EInputActionState__Enabled0                                                      = 0,
	EInputActionState__Disabled1                                                     = 1,
	EInputActionState__Hidden2                                                       = 2,
	EInputActionState__HiddenAndDisabled3                                            = 3,
	EInputActionState__EInputActionState_MAX4                                        = 4
};

/// Enum /Script/CommonUI.ECommonSwitcherTransition
/// Size: 0x05
enum ECommonSwitcherTransition : uint8_t
{
	ECommonSwitcherTransition__FadeOnly0                                             = 0,
	ECommonSwitcherTransition__Horizontal1                                           = 1,
	ECommonSwitcherTransition__Vertical2                                             = 2,
	ECommonSwitcherTransition__Zoom3                                                 = 3,
	ECommonSwitcherTransition__ECommonSwitcherTransition_MAX4                        = 4
};

/// Enum /Script/CommonUI.ETransitionCurve
/// Size: 0x08
enum ETransitionCurve : uint8_t
{
	ETransitionCurve__Linear0                                                        = 0,
	ETransitionCurve__QuadIn1                                                        = 1,
	ETransitionCurve__QuadOut2                                                       = 2,
	ETransitionCurve__QuadInOut3                                                     = 3,
	ETransitionCurve__CubicIn4                                                       = 4,
	ETransitionCurve__CubicOut5                                                      = 5,
	ETransitionCurve__CubicInOut6                                                    = 6,
	ETransitionCurve__ETransitionCurve_MAX7                                          = 7
};

