
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/EngineSettings.ConsoleSettings
/// Size: 0x0048 (0x000028 - 0x000070)
class UConsoleSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(int32_t)                                   MaxScrollbackSize                                           ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TArray<FAutoCompleteCommand>)              ManualAutoCompleteList                                      ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FString>)                           AutoCompleteMapPaths                                        ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(float)                                     BackgroundOpacityPercentage                                 ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bOrderTopToBottom                                           ___ OFFSET(get<bool>, {0x54, 1, 0, 0})
	DMember(bool)                                      bDisplayHelpInAutoComplete                                  ___ OFFSET(get<bool>, {0x55, 1, 0, 0})
	SMember(FColor)                                    InputColor                                                  ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FColor)                                    HistoryColor                                                ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FColor)                                    AutoCompleteCommandColor                                    ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	SMember(FColor)                                    AutoCompleteCVarColor                                       ___ OFFSET(get<T>, {0x64, 4, 0, 0})
	SMember(FColor)                                    AutoCompleteFadedColor                                      ___ OFFSET(get<T>, {0x68, 4, 0, 0})
};

/// Class /Script/EngineSettings.GameMapsSettings
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UGameMapsSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   LocalMapOptions                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FSoftObjectPath)                           TransitionMap                                               ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bUseSplitscreen                                             ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(TEnumAsByte<ETwoPlayerSplitScreenType>)    TwoPlayerSplitscreenLayout                                  ___ OFFSET(get<T>, {0x51, 1, 0, 0})
	CMember(TEnumAsByte<EThreePlayerSplitScreenType>)  ThreePlayerSplitscreenLayout                                ___ OFFSET(get<T>, {0x52, 1, 0, 0})
	CMember(EFourPlayerSplitScreenType)                FourPlayerSplitscreenLayout                                 ___ OFFSET(get<T>, {0x53, 1, 0, 0})
	DMember(bool)                                      bOffsetPlayerGamepadIds                                     ___ OFFSET(get<bool>, {0x54, 1, 0, 0})
	SMember(FSoftClassPath)                            GameInstanceClass                                           ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FSoftObjectPath)                           GameDefaultMap                                              ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FSoftObjectPath)                           ServerDefaultMap                                            ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	SMember(FSoftClassPath)                            GlobalDefaultGameMode                                       ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FSoftClassPath)                            GlobalDefaultServerGameMode                                 ___ OFFSET(get<T>, {0xB8, 24, 0, 0})
	CMember(TArray<FGameModeName>)                     GameModeMapPrefixes                                         ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FGameModeName>)                     GameModeClassAliases                                        ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/EngineSettings.GameNetworkManagerSettings
/// Size: 0x0030 (0x000028 - 0x000058)
class UGameNetworkManagerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   MinDynamicBandwidth                                         ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MaxDynamicBandwidth                                         ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   TotalNetBandwidth                                           ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   BadPingThreshold                                            ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bIsStandbyCheckingEnabled                                   ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(float)                                     StandbyRxCheatTime                                          ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     StandbyTxCheatTime                                          ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     PercentMissingForRxStandby                                  ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     PercentMissingForTxStandby                                  ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PercentForBadPing                                           ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     JoinInProgressStandbyWaitTime                               ___ OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Class /Script/EngineSettings.GameSessionSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameSessionSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   MaxSpectators                                               ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MaxPlayers                                                  ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bRequiresPushToTalk                                         ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
};

