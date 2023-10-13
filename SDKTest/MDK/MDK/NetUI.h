
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/NetUI.NetDebugWidget
/// Size: 0x0108 (0x000208 - 0x000310)
class UNetDebugWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UCommonTextBlock*)                         PingUI                                                      OFFSET(get<T>, {0x208, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PacketInRateUI                                              OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PacketOutRateUI                                             OFFSET(get<T>, {0x218, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PacketInLossUI                                              OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PacketOutLossUI                                             OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(UCommonTextBlock*)                         UpBandwidthUI                                               OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(UCommonTextBlock*)                         DownBandwidthUI                                             OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(UHorizontalBox*)                           TimeoutUI                                                   OFFSET(get<T>, {0x240, 8, 0, 0})


	/// Functions
	// Function /Script/NetUI.NetDebugWidget.StopTimer
	// void StopTimer();                                                                                                        // [0x5f73b0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/NetUI.NetDebugWidget.StartTimer
	// void StartTimer();                                                                                                       // [0x5f7390] Final|Native|Protected|BlueprintCallable 
};

