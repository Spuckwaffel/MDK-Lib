
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteGame
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/TankUI.FortGameSettingRegistryExtension_Tank
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortGameSettingRegistryExtension_Tank : public UFortGameSettingRegistryExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TankUI.TankVehicleReticle
/// Size: 0x0020 (0x000480 - 0x0004A0)
class UTankVehicleReticle : public UFortAthenaVehicleDashboardWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	CMember(AFortTankVehicle*)                         OwningTankVehicle                                           OFFSET(get<T>, {0x480, 8, 0, 0})
	DMember(float)                                     MinTurretPitch                                              OFFSET(get<float>, {0x488, 4, 0, 0})
	DMember(float)                                     MaxTurretPitch                                              OFFSET(get<float>, {0x48C, 4, 0, 0})
	DMember(bool)                                      bDistanceMeterEnabled                                       OFFSET(get<bool>, {0x490, 1, 0, 0})
	DMember(bool)                                      bTankOrientationEventsEnabled                               OFFSET(get<bool>, {0x491, 1, 0, 0})


	/// Functions
	// Function /Script/TankUI.TankVehicleReticle.SetupVehicleFromBP
	// void SetupVehicleFromBP(AActor* NewVehicle);                                                                             // [0x9a5f5fc] Final|Native|Protected|BlueprintCallable 
	// Function /Script/TankUI.TankVehicleReticle.OnTreadEnabledChanged
	// void OnTreadEnabledChanged(bool bEnabled, TEnumAsByte<ETreadSide> Side);                                                 // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankTurretAimYawValueChanged
	// void OnTankTurretAimYawValueChanged(float Value);                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankTurretAimPitchValueChanged
	// void OnTankTurretAimPitchValueChanged(float Pitch, float PitchPercent);                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankTargetingReleased
	// void OnTankTargetingReleased();                                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankTargetingPressed
	// void OnTankTargetingPressed();                                                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankRotationValueChanged
	// void OnTankRotationValueChanged(float TankValue, float TurretValue);                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankHatchHealthChanged
	// void OnTankHatchHealthChanged(float HatchHealth, float HatchHealthMax, bool bNewlyDisabled, bool bNewlyEnabled);         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankEngineHealthChanged
	// void OnTankEngineHealthChanged(float EngineHealth, float EngineHealthMax, bool bNewlyDisabled, bool bNewlyEnabled);      // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnTankDistanceUpdate
	// void OnTankDistanceUpdate(float Distance, float DistancePercent);                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.OnCannonFired
	// void OnCannonFired(float RateTime);                                                                                      // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/TankUI.TankVehicleReticle.HandleOnEquipMountedWeapon
	// void HandleOnEquipMountedWeapon(AFortWeaponRanged* EquippedMountedWeapon);                                               // [0x9a5f57c] Final|Native|Private 
	// Function /Script/TankUI.TankVehicleReticle.HandleOnDamageablePartHealthChanged
	// void HandleOnDamageablePartHealthChanged(FVehicleDamageablePartConfig& PartConfig, FVehicleDamageablePart& Part, bool bNewlyDisabled, bool bNewlyEnabled); // [0x9a5f230] Final|Native|Private|HasOutParms 
};

