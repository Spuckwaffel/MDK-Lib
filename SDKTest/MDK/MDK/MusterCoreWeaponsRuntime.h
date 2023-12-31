
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile
/// Size: 0x0090 (0x000C28 - 0x000CB8)
class AFortMusterExplosiveARProjectile : public AFortProjectileAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3256;

public:
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0xC28, 24, 0, 0})
	SMember(FRotator)                                  HitRotation                                                 OFFSET(getStruct<T>, {0xC40, 24, 0, 0})
	DMember(bool)                                      bHitPlayer                                                  OFFSET(get<bool>, {0xC58, 1, 0, 0})
	DMember(float)                                     DrawDistance                                                OFFSET(get<float>, {0xC5C, 4, 0, 0})
	CMember(UParticleSystemComponent*)                 ProjectileTrail                                             OFFSET(get<T>, {0xC60, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NS_Explosion                                                OFFSET(get<T>, {0xC68, 8, 0, 0})
	SMember(FGameplayTag)                              FeedbackCue                                                 OFFSET(getStruct<T>, {0xC70, 4, 0, 0})
	SMember(FVector)                                   DecalSize                                                   OFFSET(getStruct<T>, {0xC78, 24, 0, 0})
	DMember(float)                                     DecalLifeSpan                                               OFFSET(get<float>, {0xC90, 4, 0, 0})
	DMember(float)                                     TimebeforeDecalFadeOut                                      OFFSET(get<float>, {0xC94, 4, 0, 0})
	DMember(float)                                     DecalFadeOutDuration                                        OFFSET(get<float>, {0xC98, 4, 0, 0})
	CMember(UMaterialInterface*)                       DecalMaterial                                               OFFSET(get<T>, {0xCA0, 8, 0, 0})
	CMember(USoundBase*)                               Cue_CloseSound                                              OFFSET(get<T>, {0xCA8, 8, 0, 0})
	CMember(USoundBase*)                               Cue_DistantSound                                            OFFSET(get<T>, {0xCB0, 8, 0, 0})


	/// Functions
	// Function /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitRotation
	// void SetHitRotation(FRotator& NewHitRotation);                                                                           // [0xa00e8c0] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitPlayer
	// void SetHitPlayer(bool bWasHit);                                                                                         // [0xa00e838] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.SetHitLocation
	// void SetHitLocation(FVector& NewHitLocation);                                                                            // [0xa00e738] Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortMusterExplosiveARProjectile.OnRep_HitLocation
	// void OnRep_HitLocation();                                                                                                // [0xa00e688] Final|Native|Protected 
};

/// Class /Script/MusterCoreWeaponsRuntime.MusterCoreWeaponsAnimInstance
/// Size: 0x0020 (0x000350 - 0x000370)
class UMusterCoreWeaponsAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(AFortWeapon*)                              OwningWeapon                                                OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(bool)                                      bIsShotFired                                                OFFSET(get<bool>, {0x350, 1, 0, 0})
	DMember(int32_t)                                   LocalAmmoCount                                              OFFSET(get<int32_t>, {0x354, 4, 0, 0})
	DMember(float)                                     CylinderMaskAlpha                                           OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(bool)                                      bIsAmmoCountTwo                                             OFFSET(get<bool>, {0x35C, 1, 0, 0})
	DMember(bool)                                      bIsAmmoCountOne                                             OFFSET(get<bool>, {0x35D, 1, 0, 0})
	DMember(bool)                                      bStateRuleFromFullToTwoAmmo                                 OFFSET(get<bool>, {0x35E, 1, 0, 0})
	DMember(bool)                                      bStateRuleFromTwoToOneAmmo                                  OFFSET(get<bool>, {0x35F, 1, 0, 0})
	DMember(bool)                                      bStateRuleFromOneToZero                                     OFFSET(get<bool>, {0x360, 1, 0, 0})
};

/// Class /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile
/// Size: 0x0090 (0x000C28 - 0x000CB8)
class AFortExCaliberProjectile : public AFortProjectileAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3256;

public:
	DMember(bool)                                      bSimulationRunning                                          OFFSET(get<bool>, {0xC28, 1, 0, 0})
	SMember(FScalableFloat)                            TimeToExplode                                               OFFSET(getStruct<T>, {0xC30, 40, 0, 0})
	DMember(bool)                                      bHasStopped                                                 OFFSET(get<bool>, {0xC58, 1, 0, 0})
	SMember(FVector)                                   HitNormal                                                   OFFSET(getStruct<T>, {0xC60, 24, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             SurfaceType                                                 OFFSET(get<T>, {0xC78, 1, 0, 0})
	SMember(FName)                                     SwordRevealMaterialParam                                    OFFSET(getStruct<T>, {0xC7C, 4, 0, 0})
	SMember(FName)                                     EmissiveColorMaterialParam                                  OFFSET(getStruct<T>, {0xC80, 4, 0, 0})
	SMember(FName)                                     HDRMultiplierMaterialParam                                  OFFSET(getStruct<T>, {0xC84, 4, 0, 0})
	SMember(FLinearColor)                              EmissiveBlueColor                                           OFFSET(getStruct<T>, {0xC88, 16, 0, 0})
	SMember(FLinearColor)                              EmissivePurpleColor                                         OFFSET(getStruct<T>, {0xC98, 16, 0, 0})
	DMember(float)                                     MinPitchForRotationAdjustment                               OFFSET(get<float>, {0xCA8, 4, 0, 0})
	DMember(float)                                     MaxPitchForRotationAdjustment                               OFFSET(get<float>, {0xCAC, 4, 0, 0})


	/// Functions
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.UnblockPawnCollision
	// void UnblockPawnCollision();                                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.TriggerExplosion
	// void TriggerExplosion();                                                                                                 // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupSwordRevealEffects
	// void SetupSwordRevealEffects(UStaticMeshComponent* ProjectileMesh, float SwordRevealAlpha, float ColorChangeAlpha, float HDRMultiplierAlpha); // [0xa00e984] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetupProjectileHitAudio
	// void SetupProjectileHitAudio(FVector& ProjectileImpactLocation, AActor* HitActor);                                       // [0x101681c] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.SetFuseColorBasedOnTeam
	// void SetFuseColorBasedOnTeam();                                                                                          // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.RestartSimulating
	// void RestartSimulating();                                                                                                // [0xa00e724] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.PlayPreExplosionEfffects
	// void PlayPreExplosionEfffects();                                                                                         // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnRep_bSimulationRunning
	// void OnRep_bSimulationRunning();                                                                                         // [0xa00e69c] Final|Native|Protected 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedBuildingDestroyed
	// void OnAttachedBuildingDestroyed(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0xa00e1b4] Final|Native|Protected|HasDefaults 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.OnAttachedActorDestroyed
	// void OnAttachedActorDestroyed(AActor* DestroyedActor);                                                                   // [0xa00e110] Final|Native|Protected 
	// Function /Script/MusterCoreWeaponsRuntime.FortExCaliberProjectile.BP_OnProjectileStopped
	// void BP_OnProjectileStopped();                                                                                           // [0x101681c] Event|Protected|BlueprintEvent 
};

