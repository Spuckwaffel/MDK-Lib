
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
	SMember(FMulticastInlineDelegate)                  LoginSuccessEvent                                           ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  LogoutSuccessEvent                                          ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  QRCodeReceivedEvent                                         ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ErrorDelegate                                               ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   UserName                                                    ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(UEpicCMSImage*)                            UserAvatarImage                                             ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UTexture2DDynamic*)                        CurrentQRCodeTexture                                        ___ OFFSET(get<T>, {0x90, 8, 0, 0})
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
	SMember(FString)                                   PartnerName                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UPictureInPictureActionData*>)      ActionDataArray                                             ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FPIPVideoPlayerAssetConfig)                DefaultPlayerAssetConfig                                    ___ OFFSET(get<T>, {0x58, 136, 0, 0})
	SMember(FPIPVideoPlayerAssetConfig)                PlayerAssetConfig                                           ___ OFFSET(get<T>, {0xE0, 136, 0, 0})
	CMember(UPictureInPicturePlayer*)                  VideoWidget                                                 ___ OFFSET(get<T>, {0x168, 8, 0, 0})
	SMember(FPIPVideoPlayerConfig)                     VideoWidgetConfig                                           ___ OFFSET(get<T>, {0x170, 72, 0, 0})
	CMember(TWeakObjectPtr<UCommonLazyImage*>)         ThumbnailImageNext                                          ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UCommonLazyImage*>)         ThumbnailImagePrevious                                      ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	DMember(bool)                                      bSupportsMultipleSources                                    ___ OFFSET(get<bool>, {0x1C8, 1, 0, 0})
	SMember(FPiPPartnerSource)                         CurrentSource                                               ___ OFFSET(get<T>, {0x1D0, 488, 0, 0})
	CMember(TArray<FPiPPartnerSource>)                 Sources                                                     ___ OFFSET(get<T>, {0x3B8, 16, 0, 0})
	CMember(TArray<FPiPPartnerSource>)                 ValidSources                                                ___ OFFSET(get<T>, {0x3C8, 16, 0, 0})
	SMember(FMediaPlayerOptions)                       LocalOptions                                                ___ OFFSET(get<T>, {0x3D8, 48, 0, 0})
	SMember(FMulticastInlineDelegate)                  BaseErrorEvent                                              ___ OFFSET(get<T>, {0x408, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BaseEnabledEvent                                            ___ OFFSET(get<T>, {0x418, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SourcesChangedEvent                                         ___ OFFSET(get<T>, {0x428, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SourceSelectedEvent                                         ___ OFFSET(get<T>, {0x438, 16, 0, 0})
	CMember(TArray<FPictureInPictureActionConfig>)     InstanceActionData                                          ___ OFFSET(get<T>, {0x450, 16, 0, 0})
	CMember(UPictureInPictureAnalyticsManager*)        AnalyticsManager                                            ___ OFFSET(get<T>, {0x460, 8, 0, 0})
	SMember(FDateTime)                                 ActiveStartTime                                             ___ OFFSET(get<T>, {0x468, 8, 0, 0})
	SMember(FDateTime)                                 PausedStartTime                                             ___ OFFSET(get<T>, {0x470, 8, 0, 0})
	SMember(FPiPSuspendInfo)                           SuspendedInfo                                               ___ OFFSET(get<T>, {0x480, 496, 0, 0})
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
	SMember(FPIPVideoPlayerAssetConfig)                AssetConfig                                                 ___ OFFSET(get<T>, {0x108, 136, 0, 0})
	CMember(UPictureInPictureMediaPlayerCtrl*)         MediaController                                             ___ OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(USoundSubmixBase*)                         DefaultSubmix                                               ___ OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(USoundSubmixBase*)                         LicensedSubmix                                              ___ OFFSET(get<T>, {0x1F0, 8, 0, 0})
};

/// Class /Script/PictureInPictureCore.PictureInPicturePartnerControls
/// Size: 0x0018 (0x000028 - 0x000040)
class UPictureInPicturePartnerControls : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bRequiresAgeOfConsent                                       ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(UPictureInPictureClient*)                  ClientObject                                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UPictureInPictureMediaController*)         MediaController                                             ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/PictureInPictureCore.PictureInPictureSubsystem
/// Size: 0x00F0 (0x000030 - 0x000120)
class UPictureInPictureSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<UPictureInPicturePartnerDataAsset*>) AvailableClientsList                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPartnerUpdateComplete                                     ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPartnerChanged                                            ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bPartnerListUpdated                                         ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bIsSuspended                                                ___ OFFSET(get<bool>, {0x61, 1, 0, 0})
	DMember(bool)                                      bCMSInitialized                                             ___ OFFSET(get<bool>, {0x62, 1, 0, 0})
	SMember(FString)                                   CurrentPlatform                                             ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TMap<FString, UPictureInPicturePartnerControls*>) SupportedPartnerControls                             ___ OFFSET(get<T>, {0x88, 80, 0, 0})
	SMember(FString)                                   CurrentPartnerName                                          ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FString)                                   CurrentContinent                                            ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   CurrentCountry                                              ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FString>)                           CurrentSubdivisions                                         ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UFortMediaCMSEventsComponent*)             CMSEventsComponent                                          ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/PictureInPictureCore.PiPSuspendInfo
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FPiPSuspendInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FPiPPartnerSource)                         SourceSnapshot                                              ___ OFFSET(get<T>, {0x0, 488, 0, 0})
	DMember(bool)                                      bEnabledState                                               ___ OFFSET(get<bool>, {0x1E8, 1, 0, 0})
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

