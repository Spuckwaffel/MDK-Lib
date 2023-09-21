
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/Account.ExternalAccountProvider
/// Size: 0x0010 (0x000028 - 0x000038)
class UExternalAccountProvider : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FExternalAccountServiceConfig>)     Services                                                    ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Account.OnlineAccountCommon
/// Size: 0x0858 (0x000028 - 0x000880)
class UOnlineAccountCommon : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2176;

public:
	SMember(FString)                                   AvailabilityServiceGameName                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bRequireLightswitchAtStartup                                ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FString)                                   EulaKey                                                     ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FString>)                           EulaKeys                                                    ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TMap<FString, FString>)                    EulaKeyMapping                                              ___ OFFSET(get<T>, {0x70, 80, 0, 0})
	DMember(bool)                                      bEnableWaitingRoom                                          ___ OFFSET(get<bool>, {0xC0, 1, 0, 0})
	CMember(TArray<FWebEnvUrl>)                        WebCreateEpicAccountUrl                                     ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(bool)                                      bAllowLocalLogout                                           ___ OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(float)                                     DefaultLoginStepTimeout                                     ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	CMember(TMap<FName, float>)                        CustomLoginStepTimeouts                                     ___ OFFSET(get<T>, {0x118, 80, 0, 0})
	DMember(bool)                                      bEnableDevLoginStepTimeouts                                 ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FString)                                   RedeemAccessUrl                                             ___ OFFSET(get<T>, {0x1D0, 16, 0, 0})
	SMember(FString)                                   RequestFreeAccessUrl                                        ___ OFFSET(get<T>, {0x1E0, 16, 0, 0})
	SMember(FString)                                   RealGameAccessUrl                                           ___ OFFSET(get<T>, {0x1F0, 16, 0, 0})
	DMember(float)                                     SkipRedeemOfflinePurchasesChance                            ___ OFFSET(get<float>, {0x200, 4, 0, 0})
	DMember(bool)                                      bUseFreeAccessInsteadOfGameAccess                           ___ OFFSET(get<bool>, {0x204, 1, 0, 0})
	DMember(bool)                                      bShouldGrantFreeAccess                                      ___ OFFSET(get<bool>, {0x205, 1, 0, 0})
	DMember(bool)                                      bAllowHomeSharingAccess                                     ___ OFFSET(get<bool>, {0x207, 1, 0, 0})
	DMember(bool)                                      bRequireUGCPrivilege                                        ___ OFFSET(get<bool>, {0x208, 1, 0, 0})
	DMember(float)                                     AccessGrantDelaySeconds                                     ___ OFFSET(get<float>, {0x438, 4, 0, 0})
	CMember(UWaitingRoomState*)                        WaitingRoomState                                            ___ OFFSET(get<T>, {0x440, 8, 0, 0})
	DMember(bool)                                      bAutoCreateHeadlessAccount                                  ___ OFFSET(get<bool>, {0x7A8, 1, 0, 0})
};

/// Class /Script/Account.WaitingRoomState
/// Size: 0x0060 (0x000028 - 0x000088)
class UWaitingRoomState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(int32_t)                                   GracePeriodMins                                             ___ OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
};

