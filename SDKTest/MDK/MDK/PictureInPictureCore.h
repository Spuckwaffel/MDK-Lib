
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: GameFeatures

/// Class /Script/PictureInPictureCore.PictureInPictureClient
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UPictureInPictureClient : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  LoginSuccessEvent                                           OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  LogoutSuccessEvent                                          OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  QRCodeReceivedEvent                                         OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ErrorDelegate                                               OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   UserName                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(UEpicCMSImage*)                            UserAvatarImage                                             OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UTexture2DDynamic*)                        CurrentQRCodeTexture                                        OFFSET(get<T>, {0x90, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureClient.Logout
	// void Logout();                                                                                                           // [0x16748d0] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.IsLoggedIn
	// bool IsLoggedIn();                                                                                                       // [0x2cb7c3c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetQRCodeTexture
	// UTexture2DDynamic* GetQRCodeTexture();                                                                                   // [0x232e2fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetLoginState
	// TEnumAsByte<PictureInPictureAuthState> GetLoginState();                                                                  // [0x77a44bc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetAvatarImage
	// UEpicCMSImage* GetAvatarImage();                                                                                         // [0x7a10900] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.EndLogin
	// void EndLogin(UObject* InWorldContext);                                                                                  // [0x63611d8] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.CheckLogin
	// void CheckLogin(UObject* InWorldContext);                                                                                // [0x93213f0] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.BeginLogin
	// void BeginLogin(UObject* InWorldContext);                                                                                // [0x9cf817c] Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPictureCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UPictureInPictureCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PictureInPictureCore.PictureInPictureCoreEnableDisableAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UPictureInPictureCoreEnableDisableAction : public UFortUIGameFeatureAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PictureInPictureCore.PictureInPictureMediaController
/// Size: 0x06B0 (0x000028 - 0x0006D8)
class UPictureInPictureMediaController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1752;

public:
	SMember(FString)                                   PartnerName                                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<UPictureInPictureActionData*>)      ActionDataArray                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FPIPVideoPlayerAssetConfig)                DefaultPlayerAssetConfig                                    OFFSET(getStruct<T>, {0x58, 136, 0, 0})
	SMember(FPIPVideoPlayerAssetConfig)                PlayerAssetConfig                                           OFFSET(getStruct<T>, {0xE0, 136, 0, 0})
	CMember(UPictureInPicturePlayer*)                  VideoWidget                                                 OFFSET(get<T>, {0x168, 8, 0, 0})
	SMember(FPIPVideoPlayerConfig)                     VideoWidgetConfig                                           OFFSET(getStruct<T>, {0x170, 72, 0, 0})
	CMember(TWeakObjectPtr<UCommonLazyImage*>)         ThumbnailImageNext                                          OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonLazyImage*>)         ThumbnailImagePrevious                                      OFFSET(get<T>, {0x1C0, 8, 0, 0})
	DMember(bool)                                      bSupportsMultipleSources                                    OFFSET(get<bool>, {0x1C8, 1, 0, 0})
	SMember(FPiPPartnerSource)                         CurrentSource                                               OFFSET(getStruct<T>, {0x1D0, 488, 0, 0})
	CMember(TArray<FPiPPartnerSource>)                 Sources                                                     OFFSET(get<T>, {0x3B8, 16, 0, 0})
	CMember(TArray<FPiPPartnerSource>)                 ValidSources                                                OFFSET(get<T>, {0x3C8, 16, 0, 0})
	SMember(FMediaPlayerOptions)                       LocalOptions                                                OFFSET(getStruct<T>, {0x3D8, 48, 0, 0})
	SMember(FMulticastInlineDelegate)                  BaseErrorEvent                                              OFFSET(getStruct<T>, {0x408, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BaseEnabledEvent                                            OFFSET(getStruct<T>, {0x418, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SourcesChangedEvent                                         OFFSET(getStruct<T>, {0x428, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SourceSelectedEvent                                         OFFSET(getStruct<T>, {0x438, 16, 0, 0})
	CMember(TArray<FPictureInPictureActionConfig>)     InstanceActionData                                          OFFSET(get<T>, {0x450, 16, 0, 0})
	CMember(UPictureInPictureAnalyticsManager*)        AnalyticsManager                                            OFFSET(get<T>, {0x460, 8, 0, 0})
	SMember(FDateTime)                                 ActiveStartTime                                             OFFSET(getStruct<T>, {0x468, 8, 0, 0})
	SMember(FDateTime)                                 PausedStartTime                                             OFFSET(getStruct<T>, {0x470, 8, 0, 0})
	SMember(FPiPSuspendInfo)                           SuspendedInfo                                               OFFSET(getStruct<T>, {0x480, 496, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.ToggleFullScreen
	// void ToggleFullScreen();                                                                                                 // [0xa1ea5c8] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Stop
	// void Stop();                                                                                                             // [0x32bde40] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.SetEnabled
	// void SetEnabled(bool bIsEnabled, bool bIsFromUser);                                                                      // [0xa1e8b90] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.SetCurrentSource
	// void SetCurrentSource(FPiPPartnerSource& SelectedSource);                                                                // [0xa1e8ac8] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Play
	// void Play(bool bForcePlay);                                                                                              // [0xa1e8a30] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Pause
	// void Pause();                                                                                                            // [0x16e29e4] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnPrevThumbnailReceived
	// void OnPrevThumbnailReceived(UTexture2DDynamic* InTexture);                                                              // [0xa1e89b0] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnNextThumbnailReceived
	// void OnNextThumbnailReceived(UTexture2DDynamic* InTexture);                                                              // [0xa1e8930] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaStartedAnalytics
	// void OnMediaStartedAnalytics();                                                                                          // [0xa1e891c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaResumedAnalytics
	// void OnMediaResumedAnalytics();                                                                                          // [0xa1e88f4] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaPausedAnalytics
	// void OnMediaPausedAnalytics();                                                                                           // [0xa1e8908] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaClosedAnalytics
	// void OnMediaClosedAnalytics();                                                                                           // [0xa1e88f4] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsPlaying
	// bool IsPlaying();                                                                                                        // [0xa1e870c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsPaused
	// bool IsPaused();                                                                                                         // [0xa1e86e8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsMultiSourceSupported
	// bool IsMultiSourceSupported();                                                                                           // [0x57f3ae4] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsEnabled
	// bool IsEnabled();                                                                                                        // [0xa1e86d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.HandleSourceSelectedEvent
	// void HandleSourceSelectedEvent(FString SelectedSource);                                                                  // [0xa1e8024] Native|Protected     
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetValidSources
	// TArray<FPiPPartnerSource> GetValidSources();                                                                             // [0xa1e7f60] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetSources
	// TArray<FPiPPartnerSource> GetSources();                                                                                  // [0xa1e7f30] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetPlayerAssetConfig
	// FPIPVideoPlayerAssetConfig GetPlayerAssetConfig();                                                                       // [0xa1e7f14] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetMediaPlayerWidget
	// UPictureInPicturePlayer* GetMediaPlayerWidget();                                                                         // [0xa1e6624] Final|Native|Public|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetDefaultPlayerAssetConfig
	// FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig();                                                                // [0xa1e59c8] Final|Native|Public|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetCurrentSource
	// FPiPPartnerSource GetCurrentSource();                                                                                    // [0xa1e5998] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetActions
	// TArray<UPictureInPictureActionData*> GetActions();                                                                       // [0xa1e5854] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Exit
	// void Exit(bool bStop);                                                                                                   // [0x5c1f4e4] Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPictureMediaPlayerCtrl
/// Size: 0x0010 (0x000108 - 0x000118)
class UPictureInPictureMediaPlayerCtrl : public UFortMediaPlayerCtrl
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
};

/// Class /Script/PictureInPictureCore.PictureInPicturePlayer
/// Size: 0x0208 (0x000028 - 0x000230)
class UPictureInPicturePlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FPIPVideoPlayerAssetConfig)                AssetConfig                                                 OFFSET(getStruct<T>, {0x108, 136, 0, 0})
	CMember(UPictureInPictureMediaPlayerCtrl*)         MediaController                                             OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(USoundSubmixBase*)                         DefaultSubmix                                               OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(USoundSubmixBase*)                         LicensedSubmix                                              OFFSET(get<T>, {0x1F0, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.UpdateStreamingPlayerSize
	// void UpdateStreamingPlayerSize(FVector2D& InVector);                                                                     // [0xa1ea6b8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlSuccess
	// void StreamedVideoOnUrlSuccess(FString URL);                                                                             // [0xa1e9fb0] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlFailure
	// void StreamedVideoOnUrlFailure(FString URL);                                                                             // [0xa1e99ac] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.SetPlayerAssetConfig
	// bool SetPlayerAssetConfig(FPIPVideoPlayerAssetConfig& InAssetConfig);                                                    // [0xa1e8c58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.IsAssetConfigSet
	// bool IsAssetConfigSet();                                                                                                 // [0xa1e86b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.HandleUCPAudioChanged
	// void HandleUCPAudioChanged(UFortClientSettingsRecord* Settings);                                                         // [0xa1e8638] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.FlushPlayerAssetConfig
	// void FlushPlayerAssetConfig();                                                                                           // [0xa1e5840] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/PictureInPictureCore.PictureInPicturePartnerControls
/// Size: 0x0018 (0x000028 - 0x000040)
class UPictureInPicturePartnerControls : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bRequiresAgeOfConsent                                       OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(UPictureInPictureClient*)                  ClientObject                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UPictureInPictureMediaController*)         MediaController                                             OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/PictureInPictureCore.PictureInPictureSubsystem
/// Size: 0x00F0 (0x000030 - 0x000120)
class UPictureInPictureSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<UPictureInPicturePartnerDataAsset*>) AvailableClientsList                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPartnerUpdateComplete                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPartnerChanged                                            OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bPartnerListUpdated                                         OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bIsSuspended                                                OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(bool)                                      bCMSInitialized                                             OFFSET(get<bool>, {0x62, 1, 0, 0})
	SMember(FString)                                   CurrentPlatform                                             OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	CMember(TMap<FString, UPictureInPicturePartnerControls*>) SupportedPartnerControls                             OFFSET(get<T>, {0x88, 80, 0, 0})
	SMember(FString)                                   CurrentPartnerName                                          OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	SMember(FString)                                   CurrentContinent                                            OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   CurrentCountry                                              OFFSET(getStruct<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FString>)                           CurrentSubdivisions                                         OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UFortMediaCMSEventsComponent*)             CMSEventsComponent                                          OFFSET(get<T>, {0x118, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.UpdatePartnerItemList
	// void UpdatePartnerItemList(UObject* InWorldContext, bool bForce);                                                        // [0xa1ea5f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ToggleFullScreenPiP
	// void ToggleFullScreenPiP();                                                                                              // [0xa1ea5dc] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.SuspendCurrentMediaController
	// void SuspendCurrentMediaController();                                                                                    // [0xa1ea5b4] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedSource
	// void StoreLastUsedSource(FString InPartnerSourceName);                                                                   // [0xa1e9398] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedPartner
	// void StoreLastUsedPartner(FString InPartnerName);                                                                        // [0xa1e8d84] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreAutoEnableSetting
	// void StoreAutoEnableSetting(bool InUserEnabled);                                                                         // [0xa1e8d14] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ShutdownAllPartners
	// void ShutdownAllPartners();                                                                                              // [0xa1e8d00] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ResumeCurrentMediaController
	// void ResumeCurrentMediaController();                                                                                     // [0xa1e8ab4] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCurrentPartnerSourceSelected
	// void OnCurrentPartnerSourceSelected(FPiPPartnerSource& SelectedSource);                                                  // [0xa1e8830] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventValid
	// void OnCMSEventValid(UMediaCMSEvent* ValidEvent);                                                                        // [0xa1e87b0] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventInvalid
	// void OnCMSEventInvalid(UMediaCMSEvent* InvalidEvent);                                                                    // [0xa1e8730] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.IsPartnerListUpdated
	// bool IsPartnerListUpdated();                                                                                             // [0x58c5dac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.HandleMediaSourceRequest
	// void HandleMediaSourceRequest();                                                                                         // [0xa1e8010] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.HandleFNEventsSetCurrentMediaControllerEnabled
	// void HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled);                                                     // [0xa1e7f90] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItemList
	// TArray<UPictureInPicturePartnerDataAsset*> GetPartnerItemList();                                                         // [0xa1e7e9c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItem
	// UPictureInPicturePartnerDataAsset* GetPartnerItem(FString PartnerName);                                                  // [0xa1e7884] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerControls
	// UPictureInPicturePartnerControls* GetPartnerControls(FString PartnerName);                                               // [0xa1e726c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerController
	// UPictureInPictureMediaController* GetPartnerController(FString PartnerName);                                             // [0xa1e6c54] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerClient
	// UPictureInPictureClient* GetPartnerClient(FString PartnerName);                                                          // [0xa1e663c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedSource
	// void GetLastUsedSource(FString& OutPartnerSourceName);                                                                   // [0xa1e6004] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedPartner
	// void GetLastUsedPartner(FString& OutPartnerName);                                                                        // [0xa1e59e4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerItem
	// UPictureInPicturePartnerDataAsset* GetCurrentPartnerItem();                                                              // [0xa1e5974] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerControls
	// UPictureInPicturePartnerControls* GetCurrentPartnerControls();                                                           // [0xa1e5948] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerController
	// UPictureInPictureMediaController* GetCurrentPartnerController();                                                         // [0xa1e591c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerClient
	// UPictureInPictureClient* GetCurrentPartnerClient();                                                                      // [0xa1e58f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetAutoEnableSetting
	// bool GetAutoEnableSetting();                                                                                             // [0xa1e58cc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.EnableFullScreenPiPOption
	// void EnableFullScreenPiPOption(bool bEnable);                                                                            // [0xa1e57c0] Final|Native|Public  
};

/// Struct /Script/PictureInPictureCore.PiPSuspendInfo
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FPiPSuspendInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FPiPPartnerSource)                         SourceSnapshot                                              OFFSET(getStruct<T>, {0x0, 488, 0, 0})
	DMember(bool)                                      bEnabledState                                               OFFSET(get<bool>, {0x1E8, 1, 0, 0})
};

/// Enum /Script/PictureInPictureCore.PictureInPictureAuthState
/// Size: 0x04
enum PictureInPictureAuthState : uint8_t
{
	UNKNOWN0                                                                         = 0,
	NOT_AUTHORIZED1                                                                  = 1,
	AUTHORIZED2                                                                      = 2,
	PictureInPictureAuthState_MAX3                                                   = 3
};

/// Enum /Script/PictureInPictureCore.PictureInPictureAuthType
/// Size: 0x04
enum PictureInPictureAuthType : uint8_t
{
	AUTH_NONE0                                                                       = 0,
	AUTH_USER_PASS1                                                                  = 1,
	AUTH_QR_CODE2                                                                    = 2,
	AUTH_MAX3                                                                        = 3
};

