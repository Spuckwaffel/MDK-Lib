/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Party.

/// Struct /Script/Party.PartyMemberPlatformData
/// Size: 0x0098 (0x000000 - 0x000098)
class FPartyMemberPlatformData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FUserPlatform)                             Platform                                                    ___ OFFSET(get<T>, {0x0, 88, 0, 0})
	SMember(FUniqueNetIdRepl)                          UniqueID                                                    ___ OFFSET(get<T>, {0x58, 48, 0, 0})
	SMember(FString)                                   SessionId                                                   ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/Party.UserPlatform
/// Size: 0x0058 (0x000000 - 0x000058)
class FUserPlatform : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FSocialPlatformDescription)                PlatformDescription                                         ___ OFFSET(get<T>, {0x0, 88, 0, 0})
};

/// Struct /Script/Party.SocialPlatformDescription
/// Size: 0x0058 (0x000000 - 0x000058)
class FSocialPlatformDescription : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   PlatformType                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FName)                                     OnlineSubsystem                                             ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FString)                                   SessionType                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   ExternalAccountType                                         ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FString)                                   CrossplayPool                                               ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Party.PartyMemberJoinInProgressRequest
/// Size: 0x0038 (0x000000 - 0x000038)
class FPartyMemberJoinInProgressRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FUniqueNetIdRepl)                          Target                                                      ___ OFFSET(get<T>, {0x0, 48, 0, 0})
	DMember(int64_t)                                   Time                                                        ___ OFFSET(get<int64_t>, {0x30, 8, 0, 0})
};

/// Struct /Script/Party.PartyMemberJoinInProgressResponse
/// Size: 0x0048 (0x000000 - 0x000048)
class FPartyMemberJoinInProgressResponse : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FUniqueNetIdRepl)                          Requester                                                   ___ OFFSET(get<T>, {0x0, 48, 0, 0})
	DMember(int64_t)                                   RequestTime                                                 ___ OFFSET(get<int64_t>, {0x30, 8, 0, 0})
	DMember(int64_t)                                   ResponseTime                                                ___ OFFSET(get<int64_t>, {0x38, 8, 0, 0})
	DMember(char)                                      DenialReason                                                ___ OFFSET(get<char>, {0x40, 1, 0, 0})
};

/// Struct /Script/Party.PartyMemberJoinInProgressData
/// Size: 0x0048 (0x000000 - 0x000048)
class FPartyMemberJoinInProgressData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FPartyMemberJoinInProgressRequest)         Request                                                     ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	CMember(TArray<FPartyMemberJoinInProgressResponse>) Responses                                                  ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/Party.OnlinePartyRepDataBase
/// Size: 0x0018 (0x000000 - 0x000018)
class FOnlinePartyRepDataBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/Party.PartyMemberRepData
/// Size: 0x0258 (0x000018 - 0x000270)
class FPartyMemberRepData : public FOnlinePartyRepDataBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FPartyMemberPlatformData)                  PlatformData                                                ___ OFFSET(get<T>, {0x28, 152, 0, 0})
	CMember(ECrossplayPreference)                      CrossplayPreference                                         ___ OFFSET(get<T>, {0x150, 1, 0, 0})
	SMember(FString)                                   JoinMethod                                                  ___ OFFSET(get<T>, {0x188, 16, 0, 0})
	SMember(FPartyMemberJoinInProgressData)            JoinInProgressData                                          ___ OFFSET(get<T>, {0x1C8, 72, 0, 0})
};

/// Struct /Script/Party.PartyPlatformSessionInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FPartyPlatformSessionInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   SessionType                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   SessionId                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FUniqueNetIdRepl)                          OwnerPrimaryId                                              ___ OFFSET(get<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/Party.PartyPrivacySettings
/// Size: 0x0003 (0x000000 - 0x000003)
class FPartyPrivacySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	CMember(EPartyType)                                PartyType                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EPartyInviteRestriction)                   PartyInviteRestriction                                      ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(bool)                                      bOnlyLeaderFriendsCanJoin                                   ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Struct /Script/Party.PartyRepData
/// Size: 0x0068 (0x000018 - 0x000080)
class FPartyRepData : public FOnlinePartyRepDataBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FPartyPrivacySettings)                     PrivacySettings                                             ___ OFFSET(get<T>, {0x21, 3, 0, 0})
	CMember(TArray<FPartyPlatformSessionInfo>)         PlatformSessions                                            ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Struct /Script/Party.SocialChatChannelConfig
