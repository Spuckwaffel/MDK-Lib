
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
	DMember(bool)                                      bHasChildData                                               OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bHasParentData                                              OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bLoading                                                    OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      bHasPartyData                                               OFFSET(get<bool>, {0x6B, 1, 0, 0})
	DMember(bool)                                      bIsActiveInvite                                             OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(bool)                                      bIsPartyPrivate                                             OFFSET(get<bool>, {0x6D, 1, 0, 0})
	DMember(int32_t)                                   CurrentPartySize                                            OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FText)                                     RichPresenceText                                            OFFSET(get<T>, {0x78, 24, 0, 0})
	CMember(UFortActivityViewModel*)                   ParentActivity                                              OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UFortActivityViewModel*)                   ChildActivity                                               OFFSET(get<T>, {0x98, 8, 0, 0})
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
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_TabActivityBrowserViews                            OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowCustomMatchmakingModal                           OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackToTop                                            OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileShowGameDetails                                OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileAccept                                         OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_JoinAsSpectator                                      OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ShowSpectateMatchModal                               OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UFortTabListWidgetBase_Legacy*)            TabList_BrowserTabs                                         OFFSET(get<T>, {0x438, 8, 0, 0})
	SMember(FPrimaryContentSetup)                      PrimaryContentSetup                                         OFFSET(get<T>, {0x440, 3, 0, 0})
	CMember(UClass*)                                   TabButtonClass                                              OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UClass*)                                   ActivityDetailsModalClass                                   OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UClass*)                                   ActivityModeSetSelectionModalClass                          OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UClass*)                                   ActivityModeSetFirstTimeNotificationModalClass              OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UClass*)                                   AttributionsModalClass                                      OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UClass*)                                   CreatorPageViewClass                                        OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UClass*)                                   CategoryPageViewClass                                       OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftCustomMatchmakingModalClass                             OFFSET(get<T>, {0x480, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftSpectateMatchModalClass                                 OFFSET(get<T>, {0x4A0, 32, 0, 0})
	CMember(UClass*)                                   CampaignPurchaseScreenClass                                 OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(UClass*)                                   CCUModalClass                                               OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(TMap<FName, UFortActivityBrowserColorSchemeAsset*>) ColorSchemes                                       OFFSET(get<T>, {0x4D0, 80, 0, 0})
	SMember(FText)                                     MobileAcceptButtonBaseText                                  OFFSET(get<T>, {0x520, 24, 0, 0})
	CMember(UFortCreativeDiscoverySurfaceManager*)     Manager                                                     OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortActivityBrowserPlayWithFriendsTile*>) LastSelectedPlayWithFriendsTile              OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UFortGameActivity*)                        SelectedGameActivity                                        OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UFortActivityBrowserColorSchemeAsset*)     CurrentColorScheme                                          OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UFortActivityCategoryPageView*)            CachedCategoryPageView                                      OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UFortActivityCreatorPageView*)             CachedCreatorPageView                                       OFFSET(get<T>, {0x628, 8, 0, 0})
	DMember(bool)                                      bCCUModalEnabled                                            OFFSET(get<bool>, {0x630, 1, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnSwapColorScheme
	// void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme);                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnPlayerQueueTypeChanged
	// void OnPlayerQueueTypeChanged(EPlayerQueueType PlayerQueueType);                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnEnableColorScheme
	// void OnEnableColorScheme(bool bIsColorSchemeActive);                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.OnActivitySelected
	// void OnActivitySelected();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowser.HandleTabChanged
	// void HandleTabChanged(FName TabId);                                                                                      // [0x9b56434] Final|Native|Private 
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
/// Size: 0x0230 (0x000298 - 0x0004C8)
class UFortActivityBrowserListView : public UListViewBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	DMember(float)                                     DirectionalNavigationTimeThreshold                          OFFSET(get<float>, {0x380, 4, 0, 0})
	CMember(UClass*)                                   PromotedActivityClass                                       OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UClass*)                                   DiscoverItemRowClass                                        OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UClass*)                                   HomebarItemRowClass                                         OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(TMap<FName, UClass*>)                      RowTypes                                                    OFFSET(get<T>, {0x3A0, 80, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTileBase
/// Size: 0x0070 (0x001470 - 0x0014E0)
class UFortActivityBrowserTileBase : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	CMember(UFortGameActivity*)                        AssignedGameActivity                                        OFFSET(get<T>, {0x1488, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile
/// Size: 0x00C0 (0x0014E0 - 0x0015A0)
class UFortActivityBrowserPlayWithFriendsTile : public UFortActivityBrowserTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5536;

public:
	DMember(int32_t)                                   MaxNamesToDisplay                                           OFFSET(get<int32_t>, {0x14D8, 4, 0, 0})
	DMember(int32_t)                                   MaxPortraitsToDisplay                                       OFFSET(get<int32_t>, {0x14DC, 4, 0, 0})
	CMember(UFortJoinablePartyPortraitsDisplay*)       PartyMembersAvatarsDisplay                                  OFFSET(get<T>, {0x14F0, 8, 0, 0})
	DMember(bool)                                      bIsActiveInvite                                             OFFSET(get<bool>, {0x14F8, 1, 0, 0})
	DMember(int32_t)                                   CurrentPartySize                                            OFFSET(get<int32_t>, {0x14FC, 4, 0, 0})
	DMember(bool)                                      bIsPartyPrivate                                             OFFSET(get<bool>, {0x1500, 1, 0, 0})
	CMember(UFortGameActivity*)                        CachedGameActivity                                          OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(TWeakObjectPtr<USocialUser*>)              CachedTargetSocialUser                                      OFFSET(get<T>, {0x1520, 8, 0, 0})
	SMember(FText)                                     CurrentCTAButtonText                                        OFFSET(get<T>, {0x1528, 24, 0, 0})
	SMember(FText)                                     JoinPartyText                                               OFFSET(get<T>, {0x1540, 24, 0, 0})
	SMember(FText)                                     RequestToJoinText                                           OFFSET(get<T>, {0x1558, 24, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateSingleFriendName
	// void UpdateSingleFriendName(FText& SingleFriendName);                                                                    // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateRichPresence
	// void UpdateRichPresence(FText& RichPresence);                                                                            // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdatePartyMemberNames
	// void UpdatePartyMemberNames(FText& Names);                                                                               // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateOtherPlayersSubText
	// void UpdateOtherPlayersSubText(FText& OtherPlayersSubText);                                                              // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateLastInteraction
	// void UpdateLastInteraction(FText& LastInteraction);                                                                      // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateIslandThumbnail
	// void UpdateIslandThumbnail(UTexture* ThumbnailTexture);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateCTAButtonInteraction
	// void UpdateCTAButtonInteraction(bool bIsInteractionEnabled);                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.UpdateCTAButtonInfo
	// void UpdateCTAButtonInfo(FText& InteractionText, bool bInteractionFound);                                                // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnUpdateColumnSize
	// void OnUpdateColumnSize(int32_t NewColumnSize);                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTileActiveChanged
	// void OnTileActiveChanged(bool bIsTileActive);                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureLoadingComplete
	// void OnTextureLoadingComplete(UTexture* ThumbnailTexture);                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.OnTextureBeginLoading
	// void OnTextureBeginLoading();                                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.HandleCTAButtonClicked
	// void HandleCTAButtonClicked();                                                                                           // [0x9b563e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetMaxPartySize
	// int32_t GetMaxPartySize();                                                                                               // [0x9b56300] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.GetCTAButtonText
	// FText GetCTAButtonText();                                                                                                // [0x9b56098] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserPlayWithFriendsTile.BP_PartyInformationUpdated
	// void BP_PartyInformationUpdated(bool bInIsTileSelected);                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRow
/// Size: 0x00C0 (0x0002D0 - 0x000390)
class UFortActivityBrowserRow : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(UCommonTextBlock*)                         Text_CategoryName                                           OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(float)                                     MinimumVisibilityPercentageForRowActivation                 OFFSET(get<float>, {0x388, 4, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowPeekStateChanged
	// void OnRowPeekStateChanged(bool bIsInPeekState);                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveUp
	// void OnRowMoveUp(bool bMovingOffscreen);                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowMoveDown
	// void OnRowMoveDown(bool bMovingOffscreen);                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsSelectedChanged
	// void OnRowIsSelectedChanged(bool bIsSelected);                                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnRowIsActiveChanged
	// void OnRowIsActiveChanged(bool bIsActive);                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.OnCategoryItemChanged
	// void OnCategoryItemChanged(bool bPlayAnimation);                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsSelected
	// bool GetIsSelected();                                                                                                    // [0x9b56288] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsInPeekState
	// bool GetIsInPeekState();                                                                                                 // [0x9b56260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRow.GetIsActive
	// bool GetIsActive();                                                                                                      // [0x82b9c84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero
/// Size: 0x0080 (0x000390 - 0x000410)
class UFortActivityBrowserRowHero : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(UFortActivityListView*)                    ListView_Activities                                         OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       OFFSET(get<T>, {0x398, 8, 0, 0})
	DMember(bool)                                      bPlayDetailsAnimationOnScreenOpen                           OFFSET(get<bool>, {0x3A3, 1, 0, 0})
	DMember(float)                                     DetailsDisplayUpdateDelay                                   OFFSET(get<float>, {0x3A4, 4, 0, 0})
	CMember(UFortActivityDetailsDisplay*)              DetailsDisplay_SelectedActivity                             OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(UFortActivityVideoCycle*)                  ActivityVideoCycleWidget                                    OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         BoundKeyArtOutroAnimation                                   OFFSET(get<T>, {0x3D8, 8, 0, 0})
	DMember(bool)                                      bShouldAutoCycle                                            OFFSET(get<bool>, {0x3E2, 1, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoStarted
	// void OnVideoStarted();                                                                                                   // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnVideoEndReached
	// void OnVideoEndReached();                                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnUpdateDetailsDisplay
	// void OnUpdateDetailsDisplay();                                                                                           // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnTileClicked
	// void OnTileClicked();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnRowHeroFocusChanged
	// void OnRowHeroFocusChanged(bool bHasFocus);                                                                              // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryStatusChanged
	// void OnQueryStatusChanged(bool bIsActive);                                                                               // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnQueryActivitiesFinished
	// void OnQueryActivitiesFinished();                                                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtOutro
	// void OnPlayKeyArtOutro();                                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnPlayKeyArtIntro
	// void OnPlayKeyArtIntro();                                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnListViewFinishedAddingEntries
	// void OnListViewFinishedAddingEntries(int32_t ActivityCount);                                                             // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.OnActivityUpdated
	// void OnActivityUpdated();                                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                         // [0x9b56834] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.IsInOutroState
	// bool IsInOutroState();                                                                                                   // [0x9b5679c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.IsImageLoading
	// bool IsImageLoading();                                                                                                   // [0x9b56784] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleStarted
	// void HandleActivityVideoCycleStarted();                                                                                  // [0x9b563d0] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.HandleActivityVideoCycleEndReached
	// void HandleActivityVideoCycleEndReached();                                                                               // [0x9b563bc] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetKeyArtOutroAnimation
	// UWidgetAnimation* GetKeyArtOutroAnimation();                                                                             // [0x9b562b0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCyclingPauseDelay
	// float GetCyclingPauseDelay();                                                                                            // [0x9b5615c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCyclingDelay
	// float GetCyclingDelay();                                                                                                 // [0x9b5612c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.GetCurrentTexture
	// UTexture* GetCurrentTexture();                                                                                           // [0x9b560dc] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.CycleNextActivity
	// void CycleNextActivity();                                                                                                // [0x9b55fd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowHero.CheckUpdateDetailsDelay
	// void CheckUpdateDetailsDelay();                                                                                          // [0x9b55fb0] Final|Native|Private 
/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowList
/// Size: 0x0020 (0x000390 - 0x0003B0)
class UFortActivityBrowserRowList : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(UFortActivityListView*)                    ListView_Activities                                         OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageLeft                                             OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageRight                                            OFFSET(get<T>, {0x3A0, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowList.OnQueryStatusChanged
	// void OnQueryStatusChanged(bool bIsActive);                                                                               // [0x1ebf994] Event|Public|BlueprintEvent 
/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowPromoted
/// Size: 0x0008 (0x000390 - 0x000398)
class UFortActivityBrowserRowPromoted : public UFortActivityBrowserRow
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           OFFSET(get<T>, {0x390, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowPromoted.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserView
/// Size: 0x00A8 (0x000438 - 0x0004E0)
class UFortActivityBrowserView : public UFortActivityView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	DMember(bool)                                      bShowCustomMatchmakingModalButton                           OFFSET(get<bool>, {0x440, 1, 0, 0})
	DMember(bool)                                      bShowSpectateMatchModalButton                               OFFSET(get<bool>, {0x441, 1, 0, 0})
	DMember(bool)                                      bShowMobileGameDetailsButton                                OFFSET(get<bool>, {0x442, 1, 0, 0})
	DMember(bool)                                      bShowMobileAcceptButton                                     OFFSET(get<bool>, {0x443, 1, 0, 0})
	DMember(bool)                                      bShowBackToTopButton                                        OFFSET(get<bool>, {0x444, 1, 0, 0})
	SMember(FName)                                     DiscoverySurfaceName                                        OFFSET(get<T>, {0x448, 4, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserView.OnSurfaceDataDirty
	// void OnSurfaceDataDirty();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserView.GetInvalidActivityReason
	// EFortInvalidActivityReason GetInvalidActivityReason();                                                                   // [0x9b561d4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserRowView
/// Size: 0x0190 (0x0004E0 - 0x000670)
class UFortActivityBrowserRowView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	DMember(float)                                     MouseWheelScrollTimeThreshold                               OFFSET(get<float>, {0x4E8, 4, 0, 0})
	CMember(UFortActivityBrowserListView*)             BrowserList_Activities                                      OFFSET(get<T>, {0x4F0, 8, 0, 0})
	SMember(FName)                                     TabNameID                                                   OFFSET(get<T>, {0x558, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(get<T>, {0x560, 240, 0, 0})
	CMember(UFortSwipePanel*)                          SwipePanel_Navigation                                       OFFSET(get<T>, {0x650, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnRowChanged
	// void OnRowChanged(int32_t NewCategoryIndex);                                                                             // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnQueryActivitiesFinished
	// void OnQueryActivitiesFinished();                                                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnListViewScrolled
	// void OnListViewScrolled(float ItemOffset, float DistanceRemaining);                                                      // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserRowView.OnActivityUpdated
	// void OnActivityUpdated();                                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
/// Class /Script/DiscoveryBrowserUI.FortActivityBrowserTile
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortActivityBrowserTile : public UFortActivityBrowserTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	CMember(UFortActivityTileDetailsDisplay*)          Display_TileDetails                                         OFFSET(get<T>, {0x14D8, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityBrowserTile.HandleActivitySelected
	// void HandleActivitySelected();                                                                                           // [0x9b56380] Final|Native|Private 
/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView
/// Size: 0x0130 (0x0004E0 - 0x000610)
class UFortActivityPlayerBrowserView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	CMember(UFortGameActivityProvider*)                ActivityProvider                                            OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(UFortActivityTileView*)                    TileView_PlayerActivities                                   OFFSET(get<T>, {0x4F0, 8, 0, 0})
	SMember(FName)                                     TabNameID                                                   OFFSET(get<T>, {0x4F8, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(get<T>, {0x500, 240, 0, 0})
	CMember(EFortCreativeDiscoveryPlayHistoryType)     PlayHistoryProviderType                                     OFFSET(get<T>, {0x5F0, 1, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.PlayViewIntro
	// void PlayViewIntro();                                                                                                    // [0x9b56a54] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesStarted
	// void OnQueryActivitiesStarted();                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnQueryActivitiesComplete
	// void OnQueryActivitiesComplete();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.OnPlayViewIntro
	// void OnPlayViewIntro();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserView.BP_OnTileViewUpdated
	// void BP_OnTileViewUpdated();                                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryPageView
/// Size: 0x0040 (0x000610 - 0x000650)
class UFortActivityCategoryPageView : public UFortActivityPlayerBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	CMember(UCommonRichTextBlock*)                     Text_CategoryTitle                                          OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackToTop                                            OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CloseTouch                                           OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileAccept                                         OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_MobileShowGameDetails                                OFFSET(get<T>, {0x640, 8, 0, 0})
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
	CMember(UCommonTextBlock*)                         Text_CategoryTitle                                          OFFSET(get<T>, {0x1500, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryTile.OnTileActiveSet
	// void OnTileActiveSet(bool bIsTileActive);                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryTilePanel
/// Size: 0x0070 (0x0002D0 - 0x000340)
class UFortActivityCategoryTilePanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(UFortActivityTileView*)                    TileView_Categories                                         OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	DMember(int32_t)                                   TileViewQueryThreshold                                      OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	CMember(UFortCreativeDiscoveryActivityProvider*)   CachedActivityProvider                                      OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/DiscoveryBrowserUI.FortActivityCategoryView
/// Size: 0x0120 (0x0004E0 - 0x000600)
class UFortActivityCategoryView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	SMember(FName)                                     TabNameID                                                   OFFSET(get<T>, {0x4E8, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(get<T>, {0x4F0, 240, 0, 0})
	CMember(UFortActivityCategoryTilePanel*)           TilePanel_Featured                                          OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UFortActivityCategoryTilePanel*)           TilePanel_All                                               OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UFortActivityCategoryTilePanel*)           CurrentSelectedPanel                                        OFFSET(get<T>, {0x5F0, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.OnSurfaceDataReady
	// void OnSurfaceDataReady();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.OnCategoryTilePanelSelected
	// void OnCategoryTilePanelSelected(UFortActivityCategoryTilePanel* SelectedPanel);                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.NavigateFromPanel
	// UFortActivityCategoryTilePanel* NavigateFromPanel(EUINavigation Direction, UFortActivityCategoryTilePanel* NavigatingPanel); // [0x9b568b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.GetTopMostVisiblePanel
	// UFortActivityCategoryTilePanel* GetTopMostVisiblePanel();                                                                // [0x82ddf5c] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityCategoryView.GetCurrentSelectedPanel
	// UFortActivityCategoryTilePanel* GetCurrentSelectedPanel();                                                               // [0x7e0bf44] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/DiscoveryBrowserUI.FortActivityCreateView
/// Size: 0x0120 (0x0004E0 - 0x000600)
class UFortActivityCreateView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	SMember(FName)                                     TabNameID                                                   OFFSET(get<T>, {0x4E8, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(get<T>, {0x4F0, 240, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Create                                               OFFSET(get<T>, {0x5E0, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCreateView.OnCreativeActivityUpdated
	// void OnCreativeActivityUpdated();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCreateView.GetInvalidCreativeActivityReason
	// EFortInvalidActivityReason GetInvalidCreativeActivityReason();                                                           // [0x9b5623c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/DiscoveryBrowserUI.FortActivityCreatorPageView
/// Size: 0x0090 (0x000650 - 0x0006E0)
class UFortActivityCreatorPageView : public UFortActivityCategoryPageView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	CMember(UFortGameActivity*)                        ActivityDetailsSelectedGameActivity                         OFFSET(get<T>, {0x658, 8, 0, 0})
	DMember(int32_t)                                   AmountOfCreatorLinkEntriesQueried                           OFFSET(get<int32_t>, {0x680, 4, 0, 0})
	DMember(int32_t)                                   ProcessedCreatorLinkEntries                                 OFFSET(get<int32_t>, {0x684, 4, 0, 0})
	DMember(int32_t)                                   AmountOfEntriesQueried                                      OFFSET(get<int32_t>, {0x688, 4, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnNoContentFoundForCreator
	// void OnNoContentFoundForCreator();                                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityCreatorPageView.OnCreatorActivitiesQueryFinished
	// void OnCreatorActivitiesQueryFinished();                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
/// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverView
/// Size: 0x00A0 (0x000670 - 0x000710)
class UFortActivityDiscoverView : public UFortActivityBrowserRowView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	DMember(bool)                                      bPlayDetailsAnimationOnScreenOpen                           OFFSET(get<bool>, {0x670, 1, 0, 0})
	DMember(float)                                     DetailsDisplayUpdateDelay                                   OFFSET(get<float>, {0x674, 4, 0, 0})
	CMember(UClass*)                                   MovieWidgetClass                                            OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UFortActivityDetailsDisplay*)              DetailsDisplay_SelectedActivity                             OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UFortActivityDetailsDisplay*)              DetailsDisplay_PromotedActivity                             OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(UPanelWidget*)                             Panel_VideoSlot                                             OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(UPanelWidget*)                             Panel_PromotedVideoSlot                                     OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(UFortActivatableMovieWidget*)              ActivityMovieWidget                                         OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(UFortActivatableMovieWidget*)              PromotedActivityMovieWidget                                 OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         BoundKeyArtOutroAnimation                                   OFFSET(get<T>, {0x6F8, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnUpdateDetailsDisplay
	// void OnUpdateDetailsDisplay();                                                                                           // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtOutro
	// void OnPlayKeyArtOutro();                                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnPlayKeyArtIntro
	// void OnPlayKeyArtIntro();                                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePreEndEvent
	// void OnMoviePreEndEvent();                                                                                               // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.OnMoviePlayingChanged
	// void OnMoviePlayingChanged(bool bIsPlaying);                                                                             // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                         // [0x9b56884] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsShowingPromotedContent
	// bool IsShowingPromotedContent();                                                                                         // [0x9b56808] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsInOutroState
	// bool IsInOutroState();                                                                                                   // [0x9b567b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.IsImageLoading
	// bool IsImageLoading();                                                                                                   // [0x7871140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaStarted
	// void HandleMovieWidgetMediaStarted();                                                                                    // [0x9b5640c] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.HandleMovieWidgetMediaPreEndEvent
	// void HandleMovieWidgetMediaPreEndEvent();                                                                                // [0x9b563f8] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetPromotedMovieWidget
	// UFortActivatableMovieWidget* GetPromotedMovieWidget();                                                                   // [0x2b4963c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetMovieWidget
	// UFortActivatableMovieWidget* GetMovieWidget();                                                                           // [0x9b56368] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetKeyArtOutroAnimation
	// UWidgetAnimation* GetKeyArtOutroAnimation();                                                                             // [0x9b562d8] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.GetCurrentTexture
	// UTexture* GetCurrentTexture();                                                                                           // [0x9b56104] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverView.CheckUpdateDetailsDelay
	// void CheckUpdateDetailsDelay();                                                                                          // [0x9b55fc4] Final|Native|Private 
/// Class /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2
/// Size: 0x00A0 (0x000670 - 0x000710)
class UFortActivityDiscoverViewV2 : public UFortActivityBrowserRowView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	CMember(UFortDiscoverBackgroundManager*)           DiscoverBackgroundManager                                   OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UDiscoverSelectedActivityViewModel*)       SelectedActivityVM                                          OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SoftCustomMatchmakingModalClass                             OFFSET(get<T>, {0x6B0, 32, 0, 0})
	SMember(FDataTableRowHandle)                       BackToTopInputAction                                        OFFSET(get<T>, {0x6D8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CustomKeyInputAction                                        OFFSET(get<T>, {0x6F0, 16, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.OnExpand
	// void OnExpand();                                                                                                         // [0x9b56a08] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.OnContract
	// void OnContract();                                                                                                       // [0x9b569a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingSeasonalContent
	// bool IsShowingSeasonalContent();                                                                                         // [0x9b56884] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityDiscoverViewV2.IsShowingPromotedContent
	// bool IsShowingPromotedContent();                                                                                         // [0x9b56808] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0x384, 1, 0, 0})
	DMember(float)                                     EntrySpacing                                                OFFSET(get<float>, {0x388, 4, 0, 0})
	DMember(bool)                                      bCircularNavigationEnabled                                  OFFSET(get<bool>, {0x38C, 1, 0, 0})
	CMember(TMap<EActivityBrowserTileStyle, UClass*>)  TileTypes                                                   OFFSET(get<T>, {0x390, 80, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityListView.GetInViewCount
	// int32_t GetInViewCount();                                                                                                // [0x9b5618c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityListView.AddTileType
	// void AddTileType(EActivityBrowserTileStyle style, UClass* WidgetClass);                                                  // [0x9b55ed4] Final|Native|Public|BlueprintCallable 
/// Class /Script/DiscoveryBrowserUI.FortActivityLobbyTile
/// Size: 0x0070 (0x0014C0 - 0x001530)
class UFortActivityLobbyTile : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UFortActivityBrowserTag*)                  ActivityBrowserTag_EpicOriginal                             OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UClass*)                                   ActivityModeSetSelectionModalClass                          OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UFortGameActivityProvider*)                ActivityProvider                                            OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(TArray<UFortGameActivity*>)                CachedQueriedActivities                                     OFFSET(get<T>, {0x14E0, 16, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.TrySendFirstTimeNotification
	// void TrySendFirstTimeNotification();                                                                                     // [0x9b56bbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.ShowModeSetSelectionModal
	// void ShowModeSetSelectionModal();                                                                                        // [0x9b56b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityFirstTimeNotification
	// void OnShowChildActivityFirstTimeNotification();                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnShowChildActivityChangedNotification
	// void OnShowChildActivityChangedNotification(FText& DisplayName);                                                         // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnHideChildActivityFirstTimeNotification
	// void OnHideChildActivityFirstTimeNotification();                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.OnDetailsUpdated
	// void OnDetailsUpdated();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.IsModeSetActivity
	// bool IsModeSetActivity();                                                                                                // [0x2fd2ddc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.IsActivityEpicCreated
	// bool IsActivityEpicCreated();                                                                                            // [0x9b566a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityLobbyTile.GetChildActivityDisplayName
	// FText GetChildActivityDisplayName();                                                                                     // [0xfc6c04] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal
/// Size: 0x0068 (0x000400 - 0x000468)
class UFortActivityModeSetSelectionModal : public UFortActivityModeSetSelectionModalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Back                                                 OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackBoard                                            OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UFortActivityModeSetSelection*)            List_SubModeList                                            OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UFortActivitySquadFillButton*)             Button_ActivitySquadFill                                    OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UFortActivityPrivacyButton*)               Button_ActivityPrivacy                                      OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UFortActivityHabaneroButton*)              Button_Activity_Habanero                                    OFFSET(get<T>, {0x458, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetIsRankedSwitchAvailable
	// void SetIsRankedSwitchAvailable(bool bIsRankedSwitchAvailable);                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SetHabaneroValues
	// void SetHabaneroValues(bool bHabaneroEnabled, bool bHabaneroExists);                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SaveSelectionAndClose
	// void SaveSelectionAndClose();                                                                                            // [0x9b56a9c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelectionChanged
	// void OnSubModeSelectionChanged();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelected
	// void OnSubModeSelected();                                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnActivityChanged
	// void OnActivityChanged(UFortGameActivity* GameActivity, FString StartingSelectedMnemonic);                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.IsCreativeModeSetActivity
	// bool IsCreativeModeSetActivity();                                                                                        // [0x9b56740] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile
/// Size: 0x0050 (0x001500 - 0x001550)
class UFortActivityPlayerBrowserTile : public UFortActivityTileViewTileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
	CMember(UFortActivityTileDetailsDisplay*)          Display_TileDetails                                         OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_LastPlayedDate                                         OFFSET(get<T>, {0x1508, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityPlayerBrowserTile.HandleActivitySelected
	// void HandleActivitySelected();                                                                                           // [0x9b56394] Final|Native|Private 
/// Class /Script/DiscoveryBrowserUI.FortActivityPlayerView
/// Size: 0x0140 (0x0004E0 - 0x000620)
class UFortActivityPlayerView : public UFortActivityBrowserView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1568;

public:
	SMember(FName)                                     TabNameID                                                   OFFSET(get<T>, {0x4E8, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(get<T>, {0x4F0, 240, 0, 0})
	CMember(UClass*)                                   TabButtonClass                                              OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UFortTabListWidgetBase_Legacy*)            TabList_PlayerViewTabs                                      OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UCommonActivatableWidgetSwitcher*)         Switcher_PlayerBrowserViews                                 OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UFortActivityPlayerBrowserView*)           BrowserView_Favorites                                       OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UFortActivityPlayerBrowserView*)           BrowserView_History                                         OFFSET(get<T>, {0x600, 8, 0, 0})
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
	SMember(FName)                                     TabNameID                                                   OFFSET(get<T>, {0x4E8, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(get<T>, {0x4F0, 240, 0, 0})
	CMember(UEditableText*)                            EditableText_IslandLink                                     OFFSET(get<T>, {0x5E0, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.OnActivityValidated
	// void OnActivityValidated(EFortActivityValidationResult ValidateResult);                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.OnActivityClear
	// void OnActivityClear();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.HandleTextCommitted
	// void HandleTextCommitted(FText& InText, TEnumAsByte<ETextCommit> CommitInfo);                                            // [0x9b56550] Final|Native|Private|HasOutParms 
	// Function /Script/DiscoveryBrowserUI.FortActivitySearchView.HandleTextChanged
	// void HandleTextChanged(FText& Text);                                                                                     // [0x9b564b4] Final|Native|Private|HasOutParms 
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
	CMember(UFortGameActivity*)                        SelectedGameActivity                                        OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UUserWidget*)                              SelectedContextWidget                                       OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UFortActivityCreatorPageView*)             CachedCreatorPageView                                       OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TMap<FName, UFortActivityBrowserColorSchemeAsset*>) ColorSchemes                                       OFFSET(get<T>, {0x70, 80, 0, 0})
	CMember(UFortActivityBrowserColorSchemeAsset*)     CurrentColorScheme                                          OFFSET(get<T>, {0xC0, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OnSwapColorScheme
	// void OnSwapColorScheme(bool bInIsUsingAlternateColorScheme);                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivitySelector.OnEnableColorScheme
	// void OnEnableColorScheme(bool bIsColorSchemeActive);                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
/// Class /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay
/// Size: 0x0170 (0x001470 - 0x0015E0)
class UFortActivityTileDetailsDisplay : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	SMember(FMulticastInlineDelegate)                  OnActivitySelectedDelegate                                  OFFSET(get<T>, {0x1470, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnActivityUnSelectedDelegate                                OFFSET(get<T>, {0x1480, 16, 0, 0})
	DMember(bool)                                      bShowDetailsButton                                          OFFSET(get<bool>, {0x1490, 1, 0, 0})
	DMember(int32_t)                                   DefaultColumnSize                                           OFFSET(get<int32_t>, {0x1494, 4, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ActivityName                                           OFFSET(get<T>, {0x1498, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PlayerCount                                            OFFSET(get<T>, {0x14A0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Favorite                                             OFFSET(get<T>, {0x14A8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Details                                              OFFSET(get<T>, {0x14B0, 8, 0, 0})
	CMember(UFortActivityBrowserTag*)                  ActivityBrowserTag_EpicOriginal                             OFFSET(get<T>, {0x14B8, 8, 0, 0})
	CMember(UTextBlock*)                               Text_DebugId                                                OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UFortSqueegeeWidgetInjectionSlot*)         SqueegeeInjectionSlot                                       OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UFortActivityVideoCycle*)                  ActivityVideoCycleWidget                                    OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(TMap<uint32_t, ECreativeLinkPreviewSize>)  MinColumnSizeToImageSize                                    OFFSET(get<T>, {0x14D8, 80, 0, 0})
	DMember(char)                                      MaxMobileColumnSize                                         OFFSET(get<char>, {0x1528, 1, 0, 0})
	DMember(char)                                      MinMobileColumnSize                                         OFFSET(get<char>, {0x1529, 1, 0, 0})
	DMember(bool)                                      bIsVideoEnabledForDynamicTileSizingV2                       OFFSET(get<bool>, {0x152A, 1, 0, 0})
	CMember(UClass*)                                   ActivityDetailsModalClass                                   OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UClass*)                                   ActivityCreatorPageViewClass                                OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UClass*)                                   ActivityCampaignPurchaseScreenClass                         OFFSET(get<T>, {0x1540, 8, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateFromFortActivityViewModel
	// void UpdateFromFortActivityViewModel();                                                                                  // [0x9b56bd0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.UpdateCCU
	// void UpdateCCU(int32_t CCUCount);                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StopTileVideo
	// void StopTileVideo();                                                                                                    // [0x9b56ba8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.StartTileVideo
	// void StartTileVideo();                                                                                                   // [0x9b56b94] Final|Native|Protected|BlueprintCallable 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.ShouldPlayTileVideo
	// void ShouldPlayTileVideo(bool& bOutResult);                                                                              // [0x1ebf994] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnUpdateColumnSize
	// void OnUpdateColumnSize(int32_t NewColumnSize);                                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnTileActiveSet
	// void OnTileActiveSet(bool bIsTileActive);                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnRequiresPurchaseChanged
	// void OnRequiresPurchaseChanged(bool bRequiresPurchase);                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPreviewImageChanged
	// void OnPreviewImageChanged(bool bIsLoading, UTexture* Texture);                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnPartySizeChanged
	// void OnPartySizeChanged(int32_t PartySize);                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLogoImageChanged
	// void OnLogoImageChanged(bool bIsLoading, UTexture* Texture);                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerPromotedToLeader
	// void OnLocalPlayerPromotedToLeader();                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnLocalPlayerDemoted
	// void OnLocalPlayerDemoted();                                                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnIsFavoriteChanged
	// void OnIsFavoriteChanged(bool bIsFavorite);                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnFriendsPlayingChanged
	// void OnFriendsPlayingChanged(int32_t NumPlaying);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnDetailsUpdated
	// void OnDetailsUpdated();                                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivityUnSelected__DelegateSignature
	// void OnActivityUnSelected__DelegateSignature();                                                                          // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.OnActivitySelected__DelegateSignature
	// void OnActivitySelected__DelegateSignature();                                                                            // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsModeSetActivity
	// bool IsModeSetActivity();                                                                                                // [0x9b567cc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityLocked
	// bool IsActivityLocked();                                                                                                 // [0x9b56700] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.IsActivityFavorited
	// bool IsActivityFavorited();                                                                                              // [0x9b566dc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.HandleShowActivityDetails
	// void HandleShowActivityDetails();                                                                                        // [0x9b56420] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.HandleActivitySelected
	// void HandleActivitySelected();                                                                                           // [0x9b563a8] Final|Native|Private 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetInvalidActivityReason
	// EFortInvalidActivityReason GetInvalidActivityReason();                                                                   // [0x9b56210] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.GetActivityCreatorDisplayText
	// FString GetActivityCreatorDisplayText();                                                                                 // [0x9b56058] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/DiscoveryBrowserUI.FortActivityTileDetailsDisplay.DoesActivityRequirePurchase
	// bool DoesActivityRequirePurchase();                                                                                      // [0x9b55ff0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
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
	CMember(UFortDiscoverItemListView*)                ListView_Tiles                                              OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageLeft                                             OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageRight                                            OFFSET(get<T>, {0x3A0, 8, 0, 0})
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
	CMember(TEnumAsByte<EOrientation>)                 Orientation                                                 OFFSET(get<T>, {0x398, 1, 0, 0})
	DMember(float)                                     EntrySpacing                                                OFFSET(get<float>, {0x39C, 4, 0, 0})
	DMember(bool)                                      bCircularNavigationEnabled                                  OFFSET(get<bool>, {0x3A0, 1, 0, 0})
};



	/// Functions
	// Function /Script/DiscoveryBrowserUI.FortDiscoverItemListView.GetInViewCount
	// int32_t GetInViewCount();                                                                                                // [0x9b561b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	SMember(FMatchmakingUIOverride)                    MatchmakingUIOverride                                       OFFSET(get<T>, {0xA0, 96, 0, 0})
};

/// Struct /Script/DiscoveryBrowserUI.ColorSchemeParamaterValues
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FColorSchemeParamaterValues : public MDKStruct
{ 
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