/// Struct /Script/Account.WebEnvUrl
/// Size: 0x0030 (0x000000 - 0x000030)
class FWebEnvUrl : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   URL                                                         ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   RedirectUrl                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Environment                                                 ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Account.ExternalAccountServiceConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FExternalAccountServiceConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EExternalAccountType)                      Type                                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     ExternalServiceName                                         ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Account.ExchangeAccessParams
/// Size: 0x0040 (0x000000 - 0x000040)
class FExchangeAccessParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   EntitlementId                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ReceiptId                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   VendorReceipt                                               ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   AppStore                                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Account.GiftMessage
/// Size: 0x0030 (0x000000 - 0x000030)
class FGiftMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   GiftCode                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   SenderName                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Account.OnlineAccountTexts_FailedLoginConsole
/// Size: 0x0168 (0x000000 - 0x000168)
class FOnlineAccountTexts_FailedLoginConsole : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FText)                                     AgeRestriction                                              ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Generic                                                     ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     MissingAuthAssociation                                      ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     NeedPremiumAccount                                          ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FText)                                     OnlinePlayRestriction                                       ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	SMember(FText)                                     PatchAvailable                                              ___ OFFSET(get<T>, {0x78, 24, 0, 0})
	SMember(FText)                                     PatchAvailableInstruction_Default                           ___ OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FText)                                     PatchAvailableInstruction_Xbox                              ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FText)                                     PleaseSignIn                                                ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FText)                                     SystemUpdateAvailable                                       ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	SMember(FText)                                     UI                                                          ___ OFFSET(get<T>, {0xF0, 24, 0, 0})
	SMember(FText)                                     UnableToComplete                                            ___ OFFSET(get<T>, {0x108, 24, 0, 0})
	SMember(FText)                                     UnableToSignIn                                              ___ OFFSET(get<T>, {0x120, 24, 0, 0})
	SMember(FText)                                     UnableToStartPrivCheck                                      ___ OFFSET(get<T>, {0x138, 24, 0, 0})
	SMember(FText)                                     UnexpectedError                                             ___ OFFSET(get<T>, {0x150, 24, 0, 0})
};

/// Struct /Script/Account.OnlineAccountTexts
/// Size: 0x0A08 (0x000000 - 0x000A08)
class FOnlineAccountTexts : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2568;

