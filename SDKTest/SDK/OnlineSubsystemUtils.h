/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package OnlineSubsystemUtils.

/// Struct /Script/OnlineSubsystemUtils.BlueprintSessionResult
/// Size: 0x0120 (0x000000 - 0x000120)
class FBlueprintSessionResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Struct /Script/OnlineSubsystemUtils.OnlineProxyStoreOffer
/// Size: 0x0110 (0x000000 - 0x000110)
class FOnlineProxyStoreOffer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FString)                                   OfferId                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     Title                                                       ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FText)                                     Description                                                 ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FText)                                     LongDescription                                             ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FText)                                     RegularPriceText                                            ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	DMember(int32_t)                                   RegularPrice                                                ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FText)                                     PriceText                                                   ___ OFFSET(get<T>, {0x78, 24, 0, 0})
	DMember(int32_t)                                   NumericPrice                                                ___ OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	SMember(FString)                                   CurrencyCode                                                ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FDateTime)                                 ReleaseDate                                                 ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FDateTime)                                 ExpirationDate                                              ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(EOnlineProxyStoreOfferDiscountType)        DiscountType                                                ___ OFFSET(get<T>, {0xB8, 1, 0, 0})
	CMember(TMap<FString, FString>)                    DynamicFields                                               ___ OFFSET(get<T>, {0xC0, 80, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseRestoreInfo2
/// Size: 0x0030 (0x000000 - 0x000030)
class FInAppPurchaseRestoreInfo2 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   ItemName                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ItemId                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ValidationInfo                                              ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseReceiptInfo2
/// Size: 0x0040 (0x000000 - 0x000040)
class FInAppPurchaseReceiptInfo2 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   ItemName                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ItemId                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   ValidationInfo                                              ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   TransactionIdentifier                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductRequest2
/// Size: 0x0018 (0x000000 - 0x000018)
class FInAppPurchaseProductRequest2 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   ProductIdentifier                                           ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bIsConsumable                                               ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.PlayerReservation
/// Size: 0x0058 (0x000000 - 0x000058)
class FPlayerReservation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FUniqueNetIdRepl)                          UniqueID                                                    ___ OFFSET(get<T>, {0x0, 48, 0, 0})
	SMember(FString)                                   ValidationStr                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   Platform                                                    ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bAllowCrossplay                                             ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(float)                                     ElapsedTime                                                 ___ OFFSET(get<float>, {0x54, 4, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.InAppPurchaseProductInfo2
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FInAppPurchaseProductInfo2 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FString)                                   Identifier                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   TransactionIdentifier                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   DisplayName                                                 ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FString)                                   DisplayDescription                                          ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FString)                                   DisplayPrice                                                ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(float)                                     RawPrice                                                    ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FString)                                   CurrencyCode                                                ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   CurrencySymbol                                              ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   DecimalSeparator                                            ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FString)                                   GroupingSeparator                                           ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FString)                                   ReceiptData                                                 ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TMap<FString, FString>)                    DynamicFields                                               ___ OFFSET(get<T>, {0xA8, 80, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
/// Size: 0x0040 (0x000000 - 0x000040)
class FPIELoginSettingsInternal : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FString)                                   ID                                                          ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   Token                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FString)                                   Type                                                        ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<char>)                              TokenBytes                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.PartyReservation
/// Size: 0x0058 (0x000000 - 0x000058)
class FPartyReservation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   TeamNum                                                     ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FUniqueNetIdRepl)                          PartyLeader                                                 ___ OFFSET(get<T>, {0x8, 48, 0, 0})
	CMember(TArray<FPlayerReservation>)                PartyMembers                                                ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FPlayerReservation>)                RemovedPartyMembers                                         ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.PartyBeaconCrossplayPlatformMapping
