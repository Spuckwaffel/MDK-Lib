
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ReplicationGraph.ReplicationGraphNode
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UReplicationGraphNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TArray<UReplicationGraphNode*>)            AllChildNodes                                               OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ActorList
/// Size: 0x00B0 (0x0000A0 - 0x000150)
class UReplicationGraphNode_ActorList : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets
/// Size: 0x00E0 (0x0000A0 - 0x000180)
class UReplicationGraphNode_ActorListFrequencyBuckets : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ConnectionDormanyNode
/// Size: 0x0000 (0x000150 - 0x000150)
class UReplicationGraphNode_ConnectionDormanyNode : public UReplicationGraphNode_ActorList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_DormancyNode
/// Size: 0x0050 (0x000150 - 0x0001A0)
class UReplicationGraphNode_DormancyNode : public UReplicationGraphNode_ActorList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_GridCell
/// Size: 0x0010 (0x000150 - 0x000160)
class UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(UReplicationGraphNode_ActorListFrequencyBuckets*) DynamicNode                                          OFFSET(get<T>, {0x148, 8, 0, 0})
	CMember(UReplicationGraphNode_DormancyNode*)       DormancyNode                                                OFFSET(get<T>, {0x150, 8, 0, 0})
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_GridSpatialization2D
/// Size: 0x0130 (0x0000A0 - 0x0001D0)
class UReplicationGraphNode_GridSpatialization2D : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_ClassCategories
/// Size: 0x0060 (0x0000A0 - 0x000100)
class UReplicationGraphNode_ClassCategories : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_FrequencyLimiter
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UReplicationGraphNode_FrequencyLimiter : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class UReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UReplicationGraphNode*)                    ChildNode                                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UReplicationGraphNode*)                    ChildNode                                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection
/// Size: 0x0030 (0x0000A0 - 0x0000D0)
class UReplicationGraphNode_TearOff_ForConnection : public UReplicationGraphNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FTearOffActorInfo>)                 TearOffActors                                               OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/ReplicationGraph.ReplicationGraph
/// Size: 0x0248 (0x000050 - 0x000298)
class UReplicationGraph : public UReplicationDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UClass*)                                   ReplicationConnectionManagerClass                           OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UNetDriver*)                               NetDriver                                                   OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TArray<UNetReplicationGraphConnection*>)   Connections                                                 OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<UNetReplicationGraphConnection*>)   PendingConnections                                          OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<UReplicationGraphNode*>)            GlobalGraphNodes                                            OFFSET(get<T>, {0x130, 16, 0, 0})
	CMember(TArray<UReplicationGraphNode*>)            PrepareForReplicationNodes                                  OFFSET(get<T>, {0x140, 16, 0, 0})
};

/// Class /Script/ReplicationGraph.NetReplicationGraphConnection
/// Size: 0x01F8 (0x000028 - 0x000220)
class UNetReplicationGraphConnection : public UReplicationConnectionDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(UNetConnection*)                           NetConnection                                               OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(AReplicationGraphDebugActor*)              DebugActor                                                  OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(TArray<UReplicationGraphNode*>)            ConnectionGraphNodes                                        OFFSET(get<T>, {0x1F0, 16, 0, 0})
	CMember(UReplicationGraphNode_TearOff_ForConnection*) TearOffNode                                              OFFSET(get<T>, {0x200, 8, 0, 0})
};

/// Class /Script/ReplicationGraph.ReplicationGraphDebugActor
/// Size: 0x0010 (0x000318 - 0x000328)
class AReplicationGraphDebugActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(UReplicationGraph*)                        ReplicationGraph                                            OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UNetReplicationGraphConnection*)           ConnectionManager                                           OFFSET(get<T>, {0x320, 8, 0, 0})


	/// Functions
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	// void ServerStopDebugging();                                                                                              // [0x6fd2a0] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	// void ServerStartDebugging();                                                                                             // [0x6fd250] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	// void ServerPrintAllActorInfo(FString Str);                                                                               // [0x6fd190] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	// void ServerCellInfo();                                                                                                   // [0x6fd140] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
	// void ClientCellInfo(FVector CellLocation, FVector CellExtent, TArray<AActor*> Actors);                                   // [0x6fd010] Net|NetReliableNative|Event|Public|HasDefaults|NetClient 
};

/// Struct /Script/ReplicationGraph.TearOffActorInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FTearOffActorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(AActor*)                                   Actor                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
};

