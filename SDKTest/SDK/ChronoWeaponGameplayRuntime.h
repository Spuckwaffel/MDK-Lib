/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ChronoWeaponGameplayRuntime.

/// Class /Script/ChronoWeaponGameplayRuntime.AnimInstance_ChronoPanRifle
/// Size: 0x0010 (0x000350 - 0x000360)
class UAnimInstance_ChronoPanRifle : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	DMember(bool)                                      bIsFiring                                                   ___ OFFSET(get<bool>, {0x348, 1, 0, 0})
	DMember(bool)                                      bIsReloading                                                ___ OFFSET(get<bool>, {0x349, 1, 0, 0})
	DMember(float)                                     MagRotationValue                                            ___ OFFSET(get<float>, {0x34C, 4, 0, 0})
	SMember(FName)                                     ResetMagRotationCurveName                                   ___ OFFSET(get<T>, {0x350, 4, 0, 0})
};

