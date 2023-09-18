/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package LatencyUI.

/// Class /Script/LatencyUI.LatencyGraph
/// Size: 0x0048 (0x0002A8 - 0x0002F0)
class ULatencyGraph : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FColor)                                    TotalLatencyLineColor                                       ___ OFFSET(get<T>, {0x2A8, 4, 0, 0})
	SMember(FColor)                                    GameLatencyLineColor                                        ___ OFFSET(get<T>, {0x2AC, 4, 0, 0})
	SMember(FColor)                                    RenderLatencyLineColor                                      ___ OFFSET(get<T>, {0x2B0, 4, 0, 0})
	SMember(FColor)                                    DriverLatencyLineColor                                      ___ OFFSET(get<T>, {0x2B4, 4, 0, 0})
	SMember(FColor)                                    OSWorkQueueLatencyLineColor                                 ___ OFFSET(get<T>, {0x2B8, 4, 0, 0})
	SMember(FColor)                                    GPURenderLatencyLineColor                                   ___ OFFSET(get<T>, {0x2BC, 4, 0, 0})
	SMember(FColor)                                    BackgroundColor                                             ___ OFFSET(get<T>, {0x2C0, 4, 0, 0})
	DMember(float)                                     MaxLatencyToGraph                                           ___ OFFSET(get<float>, {0x2C4, 4, 0, 0})
	SMember(FVector2D)                                 DesiredSize                                                 ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
};

/// Class /Script/LatencyUI.LatencyWidget
/// Size: 0x00F8 (0x0002A8 - 0x0003A0)
class ULatencyWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(UCommonTextBlock*)                         TotalLatencyUI                                              ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         GameLatencyUI                                               ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         RenderLatencyUI                                             ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         OSWorkLatencyUI                                             ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         DriverLatencyUI                                             ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         GPURenderLatencyUI                                          ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TweakLatencyUI                                              ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

