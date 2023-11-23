
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
/// Size: 0x0030 (0x000068 - 0x000098)
class UDiscoverSelectedActivityViewModel : public UMVVMViewModelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      bLoading                                                    OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bHasPartyData                                               OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bIsActiveInvite                                             OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      bIsPartyPrivate                                             OFFSET(get<bool>, {0x6B, 1, 0, 0})
	DMember(int32_t)                                   CurrentPartySize                                            OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	SMember(FText)                                     RichPresenceText                                            OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	CMember(UFortActivityViewModel*)                   ActivityVM                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTabButton
/// Size: 0x0000 (0x0014C0 - 0x0014C0)
class UFortActivityBrowserTabButton : public UFortTabButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverBackgroundManager
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UFortDiscoverBackgroundManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverHomespace
/// Size: 0x0000 (0x000420 - 0x000420)
class UFortDiscoverHomespace : public UScrollableActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowser
/// Size: 0x0260 (0x000400 - 0x000660)
class UFortActivityBrowser : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_TabActivityBrowserViews                            OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowCustomMatchmakingModal                           OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackToTop                                            OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileShowGameDetails                                OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileAccept                                         OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_JoinAsSpectator                                      OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowSpectateMatchModal                               OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UFortTabListWidgetBase_Legacy*)            TabList_BrowserTabs                                         OFFSET(get<T>, {0x450, 8, 0, 0})
	SMember(FPrimaryContentSetup)                      PrimaryContentSetup                                         OFFSET(getStruct<T>, {0x458, 3, 0, 0})
	CMember(UClass*)                                   TabButtonClass                                              OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UClass*)                                   ActivityDetailsModalClass                                   OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UClass*)                                   ActivityModeSetSelectionModalClass                          OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UClass*)                                   ActivityModeSetFirstTimeNotificationModalClass              OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UClass*)                                   AttributionsModalClass                                      OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UClass*)                                   CreatorPageViewClass                                        OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UClass*)                                   CategoryPageViewClass                                       OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftCustomMatchmakingModalClass                             OFFSET(get<T>, {0x498, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftSpectateMatchModalClass                                 OFFSET(get<T>, {0x4B8, 32, 0, 0})
	CMember(UClass*)                                   CampaignPurchaseScreenClass                                 OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(UClass*)                                   CCUModalClass                                               OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(TMap<FName, UFortActivityBrowserColorSchemeAsset*>) ColorSchemes                                       OFFSET(get<T>, {0x4E8, 80, 0, 0})
	SMember(FText)                                     MobileAcceptButtonBaseText                                  OFFSET(getStruct<T>, {0x538, 24, 0, 0})
	CMember(UFortCreativeDiscoverySurfaceManager*)     Manager                                                     OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortActivityBrowserPlayWithFriendsTile*>) LastSelectedPlayWithFriendsTile              OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UFortGameActivity*)                        SelectedGameActivity                                        OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortActivityBrowserColorSchemeAsset*)     CurrentColorScheme                                          OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UFortActivityCategoryPageView*)            CachedCategoryPageView                                      OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UFortActivityCreatorPageView*)             CachedCreatorPageView                                       OFFSET(get<T>, {0x640, 8, 0, 0})
	DMember(bool)                                      bCCUModalEnabled                                            OFFSET(get<bool>, {0x648, 1, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnSwapColorScheme
	// void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme);                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnPlayerQueueTypeChanged
	// void OnPlayerQueueTypeChanged(EPlayerQueueType PlayerQueueType);                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnEnableColorScheme
	// void OnEnableColorScheme(bool bIsColorSchemeActive);                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnActivitySelected
	// void OnActivitySelected();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.HandleTabChanged
	// void HandleTabChanged(FName TabID);                                                                                      // [0xa603bbc] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserColorSchemeAsset
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortActivityBrowserColorSchemeAsset : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<UMaterialParameterCollection*, FColorSchemeParamaterValues>) MaterialCollectionOverrides          OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserListView
/// Size: 0x0238 (0x000298 - 0x0004D0)
class UFortActivityBrowserListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	DMember(float)                                     DirectionalNavigationTimeThreshold                          OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(UFortHabaneroDisplayData*)                 HabaneroDisplayData                                         OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UClass*)                                   PromotedActivityClass                                       OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UClass*)                                   DiscoverItemRowClass                                        OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UClass*)                                   HomebarItemRowClass                                         OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(TMap<FName, UClass*>)                      RowTypes                                                    OFFSET(get<T>, {0x3A8, 80, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserListView.NavigateToActivityInFirstRow
	// void NavigateToActivityInFirstRow(int32_t ActivityItemIndex);                                                            // [0x2f744f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserListView.HandleVisibleEntriesChanged
	// void HandleVisibleEntriesChanged();                                                                                      // [0xa603e04] Final|Native|Protected|BlueprintCallable|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTileBase
/// Size: 0x0070 (0x001490 - 0x001500)
class UFortActivityBrowserTileBase : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(UFortGameActivity*)                        AssignedGameActivity                                        OFFSET(get<T>, {0x14A8, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile
/// Size: 0x00E0 (0x001500 - 0x0015E0)
class UFortActivityBrowserPlayWithFriendsTile : public UFortActivityBrowserTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	DMember(int32_t)                                   MaxNamesToDisplay                                           OFFSET(get<int32_t>, {0x14F8, 4, 0, 0})
	DMember(int32_t)                                   MaxPortraitsToDisplay                                       OFFSET(get<int32_t>, {0x14FC, 4, 0, 0})
	CMember(UFortJoinablePartyPortraitsDisplay*)       PartyMembersAvatarsDisplay                                  OFFSET(get<T>, {0x1510, 8, 0, 0})
	DMember(bool)                                      bIsActiveInvite                                             OFFSET(get<bool>, {0x1518, 1, 0, 0})
	DMember(int32_t)                                   CurrentPartySize                                            OFFSET(get<int32_t>, {0x151C, 4, 0, 0})
	DMember(bool)                                      bIsPartyPrivate                                             OFFSET(get<bool>, {0x1520, 1, 0, 0})
	CMember(UFortGameActivity*)                        CachedGameActivity                                          OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(TWeakObjectPtr<USocialUser*>)              CachedTargetSocialUser                                      OFFSET(get<T>, {0x1540, 8, 0, 0})
	SMember(FText)                                     CurrentCTAButtonText                                        OFFSET(getStruct<T>, {0x1548, 24, 0, 0})
	SMember(FText)                                     JoinPartyText                                               OFFSET(getStruct<T>, {0x1560, 24, 0, 0})
	SMember(FText)                                     RequestToJoinText                                           OFFSET(getStruct<T>, {0x1578, 24, 0, 0})
	SMember(FDataTableRowHandle)                       JoinFriendInputAction_Touch                                 OFFSET(getStruct<T>, {0x1590, 16, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateSingleFriendName
	// void UpdateSingleFriendName(FText& SingleFriendName);                                                                    // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateRichPresence
	// void UpdateRichPresence(FText& RichPresence);                                                                            // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdatePartyMemberNames
	// void UpdatePartyMemberNames(FText& Names);                                                                               // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateOtherPlayersSubText
	// void UpdateOtherPlayersSubText(FText& OtherPlayersSubText);                                                              // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateLastInteraction
	// void UpdateLastInteraction(FText& LastInteraction);                                                                      // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateIslandThumbnail
	// void UpdateIslandThumbnail(UTexture* ThumbnailTexture);                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateCTAButtonInteraction
	// void UpdateCTAButtonInteraction(bool bIsInteractionEnabled);                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateCTAButtonInfo
	// void UpdateCTAButtonInfo(FText& InteractionText, bool bInteractionFound);                                                // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnUpdateColumnSize
	// void OnUpdateColumnSize(int32_t NewColumnSize);                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTileActiveChanged
	// void OnTileActiveChanged(bool bIsTileActive);                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureLoadingComplete
	// void OnTextureLoadingComplete(UTexture* ThumbnailTexture);                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureBeginLoading
	// void OnTextureBeginLoading();                                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.HandleCTAButtonClicked
	// void HandleCTAButtonClicked();                                                                                           // [0xa603b6c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetMaxPartySize
	// int32_t GetMaxPartySize();                                                                                               // [0xa603a48] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetCTAButtonText
	// FText GetCTAButtonText();                                                                                                // [0xa60376c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.BP_PartyInformationUpdated
	// void BP_PartyInformationUpdated(bool bInIsTileSelected);                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRow
/// Size: 0x00C0 (0x0002E8 - 0x0003A8)
class UFortActivityBrowserRow : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	CMember(UCommonTextBlock*)                         Text_CategoryName                                           OFFSET(get<T>, {0x398, 8, 0, 0})
	DMember(float)                                     MinimumVisibilityPercentageForRowActivation                 OFFSET(get<float>, {0x3A0, 4, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged
	// void OnRowPeekStateChanged(bool bIsInPeekState);                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveUp
	// void OnRowMoveUp(bool bMovingOffscreen);                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveDown
	// void OnRowMoveDown(bool bMovingOffscreen);                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsSelectedChanged
	// void OnRowIsSelectedChanged(bool bIsSelected);                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged
	// void OnRowIsActiveChanged(bool bIsActive);                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged
	// void OnCategoryItemChanged(bool bPlayAnimation);                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsSelected
	// bool GetIsSelected();                                                                                                    // [0xa6039d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState
	// bool GetIsInPeekState();                                                                                                 // [0xa6039a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive
	// bool GetIsActive();                                                                                                      // [0xa60394c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero
/// Size: 0x0080 (0x0003A8 - 0x000428)
class UFortActivityBrowserRowHero : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(UFortActivityListView*)                    ListView_Activities                                         OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       OFFSET(get<T>, {0x3B0, 8, 0, 0})
	DMember(bool)                                      bPlayDetailsAnimationOnScreenOpen                           OFFSET(get<bool>, {0x3BB, 1, 0, 0})
	DMember(float)                                     DetailsDisplayUpdateDelay                                   OFFSET(get<float>, {0x3BC, 4, 0, 0})
	CMember(UFortActivityDetailsDisplay*)              DetailsDisplay_SelectedActivity                             OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UFortActivityVideoCycle*)                  ActivityVideoCycleWidget                                    OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         BoundKeyArtOutroAnimation                                   OFFSET(get<T>, {0x3F0, 8, 0, 0})
	DMember(bool)                                      bShouldAutoCycle                                            OFFSET(get<bool>, {0x3FA, 1, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoStarted
	// void OnVideoStarted();                                                                                                   // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoEndReached
	// void OnVideoEndReached();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnUpdateDetailsDisplay
	// void OnUpdateDetailsDisplay();                                                                                           // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnTileClicked
	// void OnTileClicked();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnRowHeroFocusChanged
	// void OnRowHeroFocusChanged(bool bHasFocus);                                                                              // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryStatusChanged
	// void OnQueryStatusChanged(bool bIsActive);                                                                               // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryActivitiesFinished
	// void OnQueryActivitiesFinished();                                                                                        // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtOutro
	// void OnPlayKeyArtOutro();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtIntro
	// void OnPlayKeyArtIntro();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnListViewFinishedAddingEntries
	// void OnListViewFinishedAddingEntries(int32_t ActivityCount);                                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnActivityUpdated
	// void OnActivityUpdated();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                         // [0xa603fd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.IsInOutroState
	// bool IsInOutroState();                                                                                                   // [0x8eaba94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.IsImageLoading
	// bool IsImageLoading();                                                                                                   // [0x8eabaac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleStarted
	// void HandleActivityVideoCycleStarted();                                                                                  // [0xa603b58] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleEndReached
	// void HandleActivityVideoCycleEndReached();                                                                               // [0xa603b44] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetKeyArtOutroAnimation
	// UWidgetAnimation* GetKeyArtOutroAnimation();                                                                             // [0xa6039f8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCyclingPauseDelay
	// float GetCyclingPauseDelay();                                                                                            // [0xa603848] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCyclingDelay
	// float GetCyclingDelay();                                                                                                 // [0xa603818] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCurrentTexture
	// UTexture* GetCurrentTexture();                                                                                           // [0xa6037c8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.CycleNextActivity
	// void CycleNextActivity();                                                                                                // [0xa6036ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.CheckUpdateDetailsDelay
	// void CheckUpdateDetailsDelay();                                                                                          // [0xa603684] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowList
/// Size: 0x0020 (0x0003A8 - 0x0003C8)
class UFortActivityBrowserRowList : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	CMember(UFortActivityListView*)                    ListView_Activities                                         OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageLeft                                             OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageRight                                            OFFSET(get<T>, {0x3B8, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged
	// void OnQueryStatusChanged(bool bIsActive);                                                                               // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowPromoted
/// Size: 0x0008 (0x0003A8 - 0x0003B0)
class UFortActivityBrowserRowPromoted : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           OFFSET(get<T>, {0x3A8, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowPromoted.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserView
/// Size: 0x00A8 (0x000450 - 0x0004F8)
class UFortActivityBrowserView : public UFortActivityView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1272;

public:
	DMember(bool)                                      bShowCustomMatchmakingModalButton                           OFFSET(get<bool>, {0x458, 1, 0, 0})
	DMember(bool)                                      bShowSpectateMatchModalButton                               OFFSET(get<bool>, {0x459, 1, 0, 0})
	DMember(bool)                                      bShowMobileGameDetailsButton                                OFFSET(get<bool>, {0x45A, 1, 0, 0})
	DMember(bool)                                      bShowMobileAcceptButton                                     OFFSET(get<bool>, {0x45B, 1, 0, 0})
	DMember(bool)                                      bShowBackToTopButton                                        OFFSET(get<bool>, {0x45C, 1, 0, 0})
	SMember(FName)                                     DiscoverySurfaceName                                        OFFSET(getStruct<T>, {0x460, 4, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserView.OnSurfaceDataDirty
	// void OnSurfaceDataDirty();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserView.GetInvalidActivityReason
	// EFortInvalidActivityReason GetInvalidActivityReason();                                                                   // [0xa6038c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowView
/// Size: 0x01B8 (0x0004F8 - 0x0006B0)
class UFortActivityBrowserRowView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	DMember(float)                                     MouseWheelScrollTimeThreshold                               OFFSET(get<float>, {0x500, 4, 0, 0})
	CMember(UFortActivityBrowserListView*)             BrowserList_Activities                                      OFFSET(get<T>, {0x508, 8, 0, 0})
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x570, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x580, 272, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       OFFSET(get<T>, {0x690, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnRowChanged
	// void OnRowChanged(int32_t NewCategoryIndex);                                                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnQueryActivitiesFinished
	// void OnQueryActivitiesFinished();                                                                                        // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnListViewScrolled
	// void OnListViewScrolled(float ItemOffset, float DistanceRemaining);                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnActivityUpdated
	// void OnActivityUpdated();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTile
/// Size: 0x0040 (0x001500 - 0x001540)
class UFortActivityBrowserTile : public UFortActivityBrowserTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5440;

public:
	CMember(UFortActivityTileDetailsDisplay*)          Display_TileDetails                                         OFFSET(get<T>, {0x14F8, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserTile.HandleActivitySelected
	// void HandleActivitySelected();                                                                                           // [0xa603b08] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView
/// Size: 0x0158 (0x0004F8 - 0x000650)
class UFortActivityPlayerBrowserView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	CMember(UFortGameActivityProvider*)                ActivityProvider                                            OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UFortActivityTileView*)                    TileView_PlayerActivities                                   OFFSET(get<T>, {0x508, 8, 0, 0})
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x510, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x520, 272, 0, 0})
	CMember(EFortCreativeDiscoveryPlayHistoryType)     PlayHistoryProviderType                                     OFFSET(get<T>, {0x630, 1, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.PlayViewIntro
	// void PlayViewIntro();                                                                                                    // [0xa604144] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesStarted
	// void OnQueryActivitiesStarted();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesComplete
	// void OnQueryActivitiesComplete();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnPlayViewIntro
	// void OnPlayViewIntro();                                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.BP_OnTileViewUpdated
	// void BP_OnTileViewUpdated();                                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryPageView
/// Size: 0x0040 (0x000650 - 0x000690)
class UFortActivityCategoryPageView : public UFortActivityPlayerBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	CMember(UCommonRichTextBlock*)                     Text_CategoryTitle                                          OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackToTop                                            OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileAccept                                         OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileShowGameDetails                                OFFSET(get<T>, {0x680, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileViewTileBase
/// Size: 0x0090 (0x001490 - 0x001520)
class UFortActivityTileViewTileBase : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryTile
/// Size: 0x0010 (0x001520 - 0x001530)
class UFortActivityCategoryTile : public UFortActivityTileViewTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	CMember(UCommonTextBlock*)                         Text_CategoryTitle                                          OFFSET(get<T>, {0x1520, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryTile.OnTileActiveSet
	// void OnTileActiveSet(bool bIsTileActive);                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryTilePanel
/// Size: 0x0070 (0x0002E8 - 0x000358)
class UFortActivityCategoryTilePanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(UFortActivityTileView*)                    TileView_Categories                                         OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(int32_t)                                   TileViewQueryThreshold                                      OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	CMember(UFortCreativeDiscoveryActivityProvider*)   CachedActivityProvider                                      OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryView
/// Size: 0x0148 (0x0004F8 - 0x000640)
class UFortActivityCategoryView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x500, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x510, 272, 0, 0})
	CMember(UFortActivityCategoryTilePanel*)           TilePanel_Featured                                          OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UFortActivityCategoryTilePanel*)           TilePanel_All                                               OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UFortActivityCategoryTilePanel*)           CurrentSelectedPanel                                        OFFSET(get<T>, {0x630, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.OnSurfaceDataReady
	// void OnSurfaceDataReady();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.OnCategoryTilePanelSelected
	// void OnCategoryTilePanelSelected(UFortActivityCategoryTilePanel* SelectedPanel);                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.NavigateFromPanel
	// UFortActivityCategoryTilePanel* NavigateFromPanel(EUINavigation Direction, UFortActivityCategoryTilePanel* NavigatingPanel); // [0xa604054] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.GetTopMostVisiblePanel
	// UFortActivityCategoryTilePanel* GetTopMostVisiblePanel();                                                                // [0xa603ae0] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.GetCurrentSelectedPanel
	// UFortActivityCategoryTilePanel* GetCurrentSelectedPanel();                                                               // [0xa6037b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCreateView
/// Size: 0x0148 (0x0004F8 - 0x000640)
class UFortActivityCreateView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x500, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x510, 272, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Create                                               OFFSET(get<T>, {0x620, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCreateView.OnCreativeActivityUpdated
	// void OnCreativeActivityUpdated();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCreateView.GetInvalidCreativeActivityReason
	// EFortInvalidActivityReason GetInvalidCreativeActivityReason();                                                           // [0xa603928] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCreatorPageView
/// Size: 0x0090 (0x000690 - 0x000720)
class UFortActivityCreatorPageView : public UFortActivityCategoryPageView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	CMember(UFortGameActivity*)                        ActivityDetailsSelectedGameActivity                         OFFSET(get<T>, {0x698, 8, 0, 0})
	DMember(int32_t)                                   AmountOfCreatorLinkEntriesQueried                           OFFSET(get<int32_t>, {0x6C0, 4, 0, 0})
	DMember(int32_t)                                   ProcessedCreatorLinkEntries                                 OFFSET(get<int32_t>, {0x6C4, 4, 0, 0})
	DMember(int32_t)                                   AmountOfEntriesQueried                                      OFFSET(get<int32_t>, {0x6C8, 4, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnNoContentFoundForCreator
	// void OnNoContentFoundForCreator();                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnCreatorActivitiesQueryFinished
	// void OnCreatorActivitiesQueryFinished();                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverView
/// Size: 0x00A0 (0x0006B0 - 0x000750)
class UFortActivityDiscoverView : public UFortActivityBrowserRowView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	DMember(bool)                                      bPlayDetailsAnimationOnScreenOpen                           OFFSET(get<bool>, {0x6B0, 1, 0, 0})
	DMember(float)                                     DetailsDisplayUpdateDelay                                   OFFSET(get<float>, {0x6B4, 4, 0, 0})
	CMember(UClass*)                                   MovieWidgetClass                                            OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(UFortActivityDetailsDisplay*)              DetailsDisplay_SelectedActivity                             OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(UFortActivityDetailsDisplay*)              DetailsDisplay_PromotedActivity                             OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(UPanelWidget*)                             Panel_VideoSlot                                             OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(UPanelWidget*)                             Panel_PromotedVideoSlot                                     OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(UFortActivatableMovieWidget*)              ActivityMovieWidget                                         OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(UFortActivatableMovieWidget*)              PromotedActivityMovieWidget                                 OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         BoundKeyArtOutroAnimation                                   OFFSET(get<T>, {0x738, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnUpdateDetailsDisplay
	// void OnUpdateDetailsDisplay();                                                                                           // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtOutro
	// void OnPlayKeyArtOutro();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtIntro
	// void OnPlayKeyArtIntro();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePreEndEvent
	// void OnMoviePreEndEvent();                                                                                               // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged
	// void OnMoviePlayingChanged(bool bIsPlaying);                                                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                         // [0xa604028] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent
	// bool IsShowingPromotedContent();                                                                                         // [0xa603fac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsInOutroState
	// bool IsInOutroState();                                                                                                   // [0xa603f3c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsImageLoading
	// bool IsImageLoading();                                                                                                   // [0xa603f24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted
	// void HandleMovieWidgetMediaStarted();                                                                                    // [0xa603b94] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaPreEndEvent
	// void HandleMovieWidgetMediaPreEndEvent();                                                                                // [0xa603b80] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetPromotedMovieWidget
	// UFortActivatableMovieWidget* GetPromotedMovieWidget();                                                                   // [0xa603ac8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetMovieWidget
	// UFortActivatableMovieWidget* GetMovieWidget();                                                                           // [0xa603ab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetKeyArtOutroAnimation
	// UWidgetAnimation* GetKeyArtOutroAnimation();                                                                             // [0xa603a20] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetCurrentTexture
	// UTexture* GetCurrentTexture();                                                                                           // [0xa6037f0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.CheckUpdateDetailsDelay
	// void CheckUpdateDetailsDelay();                                                                                          // [0xa603698] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2
/// Size: 0x0160 (0x0006B0 - 0x000810)
class UFortActivityDiscoverViewV2 : public UFortActivityBrowserRowView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	SMember(FMulticastInlineDelegate)                  OnActivityRequested                                         OFFSET(getStruct<T>, {0x6B0, 16, 0, 0})
	CMember(UFortDiscoverBackgroundManager*)           DiscoverBackgroundManager                                   OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(UDiscoverSelectedActivityViewModel*)       SelectedActivityVM                                          OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftCustomMatchmakingModalClass                             OFFSET(get<T>, {0x710, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftSpectateMatchModalClass                                 OFFSET(get<T>, {0x730, 32, 0, 0})
	SMember(FDataTableRowHandle)                       BackToTopInputAction                                        OFFSET(getStruct<T>, {0x758, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CustomKeyInputAction                                        OFFSET(getStruct<T>, {0x770, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ShowSpectateMatchModalInputAction                           OFFSET(getStruct<T>, {0x788, 16, 0, 0})
	SMember(FDataTableRowHandle)                       JoinAsSpectatorInputAction                                  OFFSET(getStruct<T>, {0x7A0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       JoinAsPlayerInputAction                                     OFFSET(getStruct<T>, {0x7B8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SelectActivityInputAction_Touch                             OFFSET(getStruct<T>, {0x7D0, 16, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.UpdateMiscActionBindingVisibility
	// void UpdateMiscActionBindingVisibility(bool bVisible);                                                                   // [0x2fa25cc] Final|Native|Private|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.StartDiscoverAnalyticSession
	// void StartDiscoverAnalyticSession();                                                                                     // [0x35fe910] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                         // [0xa604028] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingPromotedContent
	// bool IsShowingPromotedContent();                                                                                         // [0xa603fac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.FireDiscoverExitedAnalyticEvent
	// void FireDiscoverExitedAnalyticEvent();                                                                                  // [0x35fe9e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityFavoriteBrowserView
/// Size: 0x0000 (0x000650 - 0x000650)
class UFortActivityFavoriteBrowserView : public UFortActivityPlayerBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivityListItemWrapper
/// Size: 0x0018 (0x000028 - 0x000040)
class UFortActivityListItemWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UFortGameActivity*)                        GameActivity                                                OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityListView
/// Size: 0x0188 (0x000298 - 0x000420)
class UFortActivityListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	DMember(float)                                     DirectionalNavigationTimeThreshold                          OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0x384, 1, 0, 0})
	DMember(float)                                     EntrySpacing                                                OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(bool)                                      bCircularNavigationEnabled                                  OFFSET(get<bool>, {0x38C, 1, 0, 0})
	CMember(TMap<EActivityBrowserTileStyle, UClass*>)  TileTypes                                                   OFFSET(get<T>, {0x390, 80, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityListView.GetInViewCount
	// int32_t GetInViewCount();                                                                                                // [0xa603878] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityListView.AddTileType
	// void AddTileType(EActivityBrowserTileStyle style, UClass* WidgetClass);                                                  // [0xa603580] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityLobbyTile
/// Size: 0x0070 (0x0014E0 - 0x001550)
class UFortActivityLobbyTile : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UFortActivityBrowserTag*)                  ActivityBrowserTag_EpicOriginal                             OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UClass*)                                   ActivityModeSetSelectionModalClass                          OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UFortGameActivityProvider*)                ActivityProvider                                            OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(TArray<UFortGameActivity*>)                CachedQueriedActivities                                     OFFSET(get<T>, {0x1500, 16, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.TrySendFirstTimeNotification
	// void TrySendFirstTimeNotification();                                                                                     // [0xa60425c] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.ShowModeSetSelectionModal
	// void ShowModeSetSelectionModal();                                                                                        // [0xa604220] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityFirstTimeNotification
	// void OnShowChildActivityFirstTimeNotification();                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityChangedNotification
	// void OnShowChildActivityChangedNotification(FText& DisplayName);                                                         // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnHideChildActivityFirstTimeNotification
	// void OnHideChildActivityFirstTimeNotification();                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnDetailsUpdated
	// void OnDetailsUpdated();                                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.IsModeSetActivity
	// bool IsModeSetActivity();                                                                                                // [0xa603f54] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated
	// bool IsActivityEpicCreated();                                                                                            // [0xa603e20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.GetChildActivityDisplayName
	// FText GetChildActivityDisplayName();                                                                                     // [0x2afac58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal
/// Size: 0x0068 (0x000418 - 0x000480)
class UFortActivityModeSetSelectionModal : public UFortActivityModeSetSelectionModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackBoard                                            OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UFortActivityModeSetSelection*)            List_SubModeList                                            OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UFortActivitySquadFillButton*)             Button_ActivitySquadFill                                    OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UFortActivityPrivacyButton*)               Button_ActivityPrivacy                                      OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UFortActivityHabaneroButton*)              Button_Activity_Habanero                                    OFFSET(get<T>, {0x470, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetIsRankedSwitchAvailable
	// void SetIsRankedSwitchAvailable(bool bIsRankedSwitchAvailable);                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetHabaneroValues
	// void SetHabaneroValues(bool bHabaneroEnabled, bool bHabaneroExists);                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SaveSelectionAndClose
	// void SaveSelectionAndClose();                                                                                            // [0xa60420c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelectionChanged
	// void OnSubModeSelectionChanged();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelected
	// void OnSubModeSelected();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnActivityChanged
	// void OnActivityChanged(UFortGameActivity* GameActivity, FString StartingSelectedMnemonic);                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.IsCreativeModeSetActivity
	// bool IsCreativeModeSetActivity();                                                                                        // [0xa603ee0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile
/// Size: 0x0050 (0x001520 - 0x001570)
class UFortActivityPlayerBrowserTile : public UFortActivityTileViewTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5488;

public:
	CMember(UFortActivityTileDetailsDisplay*)          Display_TileDetails                                         OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LastPlayedDate                                         OFFSET(get<T>, {0x1528, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile.HandleActivitySelected
	// void HandleActivitySelected();                                                                                           // [0xa603b1c] Final|Native|Private 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerView
/// Size: 0x0168 (0x0004F8 - 0x000660)
class UFortActivityPlayerView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x500, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x510, 272, 0, 0})
	CMember(UClass*)                                   TabButtonClass                                              OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UFortTabListWidgetBase_Legacy*)            TabList_PlayerViewTabs                                      OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_PlayerBrowserViews                                 OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UFortActivityPlayerBrowserView*)           BrowserView_Favorites                                       OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UFortActivityPlayerBrowserView*)           BrowserView_History                                         OFFSET(get<T>, {0x640, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerViewTabButton
/// Size: 0x0000 (0x0014C0 - 0x0014C0)
class UFortActivityPlayerViewTabButton : public UFortTabButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivitySearchView
/// Size: 0x0188 (0x0004F8 - 0x000680)
class UFortActivitySearchView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1664;

public:
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x500, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x510, 272, 0, 0})
	CMember(UEditableText*)                            EditableText_IslandLink                                     OFFSET(get<T>, {0x620, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.OnActivityValidated
	// void OnActivityValidated(EFortActivityValidationResult ValidateResult);                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.OnActivityClear
	// void OnActivityClear();                                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.HandleTextCommitted
	// void HandleTextCommitted(FText& InText, TEnumAsByte<ETextCommit> CommitInfo);                                            // [0xa603cd8] Final|Native|Private|HasOutParms 
	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.HandleTextChanged
	// void HandleTextChanged(FText& Text);                                                                                     // [0xa603c3c] Final|Native|Private|HasOutParms 
};

/// Class /Script/DiscoveryBrowserUI.FortActivitySeasonalBrowserView
/// Size: 0x0000 (0x000650 - 0x000650)
class UFortActivitySeasonalBrowserView : public UFortActivityPlayerBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
};

/// Class /Script/DiscoveryBrowserUI.FortActivitySelector
/// Size: 0x00F0 (0x000028 - 0x000118)
class UFortActivitySelector : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(UFortGameActivity*)                        SelectedGameActivity                                        OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UUserWidget*)                              SelectedContextWidget                                       OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UFortActivityCreatorPageView*)             CachedCreatorPageView                                       OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TMap<FName, UFortActivityBrowserColorSchemeAsset*>) ColorSchemes                                       OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(UFortActivityBrowserColorSchemeAsset*)     CurrentColorScheme                                          OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OnSwapColorScheme
	// void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme);                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OnEnableColorScheme
	// void OnEnableColorScheme(bool bIsColorSchemeActive);                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay
/// Size: 0x0170 (0x001490 - 0x001600)
class UFortActivityTileDetailsDisplay : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5632;

public:
	SMember(FMulticastInlineDelegate)                  OnActivitySelectedDelegate                                  OFFSET(getStruct<T>, {0x1490, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActivityUnSelectedDelegate                                OFFSET(getStruct<T>, {0x14A0, 16, 0, 0})
	DMember(bool)                                      bShowDetailsButton                                          OFFSET(get<bool>, {0x14B0, 1, 0, 0})
	DMember(int32_t)                                   DefaultColumnSize                                           OFFSET(get<int32_t>, {0x14B4, 4, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           OFFSET(get<T>, {0x14B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PlayerCount                                            OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Favorite                                             OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Details                                              OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UFortActivityBrowserTag*)                  ActivityBrowserTag_EpicOriginal                             OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UTextBlock*)                               Text_DebugId                                                OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UFortActivityVideoCycle*)                  ActivityVideoCycleWidget                                    OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(TMap<uint32_t, ECreativeLinkPreviewSize>)  MinColumnSizeToImageSize                                    OFFSET(get<T>, {0x14F0, 80, 0, 0})
	DMember(char)                                      MaxMobileColumnSize                                         OFFSET(get<char>, {0x1540, 1, 0, 0})
	DMember(char)                                      MinMobileColumnSize                                         OFFSET(get<char>, {0x1541, 1, 0, 0})
	DMember(bool)                                      bIsVideoEnabledForDynamicTileSizingV2                       OFFSET(get<bool>, {0x1542, 1, 0, 0})
	CMember(UClass*)                                   ActivityDetailsModalClass                                   OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UClass*)                                   ActivityCreatorPageViewClass                                OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(UClass*)                                   ActivityCampaignPurchaseScreenClass                         OFFSET(get<T>, {0x1558, 8, 0, 0})
	CMember(UClass*)                                   ActivityAttributionsClass                                   OFFSET(get<T>, {0x1560, 8, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateSqueegeeWidgets
	// void UpdateSqueegeeWidgets(UFortGameActivity* GameActivity);                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateFromFortActivityViewModel
	// void UpdateFromFortActivityViewModel();                                                                                  // [0xa604284] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateCCU
	// void UpdateCCU(int32_t CCUCount);                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateActivitySelector
	// void UpdateActivitySelector();                                                                                           // [0xa604270] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StopTileVideo
	// void StopTileVideo();                                                                                                    // [0xa604248] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StartTileVideo
	// void StartTileVideo();                                                                                                   // [0xa604234] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.ShouldPlayTileVideo
	// void ShouldPlayTileVideo(bool& bOutResult);                                                                              // [0x101681c] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnUpdateColumnSize
	// void OnUpdateColumnSize(int32_t NewColumnSize);                                                                          // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet
	// void OnTileActiveSet(bool bIsTileActive);                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRespondToTileViewVisibilityChange
	// void OnRespondToTileViewVisibilityChange(bool bIsVisible);                                                               // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRequiresPurchaseChanged
	// void OnRequiresPurchaseChanged(bool bRequiresPurchase);                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPartySizeChanged
	// void OnPartySizeChanged(int32_t PartySize);                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLogoImageChanged
	// void OnLogoImageChanged(bool bIsLoading, UTexture* Texture);                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerPromotedToLeader
	// void OnLocalPlayerPromotedToLeader();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerDemoted
	// void OnLocalPlayerDemoted();                                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged
	// void OnIsFavoriteChanged(bool bIsFavorite);                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnFriendsPlayingChanged
	// void OnFriendsPlayingChanged(int32_t NumPlaying);                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnDetailsUpdated
	// void OnDetailsUpdated();                                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivityUnSelected__DelegateSignature
	// void OnActivityUnSelected__DelegateSignature();                                                                          // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivitySelected__DelegateSignature
	// void OnActivitySelected__DelegateSignature();                                                                            // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsModeSetActivity
	// bool IsModeSetActivity();                                                                                                // [0xa603f78] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityLocked
	// bool IsActivityLocked();                                                                                                 // [0xa603e9c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited
	// bool IsActivityFavorited();                                                                                              // [0xa603e58] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.HandleShowActivityDetails
	// void HandleShowActivityDetails();                                                                                        // [0xa603ba8] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.HandleActivitySelected
	// void HandleActivitySelected();                                                                                           // [0xa603b30] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetIsActivityLockedReason
	// EFortActivityIsLockedReason GetIsActivityLockedReason();                                                                 // [0xa603964] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason
	// EFortInvalidActivityReason GetInvalidActivityReason();                                                                   // [0xa6038fc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetActivityCreatorDisplayText
	// FString GetActivityCreatorDisplayText();                                                                                 // [0xa60372c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.DoesActivityRequirePurchase
	// bool DoesActivityRequirePurchase();                                                                                      // [0xa6036c4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.BroadcastOnActivityConfirmed
	// void BroadcastOnActivityConfirmed();                                                                                     // [0xa603668] Final|Native|Public|BlueprintCallable|Const 
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
/// Size: 0x0050 (0x0003A8 - 0x0003F8)
class UFortDiscoverItemBrowserRow : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	CMember(UFortDiscoverItemListView*)                ListView_Tiles                                              OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageLeft                                             OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageRight                                            OFFSET(get<T>, {0x3B8, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortDiscoverItemListView
/// Size: 0x0150 (0x000298 - 0x0003E8)
class UFortDiscoverItemListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	DMember(float)                                     DirectionalNavigationTimeThreshold                          OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(UClass*)                                   PlayWithFriendsEntryWidgetClass                             OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UClass*)                                   ActivityEntryWidgetClass                                    OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(TEnumAsByte<EOrientation>)                 orientation                                                 OFFSET(get<T>, {0x398, 1, 0, 0})
	DMember(float)                                     EntrySpacing                                                OFFSET(get<float>, {0x39C, 4, 0, 0})
	DMember(bool)                                      bCircularNavigationEnabled                                  OFFSET(get<bool>, {0x3A0, 1, 0, 0})


	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortDiscoverItemListView.GetInViewCount
	// int32_t GetInViewCount();                                                                                                // [0xa60389c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/DiscoveryBrowserUI.ActivityLibraryComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UActivityLibraryComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(UFortActivitySelector*)                    ActivitySelector                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
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
	SMember(FMatchmakingUIOverride)                    MatchmakingUIOverride                                       OFFSET(getStruct<T>, {0xA0, 96, 0, 0})
};

/// Struct /Script/DiscoveryBrowserUI.ColorSchemeParamaterValues
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FColorSchemeParamaterValues : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UMaterialParameterCollection*)             AlternateMaterialCollection                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TMap<FName, float>)                        ScalarParameterValues                                       OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 VectorParameterValues                                       OFFSET(get<T>, {0x58, 80, 0, 0})
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

