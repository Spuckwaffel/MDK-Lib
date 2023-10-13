
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BlueprintContext
/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: UMG

/// Class /Script/BattlePassBase.BattlePassSubPageInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UBattlePassSubPageInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/BattlePassBase.BattlePassLandingPageBase
/// Size: 0x0150 (0x000400 - 0x000550)
class UBattlePassLandingPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	CMember(UBattlePassLandingPageButton*)             LastHoveredPageButton                                       OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   LandingPageButtonGroupBase                                  OFFSET(get<T>, {0x528, 8, 0, 0})
};

/// Class /Script/BattlePassBase.BattlePassLandingPageButton
/// Size: 0x0280 (0x001490 - 0x001710)
class UBattlePassLandingPageButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5904;

public:
	CMember(EBattlePassView)                           SubPageType                                                 OFFSET(get<T>, {0x1490, 1, 0, 0})
	CMember(EBattlePassFeatures)                       FeatureType                                                 OFFSET(get<T>, {0x1491, 1, 0, 0})
	SMember(FBattlePassLandingPageEntryPreviewInfo)    PreviewInfo                                                 OFFSET(getStruct<T>, {0x1498, 144, 0, 0})
	DMember(bool)                                      bNeedsBattlePass                                            OFFSET(get<bool>, {0x1528, 1, 0, 0})
	CMember(UFortChallengeBundleScheduleDefinition*)   DelayQuestSchedule                                          OFFSET(get<T>, {0x1530, 8, 0, 0})
	DMember(int32_t)                                   DelayDaysSinceSeasonStart                                   OFFSET(get<int32_t>, {0x1538, 4, 0, 0})
	CMember(UFortItemDefinition*)                      RequiredItem                                                OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UFortBangWrapper_NUI*)                     BangWrapper                                                 OFFSET(get<T>, {0x1548, 8, 0, 0})
	DMember(bool)                                      bUsesTelemetry                                              OFFSET(get<bool>, {0x1550, 1, 0, 0})
	SMember(FIntPoint)                                 Telemetry_Size                                              OFFSET(getStruct<T>, {0x1554, 8, 0, 0})
	SMember(FIntPoint)                                 Telemetry_Position                                          OFFSET(getStruct<T>, {0x155C, 8, 0, 0})
	SMember(FBattlePassLandingPageButtonTexts)         DefaultTexts                                                OFFSET(getStruct<T>, {0x1568, 72, 0, 0})
	SMember(FBattlePassLandingPageButtonTexts)         DelayedTexts                                                OFFSET(getStruct<T>, {0x15B0, 72, 0, 0})
	SMember(FBattlePassLandingPageButtonTexts)         SubscribedTexts                                             OFFSET(getStruct<T>, {0x15F8, 72, 0, 0})
	SMember(FBattlePassLandingPageButtonDisplayBehaviorData) DisplayBehaviorData                                   OFFSET(getStruct<T>, {0x1640, 24, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSubscriptionTextureLoaded
	// void OnSubscriptionTextureLoaded(UTexture2D* Texture);                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSubscriptionOwnershipUpdated
	// void OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption);                                                              // [0x1d9241c] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnShowDisplayDetails
	// void OnShowDisplayDetails();                                                                                             // [0x1d9241c] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSetTileImageMaterial
	// void OnSetTileImageMaterial(UMaterialInstance* Material);                                                                // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnDisplayDetailsUpdated
	// void OnDisplayDetailsUpdated(FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails);                             // [0x1d9241c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.GetBattlePassDisplayDetails
	// FBattlePassLandingPageButtonDisplayDetails GetBattlePassDisplayDetails();                                                // [0x258ec68] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.BattlePassRewardPageBase
/// Size: 0x0118 (0x000400 - 0x000518)
class UBattlePassRewardPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1304;

public:
};

/// Class /Script/BattlePassBase.BattlePassUIGameFeatureAction
/// Size: 0x0060 (0x000028 - 0x000088)
class UBattlePassUIGameFeatureAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UClass*>)                   BattlePassScreenClass                                       OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   BattlePassResourceWidgetClass                               OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   BattlePassInfoModalClass                                    OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile
/// Size: 0x00B8 (0x0002C0 - 0x000378)
class UFortBattlePassCustomSkinCategoryTile : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(UProgressBar*)                             ProgressBar                                                 OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UFortDynamicEntryBox*)                     FortDynamicEntryBox_Items                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(URichTextBlock*)                           Text_CategoryTitle                                          OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UFortBattlePassTile*)                      PreviewedTile                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(int32_t)                                   OwnedRewards                                                OFFSET(get<int32_t>, {0x300, 4, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.SetPreviewedTile
	// void SetPreviewedTile(int32_t Index);                                                                                    // [0x99e7aac] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnOwnedTilesUpdated
	// void OnOwnedTilesUpdated(int32_t CurrentlyOwnedRewards, int32_t TotalRewards, float CategoryProgress);                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedStateChanged
	// void OnLockedStateChanged(bool bCategoryLocked);                                                                         // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedProgressUpdated
	// void OnLockedProgressUpdated(int32_t CurrentlyOwnedBeforeCategory, int32_t TotalRewardsBeforeCategory, float LockedProgress); // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.FocusTile
	// void FocusTile(int32_t Index);                                                                                           // [0x99e65cc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/BattlePassBase.FortBattlePassCustomSkinPageBase
/// Size: 0x01C8 (0x000400 - 0x0005C8)
class UFortBattlePassCustomSkinPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	CMember(UScrollBox*)                               ScrollBox_Categories                                        OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UFortDynamicEntryBox*)                     FortDynamicEntryBox_Categories                              OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UBattlePassEnabledInputData*)              EquipEnabledData                                            OFFSET(get<T>, {0x5B8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassBulkBuyPageBase
/// Size: 0x01A0 (0x000400 - 0x0005A0)
class UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(UCommonButtonBase*)                        Button_Addition                                             OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Subtraction                                          OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         DynamicEntryBox_TilesEntries                                OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_BottomButtons                                      OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_BuyLevels                                            OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_ClaimReward                                          OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UWidget*)                                  Widget_LevelUpMessagePremium                                OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         SeasonData_BattleStar                                       OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UAthenaSeasonItemDefinition*)              SeasonItemDefinition                                        OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortBattlePassTile*)                      FocusedReward                                               OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Pages                                             OFFSET(get<T>, {0x598, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnRewardCountChanged
	// void OnRewardCountChanged(int32_t Count);                                                                                // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnPageRangeChanged
	// void OnPageRangeChanged(int32_t FromPage, int32_t ToPage);                                                               // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnCostChanged
	// void OnCostChanged(int32_t Cost);                                                                                        // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.HandleUserScrolled
	// void HandleUserScrolled(float ScrollAmount);                                                                             // [0x99e78a4] Final|Native|Protected 
};

/// Class /Script/BattlePassBase.FortBattlePassCheckBoxButton
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UFortBattlePassCheckBoxButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5280;

public:
};

