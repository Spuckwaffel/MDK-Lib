
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/NetworkPrediction.NetworkPredictionComponent
/// Size: 0x01F0 (0x0000A0 - 0x000290)
class UNetworkPredictionComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FNetworkPredictionProxy)                   NetworkPredictionProxy                                      ___ OFFSET(get<T>, {0xA0, 176, 0, 0})
	SMember(FReplicationProxy)                         ReplicationProxy_ServerRPC                                  ___ OFFSET(get<T>, {0x150, 80, 0, 0})
	SMember(FReplicationProxy)                         ReplicationProxy_Autonomous                                 ___ OFFSET(get<T>, {0x1A0, 80, 0, 0})
	SMember(FReplicationProxy)                         ReplicationProxy_Simulated                                  ___ OFFSET(get<T>, {0x1F0, 80, 0, 0})
	SMember(FReplicationProxy)                         ReplicationProxy_Replay                                     ___ OFFSET(get<T>, {0x240, 80, 0, 0})
};

/// Class /Script/NetworkPrediction.NetworkPredictionPhysicsComponent
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UNetworkPredictionPhysicsComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FNetworkPredictionProxy)                   NetworkPredictionProxy                                      ___ OFFSET(get<T>, {0xA0, 176, 0, 0})
	CMember(UPrimitiveComponent*)                      UpdatedPrimitive                                            ___ OFFSET(get<T>, {0x150, 8, 0, 0})
	SMember(FReplicationProxy)                         ReplicationProxy                                            ___ OFFSET(get<T>, {0x160, 80, 0, 0})
};

/// Class /Script/NetworkPrediction.NetworkPredictionReplicatedManager
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANetworkPredictionReplicatedManager : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FSharedPackageMap)                         SharedPackageMap                                            ___ OFFSET(get<T>, {0x290, 16, 0, 0})
};

/// Class /Script/NetworkPrediction.NetworkPredictionSettingsObject
/// Size: 0x0040 (0x000028 - 0x000068)
class UNetworkPredictionSettingsObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FNetworkPredictionSettings)                Settings                                                    ___ OFFSET(get<T>, {0x28, 48, 0, 0})
	CMember(TArray<FNetworkPredictionDevHUD>)          DevHUDs                                                     ___ OFFSET(get<T>, {0x58, 16, 0, 0})
};

/// Class /Script/NetworkPrediction.NetworkPredictionWorldManager
/// Size: 0x0640 (0x000030 - 0x000670)
class UNetworkPredictionWorldManager : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	CMember(ANetworkPredictionReplicatedManager*)      ReplicatedManager                                           ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/NetworkPrediction.NetworkPredictionProxy
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FNetworkPredictionProxy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UNetworkPredictionWorldManager*)           WorldManager                                                ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/NetworkPrediction.SharedPackageMapItem
/// Size: 0x0020 (0x000000 - 0x000020)
class FSharedPackageMapItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UObject*>)                  SoftPtr                                                     ___ OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/NetworkPrediction.SharedPackageMap
/// Size: 0x0010 (0x000000 - 0x000010)
class FSharedPackageMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSharedPackageMapItem>)             Items                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/NetworkPrediction.ReplicationProxy
/// Size: 0x0050 (0x000000 - 0x000050)
class FReplicationProxy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/NetworkPrediction.ServerReplicationRPCParameter
/// Size: 0x0018 (0x000000 - 0x000018)
class FServerReplicationRPCParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/NetworkPrediction.NetworkPredictionSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FNetworkPredictionSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ENetworkPredictionTickingPolicy)           PreferredTickingPolicy                                      ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UClass*)                                   ReplicatedManagerClassOverride                              ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   FixedTickFrameRate                                          ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bForceEngineFixTickForcePhysics                             ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	CMember(ENetworkLOD)                               SimulatedProxyNetworkLOD                                    ___ OFFSET(get<T>, {0x15, 1, 0, 0})
	DMember(int32_t)                                   FixedTickInterpolationBufferedMS                            ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   IndependentTickInterpolationBufferedMS                      ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   IndependentTickInterpolationMaxBufferedMS                   ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   FixedTickInputSendCount                                     ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   IndependentTickInputSendCount                               ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   MaximumRemoteInputFaultLimit                                ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Struct /Script/NetworkPrediction.NetworkPredictionDevHUDItem
/// Size: 0x0028 (0x000000 - 0x000028)
class FNetworkPredictionDevHUDItem : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   DisplayName                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   ExecCommand                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bAutoBack                                                   ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bRequirePIE                                                 ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(bool)                                      bRequireNotPIE                                              ___ OFFSET(get<bool>, {0x22, 1, 0, 0})
};

/// Struct /Script/NetworkPrediction.NetworkPredictionDevHUD
/// Size: 0x0028 (0x000000 - 0x000028)
class FNetworkPredictionDevHUD : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   HUDName                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNetworkPredictionDevHUDItem>)      Items                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bRequirePIE                                                 ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bRequireNotPIE                                              ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
};

/// Enum /Script/NetworkPrediction.ENetworkPredictionTickingPolicy
/// Size: 0x04
enum ENetworkPredictionTickingPolicy : uint8_t
{
	ENetworkPredictionTickingPolicy__Independent0                                    = 1,
	ENetworkPredictionTickingPolicy__Fixed1                                          = 2,
	ENetworkPredictionTickingPolicy__All2                                            = 3,
	ENetworkPredictionTickingPolicy__ENetworkPredictionTickingPolicy_MAX3            = 4
};

/// Enum /Script/NetworkPrediction.ENetworkLOD
/// Size: 0x05
enum ENetworkLOD : uint8_t
{
	ENetworkLOD__Interpolated0                                                       = 1,
	ENetworkLOD__SimExtrapolate1                                                     = 2,
	ENetworkLOD__ForwardPredict2                                                     = 4,
	ENetworkLOD__All3                                                                = 7,
	ENetworkLOD__ENetworkLOD_MAX4                                                    = 8
};

/// Enum /Script/NetworkPrediction.ENetworkPredictionStateRead
/// Size: 0x03
enum ENetworkPredictionStateRead : uint8_t
{
	ENetworkPredictionStateRead__Simulation0                                         = 0,
	ENetworkPredictionStateRead__Presentation1                                       = 1,
	ENetworkPredictionStateRead__ENetworkPredictionStateRead_MAX2                    = 2
};

