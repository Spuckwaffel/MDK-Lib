
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

/// Class /Script/BattlePassS26UI.BattlePassBulkBuyPageS26
/// Size: 0x0000 (0x0005A0 - 0x0005A0)
class UBattlePassBulkBuyPageS26 : public UFortBattlePassBulkBuyPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
};

/// Class /Script/BattlePassS26UI.BattlePassLandingPageS26
/// Size: 0x0068 (0x000550 - 0x0005B8)
class UBattlePassLandingPageS26 : public UBattlePassLandingPageBase
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
	// Function /Script/BattlePassS26UI.BattlePassLandingPageS26.OnBattlePassSubscriptionAllowed
	// void OnBattlePassSubscriptionAllowed(bool bSubscriptionAllowed);                                                         // [0x1d9241c] Event|Public|BlueprintEvent 
};

/// Class /Script/BattlePassS26UI.BattlePassRewardPageS26
/// Size: 0x00A0 (0x000518 - 0x0005B8)
class UBattlePassRewardPageS26 : public UBattlePassRewardPageBase
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
	CMember(UFortBattlePassTutorialTooltipS26*)        TutorialTooltip_LevelRequirementUnlock                      OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS26*)        TutorialTooltip_ClaimAllRewards                             OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS26*)        TutorialTooltip_HoldTile                                    OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         SeasonData_BattleStar                                       OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UBattlePassBulkBuyInputData*)              BulkBuyInputData                                            OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_NextPage                                             OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PreviousPage                                         OFFSET(get<T>, {0x590, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS26UI.BattlePassRewardPageS26.OnPageChanged
	// void OnPageChanged(int32_t PageNumber, int32_t RewardPageTotal);                                                         // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassRewardPageS26.OnLoadingScreenSelectedChanged
	// void OnLoadingScreenSelectedChanged(bool bIsSelected);                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassRewardPageS26.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType InputType);                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassRewardPageS26.OnInitForPageType
	// void OnInitForPageType(ERewardPageType InRewardPageType);                                                                // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassRewardPageS26.HandleRewardTracksBoundaryNavigation
	// UWidget* HandleRewardTracksBoundaryNavigation(EUINavigation InNavigation);                                               // [0x9a00408] Final|Native|Private 
	// Function /Script/BattlePassS26UI.BattlePassRewardPageS26.GetRewardPageBackgroundData
	// FVaultWorldBackgroundData GetRewardPageBackgroundData();                                                                 // [0x9a001ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassS26UI.BattlePassScreenS26
/// Size: 0x04D8 (0x0008E0 - 0x000DB8)
class UBattlePassScreenS26 : public UBattlePassScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3512;

public:
	CMember(UClass*)                                   ResourcePurchaseScreenClass                                 OFFSET(get<T>, {0x8E0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Close                                                OFFSET(get<T>, {0x8F0, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_TouchClose                                           OFFSET(get<T>, {0x8F8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ToggleViewDetails                                    OFFSET(get<T>, {0x900, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ReplayTrailer                                        OFFSET(get<T>, {0x908, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ReplayTrailer_Mobile                                 OFFSET(get<T>, {0x910, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowAbout                                            OFFSET(get<T>, {0x918, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowAbout_Mobile                                     OFFSET(get<T>, {0x920, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowAboutCustomization                               OFFSET(get<T>, {0x928, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowAboutCustomization_Mobile                        OFFSET(get<T>, {0x930, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BulkBuyRewards                                       OFFSET(get<T>, {0x938, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageComplete                                         OFFSET(get<T>, {0x940, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GiftBattlePass                                       OFFSET(get<T>, {0x948, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                VisibilitySwitcher_PlatformBasedButtons                     OFFSET(get<T>, {0x950, 8, 0, 0})
	CMember(UFortBattlePassResourcesWidgetBase*)       BattlePassCurrencyPanel                                     OFFSET(get<T>, {0x958, 8, 0, 0})
	CMember(UAthenaExclusiveRewardBanner*)             AthenaExclusiveRewardBanner                                 OFFSET(get<T>, {0x960, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Description                                            OFFSET(get<T>, {0x968, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemName                                               OFFSET(get<T>, {0x970, 8, 0, 0})
	CMember(UAthenaRewardItemTypeRarityTag*)           ItemRewardTag                                               OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SetDetails                                             OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_PrerequisiteInfo                                   OFFSET(get<T>, {0x988, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Prerequisite                                           OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UWidget*)                                  Widget_PrerequisiteProgress                                 OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UWidget*)                                  Widget_LevelUpMessageFree                                   OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(UWidget*)                                  Widget_LevelUpMessagePremium                                OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(UWidget*)                                  Widget_CustomResourceMessage                                OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_PrimaryAction                                      OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_BuyLevels                                            OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_BuyBattlePass                                        OFFSET(get<T>, {0x9C8, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_ClaimReward                                          OFFSET(get<T>, {0x9D0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ViewQuests                                           OFFSET(get<T>, {0x9D8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PreviewLoadingScreen                                 OFFSET(get<T>, {0x9E0, 8, 0, 0})
	CMember(UBorder*)                                  Tag_RequiresBP                                              OFFSET(get<T>, {0x9E8, 8, 0, 0})
	CMember(UBorder*)                                  Tag_PageLocked                                              OFFSET(get<T>, {0x9F0, 8, 0, 0})
	CMember(UBorder*)                                  Tag_BaseItem                                                OFFSET(get<T>, {0x9F8, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Prerequisite                                            OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UBorder*)                                  Tag_CompletePage                                            OFFSET(get<T>, {0xA08, 8, 0, 0})
	CMember(UBorder*)                                  Tag_NotEnough_Currency                                      OFFSET(get<T>, {0xA10, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Cost                                                    OFFSET(get<T>, {0xA18, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Owned                                                   OFFSET(get<T>, {0xA20, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Delayed                                                 OFFSET(get<T>, {0xA28, 8, 0, 0})
	SMember(FGameplayTag)                              QuestCategoryParentTag                                      OFFSET(getStruct<T>, {0xA30, 4, 0, 0})
	CMember(UClass*)                                   PreviewLoadingScreenWidgetClass                             OFFSET(get<T>, {0xA38, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         SeasonData_BattleStar                                       OFFSET(get<T>, {0xA98, 8, 0, 0})
	CMember(UAthenaSeasonItemEntryBase*)               CurrentSelectedEntry                                        OFFSET(get<T>, {0xAA0, 8, 0, 0})
	CMember(TArray<EBattlePassView>)                   SwitcherSubPageTypes                                        OFFSET(get<T>, {0xAA8, 16, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                VisibilitySwitcher_SubPage                                  OFFSET(get<T>, {0xAB8, 8, 0, 0})
	CMember(UFortItemDefinition*)                      SeasonalBaseCustomizationItem                               OFFSET(get<T>, {0xBC0, 8, 0, 0})
	DMember(bool)                                      bHasSubscription                                            OFFSET(get<bool>, {0xBC8, 1, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS26*)        TutorialTooltip_BattleStars                                 OFFSET(get<T>, {0xBD0, 8, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS26*)        TutorialTooltip_StylePoints                                 OFFSET(get<T>, {0xBD8, 8, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       OFFSET(get<T>, {0xBE0, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OverviewShowAnimationFinished
	// void OverviewShowAnimationFinished();                                                                                    // [0x2cf4738] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnUpdateStatusBar
	// void OnUpdateStatusBar(FText& StatusText, EBattlePassStatusBarTypeS26& BarType);                                         // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnUpdateBattlePassRequiredBar
	// void OnUpdateBattlePassRequiredBar(bool bPassRequiredVisible);                                                           // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnTransitionItemDetails
	// void OnTransitionItemDetails(bool bTransitionForward);                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnSetWeeklyRewardsInfo
	// void OnSetWeeklyRewardsInfo(FTimespan& DelayTimespan, int32_t AvailableRewards, int32_t OwnedRewards, int32_t TotalRewards, int32_t AvailablePages, int32_t CompletedPages, int32_t TotalPages); // [0x1d9241c] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnSetResourcePrice
	// void OnSetResourcePrice(int32_t Cost, UFortPersistentResourceItemDefinition* PersistentResource);                        // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnSetQuestRewardsInfo
	// void OnSetQuestRewardsInfo(FTimespan& DelayTimespan, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages); // [0x1d9241c] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnSetPrerequisiteInfo
	// void OnSetPrerequisiteInfo(FText& Description, int32_t CurrentAmount, int32_t NeededAmount, EBattlePassRewardPrerequisiteType PrerequisiteType, bool bShowPrerequisiteLock); // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnSetItemPrice
	// void OnSetItemPrice(int32_t Cost, EBattlePassCurrencyType CurrencyType);                                                 // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnSetCrewInfo
	// void OnSetCrewInfo(bool bIsNextMonthRewards, FText& MonthText, FTimespan& NextMonthlyRewardTimespan, FText& CharacterDisplayName, FText& CharacterDescription); // [0x1d9241c] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnSetCoverPageData
	// void OnSetCoverPageData(FText& Title, FText& Description, bool bPageComplete);                                           // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnSetBonusRewardsInfo
	// void OnSetBonusRewardsInfo(bool bIsUnlocked, int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages, int32_t ClaimedOutfits, int32_t TotalOutfits); // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnSetBaseRewardsInfo
	// void OnSetBaseRewardsInfo(int32_t OwnedRewards, int32_t TotalRewards, int32_t CompletedPages, int32_t TotalPages);       // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnItemDelayed
	// void OnItemDelayed(FTimespan Delay);                                                                                     // [0x1d9241c] Event|Protected|HasDefaults|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnInsufficientResource
	// void OnInsufficientResource(UFortPersistentResourceItemDefinition* PersistentResource);                                  // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnInsufficientFunds
	// void OnInsufficientFunds(EBattlePassCurrencyType CurrencyType);                                                          // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnBattlePassOwned
	// void OnBattlePassOwned();                                                                                                // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.OnBattlePassGiftingAllowed
	// void OnBattlePassGiftingAllowed(bool bGiftingAllowed);                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.IsSeasonalCustomizationItemOwned
	// bool IsSeasonalCustomizationItemOwned();                                                                                 // [0x9a004c0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.HandleSwitcherVisibilityShown
	// void HandleSwitcherVisibilityShown();                                                                                    // [0x9a00498] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.HandleFullScreenMapToggled
	// void HandleFullScreenMapToggled(bool bMapVisible);                                                                       // [0x9a00388] Final|Native|Private 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.HandleClaimRewardComplete
	// void HandleClaimRewardComplete(bool bSuccess, TArray<FString>& OfferTemplateIdList);                                     // [0x9a0029c] Final|Native|Private|HasOutParms 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.GoBackOneScreen
	// void GoBackOneScreen();                                                                                                  // [0x9a00288] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS26UI.BattlePassScreenS26.GetQuestPageDelay
	// FTimespan GetQuestPageDelay();                                                                                           // [0x9a001c0] Final|Native|Protected|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/BattlePassS26UI.FortBattlePassCustomSkinPageS26
/// Size: 0x0018 (0x0005C8 - 0x0005E0)
class UFortBattlePassCustomSkinPageS26 : public UFortBattlePassCustomSkinPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FString)                                   ClaimBaseItemTooltip_ClaimCheckTemplateId                   OFFSET(getStruct<T>, {0x5C8, 16, 0, 0})
	CMember(UFortBattlePassTutorialTooltip*)           TutorialTooltip_ClaimBaseItem                               OFFSET(get<T>, {0x5D8, 8, 0, 0})
};

/// Class /Script/BattlePassS26UI.FortBattlePassResourcesWidgetS26
/// Size: 0x0020 (0x0002F8 - 0x000318)
class UFortBattlePassResourcesWidgetS26 : public UFortBattlePassResourcesWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UCommonTextBlock*)                         Text_BattleStarsAmount                                      OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_StylePointsAmount                                      OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UBorder*)                                  Border_StylePointsRewardsTag                                OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UBorder*)                                  Border_BattleStarsRewardsTag                                OFFSET(get<T>, {0x310, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS26UI.FortBattlePassResourcesWidgetS26.OnStylePointsRewardsSet
	// void OnStylePointsRewardsSet(int32_t Rewards);                                                                           // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.FortBattlePassResourcesWidgetS26.OnBattleStarRewardsSet
	// void OnBattleStarRewardsSet(int32_t Rewards);                                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Class /Script/BattlePassS26UI.FortBattlePassTutorialTooltipS26
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortBattlePassTutorialTooltipS26 : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UCommonRichTextBlock*)                     Text_Tooltip                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/BattlePassS26UI.FortBattlePassTutorialTooltipS26.ShowTooltip
	// void ShowTooltip();                                                                                                      // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/BattlePassS26UI.FortBattlePassTutorialTooltipS26.SetText
	// void SetText(FText Text);                                                                                                // [0x99e7cac] Final|Native|Public|BlueprintCallable 
	// Function /Script/BattlePassS26UI.FortBattlePassTutorialTooltipS26.HideTooltip
	// void HideTooltip();                                                                                                      // [0x1d9241c] Event|Protected|BlueprintEvent 
};

/// Enum /Script/BattlePassS26UI.EBattlePassStatusBarTypeS26
/// Size: 0x08
enum EBattlePassStatusBarTypeS26 : uint8_t
{
	EBattlePassStatusBarTypeS26__Hidden0                                             = 0,
	EBattlePassStatusBarTypeS26__Prerequisite1                                       = 1,
	EBattlePassStatusBarTypeS26__Delayed2                                            = 2,
	EBattlePassStatusBarTypeS26__Unclaimable3                                        = 3,
	EBattlePassStatusBarTypeS26__Claimable4                                          = 4,
	EBattlePassStatusBarTypeS26__Special5                                            = 5,
	EBattlePassStatusBarTypeS26__Owned6                                              = 6,
	EBattlePassStatusBarTypeS26__EBattlePassStatusBarTypeS26_MAX7                    = 7
};

