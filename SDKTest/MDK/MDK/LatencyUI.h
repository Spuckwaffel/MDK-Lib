
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/LatencyUI.LatencyGraph
/// Size: 0x0048 (0x0002A8 - 0x0002F0)
class ULatencyGraph : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FColor)                                    TotalLatencyLineColor                                       OFFSET(getStruct<T>, {0x2A8, 4, 0, 0})
	SMember(FColor)                                    GameLatencyLineColor                                        OFFSET(getStruct<T>, {0x2AC, 4, 0, 0})
	SMember(FColor)                                    RenderLatencyLineColor                                      OFFSET(getStruct<T>, {0x2B0, 4, 0, 0})
	SMember(FColor)                                    DriverLatencyLineColor                                      OFFSET(getStruct<T>, {0x2B4, 4, 0, 0})
	SMember(FColor)                                    OSWorkQueueLatencyLineColor                                 OFFSET(getStruct<T>, {0x2B8, 4, 0, 0})
	SMember(FColor)                                    GPURenderLatencyLineColor                                   OFFSET(getStruct<T>, {0x2BC, 4, 0, 0})
	SMember(FColor)                                    BackgroundColor                                             OFFSET(getStruct<T>, {0x2C0, 4, 0, 0})
	DMember(float)                                     MaxLatencyToGraph                                           OFFSET(get<float>, {0x2C4, 4, 0, 0})
	SMember(FVector2D)                                 DesiredSize                                                 OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
};

/// Class /Script/LatencyUI.LatencyWidget
/// Size: 0x00F8 (0x0002A8 - 0x0003A0)
class ULatencyWidget : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
	CMember(UCommonTextBlock*)                         TotalLatencyUI                                              OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         GameLatencyUI                                               OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         RenderLatencyUI                                             OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         OSWorkLatencyUI                                             OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         DriverLatencyUI                                             OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         GPURenderLatencyUI                                          OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         TweakLatencyUI                                              OFFSET(get<T>, {0x2E0, 8, 0, 0})


	/// Functions
	// Function /Script/LatencyUI.LatencyWidget.StopTimer
	// void StopTimer();                                                                                                        // [0xa351928] Final|Native|Protected|BlueprintCallable 
	// Function /Script/LatencyUI.LatencyWidget.StartTimer
	// void StartTimer();                                                                                                       // [0xa351910] Final|Native|Protected|BlueprintCallable 
};

