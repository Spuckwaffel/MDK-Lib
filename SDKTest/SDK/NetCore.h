/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NetCore.

/// Struct /Script/NetCore.FastArraySerializerItem
/// Size: 0x000C (0x000000 - 0x00000C)
class FFastArraySerializerItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   ReplicationID                                               ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   ReplicationKey                                              ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MostRecentArrayReplicationKey                               ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/NetCore.FastArraySerializer
/// Size: 0x0108 (0x000000 - 0x000108)
class FFastArraySerializer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	DMember(int32_t)                                   ArrayReplicationKey                                         ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	CMember(EFastArraySerializerDeltaFlags)            DeltaFlags                                                  ___ OFFSET(get<T>, {0x100, 1, 0, 0})
};

/// Struct /Script/NetCore.NetAnalyticsDataConfig
/// Size: 0x0008 (0x000000 - 0x000008)
class FNetAnalyticsDataConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     DataName                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/NetCore.StateStruct
/// Size: 0x0018 (0x000000 - 0x000018)
class FStateStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   StateName                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/NetCore.EscalationState
/// Size: 0x0018 (0x000018 - 0x000030)
class FEscalationState : public FStateStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bLogEscalate                                                ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bDormant                                                    ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(int16_t)                                   CooloffTime                                                 ___ OFFSET(get<int16_t>, {0x1A, 2, 0, 0})
	DMember(int16_t)                                   AutoEscalateTime                                            ___ OFFSET(get<int16_t>, {0x1C, 2, 0, 0})
	DMember(int8_t)                                    HighestTimePeriod                                           ___ OFFSET(get<int8_t>, {0x1E, 1, 0, 0})
	CMember(TArray<int8_t>)                            AllTimePeriods                                              ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/NetCore.NetFaultState
/// Size: 0x0010 (0x000030 - 0x000040)
class FNetFaultState : public FEscalationState
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bCloseConnection                                            ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(int16_t)                                   EscalateQuotaFaultsPerPeriod                                ___ OFFSET(get<int16_t>, {0x32, 2, 0, 0})
	DMember(int8_t)                                    EscalateQuotaFaultPercentPerPeriod                          ___ OFFSET(get<int8_t>, {0x34, 1, 0, 0})
	DMember(int16_t)                                   DescalateQuotaFaultsPerPeriod                               ___ OFFSET(get<int16_t>, {0x36, 2, 0, 0})
	DMember(int8_t)                                    DescalateQuotaFaultPercentPerPeriod                         ___ OFFSET(get<int8_t>, {0x38, 1, 0, 0})
	DMember(int8_t)                                    EscalateQuotaTimePeriod                                     ___ OFFSET(get<int8_t>, {0x39, 1, 0, 0})
};

/// Class /Script/NetCore.NetAnalyticsAggregatorConfig
/// Size: 0x0010 (0x000028 - 0x000038)
class UNetAnalyticsAggregatorConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FNetAnalyticsDataConfig>)           NetAnalyticsData                                            ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/NetCore.StatePerObjectConfig
/// Size: 0x0040 (0x000028 - 0x000068)
class UStatePerObjectConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   PerObjectConfigSection                                      ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/NetCore.EscalationManagerConfig
/// Size: 0x0020 (0x000068 - 0x000088)
class UEscalationManagerConfig : public UStatePerObjectConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FString>)                           EscalationSeverity                                          ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Enum /Script/NetCore.ENetworkFailure
/// Size: 0x12
enum ENetworkFailure : uint8_t
{
	ENetworkFailure__NetDriverAlreadyExists0                                         = 0,
	ENetworkFailure__NetDriverCreateFailure1                                         = 1,
	ENetworkFailure__NetDriverListenFailure2                                         = 2,
	ENetworkFailure__ConnectionLost3                                                 = 3,
	ENetworkFailure__ConnectionTimeout4                                              = 4,
	ENetworkFailure__FailureReceived5                                                = 5,
	ENetworkFailure__OutdatedClient6                                                 = 6,
	ENetworkFailure__OutdatedServer7                                                 = 7,
	ENetworkFailure__PendingConnectionFailure8                                       = 8,
	ENetworkFailure__NetGuidMismatch9                                                = 9,
	ENetworkFailure__NetChecksumMismatch10                                           = 10,
	ENetworkFailure__ENetworkFailure_MAX11                                           = 11
};

