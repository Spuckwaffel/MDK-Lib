/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package KoalaUI.

/// Struct /Script/KoalaUI.KoalaClipInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FKoalaClipInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Class /Script/KoalaUI.FortGameSettingRegistryExtension_Koala
/// Size: 0x0040 (0x000028 - 0x000068)
class UFortGameSettingRegistryExtension_Koala : public UFortGameSettingRegistryExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FFortSettingNameExtensions)                SettingExtensions                                           ___ OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Class /Script/KoalaUI.FortSidebarPanelKoala
/// Size: 0x0038 (0x0003E8 - 0x000420)
class UFortSidebarPanelKoala : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	CMember(UCommonButtonBase*)                        Button_KoalaDummy                                           ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UFortLazyImage*)                           QrCodeImage                                                 ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	SMember(FString)                                   QRCodeURL                                                   ___ OFFSET(get<T>, {0x410, 16, 0, 0})
};

/// Class /Script/KoalaUI.FortUIGameFeatureAction_AttemptKoalaModal
/// Size: 0x0038 (0x000030 - 0x000068)
class UFortUIGameFeatureAction_AttemptKoalaModal : public UFortUIGameFeatureAction_PostFrontendFlowActions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TWeakObjectPtr<UClass*>)                   KoalaGraphicsModalClass                                     ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/KoalaUI.KoalaGraphicsModal
/// Size: 0x0028 (0x0003E8 - 0x000410)
class UKoalaGraphicsModal : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	CMember(UCommonButtonBase*)                        Button_KeepEnabled                                          ___ OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UCommonButtonBase*)                        Button_Disable                                              ___ OFFSET(get<T>, {0x408, 8, 0, 0})
};

/// Class /Script/KoalaUI.KoalaHUDWidget
/// Size: 0x0158 (0x0003E8 - 0x000540)
class UKoalaHUDWidget : public UCommonActivatableWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	DMember(float)                                     ClipDebounceTime                                            ___ OFFSET(get<float>, {0x3F0, 4, 0, 0})
	DMember(float)                                     PlayerKilledPlayerReminderTime                              ___ OFFSET(get<float>, {0x3F4, 4, 0, 0})
	DMember(float)                                     MatchEndedReminderTime                                      ___ OFFSET(get<float>, {0x3F8, 4, 0, 0})
	DMember(float)                                     ClipReminderCooldownTime                                    ___ OFFSET(get<float>, {0x3FC, 4, 0, 0})
	DMember(float)                                     EliminationClipReminderDelayTime                            ___ OFFSET(get<float>, {0x400, 4, 0, 0})
	CMember(USoundSubmix*)                             ClipAudioSubmix                                             ___ OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UCommonActionWidget*)                      ClipActionWidget                                            ___ OFFSET(get<T>, {0x410, 8, 0, 0})
	SMember(FDataTableRowHandle)                       ClipObjectInputAction                                       ___ OFFSET(get<T>, {0x418, 16, 0, 0})
	CMember(TMap<int32_t, FKoalaClipInfo>)             ClipTracker                                                 ___ OFFSET(get<T>, {0x430, 80, 0, 0})
	DMember(int32_t)                                   LastClipID                                                  ___ OFFSET(get<int32_t>, {0x488, 4, 0, 0})
	CMember(EKoalaMockClipMode)                        MockClipMode                                                ___ OFFSET(get<T>, {0x4A2, 1, 0, 0})
	DMember(int32_t)                                   MockClipUploadShortTime                                     ___ OFFSET(get<int32_t>, {0x4A4, 4, 0, 0})
	DMember(int32_t)                                   MockClipUploadLongTime                                      ___ OFFSET(get<int32_t>, {0x4A8, 4, 0, 0})
	DMember(int32_t)                                   MockClipCreateShortTime                                     ___ OFFSET(get<int32_t>, {0x4AC, 4, 0, 0})
	DMember(int32_t)                                   MockClipCreateLongTime                                      ___ OFFSET(get<int32_t>, {0x4B0, 4, 0, 0})
};

