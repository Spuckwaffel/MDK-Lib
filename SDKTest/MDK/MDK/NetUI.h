
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
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x310, 1, 0, 0})
	DMember(float)                                     MinimumDisplayTime                                          ___ OFFSET(get<float>, {0x314, 4, 0, 0})
	DMember(float)                                     UpdateTime                                                  ___ OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(float)                                     InitialDelay                                                ___ OFFSET(get<float>, {0x31C, 4, 0, 0})
};

/// Class /Script/NetUI.NetDebugWidget
/// Size: 0x00E8 (0x0002A8 - 0x000390)
class UNetDebugWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(UCommonTextBlock*)                         PingUI                                                      ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PacketInRateUI                                              ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PacketOutRateUI                                             ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PacketInLossUI                                              ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         PacketOutLossUI                                             ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         UpBandwidthUI                                               ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         DownBandwidthUI                                             ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
};

/// Class /Script/NetUI.NetGraph
/// Size: 0x0038 (0x0002A8 - 0x0002E0)
class UNetGraph : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FColor)                                    BackgroundColor                                             ___ OFFSET(get<T>, {0x2A8, 4, 0, 0})
	SMember(FColor)                                    PingLineColor                                               ___ OFFSET(get<T>, {0x2AC, 4, 0, 0})
	SMember(FColor)                                    QueuedBunchesLineColor                                      ___ OFFSET(get<T>, {0x2B0, 4, 0, 0})
	SMember(FColor)                                    PacketLossLineColor                                         ___ OFFSET(get<T>, {0x2B4, 4, 0, 0})
	SMember(FVector2D)                                 DesiredSize                                                 ___ OFFSET(get<T>, {0x2B8, 16, 0, 0})
	DMember(float)                                     MaxPingToGraph                                              ___ OFFSET(get<float>, {0x2C8, 4, 0, 0})
};