/// Size: 0x0040 (0x000000 - 0x000040)
class FSocialChatChannelConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(USocialUser*)                              SocialUser                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<USocialChatChannel*>)               ListenChannels                                              ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Class /Script/Party.Chatroom
/// Size: 0x0030 (0x000028 - 0x000058)
class UChatroom : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   CurrentChatRoomId                                           ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   MaxChatRoomRetries                                          ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   NumChatRoomRetries                                          ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/Party.SocialManager
/// Size: 0x0188 (0x000028 - 0x0001B0)
class USocialManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(TArray<USocialToolkit*>)                   SocialToolkits                                              ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(USocialDebugTools*)                        SocialDebugTools                                            ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Class /Script/Party.SocialToolkit
/// Size: 0x0288 (0x000028 - 0x0002B0)
class USocialToolkit : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(USocialUser*)                              LocalUser                                                   ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<USocialUser*>)                      AllUsers                                                    ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bRemoveInvalidatedUserFromMaps                              ___ OFFSET(get<bool>, {0xD0, 1, 0, 0})
	CMember(TWeakObjectPtr<ULocalPlayer*>)             LocalPlayerOwner                                            ___ OFFSET(get<T>, {0xD4, 8, 0, 0})
	CMember(USocialChatManager*)                       SocialChatManager                                           ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/Party.SocialChatManager
/// Size: 0x01F8 (0x000028 - 0x000220)
class USocialChatManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(TMap<TWeakObjectPtr, USocialPrivateMessageChannel*>) DirectChannelsByTargetUser                        ___ OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TMap<FString, USocialChatRoom*>)           ChatRoomsById                                               ___ OFFSET(get<T>, {0xC8, 80, 0, 0})
	CMember(TMap<FString, USocialReadOnlyChatChannel*>) ReadOnlyChannelsByDisplayName                              ___ OFFSET(get<T>, {0x118, 80, 0, 0})
	DMember(bool)                                      bEnableChatSlashCommands                                    ___ OFFSET(get<bool>, {0x168, 1, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, USocialGroupChannel*>) GroupChannels                                            ___ OFFSET(get<T>, {0x170, 80, 0, 0})
};

/// Class /Script/Party.SocialChatChannel
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class USocialChatChannel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/Party.SocialChatRoom
/// Size: 0x0010 (0x0000E8 - 0x0000F8)
class USocialChatRoom : public USocialChatChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/Party.SocialGroupChannel
/// Size: 0x0070 (0x000028 - 0x000098)
class USocialGroupChannel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(USocialUser*)                              SocialUser                                                  ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FUniqueNetIdRepl)                          GroupId                                                     ___ OFFSET(get<T>, {0x30, 48, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	CMember(TArray<USocialUser*>)                      Members                                                     ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/Party.SocialPartyChatRoom
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class USocialPartyChatRoom : public USocialChatRoom
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/Party.SocialPrivateMessageChannel
/// Size: 0x0008 (0x0000E8 - 0x0000F0)
class USocialPrivateMessageChannel : public USocialChatChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(USocialUser*)                              TargetUser                                                  ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/Party.SocialReadOnlyChatChannel
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class USocialReadOnlyChatChannel : public USocialChatChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/Party.SocialParty
/// Size: 0x0338 (0x000028 - 0x000360)
class USocialParty : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(UClass*)                                   ReservationBeaconClientClass                                ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UClass*)                                   SpectatorBeaconClientClass                                  ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FUniqueNetIdRepl)                          OwningLocalUserId                                           ___ OFFSET(get<T>, {0x80, 48, 0, 0})
	SMember(FUniqueNetIdRepl)                          CurrentLeaderId                                             ___ OFFSET(get<T>, {0xB0, 48, 0, 0})
	CMember(TMap<FUniqueNetIdRepl, UPartyMember*>)     PartyMembersById                                            ___ OFFSET(get<T>, {0xE0, 80, 0, 0})
	DMember(bool)                                      bEnableAutomaticPartyRejoin                                 ___ OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(double)                                    PlatformUserInviteCooldown                                  ___ OFFSET(get<double>, {0x188, 8, 0, 0})
	DMember(double)                                    PrimaryUserInviteCooldown                                   ___ OFFSET(get<double>, {0x190, 8, 0, 0})
	CMember(TWeakObjectPtr<APartyBeaconClient*>)       ReservationBeaconClient                                     ___ OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(TWeakObjectPtr<ASpectatorBeaconClient*>)   SpectatorBeaconClient                                       ___ OFFSET(get<T>, {0x214, 8, 0, 0})
	DMember(float)                                     JoinInProgressTimerRate                                     ___ OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(int32_t)                                   JoinInProgressRequestTimeout                                ___ OFFSET(get<int32_t>, {0x24C, 4, 0, 0})
	DMember(int32_t)                                   JoinInProgressResponseTimeout                               ___ OFFSET(get<int32_t>, {0x250, 4, 0, 0})
};

