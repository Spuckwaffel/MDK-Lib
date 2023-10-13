
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils

/// Class /Script/SocketSubsystemEOS.NetConnectionEOS
/// Size: 0x0008 (0x001E88 - 0x001E90)
class UNetConnectionEOS : public UIpConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7824;

public:
};

/// Class /Script/SocketSubsystemEOS.NetDriverEOSBase
/// Size: 0x0008 (0x000868 - 0x000870)
class UNetDriverEOSBase : public UIpNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
	DMember(bool)                                      bIsPassthrough                                              OFFSET(get<bool>, {0x868, 1, 0, 0})
	DMember(bool)                                      bIsUsingP2PSockets                                          OFFSET(get<bool>, {0x869, 1, 0, 0})
};