public:
	SMember(FText)                                     AllGiftCodesUsed                                            ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     AssociateConsoleAuth                                        ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     AutoLoginFailed                                             ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     AutoLoginFailedMobile                                       ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FText)                                     BannedFromGame                                              ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	SMember(FText)                                     CheckEntitledToPlay                                         ___ OFFSET(get<T>, {0x78, 24, 0, 0})
	SMember(FText)                                     CheckingRejoin                                              ___ OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FText)                                     CheckServiceAvailability                                    ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	SMember(FText)                                     ConsolePrivileges                                           ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FText)                                     CreateAccountCompleted                                      ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	SMember(FText)                                     CreateAccountFailure                                        ___ OFFSET(get<T>, {0xF0, 24, 0, 0})
	SMember(FText)                                     CreateHeadless                                              ___ OFFSET(get<T>, {0x108, 24, 0, 0})
	SMember(FText)                                     DoQosPingTests                                              ___ OFFSET(get<T>, {0x120, 24, 0, 0})
	SMember(FText)                                     DowntimeMinutesWarningText                                  ___ OFFSET(get<T>, {0x138, 24, 0, 0})
	SMember(FText)                                     DowntimeSecondsWarningText                                  ___ OFFSET(get<T>, {0x150, 24, 0, 0})
	SMember(FText)                                     DuplicateAuthAssociaton                                     ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FText)                                     EulaCheck                                                   ___ OFFSET(get<T>, {0x180, 24, 0, 0})
	SMember(FText)                                     ExchangeConsoleGiftsForAccess                               ___ OFFSET(get<T>, {0x198, 24, 0, 0})
	SMember(FText)                                     FailedAccountCreate                                         ___ OFFSET(get<T>, {0x1B0, 24, 0, 0})
	SMember(FText)                                     FailedEulaCheck_EulaAcceptanceFailed                        ___ OFFSET(get<T>, {0x1C8, 24, 0, 0})
	SMember(FText)                                     FailedEulaCheck_MustAcceptEula                              ___ OFFSET(get<T>, {0x1E0, 24, 0, 0})
	SMember(FText)                                     FailedLoginCredentialsMsg                                   ___ OFFSET(get<T>, {0x1F8, 24, 0, 0})
	SMember(FText)                                     FailedLoginAgeVerificationIncomplete                        ___ OFFSET(get<T>, {0x210, 24, 0, 0})
	SMember(FText)                                     FailedLoginParentalLock                                     ___ OFFSET(get<T>, {0x228, 24, 0, 0})
	SMember(FText)                                     FailedLoginNoRealId                                         ___ OFFSET(get<T>, {0x240, 24, 0, 0})
	SMember(FText)                                     FailedLoginLockoutMsg                                       ___ OFFSET(get<T>, {0x258, 24, 0, 0})
	SMember(FText)                                     FailedLoginRequiresMFA                                      ___ OFFSET(get<T>, {0x270, 24, 0, 0})
	SMember(FText)                                     FailedLoginRequiresAuthAppMFA                               ___ OFFSET(get<T>, {0x288, 24, 0, 0})
	SMember(FText)                                     FailedInvalidMFA                                            ___ OFFSET(get<T>, {0x2A0, 24, 0, 0})
	SMember(FText)                                     FailedLoginRequiresCorrectiveAction                         ___ OFFSET(get<T>, {0x2B8, 24, 0, 0})
	SMember(FText)                                     FailedLoginMsg                                              ___ OFFSET(get<T>, {0x2D0, 24, 0, 0})
	SMember(FText)                                     FailedLoginMsg_InvalidRefreshToken                          ___ OFFSET(get<T>, {0x2E8, 24, 0, 0})
	SMember(FText)                                     FailedLoginTencent_UnableToSignIn                           ___ OFFSET(get<T>, {0x300, 24, 0, 0})
	SMember(FText)                                     FailedLoginTencent_NotSignedInToWeGame                      ___ OFFSET(get<T>, {0x318, 24, 0, 0})
	SMember(FText)                                     FailedLoginTencent_FailedToInitializeWeGame                 ___ OFFSET(get<T>, {0x330, 24, 0, 0})
	SMember(FText)                                     FailedLoginTencent_WeGameSystemOffline                      ___ OFFSET(get<T>, {0x348, 24, 0, 0})
	SMember(FText)                                     Tencent_ExitByAntiAddiction                                 ___ OFFSET(get<T>, {0x360, 24, 0, 0})
	SMember(FText)                                     FailedStartLogin                                            ___ OFFSET(get<T>, {0x378, 24, 0, 0})
	SMember(FText)                                     FounderChatExitedText                                       ___ OFFSET(get<T>, {0x390, 24, 0, 0})
	SMember(FText)                                     FounderChatJoinedText                                       ___ OFFSET(get<T>, {0x3A8, 24, 0, 0})
	SMember(FText)                                     GameDisplayName                                             ___ OFFSET(get<T>, {0x3C0, 24, 0, 0})
	SMember(FText)                                     GeneralLoginFailure                                         ___ OFFSET(get<T>, {0x3D8, 24, 0, 0})
	SMember(FText)                                     GlobalChatExitedText                                        ___ OFFSET(get<T>, {0x3F0, 24, 0, 0})
	SMember(FText)                                     GlobalChatJoinedText                                        ___ OFFSET(get<T>, {0x408, 24, 0, 0})
	SMember(FText)                                     HeadlessAccountFailed                                       ___ OFFSET(get<T>, {0x420, 24, 0, 0})
	SMember(FText)                                     InMatchShutdownTimeWarningText                              ___ OFFSET(get<T>, {0x438, 24, 0, 0})
	SMember(FText)                                     InvalidUser                                                 ___ OFFSET(get<T>, {0x450, 24, 0, 0})
	SMember(FText)                                     LoggedOutofMCP                                              ___ OFFSET(get<T>, {0x468, 24, 0, 0})
	SMember(FText)                                     DisconnectedFromMCP                                         ___ OFFSET(get<T>, {0x480, 24, 0, 0})
	SMember(FText)                                     LoggedOutReturnedToTitle                                    ___ OFFSET(get<T>, {0x498, 24, 0, 0})
	SMember(FText)                                     LoggedOutSwitchedProfile                                    ___ OFFSET(get<T>, {0x4B0, 24, 0, 0})
	SMember(FText)                                     LoggingIn                                                   ___ OFFSET(get<T>, {0x4C8, 24, 0, 0})
	SMember(FText)                                     LoggingInConsoleAuth                                        ___ OFFSET(get<T>, {0x4E0, 24, 0, 0})
	SMember(FText)                                     LoggingOut                                                  ___ OFFSET(get<T>, {0x4F8, 24, 0, 0})
	SMember(FText)                                     LoginConsole                                                ___ OFFSET(get<T>, {0x510, 24, 0, 0})
	SMember(FText)                                     LoginFailure                                                ___ OFFSET(get<T>, {0x528, 24, 0, 0})
	SMember(FText)                                     Logout_Unlink                                               ___ OFFSET(get<T>, {0x540, 24, 0, 0})
	SMember(FText)                                     LogoutCompleted                                             ___ OFFSET(get<T>, {0x558, 24, 0, 0})
	SMember(FText)                                     LostConnection                                              ___ OFFSET(get<T>, {0x570, 24, 0, 0})
	SMember(FText)                                     LoginStepTimeout                                            ___ OFFSET(get<T>, {0x588, 24, 0, 0})
	SMember(FText)                                     MCPTimeout                                                  ___ OFFSET(get<T>, {0x5A0, 24, 0, 0})
	SMember(FText)                                     LightswitchCheckNetworkFailureMsg                           ___ OFFSET(get<T>, {0x5B8, 24, 0, 0})
	SMember(FText)                                     NetworkConnectionUnavailable                                ___ OFFSET(get<T>, {0x5D0, 24, 0, 0})
	SMember(FText)                                     NoPlayEntitlement                                           ___ OFFSET(get<T>, {0x5E8, 24, 0, 0})
	SMember(FText)                                     NoServerAccess                                              ___ OFFSET(get<T>, {0x600, 24, 0, 0})
	SMember(FText)                                     PlayAccessRevoked                                           ___ OFFSET(get<T>, {0x618, 24, 0, 0})
	SMember(FText)                                     PremiumAccountName_Default                                  ___ OFFSET(get<T>, {0x630, 24, 0, 0})
	SMember(FText)                                     PremiumAccountName_Sony                                     ___ OFFSET(get<T>, {0x648, 24, 0, 0})
	SMember(FText)                                     PremiumAccountName_Switch                                   ___ OFFSET(get<T>, {0x660, 24, 0, 0})
	SMember(FText)                                     PremiumAccountName_XboxOne                                  ___ OFFSET(get<T>, {0x678, 24, 0, 0})
	SMember(FText)                                     RedeemOfflinePurchases                                      ___ OFFSET(get<T>, {0x690, 24, 0, 0})
	SMember(FText)                                     ServiceDowntime                                             ___ OFFSET(get<T>, {0x6A8, 24, 0, 0})
	SMember(FText)                                     SignInCompleting                                            ___ OFFSET(get<T>, {0x6C0, 24, 0, 0})
	SMember(FText)                                     SignIntoConsoleServices                                     ___ OFFSET(get<T>, {0x6D8, 24, 0, 0})
	SMember(FText)                                     TokenExpired                                                ___ OFFSET(get<T>, {0x6F0, 24, 0, 0})
	SMember(FText)                                     UnableToConnect                                             ___ OFFSET(get<T>, {0x708, 24, 0, 0})
	SMember(FText)                                     UnableToJoinWaitingRoomLoginQueue                           ___ OFFSET(get<T>, {0x720, 24, 0, 0})
	SMember(FText)                                     UnexpectedConsoleAuthFailure                                ___ OFFSET(get<T>, {0x738, 24, 0, 0})
	SMember(FText)                                     UnlinkConsoleFailed                                         ___ OFFSET(get<T>, {0x750, 24, 0, 0})
	SMember(FText)                                     UserLoginFailed                                             ___ OFFSET(get<T>, {0x768, 24, 0, 0})
	SMember(FText)                                     WaitingRoom                                                 ___ OFFSET(get<T>, {0x780, 24, 0, 0})
	SMember(FText)                                     WaitingRoomError                                            ___ OFFSET(get<T>, {0x798, 24, 0, 0})
	SMember(FText)                                     WaitingRoomFailure                                          ___ OFFSET(get<T>, {0x7B0, 24, 0, 0})
	SMember(FText)                                     WaitingRoomWaiting                                          ___ OFFSET(get<T>, {0x7C8, 24, 0, 0})
	SMember(FOnlineAccountTexts_FailedLoginConsole)    FailedLoginConsole                                          ___ OFFSET(get<T>, {0x7E0, 360, 0, 0})
	SMember(FText)                                     LoggingInExternalAuth                                       ___ OFFSET(get<T>, {0x948, 24, 0, 0})
	SMember(FText)                                     CreateDeviceAuth                                            ___ OFFSET(get<T>, {0x960, 24, 0, 0})
	SMember(FText)                                     ExtAuthCanceled                                             ___ OFFSET(get<T>, {0x978, 24, 0, 0})
	SMember(FText)                                     ExtAuthFailure                                              ___ OFFSET(get<T>, {0x990, 24, 0, 0})
	SMember(FText)                                     ExtAuthAssociationFailure                                   ___ OFFSET(get<T>, {0x9A8, 24, 0, 0})
	SMember(FText)                                     ExtAuthTimeout                                              ___ OFFSET(get<T>, {0x9C0, 24, 0, 0})
	SMember(FText)                                     ExtAuthMissingAuthAssociation                               ___ OFFSET(get<T>, {0x9D8, 24, 0, 0})
	SMember(FText)                                     UnableToQueryReceipts                                       ___ OFFSET(get<T>, {0x9F0, 24, 0, 0})
};

