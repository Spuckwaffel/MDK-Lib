
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: ReplicationGraph

/// Class /Script/MeshNetwork.MeshBeaconClient
/// Size: 0x0080 (0x000320 - 0x0003A0)
class AMeshBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	DMember(bool)                                      bConnectedToRoot                                            ___ OFFSET(get<bool>, {0x360, 1, 0, 0})
	SMember(FDateTime)                                 MeshPingTime                                                ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(TArray<FString>)                           ParentIds                                                   ___ OFFSET(get<T>, {0x370, 16, 0, 0})
	SMember(FString)                                   ClientId                                                    ___ OFFSET(get<T>, {0x380, 16, 0, 0})
};

/// Class /Script/MeshNetwork.MeshBeaconHost
/// Size: 0x0008 (0x0003D0 - 0x0003D8)
class AMeshBeaconHost : public AOnlineBeaconHost
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 984;

public:
	DMember(int32_t)                                   MaxConnections                                              ___ OFFSET(get<int32_t>, {0x3D0, 4, 0, 0})
};

/// Class /Script/MeshNetwork.MeshBeaconHostObject
/// Size: 0x0018 (0x0002B8 - 0x0002D0)
class AMeshBeaconHostObject : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
};

/// Class /Script/MeshNetwork.MeshConnection
/// Size: 0x0000 (0x001E88 - 0x001E88)
class UMeshConnection : public UIpConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7816;

public:
};

/// Class /Script/MeshNetwork.MeshNetDriver
/// Size: 0x0018 (0x000868 - 0x000880)
class UMeshNetDriver : public UIpNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2176;

public:
	CMember(TArray<AActor*>)                           ClientDormantDynamicActors                                  ___ OFFSET(get<T>, {0x870, 16, 0, 0})
};

/// Class /Script/MeshNetwork.MeshNetworkComponent
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UMeshNetworkComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(EMeshNetworkRelevancy)                     MeshRelevancy                                               ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(TMap<FString, FAggregatedFunction>)        AggregatedFunctions                                         ___ OFFSET(get<T>, {0xA8, 80, 0, 0})
	CMember(TMap<FName, FAggregatedFunctionConfig>)    AggregatedFunctionConfigs                                   ___ OFFSET(get<T>, {0xF8, 80, 0, 0})
};

/// Class /Script/MeshNetwork.MeshNetworkSubsystem
/// Size: 0x00D8 (0x000030 - 0x000108)
class UMeshNetworkSubsystem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  OnMeshNodeTypeChanged                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConnectedToRootChanged                                    ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnGameServerNodeTypeChanged                                 ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMeshMetaDataUpdated                                       ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMeshPlayerRequested                                       ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(EMeshNetworkNodeType)                      NodeType                                                    ___ OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(EMeshNetworkNodeType)                      GameServerNodeType                                          ___ OFFSET(get<T>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bConnectedToRoot                                            ___ OFFSET(get<bool>, {0xB2, 1, 0, 0})
	DMember(bool)                                      bMetadataReceived                                           ___ OFFSET(get<bool>, {0xB3, 1, 0, 0})
};

/// Class /Script/MeshNetwork.MeshReplicationGraphConnection
/// Size: 0x0000 (0x000378 - 0x000378)
class UMeshReplicationGraphConnection : public UNetReplicationGraphConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
};

/// Class /Script/MeshNetwork.MeshReplicationGraph
/// Size: 0x0000 (0x000570 - 0x000570)
class UMeshReplicationGraph : public UReplicationGraph
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Struct /Script/MeshNetwork.AggregatedFunction
/// Size: 0x0028 (0x000000 - 0x000028)
class FAggregatedFunction : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UFunction*)                                Function                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MeshNetwork.AggregatedFunctionConfig
/// Size: 0x0060 (0x000000 - 0x000060)
class FAggregatedFunctionConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(double)                                    AggregationTimeout                                          ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(bool)                                      bAggregationEnabled                                         ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(TSet<FName>)                               NoAggregationParameters                                     ___ OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/MeshNetwork.MeshMetaDataStruct
/// Size: 0x0001 (0x000000 - 0x000001)
class FMeshMetaDataStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/MeshNetwork.EMeshNetworkNodeType
/// Size: 0x06
enum EMeshNetworkNodeType : uint8_t
{
	EMeshNetworkNodeType__Root0                                                      = 0,
	EMeshNetworkNodeType__Inner1                                                     = 1,
	EMeshNetworkNodeType__Edge2                                                      = 2,
	EMeshNetworkNodeType__Client3                                                    = 3,
	EMeshNetworkNodeType__Unknown4                                                   = 4,
	EMeshNetworkNodeType__EMeshNetworkNodeType_MAX5                                  = 5
};

/// Enum /Script/MeshNetwork.EMeshNetworkRelevancy
/// Size: 0x04
enum EMeshNetworkRelevancy : uint8_t
{
	EMeshNetworkRelevancy__NotRelevant0                                              = 0,
	EMeshNetworkRelevancy__RelevantToEdgeNodes1                                      = 1,
	EMeshNetworkRelevancy__RelevantToClients2                                        = 2,
	EMeshNetworkRelevancy__EMeshNetworkRelevancy_MAX3                                = 3
};

