/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VKDownloadOnDemandUI.

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectManagementTab
/// Size: 0x00A0 (0x0002A8 - 0x000348)
class UDownloadOnDemandProjectManagementTab : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(UDownloadOnDemandProject*)                 Project                                                     ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_ProjectTitle                                      ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_LinkCode                                          ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_VersionNumber                                     ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_LatestVersionNumber                               ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(UImage*)                                   Image_LatestVersionSpinner                                  ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_Description                                       ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_RemoveProject                                        ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_UpdateProject                                        ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_Props                                              ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UCommonTileView*)                          CommonTileView_ProjectAssetTiles                            ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_NoPropsMessage                                    ___ OFFSET(get<T>, {0x340, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandTabPanel
/// Size: 0x00A8 (0x000430 - 0x0004D8)
class UDownloadOnDemandTabPanel : public UFortCreativeContentBrowserTabPanelBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1240;

public:
	SMember(FDataTableRowHandle)                       AddProjectWithLinkCodeInputRowHandle                        ___ OFFSET(get<T>, {0x430, 16, 0, 0})
	SMember(FDataTableRowHandle)                       AddSelectedProjectInputRowHandle                            ___ OFFSET(get<T>, {0x440, 16, 0, 0})
	SMember(FDataTableRowHandle)                       ManageSelectedProjectInputRowHandle                         ___ OFFSET(get<T>, {0x450, 16, 0, 0})
	CMember(UClass*)                                   DownloadOnDemandProjectDetailsSidePanelClass                ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UClass*)                                   DownloadOnDemandAddProjectModalClass                        ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UClass*)                                   DownloadOnDemandMessageModalClass                           ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FString)                                   AddProjectsWithMnemonicEntitlementName                      ___ OFFSET(get<T>, {0x478, 16, 0, 0})
	CMember(UDownloadOnDemandProject*)                 SelectedProject                                             ___ OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_AddProjectParent                                    ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UCommonTileView*)                          CommonTileView_ProjectTiles                                 ___ OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                Switcher_DownloadOnDemandPanels                             ___ OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_AddProject                                           ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_EntitlementCheckMessage                       ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(UHorizontalBox*)                           HorizontalBox_EntitlementCheckFailed                        ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(UDownloadOnDemandProjectManagementTab*)    ProjectManagementTab                                        ___ OFFSET(get<T>, {0x4D0, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandTab_EntitlementCreationCondition
/// Size: 0x0010 (0x000028 - 0x000038)
class UDownloadOnDemandTab_EntitlementCreationCondition : public UCreativeContentBrowserTab_CreationCondition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   EntitlementName                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandAddProjectModal
/// Size: 0x0048 (0x0003E8 - 0x000430)
class UDownloadOnDemandAddProjectModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(UDownloadOnDemandProject*)                 Project                                                     ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UEditableTextBox*)                         EditableTextBox_DownloadLinkCode                            ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_AddProject                                           ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Cancel                                               ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(UDownloadOnDemandProjectTileImage*)        ProjectTileImage_Preview                                    ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_ProjectTitle                                        ___ OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_ProjectTitle                                      ___ OFFSET(get<T>, {0x428, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandMessageModal
/// Size: 0x0018 (0x0003E8 - 0x000400)
class UDownloadOnDemandMessageModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	CMember(UCommonTextBlock*)                         TextBlock_MessageTitle                                      ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_Message                                           ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UCommonButtonLegacy*)                      Button_Close                                                ___ OFFSET(get<T>, {0x3F8, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectDetailsSidePanel
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UDownloadOnDemandProjectDetailsSidePanel : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(UDownloadOnDemandProjectTile*)             DownloadOnDemandProjectTile_CurrentProjectEntry             ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCreativeContentBrowserItemInfo*)          ContentBrowserItemInfo_ItemDetails                          ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandStatusFeed
/// Size: 0x0010 (0x0002A8 - 0x0002B8)
class UDownloadOnDemandStatusFeed : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	DMember(bool)                                      bOverrideOldStatusWithNewStatus                             ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	CMember(UFortDynamicEntryBox*)                     EntryBox_DownloadStatusContainer                            ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandStatusFeedLine
/// Size: 0x0008 (0x0002A8 - 0x0002B0)
class UDownloadOnDemandStatusFeedLine : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(UCommonTextBlock*)                         TextBlock_DownloadStatus                                    ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTileInitializer
/// Size: 0x0010 (0x000028 - 0x000038)
class UDownloadOnDemandProjectAssetTileInitializer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortPlaysetPropItemDefinition*)           PropItemDefinition                                          ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectAssetTile
/// Size: 0x0040 (0x0014C0 - 0x001500)
class UDownloadOnDemandProjectAssetTile : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5376;

public:
	CMember(UDownloadOnDemandProjectAssetTileInitializer*) Initializer                                             ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UImage*)                                   Image_Item                                                  ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
	CMember(UImage*)                                   Image_Spinner                                               ___ OFFSET(get<T>, {0x14E8, 8, 0, 0})
	CMember(UCommonNumericTextBlock*)                  NumericTextBlock_ItemCount                                  ___ OFFSET(get<T>, {0x14F0, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTile
/// Size: 0x01F0 (0x0014C0 - 0x0016B0)
class UDownloadOnDemandProjectTile : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5808;

public:
	SMember(FSlateBrush)                               SelectedHighlightBrush                                      ___ OFFSET(get<T>, {0x14D0, 192, 0, 0})
	SMember(FSlateBrush)                               HoveredHighlightBrush                                       ___ OFFSET(get<T>, {0x1590, 192, 0, 0})
	DMember(bool)                                      bIsSelected                                                 ___ OFFSET(get<bool>, {0x1650, 1, 0, 0})
	CMember(UDownloadOnDemandProject*)                 Project                                                     ___ OFFSET(get<T>, {0x1658, 8, 0, 0})
	CMember(UDownloadOnDemandProjectTileImage*)        ProjectTileImage_Preview                                    ___ OFFSET(get<T>, {0x1670, 8, 0, 0})
	CMember(UImage*)                                   Image_UpdatePending                                         ___ OFFSET(get<T>, {0x1678, 8, 0, 0})
	CMember(UImage*)                                   Image_AddProject                                            ___ OFFSET(get<T>, {0x1680, 8, 0, 0})
	CMember(UImage*)                                   Image_Spinner                                               ___ OFFSET(get<T>, {0x1688, 8, 0, 0})
	CMember(UImage*)                                   Image_Error                                                 ___ OFFSET(get<T>, {0x1690, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Label                                               ___ OFFSET(get<T>, {0x1698, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TextBlock_Label                                             ___ OFFSET(get<T>, {0x16A0, 8, 0, 0})
	CMember(UCommonBorder*)                            Border_Highlight                                            ___ OFFSET(get<T>, {0x16A8, 8, 0, 0})
};

/// Class /Script/VKDownloadOnDemandUI.DownloadOnDemandProjectTileImage
/// Size: 0x0038 (0x0002A8 - 0x0002E0)
class UDownloadOnDemandProjectTileImage : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UTexture*)                                 EmptyProjectTexture                                         ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(bool)                                      bOverrideGrayScale                                          ___ OFFSET(get<bool>, {0x2B0, 1, 1, 0})
	DMember(float)                                     GreyScaleOverride                                           ___ OFFSET(get<float>, {0x2B4, 4, 0, 0})
	CMember(UDownloadOnDemandProject*)                 Project                                                     ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UImage*)                                   Image_ProjectPreview                                        ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UImage*)                                   Image_LoadingImageSpinner                                   ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