/// Enum /Script/Account.EExternalAccountType
/// Size: 0x11
enum EExternalAccountType : uint8_t
{
	EExternalAccountType__None0                                                      = 0,
	EExternalAccountType__Facebook1                                                  = 1,
	EExternalAccountType__Google2                                                    = 2,
	EExternalAccountType__Epic_PSN3                                                  = 3,
	EExternalAccountType__Epic_XBL4                                                  = 4,
	EExternalAccountType__Epic_Erebus5                                               = 5,
	EExternalAccountType__Epic_Facebook6                                             = 6,
	EExternalAccountType__Epic_Google7                                               = 7,
	EExternalAccountType__Epic_Portal8                                               = 8,
	EExternalAccountType__Epic_Portal_Kairos9                                        = 9,
	EExternalAccountType__EExternalAccountType_MAX10                                 = 10
};

/// Enum /Script/Account.EConsoleAuthLinkState
/// Size: 0x09
enum EConsoleAuthLinkState : uint8_t
{
	EConsoleAuthLinkState__NotOnConsole0                                             = 0,
	EConsoleAuthLinkState__ConsoleNotLoggedIn1                                       = 1,
	EConsoleAuthLinkState__EpicNotLoggedIn2                                          = 2,
	EConsoleAuthLinkState__ThisEpicAccountLinked3                                    = 3,
	EConsoleAuthLinkState__OtherEpicAccountLinked4                                   = 4,
	EConsoleAuthLinkState__NoEpicAccountLinked5                                      = 5,
	EConsoleAuthLinkState__PrimaryIdNotLinked6                                       = 6,
	EConsoleAuthLinkState__SecondaryIdNotLinked7                                     = 7,
	EConsoleAuthLinkState__EConsoleAuthLinkState_MAX8                                = 8
};

