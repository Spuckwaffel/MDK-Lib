
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BlueprintContext
/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: SaveTheWorldRuntime
/// dependency: UMG

/// Class /Script/SaveTheWorldUI.FortQuestMapViewer
/// Size: 0x0080 (0x0002E8 - 0x000368)
class UFortQuestMapViewer : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(UCommonButtonBase*)                        Button_PageRight                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageLeft                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Page                                                   OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Viewer                                              OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCanvasPanel*)                             CanvasPanel_Cosmetic                                        OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UFortQuestMapScreen*)                      ParentScreen                                                OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortQuestMapNodeLayout*)                  NodeLayout                                                  OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.UpdateViewerData
	// void UpdateViewerData();                                                                                                 // [0xa6e8bcc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.OnTryUpdateUserWidgetColor
	// void OnTryUpdateUserWidgetColor(UUserWidget* Widget, FSlateColor OverrideColor);                                         // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.OnPlayLayoutOutroAnimation
	// void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection);                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.OnPlayLayoutFadeInAnimation
	// void OnPlayLayoutFadeInAnimation();                                                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer.HandleLayoutOutroAnimationFinished
	// void HandleLayoutOutroAnimationFinished();                                                                               // [0xa6e3b18] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortArmoryScreen
/// Size: 0x0000 (0x000400 - 0x000400)
class UFortArmoryScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
};

