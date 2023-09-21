
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NetCore
/// dependency: OnlineSubsystemUtils

/// Class /Script/Lobby.LobbyBeaconClient
/// Size: 0x0088 (0x000320 - 0x0003A8)
class ALobbyBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	CMember(ALobbyBeaconState*)                        LobbyState                                                  ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(ALobbyBeaconPlayerState*)                  PlayerState                                                 ___ OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(ELobbyBeaconJoinState)                     LobbyJoinServerState                                        ___ OFFSET(get<T>, {0x331, 1, 0, 0})
};

/// Class /Script/Lobby.LobbyBeaconHost
/// Size: 0x0030 (0x0002B8 - 0x0002E8)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	CMember(TWeakObjectPtr<UClass*>)                   LobbyStateClass                                             ___ OFFSET(get<T>, {0x2C0, 32, 0, 0})
	CMember(ALobbyBeaconState*)                        LobbyState                                                  ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Script/Lobby.LobbyBeaconPlayerState
/// Size: 0x00D0 (0x000290 - 0x000360)
class ALobbyBeaconPlayerState : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x290, 24, 0, 0})
	SMember(FUniqueNetIdRepl)                          UniqueID                                                    ___ OFFSET(get<T>, {0x2A8, 48, 0, 0})
	SMember(FUniqueNetIdRepl)                          PartyOwnerUniqueId                                          ___ OFFSET(get<T>, {0x2D8, 48, 0, 0})
	DMember(bool)                                      bInLobby                                                    ___ OFFSET(get<bool>, {0x308, 1, 0, 0})
	CMember(AOnlineBeaconClient*)                      ClientActor                                                 ___ OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Script/Lobby.LobbyBeaconState
/// Size: 0x01A8 (0x000290 - 0x000438)
class ALobbyBeaconState : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	DMember(int32_t)                                   MaxPlayers                                                  ___ OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	CMember(UClass*)                                   LobbyBeaconPlayerStateClass                                 ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(bool)                                      bLobbyStarted                                               ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(float)                                     WaitForPlayersTimeRemaining                                 ___ OFFSET(get<float>, {0x2AC, 4, 0, 0})
	SMember(FLobbyPlayerStateInfoArray)                Players                                                     ___ OFFSET(get<T>, {0x2B0, 288, 0, 0})
};

/// Struct /Script/Lobby.LobbyPlayerStateActorInfo
/// Size: 0x000C (0x00000C - 0x000018)
class FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ALobbyBeaconPlayerState*)                  LobbyPlayerState                                            ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/Lobby.LobbyPlayerStateInfoArray
/// Size: 0x0018 (0x000108 - 0x000120)
class FLobbyPlayerStateInfoArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FLobbyPlayerStateActorInfo>)        Players                                                     ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(ALobbyBeaconState*)                        ParentState                                                 ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Enum /Script/Lobby.ELobbyBeaconJoinState
/// Size: 0x04
enum ELobbyBeaconJoinState : uint8_t
{
	ELobbyBeaconJoinState__None0                                                     = 0,
	ELobbyBeaconJoinState__SentJoinRequest1                                          = 1,
	ELobbyBeaconJoinState__JoinRequestAcknowledged2                                  = 2,
	ELobbyBeaconJoinState__ELobbyBeaconJoinState_MAX3                                = 3
};

