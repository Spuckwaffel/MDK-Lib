
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/UACBase.UACNetworkComponent
/// Size: 0x0150 (0x0000F0 - 0x000240)
class UUACNetworkComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	DMember(int32_t)                                   PlayerID                                                    OFFSET(get<int32_t>, {0xF0, 4, 0, 0})


	/// Functions
	// Function /Script/UACBase.UACNetworkComponent.SendPacketToServer
	// void SendPacketToServer(unsigned char Type, TArray<unsigned char> Packet);                                               // [0x7f0900] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/UACBase.UACNetworkComponent.SendPacketToClient
	// void SendPacketToClient(unsigned char Type, TArray<unsigned char> Packet);                                               // [0x7f0820] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/UACBase.UACNetworkComponent.SendClientHello
	// void SendClientHello();                                                                                                  // [0x7f0800] Net|NetReliableNative|Event|Public|NetClient 
};

