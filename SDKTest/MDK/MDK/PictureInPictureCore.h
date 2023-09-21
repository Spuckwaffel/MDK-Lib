
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
	SMember(FMulticastInlineDelegate)                  LoginSuccessEvent                                           OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  LogoutSuccessEvent                                          OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  QRCodeReceivedEvent                                         OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ErrorDelegate                                               OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   UserName                                                    OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(UEpicCMSImage*)                            UserAvatarImage                                             OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UTexture2DDynamic*)                        CurrentQRCodeTexture                                        OFFSET(get<T>, {0x90, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureClient.Logout
	// void Logout();                                                                                                           // [0x1d42ba0] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.IsLoggedIn
	// bool IsLoggedIn();                                                                                                       // [0x2d779a4] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetQRCodeTexture
	// UTexture2DDynamic* GetQRCodeTexture();                                                                                   // [0x25b9af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetLoginState
	// TEnumAsByte<PictureInPictureAuthState> GetLoginState();                                                                  // [0x754416c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.GetAvatarImage
	// UEpicCMSImage* GetAvatarImage();                                                                                         // [0x77921b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.EndLogin
	// void EndLogin(UObject* InWorldContext);                                                                                  // [0x65f8388] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.CheckLogin
	// void CheckLogin(UObject* InWorldContext);                                                                                // [0x922bf94] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureClient.BeginLogin
	// void BeginLogin(UObject* InWorldContext);                                                                                // [0x9b98aa4] Native|Public|BlueprintCallable 
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
	SMember(FString)                                   PartnerName                                                 OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UPictureInPictureActionData*>)      ActionDataArray                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FPIPVideoPlayerAssetConfig)                DefaultPlayerAssetConfig                                    OFFSET(get<T>, {0x58, 136, 0, 0})
	SMember(FPIPVideoPlayerAssetConfig)                PlayerAssetConfig                                           OFFSET(get<T>, {0xE0, 136, 0, 0})
	CMember(UPictureInPicturePlayer*)                  VideoWidget                                                 OFFSET(get<T>, {0x168, 8, 0, 0})
	SMember(FPIPVideoPlayerConfig)                     VideoWidgetConfig                                           OFFSET(get<T>, {0x170, 72, 0, 0})
	CMember(TWeakObjectPtr<UCommonLazyImage*>)         ThumbnailImageNext                                          OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonLazyImage*>)         ThumbnailImagePrevious                                      OFFSET(get<T>, {0x1C0, 8, 0, 0})
	DMember(bool)                                      bSupportsMultipleSources                                    OFFSET(get<bool>, {0x1C8, 1, 0, 0})
	SMember(FPiPPartnerSource)                         CurrentSource                                               OFFSET(get<T>, {0x1D0, 488, 0, 0})
	CMember(TArray<FPiPPartnerSource>)                 Sources                                                     OFFSET(get<T>, {0x3B8, 16, 0, 0})
	CMember(TArray<FPiPPartnerSource>)                 ValidSources                                                OFFSET(get<T>, {0x3C8, 16, 0, 0})
	SMember(FMediaPlayerOptions)                       LocalOptions                                                OFFSET(get<T>, {0x3D8, 48, 0, 0})
	SMember(FMulticastInlineDelegate)                  BaseErrorEvent                                              OFFSET(get<T>, {0x408, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BaseEnabledEvent                                            OFFSET(get<T>, {0x418, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SourcesChangedEvent                                         OFFSET(get<T>, {0x428, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SourceSelectedEvent                                         OFFSET(get<T>, {0x438, 16, 0, 0})
	CMember(TArray<FPictureInPictureActionConfig>)     InstanceActionData                                          OFFSET(get<T>, {0x450, 16, 0, 0})
	CMember(UPictureInPictureAnalyticsManager*)        AnalyticsManager                                            OFFSET(get<T>, {0x460, 8, 0, 0})
	SMember(FDateTime)                                 ActiveStartTime                                             OFFSET(get<T>, {0x468, 8, 0, 0})
	SMember(FDateTime)                                 PausedStartTime                                             OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FPiPSuspendInfo)                           SuspendedInfo                                               OFFSET(get<T>, {0x480, 496, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.ToggleFullScreen
	// void ToggleFullScreen();                                                                                                 // [0x9ce84c8] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Stop
	// void Stop();                                                                                                             // [0xd30dac] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.SetEnabled
	// void SetEnabled(bool bIsEnabled, bool bIsFromUser);                                                                      // [0x9ce6808] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.SetCurrentSource
	// void SetCurrentSource(FPiPPartnerSource& SelectedSource);                                                                // [0x9ce6740] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Play
	// void Play(bool bForcePlay);                                                                                              // [0x9ce66a8] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Pause
	// void Pause();                                                                                                            // [0x19b1658] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnPrevThumbnailReceived
	// void OnPrevThumbnailReceived(UTexture2DDynamic* InTexture);                                                              // [0x9ce6628] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnNextThumbnailReceived
	// void OnNextThumbnailReceived(UTexture2DDynamic* InTexture);                                                              // [0x9ce65a8] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaStartedAnalytics
	// void OnMediaStartedAnalytics();                                                                                          // [0x9ce6594] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaResumedAnalytics
	// void OnMediaResumedAnalytics();                                                                                          // [0x9ce656c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaPausedAnalytics
	// void OnMediaPausedAnalytics();                                                                                           // [0x9ce6580] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaClosedAnalytics
	// void OnMediaClosedAnalytics();                                                                                           // [0x9ce656c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsPlaying
	// bool IsPlaying();                                                                                                        // [0x9ce6404] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsPaused
	// bool IsPaused();                                                                                                         // [0x9ce63e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsMultiSourceSupported
	// bool IsMultiSourceSupported();                                                                                           // [0x59604c8] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x9ce63c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.HandleSourceSelectedEvent
	// void HandleSourceSelectedEvent(FString SelectedSource);                                                                  // [0x9ce5c80] Native|Protected     
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetValidSources
	// TArray<FPiPPartnerSource> GetValidSources();                                                                             // [0x9ce5bbc] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetSources
	// TArray<FPiPPartnerSource> GetSources();                                                                                  // [0x9ce5b8c] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetPlayerAssetConfig
	// FPIPVideoPlayerAssetConfig GetPlayerAssetConfig();                                                                       // [0x9ce5b20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetMediaPlayerWidget
	// UPictureInPicturePlayer* GetMediaPlayerWidget();                                                                         // [0x9ce4680] Final|Native|Public|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetDefaultPlayerAssetConfig
	// FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig();                                                                // [0x9ce38a0] Final|Native|Public|Const 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetCurrentSource
	// FPiPPartnerSource GetCurrentSource();                                                                                    // [0x9ce3870] Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetActions
	// TArray<UPictureInPictureActionData*> GetActions();                                                                       // [0x9ce372c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Exit
	// void Exit(bool bStop);                                                                                                   // [0x5d68110] Native|Public|BlueprintCallable 
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
	SMember(FPIPVideoPlayerAssetConfig)                AssetConfig                                                 OFFSET(get<T>, {0x108, 136, 0, 0})
	CMember(UPictureInPictureMediaPlayerCtrl*)         MediaController                                             OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(USoundSubmixBase*)                         DefaultSubmix                                               OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(USoundSubmixBase*)                         LicensedSubmix                                              OFFSET(get<T>, {0x1F0, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.UpdateStreamingPlayerSize
	// void UpdateStreamingPlayerSize(FVector2D& InVector);                                                                     // [0x9ce85b8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlSuccess
	// void StreamedVideoOnUrlSuccess(FString URL);                                                                             // [0x9ce7e08] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlFailure
	// void StreamedVideoOnUrlFailure(FString URL);                                                                             // [0x9ce775c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.SetPlayerAssetConfig
	// bool SetPlayerAssetConfig(FPIPVideoPlayerAssetConfig& InAssetConfig);                                                    // [0x9ce68d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.IsAssetConfigSet
	// bool IsAssetConfigSet();                                                                                                 // [0x9ce63b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.HandleUCPAudioChanged
	// void HandleUCPAudioChanged(UFortClientSettingsRecord* Settings);                                                         // [0x9ce6330] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.FlushPlayerAssetConfig
	// void FlushPlayerAssetConfig();                                                                                           // [0x9ce3718] Final|Native|Public|BlueprintCallable 
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
	SMember(FMulticastInlineDelegate)                  OnPartnerUpdateComplete                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPartnerChanged                                            OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bPartnerListUpdated                                         OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bIsSuspended                                                OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(bool)                                      bCMSInitialized                                             OFFSET(get<bool>, {0x62, 1, 0, 0})
	SMember(FString)                                   CurrentPlatform                                             OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TMap<FString, UPictureInPicturePartnerControls*>) SupportedPartnerControls                             OFFSET(get<T>, {0x88, 80, 0, 0})
	SMember(FString)                                   CurrentPartnerName                                          OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FString)                                   CurrentContinent                                            OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   CurrentCountry                                              OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FString>)                           CurrentSubdivisions                                         OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UFortMediaCMSEventsComponent*)             CMSEventsComponent                                          OFFSET(get<T>, {0x118, 8, 0, 0})


	/// Functions
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.UpdatePartnerItemList
	// void UpdatePartnerItemList(UObject* InWorldContext, bool bForce);                                                        // [0x9ce84f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ToggleFullScreenPiP
	// void ToggleFullScreenPiP();                                                                                              // [0x9ce84dc] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.SuspendCurrentMediaController
	// void SuspendCurrentMediaController();                                                                                    // [0x9ce84b4] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedSource
	// void StoreLastUsedSource(FString InPartnerSourceName);                                                                   // [0x9ce70ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreLastUsedPartner
	// void StoreLastUsedPartner(FString InPartnerName);                                                                        // [0x9ce69fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.StoreAutoEnableSetting
	// void StoreAutoEnableSetting(bool InUserEnabled);                                                                         // [0x9ce698c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ShutdownAllPartners
	// void ShutdownAllPartners();                                                                                              // [0x9ce6978] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.ResumeCurrentMediaController
	// void ResumeCurrentMediaController();                                                                                     // [0x9ce672c] Final|Native|Public  
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCurrentPartnerSourceSelected
	// void OnCurrentPartnerSourceSelected(FPiPPartnerSource& SelectedSource);                                                  // [0x9ce64a8] Final|Native|Private|HasOutParms 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventValid
	// void OnCMSEventValid(UMediaCMSEvent* ValidEvent);                                                                        // [0x227d16c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.OnCMSEventInvalid
	// void OnCMSEventInvalid(UMediaCMSEvent* InvalidEvent);                                                                    // [0x9ce6428] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.IsPartnerListUpdated
	// bool IsPartnerListUpdated();                                                                                             // [0x641109c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.HandleMediaSourceRequest
	// void HandleMediaSourceRequest();                                                                                         // [0x9ce5c6c] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.HandleFNEventsSetCurrentMediaControllerEnabled
	// void HandleFNEventsSetCurrentMediaControllerEnabled(bool InEnabled);                                                     // [0x9ce5bec] Final|Native|Private 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItemList
	// TArray<UPictureInPicturePartnerDataAsset*> GetPartnerItemList();                                                         // [0x9ce5aa8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerItem
	// UPictureInPicturePartnerDataAsset* GetPartnerItem(FString PartnerName);                                                  // [0x9ce53f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerControls
	// UPictureInPicturePartnerControls* GetPartnerControls(FString PartnerName);                                               // [0x227d1ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerController
	// UPictureInPictureMediaController* GetPartnerController(FString PartnerName);                                             // [0x9ce4d48] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetPartnerClient
	// UPictureInPictureClient* GetPartnerClient(FString PartnerName);                                                          // [0x9ce4698] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedSource
	// void GetLastUsedSource(FString& OutPartnerSourceName);                                                                   // [0x9ce3fc4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetLastUsedPartner
	// void GetLastUsedPartner(FString& OutPartnerName);                                                                        // [0x9ce3908] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerItem
	// UPictureInPicturePartnerDataAsset* GetCurrentPartnerItem();                                                              // [0x9ce384c] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerControls
	// UPictureInPicturePartnerControls* GetCurrentPartnerControls();                                                           // [0x9ce3820] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerController
	// UPictureInPictureMediaController* GetCurrentPartnerController();                                                         // [0x9ce37f4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetCurrentPartnerClient
	// UPictureInPictureClient* GetCurrentPartnerClient();                                                                      // [0x9ce37c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.GetAutoEnableSetting
	// bool GetAutoEnableSetting();                                                                                             // [0x9ce37a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/PictureInPictureCore.PictureInPictureSubsystem.EnableFullScreenPiPOption
	// void EnableFullScreenPiPOption(bool bEnable);                                                                            // [0x9ce3698] Final|Native|Public  
};

/// Struct /Script/PictureInPictureCore.PiPSuspendInfo
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FPiPSuspendInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FPiPPartnerSource)                         SourceSnapshot                                              OFFSET(get<T>, {0x0, 488, 0, 0})
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

