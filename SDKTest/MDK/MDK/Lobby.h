
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

/// Class /Script/Lobby.LobbyBeaconClient
/// Size: 0x01A0 (0x0003D0 - 0x000570)
class ALobbyBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
	CMember(ALobbyBeaconState*)                        LobbyState                                                  OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(ALobbyBeaconPlayerState*)                  PlayerState                                                 OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(ELobbyBeaconJoinState)                     LobbyJoinServerState                                        OFFSET(get<T>, {0x3D9, 1, 0, 0})


	/// Functions
	// Function /Script/Lobby.LobbyBeaconClient.ServerSetPartyOwner
	// void ServerSetPartyOwner(FUniqueNetIdRepl InUniqueId, FUniqueNetIdRepl InPartyOwnerId);                                  // [0x631070] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerNotifyJoiningServer
	// void ServerNotifyJoiningServer();                                                                                        // [0x631020] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerLoginPlayer
	// void ServerLoginPlayer(FString InSessionId, FUniqueNetIdRepl InUniqueId, FString UrlString);                             // [0x630e50] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerKickPlayer
	// void ServerKickPlayer(FUniqueNetIdRepl PlayerToKick, FText Reason);                                                      // [0x630cb0] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerDisconnectFromLobby
	// void ServerDisconnectFromLobby();                                                                                        // [0x630c60] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ServerCheat
	// void ServerCheat(FString Msg);                                                                                           // [0x630ba0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/Lobby.LobbyBeaconClient.ClientWasKicked
	// void ClientWasKicked(FText KickReason);                                                                                  // [0x630a80] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientSetInviteFlags
	// void ClientSetInviteFlags(FJoinabilitySettings Settings);                                                                // [0x6309f0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerLeft
	// void ClientPlayerLeft(FUniqueNetIdRepl InUniqueId);                                                                      // [0x630900] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientPlayerJoined
	// void ClientPlayerJoined(FText NewPlayerName, FUniqueNetIdRepl InUniqueId);                                               // [0x630790] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientLoginComplete
	// void ClientLoginComplete(FUniqueNetIdRepl InUniqueId, bool bWasSuccessful);                                              // [0x630650] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientJoinGame
	// void ClientJoinGame();                                                                                                   // [0x630630] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/Lobby.LobbyBeaconClient.ClientAckJoiningServer
	// void ClientAckJoiningServer();                                                                                           // [0x2668ac0] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/Lobby.LobbyBeaconHost
/// Size: 0x0038 (0x000340 - 0x000378)
class ALobbyBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(UClass*)                                   LobbyStateClass                                             OFFSET(get<T>, {0x348, 40, 0, 0})
	CMember(ALobbyBeaconState*)                        LobbyState                                                  OFFSET(get<T>, {0x370, 8, 0, 0})
};

/// Class /Script/Lobby.LobbyBeaconPlayerState
/// Size: 0x0158 (0x000318 - 0x000470)
class ALobbyBeaconPlayerState : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x318, 24, 0, 0})
	SMember(FUniqueNetIdRepl)                          UniqueId                                                    OFFSET(getStruct<T>, {0x330, 40, 0, 0})
	SMember(FUniqueNetIdRepl)                          PartyOwnerUniqueId                                          OFFSET(getStruct<T>, {0x358, 40, 0, 0})
	DMember(bool)                                      bInLobby                                                    OFFSET(get<bool>, {0x380, 1, 0, 0})
	CMember(AOnlineBeaconClient*)                      ClientActor                                                 OFFSET(get<T>, {0x388, 8, 0, 0})


	/// Functions
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner
	// void OnRep_PartyOwner();                                                                                                 // [0x630b60] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconPlayerState.OnRep_InLobby
	// void OnRep_InLobby();                                                                                                    // [0x11c3170] Final|Native|Protected 
};

/// Class /Script/Lobby.LobbyBeaconState
/// Size: 0x02B8 (0x000318 - 0x0005D0)
class ALobbyBeaconState : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	DMember(int32_t)                                   MaxPlayers                                                  OFFSET(get<int32_t>, {0x318, 4, 0, 0})
	CMember(UClass*)                                   LobbyBeaconPlayerStateClass                                 OFFSET(get<T>, {0x320, 8, 0, 0})
	DMember(bool)                                      bLobbyStarted                                               OFFSET(get<bool>, {0x330, 1, 0, 0})
	DMember(float)                                     WaitForPlayersTimeRemaining                                 OFFSET(get<float>, {0x334, 4, 0, 0})
	SMember(FLobbyPlayerStateInfoArray)                Players                                                     OFFSET(getStruct<T>, {0x338, 200, 0, 0})


	/// Functions
	// Function /Script/Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining
	// void OnRep_WaitForPlayersTimeRemaining();                                                                                // [0x630b80] Final|Native|Protected 
	// Function /Script/Lobby.LobbyBeaconState.OnRep_LobbyStarted
	// void OnRep_LobbyStarted();                                                                                               // [0x630b40] Final|Native|Protected 
};

/// Struct /Script/Lobby.LobbyPlayerStateInfoArray
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class FLobbyPlayerStateInfoArray : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TArray<FLobbyPlayerStateActorInfo>)        Players                                                     OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(ALobbyBeaconState*)                        ParentState                                                 OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Struct /Script/Lobby.LobbyPlayerStateActorInfo
/// Size: 0x000C (0x00000C - 0x000018)
class FLobbyPlayerStateActorInfo : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ALobbyBeaconPlayerState*)                  LobbyPlayerState                                            OFFSET(get<T>, {0x10, 8, 0, 0})
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

