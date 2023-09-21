
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
	CMember(UBattlePassLandingPageButton*)             LastHoveredPageButton                                       ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   LandingPageButtonGroupBase                                  ___ OFFSET(get<T>, {0x510, 8, 0, 0})
};

/// Class /Script/BattlePassBase.BattlePassLandingPageButton
/// Size: 0x0280 (0x001470 - 0x0016F0)
class UBattlePassLandingPageButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5872;

public:
	CMember(EBattlePassView)                           SubPageType                                                 ___ OFFSET(get<T>, {0x1470, 1, 0, 0})
	CMember(EBattlePassFeatures)                       FeatureType                                                 ___ OFFSET(get<T>, {0x1471, 1, 0, 0})
	SMember(FBattlePassLandingPageEntryPreviewInfo)    PreviewInfo                                                 ___ OFFSET(get<T>, {0x1478, 144, 0, 0})
	DMember(bool)                                      bNeedsBattlePass                                            ___ OFFSET(get<bool>, {0x1508, 1, 0, 0})
	CMember(UFortChallengeBundleScheduleDefinition*)   DelayQuestSchedule                                          ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	DMember(int32_t)                                   DelayDaysSinceSeasonStart                                   ___ OFFSET(get<int32_t>, {0x1518, 4, 0, 0})
	CMember(UFortItemDefinition*)                      RequiredItem                                                ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UFortBangWrapper_NUI*)                     BangWrapper                                                 ___ OFFSET(get<T>, {0x1528, 8, 0, 0})
	DMember(bool)                                      bUsesTelemetry                                              ___ OFFSET(get<bool>, {0x1530, 1, 0, 0})
	SMember(FIntPoint)                                 Telemetry_Size                                              ___ OFFSET(get<T>, {0x1534, 8, 0, 0})
	SMember(FIntPoint)                                 Telemetry_Position                                          ___ OFFSET(get<T>, {0x153C, 8, 0, 0})
	SMember(FBattlePassLandingPageButtonTexts)         DefaultTexts                                                ___ OFFSET(get<T>, {0x1548, 72, 0, 0})
	SMember(FBattlePassLandingPageButtonTexts)         DelayedTexts                                                ___ OFFSET(get<T>, {0x1590, 72, 0, 0})
	SMember(FBattlePassLandingPageButtonTexts)         SubscribedTexts                                             ___ OFFSET(get<T>, {0x15D8, 72, 0, 0})
	SMember(FBattlePassLandingPageButtonDisplayBehaviorData) DisplayBehaviorData                                   ___ OFFSET(get<T>, {0x1620, 24, 0, 0})
};

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
	CMember(TWeakObjectPtr<UClass*>)                   BattlePassScreenClass                                       ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   BattlePassResourceWidgetClass                               ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   BattlePassInfoModalClass                                    ___ OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassCustomSkinCategoryTile
