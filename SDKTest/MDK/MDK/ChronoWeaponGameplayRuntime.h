
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ChronoWeaponGameplayRuntime.AnimInstance_ChronoPanRifle
/// Size: 0x0010 (0x000350 - 0x000360)
class UAnimInstance_ChronoPanRifle : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	DMember(bool)                                      bIsFiring                                                   OFFSET(get<bool>, {0x348, 1, 0, 0})
	DMember(bool)                                      bIsReloading                                                OFFSET(get<bool>, {0x349, 1, 0, 0})
	DMember(float)                                     MagRotationValue                                            OFFSET(get<float>, {0x34C, 4, 0, 0})
	SMember(FName)                                     ResetMagRotationCurveName                                   OFFSET(getStruct<T>, {0x350, 4, 0, 0})
};

