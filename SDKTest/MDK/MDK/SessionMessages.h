
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/SessionMessages.SessionServiceLogUnsubscribe
/// Size: 0x0001 (0x000000 - 0x000001)
class FSessionServiceLogUnsubscribe : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SessionMessages.SessionServiceLogSubscribe
/// Size: 0x0001 (0x000000 - 0x000001)
class FSessionServiceLogSubscribe : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SessionMessages.SessionServiceLog
/// Size: 0x0038 (0x000000 - 0x000038)
class FSessionServiceLog : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Category                                                    OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   Data                                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FGuid)                                     InstanceId                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(double)                                    TimeSeconds                                                 OFFSET(get<double>, {0x28, 8, 0, 0})
	DMember(unsigned char)                             Verbosity                                                   OFFSET(get<unsigned char>, {0x30, 1, 0, 0})
};

/// Struct /Script/SessionMessages.SessionServicePong
/// Size: 0x0098 (0x000000 - 0x000098)
class FSessionServicePong : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(bool)                                      Authorized                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   BuildDate                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   DeviceName                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FGuid)                                     InstanceId                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   InstanceName                                                OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      IsConsoleBuild                                              OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FString)                                   PlatformName                                                OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FGuid)                                     SessionId                                                   OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   SessionName                                                 OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   SessionOwner                                                OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      Standalone                                                  OFFSET(get<bool>, {0x90, 1, 0, 0})
};

/// Struct /Script/SessionMessages.SessionServicePing
/// Size: 0x0010 (0x000000 - 0x000010)
class FSessionServicePing : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   UserName                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
};

