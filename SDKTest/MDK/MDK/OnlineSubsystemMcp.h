
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/OnlineSubsystemMcp.OnlineISOConversionUtil
/// Size: 0x0020 (0x000028 - 0x000048)
class UOnlineISOConversionUtil : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FOnlineISOLanguageInfo>)            Languages                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FOnlineISORegionInfo>)              Regions                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.OnlineDiscoveryModeSetDef
/// Size: 0x0038 (0x000000 - 0x000038)
class FOnlineDiscoveryModeSetDef : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FOnlineLinkId)                             ModeSetId                                                   ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   SubModeLinkType                                             ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FOnlineLinkId>)                     SubModeLinkIds                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.OnlineDiscoverySurfaceDevelopmentLinkCodes
/// Size: 0x0018 (0x000000 - 0x000018)
class FOnlineDiscoverySurfaceDevelopmentLinkCodes : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SurfaceName                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FString>)                           DevelopmentLinkCodes                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.OnlineISOLanguageInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FOnlineISOLanguageInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   LanguageId                                                  ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   BackendId                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.OnlineISORegionInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FOnlineISORegionInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   RegionId                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   BackendId                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityEvaluationRequestLegacy
/// Size: 0x0010 (0x000000 - 0x000010)
class FJsonToxicityEvaluationRequestLegacy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Text                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequestLegacy
/// Size: 0x0010 (0x000000 - 0x000010)
class FJsonToxicityBulkEvaluationRequestLegacy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           texts                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityEvaluationRequest
/// Size: 0x0010 (0x000000 - 0x000010)
class FJsonToxicityEvaluationRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityBulkEvaluationRequest
/// Size: 0x0010 (0x000000 - 0x000010)
class FJsonToxicityBulkEvaluationRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FString>)                           Names                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityEvaluationResponse
/// Size: 0x0001 (0x000000 - 0x000001)
class FJsonToxicityEvaluationResponse : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      toxic                                                       ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/OnlineSubsystemMcp.JsonToxicityBulkEvaluationResponse
/// Size: 0x0010 (0x000000 - 0x000010)
class FJsonToxicityBulkEvaluationResponse : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<bool>)                              isToxic                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/OnlineSubsystemMcp.ESocialCommsPermission
/// Size: 0x05
enum ESocialCommsPermission : uint8_t
{
	ESocialCommsPermission__Nobody0                                                  = 0,
	ESocialCommsPermission__FriendsOnly1                                             = 1,
	ESocialCommsPermission__FriendsAndTeammates2                                     = 2,
	ESocialCommsPermission__Everybody3                                               = 3,
	ESocialCommsPermission__ESocialCommsPermission_MAX4                              = 4
};

/// Enum /Script/OnlineSubsystemMcp.EOnlineLinkModerationStatus
/// Size: 0x04
enum EOnlineLinkModerationStatus : uint8_t
{
	EOnlineLinkModerationStatus__Unmoderated0                                        = 0,
	EOnlineLinkModerationStatus__Approved1                                           = 1,
	EOnlineLinkModerationStatus__Denied2                                             = 2,
	EOnlineLinkModerationStatus__EOnlineLinkModerationStatus_MAX3                    = 3
};

/// Enum /Script/OnlineSubsystemMcp.ESocialProfilePrivacySettingLevel
/// Size: 0x04
enum ESocialProfilePrivacySettingLevel : uint8_t
{
	ESocialProfilePrivacySettingLevel__Public0                                       = 0,
	ESocialProfilePrivacySettingLevel__FriendsOnly1                                  = 1,
	ESocialProfilePrivacySettingLevel__Private2                                      = 2,
	ESocialProfilePrivacySettingLevel__ESocialProfilePrivacySettingLevel_MAX3        = 3
};

/// Enum /Script/OnlineSubsystemMcp.ESocialProfilePrivacySettingBadges
/// Size: 0x03
enum ESocialProfilePrivacySettingBadges : uint8_t
{
	ESocialProfilePrivacySettingBadges__FriendsOnly0                                 = 0,
	ESocialProfilePrivacySettingBadges__Private1                                     = 1,
	ESocialProfilePrivacySettingBadges__ESocialProfilePrivacySettingBadges_MAX2      = 2
};

/// Enum /Script/OnlineSubsystemMcp.EMutualFriendsPrivacyPolicy
/// Size: 0x05
enum EMutualFriendsPrivacyPolicy : uint8_t
{
	EMutualFriendsPrivacyPolicy__All0                                                = 0,
	EMutualFriendsPrivacyPolicy__Friends1                                            = 1,
	EMutualFriendsPrivacyPolicy__None2                                               = 2,
	EMutualFriendsPrivacyPolicy__InvalidOrMax3                                       = 3,
	EMutualFriendsPrivacyPolicy__EMutualFriendsPrivacyPolicy_MAX4                    = 4
};

/// Enum /Script/OnlineSubsystemMcp.ESupervisedSettingsRestrictiveOrder
/// Size: 0x08
enum ESupervisedSettingsRestrictiveOrder : uint8_t
{
	ESupervisedSettingsRestrictiveOrder__FirstRestrictive0                           = 0,
	ESupervisedSettingsRestrictiveOrder__FirstPermissive1                            = 1,
	ESupervisedSettingsRestrictiveOrder__LowRestrictive2                             = 2,
	ESupervisedSettingsRestrictiveOrder__LowPermissive3                              = 3,
	ESupervisedSettingsRestrictiveOrder__FalseRestrictive4                           = 4,
	ESupervisedSettingsRestrictiveOrder__FalsePermissive5                            = 5,
	ESupervisedSettingsRestrictiveOrder__None6                                       = 6,
	ESupervisedSettingsRestrictiveOrder__ESupervisedSettingsRestrictiveOrder_MAX7    = 7
};

/// Enum /Script/OnlineSubsystemMcp.ESupervisedSettingsValueType
/// Size: 0x05
enum ESupervisedSettingsValueType : uint8_t
{
	ESupervisedSettingsValueType__Boolean0                                           = 0,
	ESupervisedSettingsValueType__Numeric1                                           = 1,
	ESupervisedSettingsValueType__Option2                                            = 2,
	ESupervisedSettingsValueType__None3                                              = 3,
	ESupervisedSettingsValueType__ESupervisedSettingsValueType_MAX4                  = 4
};