/// Enum /Script/NetCore.ENetCloseResult
/// Size: 0x110
enum ENetCloseResult : uint8_t
{
	ENetCloseResult__NetDriverAlreadyExists0                                         = 0,
	ENetCloseResult__NetDriverCreateFailure1                                         = 1,
	ENetCloseResult__NetDriverListenFailure2                                         = 2,
	ENetCloseResult__ConnectionLost3                                                 = 3,
	ENetCloseResult__ConnectionTimeout4                                              = 4,
	ENetCloseResult__FailureReceived5                                                = 5,
	ENetCloseResult__OutdatedClient6                                                 = 6,
	ENetCloseResult__OutdatedServer7                                                 = 7,
	ENetCloseResult__PendingConnectionFailure8                                       = 8,
	ENetCloseResult__NetGuidMismatch9                                                = 9,
	ENetCloseResult__NetChecksumMismatch10                                           = 10,
	ENetCloseResult__SecurityMalformedPacket11                                       = 11,
	ENetCloseResult__SecurityInvalidData12                                           = 12,
	ENetCloseResult__SecurityClosed13                                                = 13,
	ENetCloseResult__Unknown14                                                       = 14,
	ENetCloseResult__Success15                                                       = 15,
	ENetCloseResult__Extended16                                                      = 16,
	ENetCloseResult__HostClosedConnection17                                          = 17,
	ENetCloseResult__Disconnect18                                                    = 18,
	ENetCloseResult__Upgrade19                                                       = 19,
	ENetCloseResult__PreLoginFailure20                                               = 20,
	ENetCloseResult__JoinFailure21                                                   = 21,
	ENetCloseResult__JoinSplitFailure22                                              = 22,
	ENetCloseResult__AddressResolutionFailed23                                       = 23,
	ENetCloseResult__RPCDoS24                                                        = 24,
	ENetCloseResult__Cleanup25                                                       = 25,
	ENetCloseResult__MissingLevelPackage26                                           = 26,
	ENetCloseResult__PacketHandlerIncomingError27                                    = 27,
	ENetCloseResult__ZeroLastByte28                                                  = 28,
	ENetCloseResult__ZeroSize29                                                      = 29,
	ENetCloseResult__ReadHeaderFail30                                                = 30,
	ENetCloseResult__ReadHeaderExtraFail31                                           = 31,
	ENetCloseResult__AckSequenceMismatch32                                           = 32,
	ENetCloseResult__BunchBadChannelIndex33                                          = 33,
	ENetCloseResult__BunchChannelNameFail34                                          = 34,
	ENetCloseResult__BunchWrongChannelType35                                         = 35,
	ENetCloseResult__BunchHeaderOverflow36                                           = 36,
	ENetCloseResult__BunchDataOverflow37                                             = 37,
	ENetCloseResult__BunchServerPackageMapExports38                                  = 38,
	ENetCloseResult__BunchPrematureControlChannel39                                  = 39,
	ENetCloseResult__BunchPrematureChannel40                                         = 40,
	ENetCloseResult__BunchPrematureControlClose41                                    = 41,
	ENetCloseResult__UnknownChannelType42                                            = 42,
	ENetCloseResult__PrematureSend43                                                 = 43,
	ENetCloseResult__CorruptData44                                                   = 44,
	ENetCloseResult__SocketSendFailure45                                             = 45,
	ENetCloseResult__BadChildConnectionIndex46                                       = 46,
	ENetCloseResult__LogLimitInstant47                                               = 47,
	ENetCloseResult__LogLimitSustained48                                             = 48,
	ENetCloseResult__EncryptionFailure49                                             = 49,
	ENetCloseResult__EncryptionTokenMissing50                                        = 50,
	ENetCloseResult__ReceivedNetGUIDBunchFail51                                      = 51,
	ENetCloseResult__MaxReliableExceeded52                                           = 52,
	ENetCloseResult__ReceivedNextBunchFail53                                         = 53,
	ENetCloseResult__ReceivedNextBunchQueueFail54                                    = 54,
	ENetCloseResult__PartialInitialReliableDestroy55                                 = 55,
	ENetCloseResult__PartialMergeReliableDestroy56                                   = 56,
	ENetCloseResult__PartialInitialNonByteAligned57                                  = 57,
	ENetCloseResult__PartialNonByteAligned58                                         = 58,
	ENetCloseResult__PartialFinalPackageMapExports59                                 = 59,
	ENetCloseResult__PartialTooLarge60                                               = 60,
	ENetCloseResult__AlreadyOpen61                                                   = 61,
	ENetCloseResult__ReliableBeforeOpen62                                            = 62,
	ENetCloseResult__ReliableBufferOverflow63                                        = 63,
	ENetCloseResult__RPCReliableBufferOverflow64                                     = 64,
	ENetCloseResult__ControlChannelClose65                                           = 65,
	ENetCloseResult__ControlChannelEndianCheck66                                     = 66,
	ENetCloseResult__ControlChannelPlayerChannelFail67                               = 67,
	ENetCloseResult__ControlChannelMessageUnknown68                                  = 68,
	ENetCloseResult__ControlChannelMessageFail69                                     = 69,
	ENetCloseResult__ControlChannelMessagePayloadFail70                              = 70,
	ENetCloseResult__ControlChannelBunchOverflowed71                                 = 71,
	ENetCloseResult__ControlChannelQueueBunchOverflowed72                            = 72,
	ENetCloseResult__ClientHasMustBeMappedGUIDs73                                    = 73,
	ENetCloseResult__ClientSentDestructionInfo74                                     = 74,
	ENetCloseResult__UnregisteredMustBeMappedGUID75                                  = 75,
	ENetCloseResult__ObjectReplicatorReceivedBunchFail76                             = 76,
	ENetCloseResult__ContentBlockFail77                                              = 77,
	ENetCloseResult__ContentBlockHeaderRepLayoutFail78                               = 78,
	ENetCloseResult__ContentBlockHeaderIsActorFail79                                 = 79,
	ENetCloseResult__ContentBlockHeaderObjFail80                                     = 80,
	ENetCloseResult__ContentBlockHeaderPrematureEnd81                                = 81,
	ENetCloseResult__ContentBlockHeaderSubObjectActor82                              = 82,
	ENetCloseResult__ContentBlockHeaderBadParent83                                   = 83,
	ENetCloseResult__ContentBlockHeaderInvalidCreate84                               = 84,
	ENetCloseResult__ContentBlockHeaderStablyNamedFail85                             = 85,
	ENetCloseResult__ContentBlockHeaderNoSubObjectClass86                            = 86,
	ENetCloseResult__ContentBlockHeaderUObjectSubObject87                            = 87,
	ENetCloseResult__ContentBlockHeaderAActorSubObject88                             = 88,
	ENetCloseResult__ContentBlockHeaderFail89                                        = 89,
	ENetCloseResult__ContentBlockPayloadBitsFail90                                   = 90,
	ENetCloseResult__FieldHeaderRepIndex91                                           = 91,
	ENetCloseResult__FieldHeaderBadRepIndex92                                        = 92,
	ENetCloseResult__FieldHeaderPayloadBitsFail93                                    = 93,
	ENetCloseResult__FieldPayloadFail94                                              = 94,
	ENetCloseResult__BeaconControlFlowError95                                        = 95,
	ENetCloseResult__BeaconUnableToParsePacket96                                     = 96,
	ENetCloseResult__BeaconAuthenticationFailure97                                   = 97,
	ENetCloseResult__BeaconLoginInvalidIdError98                                     = 98,
	ENetCloseResult__BeaconLoginInvalidAuthHandlerError99                            = 99,
	ENetCloseResult__BeaconAuthError100                                              = 100,
	ENetCloseResult__BeaconSpawnClientWorldPackageNameError101                       = 101,
	ENetCloseResult__BeaconSpawnExistingActorError102                                = 102,
	ENetCloseResult__BeaconSpawnFailureError103                                      = 103,
	ENetCloseResult__BeaconSpawnNetGUIDAckNoActor104                                 = 104,
	ENetCloseResult__BeaconSpawnNetGUIDAckNoHost105                                  = 105,
	ENetCloseResult__BeaconSpawnUnexpectedError106                                   = 106,
	ENetCloseResult__FaultDisconnect107                                              = 107,
	ENetCloseResult__NotRecoverable108                                               = 108,
	ENetCloseResult__ENetCloseResult_MAX109                                          = 109
};

/// Enum /Script/NetCore.EFastArraySerializerDeltaFlags
/// Size: 0x05
enum EFastArraySerializerDeltaFlags : uint8_t
{
	EFastArraySerializerDeltaFlags__None0                                            = 0,
	EFastArraySerializerDeltaFlags__HasBeenSerialized1                               = 1,
	EFastArraySerializerDeltaFlags__HasDeltaBeenRequested2                           = 2,
	EFastArraySerializerDeltaFlags__IsUsingDeltaSerialization3                       = 4,
	EFastArraySerializerDeltaFlags__EFastArraySerializerDeltaFlags_MAX4              = 5
};

