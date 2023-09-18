/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CraftingUI.

/// Class /Script/CraftingUI.FortCraftingListItem
/// Size: 0x00F0 (0x000028 - 0x000118)
class UFortCraftingListItem : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
};

/// Class /Script/CraftingUI.AthenaCraftingQuickBarButton
/// Size: 0x0020 (0x001480 - 0x0014A0)
class UAthenaCraftingQuickBarButton : public UAthenaQuickBarSlotButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5280;

public:
};

/// Class /Script/CraftingUI.AthenaEquippedItemCraftingIndicator
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UAthenaEquippedItemCraftingIndicator : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
};

/// Class /Script/CraftingUI.AthenaInventoryItemInfoCraftingIndicator
/// Size: 0x0020 (0x0002D0 - 0x0002F0)
class UAthenaInventoryItemInfoCraftingIndicator : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
};

/// Class /Script/CraftingUI.AthenaQuickBarSlotCraftingIndicator
/// Size: 0x0030 (0x0002D8 - 0x000308)
class UAthenaQuickBarSlotCraftingIndicator : public UAthenaQuickBarSlotExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	DMember(bool)                                      bCheckForIngredientChangesWhenCraftable                     ___ OFFSET(get<bool>, {0x2F8, 1, 0, 0})
};

/// Class /Script/CraftingUI.FortCookingScreen
/// Size: 0x0050 (0x0003E8 - 0x000438)
class UFortCookingScreen : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FDataTableRowHandle)                       CloseInputAction                                            ___ OFFSET(get<T>, {0x3F0, 16, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_EjectAll                                             ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Cancel                                               ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_RecipeName                                             ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_RecipeDescription                                      ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UImage*)                                   Image_Recipe                                                ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UFortSlottedRadialMenu*)                   RadialMenu_Recipes                                          ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Script/CraftingUI.FortCraftingFormulaIngredientsWidget
/// Size: 0x0008 (0x0002D0 - 0x0002D8)
class UFortCraftingFormulaIngredientsWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UDynamicEntryBox*)                         EntryBox_Ingredients                                        ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
};

/// Class /Script/CraftingUI.FortCraftingIngredientWidget
/// Size: 0x0028 (0x0002D0 - 0x0002F8)
class UFortCraftingIngredientWidget : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(UCommonTextBlock*)                         Text_NumAvailable                                           ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_NumRequired                                            ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UAthenaItemIcon*)                          ItemIcon                                                    ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonLazyImage*)                         LazyImage_Icon                                              ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
};

/// Class /Script/CraftingUI.FortCraftingItemInfoWidget
/// Size: 0x0068 (0x0003E8 - 0x000450)
class UFortCraftingItemInfoWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FText)                                     RarityTextFormat                                            ___ OFFSET(get<T>, {0x3F0, 24, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemName                                               ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemRarity                                             ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemCategory                                           ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UFortItemCategoryIndicator*)               ItemCategoryIndicator                                       ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemDescription                                        ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UAthenaInventoryItemStatsWidget*)          ItemStatsWidget                                             ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UFortCraftingFormulaIngredientsWidget*)    IngredientsWidget                                           ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_StartCrafting                                        ___ OFFSET(get<T>, {0x440, 8, 0, 0})
};

/// Class /Script/CraftingUI.FortCraftingListEntry
/// Size: 0x0020 (0x0014C0 - 0x0014E0)
class UFortCraftingListEntry : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	CMember(UAthenaItemIcon*)                          ItemIcon                                                    ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	DMember(bool)                                      bCanCraftItem                                               ___ OFFSET(get<bool>, {0x14D0, 1, 0, 0})
};

/// Class /Script/CraftingUI.FortCraftingTab
/// Size: 0x0148 (0x0003E8 - 0x000530)
class UFortCraftingTab : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	SMember(FName)                                     TabNameID                                                   ___ OFFSET(get<T>, {0x3F0, 4, 0, 0})
	SMember(FFortTabButtonLabelInfo)                   TabButtonLabelInfo                                          ___ OFFSET(get<T>, {0x400, 240, 0, 0})
	SMember(FGameplayTagContainer)                     PrimaryIngredientTags                                       ___ OFFSET(get<T>, {0x4F0, 32, 0, 0})
	CMember(UFortCraftingItemInfoWidget*)              CraftingItemInfo                                            ___ OFFSET(get<T>, {0x510, 8, 0, 0})
	CMember(UCommonListView*)                          ListView_Recipes                                            ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UAthenaQuickbarEditorBase*)                QuickbarEditor                                              ___ OFFSET(get<T>, {0x520, 8, 0, 0})
};

/// Class /Script/CraftingUI.FortPotContentsPopup
/// Size: 0x0028 (0x0002A8 - 0x0002D0)
class UFortPotContentsPopup : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	DMember(int32_t)                                   MaxItemsToShow                                              ___ OFFSET(get<int32_t>, {0x2A8, 4, 0, 0})
	CMember(UCommonTileView*)                          TileView_PotContents                                        ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_MoreItems                                              ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UWidget*)                                  Overlay_Popup                                               ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
};

/// Class /Script/CraftingUI.FortPotContentsTile
/// Size: 0x0010 (0x0014C0 - 0x0014D0)
class UFortPotContentsTile : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	CMember(UCommonLazyImage*)                         Image_Item                                                  ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
};

/// Class /Script/CraftingUI.FortUIGameFeatureAction_SetCraftMenuWidget
/// Size: 0x0030 (0x000028 - 0x000058)
class UFortUIGameFeatureAction_SetCraftMenuWidget : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UClass*)                                   CraftingObject                                              ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CraftingMenuWidget                                          ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

