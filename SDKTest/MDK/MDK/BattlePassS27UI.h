
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BattlePassBase
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/BattlePassS27UI.BattlePassBulkBuyPageS27
/// Size: 0x0000 (0x0005A0 - 0x0005A0)
class UBattlePassBulkBuyPageS27 : public UFortBattlePassBulkBuyPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
};

/// Class /Script/BattlePassS27UI.BattlePassLandingPageS27
/// Size: 0x0068 (0x000550 - 0x0005B8)
class UBattlePassLandingPageS27 : public UBattlePassLandingPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	CMember(UBattlePassLandingPageButton*)             Button_Rewards                                              OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UBattlePassLandingPageButton*)             Button_CharacterCustomizer                                  OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UBattlePassLandingPageButton*)             Button_BonusRewards                                         OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UBattlePassLandingPageButton*)             Button_Quests                                               OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UBattlePassLandingPageButton*)             Button_JoinSubscription                                     OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UBattlePassLandingPageButton*)             Button_WeeklyRewards                                        OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SeasonNumber                                           OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         SeasonData_BattleStar                                       OFFSET(get<T>, {0x588, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS27UI.BattlePassLandingPageS27.OnBattlePassSubscriptionAllowed
	// void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed);                                                         // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassS27UI.BattlePassRewardPageS27
/// Size: 0x00A0 (0x000518 - 0x0005B8)
class UBattlePassRewardPageS27 : public UBattlePassRewardPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	CMember(UClass*)                                   RewardsTrackClass                                           OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UFortBattlePassTile*)                      FocusedReward                                               OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(TArray<UFortBattlePassRewardTrack*>)       TrackPages                                                  OFFSET(get<T>, {0x528, 16, 0, 0})
	CMember(ERewardPageType)                           RewardPageType                                              OFFSET(get<T>, {0x53C, 1, 0, 0})
	DMember(int32_t)                                   HoldTileTooltip_ClaimedRewardsToHide                        OFFSET(get<int32_t>, {0x540, 4, 0, 0})
	DMember(int32_t)                                   HoldTileTooltip_ClaimedBattlePassToHide                     OFFSET(get<int32_t>, {0x544, 4, 0, 0})
	DMember(int32_t)                                   HoldTileTooltip_RequiredBattleStarsToShow                   OFFSET(get<int32_t>, {0x548, 4, 0, 0})
	DMember(int32_t)                                   LevelRequirementUnlockTooltip_RequiredLevel                 OFFSET(get<int32_t>, {0x54C, 4, 0, 0})
	DMember(int32_t)                                   ClaimAllRewardsTooltip_RequiredLevelToShow                  OFFSET(get<int32_t>, {0x550, 4, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  Switcher_RewardTracks                                       OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS27*)        TutorialTooltip_LevelRequirementUnlock                      OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS27*)        TutorialTooltip_ClaimAllRewards                             OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS27*)        TutorialTooltip_HoldTile                                    OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         SeasonData_BattleStar                                       OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UBattlePassBulkBuyInputData*)              BulkBuyInputData                                            OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_NextPage                                             OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PreviousPage                                         OFFSET(get<T>, {0x590, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS27UI.BattlePassRewardPageS27.OnPageChanged
	// void OnPageChanged(int32_t PageNumber, int32_t RewardPageTotal);                                                         // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassRewardPageS27.OnLoadingScreenSelectedChanged
	// void OnLoadingScreenSelectedChanged(bool bIsSelected);                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassRewardPageS27.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType InputType);                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassRewardPageS27.OnInitForPageType
	// void OnInitForPageType(ERewardPageType InRewardPageType);                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassRewardPageS27.HandleRewardTracksBoundaryNavigation
	// UWidget* HandleRewardTracksBoundaryNavigation(EUINavigation InNavigation);                                               // [0x9f27564] Final|Native|Private 
	// Function /Script/BattlePassS27UI.BattlePassRewardPageS27.GetRewardPageBackgroundData
	// FVaultWorldBackgroundData GetRewardPageBackgroundData();                                                                 // [0x9f27348] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassS27UI.BattlePassScreenS27
/// Size: 0x04E0 (0x0008F0 - 0x000DD0)
class UBattlePassScreenS27 : public UBattlePassScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3536;

public:
	CMember(UClass*)                                   ResourcePurchaseScreenClass                                 OFFSET(get<T>, {0x8F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Close                                                OFFSET(get<T>, {0x900, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_TouchClose                                           OFFSET(get<T>, {0x908, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ToggleViewDetails                                    OFFSET(get<T>, {0x910, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ReplayTrailer                                        OFFSET(get<T>, {0x918, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ReplayTrailer_Mobile                                 OFFSET(get<T>, {0x920, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowAbout                                            OFFSET(get<T>, {0x928, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowAbout_Mobile                                     OFFSET(get<T>, {0x930, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowAboutCustomization                               OFFSET(get<T>, {0x938, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowAboutCustomization_Mobile                        OFFSET(get<T>, {0x940, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BulkBuyRewards                                       OFFSET(get<T>, {0x948, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageComplete                                         OFFSET(get<T>, {0x950, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GiftBattlePass                                       OFFSET(get<T>, {0x958, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                VisibilitySwitcher_PlatformBasedButtons                     OFFSET(get<T>, {0x960, 8, 0, 0})
	CMember(UFortBattlePassResourcesWidgetBase*)       BattlePassCurrencyPanel                                     OFFSET(get<T>, {0x968, 8, 0, 0})
	CMember(UAthenaExclusiveRewardBanner*)             AthenaExclusiveRewardBanner                                 OFFSET(get<T>, {0x970, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Description                                            OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemName                                               OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(UAthenaRewardItemTypeRarityTag*)           ItemRewardTag                                               OFFSET(get<T>, {0x988, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SetDetails                                             OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_PrerequisiteInfo                                   OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Prerequisite                                           OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(UWidget*)                                  Widget_PrerequisiteProgress                                 OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(UWidget*)                                  Widget_LevelUpMessageFree                                   OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(UWidget*)                                  Widget_LevelUpMessagePremium                                OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(UWidget*)                                  Widget_CustomResourceMessage                                OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_PrimaryAction                                      OFFSET(get<T>, {0x9C8, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_BuyLevels                                            OFFSET(get<T>, {0x9D0, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_BuyBattlePass                                        OFFSET(get<T>, {0x9D8, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_ClaimReward                                          OFFSET(get<T>, {0x9E0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ViewQuests                                           OFFSET(get<T>, {0x9E8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PreviewLoadingScreen                                 OFFSET(get<T>, {0x9F0, 8, 0, 0})
	CMember(UBorder*)                                  Tag_RequiresBP                                              OFFSET(get<T>, {0x9F8, 8, 0, 0})
	CMember(UBorder*)                                  Tag_PageLocked                                              OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UBorder*)                                  Tag_BaseItem                                                OFFSET(get<T>, {0xA08, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Prerequisite                                            OFFSET(get<T>, {0xA10, 8, 0, 0})
	CMember(UBorder*)                                  Tag_CompletePage                                            OFFSET(get<T>, {0xA18, 8, 0, 0})
	CMember(UBorder*)                                  Tag_NotEnough_Currency                                      OFFSET(get<T>, {0xA20, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Cost                                                    OFFSET(get<T>, {0xA28, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Owned                                                   OFFSET(get<T>, {0xA30, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Delayed                                                 OFFSET(get<T>, {0xA38, 8, 0, 0})
	SMember(FGameplayTag)                              QuestCategoryParentTag                                      OFFSET(getStruct<T>, {0xA40, 4, 0, 0})
	CMember(UClass*)                                   PreviewLoadingScreenWidgetClass                             OFFSET(get<T>, {0xA48, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         SeasonData_BattleStar                                       OFFSET(get<T>, {0xAA8, 8, 0, 0})
	CMember(UAthenaSeasonItemEntryBase*)               CurrentSelectedEntry                                        OFFSET(get<T>, {0xAB0, 8, 0, 0})
	CMember(TArray<EBattlePassView>)                   SwitcherSubPageTypes                                        OFFSET(get<T>, {0xAB8, 16, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                VisibilitySwitcher_SubPage                                  OFFSET(get<T>, {0xAC8, 8, 0, 0})
	CMember(UFortItemDefinition*)                      SeasonalBaseCustomizationItem                               OFFSET(get<T>, {0xBD0, 8, 0, 0})
	DMember(bool)                                      bHasSubscription                                            OFFSET(get<bool>, {0xBD8, 1, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS27*)        TutorialTooltip_BattleStars                                 OFFSET(get<T>, {0xBE0, 8, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS27*)        TutorialTooltip_StylePoints                                 OFFSET(get<T>, {0xBE8, 8, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       OFFSET(get<T>, {0xBF0, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OverviewShowAnimationFinished
	// void OverviewShowAnimationFinished();                                                                                    // [0x2b7b1c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnUpdateStatusBar
	// void OnUpdateStatusBar(FText& StatusText, EBattlePassStatusBarTypeS27& BarType);                                         // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnUpdateBattlePassRequiredBar
	// void OnUpdateBattlePassRequiredBar(bool bPassRequiredVisible);                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bTransitionForward);                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnSetWeeklyRewardsInfo
	// void OnSetWeeklyRewardsInfo(FTimespan& DelayTimespan, int32_t AvailableRewards, int32_t OwnedRewards, int32_t TotalRewards, int32_t AvailablePages, int32_t CompletedPages, int32_t TotalPages); // [0x101681c] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnSetWarningToolTip
	// void OnSetWarningToolTip(ERewardWarningTooltipType27& WarningTooltipType, FText& Description);                           // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnSetResourcePrice
	// void OnSetResourcePrice(int32_t Cost, UFortPersistentResourceItemDefinition* PersistentResource);                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnSetQuestRewardsInfo
	// void OnSetQuestRewardsInfo(FTimespan& DelayTimespan, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages); // [0x101681c] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnSetPrerequisiteInfo
	// void OnSetPrerequisiteInfo(FText& Description, int32_t CurrentAmount, int32_t NeededAmount, EBattlePassRewardPrerequisiteType PrerequisiteType, bool bShowPrerequisiteLock); // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnSetItemPrice
	// void OnSetItemPrice(int32_t Cost, EBattlePassCurrencyType CurrencyType);                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnSetCustomizationRewardsInfo
	// void OnSetCustomizationRewardsInfo(FTimespan& DelayTimespan, FCustomizationRewardInfo& RewardInfo);                      // [0x101681c] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnSetCrewInfo
	// void OnSetCrewInfo(bool bIsNextMonthRewards, FText& MonthText, FTimespan& NextMonthlyRewardTimespan, FText& CharacterDisplayName, FText& CharacterDescription); // [0x101681c] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnSetCoverPageData
	// void OnSetCoverPageData(FText& Title, FText& Description, bool bPageComplete);                                           // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnSetBonusRewardsInfo
	// void OnSetBonusRewardsInfo(bool bIsUnlocked, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages, int32_t ClaimedOutfits, int32_t TotalOutfits); // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnSetBaseRewardsInfo
	// void OnSetBaseRewardsInfo(int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages);       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnItemDelayed
	// void OnItemDelayed(FTimespan Delay);                                                                                     // [0x101681c] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnInsufficientResource
	// void OnInsufficientResource(UFortPersistentResourceItemDefinition* PersistentResource);                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnInsufficientFunds
	// void OnInsufficientFunds(EBattlePassCurrencyType CurrencyType);                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnBattlePassOwned
	// void OnBattlePassOwned();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.OnBattlePassGiftingAllowed
	// void OnBattlePassGiftingAllowed(bool bGiftingAllowed);                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.IsSeasonalCustomizationItemOwned
	// bool IsSeasonalCustomizationItemOwned();                                                                                 // [0x9f2761c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.HandleSwitcherVisibilityShown
	// void HandleSwitcherVisibilityShown();                                                                                    // [0x9f275f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.HandleFullScreenMapToggled
	// void HandleFullScreenMapToggled(bool bMapVisible);                                                                       // [0x9f274e4] Final|Native|Private 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.HandleClaimRewardComplete
	// void HandleClaimRewardComplete(bool bSuccess, TArray<FString>& OfferTemplateIdList);                                     // [0x9f273f8] Final|Native|Private|HasOutParms 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.GoBackOneScreen
	// void GoBackOneScreen();                                                                                                  // [0x9f273e4] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS27UI.BattlePassScreenS27.GetQuestPageDelay
	// FTimespan GetQuestPageDelay();                                                                                           // [0x9f2731c] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassS27UI.FortBattlePassCustomSkinPageS27
/// Size: 0x0018 (0x0005C8 - 0x0005E0)
class UFortBattlePassCustomSkinPageS27 : public UFortBattlePassCustomSkinPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FString)                                   ClaimBaseItemTooltip_ClaimCheckTemplateId                   OFFSET(getStruct<T>, {0x5C8, 16, 0, 0})
	CMember(UFortBattlePassTutorialTooltip*)           TutorialTooltip_ClaimBaseItem                               OFFSET(get<T>, {0x5D8, 8, 0, 0})
};

/// Class /Script/BattlePassS27UI.FortBattlePassResourcesWidgetS27
/// Size: 0x0020 (0x0002F8 - 0x000318)
class UFortBattlePassResourcesWidgetS27 : public UFortBattlePassResourcesWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UCommonTextBlock*)                         Text_BattleStarsAmount                                      OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_StylePointsAmount                                      OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UBorder*)                                  Border_StylePointsRewardsTag                                OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UBorder*)                                  Border_BattleStarsRewardsTag                                OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS27UI.FortBattlePassResourcesWidgetS27.OnStylePointsRewardsSet
	// void OnStylePointsRewardsSet(int32_t Rewards);                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.FortBattlePassResourcesWidgetS27.OnBattleStarRewardsSet
	// void OnBattleStarRewardsSet(int32_t Rewards);                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassS27UI.FortBattlePassTutorialTooltipS27
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortBattlePassTutorialTooltipS27 : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UCommonRichTextBlock*)                     Text_Tooltip                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS27UI.FortBattlePassTutorialTooltipS27.ShowTooltip
	// void ShowTooltip();                                                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS27UI.FortBattlePassTutorialTooltipS27.SetText
	// void SetText(FText Text);                                                                                                // [0x9f085e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS27UI.FortBattlePassTutorialTooltipS27.HideTooltip
	// void HideTooltip();                                                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Struct /Script/BattlePassS27UI.CustomizationRewardInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FCustomizationRewardInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   OwnedRewards                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TotalRewards                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   CompletedPatterns                                           OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   TotalPatterns                                               OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   CompletedBanners                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   TotalBanners                                                OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Enum /Script/BattlePassS27UI.EBattlePassStatusBarTypeS27
/// Size: 0x08
enum EBattlePassStatusBarTypeS27 : uint8_t
{
	EBattlePassStatusBarTypeS27__Hidden0                                             = 0,
	EBattlePassStatusBarTypeS27__Prerequisite1                                       = 1,
	EBattlePassStatusBarTypeS27__Delayed2                                            = 2,
	EBattlePassStatusBarTypeS27__Unclaimable3                                        = 3,
	EBattlePassStatusBarTypeS27__Claimable4                                          = 4,
	EBattlePassStatusBarTypeS27__Special5                                            = 5,
	EBattlePassStatusBarTypeS27__Owned6                                              = 6,
	EBattlePassStatusBarTypeS27__EBattlePassStatusBarTypeS27_MAX7                    = 7
};

/// Enum /Script/BattlePassS27UI.ERewardWarningTooltipType27
/// Size: 0x07
enum ERewardWarningTooltipType27 : uint8_t
{
	ERewardWarningTooltipType27__None0                                               = 0,
	ERewardWarningTooltipType27__Custom1                                             = 1,
	ERewardWarningTooltipType27__AgeGating2                                          = 2,
	ERewardWarningTooltipType27__Sparks3                                             = 3,
	ERewardWarningTooltipType27__DelMar4                                             = 4,
	ERewardWarningTooltipType27__Juno5                                               = 5,
	ERewardWarningTooltipType27__Max6                                                = 6
};

/// Enum /Script/BattlePassS27UI.ECustomizationCategory
/// Size: 0x04
enum ECustomizationCategory : uint8_t
{
	ECustomizationCategory__Rewards0                                                 = 0,
	ECustomizationCategory__Patterns1                                                = 1,
	ECustomizationCategory__Banners2                                                 = 2,
	ECustomizationCategory__Max3                                                     = 3
};