/// Size: 0x0020 (0x000000 - 0x000020)
class FPartyBeaconCrossplayPlatformMapping : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   PlatformName                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   PlatformType                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/OnlineSubsystemUtils.SpectatorReservation
/// Size: 0x0088 (0x000000 - 0x000088)
class FSpectatorReservation : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FUniqueNetIdRepl)                          SpectatorId                                                 ___ OFFSET(get<T>, {0x0, 48, 0, 0})
	SMember(FPlayerReservation)                        Spectator                                                   ___ OFFSET(get<T>, {0x30, 88, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.AchievementBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAchievementBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OnlineSubsystemUtils.AchievementQueryCallbackProxy
/// Size: 0x0038 (0x000030 - 0x000068)
class UAchievementQueryCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.AchievementWriteCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.ConnectionCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.CreateSessionCallbackProxy
/// Size: 0x0068 (0x000030 - 0x000098)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.DestroySessionCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UDestroySessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.EndMatchCallbackProxy
/// Size: 0x0050 (0x000030 - 0x000080)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.EndTurnCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.FindSessionsCallbackProxy
/// Size: 0x0060 (0x000030 - 0x000090)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
/// Size: 0x0058 (0x000030 - 0x000088)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UInAppPurchaseCallbackProxy2 : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseCheckoutCallbackProxy
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UInAppPurchaseCheckoutCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseFinalizeProxy
/// Size: 0x0000 (0x000028 - 0x000028)
class UInAppPurchaseFinalizeProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
/// Size: 0x0040 (0x000028 - 0x000068)
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseReceiptsCallbackProxy
/// Size: 0x0060 (0x000028 - 0x000088)
class UInAppPurchaseReceiptsCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.IpConnection
/// Size: 0x0090 (0x001DF8 - 0x001E88)
class UIpConnection : public UNetConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7816;

public:
	DMember(float)                                     SocketErrorDisconnectDelay                                  ___ OFFSET(get<float>, {0x1E6C, 4, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.IpNetDriver
/// Size: 0x00B0 (0x0007B8 - 0x000868)
class UIpNetDriver : public UNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2152;

public:
	DMember(bool)                                      LogPortUnreach                                              ___ OFFSET(get<bool>, {0x7B8, 1, 1, 0})
	DMember(bool)                                      AllowPlayerPortUnreach                                      ___ OFFSET(get<bool>, {0x7B8, 1, 1, 1})
	DMember(bool)                                      bExitOnBindFailure                                          ___ OFFSET(get<bool>, {0x7B8, 1, 1, 2})
	DMember(uint32_t)                                  MaxPortCountToTry                                           ___ OFFSET(get<uint32_t>, {0x7BC, 4, 0, 0})
	DMember(uint32_t)                                  ServerDesiredSocketReceiveBufferBytes                       ___ OFFSET(get<uint32_t>, {0x7C4, 4, 0, 0})
	DMember(uint32_t)                                  ServerDesiredSocketSendBufferBytes                          ___ OFFSET(get<uint32_t>, {0x7C8, 4, 0, 0})
	DMember(uint32_t)                                  ClientDesiredSocketReceiveBufferBytes                       ___ OFFSET(get<uint32_t>, {0x7CC, 4, 0, 0})
	DMember(uint32_t)                                  ClientDesiredSocketSendBufferBytes                          ___ OFFSET(get<uint32_t>, {0x7D0, 4, 0, 0})
	DMember(double)                                    MaxSecondsInReceive                                         ___ OFFSET(get<double>, {0x7D8, 8, 0, 0})
	DMember(int32_t)                                   NbPacketsBetweenReceiveTimeTest                             ___ OFFSET(get<int32_t>, {0x7E0, 4, 0, 0})
	DMember(float)                                     ResolutionConnectionTimeout                                 ___ OFFSET(get<float>, {0x7E4, 4, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.JoinSessionCallbackProxy
/// Size: 0x0168 (0x000030 - 0x000198)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class ULeaderboardBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
/// Size: 0x0040 (0x000028 - 0x000068)
class ULeaderboardFlushCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
/// Size: 0x0068 (0x000028 - 0x000090)
class ULeaderboardQueryCallbackProxy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.LogoutCallbackProxy
/// Size: 0x0038 (0x000030 - 0x000068)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeacon
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AOnlineBeacon : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	DMember(float)                                     BeaconConnectionInitialTimeout                              ___ OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     BeaconConnectionTimeout                                     ___ OFFSET(get<float>, {0x29C, 4, 0, 0})
	CMember(UNetDriver*)                               NetDriver                                                   ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconClient
/// Size: 0x0060 (0x0002C0 - 0x000320)
class AOnlineBeaconClient : public AOnlineBeacon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	CMember(AOnlineBeaconHostObject*)                  BeaconOwner                                                 ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UNetConnection*)                           BeaconConnection                                            ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(EBeaconConnectionState)                    ConnectionState                                             ___ OFFSET(get<T>, {0x2D0, 1, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHost
/// Size: 0x0110 (0x0002C0 - 0x0003D0)
class AOnlineBeaconHost : public AOnlineBeacon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	DMember(int32_t)                                   ListenPort                                                  ___ OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	DMember(bool)                                      bReuseAddressAndPort                                        ___ OFFSET(get<bool>, {0x2C4, 1, 0, 0})
	DMember(bool)                                      bAuthRequired                                               ___ OFFSET(get<bool>, {0x2C5, 1, 0, 0})
	DMember(uint32_t)                                  MaxAuthTokenSize                                            ___ OFFSET(get<uint32_t>, {0x2C8, 4, 0, 0})
	CMember(TArray<AOnlineBeaconClient*>)              ClientActors                                                ___ OFFSET(get<T>, {0x320, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineBeaconHostObject
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AOnlineBeaconHostObject : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	SMember(FString)                                   BeaconTypeName                                              ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(UClass*)                                   ClientBeaconActorClass                                      ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(TArray<AOnlineBeaconClient*>)              ClientActors                                                ___ OFFSET(get<T>, {0x2A8, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl
/// Size: 0x0160 (0x000028 - 0x000188)
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	CMember(TMap<FName, FName>)                        MappedUniqueNetIdTypes                                      ___ OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TArray<FName>)                             CompatibleUniqueNetIdTypes                                  ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FName)                                     VoiceSubsystemNameOverride                                  ___ OFFSET(get<T>, {0x88, 4, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UOnlinePIESettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(bool)                                      bOnlinePIEEnabled                                           ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(TArray<FPIELoginSettingsInternal>)         Logins                                                      ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl
/// Size: 0x0000 (0x000028 - 0x000028)
class UOnlineServicesEngineInterfaceImpl : public UOnlineEngineInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OnlineSubsystemUtils.OnlineSessionClient
/// Size: 0x01B8 (0x000028 - 0x0001E0)
class UOnlineSessionClient : public UOnlineSession
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	DMember(bool)                                      bIsFromInvite                                               ___ OFFSET(get<bool>, {0x1D8, 1, 0, 0})
	DMember(bool)                                      bHandlingDisconnect                                         ___ OFFSET(get<bool>, {0x1D9, 1, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
/// Size: 0x00C8 (0x000320 - 0x0003E8)
class APartyBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	SMember(FString)                                   DestSessionId                                               ___ OFFSET(get<T>, {0x350, 16, 0, 0})
	SMember(FPartyReservation)                         PendingReservation                                          ___ OFFSET(get<T>, {0x360, 88, 0, 0})
	CMember(EClientRequestType)                        RequestType                                                 ___ OFFSET(get<T>, {0x3B8, 1, 0, 0})
	DMember(bool)                                      bPendingReservationSent                                     ___ OFFSET(get<bool>, {0x3B9, 1, 0, 0})
	DMember(bool)                                      bCancelReservation                                          ___ OFFSET(get<bool>, {0x3BA, 1, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconHost
/// Size: 0x0078 (0x0002B8 - 0x000330)
class APartyBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(UPartyBeaconState*)                        State                                                       ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bLogoutOnSessionTimeout                                     ___ OFFSET(get<bool>, {0x320, 1, 0, 0})
	DMember(bool)                                      bIsValidationStrRequired                                    ___ OFFSET(get<bool>, {0x321, 1, 0, 0})
	DMember(float)                                     SessionTimeoutSecs                                          ___ OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     TravelSessionTimeoutSecs                                    ___ OFFSET(get<float>, {0x328, 4, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.PartyBeaconState
/// Size: 0x0070 (0x000028 - 0x000098)
class UPartyBeaconState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FName)                                     SessionName                                                 ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumConsumedReservations                                     ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   MaxReservations                                             ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   NumTeams                                                    ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   NumPlayersPerTeam                                           ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FName)                                     TeamAssignmentMethod                                        ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   ReservedHostTeamNum                                         ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   ForceTeamNum                                                ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bRestrictCrossConsole                                       ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(TArray<FString>)                           PlatformCrossplayRestrictions                               ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FPartyBeaconCrossplayPlatformMapping>) PlatformTypeMapping                                      ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(bool)                                      bEnableRemovalRequests                                      ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bRespectCompetitiveIntegrity                                ___ OFFSET(get<bool>, {0x71, 1, 0, 0})
	CMember(TArray<FPartyReservation>)                 Reservations                                                ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.QuitMatchCallbackProxy
/// Size: 0x0048 (0x000030 - 0x000078)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.ShowLoginUICallbackProxy
/// Size: 0x0030 (0x000030 - 0x000060)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  OnSuccess                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailure                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconClient
/// Size: 0x00F8 (0x000320 - 0x000418)
class ASpectatorBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1048;

public:
	SMember(FString)                                   DestSessionId                                               ___ OFFSET(get<T>, {0x350, 16, 0, 0})
	SMember(FSpectatorReservation)                     PendingReservation                                          ___ OFFSET(get<T>, {0x360, 136, 0, 0})
	CMember(ESpectatorClientRequestType)               RequestType                                                 ___ OFFSET(get<T>, {0x3E8, 1, 0, 0})
	DMember(bool)                                      bPendingReservationSent                                     ___ OFFSET(get<bool>, {0x3E9, 1, 0, 0})
	DMember(bool)                                      bCancelReservation                                          ___ OFFSET(get<bool>, {0x3EA, 1, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconHost
/// Size: 0x0078 (0x0002B8 - 0x000330)
class ASpectatorBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(USpectatorBeaconState*)                    State                                                       ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(bool)                                      bLogoutOnSessionTimeout                                     ___ OFFSET(get<bool>, {0x320, 1, 0, 0})
	DMember(bool)                                      bIsValidationStrRequired                                    ___ OFFSET(get<bool>, {0x321, 1, 0, 0})
	DMember(float)                                     SessionTimeoutSecs                                          ___ OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     TravelSessionTimeoutSecs                                    ___ OFFSET(get<float>, {0x328, 4, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.SpectatorBeaconState
/// Size: 0x0030 (0x000028 - 0x000058)
class USpectatorBeaconState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     SessionName                                                 ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   NumConsumedReservations                                     ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   MaxReservations                                             ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bRestrictCrossConsole                                       ___ OFFSET(get<bool>, {0x34, 1, 0, 0})
	CMember(TArray<FSpectatorReservation>)             Reservations                                                ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconClient
/// Size: 0x0000 (0x000320 - 0x000320)
class ATestBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Script/OnlineSubsystemUtils.TestBeaconHost
/// Size: 0x0000 (0x0002B8 - 0x0002B8)
class ATestBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
};

/// Class /Script/OnlineSubsystemUtils.TurnBasedBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UTurnBasedBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OnlineSubsystemUtils.VoipListenerSynthComponent
/// Size: 0x0060 (0x000900 - 0x000960)
class UVoipListenerSynthComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2400;

public:
};

/// Enum /Script/OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
/// Size: 0x05
enum EOnlineProxyStoreOfferDiscountType : uint8_t
{
	EOnlineProxyStoreOfferDiscountType__NotOnSale0                                   = 0,
	EOnlineProxyStoreOfferDiscountType__Percentage1                                  = 1,
	EOnlineProxyStoreOfferDiscountType__DiscountAmount2                              = 2,
	EOnlineProxyStoreOfferDiscountType__PayAmount3                                   = 3,
	EOnlineProxyStoreOfferDiscountType__EOnlineProxyStoreOfferDiscountType_MAX4      = 4
};

/// Enum /Script/OnlineSubsystemUtils.EInAppPurchaseStatus
/// Size: 0x07
enum EInAppPurchaseStatus : uint8_t
{
	EInAppPurchaseStatus__Invalid0                                                   = 0,
	EInAppPurchaseStatus__Failed1                                                    = 1,
	EInAppPurchaseStatus__Deferred2                                                  = 2,
	EInAppPurchaseStatus__Canceled3                                                  = 3,
	EInAppPurchaseStatus__Purchased4                                                 = 4,
	EInAppPurchaseStatus__Restored5                                                  = 5,
	EInAppPurchaseStatus__EInAppPurchaseStatus_MAX6                                  = 6
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
/// Size: 0x09
enum EClientRequestType : uint8_t
{
	EClientRequestType__NonePending0                                                 = 0,
	EClientRequestType__ExistingSessionReservation1                                  = 1,
	EClientRequestType__ReservationUpdate2                                           = 2,
	EClientRequestType__EmptyServerReservation3                                      = 3,
	EClientRequestType__Reconnect4                                                   = 4,
	EClientRequestType__Abandon5                                                     = 5,
	EClientRequestType__ReservationRemoveMembers6                                    = 6,
	EClientRequestType__AddOrUpdateReservation7                                      = 7,
	EClientRequestType__EClientRequestType_MAX8                                      = 8
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

/// Enum /Script/OnlineSubsystemUtils.ESpectatorClientRequestType
/// Size: 0x07
enum ESpectatorClientRequestType : uint8_t
{
	ESpectatorClientRequestType__NonePending0                                        = 0,
	ESpectatorClientRequestType__ExistingSessionReservation1                         = 1,
	ESpectatorClientRequestType__ReservationUpdate2                                  = 2,
	ESpectatorClientRequestType__EmptyServerReservation3                             = 3,
	ESpectatorClientRequestType__Reconnect4                                          = 4,
	ESpectatorClientRequestType__Abandon5                                            = 5,
	ESpectatorClientRequestType__ESpectatorClientRequestType_MAX6                    = 6
};

/// Enum /Script/OnlineSubsystemUtils.ESpectatorReservationResult
/// Size: 0x17
enum ESpectatorReservationResult : uint8_t
{
	ESpectatorReservationResult__NoResult0                                           = 0,
	ESpectatorReservationResult__RequestPending1                                     = 1,
	ESpectatorReservationResult__GeneralError2                                       = 2,
	ESpectatorReservationResult__SpectatorLimitReached3                              = 3,
	ESpectatorReservationResult__IncorrectPlayerCount4                               = 4,
	ESpectatorReservationResult__RequestTimedOut5                                    = 5,
	ESpectatorReservationResult__ReservationDuplicate6                               = 6,
	ESpectatorReservationResult__ReservationNotFound7                                = 7,
	ESpectatorReservationResult__ReservationAccepted8                                = 8,
	ESpectatorReservationResult__ReservationDenied9                                  = 9,
	ESpectatorReservationResult__ReservationDenied_CrossPlayRestriction10            = 10,
	ESpectatorReservationResult__ReservationDenied_Banned11                          = 11,
	ESpectatorReservationResult__ReservationRequestCanceled12                        = 12,
	ESpectatorReservationResult__ReservationInvalid13                                = 13,
	ESpectatorReservationResult__BadSessionId14                                      = 14,
	ESpectatorReservationResult__ReservationDenied_ContainsExistingPlayers15         = 15,
	ESpectatorReservationResult__ESpectatorReservationResult_MAX16                   = 16
};

