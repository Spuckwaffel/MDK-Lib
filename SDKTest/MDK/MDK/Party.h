
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/Party.Chatroom
/// Size: 0x0030 (0x000028 - 0x000058)
class UChatroom : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FString)                                   CurrentChatRoomId                                           OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   MaxChatRoomRetries                                          OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   NumChatRoomRetries                                          OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/Party.Party
/// Size: 0x0478 (0x000028 - 0x0004A0)
class UParty : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	DMember(int32_t)                                   DefaultMaxPartySize                                         OFFSET(get<int32_t>, {0x98, 4, 0, 0})
	DMember(bool)                                      bLeavingPersistentParty                                     OFFSET(get<bool>, {0xB0, 1, 0, 0})
};

/// Class /Script/Party.PartyGameState
/// Size: 0x0508 (0x000028 - 0x000530)
class UPartyGameState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	CMember(UScriptStruct*)                            PartyStateRefDef                                            OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FUniqueNetIdRepl)                          OwningUserId                                                OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	DMember(bool)                                      bDebugAcceptingMembers                                      OFFSET(get<bool>, {0xB8, 1, 0, 0})
	DMember(bool)                                      bStayWithPartyOnDisconnect                                  OFFSET(get<bool>, {0xD1, 1, 0, 0})
	CMember(UClass*)                                   PartyMemberStateClass                                       OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(UClass*)                                   ReservationBeaconClientClass                                OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(APartyBeaconClient*)                       ReservationBeaconClient                                     OFFSET(get<T>, {0x1F0, 8, 0, 0})
};

/// Class /Script/Party.PartyMemberState
/// Size: 0x0060 (0x000028 - 0x000088)
class UPartyMemberState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FUniqueNetIdRepl)                          UniqueId                                                    OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(UScriptStruct*)                            MemberStateRefDef                                           OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      bHasAnnouncedJoin                                           OFFSET(get<bool>, {0x80, 1, 0, 0})


	/// Functions
	// Function /Script/Party.PartyMemberState.IsPartyLeader
	// bool IsPartyLeader();                                                                                                    // [0x627180] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Party.PartyMemberState.IsLocalPlayer
	// bool IsLocalPlayer();                                                                                                    // [0x627150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Party.PartyState
/// Size: 0x0010 (0x000000 - 0x000010)
class FPartyState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EPartyType)                                PartyType                                                   OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      bLeaderFriendsOnly                                          OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bLeaderInvitesOnly                                          OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      bInvitesDisabled                                            OFFSET(get<bool>, {0xB, 1, 0, 0})
};

/// Struct /Script/Party.PartyMemberRepState
/// Size: 0x0008 (0x000000 - 0x000008)
class FPartyMemberRepState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Enum /Script/Party.ECrossplayPreference
/// Size: 0x04
enum ECrossplayPreference : uint8_t
{
	ECrossplayPreference__NoSelection0                                               = 0,
	ECrossplayPreference__OptedIn1                                                   = 1,
	ECrossplayPreference__OptedOut2                                                  = 2,
	ECrossplayPreference__ECrossplayPreference_MAX3                                  = 3
};

/// Enum /Script/Party.EJoinPartyDenialReason
/// Size: 0x11
enum EJoinPartyDenialReason : uint8_t
{
	EJoinPartyDenialReason__NoReason0                                                = 0,
	EJoinPartyDenialReason__Busy1                                                    = 1,
	EJoinPartyDenialReason__PartyFull2                                               = 2,
	EJoinPartyDenialReason__GameFull3                                                = 3,
	EJoinPartyDenialReason__NotPartyLeader4                                          = 4,
	EJoinPartyDenialReason__PartyPrivate5                                            = 5,
	EJoinPartyDenialReason__NeedsTutorial6                                           = 6,
	EJoinPartyDenialReason__GameModeRestricted7                                      = 7,
	EJoinPartyDenialReason__JoinerCrossplayRestricted8                               = 8,
	EJoinPartyDenialReason__MemberCrossplayRestricted9                               = 9,
	EJoinPartyDenialReason__EJoinPartyDenialReason_MAX10                             = 10
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

