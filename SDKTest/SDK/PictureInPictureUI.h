/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package PictureInPictureUI.

/// Class /Script/PictureInPictureUI.PictureInPictureBladeMenuButton
/// Size: 0x0000 (0x0014C0 - 0x0014C0)
class UPictureInPictureBladeMenuButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:
};

/// Class /Script/PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction
/// Size: 0x0038 (0x000028 - 0x000060)
class UPictureInPictureLoadingScreenOverlayAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(USubtitleDisplayNative*)                   SubtitleDisplay                                             ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/PictureInPictureUI.PictureInPictureMetadataOverlay
/// Size: 0x0000 (0x0003E8 - 0x0003E8)
class UPictureInPictureMetadataOverlay : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
};

/// Class /Script/PictureInPictureUI.PictureInPicturePanelWidget
/// Size: 0x02F0 (0x0003E8 - 0x0006D8)
class UPictureInPicturePanelWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1752;

public:
	CMember(USizeBox*)                                 Video_Size_Box                                              ___ OFFSET(get<T>, {0x3F0, 8, 0, 0})
	SMember(FVector2D)                                 StandardVideoSize                                           ___ OFFSET(get<T>, {0x3F8, 16, 0, 0})
	SMember(FVector2D)                                 StandardVideoTranslation                                    ___ OFFSET(get<T>, {0x408, 16, 0, 0})
	SMember(FMargin)                                   FrontEndSubtitleMargin                                      ___ OFFSET(get<T>, {0x418, 16, 0, 0})
	SMember(FMargin)                                   GameSubtitleMargin                                          ___ OFFSET(get<T>, {0x428, 16, 0, 0})
	CMember(UImage*)                                   Image_Movie                                                 ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UCommonLazyImage*)                         Image_Thumbnail_Prev                                        ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UCommonLazyImage*)                         Image_Thumbnail_Next                                        ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UNamedSlot*)                               MetadataOverlaySlot                                         ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Main                                                ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Keybind                                             ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PressedObjectInputAction                                    ___ OFFSET(get<T>, {0x468, 16, 0, 0})
	CMember(UPictureInPicturePartnerControls*)         CurrentPartner                                              ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	DMember(bool)                                      bEnableUCPCheck                                             ___ OFFSET(get<bool>, {0x488, 1, 0, 0})
	CMember(UClass*)                                   SourcePickerClass                                           ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(USoundSourceBus*)                          SourceBus                                                   ___ OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ToggleActionWidget                                          ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UCommonActivatableWidget*)                 SourcePickerWidget                                          ___ OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UPictureInPicturePlayer*)                  VideoWidget                                                 ___ OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UAudioComponent*)                          PIPSoundComponent                                           ___ OFFSET(get<T>, {0x4D8, 8, 0, 0})
	SMember(FPiPPartnerSource)                         CurrentSource                                               ___ OFFSET(get<T>, {0x4E0, 488, 0, 0})
	CMember(USubtitleDisplay*)                         Subtitles                                                   ___ OFFSET(get<T>, {0x6D0, 8, 0, 0})
};

/// Class /Script/PictureInPictureUI.PictureInPictureSourcePicker
/// Size: 0x01F8 (0x0003E8 - 0x0005E0)
class UPictureInPictureSourcePicker : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FVector2D)                                 FullScreenTranslation                                       ___ OFFSET(get<T>, {0x3F0, 16, 0, 0})
	SMember(FVector2D)                                 StandardTranslation                                         ___ OFFSET(get<T>, {0x400, 16, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Main                                            ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	SMember(FSlateBrush)                               FullScreenActionBrush                                       ___ OFFSET(get<T>, {0x420, 192, 0, 0})
	SMember(FSlateBrush)                               StandardScreenActionBrush                                   ___ OFFSET(get<T>, {0x4E0, 192, 0, 0})
	SMember(FPrimaryContentSetup)                      PrimaryContentSetup                                         ___ OFFSET(get<T>, {0x5A1, 3, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemName                                               ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UFortPickerOverlay*)                       PickerOverlay_MediaSource                                   ___ OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Main                                                ___ OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UTexture2D*)                               DefaultItemTexture                                          ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UPictureInPictureMediaController*)         CurrentPartner                                              ___ OFFSET(get<T>, {0x5C8, 8, 0, 0})
};

