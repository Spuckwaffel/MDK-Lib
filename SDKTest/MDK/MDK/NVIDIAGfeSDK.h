
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightSummaryParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FGfeSDKHighlightSummaryParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGfeSDKHighlightGroupView>)         GroupViews                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightGroupView
/// Size: 0x0018 (0x000000 - 0x000018)
class FGfeSDKHighlightGroupView : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   GroupID                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(EGfeSDKHighlightType)                      TagsFilter                                                  OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EGfeSDKHighlightSignificance)              SignificanceFilter                                          OFFSET(get<T>, {0x11, 1, 0, 0})
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightVideoParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FGfeSDKHighlightVideoParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   GroupID                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   HighlightId                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   StartDelta                                                  OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   EndDelta                                                    OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightScreenshotParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FGfeSDKHighlightScreenshotParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   GroupID                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   HighlightId                                                 OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightCloseGroupParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FGfeSDKHighlightCloseGroupParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   GroupID                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      DestroyHighlights                                           OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightOpenGroupParams
/// Size: 0x0060 (0x000000 - 0x000060)
class FGfeSDKHighlightOpenGroupParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   GroupID                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TMap<FString, FString>)                    GroupDescriptionTranslationTable                            OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKPermissionsChangedData
/// Size: 0x0050 (0x000000 - 0x000050)
class FGfeSDKPermissionsChangedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<EGfeSDKScope, EGfeSDKPermission>)     ScopePermissions                                            OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKRequestPermissionsParams
/// Size: 0x0010 (0x000000 - 0x000010)
class FGfeSDKRequestPermissionsParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<EGfeSDKScope>)                      Scopes                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightConfigParams
/// Size: 0x0020 (0x000000 - 0x000020)
class FGfeSDKHighlightConfigParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGfeSDKHighlightDefinition>)        HighlightDefinitions                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DefaultLocale                                               OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKHighlightDefinition
/// Size: 0x0068 (0x000000 - 0x000068)
class FGfeSDKHighlightDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      UserDefaultInterest                                         OFFSET(get<bool>, {0x10, 1, 0, 0})
	CMember(EGfeSDKHighlightType)                      HighlightTags                                               OFFSET(get<T>, {0x11, 1, 0, 0})
	CMember(EGfeSDKHighlightSignificance)              Significance                                                OFFSET(get<T>, {0x12, 1, 0, 0})
	CMember(TMap<FString, FString>)                    NameTranslationTable                                        OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKCreateResponse
/// Size: 0x0068 (0x000000 - 0x000068)
class FGfeSDKCreateResponse : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(uint16_t)                                  VersionMajor                                                OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  VersionMinor                                                OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	SMember(FString)                                   NVIDIAGfeVersion                                            OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TMap<EGfeSDKScope, EGfeSDKPermission>)     ScopePermissions                                            OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/NVIDIAGfeSDK.GfeSDKCreateInputParams
/// Size: 0x0028 (0x000000 - 0x000028)
class FGfeSDKCreateInputParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   AppName                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<EGfeSDKScope>)                      RequiredScopes                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      PollForCallbacks                                            OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKHighlightSignificance
/// Size: 0x08
enum EGfeSDKHighlightSignificance : uint8_t
{
	EGfeSDKHighlightSignificance__ExtremelyBad0                                      = 1,
	EGfeSDKHighlightSignificance__VeryBad1                                           = 2,
	EGfeSDKHighlightSignificance__Bad2                                               = 4,
	EGfeSDKHighlightSignificance__Neutral3                                           = 8,
	EGfeSDKHighlightSignificance__Good4                                              = 16,
	EGfeSDKHighlightSignificance__VeryGood5                                          = 32,
	EGfeSDKHighlightSignificance__ExtremelyGood6                                     = 64,
	EGfeSDKHighlightSignificance__MAX7                                               = 128
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKHighlightType
/// Size: 0x05
enum EGfeSDKHighlightType : uint8_t
{
	EGfeSDKHighlightType__Milestone0                                                 = 1,
	EGfeSDKHighlightType__Achievement1                                               = 2,
	EGfeSDKHighlightType__Incident2                                                  = 4,
	EGfeSDKHighlightType__StateChange3                                               = 8,
	EGfeSDKHighlightType__MAX4                                                       = 16
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKPermission
/// Size: 0x05
enum EGfeSDKPermission : uint8_t
{
	EGfeSDKPermission__Granted0                                                      = 0,
	EGfeSDKPermission__Denied1                                                       = 1,
	EGfeSDKPermission__MustAsk2                                                      = 2,
	EGfeSDKPermission__Unknown3                                                      = 3,
	EGfeSDKPermission__MAX4                                                          = 4
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKScope
/// Size: 0x04
enum EGfeSDKScope : uint8_t
{
	EGfeSDKScope__Highlights0                                                        = 0,
	EGfeSDKScope__HighlightsRecordVideo1                                             = 1,
	EGfeSDKScope__HighlightsRecordScreenshot2                                        = 2,
	EGfeSDKScope__MAX3                                                               = 3
};

/// Enum /Script/NVIDIAGfeSDK.EGfeSDKReturnCode
/// Size: 0x08
enum EGfeSDKReturnCode : uint8_t
{
	EGfeSDKReturnCode__Success0                                                      = 0,
	EGfeSDKReturnCode__SuccessIpcOldSdk1                                             = 1,
	EGfeSDKReturnCode__SuccessIpcOldGfe2                                             = 2,
	EGfeSDKReturnCode__Error3                                                        = 3,
	EGfeSDKReturnCode__ErrorGfeVersion4                                              = 4,
	EGfeSDKReturnCode__ErrorSdkVersion5                                              = 5,
	EGfeSDKReturnCode__ErrorModuleNotLoaded6                                         = 6,
	EGfeSDKReturnCode__EGfeSDKReturnCode_MAX7                                        = 7
};

