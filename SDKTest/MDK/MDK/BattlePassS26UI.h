
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
/// Size: 0x0000 (0x000588 - 0x000588)
class UBattlePassBulkBuyPageS26 : public UFortBattlePassBulkBuyPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
};

/// Class /Script/BattlePassS26UI.BattlePassLandingPageS26
/// Size: 0x0068 (0x000538 - 0x0005A0)
class UBattlePassLandingPageS26 : public UBattlePassLandingPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(UBattlePassLandingPageButton*)             Button_Rewards                                              ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UBattlePassLandingPageButton*)             Button_CharacterCustomizer                                  ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UBattlePassLandingPageButton*)             Button_BonusRewards                                         ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UBattlePassLandingPageButton*)             Button_Quests                                               ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UBattlePassLandingPageButton*)             Button_JoinSubscription                                     ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UBattlePassLandingPageButton*)             Button_WeeklyRewards                                        ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SeasonNumber                                           ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         SeasonData_BattleStar                                       ___ OFFSET(get<T>, {0x570, 8, 0, 0})
};

/// Class /Script/BattlePassS26UI.BattlePassRewardPageS26
/// Size: 0x00A0 (0x000500 - 0x0005A0)
class UBattlePassRewardPageS26 : public UBattlePassRewardPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(UClass*)                                   RewardsTrackClass                                           ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UFortBattlePassTile*)                      FocusedReward                                               ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(TArray<UFortBattlePassRewardTrack*>)       TrackPages                                                  ___ OFFSET(get<T>, {0x510, 16, 0, 0})
	CMember(ERewardPageType)                           RewardPageType                                              ___ OFFSET(get<T>, {0x524, 1, 0, 0})
	DMember(int32_t)                                   HoldTileTooltip_ClaimedRewardsToHide                        ___ OFFSET(get<int32_t>, {0x528, 4, 0, 0})
	DMember(int32_t)                                   HoldTileTooltip_ClaimedBattlePassToHide                     ___ OFFSET(get<int32_t>, {0x52C, 4, 0, 0})
	DMember(int32_t)                                   HoldTileTooltip_RequiredBattleStarsToShow                   ___ OFFSET(get<int32_t>, {0x530, 4, 0, 0})
	DMember(int32_t)                                   LevelRequirementUnlockTooltip_RequiredLevel                 ___ OFFSET(get<int32_t>, {0x534, 4, 0, 0})
	DMember(int32_t)                                   ClaimAllRewardsTooltip_RequiredLevelToShow                  ___ OFFSET(get<int32_t>, {0x538, 4, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  Switcher_RewardTracks                                       ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS26*)        TutorialTooltip_LevelRequirementUnlock                      ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS26*)        TutorialTooltip_ClaimAllRewards                             ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS26*)        TutorialTooltip_HoldTile                                    ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         SeasonData_BattleStar                                       ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UBattlePassBulkBuyInputData*)              BulkBuyInputData                                            ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_NextPage                                             ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PreviousPage                                         ___ OFFSET(get<T>, {0x578, 8, 0, 0})
};

/// Class /Script/BattlePassS26UI.BattlePassScreenS26
/// Size: 0x04D8 (0x0008C8 - 0x000DA0)
class UBattlePassScreenS26 : public UBattlePassScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3488;

