
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: UMG

/// Class /Script/CommonUILegacy.CommonActivatablePanelLegacy
/// Size: 0x0138 (0x000400 - 0x000538)
class UCommonActivatablePanelLegacy : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	SMember(FMulticastInlineDelegate)                  OnWidgetActivated                                           OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWidgetDeactivated                                         OFFSET(getStruct<T>, {0x418, 16, 0, 0})
	DMember(bool)                                      bConsumeAllActions                                          OFFSET(get<bool>, {0x428, 1, 0, 0})
	DMember(bool)                                      bExposeActionsExternally                                    OFFSET(get<bool>, {0x429, 1, 0, 0})
	DMember(bool)                                      bShouldBypassStack                                          OFFSET(get<bool>, {0x42A, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgressPopupMenu
	// void SetInputActionHandlerWithProgressPopupMenu(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent, UCommonPopupMenuLegacy* PopupMenu); // [0x6cdcd8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithProgress
	// void SetInputActionHandlerWithProgress(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent); // [0x6cdca44] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandlerWithPopupMenu
	// void SetInputActionHandlerWithPopupMenu(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent, UCommonPopupMenuLegacy* PopupMenu); // [0x6cdc710] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetInputActionHandler
	// void SetInputActionHandler(FDataTableRowHandle InputActionRow, FDelegateProperty CommitedEvent);                         // [0x2f0c6ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateWithDisabledCommitEvent
	// void SetActionHandlerStateWithDisabledCommitEvent(UDataTable* DataTable, FName RowName, EInputActionState State, FDelegateProperty DisabledCommitEvent); // [0x6cdc2ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandleWithDisabledCommitEvent
	// void SetActionHandlerStateFromHandleWithDisabledCommitEvent(FDataTableRowHandle InputActionRow, EInputActionState State, FDelegateProperty DisabledCommitEvent); // [0x6cdbfb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerStateFromHandle
	// void SetActionHandlerStateFromHandle(FDataTableRowHandle InputActionRow, EInputActionState State);                       // [0x6cdbd80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.SetActionHandlerState
	// void SetActionHandlerState(UDataTable* DataTable, FName RowName, EInputActionState State);                               // [0x6cdbc48] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.RemoveInputActionHandler
	// void RemoveInputActionHandler(FDataTableRowHandle InputActionRow);                                                       // [0x6cdbac8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.RemoveAllInputActionHandlers
	// void RemoveAllInputActionHandlers();                                                                                     // [0x6cdbab4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.PopPanel
	// void PopPanel();                                                                                                         // [0x6cdb8ec] Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnTransitionedBySwitcher
	// void OnTransitionedBySwitcher();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnRemovedFromActivationStack
	// void OnRemovedFromActivationStack();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnInputModeChanged
	// void OnInputModeChanged(bool bUsingGamepad);                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnBeginOutro
	// void OnBeginOutro();                                                                                                     // [0x3192864] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnBeginIntro
	// void OnBeginIntro();                                                                                                     // [0x31928ac] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.OnAddedToActivationStack
	// void OnAddedToActivationStack();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.IsIntroed
	// bool IsIntroed();                                                                                                        // [0x6cdb5b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.IsInActivationStack
	// bool IsInActivationStack();                                                                                              // [0x6cdb574] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.HasInputActionHandler
	// bool HasInputActionHandler(FDataTableRowHandle InputActionRow);                                                          // [0x6cdb418] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.GetInputActions
	// bool GetInputActions(TArray<FCommonInputActionHandlerData>& InputActionDataRows);                                        // [0x6cda278] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.EndOutro
	// void EndOutro();                                                                                                         // [0x6cd9b98] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.EndIntro
	// void EndIntro();                                                                                                         // [0x6cd9b84] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.BeginOutro
	// void BeginOutro();                                                                                                       // [0x6cd9a8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.BeginIntro
	// void BeginIntro();                                                                                                       // [0x6cd9a78] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionNoHandler
	// void AddInputActionNoHandler(UDataTable* DataTable, FName RowName);                                                      // [0x6cd9990] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgressPopup
	// void AddInputActionHandlerWithProgressPopup(UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent, UCommonPopupMenuLegacy* PopupMenu); // [0x6cd97a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithProgress
	// void AddInputActionHandlerWithProgress(UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, FDelegateProperty ProgressEvent); // [0x6cd963c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandlerWithPopup
	// void AddInputActionHandlerWithPopup(UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent, UCommonPopupMenuLegacy* PopupMenu); // [0x6cd9488] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonActivatablePanelLegacy.AddInputActionHandler
	// void AddInputActionHandler(UDataTable* DataTable, FName RowName, FDelegateProperty CommitedEvent);                       // [0x6cd9380] Final|Native|Public|BlueprintCallable 
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
/// Size: 0x0050 (0x001490 - 0x0014E0)
class UCommonButtonLegacy : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectedChanged                                           OFFSET(getStruct<T>, {0x1490, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonClicked                                             OFFSET(getStruct<T>, {0x14A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonDoubleClicked                                       OFFSET(getStruct<T>, {0x14B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonHovered                                             OFFSET(getStruct<T>, {0x14C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonUnhovered                                           OFFSET(getStruct<T>, {0x14D0, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonButtonLegacy.SetTriggeredInputActionLegacy
	// void SetTriggeredInputActionLegacy(FDataTableRowHandle& InputActionRow, UCommonActivatablePanelLegacy* OldPanel);        // [0x6cdd238] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnSelectedChanged
	// void HandleOnSelectedChanged(UCommonButtonBase* Button, bool InSelected);                                                // [0x23fc79c] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonUnhovered
	// void HandleOnButtonUnhovered(UCommonButtonBase* Button);                                                                 // [0x6cdb050] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonHovered
	// void HandleOnButtonHovered(UCommonButtonBase* Button);                                                                   // [0x6cdafd0] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonDoubleClicked
	// void HandleOnButtonDoubleClicked(UCommonButtonBase* Button);                                                             // [0x6cdaf50] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonLegacy.HandleOnButtonClicked
	// void HandleOnButtonClicked(UCommonButtonBase* Button);                                                                   // [0x6cdae0c] Final|Native|Private 
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
	CMember(TScriptInterface<Class>)                   CurrentlyHeldActionInputHandler                             OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<UCommonActivatablePanelLegacy*>)    ActivatablePanelStack                                       OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(UCommonGlobalInputHandlerLegacy*)          GlobalInputHandler                                          OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TArray<FOperation>)                        Operations                                                  OFFSET(get<T>, {0xE8, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.SuspendStartingOperationProcessing
	// void SuspendStartingOperationProcessing();                                                                               // [0x6cdd6b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.StopListeningForExistingHeldAction
	// bool StopListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, FDelegateProperty& CompleteEvent, FDelegateProperty& ProgressEvent); // [0x6cdd544] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.StartListeningForExistingHeldAction
	// bool StartListeningForExistingHeldAction(FDataTableRowHandle& InputActionDataRow, FDelegateProperty& CompleteEvent, FDelegateProperty& ProgressEvent); // [0x6cdd3d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.SetGlobalInputHandlerPriorityFilter
	// void SetGlobalInputHandlerPriorityFilter(int32_t InFilterPriority);                                                      // [0x6cdc694] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.ResumeStartingOperationProcessing
	// void ResumeStartingOperationProcessing();                                                                                // [0x6cdbc2c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.PushActivatablePanel
	// void PushActivatablePanel(UCommonActivatablePanelLegacy* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow);     // [0x6cdb928] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.PopActivatablePanel
	// void PopActivatablePanel(UCommonActivatablePanelLegacy* ActivatablePanel);                                               // [0x6cdb86c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.IsPanelOnStack
	// bool IsPanelOnStack(UCommonActivatablePanelLegacy* InPanel);                                                             // [0x6cdb5d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.IsInputSuspended
	// bool IsInputSuspended();                                                                                                 // [0x6cdb58c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetTopPanel
	// UCommonActivatablePanelLegacy* GetTopPanel();                                                                            // [0x6cda988] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetGlobalInputHandlerPriorityFilter
	// int32_t GetGlobalInputHandlerPriorityFilter();                                                                           // [0x6cda258] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonInputManagerLegacy.GetAvailableInputActions
	// bool GetAvailableInputActions(TArray<FCommonInputActionHandlerData>& AvailableInputActions);                             // [0x6cd9bac] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonInputReflectorLegacy
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UCommonInputReflectorLegacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UClass*)                                   ButtonType                                                  OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TArray<UCommonButtonLegacy*>)              ActiveButtons                                               OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(TArray<UCommonButtonLegacy*>)              InactiveButtons                                             OFFSET(get<T>, {0x300, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonInputReflectorLegacy.OnButtonAdded
	// void OnButtonAdded(UCommonButtonLegacy* AddedButton, FCommonInputActionHandlerData& Data);                               // [0x101681c] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/CommonUILegacy.CommonPopupButtonLegacy
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UCommonPopupButtonLegacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UCommonPopupMenuLegacy*)                   PopupMenu                                                   OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonPopupButtonLegacy.GetMenuAnchorWidget
	// UUserWidget* GetMenuAnchorWidget();                                                                                      // [0x6cda8b0] Final|Native|Private 
};

/// Class /Script/CommonUILegacy.CommonPopupMenuLegacy
/// Size: 0x0018 (0x000538 - 0x000550)
class UCommonPopupMenuLegacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	DMember(bool)                                      bUseInputStack                                              OFFSET(get<bool>, {0x538, 1, 0, 0})
	CMember(TWeakObjectPtr<UMenuAnchor*>)              OwningMenuAnchor                                            OFFSET(get<T>, {0x53C, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ContextProvidingObject                                      OFFSET(get<T>, {0x544, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.SetOwningMenuAnchor
	// void SetOwningMenuAnchor(UMenuAnchor* MenuAnchor);                                                                       // [0x6cdd1b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.SetContextProvider
	// void SetContextProvider(UObject* ContextProvidingObject);                                                                // [0x6cdc614] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.RequestClose
	// void RequestClose();                                                                                                     // [0x6cdbc18] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.OnIsOpenChanged
	// void OnIsOpenChanged(bool IsOpen);                                                                                       // [0x6cdb7ec] Final|Native|Protected 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.HandlePreDifferentContextProviderSet
	// void HandlePreDifferentContextProviderSet();                                                                             // [0x6cdb270] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonPopupMenuLegacy.HandlePostDifferentContextProviderSet
	// void HandlePostDifferentContextProviderSet();                                                                            // [0x6cdb258] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/CommonUILegacy.CommonTabListWidgetLegacy
/// Size: 0x0020 (0x0003D8 - 0x0003F8)
class UCommonTabListWidgetLegacy : public UCommonTabListWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	SMember(FMulticastInlineDelegate)                  OnTabButtonCreated                                          OFFSET(getStruct<T>, {0x3D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTabButtonRemoved                                          OFFSET(getStruct<T>, {0x3E8, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonRemoved__DelegateSignature
	// void OnTabButtonRemoved__DelegateSignature(FName TabID, UCommonButtonLegacy* TabButton);                                 // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.OnTabButtonCreated__DelegateSignature
	// void OnTabButtonCreated__DelegateSignature(FName TabID, UCommonButtonLegacy* TabButton);                                 // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleTabRemoved
	// void HandleTabRemoved(FName TabNameID, UCommonButtonLegacy* TabButton);                                                  // [0x6cdb350] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleTabCreated
	// void HandleTabCreated(FName TabNameID, UCommonButtonLegacy* TabButton);                                                  // [0x6cdb288] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonRemoved
	// void HandleOnTabButtonRemoved(FName TabID, UCommonButtonBase* TabButton);                                                // [0x6cdb194] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.HandleOnTabButtonCreated
	// void HandleOnTabButtonCreated(FName TabID, UCommonButtonBase* TabButton);                                                // [0x23fbed4] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonTabListWidgetLegacy.GetTabButtonByID
	// UCommonButtonLegacy* GetTabButtonByID(FName TabNameID);                                                                  // [0x6cda8ec] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonUISubsystemLegacy
/// Size: 0x0030 (0x000040 - 0x000070)
class UCommonUISubsystemLegacy : public UCommonUISubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FMulticastInlineDelegate)                  OnInputSuspensionChanged                                    OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(UCommonInputManagerLegacy*)                CommonInputManager                                          OFFSET(get<T>, {0x50, 8, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonUISubsystemLegacy.InputSuspensionChanged__DelegateSignature
	// void InputSuspensionChanged__DelegateSignature(bool bInputSuspended);                                                    // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonUISubsystemLegacy.GetInputManager
	// UCommonInputManagerLegacy* GetInputManager();                                                                            // [0x6cda898] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CommonUILegacy.CommonVisibilityWidgetLegacy
/// Size: 0x0010 (0x000320 - 0x000330)
class UCommonVisibilityWidgetLegacy : public UCommonBorder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	DMember(bool)                                      bShowForGamepad                                             OFFSET(get<bool>, {0x320, 1, 0, 0})
	DMember(bool)                                      bShowForMouseAndKeyboard                                    OFFSET(get<bool>, {0x321, 1, 0, 0})
	DMember(bool)                                      bShowForTouch                                               OFFSET(get<bool>, {0x322, 1, 0, 0})
	DMember(bool)                                      bShowForPC                                                  OFFSET(get<bool>, {0x323, 1, 0, 0})
	DMember(bool)                                      bShowForMac                                                 OFFSET(get<bool>, {0x324, 1, 0, 0})
	DMember(bool)                                      bShowForPS4                                                 OFFSET(get<bool>, {0x325, 1, 0, 0})
	DMember(bool)                                      bShowForPS5                                                 OFFSET(get<bool>, {0x326, 1, 0, 0})
	DMember(bool)                                      bShowForXBox                                                OFFSET(get<bool>, {0x327, 1, 0, 0})
	DMember(bool)                                      bShowForXSX                                                 OFFSET(get<bool>, {0x328, 1, 0, 0})
	DMember(bool)                                      bShowForIOS                                                 OFFSET(get<bool>, {0x329, 1, 0, 0})
	DMember(bool)                                      bShowForAndroid                                             OFFSET(get<bool>, {0x32A, 1, 0, 0})
	DMember(bool)                                      bShowForErebus                                              OFFSET(get<bool>, {0x32B, 1, 0, 0})
	CMember(ESlateVisibility)                          VisibleType                                                 OFFSET(get<T>, {0x32C, 1, 0, 0})
	CMember(ESlateVisibility)                          HiddenType                                                  OFFSET(get<T>, {0x32D, 1, 0, 0})
};

/// Class /Script/CommonUILegacy.CommonWidgetStackLegacy
/// Size: 0x0010 (0x0001C8 - 0x0001D8)
class UCommonWidgetStackLegacy : public UCommonVisibilitySwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FMulticastInlineDelegate)                  OnActiveWidgetChangedLegacyEvent                            OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.PushWidget
	// void PushWidget(UWidget* InWidget);                                                                                      // [0x6cdba34] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.PopWidget
	// UWidget* PopWidget();                                                                                                    // [0x6cdb904] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.OnActiveWidgetChangedLegacy__DelegateSignature
	// void OnActiveWidgetChangedLegacy__DelegateSignature(UWidget* InActiveWidget, int32_t InActiveWidgetIndex);               // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x6cd9b70] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetStackLegacy.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x6cd936c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonWidgetSwitcherLegacy
/// Size: 0x0028 (0x000228 - 0x000250)
class UCommonWidgetSwitcherLegacy : public UCommonAnimatedSwitcher
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FMulticastInlineDelegate)                  OnActiveWidgetDeactivated                                   OFFSET(getStruct<T>, {0x228, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActiveWidgetChanged                                       OFFSET(getStruct<T>, {0x238, 16, 0, 0})
	DMember(bool)                                      bWidgetActivationEnabled                                    OFFSET(get<bool>, {0x248, 1, 0, 0})
	DMember(bool)                                      bOutroPanelBelow                                            OFFSET(get<bool>, {0x249, 1, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidgetIndex_Advanced
	// void SetActiveWidgetIndex_Advanced(int32_t Index, bool AttemptActivationChange);                                         // [0x6cdc480] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.SetActiveWidget_Advanced
	// void SetActiveWidget_Advanced(UWidget* Widget, bool AttemptActivationChange);                                            // [0x6cdc544] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.HandleActiveWidgetDeactivated
	// void HandleActiveWidgetDeactivated(UCommonActivatablePanelLegacy* DeactivatedPanel);                                     // [0x6cda9ac] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.DeactivateWidget
	// void DeactivateWidget();                                                                                                 // [0x2bf5698] Native|Public|BlueprintCallable 
	// Function /Script/CommonUILegacy.CommonWidgetSwitcherLegacy.ActivateWidget
	// void ActivateWidget();                                                                                                   // [0x15d6404] Native|Public|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonButtonGroupLegacy
/// Size: 0x00A0 (0x000110 - 0x0001B0)
class UCommonButtonGroupLegacy : public UCommonButtonGroupBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FMulticastInlineDelegate)                  OnSelectedButtonChanged                                     OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnHoveredButtonChanged                                      OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonClicked                                             OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnButtonDoubleClicked                                       OFFSET(getStruct<T>, {0x188, 16, 0, 0})


	/// Functions
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnSelectionStateChanged
	// void OnSelectionStateChanged(UCommonButtonLegacy* BaseButton, bool bIsSelected);                                         // [0x3238c64] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonDoubleClicked
	// void OnHandleButtonDoubleClicked(UCommonButtonLegacy* BaseButton);                                                       // [0x6cdb768] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnHandleButtonClicked
	// void OnHandleButtonClicked(UCommonButtonLegacy* BaseButton);                                                             // [0x6cdb6e4] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnButtonUnhovered
	// void OnButtonUnhovered(UCommonButtonLegacy* BaseButton);                                                                 // [0x5785770] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.OnButtonHovered
	// void OnButtonHovered(UCommonButtonLegacy* BaseButton);                                                                   // [0x6cdb660] Native|Protected     
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnSelectedButtonChanged
	// void HandleOnSelectedButtonChanged(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                        // [0x3198ec4] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnHoveredButtonChanged
	// void HandleOnHoveredButtonChanged(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                         // [0x6cdb0d0] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonDoubleClicked
	// void HandleOnButtonDoubleClicked(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                          // [0x6cdae8c] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleOnButtonClicked
	// void HandleOnButtonClicked(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                                // [0x6cdad48] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnSelectedButtonChanged
	// void HandleNativeOnSelectedButtonChanged(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                  // [0x6cdac84] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnHoveredButtonChanged
	// void HandleNativeOnHoveredButtonChanged(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                   // [0x6cdabc0] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonDoubleClicked
	// void HandleNativeOnButtonDoubleClicked(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                    // [0x6cdaafc] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.HandleNativeOnButtonClicked
	// void HandleNativeOnButtonClicked(UCommonButtonBase* BaseButton, int32_t InSelectedButtonIndex);                          // [0x6cdaa38] Final|Native|Private 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.GetSelectedButton
	// UCommonButtonLegacy* GetSelectedButton();                                                                                // [0x6cda8c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.GetButtonAtIndex
	// UCommonButtonLegacy* GetButtonAtIndex(int32_t Index);                                                                    // [0x6cda1cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonUILegacy.CommonButtonGroupLegacy.CreateButtonGroup
	// UCommonButtonGroupLegacy* CreateButtonGroup(UObject* ContextObject, bool bInSelectionRequired);                          // [0x6cd9aa0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/CommonUILegacy.CommonUIActionRouterLegacy
/// Size: 0x0008 (0x000170 - 0x000178)
class UCommonUIActionRouterLegacy : public UCommonUIActionRouterBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
};

/// Struct /Script/CommonUILegacy.Operation
/// Size: 0x0028 (0x000000 - 0x000028)
class FOperation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(EOperation)                                Operation                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UCommonActivatablePanelLegacy*)            Panel                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIntroPanel                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bActivatePanel                                              OFFSET(get<bool>, {0x11, 1, 0, 0})
	DMember(bool)                                      bOutroPanelBelow                                            OFFSET(get<bool>, {0x12, 1, 0, 0})
};

/// Struct /Script/CommonUILegacy.CommonInputActionData
/// Size: 0x05F0 (0x000360 - 0x000950)
class FCommonInputActionData : public FCommonInputActionDataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2384;

public:
	CMember(TMap<ECommonGamepadType, FCommonInputTypeInfo>) GamepadInputTypeInfoOverrides                          OFFSET(get<T>, {0x360, 80, 0, 0})
	SMember(FCommonInputTypeInfo)                      GamepadInputTypeInfos                                       OFFSET(getStruct<T>, {0x3B0, 1440, 0, 0})
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