/// Class /Script/EngineSettings.GeneralEngineSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeneralEngineSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EngineSettings.GeneralProjectSettings
/// Size: 0x00F0 (0x000028 - 0x000118)
class UGeneralProjectSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FString)                                   CompanyName                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   CompanyDistinguishedName                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   CopyrightNotice                                             ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   Description                                                 ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   Homepage                                                    ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   LicensingTerms                                              ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   PrivacyPolicy                                               ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FGuid)                                     ProjectID                                                   ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FString)                                   ProjectName                                                 ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FString)                                   ProjectVersion                                              ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FString)                                   SupportContact                                              ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FText)                                     ProjectDisplayedTitle                                       ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	SMember(FText)                                     ProjectDebugTitleInfo                                       ___ OFFSET(get<T>, {0xF0, 24, 0, 0})
	DMember(bool)                                      bShouldWindowPreserveAspectRatio                            ___ OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bUseBorderlessWindow                                        ___ OFFSET(get<bool>, {0x109, 1, 0, 0})
	DMember(bool)                                      bStartInVR                                                  ___ OFFSET(get<bool>, {0x10A, 1, 0, 0})
	DMember(bool)                                      bAllowWindowResize                                          ___ OFFSET(get<bool>, {0x10B, 1, 0, 0})
	DMember(bool)                                      bAllowClose                                                 ___ OFFSET(get<bool>, {0x10C, 1, 0, 0})
	DMember(bool)                                      bAllowMaximize                                              ___ OFFSET(get<bool>, {0x10D, 1, 0, 0})
	DMember(bool)                                      bAllowMinimize                                              ___ OFFSET(get<bool>, {0x10E, 1, 0, 0})
	DMember(float)                                     EyeOffsetForFakeStereoRenderingDevice                       ___ OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     FOVForFakeStereoRenderingDevice                             ___ OFFSET(get<float>, {0x114, 4, 0, 0})
};

/// Class /Script/EngineSettings.HudSettings
/// Size: 0x0018 (0x000028 - 0x000040)
class UHudSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bShowHUD                                                    ___ OFFSET(get<bool>, {0x28, 1, 1, 0})
	CMember(TArray<FName>)                             DebugDisplay                                                ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/EngineSettings.AutoCompleteCommand
/// Size: 0x0028 (0x000000 - 0x000028)
class FAutoCompleteCommand : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Command                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Desc                                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EngineSettings.GameModeName
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameModeName : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSoftClassPath)                            GameMode                                                    ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/EngineSettings.TemplateMapInfoOverride
/// Size: 0x0048 (0x000000 - 0x000048)
class FTemplateMapInfoOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FSoftObjectPath)                           Thumbnail                                                   ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSoftObjectPath)                           Map                                                         ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x30, 24, 0, 0})
};

/// Enum /Script/EngineSettings.ETwoPlayerSplitScreenType
/// Size: 0x03
enum ETwoPlayerSplitScreenType : uint8_t
{
	ETwoPlayerSplitScreenType__Horizontal0                                           = 0,
	ETwoPlayerSplitScreenType__Vertical1                                             = 1,
	ETwoPlayerSplitScreenType__ETwoPlayerSplitScreenType_MAX2                        = 2
};

/// Enum /Script/EngineSettings.EThreePlayerSplitScreenType
/// Size: 0x05
enum EThreePlayerSplitScreenType : uint8_t
{
	EThreePlayerSplitScreenType__FavorTop0                                           = 0,
	EThreePlayerSplitScreenType__FavorBottom1                                        = 1,
	EThreePlayerSplitScreenType__Vertical2                                           = 2,
	EThreePlayerSplitScreenType__Horizontal3                                         = 3,
	EThreePlayerSplitScreenType__EThreePlayerSplitScreenType_MAX4                    = 4
};

/// Enum /Script/EngineSettings.EFourPlayerSplitScreenType
/// Size: 0x04
enum EFourPlayerSplitScreenType : uint8_t
{
	EFourPlayerSplitScreenType__Grid0                                                = 0,
	EFourPlayerSplitScreenType__Vertical1                                            = 1,
	EFourPlayerSplitScreenType__Horizontal2                                          = 2,
	EFourPlayerSplitScreenType__EFourPlayerSplitScreenType_MAX3                      = 3
};

/// Enum /Script/EngineSettings.ESubLevelStripMode
/// Size: 0x03
enum ESubLevelStripMode : uint8_t
{
	ESubLevelStripMode__ExactClass0                                                  = 0,
	ESubLevelStripMode__IsChildOf1                                                   = 1,
	ESubLevelStripMode__ESubLevelStripMode_MAX2                                      = 2
};