/// Class /Script/Party.PartyMember
/// Size: 0x00E8 (0x000028 - 0x000110)
class UPartyMember : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(USocialUser*)                              SocialUser                                                  ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/Party.SocialDebugTools
/// Size: 0x0060 (0x000028 - 0x000088)
class USocialDebugTools : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Class /Script/Party.SocialSettings
/// Size: 0x0048 (0x000028 - 0x000070)
class USocialSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FName>)                             OssNamesWithEnvironmentIdPrefix                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   DefaultMaxPartySize                                         ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bPreferPlatformInvites                                      ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      bMustSendPrimaryInvites                                     ___ OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(bool)                                      bLeavePartyOnDisconnect                                     ___ OFFSET(get<bool>, {0x3E, 1, 0, 0})
	DMember(bool)                                      bSetDesiredPrivacyOnLocalPlayerBecomesLeader                ___ OFFSET(get<bool>, {0x3F, 1, 0, 0})
	DMember(float)                                     UserListAutoUpdateRate                                      ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   MinNicknameLength                                           ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   MaxNicknameLength                                           ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	CMember(TArray<FSocialPlatformDescription>)        SocialPlatformDescriptions                                  ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FName>)                             SonyOSSNames                                                ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/Party.SocialUser
/// Size: 0x01A8 (0x000028 - 0x0001D0)
class USocialUser : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Enum /Script/Party.ESocialChannelType
/// Size: 0x07
enum ESocialChannelType : uint8_t
{
	ESocialChannelType__General0                                                     = 0,
	ESocialChannelType__Founder1                                                     = 1,
	ESocialChannelType__Party2                                                       = 2,
	ESocialChannelType__Team3                                                        = 3,
	ESocialChannelType__System4                                                      = 4,
	ESocialChannelType__Private5                                                     = 5,
	ESocialChannelType__ESocialChannelType_MAX6                                      = 6
};

/// Enum /Script/Party.EPartyType
/// Size: 0x04
enum EPartyType : uint8_t
{
	EPartyType__Public0                                                              = 0,
	EPartyType__FriendsOnly1                                                         = 1,
	EPartyType__Private2                                                             = 2,
	EPartyType__EPartyType_MAX3                                                      = 3
};

/// Enum /Script/Party.EPartyInviteRestriction
/// Size: 0x04
enum EPartyInviteRestriction : uint8_t
{
	EPartyInviteRestriction__AnyMember0                                              = 0,
	EPartyInviteRestriction__LeaderOnly1                                             = 1,
	EPartyInviteRestriction__NoInvites2                                              = 2,
	EPartyInviteRestriction__EPartyInviteRestriction_MAX3                            = 3
};

