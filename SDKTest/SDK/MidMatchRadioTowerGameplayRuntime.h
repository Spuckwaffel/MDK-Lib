/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MidMatchRadioTowerGameplayRuntime.

/// Class /Script/MidMatchRadioTowerGameplayRuntime.RadioTowerTerminal
/// Size: 0x0008 (0x000978 - 0x000980)
class ARadioTowerTerminal : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2432;

public:
	DMember(float)                                     MaxInteractHalfAngle                                        ___ OFFSET(get<float>, {0x978, 4, 0, 0})
};

/// Class /Script/MidMatchRadioTowerGameplayRuntime.RemoveFoliageBoxComponent
/// Size: 0x0000 (0x0005B0 - 0x0005B0)
class URemoveFoliageBoxComponent : public UBoxComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1456;

public:
};

/// Class /Script/MidMatchRadioTowerGameplayRuntime.BuildingGameplayActorRadioTower
/// Size: 0x0028 (0x000978 - 0x0009A0)
class ABuildingGameplayActorRadioTower : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2464;

public:
	SMember(FScalableFloat)                            MarkLinkedRadioTowerTerminal                                ___ OFFSET(get<T>, {0x978, 40, 0, 0})
};

