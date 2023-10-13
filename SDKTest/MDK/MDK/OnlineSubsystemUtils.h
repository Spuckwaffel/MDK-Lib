
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
	// void GetCachedAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementID, bool& bFoundID, float& Progress); // [0x375130] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
	// void GetCachedAchievementDescription(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementID, bool& bFoundID, FText& Title, FText& LockedDescription, FText& UnlockedDescription, bool& bHidden); // [0x374df0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
/// Size: 0x0038 (0x000028 - 0x000060)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
	// UAchievementQueryCallbackProxy* CacheAchievements(UObject* WorldContextObject, APlayerController* PlayerController);     // [0x373d20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
	// UAchievementQueryCallbackProxy* CacheAchievementDescriptions(UObject* WorldContextObject, APlayerController* PlayerController); // [0x373c60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
/// Size: 0x0050 (0x000028 - 0x000078)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
	// UAchievementWriteCallbackProxy* WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32_t UserTag); // [0x376760] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
	// UConnectionCallbackProxy* ConnectToService(UObject* WorldContextObject, APlayerController* PlayerController);            // [0x373f90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
	// UCreateSessionCallbackProxy* CreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // [0x3744f0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
	// UDestroySessionCallbackProxy* DestroySession(UObject* WorldContextObject, APlayerController* PlayerController);          // [0x374620] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
/// Size: 0x0050 (0x000028 - 0x000078)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
	// UEndMatchCallbackProxy* EndMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<Class> MatchActor, FString MatchID, TEnumAsByte<EMPMatchOutcome> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome> OtherPlayersOutcome); // [0x3746e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
/// Size: 0x0048 (0x000028 - 0x000070)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
	// UEndTurnCallbackProxy* EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, TScriptInterface<Class> TurnBasedMatchInterface); // [0x374900] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
	// FString GetServerName(FBlueprintSessionResult& Result);                                                                  // [0x375b60] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
	// int32_t GetPingInMs(FBlueprintSessionResult& Result);                                                                    // [0x375850] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
	// int32_t GetMaxPlayers(FBlueprintSessionResult& Result);                                                                  // [0x375590] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
	// int32_t GetCurrentPlayers(FBlueprintSessionResult& Result);                                                              // [0x3752d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
	// UFindSessionsCallbackProxy* FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // [0x374ab0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
/// Size: 0x0058 (0x000028 - 0x000080)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
	// UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<Class> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // [0x374be0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UInAppPurchaseCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase
	// UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, FInAppPurchaseProductRequest& ProductRequest); // [0x374110] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UInAppPurchaseQueryCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery
	// UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, TArray<FString>& ProductIdentifiers); // [0x374200] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UInAppPurchaseRestoreCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore
	// UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, APlayerController* PlayerController); // [0x374310] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.IpConnection
/// Size: 0x0020 (0x0018D8 - 0x0018F8)
class UIpConnection : public UNetConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6392;

public:
};

