
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
/// Size: 0x0150 (0x0003E8 - 0x000538)
class UBattlePassLandingPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	CMember(UBattlePassLandingPageButton*)             LastHoveredPageButton                                       OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   LandingPageButtonGroupBase                                  OFFSET(get<T>, {0x510, 8, 0, 0})
};

/// Class /Script/BattlePassBase.BattlePassLandingPageButton
/// Size: 0x0280 (0x001470 - 0x0016F0)
class UBattlePassLandingPageButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5872;

public:
	CMember(EBattlePassView)                           SubPageType                                                 OFFSET(get<T>, {0x1470, 1, 0, 0})
	CMember(EBattlePassFeatures)                       FeatureType                                                 OFFSET(get<T>, {0x1471, 1, 0, 0})
	SMember(FBattlePassLandingPageEntryPreviewInfo)    PreviewInfo                                                 OFFSET(get<T>, {0x1478, 144, 0, 0})
	DMember(bool)                                      bNeedsBattlePass                                            OFFSET(get<bool>, {0x1508, 1, 0, 0})
	CMember(UFortChallengeBundleScheduleDefinition*)   DelayQuestSchedule                                          OFFSET(get<T>, {0x1510, 8, 0, 0})
	DMember(int32_t)                                   DelayDaysSinceSeasonStart                                   OFFSET(get<int32_t>, {0x1518, 4, 0, 0})
	CMember(UFortItemDefinition*)                      RequiredItem                                                OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UFortBangWrapper_NUI*)                     BangWrapper                                                 OFFSET(get<T>, {0x1528, 8, 0, 0})
	DMember(bool)                                      bUsesTelemetry                                              OFFSET(get<bool>, {0x1530, 1, 0, 0})
	SMember(FIntPoint)                                 Telemetry_Size                                              OFFSET(get<T>, {0x1534, 8, 0, 0})
	SMember(FIntPoint)                                 Telemetry_Position                                          OFFSET(get<T>, {0x153C, 8, 0, 0})
	SMember(FBattlePassLandingPageButtonTexts)         DefaultTexts                                                OFFSET(get<T>, {0x1548, 72, 0, 0})
	SMember(FBattlePassLandingPageButtonTexts)         DelayedTexts                                                OFFSET(get<T>, {0x1590, 72, 0, 0})
	SMember(FBattlePassLandingPageButtonTexts)         SubscribedTexts                                             OFFSET(get<T>, {0x15D8, 72, 0, 0})
	SMember(FBattlePassLandingPageButtonDisplayBehaviorData) DisplayBehaviorData                                   OFFSET(get<T>, {0x1620, 24, 0, 0})
};



	/// Functions
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSubscriptionTextureLoaded
	// void OnSubscriptionTextureLoaded(UTexture2D* Texture);                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSubscriptionOwnershipUpdated
	// void OnSubscriptionOwnershipUpdated(bool bOwnsSubsciption);                                                              // [0x1ebf994] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnShowDisplayDetails
	// void OnShowDisplayDetails();                                                                                             // [0x1ebf994] RequiredAPI|Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnSetTileImageMaterial
	// void OnSetTileImageMaterial(UMaterialInstance* Material);                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.OnDisplayDetailsUpdated
	// void OnDisplayDetailsUpdated(FBattlePassLandingPageButtonDisplayDetails& NewDisplayDetails);                             // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassBase.BattlePassLandingPageButton.GetBattlePassDisplayDetails
	// FBattlePassLandingPageButtonDisplayDetails GetBattlePassDisplayDetails();                                                // [0x211849c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/BattlePassBase.BattlePassRewardPageBase
/// Size: 0x0118 (0x0003E8 - 0x000500)
class UBattlePassRewardPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

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
/// Size: 0x00B8 (0x0002A8 - 0x000360)
class UFortBattlePassCustomSkinCategoryTile : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(UProgressBar*)                             ProgressBar                                                 OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UFortDynamicEntryBox*)                     FortDynamicEntryBox_Items                                   OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(URichTextBlock*)                           Text_CategoryTitle                                          OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortBattlePassTile*)                      PreviewedTile                                               OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(int32_t)                                   OwnedRewards                                                OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
};



	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.SetPreviewedTile
	// void SetPreviewedTile(int32_t Index);                                                                                    // [0x9891a58] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnOwnedTilesUpdated
	// void OnOwnedTilesUpdated(int32_t CurrentlyOwnedRewards, int32_t TotalRewards, float CategoryProgress);                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedStateChanged
	// void OnLockedStateChanged(bool bCategoryLocked);                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.OnLockedProgressUpdated
	// void OnLockedProgressUpdated(int32_t CurrentlyOwnedBeforeCategory, int32_t TotalRewardsBeforeCategory, float LockedProgress); // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile.FocusTile
	// void FocusTile(int32_t Index);                                                                                           // [0x9890560] Final|Native|Public|BlueprintCallable 
