
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
/// Size: 0x0080 (0x0002D0 - 0x000350)
class UFortQuestMapViewer : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(UCommonButtonBase*)                        Button_PageRight                                            ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PageLeft                                             ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Page                                                   ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Viewer                                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCanvasPanel*)                             CanvasPanel_Cosmetic                                        ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UFortQuestMapScreen*)                      ParentScreen                                                ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UFortQuestMapNodeLayout*)                  NodeLayout                                                  ___ OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortArmoryScreen
/// Size: 0x0000 (0x0003E8 - 0x0003E8)
class UFortArmoryScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
};

/// Class /Script/SaveTheWorldUI.FortArmoryScreen_Legacy
/// Size: 0x0000 (0x000558 - 0x000558)
class UFortArmoryScreen_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1368;

public:
};

/// Class /Script/SaveTheWorldUI.FortCommandScreen
/// Size: 0x0028 (0x0003E8 - 0x000410)
class UFortCommandScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FDataTableRowHandle)                       ShowAllStatsActionData                                      ___ OFFSET(get<T>, {0x3E8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectHeroActionData                                       ___ OFFSET(get<T>, {0x3F8, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookGenericRewardWidget
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	DMember(bool)                                      bUpdateVisibilityBasedOnRewardExistence                     ___ OFFSET(get<bool>, {0x2D0, 1, 1, 0})
	CMember(ESlateVisibility)                          VisibilityWhenNoRewardSpecified                             ___ OFFSET(get<T>, {0x2D4, 1, 0, 0})
	CMember(ESlateVisibility)                          VisibilityWhenRewardSpecified                               ___ OFFSET(get<T>, {0x2D5, 1, 0, 0})
	CMember(UFortCollectionBookRewardCardWidget*)      RewardCardWidget                                            ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(ECollectionBookRewardStatus)               RewardStatus                                                ___ OFFSET(get<T>, {0x2E0, 1, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookHelpWidget
/// Size: 0x0000 (0x000558 - 0x000558)
class UFortCollectionBookHelpWidget : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1368;

public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookItemPopupMenu
/// Size: 0x0008 (0x000540 - 0x000548)
class UFortCollectionBookItemPopupMenu : public UFortPopupMenu_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookOverviewWidget
/// Size: 0x0048 (0x0002D0 - 0x000318)
class UFortCollectionBookOverviewWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageSelected                                ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageClicked                                 ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	CMember(UFortCollectionBookPage*)                  LastSelectedPage                                            ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UFortCollectionBookCategory*)              LastSelectedCategory                                        ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(TArray<UFortCollectionBookCategory*>)      CategoryObjectPool                                          ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(UCommonTreeView*)                          PageTreeViewWidget                                          ___ OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPageCompletionRewardWidget
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UFortCollectionBookPageCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPageDetailsWidget
/// Size: 0x0068 (0x0002D0 - 0x000338)
class UFortCollectionBookPageDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(UCommonTextBlock*)                         PageCompletionText                                          ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortMaterialProgressBar*)                 ProgressBar                                                 ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortCollectionBookPageCompletionRewardWidget*) PageRewardWidget                                       ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      RewardDetailsButton                                         ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortCollectionBookPage*)                  DetailsPage                                                 ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RewardDetailsModalWidgetClass                               ___ OFFSET(get<T>, {0x2F8, 32, 0, 0})
	SMember(FText)                                     ModalTitle                                                  ___ OFFSET(get<T>, {0x318, 24, 0, 0})
	CMember(UFortCollectionBookRewardModalWidget*)     RewardDetailsModalWidget                                    ___ OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPageListWidget
/// Size: 0x0030 (0x0014C0 - 0x0014F0)
class UFortCollectionBookPageListWidget : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	CMember(UCommonTextBlock*)                         PageNameWidget                                              ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  AvailableSlotsWidget                                        ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PageCompletionWidget                                        ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  AssociatedPageOrCategory                                    ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	DMember(bool)                                      bIsExpanded                                                 ___ OFFSET(get<bool>, {0x14E8, 1, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPicker
/// Size: 0x0028 (0x000408 - 0x000430)
class UFortCollectionBookPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(UClass*)                                   MulchConfirmationModalClass                                 ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UFortAccountItem*)                         CurrentSlottedItem                                          ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UFortMulchConfirmationModalWidget*)        MulchConfirmationModal                                      ___ OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel
/// Size: 0x00C8 (0x0003E8 - 0x0004B0)
class UFortCollectionBookPrimaryPanel : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageSelectedDelegate                        ___ OFFSET(get<T>, {0x3E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageClickedDelegate                         ___ OFFSET(get<T>, {0x3F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookSectionClickedDelegate                      ___ OFFSET(get<T>, {0x408, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackActionRowHandle                                         ___ OFFSET(get<T>, {0x418, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SummonInfoPanelActionRowHandle                              ___ OFFSET(get<T>, {0x428, 16, 0, 0})
	CMember(UFortCollectionBookOverviewWidget*)        OverviewWidget                                              ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UCommonTileView*)                          SectionTileViewWidget                                       ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(ECollectionBookPrimaryNavTarget)           CurrentNavTarget                                            ___ OFFSET(get<T>, {0x448, 1, 0, 0})
	CMember(UFortCollectionBookSection*)               LastClickedSection                                          ___ OFFSET(get<T>, {0x450, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookPrimaryPanel_Legacy
/// Size: 0x00C0 (0x000520 - 0x0005E0)
class UFortCollectionBookPrimaryPanel_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageSelectedDelegate                        ___ OFFSET(get<T>, {0x520, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookPageClickedDelegate                         ___ OFFSET(get<T>, {0x530, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollectionBookSectionClickedDelegate                      ___ OFFSET(get<T>, {0x540, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackActionRowHandle                                         ___ OFFSET(get<T>, {0x550, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SummonInfoPanelActionRowHandle                              ___ OFFSET(get<T>, {0x560, 16, 0, 0})
	CMember(UFortCollectionBookOverviewWidget*)        OverviewWidget                                              ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonTileView*)                          SectionTileViewWidget                                       ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(ECollectionBookPrimaryNavTarget)           CurrentNavTarget                                            ___ OFFSET(get<T>, {0x580, 1, 0, 0})
	CMember(UFortCollectionBookSection*)               LastClickedSection                                          ___ OFFSET(get<T>, {0x588, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardDetailInspectWidget
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UFortCollectionBookProgressionRewardDetailInspectWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonNumericTextBlock*)                  LevelTextWidget                                             ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortRewardInfoWidget_Legacy*)             RewardWidget                                                ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UWidget*)                                  CheckmarkImage                                              ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsModalWidget
/// Size: 0x0060 (0x000558 - 0x0005B8)
class UFortCollectionBookProgressionRewardsModalWidget : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	CMember(TWeakObjectPtr<UClass*>)                   RewardWidgetClass                                           ___ OFFSET(get<T>, {0x558, 32, 0, 0})
	SMember(FMargin)                                   RewardWidgetPadding                                         ___ OFFSET(get<T>, {0x578, 16, 0, 0})
	DMember(int32_t)                                   NumRewardsToShow                                            ___ OFFSET(get<int32_t>, {0x588, 4, 0, 0})
	CMember(UVerticalBox*)                             RewardBoxWidget                                             ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UVerticalBox*)                             MajorRewardBoxWidget                                        ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UCommonTextBlock*)                         XPTextWidget                                                ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  LevelTextWidget                                             ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 ButtonGroup                                                 ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardsPreviewWidget
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortCollectionBookProgressionRewardsPreviewWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UFortCollectionBookProgressionRewardWidget*) NextRewardWidget                                          ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortCollectionBookProgressionRewardWidget*) NextMajorRewardWidget                                     ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressionRewardWidget
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortCollectionBookProgressionRewardWidget : public UFortCollectionBookGenericRewardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UCommonNumericTextBlock*)                  LevelTextWidget                                             ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         DisplayNameWidget                                           ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookProgressWidget
/// Size: 0x0058 (0x0002D0 - 0x000328)
class UFortCollectionBookProgressWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	DMember(int32_t)                                   CachedXPLevel                                               ___ OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	DMember(float)                                     CachedXPCompletionPct                                       ___ OFFSET(get<float>, {0x2D4, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RewardDetailsModalWidgetClass                               ___ OFFSET(get<T>, {0x2D8, 32, 0, 0})
	CMember(UFortCollectionBookProgressionRewardsPreviewWidget*) ProgressionRewardsPreviewWidget                   ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         XPTextWidget                                                ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  LevelTextWidget                                             ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      DetailsButtonWidget                                         ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UFortCollectionBookPageDetailsWidget*)     PageDetailsWidget                                           ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UFortCollectionBookProgressionRewardsModalWidget*) DetailsModalWidget                                  ___ OFFSET(get<T>, {0x320, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookRecycleSlotResultsWidget
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class UFortCollectionBookRecycleSlotResultsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(UPanelWidget*)                             RecycleResultsWidget                                        ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(EFortItemCardSize)                         ItemCardSize                                                ___ OFFSET(get<T>, {0x2D8, 1, 0, 0})
	CMember(UFortAccountItem*)                         ItemToRecycle                                               ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookRewardCardWidget
/// Size: 0x0088 (0x0002D0 - 0x000358)
class UFortCollectionBookRewardCardWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FMulticastInlineDelegate)                  OnDisplayedItemChangedEvent                                 ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(UFortMultiSizeItemCard*)                   ItemCardWidget                                              ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UWidget*)                                  MultiItemRewardOverlay                                      ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UWidget*)                                  ChoiceRewardOverlay                                         ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UWidget*)                                  CheckmarkImage                                              ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(float)                                     UpdateCardInterval                                          ___ OFFSET(get<float>, {0x300, 4, 0, 0})
	CMember(EFortItemCardSize)                         ItemCardSize                                                ___ OFFSET(get<T>, {0x304, 1, 0, 0})
	DMember(bool)                                      bDisplayAsRewardCard                                        ___ OFFSET(get<bool>, {0x305, 1, 0, 0})
	SMember(FFortRewardInfo)                           RepresentedRewards                                          ___ OFFSET(get<T>, {0x308, 48, 0, 0})
	CMember(TArray<UFortItem*>)                        DummyItems                                                  ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	SMember(FTimerHandle)                              UpdateCardTimer                                             ___ OFFSET(get<T>, {0x348, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookRewardModalWidget
/// Size: 0x0050 (0x000520 - 0x000570)
class UFortCollectionBookRewardModalWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(UCommonTextBlock*)                         TitleWidget                                                 ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UFortRewardInfoWidget_Legacy*)             RewardWidget                                                ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UFortMaterialProgressBar*)                 ProgressBar                                                 ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ProgressTextWidget                                          ___ OFFSET(get<T>, {0x538, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSectionCompletionRewardWidget
/// Size: 0x0050 (0x0002E8 - 0x000338)
class UFortCollectionBookSectionCompletionRewardWidget : public UFortCollectionBookGenericRewardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	CMember(UCommonButtonLegacy*)                      RewardDetailsButton                                         ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   RewardDetailsModalWidgetClass                               ___ OFFSET(get<T>, {0x2F0, 32, 0, 0})
	SMember(FText)                                     ModalTitle                                                  ___ OFFSET(get<T>, {0x310, 24, 0, 0})
	CMember(UFortCollectionBookRewardModalWidget*)     RewardDetailsModalWidget                                    ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UFortCollectionBookSection*)               Section                                                     ___ OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSectionPanel
/// Size: 0x01D0 (0x000520 - 0x0006F0)
class UFortCollectionBookSectionPanel : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	SMember(FMulticastInlineDelegate)                  OnSectionCloseRequest                                       ___ OFFSET(get<T>, {0x520, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreviewXPChangeEvent                                      ___ OFFSET(get<T>, {0x530, 16, 0, 0})
	CMember(UCommonTextBlock*)                         SectionNameTextWidget                                       ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UFortCollectionBookSlotView*)              SlotViewWidget                                              ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UFortCollectionBookPicker*)                SlotItemPicker                                              ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UWidget*)                                  ContextOverlayWidget                                        ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UTextBlock*)                               ContextTextWidget                                           ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortCollectionBookSectionCompletionRewardWidget*) SectionRewardWidget                                 ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UWidget*)                                  ItemAcquisitionSourceContainerWidget                        ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ItemAcquisitionSourceDescWidget                             ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ItemAcquisitionSourceDesc2Widget                            ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UWidget*)                                  ResearchRecruitUnslotContainerWidget                        ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PersonRecruitUnavailableMessageWidget                       ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ItemResearchUnavailableMessageWidget                        ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UCommonTextBlock*)                         UnslotUnavailableMessageWidget                              ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackActionRowHandle                                         ___ OFFSET(get<T>, {0x5A8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CloseActionRowHandle                                        ___ OFFSET(get<T>, {0x5B8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SlotItemActionRowHandle                                     ___ OFFSET(get<T>, {0x5C8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectItemActionRowHandle                                  ___ OFFSET(get<T>, {0x5D8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectCollectionBookItemActionRowHandle                    ___ OFFSET(get<T>, {0x5E8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectPreviewItemActionRowHandle                           ___ OFFSET(get<T>, {0x5F8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       OpenPickerActionRowHandle                                   ___ OFFSET(get<T>, {0x608, 16, 0, 0})
	SMember(FDataTableRowHandle)                       LogAllowedItemsActionRowHandle                              ___ OFFSET(get<T>, {0x618, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ResearchItemActionRowHandle                                 ___ OFFSET(get<T>, {0x628, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RecruitActionRowHandle                                      ___ OFFSET(get<T>, {0x638, 16, 0, 0})
	SMember(FDataTableRowHandle)                       UnslotItemActionRowHandle                                   ___ OFFSET(get<T>, {0x648, 16, 0, 0})
	CMember(ECollectionBookSectionNavTarget)           CurrentNavTarget                                            ___ OFFSET(get<T>, {0x658, 1, 0, 0})
	CMember(UFortCollectionBookSection*)               AssociatedSection                                           ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	DMember(bool)                                      bHasSummonedPanel                                           ___ OFFSET(get<bool>, {0x668, 1, 0, 0})
	SMember(FFortDialogExternalLatentActionHandle)     SlotConfirmationDialogLatentHandle                          ___ OFFSET(get<T>, {0x66C, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnShowItemDetailEvent                                       ___ OFFSET(get<T>, {0x670, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSlotItemConfirmEvent                                      ___ OFFSET(get<T>, {0x680, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnResearchItemConfirmEvent                                  ___ OFFSET(get<T>, {0x690, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnUnslotItemConfirmEvent                                    ___ OFFSET(get<T>, {0x6A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInspectItemEvent                                          ___ OFFSET(get<T>, {0x6B0, 16, 0, 0})
	CMember(UClass*)                                   SlotConfirmationModalClass                                  ___ OFFSET(get<T>, {0x6E8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSectionTileWidget
/// Size: 0x0070 (0x0014C0 - 0x001530)
class UFortCollectionBookSectionTileWidget : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5424;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SlotWidgetClass                                             ___ OFFSET(get<T>, {0x14C8, 32, 0, 0})
	SMember(FMargin)                                   SlotWidgetPadding                                           ___ OFFSET(get<T>, {0x14E8, 16, 0, 0})
	CMember(TEnumAsByte<EHorizontalAlignment>)         SlotWidgetHorizontalAlignment                               ___ OFFSET(get<T>, {0x14F8, 1, 0, 0})
	CMember(TEnumAsByte<EVerticalAlignment>)           SlotWidgetVerticalAlignment                                 ___ OFFSET(get<T>, {0x14F9, 1, 0, 0})
	DMember(int32_t)                                   MaxNumSlotsSupported                                        ___ OFFSET(get<int32_t>, {0x14FC, 4, 0, 0})
	CMember(UHorizontalBox*)                           SlotBoxWidget                                               ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UCommonTextBlock*)                         SectionNameWidget                                           ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UFortCollectionBookGenericRewardWidget*)   SectionRewardWidget                                         ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UFortCollectionBookSection*)               AssociatedSection                                           ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	CMember(TArray<UFortCollectionBookSlotWidget*>)    SlotWidgets                                                 ___ OFFSET(get<T>, {0x1520, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotButton
/// Size: 0x0040 (0x0014C0 - 0x001500)
class UFortCollectionBookSlotButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(UFortCollectionBookSlotWidget*)            CollectionBookSlotWidget                                    ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotConfirmationModal
/// Size: 0x0058 (0x000558 - 0x0005B0)
class UFortCollectionBookSlotConfirmationModal : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
	CMember(UFortAccountItem*)                         CurrentlySlottedItem                                        ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortAccountItem*)                         NewItemToSlot                                               ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SlottingDescription                                    ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortMultiSizeItemCard*)                   ItemCard_NewlySlottedItem                                   ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortCollectionBookRecycleSlotResultsWidget*) RecycleSlotResultsWidget                                 ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_SlotItem                                             ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Back                                                 ___ OFFSET(get<T>, {0x590, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotDetailsWidget
/// Size: 0x0000 (0x0002D0 - 0x0002D0)
class UFortCollectionBookSlotDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotView
/// Size: 0x00A0 (0x0002D0 - 0x000370)
class UFortCollectionBookSlotView : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(TWeakObjectPtr<UClass*>)                   CollectionBookButtonClass                                   ___ OFFSET(get<T>, {0x2D0, 32, 0, 0})
	CMember(UHorizontalBox*)                           CollectionBookButtonBox                                     ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 CollectionBookSlotButtonGroup                               ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(TArray<UFortCollectionBookSlotButton*>)    CollectionBookSlotButtons                                   ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	CMember(UFortCollectionBookSection*)               AssociatedSection                                           ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(int32_t)                                   PreviousSelectedButtonIdx                                   ___ OFFSET(get<int32_t>, {0x360, 4, 0, 0})
	DMember(int32_t)                                   CurrentSelectedButtonIdx                                    ___ OFFSET(get<int32_t>, {0x364, 4, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookSlotWidget
/// Size: 0x0128 (0x0002D0 - 0x0003F8)
class UFortCollectionBookSlotWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	CMember(EFortItemCardSize)                         ItemCardSize                                                ___ OFFSET(get<T>, {0x2E0, 1, 0, 0})
	DMember(bool)                                      bIsRewardCard                                               ___ OFFSET(get<bool>, {0x2E1, 1, 0, 0})
	CMember(UFortMultiSizeItemCard*)                   ItemCardWidget                                              ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UWidget*)                                  UnslottedOverlayWidget                                      ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UWidget*)                                  ReadyToSlotOverlayWidget                                    ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UWidget*)                                  UnslottedButReadyOverlayWidget                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	SMember(FName)                                     SlotRowName                                                 ___ OFFSET(get<T>, {0x308, 4, 0, 0})
	SMember(FText)                                     ItemAvailableToSlotText                                     ___ OFFSET(get<T>, {0x310, 24, 0, 0})
	SMember(FText)                                     NoItemsAvailableToSlotText                                  ___ OFFSET(get<T>, {0x328, 24, 0, 0})
	SMember(FText)                                     HigherQualityItemsAvailableToSlotAndUpgradeAvailableText    ___ OFFSET(get<T>, {0x340, 24, 0, 0})
	SMember(FText)                                     HigherQualityItemsAvailableToSlotAndEvolveAvailableText     ___ OFFSET(get<T>, {0x358, 24, 0, 0})
	SMember(FText)                                     HigherQualityItemsAvailableToSlotText                       ___ OFFSET(get<T>, {0x370, 24, 0, 0})
	SMember(FText)                                     ItemInSlotFullyUpgradedText                                 ___ OFFSET(get<T>, {0x388, 24, 0, 0})
	SMember(FText)                                     ItemInSlotCanBeUpgradedText                                 ___ OFFSET(get<T>, {0x3A0, 24, 0, 0})
	SMember(FText)                                     ItemInSlotCanBeEvolvedText                                  ___ OFFSET(get<T>, {0x3B8, 24, 0, 0})
	CMember(UFortItem*)                                SlottedItemRepresentation                                   ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookWidget
/// Size: 0x0030 (0x000558 - 0x000588)
class UFortCollectionBookWidget : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	CMember(UFortCollectionBookProgressWidget*)        ProgressWidget                                              ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UCommonActivatableWidgetSwitcher*)         MainWidgetSwitcher                                          ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortCollectionBookPrimaryPanel*)          PrimaryPanelWidget                                          ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UFortCollectionBookSectionPanel*)          SectionPanelWidget                                          ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	DMember(int32_t)                                   PrimaryPanelIdx                                             ___ OFFSET(get<int32_t>, {0x578, 4, 0, 0})
	DMember(int32_t)                                   SectionPanelIdx                                             ___ OFFSET(get<int32_t>, {0x57C, 4, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCollectionBookWidget_Legacy
/// Size: 0x0030 (0x000558 - 0x000588)
class UFortCollectionBookWidget_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	CMember(UFortCollectionBookProgressWidget*)        ProgressWidget                                              ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              MainWidgetSwitcher                                          ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortCollectionBookPrimaryPanel_Legacy*)   PrimaryPanelWidget                                          ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UFortCollectionBookSectionPanel*)          SectionPanelWidget                                          ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	DMember(int32_t)                                   PrimaryPanelIdx                                             ___ OFFSET(get<int32_t>, {0x578, 4, 0, 0})
	DMember(int32_t)                                   SectionPanelIdx                                             ___ OFFSET(get<int32_t>, {0x57C, 4, 0, 0})
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
/// Size: 0x0058 (0x000470 - 0x0004C8)
class UFortDirectAcquisitionWidgetBase : public UFortMtxStoreRootBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	DMember(bool)                                      bShowIneligible                                             ___ OFFSET(get<bool>, {0x478, 1, 0, 0})
	CMember(UUserWidget*)                              FirstOfferGenerated                                         ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_LargeTile                                     ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UGridPanel*)                               GridPanel_SmallTile                                         ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_ReorderedItems                                ___ OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_FeatureItems                                    ___ OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_DailyItems                                      ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBox_Main                                               ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortDirectAcquisitionWidgetBase_Legacy
/// Size: 0x0058 (0x0005E0 - 0x000638)
class UFortDirectAcquisitionWidgetBase_Legacy : public UFortMtxStoreRootBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1592;

public:
	DMember(bool)                                      bShowIneligible                                             ___ OFFSET(get<bool>, {0x5E8, 1, 0, 0})
	CMember(UUserWidget*)                              FirstOfferGenerated                                         ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_LargeTile                                     ___ OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UGridPanel*)                               GridPanel_SmallTile                                         ___ OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_ReorderedItems                                ___ OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_FeatureItems                                    ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_DailyItems                                      ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UScaleBox*)                                ScaleBox_Main                                               ___ OFFSET(get<T>, {0x630, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortExpeditionBuildSquadWidget
/// Size: 0x0060 (0x000520 - 0x000580)
class UFortExpeditionBuildSquadWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	SMember(FName)                                     CurrentSquadId                                              ___ OFFSET(get<T>, {0x528, 4, 0, 0})
	CMember(UFortSquadSlotsView*)                      ExpeditionSquadSlotsView                                    ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UFortSquadSlotDetailsPanel*)               ExpeditionSquadSlotDetails                                  ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UFortSquadSlotItemPicker*)                 ExpeditionSquadSlotPicker                                   ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UFortItemViewContext_ExpeditionSquadSlotsView*) ItemViewContext_ExpeditionSlotsView                    ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UFortItemViewContext_ExpeditionSquadSlotItemPicker*) ItemViewContext_ExpeditionSlotItemPicker          ___ OFFSET(get<T>, {0x550, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortExpeditionDetailsWidget
/// Size: 0x0040 (0x0002D0 - 0x000310)
class UFortExpeditionDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortSquadSlotsView*)                      ExpeditionSquadSlotsView                                    ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	SMember(FName)                                     CurrentSquadId                                              ___ OFFSET(get<T>, {0x2E0, 4, 0, 0})
	CMember(UFortItemViewContext_ExpeditionSquadSlotsView*) ItemViewContext_ExpeditionSlotsView                    ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortExpeditionExpiresWidget
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortExpeditionExpiresWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortExpeditionListItemWidget
/// Size: 0x0020 (0x0014C0 - 0x0014E0)
class UFortExpeditionListItemWidget : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortExpeditionListViewWidget
/// Size: 0x0030 (0x0002D0 - 0x000300)
class UFortExpeditionListViewWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	SMember(FMulticastInlineDelegate)                  OnExpeditionSelected                                        ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExpeditionListViewRefreshed                               ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	CMember(UCommonListView*)                          ExpeditionListView                                          ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FName)                                     CurrentTabNameId                                            ___ OFFSET(get<T>, {0x2F8, 4, 0, 0})
	CMember(EFortExpeditionListSort)                   SortType                                                    ___ OFFSET(get<T>, {0x2FC, 1, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortExpeditionMasterWidget
/// Size: 0x0020 (0x000520 - 0x000540)
class UFortExpeditionMasterWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
};

/// Class /Script/SaveTheWorldUI.FortExpeditionOverviewWidget
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class UFortExpeditionOverviewWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UClass*)                                   TabButtonType                                               ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(TArray<FExpeditionTabInfo>)                TabListRegistrationInfo                                     ___ OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(UFortTabListWidgetBase_Legacy*)            ExpeditionTabList                                           ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortExpeditionListViewWidget*)            ExpeditionListView                                          ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortExpeditionPickVehicleWidget
/// Size: 0x0008 (0x000520 - 0x000528)
class UFortExpeditionPickVehicleWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1320;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        ___ OFFSET(get<T>, {0x520, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortExpeditionReturnsWidget
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortExpeditionReturnsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(TWeakObjectPtr<UFortExpeditionItem*>)      Item                                                        ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortExpeditionRewardsWidget
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class UFortExpeditionRewardsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FMulticastInlineDelegate)                  OnAllExpeditionsCollected                                   ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(UCommonTileView*)                          RewardsTileView                                             ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(bool)                                      bPendingCollection                                          ___ OFFSET(get<bool>, {0x2E8, 1, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortExpeditionSummaryWidget
/// Size: 0x0058 (0x0002D0 - 0x000328)
class UFortExpeditionSummaryWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	DMember(int32_t)                                   AvailableExpeditions                                        ___ OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	DMember(int32_t)                                   CompletedExpeditions                                        ___ OFFSET(get<int32_t>, {0x2D4, 4, 0, 0})
	DMember(int32_t)                                   LandVehiclesTotal                                           ___ OFFSET(get<int32_t>, {0x2D8, 4, 0, 0})
	DMember(int32_t)                                   LandVehiclesAvailable                                       ___ OFFSET(get<int32_t>, {0x2DC, 4, 0, 0})
	DMember(int32_t)                                   AirVehiclesTotal                                            ___ OFFSET(get<int32_t>, {0x2E0, 4, 0, 0})
	DMember(int32_t)                                   AirVehiclesAvailable                                        ___ OFFSET(get<int32_t>, {0x2E4, 4, 0, 0})
	DMember(int32_t)                                   SeaVehiclesTotal                                            ___ OFFSET(get<int32_t>, {0x2E8, 4, 0, 0})
	DMember(int32_t)                                   SeaVehiclesAvailable                                        ___ OFFSET(get<int32_t>, {0x2EC, 4, 0, 0})
	DMember(int32_t)                                   LandExpeditionsTotal                                        ___ OFFSET(get<int32_t>, {0x2F0, 4, 0, 0})
	DMember(int32_t)                                   LandExpeditionsAvailable                                    ___ OFFSET(get<int32_t>, {0x2F4, 4, 0, 0})
	DMember(int32_t)                                   AirExpeditionsTotal                                         ___ OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	DMember(int32_t)                                   AirExpeditionsAvailable                                     ___ OFFSET(get<int32_t>, {0x2FC, 4, 0, 0})
	DMember(int32_t)                                   SeaExpeditionsTotal                                         ___ OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	DMember(int32_t)                                   SeaExpeditionsAvailable                                     ___ OFFSET(get<int32_t>, {0x304, 4, 0, 0})
	CMember(TArray<UFortExpeditionItem*>)              InProgressExpeditions                                       ___ OFFSET(get<T>, {0x308, 16, 0, 0})
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
/// Size: 0x0010 (0x0014C0 - 0x0014D0)
class UFortExpeditionVehicleTileItemWidget : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	CMember(TWeakObjectPtr<UObject*>)                  SquadId                                                     ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortFeatureUnlockWidget
/// Size: 0x0038 (0x000558 - 0x000590)
class UFortFeatureUnlockWidget : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	CMember(UCommonWidgetSwitcherLegacy*)              MediaSwitcher                                               ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UWidget*)                                  VideoContent                                                ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UWidget*)                                  ImageContent                                                ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UFortVideoPlayerWidget*)                   VideoWidget                                                 ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UCommonLazyImage*)                         ImageWidget                                                 ___ OFFSET(get<T>, {0x578, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortResultsWidgetSTW
/// Size: 0x00C8 (0x0003E8 - 0x0004B0)
class UFortResultsWidgetSTW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	DMember(int32_t)                                   AdditionalGrantedMissionPoints                              ___ OFFSET(get<int32_t>, {0x460, 4, 0, 0})
	CMember(TArray<UFortItem*>)                        RewardedBadges                                              ___ OFFSET(get<T>, {0x468, 16, 0, 0})
	CMember(TArray<UFortItem*>)                        MissedBadges                                                ___ OFFSET(get<T>, {0x478, 16, 0, 0})
	CMember(TArray<UFortItem*>)                        RewardedItems                                               ___ OFFSET(get<T>, {0x488, 16, 0, 0})
	CMember(TArray<UFortItem*>)                        RewardedAccountItems                                        ___ OFFSET(get<T>, {0x498, 16, 0, 0})
	CMember(UCommonUserWidget*)                        Radial_Picker                                               ___ OFFSET(get<T>, {0x4A8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSTWUIData
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortSTWUIData : public UFortSTWUIDataBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               UpgradesDisplayDataTable                                    ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRootViewportLayout_STW
/// Size: 0x0008 (0x000410 - 0x000418)
class UFortRootViewportLayout_STW : public UFortRootViewportLayout
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(UTalkingHead*)                             TalkingHead                                                 ___ OFFSET(get<T>, {0x410, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemAutoMulchActivatablePanel_STW
/// Size: 0x0058 (0x000558 - 0x0005B0)
class UFortItemAutoMulchActivatablePanel_STW : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
};

/// Class /Script/SaveTheWorldUI.FortItemCraftingOptionsActivatablePanel_STW
/// Size: 0x00A0 (0x000558 - 0x0005F8)
class UFortItemCraftingOptionsActivatablePanel_STW : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1528;

public:
	CMember(UFortSchematicItem*)                       BaseItem                                                    ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UFortSchematicItem*)                       TargetItem                                                  ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	DMember(int32_t)                                   MaxCraftingTierIndex                                        ___ OFFSET(get<int32_t>, {0x568, 4, 0, 0})
	DMember(int32_t)                                   TargetCraftingTierIndex                                     ___ OFFSET(get<int32_t>, {0x56C, 4, 0, 0})
	DMember(int32_t)                                   TargetPromotionTierIndex                                    ___ OFFSET(get<int32_t>, {0x570, 4, 0, 0})
	DMember(int32_t)                                   MaxQuantity                                                 ___ OFFSET(get<int32_t>, {0x574, 4, 0, 0})
	DMember(int32_t)                                   SelectedQuantity                                            ___ OFFSET(get<int32_t>, {0x578, 4, 0, 0})
	DMember(bool)                                      CanCraftTargetItem                                          ___ OFFSET(get<bool>, {0x57C, 1, 0, 0})
	CMember(UWidget*)                                  TierImageParent                                             ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UWidget*)                                  TierImageParent1                                            ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	CMember(UWidget*)                                  TierImageParent2                                            ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UWidget*)                                  TierImageParent3                                            ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	CMember(UWidget*)                                  TierImageParent4                                            ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UImage*)                                   TierImage                                                   ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UImage*)                                   TierImage1                                                  ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UImage*)                                   TierImage2                                                  ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UImage*)                                   TierImage3                                                  ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UImage*)                                   TierImage4                                                  ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemDetailsActivatablePanel_STW
/// Size: 0x0048 (0x0003E8 - 0x000430)
class UFortItemDetailsActivatablePanel_STW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(TWeakObjectPtr<UFortItem*>)                ItemToDetail                                                ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                ItemToCompareWith                                           ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UFortTooltipLoadingWrapper*)               ItemToDetailLoadingWrapper                                  ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         ItemToDetailLoadGuard                                       ___ OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemDetailsModeActivatablePanel_STW
/// Size: 0x0008 (0x000430 - 0x000438)
class UFortItemDetailsModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(UCommonWidgetSwitcherLegacy*)              DetailPanelWidgetSwitcher                                   ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemCompareModeActivatablePanel_STW
/// Size: 0x0010 (0x000430 - 0x000440)
class UFortItemCompareModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(UFortItemManagementItemDetailsPanel_STW*)  ComparisonModeLeftItemDetailsPanel                          ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UFortItemManagementItemDetailsPanel_STW*)  ComparisonModeRightItemDetailsPanel                         ___ OFFSET(get<T>, {0x438, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemMulchModeActivatablePanel_STW
/// Size: 0x0010 (0x000430 - 0x000440)
class UFortItemMulchModeActivatablePanel_STW : public UFortItemDetailsActivatablePanel_STW
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	CMember(UFortItemManagementItemDetailsPanel_STW*)  MulchModeItemDetailsPanel                                   ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UFortItemManagementMulchDetailsPanel_STW*) MulchDetailsPanel                                           ___ OFFSET(get<T>, {0x438, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemManagementCustomFilterModalWidget_STW
/// Size: 0x0068 (0x000558 - 0x0005C0)
class UFortItemManagementCustomFilterModalWidget_STW : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(TArray<EFortInventoryCustomFilter>)        AvailableFilters                                            ___ OFFSET(get<T>, {0x560, 16, 0, 0})
	CMember(TSet<EFortInventoryCustomFilter>)          LocalCustomFilterSet                                        ___ OFFSET(get<T>, {0x570, 80, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemManagementInventoryPanel_STW
/// Size: 0x01D8 (0x0002D0 - 0x0004A8)
class UFortItemManagementInventoryPanel_STW : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1192;

public:
	SMember(FName)                                     CurrentFilterName                                           ___ OFFSET(get<T>, {0x320, 4, 0, 0})
	CMember(EInventoryContentSortType)                 CurrentSortType                                             ___ OFFSET(get<T>, {0x324, 1, 0, 0})
	CMember(UClass*)                                   FilterTabButtonType                                         ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UClass*)                                   FilterTabButtonStyle                                        ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(TArray<FFortItemManagementInventoryFilterTabLabelInfo>) FilterTabLabelInfoArray                        ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(UFortTabListWidgetBase*)                   FilterTabList                                               ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         TileViewLoadGuard                                           ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UFortItemTileView*)                        TileView                                                    ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UPanelWidget*)                             CraftingPanel                                               ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         CraftingTileViewLoadGuard                                   ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UFortItemTileView*)                        CraftingTileView                                            ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UPanelWidget*)                             StoragePanel                                                ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         StorageTileViewLoadGuard                                    ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	CMember(UFortItemTileView*)                        StorageTileView                                             ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UCommonTextBlock*)                         MulchRestrictionReasonText                                  ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(EFortItemCardSize)                         SmallTileSize                                               ___ OFFSET(get<T>, {0x398, 1, 0, 0})
	CMember(EFortItemCardSize)                         LargeTileSize                                               ___ OFFSET(get<T>, {0x399, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               ___ OFFSET(get<T>, {0x39C, 8, 0, 0})
	DMember(bool)                                      bCanDragItems                                               ___ OFFSET(get<bool>, {0x3A4, 1, 0, 0})
	CMember(TArray<FQuickbarEquipSlotIndicesConfig>)   DefaultQuickbarEquipSlotIndicesConfigs                      ___ OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      QuickbarEquipSlotIndices                                    ___ OFFSET(get<T>, {0x3B8, 80, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UWidget*)                                  WidgetToCenter                                              ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemManagementItemTileButton_STW
/// Size: 0x0070 (0x001500 - 0x001570)
class UFortItemManagementItemTileButton_STW : public UFortItemTileButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5488;

public:
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	DMember(bool)                                      HasTheItemToDetail                                          ___ OFFSET(get<bool>, {0x1500, 1, 0, 0})
	DMember(bool)                                      HasTheItemToCompareDetailsWith                              ___ OFFSET(get<bool>, {0x1501, 1, 0, 0})
	DMember(bool)                                      HasAnItemMarkedForMulching                                  ___ OFFSET(get<bool>, {0x1502, 1, 0, 0})
	DMember(int32_t)                                   MulchCount                                                  ___ OFFSET(get<int32_t>, {0x1504, 4, 0, 0})
	CMember(UOverlay*)                                 NotCraftableOverlay                                         ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(UFortDynamicEntryBox*)                     EquipSlotOverlay                                            ___ OFFSET(get<T>, {0x1510, 8, 0, 0})
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             ___ OFFSET(get<T>, {0x1518, 8, 0, 0})
	DMember(bool)                                      ShowCollectionBookIndicator                                 ___ OFFSET(get<bool>, {0x1520, 1, 0, 0})
	DMember(bool)                                      ShowRefundIndicator                                         ___ OFFSET(get<bool>, {0x1521, 1, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            ___ OFFSET(get<T>, {0x1568, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemManagementItemDetailsPanel_STW
/// Size: 0x0020 (0x0003A8 - 0x0003C8)
class UFortItemManagementItemDetailsPanel_STW : public UFortItemDetailsHostPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	DMember(bool)                                      HasItemMarkedForMulching                                    ___ OFFSET(get<bool>, {0x3A8, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               ___ OFFSET(get<T>, {0x3AC, 8, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            ___ OFFSET(get<T>, {0x3C0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemManagementMulchDetailsPanel_STW
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class UFortItemManagementMulchDetailsPanel_STW : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UFortItemQuantityListBase*)                ResourceList                                                ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   HostItemManagementMulchPanel                                ___ OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemManagementModeDetailsPanel_STW
/// Size: 0x0030 (0x0002D0 - 0x000300)
class UFortItemManagementModeDetailsPanel_STW : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(UCommonWidgetSwitcherLegacy*)              ModeWidgetSwitcher                                          ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortItemDetailsActivatablePanel_STW*)     DetailsModeItemDetailsPanel                                 ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortItemDetailsActivatablePanel_STW*)     ComparisonModeItemDetailsPanel                              ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UFortItemDetailsActivatablePanel_STW*)     MulchModeItemDetailsPanel                                   ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItemManagementScreen_STW*>) HostItemManagementScreen                               ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemManagementScreen_STW
/// Size: 0x0158 (0x0003E8 - 0x000540)
class UFortItemManagementScreen_STW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	SMember(FMulticastInlineDelegate)                  OnItemViewRefreshed                                         ___ OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(EFortItemManagementMode)                   Mode                                                        ___ OFFSET(get<T>, {0x4C0, 1, 0, 0})
	CMember(EFortFrontendInventoryFilter)              FrontendInventoryFilter                                     ___ OFFSET(get<T>, {0x4C1, 1, 0, 0})
	DMember(bool)                                      bReadOnlyModeWIFE                                           ___ OFFSET(get<bool>, {0x4C2, 1, 0, 0})
	DMember(bool)                                      ConsumeItemRequestInProgress                                ___ OFFSET(get<bool>, {0x4C3, 1, 0, 0})
	CMember(UFortItemManagementInventoryPanel_STW*)    InventoryPanel                                              ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(UFortItemManagementModeDetailsPanel_STW*)  ModeDetailsPanel                                            ___ OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                ItemToDetail                                                ___ OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(UClass*)                                   MulchConfirmationModalClass                                 ___ OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(UClass*)                                   CustomFilterModalClass                                      ___ OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(UFortMulchConfirmationModalWidget*)        MulchConfirmationModal                                      ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UFortItemManagementCustomFilterModalWidget_STW*) CustomFilterModal                                     ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            ___ OFFSET(get<T>, {0x528, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.MainMenu_STW
/// Size: 0x0130 (0x0003E8 - 0x000518)
class UMainMenu_STW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1304;

public:
	SMember(FText)                                     DefaultHelpText                                             ___ OFFSET(get<T>, {0x3E8, 24, 0, 0})
	CMember(UCommonTextBlock*)                         Text_CountDownTimer                                         ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_LeaveExperience                                      ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonUserWidget*)                        Button_Leave                                                ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ContextualHelpText                                          ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_BackBoard                                            ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UBackgroundBlur*)                          BackgroundBlur                                              ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UBorder*)                                  BackgroundDarkener                                          ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ReportPlayer                                         ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Logout                                               ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Support                                              ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Exit                                                 ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Settings                                             ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CloseMenuAction                                             ___ OFFSET(get<T>, {0x460, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SwitchProfileAction                                         ___ OFFSET(get<T>, {0x470, 16, 0, 0})
	CMember(UClass*)                                   SettingsScreenClass                                         ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	SMember(FText)                                     LogoutTitle                                                 ___ OFFSET(get<T>, {0x488, 24, 0, 0})
	SMember(FText)                                     LogoutDescription                                           ___ OFFSET(get<T>, {0x4A0, 24, 0, 0})
	SMember(FText)                                     ExitTitle                                                   ___ OFFSET(get<T>, {0x4B8, 24, 0, 0})
	SMember(FText)                                     ExitDescription                                             ___ OFFSET(get<T>, {0x4D0, 24, 0, 0})
	DMember(bool)                                      bIsMainMenuOpen                                             ___ OFFSET(get<bool>, {0x4E8, 1, 0, 0})
	CMember(UFortCampaignTabsScreenBase*)              MainTabsScreen                                              ___ OFFSET(get<T>, {0x510, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortUIStateWidget_STWFrontend
/// Size: 0x0070 (0x000400 - 0x000470)
class UFortUIStateWidget_STWFrontend : public UFortUIStateWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	CMember(UTopBar_STW*)                              TopBar_STW                                                  ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonUserWidget*)                        BottomBar_STW                                               ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UFortActivatableChatWidget*)               ChatWidget_STW                                              ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortCampaignTabsScreenBase*>) MainTabsScreen                                           ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UClass*)                                   PlayerBannedScreenClass                                     ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(TArray<UClass*>)                           ScriptedActionsToRegister                                   ___ OFFSET(get<T>, {0x430, 16, 0, 0})
	CMember(TArray<EFortStoreState>)                   DeferredSquadAutoSlottingStoreStates                        ___ OFFSET(get<T>, {0x440, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortUIStateWidget_STWJoinServer
/// Size: 0x0028 (0x000400 - 0x000428)
class UFortUIStateWidget_STWJoinServer : public UFortUIStateWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(UFortRejoinWindowBase*)                    RejoinWindow                                                ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	SMember(FDataTableRowHandle)                       TutorialCompleteStatHandle                                  ___ OFFSET(get<T>, {0x408, 16, 0, 0})
	CMember(UClass*)                                   RejoinWindowClass                                           ___ OFFSET(get<T>, {0x418, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.TopBar_STW
/// Size: 0x0098 (0x0003E8 - 0x000480)
class UTopBar_STW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	CMember(UDataTable*)                               PhoenixSeasonDisplayInfoMap                                 ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(TMap<EFortUIFeatureStateReason, FText>)    ReasonDescriptions                                          ___ OFFSET(get<T>, {0x400, 80, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_MainMenu                                             ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UMainMenu_STW*)                            MainMenu                                                    ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UImage*)                                   Image_ActiveInvitesNotification                             ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Social                                               ___ OFFSET(get<T>, {0x468, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutGadgetPicker
/// Size: 0x0020 (0x000408 - 0x000428)
class UFortHeroLoadoutGadgetPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	CMember(TWeakObjectPtr<UFortCampaignHeroLoadoutItem*>) TargetLoadoutItem                                       ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	DMember(int32_t)                                   TargetSlotIndex                                             ___ OFFSET(get<int32_t>, {0x410, 4, 0, 0})
	CMember(TArray<UFortItem*>)                        TemporaryGadgetItemInstances                                ___ OFFSET(get<T>, {0x418, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutHeroPicker
/// Size: 0x00C0 (0x000408 - 0x0004C8)
class UFortHeroLoadoutHeroPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	CMember(UFortTabListWidgetBase_Legacy*)            ExternalFilterTabList                                       ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortCampaignHeroLoadoutItem*>) TargetLoadoutItem                                       ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	SMember(FName)                                     TargetSlotName                                              ___ OFFSET(get<T>, {0x418, 4, 0, 0})
	CMember(UClass*)                                   FilterTabButtonType                                         ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(TMap<FName, FFortTabButtonLabelInfo>)      TabButtonLabelInfoMap                                       ___ OFFSET(get<T>, {0x428, 80, 0, 0})
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
/// Size: 0x01B0 (0x0003E8 - 0x000598)
class UFortHeroLoadoutScreenBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1432;

public:
	CMember(UFortItemView*)                            ItemViewObject                                              ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputAction                                             ___ OFFSET(get<T>, {0x3F8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       HelpInputAction                                             ___ OFFSET(get<T>, {0x408, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CancelInputAction                                           ___ OFFSET(get<T>, {0x418, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ToggleDetailInputAction                                     ___ OFFSET(get<T>, {0x428, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClearAllInputAction                                         ___ OFFSET(get<T>, {0x438, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ShowAllStatsInputAction                                     ___ OFFSET(get<T>, {0x448, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectRootSlotsInputAction                                 ___ OFFSET(get<T>, {0x458, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CyclePickerSortModeInputAction                              ___ OFFSET(get<T>, {0x468, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InspectPickerInputAction                                    ___ OFFSET(get<T>, {0x478, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ToggleDescInputAction                                       ___ OFFSET(get<T>, {0x488, 16, 0, 0})
	DMember(bool)                                      AllowItemRotation                                           ___ OFFSET(get<bool>, {0x538, 1, 0, 0})
	DMember(bool)                                      AllowItemZooming                                            ___ OFFSET(get<bool>, {0x539, 1, 0, 0})
	DMember(bool)                                      AutomaticallyRegisterCameraView                             ___ OFFSET(get<bool>, {0x53A, 1, 0, 0})
	DMember(bool)                                      OverrideFixedCameras                                        ___ OFFSET(get<bool>, {0x53B, 1, 0, 0})
	CMember(UDataTable*)                               ActionDataTable                                             ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UWidgetAnimation*)                         AnimationToHideItemInfo                                     ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	DMember(bool)                                      bAutoShowDetails                                            ___ OFFSET(get<bool>, {0x550, 1, 0, 0})
	DMember(bool)                                      bItemDetailsHidden                                          ___ OFFSET(get<bool>, {0x551, 1, 0, 0})
	DMember(float)                                     HideItemInfoHeaderDurationSecs                              ___ OFFSET(get<float>, {0x554, 4, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutScreenLegacy
/// Size: 0x0000 (0x0006A0 - 0x0006A0)
class UFortHeroLoadoutScreenLegacy : public UFortActivatablePanelWithItemPreview
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutSlotButton
/// Size: 0x0040 (0x0014C0 - 0x001500)
class UFortHeroLoadoutSlotButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	SMember(FName)                                     SlotName                                                    ___ OFFSET(get<T>, {0x14C0, 4, 0, 0})
	DMember(int32_t)                                   SlotIndex                                                   ___ OFFSET(get<int32_t>, {0x14C4, 4, 0, 0})
	CMember(EHeroLoadoutSlotType)                      SlotType                                                    ___ OFFSET(get<T>, {0x14C8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestChangeHero                                         ___ OFFSET(get<T>, {0x14D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnContextMenuOpenChanged                                    ___ OFFSET(get<T>, {0x14E0, 16, 0, 0})
	CMember(UMenuAnchor*)                              ContextMenuAnchor                                           ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker
/// Size: 0x0008 (0x000408 - 0x000410)
class UFortHeroLoadoutTeamPerkPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(TWeakObjectPtr<UFortCampaignHeroLoadoutItem*>) TargetLoadoutItem                                       ___ OFFSET(get<T>, {0x408, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCampaignTabsScreenBase
/// Size: 0x0078 (0x0003E8 - 0x000460)
class UFortCampaignTabsScreenBase : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	CMember(TMap<EFortUIFeature, FName>)               FeaturesTabsMap                                             ___ OFFSET(get<T>, {0x3E8, 80, 0, 0})
	CMember(UHorizontalBox*)                           TopTabContainer                                             ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UFortTabListWidgetBase*)                   TopTabList                                                  ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UClass*)                                   MainTabSet                                                  ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  Switcher_TabContent                                         ___ OFFSET(get<T>, {0x458, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortCampaignTabsScreenBase_Legacy
/// Size: 0x0070 (0x000520 - 0x000590)
class UFortCampaignTabsScreenBase_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1424;

public:
	CMember(TMap<EFortUIFeature, FName>)               FeaturesTabsMap                                             ___ OFFSET(get<T>, {0x520, 80, 0, 0})
	CMember(UHorizontalBox*)                           TopTabContainer                                             ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortTabListWidgetBase_Legacy*)            TopTabList                                                  ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UClass*)                                   MainTabSet                                                  ___ OFFSET(get<T>, {0x580, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.StoreCardObject
/// Size: 0x0020 (0x000028 - 0x000048)
class UStoreCardObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FCard)                                     Card                                                        ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(int32_t)                                   OriginalIndex                                               ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortStoreSummary
/// Size: 0x0048 (0x000520 - 0x000568)
class UFortStoreSummary : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
	CMember(TArray<UStoreCardObject*>)                 StoreCardObjects                                            ___ OFFSET(get<T>, {0x528, 16, 0, 0})
	CMember(UCommonTileView*)                          TileView                                                    ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UClass*)                                   MulchConfirmationModalClass                                 ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UFortMulchConfirmationModalWidget*)        MulchConfirmationModal                                      ___ OFFSET(get<T>, {0x560, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemButton
/// Size: 0x0050 (0x0014C0 - 0x001510)
class UFortStoreSummaryItemButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	DMember(bool)                                      HasAnItemMarkedForMulching                                  ___ OFFSET(get<bool>, {0x14C0, 1, 0, 0})
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UStoreCardObject*)                         StoreCardObject                                             ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemButton_Legacy
/// Size: 0x0050 (0x0014C0 - 0x001510)
class UFortStoreSummaryItemButton_Legacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
	DMember(bool)                                      HasAnItemMarkedForMulching                                  ___ OFFSET(get<bool>, {0x14C0, 1, 0, 0})
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
	CMember(UStoreCardObject*)                         StoreCardObject                                             ___ OFFSET(get<T>, {0x14F8, 8, 0, 0})
	CMember(UFortInventoryContext*)                    InventoryContext                                            ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu
/// Size: 0x0008 (0x000540 - 0x000548)
class UFortStoreSummaryItemPopupMenu : public UFortPopupMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
};

/// Class /Script/SaveTheWorldUI.FortStoreSummaryItemPopupMenu_Legacy
/// Size: 0x0008 (0x000540 - 0x000548)
class UFortStoreSummaryItemPopupMenu_Legacy : public UFortPopupMenu_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
};

/// Class /Script/SaveTheWorldUI.FortStoreSummary_Legacy
/// Size: 0x0048 (0x000520 - 0x000568)
class UFortStoreSummary_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
	CMember(TArray<UStoreCardObject*>)                 StoreCardObjects                                            ___ OFFSET(get<T>, {0x528, 16, 0, 0})
	CMember(UCommonTileView*)                          TileView                                                    ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UClass*)                                   MulchConfirmationModalClass                                 ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UFortMulchConfirmationModalWidget*)        MulchConfirmationModal                                      ___ OFFSET(get<T>, {0x560, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutGadgetTileBase
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UFortHeroLoadoutGadgetTileBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonTextBlock*)                         Text_GadgetName                                             ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonLazyImage*)                         Image_Icon                                                  ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(URichTextBlock*)                           RichText_Description                                        ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UFortGadgetItemDefinition*)                GadgetToRepresent                                           ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutInGameScreenBase
/// Size: 0x0050 (0x000520 - 0x000570)
class UFortHeroLoadoutInGameScreenBase : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(TArray<FFortInGamePerkDisplayData>)        PerksDisplayData                                            ___ OFFSET(get<T>, {0x520, 16, 0, 0})
	CMember(UClass*)                                   TileClass                                                   ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Content                                           ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(UFortItemDetailsHostPanel*)                ItemDetailsHostPanel_Header                                 ___ OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(UGridPanel*)                               GridPanel_Perks                                             ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UFortHeroLoadoutGadgetTileBase*)           GadgetTile_Gadget1                                          ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UFortHeroLoadoutGadgetTileBase*)           GadgetTile_Gadget2                                          ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(TArray<UFortHeroLoadoutGadgetTileBase*>)   GadgetTiles                                                 ___ OFFSET(get<T>, {0x560, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortHeroLoadoutPerkTileBase
/// Size: 0x0088 (0x0002D0 - 0x000358)
class UFortHeroLoadoutPerkTileBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(TEnumAsByte<EFortBrushSize>)               BrushSize                                                   ___ OFFSET(get<T>, {0x2D0, 1, 0, 0})
	DMember(bool)                                      bShowSummaryDescription                                     ___ OFFSET(get<bool>, {0x2D1, 1, 0, 0})
	CMember(UCommonTextBlock*)                         Text_PerkName                                               ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(URichTextBlock*)                           Text_Description                                            ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UFortLazyImage*)                           Image_PerkIcon                                              ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UHorizontalBox*)                           Hbox_PerkDetails                                            ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FText)                                     ActiveText                                                  ___ OFFSET(get<T>, {0x2F8, 24, 0, 0})
	SMember(FText)                                     InactiveText                                                ___ OFFSET(get<T>, {0x310, 24, 0, 0})
	DMember(float)                                     InactiveOpacity                                             ___ OFFSET(get<float>, {0x328, 4, 0, 0})
	DMember(float)                                     ActiveOpacity                                               ___ OFFSET(get<float>, {0x32C, 4, 0, 0})
	CMember(UFortAbilityKit*)                          AbilityKit                                                  ___ OFFSET(get<T>, {0x330, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortAlterationModOptinScreenBase
/// Size: 0x0018 (0x000520 - 0x000538)
class UFortAlterationModOptinScreenBase : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	CMember(UFortItem*)                                ItemToOptin                                                 ___ OFFSET(get<T>, {0x520, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortAlterationModScreenBase
/// Size: 0x0060 (0x000558 - 0x0005B8)
class UFortAlterationModScreenBase : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1464;

public:
	CMember(UFortAlterationsWidget*)                   AlterationsToEdit                                           ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UFortAlterationOptionsBase*)               AlterationSlotOptions                                       ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UFortItemDetailsHostPanel*)                ItemInspectionMainItemDetailsHostPanel                      ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(UFortItemDetailsHostPanel*)                AlterationsExtraDetailsPanel                                ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UClass*)                                   AlterationModOptinScreenClass                               ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputAction                                             ___ OFFSET(get<T>, {0x580, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortAlterableItem*>)       AlterableItem                                               ___ OFFSET(get<T>, {0x590, 8, 0, 0})
	CMember(UFortAlterationOption*)                    CurrentAlterationOptionInternal                             ___ OFFSET(get<T>, {0x598, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemInspectionScreen
/// Size: 0x00F8 (0x0006A0 - 0x000798)
class UFortItemInspectionScreen : public UFortActivatablePanelWithItemPreview
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1944;

public:
	CMember(EFortItemInspectionMode)                   CurrentInspectMode                                          ___ OFFSET(get<T>, {0x6A0, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                InspectedItem                                               ___ OFFSET(get<T>, {0x6A4, 8, 0, 0})
	DMember(bool)                                      UpgradeAllowed                                              ___ OFFSET(get<bool>, {0x6AC, 1, 0, 0})
	DMember(bool)                                      EvolveAllowed                                               ___ OFFSET(get<bool>, {0x6AD, 1, 0, 0})
	DMember(bool)                                      FavoriteAllowed                                             ___ OFFSET(get<bool>, {0x6AE, 1, 0, 0})
	DMember(bool)                                      RarityUpgradingAllowed                                      ___ OFFSET(get<bool>, {0x6AF, 1, 0, 0})
	DMember(bool)                                      IsPreviewing                                                ___ OFFSET(get<bool>, {0x6B0, 1, 0, 0})
	DMember(bool)                                      bHasSeenRefundHelpPrompt                                    ___ OFFSET(get<bool>, {0x6B1, 1, 0, 0})
	CMember(UFortItemInspectCycleWidget*)              CycleWidget                                                 ___ OFFSET(get<T>, {0x6B8, 8, 0, 0})
	SMember(FGameplayTagQuery)                         InspectAnimationTag                                         ___ OFFSET(get<T>, {0x6C0, 72, 0, 0})
	CMember(UClass*)                                   AlterationModOptinScreenClass                               ___ OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(UClass*)                                   AlterationModScreenClass                                    ___ OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(TWeakObjectPtr<UDataTable*>)               RefundDescriptionsDataTable                                 ___ OFFSET(get<T>, {0x718, 32, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortItemInspectCycleWidget
/// Size: 0x0050 (0x0002D0 - 0x000320)
class UFortItemInspectCycleWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FMulticastInlineDelegate)                  OnItemToRepresentChanged                                    ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortItemTileView*>)        ItemTileView                                                ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItem*>)                ItemToRepresent                                             ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousItemActionRowHandle                                 ___ OFFSET(get<T>, {0x2F0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextItemActionRowHandle                                     ___ OFFSET(get<T>, {0x300, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortAlterationOption
/// Size: 0x0040 (0x0014C0 - 0x001500)
class UFortAlterationOption : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	SMember(FAlterationOption)                         AlterationOption                                            ___ OFFSET(get<T>, {0x14C8, 48, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortAlterationOptionsBase
/// Size: 0x00A0 (0x0002D0 - 0x000370)
class UFortAlterationOptionsBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(UClass*)                                   AlterationOptionClass                                       ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 AlterationOptionButtons                                     ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UFortAlterableItem*)                       Item                                                        ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	DMember(int32_t)                                   SlotIndex                                                   ___ OFFSET(get<int32_t>, {0x318, 4, 0, 0})
	DMember(bool)                                      bUpgradeOptionExists                                        ___ OFFSET(get<bool>, {0x31C, 1, 0, 0})
	SMember(FAlterationOption)                         UpgradeOption                                               ___ OFFSET(get<T>, {0x320, 48, 0, 0})
	CMember(TArray<FAlterationOption>)                 RespecOptions                                               ___ OFFSET(get<T>, {0x350, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortMissionActivationInfoSTW
/// Size: 0x0150 (0x000028 - 0x000178)
class UFortMissionActivationInfoSTW : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	DMember(bool)                                      bIsMultiplayer                                              ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(AFortPlayerController*)                    FortPC                                                      ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(AFortGameStateZone*)                       GameStateZone                                               ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UCurveFloat*)                              DifficultyIncreaseBluGloCurve                               ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortMissionActivationWidgetSTWPanel
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class UFortMissionActivationWidgetSTWPanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UFortMissionActivationInfoSTW*)            InfoObject                                                  ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortMissionActivationWidgetSTW
/// Size: 0x0050 (0x0003E8 - 0x000438)
class UFortMissionActivationWidgetSTW : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(UFortMissionActivationInfoSTW*)            InfoObject                                                  ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ReadyUpObjectiveHandle                                      ___ OFFSET(get<T>, {0x3F0, 32, 0, 0})
	CMember(UCurveFloat*)                              DifficultyIncreaseBluGloCurve                               ___ OFFSET(get<T>, {0x410, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortOutpostScreen
/// Size: 0x0000 (0x0003E8 - 0x0003E8)
class UFortOutpostScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
};

/// Class /Script/SaveTheWorldUI.FortCampaignPlayFlow
/// Size: 0x0000 (0x0003E8 - 0x0003E8)
class UFortCampaignPlayFlow : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
};

/// Class /Script/SaveTheWorldUI.FortJournalQuestDetails
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class UFortJournalQuestDetails : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UFortQuestItem*)                           CurrentQuest                                                ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortJournalQuestProgressBar
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortJournalQuestProgressBar : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(TWeakObjectPtr<UFortQuestObjectiveInfo*>)  QuestObjectiveInfo                                          ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortLayoutQuestNode
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class UFortLayoutQuestNode : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UFortQuestMapQuestTile*)                   QuestTile                                                   ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(int32_t)                                   QuestNodeIndex                                              ___ OFFSET(get<int32_t>, {0x2D8, 4, 0, 0})
	SMember(FFortQuestMapNode)                         QuestMapNode                                                ___ OFFSET(get<T>, {0x2E0, 24, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortLayoutQuestNode_Legacy
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class UFortLayoutQuestNode_Legacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UFortQuestMapQuestTile_Legacy*)            QuestTile                                                   ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(int32_t)                                   QuestNodeIndex                                              ___ OFFSET(get<int32_t>, {0x2D8, 4, 0, 0})
	SMember(FFortQuestMapNode)                         QuestMapNode                                                ___ OFFSET(get<T>, {0x2E0, 24, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortProgressArrowButton
/// Size: 0x0040 (0x001470 - 0x0014B0)
class UFortProgressArrowButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:
	SMember(FSlateColor)                               ArrowColor                                                  ___ OFFSET(get<T>, {0x1470, 20, 0, 0})
	SMember(FSlateColor)                               HoverColor                                                  ___ OFFSET(get<T>, {0x1484, 20, 0, 0})
	SMember(FSlateColor)                               ShadowColor                                                 ___ OFFSET(get<T>, {0x1498, 20, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortProgressArrowButton_Legacy
/// Size: 0x0040 (0x0014C0 - 0x001500)
class UFortProgressArrowButton_Legacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	SMember(FSlateColor)                               ArrowColor                                                  ___ OFFSET(get<T>, {0x14C0, 20, 0, 0})
	SMember(FSlateColor)                               HoverColor                                                  ___ OFFSET(get<T>, {0x14D4, 20, 0, 0})
	SMember(FSlateColor)                               ShadowColor                                                 ___ OFFSET(get<T>, {0x14E8, 20, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestExpiresWidget
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortQuestExpiresWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(TWeakObjectPtr<UFortQuestItem*>)           Item                                                        ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapCosmeticListWidget
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortQuestMapCosmeticListWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
};

/// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanelBase
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class UFortQuestMapDetailsPanelBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(UClass*)                                   QuestConversationClass                                      ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(float)                                     QuestUpdateDelayTime                                        ___ OFFSET(get<float>, {0x2D8, 4, 0, 0})
	SMember(FTimerHandle)                              QuestUpdateTimerHandle                                      ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanel
/// Size: 0x00B0 (0x0002E8 - 0x000398)
class UFortQuestMapDetailsPanel : public UFortQuestMapDetailsPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	SMember(FDataTableRowHandle)                       PlayButtonTriggeringAction                                  ___ OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<UClass*>)                           PriorityActivatableWidgetClassList                          ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(UClass*)                                   CurrentQuestBorder                                          ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UClass*)                                   CompletedQuestBorder                                        ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UFortJournalQuestDetails*)                 Panel_JournalDetails                                        ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestTitle                                             ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestDescription                                       ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Header                                                 ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_NotOwnedHeader                                         ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_InactiveQuestName                                      ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UImage*)                                   Image_QuestIcon                                             ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UCommonListView*)                          List_Tasks                                                  ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_Header                                               ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_Body                                               ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UFortRewardInfoWidget*)                    Widget_FutureQuestRewardInfo                                ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Quest                                             ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_NoQuest                                           ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(TArray<UFortQuestObjectiveInfo*>)          VisibleObjectives                                           ___ OFFSET(get<T>, {0x380, 16, 0, 0})
	CMember(UFortQuestItem*)                           CurrentQuestItem                                            ___ OFFSET(get<T>, {0x390, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapDetailsPanel_Legacy
/// Size: 0x00B0 (0x0002E8 - 0x000398)
class UFortQuestMapDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	SMember(FDataTableRowHandle)                       PlayButtonTriggeringAction                                  ___ OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(TArray<UClass*>)                           PriorityActivatablePanelClassList                           ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(UClass*)                                   CurrentQuestBorder                                          ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UClass*)                                   CompletedQuestBorder                                        ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UFortJournalQuestDetails*)                 Panel_JournalDetails                                        ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestTitle                                             ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestDescription                                       ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Header                                                 ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_NotOwnedHeader                                         ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_InactiveQuestName                                      ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UImage*)                                   Image_QuestIcon                                             ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UCommonListView*)                          List_Tasks                                                  ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_Header                                               ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_Body                                               ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UFortRewardInfoWidget_Legacy*)             Widget_FutureQuestRewardInfo                                ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_Quest                                             ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_NoQuest                                           ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(TArray<UFortQuestObjectiveInfo*>)          VisibleObjectives                                           ___ OFFSET(get<T>, {0x380, 16, 0, 0})
	CMember(UFortQuestItem*)                           CurrentQuestItem                                            ___ OFFSET(get<T>, {0x390, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventCallout
/// Size: 0x0138 (0x0003E8 - 0x000520)
class UFortQuestMapEventCallout : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	CMember(UFortBangWrapper_NUI*)                     BangWrapper_GoButton                                        ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UFortProgressArrowButton*)                 Button_LeftNav                                              ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UFortProgressArrowButton*)                 Button_RightNav                                             ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_SwitchMode                                           ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UFortQuestMapNewBangWrapper*)              BangWrapper_Arrow                                           ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UFortQuestMapEventSequence*)               Sequence_EventProgress                                      ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_NavButtons                                    ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Header                                                 ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Body                                                   ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UImage*)                                   Image_Callout                                               ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UFortBangWrapper_NUI*)                     BangWrapper_UnHover                                         ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(USoundBase*)                               DefaultSound                                                ___ OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 DefaultRequiredCompletedQuest                               ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(USoundBase*)                               OverrideSound                                               ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UAudioComponent*)                          SoundLoop                                                   ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UFortQuestMapData*)                        QuestMapData                                                ___ OFFSET(get<T>, {0x4A8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventCallout_Legacy
/// Size: 0x0138 (0x000558 - 0x000690)
class UFortQuestMapEventCallout_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1680;

public:
	CMember(UFortBangWrapper_NUI*)                     BangWrapper_GoButton                                        ___ OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(UFortProgressArrowButton_Legacy*)          Button_LeftNav                                              ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UFortProgressArrowButton_Legacy*)          Button_RightNav                                             ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_SwitchMode                                           ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UFortQuestMapNewBangWrapper_Legacy*)       BangWrapper_Arrow                                           ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UFortQuestMapEventSequence*)               Sequence_EventProgress                                      ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_NavButtons                                    ___ OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Header                                                 ___ OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Body                                                   ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(UImage*)                                   Image_Callout                                               ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UFortBangWrapper_NUI*)                     BangWrapper_UnHover                                         ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(USoundBase*)                               DefaultSound                                                ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 DefaultRequiredCompletedQuest                               ___ OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(USoundBase*)                               OverrideSound                                               ___ OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(UAudioComponent*)                          SoundLoop                                                   ___ OFFSET(get<T>, {0x610, 8, 0, 0})
	CMember(UFortQuestMapData*)                        QuestMapData                                                ___ OFFSET(get<T>, {0x618, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel
/// Size: 0x0098 (0x0002E8 - 0x000380)
class UFortQuestMapEventDetailsPanel : public UFortQuestMapDetailsPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(UClass*)                                   CurrentQuestBorder                                          ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UClass*)                                   CompletedQuestBorder                                        ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UClass*)                                   FutureQuestBorder                                           ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_QuestContainer                                         ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_CompletedQuestContainer                                ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  Switcher_Quests                                             ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_NextQuest                                            ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestName                                              ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestDescription                                       ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonListView*)                          List_Tasks                                                  ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   Image_QuestIcon                                             ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_SideBar                                           ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UDataTable*)                               EventQuestTable                                             ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UClass*)                                   SideBarEntryClass                                           ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 UnlockEventQuestDefinition                                  ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 CurrentQuestDef                                             ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(TArray<UFortQuestObjectiveInfo*>)          VisibleObjectives                                           ___ OFFSET(get<T>, {0x370, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventDetailsPanel_Legacy
/// Size: 0x0098 (0x0002E8 - 0x000380)
class UFortQuestMapEventDetailsPanel_Legacy : public UFortQuestMapDetailsPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(UClass*)                                   CurrentQuestBorder                                          ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UClass*)                                   CompletedQuestBorder                                        ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UClass*)                                   FutureQuestBorder                                           ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_QuestContainer                                         ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UVerticalBox*)                             VBox_CompletedQuestContainer                                ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_Quests                                             ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_NextQuest                                            ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestName                                              ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_QuestDescription                                       ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonListView*)                          List_Tasks                                                  ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   Image_QuestIcon                                             ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_SideBar                                           ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UDataTable*)                               EventQuestTable                                             ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UClass*)                                   SideBarEntryClass                                           ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 UnlockEventQuestDefinition                                  ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 CurrentQuestDef                                             ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(TArray<UFortQuestObjectiveInfo*>)          VisibleObjectives                                           ___ OFFSET(get<T>, {0x370, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventDot
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class UFortQuestMapEventDot : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UImage*)                                   Image_ActiveDot                                             ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventSequence
/// Size: 0x0018 (0x0002D0 - 0x0002E8)
class UFortQuestMapEventSequence : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(UHorizontalBox*)                           HorizontalBox_DotBox                                        ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UClass*)                                   DotWidgetClass                                              ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventSideEntry
/// Size: 0x0060 (0x0002D0 - 0x000330)
class UFortQuestMapEventSideEntry : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(UCommonAnimatedSwitcher*)                  Switcher_Rewards                                            ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonListView*)                          List_SideTasks                                              ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SideQuestTitle                                         ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UImage*)                                   Image_Arrow                                                 ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UImage*)                                   Image_QuestComplete                                         ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FMargin)                                   RewardPadding                                               ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(UFortQuestItemDefinition*)                 CurrentQuestItemDef                                         ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UFortQuestItem*)                           CurrentQuestItem                                            ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	SMember(FTimerHandle)                              RewardAnimationTimer                                        ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(TArray<UFortQuestObjectiveInfo*>)          SideQuestObjectives                                         ___ OFFSET(get<T>, {0x320, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapEventSideEntry_Legacy
/// Size: 0x0070 (0x0002D0 - 0x000340)
class UFortQuestMapEventSideEntry_Legacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_Rewards                                            ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonListView*)                          List_SideTasks                                              ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SideQuestTitle                                         ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UImage*)                                   Image_Arrow                                                 ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UImage*)                                   Image_QuestComplete                                         ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FMargin)                                   RewardPadding                                               ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
	CMember(UFortQuestItemDefinition*)                 CurrentQuestItemDef                                         ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UFortQuestItem*)                           CurrentQuestItem                                            ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(TArray<UCommonWidgetSwitcherLegacy*>)      RewardSwitchers                                             ___ OFFSET(get<T>, {0x318, 16, 0, 0})
	SMember(FTimerHandle)                              RewardAnimationTimer                                        ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(TArray<UFortQuestObjectiveInfo*>)          SideQuestObjectives                                         ___ OFFSET(get<T>, {0x330, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNewBangWrapper
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortQuestMapNewBangWrapper : public UFortBangWrapper_NUI
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UCommonAnimatedSwitcher*)                  Switcher_Bangs                                              ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNewBangWrapper_Legacy
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortQuestMapNewBangWrapper_Legacy : public UFortBangWrapper_NUI
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UCommonWidgetSwitcherLegacy*)              Switcher_Bangs                                              ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNodeLayout
/// Size: 0x0068 (0x0002A8 - 0x000310)
class UFortQuestMapNodeLayout : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UPanelWidget*)                             Panel_NodeLayout                                            ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        ButtonPrevious                                              ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        ButtonNext                                                  ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(USizeBox*)                                 StartArrow                                                  ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(USizeBox*)                                 EndArrow                                                    ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   QuestButtonGroup                                            ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortQuestMapScreen*)                      ParentScreen                                                ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapNodeLayout_Legacy
/// Size: 0x0068 (0x0002A8 - 0x000310)
class UFortQuestMapNodeLayout_Legacy : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UPanelWidget*)                             Panel_NodeLayout                                            ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      ButtonPrevious                                              ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      ButtonNext                                                  ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(USizeBox*)                                 StartArrow                                                  ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(USizeBox*)                                 EndArrow                                                    ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 QuestButtonGroup                                            ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortQuestMapScreen_Legacy*)               ParentScreen                                                ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapQuestTile
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UFortQuestMapQuestTile : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonButtonBase*)                        QuestButton                                                 ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	SMember(FFortQuestMapNode)                         QuestNodeData                                               ___ OFFSET(get<T>, {0x2D8, 24, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapQuestTile_Legacy
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UFortQuestMapQuestTile_Legacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UCommonButtonLegacy*)                      QuestButton                                                 ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	SMember(FFortQuestMapNode)                         QuestNodeData                                               ___ OFFSET(get<T>, {0x2D8, 24, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapScreen
/// Size: 0x00B8 (0x0003E8 - 0x0004A0)
class UFortQuestMapScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(UFortQuestMapDetailsPanelBase*)            CampaignDetailsPanel                                        ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UFortQuestMapDetailsPanelBase*)            EventDetailsPanel                                           ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UFortQuestMapEventCallout*)                EventCalloutPanel                                           ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UFortQuestMapViewer*)                      QuestMapViewer                                              ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(EQuestMapScreenMode)                       CurrentMode                                                 ___ OFFSET(get<T>, {0x408, 1, 0, 0})
	DMember(bool)                                      bEventsActive                                               ___ OFFSET(get<bool>, {0x409, 1, 0, 0})
	CMember(UFortQuestMapDataAsset*)                   CampaignQuestMapDataTable                                   ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 CutoffQuest                                                 ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UFortQuestMapDataAsset*)                   CurrentQuestMapDataTable                                    ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UClass*)                                   CampaignNewsModalClass                                      ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UClass*)                                   QuestLogScreenClass                                         ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	SMember(FDataTableRowHandle)                       CurrentQuestAction                                          ___ OFFSET(get<T>, {0x460, 16, 0, 0})
	SMember(FDataTableRowHandle)                       STWNewsAction                                               ___ OFFSET(get<T>, {0x470, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackAction                                                  ___ OFFSET(get<T>, {0x480, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapScreen_Legacy
/// Size: 0x0068 (0x000520 - 0x000588)
class UFortQuestMapScreen_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	CMember(UFortQuestMapDetailsPanelBase*)            CampaignDetailsPanel                                        ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UFortQuestMapDetailsPanelBase*)            EventDetailsPanel                                           ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UFortQuestMapEventCallout_Legacy*)         EventCalloutPanel                                           ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UFortQuestMapViewer_Legacy*)               QuestMapViewer                                              ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(EQuestMapScreenMode)                       CurrentMode                                                 ___ OFFSET(get<T>, {0x540, 1, 0, 0})
	DMember(bool)                                      bEventsActive                                               ___ OFFSET(get<bool>, {0x541, 1, 0, 0})
	CMember(UFortQuestMapDataAsset*)                   CampaignQuestMapDataTable                                   ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 CutoffQuest                                                 ___ OFFSET(get<T>, {0x550, 8, 0, 0})
	CMember(UFortQuestMapDataAsset*)                   CurrentQuestMapDataTable                                    ___ OFFSET(get<T>, {0x558, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestMapViewer_Legacy
/// Size: 0x0080 (0x0002D0 - 0x000350)
class UFortQuestMapViewer_Legacy : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	CMember(UCommonButtonLegacy*)                      Button_PageRight                                            ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_PageLeft                                             ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Title                                                  ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_Page                                                   ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Viewer                                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCanvasPanel*)                             CanvasPanel_Cosmetic                                        ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UFortQuestMapScreen_Legacy*)               ParentScreen                                                ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UFortQuestMapNodeLayout_Legacy*)           NodeLayout                                                  ___ OFFSET(get<T>, {0x318, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestPlayButton
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class UFortQuestPlayButton : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UFortQuestItem*)                           QuestItem                                                   ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestTreeItemWidget
/// Size: 0x0010 (0x001470 - 0x001480)
class UFortQuestTreeItemWidget : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5248;

public:
	CMember(TWeakObjectPtr<UObject*>)                  QuestOrCategory                                             ___ OFFSET(get<T>, {0x1478, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestTreeItemWidget_Legacy
/// Size: 0x0010 (0x0014C0 - 0x0014D0)
class UFortQuestTreeItemWidget_Legacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	CMember(TWeakObjectPtr<UObject*>)                  QuestOrCategory                                             ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestScreen
/// Size: 0x00F8 (0x0003E8 - 0x0004E0)
class UFortQuestScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	CMember(UCommonTreeView*)                          TreeView_Quests                                             ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_QuestDetails                                      ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UClass*)                                   QuestManagerComponentClass                                  ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	SMember(FDataTableRowHandle)                       BackAction                                                  ___ OFFSET(get<T>, {0x400, 16, 0, 0})
	SMember(FDataTableRowHandle)                       LeaveInventoryAction                                        ___ OFFSET(get<T>, {0x410, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PlayQuestAction                                             ___ OFFSET(get<T>, {0x420, 16, 0, 0})
	SMember(FDataTableRowHandle)                       AbandonQuestAction                                          ___ OFFSET(get<T>, {0x430, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClaimRewardAction                                           ___ OFFSET(get<T>, {0x440, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ReplayIntroAction                                           ___ OFFSET(get<T>, {0x450, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ReplayOutroAction                                           ___ OFFSET(get<T>, {0x460, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PinQuestAction                                              ___ OFFSET(get<T>, {0x470, 16, 0, 0})
	SMember(FDataTableRowHandle)                       UnpinQuestAction                                            ___ OFFSET(get<T>, {0x480, 16, 0, 0})
	SMember(FDataTableRowHandle)                       StopConversationAction                                      ___ OFFSET(get<T>, {0x490, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortQuestScreen_Legacy
/// Size: 0x0000 (0x000558 - 0x000558)
class UFortQuestScreen_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1368;

public:
};

/// Class /Script/SaveTheWorldUI.FortResearchMenuBase
/// Size: 0x0008 (0x000558 - 0x000560)
class UFortResearchMenuBase : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	CMember(UFortItemDefinition*)                      ResearchRespecToken                                         ___ OFFSET(get<T>, {0x558, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortResearchStatTileWidget
/// Size: 0x0040 (0x0002A8 - 0x0002E8)
class UFortResearchStatTileWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(UFortStatItemDefinition*)                  PersonalStatItemDefinition                                  ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UFortStatItemDefinition*)                  TeamStatItemDefinition                                      ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	SMember(FName)                                     StatCostCurveName                                           ___ OFFSET(get<T>, {0x2B8, 4, 0, 0})
	SMember(FName)                                     StatPersonalDeltaCurveName                                  ___ OFFSET(get<T>, {0x2BC, 4, 0, 0})
	SMember(FName)                                     StatPersonalCumulativeCurveName                             ___ OFFSET(get<T>, {0x2C0, 4, 0, 0})
	SMember(FName)                                     StatTeamDeltaCurveName                                      ___ OFFSET(get<T>, {0x2C4, 4, 0, 0})
	SMember(FName)                                     StatTeamCumulativeCurveName                                 ___ OFFSET(get<T>, {0x2C8, 4, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardNotificationData
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortRewardNotificationData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EFrontEndRewardType)                       RewardType                                                  ___ OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardCollectionBookData
/// Size: 0x0060 (0x000030 - 0x000090)
class UFortRewardCollectionBookData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FFortCollectionBookRewards)                CollectionBookRewards                                       ___ OFFSET(get<T>, {0x30, 96, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardNotificationSubWidget
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class UFortRewardNotificationSubWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	SMember(FMulticastInlineDelegate)                  OnTransitionInComplete                                      ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTransitionOutComplete                                     ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardConversationWidget
/// Size: 0x0000 (0x0002F8 - 0x0002F8)
class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

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
	CMember(UFortQuestItem*)                           Quest                                                       ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardExpeditionData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardExpeditionData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortExpeditionItem*)                      Expedition                                                  ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardExpeditionWidget
/// Size: 0x0068 (0x0002F8 - 0x000360)
class UFortRewardExpeditionWidget : public UFortRewardNotificationSubWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FMulticastInlineDelegate)                  OnMcpError                                                  ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardGiftBoxData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardGiftBoxData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortGiftBoxItem*)                         GiftBox                                                     ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardItemCacheData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardItemCacheData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortItem*)                                ItemCache                                                   ___ OFFSET(get<T>, {0x30, 8, 0, 0})
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
/// Size: 0x0000 (0x0002F8 - 0x0002F8)
class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
};

/// Class /Script/SaveTheWorldUI.FortRewardNotificationWidget
/// Size: 0x00F0 (0x000520 - 0x000610)
class UFortRewardNotificationWidget : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
	CMember(TArray<UFortRewardNotificationData*>)      NotificationDataList                                        ___ OFFSET(get<T>, {0x528, 16, 0, 0})
	CMember(UOverlay*)                                 OverlayMain                                                 ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	SMember(FFortSwipeDetector)                        SwipeDetector                                               ___ OFFSET(get<T>, {0x550, 144, 0, 0})
	CMember(UClass*)                                   MulchConfirmationModalClass                                 ___ OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(UFortMulchConfirmationModalWidget*)        MulchConfirmationModal                                      ___ OFFSET(get<T>, {0x608, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardPhoenixLevelUpData
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortRewardPhoenixLevelUpData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   PhoenixLevel                                                ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(TArray<FFortItemInstanceQuantityPair>)     Rewards                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortRewardQuestData
/// Size: 0x0008 (0x000030 - 0x000038)
class UFortRewardQuestData : public UFortRewardNotificationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortQuestItem*)                           Quest                                                       ___ OFFSET(get<T>, {0x30, 8, 0, 0})
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
	CMember(TWeakObjectPtr<UClass*>)                   ItemManagementScreenClass                                   ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ItemManagementScreenClass_STW                               ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ItemInspectionScreenClass                                   ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   HeroLoadoutScreenClass                                      ___ OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   HeroLoadoutScreenLegacyClass                                ___ OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   SurvivorSquadManagementScreenClass                          ___ OFFSET(get<T>, {0xC8, 32, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadSelectorButton
/// Size: 0x0020 (0x0014C0 - 0x0014E0)
class UFortSquadSelectorButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
};

/// Class /Script/SaveTheWorldUI.FortDefenderSquadSelectorButton
/// Size: 0x0000 (0x0014E0 - 0x0014E0)
class UFortDefenderSquadSelectorButton : public UFortSquadSelectorButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
};

/// Class /Script/SaveTheWorldUI.FortSquadStatDetailsWidget
/// Size: 0x0030 (0x0002D0 - 0x000300)
class UFortSquadStatDetailsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
};

/// Class /Script/SaveTheWorldUI.FortHeroSquadBonusPerksWidgetBase
/// Size: 0x0010 (0x000300 - 0x000310)
class UFortHeroSquadBonusPerksWidgetBase : public UFortSquadStatDetailsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UFortPerkWidget_NUI*)                      SupportBonusPerkWidget                                      ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UFortPerkWidget_NUI*)                      TacticalBonusPerkWidget                                     ___ OFFSET(get<T>, {0x308, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadManagementScreenBase
/// Size: 0x0120 (0x000558 - 0x000678)
class UFortSquadManagementScreenBase : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1656;

public:
	DMember(bool)                                      bReadOnlyModeWIFE                                           ___ OFFSET(get<bool>, {0x568, 1, 0, 0})
	CMember(UFortSquadStatsWidgetBase*)                SquadStatsWidget                                            ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(UFortSquadSlotsView*)                      SquadSlotsView                                              ___ OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(UFortSquadSlotDetailsPanel*)               SelectedSlotDetailsPanel                                    ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	CMember(UFortSquadSlotItemPicker*)                 SelectedSlotItemPicker                                      ___ OFFSET(get<T>, {0x588, 8, 0, 0})
	SMember(FDataTableRowHandle)                       InspectInputActionRowHandle                                 ___ OFFSET(get<T>, {0x590, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ManageInputActionRowHandle                                  ___ OFFSET(get<T>, {0x5A0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputActionRowHandle                                    ___ OFFSET(get<T>, {0x5B0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InventoryInputActionRowHandle                               ___ OFFSET(get<T>, {0x5C0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       InventoryCloseInputActionRowHandle                          ___ OFFSET(get<T>, {0x5D0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClosePickerInputActionRowHandle                             ___ OFFSET(get<T>, {0x5E0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       SelectPickerSlotActionRowHandle                             ___ OFFSET(get<T>, {0x5F0, 16, 0, 0})
	SMember(FDataTableRowHandle)                       CyclePickerSortActionRowHandle                              ___ OFFSET(get<T>, {0x600, 16, 0, 0})
	SMember(FDataTableRowHandle)                       PreviousSquadActionRowHandle                                ___ OFFSET(get<T>, {0x610, 16, 0, 0})
	SMember(FDataTableRowHandle)                       NextSquadActionRowHandle                                    ___ OFFSET(get<T>, {0x620, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ClearAllActionRowHandle                                     ___ OFFSET(get<T>, {0x630, 16, 0, 0})
	SMember(FDataTableRowHandle)                       HelpScreenActionRowHandle                                   ___ OFFSET(get<T>, {0x640, 16, 0, 0})
	CMember(UClass*)                                   DisableAutoSlottingToClearSquadPromptAction                 ___ OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UFortItemViewContext_SquadSlotsView*)      ItemViewContext_SquadSlotsView                              ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UFortItemViewContext_SquadSlotItemPicker*) ItemViewContext_SquadSlotItemPicker                         ___ OFFSET(get<T>, {0x670, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortHeroSquadManagementScreen
/// Size: 0x0020 (0x000678 - 0x000698)
class UFortHeroSquadManagementScreen : public UFortSquadManagementScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1688;

public:
	SMember(FDataTableRowHandle)                       ManageDefendersInputActionRowHandle                         ___ OFFSET(get<T>, {0x678, 16, 0, 0})
	CMember(UFortHeroSquadBonusPerksWidgetBase*)       BonusPerksWidget                                            ___ OFFSET(get<T>, {0x688, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadIcon
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortSquadIcon : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x2D0, 4, 0, 0})
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   ___ OFFSET(get<T>, {0x2D4, 1, 0, 0})
	CMember(UImage*)                                   Icon                                                        ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetails
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortSquadLandingPageDefenderSquadDetails : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UCommonTextBlock*)                         OutpostName                                                 ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  PowerRating                                                 ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSquadDetailsLocked
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class UFortSquadLandingPageDefenderSquadDetailsLocked : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UCommonTextBlock*)                         OutpostName                                                 ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageDefenderSummary
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class UFortSquadLandingPageDefenderSummary : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
};

/// Class /Script/SaveTheWorldUI.FortSquadLandingPageSurvivorSummary
/// Size: 0x0088 (0x0002D0 - 0x000358)
class UFortSquadLandingPageSurvivorSummary : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	CMember(UFortSquadStatValueWithIcon*)              FortitudeStatValue                                          ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortSquadStatValueWithIcon*)              OffenseStatValue                                            ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UFortSquadStatValueWithIcon*)              ResistanceStatValue                                         ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UFortSquadStatValueWithIcon*)              TechStatValue                                               ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
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
/// Size: 0x0058 (0x0002D0 - 0x000328)
class UFortSquadSlotDetailsPanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(UFortSquadSlotItemDetailsHostPanel*)       ItemDetailsPanel                                            ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   ItemViewContext                                             ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemDetailElementWidget
/// Size: 0x0020 (0x000328 - 0x000348)
class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemDetailsHostPanel
/// Size: 0x0020 (0x0003A8 - 0x0003C8)
class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemPicker
/// Size: 0x00C8 (0x000408 - 0x0004D0)
class UFortSquadSlotItemPicker : public UFortItemPickerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1232;

public:
	SMember(FMulticastInlineDelegate)                  OnSortChanged                                               ___ OFFSET(get<T>, {0x440, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotItemPickerTileButton
/// Size: 0x0010 (0x001500 - 0x001510)
class UFortSquadSlotItemPickerTileButton : public UFortItemTileButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5392;

public:
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotSelectorPopupMenu
/// Size: 0x0008 (0x000540 - 0x000548)
class UFortSquadSlotSelectorPopupMenu : public UFortPopupMenu_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
	DMember(bool)                                      bReadOnlyModeWIFE                                           ___ OFFSET(get<bool>, {0x540, 1, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotSurvivorTraitMatchesDetailWidget
/// Size: 0x0028 (0x000348 - 0x000370)
class UFortSquadSlotSurvivorTraitMatchesDetailWidget : public UFortSquadSlotItemDetailElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	DMember(bool)                                      IsSquadLeaderSlot                                           ___ OFFSET(get<bool>, {0x348, 1, 0, 0})
	DMember(bool)                                      LeaderMatchesSquadType                                      ___ OFFSET(get<bool>, {0x349, 1, 0, 0})
	DMember(int32_t)                                   SubordinatePersonalityMatchCount                            ___ OFFSET(get<int32_t>, {0x34C, 4, 0, 0})
	DMember(bool)                                      MatchesLeaderPersonality                                    ___ OFFSET(get<bool>, {0x350, 1, 0, 0})
	DMember(int32_t)                                   MatchingSetBonusCount                                       ___ OFFSET(get<int32_t>, {0x354, 4, 0, 0})
	DMember(int32_t)                                   SetBonusSize                                                ___ OFFSET(get<int32_t>, {0x358, 4, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotSelectorButton
/// Size: 0x0080 (0x0014C0 - 0x001540)
class UFortSquadSlotSelectorButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5440;

public:
	SMember(FMulticastInlineDelegate)                  OnRequestOpenSquadSlotEvent                                 ___ OFFSET(get<T>, {0x14E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestViewInAllEvent                                     ___ OFFSET(get<T>, {0x14F0, 16, 0, 0})
	CMember(UFortSquadSlotWidget*)                     SquadSlotWidget                                             ___ OFFSET(get<T>, {0x1500, 8, 0, 0})
	CMember(UMenuAnchor*)                              PopupMenuAnchor                                             ___ OFFSET(get<T>, {0x1508, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   ItemViewContext                                             ___ OFFSET(get<T>, {0x1510, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotsView
/// Size: 0x00F8 (0x0002D0 - 0x0003C8)
class UFortSquadSlotsView : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FMulticastInlineDelegate)                  OnDifferentSquadSlotSelectedEvent                           ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestOpenSquadSlotEvent                                 ___ OFFSET(get<T>, {0x2F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRequestViewInAllEvent                                     ___ OFFSET(get<T>, {0x300, 16, 0, 0})
	DMember(bool)                                      bReadOnlyModeWIFE                                           ___ OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(int32_t)                                   IndexOfSelectedSquadSlot                                    ___ OFFSET(get<int32_t>, {0x314, 4, 0, 0})
	DMember(bool)                                      bSlotButtonsRequireSelection                                ___ OFFSET(get<bool>, {0x318, 1, 0, 0})
	DMember(bool)                                      bInPreviewMode                                              ___ OFFSET(get<bool>, {0x319, 1, 0, 0})
	CMember(TMap<ESquadSlotType, FSquadSlotSortTypes>) SquadSlotSortTypesMap                                       ___ OFFSET(get<T>, {0x320, 80, 0, 0})
	CMember(UClass*)                                   DisableAutoSlottingToOpenSquadSlotPromptAction              ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UFortCommittableButtonGroup*)              SquadSlotButtonGroup                                        ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   ItemViewContext                                             ___ OFFSET(get<T>, {0x3B0, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadSlotWidget
/// Size: 0x0090 (0x000178 - 0x000208)
class UFortSquadSlotWidget : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 520;

public:
	CMember(EFortItemCardSize)                         ItemCardSize                                                ___ OFFSET(get<T>, {0x198, 1, 0, 0})
	CMember(UFortMultiSizeItemCard*)                   SlottedItemCard                                             ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   ItemViewContext                                             ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadStatsWidgetBase
/// Size: 0x0038 (0x0002D0 - 0x000308)
class UFortSquadStatsWidgetBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(TArray<UFortAttributeListItem_NUI*>)       OverviewStats                                               ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(UFortAttributeList_NUI*)                   DetailedStats                                               ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadStatValueWithIcon
/// Size: 0x0088 (0x0002D0 - 0x000358)
class UFortSquadStatValueWithIcon : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   ___ OFFSET(get<T>, {0x2D0, 56, 0, 0})
	SMember(FGameplayAttribute)                        TeamAttribute                                               ___ OFFSET(get<T>, {0x308, 56, 0, 0})
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   ___ OFFSET(get<T>, {0x340, 1, 0, 0})
	CMember(UCommonNumericTextBlock*)                  Value                                                       ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UImage*)                                   Icon                                                        ___ OFFSET(get<T>, {0x350, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSquadTypeLandingPageBase
/// Size: 0x0030 (0x000558 - 0x000588)
class UFortSquadTypeLandingPageBase : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1416;

public:
	DMember(bool)                                      bReadOnlyModeWIFE                                           ___ OFFSET(get<bool>, {0x558, 1, 0, 0})
	CMember(EFortHomebaseSquadType)                    SquadType                                                   ___ OFFSET(get<T>, {0x559, 1, 0, 0})
	SMember(FDataTableRowHandle)                       BackInputActionRowHandle                                    ___ OFFSET(get<T>, {0x560, 16, 0, 0})
	CMember(EFortFrontendInventoryFilter)              ItemManagementScreenFilter                                  ___ OFFSET(get<T>, {0x570, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SquadSelectorButtons                                        ___ OFFSET(get<T>, {0x578, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortStatIcon
/// Size: 0x0048 (0x0002D0 - 0x000318)
class UFortStatIcon : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   ___ OFFSET(get<T>, {0x2D0, 56, 0, 0})
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   ___ OFFSET(get<T>, {0x308, 1, 0, 0})
	CMember(UImage*)                                   Icon                                                        ___ OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadManagementScreen
/// Size: 0x00E0 (0x000678 - 0x000758)
class UFortSurvivorSquadManagementScreen : public UFortSquadManagementScreenBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1880;

public:
	CMember(UFortSurvivorSquadStatMatchesBase*)        StatMatchesWidget                                           ___ OFFSET(get<T>, {0x678, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButton
/// Size: 0x0020 (0x0014E0 - 0x001500)
class UFortSurvivorSquadSelectorButton : public UFortSquadSelectorButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(TArray<FGameplayAttribute>)                FortStatAttributes                                          ___ OFFSET(get<T>, {0x14D8, 16, 0, 0})
	CMember(TArray<FGameplayAttribute>)                FortTeamStatAttributes                                      ___ OFFSET(get<T>, {0x14E8, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchBase
/// Size: 0x04D0 (0x0002D0 - 0x0007A0)
class UFortSurvivorSquadStatMatchBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	SMember(FFortUISurvivorSquadStatMatch)             StatMatch                                                   ___ OFFSET(get<T>, {0x2E0, 1216, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadStatMatchesBase
/// Size: 0x0030 (0x000300 - 0x000330)
class UFortSurvivorSquadStatMatchesBase : public UFortSquadStatDetailsWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(UClass*)                                   StatMatchClass                                              ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(bool)                                      bSummaryView                                                ___ OFFSET(get<bool>, {0x308, 1, 0, 0})
	CMember(TArray<UFortSurvivorSquadStatMatchBase*>)  StatMatches                                                 ___ OFFSET(get<T>, {0x310, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortSurvivorSquadSummaryStatItem
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UFortSurvivorSquadSummaryStatItem : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   ___ OFFSET(get<T>, {0x2D0, 1, 0, 0})
	CMember(UImage*)                                   Icon                                                        ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Value                                                       ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Name                                                        ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortWorkerSetBonusIcon
/// Size: 0x0010 (0x0002D0 - 0x0002E0)
class UFortWorkerSetBonusIcon : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FGameplayTag)                              GameplayTag                                                 ___ OFFSET(get<T>, {0x2D0, 4, 0, 0})
	CMember(TEnumAsByte<EFortBrushSize>)               ImageSize                                                   ___ OFFSET(get<T>, {0x2D4, 1, 0, 0})
	CMember(UImage*)                                   Icon                                                        ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortStatsOverviewDetailsBase
/// Size: 0x0038 (0x0002D0 - 0x000308)
class UFortStatsOverviewDetailsBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	CMember(TArray<UFortAttributeListItem_NUI*>)       OverviewStats                                               ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	CMember(UFortAttributeList_NUI*)                   DetailedStats                                               ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreData
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortLlamaStoreData : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FText>)                             RandomLoadingTexts                                          ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FName)                                     NotEnoughCurrencyDialogCloseAction                          ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	CMember(UClass*)                                   InspectWidgetClass                                          ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	DMember(float)                                     ShowOfferDelay                                              ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(UClass*)                                   StoreOpeningCardPackClass                                   ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UClass*)                                   UnopenedCardpacksModalClass                                 ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UClass*)                                   UnopenedCardpacksModalClass_Legacy                          ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreBase
/// Size: 0x00A0 (0x0004C8 - 0x000568)
class UFortLlamaStoreBase : public UFortDirectAcquisitionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
	CMember(TArray<FOfferGroup>)                       OfferCategoriesToDisplay                                    ___ OFFSET(get<T>, {0x4C8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       TencentDetailsActionData                                    ___ OFFSET(get<T>, {0x4D8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       AddVBucksActionData                                         ___ OFFSET(get<T>, {0x4E8, 16, 0, 0})
	DMember(bool)                                      bShouldShowAddVBucksAction                                  ___ OFFSET(get<bool>, {0x4F8, 1, 0, 0})
	CMember(UDynamicEntryBox*)                         OfferEntryBox                                               ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UCommonButtonGroupBase*)                   OfferButtonGroup                                            ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UFortLlamaStoreDetailsBase*)               OfferDetails                                                ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UFortLlamaStoreData*)                      StoreData                                                   ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_UnopenedLlamas                                       ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UFortLlamaStoreOfferInfo*)                 PendingPurchaseOffer                                        ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UCommonActivatablePanelLegacy*)            StoreOpeningCardPack                                        ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	DMember(bool)                                      bHideSoldOffers                                             ___ OFFSET(get<bool>, {0x538, 1, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreBase_Legacy
/// Size: 0x0078 (0x000638 - 0x0006B0)
class UFortLlamaStoreBase_Legacy : public UFortDirectAcquisitionWidgetBase_Legacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	CMember(TArray<FOfferGroup>)                       OfferCategoriesToDisplay                                    ___ OFFSET(get<T>, {0x638, 16, 0, 0})
	CMember(UDynamicEntryBox*)                         OfferEntryBox                                               ___ OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UCommonButtonGroupLegacy*)                 OfferButtonGroup                                            ___ OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UFortLlamaStoreDetailsBase*)               OfferDetails                                                ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UFortLlamaStoreData*)                      StoreData                                                   ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_UnopenedLlamas                                       ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UFortLlamaStoreOfferInfo*)                 PendingPurchaseOffer                                        ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UCommonActivatablePanelLegacy*)            StoreOpeningCardPack                                        ___ OFFSET(get<T>, {0x678, 8, 0, 0})
	DMember(bool)                                      bHideSoldOffers                                             ___ OFFSET(get<bool>, {0x680, 1, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreDetailsBase
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UFortLlamaStoreDetailsBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	CMember(UFortStoreFrontOfferInfo*)                 OfferInfo                                                   ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTileView*)                          ItemTileView                                                ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortLlamaStoreInspectionScreen
/// Size: 0x0010 (0x000818 - 0x000828)
class UFortLlamaStoreInspectionScreen : public UFortStoreFrontOfferDetailsWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2088;

public:
	CMember(UCommonTileView*)                          GrantedItemTileView                                         ___ OFFSET(get<T>, {0x818, 8, 0, 0})
	DMember(bool)                                      bIsInChoiceViewMode                                         ___ OFFSET(get<bool>, {0x820, 1, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortOpenCardPackModal
/// Size: 0x0040 (0x000558 - 0x000598)
class UFortOpenCardPackModal : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1432;

public:
	CMember(UCommonListView*)                          CardPackList                                                ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      OpenAllButton                                               ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      CancelButton                                                ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BPOnRequestOpenCardPack                                     ___ OFFSET(get<T>, {0x570, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortOpenCardPackModal_Legacy
/// Size: 0x0040 (0x000558 - 0x000598)
class UFortOpenCardPackModal_Legacy : public UFortActivatablePanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1432;

public:
	CMember(UCommonListView*)                          CardPackList                                                ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      OpenAllButton                                               ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      CancelButton                                                ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  BPOnRequestOpenCardPack                                     ___ OFFSET(get<T>, {0x570, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.StWHUD
/// Size: 0x0148 (0x000400 - 0x000548)
class UStWHUD : public UFortUIStateWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1352;

public:
	CMember(UFortPickerData*)                          PickerData                                                  ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   EmotePickerClass                                            ___ OFFSET(get<T>, {0x408, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   ManagementTabsScreenClass                                   ___ OFFSET(get<T>, {0x430, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   TopBarClass                                                 ___ OFFSET(get<T>, {0x450, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MissionActivationWidgetClass                                ___ OFFSET(get<T>, {0x470, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PostGameScreenClass                                         ___ OFFSET(get<T>, {0x490, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefenderConfigPanelClass                                    ___ OFFSET(get<T>, {0x4B0, 32, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSTWHUDMenuStackChanged                                    ___ OFFSET(get<T>, {0x4D0, 16, 0, 0})
	DMember(int32_t)                                   ReticleExtensionSize                                        ___ OFFSET(get<int32_t>, {0x4E0, 4, 0, 0})
	CMember(UCommonUserWidget*)                        BottomBarWidget                                             ___ OFFSET(get<T>, {0x4E8, 8, 0, 0})
	CMember(UOverlay*)                                 PersistentHUDContent                                        ___ OFFSET(get<T>, {0x4F0, 8, 0, 0})
	CMember(UCommonActivatableWidget*)                 TitleBar                                                    ___ OFFSET(get<T>, {0x4F8, 8, 0, 0})
	CMember(UOverlay*)                                 IndicatorContent                                            ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	CMember(UFortActivatableChatWidget*)               ChatWidget_STW                                              ___ OFFSET(get<T>, {0x508, 8, 0, 0})
	CMember(UFortUINavigationManager*)                 NavigationManager                                           ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UFortWeaponReticleExtensionWidgetBase*)    CurrentCustomReticleExtension                               ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(TArray<UFortWeaponReticleExtensionWidgetBase*>) RecentReticleExtensions                                ___ OFFSET(get<T>, {0x538, 16, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortTheaterSelect
/// Size: 0x0030 (0x0003E8 - 0x000418)
class UFortTheaterSelect : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	CMember(UOverlay*)                                 OverlayMain                                                 ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 DefaultRequiredCompletedQuest                               ___ OFFSET(get<T>, {0x410, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortTheaterSelect_Legacy
/// Size: 0x0030 (0x000520 - 0x000550)
class UFortTheaterSelect_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	CMember(UOverlay*)                                 OverlayMain                                                 ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UFortQuestItemDefinition*)                 DefaultRequiredCompletedQuest                               ___ OFFSET(get<T>, {0x548, 8, 0, 0})
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
/// Size: 0x0040 (0x0002D0 - 0x000310)
class UFortUpgradeDetailsBase : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UMediaPlayer*)                             VideoPlayer                                                 ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UFortUpgradeInfo*)                         UpgradeInfo                                                 ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortUpgradeInfo
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UFortUpgradeInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UFortHomebaseNodeItemDefinition*)          NodeItemDef                                                 ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortUpgradeScreenBase
/// Size: 0x00C8 (0x000520 - 0x0005E8)
class UFortUpgradeScreenBase : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1512;

public:
	CMember(UFortTabListWidgetBase*)                   UpgradesTabSelector                                         ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UCommonTileView*)                          UpgradesTileView                                            ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         UpgradeTileViewLoadGuard                                    ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UFortUpgradeDetailsBase*)                  Details                                                     ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(TMap<FName, EHomebaseNodeType>)            TabToNodeTypeMap                                            ___ OFFSET(get<T>, {0x540, 80, 0, 0})
	CMember(UFortItemDefinition*)                      UpgradesRespecToken                                         ___ OFFSET(get<T>, {0x590, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortUpgradeScreenBase_Legacy
/// Size: 0x00C8 (0x000520 - 0x0005E8)
class UFortUpgradeScreenBase_Legacy : public UCommonActivatablePanelLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1512;

public:
	CMember(UFortTabListWidgetBase_Legacy*)            UpgradesTabSelector                                         ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(UCommonTileView*)                          UpgradesTileView                                            ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	CMember(UCommonLoadGuard*)                         UpgradeTileViewLoadGuard                                    ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	CMember(UFortUpgradeDetailsBase*)                  Details                                                     ___ OFFSET(get<T>, {0x538, 8, 0, 0})
	CMember(TMap<FName, EHomebaseNodeType>)            TabToNodeTypeMap                                            ___ OFFSET(get<T>, {0x540, 80, 0, 0})
	CMember(UFortItemDefinition*)                      UpgradesRespecToken                                         ___ OFFSET(get<T>, {0x590, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortUpgradeTileBase
/// Size: 0x0010 (0x0014C0 - 0x0014D0)
class UFortUpgradeTileBase : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	CMember(UFortUpgradeInfo*)                         UpgradeInfo                                                 ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
};

/// Class /Script/SaveTheWorldUI.FortUpgradeTileBase_Legacy
/// Size: 0x0010 (0x0014C0 - 0x0014D0)
class UFortUpgradeTileBase_Legacy : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	CMember(UFortUpgradeInfo*)                         UpgradeInfo                                                 ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.SquadSlotSortTypes
/// Size: 0x0010 (0x000000 - 0x000010)
class FSquadSlotSortTypes : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<ESquadSlotSortType>)                SortTypes                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.ExpeditionTabInfo
/// Size: 0x0100 (0x000000 - 0x000100)
class FExpeditionTabInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FName)                                     TabNameID                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabLabelInfo                                                ___ OFFSET(get<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.ConsumedCriteriaData
/// Size: 0x0018 (0x000000 - 0x000018)
class FConsumedCriteriaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     PowerMod                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             CriteriaNames                                               ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortHeroLoadoutHeroPickerTabConfiguration
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFortHeroLoadoutHeroPickerTabConfiguration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FFortItemFilterDefinition)                 Filter                                                      ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FFortItemSorterDefinition)                 Sorter                                                      ___ OFFSET(get<T>, {0x60, 80, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortInGamePerkDisplayData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortInGamePerkDisplayData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EFortHeroPerkDisplayType)                  PerkDisplayType                                             ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Row                                                         ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Column                                                      ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortRefundDescriptionsData
/// Size: 0x0038 (0x000008 - 0x000040)
class FFortRefundDescriptionsData : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   SearchString                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   TargetReleaseVersion                                        ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FText)                                     RefundDescriptionText                                       ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortQuestMapEventQuestSideBarData
/// Size: 0x0020 (0x000008 - 0x000028)
class FFortQuestMapEventQuestSideBarData : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UFortQuestItemDefinition*)                 QuestItemDefinition                                         ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FString>)                           EventFlags                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bShowAlways                                                 ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(float)                                     CycleTime                                                   ___ OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortLandingPageDefenderSummaryInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortLandingPageDefenderSummaryInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     SquadId                                                     ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     TheaterDisplayName                                          ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FString)                                   TheaterUniqueId                                             ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortAttributeModifierAccumulation
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortAttributeModifierAccumulation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTag)                              GameplayTag                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FGameplayAttribute)                        Attribute                                                   ___ OFFSET(get<T>, {0x8, 56, 0, 0})
	CMember(TEnumAsByte<EGameplayModOp>)               ModifierOp                                                  ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortSurvivorSquadSlottingFeedbackData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FFortSurvivorSquadSlottingFeedbackData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(bool)                                      HadLeaderMatch                                              ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      HasLeaderMatch                                              ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	CMember(TMap<FGameplayTag, int32_t>)               PreviousSetBonusCounts                                      ___ OFFSET(get<T>, {0x8, 80, 0, 0})
	CMember(TMap<FGameplayTag, int32_t>)               CurrentSetBonusCounts                                       ___ OFFSET(get<T>, {0x58, 80, 0, 0})
	DMember(int32_t)                                   PreviousPersonalityMatchCount                               ___ OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	DMember(int32_t)                                   CurrentPersonalityMatchCount                                ___ OFFSET(get<int32_t>, {0xAC, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButtonSummaryStats
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FFortSurvivorSquadSelectorButtonSummaryStats : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FName)                                     SquadId                                                     ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FGameplayAttribute)                        FortAttribute                                               ___ OFFSET(get<T>, {0x8, 56, 0, 0})
	DMember(float)                                     FortAttributeValue                                          ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	SMember(FGameplayAttribute)                        FortTeamAttribute                                           ___ OFFSET(get<T>, {0x48, 56, 0, 0})
	DMember(float)                                     TeamFortAttributeValue                                      ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     SquadPowerValue                                             ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	SMember(FText)                                     FortAttributeName                                           ___ OFFSET(get<T>, {0x88, 24, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortSurvivorSquadSelectorButtonPersonalityMatches
/// Size: 0x0490 (0x000000 - 0x000490)
class FFortSurvivorSquadSelectorButtonPersonalityMatches : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	DMember(int32_t)                                   NumPersonalityMatches                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TotalNonLeaderSquadMembers                                  ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      HavePersonalityIcons                                        ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FFortMultiSizeBrush)                       PersonalityIcons                                            ___ OFFSET(get<T>, {0x10, 1152, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.FortUISurvivorSquadStatMatch
/// Size: 0x04C0 (0x000000 - 0x0004C0)
class FFortUISurvivorSquadStatMatch : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	SMember(FFortMultiSizeBrush)                       Icons                                                       ___ OFFSET(get<T>, {0x0, 1152, 0, 0})
	SMember(FText)                                     MagnitudeText                                               ___ OFFSET(get<T>, {0x480, 24, 0, 0})
	SMember(FText)                                     AttributeDisplayName                                        ___ OFFSET(get<T>, {0x498, 24, 0, 0})
	DMember(int32_t)                                   NumMembersMeetingCriteria                                   ___ OFFSET(get<int32_t>, {0x4B0, 4, 0, 0})
	DMember(int32_t)                                   NumMembersRequired                                          ___ OFFSET(get<int32_t>, {0x4B4, 4, 0, 0})
	CMember(EFortUISurvivorSquadMatchType)             MatchType                                                   ___ OFFSET(get<T>, {0x4B8, 1, 0, 0})
	CMember(EFortBuffState)                            PreviewEffect                                               ___ OFFSET(get<T>, {0x4B9, 1, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.OfferGroup
/// Size: 0x0018 (0x000000 - 0x000018)
class FOfferGroup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   MaxNumberToShow                                             ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/SaveTheWorldUI.HomebaseNodeDisplayData
/// Size: 0x0078 (0x000008 - 0x000080)
class FHomebaseNodeDisplayData : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FText)                                     Title                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     Description                                                 ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               LargePreviewImage                                           ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               SmallPreviewImage                                           ___ OFFSET(get<T>, {0x58, 32, 0, 0})
	CMember(UMediaSource*)                             PreviewVideoMediaSource                                     ___ OFFSET(get<T>, {0x78, 8, 0, 0})
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