/// Class /Script/OnlineSubsystemUtils.IpNetDriver
/// Size: 0x0030 (0x000520 - 0x000550)
class UIpNetDriver : public UNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	DMember(bool)                                      LogPortUnreach                                              OFFSET(get<bool>, {0x520, 1, 1, 0})
	DMember(bool)                                      AllowPlayerPortUnreach                                      OFFSET(get<bool>, {0x520, 1, 1, 1})
	DMember(uint32_t)                                  MaxPortCountToTry                                           OFFSET(get<uint32_t>, {0x524, 4, 0, 0})
	DMember(uint32_t)                                  ServerDesiredSocketReceiveBufferBytes                       OFFSET(get<uint32_t>, {0x540, 4, 0, 0})
	DMember(uint32_t)                                  ServerDesiredSocketSendBufferBytes                          OFFSET(get<uint32_t>, {0x544, 4, 0, 0})
	DMember(uint32_t)                                  ClientDesiredSocketReceiveBufferBytes                       OFFSET(get<uint32_t>, {0x548, 4, 0, 0})
	DMember(uint32_t)                                  ClientDesiredSocketSendBufferBytes                          OFFSET(get<uint32_t>, {0x54C, 4, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
/// Size: 0x0138 (0x000028 - 0x000160)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
	// UJoinSessionCallbackProxy* JoinSession(UObject* WorldContextObject, APlayerController* PlayerController, FBlueprintSessionResult& SearchResult); // [0x375d00] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
	// bool WriteLeaderboardInteger(APlayerController* PlayerController, FName StatName, int32_t StatValue);                    // [0x3768e0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
/// Size: 0x0078 (0x000028 - 0x0000A0)
class ULeaderboardFlushCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
	// ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(APlayerController* PlayerController, FName SessionName);       // [0x374050] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class ULeaderboardQueryCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
	// ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(APlayerController* PlayerController, FName StatName);       // [0x374430] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
/// Size: 0x0038 (0x000028 - 0x000060)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.LogoutCallbackProxy.Logout
	// ULogoutCallbackProxy* Logout(UObject* WorldContextObject, APlayerController* PlayerController);                          // [0x375ea0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeacon
/// Size: 0x0028 (0x000318 - 0x000340)
class AOnlineBeacon : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(float)                                     BeaconConnectionInitialTimeout                              OFFSET(get<float>, {0x320, 4, 0, 0})
	DMember(float)                                     BeaconConnectionTimeout                                     OFFSET(get<float>, {0x324, 4, 0, 0})
	CMember(UNetDriver*)                               NetDriver                                                   OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
/// Size: 0x0090 (0x000340 - 0x0003D0)
class AOnlineBeaconClient : public AOnlineBeacon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(AOnlineBeaconHostObject*)                  BeaconOwner                                                 OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UNetConnection*)                           BeaconConnection                                            OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(EBeaconConnectionState)                    ConnectionState                                             OFFSET(get<T>, {0x350, 1, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
	// void ClientOnConnected();                                                                                                // [0x26ca440] Final|Net|NetReliableNative|Event|Private|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
/// Size: 0x00B8 (0x000340 - 0x0003F8)
class AOnlineBeaconHost : public AOnlineBeacon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	DMember(int32_t)                                   ListenPort                                                  OFFSET(get<int32_t>, {0x340, 4, 0, 0})
	CMember(TArray<AOnlineBeaconClient*>)              ClientActors                                                OFFSET(get<T>, {0x348, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
/// Size: 0x0028 (0x000318 - 0x000340)
class AOnlineBeaconHostObject : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FString)                                   BeaconTypeName                                              OFFSET(getStruct<T>, {0x318, 16, 0, 0})
	CMember(UClass*)                                   ClientBeaconActorClass                                      OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(TArray<AOnlineBeaconClient*>)              ClientActors                                                OFFSET(get<T>, {0x330, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0108 (0x000028 - 0x000130)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     VoiceSubsystemNameOverride                                  OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
/// Size: 0x0018 (0x000038 - 0x000050)
class UOnlinePIESettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bOnlinePIEEnabled                                           OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(TArray<FPIELoginSettingsInternal>)         Logins                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineSessionClient
/// Size: 0x0298 (0x000028 - 0x0002C0)
class UOnlineSessionClient : public UOnlineSession
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(bool)                                      bIsFromInvite                                               OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	DMember(bool)                                      bHandlingDisconnect                                         OFFSET(get<bool>, {0x2B1, 1, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
/// Size: 0x0140 (0x0003D0 - 0x000510)
class APartyBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1296;

public:
	SMember(FString)                                   DestSessionId                                               OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FPartyReservation)                         PendingReservation                                          OFFSET(getStruct<T>, {0x4A0, 64, 0, 0})
	CMember(EClientRequestType)                        RequestType                                                 OFFSET(get<T>, {0x4E0, 1, 0, 0})
	DMember(bool)                                      bPendingReservationSent                                     OFFSET(get<bool>, {0x4E1, 1, 0, 0})
	DMember(bool)                                      bCancelReservation                                          OFFSET(get<bool>, {0x4E2, 1, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
	// void ServerUpdateReservationRequest(FString SessionId, FPartyReservation ReservationUpdate);                             // [0x376510] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
	// void ServerReservationRequest(FString SessionId, FPartyReservation Reservation);                                         // [0x376380] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
	// void ServerCancelReservationRequest(FUniqueNetIdRepl PartyLeader);                                                       // [0x376210] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
	// void ClientSendReservationUpdates(int32_t NumRemainingReservations);                                                     // [0x373f00] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
	// void ClientSendReservationFull();                                                                                        // [0x26631e0] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
	// void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                                // [0x373e80] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
	// void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);                          // [0x373de0] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconHost
/// Size: 0x0160 (0x000340 - 0x0004A0)
class APartyBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(UPartyBeaconState*)                        State                                                       OFFSET(get<T>, {0x340, 8, 0, 0})
	DMember(bool)                                      bLogoutOnSessionTimeout                                     OFFSET(get<bool>, {0x490, 1, 0, 0})
	DMember(float)                                     SessionTimeoutSecs                                          OFFSET(get<float>, {0x494, 4, 0, 0})
	DMember(float)                                     TravelSessionTimeoutSecs                                    OFFSET(get<float>, {0x498, 4, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconState
/// Size: 0x0050 (0x000028 - 0x000078)
class UPartyBeaconState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     SessionName                                                 OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   NumConsumedReservations                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   MaxReservations                                             OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   NumTeams                                                    OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   NumPlayersPerTeam                                           OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	SMember(FName)                                     TeamAssignmentMethod                                        OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(int32_t)                                   ReservedHostTeamNum                                         OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   ForceTeamNum                                                OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(bool)                                      bRestrictCrossConsole                                       OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(TArray<FPartyReservation>)                 Reservations                                                OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
/// Size: 0x0048 (0x000028 - 0x000070)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
	// UQuitMatchCallbackProxy* QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, TEnumAsByte<EMPMatchOutcome> Outcome, int32_t TurnTimeoutInSeconds); // [0x375f60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
/// Size: 0x0030 (0x000028 - 0x000058)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UMulticastDelegate)                        OnSuccess                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UMulticastDelegate)                        OnFailure                                                   OFFSET(get<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
	// UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController);      // [0x3766a0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconClient
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class ATestBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ServerPong
	// void ServerPong();                                                                                                       // [0x376330] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/OnlineSubsystemUtils.TestBeaconClient.ClientPing
	// void ClientPing();                                                                                                       // [0x373e60] Net|NetReliableNative|Event|Public|NetClient 
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconHost
/// Size: 0x0000 (0x000340 - 0x000340)
class ATestBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
};

/// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
	// void RegisterTurnBasedMatchInterfaceObject(UObject* WorldContextObject, APlayerController* PlayerController, UObject* Object); // [0x376120] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
	// void GetPlayerDisplayName(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, int32_t PlayerIndex, FString& PlayerDisplayName); // [0x375970] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
	// void GetMyPlayerIndex(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, int32_t& PlayerIndex); // [0x3756b0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
	// void GetIsMyTurn(UObject* WorldContextObject, APlayerController* PlayerController, FString MatchID, bool& bIsMyTurn);    // [0x3753f0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
/// Size: 0x0010 (0x000650 - 0x000660)
class UVoipListenerSynthComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:


	/// Functions
	// Function /Script/OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
	// bool IsIdling();                                                                                                         // [0x375cd0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/OnlineSubsystemUtils.BlueprintSessionResult
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FBlueprintSessionResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Struct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
/// Size: 0x0040 (0x000000 - 0x000040)
class FPIELoginSettingsInternal : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   ID                                                          OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Token                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Type                                                        OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	CMember(TArray<unsigned char>)                     TokenBytes                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.PartyReservation
/// Size: 0x0040 (0x000000 - 0x000040)
class FPartyReservation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   TeamNum                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FUniqueNetIdRepl)                          PartyLeader                                                 OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	CMember(TArray<FPlayerReservation>)                PartyMembers                                                OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.PlayerReservation
/// Size: 0x0050 (0x000000 - 0x000050)
class FPlayerReservation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FUniqueNetIdRepl)                          UniqueId                                                    OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FString)                                   ValidationStr                                               OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   Platform                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bAllowCrossplay                                             OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(float)                                     ElapsedTime                                                 OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Enum /Script/OnlineSubsystemUtils.EBeaconConnectionState
/// Size: 0x05
enum EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid0                                                 = 0,
	EBeaconConnectionState__Closed1                                                  = 1,
	EBeaconConnectionState__Pending2                                                 = 2,
	EBeaconConnectionState__Open3                                                    = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX4                              = 4
};

/// Enum /Script/OnlineSubsystemUtils.EClientRequestType
/// Size: 0x07
enum EClientRequestType : uint8_t
{
	EClientRequestType__NonePending0                                                 = 0,
	EClientRequestType__ExistingSessionReservation1                                  = 1,
	EClientRequestType__ReservationUpdate2                                           = 2,
	EClientRequestType__EmptyServerReservation3                                      = 3,
	EClientRequestType__Reconnect4                                                   = 4,
	EClientRequestType__Abandon5                                                     = 5,
	EClientRequestType__EClientRequestType_MAX6                                      = 6
};

/// Enum /Script/OnlineSubsystemUtils.EPartyReservationResult
/// Size: 0x17
enum EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult0                                               = 0,
	EPartyReservationResult__RequestPending1                                         = 1,
	EPartyReservationResult__GeneralError2                                           = 2,
	EPartyReservationResult__PartyLimitReached3                                      = 3,
	EPartyReservationResult__IncorrectPlayerCount4                                   = 4,
	EPartyReservationResult__RequestTimedOut5                                        = 5,
	EPartyReservationResult__ReservationDuplicate6                                   = 6,
	EPartyReservationResult__ReservationNotFound7                                    = 7,
	EPartyReservationResult__ReservationAccepted8                                    = 8,
	EPartyReservationResult__ReservationDenied9                                      = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction10                = 10,
	EPartyReservationResult__ReservationDenied_Banned11                              = 11,
	EPartyReservationResult__ReservationRequestCanceled12                            = 12,
	EPartyReservationResult__ReservationInvalid13                                    = 13,
	EPartyReservationResult__BadSessionId14                                          = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers15             = 15,
	EPartyReservationResult__EPartyReservationResult_MAX16                           = 16
};

