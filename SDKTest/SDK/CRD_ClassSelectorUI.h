/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CRD_ClassSelectorUI.

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorLoadoutContainer
/// Size: 0x0048 (0x0002D0 - 0x000318)
class UClassSelectorLoadoutContainer : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UWrapBox*)                                 WrapBox                                                     ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UClass*)                                   EntryWidgetClass                                            ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(TArray<UAthenaItemElementWidgetBase*>)     EntryWidgets                                                ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	CMember(UFortItemDefinition*)                      PreviewItemDef                                              ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(int32_t)                                   NumPreviewEntries                                           ___ OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTabButtons
/// Size: 0x00B8 (0x0002D0 - 0x000388)
class UClassSelectorTabButtons : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 904;

public:
	CMember(UCommonActionWidget*)                      LeftActionWidget                                            ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonActionWidget*)                      RightActionWidget                                           ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UScrollBox*)                               TabButtonsScrollBox                                         ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonButtonBase*)                        LeftButton                                                  ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UCommonButtonBase*)                        RightButton                                                 ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FDataTableRowHandle)                       LeftInputAction                                             ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
	SMember(FDataTableRowHandle)                       RightInputAction                                            ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(TArray<UClassSelectorTeamTile*>)           TabButtons                                                  ___ OFFSET(get<T>, {0x328, 16, 0, 0})
	CMember(UClass*)                                   TabButtonClass                                              ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FMargin)                                   TabButtonPadding                                            ___ OFFSET(get<T>, {0x340, 16, 0, 0})
	CMember(TArray<FText>)                             DesignerPreviewTabNames                                     ___ OFFSET(get<T>, {0x358, 16, 0, 0})
	DMember(float)                                     ButtonScrollAmount                                          ___ OFFSET(get<float>, {0x368, 4, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamInfoWidget
/// Size: 0x0018 (0x0002A8 - 0x0002C0)
class UClassSelectorTeamInfoWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(UCommonTextBlock*)                         TeamName                                                    ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TeamCountText                                               ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TeamDescription                                             ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassSelectorButton
/// Size: 0x0040 (0x001470 - 0x0014B0)
class UCreativeClassSelectorButton : public UCommonButtonBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5296;

public:
	CMember(UCommonTextBlock*)                         ButtonTextBlock                                             ___ OFFSET(get<T>, {0x1470, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ActionWidget                                                ___ OFFSET(get<T>, {0x1478, 8, 0, 0})
	SMember(FText)                                     ButtonText                                                  ___ OFFSET(get<T>, {0x1480, 24, 0, 0})
	SMember(FDataTableRowHandle)                       buttonInputAction                                           ___ OFFSET(get<T>, {0x1498, 16, 0, 0})
	DMember(bool)                                      bAutoCapitalize                                             ___ OFFSET(get<bool>, {0x14A8, 1, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamTile
/// Size: 0x00B0 (0x0014B0 - 0x001560)
class UClassSelectorTeamTile : public UCreativeClassSelectorButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5472;

public:
	CMember(UTextBlock*)                               PlayerCount                                                 ___ OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UCommonLazyImage*)                         TeamIconImage                                               ___ OFFSET(get<T>, {0x1548, 8, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.ClassSelectorTeamTiles
/// Size: 0x0048 (0x0002D0 - 0x000318)
class UClassSelectorTeamTiles : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(TArray<UClassSelectorTeamTile*>)           TeamTiles                                                   ___ OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(UUniformGridPanel*)                        RootPanel                                                   ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UClass*)                                   EntryClass                                                  ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	DMember(int32_t)                                   DesignerPreviewEntries                                      ___ OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassItemInfo
/// Size: 0x0058 (0x000028 - 0x000080)
class UCreativeClassItemInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMinigameClassSlot)                        ClassSlot                                                   ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassEntry
/// Size: 0x0010 (0x0014B0 - 0x0014C0)
class UCreativeClassEntry : public UCreativeClassSelectorButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:
	CMember(UCreativeClassItemInfo*)                   ItemInfo                                                    ___ OFFSET(get<T>, {0x14B8, 8, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassSelector
/// Size: 0x0138 (0x0003E8 - 0x000520)
class UCreativeClassSelector : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	CMember(UClassSelectorTabButtons*)                 TabButtons_TeamSelection                                    ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UCommonListView*)                          ListView_Classes                                            ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(TArray<UCreativeClassItemInfo*>)           ClassItemInfos                                              ___ OFFSET(get<T>, {0x408, 16, 0, 0})
	CMember(UScrollBox*)                               LoadoutScrollBox                                            ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UClassSelectorLoadoutContainer*)           LoadoutContainer_Inventory                                  ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UClassSelectorLoadoutContainer*)           LoadoutContainer_Resources                                  ___ OFFSET(get<T>, {0x428, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_SelectLoadout                                        ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_RandomClass                                          ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          Switcher_Descriptions                                       ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UPanelWidget*)                             ClassAndTeamDescriptionContainer                            ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UPanelWidget*)                             ItemDescriptionContainer                                    ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UPanelWidget*)                             InventoryPanel                                              ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UPanelWidget*)                             ResourcesPanel                                              ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ItemRarity                                                  ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ItemName                                                    ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UCommonTextBlock*)                         ItemDescription                                             ___ OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UPanelWidget*)                             TeamDescriptionContainer                                    ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UClassSelectorTeamInfoWidget*)             TeamInfoWidget_FullView                                     ___ OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UClassSelectorTeamInfoWidget*)             TeamInfoWidget_TeamsOnly                                    ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          DisplaySwitcher                                             ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UPanelWidget*)                             ClassAndTeamSelectionContainer                              ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UPanelWidget*)                             OnlyTeamSelectionContainer                                  ___ OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UPanelWidget*)                             InvalidDataContainer                                        ___ OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UClassSelectorTeamTiles*)                  TeamTiles                                                   ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UClass*)                                   TeamSelectionTabClass                                       ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
	DMember(bool)                                      bIsModalVersion                                             ___ OFFSET(get<bool>, {0x4C8, 1, 0, 0})
	DMember(bool)                                      bEnableModalTimeLimit                                       ___ OFFSET(get<bool>, {0x4C9, 1, 0, 0})
	DMember(int32_t)                                   ModalTimeLimitInSeconds                                     ___ OFFSET(get<int32_t>, {0x4CC, 4, 0, 0})
	CMember(EClassSelectorDisplayMode)                 DisplayMode                                                 ___ OFFSET(get<T>, {0x4E0, 1, 0, 0})
	DMember(bool)                                      bDeferRespawn                                               ___ OFFSET(get<bool>, {0x4E1, 1, 0, 0})
	SMember(FDataTableRowHandle)                       ReturnToClassSelectionInputAction                           ___ OFFSET(get<T>, {0x4E8, 16, 0, 0})
	DMember(float)                                     LoadoutScrollPadding                                        ___ OFFSET(get<float>, {0x4F8, 4, 0, 0})
	CMember(UCreativeClassItemInfo*)                   SelectedClassItemInfo                                       ___ OFFSET(get<T>, {0x518, 8, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.CreativeClassSelectorMapTab
/// Size: 0x0060 (0x0003E8 - 0x000448)
class UCreativeClassSelectorMapTab : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FAthenaMapScreenContainerTabInfo)          MapTabInfo                                                  ___ OFFSET(get<T>, {0x3F8, 72, 0, 0})
	CMember(UCreativeClassSelector*)                   CreativeClassSelector                                       ___ OFFSET(get<T>, {0x440, 8, 0, 0})
};

/// Class /Script/CRD_ClassSelectorUI.Mutator_ClassSelectorUI
/// Size: 0x0000 (0x000338 - 0x000338)
class AMutator_ClassSelectorUI : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

