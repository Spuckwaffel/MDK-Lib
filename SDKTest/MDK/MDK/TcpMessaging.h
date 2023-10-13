
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/TcpMessaging.TcpMessagingSettings
/// Size: 0x0030 (0x000028 - 0x000058)
class UTcpMessagingSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      EnableTransport                                             OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FString)                                   ListenEndpoint                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TArray<FString>)                           ConnectToEndpoints                                          OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(int32_t)                                   ConnectionRetryDelay                                        OFFSET(get<int32_t>, {0x50, 4, 0, 0})
};

