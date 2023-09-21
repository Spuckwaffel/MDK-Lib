
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
/// dependency: ModelViewViewModel
/// dependency: UMG

/// Class /Script/DiscoveryBrowserUI.DiscoverSelectedActivityViewModel
/// Size: 0x0040 (0x000068 - 0x0000A8)
class UDiscoverSelectedActivityViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      bHasChildData                                               ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bHasParentData                                              ___ OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bLoading                                                    ___ OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      bHasPartyData                                               ___ OFFSET(get<bool>, {0x6B, 1, 0, 0})
	DMember(bool)                                      bIsActiveInvite                                             ___ OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bIsPartyPrivate                                             ___ OFFSET(get<bool>, {0x6D, 1, 0, 0})
	DMember(int32_t)                                   CurrentPartySize                                            ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FText)                                     RichPresenceText                                            ___ OFFSET(get<T>, {0x78, 24, 0, 0})
	CMember(UFortActivityViewModel*)                   ParentActivity                                              ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UFortActivityViewModel*)                   ChildActivity                                               ___ OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTabButton
/// Size: 0x0000 (0x0014A0 - 0x0014A0)
class UFortActivityBrowserTabButton : public UFortTabButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5280;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverBackgroundManager
/// Size: 0x0058 (0x000028 - 0x000080)
class UFortDiscoverBackgroundManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowser
/// Size: 0x0260 (0x0003E8 - 0x000648)
class UFortActivityBrowser : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1608;

