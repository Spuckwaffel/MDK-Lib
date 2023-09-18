/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TankUI.

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
	CMember(AFortTankVehicle*)                         OwningTankVehicle                                           ___ OFFSET(get<T>, {0x480, 8, 0, 0})
	DMember(float)                                     MinTurretPitch                                              ___ OFFSET(get<float>, {0x488, 4, 0, 0})
	DMember(float)                                     MaxTurretPitch                                              ___ OFFSET(get<float>, {0x48C, 4, 0, 0})
	DMember(bool)                                      bDistanceMeterEnabled                                       ___ OFFSET(get<bool>, {0x490, 1, 0, 0})
	DMember(bool)                                      bTankOrientationEventsEnabled                               ___ OFFSET(get<bool>, {0x491, 1, 0, 0})
};