/// Class /Script/BattlePassBase.FortBattlePassContext
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UFortBattlePassContext : public UBlueprintContextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UFortPersistentResourceItemDefinition*>) CustomizationPageSeasonalResources                     OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<UFortPersistentResourceItemDefinition*>) AllSeasonalResources                                   OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TMap<ERewardPageType, FSeasonalResourceList>) RewardPageSeasonalResources                              OFFSET(get<T>, {0x58, 80, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassContext.GetSeasonalCurrencies
	// TArray<FSeasonCurrencyMcpData> GetSeasonalCurrencies();                                                                  // [0x99e6814] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetLevelPurchaseDisclaimerText
	// FText GetLevelPurchaseDisclaimerText();                                                                                  // [0x99e6760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetDefaultDisclaimerText
	// FText GetDefaultDisclaimerText();                                                                                        // [0x2a3abd0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetCurrentSeasonNumberAsText
	// FText GetCurrentSeasonNumberAsText(bool bFullText);                                                                      // [0x23f1b44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetCurrentChapterAsText
	// FText GetCurrentChapterAsText(bool bFullText);                                                                           // [0x99e6684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.CanPurchaseBattlePassLevel
	// bool CanPurchaseBattlePassLevel();                                                                                       // [0x99e65a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassResourcesWidgetBase
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortBattlePassResourcesWidgetBase : public UFortGlobalSeasonResourceWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UClass*)                                   ResourceCounterClass                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_ResourceCounters                                   OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassResourcesWidgetBase.ShowResourcesInfoModal
	// void ShowResourcesInfoModal();                                                                                           // [0x99e7ddc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassResourcesWidgetBase.OnShowMoreInfo
	// void OnShowMoreInfo(bool bShouldShowMoreInfo);                                                                           // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassCurrencyPanel
/// Size: 0x0040 (0x0002F8 - 0x000338)
class UFortBattlePassCurrencyPanel : public UFortBattlePassResourcesWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(UHorizontalBox*)                           HBox_BattleStarContainer                                    OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_BattleStar                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UHorizontalBox*)                           HBox_CustomSkinContainer                                    OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_CustomSkin                                             OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassDynamicIcon
/// Size: 0x0048 (0x0002C0 - 0x000308)
class UFortBattlePassDynamicIcon : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(TWeakObjectPtr<UObject*>)                  BattlePassDefaultIcon                                       OFFSET(get<T>, {0x2C0, 32, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  BattlePassOwnedIcon                                         OFFSET(get<T>, {0x2E0, 32, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_BattlePassIcon                                    OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassDynamicIcon.OnBattlePassInfoUpdated
	// void OnBattlePassInfoUpdated(bool bOwnsBattlePass);                                                                      // [0x1d9241c] Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassLevelCount
/// Size: 0x0010 (0x0002C0 - 0x0002D0)
class UFortBattlePassLevelCount : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(UCommonTextBlock*)                         Text_LevelCount                                             OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassPrerequisiteHeader
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortBattlePassPrerequisiteHeader : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(UTextBlock*)                               Text_Prerequisite                                           OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget
/// Size: 0x00C0 (0x000400 - 0x0004C0)
class UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	CMember(UCommonButtonBase*)                        Button_Addition                                             OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BatchAddition                                        OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Subtraction                                          OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BatchSubtraction                                     OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_PurchaseButtons                                    OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UFortHoldableButton*)                      Button_Purchase                                             OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GetVBucks                                            OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ReloadMtx                                            OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UFortBattlePassCheckBoxButton*)            CheckBox_Bundle                                             OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(int32_t)                                   CurrentLevel                                                OFFSET(get<int32_t>, {0x460, 4, 0, 0})
	DMember(bool)                                      bIsOfferActive                                              OFFSET(get<bool>, {0x464, 1, 0, 0})
	DMember(int32_t)                                   CurrentVBucks                                               OFFSET(get<int32_t>, {0x468, 4, 0, 0})
	DMember(int32_t)                                   CurrentBattleStars                                          OFFSET(get<int32_t>, {0x46C, 4, 0, 0})
	DMember(int32_t)                                   BatchNum                                                    OFFSET(get<int32_t>, {0x470, 4, 0, 0})
	DMember(bool)                                      bOfferUnavailable                                           OFFSET(get<bool>, {0x474, 1, 0, 0})
	DMember(int32_t)                                   MaxBundleLevel                                              OFFSET(get<int32_t>, {0x478, 4, 0, 0})
	DMember(int32_t)                                   MaxLevel                                                    OFFSET(get<int32_t>, {0x47C, 4, 0, 0})
	DMember(int32_t)                                   MaxLevelPurchases                                           OFFSET(get<int32_t>, {0x480, 4, 0, 0})
	DMember(int32_t)                                   BundleAmount                                                OFFSET(get<int32_t>, {0x484, 4, 0, 0})
	CMember(UFortItemDefinition*)                      LevelPreviewItem                                            OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         BattleStarData                                              OFFSET(get<T>, {0x490, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnUpdatePageUnlockText
	// void OnUpdatePageUnlockText(FText& PageUnlockText);                                                                      // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnTotalPriceChanged
	// void OnTotalPriceChanged(int32_t NewPrice);                                                                              // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnPurchaseAmountChanged
	// void OnPurchaseAmountChanged(int32_t NewAmount, int32_t LevelsLeft);                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnOfferUnavailable
	// void OnOfferUnavailable();                                                                                               // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnAmountChangeButtonClicked
	// void OnAmountChangeButtonClicked();                                                                                      // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.IsReloadMtxEnabled
	// bool IsReloadMtxEnabled();                                                                                               // [0x99e7a20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseMultiComplete
	// void HandlePurchaseMultiComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, TArray<FString>& OfferIdList); // [0x99e7160] Final|Native|Private|HasOutParms 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseComplete
	// void HandlePurchaseComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, FString OfferId);                 // [0x99e693c] Final|Native|Private|HasOutParms 
};

/// Class /Script/BattlePassBase.FortBattlePassResourceCounter
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortBattlePassResourceCounter : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(UCommonTextBlock*)                         Text_ResourceName                                           OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_ResourceIcon                                      OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ResourceCount                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UFortPersistentResourceItemDefinition*)    CurrentResource                                             OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassRewardGrid
/// Size: 0x00D0 (0x000400 - 0x0004D0)
class UFortBattlePassRewardGrid : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	CMember(UClass*)                                   GridTileClass                                               OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UClass*)                                   GridEmptyTileClass                                          OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FVector2D)                                 GridCellPadding                                             OFFSET(getStruct<T>, {0x478, 16, 0, 0})
	CMember(UFortBattlePassRewardGridHeader*)          PageHeader                                                  OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UGridPanel*)                               GridPanel_Rewards                                           OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UFortBattlePassTileBase*)                  DefaultFocusTile                                            OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonButtonBase*>)        LastFocusedTile                                             OFFSET(get<T>, {0x4A0, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassRewardGrid.OnPageUnselected
	// void OnPageUnselected();                                                                                                 // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGrid.OnPageSelected
	// void OnPageSelected();                                                                                                   // [0x1d9241c] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassRewardGridHeader
/// Size: 0x0008 (0x0002C0 - 0x0002C8)
class UFortBattlePassRewardGridHeader : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/BattlePassBase.FortBattlePassRewardTrack
/// Size: 0x00A0 (0x000400 - 0x0004A0)
class UFortBattlePassRewardTrack : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(UClass*)                                   RewardTileClass                                             OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UClass*)                                   RewardEmptyTileClass                                        OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UClass*)                                   PrerequisiteHeaderClass                                     OFFSET(get<T>, {0x460, 8, 0, 0})
	SMember(FVector2D)                                 GridCellPadding                                             OFFSET(getStruct<T>, {0x468, 16, 0, 0})
	CMember(UGridPanel*)                               GridPanel_Rewards                                           OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UFortBattlePassTileBase*)                  DefaultFocusTile                                            OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonButtonBase*>)        LastFocusedTile                                             OFFSET(get<T>, {0x488, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassRewardTrack.OnPageUnselected
	// void OnPageUnselected();                                                                                                 // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardTrack.OnPageSelected
	// void OnPageSelected();                                                                                                   // [0x1d9241c] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassBase.FortBattlePassTileBase
/// Size: 0x00C0 (0x001530 - 0x0015F0)
class UFortBattlePassTileBase : public UFortHoldableButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5616;

public:
	CMember(ERewardPageType)                           RewardPageType                                              OFFSET(get<T>, {0x1530, 1, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Content                                             OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 TileColors                                                  OFFSET(get<T>, {0x1540, 80, 0, 0})
	SMember(FLinearColor)                              OverlayDimColor                                             OFFSET(getStruct<T>, {0x1590, 16, 0, 0})
	SMember(FVector2D)                                 TileDesiredCellSpan                                         OFFSET(getStruct<T>, {0x15A0, 16, 0, 0})
	DMember(float)                                     UnitHeight                                                  OFFSET(get<float>, {0x15B0, 4, 0, 0})
	DMember(float)                                     UnitWidth                                                   OFFSET(get<float>, {0x15B4, 4, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassTileBase.SetState
	// void SetState(BattlePassTileAvailabilityStates NewState);                                                                // [0x99e7c28] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.SetSize
	// void SetSize(EPageItemTileSize TileSize, FVector2D& CellSpacing);                                                        // [0x99e7b58] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnStateChanged
	// void OnStateChanged(BattlePassTileAvailabilityStates NewState);                                                          // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSizeChanged
	// void OnSizeChanged(FVector2D& NewSize);                                                                                  // [0x1d9241c] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSetTileColors
	// void OnSetTileColors();                                                                                                  // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSetRequiresBattlePass
	// void OnSetRequiresBattlePass(bool bRequiresBP);                                                                          // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnRevealed
	// void OnRevealed();                                                                                                       // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnPeeked
	// void OnPeeked();                                                                                                         // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsOwned
	// bool IsOwned();                                                                                                          // [0x99e7a04] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsLocked
	// bool IsLocked();                                                                                                         // [0x99e79e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsAvailable
	// bool IsAvailable();                                                                                                      // [0x99e79cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.GetState
	// BattlePassTileAvailabilityStates GetState();                                                                             // [0x99e6924] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.AreAnyGrantedItemsEquipped
	// bool AreAnyGrantedItemsEquipped();                                                                                       // [0x99e657c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassTile
/// Size: 0x0070 (0x0015F0 - 0x001660)
class UFortBattlePassTile : public UFortBattlePassTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5728;

public:
	CMember(UFortLazyImage*)                           Image_RewardItem                                            OFFSET(get<T>, {0x1608, 8, 0, 0})
	CMember(UImage*)                                   Image_Currency                                              OFFSET(get<T>, {0x1610, 8, 0, 0})
	DMember(bool)                                      bIsOnBulkBuyMode                                            OFFSET(get<bool>, {0x1618, 1, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassTile.OnUnpreviewed
	// void OnUnpreviewed();                                                                                                    // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnUnhighlighted
	// void OnUnhighlighted();                                                                                                  // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnTilePreviewCycled
	// void OnTilePreviewCycled();                                                                                              // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnSetTrack
	// void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass);                                                                // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnSetCurrencyAndPrice
	// void OnSetCurrencyAndPrice(EBattlePassCurrencyType Currency, int32_t Price);                                             // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnPreviewed
	// void OnPreviewed();                                                                                                      // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnLockedStateUpdated
	// void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed);    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnLockedProgressUpdated
	// void OnLockedProgressUpdated(float Progress, int32_t CurrentlyOwnedRewards, int32_t NeededRewards);                      // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnHighlighted
	// void OnHighlighted();                                                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnAffordabilityChanged
	// void OnAffordabilityChanged(bool bHasEnougCurrency);                                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.IsAffordable
	// bool IsAffordable();                                                                                                     // [0x99e7944] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTile.HasPrerequisites
	// bool HasPrerequisites();                                                                                                 // [0x99e7920] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassBase.FortBattlePassTutorialTooltip
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortBattlePassTutorialTooltip : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UCommonRichTextBlock*)                     Text_Tooltip                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.ShowTooltip
	// void ShowTooltip();                                                                                                      // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.SetTooltipEnabled
	// void SetTooltipEnabled(bool bEnable);                                                                                    // [0x99e7d5c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.SetText
	// void SetText(FText Text);                                                                                                // [0x99e7cac] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.HideTooltip
	// void HideTooltip();                                                                                                      // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassBase.RebootRallyQuestPanel
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class URebootRallyQuestPanel : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Struct /Script/BattlePassBase.BattlePassEntrySelectedParams
/// Size: 0x0058 (0x000000 - 0x000058)
class FBattlePassEntrySelectedParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/BattlePassBase.BattlePassCoverPageParams
/// Size: 0x0048 (0x000000 - 0x000048)
class FBattlePassCoverPageParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonTexts
/// Size: 0x0048 (0x000000 - 0x000048)
class FBattlePassLandingPageButtonTexts : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FText)                                     TileText                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     LandingPageTitleText                                        OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     LandingPageDescriptionText                                  OFFSET(getStruct<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonDisplayBehaviorData
/// Size: 0x0018 (0x000000 - 0x000018)
class FBattlePassLandingPageButtonDisplayBehaviorData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FBattlePassLandingPageButtonDisplayBehavior) DisplayBehavior                                           OFFSET(getStruct<T>, {0x0, 1, 0, 0})
	SMember(FTimespan)                                 BehaviorTimespan                                            OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsDisplayActive                                            OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonDisplayDetails
/// Size: 0x0070 (0x000000 - 0x000070)
class FBattlePassLandingPageButtonDisplayDetails : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FBattlePassLandingPageButtonTexts)         ButtonTexts                                                 OFFSET(getStruct<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bIsBPLocked                                                 OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FText)                                     MissingCosmeticNameText                                     OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FTimespan)                                 DelayTimespan                                               OFFSET(getStruct<T>, {0x68, 8, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageEntryPreviewInfo
/// Size: 0x0090 (0x000000 - 0x000090)
class FBattlePassLandingPageEntryPreviewInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(EBattlePassLandingPageSpecialEntryType)    SpecialEntryType                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<EFortItemType>)                     SubscriptionItemTypesToDisplay                              OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayTag)                              SpecialCharacterVariantChannelToModify                      OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FGameplayTag)                              SpecialCharacterActiveVariantTag                            OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             TemplateIdTileRenderMap                                     OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    PreviewItems                                                OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bEnableDynamicWeeklyPreview                                 OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     TransitionTime                                              OFFSET(get<float>, {0x84, 4, 0, 0})
};

/// Struct /Script/BattlePassBase.SeasonalResourceList
/// Size: 0x0010 (0x000000 - 0x000010)
class FSeasonalResourceList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UFortPersistentResourceItemDefinition*>) SeasonalResources                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/BattlePassBase.EBattlePassLandingPageSpecialEntryType
/// Size: 0x07
enum EBattlePassLandingPageSpecialEntryType : uint8_t
{
	EBattlePassLandingPageSpecialEntryType__None0                                    = 0,
	EBattlePassLandingPageSpecialEntryType__Subscription1                            = 1,
	EBattlePassLandingPageSpecialEntryType__CharacterCustomizer2                     = 2,
	EBattlePassLandingPageSpecialEntryType__SpecialCharacter3                        = 3,
	EBattlePassLandingPageSpecialEntryType__Weekly4                                  = 4,
	EBattlePassLandingPageSpecialEntryType__COUNT5                                   = 5,
	EBattlePassLandingPageSpecialEntryType__EBattlePassLandingPageSpecialEntryType_MAX6 = 6
};

/// Enum /Script/BattlePassBase.FBattlePassLandingPageButtonDisplayBehavior
/// Size: 0x08
enum FBattlePassLandingPageButtonDisplayBehavior : uint8_t
{
	FBattlePassLandingPageButtonDisplayBehavior__None0                               = 0,
	FBattlePassLandingPageButtonDisplayBehavior__MainRewards1                        = 1,
	FBattlePassLandingPageButtonDisplayBehavior__BonusRewards2                       = 2,
	FBattlePassLandingPageButtonDisplayBehavior__WeeklyRewards3                      = 3,
	FBattlePassLandingPageButtonDisplayBehavior__QuestRewards4                       = 4,
	FBattlePassLandingPageButtonDisplayBehavior__Subscription5                       = 5,
	FBattlePassLandingPageButtonDisplayBehavior__Customization6                      = 6,
	FBattlePassLandingPageButtonDisplayBehavior__FBattlePassLandingPageButtonDisplayBehavior_MAX7 = 7
};

/// Enum /Script/BattlePassBase.BattlePassTileAvailabilityStates
/// Size: 0x05
enum BattlePassTileAvailabilityStates : uint8_t
{
	BattlePassTileAvailabilityStates__Invalid0                                       = 0,
	BattlePassTileAvailabilityStates__Available1                                     = 1,
	BattlePassTileAvailabilityStates__Owned2                                         = 2,
	BattlePassTileAvailabilityStates__Locked3                                        = 3,
	BattlePassTileAvailabilityStates__BattlePassTileAvailabilityStates_MAX4          = 4
};