public:
	CMember(UClass*)                                   ResourcePurchaseScreenClass                                 ___ OFFSET(get<T>, {0x8C8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Close                                                ___ OFFSET(get<T>, {0x8D8, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_TouchClose                                           ___ OFFSET(get<T>, {0x8E0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ToggleViewDetails                                    ___ OFFSET(get<T>, {0x8E8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ReplayTrailer                                        ___ OFFSET(get<T>, {0x8F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ReplayTrailer_Mobile                                 ___ OFFSET(get<T>, {0x8F8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowAbout                                            ___ OFFSET(get<T>, {0x900, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowAbout_Mobile                                     ___ OFFSET(get<T>, {0x908, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowAboutCustomization                               ___ OFFSET(get<T>, {0x910, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowAboutCustomization_Mobile                        ___ OFFSET(get<T>, {0x918, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BulkBuyRewards                                       ___ OFFSET(get<T>, {0x920, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageComplete                                         ___ OFFSET(get<T>, {0x928, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GiftBattlePass                                       ___ OFFSET(get<T>, {0x930, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                VisibilitySwitcher_PlatformBasedButtons                     ___ OFFSET(get<T>, {0x938, 8, 0, 0})
	CMember(UFortBattlePassResourcesWidgetBase*)       BattlePassCurrencyPanel                                     ___ OFFSET(get<T>, {0x940, 8, 0, 0})
	CMember(UAthenaExclusiveRewardBanner*)             AthenaExclusiveRewardBanner                                 ___ OFFSET(get<T>, {0x948, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Description                                            ___ OFFSET(get<T>, {0x950, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemName                                               ___ OFFSET(get<T>, {0x958, 8, 0, 0})
	CMember(UAthenaRewardItemTypeRarityTag*)           ItemRewardTag                                               ___ OFFSET(get<T>, {0x960, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SetDetails                                             ___ OFFSET(get<T>, {0x968, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_PrerequisiteInfo                                   ___ OFFSET(get<T>, {0x970, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Prerequisite                                           ___ OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(UWidget*)                                  Widget_PrerequisiteProgress                                 ___ OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(UWidget*)                                  Widget_LevelUpMessageFree                                   ___ OFFSET(get<T>, {0x988, 8, 0, 0})
	CMember(UWidget*)                                  Widget_LevelUpMessagePremium                                ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UWidget*)                                  Widget_CustomResourceMessage                                ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_PrimaryAction                                      ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_BuyLevels                                            ___ OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_BuyBattlePass                                        ___ OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_ClaimReward                                          ___ OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ViewQuests                                           ___ OFFSET(get<T>, {0x9C0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PreviewLoadingScreen                                 ___ OFFSET(get<T>, {0x9C8, 8, 0, 0})
	CMember(UBorder*)                                  Tag_RequiresBP                                              ___ OFFSET(get<T>, {0x9D0, 8, 0, 0})
	CMember(UBorder*)                                  Tag_PageLocked                                              ___ OFFSET(get<T>, {0x9D8, 8, 0, 0})
	CMember(UBorder*)                                  Tag_BaseItem                                                ___ OFFSET(get<T>, {0x9E0, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Prerequisite                                            ___ OFFSET(get<T>, {0x9E8, 8, 0, 0})
	CMember(UBorder*)                                  Tag_CompletePage                                            ___ OFFSET(get<T>, {0x9F0, 8, 0, 0})
	CMember(UBorder*)                                  Tag_NotEnough_Currency                                      ___ OFFSET(get<T>, {0x9F8, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Cost                                                    ___ OFFSET(get<T>, {0xA00, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Owned                                                   ___ OFFSET(get<T>, {0xA08, 8, 0, 0})
	CMember(UBorder*)                                  Tag_Delayed                                                 ___ OFFSET(get<T>, {0xA10, 8, 0, 0})
	SMember(FGameplayTag)                              QuestCategoryParentTag                                      ___ OFFSET(get<T>, {0xA18, 4, 0, 0})
	CMember(UClass*)                                   PreviewLoadingScreenWidgetClass                             ___ OFFSET(get<T>, {0xA20, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         SeasonData_BattleStar                                       ___ OFFSET(get<T>, {0xA80, 8, 0, 0})
	CMember(UAthenaSeasonItemEntryBase*)               CurrentSelectedEntry                                        ___ OFFSET(get<T>, {0xA88, 8, 0, 0})
	CMember(TArray<EBattlePassView>)                   SwitcherSubPageTypes                                        ___ OFFSET(get<T>, {0xA90, 16, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                VisibilitySwitcher_SubPage                                  ___ OFFSET(get<T>, {0xAA0, 8, 0, 0})
	CMember(UFortItemDefinition*)                      SeasonalBaseCustomizationItem                               ___ OFFSET(get<T>, {0xBA8, 8, 0, 0})
	DMember(bool)                                      bHasSubscription                                            ___ OFFSET(get<bool>, {0xBB0, 1, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS26*)        TutorialTooltip_BattleStars                                 ___ OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(UFortBattlePassTutorialTooltipS26*)        TutorialTooltip_StylePoints                                 ___ OFFSET(get<T>, {0xBC0, 8, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       ___ OFFSET(get<T>, {0xBC8, 8, 0, 0})
};

/// Class /Script/BattlePassS26UI.FortBattlePassCustomSkinPageS26
/// Size: 0x0018 (0x0005B0 - 0x0005C8)
class UFortBattlePassCustomSkinPageS26 : public UFortBattlePassCustomSkinPageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	SMember(FString)                                   ClaimBaseItemTooltip_ClaimCheckTemplateId                   ___ OFFSET(get<T>, {0x5B0, 16, 0, 0})
	CMember(UFortBattlePassTutorialTooltip*)           TutorialTooltip_ClaimBaseItem                               ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
};

/// Class /Script/BattlePassS26UI.FortBattlePassResourcesWidgetS26
/// Size: 0x0020 (0x0002E0 - 0x000300)
class UFortBattlePassResourcesWidgetS26 : public UFortBattlePassResourcesWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(UCommonTextBlock*)                         Text_BattleStarsAmount                                      ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_StylePointsAmount                                      ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UBorder*)                                  Border_StylePointsRewardsTag                                ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UBorder*)                                  Border_BattleStarsRewardsTag                                ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
};

/// Class /Script/BattlePassS26UI.FortBattlePassTutorialTooltipS26
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortBattlePassTutorialTooltipS26 : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UCommonRichTextBlock*)                     Text_Tooltip                                                ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
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

