
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/NevadaUI.FortNevadaVehicleReticle
/// Size: 0x00A8 (0x000480 - 0x000528)
class UFortNevadaVehicleReticle : public UFortAthenaVehicleDashboardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1320;

public:
	CMember(UClass*)                                   NevadaTargetIndicatorClass                                  OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UNevadaTargetIndicator*)                   TargetIndicator                                             OFFSET(get<T>, {0x488, 8, 0, 0})
	CMember(AFortNevadaVehicle*)                       OwningNevadaVehicle                                         OFFSET(get<T>, {0x490, 8, 0, 0})
	SMember(FUserWidgetPool)                           IndicatorPool                                               OFFSET(get<T>, {0x4A0, 136, 0, 0})


	/// Functions
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnVehicleStateChanged
	// void OnVehicleStateChanged(ENevadaFlightStates VehicleState);                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamEnabledChanged
	// void OnTractorBeamEnabledChanged(bool bEnabled);                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDetached
	// void OnTractorBeamDetached();                                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamDeactivated
	// void OnTractorBeamDeactivated(float Cooldown);                                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamChargeStarted
	// void OnTractorBeamChargeStarted();                                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamAttached
	// void OnTractorBeamAttached();                                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnTractorBeamActivated
	// void OnTractorBeamActivated();                                                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnEnergyCanonFired
	// void OnEnergyCanonFired(float Cooldown);                                                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnEnergyCannonEnabledChanged
	// void OnEnergyCannonEnabledChanged(bool bEnabled);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/NevadaUI.FortNevadaVehicleReticle.OnBatteryChanged
	// void OnBatteryChanged(float BatteryLevel);                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Class /Script/NevadaUI.NevadaTargetIndicator
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class UNevadaTargetIndicator : public UFortActorIndicatorWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

