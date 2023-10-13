
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: McpProfileSys
/// dependency: UMG

/// Class /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry
/// Size: 0x0060 (0x001490 - 0x0014F0)
class UEmporiumBrowserFilterEntry : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5360;

public:
	SMember(FMulticastInlineDelegate)                  OnFilterEnabled                                             OFFSET(getStruct<T>, {0x1490, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFilterSelected                                            OFFSET(getStruct<T>, {0x14A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWidgetDestroyed                                           OFFSET(getStruct<T>, {0x14B0, 16, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_FilterName                                        OFFSET(get<T>, {0x14C0, 8, 0, 0})
	DMember(bool)                                      bFilterActive                                               OFFSET(get<bool>, {0x14C8, 1, 0, 0})
	CMember(UEmporiumBrowserTag*)                      tag                                                         OFFSET(get<T>, {0x14D0, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  OFFSET(getStruct<T>, {0x14D8, 24, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.UpdateItemCount
	// void UpdateItemCount(int32_t ItemCount);                                                                                 // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.UpdateCheckMarkState
	// void UpdateCheckMarkState(bool bIsChecked);                                                                              // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.UpdateButtonText
	// void UpdateButtonText();                                                                                                 // [0x9be5ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.SetIsFilterActive
	// void SetIsFilterActive(bool bInFilterActive);                                                                            // [0x9be5b30] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFilterEntry.IsFilterActive
	// bool IsFilterActive();                                                                                                   // [0x9be4244] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.EmporiumBrowserTag
/// Size: 0x0008 (0x000028 - 0x000030)
class UEmporiumBrowserTag : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     TagID                                                       OFFSET(getStruct<T>, {0x28, 4, 0, 0})
};

/// Class /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel
/// Size: 0x01D8 (0x0002E8 - 0x0004C0)
class UEmporiumBrowserFiltersPanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	SMember(FMulticastInlineDelegate)                  OnFilterChanged                                             OFFSET(getStruct<T>, {0x2E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSortChanged                                               OFFSET(getStruct<T>, {0x2F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSubFilterToggled                                          OFFSET(getStruct<T>, {0x308, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFocusChanged                                              OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCategoryActivated                                         OFFSET(getStruct<T>, {0x328, 16, 0, 0})
	CMember(UClass*)                                   FilterSectionHeaderWidgetClass                              OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UClass*)                                   FilterCategoryHeaderWidgetClass                             OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UClass*)                                   FilterHomeHeaderWidgetClass                                 OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UClass*)                                   FilterEntryWidgetClass                                      OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(TArray<FFortEmporiumSortEntry>)            SortEntries                                                 OFFSET(get<T>, {0x358, 16, 0, 0})
	CMember(TArray<FFortEmporiumFilterEntry>)          FilterEntries                                               OFFSET(get<T>, {0x368, 16, 0, 0})
	CMember(TArray<FFortEmporiumPriceFilterEntry>)     PriceFilterEntries                                          OFFSET(get<T>, {0x378, 16, 0, 0})
	CMember(TArray<FName>)                             LicenseFilterEntries                                        OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FName)                                     DefaultCategoryFilter                                       OFFSET(getStruct<T>, {0x398, 4, 0, 0})
	SMember(FName)                                     ShowAllButtonID                                             OFFSET(getStruct<T>, {0x39C, 4, 0, 0})
	CMember(UScrollBox*)                               ScrollBox_FilterScroll                                      OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UEmporiumBrowserFilterEntry*)              Button_All                                                  OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(USearchPanel*)                             SearchPanel                                                 OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_SortAndFilter                                        OFFSET(get<T>, {0x408, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.SetItemDetailTags
	// void SetItemDetailTags(TArray<FName>& TagIDs);                                                                           // [0x9be5bb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.IncludeItemDetailTag
	// void IncludeItemDetailTag(FName& TagID);                                                                                 // [0x9be4174] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleSortAndFilterClicked
	// void HandleSortAndFilterClicked();                                                                                       // [0x9be3f64] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleShowAllEnabled
	// void HandleShowAllEnabled(bool bShowAllItems, UObject* ListItemObject);                                                  // [0x9be3ea0] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleSearchTextChanged
	// void HandleSearchTextChanged(FText& Text);                                                                               // [0x9be3d84] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleFilterSelected
	// void HandleFilterSelected(bool bIsFilterEnabled, UEmporiumBrowserFilterEntry* Entry);                                    // [0x9be36e8] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleFilterEnabled
	// void HandleFilterEnabled(bool bIsFilterEnabled, UObject* ListItemObject);                                                // [0x9be35a4] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleCategoryWidgetDestroyed
	// void HandleCategoryWidgetDestroyed(UObject* ListItemObject);                                                             // [0x9be32f0] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.HandleCategoryActivated
	// void HandleCategoryActivated(bool bIsExpanded, UObject* ListItemObject);                                                 // [0x9be319c] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.GetFilterCount
	// int32_t GetFilterCount();                                                                                                // [0x3393580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.EmporiumBrowserFiltersPanel.ExcludeItemDetailTag
	// void ExcludeItemDetailTag(FName& TagID);                                                                                 // [0x9be2dfc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UFortEmporiumFilterCategoryHeader : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FMulticastInlineDelegate)                  OnCategoryActivated                                         OFFSET(getStruct<T>, {0x2C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnWidgetDestroyed                                           OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	CMember(UEmporiumBrowserTag*)                      tag                                                         OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.UpdateCategoryCount
	// void UpdateCategoryCount(int32_t NewCount, bool bHideIfEmpty);                                                           // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.SetSubcategoryCount
	// void SetSubcategoryCount(int32_t NewCount);                                                                              // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.SetCategoryText
	// void SetCategoryText(FText& NewButtonText);                                                                              // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.GetSubcategoryWidgets
	// TArray<UWidget*> GetSubcategoryWidgets();                                                                                // [0x7bd7698] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ExpandCategory
	// void ExpandCategory(bool bExpanded);                                                                                     // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ClearSubcategoryWidgets
	// void ClearSubcategoryWidgets();                                                                                          // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.AddSubcategoryWidget
	// void AddSubcategoryWidget(UWidget* SubcategoryWidget);                                                                   // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumFilterCategoryHeader.ActivateCategory
	// void ActivateCategory(bool bExpanded);                                                                                   // [0x9be26e0] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumFiltersSubPanel
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortEmporiumFiltersSubPanel : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeEntryObjectWrapper
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortEmporiumHomeEntryObjectWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UFortEmporiumItemListTabPanel*)            TabPanel                                                    OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry
/// Size: 0x01F8 (0x0002C0 - 0x0004B8)
class UFortEmporiumHomeListEntry : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	CMember(UFortEmporiumHomeListView*)                ParentView                                                  OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(int32_t)                                   MaxItemsToShow                                              OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	CMember(UFortEmporiumItemListTabPanel*)            TabPanel                                                    OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_CategoryLabel                                          OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UAthenaCreativeItemTileView*)              HomeListView_ItemOptions                                    OFFSET(get<T>, {0x318, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry.UpdateWarningMessage
	// void UpdateWarningMessage(bool bShowMessage);                                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry.GetCollapseBorderPadFlagForCategory
	// bool GetCollapseBorderPadFlagForCategory();                                                                              // [0x9be2f54] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListEntry.GetCardSizeForCategory
	// EFortItemCardSize GetCardSizeForCategory();                                                                              // [0x9be2e88] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeListView
/// Size: 0x0240 (0x000BD0 - 0x000E10)
class UFortEmporiumHomeListView : public UCommonListView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3600;

public:
	CMember(TArray<UFortEmporiumItemListTabPanel*>)    TabPanelList                                                OFFSET(get<T>, {0xC58, 16, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumHomeListView.GetFocusWidget
	// UWidget* GetFocusWidget();                                                                                               // [0x9be3038] Native|Public|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumHomeTabPanel
/// Size: 0x0040 (0x000448 - 0x000488)
class UFortEmporiumHomeTabPanel : public UFortCreativeContentBrowserTabPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	SMember(FName)                                     FeaturedItemTag                                             OFFSET(getStruct<T>, {0x478, 4, 0, 0})
	CMember(UFortEmporiumHomeListView*)                FortEmporiumHomeListView_Options                            OFFSET(get<T>, {0x480, 8, 0, 0})
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItem
/// Size: 0x0008 (0x000088 - 0x000090)
class UFortEmporiumItem : public UFortItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UFortEmporiumItemDefinition*)              ItemDefinition                                              OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemDefinition
/// Size: 0x0110 (0x000378 - 0x000488)
class UFortEmporiumItemDefinition : public UFortItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1160;

public:
	SMember(FMulticastInlineDelegate)                  OnItemThumbnailDownloaded                                   OFFSET(getStruct<T>, {0x380, 16, 0, 0})
	CMember(UTexture2D*)                               ThumbnailTexture                                            OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDefinition.GetEmporiumItemData
	// FFortEmporiumItemData GetEmporiumItemData();                                                                             // [0x9be301c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel
/// Size: 0x0068 (0x0002E8 - 0x000350)
class UFortEmporiumItemDetailsPanel : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FDataTableRowHandle)                       ItemDetailTagsInputRowHandle                                OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	CMember(UFortItemDefinition*)                      CachedItemDefinition                                        OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_Details                                            OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UFortEmporiumItemInfo*)                    ItemDetails                                                 OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UFortItemDetailsHostPanel*)                LegacyItemDetails                                           OFFSET(get<T>, {0x348, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.UpdateItemDetailsDisplay
	// void UpdateItemDetailsDisplay(bool bShowItemDetails);                                                                    // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.ToggleItemDetailsPanel
	// void ToggleItemDetailsPanel();                                                                                           // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.ShowExtendedDataPanel
	// void ShowExtendedDataPanel();                                                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetSpecialItemTagVisibility
	// void SetSpecialItemTagVisibility(FName& SpecialItemTag);                                                                 // [0x1d9241c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetItemToDetail
	// void SetItemToDetail(UFortItem* InItemToDetail, bool bUseLargeThumbnail, bool bAllowInteractiveTags);                    // [0x9be5c4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetItemDetails
	// void SetItemDetails(UFortItem* FortItem, bool bUseLargeThumbnail, bool bAllowInteractiveTags);                           // [0x1d9241c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.SetActiveItemDetailTags
	// void SetActiveItemDetailTags(TArray<FName>& ActiveTags);                                                                 // [0x1d9241c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.IsShowingExtendedDataPanel
	// bool IsShowingExtendedDataPanel();                                                                                       // [0x2a1f97c] Native|Event|Protected|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.IsShowingAdditionalButtons
	// bool IsShowingAdditionalButtons();                                                                                       // [0x2a1f97c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HideExtendedDataPanel
	// void HideExtendedDataPanel();                                                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HideAdditionalButtons
	// void HideAdditionalButtons();                                                                                            // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HasLegacyItemDetailsPanel
	// bool HasLegacyItemDetailsPanel();                                                                                        // [0x2a1f97c] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.HandleItemTagSelected
	// void HandleItemTagSelected(FName TagID, bool bSelected);                                                                 // [0x9be39cc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemDetailsPanel.BP_GetSpecialItemTags
	// TArray<FName> BP_GetSpecialItemTags();                                                                                   // [0x1d9241c] Event|Protected|BlueprintEvent|Const 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemInfo
/// Size: 0x0010 (0x0002E8 - 0x0002F8)
class UFortEmporiumItemInfo : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TArray<FName>)                             HiddenTags                                                  OFFSET(get<T>, {0x2E8, 16, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.UpdateWithFortItem
	// void UpdateWithFortItem(UFortItem* Item, bool bAllowInteractiveTags);                                                    // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.ShowSelectItemTagsPrompt
	// void ShowSelectItemTagsPrompt(bool bShowPrompt);                                                                         // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.SetTagFocus
	// void SetTagFocus();                                                                                                      // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.SetSelectItemTagsPrompt
	// void SetSelectItemTagsPrompt(FText& Prompt);                                                                             // [0x1d9241c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemInfo.SetSelectItemTagsIcon
	// void SetSelectItemTagsIcon(FSlateBrush SelectItemTagsIcon);                                                              // [0x1d9241c] Event|Public|BlueprintEvent 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumCategoryEntry
/// Size: 0x0020 (0x000028 - 0x000048)
class UFortEmporiumCategoryEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   Path                                                        OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Hash                                                        OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemListMenu
/// Size: 0x0430 (0x000400 - 0x000830)
class UFortEmporiumItemListMenu : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
	CMember(UClass*)                                   PanelDataClass                                              OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UDataTable*)                               ItemListCategorySource                                      OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UFortCreativeItemListPanelData*)           ItemListPanelData                                           OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UClass*)                                   InventoryTabClass                                           OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UClass*)                                   LevelManagementTabClass                                     OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UClass*)                                   HomeTabClass                                                OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UClass*)                                   InventoryTabButton                                          OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UFortEmporiumItemListTabPanel*)            ChestTabPanel                                               OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UFortCreativeLevelManagementTabPanel*)     LevelManagementTabPanel                                     OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UFortEmporiumHomeTabPanel*)                HomeTabPanel                                                OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UFortEmporiumItemListTabPanel*)            FabTabPanel                                                 OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UFortEmporiumItemListTabPanel*)            SubItemsTabPanel                                            OFFSET(get<T>, {0x488, 8, 0, 0})
	SMember(FName)                                     FabTabNameId                                                OFFSET(getStruct<T>, {0x490, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          OFFSET(getStruct<T>, {0x4A0, 240, 0, 0})
	SMember(FAthenaMapScreenContainerTabInfo)          MapScreenContainerTabInfo                                   OFFSET(getStruct<T>, {0x590, 72, 0, 0})
	DMember(bool)                                      bIsDefaultActiveTab                                         OFFSET(get<bool>, {0x5D8, 1, 0, 0})
	DMember(bool)                                      bAddItemToInventoryOnEquip                                  OFFSET(get<bool>, {0x5D9, 1, 0, 0})
	DMember(bool)                                      bLoadItemsOnInitialized                                     OFFSET(get<bool>, {0x5DA, 1, 0, 0})
	DMember(int32_t)                                   LastUsedSlot                                                OFFSET(get<int32_t>, {0x5DC, 4, 0, 0})
	CMember(TMap<FName, UFortCreativeContentBrowserTabPanelBase*>) TabMap                                          OFFSET(get<T>, {0x5E8, 80, 0, 0})
	CMember(TArray<UFortEmporiumItemDefinition*>)      EmporiumItemDefinitionList                                  OFFSET(get<T>, {0x708, 16, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  Switcher_Categories                                         OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_ItemTabWarnings                                    OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_ChestEmpty                                          OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_TabEmpty                                            OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_DownloadingFabCategories                            OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_FabCategoriesNotLoaded                              OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_CommandBar                                         OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_ChestCommands                                       OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_VendCommands                                        OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(UFortCreativeMenuQuickbar*)                MenuQuickbar_QuickBars                                      OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_ResetChest                                           OFFSET(get<T>, {0x770, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CreateChest                                          OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_AddToQuickBar                                        OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_OpenItem                                             OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_PlaceNow                                             OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Equip                                                OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_AddToChest                                           OFFSET(get<T>, {0x7A0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Drop                                                 OFFSET(get<T>, {0x7A8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_CreateLlama                                          OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_RemoveFromChest                                      OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_SearchFilters                                       OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(UCommonAnimatedSwitcher*)                  Switcher_LeftPanel                                          OFFSET(get<T>, {0x7C8, 8, 0, 0})
	CMember(UEmporiumBrowserFiltersPanel*)             FiltersPanel                                                OFFSET(get<T>, {0x7D0, 8, 0, 0})
	CMember(UFortEmporiumItemDetailsPanel*)            SubTabItemDetailsPanel                                      OFFSET(get<T>, {0x7D8, 8, 0, 0})
	CMember(UAthenaCustomizationPickerSortAndFilterBlade*) Blade_SortAndFilter                                     OFFSET(get<T>, {0x7E0, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_SidePanels                                         OFFSET(get<T>, {0x7E8, 8, 0, 0})
	CMember(UFortEmporiumItemDetailsPanel*)            ItemDetailsSidePanel_DefaultSidePanel                       OFFSET(get<T>, {0x7F0, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_ProductPage                                        OFFSET(get<T>, {0x7F8, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_ItemBrowser                                         OFFSET(get<T>, {0x800, 8, 0, 0})
	CMember(UFortEmporiumItemDetailsPanel*)            ItemProductPagePanel                                        OFFSET(get<T>, {0x808, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_InventoryPermission                                OFFSET(get<T>, {0x810, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_EmporiumPanel                                       OFFSET(get<T>, {0x818, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_InventoryNotAllowed                                 OFFSET(get<T>, {0x820, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_EditorDisconnected                                  OFFSET(get<T>, {0x828, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.UpdatePermissionsDisplay
	// void UpdatePermissionsDisplay();                                                                                         // [0x9be5f18] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.UpdateDetailsPanel
	// void UpdateDetailsPanel();                                                                                               // [0x9be5f04] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SwitchItemDetailsPanel
	// void SwitchItemDetailsPanel(bool bUseLegacy);                                                                            // [0x9be5e70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SpawnContainer
	// void SpawnContainer(UClass* SupplyDropClass);                                                                            // [0x9be5df0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SetSubTabOpened
	// void SetSubTabOpened(UFortItemDefinition* ItemDefinition);                                                               // [0x9be5d58] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.SetIsItemCommandsEnabled
	// void SetIsItemCommandsEnabled(bool bInIsItemCommandEnabled);                                                             // [0x581ddb8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.RefreshTabWarningState
	// void RefreshTabWarningState();                                                                                           // [0x9be5218] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.PlaceSelectionInMoveTool
	// bool PlaceSelectionInMoveTool();                                                                                         // [0x9be51f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OpenSelection
	// bool OpenSelection();                                                                                                    // [0x9be51d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnShowCategoryModal
	// void OnShowCategoryModal(bool bShowModal);                                                                               // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnSelectionOpened
	// void OnSelectionOpened(UFortItemDefinition* SelectedItemDefinition);                                                     // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnSearchFiltersVisibilityChanged
	// void OnSearchFiltersVisibilityChanged(bool bIsVisible);                                                                  // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnQuickbarStateChanged
	// void OnQuickbarStateChanged(EFortContentBrowserQuickbarState State);                                                     // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnItemsLoaded
	// void OnItemsLoaded();                                                                                                    // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnItemEquipped
	// void OnItemEquipped(FFortItemEntry& EquippedItemEntry);                                                                  // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnFabItemQueryComplete
	// void OnFabItemQueryComplete(bool bSuccess, FString JsonString);                                                          // [0x9be4ad8] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnFabCategoryListLoaded
	// void OnFabCategoryListLoaded(bool bSuccess, FString JsonString);                                                         // [0x9be43e0] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnExitSubTab
	// void OnExitSubTab();                                                                                                     // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnCursorModeChanged
	// void OnCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget);               // [0x9be42d4] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnCreativeQuickbarComponentLoaded
	// void OnCreativeQuickbarComponentLoaded();                                                                                // [0x935f780] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnContentRatingFilterChanged
	// void OnContentRatingFilterChanged();                                                                                     // [0x9be403c] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.OnBuiltInItemsLoaded
	// void OnBuiltInItemsLoaded();                                                                                             // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.NativeOnItemsRefreshed
	// void NativeOnItemsRefreshed();                                                                                           // [0x9be42c0] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.NativeOnItemsLoaded
	// void NativeOnItemsLoaded();                                                                                              // [0x9be42ac] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.NativeOnBuiltInItemsLoaded
	// void NativeOnBuiltInItemsLoaded();                                                                                       // [0x9be4298] Final|Native|Public  
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.LoadFabItems
	// void LoadFabItems();                                                                                                     // [0x9be4284] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.IsSubTabOpened
	// bool IsSubTabOpened();                                                                                                   // [0x581c66c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.InitializeTabs
	// void InitializeTabs();                                                                                                   // [0x9be4214] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.InitializeFabTab
	// void InitializeFabTab();                                                                                                 // [0x9be4200] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleTabSortButtonClicked
	// void HandleTabSortButtonClicked();                                                                                       // [0x9be4160] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleTabSelected
	// void HandleTabSelected(FName TabID);                                                                                     // [0x9be40e0] Final|Native|Private|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleTabItemDetailClicked
	// void HandleTabItemDetailClicked(FName& TagID);                                                                           // [0x9be4050] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleSortChanged
	// void HandleSortChanged();                                                                                                // [0x9be403c] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleSortButtonClicked
	// void HandleSortButtonClicked(FName SortNameId, UCommonButtonBase* NewButton);                                            // [0x9be3f78] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleSelectionChanged
	// void HandleSelectionChanged(UFortCreativeContentBrowserTabPanelBase* Tab);                                               // [0x9be3e20] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleQuickbarStateChanged
	// void HandleQuickbarStateChanged(EFortContentBrowserQuickbarState State);                                                 // [0x9be3d04] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleQuickbarPanelIsFocused
	// void HandleQuickbarPanelIsFocused(bool bIsFocused);                                                                      // [0x9be3c84] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleModalHitBlockerClicked
	// void HandleModalHitBlockerClicked();                                                                                     // [0x9be3c48] Final|Native|Private|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemThumbnailDownloaded
	// void HandleItemThumbnailDownloaded(UFortEmporiumItemDefinition* ItemDefinition);                                         // [0x9be3bc8] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemTagSelected
	// void HandleItemTagSelected(FName& TagID, bool bSelected);                                                                // [0x9be3a90] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemDoubleClicked
	// void HandleItemDoubleClicked(FFortItemEntry& ItemEntry);                                                                 // [0x9be3914] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleItemClicked
	// void HandleItemClicked(FFortItemEntry& ItemEntry);                                                                       // [0x9be37c0] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleGlobalSortPanelToggle
	// void HandleGlobalSortPanelToggle();                                                                                      // [0x9be37ac] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleFilterPanelIsFocused
	// void HandleFilterPanelIsFocused(bool bIsFocused);                                                                        // [0x9be3668] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleFilterChanged
	// void HandleFilterChanged();                                                                                              // [0x9be3590] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleFilterButtonClicked
	// void HandleFilterButtonClicked(FName FilterNameId, UCommonButtonBase* NewButton);                                        // [0x9be34cc] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleEquipItem
	// void HandleEquipItem(FFortItemEntry& ItemEntry);                                                                         // [0x9be3408] Final|Native|Private|HasOutParms 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleChestItemCountChanged
	// void HandleChestItemCountChanged(int32_t Count);                                                                         // [0x9be3388] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleCategoryActivated
	// void HandleCategoryActivated(FName CategoryID);                                                                          // [0x9be3270] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.HandleAddSelectionToMoveToolComplete
	// void HandleAddSelectionToMoveToolComplete();                                                                             // [0x9be3188] Final|Native|Private 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetSubTabSelectedItemDefinition
	// UFortItemDefinition* GetSubTabSelectedItemDefinition();                                                                  // [0x9be309c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetLastSelectedTabName
	// FName GetLastSelectedTabName();                                                                                          // [0x9be3060] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetCurrentTab
	// UFortCreativeContentBrowserTabPanelBase* GetCurrentTab();                                                                // [0x9be2ff8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.GetCurrentSelection
	// FFortItemEntry GetCurrentSelection();                                                                                    // [0x9be2f94] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.EquipSelection
	// bool EquipSelection();                                                                                                   // [0x9be2dd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.EquipItem
	// bool EquipItem(FFortItemEntry& ItemEntry);                                                                               // [0x9be2d10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.DropItem
	// bool DropItem(FFortItemEntry& SelectedItem);                                                                             // [0x9be2c28] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.CanEquip
	// bool CanEquip(FFortItemEntry& SelectedItem);                                                                             // [0x9be2b00] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.CanDropItem
	// bool CanDropItem(FFortItemEntry& SelectedItem);                                                                          // [0x9be2a38] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.CanAddToChest
	// bool CanAddToChest(FFortItemEntry& SelectedItem);                                                                        // [0x9be2970] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListMenu.AddSelectionToQuickBar
	// bool AddSelectionToQuickBar();                                                                                           // [0x9be2944] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel
/// Size: 0x03F8 (0x000448 - 0x000840)
class UFortEmporiumItemListTabPanel : public UFortCreativeContentBrowserTabPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2112;

public:
	SMember(FMulticastInlineDelegate)                  OnSourceItemCountChanged                                    OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemClickedDelegate                                       OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemDoubleClickedDelegate                                 OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	CMember(UAthenaCreativeItemTileView*)              CreativeTileView_ItemOptions                                OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Sort                                                 OFFSET(get<T>, {0x4B8, 8, 0, 0})
	SMember(FFortItemEntry)                            CurrentItemEntry                                            OFFSET(getStruct<T>, {0x4C0, 408, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnItemCountChanged                                          OFFSET(getStruct<T>, {0x658, 16, 0, 0})
	CMember(TArray<FFortItemEntry>)                    Items                                                       OFFSET(get<T>, {0x668, 16, 0, 0})
	CMember(TArray<FFortItemEntry>)                    SourceItems                                                 OFFSET(get<T>, {0x678, 16, 0, 0})
	CMember(UFortEmporiumItemListMenu*)                EmporiumItemListMenuParent                                  OFFSET(get<T>, {0x828, 8, 0, 0})


	/// Functions
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.UpdateTabHeader
	// void UpdateTabHeader();                                                                                                  // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.UpdateSortButton
	// void UpdateSortButton(FText& SortType);                                                                                  // [0x1d9241c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ShowTopButtonBar
	// void ShowTopButtonBar(bool bShow);                                                                                       // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ShowLegacyItemDetailsPanel
	// bool ShowLegacyItemDetailsPanel();                                                                                       // [0x9be5dd8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.SetActiveItemDetailTags
	// void SetActiveItemDetailTags(TArray<FName>& TagIDs);                                                                     // [0x1d9241c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.RestoreLastSelection
	// void RestoreLastSelection();                                                                                             // [0x9be5b1c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.RemoveSelectedItem
	// void RemoveSelectedItem();                                                                                               // [0x9be522c] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ItemEquipped
	// void ItemEquipped(FFortItemEntry& Item);                                                                                 // [0x1d9241c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.IsSubTabOpened
	// bool IsSubTabOpened();                                                                                                   // [0x9be425c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.IsEmpty
	// bool IsEmpty();                                                                                                          // [0x9be4228] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.HandleItemDetailTagSelected
	// void HandleItemDetailTagSelected(FName& TagID);                                                                          // [0x9be3884] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.GetSubTabSelectedItemDefinition
	// UFortItemDefinition* GetSubTabSelectedItemDefinition();                                                                  // [0x9be30c4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.GetCollapseBorderPadFlagForCategory
	// bool GetCollapseBorderPadFlagForCategory();                                                                              // [0x9be2f7c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.GetCardSizeForCategory
	// EFortItemCardSize GetCardSizeForCategory();                                                                              // [0x9be2ea8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.FocusCurrentSelection
	// void FocusCurrentSelection();                                                                                            // [0x1d9241c] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ClearFilteredItems
	// void ClearFilteredItems();                                                                                               // [0x9be2c14] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.ClearAllItems
	// void ClearAllItems();                                                                                                    // [0x9be2c00] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.CanPlayerCreateInVolume
	// bool CanPlayerCreateInVolume();                                                                                          // [0x9be2bc8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.AddItemToSource
	// void AddItemToSource(FFortItemEntry& ItemToAdd);                                                                         // [0x9be2840] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CreativeEmporiumUI.FortEmporiumItemListTabPanel.AddItem
	// void AddItem(FFortItemEntry& ItemToAdd);                                                                                 // [0x9be277c] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CreativeEmporiumUI.FortEmporiumUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortEmporiumUtilities : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumItemData
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FFortEmporiumItemData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Title                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Namespace                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   EntityType                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   ThumbnailURL                                                OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(float)                                     Price                                                       OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FString)                                   BaseCurrency                                                OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   SketchfabUID                                                OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(TArray<FName>)                             TagList                                                     OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(EFortEmporiumItemLicense)                  LicenseType                                                 OFFSET(get<T>, {0x88, 1, 0, 0})
	DMember(bool)                                      bRequiresEntitlement                                        OFFSET(get<bool>, {0x89, 1, 0, 0})
	SMember(FString)                                   VersePath                                                   OFFSET(getStruct<T>, {0x90, 16, 0, 0})
	CMember(TArray<FString>)                           AssetIds                                                    OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(int32_t)                                   FileSize                                                    OFFSET(get<int32_t>, {0xB0, 4, 0, 0})
	SMember(FString)                                   Description                                                 OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   Seller                                                      OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	DMember(int32_t)                                   MaterialCount                                               OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(int32_t)                                   PolygonCount                                                OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	DMember(int32_t)                                   VertexCount                                                 OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	DMember(int32_t)                                   ChildAssetCount                                             OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumItemLicenseData
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortEmporiumItemLicenseData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   Keyword                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(EFortEmporiumItemLicense)                  License                                                     OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FString)                                   URL                                                         OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumSortEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortEmporiumSortEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(EFortEmporiumItemSortMode)                 Mode                                                        OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumPriceFilterEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortEmporiumPriceFilterEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     Text                                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EFortEmporiumItemPriceFilter)              Filter                                                      OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumFilterEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortEmporiumFilterEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     TextRoot                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(EFortEmporiumItemFilterMode)               Mode                                                        OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/CreativeEmporiumUI.FortEmporiumFilterCategory
/// Size: 0x0020 (0x000000 - 0x000020)
class FFortEmporiumFilterCategory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     ID                                                          OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ParentID                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIsTab                                                      OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bShowCategoryModal                                          OFFSET(get<bool>, {0x9, 1, 0, 0})
	CMember(TArray<FName>)                             SubcategoryIDList                                           OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemSortMode
/// Size: 0x08
enum EFortEmporiumItemSortMode : uint8_t
{
	EFortEmporiumItemSortMode__MCP0                                                  = 0,
	EFortEmporiumItemSortMode__AtoZ1                                                 = 1,
	EFortEmporiumItemSortMode__ZtoA2                                                 = 2,
	EFortEmporiumItemSortMode__PriceLowToHigh3                                       = 3,
	EFortEmporiumItemSortMode__PriceHighToLow4                                       = 4,
	EFortEmporiumItemSortMode__SizeLowToHigh5                                        = 5,
	EFortEmporiumItemSortMode__SizeHighToLow6                                        = 6,
	EFortEmporiumItemSortMode__EFortEmporiumItemSortMode_MAX7                        = 7
};

/// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemFilterMode
/// Size: 0x03
enum EFortEmporiumItemFilterMode : uint8_t
{
	EFortEmporiumItemFilterMode__Price0                                              = 0,
	EFortEmporiumItemFilterMode__License1                                            = 1,
	EFortEmporiumItemFilterMode__EFortEmporiumItemFilterMode_MAX2                    = 2
};

/// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemPriceFilter
/// Size: 0x05
enum EFortEmporiumItemPriceFilter : uint8_t
{
	EFortEmporiumItemPriceFilter__Invalid0                                           = 0,
	EFortEmporiumItemPriceFilter__Free1                                              = 1,
	EFortEmporiumItemPriceFilter__Premium2                                           = 2,
	EFortEmporiumItemPriceFilter__All3                                               = 255,
	EFortEmporiumItemPriceFilter__EFortEmporiumItemPriceFilter_MAX4                  = 256
};

/// Enum /Script/CreativeEmporiumUI.EFortEmporiumItemLicense
/// Size: 0x11
enum EFortEmporiumItemLicense : uint8_t
{
	EFortEmporiumItemLicense__Invalid0                                               = 0,
	EFortEmporiumItemLicense__CC01                                                   = 1,
	EFortEmporiumItemLicense__CC_BY2                                                 = 2,
	EFortEmporiumItemLicense__CC_BY_SA3                                              = 4,
	EFortEmporiumItemLicense__CC_BY_NC4                                              = 8,
	EFortEmporiumItemLicense__CC_BY_NC_SA5                                           = 16,
	EFortEmporiumItemLicense__CC_BY_ND6                                              = 32,
	EFortEmporiumItemLicense__CC_BY_NC_ND7                                           = 64,
	EFortEmporiumItemLicense__Standard8                                              = 128,
	EFortEmporiumItemLicense__All9                                                   = 255,
	EFortEmporiumItemLicense__EFortEmporiumItemLicense_MAX10                         = 256
};

