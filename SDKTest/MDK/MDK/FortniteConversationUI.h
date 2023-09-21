
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/FortniteConversationUI.FortConversationOptionBrief
/// Size: 0x0000 (0x0002D0 - 0x0002D0)
class UFortConversationOptionBrief : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Class /Script/FortniteConversationUI.FortItemTransactionBrief
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class UFortItemTransactionBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(UFortTransactionStrip*)                    TransactionStrip_Main                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortItem*)                                DisplayItem                                                 OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortItemTransactionBrief.OnTransactionInfoReceived
	// void OnTransactionInfoReceived(UFortItem* Item);                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortApplyAbilityBrief
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortApplyAbilityBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FText)                                     PurchaseServiceText                                         OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Display                                                OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortApplyAbilityBrief.OnUnableToPurchase
	// void OnUnableToPurchase(EPreventAbilityUseReason Reason);                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortApplyAbilityBrief.OnAbleToPurchase
	// void OnAbleToPurchase();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortBasicBrief
/// Size: 0x0000 (0x0002D0 - 0x0002D0)
class UFortBasicBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Class /Script/FortniteConversationUI.FortBasicItemBrief
/// Size: 0x0070 (0x0002D0 - 0x000340)
class UFortBasicItemBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(UCommonTextBlock*)                         Text_TitleBar                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortTransactionStrip*)                    TransactionStrip_Main                                       OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UFortItem*)                                DisplayItem                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TMap<FName, FDataDrivenServiceBriefConfig>) ServiceConfigs                                             OFFSET(get<T>, {0x2F0, 80, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnUpdateDescriptionText
	// void OnUpdateDescriptionText(FText& DescriptionText);                                                                    // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnUnableToUse
	// void OnUnableToUse(FText& Reason);                                                                                       // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnItemInfoReceived
	// void OnItemInfoReceived(UFortItem* Item, int32_t StackSize);                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortBasicItemBrief.OnAbleToUse
	// void OnAbleToUse(bool bShowWarningMessage);                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortBuyBrief
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UFortBuyBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
};

/// Class /Script/FortniteConversationUI.FortConversationMarker
/// Size: 0x00D8 (0x0003B8 - 0x000490)
class UFortConversationMarker : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	SMember(FVector)                                   InitialOffset                                               OFFSET(getStruct<T>, {0x3F0, 24, 0, 0})
	SMember(FVector)                                   ManualOffset                                                OFFSET(getStruct<T>, {0x408, 24, 0, 0})
	DMember(float)                                     MessageBubbleDuration                                       OFFSET(get<float>, {0x420, 4, 0, 0})
	DMember(float)                                     LastTextBubbleDuration                                      OFFSET(get<float>, {0x424, 4, 0, 0})
	DMember(bool)                                      bSetCustomInteractionWidgetOnlyWhenNeeded                   OFFSET(get<bool>, {0x428, 1, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_States                                             OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UWidget*)                                  Overlay_PreviewState                                        OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UFortConversationMessageWidget*)           ConversationMessage_Main                                    OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ParticipantName                                        OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       Keybind_Nameplate                                           OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UImage*)                                   NPCIcon                                                     OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UTexture2D*)                               CustomDialogMarkerIndicatorIcon                             OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UTexture2D*)                               DefaultDialogMarkerIndicatorIcon                            OFFSET(get<T>, {0x480, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnSetIndicatedActor
	// void OnSetIndicatedActor(AActor* NewIndicatorActor);                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnMessageShownOverActor
	// void OnMessageShownOverActor(AActor* OverActor);                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnInteractionRangeChanged
	// void OnInteractionRangeChanged(EInteractionRange TargetInteractionRange);                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnConversationActorProximityChanged
	// void OnConversationActorProximityChanged(EInteractionRange TargetInteractionRange, UFortNonPlayerConversationParticipantComponent* ConversationComponent); // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationMarker.OnCanInteract
	// void OnCanInteract(bool bCanInteract);                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortConversationMessageWidget
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class UFortConversationMessageWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Class /Script/FortniteConversationUI.FortConversationOption
/// Size: 0x00A0 (0x001520 - 0x0015C0)
class UFortConversationOption : public UFortRadialPickerEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5568;

public:
	CMember(USoundBase*)                               OnOptionConfirmedSound                                      OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(USoundBase*)                               OnOptionHoveredSound                                        OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_DisplayAsset                                       OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  DefaultSoftTaskIcon                                         OFFSET(get<T>, {0x1540, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               DefaultConfirmChoiceSound                                   OFFSET(get<T>, {0x1560, 32, 0, 0})
	CMember(TWeakObjectPtr<USoundBase*>)               DefaultHoverChoiceSound                                     OFFSET(get<T>, {0x1580, 32, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationOption.OnSetupPivotFromRadialInformation
	// void OnSetupPivotFromRadialInformation(int32_t NumElements, int32_t ItemIndex);                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationOption.OnSetupFromItemDef
	// void OnSetupFromItemDef(UFortItem* Item);                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationOption.OnSetupFromDisplayAsset
	// void OnSetupFromDisplayAsset(UObject* DisplayAsset);                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationOption.OnOptionConfirmed
	// void OnOptionConfirmed();                                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationOption.IsLocked
	// bool IsLocked();                                                                                                         // [0x98de144] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortniteConversationUI.FortConversationOption.IsAvailable
	// bool IsAvailable();                                                                                                      // [0x98de120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortniteConversationUI.FortConversationOption.GetUnlockLevel
	// int32_t GetUnlockLevel();                                                                                                // [0x98ddd00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/FortniteConversationUI.FortConversationOptionsPanel
/// Size: 0x0018 (0x000190 - 0x0001A8)
class UFortConversationOptionsPanel : public UPanelWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	DMember(int32_t)                                   MaxRows                                                     OFFSET(get<int32_t>, {0x1A0, 4, 0, 0})
	DMember(int32_t)                                   MiddleColumnWidth                                           OFFSET(get<int32_t>, {0x1A4, 4, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationOptionsPanel.AddChildToDynamicPanel
	// UPanelSlot* AddChildToDynamicPanel(UWidget* Content);                                                                    // [0x98dd4c0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/FortniteConversationUI.FortConversationScreen
/// Size: 0x01C8 (0x0003E8 - 0x0005B0)
class UFortConversationScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(UCommonVisibilitySwitcher*)                Switcher_Details                                            OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UInputComponent*)                          ConversationInputComp                                       OFFSET(get<T>, {0x440, 8, 0, 0})
	DMember(int32_t)                                   CurrentlySelectedIndex                                      OFFSET(get<int32_t>, {0x448, 4, 0, 0})
	DMember(bool)                                      bBlockOptionIntroAnimation                                  OFFSET(get<bool>, {0x44C, 1, 0, 0})
	SMember(FName)                                     RadialSelectionMaterialParameterName                        OFFSET(getStruct<T>, {0x450, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      TagPriorities                                               OFFSET(get<T>, {0x458, 16, 0, 0})
	SMember(FName)                                     InteractActionNameKBM                                       OFFSET(getStruct<T>, {0x468, 4, 0, 0})
	SMember(FName)                                     ADSInputAction                                              OFFSET(getStruct<T>, {0x46C, 4, 0, 0})
	SMember(FName)                                     InteractActionNameGamepad                                   OFFSET(getStruct<T>, {0x470, 4, 0, 0})
	SMember(FDataTableRowHandle)                       ConfirmBinding                                              OFFSET(getStruct<T>, {0x478, 16, 0, 0})
	SMember(FDataTableRowHandle)                       MakeSelectionBinding                                        OFFSET(getStruct<T>, {0x488, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ADSMouseBinding                                             OFFSET(getStruct<T>, {0x498, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CancelActionBinding                                         OFFSET(getStruct<T>, {0x4A8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RightTriggerBinding                                         OFFSET(getStruct<T>, {0x4B8, 16, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             DetailsNodeTypeToBrief                                      OFFSET(get<T>, {0x4C8, 80, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ChatBrief                                                   OFFSET(get<T>, {0x518, 32, 0, 0})
	SMember(FString)                                   DataDrivenBriefPrefix                                       OFFSET(getStruct<T>, {0x538, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DataDrivenBrief                                             OFFSET(get<T>, {0x548, 32, 0, 0})
	CMember(UFortSlottedRadialMenu*)                   RadialMenu_DialogOptions                                    OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UImage*)                                   Image_RadialHighlight                                       OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortKeybindWidget*)                       Keybind_Confirm                                             OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortBasicBrief*)                          BasicBrief_Main                                             OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_RadialMenu                                          OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UWidget*)                                  Overlay_Details                                             OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UWidget*)                                  Overlay_WheelContainer                                      OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UImage*)                                   Image_Background                                            OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UImage*)                                   Image_LoadingSpinner                                        OFFSET(get<T>, {0x5A8, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortConversationScreen.ShouldBlockOptionIntroAnim
	// bool ShouldBlockOptionIntroAnim();                                                                                       // [0x98de22c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnSelectedItemAvailabilityChanged
	// void OnSelectedItemAvailabilityChanged(bool bIsAvailable);                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnOptionsPopulated
	// void OnOptionsPopulated();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnItemSelected
	// void OnItemSelected(int32_t OriginalIndex);                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnConversationStarted
	// void OnConversationStarted();                                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.OnConversationOptionUnavailable
	// void OnConversationOptionUnavailable(UFortRadialSlot* SelectedEntry);                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortConversationScreen.EndConversation
	// void EndConversation();                                                                                                  // [0x2e5eb60] Native|Protected     
};

/// Class /Script/FortniteConversationUI.FortDataDrivenServiceBrief
/// Size: 0x0078 (0x0002D0 - 0x000348)
class UFortDataDrivenServiceBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(UCommonTextBlock*)                         Text_TitleBar                                               OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Description                                        OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_StockRemaining                                         OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortTransactionStrip*)                    TransactionStrip_Main                                       OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(TMap<FName, FDataDrivenServiceBriefConfig>) ServiceConfigs                                             OFFSET(get<T>, {0x2F8, 80, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortDataDrivenServiceBrief.OnUnableToPurchase
	// void OnUnableToPurchase(FText& Reason);                                                                                  // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortDataDrivenServiceBrief.OnTransactionInfoReceived
	// void OnTransactionInfoReceived(UFortItem* Item);                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortDataDrivenServiceBrief.OnAbleToPurchase
	// void OnAbleToPurchase();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortDuelBrief
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortDuelBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FText)                                     TextTemplate                                                OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Objective                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTileView*)                          TileView                                                    OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortDuelBrief.DisplayLootItems
	// void DisplayLootItems(TArray<UFortItem*>& Items);                                                                        // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortHireBrief
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortHireBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FText)                                     TextTemplate                                                OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Objective                                              OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortHireBrief.HandleNPCDismissal
	// void HandleNPCDismissal(bool bAtMaxNPCNum, bool bWillDismissNPCAtHire);                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortIntelBrief
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortIntelBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FText)                                     TextTemplate                                                OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Objective                                              OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortItemFundBrief
/// Size: 0x0130 (0x0002D0 - 0x000400)
class UFortItemFundBrief : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(UCommonTextBlock*)                         Text_TitleBar                                               OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ProgressPercent                                        OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ProgressCount                                          OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UFortSimpleMaterialProgressBar*)           Progress_Funding                                            OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_Icon                                              OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UFortTransactionStrip*)                    TransactionStrip_Main                                       OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(TMap<FName, FDataDrivenServiceBriefConfig>) ServiceConfigs                                             OFFSET(get<T>, {0x3B0, 80, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortItemFundBrief.OnProgressUpdated
	// void OnProgressUpdated(float CurrentFundingFraction);                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortItemFundBrief.OnIntializationComplete
	// void OnIntializationComplete();                                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortItemFundBrief.InitializeFromContext
	// void InitializeFromContext(FConversationContext& ConversationContext);                                                   // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortItemFundBrief.GetDataForKey
	// FText GetDataForKey(FString Key, bool bUseIndexAdjustment);                                                              // [0x98dd5ec] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/FortniteConversationUI.FortSingleItemFundBrief
/// Size: 0x0068 (0x0002D0 - 0x000338)
class UFortSingleItemFundBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(UFortItemFundBrief*)                       Item_Entry                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortNPCTextDisplay*)                      NPCTextDisplay                                              OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(TMap<FName, FDataDrivenServiceBriefConfig>) ServiceConfigs                                             OFFSET(get<T>, {0x2E8, 80, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortMultiItemFundBrief
/// Size: 0x0010 (0x000338 - 0x000348)
class UFortMultiItemFundBrief : public UFortSingleItemFundBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(UFortItemFundBrief*)                       Item_EntrySecondary                                         OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UFortItemFundBrief*)                       Item_EntryTertiary                                          OFFSET(get<T>, {0x340, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortMultiItemFundBrief.UpdateSelectedVisuals
	// void UpdateSelectedVisuals(int32_t SelectedIndex);                                                                       // [0x1ebf994] Event|Public|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortNPCTextDisplay
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UFortNPCTextDisplay : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(UCommonRichTextBlock*)                     Text_Message                                                OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_NPCImage                                          OFFSET(get<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortNPCTextDisplay.OnTextUpdated
	// void OnTextUpdated();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortNPCTextDisplay.OnItemNameUpdated
	// void OnItemNameUpdated(FString ItemName);                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortPlayerConversationUIComponent
/// Size: 0x0140 (0x0000A0 - 0x0001E0)
class UFortPlayerConversationUIComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TWeakObjectPtr<UClass*>)                   DialogWidgetSoftClass                                       OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DialogMarkerSoftClass                                       OFFSET(get<T>, {0xC8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MobileDialogWidgetSoftClass                                 OFFSET(get<T>, {0xE8, 32, 0, 0})
	CMember(TArray<UDynamicUIScene*>)                  SpectatorConversationScenes                                 OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TArray<UDynamicUIScene*>)                  SpectatorMobileConversationScenes                           OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(UClass*)                                   DialogWidgetClass                                           OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(UClass*)                                   DialogMarkerClass                                           OFFSET(get<T>, {0x130, 8, 0, 0})
	SMember(FUserWidgetPool)                           DialogWidgetPool                                            OFFSET(getStruct<T>, {0x138, 136, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortPlayerConversationUIComponent.OnMinigameStarted
	// void OnMinigameStarted();                                                                                                // [0x98de17c] Final|Native|Private 
};

/// Class /Script/FortniteConversationUI.FortQuestBrief
/// Size: 0x0050 (0x0002D0 - 0x000320)
class UFortQuestBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FText)                                     ThisMatchOnlyQuestText                                      OFFSET(getStruct<T>, {0x2D8, 24, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Objective                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_MoneyReward                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_XpReward                                               OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ExpirationTime                                         OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonLazyImage*)                         LazyImage_QuestProviderImage                                OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_QuestProvider                                       OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortQuestBrief.OnQuestInformationRecieved
	// void OnQuestInformationRecieved(FText& Objective, FFortRarityItemData& RarityData, FGameplayTag& CategoryTag, int32_t XPReward, int32_t MoneyReward); // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortQuestBrief.OnQuestExpirationTimeSet
	// void OnQuestExpirationTimeSet(bool bDisplayExpirationTime);                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortShowFutureStormCircleBrief
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortShowFutureStormCircleBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FText)                                     PurchaseServiceText                                         OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_Display                                                OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortShowFutureStormCircleBrief.OnUnableToPurchase
	// void OnUnableToPurchase(EPreventUseStormCircleServiceReason Reason);                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortShowFutureStormCircleBrief.OnAbleToPurchase
	// void OnAbleToPurchase();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/FortniteConversationUI.FortSingleOrMultiItemFundBrief
/// Size: 0x0050 (0x0002D0 - 0x000320)
class UFortSingleOrMultiItemFundBrief : public UFortConversationOptionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SingleItemBrief                                             OFFSET(get<T>, {0x2D8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MultiItemsBrief                                             OFFSET(get<T>, {0x2F8, 32, 0, 0})
	CMember(UOverlay*)                                 Overlay_Brief                                               OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/FortniteConversationUI.FortTransactionStrip
/// Size: 0x0058 (0x0002A8 - 0x000300)
class UFortTransactionStrip : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(UCommonTextBlock*)                         Text_CostDescription                                        OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) CachedGlobalCurrency                                        OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UFortWorldItemDefinition*)                 ResourceCurrency                                            OFFSET(get<T>, {0x2C0, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.FortTransactionStrip.OnTransactionInfoReceived
	// void OnTransactionInfoReceived(FFortServiceTransactionInfo& TransactionInfo);                                            // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortTransactionStrip.OnSetTransactionCostVisibility
	// void OnSetTransactionCostVisibility(bool bVisible);                                                                      // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/FortniteConversationUI.FortTransactionStrip.HandleOnItemCountChanged
	// void HandleOnItemCountChanged(TScriptInterface<Class> InventoryOwner, UFortItemDefinition* Definition, int32_t Delta);   // [0x98ddd90] Final|Native|Private 
};

/// Class /Script/FortniteConversationUI.FortUpgradeBrief
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UFortUpgradeBrief : public UFortItemTransactionBrief
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
};

/// Class /Script/FortniteConversationUI.MobileConversationScreen
/// Size: 0x0030 (0x0005B0 - 0x0005E0)
class UMobileConversationScreen : public UFortConversationScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	CMember(UButton*)                                  MobileButtonConfirm                                         OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UButton*)                                  MobileButtonTouchInformation                                OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        MobileCloseButton                                           OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_CenteredDetails                                    OFFSET(get<T>, {0x5D0, 8, 0, 0})


	/// Functions
	// Function /Script/FortniteConversationUI.MobileConversationScreen.OnHandleConfirmClicked
	// void OnHandleConfirmClicked();                                                                                           // [0x98de168] Final|Native|Protected 
};

/// Enum /Script/FortniteConversationUI.ECannotBuyReason
/// Size: 0x03
enum ECannotBuyReason : uint8_t
{
	ECannotBuyReason__CannotAfford0                                                  = 0,
	ECannotBuyReason__OutOfStock1                                                    = 1,
	ECannotBuyReason__ECannotBuyReason_MAX2                                          = 2
};