/// Enum /Script/Party.EPartyJoinDenialReason
/// Size: 0x67
enum EPartyJoinDenialReason : uint8_t
{
	EPartyJoinDenialReason__NoReason0                                                = 0,
	EPartyJoinDenialReason__JoinAttemptAborted1                                      = 1,
	EPartyJoinDenialReason__Busy2                                                    = 2,
	EPartyJoinDenialReason__OssUnavailable3                                          = 3,
	EPartyJoinDenialReason__PartyFull4                                               = 4,
	EPartyJoinDenialReason__GameFull5                                                = 5,
	EPartyJoinDenialReason__NotPartyLeader6                                          = 6,
	EPartyJoinDenialReason__PartyPrivate7                                            = 7,
	EPartyJoinDenialReason__JoinerCrossplayRestricted8                               = 8,
	EPartyJoinDenialReason__MemberCrossplayRestricted9                               = 9,
	EPartyJoinDenialReason__GameModeRestricted10                                     = 10,
	EPartyJoinDenialReason__Banned11                                                 = 11,
	EPartyJoinDenialReason__NotLoggedIn12                                            = 12,
	EPartyJoinDenialReason__CheckingForRejoin13                                      = 13,
	EPartyJoinDenialReason__TargetUserMissingPresence14                              = 14,
	EPartyJoinDenialReason__TargetUserUnjoinable15                                   = 15,
	EPartyJoinDenialReason__TargetUserAway16                                         = 16,
	EPartyJoinDenialReason__AlreadyLeaderInPlatformSession17                         = 17,
	EPartyJoinDenialReason__TargetUserPlayingDifferentGame18                         = 18,
	EPartyJoinDenialReason__TargetUserMissingPlatformSession19                       = 19,
	EPartyJoinDenialReason__PlatformSessionMissingJoinInfo20                         = 20,
	EPartyJoinDenialReason__FailedToStartFindConsoleSession21                        = 21,
	EPartyJoinDenialReason__MissingPartyClassForTypeId22                             = 22,
	EPartyJoinDenialReason__TargetUserBlocked23                                      = 23,
	EPartyJoinDenialReason__InvalidJoinInfo24                                        = 24,
	EPartyJoinDenialReason__NotFriends25                                             = 25,
	EPartyJoinDenialReason__CustomReason026                                          = 26,
	EPartyJoinDenialReason__CustomReason127                                          = 27,
	EPartyJoinDenialReason__CustomReason228                                          = 28,
	EPartyJoinDenialReason__CustomReason329                                          = 29,
	EPartyJoinDenialReason__CustomReason430                                          = 30,
	EPartyJoinDenialReason__CustomReason531                                          = 31,
	EPartyJoinDenialReason__CustomReason632                                          = 32,
	EPartyJoinDenialReason__CustomReason733                                          = 33,
	EPartyJoinDenialReason__CustomReason834                                          = 34,
	EPartyJoinDenialReason__CustomReason935                                          = 35,
	EPartyJoinDenialReason__CustomReason1036                                         = 36,
	EPartyJoinDenialReason__CustomReason1137                                         = 37,
	EPartyJoinDenialReason__CustomReason1238                                         = 38,
	EPartyJoinDenialReason__CustomReason1339                                         = 39,
	EPartyJoinDenialReason__CustomReason1440                                         = 40,
	EPartyJoinDenialReason__CustomReason1541                                         = 41,
	EPartyJoinDenialReason__CustomReason1642                                         = 42,
	EPartyJoinDenialReason__CustomReason1743                                         = 43,
	EPartyJoinDenialReason__CustomReason1844                                         = 44,
	EPartyJoinDenialReason__CustomReason1945                                         = 45,
	EPartyJoinDenialReason__CustomReason2046                                         = 46,
	EPartyJoinDenialReason__CustomReason2147                                         = 47,
	EPartyJoinDenialReason__CustomReason2248                                         = 48,
	EPartyJoinDenialReason__CustomReason2349                                         = 49,
	EPartyJoinDenialReason__CustomReason2450                                         = 50,
	EPartyJoinDenialReason__CustomReason2551                                         = 51,
	EPartyJoinDenialReason__CustomReason2652                                         = 52,
	EPartyJoinDenialReason__CustomReason2753                                         = 53,
	EPartyJoinDenialReason__CustomReason2854                                         = 54,
	EPartyJoinDenialReason__CustomReason2955                                         = 55,
	EPartyJoinDenialReason__CustomReason3056                                         = 56,
	EPartyJoinDenialReason__CustomReason3157                                         = 57,
	EPartyJoinDenialReason__CustomReason3258                                         = 58,
	EPartyJoinDenialReason__CustomReason3359                                         = 59,
	EPartyJoinDenialReason__CustomReason3460                                         = 60,
	EPartyJoinDenialReason__CustomReason3561                                         = 61,
	EPartyJoinDenialReason__CustomReason3662                                         = 62,
	EPartyJoinDenialReason__CustomReason3763                                         = 63,
	EPartyJoinDenialReason__CustomReason3864                                         = 64,
	EPartyJoinDenialReason__CustomReason3965                                         = 65,
	EPartyJoinDenialReason__MAX66                                                    = 66
};

/// Enum /Script/Party.EApprovalAction
/// Size: 0x05
enum EApprovalAction : uint8_t
{
	EApprovalAction__Approve0                                                        = 0,
	EApprovalAction__Enqueue1                                                        = 1,
	EApprovalAction__EnqueueAndStartBeacon2                                          = 2,
	EApprovalAction__Deny3                                                           = 3,
	EApprovalAction__EApprovalAction_MAX4                                            = 4
};