/// Class /Script/BattlePassBase.FortBattlePassCustomSkinPageBase
/// Size: 0x01C8 (0x0003E8 - 0x0005B0)
class UFortBattlePassCustomSkinPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(UScrollBox*)                               ScrollBox_Categories                                        OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UFortDynamicEntryBox*)                     FortDynamicEntryBox_Categories                              OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UBattlePassEnabledInputData*)              EquipEnabledData                                            OFFSET(get<T>, {0x5A0, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassBulkBuyPageBase
/// Size: 0x01A0 (0x0003E8 - 0x000588)
class UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	CMember(UCommonButtonBase*)                        Button_Addition                                             OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Subtraction                                          OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         DynamicEntryBox_TilesEntries                                OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_BottomButtons                                      OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_BuyLevels                                            OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_ClaimReward                                          OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UWidget*)                                  Widget_LevelUpMessagePremium                                OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         SeasonData_BattleStar                                       OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UAthenaSeasonItemDefinition*)              SeasonItemDefinition                                        OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UFortBattlePassTile*)                      FocusedReward                                               OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Pages                                             OFFSET(get<T>, {0x580, 8, 0, 0})
};



	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnRewardCountChanged
	// void OnRewardCountChanged(int32_t Count);                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnPageRangeChanged
	// void OnPageRangeChanged(int32_t FromPage, int32_t ToPage);                                                               // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.OnCostChanged
	// void OnCostChanged(int32_t Cost);                                                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassBulkBuyPageBase.HandleUserScrolled
	// void HandleUserScrolled(float ScrollAmount);                                                                             // [0x9891850] Final|Native|Protected 
/// Class /Script/BattlePassBase.FortBattlePassCheckBoxButton
/// Size: 0x0010 (0x001470 - 0x001480)
class UFortBattlePassCheckBoxButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5248;

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
};



	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassContext.GetSeasonalCurrencies
	// TArray<FSeasonCurrencyMcpData> GetSeasonalCurrencies();                                                                  // [0x98907c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetLevelPurchaseDisclaimerText
	// FText GetLevelPurchaseDisclaimerText();                                                                                  // [0x98906f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetDefaultDisclaimerText
	// FText GetDefaultDisclaimerText();                                                                                        // [0x27b3ad8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetCurrentSeasonNumberAsText
	// FText GetCurrentSeasonNumberAsText(bool bFullText);                                                                      // [0x25b22c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.GetCurrentChapterAsText
	// FText GetCurrentChapterAsText(bool bFullText);                                                                           // [0x9890618] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassContext.CanPurchaseBattlePassLevel
	// bool CanPurchaseBattlePassLevel();                                                                                       // [0x989053c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/BattlePassBase.FortBattlePassResourcesWidgetBase
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortBattlePassResourcesWidgetBase : public UFortGlobalSeasonResourceWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UClass*)                                   ResourceCounterClass                                        OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_ResourceCounters                                   OFFSET(get<T>, {0x2D8, 8, 0, 0})
};



	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassResourcesWidgetBase.ShowResourcesInfoModal
	// void ShowResourcesInfoModal();                                                                                           // [0x9891d88] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassResourcesWidgetBase.OnShowMoreInfo
	// void OnShowMoreInfo(bool bShouldShowMoreInfo);                                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