/// Enum /Script/Account.ELoginResult
/// Size: 0x50
enum ELoginResult : uint8_t
{
	ELoginResult__NotStarted0                                                        = 0,
	ELoginResult__Pending1                                                           = 1,
	ELoginResult__Success2                                                           = 2,
	ELoginResult__Console_LoginFailed3                                               = 3,
	ELoginResult__Console_AuthFailed4                                                = 4,
	ELoginResult__Console_MissingAuthAssociation5                                    = 5,
	ELoginResult__Console_DuplicateAuthAssociation6                                  = 6,
	ELoginResult__Console_AddedAuthAssociation7                                      = 7,
	ELoginResult__Console_AuthAssociationFailure8                                    = 8,
	ELoginResult__Console_NotEntitled9                                               = 9,
	ELoginResult__Console_EntitlementCheckFailed10                                   = 10,
	ELoginResult__Console_PrivilegeCheck11                                           = 11,
	ELoginResult__Console_PatchOrUpdateRequired12                                    = 12,
	ELoginResult__AuthFailed13                                                       = 13,
	ELoginResult__AuthFailed_RefreshInvalid14                                        = 14,
	ELoginResult__AuthFailed_InvalidMFA15                                            = 15,
	ELoginResult__AuthFailed_RequiresMFA16                                           = 16,
	ELoginResult__AuthFailed_AgeVerificationIncomplete17                             = 17,
	ELoginResult__AuthFailed_LoginLockout18                                          = 18,
	ELoginResult__AuthFailed_InvalidCredentials19                                    = 19,
	ELoginResult__AuthFailed_CorrectiveActionRequired20                              = 20,
	ELoginResult__AuthParentalLock21                                                 = 21,
	ELoginResult__PlatformNotAllowed22                                               = 22,
	ELoginResult__NotEntitled23                                                      = 23,
	ELoginResult__Banned24                                                           = 24,
	ELoginResult__EULACheckFailed25                                                  = 25,
	ELoginResult__WaitingRoomFailed26                                                = 26,
	ELoginResult__ServiceUnavailable27                                               = 27,
	ELoginResult__GenericError28                                                     = 28,
	ELoginResult__RegisterSecondaryPlayerInPrimaryPartyFailed29                      = 29,
	ELoginResult__RejoinCheckFailure30                                               = 30,
	ELoginResult__ConnectionFailed31                                                 = 31,
	ELoginResult__NetworkConnectionUnavailable32                                     = 32,
	ELoginResult__AlreadyLoggingIn33                                                 = 33,
	ELoginResult__ExternalAuth_AddedAuthAssociation34                                = 34,
	ELoginResult__ExternalAuth_ConnectionTimeout35                                   = 35,
	ELoginResult__ExternalAuth_AuthFailure36                                         = 36,
	ELoginResult__ExternalAuth_AssociationFailure37                                  = 37,
	ELoginResult__ExternalAuth_MissingAuthAssociation38                              = 38,
	ELoginResult__ExternalAuth_Canceled39                                            = 39,
	ELoginResult__FailedToCreateParty40                                              = 40,
	ELoginResult__ProfileQueryFailed41                                               = 41,
	ELoginResult__QueryKeychainFailed42                                              = 42,
	ELoginResult__ClientSettingsDownloadFailed43                                     = 43,
	ELoginResult__SupervisedSettingsDownloadFailed44                                 = 44,
	ELoginResult__PinGrantFailure45                                                  = 45,
	ELoginResult__PinGrantTimeout46                                                  = 46,
	ELoginResult__PinGrantCanceled47                                                 = 47,
	ELoginResult__LoginStepTimeout48                                                 = 48,
	ELoginResult__ELoginResult_MAX49                                                 = 49
};

/// Enum /Script/Account.ECreateAccountResult
/// Size: 0x08
enum ECreateAccountResult : uint8_t
{
	ECreateAccountResult__NotStarted0                                                = 0,
	ECreateAccountResult__Pending1                                                   = 1,
	ECreateAccountResult__Success2                                                   = 2,
	ECreateAccountResult__Console_LoginFailed3                                       = 3,
	ECreateAccountResult__Console_DuplicateAuthAssociation4                          = 4,
	ECreateAccountResult__DuplicateAccount5                                          = 5,
	ECreateAccountResult__GenericError6                                              = 6,
	ECreateAccountResult__ECreateAccountResult_MAX7                                  = 7
};

