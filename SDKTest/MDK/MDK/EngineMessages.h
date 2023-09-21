
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/EngineMessages.EngineServicePing
/// Size: 0x0001 (0x000000 - 0x000001)
class FEngineServicePing : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/EngineMessages.EngineServicePong
/// Size: 0x0050 (0x000000 - 0x000050)
class FEngineServicePong : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   CurrentLevel                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   EngineVersion                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      HasBegunPlay                                                OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FGuid)                                     InstanceID                                                  OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   InstanceType                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FGuid)                                     SessionId                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(float)                                     WorldTimeSeconds                                            OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/EngineMessages.EngineServiceAuthDeny
/// Size: 0x0020 (0x000000 - 0x000020)
class FEngineServiceAuthDeny : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   UserName                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   UserToDeny                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EngineMessages.EngineServiceAuthGrant
/// Size: 0x0020 (0x000000 - 0x000020)
class FEngineServiceAuthGrant : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   UserName                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   UserToGrant                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EngineMessages.EngineServiceExecuteCommand
/// Size: 0x0020 (0x000000 - 0x000020)
class FEngineServiceExecuteCommand : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   Command                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   UserName                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EngineMessages.EngineServiceTerminate
/// Size: 0x0010 (0x000000 - 0x000010)
class FEngineServiceTerminate : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   UserName                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/EngineMessages.EngineServiceNotification
/// Size: 0x0018 (0x000000 - 0x000018)
class FEngineServiceNotification : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Text                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(double)                                    TimeSeconds                                                 OFFSET(get<double>, {0x10, 8, 0, 0})
};

