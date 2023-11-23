
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CommonUI
/// dependency: CoreUObject
/// dependency: FortniteUI
/// dependency: UMG

/// Class /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget
/// Size: 0x0008 (0x000340 - 0x000348)
class UFortPowerupReticleExtensionWidget : public UFortWeaponReticleExtensionWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	CMember(EPowerupHeatState)                         LastPowerupHeatState                                        OFFSET(get<T>, {0x340, 1, 0, 0})


	/// Functions
	// Function /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetOverheatingMaxValue
	// float GetOverheatingMaxValue();                                                                                          // [0xa069aa0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatValue
	// float GetCurrentOverheatValue();                                                                                         // [0xa069a78] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CorruptionGameplayCodeUI.FortPowerupReticleExtensionWidget.GetCurrentOverheatPercent
	// float GetCurrentOverheatPercent();                                                                                       // [0xa069a50] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
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

