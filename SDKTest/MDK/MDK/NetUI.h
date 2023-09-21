
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/NetUI.BadNetworkIndicator
/// Size: 0x0030 (0x000310 - 0x000340)
class UBadNetworkIndicator : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(float)                                     MinimumDisplayTime                                          OFFSET(get<float>, {0x314, 4, 0, 0})
	DMember(float)                                     UpdateTime                                                  OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(float)                                     InitialDelay                                                OFFSET(get<float>, {0x31C, 4, 0, 0})


	/// Functions
	// Function /Script/NetUI.BadNetworkIndicator.UpdateDisplay
	// void UpdateDisplay();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/NetUI.BadNetworkIndicator.ShouldDisplay
	// bool ShouldDisplay();                                                                                                    // [0xa2031dc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasSeverePing
	// bool HasSeverePing();                                                                                                    // [0xa2031b8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasSeverePacketLoss
	// bool HasSeverePacketLoss();                                                                                              // [0xa203194] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasBadPing
	// bool HasBadPing();                                                                                                       // [0xa203170] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.HasBadPacketLoss
	// bool HasBadPacketLoss();                                                                                                 // [0xa20314c] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.GetPing
	// float GetPing();                                                                                                         // [0xa203124] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NetUI.BadNetworkIndicator.GetPacketLoss
	// float GetPacketLoss();                                                                                                   // [0xa2030fc] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/NetUI.NetDebugWidget
/// Size: 0x00E8 (0x0002A8 - 0x000390)
class UNetDebugWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(UCommonTextBlock*)                         PingUI                                                      OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PacketInRateUI                                              OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PacketOutRateUI                                             OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PacketInLossUI                                              OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PacketOutLossUI                                             OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         UpBandwidthUI                                               OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         DownBandwidthUI                                             OFFSET(get<T>, {0x2D8, 8, 0, 0})


	/// Functions
	// Function /Script/NetUI.NetDebugWidget.StopTimer
	// void StopTimer();                                                                                                        // [0x3405344] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NetUI.NetDebugWidget.StartTimer
	// void StartTimer();                                                                                                       // [0xa203200] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/NetUI.NetGraph
/// Size: 0x0038 (0x0002A8 - 0x0002E0)
class UNetGraph : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FColor)                                    BackgroundColor                                             OFFSET(get<T>, {0x2A8, 4, 0, 0})
	SMember(FColor)                                    PingLineColor                                               OFFSET(get<T>, {0x2AC, 4, 0, 0})
	SMember(FColor)                                    QueuedBunchesLineColor                                      OFFSET(get<T>, {0x2B0, 4, 0, 0})
	SMember(FColor)                                    PacketLossLineColor                                         OFFSET(get<T>, {0x2B4, 4, 0, 0})
	SMember(FVector2D)                                 DesiredSize                                                 OFFSET(get<T>, {0x2B8, 16, 0, 0})
	DMember(float)                                     MaxPingToGraph                                              OFFSET(get<float>, {0x2C8, 4, 0, 0})
};

