/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VerseInterface.

/// Struct /Script/VerseInterface.SolarisDebugMessage
/// Size: 0x0018 (0x000000 - 0x000018)
class FSolarisDebugMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ESolarisDebugMessageClientId)              ClientId                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ESolarisDebugMessageCommand)               Command                                                     ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(TArray<char>)                              MessageBodyUTF8                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/VerseInterface.ESolarisDebugMessageClientId
/// Size: 0x02
enum ESolarisDebugMessageClientId : uint32_t
{
	ESolarisDebugMessageClientId__None0                                              = 0,
	ESolarisDebugMessageClientId__Max1                                               = 2147483646
};

/// Enum /Script/VerseInterface.ESolarisDebugMessageCommand
/// Size: 0x05
enum ESolarisDebugMessageCommand : uint8_t
{
	ESolarisDebugMessageCommand__Connect0                                            = 0,
	ESolarisDebugMessageCommand__Disconnect1                                         = 1,
	ESolarisDebugMessageCommand__Message2                                            = 2,
	ESolarisDebugMessageCommand__PackageMapping3                                     = 3,
	ESolarisDebugMessageCommand__ESolarisDebugMessageCommand_MAX4                    = 4
};

