
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: UMG

/// Class /Script/CrewUI.BattlePassCrewContentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UBattlePassCrewContentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CrewUI.FortProgressiveContentInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortProgressiveContentInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CrewUI.BattlePassCrewPurchaseButton
/// Size: 0x0020 (0x001530 - 0x001550)
class UBattlePassCrewPurchaseButton : public UFortHoldableButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
	CMember(EBattlePassPurchaseButtonCurrencyType)     CurrencyType                                                OFFSET(get<T>, {0x1528, 1, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Label                                                  OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SecondaryLabel                                         OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_FinalCost                                              OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UWidget*)                                  Container_SecondaryLabel                                    OFFSET(get<T>, {0x1548, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.BattlePassCrewPurchaseButton.OnCurrencyUpdated
	// void OnCurrencyUpdated();                                                                                                // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.BattlePassCrewPurchaseContainer
/// Size: 0x0080 (0x000400 - 0x000480)
class UBattlePassCrewPurchaseContainer : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	DMember(float)                                     CrewUpsellTransitionDelayTime                               OFFSET(get<float>, {0x420, 4, 0, 0})
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_ContentContainer                                   OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UBattlePassPurchaseScreen*)                BattlePassPurchaseScreen                                    OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UWidgetAnimation*)                         QuickIntro                                                  OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UWidgetAnimation*)                         CrewBenefitsIntro                                           OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UClass*)                                   CrewSubscriptionErrorModalClass                             OFFSET(get<T>, {0x458, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.BattlePassCrewPurchaseContainer.OnTriggerIntroAnimation
	// void OnTriggerIntroAnimation(bool bCanClaimRewards);                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassCrewPurchaseContainer.OnContentStateUpdated
	// void OnContentStateUpdated(EBattlePassCrewContentState InState, bool bInScreenOpened);                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.BattlePassSeasonHeading
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UBattlePassSeasonHeading : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonRichTextBlock*)                     Text_Season                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/CrewUI.BattlePassPurchaseScreen
/// Size: 0x0128 (0x000440 - 0x000568)
class UBattlePassPurchaseScreen : public UCMSBackgroundWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
	DMember(float)                                     CrewTransitionDelayTime                                     OFFSET(get<float>, {0x47C, 4, 0, 0})
	CMember(UClass*)                                   PurchaseCompleteModal                                       OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ToCrew                                               OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_Purchase                                             OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MoreInfo                                             OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GiftBattlePass                                       OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_ConfirmBase                                          OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_ConfirmBundle                                        OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UBattlePassSeasonHeading*)                 Heading_Primary                                             OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UBattlePassSeasonHeading*)                 Heading_Secondary                                           OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Disclaimer                                         OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Description                                            OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  Switcher_PurchaseState                                      OFFSET(get<T>, {0x548, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.BattlePassPurchaseScreen.RefreshFocus
	// void RefreshFocus();                                                                                                     // [0x94c1bf8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnShowNavButtonNotification
	// void OnShowNavButtonNotification(bool bShowNotification);                                                                // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnSetScreenInteractable
	// void OnSetScreenInteractable(bool bInteractable);                                                                        // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnSetNavButtonNotificationText
	// void OnSetNavButtonNotificationText(FText& NotificationText);                                                            // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnPurchaseStateChanged
	// void OnPurchaseStateChanged(EBattlePassPurchaseState InCurrentState);                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.BattlePassPurchaseScreen.OnPurchaseConfirmed
	// void OnPurchaseConfirmed();                                                                                              // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewMultiSubscriptionAlertModal
/// Size: 0x00E0 (0x000400 - 0x0004E0)
class UCrewMultiSubscriptionAlertModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	CMember(UDynamicEntryBox*)                         EntryBox_BulletPoints                                       OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_OpenHowToURL                                         OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TextURL                                              OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_DoNotRemind                                          OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Close                                                OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TouchClose                                           OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(TArray<FText>)                             BulletPoints                                                OFFSET(get<T>, {0x438, 16, 0, 0})
	CMember(TMap<EAppStore, FText>)                    AppStorePlatformMapping                                     OFFSET(get<T>, {0x448, 80, 0, 0})
	SMember(FString)                                   HowToCancelURL                                              OFFSET(getStruct<T>, {0x498, 16, 0, 0})
	SMember(FText)                                     PlatformTextStyle                                           OFFSET(getStruct<T>, {0x4C8, 24, 0, 0})


	/// Functions
	// Function /Script/CrewUI.CrewMultiSubscriptionAlertModal.OnSetHowToCancelURL
	// void OnSetHowToCancelURL(FString MoreInfoUrl);                                                                           // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewPriceChangeAcknowledgeModal
/// Size: 0x0198 (0x000400 - 0x000598)
class UCrewPriceChangeAcknowledgeModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1432;

public:
	CMember(UCommonButtonBase*)                        Button_Accept                                               OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CancelSubscription                                   OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MoreInfo                                             OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TextURL                                              OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CancellationInfoModalClass                                  OFFSET(get<T>, {0x428, 32, 0, 0})


	/// Functions
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeTitle
	// void OnSetPriceChangeAcknowledgeTitle(FText& Title);                                                                     // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoUrl
	// void OnSetPriceChangeAcknowledgeMoreInfoUrl(FText& MoreInfoUrl);                                                         // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeMoreInfoText
	// void OnSetPriceChangeAcknowledgeMoreInfoText(FText& ConfirmButtonText);                                                  // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeConfirmButtonText
	// void OnSetPriceChangeAcknowledgeConfirmButtonText(FText& ConfirmButtonText);                                             // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCheckboxText
	// void OnSetPriceChangeAcknowledgeCheckboxText(FText& CheckboxText);                                                       // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText
	// void OnSetPriceChangeAcknowledgeCancelSubscriptionButtonText(FText& CancelSubscriptionButtonText);                       // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyText
	// void OnSetPriceChangeAcknowledgeBodyText(FText& BodyText);                                                               // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnSetPriceChangeAcknowledgeBodyTable
	// void OnSetPriceChangeAcknowledgeBodyTable(TArray<FCrewTableRow>& PriceChangeByRegionRows);                               // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.OnModalBackout
	// void OnModalBackout();                                                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPriceChangeAcknowledgeModal.ExitModal
	// void ExitModal();                                                                                                        // [0x34111d4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CrewUI.CrewPurchaseScreen
/// Size: 0x0178 (0x000440 - 0x0005B8)
class UCrewPurchaseScreen : public UCMSBackgroundWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	DMember(bool)                                      bManagementModeEnabled                                      OFFSET(get<bool>, {0x4A8, 1, 0, 0})
	CMember(UWidget*)                                  ContentPurchasedFocusWidget                                 OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UWidget*)                                  FocusWidget                                                 OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup_BenefitsTiles                                   OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CancellationInfoModalClass                                  OFFSET(get<T>, {0x4C8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   LegalInfoModalClass                                         OFFSET(get<T>, {0x4E8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ResolveIssueModalClass                                      OFFSET(get<T>, {0x508, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RejoinModalClass                                            OFFSET(get<T>, {0x528, 32, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ToBattlePass                                         OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_Purchase                                             OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_Rejoin                                               OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ResolvePayment                                       OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_WatchTrailer                                         OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Terms                                                OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CancellationInfo                                     OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_RecurringRewards                                   OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_LimitedTimeRewards                                 OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCrewTileDetails*)                         Details_CurrentCrewTile                                     OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LimitedTime                                            OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_UserInformation                                     OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_UserInformation                                        OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_CrewDisclaimer                                         OFFSET(get<T>, {0x5B0, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.CrewPurchaseScreen.OnUserInformationTextsUpdated
	// void OnUserInformationTextsUpdated(FText& UserInformationText1, FText& UserInformationText2, EMcpSubscriptionState SubscriptionState); // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnUpdateVBuckRefundVisibility
	// void OnUpdateVBuckRefundVisibility(bool bVisible);                                                                       // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnUpdatePurchaseButtonState
	// void OnUpdatePurchaseButtonState(ECrewPurchaseButtonState ButtonState);                                                  // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnShowNavButtonNotification
	// void OnShowNavButtonNotification(bool bShowNotification);                                                                // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnSetPaymentLegalText
	// void OnSetPaymentLegalText(FText& LegalText);                                                                            // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnSetNavButtonNotificationText
	// void OnSetNavButtonNotificationText(FText& NotificationText);                                                            // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.OnContainerTabVisibilityUpdated
	// void OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);                                 // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.EndProgress
	// void EndProgress();                                                                                                      // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.BlockScreenContent
	// void BlockScreenContent(bool bBlockScreen, FText& ContentBlockedText);                                                   // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.CrewPurchaseScreen.BeginProgress
	// void BeginProgress(FText& ProgressLabel);                                                                                // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewRewardTile
/// Size: 0x0060 (0x001490 - 0x0014F0)
class UCrewRewardTile : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	DMember(float)                                     TileImageStreamoutSeconds                                   OFFSET(get<float>, {0x14D0, 4, 0, 0})
	CMember(UImage*)                                   Image_TileImage                                             OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_TileLabel                                              OFFSET(get<T>, {0x14E0, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.CrewRewardTile.OnUpdateOwnedState
	// void OnUpdateOwnedState(bool bOwned);                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewRewardTile.OnStartingDownloadTileImage
	// void OnStartingDownloadTileImage();                                                                                      // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewRewardTile.OnDownloadTileImageComplete
	// void OnDownloadTileImageComplete(UTexture2D* Texture);                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.CrewRewardTile.IsMonthlyBenefit
	// bool IsMonthlyBenefit();                                                                                                 // [0x9cac55c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CrewUI.CrewSeasonLaunchScreen
/// Size: 0x00E8 (0x000440 - 0x000528)
class UCrewSeasonLaunchScreen : public UCMSBackgroundWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1320;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ResolveIssueModalClass                                      OFFSET(get<T>, {0x478, 32, 0, 0})
	CMember(UBattlePassSeasonHeading*)                 Heading_SeasonInfo                                          OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Description                                            OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Claim                                                OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ResolveIssue                                         OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GiftBattlePass                                       OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Disclaimer                                         OFFSET(get<T>, {0x4C0, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewStandaloneSubscriptionContentContainer
/// Size: 0x0008 (0x000728 - 0x000730)
class UCrewStandaloneSubscriptionContentContainer : public UFortStandaloneFrontend
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
	CMember(UCrewSubscriptionContentContainer*)        Widget_CrewContentContainer                                 OFFSET(get<T>, {0x728, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewSubscriptionContentContainer
/// Size: 0x00A0 (0x000400 - 0x0004A0)
class UCrewSubscriptionContentContainer : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(TArray<FCrewSubscriptionContentTabData>)   TabsData                                                    OFFSET(get<T>, {0x430, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextTabInputAction                                          OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousTabInputAction                                      OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_Tabs                                               OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup_Tabs                                            OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_Tabs                                               OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UWidget*)                                  Widget_TabsContainer                                        OFFSET(get<T>, {0x478, 8, 0, 0})
	DMember(float)                                     SpacingAdjustmentForTabs                                    OFFSET(get<float>, {0x480, 4, 0, 0})
	SMember(FPrimaryContentSetup)                      ContentSetup                                                OFFSET(getStruct<T>, {0x484, 3, 0, 0})


	/// Functions
	// Function /Script/CrewUI.CrewSubscriptionContentContainer.OnTabSelected
	// void OnTabSelected(int32_t TabIndex);                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewSubscriptionErrorModal
/// Size: 0x0010 (0x000400 - 0x000410)
class UCrewSubscriptionErrorModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(UCommonButtonBase*)                        Button_Close                                                OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TouchClose                                           OFFSET(get<T>, {0x408, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewTileDetails
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UCrewTileDetails : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(UCommonTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     RichText_Description                                        OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_Tags                                               OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileMoreInfo                                       OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Script/CrewUI.CrewTileDetailsTag
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UCrewTileDetailsTag : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonRichTextBlock*)                     Text_Label                                                  OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.CrewTileDetailsTag.OnTagSetup
	// void OnTagSetup(ECrewDetailsTag RewardTag, bool bIsOwnedTag);                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.CrewUIGameFeatureAction
/// Size: 0x0100 (0x000028 - 0x000128)
class UCrewUIGameFeatureAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TWeakObjectPtr<UClass*>)                   BattlePassCrewContainerClass                                OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrewContentContainerClass                                   OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrewStandaloneContentContainerClass                         OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrewPurchaseScreenClass                                     OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ProgressionScreenClass                                      OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrewPriceChangeAcknowledgeModalClass                        OFFSET(get<T>, {0xC8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MultiSubAlertModalClass                                     OFFSET(get<T>, {0xE8, 32, 0, 0})
	CMember(TArray<FFortProgressiveSet>)               ProgressiveCosmeticSets                                     OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveContentContainer
/// Size: 0x0050 (0x000400 - 0x000450)
class UFortProgressiveContentContainer : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_PrimaryContent                                     OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UFortProgressiveTableOfContentsScreen*)    Widget_ProgressiveTableOfContentsScreen                     OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UFortProgressiveItemScreen*)               Widget_ProgressiveItemScreen                                OFFSET(get<T>, {0x448, 8, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveItemDetailsWidget
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UFortProgressiveItemDetailsWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(UCommonTextBlock*)                         Text_CosmeticStage                                          OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     Text_UnlockCriteria                                         OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UWidget*)                                  Widget_UnlockCriteriaContainer                              OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UAthenaRewardItemTypeRarityTag*)           Widget_ItemTypeRarityTag                                    OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UWidget*)                                  Tag_Owned                                                   OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/CrewUI.FortProgressiveScreenBase
/// Size: 0x0068 (0x000720 - 0x000788)
class UFortProgressiveScreenBase : public UFortItemPreviewScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1928;

public:
	DMember(float)                                     RewardPreviewTime                                           OFFSET(get<float>, {0x774, 4, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveScreenBase.BP_OnContainerTabVisibilityUpdated
	// void BP_OnContainerTabVisibilityUpdated(bool bTabsVisible, float SpacingAdjustmentForTabs);                              // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveItemScreen
/// Size: 0x0110 (0x000788 - 0x000898)
class UFortProgressiveItemScreen : public UFortProgressiveScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2200;

public:
	CMember(UWidget*)                                  ContentPurchasedFocusWidget                                 OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TouchBack                                            OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MoreInfo                                             OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_Subscribe                                            OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PreviewStyles                                        OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ExpirationFinePrint                                    OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_NewStagesUnlockFinePrint                               OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_StagesPips                                         OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup_StagesPips                                      OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(UFortProgressiveItemDetailsWidget*)        Widget_ProgressiveItemDetails                               OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(UFortProgressiveStageList*)                Widget_ProgressiveStageList                                 OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(UFortProgressiveItemStateTitleWidget*)     ProgressiveItemStateTitle                                   OFFSET(get<T>, {0x7E8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MoreInfoModalClass                                          OFFSET(get<T>, {0x7F0, 32, 0, 0})
	SMember(FName)                                     SubscribedMaterialParameterName                             OFFSET(getStruct<T>, {0x810, 4, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveItemScreen.OnUpdateSubscriptionState
	// void OnUpdateSubscriptionState(bool bSubscribed);                                                                        // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemScreen.OnSetIsSoloScreen
	// void OnSetIsSoloScreen(bool bInIsSoloScreen);                                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemScreen.OnItemSelected
	// void OnItemSelected();                                                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemScreen.OnErrorStateTextUpdated
	// void OnErrorStateTextUpdated(FText& ErrorStateText);                                                                     // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemScreen.BlockScreenContent
	// void BlockScreenContent(bool bBlockScreen, FText& ContentBlockedText);                                                   // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveItemStateTitleWidget
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortProgressiveItemStateTitleWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/CrewUI.FortProgressiveItemWidget
/// Size: 0x0090 (0x001490 - 0x001520)
class UFortProgressiveItemWidget : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	CMember(UAthenaItemShopReactiveTileText*)          TileText_ItemName                                           OFFSET(get<T>, {0x1490, 8, 0, 0})
	SMember(FProgressiveStageItemInfo)                 StageItemInfo                                               OFFSET(getStruct<T>, {0x1498, 104, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnUnhighlighted
	// void OnUnhighlighted();                                                                                                  // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnTileMaterialLoaded
	// void OnTileMaterialLoaded(bool bSubscribed);                                                                             // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnStageItemChanged
	// void OnStageItemChanged(FProgressiveStageItemInfo& InStageItemInfo);                                                     // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnPeekStateChanged
	// void OnPeekStateChanged(bool bIsInPeekState);                                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveItemWidget.OnHighlighted
	// void OnHighlighted();                                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveSetDetailsWidget
/// Size: 0x0030 (0x0002C0 - 0x0002F0)
class UFortProgressiveSetDetailsWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonButtonBase*)                        Button_MoreInfo                                             OFFSET(get<T>, {0x2C0, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveSetDetailsWidget.BP_OnUpdateSetDetails
	// void BP_OnUpdateSetDetails(FText& SetName, FText& ExpiringText, bool bCompleted);                                        // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveSetList
/// Size: 0x0080 (0x000400 - 0x000480)
class UFortProgressiveSetList : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(UAthenaScrollBox*)                         ScrollBox_SetList                                           OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup_SetTiles                                        OFFSET(get<T>, {0x418, 8, 0, 0})
	DMember(int32_t)                                   NumTilesPerPage                                             OFFSET(get<int32_t>, {0x420, 4, 0, 0})
	CMember(TArray<UFortProgressiveSetTile*>)          SetTiles                                                    OFFSET(get<T>, {0x428, 16, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveSetList.ClearSetTiles
	// void ClearSetTiles();                                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveSetList.AddSetTile
	// UFortProgressiveSetTile* AddSetTile();                                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveSetTile
/// Size: 0x00A0 (0x001490 - 0x001530)
class UFortProgressiveSetTile : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
};

/// Class /Script/CrewUI.FortProgressiveStageList
/// Size: 0x0050 (0x000400 - 0x000450)
class UFortProgressiveStageList : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	CMember(UCommonButtonGroupBase*)                   ButtonGroup_StageItems                                      OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UAthenaScrollBox*)                         ScrollBox_StageList                                         OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(TArray<UFortProgressiveStageWidget*>)      Stages                                                      OFFSET(get<T>, {0x438, 16, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveStageList.SelectStageInDirection
	// void SelectStageInDirection(int32_t Direction);                                                                          // [0x9cac588] Final|Native|Public|BlueprintCallable 
	// Function /Script/CrewUI.FortProgressiveStageList.ClearStageWidgets
	// void ClearStageWidgets();                                                                                                // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageList.AddStageWidget
	// UFortProgressiveStageWidget* AddStageWidget();                                                                           // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveStageWidget
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortProgressiveStageWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(UCommonTextBlock*)                         Text_Month                                                  OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveStageWidget.OnSetTooltipVisible
	// void OnSetTooltipVisible(bool bVisible);                                                                                 // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageWidget.OnSetTooltipText
	// void OnSetTooltipText(FText& InToolTipText);                                                                             // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageWidget.OnPeekStateChanged
	// void OnPeekStateChanged(bool bIsInPeekState);                                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageWidget.ClearStageItemWidgets
	// void ClearStageItemWidgets();                                                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveStageWidget.AddStageItemWidget
	// UFortProgressiveItemWidget* AddStageItemWidget();                                                                        // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/CrewUI.FortProgressiveTableOfContentsScreen
/// Size: 0x0088 (0x000788 - 0x000810)
class UFortProgressiveTableOfContentsScreen : public UFortProgressiveScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	CMember(UWidget*)                                  ContentPurchasedFocusWidget                                 OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_TouchBack                                            OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MoreInfo                                             OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(UBattlePassCrewPurchaseButton*)            Button_Subscribe                                            OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(UFortProgressiveSetList*)                  Widget_SetList                                              OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(UFortProgressiveSetDetailsWidget*)         Widget_SetDetails                                           OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(UFortProgressiveItemStateTitleWidget*)     Widget_ItemStateTitle                                       OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_SetPagesPips                                       OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   ButtonGroup_SetPagesPips                                    OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MoreInfoModalClass                                          OFFSET(get<T>, {0x7D8, 32, 0, 0})
	SMember(FName)                                     SubscribedMaterialParameterName                             OFFSET(getStruct<T>, {0x7F8, 4, 0, 0})


	/// Functions
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateSubscriptionState
	// void BP_OnUpdateSubscriptionState(bool bSubscribed);                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateNumTilesAvailable
	// void BP_OnUpdateNumTilesAvailable(int32_t NumTiles);                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateErrorStateText
	// void BP_OnUpdateErrorStateText(FText& ErrorStateText);                                                                   // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnUpdateBanner
	// void BP_OnUpdateBanner(FText& BannerText, bool bAllSetsCompleted, bool bSubscribed);                                     // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BP_OnSetDescriptionText
	// void BP_OnSetDescriptionText(FText& ProductDescription);                                                                 // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CrewUI.FortProgressiveTableOfContentsScreen.BlockScreenContent
	// void BlockScreenContent(bool bBlockScreen, FText& ContentBlockedText);                                                   // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Struct /Script/CrewUI.CrewSubscriptionContentTabData
/// Size: 0x0020 (0x000000 - 0x000020)
class FCrewSubscriptionContentTabData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FText)                                     TabName                                                     OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(ESubscriptionContentTab)                   TabType                                                     OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveReward
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortProgressiveReward : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FCosmeticVariantInfo>)              DefaultVariantPreviewOverrides                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       TileMaterial                                                OFFSET(get<T>, {0x10, 32, 0, 0})
	DMember(bool)                                      bHidden                                                     OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bAllowPreviewStyles                                         OFFSET(get<bool>, {0x31, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      RewardDef                                                   OFFSET(get<T>, {0x38, 32, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveStageOverrideDisplayData
/// Size: 0x0050 (0x000000 - 0x000050)
class FFortProgressiveStageOverrideDisplayData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FCosmeticVariantInfo>)              DefaultVariantPreviewOverrides                              OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       TileMaterial                                                OFFSET(get<T>, {0x28, 32, 0, 0})
	DMember(bool)                                      bAllowPreviewStyles                                         OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveUIStage
/// Size: 0x0068 (0x000000 - 0x000068)
class FFortProgressiveUIStage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FFortProgressiveReward>)            Rewards                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bUseOverrideDisplayData                                     OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FFortProgressiveStageOverrideDisplayData)  OverrideDisplayData                                         OFFSET(getStruct<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveSet
/// Size: 0x0058 (0x000000 - 0x000058)
class FFortProgressiveSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   FulfillmentId                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     SetName                                                     OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       TileMaterial                                                OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TArray<FFortProgressiveUIStage>)           Stages                                                      OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/CrewUI.FortProgressiveSetRewardData
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortProgressiveSetRewardData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UFortItemDefinition*)                      RewardToken                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Enum /Script/CrewUI.EBattlePassCrewContentState
/// Size: 0x04
enum EBattlePassCrewContentState : uint8_t
{
	EBattlePassCrewContentState__BattlePass0                                         = 0,
	EBattlePassCrewContentState__Crew1                                               = 1,
	EBattlePassCrewContentState__CrewSubscribed2                                     = 2,
	EBattlePassCrewContentState__EBattlePassCrewContentState_MAX3                    = 3
};

/// Enum /Script/CrewUI.EFortProgressiveContentInterfaceCloseReason
/// Size: 0x03
enum EFortProgressiveContentInterfaceCloseReason : uint8_t
{
	EFortProgressiveContentInterfaceCloseReason__Normal0                             = 0,
	EFortProgressiveContentInterfaceCloseReason__SubscriptionPurchased1              = 1,
	EFortProgressiveContentInterfaceCloseReason__EFortProgressiveContentInterfaceCloseReason_MAX2 = 2
};

/// Enum /Script/CrewUI.EFortProgressiveContentType
/// Size: 0x03
enum EFortProgressiveContentType : uint8_t
{
	EFortProgressiveContentType__ProgressiveTableOfContentsScreen0                   = 0,
	EFortProgressiveContentType__ProgressiveItemScreen1                              = 1,
	EFortProgressiveContentType__EFortProgressiveContentType_MAX2                    = 2
};

/// Enum /Script/CrewUI.EBattlePassPurchaseButtonCurrencyType
/// Size: 0x04
enum EBattlePassPurchaseButtonCurrencyType : uint8_t
{
	EBattlePassPurchaseButtonCurrencyType__None0                                     = 0,
	EBattlePassPurchaseButtonCurrencyType__Mtx1                                      = 1,
	EBattlePassPurchaseButtonCurrencyType__RealMoney2                                = 2,
	EBattlePassPurchaseButtonCurrencyType__EBattlePassPurchaseButtonCurrencyType_MAX3 = 3
};

/// Enum /Script/CrewUI.EBattlePassPurchaseState
/// Size: 0x03
enum EBattlePassPurchaseState : uint8_t
{
	EBattlePassPurchaseState__Purchase0                                              = 0,
	EBattlePassPurchaseState__Confirm1                                               = 1,
	EBattlePassPurchaseState__EBattlePassPurchaseState_MAX2                          = 2
};

/// Enum /Script/CrewUI.ECrewPurchaseButtonState
/// Size: 0x04
enum ECrewPurchaseButtonState : uint8_t
{
	ECrewPurchaseButtonState__None0                                                  = 0,
	ECrewPurchaseButtonState__Purchase1                                              = 1,
	ECrewPurchaseButtonState__Rejoin2                                                = 2,
	ECrewPurchaseButtonState__ECrewPurchaseButtonState_MAX3                          = 3
};

