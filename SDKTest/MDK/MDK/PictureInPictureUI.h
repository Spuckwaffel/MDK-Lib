
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
	CMember(USubtitleDisplayNative*)                   SubtitleDisplay                                             OFFSET(get<T>, {0x28, 8, 0, 0})
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
	CMember(USizeBox*)                                 Video_Size_Box                                              OFFSET(get<T>, {0x3F0, 8, 0, 0})
	SMember(FVector2D)                                 StandardVideoSize                                           OFFSET(getStruct<T>, {0x3F8, 16, 0, 0})
	SMember(FVector2D)                                 StandardVideoTranslation                                    OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	SMember(FMargin)                                   FrontEndSubtitleMargin                                      OFFSET(getStruct<T>, {0x418, 16, 0, 0})
	SMember(FMargin)                                   GameSubtitleMargin                                          OFFSET(getStruct<T>, {0x428, 16, 0, 0})
	CMember(UImage*)                                   Image_Movie                                                 OFFSET(get<T>, {0x438, 8, 0, 0})
	CMember(UCommonLazyImage*)                         Image_Thumbnail_Prev                                        OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UCommonLazyImage*)                         Image_Thumbnail_Next                                        OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UNamedSlot*)                               MetadataOverlaySlot                                         OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Main                                                OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Keybind                                             OFFSET(get<T>, {0x460, 8, 0, 0})
	SMember(FDataTableRowHandle)                       PressedObjectInputAction                                    OFFSET(getStruct<T>, {0x468, 16, 0, 0})
	CMember(UPictureInPicturePartnerControls*)         CurrentPartner                                              OFFSET(get<T>, {0x480, 8, 0, 0})
	DMember(bool)                                      bEnableUCPCheck                                             OFFSET(get<bool>, {0x488, 1, 0, 0})
	CMember(UClass*)                                   SourcePickerClass                                           OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(USoundSourceBus*)                          SourceBus                                                   OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ToggleActionWidget                                          OFFSET(get<T>, {0x4A0, 8, 0, 0})
	CMember(UCommonActivatableWidget*)                 SourcePickerWidget                                          OFFSET(get<T>, {0x4A8, 8, 0, 0})
	CMember(UPictureInPicturePlayer*)                  VideoWidget                                                 OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UAudioComponent*)                          PIPSoundComponent                                           OFFSET(get<T>, {0x4D8, 8, 0, 0})
	SMember(FPiPPartnerSource)                         CurrentSource                                               OFFSET(getStruct<T>, {0x4E0, 488, 0, 0})
	CMember(USubtitleDisplay*)                         Subtitles                                                   OFFSET(get<T>, {0x6D0, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.ToggleFullScreenPiP
	// void ToggleFullScreenPiP();                                                                                              // [0x9cebc54] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.ShowDebugInfo
	// void ShowDebugInfo(bool bShow);                                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.SetupPIPSoundComponent
	// void SetupPIPSoundComponent(FFortMediaEventsStreamAssets& InStreamAssets);                                               // [0x9cebb88] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.IntentionalDeactivate
	// void IntentionalDeactivate();                                                                                            // [0x25a100c] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleToggleFullscreenMap
	// void HandleToggleFullscreenMap(bool bFullscreenMapVisible);                                                              // [0x9cebb08] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerSourceChanged
	// void HandleOnPartnerSourceChanged(FPiPPartnerSource& InSelectedSource);                                                  // [0x9ceb92c] Final|Native|Protected|HasOutParms 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerListUpdated
	// void HandleOnPartnerListUpdated();                                                                                       // [0x227d158] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleOnPartnerChanged
	// void HandleOnPartnerChanged(UPictureInPicturePartnerControls* NewPartnerControls);                                       // [0x9ceb6b4] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.HandleIsPictureInPictureEnabledChanged
	// void HandleIsPictureInPictureEnabledChanged(bool bIsPiPEnabled);                                                         // [0x9ceb620] Final|Native|Protected 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.FlipPIPAudioSubmix
	// void FlipPIPAudioSubmix(bool bInDefault, FFortMediaEventsStreamAssets& InStreamAssets, bool bForce);                     // [0x9ceb404] Final|Native|Private|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.DestroyPIPSoundComponent
	// void DestroyPIPSoundComponent();                                                                                         // [0x9ceb3f0] Final|Native|Private|BlueprintCallable 
	// Function /Script/PictureInPictureUI.PictureInPicturePanelWidget.AutoEnableController
	// void AutoEnableController();                                                                                             // [0x3581160] Final|Native|Private 
};

/// Class /Script/PictureInPictureUI.PictureInPictureSourcePicker
/// Size: 0x01F8 (0x0003E8 - 0x0005E0)
class UPictureInPictureSourcePicker : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	SMember(FVector2D)                                 FullScreenTranslation                                       OFFSET(getStruct<T>, {0x3F0, 16, 0, 0})
	SMember(FVector2D)                                 StandardTranslation                                         OFFSET(getStruct<T>, {0x400, 16, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_Main                                            OFFSET(get<T>, {0x410, 8, 0, 0})
	SMember(FSlateBrush)                               FullScreenActionBrush                                       OFFSET(getStruct<T>, {0x420, 192, 0, 0})
	SMember(FSlateBrush)                               StandardScreenActionBrush                                   OFFSET(getStruct<T>, {0x4E0, 192, 0, 0})
	SMember(FPrimaryContentSetup)                      PrimaryContentSetup                                         OFFSET(getStruct<T>, {0x5A1, 3, 0, 0})
	CMember(UCommonTextBlock*)                         Text_ItemName                                               OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UFortPickerOverlay*)                       PickerOverlay_MediaSource                                   OFFSET(get<T>, {0x5B0, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Main                                                OFFSET(get<T>, {0x5B8, 8, 0, 0})
	CMember(UTexture2D*)                               DefaultItemTexture                                          OFFSET(get<T>, {0x5C0, 8, 0, 0})
	CMember(UPictureInPictureMediaController*)         CurrentPartner                                              OFFSET(get<T>, {0x5C8, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerSourceChanged
	// void HandleOnPartnerSourceChanged(TArray<FPiPPartnerSource>& CurrentSources);                                            // [0x9ceb9f0] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureUI.PictureInPictureSourcePicker.HandleOnPartnerChanged
	// void HandleOnPartnerChanged(UPictureInPicturePartnerControls* NewPartner);                                               // [0x9ceb8a8] Final|Native|Private 
};