public:
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_TabActivityBrowserViews                            ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowCustomMatchmakingModal                           ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackToTop                                            ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileShowGameDetails                                ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileAccept                                         ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_JoinAsSpectator                                      ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowSpectateMatchModal                               ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UFortTabListWidgetBase_Legacy*)            TabList_BrowserTabs                                         ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	SMember(FPrimaryContentSetup)                      PrimaryContentSetup                                         ___ OFFSET(get<T>, {0x440, 3, 0, 0})
	CMember(UClass*)                                   TabButtonClass                                              ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UClass*)                                   ActivityDetailsModalClass                                   ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UClass*)                                   ActivityModeSetSelectionModalClass                          ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UClass*)                                   ActivityModeSetFirstTimeNotificationModalClass              ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UClass*)                                   AttributionsModalClass                                      ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UClass*)                                   CreatorPageViewClass                                        ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UClass*)                                   CategoryPageViewClass                                       ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftCustomMatchmakingModalClass                             ___ OFFSET(get<T>, {0x480, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftSpectateMatchModalClass                                 ___ OFFSET(get<T>, {0x4A0, 32, 0, 0})
	CMember(UClass*)                                   CampaignPurchaseScreenClass                                 ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(UClass*)                                   CCUModalClass                                               ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(TMap<FName, UFortActivityBrowserColorSchemeAsset*>) ColorSchemes                                       ___ OFFSET(get<T>, {0x4D0, 80, 0, 0})
	SMember(FText)                                     MobileAcceptButtonBaseText                                  ___ OFFSET(get<T>, {0x520, 24, 0, 0})
	CMember(UFortCreativeDiscoverySurfaceManager*)     Manager                                                     ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortActivityBrowserPlayWithFriendsTile*>) LastSelectedPlayWithFriendsTile              ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UFortGameActivity*)                        SelectedGameActivity                                        ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UFortActivityBrowserColorSchemeAsset*)     CurrentColorScheme                                          ___ OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UFortActivityCategoryPageView*)            CachedCategoryPageView                                      ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UFortActivityCreatorPageView*)             CachedCreatorPageView                                       ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	DMember(bool)                                      bCCUModalEnabled                                            ___ OFFSET(get<bool>, {0x630, 1, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortActivityBrowserColorSchemeAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<UMaterialParameterCollection*, FColorSchemeParamaterValues>) MaterialCollectionOverrides          ___ OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserListView
/// Size: 0x0230 (0x000298 - 0x0004C8)
class UFortActivityBrowserListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	DMember(float)                                     DirectionalNavigationTimeThreshold                          ___ OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(UClass*)                                   PromotedActivityClass                                       ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UClass*)                                   DiscoverItemRowClass                                        ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UClass*)                                   HomebarItemRowClass                                         ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(TMap<FName, UClass*>)                      RowTypes                                                    ___ OFFSET(get<T>, {0x3A0, 80, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTileBase
/// Size: 0x0070 (0x001470 - 0x0014E0)
class UFortActivityBrowserTileBase : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	CMember(UFortGameActivity*)                        AssignedGameActivity                                        ___ OFFSET(get<T>, {0x1488, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile
/// Size: 0x00C0 (0x0014E0 - 0x0015A0)
class UFortActivityBrowserPlayWithFriendsTile : public UFortActivityBrowserTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5536;

public:
	DMember(int32_t)                                   MaxNamesToDisplay                                           ___ OFFSET(get<int32_t>, {0x14D8, 4, 0, 0})
	DMember(int32_t)                                   MaxPortraitsToDisplay                                       ___ OFFSET(get<int32_t>, {0x14DC, 4, 0, 0})
	CMember(UFortJoinablePartyPortraitsDisplay*)       PartyMembersAvatarsDisplay                                  ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	DMember(bool)                                      bIsActiveInvite                                             ___ OFFSET(get<bool>, {0x14F8, 1, 0, 0})
	DMember(int32_t)                                   CurrentPartySize                                            ___ OFFSET(get<int32_t>, {0x14FC, 4, 0, 0})
	DMember(bool)                                      bIsPartyPrivate                                             ___ OFFSET(get<bool>, {0x1500, 1, 0, 0})
	CMember(UFortGameActivity*)                        CachedGameActivity                                          ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(TWeakObjectPtr<USocialUser*>)              CachedTargetSocialUser                                      ___ OFFSET(get<T>, {0x1520, 8, 0, 0})
	SMember(FText)                                     CurrentCTAButtonText                                        ___ OFFSET(get<T>, {0x1528, 24, 0, 0})
	SMember(FText)                                     JoinPartyText                                               ___ OFFSET(get<T>, {0x1540, 24, 0, 0})
	SMember(FText)                                     RequestToJoinText                                           ___ OFFSET(get<T>, {0x1558, 24, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRow
/// Size: 0x00C0 (0x0002D0 - 0x000390)
class UFortActivityBrowserRow : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(UCommonTextBlock*)                         Text_CategoryName                                           ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(float)                                     MinimumVisibilityPercentageForRowActivation                 ___ OFFSET(get<float>, {0x388, 4, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero
/// Size: 0x0080 (0x000390 - 0x000410)
class UFortActivityBrowserRowHero : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(UFortActivityListView*)                    ListView_Activities                                         ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	DMember(bool)                                      bPlayDetailsAnimationOnScreenOpen                           ___ OFFSET(get<bool>, {0x3A3, 1, 0, 0})
	DMember(float)                                     DetailsDisplayUpdateDelay                                   ___ OFFSET(get<float>, {0x3A4, 4, 0, 0})
	CMember(UFortActivityDetailsDisplay*)              DetailsDisplay_SelectedActivity                             ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UFortActivityVideoCycle*)                  ActivityVideoCycleWidget                                    ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         BoundKeyArtOutroAnimation                                   ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
	DMember(bool)                                      bShouldAutoCycle                                            ___ OFFSET(get<bool>, {0x3E2, 1, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowList
/// Size: 0x0020 (0x000390 - 0x0003B0)
class UFortActivityBrowserRowList : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(UFortActivityListView*)                    ListView_Activities                                         ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageLeft                                             ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageRight                                            ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowPromoted
/// Size: 0x0008 (0x000390 - 0x000398)
class UFortActivityBrowserRowPromoted : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           ___ OFFSET(get<T>, {0x390, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserView
/// Size: 0x00A8 (0x000438 - 0x0004E0)
class UFortActivityBrowserView : public UFortActivityView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	DMember(bool)                                      bShowCustomMatchmakingModalButton                           ___ OFFSET(get<bool>, {0x440, 1, 0, 0})
	DMember(bool)                                      bShowSpectateMatchModalButton                               ___ OFFSET(get<bool>, {0x441, 1, 0, 0})
	DMember(bool)                                      bShowMobileGameDetailsButton                                ___ OFFSET(get<bool>, {0x442, 1, 0, 0})
	DMember(bool)                                      bShowMobileAcceptButton                                     ___ OFFSET(get<bool>, {0x443, 1, 0, 0})
	DMember(bool)                                      bShowBackToTopButton                                        ___ OFFSET(get<bool>, {0x444, 1, 0, 0})
	SMember(FName)                                     DiscoverySurfaceName                                        ___ OFFSET(get<T>, {0x448, 4, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowView
/// Size: 0x0190 (0x0004E0 - 0x000670)
class UFortActivityBrowserRowView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	DMember(float)                                     MouseWheelScrollTimeThreshold                               ___ OFFSET(get<float>, {0x4E8, 4, 0, 0})
	CMember(UFortActivityBrowserListView*)             BrowserList_Activities                                      ___ OFFSET(get<T>, {0x4F0, 8, 0, 0})
	SMember(FName)                                     TabNameID                                                   ___ OFFSET(get<T>, {0x558, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          ___ OFFSET(get<T>, {0x560, 240, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       ___ OFFSET(get<T>, {0x650, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTile
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortActivityBrowserTile : public UFortActivityBrowserTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	CMember(UFortActivityTileDetailsDisplay*)          Display_TileDetails                                         ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView
/// Size: 0x0130 (0x0004E0 - 0x000610)
class UFortActivityPlayerBrowserView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	CMember(UFortGameActivityProvider*)                ActivityProvider                                            ___ OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(UFortActivityTileView*)                    TileView_PlayerActivities                                   ___ OFFSET(get<T>, {0x4F0, 8, 0, 0})
	SMember(FName)                                     TabNameID                                                   ___ OFFSET(get<T>, {0x4F8, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          ___ OFFSET(get<T>, {0x500, 240, 0, 0})
	CMember(EFortCreativeDiscoveryPlayHistoryType)     PlayHistoryProviderType                                     ___ OFFSET(get<T>, {0x5F0, 1, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryPageView
/// Size: 0x0040 (0x000610 - 0x000650)
class UFortActivityCategoryPageView : public UFortActivityPlayerBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	CMember(UCommonRichTextBlock*)                     Text_CategoryTitle                                          ___ OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackToTop                                            ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileAccept                                         ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileShowGameDetails                                ___ OFFSET(get<T>, {0x640, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileViewTileBase
/// Size: 0x0090 (0x001470 - 0x001500)
class UFortActivityTileViewTileBase : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryTile
/// Size: 0x0010 (0x001500 - 0x001510)
class UFortActivityCategoryTile : public UFortActivityTileViewTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	CMember(UCommonTextBlock*)                         Text_CategoryTitle                                          ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryTilePanel
/// Size: 0x0070 (0x0002D0 - 0x000340)
class UFortActivityCategoryTilePanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(UFortActivityTileView*)                    TileView_Categories                                         ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(int32_t)                                   TileViewQueryThreshold                                      ___ OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	CMember(UFortCreativeDiscoveryActivityProvider*)   CachedActivityProvider                                      ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryView
/// Size: 0x0120 (0x0004E0 - 0x000600)
class UFortActivityCategoryView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	SMember(FName)                                     TabNameID                                                   ___ OFFSET(get<T>, {0x4E8, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          ___ OFFSET(get<T>, {0x4F0, 240, 0, 0})
	CMember(UFortActivityCategoryTilePanel*)           TilePanel_Featured                                          ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UFortActivityCategoryTilePanel*)           TilePanel_All                                               ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UFortActivityCategoryTilePanel*)           CurrentSelectedPanel                                        ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCreateView
/// Size: 0x0120 (0x0004E0 - 0x000600)
class UFortActivityCreateView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	SMember(FName)                                     TabNameID                                                   ___ OFFSET(get<T>, {0x4E8, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          ___ OFFSET(get<T>, {0x4F0, 240, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Create                                               ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCreatorPageView
/// Size: 0x0090 (0x000650 - 0x0006E0)
class UFortActivityCreatorPageView : public UFortActivityCategoryPageView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	CMember(UFortGameActivity*)                        ActivityDetailsSelectedGameActivity                         ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	DMember(int32_t)                                   AmountOfCreatorLinkEntriesQueried                           ___ OFFSET(get<int32_t>, {0x680, 4, 0, 0})
	DMember(int32_t)                                   ProcessedCreatorLinkEntries                                 ___ OFFSET(get<int32_t>, {0x684, 4, 0, 0})
	DMember(int32_t)                                   AmountOfEntriesQueried                                      ___ OFFSET(get<int32_t>, {0x688, 4, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverView
/// Size: 0x00A0 (0x000670 - 0x000710)
class UFortActivityDiscoverView : public UFortActivityBrowserRowView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	DMember(bool)                                      bPlayDetailsAnimationOnScreenOpen                           ___ OFFSET(get<bool>, {0x670, 1, 0, 0})
	DMember(float)                                     DetailsDisplayUpdateDelay                                   ___ OFFSET(get<float>, {0x674, 4, 0, 0})
	CMember(UClass*)                                   MovieWidgetClass                                            ___ OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UFortActivityDetailsDisplay*)              DetailsDisplay_SelectedActivity                             ___ OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UFortActivityDetailsDisplay*)              DetailsDisplay_PromotedActivity                             ___ OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(UPanelWidget*)                             Panel_VideoSlot                                             ___ OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(UPanelWidget*)                             Panel_PromotedVideoSlot                                     ___ OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(UFortActivatableMovieWidget*)              ActivityMovieWidget                                         ___ OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(UFortActivatableMovieWidget*)              PromotedActivityMovieWidget                                 ___ OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         BoundKeyArtOutroAnimation                                   ___ OFFSET(get<T>, {0x6F8, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2
/// Size: 0x00A0 (0x000670 - 0x000710)
class UFortActivityDiscoverViewV2 : public UFortActivityBrowserRowView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	CMember(UFortDiscoverBackgroundManager*)           DiscoverBackgroundManager                                   ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UDiscoverSelectedActivityViewModel*)       SelectedActivityVM                                          ___ OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftCustomMatchmakingModalClass                             ___ OFFSET(get<T>, {0x6B0, 32, 0, 0})
	SMember(FDataTableRowHandle)                       BackToTopInputAction                                        ___ OFFSET(get<T>, {0x6D8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CustomKeyInputAction                                        ___ OFFSET(get<T>, {0x6F0, 16, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityFavoriteBrowserView
/// Size: 0x0000 (0x000610 - 0x000610)
class UFortActivityFavoriteBrowserView : public UFortActivityPlayerBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivityListItemWrapper
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortActivityListItemWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UFortGameActivity*)                        GameActivity                                                ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityListView
/// Size: 0x0188 (0x000298 - 0x000420)
class UFortActivityListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	DMember(float)                                     DirectionalNavigationTimeThreshold                          ___ OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 ___ OFFSET(get<T>, {0x384, 1, 0, 0})
	DMember(float)                                     EntrySpacing                                                ___ OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(bool)                                      bCircularNavigationEnabled                                  ___ OFFSET(get<bool>, {0x38C, 1, 0, 0})
	CMember(TMap<EActivityBrowserTileStyle, UClass*>)  TileTypes                                                   ___ OFFSET(get<T>, {0x390, 80, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityLobbyTile
/// Size: 0x0070 (0x0014C0 - 0x001530)
class UFortActivityLobbyTile : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UFortActivityBrowserTag*)                  ActivityBrowserTag_EpicOriginal                             ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UClass*)                                   ActivityModeSetSelectionModalClass                          ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UFortGameActivityProvider*)                ActivityProvider                                            ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(TArray<UFortGameActivity*>)                CachedQueriedActivities                                     ___ OFFSET(get<T>, {0x14E0, 16, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal
/// Size: 0x0068 (0x000400 - 0x000468)
class UFortActivityModeSetSelectionModal : public UFortActivityModeSetSelectionModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackBoard                                            ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UFortActivityModeSetSelection*)            List_SubModeList                                            ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UFortActivitySquadFillButton*)             Button_ActivitySquadFill                                    ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UFortActivityPrivacyButton*)               Button_ActivityPrivacy                                      ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UFortActivityHabaneroButton*)              Button_Activity_Habanero                                    ___ OFFSET(get<T>, {0x458, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile
/// Size: 0x0050 (0x001500 - 0x001550)
class UFortActivityPlayerBrowserTile : public UFortActivityTileViewTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
	CMember(UFortActivityTileDetailsDisplay*)          Display_TileDetails                                         ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LastPlayedDate                                         ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerView
/// Size: 0x0140 (0x0004E0 - 0x000620)
class UFortActivityPlayerView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	SMember(FName)                                     TabNameID                                                   ___ OFFSET(get<T>, {0x4E8, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          ___ OFFSET(get<T>, {0x4F0, 240, 0, 0})
	CMember(UClass*)                                   TabButtonClass                                              ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UFortTabListWidgetBase_Legacy*)            TabList_PlayerViewTabs                                      ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_PlayerBrowserViews                                 ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UFortActivityPlayerBrowserView*)           BrowserView_Favorites                                       ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UFortActivityPlayerBrowserView*)           BrowserView_History                                         ___ OFFSET(get<T>, {0x600, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerViewTabButton
/// Size: 0x0000 (0x0014A0 - 0x0014A0)
class UFortActivityPlayerViewTabButton : public UFortTabButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5280;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivitySearchView
/// Size: 0x0160 (0x0004E0 - 0x000640)
class UFortActivitySearchView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	SMember(FName)                                     TabNameID                                                   ___ OFFSET(get<T>, {0x4E8, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          ___ OFFSET(get<T>, {0x4F0, 240, 0, 0})
	CMember(UEditableText*)                            EditableText_IslandLink                                     ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivitySeasonalBrowserView
/// Size: 0x0000 (0x000610 - 0x000610)
class UFortActivitySeasonalBrowserView : public UFortActivityPlayerBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivitySelector
/// Size: 0x0130 (0x000028 - 0x000158)
class UFortActivitySelector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UFortGameActivity*)                        SelectedGameActivity                                        ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UUserWidget*)                              SelectedContextWidget                                       ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UFortActivityCreatorPageView*)             CachedCreatorPageView                                       ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TMap<FName, UFortActivityBrowserColorSchemeAsset*>) ColorSchemes                                       ___ OFFSET(get<T>, {0x70, 80, 0, 0})
	CMember(UFortActivityBrowserColorSchemeAsset*)     CurrentColorScheme                                          ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay
/// Size: 0x0170 (0x001470 - 0x0015E0)
class UFortActivityTileDetailsDisplay : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	SMember(FMulticastInlineDelegate)                  OnActivitySelectedDelegate                                  ___ OFFSET(get<T>, {0x1470, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActivityUnSelectedDelegate                                ___ OFFSET(get<T>, {0x1480, 16, 0, 0})
	DMember(bool)                                      bShowDetailsButton                                          ___ OFFSET(get<bool>, {0x1490, 1, 0, 0})
	DMember(int32_t)                                   DefaultColumnSize                                           ___ OFFSET(get<int32_t>, {0x1494, 4, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           ___ OFFSET(get<T>, {0x1498, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PlayerCount                                            ___ OFFSET(get<T>, {0x14A0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Favorite                                             ___ OFFSET(get<T>, {0x14A8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Details                                              ___ OFFSET(get<T>, {0x14B0, 8, 0, 0})
	CMember(UFortActivityBrowserTag*)                  ActivityBrowserTag_EpicOriginal                             ___ OFFSET(get<T>, {0x14B8, 8, 0, 0})
	CMember(UTextBlock*)                               Text_DebugId                                                ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UFortSqueegeeWidgetInjectionSlot*)         SqueegeeInjectionSlot                                       ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UFortActivityVideoCycle*)                  ActivityVideoCycleWidget                                    ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(TMap<uint32_t, ECreativeLinkPreviewSize>)  MinColumnSizeToImageSize                                    ___ OFFSET(get<T>, {0x14D8, 80, 0, 0})
	DMember(char)                                      MaxMobileColumnSize                                         ___ OFFSET(get<char>, {0x1528, 1, 0, 0})
	DMember(char)                                      MinMobileColumnSize                                         ___ OFFSET(get<char>, {0x1529, 1, 0, 0})
	DMember(bool)                                      bIsVideoEnabledForDynamicTileSizingV2                       ___ OFFSET(get<bool>, {0x152A, 1, 0, 0})
	CMember(UClass*)                                   ActivityDetailsModalClass                                   ___ OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UClass*)                                   ActivityCreatorPageViewClass                                ___ OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UClass*)                                   ActivityCampaignPurchaseScreenClass                         ___ OFFSET(get<T>, {0x1540, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileView
/// Size: 0x0000 (0x000C00 - 0x000C00)
class UFortActivityTileView : public UCommonTileView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3072;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverItemBrowserRow
/// Size: 0x0050 (0x000390 - 0x0003E0)
class UFortDiscoverItemBrowserRow : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(UFortDiscoverItemListView*)                ListView_Tiles                                              ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageLeft                                             ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageRight                                            ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverItemListView
/// Size: 0x0150 (0x000298 - 0x0003E8)
class UFortDiscoverItemListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	DMember(float)                                     DirectionalNavigationTimeThreshold                          ___ OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(UClass*)                                   PlayWithFriendsEntryWidgetClass                             ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UClass*)                                   ActivityEntryWidgetClass                                    ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 ___ OFFSET(get<T>, {0x398, 1, 0, 0})
	DMember(float)                                     EntrySpacing                                                ___ OFFSET(get<float>, {0x39C, 4, 0, 0})
	DMember(bool)                                      bCircularNavigationEnabled                                  ___ OFFSET(get<bool>, {0x3A0, 1, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.ActivityLibraryComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UActivityLibraryComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(UFortActivitySelector*)                    ActivitySelector                                            ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserContext
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortActivityBrowserContext : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/DiscoveryBrowserUI.OverrideMatchmakingUIComponent
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UOverrideMatchmakingUIComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMatchmakingUIOverride)                    MatchmakingUIOverride                                       ___ OFFSET(get<T>, {0xA0, 96, 0, 0})
};

/// Struct /Script/DiscoveryBrowserUI.ColorSchemeParamaterValues
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FColorSchemeParamaterValues : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UMaterialParameterCollection*)             AlternateMaterialCollection                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TMap<FName, float>)                        ScalarParameterValues                                       ___ OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 VectorParameterValues                                       ___ OFFSET(get<T>, {0x58, 80, 0, 0})
};

/// Enum /Script/DiscoveryBrowserUI.EActivityBrowserTileStyle
/// Size: 0x04
enum EActivityBrowserTileStyle : uint8_t
{
	EActivityBrowserTileStyle__Default0                                              = 0,
	EActivityBrowserTileStyle__Minimal1                                              = 1,
	EActivityBrowserTileStyle__Detailed2                                             = 2,
	EActivityBrowserTileStyle__EActivityBrowserTileStyle_MAX3                        = 3
};

