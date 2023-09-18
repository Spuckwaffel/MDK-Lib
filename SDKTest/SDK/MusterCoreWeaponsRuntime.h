/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package MusterCoreWeaponsRuntime.

/// Class /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile
/// Size: 0x0090 (0x000C08 - 0x000C98)
class AFortMusterExplosiveARProjectile : public AFortProjectileAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3224;

public:
	SMember(FVector)                                   HitLocation                                                 ___ OFFSET(get<T>, {0xC08, 24, 0, 0})
	SMember(FRotator)                                  HitRotation                                                 ___ OFFSET(get<T>, {0xC20, 24, 0, 0})
	DMember(bool)                                      bHitPlayer                                                  ___ OFFSET(get<bool>, {0xC38, 1, 0, 0})
	DMember(float)                                     DrawDistance                                                ___ OFFSET(get<float>, {0xC3C, 4, 0, 0})
	CMember(UParticleSystemComponent*)                 ProjectileTrail                                             ___ OFFSET(get<T>, {0xC40, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NS_Explosion                                                ___ OFFSET(get<T>, {0xC48, 8, 0, 0})
	SMember(FGameplayTag)                              FeedbackCue                                                 ___ OFFSET(get<T>, {0xC50, 4, 0, 0})
	SMember(FVector)                                   DecalSize                                                   ___ OFFSET(get<T>, {0xC58, 24, 0, 0})
	DMember(float)                                     DecalLifeSpan                                               ___ OFFSET(get<float>, {0xC70, 4, 0, 0})
	DMember(float)                                     TimebeforeDecalFadeOut                                      ___ OFFSET(get<float>, {0xC74, 4, 0, 0})
	DMember(float)                                     DecalFadeOutDuration                                        ___ OFFSET(get<float>, {0xC78, 4, 0, 0})
	CMember(UMaterialInterface*)                       DecalMaterial                                               ___ OFFSET(get<T>, {0xC80, 8, 0, 0})
	CMember(USoundBase*)                               Cue_CloseSound                                              ___ OFFSET(get<T>, {0xC88, 8, 0, 0})
	CMember(USoundBase*)                               Cue_DistantSound                                            ___ OFFSET(get<T>, {0xC90, 8, 0, 0})
};

/// Class /Script/MusterCoreWeaponsRuntime.MusterCoreWeaponsAnimInstance
/// Size: 0x0020 (0x000350 - 0x000370)
class UMusterCoreWeaponsAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(AFortWeapon*)                              OwningWeapon                                                ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(bool)                                      bIsShotFired                                                ___ OFFSET(get<bool>, {0x350, 1, 0, 0})
	DMember(int32_t)                                   LocalAmmoCount                                              ___ OFFSET(get<int32_t>, {0x354, 4, 0, 0})
	DMember(float)                                     CylinderMaskAlpha                                           ___ OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(bool)                                      bIsAmmoCountTwo                                             ___ OFFSET(get<bool>, {0x35C, 1, 0, 0})
	DMember(bool)                                      bIsAmmoCountOne                                             ___ OFFSET(get<bool>, {0x35D, 1, 0, 0})
	DMember(bool)                                      bStateRuleFromFullToTwoAmmo                                 ___ OFFSET(get<bool>, {0x35E, 1, 0, 0})
	DMember(bool)                                      bStateRuleFromTwoToOneAmmo                                  ___ OFFSET(get<bool>, {0x35F, 1, 0, 0})
	DMember(bool)                                      bStateRuleFromOneToZero                                     ___ OFFSET(get<bool>, {0x360, 1, 0, 0})
};

/// Class /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile
/// Size: 0x0090 (0x000C08 - 0x000C98)
class AFortExCaliberProjectile : public AFortProjectileAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3224;

public:
	DMember(bool)                                      bSimulationRunning                                          ___ OFFSET(get<bool>, {0xC08, 1, 0, 0})
	SMember(FScalableFloat)                            TimeToExplode                                               ___ OFFSET(get<T>, {0xC10, 40, 0, 0})
	DMember(bool)                                      bHasStopped                                                 ___ OFFSET(get<bool>, {0xC38, 1, 0, 0})
	SMember(FVector)                                   HitNormal                                                   ___ OFFSET(get<T>, {0xC40, 24, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             SurfaceType                                                 ___ OFFSET(get<T>, {0xC58, 1, 0, 0})
	SMember(FName)                                     SwordRevealMaterialParam                                    ___ OFFSET(get<T>, {0xC5C, 4, 0, 0})
	SMember(FName)                                     EmissiveColorMaterialParam                                  ___ OFFSET(get<T>, {0xC60, 4, 0, 0})
	SMember(FName)                                     HDRMultiplierMaterialParam                                  ___ OFFSET(get<T>, {0xC64, 4, 0, 0})
	SMember(FLinearColor)                              EmissiveBlueColor                                           ___ OFFSET(get<T>, {0xC68, 16, 0, 0})
	SMember(FLinearColor)                              EmissivePurpleColor                                         ___ OFFSET(get<T>, {0xC78, 16, 0, 0})
	DMember(float)                                     MinPitchForRotationAdjustment                               ___ OFFSET(get<float>, {0xC88, 4, 0, 0})
	DMember(float)                                     MaxPitchForRotationAdjustment                               ___ OFFSET(get<float>, {0xC8C, 4, 0, 0})
};

