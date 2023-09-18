/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NevadaUI.

/// Class /Script/NevadaUI.FortNevadaVehicleReticle
/// Size: 0x00A8 (0x000480 - 0x000528)
class UFortNevadaVehicleReticle : public UFortAthenaVehicleDashboardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1320;

public:
	CMember(UClass*)                                   NevadaTargetIndicatorClass                                  ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UNevadaTargetIndicator*)                   TargetIndicator                                             ___ OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(AFortNevadaVehicle*)                       OwningNevadaVehicle                                         ___ OFFSET(get<T>, {0x490, 8, 0, 0})
	SMember(FUserWidgetPool)                           IndicatorPool                                               ___ OFFSET(get<T>, {0x4A0, 136, 0, 0})
};

/// Class /Script/NevadaUI.NevadaTargetIndicator
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class UNevadaTargetIndicator : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

