
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BlueprintContext
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/CommonUI.AnalogSlider
/// Size: 0x0010 (0x0003D8 - 0x0003E8)
class UAnalogSlider : public USlider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	CMember(UMulticastDelegate)                        OnAnalogCapture                                             OFFSET(get<T>, {0x3D8, 16, 0, 0})
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
/// Size: 0x0210 (0x000100 - 0x000310)
class UCommonActionWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UMulticastDelegate)                        OnInputMethodChanged                                        OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InputActionDataRow                                          OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FSlateBrush)                               ProgressMaterialBrush                                       OFFSET(getStruct<T>, {0x120, 136, 0, 0})
	SMember(FName)                                     ProgressMaterialParam                                       OFFSET(getStruct<T>, {0x1A8, 8, 0, 0})
	SMember(FSlateBrush)                               IconRimBrush                                                OFFSET(getStruct<T>, {0x1B0, 136, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ProgressDynamicMaterial                                     OFFSET(get<T>, {0x238, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonActionWidget.SetInputAction
	// void SetInputAction(FDataTableRowHandle InputActionRow);                                                                 // [0x300120] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.SetIconRimBrush
	// void SetIconRimBrush(FSlateBrush InIconRimBrush);                                                                        // [0x2fffa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActionWidget.OnInputMethodChanged__DelegateSignature
	// void OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);                                                        // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonActionWidget.IsHeldAction
	// bool IsHeldAction();                                                                                                     // [0x2ff870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetIcon
	// FSlateBrush GetIcon();                                                                                                   // [0x2fe8c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActionWidget.GetDisplayText
	// FText GetDisplayText();                                                                                                  // [0x2fe840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonUserWidget
/// Size: 0x0008 (0x000208 - 0x000210)
class UCommonUserWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	DMember(bool)                                      bConsumePointerInput                                        OFFSET(get<bool>, {0x208, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonUserWidget.SetConsumePointerInput
	// void SetConsumePointerInput(bool bInConsumePointerInput);                                                                // [0x30c8b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonActivatablePanel
/// Size: 0x01B0 (0x000210 - 0x0003C0)
class UCommonActivatablePanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 960;

public:
	CMember(UMulticastDelegate)                        OnWidgetActivated                                           OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnWidgetDeactivated                                         OFFSET(get<T>, {0x228, 16, 0, 0})
	DMember(bool)                                      bConsumeAllActions                                          OFFSET(get<bool>, {0x340, 1, 0, 0})
	DMember(bool)                                      bExposeActionsExternally                                    OFFSET(get<bool>, {0x341, 1, 0, 0})
	DMember(bool)                                      bShouldBypassStack                                          OFFSET(get<bool>, {0x342, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgressPopupMenu
	// void SetInputActionHandlerWithProgressPopupMenu(FDataTableRowHandle InputActionRow, DelegateProperty CommitedEvent, DelegateProperty ProgressEvent, UCommonPopupMenu* PopupMenu); // [0x300540] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.SetInputActionHandlerWithProgress
	// void SetInputActionHandlerWithProgress(FDataTableRowHandle InputActionRow, DelegateProperty CommitedEvent, DelegateProperty ProgressEvent); // [0x3003e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.SetInputActionHandlerWithPopupMenu
	// void SetInputActionHandlerWithPopupMenu(FDataTableRowHandle InputActionRow, DelegateProperty CommitedEvent, UCommonPopupMenu* PopupMenu); // [0x3002b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.SetInputActionHandler
	// void SetInputActionHandler(FDataTableRowHandle InputActionRow, DelegateProperty CommitedEvent);                          // [0x3001b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.SetActionHandlerStateWithDisabledCommitEvent
	// void SetActionHandlerStateWithDisabledCommitEvent(UDataTable* DataTable, FName RowName, EInputActionState State, DelegateProperty DisabledCommitEvent); // [0x2ffdc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandleWithDisabledCommitEvent
	// void SetActionHandlerStateFromHandleWithDisabledCommitEvent(FDataTableRowHandle InputActionRow, EInputActionState State, DelegateProperty DisabledCommitEvent); // [0x2ffc90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.SetActionHandlerStateFromHandle
	// void SetActionHandlerStateFromHandle(FDataTableRowHandle InputActionRow, EInputActionState State);                       // [0x2ffbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.SetActionHandlerState
	// void SetActionHandlerState(UDataTable* DataTable, FName RowName, EInputActionState State);                               // [0x2ffac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.RemoveInputActionHandler
	// void RemoveInputActionHandler(FDataTableRowHandle InputActionRow);                                                       // [0x2ffa30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.RemoveAllInputActionHandlers
	// void RemoveAllInputActionHandlers();                                                                                     // [0x2ffa10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.PopPanel
	// void PopPanel();                                                                                                         // [0x2ff9f0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.OnInputModeChanged
	// void OnInputModeChanged(bool bUsingGamepad);                                                                             // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatablePanel.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatablePanel.OnBeginOutro
	// void OnBeginOutro();                                                                                                     // [0x2b87720] Native|Event|Public|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatablePanel.OnBeginIntro
	// void OnBeginIntro();                                                                                                     // [0x2b7aa60] Native|Event|Public|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatablePanel.OnActivated
	// void OnActivated();                                                                                                      // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonActivatablePanel.IsIntroed
	// bool IsIntroed();                                                                                                        // [0x2ff900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatablePanel.IsActivated
	// bool IsActivated();                                                                                                      // [0x2ff850] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatablePanel.HasInputActionHandler
	// bool HasInputActionHandler(FDataTableRowHandle InputActionRow);                                                          // [0x2ff7b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatablePanel.GetInputActions
	// bool GetInputActions(TArray<FCommonInputActionHandlerData>& InputActionDataRows);                                        // [0x2fea20] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonActivatablePanel.EndOutro
	// void EndOutro();                                                                                                         // [0x2fe220] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.EndIntro
	// void EndIntro();                                                                                                         // [0x2fe200] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.BeginOutro
	// void BeginOutro();                                                                                                       // [0x2fe0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.BeginIntro
	// void BeginIntro();                                                                                                       // [0x2fe0d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.AddInputActionNoHandler
	// void AddInputActionNoHandler(UDataTable* DataTable, FName RowName);                                                      // [0x2fe010] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgressPopup
	// void AddInputActionHandlerWithProgressPopup(UDataTable* DataTable, FName RowName, DelegateProperty CommitedEvent, DelegateProperty ProgressEvent, UCommonPopupMenu* PopupMenu); // [0x2fde50] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.AddInputActionHandlerWithProgress
	// void AddInputActionHandlerWithProgress(UDataTable* DataTable, FName RowName, DelegateProperty CommitedEvent, DelegateProperty ProgressEvent); // [0x2fdcd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.AddInputActionHandlerWithPopup
	// void AddInputActionHandlerWithPopup(UDataTable* DataTable, FName RowName, DelegateProperty CommitedEvent, UCommonPopupMenu* PopupMenu); // [0x2fdb70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonActivatablePanel.AddInputActionHandler
	// void AddInputActionHandler(UDataTable* DataTable, FName RowName, DelegateProperty CommitedEvent);                        // [0x2fda40] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonBorderStyle
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UCommonBorderStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSlateBrush)                               Background                                                  OFFSET(getStruct<T>, {0x28, 136, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonBorderStyle.GetBackgroundBrush
	// void GetBackgroundBrush(FSlateBrush& Brush);                                                                             // [0x2fe240] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonBorder
/// Size: 0x0020 (0x000260 - 0x000280)
class UCommonBorder : public UBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	CMember(UClass*)                                   Style                                                       OFFSET(get<T>, {0x260, 8, 0, 0})
	DMember(bool)                                      bReducePaddingBySafezone                                    OFFSET(get<bool>, {0x268, 1, 0, 0})
	SMember(FMargin)                                   MinimumPadding                                              OFFSET(getStruct<T>, {0x26C, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonBorder.SetStyle
	// void SetStyle(UClass* InStyle);                                                                                          // [0x300d90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonButtonStyle
/// Size: 0x04C8 (0x000028 - 0x0004F0)
class UCommonButtonStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	DMember(bool)                                      bSingleMaterial                                             OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FSlateBrush)                               SingleMaterialBrush                                         OFFSET(getStruct<T>, {0x30, 136, 0, 0})
	SMember(FSlateBrush)                               NormalBase                                                  OFFSET(getStruct<T>, {0xB8, 136, 0, 0})
	SMember(FSlateBrush)                               NormalHovered                                               OFFSET(getStruct<T>, {0x140, 136, 0, 0})
	SMember(FSlateBrush)                               NormalPressed                                               OFFSET(getStruct<T>, {0x1C8, 136, 0, 0})
	SMember(FSlateBrush)                               SelectedBase                                                OFFSET(getStruct<T>, {0x250, 136, 0, 0})
	SMember(FSlateBrush)                               SelectedHovered                                             OFFSET(getStruct<T>, {0x2D8, 136, 0, 0})
	SMember(FSlateBrush)                               SelectedPressed                                             OFFSET(getStruct<T>, {0x360, 136, 0, 0})
	SMember(FSlateBrush)                               Disabled                                                    OFFSET(getStruct<T>, {0x3E8, 136, 0, 0})
	SMember(FMargin)                                   ButtonPadding                                               OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	SMember(FMargin)                                   CustomPadding                                               OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	DMember(int32_t)                                   MinWidth                                                    OFFSET(get<int32_t>, {0x490, 4, 0, 0})
	DMember(int32_t)                                   MinHeight                                                   OFFSET(get<int32_t>, {0x494, 4, 0, 0})
	CMember(UClass*)                                   NormalTextStyle                                             OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UClass*)                                   NormalHoveredTextStyle                                      OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UClass*)                                   SelectedTextStyle                                           OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UClass*)                                   SelectedHoveredTextStyle                                    OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UClass*)                                   DisabledTextStyle                                           OFFSET(get<T>, {0x4B8, 8, 0, 0})
	SMember(FSlateSound)                               PressedSlateSound                                           OFFSET(getStruct<T>, {0x4C0, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSound                                           OFFSET(getStruct<T>, {0x4D8, 24, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedTextStyle
	// UCommonTextStyle* GetSelectedTextStyle();                                                                                // [0x2ff5b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedPressedBrush
	// void GetSelectedPressedBrush(FSlateBrush& Brush);                                                                        // [0x2ff440] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredTextStyle
	// UCommonTextStyle* GetSelectedHoveredTextStyle();                                                                         // [0x2ff410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedHoveredBrush
	// void GetSelectedHoveredBrush(FSlateBrush& Brush);                                                                        // [0x2ff2a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetSelectedBaseBrush
	// void GetSelectedBaseBrush(FSlateBrush& Brush);                                                                           // [0x2ff130] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalTextStyle
	// UCommonTextStyle* GetNormalTextStyle();                                                                                  // [0x2ff0d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalPressedBrush
	// void GetNormalPressedBrush(FSlateBrush& Brush);                                                                          // [0x2fef60] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredTextStyle
	// UCommonTextStyle* GetNormalHoveredTextStyle();                                                                           // [0x2fef30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalHoveredBrush
	// void GetNormalHoveredBrush(FSlateBrush& Brush);                                                                          // [0x2fedc0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetNormalBaseBrush
	// void GetNormalBaseBrush(FSlateBrush& Brush);                                                                             // [0x2fec50] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetMaterialBrush
	// void GetMaterialBrush(FSlateBrush& Brush);                                                                               // [0x2feae0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledTextStyle
	// UCommonTextStyle* GetDisabledTextStyle();                                                                                // [0x2fe810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetDisabledBrush
	// void GetDisabledBrush(FSlateBrush& Brush);                                                                               // [0x2fe6a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetCustomPadding
	// void GetCustomPadding(FMargin& OutCustomPadding);                                                                        // [0x2fe600] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonStyle.GetButtonPadding
	// void GetButtonPadding(FMargin& OutButtonPadding);                                                                        // [0x2fe3b0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonButtonInternal
/// Size: 0x0080 (0x000420 - 0x0004A0)
class UCommonButtonInternal : public UButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(UMulticastDelegate)                        OnDoubleClicked                                             OFFSET(get<T>, {0x420, 16, 0, 0})
	DMember(int32_t)                                   MinWidth                                                    OFFSET(get<int32_t>, {0x470, 4, 0, 0})
	DMember(int32_t)                                   MinHeight                                                   OFFSET(get<int32_t>, {0x474, 4, 0, 0})
	DMember(bool)                                      bButtonEnabled                                              OFFSET(get<bool>, {0x478, 1, 0, 0})
	DMember(bool)                                      bInteractionEnabled                                         OFFSET(get<bool>, {0x479, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonButton
/// Size: 0x05F0 (0x000210 - 0x000800)
class UCommonButton : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2048;

public:
	CMember(UMulticastDelegate)                        OnSelectedChanged                                           OFFSET(get<T>, {0x210, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnButtonClicked                                             OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnButtonDoubleClicked                                       OFFSET(get<T>, {0x230, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnButtonHovered                                             OFFSET(get<T>, {0x240, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnButtonUnhovered                                           OFFSET(get<T>, {0x250, 16, 0, 0})
	DMember(int32_t)                                   MinWidth                                                    OFFSET(get<int32_t>, {0x260, 4, 0, 0})
	DMember(int32_t)                                   MinHeight                                                   OFFSET(get<int32_t>, {0x264, 4, 0, 0})
	CMember(UClass*)                                   Style                                                       OFFSET(get<T>, {0x268, 8, 0, 0})
	SMember(FSlateSound)                               PressedSlateSoundOverride                                   OFFSET(getStruct<T>, {0x270, 24, 0, 0})
	SMember(FSlateSound)                               HoveredSlateSoundOverride                                   OFFSET(getStruct<T>, {0x288, 24, 0, 0})
	DMember(bool)                                      bApplyAlphaOnDisable                                        OFFSET(get<bool>, {0x2A0, 1, 1, 0})
	DMember(bool)                                      bSelectable                                                 OFFSET(get<bool>, {0x2A0, 1, 1, 1})
	DMember(bool)                                      bShouldSelectUponReceivingFocus                             OFFSET(get<bool>, {0x2A0, 1, 1, 2})
	DMember(bool)                                      bInteractableWhenSelected                                   OFFSET(get<bool>, {0x2A0, 1, 1, 3})
	DMember(bool)                                      bToggleable                                                 OFFSET(get<bool>, {0x2A0, 1, 1, 4})
	DMember(bool)                                      bDisplayInputActionWhenNotInteractable                      OFFSET(get<bool>, {0x2A0, 1, 1, 5})
	DMember(bool)                                      bHideInputActionWithKeyboard                                OFFSET(get<bool>, {0x2A0, 1, 1, 6})
	DMember(bool)                                      bShouldUseFallbackDefaultInputAction                        OFFSET(get<bool>, {0x2A0, 1, 1, 7})
	CMember(TEnumAsByte<EButtonClickMethod>)           ClickMethod                                                 OFFSET(get<T>, {0x2A2, 1, 0, 0})
	DMember(int32_t)                                   InputPriority                                               OFFSET(get<int32_t>, {0x2A4, 4, 0, 0})
	SMember(FDataTableRowHandle)                       TriggeringInputAction                                       OFFSET(getStruct<T>, {0x2A8, 16, 0, 0})
	CMember(UCommonActionWidget*)                      InputActionWidget                                           OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 SingleMaterialStyleMID                                      OFFSET(get<T>, {0x300, 8, 0, 0})
	SMember(FButtonStyle)                              NormalStyle                                                 OFFSET(getStruct<T>, {0x308, 632, 0, 0})
	SMember(FButtonStyle)                              SelectedStyle                                               OFFSET(getStruct<T>, {0x580, 632, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonButton.SetTriggeredInputAction
	// void SetTriggeredInputAction(FDataTableRowHandle& InputActionRow, UCommonActivatablePanel* OldPanel);                    // [0x300e90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButton.SetStyle
	// void SetStyle(UClass* InStyle);                                                                                          // [0x300e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButton.SetShouldSelectUponReceivingFocus
	// void SetShouldSelectUponReceivingFocus(bool bInShouldSelectUponReceivingFocus);                                          // [0x300d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButton.SetSelectedInternal
	// void SetSelectedInternal(bool bInSelected, bool bAllowSound, bool bBroadcast);                                           // [0x300be0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonButton.SetMinDimensions
	// void SetMinDimensions(int32_t InMinWidth, int32_t InMinHeight);                                                          // [0x300b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButton.SetIsToggleable
	// void SetIsToggleable(bool bInIsToggleable);                                                                              // [0x300a90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButton.SetIsSelected
	// void SetIsSelected(bool InSelected, bool bGiveClickFeedback);                                                            // [0x3009c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButton.SetIsSelectable
	// void SetIsSelectable(bool bInIsSelectable);                                                                              // [0x300930] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButton.SetIsInteractionEnabled
	// void SetIsInteractionEnabled(bool bInIsInteractionEnabled);                                                              // [0x3008a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButton.SetInputActionProgressMaterial
	// void SetInputActionProgressMaterial(FSlateBrush& InProgressMaterialBrush, FName& InProgressMaterialParam);               // [0x3006e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButton.SetClickMethod
	// void SetClickMethod(TEnumAsByte<EButtonClickMethod> InClickMethod);                                                      // [0x2fff20] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButton.OnUnhovered
	// void OnUnhovered();                                                                                                      // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButton.OnTriggeredInputActionChanged
	// void OnTriggeredInputActionChanged(FDataTableRowHandle& NewTriggeredAction);                                             // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CommonUI.CommonButton.OnSelected
	// void OnSelected();                                                                                                       // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButton.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0x2bb27a0] Native|Protected     
	// Function /Script/CommonUI.CommonButton.OnHovered
	// void OnHovered();                                                                                                        // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButton.OnEnabled
	// void OnEnabled();                                                                                                        // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButton.OnDoubleClicked
	// void OnDoubleClicked();                                                                                                  // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButton.OnDisabled
	// void OnDisabled();                                                                                                       // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButton.OnDeselected
	// void OnDeselected();                                                                                                     // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButton.OnCurrentTextStyleChanged
	// void OnCurrentTextStyleChanged();                                                                                        // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButton.OnClicked
	// void OnClicked();                                                                                                        // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButton.OnActionProgress
	// void OnActionProgress(float HeldPercent);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButton.OnActionComplete
	// void OnActionComplete();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonButton.NativeOnActionProgress
	// void NativeOnActionProgress(float HeldPercent);                                                                          // [0x2ff970] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButton.NativeOnActionComplete
	// void NativeOnActionComplete();                                                                                           // [0x2ff950] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButton.IsPressed
	// bool IsPressed();                                                                                                        // [0x2ff920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButton.IsInteractionEnabled
	// bool IsInteractionEnabled();                                                                                             // [0x2ff8d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButton.IsHovered
	// bool IsHovered();                                                                                                        // [0x2ff8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButton.HandleTriggeringActionCommited
	// void HandleTriggeringActionCommited(bool& bPassThrough);                                                                 // [0x2ff710] Native|Protected|HasOutParms 
	// Function /Script/CommonUI.CommonButton.HandleFocusReceived
	// void HandleFocusReceived();                                                                                              // [0x2ff6f0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButton.HandleButtonReleased
	// void HandleButtonReleased();                                                                                             // [0x2ff6d0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButton.HandleButtonPressed
	// void HandleButtonPressed();                                                                                              // [0x2ff6b0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButton.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked();                                                                                        // [0x2ff690] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButton.HandleButtonClicked
	// void HandleButtonClicked();                                                                                              // [0x2ff670] Final|Native|Protected 
	// Function /Script/CommonUI.CommonButton.GetStyle
	// UCommonButtonStyle* GetStyle();                                                                                          // [0x2ff640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButton.GetSingleMaterialStyleMID
	// UMaterialInstanceDynamic* GetSingleMaterialStyleMID();                                                                   // [0x2ff610] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButton.GetShouldSelectUponReceivingFocus
	// bool GetShouldSelectUponReceivingFocus();                                                                                // [0x2ff5e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButton.GetSelected
	// bool GetSelected();                                                                                                      // [0x2ff100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButton.GetInputAction
	// bool GetInputAction(FDataTableRowHandle& InputActionRow);                                                                // [0x2fe970] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButton.GetCurrentTextStyleClass
	// UClass* GetCurrentTextStyleClass();                                                                                      // [0x2fe5c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButton.GetCurrentTextStyle
	// UCommonTextStyle* GetCurrentTextStyle();                                                                                 // [0x2fe590] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButton.GetCurrentCustomPadding
	// void GetCurrentCustomPadding(FMargin& OutCustomPadding);                                                                 // [0x2fe4f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButton.GetCurrentButtonPadding
	// void GetCurrentButtonPadding(FMargin& OutButtonPadding);                                                                 // [0x2fe450] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButton.DisableButtonWithReason
	// void DisableButtonWithReason(FText& DisabledReason);                                                                     // [0x2fe130] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonButton.ClearSelection
	// void ClearSelection();                                                                                                   // [0x2fe110] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonWidgetGroupBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonWidgetGroupBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveWidget
	// void RemoveWidget(UWidget* InWidget);                                                                                    // [0x30c580] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.RemoveAll
	// void RemoveAll();                                                                                                        // [0x30c560] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetGroupBase.AddWidget
	// void AddWidget(UWidget* InWidget);                                                                                       // [0x30bf50] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonButtonGroup
/// Size: 0x0070 (0x000028 - 0x000098)
class UCommonButtonGroup : public UCommonWidgetGroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UMulticastDelegate)                        OnSelectedButtonChanged                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnHoveredButtonChanged                                      OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnButtonClicked                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnButtonDoubleClicked                                       OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnSelectionCleared                                          OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bSelectionRequired                                          OFFSET(get<bool>, {0x78, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonButtonGroup.SetSelectionRequired
	// void SetSelectionRequired(bool bRequireSelection);                                                                       // [0x3051a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroup.SelectPreviousButton
	// void SelectPreviousButton(bool bAllowWrap);                                                                              // [0x304590] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroup.SelectNextButton
	// void SelectNextButton(bool bAllowWrap);                                                                                  // [0x304500] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroup.SelectButtonAtIndex
	// void SelectButtonAtIndex(int32_t ButtonIndex);                                                                           // [0x304480] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonButtonGroup.OnSelectionStateChanged
	// void OnSelectionStateChanged(UCommonButton* BaseButton, bool bIsSelected);                                               // [0x303f40] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroup.OnHandleButtonDoubleClicked
	// void OnHandleButtonDoubleClicked(UCommonButton* BaseButton);                                                             // [0x303eb0] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroup.OnHandleButtonClicked
	// void OnHandleButtonClicked(UCommonButton* BaseButton);                                                                   // [0x303e20] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroup.OnButtonUnhovered
	// void OnButtonUnhovered(UCommonButton* BaseButton);                                                                       // [0x303d90] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroup.OnButtonHovered
	// void OnButtonHovered(UCommonButton* BaseButton);                                                                         // [0x303d00] Native|Protected     
	// Function /Script/CommonUI.CommonButtonGroup.HasAnyButtons
	// bool HasAnyButtons();                                                                                                    // [0x303ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroup.GetSelectedButtonIndex
	// int32_t GetSelectedButtonIndex();                                                                                        // [0x303960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroup.GetButtonAtIndex
	// UCommonButton* GetButtonAtIndex(int32_t Index);                                                                          // [0x303680] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroup.FindButtonIndex
	// int32_t FindButtonIndex(UCommonButton* ButtonToFind);                                                                    // [0x303460] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonButtonGroup.DeselectAll
	// void DeselectAll();                                                                                                      // [0x303390] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonCustomNavigation
/// Size: 0x0010 (0x000260 - 0x000270)
class UCommonCustomNavigation : public UBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
};

/// Class /Script/CommonUI.CommonTextBlock
/// Size: 0x0048 (0x000210 - 0x000258)
class UCommonTextBlock : public UTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	CMember(UClass*)                                   Style                                                       OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(UClass*)                                   ScrollStyle                                                 OFFSET(get<T>, {0x218, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonTextBlock.SetWrapTextWidth
	// void SetWrapTextWidth(int32_t InWrapTextAt);                                                                             // [0x309c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetStyle
	// void SetStyle(UClass* InStyle);                                                                                          // [0x309960] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetScrollStyle
	// void SetScrollStyle(UClass* InScrollStyle);                                                                              // [0x309790] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.SetProperties
	// void SetProperties(UClass* InStyle, UClass* InScrollStyle);                                                              // [0x3096d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTextBlock.ResetScrollState
	// void ResetScrollState();                                                                                                 // [0x308ee0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonDateTimeTextBlock
/// Size: 0x0040 (0x000258 - 0x000298)
class UCommonDateTimeTextBlock : public UCommonTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:


	/// Functions
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetTimespanValue
	// void SetTimespanValue(FTimespan InTimespan);                                                                             // [0x3052c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetDateTimeValue
	// void SetDateTimeValue(FDateTime InDateTime, bool bShowAsCountdown);                                                      // [0x304a70] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.SetCountDownCompletionText
	// void SetCountDownCompletionText(FText InCompletionText);                                                                 // [0x304900] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonDateTimeTextBlock.GetDateTime
	// FDateTime GetDateTime();                                                                                                 // [0x303710] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonDynamicEntryBox
/// Size: 0x0140 (0x000100 - 0x000240)
class UCommonDynamicEntryBox : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(UClass*)                                   EntryWidgetClass                                            OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FVector2D)                                 EntrySpacing                                                OFFSET(getStruct<T>, {0x200, 8, 0, 0})
	SMember(FSlateChildSize)                           EntrySize                                                   OFFSET(getStruct<T>, {0x208, 8, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         EntryHAlign                                                 OFFSET(get<T>, {0x210, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           EntryVAlign                                                 OFFSET(get<T>, {0x211, 1, 0, 0})
	DMember(int32_t)                                   MaxElementSize                                              OFFSET(get<int32_t>, {0x214, 4, 0, 0})
	CMember(TArray<FVector2D>)                         SpacingPattern                                              OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(EWidgetClipping)                           EntryClipping                                               OFFSET(get<T>, {0x228, 1, 0, 0})
	CMember(EDynamicBoxType)                           BoxType                                                     OFFSET(get<T>, {0x229, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonDynamicEntryBox.SetEntrySpacing
	// void SetEntrySpacing(FVector2D& InEntrySpacing);                                                                         // [0x304bd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/CommonUI.CommonDynamicEntryBox.Reset
	// void Reset(bool bDeleteWidgets);                                                                                         // [0x304300] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonDynamicEntryBox.RemoveEntry
	// void RemoveEntry(UUserWidget* EntryWidget);                                                                              // [0x304280] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonDynamicEntryBox.GetNumEntries
	// int32_t GetNumEntries();                                                                                                 // [0x3038d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonDynamicEntryBox.GetAllEntries
	// TArray<UUserWidget*> GetAllEntries();                                                                                    // [0x303580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonGlobalInputHandler
/// Size: 0x0048 (0x000028 - 0x000070)
class UCommonGlobalInputHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/CommonUI.CommonInputManager
/// Size: 0x0298 (0x000028 - 0x0002C0)
class UCommonInputManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(TScriptInterface<Class>)                   CurrentlyHeldActionInputHandler                             OFFSET(get<T>, {0x260, 16, 0, 0})
	CMember(TArray<UCommonActivatablePanel*>)          ActivatablePanelStack                                       OFFSET(get<T>, {0x270, 16, 0, 0})
	CMember(UCommonGlobalInputHandler*)                GlobalInputHandler                                          OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(TArray<FOperation>)                        Operations                                                  OFFSET(get<T>, {0x2A0, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonInputManager.SuspendStartingOperationProcessing
	// void SuspendStartingOperationProcessing();                                                                               // [0x3056a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonInputManager.StopListeningForExistingHeldAction
	// bool StopListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, DelegateProperty& CompleteEvent, DelegateProperty& ProgressEvent); // [0x305500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonInputManager.StartListeningForExistingHeldAction
	// bool StartListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, DelegateProperty& CompleteEvent, DelegateProperty& ProgressEvent); // [0x305360] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonInputManager.SetGlobalInputHandlerPriorityFilter
	// void SetGlobalInputHandlerPriorityFilter(int32_t InFilterPriority);                                                      // [0x304cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonInputManager.ResumeStartingOperationProcessing
	// void ResumeStartingOperationProcessing();                                                                                // [0x304390] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonInputManager.PushActivatablePanel
	// void PushActivatablePanel(UCommonActivatablePanel* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);           // [0x3040b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonInputManager.PopActivatablePanel
	// void PopActivatablePanel(UCommonActivatablePanel* ActivatablePanel);                                                     // [0x304010] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonInputManager.IsPanelOnStack
	// bool IsPanelOnStack(UCommonActivatablePanel* InPanel);                                                                   // [0x303c10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonInputManager.IsInputSuspended
	// bool IsInputSuspended();                                                                                                 // [0x303af0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonInputManager.GetGlobalInputHandlerPriorityFilter
	// int32_t GetGlobalInputHandlerPriorityFilter();                                                                           // [0x303750] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonInputManager.GetAvailableInputActions
	// bool GetAvailableInputActions(TArray<FCommonInputActionHandlerData>& AvailableInputActions);                             // [0x3035c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonInputReflector
/// Size: 0x0030 (0x000210 - 0x000240)
class UCommonInputReflector : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(UClass*)                                   ButtonType                                                  OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(TArray<UCommonButton*>)                    ActiveButtons                                               OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(TArray<UCommonButton*>)                    InactiveButtons                                             OFFSET(get<T>, {0x228, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonInputReflector.OnButtonAdded
	// void OnButtonAdded(UCommonButton* AddedButton, FCommonInputActionHandlerData& Data);                                     // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonLazyImage
/// Size: 0x0048 (0x0001D8 - 0x000220)
class UCommonLazyImage : public UImage
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(UMulticastDelegate)                        OnLoadingStateChanged                                       OFFSET(get<T>, {0x1D8, 16, 0, 0})
	CMember(UCommonLoadGuard*)                         LoadGuard                                                   OFFSET(get<T>, {0x218, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonLazyImage.ShowDefaultImage
	// void ShowDefaultImage();                                                                                                 // [0x305340] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyTexture
	// void SetBrushFromLazyTexture(UTexture2D*& LazyTexture, bool bMatchSize);                                                 // [0x3047f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyMaterial
	// void SetBrushFromLazyMaterial(UMaterialInterface*& LazyMaterial);                                                        // [0x304730] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset
	// void SetBrushFromLazyDisplayAsset(UObject*& LazyObject, bool bMatchTextureSize);                                         // [0x304620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLazyImage.IsLoading
	// bool IsLoading();                                                                                                        // [0x303be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLazyImage.ForwardLoadingStateChanged
	// void ForwardLoadingStateChanged(bool bIsLoading);                                                                        // [0x3034f0] Final|Native|Private 
};

/// Class /Script/CommonUI.CommonPoolableWidgetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonPoolableWidgetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnReleaseToPool
	// void OnReleaseToPool();                                                                                                  // [0x308b60] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonPoolableWidgetInterface.OnAcquireFromPool
	// void OnAcquireFromPool();                                                                                                // [0x308ab0] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonListItem
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonListItem : public UCommonPoolableWidgetInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CommonUI.CommonListItem.ToggleExpansion
	// void ToggleExpansion();                                                                                                  // [0x3056c0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CommonUI.CommonListItem.SetSelected
	// void SetSelected(bool bSelected);                                                                                        // [0x304f40] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CommonUI.CommonListItem.SetIndexInList
	// void SetIndexInList(int32_t InIndexInList);                                                                              // [0x304d70] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CommonUI.CommonListItem.SetExpanded
	// void SetExpanded(bool bExpanded);                                                                                        // [0x304c60] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CommonUI.CommonListItem.RegisterOnClicked
	// void RegisterOnClicked(DelegateProperty& Callback);                                                                      // [0x3041c0] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/CommonUI.CommonListItem.Private_OnExpanderArrowShiftClicked
	// void Private_OnExpanderArrowShiftClicked();                                                                              // [0x304090] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CommonUI.CommonListItem.IsItemExpanded
	// bool IsItemExpanded();                                                                                                   // [0x303b20] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonListItem.GetIndentLevel
	// int32_t GetIndentLevel();                                                                                                // [0x303780] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonListItem.DoesItemHaveChildren
	// int32_t DoesItemHaveChildren();                                                                                          // [0x3033b0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonListViewNullItem
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonListViewNullItem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CommonUI.CommonListView
/// Size: 0x01E0 (0x000100 - 0x0002E0)
class UCommonListView : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UMulticastDelegate)                        OnItemClicked                                               OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnItemDoubleClicked                                         OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnItemHovered                                               OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnItemSelected                                              OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnItemWidgetCreated                                         OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnItemWidgetDestroyed                                       OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnItemScrolledIntoView                                      OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(float)                                     ItemHeight                                                  OFFSET(get<float>, {0x170, 4, 0, 0})
	SMember(FMargin)                                   DesiredItemPadding                                          OFFSET(getStruct<T>, {0x174, 16, 0, 0})
	CMember(UClass*)                                   ListItemClass                                               OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(TEnumAsByte<ESelectionMode>)               SelectionMode                                               OFFSET(get<T>, {0x190, 1, 0, 0})
	CMember(EConsumeMouseWheel)                        ConsumeMouseWheel                                           OFFSET(get<T>, {0x191, 1, 0, 0})
	DMember(bool)                                      bClearSelectionOnClick                                      OFFSET(get<bool>, {0x192, 1, 0, 0})
	DMember(int32_t)                                   NumPreAllocatedEntries                                      OFFSET(get<int32_t>, {0x194, 4, 0, 0})
	DMember(bool)                                      bSimulateDoubleClickOnSelectedItemClick                     OFFSET(get<bool>, {0x198, 1, 0, 0})
	CMember(UCommonListViewNullItem*)                  NullItem                                                    OFFSET(get<T>, {0x2D0, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonListView.SetSimulateDoubleClickOnSelectedItemClick
	// void SetSimulateDoubleClickOnSelectedItemClick(bool bInSimulateDoubleClick);                                             // [0x305230] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonListView.SetSelectionMode
	// void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);                                                        // [0x305120] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonListView.SetSelectedItem
	// bool SetSelectedItem(UObject* Item, bool bWaitIfPendingRefresh);                                                         // [0x305060] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonListView.SetSelectedIndex
	// bool SetSelectedIndex(int32_t Index);                                                                                    // [0x304fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonListView.SetItemSelection
	// void SetItemSelection(UObject* Item, bool bSelected);                                                                    // [0x304e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonListView.SetItemHeight
	// void SetItemHeight(float NewHeight);                                                                                     // [0x304df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonListView.SetDesiredItemPadding
	// void SetDesiredItemPadding(FMargin& DesiredPadding);                                                                     // [0x304b30] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonListView.SetDataProvider
	// void SetDataProvider(TArray<UObject*>& InDataProvider);                                                                  // [0x3049c0] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonListView.ScrollIntoView
	// void ScrollIntoView(UObject* Item, bool NavigateOnScrollIntoView);                                                       // [0x3043b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonListView.IsRefreshPending
	// bool IsRefreshPending();                                                                                                 // [0x303cd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonListView.IsItemVisible
	// bool IsItemVisible(UObject* Item);                                                                                       // [0x303b50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonListView.GetSelectionModeBP
	// TEnumAsByte<ESelectionMode> GetSelectionModeBP();                                                                        // [0x303a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonListView.GetSelectedItems
	// bool GetSelectedItems(TArray<UObject*>& Items);                                                                          // [0x3039c0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/CommonUI.CommonListView.GetSelectedItem
	// UObject* GetSelectedItem();                                                                                              // [0x303990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonListView.GetNumItemsSelected
	// int32_t GetNumItemsSelected();                                                                                           // [0x303930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonListView.GetNumItems
	// int32_t GetNumItems();                                                                                                   // [0x303900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonListView.GetItemAt
	// UObject* GetItemAt(int32_t Index);                                                                                       // [0x303840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonListView.GetIndexForItem
	// int32_t GetIndexForItem(UObject* Item);                                                                                  // [0x3037b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonListView.DynamicHandleItemUnhoveredCommonButton
	// void DynamicHandleItemUnhoveredCommonButton(UCommonButton* Button);                                                      // [0x2602060] Final|Native|Private 
	// Function /Script/CommonUI.CommonListView.DynamicHandleItemHoveredCommonButton
	// void DynamicHandleItemHoveredCommonButton(UCommonButton* Button);                                                        // [0x26382f0] Final|Native|Private 
	// Function /Script/CommonUI.CommonListView.DynamicHandleItemDoubleClickedCommonButton
	// void DynamicHandleItemDoubleClickedCommonButton(UCommonButton* Button);                                                  // [0x30c600] Final|Native|Private 
	// Function /Script/CommonUI.CommonListView.DynamicHandleItemClickedUserWidget
	// void DynamicHandleItemClickedUserWidget(UUserWidget* Widget);                                                            // [0x3033e0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonListView.DynamicHandleItemClickedCommonButton
	// void DynamicHandleItemClickedCommonButton(UCommonButton* Button);                                                        // [0x1e16f50] Final|Native|Private 
	// Function /Script/CommonUI.CommonListView.ClearSelection
	// void ClearSelection();                                                                                                   // [0x303370] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonListView.Clear
	// void Clear();                                                                                                            // [0x303350] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonListView.CancelScrollIntoView
	// void CancelScrollIntoView();                                                                                             // [0x303330] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonListView.AddItem
	// void AddItem(UObject* Item);                                                                                             // [0x3032b0] Final|Native|Public|BlueprintCallable|Const 
};

/// Class /Script/CommonUI.CommonLoadGuard
/// Size: 0x0090 (0x000118 - 0x0001A8)
class UCommonLoadGuard : public UContentWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(UMulticastDelegate)                        OnLoadingStateChanged                                       OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         ThrobberAlignment                                           OFFSET(get<T>, {0x128, 1, 0, 0})
	SMember(FMargin)                                   ThrobberPadding                                             OFFSET(getStruct<T>, {0x12C, 16, 0, 0})
	SMember(FText)                                     LoadingText                                                 OFFSET(getStruct<T>, {0x140, 24, 0, 0})
	SMember(FSoftClassPath)                            TextStyleClass                                              OFFSET(getStruct<T>, {0x158, 24, 0, 0})
	CMember(UClass*)                                   TextStyle                                                   OFFSET(get<T>, {0x170, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LoadingText                                            OFFSET(get<T>, {0x178, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonLoadGuard.SetLoadingText
	// void SetLoadingText(FText& InLoadingText);                                                                               // [0x309500] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.SetIsLoading
	// void SetIsLoading(bool bInIsLoading);                                                                                    // [0x309210] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonLoadGuard.OnAssetLoaded__DelegateSignature
	// void OnAssetLoaded__DelegateSignature(UObject* Object);                                                                  // [0x154a140] Public|Delegate      
	// Function /Script/CommonUI.CommonLoadGuard.IsLoading
	// bool IsLoading();                                                                                                        // [0x308a80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonLoadGuard.BP_GuardAndLoadAsset
	// void BP_GuardAndLoadAsset(UObject*& InLazyAsset, DelegateProperty& OnAssetLoaded);                                       // [0x307cd0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonNumericTextBlock
/// Size: 0x0088 (0x000258 - 0x0002E0)
class UCommonNumericTextBlock : public UCommonTextBlock
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UMulticastDelegate)                        OnOutroEvent                                                OFFSET(get<T>, {0x260, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnInterpolationEndedEvent                                   OFFSET(get<T>, {0x270, 16, 0, 0})
	DMember(float)                                     CurrentNumericValue                                         OFFSET(get<float>, {0x280, 4, 0, 0})
	CMember(ECommonNumericType)                        NumericType                                                 OFFSET(get<T>, {0x284, 1, 0, 0})
	SMember(FCommonNumberFormattingOptions)            FormattingSpecification                                     OFFSET(getStruct<T>, {0x288, 20, 0, 0})
	DMember(float)                                     EaseOutInterpolationExponent                                OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     InterpolationUpdateInterval                                 OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     PostInterpolationShrinkDuration                             OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(bool)                                      PerformSizeInterpolation                                    OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      IsPercentage                                                OFFSET(get<bool>, {0x2A9, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonNumericTextBlock.SetNumericType
	// void SetNumericType(ECommonNumericType InNumericType);                                                                   // [0x3095d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.SetCurrentValue
	// void SetCurrentValue(float NewValue);                                                                                    // [0x3090d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnOutro__DelegateSignature
	// void OnOutro__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock);                                              // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.OnInterpolationEnded__DelegateSignature
	// void OnInterpolationEnded__DelegateSignature(UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);              // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonNumericTextBlock.IsInterpolatingNumericValue
	// bool IsInterpolatingNumericValue();                                                                                      // [0x308a50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonNumericTextBlock.InterpolateToValue
	// void InterpolateToValue(float TargetValue, float MaximumInterpolationDuration, float MinimumChangeRate, float OutroOffset); // [0x308900] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonNumericTextBlock.GetTargetValue
	// float GetTargetValue();                                                                                                  // [0x308550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonObjectListItem
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonObjectListItem : public UCommonListItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CommonUI.CommonObjectListItem.SetData
	// void SetData(UObject* InData, UCommonListView* OwningList);                                                              // [0x309150] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CommonUI.CommonObjectListItem.Reset
	// void Reset();                                                                                                            // [0x308ec0] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CommonUI.CommonObjectListItem.GetData
	// UObject* GetData();                                                                                                      // [0x307fd0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonPopupButton
/// Size: 0x0010 (0x000800 - 0x000810)
class UCommonPopupButton : public UCommonButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             OFFSET(get<T>, {0x800, 8, 0, 0})
	CMember(UCommonPopupMenu*)                         PopupMenu                                                   OFFSET(get<T>, {0x808, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonPopupButton.GetMenuAnchorWidget
	// UWidget* GetMenuAnchorWidget();                                                                                          // [0x3081d0] Final|Native|Private 
};

/// Class /Script/CommonUI.CommonPopupMenu
/// Size: 0x0020 (0x0003C0 - 0x0003E0)
class UCommonPopupMenu : public UCommonActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	DMember(bool)                                      bUseInputStack                                              OFFSET(get<bool>, {0x3C0, 1, 0, 0})
	CMember(TWeakObjectPtr<UMenuAnchor*>)              OwningMenuAnchor                                            OFFSET(get<T>, {0x3C4, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ContextProvidingObject                                      OFFSET(get<T>, {0x3CC, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonPopupMenu.SetOwningMenuAnchor
	// void SetOwningMenuAnchor(UMenuAnchor* MenuAnchor);                                                                       // [0x309650] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonPopupMenu.SetContextProvider
	// void SetContextProvider(UObject* ContextProvidingObject);                                                                // [0x309050] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonPopupMenu.RequestClose
	// void RequestClose();                                                                                                     // [0x308e80] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonPopupMenu.OnIsOpenChanged
	// void OnIsOpenChanged(bool IsOpen);                                                                                       // [0x308ad0] Final|Native|Protected 
	// Function /Script/CommonUI.CommonPopupMenu.HandlePreDifferentContextProviderSet
	// void HandlePreDifferentContextProviderSet();                                                                             // [0x2bfa230] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonPopupMenu.HandlePostDifferentContextProviderSet
	// void HandlePostDifferentContextProviderSet();                                                                            // [0x11545e0] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUI.CommonRotator
/// Size: 0x0070 (0x000800 - 0x000870)
class UCommonRotator : public UCommonButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	CMember(UMulticastDelegate)                        OnRotated                                                   OFFSET(get<T>, {0x840, 16, 0, 0})
	CMember(UCommonTextBlock*)                         MyText                                                      OFFSET(get<T>, {0x850, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonRotator.ShiftTextRight
	// void ShiftTextRight();                                                                                                   // [0x309ce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.ShiftTextLeft
	// void ShiftTextLeft();                                                                                                    // [0x309cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.SetSelectedItem
	// void SetSelectedItem(int32_t InValue);                                                                                   // [0x309810] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.PopulateTextLabels
	// void PopulateTextLabels(TArray<FText> Labels);                                                                           // [0x308b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonRotator.GetSelectedText
	// FText GetSelectedText();                                                                                                 // [0x308260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonRotator.GetSelectedIndex
	// int32_t GetSelectedIndex();                                                                                              // [0x308200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonTabListWidget
/// Size: 0x00C8 (0x000210 - 0x0002D8)
class UCommonTabListWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UMulticastDelegate)                        OnTabSelected                                               OFFSET(get<T>, {0x210, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnTabButtonCreated                                          OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnTabButtonRemoved                                          OFFSET(get<T>, {0x230, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextTabInputActionData                                      OFFSET(getStruct<T>, {0x240, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousTabInputActionData                                  OFFSET(getStruct<T>, {0x250, 16, 0, 0})
	DMember(bool)                                      bAutoListenForInput                                         OFFSET(get<bool>, {0x260, 1, 0, 0})
	CMember(UCommonWidgetSwitcher*)                    LinkedSwitcher                                              OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(TMap<FName, FCommonRegisteredTabInfo>)     RegisteredTabsByID                                          OFFSET(get<T>, {0x270, 80, 0, 0})
	CMember(UCommonButtonGroup*)                       TabButtonGroup                                              OFFSET(get<T>, {0x2C0, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonTabListWidget.SetTabVisibility
	// void SetTabVisibility(FName TabNameID, ESlateVisibility NewVisibility);                                                  // [0x309b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidget.SetTabInteractionEnabled
	// void SetTabInteractionEnabled(FName TabNameID, bool bEnable);                                                            // [0x309ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidget.SetTabEnabled
	// void SetTabEnabled(FName TabNameID, bool bEnable);                                                                       // [0x3099e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidget.SetListeningForInput
	// void SetListeningForInput(bool bShouldListen);                                                                           // [0x309470] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidget.SetLinkedSwitcher
	// void SetLinkedSwitcher(UCommonWidgetSwitcher* CommonSwitcher);                                                           // [0x3093f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidget.SelectTabByID
	// bool SelectTabByID(FName TabNameID, bool bSuppressClickFeedback);                                                        // [0x308f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidget.RemoveTab
	// bool RemoveTab(FName TabNameID);                                                                                         // [0x308df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidget.RemoveAllTabs
	// void RemoveAllTabs();                                                                                                    // [0x308dd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidget.RegisterTab
	// bool RegisterTab(FName TabNameID, UClass* ButtonWidgetType, UWidget* ContentWidget);                                     // [0x308cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidget.OnTabSelected__DelegateSignature
	// void OnTabSelected__DelegateSignature(FName TabId);                                                                      // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidget.OnTabButtonRemoved__DelegateSignature
	// void OnTabButtonRemoved__DelegateSignature(FName TabId, UCommonButton* TabButton);                                       // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidget.OnTabButtonCreated__DelegateSignature
	// void OnTabButtonCreated__DelegateSignature(FName TabId, UCommonButton* TabButton);                                       // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonTabListWidget.HandleTabRemoved
	// void HandleTabRemoved(FName TabNameID, UCommonButton* TabButton);                                                        // [0x308830] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidget.HandleTabCreated
	// void HandleTabCreated(FName TabNameID, UCommonButton* TabButton);                                                        // [0x308760] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidget.HandleTabButtonSelected
	// void HandleTabButtonSelected(UCommonButton* SelectedTabButton, int32_t ButtonIndex);                                     // [0x3086a0] Final|Native|Private 
	// Function /Script/CommonUI.CommonTabListWidget.HandlePreviousTabInputAction
	// void HandlePreviousTabInputAction(bool& bPassThrough);                                                                   // [0x308610] Final|Native|Private|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidget.HandlePreLinkedSwitcherChanged_BP
	// void HandlePreLinkedSwitcherChanged_BP();                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidget.HandlePostLinkedSwitcherChanged_BP
	// void HandlePostLinkedSwitcherChanged_BP();                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUI.CommonTabListWidget.HandleNextTabInputAction
	// void HandleNextTabInputAction(bool& bPassThrough);                                                                       // [0x308580] Final|Native|Private|HasOutParms 
	// Function /Script/CommonUI.CommonTabListWidget.GetTabIdAtIndex
	// FName GetTabIdAtIndex(int32_t Index);                                                                                    // [0x3084c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidget.GetTabCount
	// int32_t GetTabCount();                                                                                                   // [0x308490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidget.GetTabButtonByID
	// UCommonButton* GetTabButtonByID(FName TabNameID);                                                                        // [0x308400] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUI.CommonTabListWidget.GetSelectedTabId
	// FName GetSelectedTabId();                                                                                                // [0x308220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidget.GetLinkedSwitcher
	// UCommonWidgetSwitcher* GetLinkedSwitcher();                                                                              // [0x308100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidget.GetActiveTab
	// FName GetActiveTab();                                                                                                    // [0x307f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTabListWidget.DisableTabWithReason
	// void DisableTabWithReason(FName TabNameID, FText& Reason);                                                               // [0x307e10] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonTextStyle
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UCommonTextStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FSlateFontInfo)                            Font                                                        OFFSET(getStruct<T>, {0x28, 80, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bUsesDropShadow                                             OFFSET(get<bool>, {0x88, 1, 0, 0})
	SMember(FVector2D)                                 ShadowOffset                                                OFFSET(getStruct<T>, {0x8C, 8, 0, 0})
	SMember(FLinearColor)                              ShadowColor                                                 OFFSET(getStruct<T>, {0x94, 16, 0, 0})
	SMember(FMargin)                                   Margin                                                      OFFSET(getStruct<T>, {0xA4, 16, 0, 0})
	DMember(float)                                     LineHeightPercentage                                        OFFSET(get<float>, {0xB4, 4, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonTextStyle.GetShadowOffset
	// void GetShadowOffset(FVector2D& OutShadowOffset);                                                                        // [0x308370] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetShadowColor
	// void GetShadowColor(FLinearColor& OutColor);                                                                             // [0x3082e0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetMargin
	// void GetMargin(FMargin& OutMargin);                                                                                      // [0x308130] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetLineHeightPercentage
	// float GetLineHeightPercentage();                                                                                         // [0x3080d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetFont
	// void GetFont(FSlateFontInfo& OutFont);                                                                                   // [0x308000] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonTextStyle.GetColor
	// void GetColor(FLinearColor& OutColor);                                                                                   // [0x307f40] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonTextScrollStyle
/// Size: 0x0018 (0x000028 - 0x000040)
class UCommonTextScrollStyle : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Speed                                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     StartDelay                                                  OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     EndDelay                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     FadeInDelay                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     FadeOutDelay                                                OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/CommonUI.CommonTileView
/// Size: 0x0010 (0x0002E0 - 0x0002F0)
class UCommonTileView : public UCommonListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(EItemAlignment)                            ItemAlignment                                               OFFSET(get<T>, {0x2D8, 1, 0, 0})
	DMember(float)                                     ItemWidth                                                   OFFSET(get<float>, {0x2DC, 4, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonTileView.SetItemWidth
	// void SetItemWidth(float NewWidth);                                                                                       // [0x309370] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonTreeView
/// Size: 0x0020 (0x0002E0 - 0x000300)
class UCommonTreeView : public UCommonListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	DMember(bool)                                      bAllowInvisibleItemSelection                                OFFSET(get<bool>, {0x2E8, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonTreeView.SetSelection
	// void SetSelection(UObject* InItem, bool bScrollFromTop);                                                                 // [0x309890] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTreeView.SetItemExpansion
	// void SetItemExpansion(UObject* Item, bool InShouldExpandItem);                                                           // [0x3092a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTreeView.SetAllExpansion
	// void SetAllExpansion(bool InShouldExpandItem);                                                                           // [0x308fc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTreeView.RequestRefresh
	// void RequestRefresh();                                                                                                   // [0x308ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonTreeView.DynamicHandleItemClickedCommonButton
	// void DynamicHandleItemClickedCommonButton(UCommonButton* Button);                                                        // [0x1e16f50] Final|Native|Private 
};

/// Class /Script/CommonUI.CommonUIContext
/// Size: 0x00B8 (0x000028 - 0x0000E0)
class UCommonUIContext : public UBlueprintContextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(UMulticastDelegate)                        OnInputMethodChanged                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnInputSuspensionChanged                                    OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(UCommonInputManager*)                      CommonInputManager                                          OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonUIContext.InputSuspensionChanged__DelegateSignature
	// void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);                                                    // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonUIContext.InputMethodChangedDelegate__DelegateSignature
	// void InputMethodChangedDelegate__DelegateSignature(bool bUsingGamepad);                                                  // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUI.CommonUIContext.GetInputManager
	// UCommonInputManager* GetInputManager();                                                                                  // [0x30c340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonUIContext.GetInputActionButtonIcon
	// FSlateBrush GetInputActionButtonIcon(FDataTableRowHandle& InputActionRowHandle, ECommonInputType InputType, ECommonGamepadType GamepadType); // [0x30c180] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUI.CommonUILibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCommonUILibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/CommonUI.CommonUILibrary.FindParentWidgetOfType
	// UWidget* FindParentWidgetOfType(UWidget* StartingWidget, UClass* Type);                                                  // [0x30c090] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonUISettings
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UCommonUISettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSoftClassPath)                            DefaultTextStyle_StringRef                                  OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	CMember(UClass*)                                   DefaultTextStyle                                            OFFSET(get<T>, {0x40, 8, 0, 0})
	SMember(FSoftClassPath)                            DefaultButtonStyle_StringRef                                OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(UClass*)                                   DefaultButtonStyle                                          OFFSET(get<T>, {0x60, 8, 0, 0})
	SMember(FSoftClassPath)                            DefaultBorderStyle_StringRef                                OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	CMember(UClass*)                                   DefaultBorderStyle                                          OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(TArray<FCommonInputKeyDisplayConfiguration>) InputKeyToPlatformSpecificDisplayDataMap                  OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FDataTableRowHandle)                       DefaultClickAction                                          OFFSET(getStruct<T>, {0x98, 16, 0, 0})
};

/// Class /Script/CommonUI.CommonVisibilityWidget
/// Size: 0x0010 (0x000280 - 0x000290)
class UCommonVisibilityWidget : public UCommonBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	DMember(bool)                                      bShowForGamepad                                             OFFSET(get<bool>, {0x280, 1, 0, 0})
	DMember(bool)                                      bShowForMouseAndKeyboard                                    OFFSET(get<bool>, {0x281, 1, 0, 0})
	DMember(bool)                                      bShowForTouch                                               OFFSET(get<bool>, {0x282, 1, 0, 0})
	DMember(bool)                                      bShowForPC                                                  OFFSET(get<bool>, {0x283, 1, 0, 0})
	DMember(bool)                                      bShowForMac                                                 OFFSET(get<bool>, {0x284, 1, 0, 0})
	DMember(bool)                                      bShowForPS4                                                 OFFSET(get<bool>, {0x285, 1, 0, 0})
	DMember(bool)                                      bShowForXBox                                                OFFSET(get<bool>, {0x286, 1, 0, 0})
	DMember(bool)                                      bShowForIOS                                                 OFFSET(get<bool>, {0x287, 1, 0, 0})
	DMember(bool)                                      bShowForAndroid                                             OFFSET(get<bool>, {0x288, 1, 0, 0})
	CMember(ESlateVisibility)                          VisibleType                                                 OFFSET(get<T>, {0x289, 1, 0, 0})
	CMember(ESlateVisibility)                          HiddenType                                                  OFFSET(get<T>, {0x28A, 1, 0, 0})
};

/// Class /Script/CommonUI.CommonWidgetCarousel
/// Size: 0x0848 (0x000118 - 0x000960)
class UCommonWidgetCarousel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2400;

public:
	DMember(int32_t)                                   ActiveWidgetIndex                                           OFFSET(get<int32_t>, {0x118, 4, 0, 0})
	CMember(UMulticastDelegate)                        OnCurrentPageIndexChanged                                   OFFSET(get<T>, {0x120, 16, 0, 0})
	SMember(FWidgetCarouselNavigationBarStyle)         NavigationStyle                                             OFFSET(getStruct<T>, {0x130, 2040, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidgetIndex
	// void SetActiveWidgetIndex(int32_t Index);                                                                                // [0x30c690] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.SetActiveWidget
	// void SetActiveWidget(UWidget* Widget);                                                                                   // [0x30c600] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.PreviousPage
	// void PreviousPage();                                                                                                     // [0x30c4c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.NextPage
	// void NextPage();                                                                                                         // [0x30c470] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetWidgetAtIndex
	// UWidget* GetWidgetAtIndex(int32_t Index);                                                                                // [0x30c360] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.GetActiveWidgetIndex
	// int32_t GetActiveWidgetIndex();                                                                                          // [0x30c150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetCarousel.EndAutoScrolling
	// void EndAutoScrolling();                                                                                                 // [0x30c070] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetCarousel.BeginAutoScrolling
	// void BeginAutoScrolling(float ScrollInterval);                                                                           // [0x30bfd0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonWidgetSwitcher
/// Size: 0x0050 (0x000130 - 0x000180)
class UCommonWidgetSwitcher : public UWidgetSwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(UMulticastDelegate)                        OnActiveWidgetDeactivated                                   OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnActiveWidgetChanged                                       OFFSET(get<T>, {0x140, 16, 0, 0})
	CMember(ECommonSwitcherTransition)                 TransitionType                                              OFFSET(get<T>, {0x150, 1, 0, 0})
	CMember(ETransitionCurve)                          TransitionCurveType                                         OFFSET(get<T>, {0x151, 1, 0, 0})
	DMember(float)                                     TransitionDuration                                          OFFSET(get<float>, {0x154, 4, 0, 0})
	DMember(bool)                                      bWidgetActivationEnabled                                    OFFSET(get<bool>, {0x17A, 1, 0, 0})
	DMember(bool)                                      bOutroPanelBelow                                            OFFSET(get<bool>, {0x17B, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUI.CommonWidgetSwitcher.SetTransitionParams
	// void SetTransitionParams(ECommonSwitcherTransition NewTransitionType, ETransitionCurve NewTransitionCurveType, float NewTransitionDuration); // [0x30c940] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetSwitcher.SetActiveWidgetIndex_Advanced
	// void SetActiveWidgetIndex_Advanced(int32_t Index, bool AttemptActivationChange);                                         // [0x30c720] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetSwitcher.SetActiveWidget_Advanced
	// void SetActiveWidget_Advanced(UWidget* Widget, bool AttemptActivationChange);                                            // [0x30c7e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetSwitcher.HasWidgets
	// bool HasWidgets();                                                                                                       // [0x1e0bb30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUI.CommonWidgetSwitcher.HandleActiveWidgetDeactivated
	// void HandleActiveWidgetDeactivated(UCommonActivatablePanel* DeactivatedPanel);                                           // [0x30c3f0] Final|Native|Private 
	// Function /Script/CommonUI.CommonWidgetSwitcher.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x30c050] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetSwitcher.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x26057b0] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetSwitcher.ActivatePreviousWidget
	// void ActivatePreviousWidget(bool bCanWrap);                                                                              // [0x30bec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetSwitcher.ActivateNextWidget
	// void ActivateNextWidget(bool bCanWrap);                                                                                  // [0x30be30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUI.CommonWidgetStack
/// Size: 0x0000 (0x000180 - 0x000180)
class UCommonWidgetStack : public UCommonWidgetSwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:


	/// Functions
	// Function /Script/CommonUI.CommonWidgetStack.PushWidget
	// void PushWidget(UWidget* InWidget);                                                                                      // [0x30c4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetStack.PopWidget
	// UWidget* PopWidget();                                                                                                    // [0x30c490] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetStack.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x30c050] Native|Public|BlueprintCallable 
	// Function /Script/CommonUI.CommonWidgetStack.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x26057b0] Native|Public|BlueprintCallable 
};

/// Struct /Script/CommonUI.CommonNumberFormattingOptions
/// Size: 0x0014 (0x000000 - 0x000014)
class FCommonNumberFormattingOptions : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(TEnumAsByte<ERoundingMode>)                RoundingMode                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      UseGrouping                                                 OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(int32_t)                                   MinimumIntegralDigits                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaximumIntegralDigits                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MinimumFractionalDigits                                     OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaximumFractionalDigits                                     OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CommonUI.CommonRegisteredTabInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FCommonRegisteredTabInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   TabIndex                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(UCommonButton*)                            TabButton                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UWidget*)                                  ContentInstance                                             OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/CommonUI.CommonInputActionHandlerData
/// Size: 0x0020 (0x000000 - 0x000020)
class FCommonInputActionHandlerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       InputActionRow                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EInputActionState)                         State                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/CommonUI.Operation
/// Size: 0x0018 (0x000000 - 0x000018)
class FOperation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EOperation)                                Operation                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UCommonActivatablePanel*)                  Panel                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIntroPanel                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bActivatePanel                                              OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bOutroPanelBelow                                            OFFSET(get<bool>, {0x12, 1, 0, 0})
};

/// Struct /Script/CommonUI.CommonInputKeyDisplayConfiguration
/// Size: 0x02C0 (0x000000 - 0x0002C0)
class FCommonInputKeyDisplayConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FCommonInputKeyDisplayData)                Value                                                       OFFSET(getStruct<T>, {0x18, 680, 0, 0})
};

/// Struct /Script/CommonUI.CommonInputKeyDisplayData
/// Size: 0x02A8 (0x000000 - 0x0002A8)
class FCommonInputKeyDisplayData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FSlateBrush)                               KeyboardSpecificBrush                                       OFFSET(getStruct<T>, {0x0, 136, 0, 0})
	SMember(FSlateBrush)                               GamepadSpecificBrushes                                      OFFSET(getStruct<T>, {0x88, 408, 0, 0})
	SMember(FSlateBrush)                               TouchSpecificBrush                                          OFFSET(getStruct<T>, {0x220, 136, 0, 0})
};

/// Struct /Script/CommonUI.CommonInputActionData
/// Size: 0x0378 (0x000008 - 0x000380)
class FCommonInputActionData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     HoldDisplayName                                             OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FCommonInputTypeInfo)                      KeyboardInputTypeInfo                                       OFFSET(getStruct<T>, {0x38, 168, 0, 0})
	SMember(FCommonInputTypeInfo)                      GamepadInputTypeInfos                                       OFFSET(getStruct<T>, {0xE0, 504, 0, 0})
	SMember(FCommonInputTypeInfo)                      TouchInputTypeInfo                                          OFFSET(getStruct<T>, {0x2D8, 168, 0, 0})
};

/// Struct /Script/CommonUI.CommonInputTypeInfo
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FCommonInputTypeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FKey)                                      Key                                                         OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EInputActionState)                         OverrrideState                                              OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bActionRequiresHold                                         OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(float)                                     HoldTime                                                    OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FSlateBrush)                               OverrideBrush                                               OFFSET(getStruct<T>, {0x20, 136, 0, 0})
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

/// Enum /Script/CommonUI.EDynamicBoxType
/// Size: 0x05
enum EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal0                                                     = 0,
	EDynamicBoxType__Vertical1                                                       = 1,
	EDynamicBoxType__Wrap2                                                           = 2,
	EDynamicBoxType__Overlay3                                                        = 3,
	EDynamicBoxType__EDynamicBoxType_MAX4                                            = 4
};

/// Enum /Script/CommonUI.EOperation
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

/// Enum /Script/CommonUI.EItemAlignment
/// Size: 0x08
enum EItemAlignment : uint8_t
{
	EItemAlignment__EvenlyDistributed0                                               = 0,
	EItemAlignment__EvenlySize1                                                      = 1,
	EItemAlignment__EvenlyWide2                                                      = 2,
	EItemAlignment__LeftAligned3                                                     = 3,
	EItemAlignment__RightAligned4                                                    = 4,
	EItemAlignment__CenterAligned5                                                   = 5,
	EItemAlignment__Fill6                                                            = 6,
	EItemAlignment__EItemAlignment_MAX7                                              = 7
};

/// Enum /Script/CommonUI.ECommonPlatformType
/// Size: 0x08
enum ECommonPlatformType : uint8_t
{
	ECommonPlatformType__PC0                                                         = 0,
	ECommonPlatformType__Mac1                                                        = 1,
	ECommonPlatformType__PS42                                                        = 2,
	ECommonPlatformType__XBox3                                                       = 3,
	ECommonPlatformType__IOS4                                                        = 4,
	ECommonPlatformType__Android5                                                    = 5,
	ECommonPlatformType__Count6                                                      = 6,
	ECommonPlatformType__ECommonPlatformType_MAX7                                    = 7
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