/// Class /Script/BattlePassBase.FortBattlePassCurrencyPanel
/// Size: 0x0040 (0x0002E0 - 0x000320)
class UFortBattlePassCurrencyPanel : public UFortBattlePassResourcesWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UHorizontalBox*)                           HBox_BattleStarContainer                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_BattleStar                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HBox_CustomSkinContainer                                    OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_CustomSkin                                             OFFSET(get<T>, {0x2F8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassDynamicIcon
/// Size: 0x0048 (0x0002A8 - 0x0002F0)
class UFortBattlePassDynamicIcon : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(TWeakObjectPtr<UObject*>)                  BattlePassDefaultIcon                                       OFFSET(get<T>, {0x2A8, 32, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  BattlePassOwnedIcon                                         OFFSET(get<T>, {0x2C8, 32, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_BattlePassIcon                                    OFFSET(get<T>, {0x2E8, 8, 0, 0})
};



	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassDynamicIcon.OnBattlePassInfoUpdated
	// void OnBattlePassInfoUpdated(bool bOwnsBattlePass);                                                                      // [0x1ebf994] Event|Protected|BlueprintEvent|Const 
/// Class /Script/BattlePassBase.FortBattlePassLevelCount
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UFortBattlePassLevelCount : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(UCommonTextBlock*)                         Text_LevelCount                                             OFFSET(get<T>, {0x2A8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassPrerequisiteHeader
/// Size: 0x0008 (0x0002A8 - 0x0002B0)
class UFortBattlePassPrerequisiteHeader : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(UTextBlock*)                               Text_Prerequisite                                           OFFSET(get<T>, {0x2A8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget
/// Size: 0x00C0 (0x0003E8 - 0x0004A8)
class UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	CMember(UCommonButtonBase*)                        Button_Addition                                             OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BatchAddition                                        OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Subtraction                                          OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BatchSubtraction                                     OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_PurchaseButtons                                    OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UFortHoldableButton*)                      Button_Purchase                                             OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GetVBucks                                            OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ReloadMtx                                            OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UFortBattlePassCheckBoxButton*)            CheckBox_Bundle                                             OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           OFFSET(get<T>, {0x440, 8, 0, 0})
	DMember(int32_t)                                   CurrentLevel                                                OFFSET(get<int32_t>, {0x448, 4, 0, 0})
	DMember(bool)                                      bIsOfferActive                                              OFFSET(get<bool>, {0x44C, 1, 0, 0})
	DMember(int32_t)                                   CurrentVBucks                                               OFFSET(get<int32_t>, {0x450, 4, 0, 0})
	DMember(int32_t)                                   CurrentBattleStars                                          OFFSET(get<int32_t>, {0x454, 4, 0, 0})
	DMember(int32_t)                                   BatchNum                                                    OFFSET(get<int32_t>, {0x458, 4, 0, 0})
	DMember(bool)                                      bOfferUnavailable                                           OFFSET(get<bool>, {0x45C, 1, 0, 0})
	DMember(int32_t)                                   MaxBundleLevel                                              OFFSET(get<int32_t>, {0x460, 4, 0, 0})
	DMember(int32_t)                                   MaxLevel                                                    OFFSET(get<int32_t>, {0x464, 4, 0, 0})
	DMember(int32_t)                                   MaxLevelPurchases                                           OFFSET(get<int32_t>, {0x468, 4, 0, 0})
	DMember(int32_t)                                   BundleAmount                                                OFFSET(get<int32_t>, {0x46C, 4, 0, 0})
	CMember(UFortItemDefinition*)                      LevelPreviewItem                                            OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         BattleStarData                                              OFFSET(get<T>, {0x478, 8, 0, 0})
};



	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnUpdatePageUnlockText
	// void OnUpdatePageUnlockText(FText& PageUnlockText);                                                                      // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnTotalPriceChanged
	// void OnTotalPriceChanged(int32_t NewPrice);                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnPurchaseAmountChanged
	// void OnPurchaseAmountChanged(int32_t NewAmount, int32_t LevelsLeft);                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnOfferUnavailable
	// void OnOfferUnavailable();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.OnAmountChangeButtonClicked
	// void OnAmountChangeButtonClicked();                                                                                      // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.IsReloadMtxEnabled
	// bool IsReloadMtxEnabled();                                                                                               // [0x98919cc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseMultiComplete
	// void HandlePurchaseMultiComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, TArray<FString>& OfferIdList); // [0x989110c] Final|Native|Private|HasOutParms 
	// Function /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget.HandlePurchaseComplete
	// void HandlePurchaseComplete(bool bSuccess, TArray<FPurchasedItemInfo>& PurchasedItems, FString OfferId);                 // [0x98908e8] Final|Native|Private|HasOutParms 
/// Class /Script/BattlePassBase.FortBattlePassResourceCounter
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UFortBattlePassResourceCounter : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonTextBlock*)                         Text_ResourceName                                           OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_ResourceIcon                                      OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ResourceCount                                          OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UFortPersistentResourceItemDefinition*)    CurrentResource                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassRewardGrid
/// Size: 0x00D0 (0x0003E8 - 0x0004B8)
class UFortBattlePassRewardGrid : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	CMember(UClass*)                                   GridTileClass                                               OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UClass*)                                   GridEmptyTileClass                                          OFFSET(get<T>, {0x458, 8, 0, 0})
	SMember(FVector2D)                                 GridCellPadding                                             OFFSET(get<T>, {0x460, 16, 0, 0})
	CMember(UFortBattlePassRewardGridHeader*)          PageHeader                                                  OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UGridPanel*)                               GridPanel_Rewards                                           OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UFortBattlePassTileBase*)                  DefaultFocusTile                                            OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonButtonBase*>)        LastFocusedTile                                             OFFSET(get<T>, {0x488, 8, 0, 0})
};



	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassRewardGrid.OnPageUnselected
	// void OnPageUnselected();                                                                                                 // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardGrid.OnPageSelected
	// void OnPageSelected();                                                                                                   // [0x1ebf994] Event|Public|BlueprintEvent 
