
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

/// Class /Script/Qos.QosBeaconClient
/// Size: 0x0060 (0x0003D0 - 0x000430)
class AQosBeaconClient : public AOnlineBeaconClient
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:


	/// Functions
	// Function /Script/Qos.QosBeaconClient.ServerQosRequest
	// void ServerQosRequest(FString InSessionId);                                                                              // [0x60fc00] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/Qos.QosBeaconClient.ClientQosResponse
	// void ClientQosResponse(EQosResponseType Response);                                                                       // [0x60fb80] Net|NetReliableNative|Event|Protected|NetClient 
};

/// Class /Script/Qos.QosBeaconHost
/// Size: 0x0010 (0x000340 - 0x000350)
class AQosBeaconHost : public AOnlineBeaconHostObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
};

/// Class /Script/Qos.QosEvaluator
/// Size: 0x00F8 (0x000028 - 0x000120)
class UQosEvaluator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FQosSearchPass)                            CurrentSearchPass                                           OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	DMember(int32_t)                                   ControllerId                                                OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(bool)                                      bInProgress                                                 OFFSET(get<bool>, {0xDC, 1, 0, 0})
	DMember(bool)                                      bCancelOperation                                            OFFSET(get<bool>, {0xDD, 1, 0, 0})
	CMember(TArray<FQosRegionInfo>)                    Datacenters                                                 OFFSET(get<T>, {0xE0, 16, 0, 0})
};

/// Class /Script/Qos.QosRegionManager
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UQosRegionManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(bool)                                      bUseOldQosServers                                           OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(int32_t)                                   NumTestsPerRegion                                           OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     PingTimeout                                                 OFFSET(get<float>, {0x30, 4, 0, 0})
	CMember(TArray<FQosDatacenterInfo>)                Datacenters                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FDateTime)                                 LastCheckTimestamp                                          OFFSET(getStruct<T>, {0x48, 8, 0, 0})
	CMember(UQosEvaluator*)                            Evaluator                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(EQosCompletionResult)                      QosEvalResult                                               OFFSET(get<T>, {0x58, 1, 0, 0})
	CMember(TArray<FQosRegionInfo>)                    RegionOptions                                               OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   ForceRegionId                                               OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bRegionForcedViaCommandline                                 OFFSET(get<bool>, {0x80, 1, 0, 0})
	SMember(FString)                                   SelectedRegionId                                            OFFSET(getStruct<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/Qos.QosSearchPass
/// Size: 0x0008 (0x000000 - 0x000008)
class FQosSearchPass : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   RegionIdx                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   CurrentSessionIdx                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Qos.QosRegionInfo
/// Size: 0x0078 (0x000000 - 0x000078)
class FQosRegionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FQosDatacenterInfo)                        Region                                                      OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	CMember(EQosRegionResult)                          Result                                                      OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(int32_t)                                   AvgPingMs                                                   OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	CMember(TArray<int32_t>)                           PingResults                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FDateTime)                                 LastCheckTimestamp                                          OFFSET(getStruct<T>, {0x70, 8, 0, 0})
};

/// Struct /Script/Qos.QosDatacenterInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FQosDatacenterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   RegionId                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bBeta                                                       OFFSET(get<bool>, {0x2A, 1, 0, 0})
	CMember(TArray<FQosPingServerInfo>)                Servers                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Qos.QosPingServerInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FQosPingServerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Address                                                     OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   Port                                                        OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Enum /Script/Qos.EQosResponseType
/// Size: 0x04
enum EQosResponseType : uint8_t
{
	EQosResponseType__NoResponse0                                                    = 0,
	EQosResponseType__Success1                                                       = 1,
	EQosResponseType__Failure2                                                       = 2,
	EQosResponseType__EQosResponseType_MAX3                                          = 3
};

/// Enum /Script/Qos.EQosCompletionResult
/// Size: 0x05
enum EQosCompletionResult : uint8_t
{
	EQosCompletionResult__Invalid0                                                   = 0,
	EQosCompletionResult__Success1                                                   = 1,
	EQosCompletionResult__Failure2                                                   = 2,
	EQosCompletionResult__Canceled3                                                  = 3,
	EQosCompletionResult__EQosCompletionResult_MAX4                                  = 4
};

/// Enum /Script/Qos.EQosRegionResult
/// Size: 0x04
enum EQosRegionResult : uint8_t
{
	EQosRegionResult__Invalid0                                                       = 0,
	EQosRegionResult__Success1                                                       = 1,
	EQosRegionResult__Incomplete2                                                    = 2,
	EQosRegionResult__EQosRegionResult_MAX3                                          = 3
};

