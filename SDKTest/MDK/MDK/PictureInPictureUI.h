
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CommonUILegacy
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: GameFeatures
/// dependency: UMG

/// Class /Script/PictureInPictureUI.PictureInPictureBladeMenuButton
/// Size: 0x0000 (0x0014E0 - 0x0014E0)
class UPictureInPictureBladeMenuButton : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
};

/// Class /Script/PictureInPictureUI.PictureInPictureLoadingScreenOverlayAction
/// Size: 0x0038 (0x000028 - 0x000060)
class UPictureInPictureLoadingScreenOverlayAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(USubtitleDisplayNative*)                   SubtitleDisplay                                             OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/PictureInPictureUI.PictureInPictureMetadataOverlay
/// Size: 0x0000 (0x000400 - 0x000400)
class UPictureInPictureMetadataOverlay : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
};

/// Class /Script/PictureInPictureUI.PictureInPicturePanelWidget
/// Size: 0x0320 (0x000400 - 0x000720)
class UPictureInPicturePanelWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	CMember(USizeBox*)                                 Video_Size_Box                                              OFFSET(get<T>, {0x408, 8, 0, 0})
	SMember(FVector2D)                                 StandardVideoSize                                           OFFSET(getStruct<T>, {0x410, 16, 0, 0})
	SMember(FVector2D)                                 StandardVideoTranslation                                    OFFSET(getStruct<T>, {0x420, 16, 0, 0})
	SMember(FMargin)                                   FrontEndSubtitleMargin                                      OFFSET(getStruct<T>, {0x430, 16, 0, 0})
	SMember(FMargin)                                   GameSubtitleMargin                                          OFFSET(getStruct<T>, {0x440, 16, 0, 0})
	CMember(UImage*)                                   Image_Movie                                                 OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UCommonLazyImage*)                         Image_Thumbnail_Prev                                        OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UCommonLazyImage*)                         Image_Thumbnail_Next                                        OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UNamedSlot*)                               MetadataOverlaySlot                                         OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Main                                                OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Keybind                                             OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PressedObjectInputAction                                    OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	CMember(UPictureInPicturePartnerControls*)         CurrentPartner                                              OFFSET(get<T>, {0x498, 8, 0, 0})
	DMember(bool)                                      bEnableUCPCheck                                             OFFSET(get<bool>, {0x4A0, 1, 0, 0})
	CMember(UClass*)                                   SourcePickerClass                                           OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(USoundSourceBus*)                          SourceBus                                                   OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ToggleActionWidget                                          OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UCommonActivatableWidget*)                 SourcePickerWidget                                          OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(UPictureInPicturePlayer*)                  VideoWidget                                                 OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(UAudioComponent*)                          PIPSoundComponent                                           OFFSET(get<T>, {0x520, 8, 0, 0})
	SMember(FPiPPartnerSource)                         CurrentSource                                               OFFSET(getStruct<T>, {0x528, 488, 0, 0})
	CMember(USubtitleDisplay*)                         Subtitles                                                   OFFSET(get<T>, {0x718, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.ToggleFullScreenPiP
	// void ToggleFullScreenPiP();                                                                                              // [0xa1ef88c] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.ShowDebugInfo
	// void ShowDebugInfo(bool bShow);                                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.SetupPIPSoundComponent
	// void SetupPIPSoundComponent(FFortMediaEventsStreamAssets& InStreamAssets);                                               // [0xa1ef7c0] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.IntentionalDeactivate
	// void IntentionalDeactivate();                                                                                            // [0x35fe9c4] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleToggleFullscreenMap
	// void HandleToggleFullscreenMap(bool bFullscreenMapVisible);                                                              // [0xa1ef740] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerSourceChanged
	// void HandleOnPartnerSourceChanged(FPiPPartnerSource& InSelectedSource);                                                  // [0xa1ef564] Final|Native|Protected|HasOutParms 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerListUpdated
	// void HandleOnPartnerListUpdated();                                                                                       // [0x1a8b188] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerChanged
	// void HandleOnPartnerChanged(UPictureInPicturePartnerControls* NewPartnerControls);                                       // [0xa1ef2e0] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleIsPictureInPictureEnabledChanged
	// void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled);                                                         // [0xa1ef24c] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.FlipPIPAudioSubmix
	// void FlipPIPAudioSubmix(bool bInDefault, FFortMediaEventsStreamAssets& InStreamAssets, bool bForce);                     // [0xa1ef044] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.DestroyPIPSoundComponent
	// void DestroyPIPSoundComponent();                                                                                         // [0xa1ef030] Final|Native|Private|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.AutoEnableController
	// void AutoEnableController();                                                                                             // [0xa1ef01c] Final|Native|Private 
};

/// Class /Script/PictureInPictureUI.PictureInPictureSourcePicker
/// Size: 0x01F0 (0x000400 - 0x0005F0)
class UPictureInPictureSourcePicker : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	SMember(FVector2D)                                 FullScreenTranslation                                       OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	SMember(FVector2D)                                 StandardTranslation                                         OFFSET(getStruct<T>, {0x418, 16, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Main                                            OFFSET(get<T>, {0x428, 8, 0, 0})
	SMember(FSlateBrush)                               FullScreenActionBrush                                       OFFSET(getStruct<T>, {0x430, 192, 0, 0})
	SMember(FSlateBrush)                               StandardScreenActionBrush                                   OFFSET(getStruct<T>, {0x4F0, 192, 0, 0})
	SMember(FPrimaryContentSetup)                      PrimaryContentSetup                                         OFFSET(getStruct<T>, {0x5B1, 3, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemName                                               OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UFortPickerOverlay*)                       PickerOverlay_MediaSource                                   OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Main                                                OFFSET(get<T>, {0x5C8, 8, 0, 0})
	CMember(UTexture2D*)                               DefaultItemTexture                                          OFFSET(get<T>, {0x5D0, 8, 0, 0})
	CMember(UPictureInPictureMediaController*)         CurrentPartner                                              OFFSET(get<T>, {0x5D8, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerSourceChanged
	// void HandleOnPartnerSourceChanged(TArray<FPiPPartnerSource>& CurrentSources);                                            // [0xa1ef628] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerChanged
	// void HandleOnPartnerChanged(UPictureInPicturePartnerControls* NewPartner);                                               // [0xa1ef4e0] Final|Native|Private 
};