/// Class /Script/BattlePassBase.FortBattlePassRewardGridHeader
/// Size: 0x0008 (0x0002A8 - 0x0002B0)
class UFortBattlePassRewardGridHeader : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Script/BattlePassBase.FortBattlePassRewardTrack
/// Size: 0x00A0 (0x0003E8 - 0x000488)
class UFortBattlePassRewardTrack : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	CMember(UClass*)                                   RewardTileClass                                             OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UClass*)                                   RewardEmptyTileClass                                        OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UClass*)                                   PrerequisiteHeaderClass                                     OFFSET(get<T>, {0x448, 8, 0, 0})
	SMember(FVector2D)                                 GridCellPadding                                             OFFSET(get<T>, {0x450, 16, 0, 0})
	CMember(UGridPanel*)                               GridPanel_Rewards                                           OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UFortBattlePassTileBase*)                  DefaultFocusTile                                            OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonButtonBase*>)        LastFocusedTile                                             OFFSET(get<T>, {0x470, 8, 0, 0})
};



	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassRewardTrack.OnPageUnselected
	// void OnPageUnselected();                                                                                                 // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassRewardTrack.OnPageSelected
	// void OnPageSelected();                                                                                                   // [0x1ebf994] Event|Public|BlueprintEvent 
/// Class /Script/BattlePassBase.FortBattlePassTileBase
/// Size: 0x00C0 (0x001510 - 0x0015D0)
class UFortBattlePassTileBase : public UFortHoldableButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5584;

public:
	CMember(ERewardPageType)                           RewardPageType                                              OFFSET(get<T>, {0x1510, 1, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Content                                             OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 TileColors                                                  OFFSET(get<T>, {0x1520, 80, 0, 0})
	SMember(FLinearColor)                              OverlayDimColor                                             OFFSET(get<T>, {0x1570, 16, 0, 0})
	SMember(FVector2D)                                 TileDesiredCellSpan                                         OFFSET(get<T>, {0x1580, 16, 0, 0})
	DMember(float)                                     UnitHeight                                                  OFFSET(get<float>, {0x1590, 4, 0, 0})
	DMember(float)                                     UnitWidth                                                   OFFSET(get<float>, {0x1594, 4, 0, 0})
};



	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassTileBase.SetState
	// void SetState(BattlePassTileAvailabilityStates NewState);                                                                // [0x9891bd4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.SetSize
	// void SetSize(EPageItemTileSize TileSize, FVector2D& CellSpacing);                                                        // [0x9891b04] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnStateChanged
	// void OnStateChanged(BattlePassTileAvailabilityStates NewState);                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSizeChanged
	// void OnSizeChanged(FVector2D& NewSize);                                                                                  // [0x1ebf994] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSetTileColors
	// void OnSetTileColors();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnSetRequiresBattlePass
	// void OnSetRequiresBattlePass(bool bRequiresBP);                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnRevealed
	// void OnRevealed();                                                                                                       // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.OnPeeked
	// void OnPeeked();                                                                                                         // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsOwned
	// bool IsOwned();                                                                                                          // [0x98919b0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsLocked
	// bool IsLocked();                                                                                                         // [0x9891994] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.IsAvailable
	// bool IsAvailable();                                                                                                      // [0x9891978] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.GetState
	// BattlePassTileAvailabilityStates GetState();                                                                             // [0x98908d0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTileBase.AreAnyGrantedItemsEquipped
	// bool AreAnyGrantedItemsEquipped();                                                                                       // [0x9890510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/BattlePassBase.FortBattlePassTile
/// Size: 0x0070 (0x0015D0 - 0x001640)
class UFortBattlePassTile : public UFortBattlePassTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5696;

public:
	CMember(UFortLazyImage*)                           Image_RewardItem                                            OFFSET(get<T>, {0x15E8, 8, 0, 0})
	CMember(UImage*)                                   Image_Currency                                              OFFSET(get<T>, {0x15F0, 8, 0, 0})
	DMember(bool)                                      bIsOnBulkBuyMode                                            OFFSET(get<bool>, {0x15F8, 1, 0, 0})
};



	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassTile.OnUnpreviewed
	// void OnUnpreviewed();                                                                                                    // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnUnhighlighted
	// void OnUnhighlighted();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnTilePreviewCycled
	// void OnTilePreviewCycled();                                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnSetTrack
	// void OnSetTrack(bool bIsFreeTrack, bool bOwnsBattlePass);                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnSetCurrencyAndPrice
	// void OnSetCurrencyAndPrice(EBattlePassCurrencyType Currency, int32_t Price);                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnPreviewed
	// void OnPreviewed();                                                                                                      // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnLockedStateUpdated
	// void OnLockedStateUpdated(bool OwnsBattlePass, bool ParentUnlocked, bool HasRemainingPrerequisites, bool bIsDelayed);    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnLockedProgressUpdated
	// void OnLockedProgressUpdated(float Progress, int32_t CurrentlyOwnedRewards, int32_t NeededRewards);                      // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnHighlighted
	// void OnHighlighted();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.OnAffordabilityChanged
	// void OnAffordabilityChanged(bool bHasEnougCurrency);                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTile.IsAffordable
	// bool IsAffordable();                                                                                                     // [0x98918f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassBase.FortBattlePassTile.HasPrerequisites
	// bool HasPrerequisites();                                                                                                 // [0x98918cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/BattlePassBase.FortBattlePassTutorialTooltip
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortBattlePassTutorialTooltip : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UCommonRichTextBlock*)                     Text_Tooltip                                                OFFSET(get<T>, {0x2D0, 8, 0, 0})
};



	/// Functions
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.ShowTooltip
	// void ShowTooltip();                                                                                                      // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.SetTooltipEnabled
	// void SetTooltipEnabled(bool bEnable);                                                                                    // [0x9891d08] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.SetText
	// void SetText(FText Text);                                                                                                // [0x9891c58] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassBase.FortBattlePassTutorialTooltip.HideTooltip
	// void HideTooltip();                                                                                                      // [0x1ebf994] Event|Protected|BlueprintEvent 
