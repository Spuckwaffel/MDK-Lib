/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CorruptionGameplayCodeUI.

/// Class /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
/// Size: 0x0008 (0x000328 - 0x000330)
class UFortPowerupReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	CMember(EPowerupHeatState)                         LastPowerupHeatState                                        ___ OFFSET(get<T>, {0x328, 1, 0, 0})
};

/// Enum /Script/CorruptionGameplayCodeUI.EPowerupHeatState
/// Size: 0x04
enum EPowerupHeatState : uint8_t
{
	EPowerupHeatState__Normal0                                                       = 0,
	EPowerupHeatState__Superheated1                                                  = 1,
	EPowerupHeatState__Overheated2                                                   = 2,
	EPowerupHeatState__EPowerupHeatState_MAX3                                        = 3
};