/// Enum /Script/Party.ESocialPartyInviteMethod
/// Size: 0x14
enum ESocialPartyInviteMethod : uint8_t
{
	ESocialPartyInviteMethod__Other0                                                 = 0,
	ESocialPartyInviteMethod__Notification1                                          = 1,
	ESocialPartyInviteMethod__AcceptRequestToJoin2                                   = 2,
	ESocialPartyInviteMethod__Custom03                                               = 3,
	ESocialPartyInviteMethod__Custom14                                               = 4,
	ESocialPartyInviteMethod__Custom25                                               = 5,
	ESocialPartyInviteMethod__Custom36                                               = 6,
	ESocialPartyInviteMethod__Custom47                                               = 7,
	ESocialPartyInviteMethod__Custom58                                               = 8,
	ESocialPartyInviteMethod__Custom69                                               = 9,
	ESocialPartyInviteMethod__Custom710                                              = 10,
	ESocialPartyInviteMethod__Custom811                                              = 11,
	ESocialPartyInviteMethod__Custom912                                              = 12,
	ESocialPartyInviteMethod__MAX13                                                  = 13
};

/// Enum /Script/Party.ESocialPartyInviteFailureReason
/// Size: 0x10
enum ESocialPartyInviteFailureReason : uint8_t
{
	ESocialPartyInviteFailureReason__Success0                                        = 0,
	ESocialPartyInviteFailureReason__NotOnline1                                      = 1,
	ESocialPartyInviteFailureReason__NotAcceptingMembers2                            = 2,
	ESocialPartyInviteFailureReason__NotFriends3                                     = 3,
	ESocialPartyInviteFailureReason__AlreadyInParty4                                 = 4,
	ESocialPartyInviteFailureReason__OssValidationFailed5                            = 5,
	ESocialPartyInviteFailureReason__PlatformInviteFailed6                           = 6,
	ESocialPartyInviteFailureReason__PartyInviteFailed7                              = 7,
	ESocialPartyInviteFailureReason__InviteRateLimitExceeded8                        = 8,
	ESocialPartyInviteFailureReason__ESocialPartyInviteFailureReason_MAX9            = 9
};

/// Enum /Script/Party.ESocialSubsystem
/// Size: 0x03
enum ESocialSubsystem : uint8_t
{
	ESocialSubsystem__Primary0                                                       = 0,
	ESocialSubsystem__Platform1                                                      = 1,
	ESocialSubsystem__MAX2                                                           = 2
};

/// Enum /Script/Party.ESocialRelationship
/// Size: 0x10
enum ESocialRelationship : uint8_t
{
	ESocialRelationship__Any0                                                        = 0,
	ESocialRelationship__FriendInviteReceived1                                       = 1,
	ESocialRelationship__FriendInviteSent2                                           = 2,
	ESocialRelationship__PartyInvite3                                                = 3,
	ESocialRelationship__Friend4                                                     = 4,
	ESocialRelationship__BlockedPlayer5                                              = 5,
	ESocialRelationship__SuggestedFriend6                                            = 6,
	ESocialRelationship__RecentPlayer7                                               = 7,
	ESocialRelationship__JoinRequest8                                                = 8,
	ESocialRelationship__ESocialRelationship_MAX9                                    = 9
};

/// Enum /Script/Party.ECrossplayPreference
/// Size: 0x05
enum ECrossplayPreference : uint8_t
{
	ECrossplayPreference__NoSelection0                                               = 0,
	ECrossplayPreference__OptedIn1                                                   = 1,
	ECrossplayPreference__OptedOut2                                                  = 2,
	ECrossplayPreference__OptedOutRestricted3                                        = 3,
	ECrossplayPreference__ECrossplayPreference_MAX4                                  = 4
};

/// Enum /Script/Party.EPlatformIconDisplayRule
/// Size: 0x06
enum EPlatformIconDisplayRule : uint8_t
{
	EPlatformIconDisplayRule__Always0                                                = 0,
	EPlatformIconDisplayRule__AlwaysIfDifferent1                                     = 1,
	EPlatformIconDisplayRule__AlwaysWhenInCrossplayParty2                            = 2,
	EPlatformIconDisplayRule__AlwaysIfDifferentWhenInCrossplayParty3                 = 3,
	EPlatformIconDisplayRule__Never4                                                 = 4,
	EPlatformIconDisplayRule__EPlatformIconDisplayRule_MAX5                          = 5
};