/// Class /Script/BattlePassBase.RebootRallyQuestPanel
/// Size: 0x0000 (0x0002A8 - 0x0002A8)
class URebootRallyQuestPanel : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
};

/// Struct /Script/BattlePassBase.BattlePassEntrySelectedParams
/// Size: 0x0058 (0x000000 - 0x000058)
class FBattlePassEntrySelectedParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Struct /Script/BattlePassBase.BattlePassCoverPageParams
/// Size: 0x0048 (0x000000 - 0x000048)
class FBattlePassCoverPageParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonTexts
/// Size: 0x0048 (0x000000 - 0x000048)
class FBattlePassLandingPageButtonTexts : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FText)                                     TileText                                                    OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     LandingPageTitleText                                        OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     LandingPageDescriptionText                                  OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonDisplayBehaviorData
/// Size: 0x0018 (0x000000 - 0x000018)
class FBattlePassLandingPageButtonDisplayBehaviorData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FBattlePassLandingPageButtonDisplayBehavior) DisplayBehavior                                           OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FTimespan)                                 BehaviorTimespan                                            OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsDisplayActive                                            OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonDisplayDetails
/// Size: 0x0070 (0x000000 - 0x000070)
class FBattlePassLandingPageButtonDisplayDetails : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FBattlePassLandingPageButtonTexts)         ButtonTexts                                                 OFFSET(get<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bIsBPLocked                                                 OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FText)                                     MissingCosmeticNameText                                     OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FTimespan)                                 DelayTimespan                                               OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageEntryPreviewInfo
/// Size: 0x0090 (0x000000 - 0x000090)
class FBattlePassLandingPageEntryPreviewInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(EBattlePassLandingPageSpecialEntryType)    SpecialEntryType                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<EFortItemType>)                     SubscriptionItemTypesToDisplay                              OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayTag)                              SpecialCharacterVariantChannelToModify                      OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FGameplayTag)                              SpecialCharacterActiveVariantTag                            OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             TemplateIdTileRenderMap                                     OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    PreviewItems                                                OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bEnableDynamicWeeklyPreview                                 OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     TransitionTime                                              OFFSET(get<float>, {0x84, 4, 0, 0})
};

/// Struct /Script/BattlePassBase.SeasonalResourceList
/// Size: 0x0010 (0x000000 - 0x000010)
class FSeasonalResourceList : public MDKStruct
{ 
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

