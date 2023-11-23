
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

/// Class /Script/EventScreenBase.FortEventScreenData
/// Size: 0x0640 (0x000030 - 0x000670)
class UFortEventScreenData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FString)                                   EventCMSId                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   AccountResourceName                                         OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FString)                                   LevelOfferId                                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FString)                                   PremiumTrackOfferId                                         OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	CMember(UFortTokenType*)                           PremiumTrackPurchasedToken                                  OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FGameplayTag)                              VaultWorldTag                                               OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FVaultWorldBackgroundData)                 PreviewScreenBackgroundData                                 OFFSET(getStruct<T>, {0x80, 88, 0, 0})
	CMember(TWeakObjectPtr<UFortChallengeBundleItemDefinition*>) QuestBundle                                       OFFSET(get<T>, {0xD8, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      SpecialRewardItem                                           OFFSET(get<T>, {0xF8, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      SpecialPremiumRewardItem                                    OFFSET(get<T>, {0x118, 32, 0, 0})
	CMember(TArray<FEventItemOverride>)                ItemOverrides                                               OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FEventScreenTrackData)                     FreeTrackData                                               OFFSET(getStruct<T>, {0x148, 32, 0, 0})
	SMember(FEventScreenTrackData)                     PremiumTrackData                                            OFFSET(getStruct<T>, {0x168, 32, 0, 0})
	SMember(FGameplayTag)                              QuestCategoryTag                                            OFFSET(getStruct<T>, {0x188, 4, 0, 0})
	CMember(TArray<UClass*>)                           RichTextDecorators                                          OFFSET(get<T>, {0x190, 16, 0, 0})
	CMember(UMaterialInterface*)                       EventBackgroundMaterial                                     OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(UMaterialInterface*)                       ProgressBarMaterial                                         OFFSET(get<T>, {0x1A8, 8, 0, 0})
	SMember(FSlateBrush)                               CurrencyBrush                                               OFFSET(getStruct<T>, {0x1B0, 192, 0, 0})
	SMember(FSlateBrush)                               CompletionBannerBrush                                       OFFSET(getStruct<T>, {0x270, 192, 0, 0})
	SMember(FSlateBrush)                               GlowForeground                                              OFFSET(getStruct<T>, {0x330, 192, 0, 0})
	SMember(FSlateBrush)                               GlowBackground                                              OFFSET(getStruct<T>, {0x3F0, 192, 0, 0})
	SMember(FLinearColor)                              EventBackgroundColor1                                       OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	SMember(FLinearColor)                              EventBackgroundColor2                                       OFFSET(getStruct<T>, {0x4C0, 16, 0, 0})
	SMember(FLinearColor)                              RewardBackgroundColor1                                      OFFSET(getStruct<T>, {0x4D0, 16, 0, 0})
	SMember(FLinearColor)                              RewardBackgroundColor2                                      OFFSET(getStruct<T>, {0x4E0, 16, 0, 0})
	SMember(FLinearColor)                              RewardBackgroundColor3                                      OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	SMember(FLinearColor)                              AccentColor                                                 OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 RewardTileBackgroundColors                                  OFFSET(get<T>, {0x510, 80, 0, 0})
	SMember(FText)                                     TimeRemainingFormat                                         OFFSET(getStruct<T>, {0x560, 24, 0, 0})
	SMember(FText)                                     CurrencyFormat                                              OFFSET(getStruct<T>, {0x578, 24, 0, 0})
	CMember(USoundBase*)                               DefaultHoveredSound                                         OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(USoundBase*)                               DefaultPressedSound                                         OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(USoundBase*)                               BuyPressedSound                                             OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(USoundBase*)                               BuyHoldStartedSound                                         OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(USoundBase*)                               BuyHoldCompletedSound                                       OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(USoundBase*)                               BuyHoldAbortedSound                                         OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(USoundBase*)                               BackPressedSound                                            OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(USoundBase*)                               AddPressedSound                                             OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(USoundBase*)                               SubtractPressedSound                                        OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(USoundBase*)                               ProgressStartedSound                                        OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(USoundBase*)                               ProgressEndedSound                                          OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(USoundBase*)                               ProgressInterruptedSound                                    OFFSET(get<T>, {0x5E8, 8, 0, 0})
	DMember(float)                                     RewardPreviewZoomLevel                                      OFFSET(get<float>, {0x5F0, 4, 0, 0})
	DMember(bool)                                      bUseWidgetCameraFraming                                     OFFSET(get<bool>, {0x5F4, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MoreInfoModalClass                                          OFFSET(get<T>, {0x5F8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PurchaseLevelsModalClass                                    OFFSET(get<T>, {0x618, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PurchasePremiumTrackModalClass                              OFFSET(get<T>, {0x638, 32, 0, 0})
	CMember(TArray<FString>)                           CalendarEvents                                              OFFSET(get<T>, {0x658, 16, 0, 0})
};

/// Class /Script/EventScreenBase.FortEventModalBase
/// Size: 0x0008 (0x000400 - 0x000408)
class UFortEventModalBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
};

/// Class /Script/EventScreenBase.FortEventMoreInfoGroup
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortEventMoreInfoGroup : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/EventScreenBase.FortEventMoreInfoModal
/// Size: 0x0028 (0x000408 - 0x000430)
class UFortEventMoreInfoModal : public UFortEventModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(UDynamicEntryBox*)                         DynamicEntryBox_Groups                                      OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseMobile                                          OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UScrollBox*)                               SB_Vertical                                                 OFFSET(get<T>, {0x428, 8, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.SetModalText
	// void SetModalText(FText& Header, FText& SubHeader, FText& Legal);                                                        // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.OnModalBackout
	// void OnModalBackout();                                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.OnEventScreenDataSet
	// void OnEventScreenDataSet(UFortEventScreenData* InEventScreenData);                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventMoreInfoModal.GetEventScreenData
	// UFortEventScreenData* GetEventScreenData();                                                                              // [0xa1391c4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventPurchaseLevelsModal
/// Size: 0x0070 (0x000408 - 0x000478)
class UFortEventPurchaseLevelsModal : public UFortEventModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	CMember(UCommonButtonBase*)                        Button_Addition                                             OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Subtraction                                          OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Purchase                                             OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GetVBucks                                            OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseMobile                                          OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UEventScreenListView*)                     ListView_RewardPreview                                      OFFSET(get<T>, {0x438, 8, 0, 0})
	DMember(int32_t)                                   CurrentResourceValue                                        OFFSET(get<int32_t>, {0x440, 4, 0, 0})
	DMember(int32_t)                                   MaxResourceValue                                            OFFSET(get<int32_t>, {0x444, 4, 0, 0})
	DMember(int32_t)                                   CurrentVBucks                                               OFFSET(get<int32_t>, {0x448, 4, 0, 0})
	DMember(int32_t)                                   OfferResourceQuantity                                       OFFSET(get<int32_t>, {0x44C, 4, 0, 0})
	DMember(bool)                                      bAnimateListViewFromEmpty                                   OFFSET(get<bool>, {0x450, 1, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnPurchaseAmountChanged
	// void OnPurchaseAmountChanged(int32_t TotalPrice, int32_t LevelQuantity, int32_t PurchaseQuantity, int32_t ResourceQuantity); // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnEventScreenDataSet
	// void OnEventScreenDataSet(UFortEventScreenData* InEventScreenData);                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnCMSTextApplied
	// void OnCMSTextApplied(FText& LegalText);                                                                                 // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.OnAmountChangeButtonClicked
	// void OnAmountChangeButtonClicked();                                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.HandlePurchaseComplete
	// void HandlePurchaseComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, FString InOfferId);               // [0xa1393e0] Final|Native|Private|HasOutParms 
	// Function /Script/EventScreenBase.FortEventPurchaseLevelsModal.GetEventScreenData
	// UFortEventScreenData* GetEventScreenData();                                                                              // [0xa1391ec] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortPurchasePremiumTrackBody
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortPurchasePremiumTrackBody : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/EventScreenBase.FortEventPurchasePremiumTrackModal
/// Size: 0x0070 (0x000408 - 0x000478)
class UFortEventPurchasePremiumTrackModal : public UFortEventModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	CMember(UDynamicEntryBox*)                         DynamicEntryBox_Body                                        OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Body                                              OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_Purchase                                             OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GetVBucks                                            OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseMobile                                          OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PreviewReward                                        OFFSET(get<T>, {0x438, 8, 0, 0})
	DMember(int32_t)                                   CurrentVBucks                                               OFFSET(get<int32_t>, {0x440, 4, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.OnPriceSet
	// void OnPriceSet(int32_t Price);                                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.OnEventScreenDataSet
	// void OnEventScreenDataSet(UFortEventScreenData* InEventScreenData);                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.OnCMSTextApplied
	// void OnCMSTextApplied(FText& HeaderText, FText& LegalText);                                                              // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.HandlePurchaseComplete
	// void HandlePurchaseComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, FString InOfferId);               // [0xa1393e0] Final|Native|Private|HasOutParms 
	// Function /Script/EventScreenBase.FortEventPurchasePremiumTrackModal.GetEventScreenData
	// UFortEventScreenData* GetEventScreenData();                                                                              // [0xa139214] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventListViewWidgetBase
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortEventListViewWidgetBase : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/EventScreenBase.FortEventRewardTracksWidget
/// Size: 0x0050 (0x0002C8 - 0x000318)
class UFortEventRewardTracksWidget : public UFortEventListViewWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UDynamicEntryBox*)                         DynamicEntryBox_RewardTracks                                OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(bool)                                      bPreviewMode                                                OFFSET(get<bool>, {0x2D0, 1, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPSetProgressPercent
	// void BPSetProgressPercent(float Percent);                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPSetAllRewardsCollected
	// void BPSetAllRewardsCollected(bool bAllCollected);                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPOnSetRewardItem
	// void BPOnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardTracksWidget.BPOnEventScreenDataSet
	// void BPOnEventScreenDataSet(UFortEventScreenData* InEventScreenData);                                                    // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventSpacerWidget
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventSpacerWidget : public UFortEventListViewWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/EventScreenBase.FortEventRewardWidget
/// Size: 0x0090 (0x0002C0 - 0x000350)
class UFortEventRewardWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(UCommonButtonBase*)                        Button_RewardPreview                                        OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UFortCosmeticItemCard*)                    UserWidget_ItemCard                                         OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(bool)                                      bIsTrackOwned                                               OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	DMember(bool)                                      bPreviewMode                                                OFFSET(get<bool>, {0x2D9, 1, 0, 0})
	DMember(bool)                                      bInPreviewSelectedState                                     OFFSET(get<bool>, {0x2DA, 1, 0, 0})
	DMember(bool)                                      bInPremiumUpgradeState                                      OFFSET(get<bool>, {0x2DB, 1, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetTrackData
	// void SetTrackData(FEventScreenTrackData& TrackData, bool bIsOwned);                                                      // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetProgressPercent
	// void SetProgressPercent(float Percent);                                                                                  // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetIsBannerItem
	// void SetIsBannerItem(bool bIsBanner);                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInSelectedState
	// void SetInSelectedState(bool bSelected);                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPreviewSelectedState
	// void SetInPreviewSelectedState(bool bSelected);                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPreviewedState
	// void SetInPreviewedState(bool bPreviewed);                                                                               // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetInPremiumUpgradeState
	// void SetInPremiumUpgradeState(bool bHighlighted);                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetDoubleWidth
	// void SetDoubleWidth(bool bDoubleWidth);                                                                                  // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetCustomItemIcon
	// void SetCustomItemIcon(UTexture2D* CustomItemIcon);                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.SetAllRewardsCollected
	// void SetAllRewardsCollected(bool bAllCollected);                                                                         // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnSetRewardItem
	// void OnSetRewardItem(int32_t RequiredProgress, int32_t RemainingProgress, float RewardProgressPercent, float PreviewProgressPercent, float OverallProgressPercent, bool bInPreviewMode); // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnRewardWidgetReset
	// void OnRewardWidgetReset();                                                                                              // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType NewInputType);                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.OnEventScreenDataSet
	// void OnEventScreenDataSet(UFortEventScreenData* InEventScreenData);                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventRewardWidget.GetEventScreenData
	// UFortEventScreenData* GetEventScreenData();                                                                              // [0xa13923c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventScreenBase
/// Size: 0x0440 (0x000730 - 0x000B70)
class UFortEventScreenBase : public UFortItemPreviewScreen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2928;

public:
	CMember(TArray<UNamedSlot*>)                       LayoutTemplateSlots                                         OFFSET(get<T>, {0x738, 16, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_KeyArt                                            OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ViewQuests                                           OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MoreInfo                                             OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PurchaseLevels                                       OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Preview                                              OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowInItemShop                                       OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Previous                                             OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Next                                                 OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(UFortEventTrackerModule_CustomText*)       CustomText_InspectItem                                      OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UPanelWidget*)                             Panel_LoadError                                             OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Close                                                OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileClose                                          OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemDescription                                        OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemName                                               OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SetDetails                                             OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(UAthenaRewardItemTypeRarityTag*)           ItemRewardTag                                               OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(UFortEventScreenData*)                     EventScreenData                                             OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(EEventScreenRewardPreviewType)             ActiveRewardPreviewType                                     OFFSET(get<T>, {0x7D0, 1, 0, 0})
	CMember(UFortChallengeBundleItemDefinition*)       LoadedQuestBundle                                           OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(AFortItemPreviewWorld*)                    CachedVaultWorld                                            OFFSET(get<T>, {0x7E0, 8, 0, 0})
	DMember(float)                                     TimeBetweenVariantsRestart                                  OFFSET(get<float>, {0x7F8, 4, 0, 0})
	DMember(float)                                     TimeBetweenVariants                                         OFFSET(get<float>, {0x7FC, 4, 0, 0})
	CMember(TArray<FFortCosmeticVariantPreview>)       CachedVariantPreviews                                       OFFSET(get<T>, {0x800, 16, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventScreenBase.UpdateVariantCounter
	// void UpdateVariantCounter(int32_t CurrentVariantIndex, int32_t TotalNumVariants);                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.SetRewardTrackLegal
	// void SetRewardTrackLegal(FText& LegalText);                                                                              // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.SetItemShopOfferInfoVisibility
	// void SetItemShopOfferInfoVisibility(bool bIsVisible);                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.SetItemShopCallout
	// void SetItemShopCallout(FText& ItemShopCalloutText);                                                                     // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.RegisterLayoutSlots
	// void RegisterLayoutSlots();                                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnScreenViewChanged
	// void OnScreenViewChanged(EEventScreenView PrevScreenView, EEventScreenView NewScreenView);                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnRewardTrackReady
	// void OnRewardTrackReady();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnRewardPreviewItemChanged
	// void OnRewardPreviewItemChanged(UFortAccountItemDefinition* Item, bool bFreeTrack);                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnFirstViewAfterCompletion
	// void OnFirstViewAfterCompletion();                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnCalendarEventStarted
	// void OnCalendarEventStarted(FString EventName);                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.OnCalendarEventEnded
	// void OnCalendarEventEnded(FString EventName);                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventScreenBase.IsCalendarEventActive
	// bool IsCalendarEventActive(FString EventName);                                                                           // [0xa139db8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.HasPurchasedPremiumTrack
	// bool HasPurchasedPremiumTrack();                                                                                         // [0xa139d94] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.HasAllRewardsCollected
	// bool HasAllRewardsCollected();                                                                                           // [0xa139d70] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleUpsellPromptNavigateUpEvent
	// UWidget* HandleUpsellPromptNavigateUpEvent(EUINavigation InNavigation);                                                  // [0xa139ce8] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleToggleFullscreenMap
	// void HandleToggleFullscreenMap(bool bVisible);                                                                           // [0xa139c68] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleRewardListNavigateUpEvent
	// UWidget* HandleRewardListNavigateUpEvent(EUINavigation InNavigation);                                                    // [0xa139bd8] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleRewardListNavigateRightEvent
	// UWidget* HandleRewardListNavigateRightEvent(EUINavigation InNavigation);                                                 // [0xa139b48] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleItemShown
	// void HandleItemShown(UFortAccountItemDefinition* AccountItemDef);                                                        // [0xa139360] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleGiftBoxClosed
	// void HandleGiftBoxClosed();                                                                                              // [0xa13934c] Final|Native|Private 
	// Function /Script/EventScreenBase.FortEventScreenBase.HandleActiveSeasonDataChanged
	// void HandleActiveSeasonDataChanged(TArray<FString>& ActiveEventFlags);                                                   // [0xa1392b4] Final|Native|Private|HasOutParms 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetVaultWorldFloorMID
	// UMaterialInstanceDynamic* GetVaultWorldFloorMID();                                                                       // [0xa13928c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetVaultWorldBackgroundMID
	// UMaterialInstanceDynamic* GetVaultWorldBackgroundMID();                                                                  // [0xa139264] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EventScreenBase.FortEventScreenBase.GetActiveModal
	// UFortEventModalBase* GetActiveModal();                                                                                   // [0xa139174] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.EventScreenListView
/// Size: 0x01E0 (0x000298 - 0x000478)
class UEventScreenListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FMulticastInlineDelegate)                  OnProgressBarAnimationStartedEvent                          OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnProgressBarAnimationCompletedEvent                        OFFSET(getStruct<T>, {0x390, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnProgressBarAnimationInterruptedEvent                      OFFSET(getStruct<T>, {0x3A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnResourcePreviewOffsetAnimationEvent                       OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	CMember(UClass*)                                   RewardTrackWidgetClass                                      OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UClass*)                                   SpacerWidgetClass                                           OFFSET(get<T>, {0x3E8, 8, 0, 0})
	DMember(float)                                     EntrySpacing                                                OFFSET(get<float>, {0x3F0, 4, 0, 0})
	DMember(bool)                                      bCenterSelection                                            OFFSET(get<bool>, {0x3F4, 1, 0, 0})
	DMember(float)                                     MaxItemsInView                                              OFFSET(get<float>, {0x3F8, 4, 0, 0})
	DMember(bool)                                      bPreviewMode                                                OFFSET(get<bool>, {0x3FC, 1, 0, 0})
	CMember(UCurveFloat*)                              ProgressAnimationCurve                                      OFFSET(get<T>, {0x400, 8, 0, 0})
	DMember(bool)                                      bCanAnimateOnceComplete                                     OFFSET(get<bool>, {0x408, 1, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.EventScreenListView.SetNativeTickAllowed
	// void SetNativeTickAllowed(bool bAllowed);                                                                                // [0xa13a3d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/EventScreenBase.EventScreenListView.GetEventScreenData
	// UFortEventScreenData* GetEventScreenData();                                                                              // [0xa13919c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventTokenCollectionWidget
/// Size: 0x0060 (0x0002C0 - 0x000320)
class UFortEventTokenCollectionWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UCommonLazyImage*)                         LazyImage_GhostIcon                                         OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonLazyImage*)                         LazyImage_CompletedIcon                                     OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UImage*)                                   Image_Glow                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               FallbackBrush                                               OFFSET(get<T>, {0x2D8, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortTokenType*>)           TokenDefinition                                             OFFSET(get<T>, {0x2F8, 32, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventTokenCollectionWidget.OnRefreshIcon
	// void OnRefreshIcon(bool IsCollected, bool bIsFirstViewAfterCollection);                                                  // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortEventTrackerModule : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_EventDetails
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_EventDetails : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Header
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_Header : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_RewardDetails
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortEventTrackerModule_RewardDetails : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_RewardRemaining
/// Size: 0x0020 (0x0002C8 - 0x0002E8)
class UFortEventTrackerModule_RewardRemaining : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(UCommonButtonBase*)                        Button_PurchasePremium                                      OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_RewardRemaining.OnPopulateRemaining
	// void OnPopulateRemaining(int32_t ResourceNeeded, int32_t TotalResourceRequired, bool bRequiresPremiumTrackPurchase);     // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_ProgressiveRewards
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortEventTrackerModule_ProgressiveRewards : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(UEventScreenListView*)                     ListView_Rewards                                            OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_ProgressiveRewards.OnPopulateCompletionMessage
	// void OnPopulateCompletionMessage(bool bIsComplete, FText& CompletionText);                                               // [0x101681c] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Collection
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_Collection : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_Banner
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class UFortEventTrackerModule_Banner : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(UFortLazyImage*)                           LazyImage_BannerArt                                         OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_Banner.OnPopulateHeaderCTAText
	// void OnPopulateHeaderCTAText(FText& HeaderCTAText);                                                                      // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_Banner.OnPopulateBannerText
	// void OnPopulateBannerText(FText& BannerText);                                                                            // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_Banner.OnCTACompleted
	// void OnCTACompleted(bool bIsComplete);                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell
/// Size: 0x0070 (0x0002C8 - 0x000338)
class UFortEventTrackerModule_PremiumUpsell : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(UFortCTAButton*)                           Button_Prompt                                               OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FText)                                     PromptTextUnowned                                           OFFSET(getStruct<T>, {0x2D0, 24, 0, 0})
	SMember(FText)                                     PromptTextOwned                                             OFFSET(getStruct<T>, {0x2E8, 24, 0, 0})


	/// Functions
	// Function /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell.OnPopulateText
	// void OnPopulateText(FText& HeaderText, FText& BodyText);                                                                 // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell.OnIconLoaded
	// void OnIconLoaded(UTexture* LoadedTexture);                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/EventScreenBase.FortEventTrackerModule_PremiumUpsell.IsPremiumTrackOwned
	// bool IsPremiumTrackOwned();                                                                                              // [0x9e02214] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/EventScreenBase.FortEventTrackerModule_CustomText
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class UFortEventTrackerModule_CustomText : public UFortEventTrackerModule
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Struct /Script/EventScreenBase.EventItemOverride
/// Size: 0x0068 (0x000000 - 0x000068)
class FEventItemOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      ItemDefinition                                              OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CustomItemTexture                                           OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               CustomItemTextureMobile                                     OFFSET(get<T>, {0x40, 32, 0, 0})
	DMember(bool)                                      bIsDoubleWidth                                              OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenTrackData
/// Size: 0x0020 (0x000000 - 0x000020)
class FEventScreenTrackData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FLinearColor)                              TrackColorPrimary                                           OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FLinearColor)                              TrackColorSecondary                                         OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenMoreInfoGroup
/// Size: 0x0040 (0x000000 - 0x000040)
class FEventScreenMoreInfoGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     Header                                                      OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Body                                                        OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FString)                                   IconURL                                                     OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenCMSResourceGroupOverride
/// Size: 0x0018 (0x000000 - 0x000018)
class FEventScreenCMSResourceGroupOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ResourceValue                                               OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FString)                                   KeyArtOverrideURL                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenCMSData
/// Size: 0x02A8 (0x000000 - 0x0002A8)
class FEventScreenCMSData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FString)                                   EventCMSId                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     EventName                                                   OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FText)                                     EventDescription                                            OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FText)                                     ResourceHeader                                              OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FText)                                     StarterHeader                                               OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	SMember(FText)                                     CompletionHeader                                            OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FText)                                     EventCTA                                                    OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FText)                                     EventCTACompleted                                           OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FText)                                     HeaderCTA                                                   OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FText)                                     ItemShopCallout                                             OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FString)                                   CTAIconURL                                                  OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   KeyArtURL                                                   OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	SMember(FText)                                     MoreInfoHeader                                              OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	SMember(FText)                                     MoreInfoSubHeader                                           OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	SMember(FText)                                     MoreInfoLegal                                               OFFSET(getStruct<T>, {0x138, 24, 0, 0})
	CMember(TArray<FEventScreenMoreInfoGroup>)         MoreInfoGroups                                              OFFSET(get<T>, {0x150, 16, 0, 0})
	SMember(FText)                                     PurchaseLegal                                               OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	SMember(FText)                                     RewardTrackLegal                                            OFFSET(getStruct<T>, {0x178, 24, 0, 0})
	SMember(FString)                                   ItemShopOfferId                                             OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	SMember(FText)                                     PremiumUpsellUnownedHeader                                  OFFSET(getStruct<T>, {0x1A0, 24, 0, 0})
	SMember(FText)                                     PremiumUpsellUnownedBody                                    OFFSET(getStruct<T>, {0x1B8, 24, 0, 0})
	SMember(FText)                                     PremiumUpsellOwnedHeader                                    OFFSET(getStruct<T>, {0x1D0, 24, 0, 0})
	SMember(FText)                                     PremiumUpsellOwnedBody                                      OFFSET(getStruct<T>, {0x1E8, 24, 0, 0})
	SMember(FString)                                   PremiumUpsellIconURL                                        OFFSET(getStruct<T>, {0x200, 16, 0, 0})
	SMember(FText)                                     PurchasePremiumTrackHeader                                  OFFSET(getStruct<T>, {0x210, 24, 0, 0})
	CMember(TArray<FText>)                             PurchasePremiumTrackBodyList                                OFFSET(get<T>, {0x228, 16, 0, 0})
	SMember(FText)                                     InspectSpecialItemUnowned                                   OFFSET(getStruct<T>, {0x238, 24, 0, 0})
	SMember(FText)                                     InspectSpecialItemOwned                                     OFFSET(getStruct<T>, {0x250, 24, 0, 0})
	SMember(FText)                                     InspectSpecialPremiumItemUnowned                            OFFSET(getStruct<T>, {0x268, 24, 0, 0})
	SMember(FText)                                     InspectSpecialPremiumItemOwned                              OFFSET(getStruct<T>, {0x280, 24, 0, 0})
	CMember(TArray<FEventScreenCMSResourceGroupOverride>) ResourceGroupOverrides                                   OFFSET(get<T>, {0x298, 16, 0, 0})
};

/// Struct /Script/EventScreenBase.EventScreenCMSGroup
/// Size: 0x0010 (0x000000 - 0x000010)
class FEventScreenCMSGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FEventScreenCMSData>)               EventScreens                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/EventScreenBase.EEventScreenView
/// Size: 0x08
enum EEventScreenView : uint8_t
{
	EEventScreenView__None0                                                          = 0,
	EEventScreenView__LandingPage1                                                   = 1,
	EEventScreenView__RewardPreview2                                                 = 2,
	EEventScreenView__MoreInfo3                                                      = 3,
	EEventScreenView__PurchaseLevels4                                                = 4,
	EEventScreenView__PurchasePremiumTrack5                                          = 5,
	EEventScreenView__LoadError6                                                     = 6,
	EEventScreenView__EEventScreenView_MAX7                                          = 7
};

/// Enum /Script/EventScreenBase.EEventScreenRewardPreviewType
/// Size: 0x05
enum EEventScreenRewardPreviewType : uint8_t
{
	EEventScreenRewardPreviewType__None0                                             = 0,
	EEventScreenRewardPreviewType__RewardTrack1                                      = 1,
	EEventScreenRewardPreviewType__SpecialItem2                                      = 2,
	EEventScreenRewardPreviewType__SpecialPremiumItem3                               = 3,
	EEventScreenRewardPreviewType__EEventScreenRewardPreviewType_MAX4                = 4
};