/// Class /Script/SaveTheWorldUI.FortArmoryScreen_Legacy
/// Size: 0x0000 (0x000570 - 0x000570)
class UFortArmoryScreen_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/SaveTheWorldUI.FortCommandScreen
/// Size: 0x0028 (0x000400 - 0x000428)
class UFortCommandScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	SMember(FDataTableRowHandle)                       ShowAllStatsActionData                                      OFFSET(getStruct<T>, {0x400, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectHeroActionData                                       OFFSET(getStruct<T>, {0x410, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCommandScreen.PushItemInspectionScreen
	// void PushItemInspectionScreen(UFortItem* ItemToInspect, EFortItemInspectionMode Mode, UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading); // [0xa6e6e18] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCommandScreen.PushHeroLoadoutScreen
	// void PushHeroLoadoutScreen(UFortCampaignHeroLoadoutItem* HeroLoadout);                                                   // [0xa6e6cd0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCommandScreen.HandleUpgradeInspectHero
	// void HandleUpgradeInspectHero();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCommandScreen.HandleShowAllStats
	// void HandleShowAllStats();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	DMember(bool)                                      bUpdateVisibilityBasedOnRewardExistence                     OFFSET(get<bool>, {0x2E8, 1, 1, 0})
	CMember(ESlateVisibility)                          VisibilityWhenNoRewardSpecified                             OFFSET(get<T>, {0x2EC, 1, 0, 0})
	CMember(ESlateVisibility)                          VisibilityWhenRewardSpecified                               OFFSET(get<T>, {0x2ED, 1, 0, 0})
	CMember(UFortCollectionBookRewardCardWidget*)      RewardCardWidget                                            OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(ECollectionBookRewardStatus)               RewardStatus                                                OFFSET(get<T>, {0x2F8, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewardStatus
	// void SetRewardStatus(ECollectionBookRewardStatus Status);                                                                // [0x6644050] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetRewards
	// void SetRewards(FFortRewardInfo& Rewards);                                                                               // [0xa6e8688] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.SetCurrentItemToDisplay
	// void SetCurrentItemToDisplay(UFortItem* ItemToDisplay);                                                                  // [0xa6e7c30] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.OnRewardStatusChanged
	// void OnRewardStatusChanged(ECollectionBookRewardStatus NewStatus);                                                       // [0xa6e5fdc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.HasRewards
	// bool HasRewards();                                                                                                       // [0x94e4e78] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.GetRewardStatus
	// ECollectionBookRewardStatus GetRewardStatus();                                                                           // [0x9ef675c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget.ClearRewards
	// void ClearRewards();                                                                                                     // [0x90720a8] Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookHelpWidget
/// Size: 0x0000 (0x000570 - 0x000570)
class UFortCollectionBookHelpWidget : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortCollectionBookItemPopupMenu : public UFortPopupMenu_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UFortCollectionBookOverviewWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageSelected                                OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageClicked                                 OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	CMember(UFortCollectionBookPage*)                  LastSelectedPage                                            OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UFortCollectionBookCategory*)              LastSelectedCategory                                        OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(TArray<UFortCollectionBookCategory*>)      CategoryObjectPool                                          OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(UCommonTreeView*)                          PageTreeViewWidget                                          OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x2397dc8] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget.OnActivated
	// void OnActivated();                                                                                                      // [0xeadc78] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget.HandlePagesChanged
	// void HandlePagesChanged(UFortCollectionBookManager* CBManager);                                                          // [0xa6e3c64] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPageCompletionRewardWidget
/// Size: 0x0000 (0x000300 - 0x000300)
class UFortCollectionBookPageCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget
/// Size: 0x0068 (0x0002E8 - 0x000350)
class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(UCommonTextBlock*)                         PageCompletionText                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortMaterialProgressBar*)                 ProgressBar                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UFortCollectionBookPageCompletionRewardWidget*) PageRewardWidget                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      RewardDetailsButton                                         OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UFortCollectionBookPage*)                  DetailsPage                                                 OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RewardDetailsModalWidgetClass                               OFFSET(get<T>, {0x310, 32, 0, 0})
	SMember(FText)                                     ModalTitle                                                  OFFSET(getStruct<T>, {0x330, 24, 0, 0})
	CMember(UFortCollectionBookRewardModalWidget*)     RewardDetailsModalWidget                                    OFFSET(get<T>, {0x348, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnUnslotItemComplete
	// void OnUnslotItemComplete(UFortAccountItem* SlottedItem, UFortAccountItem* OldItem, FName SlotId);                       // [0xa6e6a48] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnSlotItemComplete
	// void OnSlotItemComplete(UFortAccountItem* SlottedItem, FName SlotId);                                                    // [0xa6e66b4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnPageProgressionUpdated
	// void OnPageProgressionUpdated(int32_t TotalFilledSlots, int32_t TotalSlots, EFortCollectionBookState State);             // [0xa6e578c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.OnDetailsPageChanged
	// void OnDetailsPageChanged(UFortCollectionBookPage* InNewDetailsPage);                                                    // [0x77074c8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget.HandleRewardDetailsModalWidgetDeactivated
	// void HandleRewardDetailsModalWidgetDeactivated(UCommonActivatablePanelLegacy* DeactivatedPanel);                         // [0xa6e4510] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPageListWidget
/// Size: 0x0030 (0x0014E0 - 0x001510)
class UFortCollectionBookPageListWidget : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	CMember(UCommonTextBlock*)                         PageNameWidget                                              OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  AvailableSlotsWidget                                        OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PageCompletionWidget                                        OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  AssociatedPageOrCategory                                    OFFSET(get<T>, {0x1500, 8, 0, 0})
	DMember(bool)                                      bIsExpanded                                                 OFFSET(get<bool>, {0x1508, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsPage
	// void SetupAsPage(UFortCollectionBookPage* Page);                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.SetupAsCategory
	// void SetupAsCategory(UFortCollectionBookCategory* category);                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.OnSlottedItemOperationComplete
	// void OnSlottedItemOperationComplete(UFortAccountItem* SlottedItem, FName SlotId);                                        // [0xa6e676c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.OnPageDetailsUpdated
	// void OnPageDetailsUpdated(int32_t AvailableSlots, int32_t FilledSlots, int32_t TotalSlots, EFortCollectionBookState State); // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPageListWidget.OnCategoryDetailsUpdated
	// void OnCategoryDetailsUpdated(int32_t AvailableSlots, int32_t FilledSlots, int32_t TotalSlots);                          // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPicker
/// Size: 0x0028 (0x000420 - 0x000448)
class UFortCollectionBookPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(UClass*)                                   MulchConfirmationModalClass                                 OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UFortAccountItem*)                         CurrentSlottedItem                                          OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UFortMulchConfirmationModalWidget*)        MulchConfirmationModal                                      OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.ShowMulchDialogForItem
	// void ShowMulchDialogForItem(UFortItem* ItemToMulch);                                                                     // [0xa6e89b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                       // [0xa6e899c] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.OnCollectComplete
	// void OnCollectComplete();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                           // [0xa6e4da0] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                             // [0xa6e4d84] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPicker.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                       // [0xa6e4b24] Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel
/// Size: 0x00C8 (0x000400 - 0x0004C8)
class UFortCollectionBookPrimaryPanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageSelectedDelegate                        OFFSET(getStruct<T>, {0x400, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageClickedDelegate                         OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookSectionClickedDelegate                      OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackActionRowHandle                                         OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SummonInfoPanelActionRowHandle                              OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	CMember(UFortCollectionBookOverviewWidget*)        OverviewWidget                                              OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonTileView*)                          SectionTileViewWidget                                       OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(ECollectionBookPrimaryNavTarget)           CurrentNavTarget                                            OFFSET(get<T>, {0x460, 1, 0, 0})
	CMember(UFortCollectionBookSection*)               LastClickedSection                                          OFFSET(get<T>, {0x468, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnSummonInfoPanelExecuted
	// void OnSummonInfoPanelExecuted(bool& bPassThrough);                                                                      // [0x6641038] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0xa6e5220] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookSectionClicked
	// void OnCollectionBookSectionClicked(UFortCollectionBookSection* ClickedSection);                                         // [0x86105a8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(UFortCollectionBookPage* SelectedPage);                                                // [0x94e5dac] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnCollectionBookPageClicked
	// void OnCollectionBookPageClicked(UFortCollectionBookPage* ClickedPage);                                                  // [0xa6e4f6c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel.OnBackActionExecuted
	// void OnBackActionExecuted();                                                                                             // [0xa6e4dbc] Final|Native|Public  
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy
/// Size: 0x00C0 (0x000538 - 0x0005F8)
class UFortCollectionBookPrimaryPanel_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1528;

public:
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageSelectedDelegate                        OFFSET(getStruct<T>, {0x538, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageClickedDelegate                         OFFSET(getStruct<T>, {0x548, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookSectionClickedDelegate                      OFFSET(getStruct<T>, {0x558, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackActionRowHandle                                         OFFSET(getStruct<T>, {0x568, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SummonInfoPanelActionRowHandle                              OFFSET(getStruct<T>, {0x578, 16, 0, 0})
	CMember(UFortCollectionBookOverviewWidget*)        OverviewWidget                                              OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCommonTileView*)                          SectionTileViewWidget                                       OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(ECollectionBookPrimaryNavTarget)           CurrentNavTarget                                            OFFSET(get<T>, {0x598, 1, 0, 0})
	CMember(UFortCollectionBookSection*)               LastClickedSection                                          OFFSET(get<T>, {0x5A0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnSummonInfoPanelExecuted
	// void OnSummonInfoPanelExecuted(bool& bPassThrough);                                                                      // [0x97a3dec] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnInputMethodChanged
	// void OnInputMethodChanged(ECommonInputType CurrentInputType);                                                            // [0xa6e52a4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookSectionClicked
	// void OnCollectionBookSectionClicked(UFortCollectionBookSection* ClickedSection);                                         // [0xa6e5074] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(UFortCollectionBookPage* SelectedPage);                                                // [0xa6e50f8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnCollectionBookPageClicked
	// void OnCollectionBookPageClicked(UFortCollectionBookPage* ClickedPage);                                                  // [0xa6e4ff0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy.OnBackActionExecuted
	// void OnBackActionExecuted(bool& bPassThrough);                                                                           // [0xa6e4dd0] Final|Native|Public|HasOutParms 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(UCommonNumericTextBlock*)                  LevelTextWidget                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortRewardInfoWidget_Legacy*)             RewardWidget                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UWidget*)                                  CheckmarkImage                                              OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.SetAssociatedLevel
	// void SetAssociatedLevel(int32_t Level);                                                                                  // [0xa6e7ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.OnXPRequiredChanged
	// void OnXPRequiredChanged(int32_t NewXPRequired);                                                                         // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget.GetXPRequired
	// int32_t GetXPRequired();                                                                                                 // [0x98212b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget
/// Size: 0x0060 (0x000570 - 0x0005D0)
class UFortCollectionBookProgressionRewardsModalWidget : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(TWeakObjectPtr<UClass*>)                   RewardWidgetClass                                           OFFSET(get<T>, {0x570, 32, 0, 0})
	SMember(FMargin)                                   RewardWidgetPadding                                         OFFSET(getStruct<T>, {0x590, 16, 0, 0})
	DMember(int32_t)                                   NumRewardsToShow                                            OFFSET(get<int32_t>, {0x5A0, 4, 0, 0})
	CMember(UVerticalBox*)                             RewardBoxWidget                                             OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UVerticalBox*)                             MajorRewardBoxWidget                                        OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         XPTextWidget                                                OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  LevelTextWidget                                             OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 ButtonGroup                                                 OFFSET(get<T>, {0x5C8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnSelectedButtonChanged
	// void OnSelectedButtonChanged(UCommonButtonLegacy* SelectedButton, int32_t ButtonIndex);                                  // [0xa6e615c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.OnLevelProgressionSet
	// void OnLevelProgressionSet(int32_t CurrentLevel, float NextLvlPct, int32_t MaxAchievedLevel);                            // [0xa6e559c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget.InspectItemBP
	// void InspectItemBP(UFortItem* Item);                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsPreviewWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UFortCollectionBookProgressionRewardWidget*) NextRewardWidget                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortCollectionBookProgressionRewardWidget*) NextMajorRewardWidget                                     OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardWidget
/// Size: 0x0010 (0x000300 - 0x000310)
class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UCommonNumericTextBlock*)                  LevelTextWidget                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         DisplayNameWidget                                           OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardWidget.SetAssociatedLevel
	// void SetAssociatedLevel(int32_t Level);                                                                                  // [0xa6e7b30] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressWidget
/// Size: 0x0058 (0x0002E8 - 0x000340)
class UFortCollectionBookProgressWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(int32_t)                                   CachedXPLevel                                               OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	DMember(float)                                     CachedXPCompletionPct                                       OFFSET(get<float>, {0x2EC, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RewardDetailsModalWidgetClass                               OFFSET(get<T>, {0x2F0, 32, 0, 0})
	CMember(UFortCollectionBookProgressionRewardsPreviewWidget*) ProgressionRewardsPreviewWidget                   OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonTextBlock*)                         XPTextWidget                                                OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  LevelTextWidget                                             OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      DetailsButtonWidget                                         OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortCollectionBookPageDetailsWidget*)     PageDetailsWidget                                           OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UFortCollectionBookProgressionRewardsModalWidget*) DetailsModalWidget                                  OFFSET(get<T>, {0x338, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnSlottedItemOperationComplete
	// void OnSlottedItemOperationComplete(UFortAccountItem* ItemSlotted, FName SlotId);                                        // [0xa6e6830] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnInventoryUpdated
	// void OnInventoryUpdated();                                                                                               // [0xa6e53b0] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPreviewXPChange
	// void OnCollectionBookPreviewXPChange(float PreviewCompletionPct);                                                        // [0xa2b3b0c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(UFortCollectionBookPage* SelectedPage);                                                // [0x5a00558] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelProgressionChanged
	// void OnCollectionBookLevelProgressionChanged(float NewCompletionPct);                                                    // [0xa6e4ee8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.OnCollectionBookLevelChanged
	// void OnCollectionBookLevelChanged(int32_t NewLevel);                                                                     // [0x81deadc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookProgressWidget.HandleDetailsModalWidgetDeactivated
	// void HandleDetailsModalWidgetDeactivated(UCommonActivatablePanelLegacy* DeactivatedPanel);                               // [0xa6e3980] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(UPanelWidget*)                             RecycleResultsWidget                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(EFortItemCardSize)                         ItemCardSize                                                OFFSET(get<T>, {0x2F0, 1, 0, 0})
	CMember(UFortAccountItem*)                         ItemToRecycle                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget.SetCurrentItemToRecycle
	// void SetCurrentItemToRecycle(UFortAccountItem* InItemToRecycle);                                                         // [0xa6e7cb4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UFortCollectionBookRewardCardWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FMulticastInlineDelegate)                  OnDisplayedItemChangedEvent                                 OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	CMember(UFortMultiSizeItemCard*)                   ItemCardWidget                                              OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UWidget*)                                  MultiItemRewardOverlay                                      OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidget*)                                  ChoiceRewardOverlay                                         OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UWidget*)                                  CheckmarkImage                                              OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(float)                                     UpdateCardInterval                                          OFFSET(get<float>, {0x318, 4, 0, 0})
	CMember(EFortItemCardSize)                         ItemCardSize                                                OFFSET(get<T>, {0x31C, 1, 0, 0})
	DMember(bool)                                      bDisplayAsRewardCard                                        OFFSET(get<bool>, {0x31D, 1, 0, 0})
	SMember(FFortRewardInfo)                           RepresentedRewards                                          OFFSET(getStruct<T>, {0x320, 48, 0, 0})
	CMember(TArray<UFortItem*>)                        DummyItems                                                  OFFSET(get<T>, {0x350, 16, 0, 0})
	SMember(FTimerHandle)                              UpdateCardTimer                                             OFFSET(getStruct<T>, {0x360, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.SetRewards
	// void SetRewards(FFortRewardInfo& Rewards);                                                                               // [0xa6e8780] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.OnDisplayedItemChangedEvent__DelegateSignature
	// void OnDisplayedItemChangedEvent__DelegateSignature(UFortItem* DisplayedItem);                                           // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.HasRewards
	// bool HasRewards();                                                                                                       // [0x789fd6c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget.ClearRewards
	// void ClearRewards();                                                                                                     // [0xeadc78] Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookRewardModalWidget
/// Size: 0x0050 (0x000538 - 0x000588)
class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	CMember(UCommonTextBlock*)                         TitleWidget                                                 OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UFortRewardInfoWidget_Legacy*)             RewardWidget                                                OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UFortMaterialProgressBar*)                 ProgressBar                                                 OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ProgressTextWidget                                          OFFSET(get<T>, {0x550, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget
/// Size: 0x0050 (0x000300 - 0x000350)
class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(UCommonButtonLegacy*)                      RewardDetailsButton                                         OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RewardDetailsModalWidgetClass                               OFFSET(get<T>, {0x308, 32, 0, 0})
	SMember(FText)                                     ModalTitle                                                  OFFSET(getStruct<T>, {0x328, 24, 0, 0})
	CMember(UFortCollectionBookRewardModalWidget*)     RewardDetailsModalWidget                                    OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UFortCollectionBookSection*)               Section                                                     OFFSET(get<T>, {0x348, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget.HandleRewardDetailsModalWidgetDeactivated
	// void HandleRewardDetailsModalWidgetDeactivated(UCommonActivatablePanelLegacy* DeactivatedPanel);                         // [0xa6e4590] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSectionPanel
/// Size: 0x01D0 (0x000538 - 0x000708)
class UFortCollectionBookSectionPanel : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1800;

public:
	SMember(FMulticastInlineDelegate)                  OnSectionCloseRequest                                       OFFSET(getStruct<T>, {0x538, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreviewXPChangeEvent                                      OFFSET(getStruct<T>, {0x548, 16, 0, 0})
	CMember(UCommonTextBlock*)                         SectionNameTextWidget                                       OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UFortCollectionBookSlotView*)              SlotViewWidget                                              OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortCollectionBookPicker*)                SlotItemPicker                                              OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UWidget*)                                  ContextOverlayWidget                                        OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UTextBlock*)                               ContextTextWidget                                           OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortCollectionBookSectionCompletionRewardWidget*) SectionRewardWidget                                 OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UWidget*)                                  ItemAcquisitionSourceContainerWidget                        OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ItemAcquisitionSourceDescWidget                             OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ItemAcquisitionSourceDesc2Widget                            OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UWidget*)                                  ResearchRecruitUnslotContainerWidget                        OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PersonRecruitUnavailableMessageWidget                       OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ItemResearchUnavailableMessageWidget                        OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         UnslotUnavailableMessageWidget                              OFFSET(get<T>, {0x5B8, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackActionRowHandle                                         OFFSET(getStruct<T>, {0x5C0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CloseActionRowHandle                                        OFFSET(getStruct<T>, {0x5D0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SlotItemActionRowHandle                                     OFFSET(getStruct<T>, {0x5E0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectItemActionRowHandle                                  OFFSET(getStruct<T>, {0x5F0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectCollectionBookItemActionRowHandle                    OFFSET(getStruct<T>, {0x600, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectPreviewItemActionRowHandle                           OFFSET(getStruct<T>, {0x610, 16, 0, 0})
	SMember(FDataTableRowHandle)                       OpenPickerActionRowHandle                                   OFFSET(getStruct<T>, {0x620, 16, 0, 0})
	SMember(FDataTableRowHandle)                       LogAllowedItemsActionRowHandle                              OFFSET(getStruct<T>, {0x630, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ResearchItemActionRowHandle                                 OFFSET(getStruct<T>, {0x640, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RecruitActionRowHandle                                      OFFSET(getStruct<T>, {0x650, 16, 0, 0})
	SMember(FDataTableRowHandle)                       UnslotItemActionRowHandle                                   OFFSET(getStruct<T>, {0x660, 16, 0, 0})
	CMember(ECollectionBookSectionNavTarget)           CurrentNavTarget                                            OFFSET(get<T>, {0x670, 1, 0, 0})
	CMember(UFortCollectionBookSection*)               AssociatedSection                                           OFFSET(get<T>, {0x678, 8, 0, 0})
	DMember(bool)                                      bHasSummonedPanel                                           OFFSET(get<bool>, {0x680, 1, 0, 0})
	SMember(FFortDialogExternalLatentActionHandle)     SlotConfirmationDialogLatentHandle                          OFFSET(getStruct<T>, {0x684, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnShowItemDetailEvent                                       OFFSET(getStruct<T>, {0x688, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSlotItemConfirmEvent                                      OFFSET(getStruct<T>, {0x698, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnResearchItemConfirmEvent                                  OFFSET(getStruct<T>, {0x6A8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUnslotItemConfirmEvent                                    OFFSET(getStruct<T>, {0x6B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInspectItemEvent                                          OFFSET(getStruct<T>, {0x6C8, 16, 0, 0})
	CMember(UClass*)                                   SlotConfirmationModalClass                                  OFFSET(get<T>, {0x700, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemOperationComplete
	// void OnUnslotItemOperationComplete(UFortAccountItem* UnslottedItem, UFortAccountItem* OldSlottedItem, FName SlotId);     // [0xa6e6b40] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemComplete
	// void OnUnslotItemComplete(UFortItem* UnslottedItem, FName SlotId);                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnUnslotItemActionExecuted
	// void OnUnslotItemActionExecuted(bool& bPassThrough);                                                                     // [0xa6e69c0] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlottedItemOperationComplete
	// void OnSlottedItemOperationComplete(UFortAccountItem* SlottedItem, FName SlotId);                                        // [0xa6e68e8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotItemActionExecuted
	// void OnSlotItemActionExecuted(bool& bPassThrough);                                                                       // [0xa6e6628] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonSelected
	// void OnSlotButtonSelected(UFortCollectionBookSlotButton* SlotButton);                                                    // [0xa6e65a8] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonHovered
	// void OnSlotButtonHovered(int32_t ButtonIx);                                                                              // [0xa6e6460] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSlotButtonContextAction
	// void OnSlotButtonContextAction(EFortCollectionBookPopupButtonType ContextAction);                                        // [0xa6e63e0] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnSectionChanged
	// void OnSectionChanged(UFortCollectionBookSection* Section);                                                              // [0x9379560] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemOperationComplete
	// void OnResearchItemOperationComplete(UFortAccountItem* NewItem, FString TemplateId);                                     // [0xa6e5990] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnResearchItemAction__DelegateSignature
	// void OnResearchItemAction__DelegateSignature(UFortItem* SelectedItem, FFortCollectionBookSlotData SlotData);             // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnPurchaseItemActionExecuted
	// void OnPurchaseItemActionExecuted(bool& bPassThrough);                                                                   // [0xa6e5908] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnOpenPickerActionExecuted
	// void OnOpenPickerActionExecuted(bool& bPassThrough);                                                                     // [0xa6e570c] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnLogAllowedItemsActionExecuted
	// void OnLogAllowedItemsActionExecuted(bool& bPassThrough);                                                                // [0xa6e5698] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemInspectAction__DelegateSignature
	// void OnItemInspectAction__DelegateSignature(UFortItem* SelectedItem, bool EnableItemActions, bool IsPlaceholderItem);    // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnItemAction__DelegateSignature
	// void OnItemAction__DelegateSignature(UFortItem* SelectedItem);                                                           // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnInspectActionExecuted
	// void OnInspectActionExecuted(bool& bPassThrough);                                                                        // [0xa6e5328] Final|Native|Protected|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionPanel.OnBackActionExecuted
	// void OnBackActionExecuted(bool& bPassThrough);                                                                           // [0xa6e4e5c] Final|Native|Protected|HasOutParms 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget
/// Size: 0x0070 (0x0014E0 - 0x001550)
class UFortCollectionBookSectionTileWidget : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5456;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SlotWidgetClass                                             OFFSET(get<T>, {0x14E8, 32, 0, 0})
	SMember(FMargin)                                   SlotWidgetPadding                                           OFFSET(getStruct<T>, {0x1508, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         SlotWidgetHorizontalAlignment                               OFFSET(get<T>, {0x1518, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           SlotWidgetVerticalAlignment                                 OFFSET(get<T>, {0x1519, 1, 0, 0})
	DMember(int32_t)                                   MaxNumSlotsSupported                                        OFFSET(get<int32_t>, {0x151C, 4, 0, 0})
	CMember(UHorizontalBox*)                           SlotBoxWidget                                               OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UCommonTextBlock*)                         SectionNameWidget                                           OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UFortCollectionBookGenericRewardWidget*)   SectionRewardWidget                                         OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UFortCollectionBookSection*)               AssociatedSection                                           OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(TArray<UFortCollectionBookSlotWidget*>)    SlotWidgets                                                 OFFSET(get<T>, {0x1540, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnSectionSlotUpdate
	// void OnSectionSlotUpdate(int32_t NumFilledSlots, int32_t NumSlots, EFortCollectionBookState SectionState);               // [0xa6e6060] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemUnslotted
	// void OnItemUnslotted(UFortAccountItem* ItemUnslotted, UFortAccountItem* OldSlottedItem, FName SlotId);                   // [0xa6e54a0] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget.OnItemSlotted
	// void OnItemSlotted(UFortAccountItem* ItemSlotted, FName SlotId);                                                         // [0xa6e53d8] Native|Protected     
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotButton
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortCollectionBookSlotButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	CMember(UFortCollectionBookSlotWidget*)            CollectionBookSlotWidget                                    OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotButton.PopupMenuClosedWithAction
	// void PopupMenuClosedWithAction(EFortCollectionBookPopupButtonType Selection);                                            // [0xa6e6c38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotButton.OnSlottedItemUpdated
	// void OnSlottedItemUpdated();                                                                                             // [0xa6e69ac] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotButton.GetPopupMenu
	// UUserWidget* GetPopupMenu();                                                                                             // [0xa6e2ddc] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal
/// Size: 0x0058 (0x000570 - 0x0005C8)
class UFortCollectionBookSlotConfirmationModal : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	CMember(UFortAccountItem*)                         CurrentlySlottedItem                                        OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortAccountItem*)                         NewItemToSlot                                               OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SlottingDescription                                    OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UFortMultiSizeItemCard*)                   ItemCard_NewlySlottedItem                                   OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UFortCollectionBookRecycleSlotResultsWidget*) RecycleSlotResultsWidget                                 OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_SlotItem                                             OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Back                                                 OFFSET(get<T>, {0x5A8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequestedComplete
	// void OnSlotItemRequestedComplete();                                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.OnSlotItemRequested
	// void OnSlotItemRequested();                                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal.HandleSlotItemComplete
	// void HandleSlotItemComplete(UFortAccountItem* SlottedItem, FName SlotId);                                                // [0xa6e4610] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotDetailsWidget
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UFortCollectionBookSlotDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotView
/// Size: 0x00A0 (0x0002E8 - 0x000388)
class UFortCollectionBookSlotView : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(TWeakObjectPtr<UClass*>)                   CollectionBookButtonClass                                   OFFSET(get<T>, {0x2E8, 32, 0, 0})
	CMember(UHorizontalBox*)                           CollectionBookButtonBox                                     OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 CollectionBookSlotButtonGroup                               OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(TArray<UFortCollectionBookSlotButton*>)    CollectionBookSlotButtons                                   OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(UFortCollectionBookSection*)               AssociatedSection                                           OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(int32_t)                                   PreviousSelectedButtonIdx                                   OFFSET(get<int32_t>, {0x378, 4, 0, 0})
	DMember(int32_t)                                   CurrentSelectedButtonIdx                                    OFFSET(get<int32_t>, {0x37C, 4, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonHovered
	// void OnSlotButtonHovered(UCommonButtonLegacy* HoveredButton, int32_t ButtonIdx);                                         // [0xa6e64e0] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotView.OnSlotButtonClicked
	// void OnSlotButtonClicked(UCommonButtonLegacy* ClickedButton, int32_t ButtonIdx);                                         // [0xa6e6318] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotView.OnSelectedSlotButtonChanged
	// void OnSelectedSlotButtonChanged(UCommonButtonLegacy* SelectedButton, int32_t ButtonIdx);                                // [0xa6e6250] Native|Protected     
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotWidget
/// Size: 0x0128 (0x0002E8 - 0x000410)
class UFortCollectionBookSlotWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(EFortItemCardSize)                         ItemCardSize                                                OFFSET(get<T>, {0x2F8, 1, 0, 0})
	DMember(bool)                                      bIsRewardCard                                               OFFSET(get<bool>, {0x2F9, 1, 0, 0})
	CMember(UFortMultiSizeItemCard*)                   ItemCardWidget                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UWidget*)                                  UnslottedOverlayWidget                                      OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UWidget*)                                  ReadyToSlotOverlayWidget                                    OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UWidget*)                                  UnslottedButReadyOverlayWidget                              OFFSET(get<T>, {0x318, 8, 0, 0})
	SMember(FName)                                     SlotRowName                                                 OFFSET(getStruct<T>, {0x320, 4, 0, 0})
	SMember(FText)                                     ItemAvailableToSlotText                                     OFFSET(getStruct<T>, {0x328, 24, 0, 0})
	SMember(FText)                                     NoItemsAvailableToSlotText                                  OFFSET(getStruct<T>, {0x340, 24, 0, 0})
	SMember(FText)                                     HigherQualityItemsAvailableToSlotAndUpgradeAvailableText    OFFSET(getStruct<T>, {0x358, 24, 0, 0})
	SMember(FText)                                     HigherQualityItemsAvailableToSlotAndEvolveAvailableText     OFFSET(getStruct<T>, {0x370, 24, 0, 0})
	SMember(FText)                                     HigherQualityItemsAvailableToSlotText                       OFFSET(getStruct<T>, {0x388, 24, 0, 0})
	SMember(FText)                                     ItemInSlotFullyUpgradedText                                 OFFSET(getStruct<T>, {0x3A0, 24, 0, 0})
	SMember(FText)                                     ItemInSlotCanBeUpgradedText                                 OFFSET(getStruct<T>, {0x3B8, 24, 0, 0})
	SMember(FText)                                     ItemInSlotCanBeEvolvedText                                  OFFSET(getStruct<T>, {0x3D0, 24, 0, 0})
	CMember(UFortItem*)                                SlottedItemRepresentation                                   OFFSET(get<T>, {0x3E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemDestroyed
	// void OnItemDestroyed();                                                                                                  // [0xa6e53c4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.OnItemCardUpdated
	// void OnItemCardUpdated();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.IsItemSlotted
	// bool IsItemSlotted();                                                                                                    // [0x857f0c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HasItemsToSlot
	// bool HasItemsToSlot();                                                                                                   // [0xa6e49c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HandleUnslotItemComplete
	// void HandleUnslotItemComplete(UFortAccountItem* UnslottedItem, UFortAccountItem* OldItem, FName SlotId);                 // [0xa6e4798] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HandleSlottedItemOperationComplete
	// void HandleSlottedItemOperationComplete(UFortAccountItem* NewItem, FName TemplateId);                                    // [0xa6e46d4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.HandleResearchItemComplete
	// void HandleResearchItemComplete(UFortAccountItem* ResearchedItem, FString SlotId);                                       // [0xa6e3ec4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlottedItemRepresentation
	// UFortItem* GetSlottedItemRepresentation();                                                                               // [0xa6e2f44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.GetSlotRowName
	// FName GetSlotRowName();                                                                                                  // [0x99e8ab8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.GetNumItemsToSlot
	// int32_t GetNumItemsToSlot();                                                                                             // [0xa6e2db8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCollectionBookSlotWidget.FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature
	// void FortCollectionBookSlottedItemUpdatedDelegate__DelegateSignature();                                                  // [0x101681c] MulticastDelegate|Public|Delegate 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookWidget
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UFortCollectionBookWidget : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(UFortCollectionBookProgressWidget*)        ProgressWidget                                              OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonActivatableWidgetSwitcher*)         MainWidgetSwitcher                                          OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortCollectionBookPrimaryPanel*)          PrimaryPanelWidget                                          OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UFortCollectionBookSectionPanel*)          SectionPanelWidget                                          OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(int32_t)                                   PrimaryPanelIdx                                             OFFSET(get<int32_t>, {0x590, 4, 0, 0})
	DMember(int32_t)                                   SectionPanelIdx                                             OFFSET(get<int32_t>, {0x594, 4, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.RequestToClose
	// void RequestToClose();                                                                                                   // [0xa6e798c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnPreviewXPChangeRequest
	// void OnPreviewXPChangeRequest(int32_t XPChange);                                                                         // [0xa6e5888] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionCloseRequest
	// void OnCollectionBookSectionCloseRequest();                                                                              // [0xa6e517c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookSectionClicked
	// void OnCollectionBookSectionClicked(UFortCollectionBookSection* ClickedSection);                                         // [0x9379560] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(UFortCollectionBookPage* SelectedPage);                                                // [0xa6e4ff0] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget.OnCollectionBookPageClicked
	// void OnCollectionBookPageClicked(UFortCollectionBookPage* ClickedPage);                                                  // [0xa6e5074] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UFortCollectionBookWidget_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(UFortCollectionBookProgressWidget*)        ProgressWidget                                              OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              MainWidgetSwitcher                                          OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortCollectionBookPrimaryPanel_Legacy*)   PrimaryPanelWidget                                          OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UFortCollectionBookSectionPanel*)          SectionPanelWidget                                          OFFSET(get<T>, {0x588, 8, 0, 0})
	DMember(int32_t)                                   PrimaryPanelIdx                                             OFFSET(get<int32_t>, {0x590, 4, 0, 0})
	DMember(int32_t)                                   SectionPanelIdx                                             OFFSET(get<int32_t>, {0x594, 4, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.RequestToClose
	// void RequestToClose();                                                                                                   // [0xa6e79d4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnPreviewXPChangeRequest
	// void OnPreviewXPChangeRequest(int32_t XPChange);                                                                         // [0xa6e5888] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookSectionCloseRequest
	// void OnCollectionBookSectionCloseRequest();                                                                              // [0xa6e517c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookSectionClicked
	// void OnCollectionBookSectionClicked(UFortCollectionBookSection* ClickedSection);                                         // [0x9379560] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookPageSelected
	// void OnCollectionBookPageSelected(UFortCollectionBookPage* SelectedPage);                                                // [0xa6e4ff0] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy.OnCollectionBookPageClicked
	// void OnCollectionBookPageClicked(UFortCollectionBookPage* ClickedPage);                                                  // [0xa6e5074] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortAbilitySystemContext
/// Size: 0x0050 (0x000030 - 0x000080)
class UFortAbilitySystemContext : public UBlueprintContextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase
/// Size: 0x0058 (0x000488 - 0x0004E0)
class UFortDirectAcquisitionWidgetBase : public UFortMtxStoreRootBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	DMember(bool)                                      bShowIneligible                                             OFFSET(get<bool>, {0x490, 1, 0, 0})
	CMember(UUserWidget*)                              FirstOfferGenerated                                         OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_LargeTile                                     OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UGridPanel*)                               GridPanel_SmallTile                                         OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_ReorderedItems                                OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_FeatureItems                                    OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_DailyItems                                      OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBox_Main                                               OFFSET(get<T>, {0x4D8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.OnDisplayToast
	// void OnDisplayToast(bool bDisplayToast);                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.IsTabsLayout
	// void IsTabsLayout(bool bShouldDisplayTabs);                                                                              // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.HandleAffiliateButtonClicked
	// void HandleAffiliateButtonClicked();                                                                                     // [0xa6e37c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetWeeklyStoreEndDate
	// FDateTime GetWeeklyStoreEndDate();                                                                                       // [0xa6e3658] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetStoreCurrencies
	// TArray<UFortAccountItemDefinition*> GetStoreCurrencies();                                                                // [0xa6e2fa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetSeasonStoreEndDate
	// FDateTime GetSeasonStoreEndDate();                                                                                       // [0xa6e2f18] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase.GetDailyStoreEndDate
	// FDateTime GetDailyStoreEndDate();                                                                                        // [0xa6e2854] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy
/// Size: 0x0058 (0x0005F8 - 0x000650)
class UFortDirectAcquisitionWidgetBase_Legacy : public UFortMtxStoreRootBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	DMember(bool)                                      bShowIneligible                                             OFFSET(get<bool>, {0x600, 1, 0, 0})
	CMember(UUserWidget*)                              FirstOfferGenerated                                         OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_LargeTile                                     OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UGridPanel*)                               GridPanel_SmallTile                                         OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_ReorderedItems                                OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_FeatureItems                                    OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_DailyItems                                      OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBox_Main                                               OFFSET(get<T>, {0x648, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.OnDisplayToast
	// void OnDisplayToast(bool bDisplayToast);                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.IsTabsLayout
	// void IsTabsLayout(bool bShouldDisplayTabs);                                                                              // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.HandleAffiliateButtonClicked
	// void HandleAffiliateButtonClicked();                                                                                     // [0xa6e37c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetWeeklyStoreEndDate
	// FDateTime GetWeeklyStoreEndDate();                                                                                       // [0xa6e3658] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetStoreCurrencies
	// TArray<UFortAccountItemDefinition*> GetStoreCurrencies();                                                                // [0xa6e2fdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetSeasonStoreEndDate
	// FDateTime GetSeasonStoreEndDate();                                                                                       // [0xa6e2f18] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy.GetDailyStoreEndDate
	// FDateTime GetDailyStoreEndDate();                                                                                        // [0xa6e2854] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget
/// Size: 0x0060 (0x000538 - 0x000598)
class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1432;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        OFFSET(get<T>, {0x538, 8, 0, 0})
	SMember(FName)                                     CurrentSquadId                                              OFFSET(getStruct<T>, {0x540, 4, 0, 0})
	CMember(UFortSquadSlotsView*)                      ExpeditionSquadSlotsView                                    OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UFortSquadSlotDetailsPanel*)               ExpeditionSquadSlotDetails                                  OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UFortSquadSlotItemPicker*)                 ExpeditionSquadSlotPicker                                   OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UFortItemViewContext_ExpeditionSquadSlotsView*) ItemViewContext_ExpeditionSlotsView                    OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortItemViewContext_ExpeditionSquadSlotItemPicker*) ItemViewContext_ExpeditionSlotItemPicker          OFFSET(get<T>, {0x568, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetData
	// void SetData(UFortExpeditionItem* InItem);                                                                               // [0xa6e5074] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.SetCurrentSquadId
	// void SetCurrentSquadId(FName SquadId);                                                                                   // [0xa6e7d34] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRequestClosePicker
	// void OnRequestClosePicker();                                                                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.OnRefreshBuildSquadWidget
	// void OnRefreshBuildSquadWidget();                                                                                        // [0x6cdb258] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsSquadSlotLocked
	// bool IsSquadSlotLocked(int32_t SlotIndex);                                                                               // [0xa6e4c84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.IsExpeditionValidToStart
	// bool IsExpeditionValidToStart();                                                                                         // [0xa6e4b90] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleRequestStartExpedition
	// void HandleRequestStartExpedition(bool& bPassThrough);                                                                   // [0xa6e3e48] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.HandleDifferentSquadSlotSelected
	// void HandleDifferentSquadSlotSelected(int32_t SquadSlotIndex);                                                           // [0xa6e3a00] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget.ClearTemporaryExpeditionSquadState
	// void ClearTemporaryExpeditionSquadState(bool bPreviewOnly);                                                              // [0xa6e2600] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionDetailsWidget
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UFortExpeditionDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortSquadSlotsView*)                      ExpeditionSquadSlotsView                                    OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FName)                                     CurrentSquadId                                              OFFSET(getStruct<T>, {0x2F8, 4, 0, 0})
	CMember(UFortItemViewContext_ExpeditionSquadSlotsView*) ItemViewContext_ExpeditionSlotsView                    OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.SetData
	// void SetData(UFortExpeditionItem* InItem);                                                                               // [0x6ee6cdc] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.SetCurrentSquadId
	// void SetCurrentSquadId(FName SquadId);                                                                                   // [0xa6e7dc8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.RequestAbandonExpedition
	// void RequestAbandonExpedition();                                                                                         // [0xa6e7978] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionDetailsWidget.HandleAbandonExpeditionCompleted
	// void HandleAbandonExpeditionCompleted(UFortExpeditionItem* Expedition, bool bSuccess);                                   // [0xa6e3708] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionExpiresWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortExpeditionExpiresWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionExpiresWidget.SetData
	// void SetData(UFortExpeditionItem* InItem);                                                                               // [0x77074c8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionExpiresWidget.OnExpeditionExpirationUpdated
	// void OnExpeditionExpirationUpdated();                                                                                    // [0x2397dc8] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionListItemWidget
/// Size: 0x0020 (0x0014E0 - 0x001500)
class UFortExpeditionListItemWidget : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionListItemWidget.OnItemChanged
	// void OnItemChanged();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionListViewWidget
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UFortExpeditionListViewWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FMulticastInlineDelegate)                  OnExpeditionSelected                                        OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExpeditionListViewRefreshed                               OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	CMember(UCommonListView*)                          ExpeditionListView                                          OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FName)                                     CurrentTabNameId                                            OFFSET(getStruct<T>, {0x310, 4, 0, 0})
	CMember(EFortExpeditionListSort)                   SortType                                                    OFFSET(get<T>, {0x314, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionListViewWidget.SetExpeditionListSortType
	// void SetExpeditionListSortType(EFortExpeditionListSort InSortType);                                                      // [0xa6e8464] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionListViewWidget.GetExpeditionListSortName
	// FText GetExpeditionListSortName();                                                                                       // [0xa6e2900] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionMasterWidget
/// Size: 0x0020 (0x000538 - 0x000558)
class UFortExpeditionMasterWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1368;

public:
};

/// Class /Script/SaveTheWorldUI.FortExpeditionOverviewWidget
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortExpeditionOverviewWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UClass*)                                   TabButtonType                                               OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TArray<FExpeditionTabInfo>)                TabListRegistrationInfo                                     OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(UFortTabListWidgetBase_Legacy*)            ExpeditionTabList                                           OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UFortExpeditionListViewWidget*)            ExpeditionListView                                          OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.UpdateExpeditionTabs
	// void UpdateExpeditionTabs();                                                                                             // [0xa6e8bb8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionTabSelected
	// void OnExpeditionTabSelected(FName& TabNameID);                                                                          // [0xa6e5190] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.OnExpeditionOverviewRefresh
	// void OnExpeditionOverviewRefresh();                                                                                      // [0xeadc78] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabSelected
	// void HandleExpeditionTabSelected(FName TabNameID);                                                                       // [0xa6e3a84] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortExpeditionOverviewWidget.HandleExpeditionTabButtonCreated
	// void HandleExpeditionTabButtonCreated(FName TabNameID, UCommonButtonBase* TabButton);                                    // [0x7edc5bc] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionPickVehicleWidget
/// Size: 0x0008 (0x000538 - 0x000540)
class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        OFFSET(get<T>, {0x538, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionPickVehicleWidget.SetData
	// void SetData(UFortExpeditionItem* InItem);                                                                               // [0x9379560] Native|Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionReturnsWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortExpeditionReturnsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionReturnsWidget.SetData
	// void SetData(UFortExpeditionItem* InItem);                                                                               // [0x77074c8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionReturnsWidget.OnExpeditionInProgressUpdated
	// void OnExpeditionInProgressUpdated();                                                                                    // [0x2397dc8] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionRewardsWidget
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortExpeditionRewardsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FMulticastInlineDelegate)                  OnAllExpeditionsCollected                                   OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	CMember(UCommonTileView*)                          RewardsTileView                                             OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(bool)                                      bPendingCollection                                          OFFSET(get<bool>, {0x300, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.RefreshRewardsUI
	// void RefreshRewardsUI(UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, TArray<FFortItemInstanceQuantityPair>& Rewards); // [0xa6e71f0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.ProcessNextReward
	// void ProcessNextReward();                                                                                                // [0xa6e6cbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionRewardsWidget.HandleCollectionExpeditionCompleted
	// void HandleCollectionExpeditionCompleted(bool bMcpSuccess, UFortExpeditionItem* Expedition, bool bExpeditionSuccess, TArray<FFortItemInstanceQuantityPair>& Rewards); // [0xa6e3808] Final|Native|Protected|HasOutParms 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionSummaryWidget
/// Size: 0x0058 (0x0002E8 - 0x000340)
class UFortExpeditionSummaryWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(int32_t)                                   AvailableExpeditions                                        OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	DMember(int32_t)                                   CompletedExpeditions                                        OFFSET(get<int32_t>, {0x2EC, 4, 0, 0})
	DMember(int32_t)                                   LandVehiclesTotal                                           OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	DMember(int32_t)                                   LandVehiclesAvailable                                       OFFSET(get<int32_t>, {0x2F4, 4, 0, 0})
	DMember(int32_t)                                   AirVehiclesTotal                                            OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	DMember(int32_t)                                   AirVehiclesAvailable                                        OFFSET(get<int32_t>, {0x2FC, 4, 0, 0})
	DMember(int32_t)                                   SeaVehiclesTotal                                            OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	DMember(int32_t)                                   SeaVehiclesAvailable                                        OFFSET(get<int32_t>, {0x304, 4, 0, 0})
	DMember(int32_t)                                   LandExpeditionsTotal                                        OFFSET(get<int32_t>, {0x308, 4, 0, 0})
	DMember(int32_t)                                   LandExpeditionsAvailable                                    OFFSET(get<int32_t>, {0x30C, 4, 0, 0})
	DMember(int32_t)                                   AirExpeditionsTotal                                         OFFSET(get<int32_t>, {0x310, 4, 0, 0})
	DMember(int32_t)                                   AirExpeditionsAvailable                                     OFFSET(get<int32_t>, {0x314, 4, 0, 0})
	DMember(int32_t)                                   SeaExpeditionsTotal                                         OFFSET(get<int32_t>, {0x318, 4, 0, 0})
	DMember(int32_t)                                   SeaExpeditionsAvailable                                     OFFSET(get<int32_t>, {0x31C, 4, 0, 0})
	CMember(TArray<UFortExpeditionItem*>)              InProgressExpeditions                                       OFFSET(get<T>, {0x320, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortExpeditionSummaryWidget.UnbindInventoryDelegates
	// void UnbindInventoryDelegates();                                                                                         // [0xa6e8b48] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortExpeditionSummaryWidget.OnRefreshSummaryWidget
	// void OnRefreshSummaryWidget();                                                                                           // [0x2397dc8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortExpeditionSummaryWidget.BindInventoryDelegates
	// void BindInventoryDelegates();                                                                                           // [0xa6e207c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortExpeditionUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortExpeditionUtilities : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SaveTheWorldUI.FortExpeditionVehicleTileItemWidget
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortExpeditionVehicleTileItemWidget : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(TWeakObjectPtr<UObject*>)                  SquadId                                                     OFFSET(get<T>, {0x14E8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortFeatureUnlockWidget
/// Size: 0x0038 (0x000570 - 0x0005A8)
class UFortFeatureUnlockWidget : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
	CMember(UCommonWidgetSwitcherLegacy*)              MediaSwitcher                                               OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UWidget*)                                  VideoContent                                                OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UWidget*)                                  ImageContent                                                OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UFortVideoPlayerWidget*)                   VideoWidget                                                 OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCommonLazyImage*)                         ImageWidget                                                 OFFSET(get<T>, {0x590, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.SetData
	// void SetData(FString ItemTemplateID);                                                                                    // [0xa6e7e48] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.RefreshDataBP
	// void RefreshDataBP();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetVideo
	// UMediaSource* GetVideo();                                                                                                // [0xa6e3638] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetTitle
	// FText GetTitle();                                                                                                        // [0xa6e3018] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetSmallIcon
	// TWeakObjectPtr<UTexture2D*> GetSmallIcon();                                                                              // [0xa6e2f5c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetLargeIcon
	// TWeakObjectPtr<UTexture2D*> GetLargeIcon();                                                                              // [0xa6e2bf4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortFeatureUnlockWidget.GetDescription
	// FText GetDescription();                                                                                                  // [0xa6e2880] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortResultsWidgetSTW
/// Size: 0x00C8 (0x000400 - 0x0004C8)
class UFortResultsWidgetSTW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	DMember(int32_t)                                   AdditionalGrantedMissionPoints                              OFFSET(get<int32_t>, {0x478, 4, 0, 0})
	CMember(TArray<UFortItem*>)                        RewardedBadges                                              OFFSET(get<T>, {0x480, 16, 0, 0})
	CMember(TArray<UFortItem*>)                        MissedBadges                                                OFFSET(get<T>, {0x490, 16, 0, 0})
	CMember(TArray<UFortItem*>)                        RewardedItems                                               OFFSET(get<T>, {0x4A0, 16, 0, 0})
	CMember(TArray<UFortItem*>)                        RewardedAccountItems                                        OFFSET(get<T>, {0x4B0, 16, 0, 0})
	CMember(UCommonUserWidget*)                        Radial_Picker                                               OFFSET(get<T>, {0x4C0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.TriggerSetupTeleportCameraEvent
	// void TriggerSetupTeleportCameraEvent();                                                                                  // [0xa6e8b08] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.ToggleChat
	// void ToggleChat(bool bShow);                                                                                             // [0x97aa978] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundUpVoteAnalytic
	// void SendEndOfRoundUpVoteAnalytic(FUniqueNetIdRepl& TargetId, FString TargetPlayerName);                                 // [0x97a868c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundScreenAnalytic
	// void SendEndOfRoundScreenAnalytic(FString ScreenName, bool Skipped, float TimeSpent);                                    // [0x97a7ff0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.SendEndOfRoundFriendInviteAnalytic
	// void SendEndOfRoundFriendInviteAnalytic(FUniqueNetIdRepl& TargetId, FString TargetPlayerName);                           // [0x97a7928] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.RequestExitZone
	// void RequestExitZone();                                                                                                  // [0x97a6a64] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.LogXPData
	// void LogXPData();                                                                                                        // [0xa6e4d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.IsDataFinalized
	// bool IsDataFinalized();                                                                                                  // [0xa6e4b6c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.HandlePickerCancel
	// void HandlePickerCancel(bool& bPassThrough);                                                                             // [0xa6e3ce0] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.HandleEmoteClicked
	// void HandleEmoteClicked(bool& bPassThrough);                                                                             // [0x6641038] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResultText
	// FText GetZoneCompletionResultText();                                                                                     // [0xa6e36b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetZoneCompletionResult
	// EFortCompletionResult GetZoneCompletionResult();                                                                         // [0xa6e3684] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetTotalMissionPointsEarned
	// int32_t GetTotalMissionPointsEarned();                                                                                   // [0xa6e33a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResultsWidgetSTW.GetRewardsByType
	// void GetRewardsByType(EFortRewardItemTypeSTW Type, TArray<UFortItem*>& OutRewards);                                      // [0xa6e2e00] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortSTWUIData
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortSTWUIData : public UFortSTWUIDataBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               UpgradesDisplayDataTable                                    OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRootViewportLayout_STW
/// Size: 0x0008 (0x000420 - 0x000428)
class UFortRootViewportLayout_STW : public UFortRootViewportLayout
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(UTalkingHead*)                             TalkingHead                                                 OFFSET(get<T>, {0x420, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW
/// Size: 0x0058 (0x000570 - 0x0005C8)
class UFortItemAutoMulchActivatablePanel_STW : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
};

/// Class /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW
/// Size: 0x00A0 (0x000570 - 0x000610)
class UFortItemCraftingOptionsActivatablePanel_STW : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	CMember(UFortSchematicItem*)                       BaseItem                                                    OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortSchematicItem*)                       TargetItem                                                  OFFSET(get<T>, {0x578, 8, 0, 0})
	DMember(int32_t)                                   MaxCraftingTierIndex                                        OFFSET(get<int32_t>, {0x580, 4, 0, 0})
	DMember(int32_t)                                   TargetCraftingTierIndex                                     OFFSET(get<int32_t>, {0x584, 4, 0, 0})
	DMember(int32_t)                                   TargetPromotionTierIndex                                    OFFSET(get<int32_t>, {0x588, 4, 0, 0})
	DMember(int32_t)                                   MaxQuantity                                                 OFFSET(get<int32_t>, {0x58C, 4, 0, 0})
	DMember(int32_t)                                   SelectedQuantity                                            OFFSET(get<int32_t>, {0x590, 4, 0, 0})
	DMember(bool)                                      CanCraftTargetItem                                          OFFSET(get<bool>, {0x594, 1, 0, 0})
	CMember(UWidget*)                                  TierImageParent                                             OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UWidget*)                                  TierImageParent1                                            OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UWidget*)                                  TierImageParent2                                            OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UWidget*)                                  TierImageParent3                                            OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UWidget*)                                  TierImageParent4                                            OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UImage*)                                   TierImage                                                   OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UImage*)                                   TierImage1                                                  OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UImage*)                                   TierImage2                                                  OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(UImage*)                                   TierImage3                                                  OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(UImage*)                                   TierImage4                                                  OFFSET(get<T>, {0x5E0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.UpdateTierImages
	// void UpdateTierImages();                                                                                                 // [0x99b2588] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetTargetCraftingTierIndex
	// void SetTargetCraftingTierIndex(int32_t NewTierIndex);                                                                   // [0xa6e88f8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetSelectedQuantity_BP
	// void SetSelectedQuantity_BP(int32_t NewQuantity);                                                                        // [0xa6e8878] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetItemManagementScreen
	// void SetItemManagementScreen(UFortItemManagementScreen_STW* InItemManagementScreen);                                     // [0x99af360] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SetBaseSchematicItem
	// void SetBaseSchematicItem(UFortSchematicItem* InBaseItem);                                                               // [0xa6e7bb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SelectPreviousTier
	// void SelectPreviousTier();                                                                                               // [0xa6e7a78] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.SelectNextTier
	// void SelectNextTier();                                                                                                   // [0xa6e7a38] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnTargetItemChanged
	// void OnTargetItemChanged(UFortSchematicItem* NewTargetItem);                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnSelectedQuantityChanged
	// void OnSelectedQuantityChanged(int32_t NewSelectedQuantity);                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnMaxQuantityChanged
	// void OnMaxQuantityChanged(int32_t NewMaxQuantity);                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.OnBaseItemChanged
	// void OnBaseItemChanged(UFortSchematicItem* NewBaseItem);                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.IncreaseSelectedQuantity
	// void IncreaseSelectedQuantity();                                                                                         // [0xa6e4b40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.DecreaseSelectedQuantity
	// void DecreaseSelectedQuantity();                                                                                         // [0xa6e2760] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.CraftTargetItem
	// void CraftTargetItem();                                                                                                  // [0xa6e26f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW.CraftAndSlotTargetItem
	// void CraftAndSlotTargetItem();                                                                                           // [0xa6e2680] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW
/// Size: 0x01C8 (0x000400 - 0x0005C8)
class UFortItemDetailsActivatablePanel_STW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	SMember(FDataTableRowHandle)                       DropInputActionHandle                                       OFFSET(getStruct<T>, {0x400, 16, 0, 0})
	SMember(FDataTableRowHandle)                       DestroyInputActionHandle                                    OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputActionHandle                                       OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	SMember(FDataTableRowHandle)                       LeaveInventoryInputActionHandle                             OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CraftingOptionsInputActionHandle                            OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CraftInputActionHandle                                      OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	SMember(FDataTableRowHandle)                       MulchInputActionHandle                                      OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectInputActionHandle                                    OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InventoryInspectInputActionHandle                           OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	SMember(FDataTableRowHandle)                       UnequipInputActionHandle                                    OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FDataTableRowHandle)                       EquipInputActionHandle                                      OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       MoreInfoInputActionHandle                                   OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       WithdrawAllInputActionHandle                                OFFSET(getStruct<T>, {0x4C0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SwitchPanelInputActionHandle                                OFFSET(getStruct<T>, {0x4D0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       TransferInputActionHandle                                   OFFSET(getStruct<T>, {0x4E0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ConsumeItemInputActionHandle                                OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SortInputActionHandle                                       OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CompareInputActionHandle                                    OFFSET(getStruct<T>, {0x510, 16, 0, 0})
	SMember(FDataTableRowHandle)                       OpenCustomFilterInputActionHandle                           OFFSET(getStruct<T>, {0x520, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                ItemToDetail                                                OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                ItemToCompareWith                                           OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UFortTooltipLoadingWrapper*)               ItemToDetailLoadingWrapper                                  OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         ItemToDetailLoadGuard                                       OFFSET(get<T>, {0x5C0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.SetupInputHandling
	// void SetupInputHandling();                                                                                               // [0xa6e8988] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.SetInputActionState
	// void SetInputActionState(FDataTableRowHandle& RowHandle, bool State);                                                    // [0xa6e84f0] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterTransferActions
	// void RegisterTransferActions();                                                                                          // [0xa6e78e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterSort
	// void RegisterSort();                                                                                                     // [0xa6e78d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterRetire
	// void RegisterRetire();                                                                                                   // [0xa6e78bc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterOpenCustomFilter
	// void RegisterOpenCustomFilter();                                                                                         // [0xa6e78a0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterMulch
	// void RegisterMulch();                                                                                                    // [0xa6e788c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterMore
	// void RegisterMore();                                                                                                     // [0xa6e7878] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterLeaveInventory
	// void RegisterLeaveInventory();                                                                                           // [0xa6e7864] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterInventoryInspect
	// void RegisterInventoryInspect();                                                                                         // [0xa6e7850] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterInspectUpgrade
	// void RegisterInspectUpgrade();                                                                                           // [0xa6e7834] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterInspect
	// void RegisterInspect();                                                                                                  // [0xa6e7820] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterEquip
	// void RegisterEquip();                                                                                                    // [0xa6e738c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterDropOrDestroy
	// void RegisterDropOrDestroy();                                                                                            // [0xa6e7378] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterCraft
	// void RegisterCraft();                                                                                                    // [0xa6e7364] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterConsumeItem
	// void RegisterConsumeItem();                                                                                              // [0xa6e7350] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterCompare
	// void RegisterCompare();                                                                                                  // [0xa6e7334] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RegisterBack
	// void RegisterBack();                                                                                                     // [0xa6e7320] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshTransferActions
	// void RefreshTransferActions();                                                                                           // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshSwitchPanelAction
	// void RefreshSwitchPanelAction();                                                                                         // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshOnNewItemSelected
	// void RefreshOnNewItemSelected();                                                                                         // [0xa6e71dc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshOnMenuChange
	// void RefreshOnMenuChange();                                                                                              // [0xa6e71c8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshDropAction
	// void RefreshDropAction();                                                                                                // [0xa6e71b4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshDestroyAction
	// void RefreshDestroyAction();                                                                                             // [0xa6e7164] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshCraftActions
	// void RefreshCraftActions();                                                                                              // [0xa6e7150] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.RefreshConsumeAction
	// void RefreshConsumeAction();                                                                                             // [0xa6e713c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.MulchQuestComplete
	// bool MulchQuestComplete();                                                                                               // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleWorldItemsChanged
	// void HandleWorldItemsChanged();                                                                                          // [0xa6e49ac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleWorldItemListChanged
	// void HandleWorldItemListChanged(TArray<UFortWorldItem*>& ItemsAdded, TArray<UFortWorldItem*>& ItemsRemoved);             // [0xa6e4898] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleWithdrawAll
	// void HandleWithdrawAll();                                                                                                // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleTransfer
	// void HandleTransfer();                                                                                                   // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleSwitchPanel
	// void HandleSwitchPanel();                                                                                                // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleSort
	// void HandleSort();                                                                                                       // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleQuickbarContentsChanged
	// void HandleQuickbarContentsChanged(EFortQuickBars QuickbarIndex, TArray<int32_t>& ChangedSlots);                         // [0xa6e3d70] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleOpenCustomFilter
	// void HandleOpenCustomFilter();                                                                                           // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleMulchNative
	// void HandleMulchNative();                                                                                                // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleMulch
	// void HandleMulch();                                                                                                      // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleMore
	// void HandleMore();                                                                                                       // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleItemToDetailTooltipAssetsLoaded
	// void HandleItemToDetailTooltipAssetsLoaded();                                                                            // [0xa6e3b04] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleInspect
	// void HandleInspect();                                                                                                    // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleEquip
	// void HandleEquip();                                                                                                      // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDrop
	// void HandleDrop();                                                                                                       // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDifferentItemToDetailSetBP
	// void HandleDifferentItemToDetailSetBP();                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDifferentItemToCompareSetBP
	// void HandleDifferentItemToCompareSetBP();                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleDestroy
	// void HandleDestroy();                                                                                                    // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleCraftingOptions
	// void HandleCraftingOptions();                                                                                            // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleCraft
	// void HandleCraft();                                                                                                      // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleConsumeItemProgressChangedBP
	// void HandleConsumeItemProgressChangedBP();                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleConsumeItem
	// void HandleConsumeItem();                                                                                                // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleCompare
	// void HandleCompare();                                                                                                    // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW.HandleBackNative
	// void HandleBackNative();                                                                                                 // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW
/// Size: 0x0008 (0x0005C8 - 0x0005D0)
class UFortItemDetailsModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(UCommonWidgetSwitcherLegacy*)              DetailPanelWidgetSwitcher                                   OFFSET(get<T>, {0x5C8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW.HandleOnActiveWidgetChanged
	// void HandleOnActiveWidgetChanged(UWidget* ActiveWidget, int32_t ActiveWidgetIndex);                                      // [0xa6e3b94] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortItemCompareModeActivatablePanel_STW
/// Size: 0x0010 (0x0005C8 - 0x0005D8)
class UFortItemCompareModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	CMember(UFortItemManagementItemDetailsPanel_STW*)  ComparisonModeLeftItemDetailsPanel                          OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UFortItemManagementItemDetailsPanel_STW*)  ComparisonModeRightItemDetailsPanel                         OFFSET(get<T>, {0x5D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemMulchModeActivatablePanel_STW
/// Size: 0x0010 (0x0005C8 - 0x0005D8)
class UFortItemMulchModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	CMember(UFortItemManagementItemDetailsPanel_STW*)  MulchModeItemDetailsPanel                                   OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UFortItemManagementMulchDetailsPanel_STW*) MulchDetailsPanel                                           OFFSET(get<T>, {0x5D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW
/// Size: 0x0068 (0x000570 - 0x0005D8)
class UFortItemManagementCustomFilterModalWidget_STW : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1496;

public:
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(TArray<EFortInventoryCustomFilter>)        AvailableFilters                                            OFFSET(get<T>, {0x578, 16, 0, 0})
	CMember(TSet<EFortInventoryCustomFilter>)          LocalCustomFilterSet                                        OFFSET(get<T>, {0x588, 80, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.ToggleFilter
	// void ToggleFilter(EFortInventoryCustomFilter Filter);                                                                    // [0xa7129b4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnEndCommitCustomFilter
	// void OnEndCommitCustomFilter(bool bWasSuccessful);                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnCustomFilterSetUpdated
	// void OnCustomFilterSetUpdated();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.OnBeginCommitCustomFilter
	// void OnBeginCommitCustomFilter();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.IsCustomFilterEnabled
	// bool IsCustomFilterEnabled(EFortInventoryCustomFilter Filter);                                                           // [0x9929d04] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.EnableAllFilters
	// void EnableAllFilters();                                                                                                 // [0xa70d6f4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.DisableAllFilters
	// void DisableAllFilters();                                                                                                // [0xa70d4fc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW.CommitCustomFilters
	// void CommitCustomFilters();                                                                                              // [0xa70d1f8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW
/// Size: 0x01D8 (0x0002E8 - 0x0004C0)
class UFortItemManagementInventoryPanel_STW : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	SMember(FName)                                     CurrentFilterName                                           OFFSET(getStruct<T>, {0x338, 4, 0, 0})
	CMember(EInventoryContentSortType)                 CurrentSortType                                             OFFSET(get<T>, {0x33C, 1, 0, 0})
	CMember(UClass*)                                   FilterTabButtonType                                         OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UClass*)                                   FilterTabButtonStyle                                        OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(TArray<FFortItemManagementInventoryFilterTabLabelInfo>) FilterTabLabelInfoArray                        OFFSET(get<T>, {0x350, 16, 0, 0})
	CMember(UFortTabListWidgetBase*)                   FilterTabList                                               OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         TileViewLoadGuard                                           OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UFortItemTileView*)                        TileView                                                    OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UPanelWidget*)                             CraftingPanel                                               OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         CraftingTileViewLoadGuard                                   OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UFortItemTileView*)                        CraftingTileView                                            OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UPanelWidget*)                             StoragePanel                                                OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         StorageTileViewLoadGuard                                    OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UFortItemTileView*)                        StorageTileView                                             OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         MulchRestrictionReasonText                                  OFFSET(get<T>, {0x3A8, 8, 0, 0})
	CMember(EFortItemCardSize)                         SmallTileSize                                               OFFSET(get<T>, {0x3B0, 1, 0, 0})
	CMember(EFortItemCardSize)                         LargeTileSize                                               OFFSET(get<T>, {0x3B1, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               OFFSET(get<T>, {0x3B4, 8, 0, 0})
	DMember(bool)                                      bCanDragItems                                               OFFSET(get<bool>, {0x3BC, 1, 0, 0})
	CMember(TArray<FQuickbarEquipSlotIndicesConfig>)   DefaultQuickbarEquipSlotIndicesConfigs                      OFFSET(get<T>, {0x3C0, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      QuickbarEquipSlotIndices                                    OFFSET(get<T>, {0x3D0, 80, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UWidget*)                                  WidgetToCenter                                              OFFSET(get<T>, {0x4B8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.UpdateSchematicTiles
	// void UpdateSchematicTiles();                                                                                             // [0xa713420] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.ToggleTileSize
	// void ToggleTileSize();                                                                                                   // [0xa712b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.TogglePrioritizeFavorites
	// void TogglePrioritizeFavorites();                                                                                        // [0xa712a64] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SwitchPanelFocus
	// void SwitchPanelFocus();                                                                                                 // [0xa7129a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetSortType
	// void SetSortType(EInventoryContentSortType SortType);                                                                    // [0xa712150] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.SetFilter
	// void SetFilter(FName FilterName);                                                                                        // [0xa71186c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RequestFocusEquipSlots
	// void RequestFocusEquipSlots();                                                                                           // [0xa710dfc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.RefreshCraftingSort
	// void RefreshCraftingSort();                                                                                              // [0xa710c50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.OnMulchRestrictionTextShown
	// void OnMulchRestrictionTextShown(bool bShown);                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.MarkAllItemsAsSeen
	// void MarkAllItemsAsSeen();                                                                                               // [0xa7105b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSwitchPanelAvailable
	// bool IsSwitchPanelAvailable();                                                                                           // [0xa710478] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.IsSelectedItem
	// bool IsSelectedItem(UFortItem* Item);                                                                                    // [0xa7103c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HasUnlockedStorageSlots
	// bool HasUnlockedStorageSlots();                                                                                          // [0x9929b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleSetOfItemsToMulchChangedBP
	// void HandleSetOfItemsToMulchChangedBP();                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleQuickBarChangedBP
	// void HandleQuickBarChangedBP(EFortQuickBars QuickBarType);                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleItemBeginDrag
	// void HandleItemBeginDrag(UObject* Item);                                                                                 // [0xa70f9d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleInventoryUpdatedEvent
	// void HandleInventoryUpdatedEvent();                                                                                      // [0xa70f9c4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFocusEquipSlotsBP
	// void HandleFocusEquipSlotsBP();                                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabSelected
	// void HandleFilterTabSelected(FName TabNameID);                                                                           // [0xa70f7f0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleFilterTabButtonCreated
	// void HandleFilterTabButtonCreated(FName TabNameID, UCommonButtonBase* TabButton);                                        // [0x9929420] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentSortTypeSetBP
	// void HandleDifferentSortTypeSetBP();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentItemManagementModeSetBP
	// void HandleDifferentItemManagementModeSetBP();                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFrontendInventoryFilterSetBP
	// void HandleDifferentFrontendInventoryFilterSetBP();                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleDifferentFilterSetBP
	// void HandleDifferentFilterSetBP();                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCustomInventoryFilterChanged
	// void HandleCustomInventoryFilterChanged();                                                                               // [0xa70f4ec] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChangedBP
	// void HandleCursorModeChangedBP(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget);         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCursorModeChanged
	// void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget);           // [0xa70f3e4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.HandleCraftItemStarted
	// void HandleCraftItemStarted();                                                                                           // [0xa70f3d0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetUpgradeItemDefinitionsForCurrentInventory
	// TArray<UFortItemDefinition*> GetUpgradeItemDefinitionsForCurrentInventory();                                             // [0xa70eafc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetSupportedSortTypesForCurrentInventory
	// TArray<EInventoryContentSortType> GetSupportedSortTypesForCurrentInventory();                                            // [0xa70eac0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetShouldPrioritizeFavorites
	// bool GetShouldPrioritizeFavorites();                                                                                     // [0x9928ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.GetQualifiedFilterDisplayName
	// FText GetQualifiedFilterDisplayName();                                                                                   // [0xa70e85c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CycleSortType
	// void CycleSortType();                                                                                                    // [0xa70d4cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.CanDragItems
	// bool CanDragItems();                                                                                                     // [0x9928050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AdvanceSelection
	// void AdvanceSelection();                                                                                                 // [0xa70cc74] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW.AddItemStackToMulch
	// void AddItemStackToMulch(UFortItem* Item, int32_t Count);                                                                // [0x9927ef0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW
/// Size: 0x0070 (0x001520 - 0x001590)
class UFortItemManagementItemTileButton_STW : public UFortItemTileButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5520;

public:
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               OFFSET(get<T>, {0x1518, 8, 0, 0})
	DMember(bool)                                      HasTheItemToDetail                                          OFFSET(get<bool>, {0x1520, 1, 0, 0})
	DMember(bool)                                      HasTheItemToCompareDetailsWith                              OFFSET(get<bool>, {0x1521, 1, 0, 0})
	DMember(bool)                                      HasAnItemMarkedForMulching                                  OFFSET(get<bool>, {0x1522, 1, 0, 0})
	DMember(int32_t)                                   MulchCount                                                  OFFSET(get<int32_t>, {0x1524, 4, 0, 0})
	CMember(UOverlay*)                                 NotCraftableOverlay                                         OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(UFortDynamicEntryBox*)                     EquipSlotOverlay                                            OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             OFFSET(get<T>, {0x1538, 8, 0, 0})
	DMember(bool)                                      ShowCollectionBookIndicator                                 OFFSET(get<bool>, {0x1540, 1, 0, 0})
	DMember(bool)                                      ShowRefundIndicator                                         OFFSET(get<bool>, {0x1541, 1, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            OFFSET(get<T>, {0x1588, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.UpdateEquipSlotOverlay
	// void UpdateEquipSlotOverlay(int32_t CurrentSlotIndex);                                                                   // [0xa71321c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.PopulateEquipSlotOverlay
	// void PopulateEquipSlotOverlay();                                                                                         // [0xa710bbc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.OnSlotItemComplete
	// void OnSlotItemComplete(UFortAccountItem* SlottedItem, FName SlotId);                                                    // [0xa7106a0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.IsValidEquipSlotOverlayIndex
	// bool IsValidEquipSlotOverlayIndex(int32_t SlotIndex);                                                                    // [0xa710524] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleShowRefundIndicatorChanged
	// void HandleShowRefundIndicatorChanged();                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleShowCollectionBookIndicatorChanged
	// void HandleShowCollectionBookIndicatorChanged();                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleItemMulchStateChanged
	// void HandleItemMulchStateChanged();                                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleItemChangedBP
	// void HandleItemChangedBP();                                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleHasItemToDetailChanged
	// void HandleHasItemToDetailChanged();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleHasItemToCompareDetailsWithChanged
	// void HandleHasItemToCompareDetailsWithChanged();                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleEquipSlotChanged
	// void HandleEquipSlotChanged(int32_t EquipSlot);                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.HandleDifferentItemManagementModeSetBP
	// void HandleDifferentItemManagementModeSetBP();                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetPopupMenu
	// UUserWidget* GetPopupMenu();                                                                                             // [0x9928e44] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetItemManagementMode
	// EFortItemManagementMode GetItemManagementMode();                                                                         // [0xa70e4ec] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW.GetHomebaseSquadSlotForItem
	// FHomebaseSquadSlotId GetHomebaseSquadSlotForItem();                                                                      // [0x9928a78] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW
/// Size: 0x0020 (0x0003C0 - 0x0003E0)
class UFortItemManagementItemDetailsPanel_STW : public UFortItemDetailsHostPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	DMember(bool)                                      HasItemMarkedForMulching                                    OFFSET(get<bool>, {0x3C0, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               OFFSET(get<T>, {0x3C4, 8, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            OFFSET(get<T>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.HandleHostSet
	// void HandleHostSet();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.HandleHasItemMarkedForMulchingChanged
	// void HandleHasItemMarkedForMulchingChanged();                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW.GetAmmoTypeItemDefinitions
	// TArray<UFortAmmoItemDefinition*> GetAmmoTypeItemDefinitions();                                                           // [0x9928a3c] Final|Native|Static|Protected|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortItemManagementMulchDetailsPanel_STW : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UFortItemQuantityListBase*)                ResourceList                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   HostItemManagementMulchPanel                                OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.IsSpaceAvailableForMulch
	// bool IsSpaceAvailableForMulch();                                                                                         // [0xa710454] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.HandleSetOfItemsToMulchChangedBP
	// void HandleSetOfItemsToMulchChangedBP();                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.HandleHostSet
	// void HandleHostSet();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.GetItemsToMulch
	// TArray<UFortItem*> GetItemsToMulch();                                                                                    // [0x9928cd4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.GetItemCountsToMulch
	// TArray<int32_t> GetItemCountsToMulch();                                                                                  // [0x9928bd0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW.CommitMulch
	// void CommitMulch();                                                                                                      // [0x99282c8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UFortItemManagementModeDetailsPanel_STW : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UCommonWidgetSwitcherLegacy*)              ModeWidgetSwitcher                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortItemDetailsActivatablePanel_STW*)     DetailsModeItemDetailsPanel                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UFortItemDetailsActivatablePanel_STW*)     ComparisonModeItemDetailsPanel                              OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UFortItemDetailsActivatablePanel_STW*)     MulchModeItemDetailsPanel                                   OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               OFFSET(get<T>, {0x308, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.HandleHostSet
	// void HandleHostSet();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.HandleDifferentItemManagementModeSetBP
	// void HandleDifferentItemManagementModeSetBP();                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW.GetItemManagementMode
	// EFortItemManagementMode GetItemManagementMode();                                                                         // [0xa70e510] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortItemManagementScreen_STW
/// Size: 0x0208 (0x000400 - 0x000608)
class UFortItemManagementScreen_STW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	SMember(FMulticastInlineDelegate)                  OnItemViewRefreshed                                         OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	CMember(EFortItemManagementMode)                   Mode                                                        OFFSET(get<T>, {0x4D8, 1, 0, 0})
	CMember(EFortFrontendInventoryFilter)              FrontendInventoryFilter                                     OFFSET(get<T>, {0x4D9, 1, 0, 0})
	DMember(bool)                                      bReadOnlyModeWIFE                                           OFFSET(get<bool>, {0x4DA, 1, 0, 0})
	DMember(bool)                                      ConsumeItemRequestInProgress                                OFFSET(get<bool>, {0x4DB, 1, 0, 0})
	CMember(UFortItemManagementInventoryPanel_STW*)    InventoryPanel                                              OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(UFortItemManagementModeDetailsPanel_STW*)  ModeDetailsPanel                                            OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                ItemToDetail                                                OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(UClass*)                                   MulchConfirmationModalClass                                 OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UClass*)                                   CustomFilterModalClass                                      OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UFortMulchConfirmationModalWidget*)        MulchConfirmationModal                                      OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UFortItemManagementCustomFilterModalWidget_STW*) CustomFilterModal                                     OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(TMap<EInventoryContentSortType, FText>)    SortLabels                                                  OFFSET(get<T>, {0x538, 80, 0, 0})
	CMember(TMap<FName, FText>)                        MoreLabels                                                  OFFSET(get<T>, {0x588, 80, 0, 0})
	CMember(UAthenaCustomizationPickerSortAndFilterBlade*) Blade_SortAndMore                                       OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            OFFSET(get<T>, {0x5F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.UpdateSorts
	// void UpdateSorts();                                                                                                      // [0xa713434] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.TransferItem
	// void TransferItem(UFortItem* Item);                                                                                      // [0xa712b84] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleSortAndMoreBlade
	// void ToggleSortAndMoreBlade();                                                                                           // [0xa712b14] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowRefundIndicator
	// void ToggleShowRefundIndicator();                                                                                        // [0xa712ae8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ToggleShowCollectionBookIndicator
	// void ToggleShowCollectionBookIndicator();                                                                                // [0xa712abc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowWarningReadOnlyWIFE
	// void ShowWarningReadOnlyWIFE(bool Force);                                                                                // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                       // [0xa712888] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ShowCustomFilterModal
	// void ShowCustomFilterModal();                                                                                            // [0xa712860] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.SetFrontendInventoryFilter
	// void SetFrontendInventoryFilter(EFortFrontendInventoryFilter FrontendInventoryFilter);                                   // [0xa7118ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.SetConsumeItemRequestInProgress
	// void SetConsumeItemRequestInProgress(bool InProgress);                                                                   // [0xa711758] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.RequestPopupMenuForSelectedItem
	// void RequestPopupMenuForSelectedItem();                                                                                  // [0xa710e40] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.OpenCraftingOptions
	// void OpenCraftingOptions(UFortSchematicItem* SchematicItem);                                                             // [0xa71085c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.OpenAutoMulchOptions
	// void OpenAutoMulchOptions();                                                                                             // [0xa710848] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                           // [0xa710668] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                             // [0xa710630] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.MarkAllItemsAsSeen
	// void MarkAllItemsAsSeen();                                                                                               // [0xa7105cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.IsScreenWIFE
	// bool IsScreenWIFE();                                                                                                     // [0xa7103a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.InspectItem
	// void InspectItem(UFortItem* Item);                                                                                       // [0xa710154] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                       // [0xa71011c] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HideCustomFilterModal
	// void HideCustomFilterModal();                                                                                            // [0xa7100c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HasItemBeenSeen
	// bool HasItemBeenSeen(UFortAccountItem* AccountItem);                                                                     // [0x8daf420] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HasDefaultItemsToMulch
	// bool HasDefaultItemsToMulch();                                                                                           // [0xa71009c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleTransferItemBP
	// void HandleTransferItemBP(UFortItem* Item);                                                                              // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenCraftingOptionsBP
	// void HandleOpenCraftingOptionsBP(UFortSchematicItem* SchematicItem);                                                     // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleOpenAutoMulchOptionsBP
	// void HandleOpenAutoMulchOptionsBP();                                                                                     // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleMulchQuantitySelection
	// void HandleMulchQuantitySelection(UFortItem* Item);                                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleMoreButtonSelected
	// void HandleMoreButtonSelected(FName MoreNameId, UCommonButtonBase* NewButton);                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToDetailChanged
	// void HandleItemToDetailChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                          // [0xa70fb44] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleItemToCompareWithChanged
	// void HandleItemToCompareWithChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                     // [0xa70fa58] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleInspectItemBP
	// void HandleInspectItemBP(UFortItem* Item);                                                                               // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleEquipItemBP
	// void HandleEquipItemBP(UFortItem* Item);                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleDropItemBP
	// void HandleDropItemBP(UFortItem* Item);                                                                                  // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleDifferentItemManagementModeSetBP
	// void HandleDifferentItemManagementModeSetBP();                                                                           // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftItemBP
	// void HandleCraftItemBP(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount);              // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleCraftAndSlotItemBP
	// void HandleCraftAndSlotItemBP(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount);       // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.HandleConsumeItemBP
	// void HandleConsumeItemBP(UFortConsumableAccountItem* ConsumableItem);                                                    // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GuardActionForReadOnlyWIFE
	// bool GuardActionForReadOnlyWIFE();                                                                                       // [0xa70f15c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowRefundIndicator
	// bool GetShouldShowRefundIndicator();                                                                                     // [0xa70ea90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetShouldShowCollectionBookIndicator
	// bool GetShouldShowCollectionBookIndicator();                                                                             // [0xa70ea78] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToDetail
	// UFortItem* GetItemToDetail();                                                                                            // [0xa70e5a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.GetItemToCompareDetailsWith
	// UFortItem* GetItemToCompareDetailsWith();                                                                                // [0xa70e57c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EquipItem
	// void EquipItem(UFortItem* Item);                                                                                         // [0xa70da6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchModeForAutoMulch
	// void EnterMulchModeForAutoMulch();                                                                                       // [0xa70da58] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterMulchMode
	// void EnterMulchMode(UFortItem* ItemToMulch);                                                                             // [0xa70d8f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterDetailsMode
	// void EnterDetailsMode(UFortItem* ItemToDetail);                                                                          // [0xa70d870] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.EnterComparisonMode
	// void EnterComparisonMode(UFortItem* ItemToCompareDetailsWith);                                                           // [0xa70d75c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.DropItem
	// void DropItem(UFortItem* Item);                                                                                          // [0xa70d650] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CycleSortType
	// void CycleSortType();                                                                                                    // [0xa70d4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CraftItem
	// void CraftItem(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount);                      // [0xa70d3d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CraftAndSlotItem
	// void CraftAndSlotItem(UFortSchematicItem* SchematicItem, EFortItemTier RequestedTier, int32_t CraftCount);               // [0xa70d2dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.ConsumeItem
	// void ConsumeItem(UFortConsumableAccountItem* ConsumableItem);                                                            // [0xa70d248] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CanRequestPopupMenuForSelectedItem
	// bool CanRequestPopupMenuForSelectedItem();                                                                               // [0xa70d110] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CanEquipItem
	// bool CanEquipItem(UFortItem* Item);                                                                                      // [0x9928068] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemManagementScreen_STW.CancelInventoryPanelTileViewRefresh
	// void CancelInventoryPanelTileViewRefresh();                                                                              // [0xa70d130] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.MainMenu_STW
/// Size: 0x0130 (0x000400 - 0x000530)
class UMainMenu_STW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	SMember(FText)                                     DefaultHelpText                                             OFFSET(getStruct<T>, {0x400, 24, 0, 0})
	CMember(UCommonTextBlock*)                         Text_CountDownTimer                                         OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_LeaveExperience                                      OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonUserWidget*)                        Button_Leave                                                OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ContextualHelpText                                          OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackBoard                                            OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UBackgroundBlur*)                          BackgroundBlur                                              OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UBorder*)                                  BackgroundDarkener                                          OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ReportPlayer                                         OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Logout                                               OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Support                                              OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Exit                                                 OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Settings                                             OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CloseMenuAction                                             OFFSET(getStruct<T>, {0x478, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SwitchProfileAction                                         OFFSET(getStruct<T>, {0x488, 16, 0, 0})
	CMember(UClass*)                                   SettingsScreenClass                                         OFFSET(get<T>, {0x498, 8, 0, 0})
	SMember(FText)                                     LogoutTitle                                                 OFFSET(getStruct<T>, {0x4A0, 24, 0, 0})
	SMember(FText)                                     LogoutDescription                                           OFFSET(getStruct<T>, {0x4B8, 24, 0, 0})
	SMember(FText)                                     ExitTitle                                                   OFFSET(getStruct<T>, {0x4D0, 24, 0, 0})
	SMember(FText)                                     ExitDescription                                             OFFSET(getStruct<T>, {0x4E8, 24, 0, 0})
	DMember(bool)                                      bIsMainMenuOpen                                             OFFSET(get<bool>, {0x500, 1, 0, 0})
	CMember(UFortCampaignTabsScreenBase*)              MainTabsScreen                                              OFFSET(get<T>, {0x528, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.MainMenu_STW.TryShowPrimaryContent
	// void TryShowPrimaryContent(TWeakObjectPtr<UClass*>& ContentWidgetClass);                                                 // [0xa712ca4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.MainMenu_STW.TryShowModal
	// void TryShowModal(TWeakObjectPtr<UClass*>& ModalWidgetClass);                                                            // [0xa712c04] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.MainMenu_STW.ShouldShowLeaveExperienceButton
	// bool ShouldShowLeaveExperienceButton();                                                                                  // [0xa71283c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.MainMenu_STW.IsActiveTabMainShop
	// bool IsActiveTabMainShop();                                                                                              // [0xa7101d4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortUIStateWidget_STWFrontend
/// Size: 0x0070 (0x000418 - 0x000488)
class UFortUIStateWidget_STWFrontend : public UFortUIStateWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	CMember(UTopBar_STW*)                              TopBar_STW                                                  OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonUserWidget*)                        BottomBar_STW                                               OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UFortActivatableChatWidget*)               ChatWidget_STW                                              OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortCampaignTabsScreenBase*>) MainTabsScreen                                           OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UClass*)                                   PlayerBannedScreenClass                                     OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(TArray<UClass*>)                           ScriptedActionsToRegister                                   OFFSET(get<T>, {0x448, 16, 0, 0})
	CMember(TArray<EFortStoreState>)                   DeferredSquadAutoSlottingStoreStates                        OFFSET(get<T>, {0x458, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer
/// Size: 0x0028 (0x000418 - 0x000440)
class UFortUIStateWidget_STWJoinServer : public UFortUIStateWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(UFortRejoinWindowBase*)                    RejoinWindow                                                OFFSET(get<T>, {0x418, 8, 0, 0})
	SMember(FDataTableRowHandle)                       TutorialCompleteStatHandle                                  OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	CMember(UClass*)                                   RejoinWindowClass                                           OFFSET(get<T>, {0x430, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.OnShowTutorialDialog
	// void OnShowTutorialDialog();                                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingStateChange
	// void HandleMatchmakingStateChange(TEnumAsByte<EMatchmakingState> OldState, TEnumAsByte<EMatchmakingState> NewState);     // [0xa70feb4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleMatchmakingComplete
	// void HandleMatchmakingComplete(EMatchmakingCompleteResult MatchmakingResult);                                            // [0xa70fde4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyTimeUpdated
	// void HandleLobbyTimeUpdated(int32_t TimeRemaining);                                                                      // [0xa70fd64] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer.HandleLobbyDisconnected
	// void HandleLobbyDisconnected();                                                                                          // [0xa70fd50] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.TopBar_STW
/// Size: 0x0098 (0x000400 - 0x000498)
class UTopBar_STW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1176;

public:
	CMember(UDataTable*)                               PhoenixSeasonDisplayInfoMap                                 OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(TMap<EFortUIFeatureStateReason, FText>)    ReasonDescriptions                                          OFFSET(get<T>, {0x418, 80, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_MainMenu                                             OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UMainMenu_STW*)                            MainMenu                                                    OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UImage*)                                   Image_ActiveInvitesNotification                             OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Social                                               OFFSET(get<T>, {0x480, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.TopBar_STW.SetOnlineFriendsCount
	// void SetOnlineFriendsCount(int32_t NewOnlineFriendsCount);                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.TopBar_STW.OnSocialMenuOpened
	// void OnSocialMenuOpened();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.TopBar_STW.OnShouldShowPhoenixDisplay
	// void OnShouldShowPhoenixDisplay(bool bShow, UFortPhoenixSeasonDisplayInfo* PhoenixDisplayInfo);                          // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker
/// Size: 0x0020 (0x000420 - 0x000440)
class UFortHeroLoadoutGadgetPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(TWeakObjectPtr<UFortCampaignHeroLoadoutItem*>) TargetLoadoutItem                                       OFFSET(get<T>, {0x420, 8, 0, 0})
	DMember(int32_t)                                   TargetSlotIndex                                             OFFSET(get<int32_t>, {0x428, 4, 0, 0})
	CMember(TArray<UFortItem*>)                        TemporaryGadgetItemInstances                                OFFSET(get<T>, {0x430, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker.SetTargetLoadoutSlot
	// void SetTargetLoadoutSlot(UFortCampaignHeroLoadoutItem* LoadoutItem, int32_t SlotIndex);                                 // [0xa712430] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker.HandleDifferentTargetLoadoutSlotSetBP
	// void HandleDifferentTargetLoadoutSlotSetBP();                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker
/// Size: 0x00C0 (0x000420 - 0x0004E0)
class UFortHeroLoadoutHeroPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	CMember(UFortTabListWidgetBase_Legacy*)            ExternalFilterTabList                                       OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortCampaignHeroLoadoutItem*>) TargetLoadoutItem                                       OFFSET(get<T>, {0x428, 8, 0, 0})
	SMember(FName)                                     TargetSlotName                                              OFFSET(getStruct<T>, {0x430, 4, 0, 0})
	CMember(UClass*)                                   FilterTabButtonType                                         OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(TMap<FName, FFortTabButtonLabelInfo>)      TabButtonLabelInfoMap                                       OFFSET(get<T>, {0x440, 80, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.UpdateFilterTabList
	// void UpdateFilterTabList(FName PreviouslySelectedTab);                                                                   // [0xa71329c] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.SetTargetLoadoutSlot
	// void SetTargetLoadoutSlot(UFortCampaignHeroLoadoutItem* LoadoutItem, FName& SlotName);                                   // [0xa7124f4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelectedBP
	// void HandleFilterTabSelectedBP(FName TabID);                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleFilterTabSelected
	// void HandleFilterTabSelected(FName TabID);                                                                               // [0xa70f770] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.HandleDifferentTargetLoadoutSetBP
	// void HandleDifferentTargetLoadoutSetBP();                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.GetCurrentlySelectedTab
	// FName GetCurrentlySelectedTab();                                                                                         // [0xa70dce0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker.AssociateFilterTabList
	// void AssociateFilterTabList(UFortTabListWidgetBase_Legacy* ExternalFilterTabList);                                       // [0xa70cd8c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutHeroPickerFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortHeroLoadoutHeroPickerFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase
/// Size: 0x01B0 (0x000400 - 0x0005B0)
class UFortHeroLoadoutScreenBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(UFortItemView*)                            ItemViewObject                                              OFFSET(get<T>, {0x408, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputAction                                             OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FDataTableRowHandle)                       HelpInputAction                                             OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CancelInputAction                                           OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ToggleDetailInputAction                                     OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClearAllInputAction                                         OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ShowAllStatsInputAction                                     OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectRootSlotsInputAction                                 OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CyclePickerSortModeInputAction                              OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectPickerInputAction                                    OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ToggleDescInputAction                                       OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	DMember(bool)                                      AllowItemRotation                                           OFFSET(get<bool>, {0x550, 1, 0, 0})
	DMember(bool)                                      AllowItemZooming                                            OFFSET(get<bool>, {0x551, 1, 0, 0})
	DMember(bool)                                      AutomaticallyRegisterCameraView                             OFFSET(get<bool>, {0x552, 1, 0, 0})
	DMember(bool)                                      OverrideFixedCameras                                        OFFSET(get<bool>, {0x553, 1, 0, 0})
	CMember(UDataTable*)                               ActionDataTable                                             OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UWidgetAnimation*)                         AnimationToHideItemInfo                                     OFFSET(get<T>, {0x560, 8, 0, 0})
	DMember(bool)                                      bAutoShowDetails                                            OFFSET(get<bool>, {0x568, 1, 0, 0})
	DMember(bool)                                      bItemDetailsHidden                                          OFFSET(get<bool>, {0x569, 1, 0, 0})
	DMember(float)                                     HideItemInfoHeaderDurationSecs                              OFFSET(get<float>, {0x56C, 4, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.ShowItemDetails
	// void ShowItemDetails();                                                                                                  // [0xa712874] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.SetInputBindings
	// void SetInputBindings(bool ActivePickerBox, bool CommanderSlot, bool NoneSlot, bool CanClearAll);                        // [0xa711b98] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.SetHeroLoadout
	// void SetHeroLoadout(UFortCampaignHeroLoadoutItem* HeroLoadout);                                                          // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.PushItemInspectionScreen
	// void PushItemInspectionScreen(UFortItem* ItemToInspect, EFortItemInspectionMode Mode, UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading); // [0xa6e6e18] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.OnVaultItemsViewed
	// void OnVaultItemsViewed(TArray<UFortItem*>& Items);                                                                      // [0xa7107ac] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.OnItemPreviewChanged
	// void OnItemPreviewChanged(AActor* NewPrefab, UFortItem* NewItem);                                                        // [0x5ead474] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.IsLoadoutSwitchingAllowed
	// bool IsLoadoutSwitchingAllowed();                                                                                        // [0xa710340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HideItemDetails
	// void HideItemDetails();                                                                                                  // [0xa710108] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleToggleDescInputAction
	// void HandleToggleDescInputAction();                                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleShowAllStatsInputAction
	// void HandleShowAllStatsInputAction();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleInspectRootSlotsInputAction
	// void HandleInspectRootSlotsInputAction();                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleInspectPickerInputAction
	// void HandleInspectPickerInputAction();                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleHelpInputAction
	// void HandleHelpInputAction();                                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleDetailsInputAction
	// void HandleDetailsInputAction();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleCyclePickerInputAction
	// void HandleCyclePickerInputAction();                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleClearAllInputAction
	// void HandleClearAllInputAction();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.HandleBackInputAction
	// void HandleBackInputAction();                                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.GetWidgetForFramingViewedItem
	// UWidget* GetWidgetForFramingViewedItem();                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutScreenBase.GetIsReadOnly
	// bool GetIsReadOnly();                                                                                                    // [0xa70e48c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutScreenLegacy
/// Size: 0x0000 (0x0006B8 - 0x0006B8)
class UFortHeroLoadoutScreenLegacy : public UFortActivatablePanelWithItemPreview
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1720;

public:
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortHeroLoadoutSlotButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	SMember(FName)                                     SlotName                                                    OFFSET(getStruct<T>, {0x14E0, 4, 0, 0})
	DMember(int32_t)                                   SlotIndex                                                   OFFSET(get<int32_t>, {0x14E4, 4, 0, 0})
	CMember(EHeroLoadoutSlotType)                      SlotType                                                    OFFSET(get<T>, {0x14E8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestChangeHero                                         OFFSET(getStruct<T>, {0x14F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnContextMenuOpenChanged                                    OFFSET(getStruct<T>, {0x1500, 16, 0, 0})
	CMember(UMenuAnchor*)                              ContextMenuAnchor                                           OFFSET(get<T>, {0x1510, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.OnRequestChangeHero__DelegateSignature
	// void OnRequestChangeHero__DelegateSignature(UFortHeroLoadoutSlotButton* SlotButton);                                     // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.OnMenuOpenChangedEvent__DelegateSignature
	// void OnMenuOpenChangedEvent__DelegateSignature(UFortHeroLoadoutSlotButton* SlotButton, bool bIsMenuOpen);                // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.IsContextMenuOpen
	// bool IsContextMenuOpen();                                                                                                // [0xa710260] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton.HandleMenuOpenChanged
	// void HandleMenuOpenChanged(bool bIsMenuOpen);                                                                            // [0xa70ff88] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker
/// Size: 0x0008 (0x000420 - 0x000428)
class UFortHeroLoadoutTeamPerkPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(TWeakObjectPtr<UFortCampaignHeroLoadoutItem*>) TargetLoadoutItem                                       OFFSET(get<T>, {0x420, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.SetTargetLoadout
	// void SetTargetLoadout(UFortCampaignHeroLoadoutItem* LoadoutItem);                                                        // [0xa7123b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.HandleDifferentTargetLoadoutSetBP
	// void HandleDifferentTargetLoadoutSetBP();                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortCampaignTabsScreenBase
/// Size: 0x0078 (0x000400 - 0x000478)
class UFortCampaignTabsScreenBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	CMember(TMap<EFortUIFeature, FName>)               FeaturesTabsMap                                             OFFSET(get<T>, {0x400, 80, 0, 0})
	CMember(UHorizontalBox*)                           TopTabContainer                                             OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UFortTabListWidgetBase*)                   TopTabList                                                  OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UClass*)                                   MainTabSet                                                  OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  Switcher_TabContent                                         OFFSET(get<T>, {0x470, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.UpdateItemShopButtonBang
	// void UpdateItemShopButtonBang(FName Tab);                                                                                // [0xa71331c] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.ShouldShowItemShopBang
	// bool ShouldShowItemShopBang();                                                                                           // [0xa7127fc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.HandleMainTabSelected
	// void HandleMainTabSelected(FName TabNameID);                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.HandleMainTabCreated
	// void HandleMainTabCreated(FName TabNameID, UCommonButtonBase* TabButton);                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.HandleFeatureStateChanged
	// void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason); // [0xa70f580] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase.ConstructTabs
	// void ConstructTabs();                                                                                                    // [0xa70d220] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy
/// Size: 0x0070 (0x000538 - 0x0005A8)
class UFortCampaignTabsScreenBase_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
	CMember(TMap<EFortUIFeature, FName>)               FeaturesTabsMap                                             OFFSET(get<T>, {0x538, 80, 0, 0})
	CMember(UHorizontalBox*)                           TopTabContainer                                             OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UFortTabListWidgetBase_Legacy*)            TopTabList                                                  OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UClass*)                                   MainTabSet                                                  OFFSET(get<T>, {0x598, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleMainTabSelected
	// void HandleMainTabSelected(FName TabNameID);                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleMainTabCreated
	// void HandleMainTabCreated(FName TabNameID, UCommonButtonBase* TabButton);                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleFeatureStateChanged
	// void HandleFeatureStateChanged(EFortUIFeature ChangedFeature, EFortUIFeatureState NewState, EFortUIFeatureStateReason Reason); // [0xa70f678] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.HandleFeatureNavigateRequest
	// void HandleFeatureNavigateRequest(EFortUIFeature Feature);                                                               // [0xa70f500] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy.ConstructTabs
	// void ConstructTabs();                                                                                                    // [0xa70d234] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.StoreCardObject
/// Size: 0x0020 (0x000028 - 0x000048)
class UStoreCardObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FCard)                                     Card                                                        OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(int32_t)                                   OriginalIndex                                               OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortStoreSummary
/// Size: 0x0048 (0x000538 - 0x000580)
class UFortStoreSummary : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(TArray<UStoreCardObject*>)                 StoreCardObjects                                            OFFSET(get<T>, {0x540, 16, 0, 0})
	CMember(UCommonTileView*)                          TileView                                                    OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UClass*)                                   MulchConfirmationModalClass                                 OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UFortMulchConfirmationModalWidget*)        MulchConfirmationModal                                      OFFSET(get<T>, {0x578, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummary.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                       // [0xa7128a4] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.SetIsInChoiceSelectionMode
	// void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode);                                                         // [0xa711e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.SetCards
	// void SetCards(TArray<FCard>& Cards);                                                                                     // [0xa711134] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                           // [0xa710684] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                             // [0xa71064c] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.MarkDefaultItemsForMulch
	// void MarkDefaultItemsForMulch();                                                                                         // [0xa7105f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                       // [0xa710138] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChangedBP
	// void HandleContextMenuOpenChangedBP(bool bIsOpen);                                                                       // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.HandleContextMenuOpenChanged
	// void HandleContextMenuOpenChanged(bool bIsOpen);                                                                         // [0xa70f2d0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.GetIsInChoiceSelectionMode
	// bool GetIsInChoiceSelectionMode();                                                                                       // [0x57a0034] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.FinalizeFavoriteStatus
	// void FinalizeFavoriteStatus();                                                                                           // [0xa70daec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary.CloseSummaryScreen
	// void CloseSummaryScreen();                                                                                               // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemButton
/// Size: 0x0050 (0x0014E0 - 0x001530)
class UFortStoreSummaryItemButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	DMember(bool)                                      HasAnItemMarkedForMulching                                  OFFSET(get<bool>, {0x14E0, 1, 0, 0})
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UStoreCardObject*)                         StoreCardObject                                             OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            OFFSET(get<T>, {0x1520, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.UpdateMulchListWithItem
	// void UpdateMulchListWithItem(bool bAddingItem);                                                                          // [0xa7133a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.SetStoreCardObject
	// void SetStoreCardObject(UStoreCardObject* CardObject);                                                                   // [0xa7121d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.HandleMenuOpenChanged
	// void HandleMenuOpenChanged(bool bIsOpen);                                                                                // [0xa710008] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.HandleItemMulchStateChanged
	// void HandleItemMulchStateChanged();                                                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.GetStoreCardObject
	// UStoreCardObject* GetStoreCardObject();                                                                                  // [0xa70eaa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton.GetPopupMenu
	// UUserWidget* GetPopupMenu();                                                                                             // [0xa70e6e0] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy
/// Size: 0x0050 (0x0014E0 - 0x001530)
class UFortStoreSummaryItemButton_Legacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	DMember(bool)                                      HasAnItemMarkedForMulching                                  OFFSET(get<bool>, {0x14E0, 1, 0, 0})
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UStoreCardObject*)                         StoreCardObject                                             OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            OFFSET(get<T>, {0x1520, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.UpdateMulchListWithItem
	// void UpdateMulchListWithItem(bool bAddingItem);                                                                          // [0xa7133a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.SetStoreCardObject
	// void SetStoreCardObject(UStoreCardObject* CardObject);                                                                   // [0xa7122c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.OnContextMenuOpenChangedEvent__DelegateSignature
	// void OnContextMenuOpenChangedEvent__DelegateSignature(bool bIsOpen);                                                     // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.HandleMenuOpenChanged
	// void HandleMenuOpenChanged(bool bIsOpen);                                                                                // [0xa710008] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.HandleItemMulchStateChanged
	// void HandleItemMulchStateChanged();                                                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.GetStoreCardObject
	// UStoreCardObject* GetStoreCardObject();                                                                                  // [0xa70eaa8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy.GetPopupMenu
	// UUserWidget* GetPopupMenu();                                                                                             // [0xa70e6e0] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortStoreSummaryItemPopupMenu : public UFortPopupMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortStoreSummaryItemPopupMenu_Legacy : public UFortPopupMenu_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
};

/// Class /Script/SaveTheWorldUI.FortStoreSummary_Legacy
/// Size: 0x0048 (0x000538 - 0x000580)
class UFortStoreSummary_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(TArray<UStoreCardObject*>)                 StoreCardObjects                                            OFFSET(get<T>, {0x540, 16, 0, 0})
	CMember(UCommonTileView*)                          TileView                                                    OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UClass*)                                   MulchConfirmationModalClass                                 OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UFortMulchConfirmationModalWidget*)        MulchConfirmationModal                                      OFFSET(get<T>, {0x578, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                       // [0xa7128a4] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.SetIsInChoiceSelectionMode
	// void SetIsInChoiceSelectionMode(bool InIsInChoiceSelectionMode);                                                         // [0xa711e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.SetCards
	// void SetCards(TArray<FCard>& Cards);                                                                                     // [0xa711134] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                           // [0xa710684] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                             // [0xa71064c] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.MarkDefaultItemsForMulch
	// void MarkDefaultItemsForMulch();                                                                                         // [0xa7105f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                       // [0xa710138] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.HandleContextMenuOpenChangedBP
	// void HandleContextMenuOpenChangedBP(bool bIsOpen);                                                                       // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.HandleContextMenuOpenChanged
	// void HandleContextMenuOpenChanged(bool bIsOpen);                                                                         // [0xa70f350] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.GetIsInChoiceSelectionMode
	// bool GetIsInChoiceSelectionMode();                                                                                       // [0x57a0034] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.FinalizeFavoriteStatus
	// void FinalizeFavoriteStatus();                                                                                           // [0xa70db3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStoreSummary_Legacy.CloseSummaryScreen
	// void CloseSummaryScreen();                                                                                               // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortHeroLoadoutGadgetTileBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(UCommonTextBlock*)                         Text_GadgetName                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonLazyImage*)                         Image_Icon                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(URichTextBlock*)                           RichText_Description                                        OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UFortGadgetItemDefinition*)                GadgetToRepresent                                           OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.SetGadgetToRepresent
	// void SetGadgetToRepresent(UFortGadgetItemDefinition* GadgetItemDefinition);                                              // [0xa71196c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase.OnGadgetUpdated
	// void OnGadgetUpdated(bool bIsValidGadget);                                                                               // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase
/// Size: 0x0050 (0x000538 - 0x000588)
class UFortHeroLoadoutInGameScreenBase : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	CMember(TArray<FFortInGamePerkDisplayData>)        PerksDisplayData                                            OFFSET(get<T>, {0x538, 16, 0, 0})
	CMember(UClass*)                                   TileClass                                                   OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Content                                           OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UFortItemDetailsHostPanel*)                ItemDetailsHostPanel_Header                                 OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UGridPanel*)                               GridPanel_Perks                                             OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortHeroLoadoutGadgetTileBase*)           GadgetTile_Gadget1                                          OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UFortHeroLoadoutGadgetTileBase*)           GadgetTile_Gadget2                                          OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(TArray<UFortHeroLoadoutGadgetTileBase*>)   GadgetTiles                                                 OFFSET(get<T>, {0x578, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.OnPerkWidgetAdded
	// void OnPerkWidgetAdded(UGridSlot* GridSlot);                                                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase.GetGadgetDefinitionBySlot
	// UFortGadgetItemDefinition* GetGadgetDefinitionBySlot(int32_t SlotIndex);                                                 // [0xa70e3b8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutPerkTileBase
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UFortHeroLoadoutPerkTileBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(TEnumAsByte<EFortBrushSize>)               BrushSize                                                   OFFSET(get<T>, {0x2E8, 1, 0, 0})
	DMember(bool)                                      bShowSummaryDescription                                     OFFSET(get<bool>, {0x2E9, 1, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PerkName                                               OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(URichTextBlock*)                           Text_Description                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UFortLazyImage*)                           Image_PerkIcon                                              OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UHorizontalBox*)                           Hbox_PerkDetails                                            OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FText)                                     ActiveText                                                  OFFSET(getStruct<T>, {0x310, 24, 0, 0})
	SMember(FText)                                     InactiveText                                                OFFSET(getStruct<T>, {0x328, 24, 0, 0})
	DMember(float)                                     InactiveOpacity                                             OFFSET(get<float>, {0x340, 4, 0, 0})
	DMember(float)                                     ActiveOpacity                                               OFFSET(get<float>, {0x344, 4, 0, 0})
	CMember(UFortAbilityKit*)                          AbilityKit                                                  OFFSET(get<T>, {0x348, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroLoadoutPerkTileBase.OnPerkInitialized
	// void OnPerkInitialized(EFortHeroPerkDisplayType InPerkType, bool bActive, bool bShowWarning);                            // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase
/// Size: 0x0018 (0x000538 - 0x000550)
class UFortAlterationModOptinScreenBase : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	CMember(UFortItem*)                                ItemToOptin                                                 OFFSET(get<T>, {0x538, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.SetupItem
	// void SetupItem(UFortItem* Item);                                                                                         // [0xa71277c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.RequestClose
	// void RequestClose(bool bCancelled);                                                                                      // [0xa710ca8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.OnSetupItem
	// void OnSetupItem();                                                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.OnItemConversionComplete
	// void OnItemConversionComplete();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase.ConvertItemAlterations
	// void ConvertItemAlterations();                                                                                           // [0xa70d2c8] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortAlterationModScreenBase
/// Size: 0x0060 (0x000570 - 0x0005D0)
class UFortAlterationModScreenBase : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	CMember(UFortAlterationsWidget*)                   AlterationsToEdit                                           OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortAlterationOptionsBase*)               AlterationSlotOptions                                       OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortItemDetailsHostPanel*)                ItemInspectionMainItemDetailsHostPanel                      OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UFortItemDetailsHostPanel*)                AlterationsExtraDetailsPanel                                OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UClass*)                                   AlterationModOptinScreenClass                               OFFSET(get<T>, {0x590, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputAction                                             OFFSET(getStruct<T>, {0x598, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortAlterableItem*>)       AlterableItem                                               OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UFortAlterationOption*)                    CurrentAlterationOptionInternal                             OFFSET(get<T>, {0x5B0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.SetItemForAlterationsModding
	// void SetItemForAlterationsModding(UFortAlterableItem* InAlterableItem);                                                  // [0xa711ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.RefreshItemAndAlterationsBP
	// void RefreshItemAndAlterationsBP();                                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnItemSlotChanged
	// void OnItemSlotChanged(bool SelectedSlot);                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationOptionChanged
	// void OnAlterationOptionChanged(UFortAlterationOption* CurrentAlterationOption);                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationSucess
	// void OnAlterationModificationSucess(int32_t ModifiedSlotIndex);                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationStarted
	// void OnAlterationModificationStarted();                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.OnAlterationModificationCompleted
	// void OnAlterationModificationCompleted();                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.HandleBackAction
	// void HandleBackAction(bool& bPassThrough);                                                                               // [0xa70f244] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.ConfirmSelection
	// void ConfirmSelection();                                                                                                 // [0xa70d20c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.CancelSelection
	// void CancelSelection();                                                                                                  // [0xa70d194] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationModScreenBase.AreIngredientRequirementsMent
	// bool AreIngredientRequirementsMent(TArray<FFortItemQuantityPair>& RequiredIngredients);                                  // [0xa70cc88] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemInspectionScreen
/// Size: 0x00F8 (0x0006B8 - 0x0007B0)
class UFortItemInspectionScreen : public UFortActivatablePanelWithItemPreview
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	CMember(EFortItemInspectionMode)                   CurrentInspectMode                                          OFFSET(get<T>, {0x6B8, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                InspectedItem                                               OFFSET(get<T>, {0x6BC, 8, 0, 0})
	DMember(bool)                                      UpgradeAllowed                                              OFFSET(get<bool>, {0x6C4, 1, 0, 0})
	DMember(bool)                                      EvolveAllowed                                               OFFSET(get<bool>, {0x6C5, 1, 0, 0})
	DMember(bool)                                      FavoriteAllowed                                             OFFSET(get<bool>, {0x6C6, 1, 0, 0})
	DMember(bool)                                      RarityUpgradingAllowed                                      OFFSET(get<bool>, {0x6C7, 1, 0, 0})
	DMember(bool)                                      IsPreviewing                                                OFFSET(get<bool>, {0x6C8, 1, 0, 0})
	DMember(bool)                                      bHasSeenRefundHelpPrompt                                    OFFSET(get<bool>, {0x6C9, 1, 0, 0})
	CMember(UFortItemInspectCycleWidget*)              CycleWidget                                                 OFFSET(get<T>, {0x6D0, 8, 0, 0})
	SMember(FGameplayTagQuery)                         InspectAnimationTag                                         OFFSET(getStruct<T>, {0x6D8, 72, 0, 0})
	CMember(UClass*)                                   AlterationModOptinScreenClass                               OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(UClass*)                                   AlterationModScreenClass                                    OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               RefundDescriptionsDataTable                                 OFFSET(get<T>, {0x730, 32, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.SetItemToRepresent
	// void SetItemToRepresent(UFortItem* Item);                                                                                // [0xa711fd0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.SetInspectionMode
	// void SetInspectionMode(EFortItemInspectionMode NewInspectMode);                                                          // [0xa711dd0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.SetAttemptingConversion
	// void SetAttemptingConversion(bool bIsAttemptingConversion);                                                              // [0xa7110ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.OpenItemInspect
	// void OpenItemInspect(UFortItem* ItemToInspect, EFortItemInspectionMode Mode, bool ShouldAllowUpgrading, bool ShouldAllowEvolution, bool ShouldAllowFavorite, bool IsTemporaryItem, bool bAllowRarityUpgrading, int32_t QuantityOverride, UFortItemTileView* TileViewWidget); // [0xa710900] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.IsItemSlottedInCollectionBook
	// bool IsItemSlottedInCollectionBook(UFortItem* Item);                                                                     // [0xa710294] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyedBP
	// void HandleItemToInspectDestroyedBP();                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectDestroyed
	// void HandleItemToInspectDestroyed();                                                                                     // [0xa70fd3c] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChangedBP
	// void HandleItemToInspectChangedBP(bool bWasFavoritedChanged);                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleItemToInspectChanged
	// void HandleItemToInspectChanged(bool bItemChanged, bool bAmmoChanged, bool bIngredientsChanged);                         // [0xa70fc30] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleIsPreviewingChanged
	// void HandleIsPreviewingChanged();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentItemToInspectSetBP
	// void HandleDifferentItemToInspectSetBP();                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.HandleDifferentInspectionModeSetBP
	// void HandleDifferentInspectionModeSetBP();                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetRefundResultItem
	// UFortAccountItem* GetRefundResultItem();                                                                                 // [0xa70e8e4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetRefundDescriptionText
	// FText GetRefundDescriptionText();                                                                                        // [0xa70e8a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetItemQuantityOverride
	// int32_t GetItemQuantityOverride();                                                                                       // [0xa70e540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.GetCycleWidget
	// UFortItemInspectCycleWidget* GetCycleWidget();                                                                           // [0xa70dd20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.DoesItemHaveLegacyAlterations
	// bool DoesItemHaveLegacyAlterations();                                                                                    // [0xa70d5e4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortItemInspectionScreen.DoAlterationModification
	// void DoAlterationModification();                                                                                         // [0xa70d52c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortItemInspectCycleWidget
/// Size: 0x0050 (0x0002E8 - 0x000338)
class UFortItemInspectCycleWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FMulticastInlineDelegate)                  OnItemToRepresentChanged                                    OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortItemTileView*>)        ItemTileView                                                OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                ItemToRepresent                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousItemActionRowHandle                                 OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextItemActionRowHandle                                     OFFSET(getStruct<T>, {0x318, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SetupActionHandlers
	// void SetupActionHandlers();                                                                                              // [0xa712768] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SetOwningItemInspectScreen
	// void SetOwningItemInspectScreen(UFortItemInspectionScreen* ItemInspect);                                                 // [0xa712050] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SetItemToRepresent
	// void SetItemToRepresent(UFortItem* NewItemToRepresent);                                                                  // [0xa711f50] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SelectPreviousItem
	// void SelectPreviousItem();                                                                                               // [0xa711094] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SelectNextItem
	// void SelectNextItem();                                                                                                   // [0xa71107c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.SelectItemWithOffset
	// void SelectItemWithOffset(int32_t Offset);                                                                               // [0xa710ffc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.OnItemCycled
	// void OnItemCycled(UFortItem* OldItem, UFortItem* NewItem, int32_t OffsetFromPreviousItem);                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortItemInspectCycleWidget.GetItemWithOffset_BP
	// UFortItem* GetItemWithOffset_BP(int32_t IndexOffset);                                                                    // [0xa70e5c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortAlterationOption
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortAlterationOption : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	SMember(FAlterationOption)                         AlterationOption                                            OFFSET(getStruct<T>, {0x14E8, 48, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAlterationOption.Setup
	// void Setup(FAlterationOption& InAlterationOption, EFortAlterationOptionType InAlterationOptionType);                     // [0xa7125c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.OnSetup
	// void OnSetup();                                                                                                          // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetRequiredIngredients
	// TArray<FFortItemQuantityPair> GetRequiredIngredients();                                                                  // [0xa70e908] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetNextPipCount
	// float GetNextPipCount(float MaxPipCount);                                                                                // [0xa70e650] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetCurrentPipCount
	// float GetCurrentPipCount(float MaxPipCount);                                                                             // [0xa70dc50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetAlterationOptionType
	// EFortAlterationOptionType GetAlterationOptionType();                                                                     // [0xa70dc38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOption.GetAlterationDefinition
	// UFortAlterationItemDefinition* GetAlterationDefinition();                                                                // [0xa70dc14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortAlterationOptionsBase
/// Size: 0x00A0 (0x0002E8 - 0x000388)
class UFortAlterationOptionsBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(UClass*)                                   AlterationOptionClass                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 AlterationOptionButtons                                     OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UFortAlterableItem*)                       Item                                                        OFFSET(get<T>, {0x328, 8, 0, 0})
	DMember(int32_t)                                   SlotIndex                                                   OFFSET(get<int32_t>, {0x330, 4, 0, 0})
	DMember(bool)                                      bUpgradeOptionExists                                        OFFSET(get<bool>, {0x334, 1, 0, 0})
	SMember(FAlterationOption)                         UpgradeOption                                               OFFSET(getStruct<T>, {0x338, 48, 0, 0})
	CMember(TArray<FAlterationOption>)                 RespecOptions                                               OFFSET(get<T>, {0x368, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.ProcessAlterationOptions
	// void ProcessAlterationOptions(bool bIntroAlterations);                                                                   // [0xa710bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.OnItemChanged
	// void OnItemChanged(bool bIntroAlterations);                                                                              // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.OnGenerateOption
	// void OnGenerateOption(EFortAlterationOptionType OptionType, UFortAlterationOption* OptionWidget);                        // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.IsValidAlterationSlot
	// bool IsValidAlterationSlot();                                                                                            // [0xa7104f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionSelected
	// void HandleAlterationsOptionSelected(UCommonButtonLegacy* AlterationOptionButton, int32_t GroupIndex);                   // [0xa70f180] Final|Native|Public  
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.HandleAlterationsOptionHovered
	// void HandleAlterationsOptionHovered(UCommonButtonLegacy* AlterationOptionButton, int32_t GroupIndex);                    // [0xa70f180] Final|Native|Public  
	// Function /Script/SaveTheWorldUI.FortAlterationOptionsBase.DoAlterationOptionsExist
	// bool DoAlterationOptionsExist(EFortAlterationOptionType OptionType);                                                     // [0xa70d540] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortMissionActivationInfoSTW
/// Size: 0x0150 (0x000028 - 0x000178)
class UFortMissionActivationInfoSTW : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	DMember(bool)                                      bIsMultiplayer                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(AFortPlayerController*)                    FortPC                                                      OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(AFortGameStateZone*)                       GameStateZone                                               OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UCurveFloat*)                              DifficultyIncreaseBluGloCurve                               OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.TimeSecondsToText
	// FText TimeSecondsToText(float InSeconds);                                                                                // [0x99ed598] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.SubmitVote
	// void SubmitVote(EFortVoteType VoteType, bool bApprove);                                                                  // [0xa7128c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.RequestVote
	// void RequestVote(EFortVoteType VoteType, float VoteDuration, float FailedVoteLockOutDuration, EFortVoteArbitratorType ArbitratorType); // [0xa710ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteLocked
	// bool IsVoteLocked(EFortVoteType VoteType);                                                                               // [0x99e9e9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsVoteActive
	// bool IsVoteActive(EFortVoteType VoteType);                                                                               // [0x99e9e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsPlayerVoteInstigator
	// bool IsPlayerVoteInstigator(EFortVoteType VoteType);                                                                     // [0x99e9d84] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.IsAnyVoteActive
	// bool IsAnyVoteActive();                                                                                                  // [0x99e9c9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HasPlayerVoted
	// bool HasPlayerVoted(EFortVoteType VoteType);                                                                             // [0x99e9b94] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberRemoved
	// void HandleTeamMemberRemoved(int32_t RemovedIndex);                                                                      // [0x99e9938] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleTeamMemberAdded
	// void HandleTeamMemberAdded(FFortTeamMemberInfo NewInfo);                                                                 // [0x99e9798] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.HandleGameplayVoteUpdated
	// void HandleGameplayVoteUpdated(EFortVoteType VoteType, EFortVoteStatus VoteStatus, int32_t VoteResult, TArray<FVoter>& Voters); // [0xa70f870] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteTimeRemaining
	// float GetVoteTimeRemaining(EFortVoteType VoteType);                                                                      // [0x99e8dc4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoters
	// TArray<FVoter> GetVoters(EFortVoteType VoteType);                                                                        // [0x99e8f28] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetVoteCounts
	// void GetVoteCounts(EFortVoteType VoteType, int32_t& OutYesVoteCount, int32_t& OutNoVoteCount);                           // [0x99e8c6c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetStartObjectiveBluGloRequirement
	// int32_t GetStartObjectiveBluGloRequirement();                                                                            // [0x99e8bb8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMissionInfo
	// UFortMissionInfo* GetPrimaryMissionInfo();                                                                               // [0x99e8b18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetPrimaryMission
	// AFortMission* GetPrimaryMission();                                                                                       // [0x99e8af4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionVoteType
	// EFortVoteType GetMissionVoteType();                                                                                      // [0x99e8864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetMissionObjectiveTimeRemaining
	// float GetMissionObjectiveTimeRemaining();                                                                                // [0x99e883c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetLockoutTimeRemaining
	// FText GetLockoutTimeRemaining(EFortVoteType VoteType);                                                                   // [0x99e8734] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetInstigatorId
	// FUniqueNetIdRepl GetInstigatorId(EFortVoteType VoteType);                                                                // [0x99e867c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetIncreaseDifficultyBluGloRequirement
	// int32_t GetIncreaseDifficultyBluGloRequirement();                                                                        // [0x99e85e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetDeltaRewards
	// void GetDeltaRewards(int32_t BaseDifficultyIncreaseTier, int32_t ComparedDifficultyIncreaseTier, TArray<FFortItemDelta>& DeltaRewards); // [0x99e7ec8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetAvailableBluGloCount
	// int32_t GetAvailableBluGloCount();                                                                                       // [0x99e7e70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.GetArbitratorType
	// EFortVoteArbitratorType GetArbitratorType(EFortVoteType VoteType);                                                       // [0x99e7ddc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.DoesPrimaryMissionContainTags
	// bool DoesPrimaryMissionContainTags(FGameplayTagContainer& Tags);                                                         // [0x99e6fb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortMissionActivationInfoSTW.CanRequestVote
	// bool CanRequestVote(EFortVoteType VoteType);                                                                             // [0x99e6d2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortMissionActivationWidgetSTWPanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UFortMissionActivationInfoSTW*)            InfoObject                                                  OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.SetInfoObject
	// void SetInfoObject(UFortMissionActivationInfoSTW* NewInfoObject);                                                        // [0xa7119ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnVoteUpdatedBP
	// void OnVoteUpdatedBP(EFortVoteType VoteType);                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnVoteLockoutChangedBP
	// void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked);                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnMultiplayerChangedBP
	// void OnMultiplayerChangedBP(bool bIsMultiplayer);                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.OnActiveVoteChangedBP
	// void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32_t VoteResult);                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel.InfoObjectUpdated
	// void InfoObjectUpdated();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW
/// Size: 0x0050 (0x000400 - 0x000450)
class UFortMissionActivationWidgetSTW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	CMember(UFortMissionActivationInfoSTW*)            InfoObject                                                  OFFSET(get<T>, {0x400, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ReadyUpObjectiveHandle                                      OFFSET(getStruct<T>, {0x408, 32, 0, 0})
	CMember(UCurveFloat*)                              DifficultyIncreaseBluGloCurve                               OFFSET(get<T>, {0x428, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestStartObjectiveState
	// void RequestStartObjectiveState();                                                                                       // [0xa710e5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestDifficultyIncreaseState
	// void RequestDifficultyIncreaseState();                                                                                   // [0xa710d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.RequestDefaultState
	// void RequestDefaultState();                                                                                              // [0xa710d28] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnVoteLockoutChangedBP
	// void OnVoteLockoutChangedBP(EFortVoteType VoteType, bool bIsLocked);                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnStateUpdated
	// void OnStateUpdated(EFortMissionActivationWidgetSTWState ActiveState, EFortMissionActivationWidgetSTWState PreviousState); // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnMultiplayerChangedBP
	// void OnMultiplayerChangedBP(bool bIsMultiplayer);                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.OnActiveVoteChangedBP
	// void OnActiveVoteChangedBP(EFortVoteType VoteType, bool bIsVoteActive, int32_t VoteResult);                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW.GetCurrentState
	// EFortMissionActivationWidgetSTWState GetCurrentState();                                                                  // [0x2f0f3f0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortOutpostScreen
/// Size: 0x0000 (0x000400 - 0x000400)
class UFortOutpostScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
};

/// Class /Script/SaveTheWorldUI.FortCampaignPlayFlow
/// Size: 0x0000 (0x000400 - 0x000400)
class UFortCampaignPlayFlow : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
};

/// Class /Script/SaveTheWorldUI.FortJournalQuestDetails
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortJournalQuestDetails : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UFortQuestItem*)                           CurrentQuest                                                OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.SetCurrentQuest
	// void SetCurrentQuest(UFortQuestItem* InCurrentQuest);                                                                    // [0xa7117ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.RegisterEndSpokenDialogEvent
	// void RegisterEndSpokenDialogEvent();                                                                                     // [0xa710c64] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.OnEndSpokenDialog
	// void OnEndSpokenDialog();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.HandleCurrentQuestChangedBP
	// void HandleCurrentQuestChangedBP();                                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetVisibleObjectives
	// void GetVisibleObjectives(TArray<UFortQuestObjectiveInfo*>& VisibleObjectives);                                          // [0xa70eb38] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetRewards
	// void GetRewards(TArray<FFortItemInstanceQuantityPair>& OutRewards, TArray<FFortItemInstanceQuantityPair>& OutSelectableRewards); // [0xa70e964] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetFutureObjectives
	// void GetFutureObjectives(TArray<UFortQuestObjectiveInfo*>& FutureObjectives);                                            // [0xa70dd94] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.GetActiveMissionTileType
	// EFortTheaterMapTileType GetActiveMissionTileType();                                                                      // [0xa70db8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanPlayQuest
	// bool CanPlayQuest();                                                                                                     // [0xa70d0ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanPartyLeaderPlayQuest
	// bool CanPartyLeaderPlayQuest();                                                                                          // [0xa70d0c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortJournalQuestDetails.CanGotoQuest
	// bool CanGotoQuest();                                                                                                     // [0xa70d09c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortJournalQuestProgressBar
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortJournalQuestProgressBar : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TWeakObjectPtr<UFortQuestObjectiveInfo*>)  QuestObjectiveInfo                                          OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortJournalQuestProgressBar.GetProgressDetails
	// void GetProgressDetails(FText& OutNumerator, FText& OutDenominator, float& OutFraction);                                 // [0xa70e704] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortLayoutQuestNode
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortLayoutQuestNode : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UFortQuestMapQuestTile*)                   QuestTile                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(int32_t)                                   QuestNodeIndex                                              OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	SMember(FFortQuestMapNode)                         QuestMapNode                                                OFFSET(getStruct<T>, {0x2F8, 24, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortLayoutQuestNode_Legacy
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortLayoutQuestNode_Legacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UFortQuestMapQuestTile_Legacy*)            QuestTile                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(int32_t)                                   QuestNodeIndex                                              OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	SMember(FFortQuestMapNode)                         QuestMapNode                                                OFFSET(getStruct<T>, {0x2F8, 24, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortProgressArrowButton
/// Size: 0x0040 (0x001490 - 0x0014D0)
class UFortProgressArrowButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	SMember(FSlateColor)                               ArrowColor                                                  OFFSET(getStruct<T>, {0x1490, 20, 0, 0})
	SMember(FSlateColor)                               HoverColor                                                  OFFSET(getStruct<T>, {0x14A4, 20, 0, 0})
	SMember(FSlateColor)                               ShadowColor                                                 OFFSET(getStruct<T>, {0x14B8, 20, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.UpdateArrowColor
	// void UpdateArrowColor(FSlateColor Color, FSlateColor HoverColor);                                                        // [0xa712d44] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.OnShadowColorSet
	// void OnShadowColorSet();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.OnIsInteractiveSet
	// void OnIsInteractiveSet(bool bIsInteractive);                                                                            // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton.OnArrowColorSet
	// void OnArrowColorSet();                                                                                                  // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy
/// Size: 0x0040 (0x0014E0 - 0x001520)
class UFortProgressArrowButton_Legacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	SMember(FSlateColor)                               ArrowColor                                                  OFFSET(getStruct<T>, {0x14E0, 20, 0, 0})
	SMember(FSlateColor)                               HoverColor                                                  OFFSET(getStruct<T>, {0x14F4, 20, 0, 0})
	SMember(FSlateColor)                               ShadowColor                                                 OFFSET(getStruct<T>, {0x1508, 20, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.UpdateArrowColor
	// void UpdateArrowColor(FSlateColor Color, FSlateColor HoverColor);                                                        // [0xa712fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.OnShadowColorSet
	// void OnShadowColorSet();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.OnIsInteractiveSet
	// void OnIsInteractiveSet(bool bIsInteractive);                                                                            // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy.OnArrowColorSet
	// void OnArrowColorSet();                                                                                                  // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortQuestExpiresWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortQuestExpiresWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TWeakObjectPtr<UFortQuestItem*>)           Item                                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestExpiresWidget.SetData
	// void SetData(UFortQuestItem* InItem);                                                                                    // [0x77074c8] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestExpiresWidget.OnQuestExpirationUpdated
	// void OnQuestExpirationUpdated();                                                                                         // [0x2397dc8] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapCosmeticListWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortQuestMapCosmeticListWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
};

/// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortQuestMapDetailsPanelBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(UClass*)                                   QuestConversationClass                                      OFFSET(get<T>, {0x2E8, 8, 0, 0})
	DMember(float)                                     QuestUpdateDelayTime                                        OFFSET(get<float>, {0x2F0, 4, 0, 0})
	SMember(FTimerHandle)                              QuestUpdateTimerHandle                                      OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetScrollWidget
	// void SetScrollWidget();                                                                                                  // [0x90720a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase.SetQuestToDisplay
	// void SetQuestToDisplay(UFortQuestItemDefinition* QuestDef);                                                              // [0x6ee6cdc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase.HandleQuestsUpdatedInternal
	// void HandleQuestsUpdatedInternal();                                                                                      // [0xa710088] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanel
/// Size: 0x00B0 (0x000300 - 0x0003B0)
class UFortQuestMapDetailsPanel : public UFortQuestMapDetailsPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FDataTableRowHandle)                       PlayButtonTriggeringAction                                  OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	CMember(TArray<UClass*>)                           PriorityActivatableWidgetClassList                          OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(UClass*)                                   CurrentQuestBorder                                          OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UClass*)                                   CompletedQuestBorder                                        OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortJournalQuestDetails*)                 Panel_JournalDetails                                        OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestTitle                                             OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestDescription                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Header                                                 OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_NotOwnedHeader                                         OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_InactiveQuestName                                      OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UImage*)                                   Image_QuestIcon                                             OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UCommonListView*)                          List_Tasks                                                  OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_Header                                               OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_Body                                               OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UFortRewardInfoWidget*)                    Widget_FutureQuestRewardInfo                                OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Quest                                             OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_NoQuest                                           OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(TArray<UFortQuestObjectiveInfo*>)          VisibleObjectives                                           OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(UFortQuestItem*)                           CurrentQuestItem                                            OFFSET(get<T>, {0x3A8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanel_Legacy
/// Size: 0x00B0 (0x000300 - 0x0003B0)
class UFortQuestMapDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FDataTableRowHandle)                       PlayButtonTriggeringAction                                  OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	CMember(TArray<UClass*>)                           PriorityActivatablePanelClassList                           OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(UClass*)                                   CurrentQuestBorder                                          OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UClass*)                                   CompletedQuestBorder                                        OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortJournalQuestDetails*)                 Panel_JournalDetails                                        OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestTitle                                             OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestDescription                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Header                                                 OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_NotOwnedHeader                                         OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_InactiveQuestName                                      OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UImage*)                                   Image_QuestIcon                                             OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UCommonListView*)                          List_Tasks                                                  OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_Header                                               OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_Body                                               OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UFortRewardInfoWidget_Legacy*)             Widget_FutureQuestRewardInfo                                OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Quest                                             OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_NoQuest                                           OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(TArray<UFortQuestObjectiveInfo*>)          VisibleObjectives                                           OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(UFortQuestItem*)                           CurrentQuestItem                                            OFFSET(get<T>, {0x3A8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventCallout
/// Size: 0x0138 (0x000400 - 0x000538)
class UFortQuestMapEventCallout : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	CMember(UFortBangWrapper_NUI*)                     BangWrapper_GoButton                                        OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UFortProgressArrowButton*)                 Button_LeftNav                                              OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UFortProgressArrowButton*)                 Button_RightNav                                             OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_SwitchMode                                           OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UFortQuestMapNewBangWrapper*)              BangWrapper_Arrow                                           OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UFortQuestMapEventSequence*)               Sequence_EventProgress                                      OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_NavButtons                                    OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Header                                                 OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Body                                                   OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UImage*)                                   Image_Callout                                               OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UFortBangWrapper_NUI*)                     BangWrapper_UnHover                                         OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(USoundBase*)                               DefaultSound                                                OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 DefaultRequiredCompletedQuest                               OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(USoundBase*)                               OverrideSound                                               OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UAudioComponent*)                          SoundLoop                                                   OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UFortQuestMapData*)                        QuestMapData                                                OFFSET(get<T>, {0x4C0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.UpdateGoButtonBangState
	// void UpdateGoButtonBangState(bool bClear);                                                                               // [0xa73fe94] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.UpdateCalloutData
	// void UpdateCalloutData();                                                                                                // [0xa73fe6c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.UpdateActiveEvents
	// void UpdateActiveEvents();                                                                                               // [0xa73fdf4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.SetIsFaded
	// void SetIsFaded(bool Faded);                                                                                             // [0xa73e450] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.SetIsExpanded
	// void SetIsExpanded(bool Expanded);                                                                                       // [0xa73e350] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.ResetCallout
	// void ResetCallout();                                                                                                     // [0xa73d6dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeOut
	// void PlayFadeOut();                                                                                                      // [0xa73cdec] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.PlayFadeIn
	// void PlayFadeIn();                                                                                                       // [0xa73cd94] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnResetCallout
	// void OnResetCallout();                                                                                                   // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnPlayFadeAnimation
	// void OnPlayFadeAnimation(bool bIsFadeOut);                                                                               // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnEventIndexChanged
	// void OnEventIndexChanged();                                                                                              // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnDeactivatePlayAnimation
	// void OnDeactivatePlayAnimation();                                                                                        // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.OnActivatePlayAnimation
	// void OnActivatePlayAnimation();                                                                                          // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.IsCurrentEventUnlocked
	// bool IsCurrentEventUnlocked();                                                                                           // [0xa73c2a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetRequiredQuestForCurrentEvent
	// UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent();                                                             // [0xa73b340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetIsFaded
	// bool GetIsFaded();                                                                                                       // [0xa73af30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetIsExpanded
	// bool GetIsExpanded();                                                                                                    // [0x83ef530] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.GetEventCount
	// int32_t GetEventCount();                                                                                                 // [0xa73aa2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout.DeactivateCallout
	// void DeactivateCallout();                                                                                                // [0xa73a700] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy
/// Size: 0x0138 (0x000570 - 0x0006A8)
class UFortQuestMapEventCallout_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1704;

public:
	CMember(UFortBangWrapper_NUI*)                     BangWrapper_GoButton                                        OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UFortProgressArrowButton_Legacy*)          Button_LeftNav                                              OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UFortProgressArrowButton_Legacy*)          Button_RightNav                                             OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_SwitchMode                                           OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(UFortQuestMapNewBangWrapper_Legacy*)       BangWrapper_Arrow                                           OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(UFortQuestMapEventSequence*)               Sequence_EventProgress                                      OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_NavButtons                                    OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Header                                                 OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Body                                                   OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UImage*)                                   Image_Callout                                               OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(UFortBangWrapper_NUI*)                     BangWrapper_UnHover                                         OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(USoundBase*)                               DefaultSound                                                OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 DefaultRequiredCompletedQuest                               OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(USoundBase*)                               OverrideSound                                               OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UAudioComponent*)                          SoundLoop                                                   OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UFortQuestMapData*)                        QuestMapData                                                OFFSET(get<T>, {0x630, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateGoButtonBangState
	// void UpdateGoButtonBangState(bool bClear);                                                                               // [0xa73ff38] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateCalloutData
	// void UpdateCalloutData();                                                                                                // [0xa73fe80] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.UpdateActiveEvents
	// void UpdateActiveEvents();                                                                                               // [0xa73fe30] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsFaded
	// void SetIsFaded(bool Faded);                                                                                             // [0xa73e4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.SetIsExpanded
	// void SetIsExpanded(bool Expanded);                                                                                       // [0xa73e3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.ResetCallout
	// void ResetCallout();                                                                                                     // [0xa73d6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeOut
	// void PlayFadeOut();                                                                                                      // [0xa73ce18] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.PlayFadeIn
	// void PlayFadeIn();                                                                                                       // [0xa73cdc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnResetCallout
	// void OnResetCallout();                                                                                                   // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnPlayFadeAnimation
	// void OnPlayFadeAnimation(bool bIsFadeOut);                                                                               // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnEventIndexChanged
	// void OnEventIndexChanged();                                                                                              // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnDeactivatePlayAnimation
	// void OnDeactivatePlayAnimation();                                                                                        // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.OnActivatePlayAnimation
	// void OnActivatePlayAnimation();                                                                                          // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.IsCurrentEventUnlocked
	// bool IsCurrentEventUnlocked();                                                                                           // [0xa73c2cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetRequiredQuestForCurrentEvent
	// UFortQuestItemDefinition* GetRequiredQuestForCurrentEvent();                                                             // [0xa73b37c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsFaded
	// bool GetIsFaded();                                                                                                       // [0xa73af48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetIsExpanded
	// bool GetIsExpanded();                                                                                                    // [0xa73af18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.GetEventCount
	// int32_t GetEventCount();                                                                                                 // [0xa73aa44] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy.DeactivateCallout
	// void DeactivateCallout();                                                                                                // [0xa73a714] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel
/// Size: 0x0098 (0x000300 - 0x000398)
class UFortQuestMapEventDetailsPanel : public UFortQuestMapDetailsPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(UClass*)                                   CurrentQuestBorder                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UClass*)                                   CompletedQuestBorder                                        OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UClass*)                                   FutureQuestBorder                                           OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_QuestContainer                                         OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_CompletedQuestContainer                                OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  Switcher_Quests                                             OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_NextQuest                                            OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestName                                              OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestDescription                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UCommonListView*)                          List_Tasks                                                  OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UImage*)                                   Image_QuestIcon                                             OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_SideBar                                           OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UDataTable*)                               EventQuestTable                                             OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UClass*)                                   SideBarEntryClass                                           OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 UnlockEventQuestDefinition                                  OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 CurrentQuestDef                                             OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(TArray<UFortQuestObjectiveInfo*>)          VisibleObjectives                                           OFFSET(get<T>, {0x388, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel_Legacy
/// Size: 0x0098 (0x000300 - 0x000398)
class UFortQuestMapEventDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	CMember(UClass*)                                   CurrentQuestBorder                                          OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UClass*)                                   CompletedQuestBorder                                        OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UClass*)                                   FutureQuestBorder                                           OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_QuestContainer                                         OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_CompletedQuestContainer                                OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_Quests                                             OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_NextQuest                                            OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestName                                              OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestDescription                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UCommonListView*)                          List_Tasks                                                  OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UImage*)                                   Image_QuestIcon                                             OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_SideBar                                           OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UDataTable*)                               EventQuestTable                                             OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UClass*)                                   SideBarEntryClass                                           OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 UnlockEventQuestDefinition                                  OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 CurrentQuestDef                                             OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(TArray<UFortQuestObjectiveInfo*>)          VisibleObjectives                                           OFFSET(get<T>, {0x388, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventDot
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortQuestMapEventDot : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UImage*)                                   Image_ActiveDot                                             OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventSequence
/// Size: 0x0018 (0x0002E8 - 0x000300)
class UFortQuestMapEventSequence : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(UHorizontalBox*)                           HorizontalBox_DotBox                                        OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UClass*)                                   DotWidgetClass                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventSideEntry
/// Size: 0x0060 (0x0002E8 - 0x000348)
class UFortQuestMapEventSideEntry : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(UCommonAnimatedSwitcher*)                  Switcher_Rewards                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonListView*)                          List_SideTasks                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SideQuestTitle                                         OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UImage*)                                   Image_Arrow                                                 OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UImage*)                                   Image_QuestComplete                                         OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FMargin)                                   RewardPadding                                               OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	CMember(UFortQuestItemDefinition*)                 CurrentQuestItemDef                                         OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UFortQuestItem*)                           CurrentQuestItem                                            OFFSET(get<T>, {0x328, 8, 0, 0})
	SMember(FTimerHandle)                              RewardAnimationTimer                                        OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	CMember(TArray<UFortQuestObjectiveInfo*>)          SideQuestObjectives                                         OFFSET(get<T>, {0x338, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventSideEntry_Legacy
/// Size: 0x0070 (0x0002E8 - 0x000358)
class UFortQuestMapEventSideEntry_Legacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_Rewards                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonListView*)                          List_SideTasks                                              OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SideQuestTitle                                         OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UImage*)                                   Image_Arrow                                                 OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UImage*)                                   Image_QuestComplete                                         OFFSET(get<T>, {0x308, 8, 0, 0})
	SMember(FMargin)                                   RewardPadding                                               OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	CMember(UFortQuestItemDefinition*)                 CurrentQuestItemDef                                         OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UFortQuestItem*)                           CurrentQuestItem                                            OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(TArray<UCommonWidgetSwitcherLegacy*>)      RewardSwitchers                                             OFFSET(get<T>, {0x330, 16, 0, 0})
	SMember(FTimerHandle)                              RewardAnimationTimer                                        OFFSET(getStruct<T>, {0x340, 8, 0, 0})
	CMember(TArray<UFortQuestObjectiveInfo*>)          SideQuestObjectives                                         OFFSET(get<T>, {0x348, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNewBangWrapper
/// Size: 0x0010 (0x000300 - 0x000310)
class UFortQuestMapNewBangWrapper : public UFortBangWrapper_NUI
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UCommonAnimatedSwitcher*)                  Switcher_Bangs                                              OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNewBangWrapper_Legacy
/// Size: 0x0010 (0x000300 - 0x000310)
class UFortQuestMapNewBangWrapper_Legacy : public UFortBangWrapper_NUI
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_Bangs                                              OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNodeLayout
/// Size: 0x0068 (0x0002C0 - 0x000328)
class UFortQuestMapNodeLayout : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(UPanelWidget*)                             Panel_NodeLayout                                            OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        ButtonPrevious                                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        ButtonNext                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(USizeBox*)                                 StartArrow                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(USizeBox*)                                 EndArrow                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   QuestButtonGroup                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortQuestMapScreen*)                      ParentScreen                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestIndexSelectionModelIndexChanged
	// void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection);                                            // [0xa73bea0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout.HandleQuestButtonSelected
	// void HandleQuestButtonSelected(UCommonButtonBase* SelectedQuestButton, int32_t ButtonIndex);                             // [0xa73bcdc] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy
/// Size: 0x0068 (0x0002C0 - 0x000328)
class UFortQuestMapNodeLayout_Legacy : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(UPanelWidget*)                             Panel_NodeLayout                                            OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      ButtonPrevious                                              OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      ButtonNext                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(USizeBox*)                                 StartArrow                                                  OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(USizeBox*)                                 EndArrow                                                    OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 QuestButtonGroup                                            OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortQuestMapScreen_Legacy*)               ParentScreen                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestIndexSelectionModelIndexChanged
	// void HandleQuestIndexSelectionModelIndexChanged(bool bUpdateButtonSelection);                                            // [0xa73bf20] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy.HandleQuestButtonSelected
	// void HandleQuestButtonSelected(UCommonButtonLegacy* SelectedQuestButton, int32_t ButtonIndex);                           // [0xa73bcdc] Final|Native|Private 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapQuestTile
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortQuestMapQuestTile : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(UCommonButtonBase*)                        QuestButton                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FFortQuestMapNode)                         QuestNodeData                                               OFFSET(getStruct<T>, {0x2F0, 24, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile.HandleSelectedChange
	// void HandleSelectedChange(bool Selected);                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile.HandleQuestDataChangedBP
	// void HandleQuestDataChangedBP();                                                                                         // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile.GetQuestNodeData
	// void GetQuestNodeData(UFortQuestItemDefinition*& QuestItemDefinition, FFortQuestMapNode& NodeData);                      // [0xa73b234] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortQuestMapQuestTile_Legacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(UCommonButtonLegacy*)                      QuestButton                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FFortQuestMapNode)                         QuestNodeData                                               OFFSET(getStruct<T>, {0x2F0, 24, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy.HandleSelectedChange
	// void HandleSelectedChange(bool Selected);                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy.HandleQuestDataChangedBP
	// void HandleQuestDataChangedBP();                                                                                         // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy.GetQuestNodeData
	// void GetQuestNodeData(UFortQuestItemDefinition*& QuestItemDefinition, FFortQuestMapNode& NodeData);                      // [0xa73b234] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapScreen
/// Size: 0x00B8 (0x000400 - 0x0004B8)
class UFortQuestMapScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	CMember(UFortQuestMapDetailsPanelBase*)            CampaignDetailsPanel                                        OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UFortQuestMapDetailsPanelBase*)            EventDetailsPanel                                           OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UFortQuestMapEventCallout*)                EventCalloutPanel                                           OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UFortQuestMapViewer*)                      QuestMapViewer                                              OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(EQuestMapScreenMode)                       CurrentMode                                                 OFFSET(get<T>, {0x420, 1, 0, 0})
	DMember(bool)                                      bEventsActive                                               OFFSET(get<bool>, {0x421, 1, 0, 0})
	CMember(UFortQuestMapDataAsset*)                   CampaignQuestMapDataTable                                   OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 CutoffQuest                                                 OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UFortQuestMapDataAsset*)                   CurrentQuestMapDataTable                                    OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UClass*)                                   CampaignNewsModalClass                                      OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UClass*)                                   QuestLogScreenClass                                         OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CurrentQuestAction                                          OFFSET(getStruct<T>, {0x478, 16, 0, 0})
	SMember(FDataTableRowHandle)                       STWNewsAction                                               OFFSET(getStruct<T>, {0x488, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackAction                                                  OFFSET(getStruct<T>, {0x498, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.UpdateQuestMapMode
	// void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode);                                                               // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.UpdateInputActionStates
	// void UpdateInputActionStates(bool bShowingCallout);                                                                      // [0xa73ffdc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ToggleQuestMapState
	// void ToggleQuestMapState();                                                                                              // [0xa73f110] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ShowQuestLog
	// void ShowQuestLog(UFortQuestItem* QuestItem);                                                                            // [0xa73f090] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.SetQuestMapViewer
	// void SetQuestMapViewer(UFortQuestMapViewer* Value);                                                                      // [0xa73e7dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.SetIgnorePageNavigation
	// void SetIgnorePageNavigation(bool bIgnoreNavigation);                                                                    // [0xa73dfb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.SetBeyondCutoffQuest
	// void SetBeyondCutoffQuest(bool bBeyondCutoff);                                                                           // [0xa73d7b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.OnShowCurrentQuestInputActionValueChanged
	// void OnShowCurrentQuestInputActionValueChanged();                                                                        // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutExpandChanged
	// void OnEventCalloutExpandChanged();                                                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.OnEventCalloutButtonClicked
	// void OnEventCalloutButtonClicked();                                                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.IsEventFlagActive
	// bool IsEventFlagActive(FString EventFlag);                                                                               // [0xa73c2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.IsBeyondQuest
	// bool IsBeyondQuest(UFortQuestItemDefinition* QuestDef);                                                                  // [0xa73c218] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.InitializeQuestData
	// void InitializeQuestData();                                                                                              // [0xa73c0e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleQuestPageChanged
	// void HandleQuestPageChanged();                                                                                           // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleQuestIndexSelectionModelChanged
	// void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection);                                                 // [0xa73bda0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleQuestDetailsUpdated
	// void HandleQuestDetailsUpdated(UFortQuestItem* QuestDefinition);                                                         // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleMapViewerNavigationRequest
	// void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction);                                             // [0xa73b608] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleMapModeSwitch
	// void HandleMapModeSwitch();                                                                                              // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleEventQuestMapActivate
	// void HandleEventQuestMapActivate();                                                                                      // [0xa73b528] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleEventCalloutDataChangedBP
	// void HandleEventCalloutDataChangedBP();                                                                                  // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.HandleBackInputAction
	// void HandleBackInputAction();                                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.GetCurrentPageCameraMode
	// EFrontEndCamera GetCurrentPageCameraMode();                                                                              // [0xa73a7e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.GetBeyondCutoffQuest
	// bool GetBeyondCutoffQuest();                                                                                             // [0x7da2e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.ClaimQuestRewards
	// void ClaimQuestRewards(UFortQuestItem* QuestItem);                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen.CheckForNewMainQuest
	// void CheckForNewMainQuest();                                                                                             // [0xa73a3b4] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy
/// Size: 0x0068 (0x000538 - 0x0005A0)
class UFortQuestMapScreen_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	CMember(UFortQuestMapDetailsPanelBase*)            CampaignDetailsPanel                                        OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UFortQuestMapDetailsPanelBase*)            EventDetailsPanel                                           OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UFortQuestMapEventCallout_Legacy*)         EventCalloutPanel                                           OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UFortQuestMapViewer_Legacy*)               QuestMapViewer                                              OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(EQuestMapScreenMode)                       CurrentMode                                                 OFFSET(get<T>, {0x558, 1, 0, 0})
	DMember(bool)                                      bEventsActive                                               OFFSET(get<bool>, {0x559, 1, 0, 0})
	CMember(UFortQuestMapDataAsset*)                   CampaignQuestMapDataTable                                   OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 CutoffQuest                                                 OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UFortQuestMapDataAsset*)                   CurrentQuestMapDataTable                                    OFFSET(get<T>, {0x570, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.UpdateQuestMapMode
	// void UpdateQuestMapMode(EQuestMapScreenMode QuestMapMode);                                                               // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.ToggleQuestMapState
	// void ToggleQuestMapState();                                                                                              // [0xa73f130] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetQuestMapViewer
	// void SetQuestMapViewer(UFortQuestMapViewer_Legacy* Value);                                                               // [0xa73e85c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetIgnorePageNavigation
	// void SetIgnorePageNavigation(bool bIgnoreNavigation);                                                                    // [0xa73e044] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetFindCurrentActionVisibility
	// void SetFindCurrentActionVisibility(EInputActionState ActionVisibility);                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.SetBeyondCutoffQuest
	// void SetBeyondCutoffQuest(bool bBeyondCutoff);                                                                           // [0xa73d84c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutExpandChanged
	// void OnEventCalloutExpandChanged();                                                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.OnEventCalloutButtonClicked
	// void OnEventCalloutButtonClicked();                                                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.IsEventFlagActive
	// bool IsEventFlagActive(FString EventFlag);                                                                               // [0xa73c2f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.IsBeyondQuest
	// bool IsBeyondQuest(UFortQuestItemDefinition* QuestDef);                                                                  // [0xa73c218] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.InitializeQuestData
	// void InitializeQuestData();                                                                                              // [0xa73c0fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleRequestCurrentQuestNavigation
	// void HandleRequestCurrentQuestNavigation();                                                                              // [0xa73bfc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestPageChanged
	// void HandleQuestPageChanged();                                                                                           // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestIndexSelectionModelChanged
	// void HandleQuestIndexSelectionModelChanged(bool bUpdateButtonSelection);                                                 // [0xa73be20] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleQuestDetailsUpdated
	// void HandleQuestDetailsUpdated(UFortQuestItem* QuestDefinition);                                                         // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapViewerNavigationRequest
	// void HandleMapViewerNavigationRequest(EViewerNavigationDirection Direction);                                             // [0xa73b688] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleMapModeSwitch
	// void HandleMapModeSwitch();                                                                                              // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventQuestMapActivate
	// void HandleEventQuestMapActivate();                                                                                      // [0xa73b53c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.HandleEventCalloutDataChangedBP
	// void HandleEventCalloutDataChangedBP();                                                                                  // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.GetCurrentPageCameraMode
	// EFrontEndCamera GetCurrentPageCameraMode();                                                                              // [0xa73a810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.GetBeyondCutoffQuest
	// bool GetBeyondCutoffQuest();                                                                                             // [0xa73a728] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy.CheckForNewMainQuest
	// void CheckForNewMainQuest();                                                                                             // [0xa73a408] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy
/// Size: 0x0080 (0x0002E8 - 0x000368)
class UFortQuestMapViewer_Legacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	CMember(UCommonButtonLegacy*)                      Button_PageRight                                            OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_PageLeft                                             OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Page                                                   OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Viewer                                              OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCanvasPanel*)                             CanvasPanel_Cosmetic                                        OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UFortQuestMapScreen_Legacy*)               ParentScreen                                                OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortQuestMapNodeLayout_Legacy*)           NodeLayout                                                  OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.UpdateViewerData
	// void UpdateViewerData();                                                                                                 // [0xa74005c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.OnTryUpdateUserWidgetColor
	// void OnTryUpdateUserWidgetColor(UUserWidget* Widget, FSlateColor OverrideColor);                                         // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutOutroAnimation
	// void OnPlayLayoutOutroAnimation(EViewerNavigationDirection TravelDirection);                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.OnPlayLayoutFadeInAnimation
	// void OnPlayLayoutFadeInAnimation();                                                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy.HandleLayoutOutroAnimationFinished
	// void HandleLayoutOutroAnimationFinished();                                                                               // [0xa73b578] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestPlayButton
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortQuestPlayButton : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UFortQuestItem*)                           QuestItem                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.OnContentMissing
	// void OnContentMissing();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandlePlayerStateChanged
	// void HandlePlayerStateChanged();                                                                                         // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingStarted
	// void HandleMatchmakingStarted();                                                                                         // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandleMatchmakingComplete
	// void HandleMatchmakingComplete(EMatchmakingCompleteResult Result);                                                       // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.HandleLobbyDisconnected
	// void HandleLobbyDisconnected();                                                                                          // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.CanPlayQuest
	// bool CanPlayQuest();                                                                                                     // [0xa73a390] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortQuestPlayButton.AttemptToPlayQuest
	// void AttemptToPlayQuest();                                                                                               // [0xa73a2b0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestTreeItemWidget
/// Size: 0x0010 (0x001490 - 0x0014A0)
class UFortQuestTreeItemWidget : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5280;

public:
	CMember(TWeakObjectPtr<UObject*>)                  QuestOrCategory                                             OFFSET(get<T>, {0x1498, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsQuest
	// void SetupAsQuest(UFortQuestItem* category);                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.SetupAsCategory
	// void SetupAsCategory(UFortQuestCategory* category);                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.OnQuestsUpdated
	// void OnQuestsUpdated();                                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget.HandleQuestsUpdated
	// void HandleQuestsUpdated();                                                                                              // [0xa73bf9c] Final|Native|Protected 
};

/// Class /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortQuestTreeItemWidget_Legacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(TWeakObjectPtr<UObject*>)                  QuestOrCategory                                             OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.SetupAsQuest
	// void SetupAsQuest(UFortQuestItem* category);                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.SetupAsCategory
	// void SetupAsCategory(UFortQuestCategory* category);                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.OnQuestsUpdated
	// void OnQuestsUpdated();                                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy.HandleQuestsUpdated
	// void HandleQuestsUpdated();                                                                                              // [0xa73bfb0] Final|Native|Protected 
};

/// Class /Script/SaveTheWorldUI.FortQuestScreen
/// Size: 0x00F8 (0x000400 - 0x0004F8)
class UFortQuestScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1272;

public:
	CMember(UCommonTreeView*)                          TreeView_Quests                                             OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_QuestDetails                                      OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UClass*)                                   QuestManagerComponentClass                                  OFFSET(get<T>, {0x410, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackAction                                                  OFFSET(getStruct<T>, {0x418, 16, 0, 0})
	SMember(FDataTableRowHandle)                       LeaveInventoryAction                                        OFFSET(getStruct<T>, {0x428, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PlayQuestAction                                             OFFSET(getStruct<T>, {0x438, 16, 0, 0})
	SMember(FDataTableRowHandle)                       AbandonQuestAction                                          OFFSET(getStruct<T>, {0x448, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClaimRewardAction                                           OFFSET(getStruct<T>, {0x458, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ReplayIntroAction                                           OFFSET(getStruct<T>, {0x468, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ReplayOutroAction                                           OFFSET(getStruct<T>, {0x478, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PinQuestAction                                              OFFSET(getStruct<T>, {0x488, 16, 0, 0})
	SMember(FDataTableRowHandle)                       UnpinQuestAction                                            OFFSET(getStruct<T>, {0x498, 16, 0, 0})
	SMember(FDataTableRowHandle)                       StopConversationAction                                      OFFSET(getStruct<T>, {0x4A8, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortQuestScreen.TriggerClaimRewardEvent
	// void TriggerClaimRewardEvent(UFortQuestItem* QuestItem);                                                                 // [0xa73f1bc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.SetInputActionStates
	// void SetInputActionStates(UFortQuestItem* QuestItem, bool bIsQuestAudioPlaying, bool bShouldShowPlayQuest, bool bAreQuestItemsDifferent); // [0xa73e200] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.SetDisableClaimRewardButton
	// void SetDisableClaimRewardButton(bool bToDisable);                                                                       // [0xa73da68] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.ProcessPendingSeenQuestItems
	// void ProcessPendingSeenQuestItems();                                                                                     // [0xa73cec4] Final|Native|Private|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.OnContentMissing
	// void OnContentMissing();                                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_SetInitialQuestToSelect
	// void BP_SetInitialQuestToSelect(UFortQuestItem* QuestItem);                                                              // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleUnpinQuestAction
	// void BP_HandleUnpinQuestAction();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleStopConversationAction
	// void BP_HandleStopConversationAction();                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleReplayOutroAction
	// void BP_HandleReplayOutroAction();                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleReplayIntroAction
	// void BP_HandleReplayIntroAction();                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandlePlayQuestAction
	// void BP_HandlePlayQuestAction();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandlePinQuestAction
	// void BP_HandlePinQuestAction();                                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleClaimRewardAction
	// void BP_HandleClaimRewardAction();                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleBackAction
	// void BP_HandleBackAction();                                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.BP_HandleAbandonQuestAction
	// void BP_HandleAbandonQuestAction();                                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortQuestScreen.AttemptToPlayQuest
	// void AttemptToPlayQuest(UFortQuestItem* QuestItem);                                                                      // [0xa73a2c4] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortQuestScreen_Legacy
/// Size: 0x0000 (0x000570 - 0x000570)
class UFortQuestScreen_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/SaveTheWorldUI.FortResearchMenuBase
/// Size: 0x0008 (0x000570 - 0x000578)
class UFortResearchMenuBase : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
	CMember(UFortItemDefinition*)                      ResearchRespecToken                                         OFFSET(get<T>, {0x570, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.UseResearchRespecToken
	// void UseResearchRespecToken();                                                                                           // [0xa740070] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.RequestPurchaseResearchLevel
	// void RequestPurchaseResearchLevel(FString StatId);                                                                       // [0xa73d044] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.OnUseResearchRespecTokenComplete
	// void OnUseResearchRespecTokenComplete();                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelStarted
	// void OnPurchaseResearchLevelStarted();                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.OnPurchaseResearchLevelCompleted
	// void OnPurchaseResearchLevelCompleted();                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.GetResearchRespecTokenCount
	// int32_t GetResearchRespecTokenCount();                                                                                   // [0xa73b3b8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.GetClaimableResearchPointEstimate
	// int32_t GetClaimableResearchPointEstimate();                                                                             // [0xa73a740] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortResearchMenuBase.AreResearchRespecTokensAvailable
	// bool AreResearchRespecTokensAvailable();                                                                                 // [0xa73a288] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortResearchStatTileWidget
/// Size: 0x0040 (0x0002C0 - 0x000300)
class UFortResearchStatTileWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(UFortStatItemDefinition*)                  PersonalStatItemDefinition                                  OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UFortStatItemDefinition*)                  TeamStatItemDefinition                                      OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FName)                                     StatCostCurveName                                           OFFSET(getStruct<T>, {0x2D0, 4, 0, 0})
	SMember(FName)                                     StatPersonalDeltaCurveName                                  OFFSET(getStruct<T>, {0x2D4, 4, 0, 0})
	SMember(FName)                                     StatPersonalCumulativeCurveName                             OFFSET(getStruct<T>, {0x2D8, 4, 0, 0})
	SMember(FName)                                     StatTeamDeltaCurveName                                      OFFSET(getStruct<T>, {0x2DC, 4, 0, 0})
	SMember(FName)                                     StatTeamCumulativeCurveName                                 OFFSET(getStruct<T>, {0x2E0, 4, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.OnStatChanged
	// void OnStatChanged();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.IsAtMaxResearchLevel
	// bool IsAtMaxResearchLevel();                                                                                             // [0xa73c200] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetStatIdName
	// FString GetStatIdName();                                                                                                 // [0xa73b418] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetPersonalStatType
	// EFortStatType GetPersonalStatType();                                                                                     // [0xa73b214] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetNextTeamStatValueDelta
	// int32_t GetNextTeamStatValueDelta();                                                                                     // [0xa73b1cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetNextPersonalStatValueDelta
	// int32_t GetNextPersonalStatValueDelta();                                                                                 // [0xa73b1a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetNextCombinedStatValueDelta
	// int32_t GetNextCombinedStatValueDelta();                                                                                 // [0xa73b160] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentTeamStatValue
	// int32_t GetCurrentTeamStatValue();                                                                                       // [0xa73a87c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentResearchLevel
	// int32_t GetCurrentResearchLevel();                                                                                       // [0xa73a864] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentPersonalStatValue
	// int32_t GetCurrentPersonalStatValue();                                                                                   // [0xa73a840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCurrentCombinedStatValue
	// int32_t GetCurrentCombinedStatValue();                                                                                   // [0xa73a798] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortResearchStatTileWidget.GetCostToIncreaseStat
	// int32_t GetCostToIncreaseStat();                                                                                         // [0xa73a764] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortRewardNotificationData
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortRewardNotificationData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EFrontEndRewardType)                       RewardType                                                  OFFSET(get<T>, {0x28, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardNotificationData.GetIconBrush
	// bool GetIconBrush(FSlateBrush& IconBrush, TEnumAsByte<EFortBrushSize> BrushSize);                                        // [0xa73aa5c] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardCollectionBookData
/// Size: 0x0060 (0x000030 - 0x000090)
class UFortRewardCollectionBookData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFortCollectionBookRewards)                CollectionBookRewards                                       OFFSET(getStruct<T>, {0x30, 96, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardNotificationSubWidget
/// Size: 0x0028 (0x0002E8 - 0x000310)
class UFortRewardNotificationSubWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FMulticastInlineDelegate)                  OnTransitionInComplete                                      OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTransitionOutComplete                                     OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOutBegin
	// void TransitionOutBegin();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionOut
	// void TransitionOut();                                                                                                    // [0xa73f1a8] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionInBegin
	// void TransitionInBegin();                                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.TransitionIn
	// void TransitionIn();                                                                                                     // [0xa73f150] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionText
	// void SetPrimaryActionText(FText Text);                                                                                   // [0xa73e684] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionHidden
	// void SetPrimaryActionHidden();                                                                                           // [0xa73e654] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetPrimaryActionEnabled
	// void SetPrimaryActionEnabled(bool bEnabled);                                                                             // [0xa73e550] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.SetInputActionHandlerState
	// void SetInputActionHandlerState(UDataTable* DataTable, FName RowName, EInputActionState State);                          // [0xa73e0d0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveInputActionHandler
	// void RemoveInputActionHandler(FDataTableRowHandle InputActionRow);                                                       // [0xa73cef4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.RemoveAllInputActionHandlers
	// void RemoveAllInputActionHandlers();                                                                                     // [0xa73ced8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnPrimaryAction
	// void OnPrimaryAction();                                                                                                  // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationUp
	// void OnNavigationUp();                                                                                                   // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationRight
	// void OnNavigationRight();                                                                                                // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationLeft
	// void OnNavigationLeft();                                                                                                 // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnNavigationDown
	// void OnNavigationDown();                                                                                                 // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.OnActivated
	// void OnActivated();                                                                                                      // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionHidden
	// void IsPrimaryActionHidden(bool& bHidden);                                                                               // [0xa73c904] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.IsPrimaryActionEnabled
	// void IsPrimaryActionEnabled(bool& bEnabled);                                                                             // [0xa73c904] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.InspectItem
	// void InspectItem(UFortItem* ItemToInspect, int32_t QuantityOverride);                                                    // [0xa73c110] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.Init
	// void Init(UFortRewardNotificationWidget* MainWidget);                                                                    // [0xa73c068] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationSubWidget.AddInputActionHandler
	// void AddInputActionHandler(UDataTable* DataTable, FName RowName, FDelegateProperty CommittedEvent);                      // [0xa739f5c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardConversationWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
};

/// Class /Script/SaveTheWorldUI.FortRewardDifficultyIncrease
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortRewardDifficultyIncrease : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SaveTheWorldUI.FortRewardEpicQuestData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardEpicQuestData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortQuestItem*)                           Quest                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardExpeditionData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardExpeditionData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortExpeditionItem*)                      Expedition                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardExpeditionWidget
/// Size: 0x0068 (0x000310 - 0x000378)
class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	SMember(FMulticastInlineDelegate)                  OnMcpError                                                  OFFSET(getStruct<T>, {0x310, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardExpeditionWidget.OnCollectExpeditionCompleted
	// void OnCollectExpeditionCompleted(UFortExpeditionItem* Expedition, bool bSucceeded, TArray<FFortItemInstanceQuantityPair>& Rewards); // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardExpeditionWidget.CollectExpedition
	// void CollectExpedition(UFortExpeditionItem* Expedition);                                                                 // [0xa73a470] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardGiftBoxData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardGiftBoxData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortGiftBoxItem*)                         GiftBox                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardItemCacheData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardItemCacheData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortItem*)                                ItemCache                                                   OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardMissionAlertData
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortRewardMissionAlertData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SaveTheWorldUI.FortRewardMissionData
/// Size: 0x0000 (0x000030 - 0x000030)
class UFortRewardMissionData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/SaveTheWorldUI.FortRewardNewQuestWidget
/// Size: 0x0000 (0x000310 - 0x000310)
class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
};

/// Class /Script/SaveTheWorldUI.FortRewardNotificationWidget
/// Size: 0x00F0 (0x000538 - 0x000628)
class UFortRewardNotificationWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1576;

public:
	CMember(TArray<UFortRewardNotificationData*>)      NotificationDataList                                        OFFSET(get<T>, {0x540, 16, 0, 0})
	CMember(UOverlay*)                                 OverlayMain                                                 OFFSET(get<T>, {0x560, 8, 0, 0})
	SMember(FFortSwipeDetector)                        SwipeDetector                                               OFFSET(getStruct<T>, {0x568, 144, 0, 0})
	CMember(UClass*)                                   MulchConfirmationModalClass                                 OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UFortMulchConfirmationModalWidget*)        MulchConfirmationModal                                      OFFSET(get<T>, {0x620, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.ShowMulchConfirmationModal
	// void ShowMulchConfirmationModal();                                                                                       // [0xa7128a4] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionText
	// void SetPrimaryActionText(FText Text);                                                                                   // [0xa73e740] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionHidden
	// void SetPrimaryActionHidden();                                                                                           // [0xa73e670] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.SetPrimaryActionEnabled
	// void SetPrimaryActionEnabled(bool bEnabled);                                                                             // [0xa73e5d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.ResetAllRewardData
	// void ResetAllRewardData();                                                                                               // [0xa73d6ac] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.PopulateReward
	// void PopulateReward(UFortRewardNotificationData* Reward);                                                                // [0xa73ce44] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsScreenClosed
	// void OnRewardsScreenClosed();                                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimFailed
	// void OnRewardsClaimFailed();                                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnRewardsClaimed
	// void OnRewardsClaimed(TArray<FFortItemInstanceQuantityPair>& ItemList);                                                  // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionTextChanged
	// void OnPrimaryActionTextChanged(FText& Text);                                                                            // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionHidden
	// void OnPrimaryActionHidden();                                                                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionEnabled
	// void OnPrimaryActionEnabled();                                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPrimaryActionDisabled
	// void OnPrimaryActionDisabled();                                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateNewQuestReward
	// void OnPopulateNewQuestReward(UFortRewardEpicQuestData* QuestReward);                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateGiftBoxReward
	// void OnPopulateGiftBoxReward(UFortRewardGiftBoxData* GiftBoxReward);                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateExpeditionReward
	// void OnPopulateExpeditionReward(UFortRewardExpeditionData* ExpeditionReward);                                            // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnPopulateChoiceRewards
	// void OnPopulateChoiceRewards(TArray<FFortItemInstanceQuantityPair>& ItemList);                                           // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationUp
	// void OnNavigationUp();                                                                                                   // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationRight
	// void OnNavigationRight();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationLeft
	// void OnNavigationLeft();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnNavigationDown
	// void OnNavigationDown();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.OnMulchCompleted
	// void OnMulchCompleted();                                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelDeactivated
	// void NotifyPanelDeactivated();                                                                                           // [0xa710684] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.NotifyPanelActivated
	// void NotifyPanelActivated();                                                                                             // [0xa71064c] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.MarkDefaultItemsForMulch
	// void MarkDefaultItemsForMulch(TArray<FFortItemInstanceQuantityPair> ItemList);                                           // [0xa73cc68] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionHidden
	// void IsPrimaryActionHidden(bool& bHidden);                                                                               // [0xa73ca24] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.IsPrimaryActionEnabled
	// void IsPrimaryActionEnabled(bool& bEnabled);                                                                             // [0xa73c998] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.InspectItem
	// void InspectItem(UFortItem* ItemToInspect, int32_t QuantityOverride);                                                    // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HideMulchConfirmationModal
	// void HideMulchConfirmationModal();                                                                                       // [0xa710138] Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnQuestRewardClaimed
	// void HandleOnQuestRewardClaimed(UFortQuestItem* Quest, TArray<FFortItemInstanceQuantityPair>& Rewards);                  // [0xa73ba7c] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnNoQuestRewardsToClaim
	// void HandleOnNoQuestRewardsToClaim();                                                                                    // [0xa73b9cc] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpenFailed
	// void HandleOnMissionRewardsOpenFailed();                                                                                 // [0xa73b9cc] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionRewardsOpened
	// void HandleOnMissionRewardsOpened(TArray<FFortItemInstanceQuantityPair>& MissionRewards);                                // [0xa73b9e0] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnMissionAlertRewardsOpened
	// void HandleOnMissionAlertRewardsOpened(TArray<FFortItemInstanceQuantityPair>& AlertRewards);                             // [0xa73b9e0] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimFailed
	// void HandleOnItemCacheRewardsClaimFailed();                                                                              // [0xa73b9cc] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnItemCacheRewardsClaimed
	// void HandleOnItemCacheRewardsClaimed(TArray<FFortItemInstanceQuantityPair>& ClaimedRewards);                             // [0xa73b9e0] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimFailed
	// void HandleOnDifficultyIncreaseRewardsClaimFailed();                                                                     // [0xa73b9cc] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnDifficultyIncreaseRewardsClaimed
	// void HandleOnDifficultyIncreaseRewardsClaimed(TArray<FFortItemInstanceQuantityPair>& DifficultyRewards);                 // [0xa73b9e0] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.HandleOnCollectionBookRewardClaimed
	// void HandleOnCollectionBookRewardClaimed(FFortCollectionBookRewards RewardClaimed, bool bSuccess, TArray<FFortItemInstanceQuantityPair>& ActualRewards); // [0xa73b708] Final|Native|Private|HasOutParms 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.BeginCloseRewardsScreen
	// void BeginCloseRewardsScreen();                                                                                          // [0xa73a344] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddQuestData
	// void AddQuestData(UFortQuestItem* Quest);                                                                                // [0xa73a208] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddPhoenixLevelUpRewardData
	// void AddPhoenixLevelUpRewardData();                                                                                      // [0xa73a1f4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddMissionData
	// void AddMissionData();                                                                                                   // [0xa73a16c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddMissionAlertData
	// void AddMissionAlertData();                                                                                              // [0xa73a0e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddItemCacheRewardData
	// void AddItemCacheRewardData(UFortItem* ItemCache);                                                                       // [0xa73a064] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddGiftBoxData
	// void AddGiftBoxData();                                                                                                   // [0xa739ed4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddExpeditionData
	// void AddExpeditionData(UFortExpeditionItem* ExpeditionItem);                                                             // [0xa739e54] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddEpicQuestData
	// void AddEpicQuestData(UFortQuestItem* Quest);                                                                            // [0xa739dd4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddDifficultyIncreaseRewardData
	// void AddDifficultyIncreaseRewardData();                                                                                  // [0xa739d4c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortRewardNotificationWidget.AddCollectionBookData
	// void AddCollectionBookData(FFortCollectionBookRewards& CollectionBookRewards);                                           // [0xa739ca8] Final|Native|Protected|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortRewardPhoenixLevelUpData
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortRewardPhoenixLevelUpData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   PhoenixLevel                                                OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<FFortItemInstanceQuantityPair>)     Rewards                                                     OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardQuestData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardQuestData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortQuestItem*)                           Quest                                                       OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.SaveTheWorldRegisterUIManager
/// Size: 0x0000 (0x000028 - 0x000028)
class USaveTheWorldRegisterUIManager : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SaveTheWorldUI.SaveTheWorldRequestsFeatureAction
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class USaveTheWorldRequestsFeatureAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TWeakObjectPtr<UClass*>)                   ItemManagementScreenClass                                   OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ItemManagementScreenClass_STW                               OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ItemInspectionScreenClass                                   OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   HeroLoadoutScreenClass                                      OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   HeroLoadoutScreenLegacyClass                                OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SurvivorSquadManagementScreenClass                          OFFSET(get<T>, {0xC8, 32, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadSelectorButton
/// Size: 0x0020 (0x0014E0 - 0x001500)
class UFortSquadSelectorButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
};

/// Class /Script/SaveTheWorldUI.FortDefenderSquadSelectorButton
/// Size: 0x0000 (0x001500 - 0x001500)
class UFortDefenderSquadSelectorButton : public UFortSquadSelectorButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
};

/// Class /Script/SaveTheWorldUI.FortSquadStatDetailsWidget
/// Size: 0x0030 (0x0002E8 - 0x000318)
class UFortSquadStatDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
};

/// Class /Script/SaveTheWorldUI.FortHeroSquadBonusPerksWidgetBase
/// Size: 0x0010 (0x000318 - 0x000328)
class UFortHeroSquadBonusPerksWidgetBase : public UFortSquadStatDetailsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(UFortPerkWidget_NUI*)                      SupportBonusPerkWidget                                      OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UFortPerkWidget_NUI*)                      TacticalBonusPerkWidget                                     OFFSET(get<T>, {0x320, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadManagementScreenBase
/// Size: 0x0120 (0x000570 - 0x000690)
class UFortSquadManagementScreenBase : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	DMember(bool)                                      bReadOnlyModeWIFE                                           OFFSET(get<bool>, {0x580, 1, 0, 0})
	CMember(UFortSquadStatsWidgetBase*)                SquadStatsWidget                                            OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UFortSquadSlotsView*)                      SquadSlotsView                                              OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UFortSquadSlotDetailsPanel*)               SelectedSlotDetailsPanel                                    OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UFortSquadSlotItemPicker*)                 SelectedSlotItemPicker                                      OFFSET(get<T>, {0x5A0, 8, 0, 0})
	SMember(FDataTableRowHandle)                       InspectInputActionRowHandle                                 OFFSET(getStruct<T>, {0x5A8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ManageInputActionRowHandle                                  OFFSET(getStruct<T>, {0x5B8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputActionRowHandle                                    OFFSET(getStruct<T>, {0x5C8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InventoryInputActionRowHandle                               OFFSET(getStruct<T>, {0x5D8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InventoryCloseInputActionRowHandle                          OFFSET(getStruct<T>, {0x5E8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClosePickerInputActionRowHandle                             OFFSET(getStruct<T>, {0x5F8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SelectPickerSlotActionRowHandle                             OFFSET(getStruct<T>, {0x608, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CyclePickerSortActionRowHandle                              OFFSET(getStruct<T>, {0x618, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousSquadActionRowHandle                                OFFSET(getStruct<T>, {0x628, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextSquadActionRowHandle                                    OFFSET(getStruct<T>, {0x638, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClearAllActionRowHandle                                     OFFSET(getStruct<T>, {0x648, 16, 0, 0})
	SMember(FDataTableRowHandle)                       HelpScreenActionRowHandle                                   OFFSET(getStruct<T>, {0x658, 16, 0, 0})
	CMember(UClass*)                                   DisableAutoSlottingToClearSquadPromptAction                 OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UFortItemViewContext_SquadSlotsView*)      ItemViewContext_SquadSlotsView                              OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UFortItemViewContext_SquadSlotItemPicker*) ItemViewContext_SquadSlotItemPicker                         OFFSET(get<T>, {0x688, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetStaticSquadDataBP
	// bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData);                                                              // [0xa73f668] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadTeamAttribute
	// bool TryGetSquadTeamAttribute(FGameplayAttribute& OutGameplayAttribute);                                                 // [0xa73f588] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetSquadMainAttribute
	// bool TryGetSquadMainAttribute(FGameplayAttribute& OutGameplayAttribute);                                                 // [0xa73f4a8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.TryGetAttributeValueFromSquad
	// bool TryGetAttributeValueFromSquad(float& OutValue, FGameplayAttribute& Attribute);                                      // [0xa73f248] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.ShowWarningReadOnlyWIFE
	// void ShowWarningReadOnlyWIFE(bool Force);                                                                                // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SetupInputHandlers
	// void SetupInputHandlers();                                                                                               // [0x6cdb258] Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SetIdOfSquadToManageBP
	// void SetIdOfSquadToManageBP(FName& SquadId);                                                                             // [0xa73df28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SelectSquadWithOffset
	// void SelectSquadWithOffset(int32_t Offset);                                                                              // [0xa73d734] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SelectPreviousSquad
	// void SelectPreviousSquad();                                                                                              // [0xa73d71c] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.SelectNextSquad
	// void SelectNextSquad();                                                                                                  // [0xa73d704] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.NavigateToSquadSlot
	// void NavigateToSquadSlot(int32_t SquadSlotIndex);                                                                        // [0xa73cd14] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.IsScreenWIFE
	// bool IsScreenWIFE();                                                                                                     // [0xa73cab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleViewInAll
	// void HandleViewInAll(int32_t SquadSlotIndex);                                                                            // [0xa73bfec] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadStateChanged
	// void HandleSquadStateChanged();                                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerShown
	// void HandleSquadSlotPickerShown();                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSquadSlotPickerHidden
	// void HandleSquadSlotPickerHidden();                                                                                      // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleShouldAutoSlotSurvivorSquadsChanged
	// void HandleShouldAutoSlotSurvivorSquadsChanged();                                                                        // [0x6cdb258] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleSelectPickerSlotInputAction
	// void HandleSelectPickerSlotInputAction();                                                                                // [0xa73bfd8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandlePreviousSquadInputAction
	// void HandlePreviousSquadInputAction();                                                                                   // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionCommitted
	// void HandlePickerSelectionCommitted(UFortItem* CommittedItem);                                                           // [0xa73bc60] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandlePickerSelectionChanged
	// void HandlePickerSelectionChanged(UFortItem* SelectedItem);                                                              // [0xa73bbe0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleOpenSquadSlot
	// void HandleOpenSquadSlot(int32_t SquadSlotIndex);                                                                        // [0xa73bb60] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleNextSquadInputAction
	// void HandleNextSquadInputAction();                                                                                       // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleManageInputAction
	// void HandleManageInputAction();                                                                                          // [0xa73b5f4] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleInventoryInputAction
	// void HandleInventoryInputAction();                                                                                       // [0xa73b564] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleInspectInputAction
	// void HandleInspectInputAction();                                                                                         // [0xa73b550] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSlotSelected
	// void HandleDifferentSquadSlotSelected(int32_t SquadSlotIndex);                                                           // [0xa73b4a4] Native|Protected     
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleDifferentSquadSetBP
	// void HandleDifferentSquadSetBP();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleCyclePickerSortInputAction
	// void HandleCyclePickerSortInputAction();                                                                                 // [0xa73b490] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleClosePickerInputAction
	// void HandleClosePickerInputAction();                                                                                     // [0xa73b47c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.HandleBackInputAction
	// void HandleBackInputAction();                                                                                            // [0xa73b468] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.GetNumUnlockedSquads
	// int32_t GetNumUnlockedSquads();                                                                                          // [0xa73b1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.GetIdOfSquadToManageBP
	// FName GetIdOfSquadToManageBP();                                                                                          // [0x943c880] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadManagementScreenBase.ClearSquad
	// void ClearSquad();                                                                                                       // [0xa73a45c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortHeroSquadManagementScreen
/// Size: 0x0020 (0x000690 - 0x0006B0)
class UFortHeroSquadManagementScreen : public UFortSquadManagementScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	SMember(FDataTableRowHandle)                       ManageDefendersInputActionRowHandle                         OFFSET(getStruct<T>, {0x690, 16, 0, 0})
	CMember(UFortHeroSquadBonusPerksWidgetBase*)       BonusPerksWidget                                            OFFSET(get<T>, {0x6A0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortHeroSquadManagementScreen.PlayFeedbackForSlottingPerson
	// void PlayFeedbackForSlottingPerson(UFortCharacter* Character, int32_t SlotIndex);                                        // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadIcon
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortSquadIcon : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x2E8, 4, 0, 0})
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   OFFSET(get<T>, {0x2EC, 1, 0, 0})
	CMember(UImage*)                                   Icon                                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadIcon.SetSquad
	// void SetSquad(FName& InName);                                                                                            // [0xa73efd4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadIcon.HandleDifferentSquadSetBP
	// void HandleDifferentSquadSetBP();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UCommonTextBlock*)                         OutpostName                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  PowerRating                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.SetDefenderSquadInfo
	// void SetDefenderSquadInfo(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);                                     // [0xa73d8e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleDefenderSquadInfoSetBP
	// void HandleDefenderSquadInfoSetBP(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);                             // [0x101681c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails.HandleAddDefenderSquadMemberBP
	// void HandleAddDefenderSquadMemberBP(FName& SquadId, int32_t Index);                                                      // [0x101681c] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonTextBlock*)                         OutpostName                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked.SetDefenderSquadInfo
	// void SetDefenderSquadInfo(FFortLandingPageDefenderSummaryInfo& DefenderSummaryInfo);                                     // [0xa73d980] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary
/// Size: 0x0008 (0x0002E8 - 0x0002F0)
class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(UFortSquadStatValueWithIcon*)              FortitudeStatValue                                          OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortSquadStatValueWithIcon*)              OffenseStatValue                                            OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UFortSquadStatValueWithIcon*)              ResistanceStatValue                                         OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UFortSquadStatValueWithIcon*)              TechStatValue                                               OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleClearSetBonusSummaryLineItemsBP
	// void HandleClearSetBonusSummaryLineItemsBP();                                                                            // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary.HandleAddSetBonusSummaryLineItemBP
	// void HandleAddSetBonusSummaryLineItemBP(FFortAttributeModifierAccumulation AttributeModifierAccumulation);               // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadManagementItemViewContextBase
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UFortSquadManagementItemViewContextBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/SaveTheWorldUI.FortItemViewContext_SquadSlotsView
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortItemViewContext_SquadSlotsView : public UFortSquadManagementItemViewContextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/SaveTheWorldUI.FortItemViewContext_SquadSlotItemPicker
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortItemViewContext_SquadSlotItemPicker : public UFortSquadManagementItemViewContextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotsView
/// Size: 0x0008 (0x000100 - 0x000108)
class UFortItemViewContext_ExpeditionSquadSlotsView : public UFortItemViewContext_SquadSlotsView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/SaveTheWorldUI.FortItemViewContext_ExpeditionSquadSlotItemPicker
/// Size: 0x0008 (0x000100 - 0x000108)
class UFortItemViewContext_ExpeditionSquadSlotItemPicker : public UFortItemViewContext_SquadSlotItemPicker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel
/// Size: 0x0058 (0x0002E8 - 0x000340)
class UFortSquadSlotDetailsPanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(UFortSquadSlotItemDetailsHostPanel*)       ItemDetailsPanel                                            OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   ItemViewContext                                             OFFSET(get<T>, {0x310, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.TryGetItemToPreviewInSlot
	// bool TryGetItemToPreviewInSlot(UFortItem*& OutItemToPreviewInSlot);                                                      // [0xa73f378] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.SetScrollWidget
	// void SetScrollWidget();                                                                                                  // [0xa73e8dc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                                 // [0xa73dae8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                              // [0xa73cb14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotStateChangedBP
	// void HandleSquadSlotStateChangedBP();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleSquadSlotRestrictionFactorsChangedBP
	// void HandleSquadSlotRestrictionFactorsChangedBP();                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.HandleDifferentSquadSlotSetBP
	// void HandleDifferentSquadSlotSetBP();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.GetSlottingRestrictionReasons
	// TArray<EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons();                                             // [0xa73b3dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.GetItemInSquadSlotBP
	// UFortItem* GetItemInSquadSlotBP(ULocalPlayer* LocalPlayer);                                                              // [0xa73af60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotDetailsPanel.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                          // [0xa73aba8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget
/// Size: 0x0020 (0x000340 - 0x000360)
class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel
/// Size: 0x0020 (0x0003C0 - 0x0003E0)
class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemPicker
/// Size: 0x00C8 (0x000420 - 0x0004E8)
class UFortSquadSlotItemPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1256;

public:
	SMember(FMulticastInlineDelegate)                  OnSortChanged                                               OFFSET(getStruct<T>, {0x458, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.SetSortTypes
	// void SetSortTypes(FSquadSlotSortTypes SquadSlotSortTypes);                                                               // [0xa73e904] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                                 // [0xa73de18] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                          // [0xa73ae3c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.FortSquadSlotSortChanged__DelegateSignature
	// void FortSquadSlotSortChanged__DelegateSignature(ESquadSlotSortType CurrentSortType, ESquadSlotType SquadSlotType);      // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortSquadSlotItemPicker.CycleSortType
	// void CycleSortType();                                                                                                    // [0xa73a6ec] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton
/// Size: 0x0010 (0x001520 - 0x001530)
class UFortSquadSlotItemPickerTileButton : public UFortItemTileButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortSquadSlotSelectorPopupMenu : public UFortPopupMenu_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	DMember(bool)                                      bReadOnlyModeWIFE                                           OFFSET(get<bool>, {0x558, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.IsScreenWIFE
	// bool IsScreenWIFE();                                                                                                     // [0xa73cab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu.GetHostButton
	// UFortSquadSlotSelectorButton* GetHostButton();                                                                           // [0xa75e1e8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
/// Size: 0x0028 (0x000360 - 0x000388)
class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	DMember(bool)                                      IsSquadLeaderSlot                                           OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(bool)                                      LeaderMatchesSquadType                                      OFFSET(get<bool>, {0x361, 1, 0, 0})
	DMember(int32_t)                                   SubordinatePersonalityMatchCount                            OFFSET(get<int32_t>, {0x364, 4, 0, 0})
	DMember(bool)                                      MatchesLeaderPersonality                                    OFFSET(get<bool>, {0x368, 1, 0, 0})
	DMember(int32_t)                                   MatchingSetBonusCount                                       OFFSET(get<int32_t>, {0x36C, 4, 0, 0})
	DMember(int32_t)                                   SetBonusSize                                                OFFSET(get<int32_t>, {0x370, 4, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget.HandleTraitValuesUpdatedBP
	// void HandleTraitValuesUpdatedBP();                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotSelectorButton
/// Size: 0x0080 (0x0014E0 - 0x001560)
class UFortSquadSlotSelectorButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5472;

public:
	SMember(FMulticastInlineDelegate)                  OnRequestOpenSquadSlotEvent                                 OFFSET(getStruct<T>, {0x1500, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestViewInAllEvent                                     OFFSET(getStruct<T>, {0x1510, 16, 0, 0})
	CMember(UFortSquadSlotWidget*)                     SquadSlotWidget                                             OFFSET(get<T>, {0x1520, 8, 0, 0})
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             OFFSET(get<T>, {0x1528, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   ItemViewContext                                             OFFSET(get<T>, {0x1530, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.ViewInAll
	// void ViewInAll();                                                                                                        // [0xa761618] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.SquadSlotWidgetUpdated
	// void SquadSlotWidgetUpdated();                                                                                           // [0x8bb56c8] Native|Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                                 // [0xa7605b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.OpenSquadSlot
	// void OpenSquadSlot();                                                                                                    // [0xa760100] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                              // [0xa75fe00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePreDifferentSquadSlotSetBP
	// void HandlePreDifferentSquadSlotSetBP();                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.HandlePostDifferentSquadSlotSetBP
	// void HandlePostDifferentSquadSlotSetBP();                                                                                // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.GetPopupMenu
	// UUserWidget* GetPopupMenu();                                                                                             // [0xa75e754] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.GetInPreviewMode
	// bool GetInPreviewMode();                                                                                                 // [0xa75e4b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotSelectorButton.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                          // [0xa75e2e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotsView
/// Size: 0x00F8 (0x0002E8 - 0x0003E0)
class UFortSquadSlotsView : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FMulticastInlineDelegate)                  OnDifferentSquadSlotSelectedEvent                           OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestOpenSquadSlotEvent                                 OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestViewInAllEvent                                     OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	DMember(bool)                                      bReadOnlyModeWIFE                                           OFFSET(get<bool>, {0x328, 1, 0, 0})
	DMember(int32_t)                                   IndexOfSelectedSquadSlot                                    OFFSET(get<int32_t>, {0x32C, 4, 0, 0})
	DMember(bool)                                      bSlotButtonsRequireSelection                                OFFSET(get<bool>, {0x330, 1, 0, 0})
	DMember(bool)                                      bInPreviewMode                                              OFFSET(get<bool>, {0x331, 1, 0, 0})
	CMember(TMap<ESquadSlotType, FSquadSlotSortTypes>) SquadSlotSortTypesMap                                       OFFSET(get<T>, {0x338, 80, 0, 0})
	CMember(UClass*)                                   DisableAutoSlottingToOpenSquadSlotPromptAction              OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UFortCommittableButtonGroup*)              SquadSlotButtonGroup                                        OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   ItemViewContext                                             OFFSET(get<T>, {0x3C8, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.TryGetStaticSquadDataBP
	// bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData);                                                              // [0xa76146c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.TryGetSelectedSquadSlotSortTypes
	// bool TryGetSelectedSquadSlotSortTypes(FSquadSlotSortTypes& OutSlotSortTypes);                                            // [0xa760ccc] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SetIsSelectionLocked
	// void SetIsSelectionLocked(bool ShouldSelectionBeLocked);                                                                 // [0xa760970] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SetInPreviewMode
	// void SetInPreviewMode(bool bPreview);                                                                                    // [0xa7608f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SetIdOfSquadToManageBP
	// void SetIdOfSquadToManageBP(FName& SquadId);                                                                             // [0xa760860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.SelectSlot
	// void SelectSlot(int32_t SquadSlotIndex);                                                                                 // [0xa7601ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.OnDifferentSquadSlotSelected__DelegateSignature
	// void OnDifferentSquadSlotSelected__DelegateSignature(int32_t SquadSlotIndex);                                            // [0x101681c] MulticastDelegate|Public|Delegate 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleSelectedButtonChanged
	// void HandleSelectedButtonChanged(UCommonButtonLegacy* SelectedButton, int32_t ButtonIndex);                              // [0xa75fbf0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleRequestViewInAll
	// void HandleRequestViewInAll(int32_t SquadSlotIndex);                                                                     // [0xa75fb70] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleRequestOpenSquadSlot
	// void HandleRequestOpenSquadSlot(int32_t SquadSlotIndex);                                                                 // [0xa75faf0] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleHoveredButtonChanged
	// void HandleHoveredButtonChanged(UCommonButtonLegacy* HoveredButton, int32_t ButtonIndex);                                // [0xa75f91c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleButtonDoubleClicked
	// void HandleButtonDoubleClicked(UCommonButtonLegacy* CommittedButton, int32_t ButtonIndex);                               // [0xa75f714] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.HandleButtonClicked
	// void HandleButtonClicked(UCommonButtonLegacy* CommittedButton, int32_t ButtonIndex);                                     // [0xa75f59c] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.GetIndexOfSelectedSquadSlot
	// int32_t GetIndexOfSelectedSquadSlot();                                                                                   // [0xa75e4cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.GetIdOfSquadToManageBP
	// FName GetIdOfSquadToManageBP();                                                                                          // [0x955fe2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotsView.CreateAndAddSquadSlotButton
	// UFortSquadSlotSelectorButton* CreateAndAddSquadSlotButton(int32_t SquadSlotIndex, FHomebaseSquadSlot& SquadSlotDefinition, UWidget*& OutSquadSlotButtonHost); // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotWidget
/// Size: 0x0090 (0x000178 - 0x000208)
class UFortSquadSlotWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(EFortItemCardSize)                         ItemCardSize                                                OFFSET(get<T>, {0x198, 1, 0, 0})
	CMember(UFortMultiSizeItemCard*)                   SlottedItemCard                                             OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   ItemViewContext                                             OFFSET(get<T>, {0x1E8, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.SetIdOfSquadSlotToManageBP
	// void SetIdOfSquadSlotToManageBP(FName& SquadId, int32_t SquadSlotIndex);                                                 // [0xa7606c0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.SetCardSize
	// void SetCardSize(EFortItemCardSize CardSize);                                                                            // [0xa760428] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.IsSquadSlotLockedBP
	// bool IsSquadSlotLockedBP();                                                                                              // [0xa75fe24] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.GetItemInSquadSlotBP
	// UFortItem* GetItemInSquadSlotBP(ULocalPlayer* LocalPlayer);                                                              // [0xa75e568] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadSlotWidget.GetIdOfSquadSlotToManageBP
	// void GetIdOfSquadSlotToManageBP(FName& OutSquadId, int32_t& OutSquadSlotIndex);                                          // [0xa75e3c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadStatsWidgetBase
/// Size: 0x0038 (0x0002E8 - 0x000320)
class UFortSquadStatsWidgetBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(TArray<UFortAttributeListItem_NUI*>)       OverviewStats                                               OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(UFortAttributeList_NUI*)                   DetailedStats                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.RequestStatsUpdate
	// void RequestStatsUpdate();                                                                                               // [0xa760184] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.RequestShowPreviewStats
	// void RequestShowPreviewStats();                                                                                          // [0xa760170] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.HandleSquadSlottingPreviewStateChanged
	// void HandleSquadSlottingPreviewStateChanged();                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.HandlePowerRatingChanged_BP
	// void HandlePowerRatingChanged_BP(bool bHasTeamMebers);                                                                   // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.GetLocalPlayerId
	// FUniqueNetIdRepl GetLocalPlayerId();                                                                                     // [0xa75e638] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortSquadStatValueWithIcon
/// Size: 0x0088 (0x0002E8 - 0x000370)
class UFortSquadStatValueWithIcon : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   OFFSET(getStruct<T>, {0x2E8, 56, 0, 0})
	SMember(FGameplayAttribute)                        TeamAttribute                                               OFFSET(getStruct<T>, {0x320, 56, 0, 0})
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   OFFSET(get<T>, {0x358, 1, 0, 0})
	CMember(UCommonNumericTextBlock*)                  Value                                                       OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UImage*)                                   Icon                                                        OFFSET(get<T>, {0x368, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadStatValueWithIcon.HandleDifferentAttributeSetBP
	// void HandleDifferentAttributeSetBP();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase
/// Size: 0x0030 (0x000570 - 0x0005A0)
class UFortSquadTypeLandingPageBase : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	DMember(bool)                                      bReadOnlyModeWIFE                                           OFFSET(get<bool>, {0x570, 1, 0, 0})
	CMember(EFortHomebaseSquadType)                    SquadType                                                   OFFSET(get<T>, {0x571, 1, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputActionRowHandle                                    OFFSET(getStruct<T>, {0x578, 16, 0, 0})
	CMember(EFortFrontendInventoryFilter)              ItemManagementScreenFilter                                  OFFSET(get<T>, {0x588, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SquadSelectorButtons                                        OFFSET(get<T>, {0x590, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.ShowWarningReadOnlyWIFE
	// void ShowWarningReadOnlyWIFE(bool Force);                                                                                // [0x101681c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.IsScreenWIFE
	// bool IsScreenWIFE();                                                                                                     // [0xa73cab0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.HandlePendingNavigationOp
	// void HandlePendingNavigationOp();                                                                                        // [0xa75f9e4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.HandleBackInputAction
	// void HandleBackInputAction(bool& bPassThrough);                                                                          // [0xa75f510] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase.CreateAndAddSquadButton
	// UFortSquadSelectorButton* CreateAndAddSquadButton(FName& SquadId);                                                       // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortStatIcon
/// Size: 0x0048 (0x0002E8 - 0x000330)
class UFortStatIcon : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   OFFSET(getStruct<T>, {0x2E8, 56, 0, 0})
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   OFFSET(get<T>, {0x320, 1, 0, 0})
	CMember(UImage*)                                   Icon                                                        OFFSET(get<T>, {0x328, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStatIcon.SetAttribute
	// void SetAttribute(FGameplayAttribute& InAttribute);                                                                      // [0xa76022c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStatIcon.HandleDifferentAttributeSetBP
	// void HandleDifferentAttributeSetBP();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen
/// Size: 0x00E0 (0x000690 - 0x000770)
class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1904;

public:
	CMember(UFortSurvivorSquadStatMatchesBase*)        StatMatchesWidget                                           OFFSET(get<T>, {0x690, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen.UpdateCycleButtons
	// void UpdateCycleButtons();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen.ShowHelpDialog
	// void ShowHelpDialog();                                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen.PlayFeedbackForSlottingPerson
	// void PlayFeedbackForSlottingPerson(UFortWorker* Worker, int32_t SlotIndex, FFortSurvivorSquadSlottingFeedbackData& FeedbackData); // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton
/// Size: 0x0020 (0x001500 - 0x001520)
class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5408;

public:
	CMember(TArray<FGameplayAttribute>)                FortStatAttributes                                          OFFSET(get<T>, {0x14F8, 16, 0, 0})
	CMember(TArray<FGameplayAttribute>)                FortTeamStatAttributes                                      OFFSET(get<T>, {0x1508, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSummaryStats
	// bool TryGetSummaryStats(FFortSurvivorSquadSelectorButtonSummaryStats& OutSummaryStats);                                  // [0xa761540] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetSquadMembers
	// bool TryGetSquadMembers(TArray<UFortWorker*>& OutSquadMembers);                                                          // [0xa7612ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton.TryGetPersonalityMatches
	// bool TryGetPersonalityMatches(FFortSurvivorSquadSelectorButtonPersonalityMatches& OutPersonalityMatches);                // [0xa760be4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchBase
/// Size: 0x04C8 (0x0002E8 - 0x0007B0)
class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	SMember(FFortUISurvivorSquadStatMatch)             StatMatch                                                   OFFSET(getStruct<T>, {0x2F0, 1216, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchBase.OnStatMatchUpdated
	// void OnStatMatchUpdated(FFortUISurvivorSquadStatMatch UpdatedMatch);                                                     // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase
/// Size: 0x0030 (0x000318 - 0x000348)
class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(UClass*)                                   StatMatchClass                                              OFFSET(get<T>, {0x318, 8, 0, 0})
	DMember(bool)                                      bSummaryView                                                OFFSET(get<bool>, {0x320, 1, 0, 0})
	CMember(TArray<UFortSurvivorSquadStatMatchBase*>)  StatMatches                                                 OFFSET(get<T>, {0x328, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.TryGetStaticSquadDataBP
	// bool TryGetStaticSquadDataBP(FHomebaseSquad& OutSquadData);                                                              // [0xa76146c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetSummaryView
	// void SetSummaryView(bool bInSummaryView);                                                                                // [0xa760a34] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.SetIdOfSquadToManageBP
	// void SetIdOfSquadToManageBP(FName& SquadId);                                                                             // [0xa760860] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.HandleDifferentSquadSetBP
	// void HandleDifferentSquadSetBP();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.GetIdOfSquadToManageBP
	// FName GetIdOfSquadToManageBP();                                                                                          // [0x955fe2c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase.AddStatMatch
	// void AddStatMatch(UFortSurvivorSquadStatMatchBase* SetBonus);                                                            // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadSummaryStatItem
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   OFFSET(get<T>, {0x2E8, 1, 0, 0})
	CMember(UImage*)                                   Icon                                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Value                                                       OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Name                                                        OFFSET(get<T>, {0x300, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortSurvivorSquadSummaryStatItem.SetAttributeModifierAccumulation
	// void SetAttributeModifierAccumulation(FFortAttributeModifierAccumulation& Accumulation);                                 // [0xa76034c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortWorkerSetBonusIcon
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortWorkerSetBonusIcon : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FGameplayTag)                              GameplayTag                                                 OFFSET(getStruct<T>, {0x2E8, 4, 0, 0})
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   OFFSET(get<T>, {0x2EC, 1, 0, 0})
	CMember(UImage*)                                   Icon                                                        OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortWorkerSetBonusIcon.SetGameplayTag
	// void SetGameplayTag(FGameplayTag& InGameplayTag);                                                                        // [0xa7604b4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortWorkerSetBonusIcon.HandleDifferentGameplayTagSetBP
	// void HandleDifferentGameplayTagSetBP();                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase
/// Size: 0x0038 (0x0002E8 - 0x000320)
class UFortStatsOverviewDetailsBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(TArray<UFortAttributeListItem_NUI*>)       OverviewStats                                               OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(UFortAttributeList_NUI*)                   DetailedStats                                               OFFSET(get<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase.RequestStatsUpdate
	// void RequestStatsUpdate();                                                                                               // [0xa760198] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase.ListenForChanges
	// void ListenForChanges(bool bListen);                                                                                     // [0xa75fe68] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase.GetLocalPlayerId
	// FUniqueNetIdRepl GetLocalPlayerId();                                                                                     // [0xa75e638] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreData
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortLlamaStoreData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FText>)                             RandomLoadingTexts                                          OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FName)                                     NotEnoughCurrencyDialogCloseAction                          OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	CMember(UClass*)                                   InspectWidgetClass                                          OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     ShowOfferDelay                                              OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(UClass*)                                   StoreOpeningCardPackClass                                   OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UClass*)                                   UnopenedCardpacksModalClass                                 OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UClass*)                                   UnopenedCardpacksModalClass_Legacy                          OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreBase
/// Size: 0x00A0 (0x0004E0 - 0x000580)
class UFortLlamaStoreBase : public UFortDirectAcquisitionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(TArray<FOfferGroup>)                       OfferCategoriesToDisplay                                    OFFSET(get<T>, {0x4E0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       TencentDetailsActionData                                    OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       AddVBucksActionData                                         OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	DMember(bool)                                      bShouldShowAddVBucksAction                                  OFFSET(get<bool>, {0x510, 1, 0, 0})
	CMember(UDynamicEntryBox*)                         OfferEntryBox                                               OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   OfferButtonGroup                                            OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UFortLlamaStoreDetailsBase*)               OfferDetails                                                OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UFortLlamaStoreData*)                      StoreData                                                   OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_UnopenedLlamas                                       OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UFortLlamaStoreOfferInfo*)                 PendingPurchaseOffer                                        OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UCommonActivatablePanelLegacy*)            StoreOpeningCardPack                                        OFFSET(get<T>, {0x548, 8, 0, 0})
	DMember(bool)                                      bHideSoldOffers                                             OFFSET(get<bool>, {0x550, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.SwapToCardEnterState
	// void SwapToCardEnterState();                                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.SetupFocus
	// void SetupFocus();                                                                                                       // [0xa760ab4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.OnStoreStateChanged
	// void OnStoreStateChanged(EFortStoreState NewStoreState);                                                                 // [0xa760000] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.OnStorePurchaseCompleted
	// void OnStorePurchaseCompleted();                                                                                         // [0xa75ffd8] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.HandleTencentDetails
	// void HandleTencentDetails();                                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.HandleAddVBucks
	// void HandleAddVBucks();                                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase.CreateTencentPuchaseOpenModal
	// void CreateTencentPuchaseOpenModal();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy
/// Size: 0x0078 (0x000650 - 0x0006C8)
class UFortLlamaStoreBase_Legacy : public UFortDirectAcquisitionWidgetBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1736;

public:
	CMember(TArray<FOfferGroup>)                       OfferCategoriesToDisplay                                    OFFSET(get<T>, {0x650, 16, 0, 0})
	CMember(UDynamicEntryBox*)                         OfferEntryBox                                               OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 OfferButtonGroup                                            OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UFortLlamaStoreDetailsBase*)               OfferDetails                                                OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UFortLlamaStoreData*)                      StoreData                                                   OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_UnopenedLlamas                                       OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UFortLlamaStoreOfferInfo*)                 PendingPurchaseOffer                                        OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(UCommonActivatablePanelLegacy*)            StoreOpeningCardPack                                        OFFSET(get<T>, {0x690, 8, 0, 0})
	DMember(bool)                                      bHideSoldOffers                                             OFFSET(get<bool>, {0x698, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.SwapToCardEnterState
	// void SwapToCardEnterState();                                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.SetupFocus
	// void SetupFocus();                                                                                                       // [0xa760ac8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.OnStoreStateChanged
	// void OnStoreStateChanged(EFortStoreState NewStoreState);                                                                 // [0xa760080] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.OnStorePurchaseCompleted
	// void OnStorePurchaseCompleted();                                                                                         // [0xa75ffec] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy.CreateTencentPuchaseOpenModal
	// void CreateTencentPuchaseOpenModal();                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase
/// Size: 0x0020 (0x0002E8 - 0x000308)
class UFortLlamaStoreDetailsBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(UFortStoreFrontOfferInfo*)                 OfferInfo                                                   OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTileView*)                          ItemTileView                                                OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToSilver
	// void StartUpgradingToSilver();                                                                                           // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.StartUpgradingToGold
	// void StartUpgradingToGold();                                                                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.SetScrollWidget
	// void SetScrollWidget();                                                                                                  // [0xa7609f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.OnOfferInfoChanged
	// void OnOfferInfoChanged(int32_t CurrentOfferRarity);                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNotInCollectionBookCount
	// int32_t GetNotInCollectionBookCount();                                                                                   // [0x9820a40] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.GetNewItemCount
	// int32_t GetNewItemCount();                                                                                               // [0x98212b8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase.GetChoiceItemCount
	// int32_t GetChoiceItemCount();                                                                                            // [0xa73a864] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen
/// Size: 0x0010 (0x000830 - 0x000840)
class UFortLlamaStoreInspectionScreen : public UFortStoreFrontOfferDetailsWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2112;

public:
	CMember(UCommonTileView*)                          GrantedItemTileView                                         OFFSET(get<T>, {0x830, 8, 0, 0})
	DMember(bool)                                      bIsInChoiceViewMode                                         OFFSET(get<bool>, {0x838, 1, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen.IsItemChoicePack
	// bool IsItemChoicePack(UObject* ItemToCheck);                                                                             // [0xa75fd34] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetSelectedCardPack
	// UFortCardPackItem* GetSelectedCardPack();                                                                                // [0xa75e778] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen.GetInspectChoiceInputState
	// EInputActionState GetInspectChoiceInputState();                                                                          // [0xa75e4e4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortOpenCardPackModal
/// Size: 0x0040 (0x000570 - 0x0005B0)
class UFortOpenCardPackModal : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(UCommonListView*)                          CardPackList                                                OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      OpenAllButton                                               OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      CancelButton                                                OFFSET(get<T>, {0x580, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BPOnRequestOpenCardPack                                     OFFSET(getStruct<T>, {0x588, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortOpenCardPackModal_Legacy
/// Size: 0x0040 (0x000570 - 0x0005B0)
class UFortOpenCardPackModal_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(UCommonListView*)                          CardPackList                                                OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      OpenAllButton                                               OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      CancelButton                                                OFFSET(get<T>, {0x580, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BPOnRequestOpenCardPack                                     OFFSET(getStruct<T>, {0x588, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.StWHUD
/// Size: 0x0168 (0x000418 - 0x000580)
class UStWHUD : public UFortUIStateWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(UFortPickerData*)                          PickerData                                                  OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   EmotePickerClass                                            OFFSET(get<T>, {0x420, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ManagementTabsScreenClass                                   OFFSET(get<T>, {0x448, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TopBarClass                                                 OFFSET(get<T>, {0x468, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MissionActivationWidgetClass                                OFFSET(get<T>, {0x488, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PostGameScreenClass                                         OFFSET(get<T>, {0x4A8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefenderConfigPanelClass                                    OFFSET(get<T>, {0x4C8, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSTWHUDMenuStackChanged                                    OFFSET(getStruct<T>, {0x4E8, 16, 0, 0})
	DMember(int32_t)                                   ReticleExtensionSize                                        OFFSET(get<int32_t>, {0x4F8, 4, 0, 0})
	CMember(UCommonUserWidget*)                        BottomBarWidget                                             OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UOverlay*)                                 PersistentHUDContent                                        OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UCommonActivatableWidget*)                 TitleBar                                                    OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UOverlay*)                                 IndicatorContent                                            OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UFortActivatableChatWidget*)               ChatWidget_STW                                              OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   InspectionScreenClass                                       OFFSET(get<T>, {0x528, 32, 0, 0})
	CMember(UFortUINavigationManager*)                 NavigationManager                                           OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UFortWeaponReticleExtensionWidgetBase*)    CurrentCustomReticleExtension                               OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(TArray<UFortWeaponReticleExtensionWidgetBase*>) RecentReticleExtensions                                OFFSET(get<T>, {0x570, 16, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.StWHUD.NativeHandleWeaponEquipped
	// void NativeHandleWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);                                        // [0xa75ff14] Final|Native|Public  
	// Function /Script/SaveTheWorldUI.StWHUD.HandlePickerOpenRequest
	// void HandlePickerOpenRequest(EFortPickerMode Mode, int32_t InitialOption, bool bIgnoreFirstAccept);                      // [0xa75f9f8] Final|Native|Protected 
	// Function /Script/SaveTheWorldUI.StWHUD.HandleCursorModeChanged
	// void HandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget);           // [0xa75f814] Final|Native|Protected 
};

/// Class /Script/SaveTheWorldUI.FortTheaterSelect
/// Size: 0x0030 (0x000400 - 0x000430)
class UFortTheaterSelect : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(UOverlay*)                                 OverlayMain                                                 OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 DefaultRequiredCompletedQuest                               OFFSET(get<T>, {0x428, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortTheaterSelect.OnNavigationRight
	// void OnNavigationRight();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortTheaterSelect.OnNavigationLeft
	// void OnNavigationLeft();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortTheaterSelect.GetTheaterRecommendedRatingRange
	// bool GetTheaterRecommendedRatingRange(FString UniqueID, int32_t& Minimum, int32_t& Maximum);                             // [0xa75edd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortTheaterSelect_Legacy
/// Size: 0x0030 (0x000538 - 0x000568)
class UFortTheaterSelect_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
	CMember(UOverlay*)                                 OverlayMain                                                 OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 DefaultRequiredCompletedQuest                               OFFSET(get<T>, {0x560, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortTheaterSelect_Legacy.OnNavigationRight
	// void OnNavigationRight();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortTheaterSelect_Legacy.OnNavigationLeft
	// void OnNavigationLeft();                                                                                                 // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortTheaterSelect_Legacy.GetTheaterRecommendedRatingRange
	// bool GetTheaterRecommendedRatingRange(FString UniqueID, int32_t& Minimum, int32_t& Maximum);                             // [0xa75edd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortHomebaseNodeItemTooltip
/// Size: 0x0020 (0x000050 - 0x000070)
class UFortHomebaseNodeItemTooltip : public UFortItemTooltip
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/SaveTheWorldUI.FortUpgradeDetailsBase
/// Size: 0x0040 (0x0002E8 - 0x000328)
class UFortUpgradeDetailsBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(UMediaPlayer*)                             VideoPlayer                                                 OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortUpgradeInfo*)                         UpgradeInfo                                                 OFFSET(get<T>, {0x2F0, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.RequestPurchaseNode
	// void RequestPurchaseNode();                                                                                              // [0xa76015c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnUpgradeToDetailChanged
	// void OnUpgradeToDetailChanged();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnShowIcon
	// void OnShowIcon(UTexture2D* Icon);                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnScreenActive
	// void OnScreenActive();                                                                                                   // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeDetailsBase.OnPurchaseComplete
	// void OnPurchaseComplete();                                                                                               // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeInfo
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UFortUpgradeInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UFortHomebaseNodeItemDefinition*)          NodeItemDef                                                 OFFSET(get<T>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.IsUpgradeUnlocked
	// bool IsUpgradeUnlocked();                                                                                                // [0x8e33e7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.IsPreviewing
	// bool IsPreviewing();                                                                                                     // [0xa75fdcc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetVideo
	// UMediaSource* GetVideo();                                                                                                // [0xa75f4ec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetUpgradeUnlockLevel
	// int32_t GetUpgradeUnlockLevel();                                                                                         // [0x24f03f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetTitle
	// FText GetTitle();                                                                                                        // [0xa75f474] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetNextLevelTitle
	// FText GetNextLevelTitle();                                                                                               // [0xa75e710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetNextLevelDescription
	// FText GetNextLevelDescription();                                                                                         // [0xa75e6cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetNextLevel
	// int32_t GetNextLevel();                                                                                                  // [0xa75e6a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetMaxLevel
	// int32_t GetMaxLevel();                                                                                                   // [0xa75e690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetItemName
	// FText GetItemName();                                                                                                     // [0xa75e5f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetIcon
	// TWeakObjectPtr<UTexture2D*> GetIcon(EUpgradeInfoImageSize ImageSize);                                                    // [0xa75e234] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetDisplayAttributes
	// bool GetDisplayAttributes(TArray<FFortDisplayAttribute>& OutDisplayAttributes);                                          // [0xa75e140] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetDescription
	// FText GetDescription();                                                                                                  // [0xa75e0dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetCurrentLevel
	// int32_t GetCurrentLevel();                                                                                               // [0xa75e0c4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.GetCost
	// int32_t GetCost();                                                                                                       // [0xa75e038] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.ForwardPreview
	// void ForwardPreview();                                                                                                   // [0xa75dffc] Final|Native|Public|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.CanPreview
	// bool CanPreview();                                                                                                       // [0xa75dfa4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.CanAffordUpgrade
	// bool CanAffordUpgrade();                                                                                                 // [0xa75df90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeInfo.BackwardPreview
	// void BackwardPreview();                                                                                                  // [0xa75df54] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeScreenBase
/// Size: 0x00C8 (0x000538 - 0x000600)
class UFortUpgradeScreenBase : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	CMember(UFortTabListWidgetBase*)                   UpgradesTabSelector                                         OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UCommonTileView*)                          UpgradesTileView                                            OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         UpgradeTileViewLoadGuard                                    OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UFortUpgradeDetailsBase*)                  Details                                                     OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(TMap<FName, EHomebaseNodeType>)            TabToNodeTypeMap                                            OFFSET(get<T>, {0x558, 80, 0, 0})
	CMember(UFortItemDefinition*)                      UpgradesRespecToken                                         OFFSET(get<T>, {0x5A8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.UseUpgradesRespecToken
	// void UseUpgradesRespecToken();                                                                                           // [0xa7615f0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.TogglePreview
	// void TogglePreview();                                                                                                    // [0xa760adc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.RefreshFocus
	// void RefreshFocus();                                                                                                     // [0xa760134] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.OnUseUpgradesRespecTokenComplete
	// void OnUseUpgradesRespecTokenComplete();                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.OnUpgradeInfoChanged
	// void OnUpgradeInfoChanged();                                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.OnPurchaseNodeComplete
	// void OnPurchaseNodeComplete();                                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.IsPreviewing
	// bool IsPreviewing();                                                                                                     // [0xa75fde0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.HandleTabSelected
	// void HandleTabSelected(FName TabID);                                                                                     // [0xa75fcb4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.GetUpgradesRespecTokenCount
	// int32_t GetUpgradesRespecTokenCount();                                                                                   // [0xa75f4c8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.CanPreview
	// bool CanPreview();                                                                                                       // [0xa75dfc4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase.AreUpgradesRespecTokensAvailable
	// bool AreUpgradesRespecTokensAvailable();                                                                                 // [0xa75df2c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy
/// Size: 0x00C8 (0x000538 - 0x000600)
class UFortUpgradeScreenBase_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	CMember(UFortTabListWidgetBase_Legacy*)            UpgradesTabSelector                                         OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UCommonTileView*)                          UpgradesTileView                                            OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         UpgradeTileViewLoadGuard                                    OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UFortUpgradeDetailsBase*)                  Details                                                     OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(TMap<FName, EHomebaseNodeType>)            TabToNodeTypeMap                                            OFFSET(get<T>, {0x558, 80, 0, 0})
	CMember(UFortItemDefinition*)                      UpgradesRespecToken                                         OFFSET(get<T>, {0x5A8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.UseUpgradesRespecToken
	// void UseUpgradesRespecToken();                                                                                           // [0xa761604] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.TogglePreview
	// void TogglePreview();                                                                                                    // [0xa760b60] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.RefreshFocus
	// void RefreshFocus();                                                                                                     // [0xa760148] Final|Native|Protected|BlueprintCallable 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnUseUpgradesRespecTokenComplete
	// void OnUseUpgradesRespecTokenComplete();                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnUpgradeInfoChanged
	// void OnUpgradeInfoChanged();                                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.OnPurchaseNodeComplete
	// void OnPurchaseNodeComplete();                                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.IsPreviewing
	// bool IsPreviewing();                                                                                                     // [0xa75fde0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.HandleTabSelected
	// void HandleTabSelected(FName TabID);                                                                                     // [0xa75fcb4] Final|Native|Private 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.GetUpgradesRespecTokenCount
	// int32_t GetUpgradesRespecTokenCount();                                                                                   // [0xa75f4c8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.CanPreview
	// bool CanPreview();                                                                                                       // [0xa75dfc4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy.AreUpgradesRespecTokensAvailable
	// bool AreUpgradesRespecTokensAvailable();                                                                                 // [0xa75df2c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeTileBase
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortUpgradeTileBase : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(UFortUpgradeInfo*)                         UpgradeInfo                                                 OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeTileBase.OnDataRefresh
	// void OnDataRefresh(bool bUpgrade);                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/SaveTheWorldUI.FortUpgradeTileBase_Legacy
/// Size: 0x0010 (0x0014E0 - 0x0014F0)
class UFortUpgradeTileBase_Legacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(UFortUpgradeInfo*)                         UpgradeInfo                                                 OFFSET(get<T>, {0x14E8, 8, 0, 0})


	/// Functions
	// Function /Script/SaveTheWorldUI.FortUpgradeTileBase_Legacy.OnDataRefresh
	// void OnDataRefresh(bool bUpgrade);                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Struct /Script/SaveTheWorldUI.SquadSlotSortTypes
/// Size: 0x0010 (0x000000 - 0x000010)
class FSquadSlotSortTypes : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<ESquadSlotSortType>)                SortTypes                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.ExpeditionTabInfo
/// Size: 0x0120 (0x000000 - 0x000120)
class FExpeditionTabInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FName)                                     TabNameID                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabLabelInfo                                                OFFSET(getStruct<T>, {0x10, 272, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.ConsumedCriteriaData
/// Size: 0x0018 (0x000000 - 0x000018)
class FConsumedCriteriaData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     PowerMod                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             CriteriaNames                                               OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortHeroLoadoutHeroPickerTabConfiguration
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFortHeroLoadoutHeroPickerTabConfiguration : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FFortItemFilterDefinition)                 Filter                                                      OFFSET(getStruct<T>, {0x0, 96, 0, 0})
	SMember(FFortItemSorterDefinition)                 Sorter                                                      OFFSET(getStruct<T>, {0x60, 80, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortInGamePerkDisplayData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortInGamePerkDisplayData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EFortHeroPerkDisplayType)                  PerkDisplayType                                             OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Row                                                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Column                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortRefundDescriptionsData
/// Size: 0x0038 (0x000008 - 0x000040)
class FFortRefundDescriptionsData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   SearchString                                                OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   TargetReleaseVersion                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FText)                                     RefundDescriptionText                                       OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortQuestMapEventQuestSideBarData
/// Size: 0x0020 (0x000008 - 0x000028)
class FFortQuestMapEventQuestSideBarData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UFortQuestItemDefinition*)                 QuestItemDefinition                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FString>)                           EventFlags                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bShowAlways                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     CycleTime                                                   OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortLandingPageDefenderSummaryInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortLandingPageDefenderSummaryInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     SquadId                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     TheaterDisplayName                                          OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FString)                                   TheaterUniqueId                                             OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortAttributeModifierAccumulation
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAttributeModifierAccumulation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTag)                              GameplayTag                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayAttribute)                        Attribute                                                   OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	CMember(TEnumAsByte<EGameplayModOp>)               ModifierOp                                                  OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortSurvivorSquadSlottingFeedbackData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFortSurvivorSquadSlottingFeedbackData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      HadLeaderMatch                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      HasLeaderMatch                                              OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(TMap<FGameplayTag, int32_t>)               PreviousSetBonusCounts                                      OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FGameplayTag, int32_t>)               CurrentSetBonusCounts                                       OFFSET(get<T>, {0x58, 80, 0, 0})
	DMember(int32_t)                                   PreviousPersonalityMatchCount                               OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   CurrentPersonalityMatchCount                                OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButtonSummaryStats
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FFortSurvivorSquadSelectorButtonSummaryStats : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     SquadId                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayAttribute)                        FortAttribute                                               OFFSET(getStruct<T>, {0x8, 56, 0, 0})
	DMember(float)                                     FortAttributeValue                                          OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FGameplayAttribute)                        FortTeamAttribute                                           OFFSET(getStruct<T>, {0x48, 56, 0, 0})
	DMember(float)                                     TeamFortAttributeValue                                      OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     SquadPowerValue                                             OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FText)                                     FortAttributeName                                           OFFSET(getStruct<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButtonPersonalityMatches
/// Size: 0x0490 (0x000000 - 0x000490)
class FFortSurvivorSquadSelectorButtonPersonalityMatches : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	DMember(int32_t)                                   NumPersonalityMatches                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TotalNonLeaderSquadMembers                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      HavePersonalityIcons                                        OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FFortMultiSizeBrush)                       PersonalityIcons                                            OFFSET(getStruct<T>, {0x10, 1152, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortUISurvivorSquadStatMatch
/// Size: 0x04C0 (0x000000 - 0x0004C0)
class FFortUISurvivorSquadStatMatch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	SMember(FFortMultiSizeBrush)                       Icons                                                       OFFSET(getStruct<T>, {0x0, 1152, 0, 0})
	SMember(FText)                                     MagnitudeText                                               OFFSET(getStruct<T>, {0x480, 24, 0, 0})
	SMember(FText)                                     AttributeDisplayName                                        OFFSET(getStruct<T>, {0x498, 24, 0, 0})
	DMember(int32_t)                                   NumMembersMeetingCriteria                                   OFFSET(get<int32_t>, {0x4B0, 4, 0, 0})
	DMember(int32_t)                                   NumMembersRequired                                          OFFSET(get<int32_t>, {0x4B4, 4, 0, 0})
	CMember(EFortUISurvivorSquadMatchType)             MatchType                                                   OFFSET(get<T>, {0x4B8, 1, 0, 0})
	CMember(EFortBuffState)                            PreviewEffect                                               OFFSET(get<T>, {0x4B9, 1, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.OfferGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FOfferGroup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   MaxNumberToShow                                             OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.HomebaseNodeDisplayData
/// Size: 0x0078 (0x000008 - 0x000080)
class FHomebaseNodeDisplayData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               LargePreviewImage                                           OFFSET(get<T>, {0x38, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               SmallPreviewImage                                           OFFSET(get<T>, {0x58, 32, 0, 0})
	CMember(UMediaSource*)                             PreviewVideoMediaSource                                     OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Enum /Script/SaveTheWorldUI.EViewerNavigationDirection
/// Size: 0x03
enum EViewerNavigationDirection : uint8_t
{
	EViewerNavigationDirection__Previous0                                            = 0,
	EViewerNavigationDirection__Next1                                                = 1,
	EViewerNavigationDirection__EViewerNavigationDirection_MAX2                      = 2
};

/// Enum /Script/SaveTheWorldUI.EFortCollectionBookPopupButtonType
/// Size: 0x07
enum EFortCollectionBookPopupButtonType : uint8_t
{
	EFortCollectionBookPopupButtonType__Invalid0                                     = 0,
	EFortCollectionBookPopupButtonType__SelectItem1                                  = 1,
	EFortCollectionBookPopupButtonType__Preview2                                     = 2,
	EFortCollectionBookPopupButtonType__Purchase3                                    = 3,
	EFortCollectionBookPopupButtonType__Unslot4                                      = 4,
	EFortCollectionBookPopupButtonType__Back5                                        = 5,
	EFortCollectionBookPopupButtonType__EFortCollectionBookPopupButtonType_MAX6      = 6
};

/// Enum /Script/SaveTheWorldUI.ECollectionBookSectionNavTarget
/// Size: 0x03
enum ECollectionBookSectionNavTarget : uint8_t
{
	ECollectionBookSectionNavTarget__SlotSelect0                                     = 0,
	ECollectionBookSectionNavTarget__SlotPicker1                                     = 1,
	ECollectionBookSectionNavTarget__ECollectionBookSectionNavTarget_MAX2            = 2
};

/// Enum /Script/SaveTheWorldUI.EHeroLoadoutSlotType
/// Size: 0x05
enum EHeroLoadoutSlotType : uint8_t
{
	EHeroLoadoutSlotType__CommanderSlot0                                             = 0,
	EHeroLoadoutSlotType__TeamPerkSlot1                                              = 1,
	EHeroLoadoutSlotType__CrewSlot2                                                  = 2,
	EHeroLoadoutSlotType__GadgetSlot3                                                = 3,
	EHeroLoadoutSlotType__EHeroLoadoutSlotType_MAX4                                  = 4
};

/// Enum /Script/SaveTheWorldUI.ESquadSlotSortType
/// Size: 0x06
enum ESquadSlotSortType : uint8_t
{
	ESquadSlotSortType__ByRating0                                                    = 0,
	ESquadSlotSortType__ByLevel1                                                     = 1,
	ESquadSlotSortType__ByRarity2                                                    = 2,
	ESquadSlotSortType__ByBonus3                                                     = 3,
	ESquadSlotSortType__ByMatch4                                                     = 4,
	ESquadSlotSortType__ESquadSlotSortType_MAX5                                      = 5
};

/// Enum /Script/SaveTheWorldUI.EFrontEndRewardType
/// Size: 0x11
enum EFrontEndRewardType : uint8_t
{
	EFrontEndRewardType__Mission0                                                    = 0,
	EFrontEndRewardType__Quest1                                                      = 1,
	EFrontEndRewardType__EpicNewQuest2                                               = 2,
	EFrontEndRewardType__Expedition3                                                 = 3,
	EFrontEndRewardType__CollectionBook4                                             = 4,
	EFrontEndRewardType__MissionAlert5                                               = 5,
	EFrontEndRewardType__DifficultyIncrease6                                         = 6,
	EFrontEndRewardType__GiftBox7                                                    = 7,
	EFrontEndRewardType__ItemCache8                                                  = 8,
	EFrontEndRewardType__PhoenixLevelUp9                                             = 9,
	EFrontEndRewardType__EFrontEndRewardType_MAX10                                   = 10
};

/// Enum /Script/SaveTheWorldUI.ECollectionBookRewardStatus
/// Size: 0x04
enum ECollectionBookRewardStatus : uint8_t
{
	ECollectionBookRewardStatus__Unknown0                                            = 0,
	ECollectionBookRewardStatus__Available1                                          = 1,
	ECollectionBookRewardStatus__Claimed2                                            = 2,
	ECollectionBookRewardStatus__ECollectionBookRewardStatus_MAX3                    = 3
};

/// Enum /Script/SaveTheWorldUI.ECollectionBookPrimaryNavTarget
/// Size: 0x03
enum ECollectionBookPrimaryNavTarget : uint8_t
{
	ECollectionBookPrimaryNavTarget__Overview0                                       = 0,
	ECollectionBookPrimaryNavTarget__SectionTileView1                                = 1,
	ECollectionBookPrimaryNavTarget__ECollectionBookPrimaryNavTarget_MAX2            = 2
};

/// Enum /Script/SaveTheWorldUI.EFortExpeditionListSort
/// Size: 0x04
enum EFortExpeditionListSort : uint8_t
{
	EFortExpeditionListSort__ByRating0                                               = 0,
	EFortExpeditionListSort__ByDuration1                                             = 1,
	EFortExpeditionListSort__ByName2                                                 = 2,
	EFortExpeditionListSort__EFortExpeditionListSort_MAX3                            = 3
};

/// Enum /Script/SaveTheWorldUI.EFortRewardItemTypeSTW
/// Size: 0x05
enum EFortRewardItemTypeSTW : uint8_t
{
	EFortRewardItemTypeSTW__RewardedBadges0                                          = 0,
	EFortRewardItemTypeSTW__MissedBadges1                                            = 1,
	EFortRewardItemTypeSTW__RewardedItems2                                           = 2,
	EFortRewardItemTypeSTW__RewardedAccountItems3                                    = 3,
	EFortRewardItemTypeSTW__EFortRewardItemTypeSTW_MAX4                              = 4
};

/// Enum /Script/SaveTheWorldUI.EFortHeroPerkDisplayType
/// Size: 0x06
enum EFortHeroPerkDisplayType : uint8_t
{
	EFortHeroPerkDisplayType__CommanderPerk0                                         = 0,
	EFortHeroPerkDisplayType__TeamPerk1                                              = 1,
	EFortHeroPerkDisplayType__ClassPerk2                                             = 2,
	EFortHeroPerkDisplayType__StandardPerk3                                          = 3,
	EFortHeroPerkDisplayType__Max_None4                                              = 4,
	EFortHeroPerkDisplayType__EFortHeroPerkDisplayType_MAX5                          = 5
};

/// Enum /Script/SaveTheWorldUI.EFortAlterationOptionType
/// Size: 0x04
enum EFortAlterationOptionType : uint8_t
{
	EFortAlterationOptionType__Upgrade0                                              = 0,
	EFortAlterationOptionType__Replacement1                                          = 1,
	EFortAlterationOptionType__Max_NONE2                                             = 2,
	EFortAlterationOptionType__EFortAlterationOptionType_MAX3                        = 3
};

/// Enum /Script/SaveTheWorldUI.EFortMissionActivationWidgetSTWState
/// Size: 0x05
enum EFortMissionActivationWidgetSTWState : uint8_t
{
	EFortMissionActivationWidgetSTWState__Default0                                   = 0,
	EFortMissionActivationWidgetSTWState__StartObjective1                            = 1,
	EFortMissionActivationWidgetSTWState__IncreaseDifficulty2                        = 2,
	EFortMissionActivationWidgetSTWState__Invalid3                                   = 3,
	EFortMissionActivationWidgetSTWState__EFortMissionActivationWidgetSTWState_MAX4  = 4
};

/// Enum /Script/SaveTheWorldUI.ECalloutNavigationDirection
/// Size: 0x03
enum ECalloutNavigationDirection : uint8_t
{
	ECalloutNavigationDirection__Previous0                                           = 0,
	ECalloutNavigationDirection__Next1                                               = 1,
	ECalloutNavigationDirection__ECalloutNavigationDirection_MAX2                    = 2
};

/// Enum /Script/SaveTheWorldUI.EFortUISurvivorSquadMatchType
/// Size: 0x05
enum EFortUISurvivorSquadMatchType : uint8_t
{
	EFortUISurvivorSquadMatchType__Multi0                                            = 0,
	EFortUISurvivorSquadMatchType__Single1                                           = 1,
	EFortUISurvivorSquadMatchType__Summary2                                          = 2,
	EFortUISurvivorSquadMatchType__Max_None3                                         = 3,
	EFortUISurvivorSquadMatchType__EFortUISurvivorSquadMatchType_MAX4                = 4
};

/// Enum /Script/SaveTheWorldUI.EUpgradeInfoImageSize
/// Size: 0x03
enum EUpgradeInfoImageSize : uint8_t
{
	EUpgradeInfoImageSize__Small0                                                    = 0,
	EUpgradeInfoImageSize__Large1                                                    = 1,
	EUpgradeInfoImageSize__EUpgradeInfoImageSize_MAX2                                = 2
};