/// Size: 0x00B8 (0x0002A8 - 0x000360)
class UFortBattlePassCustomSkinCategoryTile : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(UProgressBar*)                             ProgressBar                                                 ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UFortDynamicEntryBox*)                     FortDynamicEntryBox_Items                                   ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(URichTextBlock*)                           Text_CategoryTitle                                          ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortBattlePassTile*)                      PreviewedTile                                               ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(int32_t)                                   OwnedRewards                                                ___ OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassCustomSkinPageBase
/// Size: 0x01C8 (0x0003E8 - 0x0005B0)
class UFortBattlePassCustomSkinPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(UScrollBox*)                               ScrollBox_Categories                                        ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UFortDynamicEntryBox*)                     FortDynamicEntryBox_Categories                              ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UBattlePassEnabledInputData*)              EquipEnabledData                                            ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassBulkBuyPageBase
/// Size: 0x01A0 (0x0003E8 - 0x000588)
class UFortBattlePassBulkBuyPageBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	CMember(UCommonButtonBase*)                        Button_Addition                                             ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Subtraction                                          ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         DynamicEntryBox_TilesEntries                                ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_BottomButtons                                      ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_BuyLevels                                            ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UFortCTAButton*)                           Button_ClaimReward                                          ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UWidget*)                                  Widget_LevelUpMessagePremium                                ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         SeasonData_BattleStar                                       ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UAthenaSeasonItemDefinition*)              SeasonItemDefinition                                        ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UFortBattlePassTile*)                      FocusedReward                                               ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Pages                                             ___ OFFSET(get<T>, {0x580, 8, 0, 0})
};

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
	CMember(TArray<UFortPersistentResourceItemDefinition*>) CustomizationPageSeasonalResources                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<UFortPersistentResourceItemDefinition*>) AllSeasonalResources                                   ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TMap<ERewardPageType, FSeasonalResourceList>) RewardPageSeasonalResources                              ___ OFFSET(get<T>, {0x58, 80, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassResourcesWidgetBase
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortBattlePassResourcesWidgetBase : public UFortGlobalSeasonResourceWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UClass*)                                   ResourceCounterClass                                        ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UDynamicEntryBox*)                         EntryBox_ResourceCounters                                   ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassCurrencyPanel
/// Size: 0x0040 (0x0002E0 - 0x000320)
class UFortBattlePassCurrencyPanel : public UFortBattlePassResourcesWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(UHorizontalBox*)                           HBox_BattleStarContainer                                    ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_BattleStar                                             ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HBox_CustomSkinContainer                                    ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_CustomSkin                                             ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassDynamicIcon
/// Size: 0x0048 (0x0002A8 - 0x0002F0)
class UFortBattlePassDynamicIcon : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(TWeakObjectPtr<UObject*>)                  BattlePassDefaultIcon                                       ___ OFFSET(get<T>, {0x2A8, 32, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  BattlePassOwnedIcon                                         ___ OFFSET(get<T>, {0x2C8, 32, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_BattlePassIcon                                    ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassLevelCount
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UFortBattlePassLevelCount : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(UCommonTextBlock*)                         Text_LevelCount                                             ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassPrerequisiteHeader
/// Size: 0x0008 (0x0002A8 - 0x0002B0)
class UFortBattlePassPrerequisiteHeader : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(UTextBlock*)                               Text_Prerequisite                                           ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassPurchaseResourcesWidget
/// Size: 0x00C0 (0x0003E8 - 0x0004A8)
class UFortBattlePassPurchaseResourcesWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	CMember(UCommonButtonBase*)                        Button_Addition                                             ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BatchAddition                                        ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Subtraction                                          ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BatchSubtraction                                     ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_PurchaseButtons                                    ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UFortHoldableButton*)                      Button_Purchase                                             ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_GetVBucks                                            ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ReloadMtx                                            ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UFortBattlePassCheckBoxButton*)            CheckBox_Bundle                                             ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	DMember(int32_t)                                   CurrentLevel                                                ___ OFFSET(get<int32_t>, {0x448, 4, 0, 0})
	DMember(bool)                                      bIsOfferActive                                              ___ OFFSET(get<bool>, {0x44C, 1, 0, 0})
	DMember(int32_t)                                   CurrentVBucks                                               ___ OFFSET(get<int32_t>, {0x450, 4, 0, 0})
	DMember(int32_t)                                   CurrentBattleStars                                          ___ OFFSET(get<int32_t>, {0x454, 4, 0, 0})
	DMember(int32_t)                                   BatchNum                                                    ___ OFFSET(get<int32_t>, {0x458, 4, 0, 0})
	DMember(bool)                                      bOfferUnavailable                                           ___ OFFSET(get<bool>, {0x45C, 1, 0, 0})
	DMember(int32_t)                                   MaxBundleLevel                                              ___ OFFSET(get<int32_t>, {0x460, 4, 0, 0})
	DMember(int32_t)                                   MaxLevel                                                    ___ OFFSET(get<int32_t>, {0x464, 4, 0, 0})
	DMember(int32_t)                                   MaxLevelPurchases                                           ___ OFFSET(get<int32_t>, {0x468, 4, 0, 0})
	DMember(int32_t)                                   BundleAmount                                                ___ OFFSET(get<int32_t>, {0x46C, 4, 0, 0})
	CMember(UFortItemDefinition*)                      LevelPreviewItem                                            ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UAthenaSeasonItemData_BattleStar*)         BattleStarData                                              ___ OFFSET(get<T>, {0x478, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassResourceCounter
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UFortBattlePassResourceCounter : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonTextBlock*)                         Text_ResourceName                                           ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortLazyImage*)                           LazyImage_ResourceIcon                                      ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ResourceCount                                          ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UFortPersistentResourceItemDefinition*)    CurrentResource                                             ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassRewardGrid
/// Size: 0x00D0 (0x0003E8 - 0x0004B8)
class UFortBattlePassRewardGrid : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	CMember(UClass*)                                   GridTileClass                                               ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UClass*)                                   GridEmptyTileClass                                          ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	SMember(FVector2D)                                 GridCellPadding                                             ___ OFFSET(get<T>, {0x460, 16, 0, 0})
	CMember(UFortBattlePassRewardGridHeader*)          PageHeader                                                  ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UGridPanel*)                               GridPanel_Rewards                                           ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UFortBattlePassTileBase*)                  DefaultFocusTile                                            ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonButtonBase*>)        LastFocusedTile                                             ___ OFFSET(get<T>, {0x488, 8, 0, 0})
};

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
	CMember(UClass*)                                   RewardTileClass                                             ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UClass*)                                   RewardEmptyTileClass                                        ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UClass*)                                   PrerequisiteHeaderClass                                     ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	SMember(FVector2D)                                 GridCellPadding                                             ___ OFFSET(get<T>, {0x450, 16, 0, 0})
	CMember(UGridPanel*)                               GridPanel_Rewards                                           ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UFortBattlePassTileBase*)                  DefaultFocusTile                                            ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonButtonBase*>)        LastFocusedTile                                             ___ OFFSET(get<T>, {0x470, 8, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassTileBase
/// Size: 0x00C0 (0x001510 - 0x0015D0)
class UFortBattlePassTileBase : public UFortHoldableButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5584;

public:
	CMember(ERewardPageType)                           RewardPageType                                              ___ OFFSET(get<T>, {0x1510, 1, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Content                                             ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 TileColors                                                  ___ OFFSET(get<T>, {0x1520, 80, 0, 0})
	SMember(FLinearColor)                              OverlayDimColor                                             ___ OFFSET(get<T>, {0x1570, 16, 0, 0})
	SMember(FVector2D)                                 TileDesiredCellSpan                                         ___ OFFSET(get<T>, {0x1580, 16, 0, 0})
	DMember(float)                                     UnitHeight                                                  ___ OFFSET(get<float>, {0x1590, 4, 0, 0})
	DMember(float)                                     UnitWidth                                                   ___ OFFSET(get<float>, {0x1594, 4, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassTile
/// Size: 0x0070 (0x0015D0 - 0x001640)
class UFortBattlePassTile : public UFortBattlePassTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5696;

public:
	CMember(UFortLazyImage*)                           Image_RewardItem                                            ___ OFFSET(get<T>, {0x15E8, 8, 0, 0})
	CMember(UImage*)                                   Image_Currency                                              ___ OFFSET(get<T>, {0x15F0, 8, 0, 0})
	DMember(bool)                                      bIsOnBulkBuyMode                                            ___ OFFSET(get<bool>, {0x15F8, 1, 0, 0})
};

/// Class /Script/BattlePassBase.FortBattlePassTutorialTooltip
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortBattlePassTutorialTooltip : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UCommonRichTextBlock*)                     Text_Tooltip                                                ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

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
	SMember(FText)                                     TileText                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     LandingPageTitleText                                        ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     LandingPageDescriptionText                                  ___ OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonDisplayBehaviorData
/// Size: 0x0018 (0x000000 - 0x000018)
class FBattlePassLandingPageButtonDisplayBehaviorData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FBattlePassLandingPageButtonDisplayBehavior) DisplayBehavior                                           ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FTimespan)                                 BehaviorTimespan                                            ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bIsDisplayActive                                            ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageButtonDisplayDetails
/// Size: 0x0070 (0x000000 - 0x000070)
class FBattlePassLandingPageButtonDisplayDetails : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FBattlePassLandingPageButtonTexts)         ButtonTexts                                                 ___ OFFSET(get<T>, {0x0, 72, 0, 0})
	DMember(bool)                                      bIsBPLocked                                                 ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FText)                                     MissingCosmeticNameText                                     ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FTimespan)                                 DelayTimespan                                               ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Struct /Script/BattlePassBase.BattlePassLandingPageEntryPreviewInfo
/// Size: 0x0090 (0x000000 - 0x000090)
class FBattlePassLandingPageEntryPreviewInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(EBattlePassLandingPageSpecialEntryType)    SpecialEntryType                                            ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<EFortItemType>)                     SubscriptionItemTypesToDisplay                              ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayTag)                              SpecialCharacterVariantChannelToModify                      ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FGameplayTag)                              SpecialCharacterActiveVariantTag                            ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(TMap<FString, TWeakObjectPtr>)             TemplateIdTileRenderMap                                     ___ OFFSET(get<T>, {0x20, 80, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    PreviewItems                                                ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bEnableDynamicWeeklyPreview                                 ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     TransitionTime                                              ___ OFFSET(get<float>, {0x84, 4, 0, 0})
};

/// Struct /Script/BattlePassBase.SeasonalResourceList
/// Size: 0x0010 (0x000000 - 0x000010)
class FSeasonalResourceList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UFortPersistentResourceItemDefinition*>) SeasonalResources                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
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