/// Class /Script/KoalaUI.KoalaMainMenuButton
/// Size: 0x0010 (0x0015F0 - 0x001600)
class UKoalaMainMenuButton : public UFortMainMenuButtonExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5632;

public:
};

/// Class /Script/KoalaUI.KoalaSettingDetailExtension
/// Size: 0x0008 (0x0002B0 - 0x0002B8)
class UKoalaSettingDetailExtension : public UFortSettingDetailExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
};

/// Enum /Script/KoalaUI.EKoalaClipEventType
/// Size: 0x06
enum EKoalaClipEventType : uint8_t
{
	EKoalaClipEventType__Manual0                                                     = 0,
	EKoalaClipEventType__Elimination1                                                = 1,
	EKoalaClipEventType__VictoryRoyale2                                              = 2,
	EKoalaClipEventType__Emote3                                                      = 3,
	EKoalaClipEventType__COUNT4                                                      = 4,
	EKoalaClipEventType__EKoalaClipEventType_MAX5                                    = 5
};

/// Enum /Script/KoalaUI.EKoalaAvailability
/// Size: 0x05
enum EKoalaAvailability : uint8_t
{
	EKoalaAvailability__Pending0                                                     = 0,
	EKoalaAvailability__NotAvailable1                                                = 1,
	EKoalaAvailability__Available2                                                   = 2,
	EKoalaAvailability__COUNT3                                                       = 3,
	EKoalaAvailability__EKoalaAvailability_MAX4                                      = 4
};

/// Enum /Script/KoalaUI.EKoalaRecording
/// Size: 0x05
enum EKoalaRecording : uint8_t
{
	EKoalaRecording__Pending0                                                        = 0,
	EKoalaRecording__NotRecording1                                                   = 1,
	EKoalaRecording__Recording2                                                      = 2,
	EKoalaRecording__COUNT3                                                          = 3,
	EKoalaRecording__EKoalaRecording_MAX4                                            = 4
};

/// Enum /Script/KoalaUI.EKoalaConnectionStatus
/// Size: 0x05
enum EKoalaConnectionStatus : uint8_t
{
	EKoalaConnectionStatus__Pending0                                                 = 0,
	EKoalaConnectionStatus__NotConnected1                                            = 1,
	EKoalaConnectionStatus__Connected2                                               = 2,
	EKoalaConnectionStatus__COUNT3                                                   = 3,
	EKoalaConnectionStatus__EKoalaConnectionStatus_MAX4                              = 4
};

/// Enum /Script/KoalaUI.EKoalaClipStatus
/// Size: 0x07
enum EKoalaClipStatus : uint8_t
{
	EKoalaClipStatus__None0                                                          = 0,
	EKoalaClipStatus__Creating1                                                      = 1,
	EKoalaClipStatus__Uploading2                                                     = 2,
	EKoalaClipStatus__Completed3                                                     = 3,
	EKoalaClipStatus__Failed4                                                        = 4,
	EKoalaClipStatus__COUNT5                                                         = 5,
	EKoalaClipStatus__EKoalaClipStatus_MAX6                                          = 6
};

/// Enum /Script/KoalaUI.EKoalaMockClipMode
/// Size: 0x07
enum EKoalaMockClipMode : uint8_t
{
	EKoalaMockClipMode__None0                                                        = 0,
	EKoalaMockClipMode__ShortSuccess1                                                = 1,
	EKoalaMockClipMode__ShortFailure2                                                = 2,
	EKoalaMockClipMode__LongSuccess3                                                 = 3,
	EKoalaMockClipMode__LongFailure4                                                 = 4,
	EKoalaMockClipMode__COUNT5                                                       = 5,
	EKoalaMockClipMode__EKoalaMockClipMode_MAX6                                      = 6
};

