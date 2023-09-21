
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/HoagieRuntime.FortHoagieDriverAnimInstance
/// Size: 0x0080 (0x000810 - 0x000890)
class UFortHoagieDriverAnimInstance : public UFortVehicleOccupantAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2192;

public:
	SMember(FVector)                                   LeftHandIKPositionOffset                                    OFFSET(get<T>, {0x810, 24, 0, 0})
	SMember(FVector)                                   RightHandIKPositionOffset                                   OFFSET(get<T>, {0x828, 24, 0, 0})
	SMember(FRotator)                                  LeftHandIKRotationOffset                                    OFFSET(get<T>, {0x840, 24, 0, 0})
	SMember(FRotator)                                  RightHandIKRotationOffset                                   OFFSET(get<T>, {0x858, 24, 0, 0})
	CMember(EFortCardinalDirection)                    BoostCardinalDirection                                      OFFSET(get<T>, {0x870, 1, 0, 0})
	DMember(float)                                     NormalizedAcceleration                                      OFFSET(get<float>, {0x874, 4, 0, 0})
	DMember(float)                                     VehicleRoll                                                 OFFSET(get<float>, {0x878, 4, 0, 0})
	DMember(float)                                     VehicleYaw                                                  OFFSET(get<float>, {0x87C, 4, 0, 0})
	DMember(float)                                     ForwardSpeed                                                OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(bool)                                      bIsMovingAnyDirection                                       OFFSET(get<bool>, {0x884, 1, 0, 0})
	DMember(bool)                                      bIsMovingFastAnyDirection                                   OFFSET(get<bool>, {0x885, 1, 0, 0})
	DMember(bool)                                      bShouldReverse                                              OFFSET(get<bool>, {0x886, 1, 0, 0})
	DMember(bool)                                      bShouldGoBackToIdle                                         OFFSET(get<bool>, {0x887, 1, 0, 0})
	DMember(bool)                                      bTransition_Default_ReverseStart                            OFFSET(get<bool>, {0x888, 1, 0, 0})
	DMember(bool)                                      bTransition_BoostLoop_Reverse                               OFFSET(get<bool>, {0x889, 1, 0, 0})
};

/// Class /Script/HoagieRuntime.FortHoagieVehicleAnimInstance
/// Size: 0x01F0 (0x000600 - 0x0007F0)
class UFortHoagieVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2032;

public:
	SMember(FRotator)                                  EngineRotation                                              OFFSET(get<T>, {0x728, 24, 0, 0})
	SMember(FRotator)                                  MainRotorRotation                                           OFFSET(get<T>, {0x740, 24, 0, 0})
	SMember(FRotator)                                  TailRotorRotaton                                            OFFSET(get<T>, {0x758, 24, 0, 0})
	SMember(FRotator)                                  BoosterFanRotation                                          OFFSET(get<T>, {0x770, 24, 0, 0})
	CMember(EFortCardinalDirection)                    BoostCardinalDirection                                      OFFSET(get<T>, {0x788, 1, 0, 0})
	DMember(float)                                     EngineRotationInterpSpeed                                   OFFSET(get<float>, {0x7A4, 4, 0, 0})
	DMember(float)                                     EngineRotationDuringBoostInterpSpeed                        OFFSET(get<float>, {0x7A8, 4, 0, 0})
	DMember(float)                                     EngineFlipSpeedThreshold                                    OFFSET(get<float>, {0x7AC, 4, 0, 0})
	DMember(float)                                     BoostDirectionDeadzone                                      OFFSET(get<float>, {0x7B0, 4, 0, 0})
	DMember(float)                                     EngineFlipDeadzone                                          OFFSET(get<float>, {0x7B4, 4, 0, 0})
	DMember(float)                                     DriverRoll                                                  OFFSET(get<float>, {0x7B8, 4, 0, 0})
	DMember(float)                                     DriverYaw                                                   OFFSET(get<float>, {0x7BC, 4, 0, 0})
	DMember(float)                                     VerticalSpeed                                               OFFSET(get<float>, {0x7C0, 4, 0, 0})
	DMember(float)                                     FwdSpeed                                                    OFFSET(get<float>, {0x7C4, 4, 0, 0})
	DMember(float)                                     LocalBoostDirection                                         OFFSET(get<float>, {0x7C8, 4, 0, 0})
	DMember(float)                                     YawBlendSpaceInput                                          OFFSET(get<float>, {0x7CC, 4, 0, 0})
	DMember(float)                                     NormalizedAcceleration                                      OFFSET(get<float>, {0x7D0, 4, 0, 0})
	DMember(bool)                                      bShouldHideBlades                                           OFFSET(get<bool>, {0x7D5, 1, 0, 0})
	DMember(bool)                                      bIsBoostOnCD                                                OFFSET(get<bool>, {0x7D6, 1, 0, 0})
	DMember(bool)                                      bIsBoostReady                                               OFFSET(get<bool>, {0x7D7, 1, 0, 0})
	DMember(bool)                                      bIsMovingForward                                            OFFSET(get<bool>, {0x7D8, 1, 0, 0})
	DMember(bool)                                      bIsReversing                                                OFFSET(get<bool>, {0x7D9, 1, 0, 0})
	DMember(bool)                                      bIsMovingAnyDirection                                       OFFSET(get<bool>, {0x7DA, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x7DB, 1, 0, 0})
	DMember(bool)                                      bShouldReverse                                              OFFSET(get<bool>, {0x7DC, 1, 0, 0})
	DMember(bool)                                      bShouldGoBackToIdle                                         OFFSET(get<bool>, {0x7DD, 1, 0, 0})
	DMember(bool)                                      bShouldApplyBoostAdditive                                   OFFSET(get<bool>, {0x7DE, 1, 0, 0})
	DMember(bool)                                      bIsEngineShuttingOff                                        OFFSET(get<bool>, {0x7DF, 1, 0, 0})
	DMember(bool)                                      bTransition_Default_ReverseStart                            OFFSET(get<bool>, {0x7E0, 1, 0, 0})
	DMember(bool)                                      bTransition_BoostLoop_Reverse                               OFFSET(get<bool>, {0x7E1, 1, 0, 0})
};

/// Class /Script/HoagieRuntime.FortCameraMode_Hoagie
/// Size: 0x0070 (0x001B70 - 0x001BE0)
class UFortCameraMode_Hoagie : public UFortCameraMode_AthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7136;

public:
	DMember(float)                                     CurrentRollMultiplier                                       OFFSET(get<float>, {0x1B68, 4, 0, 0})
	DMember(float)                                     CurrentPitchMultiplier                                      OFFSET(get<float>, {0x1B6C, 4, 0, 0})
	SMember(FVector)                                   LastOrigin                                                  OFFSET(get<T>, {0x1B70, 24, 0, 0})
	SMember(FVector)                                   CurrentInterpSpeed                                          OFFSET(get<T>, {0x1B88, 24, 0, 0})
	SMember(FVector)                                   BoostInterpSpeed                                            OFFSET(get<T>, {0x1BA0, 24, 0, 0})
	DMember(float)                                     BaseRollMultiplier                                          OFFSET(get<float>, {0x1BB8, 4, 0, 0})
	DMember(float)                                     BasePitchMultiplier                                         OFFSET(get<float>, {0x1BBC, 4, 0, 0})
	DMember(float)                                     BoostRollMultiplier                                         OFFSET(get<float>, {0x1BC0, 4, 0, 0})
	DMember(float)                                     BoostPitchMultiplier                                        OFFSET(get<float>, {0x1BC4, 4, 0, 0})
	DMember(float)                                     BoostRollDampFactor                                         OFFSET(get<float>, {0x1BC8, 4, 0, 0})
	DMember(float)                                     BoostRollRecoveryDampFactor                                 OFFSET(get<float>, {0x1BCC, 4, 0, 0})
	DMember(float)                                     BoostRecoveryInterpSpeed                                    OFFSET(get<float>, {0x1BD0, 4, 0, 0})
};

/// Class /Script/HoagieRuntime.FortHoagieAudioController
/// Size: 0x0068 (0x000290 - 0x0002F8)
class AFortHoagieAudioController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	DMember(bool)                                      bHighQualityOverride                                        OFFSET(get<bool>, {0x290, 1, 0, 0})
	DMember(bool)                                      bLocalPlayerInHoagie                                        OFFSET(get<bool>, {0x291, 1, 0, 0})
	DMember(bool)                                      bCriticalDamageNative                                       OFFSET(get<bool>, {0x292, 1, 0, 0})
	DMember(bool)                                      bRotorHitNative                                             OFFSET(get<bool>, {0x293, 1, 0, 0})
	DMember(bool)                                      bIsRotorWashActiveNative                                    OFFSET(get<bool>, {0x294, 1, 0, 0})
	DMember(float)                                     RotorWashRelativeZOffset                                    OFFSET(get<float>, {0x298, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortHoagieVehicle*>)       Vehicle                                                     OFFSET(get<T>, {0x29C, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               EngineAudio                                                 OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               RotorAudio                                                  OFFSET(get<T>, {0x2B0, 8, 0, 0})


	/// Functions
	// Function /Script/HoagieRuntime.FortHoagieAudioController.Update
	// void Update();                                                                                                           // [0x98bcdc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/HoagieRuntime.FortHoagieAudioController.CacheHoagieVehicle
	// void CacheHoagieVehicle(AFortHoagieVehicle* InVehicle);                                                                  // [0x98bc568] Final|Native|Public|BlueprintCallable 
	// Function /Script/HoagieRuntime.FortHoagieAudioController.CacheAudioComponents
	// void CacheAudioComponents(UFortLayeredAudioComponent* InEngine, UFortLayeredAudioComponent* InRotor);                    // [0x98bc49c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/HoagieRuntime.FortHoagieVehicle
/// Size: 0x0620 (0x001B80 - 0x0021A0)
class AFortHoagieVehicle : public AFortAthenaSKVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8608;

public:
	SMember(FName)                                     PassengerCollision                                          OFFSET(get<T>, {0x1B78, 4, 0, 0})
	DMember(float)                                     CameraBoomDistance                                          OFFSET(get<float>, {0x1B7C, 4, 0, 0})
	DMember(float)                                     CameraBoomHeight                                            OFFSET(get<float>, {0x1B80, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBoostStateChanged                                         OFFSET(get<T>, {0x1B88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAltimeterTraceUpdated                                     OFFSET(get<T>, {0x1B98, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCrashingStateEntered                                      OFFSET(get<T>, {0x1BA8, 16, 0, 0})
	DMember(bool)                                      bEngineAudioDisabled                                        OFFSET(get<bool>, {0x1BB8, 1, 0, 0})
	DMember(float)                                     LiftRumbleTimer                                             OFFSET(get<float>, {0x1BBC, 4, 0, 0})
	DMember(bool)                                      bLiftUp                                                     OFFSET(get<bool>, {0x1BC0, 1, 0, 0})
	DMember(uint64_t)                                  LiftForceFeedbackHandle                                     OFFSET(get<uint64_t>, {0x1BC8, 8, 0, 0})
	DMember(uint64_t)                                  PassiveForceFeedbackHandle                                  OFFSET(get<uint64_t>, {0x1BD0, 8, 0, 0})
	DMember(float)                                     Theta_Native                                                OFFSET(get<float>, {0x1BD8, 4, 0, 0})
	DMember(float)                                     WashAltAlpha_Native                                         OFFSET(get<float>, {0x1BDC, 4, 0, 0})
	DMember(float)                                     RotorWashTickTimer                                          OFFSET(get<float>, {0x1BE0, 4, 0, 0})
	CMember(TArray<FVector>)                           RotorTraceArray                                             OFFSET(get<T>, {0x1BE8, 16, 0, 0})
	CMember(TArray<TEnumAsByte>)                       RotorWashObjectsTypes                                       OFFSET(get<T>, {0x1BF8, 16, 0, 0})
	CMember(UFortHoagieVehicleConfigs*)                FortHoagieVehicleConfigs                                    OFFSET(get<T>, {0x1C08, 8, 0, 0})
	CMember(UCurveFloat*)                              RumbleIntensity                                             OFFSET(get<T>, {0x1C10, 8, 0, 0})
	SMember(FFortHeliFlightModel)                      FlightModel                                                 OFFSET(get<T>, {0x1C18, 488, 0, 0})
	DMember(bool)                                      bClearPitchInput                                            OFFSET(get<bool>, {0x1E00, 1, 0, 0})
	DMember(float)                                     BoostTimeLeft                                               OFFSET(get<float>, {0x1E04, 4, 0, 0})
	DMember(float)                                     BoostBrakingTimeLeft                                        OFFSET(get<float>, {0x1E08, 4, 0, 0})
	DMember(float)                                     BoostCooldown                                               OFFSET(get<float>, {0x1E0C, 4, 0, 0})
	DMember(float)                                     ShutdownTimer                                               OFFSET(get<float>, {0x1E10, 4, 0, 0})
	DMember(float)                                     FoliageDestructionTimer                                     OFFSET(get<float>, {0x1E14, 4, 0, 0})
	DMember(float)                                     CrashingScrapingTimer                                       OFFSET(get<float>, {0x1E18, 4, 0, 0})
	DMember(float)                                     CrashingNotMovingTimer                                      OFFSET(get<float>, {0x1E1C, 4, 0, 0})
	DMember(bool)                                      bCanSleep                                                   OFFSET(get<bool>, {0x1E20, 1, 0, 0})
	DMember(bool)                                      bHasAppliedCrashDamage                                      OFFSET(get<bool>, {0x1E21, 1, 0, 0})
	DMember(bool)                                      bOrientedForLanding                                         OFFSET(get<bool>, {0x1E22, 1, 0, 0})
	DMember(bool)                                      bForceNegativeLift                                          OFFSET(get<bool>, {0x1E23, 1, 0, 0})
	DMember(float)                                     AltimeterTraceTimer                                         OFFSET(get<float>, {0x1E24, 4, 0, 0})
	DMember(float)                                     LastRotorImpulseTime                                        OFFSET(get<float>, {0x1E28, 4, 0, 0})
	DMember(float)                                     CriticalExplodeTimer                                        OFFSET(get<float>, {0x1E2C, 4, 0, 0})
	DMember(bool)                                      bCriticalExplosionPlayed                                    OFFSET(get<bool>, {0x1E30, 1, 0, 0})
	DMember(float)                                     TimeWhileCritical                                           OFFSET(get<float>, {0x1E34, 4, 0, 0})
	DMember(float)                                     TimeWhileLanding                                            OFFSET(get<float>, {0x1E38, 4, 0, 0})
	DMember(float)                                     LiftFromOverrideButton                                      OFFSET(get<float>, {0x1E3C, 4, 0, 0})
	SMember(FVector)                                   BoostDirection                                              OFFSET(get<T>, {0x1E40, 24, 0, 0})
	SMember(FVector)                                   LastRotorSweepDirection                                     OFFSET(get<T>, {0x1E58, 24, 0, 0})
	SMember(FHitResult)                                AltimeterTraceResult                                        OFFSET(get<T>, {0x1E70, 224, 0, 0})
	DMember(int32_t)                                   HoagieStateRep                                              OFFSET(get<int32_t>, {0x1F50, 4, 0, 0})
	CMember(EHoagieState)                              CurrentHoagieState                                          OFFSET(get<T>, {0x1F54, 4, 0, 0})
	DMember(float)                                     CurrentRotorSpeed                                           OFFSET(get<float>, {0x1F58, 4, 0, 0})
	DMember(float)                                     CurrentRotorAngle                                           OFFSET(get<float>, {0x1F5C, 4, 0, 0})
	DMember(float)                                     RotorImpactTraceAngle                                       OFFSET(get<float>, {0x1F60, 4, 0, 0})
	SMember(FVehicleGamepadLiftInputs)                 LiftInputs                                                  OFFSET(get<T>, {0x1F64, 8, 0, 0})
	CMember(TArray<FRotorHit>)                         RotorHits                                                   OFFSET(get<T>, {0x1F70, 16, 0, 0})
	CMember(TArray<FCachedSeatCollision>)              CachedSeatCollision                                         OFFSET(get<T>, {0x1F80, 16, 0, 0})
	SMember(FVector)                                   RotorHitLinearImpulse                                       OFFSET(get<T>, {0x1F90, 24, 0, 0})
	SMember(FVector)                                   RotorHitAngularImpulse                                      OFFSET(get<T>, {0x1FA8, 24, 0, 0})
	CMember(UNiagaraComponent*)                        HoagieIdleFX_Native                                         OFFSET(get<T>, {0x1FC0, 8, 0, 0})
	CMember(UNiagaraComponent*)                        DamageFX_Native                                             OFFSET(get<T>, {0x1FC8, 8, 0, 0})
	CMember(UNiagaraComponent*)                        RotorWashFX_Native                                          OFFSET(get<T>, {0x1FD0, 8, 0, 0})
	CMember(UFortHoagieVehicleAnimInstance*)           HoagieAnimBP_Native                                         OFFSET(get<T>, {0x1FD8, 8, 0, 0})
	SMember(FName)                                     AltimeterTraceSocketName                                    OFFSET(get<T>, {0x1FE0, 4, 0, 0})
	SMember(FName)                                     RotorDamageTraceSocketName                                  OFFSET(get<T>, {0x1FE4, 4, 0, 0})
	SMember(FName)                                     MainRotorCritSocketName                                     OFFSET(get<T>, {0x1FE8, 4, 0, 0})
	SMember(FName)                                     TailRotorCritSocketName                                     OFFSET(get<T>, {0x1FEC, 4, 0, 0})
	CMember(UAnimMontage*)                             SeatTransition_ToDriver                                     OFFSET(get<T>, {0x1FF0, 8, 0, 0})
	CMember(UAnimMontage*)                             SeatTransition_ToPassenger                                  OFFSET(get<T>, {0x1FF8, 8, 0, 0})
	SMember(FName)                                     RotorTraceProfile                                           OFFSET(get<T>, {0x2000, 4, 0, 0})
	SMember(FName)                                     FoliageOverlapsBoxTag                                       OFFSET(get<T>, {0x2004, 4, 0, 0})
	SMember(FReplicatedHeliControlState)               ControlState                                                OFFSET(get<T>, {0x2008, 48, 0, 0})
	DMember(float)                                     CurrentViewDistanceScale                                    OFFSET(get<float>, {0x2038, 4, 0, 0})
	DMember(float)                                     CurrentHLODDistanceOverrideScale                            OFFSET(get<float>, {0x203C, 4, 0, 0})
	DMember(float)                                     CurrentHLODMaxDrawDistanceScale                             OFFSET(get<float>, {0x2040, 4, 0, 0})
	SMember(FHoagieDeathEffectInfo)                    CachedDeathEffectInfo                                       OFFSET(get<T>, {0x2050, 328, 0, 0})


	/// Functions
	// Function /Script/HoagieRuntime.FortHoagieVehicle.UpdateHoagieAnimBP
	// void UpdateHoagieAnimBP();                                                                                               // [0x78726f8] Native|Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.UpdateDamageStateNative
	// void UpdateDamageStateNative(float Damage);                                                                              // [0x98bce34] Final|Native|Protected|BlueprintCallable 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.ShowCooldownCue
	// void ShowCooldownCue(AFortPlayerPawn* Pawn, float Duration);                                                             // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.SetTailRotorRotation
	// void SetTailRotorRotation(float Degrees);                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.SetRotorWashActive
	// void SetRotorWashActive(bool bActive);                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.SetMainRotorRotation
	// void SetMainRotorRotation(float Degrees);                                                                                // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.ServerUpdateControlState
	// void ServerUpdateControlState(FReplicatedHeliControlState InControlState);                                               // [0x98bcc40] Final|Net|Native|Event|Private|NetServer 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnTickRotors
	// void OnTickRotors(float RotorAngleDegrees);                                                                              // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnStartupEnd
	// void OnStartupEnd();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnStartupBegin
	// void OnStartupBegin();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorsStop
	// void OnRotorsStop();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamagePlayer
	// void OnRotorDamagePlayer(FHitResult& Impact);                                                                            // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtOuter
	// void OnRotorDamageDealtOuter(FHitResult& Impact);                                                                        // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealtInner
	// void OnRotorDamageDealtInner(FHitResult& Impact);                                                                        // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRotorDamageDealt
	// void OnRotorDamageDealt(FHitResult& Impact, bool bInner);                                                                // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRep_HoagieState
	// void OnRep_HoagieState();                                                                                                // [0x98bcbc0] Final|Native|Protected 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRep_ControlState
	// void OnRep_ControlState();                                                                                               // [0x2d79908] Final|Native|Private 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnRefueledFromEmpty
	// void OnRefueledFromEmpty();                                                                                              // [0x98bcbac] Final|Native|Protected 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnImpactWhileCritical
	// void OnImpactWhileCritical();                                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnImpactOtherHoagie
	// void OnImpactOtherHoagie(FVector& HitLocation, FVector& NormalImpulse);                                                  // [0x1ebf994] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnCritRotor
	// void OnCritRotor(float Damage, FVector& ImpactLocation, AController* DamageInstigator, AActor* DamageCauser, bool bMainRotor); // [0x1ebf994] Event|Protected|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostStarted
	// void OnBoostStarted();                                                                                                   // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostReady
	// void OnBoostReady();                                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostFinished
	// void OnBoostFinished();                                                                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.OnBoostFailed
	// void OnBoostFailed();                                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.MulticastRotorImpulse
	// void MulticastRotorImpulse(FHitResult RotorHit);                                                                         // [0x98bca44] Net|NetReliableNative|Event|NetMulticast|Protected|BlueprintCallable 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.IsStartingUp
	// bool IsStartingUp();                                                                                                     // [0x98bca28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.IsShuttingDown
	// bool IsShuttingDown();                                                                                                   // [0x98bca08] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.IsScrapingBottom
	// bool IsScrapingBottom();                                                                                                 // [0x98bc9e4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.HoagieOnDisabledChanged
	// void HoagieOnDisabledChanged(bool bDisabled);                                                                            // [0x98bc964] Final|Native|Protected 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetVerticalSpeedKmh
	// float GetVerticalSpeedKmh();                                                                                             // [0x98bc93c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetThrustDirection
	// FVector GetThrustDirection(bool bWorldSpace);                                                                            // [0x98bc898] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetStrafeAlpha
	// float GetStrafeAlpha();                                                                                                  // [0x98bc718] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetSteerAlpha
	// float GetSteerAlpha();                                                                                                   // [0x98bc870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetShutdownTimeLeft
	// float GetShutdownTimeLeft();                                                                                             // [0x98bc858] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorSpeedPercent
	// float GetRotorSpeedPercent();                                                                                            // [0x98bc838] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorSpeed
	// float GetRotorSpeed();                                                                                                   // [0x98bc820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorCenterPosition
	// FVector GetRotorCenterPosition();                                                                                        // [0x98bc7e8] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetRotorAngleDegrees
	// float GetRotorAngleDegrees();                                                                                            // [0x98bc7d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetMaxBoostCooldown
	// float GetMaxBoostCooldown();                                                                                             // [0x98bc7b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetMaxAltitude
	// float GetMaxAltitude();                                                                                                  // [0x98bc790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetLiftAlpha
	// float GetLiftAlpha();                                                                                                    // [0x98bc768] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetIsEngineOn
	// bool GetIsEngineOn();                                                                                                    // [0x98bc748] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetForwardAlpha
	// float GetForwardAlpha();                                                                                                 // [0x98bc718] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetDistanceToGround
	// float GetDistanceToGround();                                                                                             // [0x98bc700] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostTimeLeft
	// float GetBoostTimeLeft();                                                                                                // [0x98bc6e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostDuration
	// float GetBoostDuration();                                                                                                // [0x98bc6c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostDirection
	// FVector GetBoostDirection();                                                                                             // [0x98bc6a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetBoostCooldown
	// float GetBoostCooldown();                                                                                                // [0x98bc688] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/HoagieRuntime.FortHoagieVehicle.GetAltitude
	// float GetAltitude();                                                                                                     // [0x98bc668] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/HoagieRuntime.FortHoagieVehicleConfigs
/// Size: 0x0238 (0x0008B0 - 0x000AE8)
class UFortHoagieVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2792;

public:
	DMember(float)                                     StrafeForce                                                 OFFSET(get<float>, {0x8B0, 4, 0, 0})
	DMember(float)                                     StrafeForceMin                                              OFFSET(get<float>, {0x8B4, 4, 0, 0})
	DMember(float)                                     MaxStrafeSpeedKmh                                           OFFSET(get<float>, {0x8B8, 4, 0, 0})
	DMember(float)                                     StrafeTooFastBrakeForce                                     OFFSET(get<float>, {0x8BC, 4, 0, 0})
	DMember(float)                                     LandedBrakeForce                                            OFFSET(get<float>, {0x8C0, 4, 0, 0})
	DMember(float)                                     LiftForce                                                   OFFSET(get<float>, {0x8C4, 4, 0, 0})
	DMember(float)                                     MaxLiftSpeedKmh                                             OFFSET(get<float>, {0x8C8, 4, 0, 0})
	DMember(float)                                     LiftTooFastBrakeForce                                       OFFSET(get<float>, {0x8CC, 4, 0, 0})
	DMember(float)                                     LateralDragCoefficient                                      OFFSET(get<float>, {0x8D0, 4, 0, 0})
	DMember(float)                                     LateralDragCoefficient2                                     OFFSET(get<float>, {0x8D4, 4, 0, 0})
	DMember(float)                                     LiftDragCoefficient                                         OFFSET(get<float>, {0x8D8, 4, 0, 0})
	DMember(float)                                     LiftDragCoefficient2                                        OFFSET(get<float>, {0x8DC, 4, 0, 0})
	DMember(float)                                     MaxPitchForCameraYaw                                        OFFSET(get<float>, {0x8E0, 4, 0, 0})
	DMember(float)                                     MaxCameraYawAngle                                           OFFSET(get<float>, {0x8E4, 4, 0, 0})
	DMember(float)                                     CameraYawStiff                                              OFFSET(get<float>, {0x8E8, 4, 0, 0})
	DMember(float)                                     CameraYawDamp                                               OFFSET(get<float>, {0x8EC, 4, 0, 0})
	DMember(float)                                     CameraYawStrength                                           OFFSET(get<float>, {0x8F0, 4, 0, 0})
	DMember(float)                                     UprightStiff                                                OFFSET(get<float>, {0x8F4, 4, 0, 0})
	DMember(float)                                     UprightDamp                                                 OFFSET(get<float>, {0x8F8, 4, 0, 0})
	DMember(bool)                                      bUseVehiclePivotForCameraPitch                              OFFSET(get<bool>, {0x8FC, 1, 0, 0})
	DMember(float)                                     ThrustTorqueAnglePercent                                    OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(float)                                     BoostThrustTorqueAnglePercent                               OFFSET(get<float>, {0x904, 4, 0, 0})
	DMember(float)                                     ThrustTorqueStiff                                           OFFSET(get<float>, {0x908, 4, 0, 0})
	DMember(float)                                     ThrustTorqueDamp                                            OFFSET(get<float>, {0x90C, 4, 0, 0})
	DMember(float)                                     ThrustTorqueMaxAccel                                        OFFSET(get<float>, {0x910, 4, 0, 0})
	DMember(float)                                     ThrustTorque                                                OFFSET(get<float>, {0x914, 4, 0, 0})
	DMember(float)                                     YawTorque                                                   OFFSET(get<float>, {0x918, 4, 0, 0})
	DMember(float)                                     YawTorqueDampingSpeed                                       OFFSET(get<float>, {0x91C, 4, 0, 0})
	DMember(float)                                     BoostForce                                                  OFFSET(get<float>, {0x920, 4, 0, 0})
	DMember(float)                                     BoostMaxSpeedKmh                                            OFFSET(get<float>, {0x924, 4, 0, 0})
	DMember(float)                                     BoostDuration                                               OFFSET(get<float>, {0x928, 4, 0, 0})
	DMember(float)                                     BoostCooldown                                               OFFSET(get<float>, {0x92C, 4, 0, 0})
	DMember(float)                                     BoostTorqueStiff                                            OFFSET(get<float>, {0x930, 4, 0, 0})
	DMember(float)                                     BoostTorqueDamp                                             OFFSET(get<float>, {0x934, 4, 0, 0})
	DMember(float)                                     AfterBoostBrakingForce                                      OFFSET(get<float>, {0x938, 4, 0, 0})
	DMember(float)                                     AfterBoostBrakingDuration                                   OFFSET(get<float>, {0x93C, 4, 0, 0})
	DMember(float)                                     AfterBoostBrakingMinSpeed                                   OFFSET(get<float>, {0x940, 4, 0, 0})
	DMember(float)                                     PitchAngleRequiredForFullThrust                             OFFSET(get<float>, {0x944, 4, 0, 0})
	DMember(float)                                     DistanceToGroundForLanding                                  OFFSET(get<float>, {0x948, 4, 0, 0})
	DMember(float)                                     StartupDelay                                                OFFSET(get<float>, {0x94C, 4, 0, 0})
	DMember(float)                                     LandingSequenceDelay                                        OFFSET(get<float>, {0x950, 4, 0, 0})
	DMember(float)                                     RotorsRadius                                                OFFSET(get<float>, {0x954, 4, 0, 0})
	DMember(float)                                     RotorsRadiusInner                                           OFFSET(get<float>, {0x958, 4, 0, 0})
	DMember(float)                                     NoDriverBrakeForce                                          OFFSET(get<float>, {0x95C, 4, 0, 0})
	DMember(float)                                     TimeBetweenRotorDamageTicks                                 OFFSET(get<float>, {0x960, 4, 0, 0})
	DMember(float)                                     AutoLandingForce                                            OFFSET(get<float>, {0x964, 4, 0, 0})
	DMember(float)                                     RotorDamageBoxSweepLength                                   OFFSET(get<float>, {0x968, 4, 0, 0})
	DMember(float)                                     CriticalStateLiftForce                                      OFFSET(get<float>, {0x96C, 4, 0, 0})
	DMember(float)                                     IdleRotationMultiplier                                      OFFSET(get<float>, {0x970, 4, 0, 0})
	DMember(float)                                     LiftPitchDegrees                                            OFFSET(get<float>, {0x974, 4, 0, 0})
	DMember(float)                                     MinAltitudeForIdleNoise                                     OFFSET(get<float>, {0x978, 4, 0, 0})
	DMember(float)                                     DefaultLinearDamp                                           OFFSET(get<float>, {0x97C, 4, 0, 0})
	DMember(float)                                     DefaultAngularDamp                                          OFFSET(get<float>, {0x980, 4, 0, 0})
	DMember(float)                                     LandingLinearDamp                                           OFFSET(get<float>, {0x984, 4, 0, 0})
	DMember(float)                                     LandingAngularDamp                                          OFFSET(get<float>, {0x988, 4, 0, 0})
	DMember(float)                                     LandingLiftAlpha                                            OFFSET(get<float>, {0x98C, 4, 0, 0})
	DMember(float)                                     CriticalStateThrustMultiplier                               OFFSET(get<float>, {0x990, 4, 0, 0})
	DMember(float)                                     BodyUpDotThresholdForLanding                                OFFSET(get<float>, {0x994, 4, 0, 0})
	DMember(int32_t)                                   CriticalHealthThreshold                                     OFFSET(get<int32_t>, {0x998, 4, 0, 0})
	DMember(float)                                     DamagePerImpulseWhileCritical                               OFFSET(get<float>, {0x99C, 4, 0, 0})
	DMember(float)                                     RotorImpulseLinear                                          OFFSET(get<float>, {0x9A0, 4, 0, 0})
	DMember(float)                                     RotorImpulseAngular                                         OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(float)                                     RotorImpulseCooldown                                        OFFSET(get<float>, {0x9A8, 4, 0, 0})
	DMember(float)                                     StartupLift                                                 OFFSET(get<float>, {0x9AC, 4, 0, 0})
	DMember(float)                                     StartupLiftTime                                             OFFSET(get<float>, {0x9B0, 4, 0, 0})
	DMember(float)                                     MaxAltitude                                                 OFFSET(get<float>, {0x9B4, 4, 0, 0})
	DMember(float)                                     AltitudeForSpinning                                         OFFSET(get<float>, {0x9B8, 4, 0, 0})
	DMember(float)                                     RotorMaxSpeed                                               OFFSET(get<float>, {0x9BC, 4, 0, 0})
	DMember(float)                                     RotorAccel                                                  OFFSET(get<float>, {0x9C0, 4, 0, 0})
	DMember(float)                                     RotorDecel                                                  OFFSET(get<float>, {0x9C4, 4, 0, 0})
	DMember(float)                                     ExplodeRotorDecel                                           OFFSET(get<float>, {0x9C8, 4, 0, 0})
	DMember(float)                                     MinRotorSpeedForSkippingStartup                             OFFSET(get<float>, {0x9CC, 4, 0, 0})
	DMember(float)                                     RotorSpeedForStartupLift                                    OFFSET(get<float>, {0x9D0, 4, 0, 0})
	DMember(float)                                     CriticalLiftForceDecay                                      OFFSET(get<float>, {0x9D4, 4, 0, 0})
	DMember(float)                                     CriticalYawTorqueMin                                        OFFSET(get<float>, {0x9D8, 4, 0, 0})
	DMember(float)                                     CriticalYawTorqueMax                                        OFFSET(get<float>, {0x9DC, 4, 0, 0})
	DMember(float)                                     CriticalYawTorqueRampDuration                               OFFSET(get<float>, {0x9E0, 4, 0, 0})
	DMember(float)                                     RotorTraceRotationSpeed                                     OFFSET(get<float>, {0x9E4, 4, 0, 0})
	DMember(float)                                     RotorTraceBoxSize                                           OFFSET(get<float>, {0x9E8, 4, 0, 0})
	DMember(float)                                     RotorTraceBoxHeight                                         OFFSET(get<float>, {0x9EC, 4, 0, 0})
	DMember(float)                                     MaxCriticalFallForce                                        OFFSET(get<float>, {0x9F0, 4, 0, 0})
	DMember(float)                                     BoostFOV                                                    OFFSET(get<float>, {0x9F4, 4, 0, 0})
	DMember(float)                                     GentleCrashTimeToExplode                                    OFFSET(get<float>, {0x9F8, 4, 0, 0})
	DMember(float)                                     CriticalTimeForGentleCrash                                  OFFSET(get<float>, {0x9FC, 4, 0, 0})
	DMember(float)                                     AutoLandingYawTorque                                        OFFSET(get<float>, {0xA00, 4, 0, 0})
	DMember(float)                                     MinHeightForAutoLandingYawTorque                            OFFSET(get<float>, {0xA04, 4, 0, 0})
	DMember(float)                                     MinSpeedForScrapingBottom                                   OFFSET(get<float>, {0xA08, 4, 0, 0})
	DMember(float)                                     FallDamageHeightBuffer                                      OFFSET(get<float>, {0xA0C, 4, 0, 0})
	DMember(float)                                     TimeBetweenRotorPlayerDamage                                OFFSET(get<float>, {0xA10, 4, 0, 0})
	DMember(float)                                     RotorMoveSpeedRequiredToUpdateTraceDirSqr                   OFFSET(get<float>, {0xA14, 4, 0, 0})
	DMember(float)                                     FoliageTraceRate                                            OFFSET(get<float>, {0xA18, 4, 0, 0})
	DMember(float)                                     RotorWashTicksPerFrame                                      OFFSET(get<float>, {0xA1C, 4, 0, 0})
	DMember(float)                                     CriticalHitRadius                                           OFFSET(get<float>, {0xA20, 4, 0, 0})
	DMember(float)                                     AngleNormalUpForLockMovement                                OFFSET(get<float>, {0xA24, 4, 0, 0})
	DMember(float)                                     MaxAutoLandingTime                                          OFFSET(get<float>, {0xA28, 4, 0, 0})
	DMember(float)                                     SpeedThresholdForCrashed                                    OFFSET(get<float>, {0xA2C, 4, 0, 0})
	DMember(float)                                     CritMultiplier                                              OFFSET(get<float>, {0xA30, 4, 0, 0})
	DMember(float)                                     AltitudeForSprings                                          OFFSET(get<float>, {0xA34, 4, 0, 0})
	DMember(float)                                     MaxCrashingTime                                             OFFSET(get<float>, {0xA38, 4, 0, 0})
	DMember(float)                                     MaxCrashingScrapingTime                                     OFFSET(get<float>, {0xA3C, 4, 0, 0})
	DMember(float)                                     MaxCrashingTimeSpentNotMoving                               OFFSET(get<float>, {0xA40, 4, 0, 0})
	DMember(float)                                     LandscapeRotorImpulseMag                                    OFFSET(get<float>, {0xA44, 4, 0, 0})
	DMember(float)                                     HealthThresholdForLandscapeRotorImpulse                     OFFSET(get<float>, {0xA48, 4, 0, 0})
	DMember(float)                                     MaxHeightBuffer                                             OFFSET(get<float>, {0xA4C, 4, 0, 0})
	DMember(bool)                                      bImpulseOnOuterRotorHitLandscape                            OFFSET(get<bool>, {0xA50, 1, 0, 0})
	DMember(bool)                                      bSkipRotorImpulses                                          OFFSET(get<bool>, {0xA51, 1, 0, 0})
	DMember(bool)                                      bEnableCVarScaling                                          OFFSET(get<bool>, {0xA52, 1, 0, 0})
	DMember(float)                                     CVarScalingInterp                                           OFFSET(get<float>, {0xA54, 4, 0, 0})
	SMember(FVector)                                   FoliageTraceBoxSize                                         OFFSET(get<T>, {0xA58, 24, 0, 0})
	SMember(FVector)                                   WaterBoxSize                                                OFFSET(get<T>, {0xA70, 24, 0, 0})
	SMember(FVector)                                   WaterBoxOffset                                              OFFSET(get<T>, {0xA88, 24, 0, 0})
	SMember(FVector)                                   RotorOffsetFromActorLocationOnServer                        OFFSET(get<T>, {0xAA0, 24, 0, 0})
	DMember(bool)                                      bSkipContactRotations                                       OFFSET(get<bool>, {0xAB8, 1, 0, 0})
	SMember(FScalableFloat)                            MaxAutoLandHeightWhenOutOfFuel                              OFFSET(get<T>, {0xAC0, 40, 0, 0})
};

/// Struct /Script/HoagieRuntime.FortHeliFlightModel
/// Size: 0x01E8 (0x000000 - 0x0001E8)
class FFortHeliFlightModel : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	CMember(UFortHoagieVehicleConfigs*)                Configs                                                     OFFSET(get<T>, {0x1E0, 8, 0, 0})
};

/// Struct /Script/HoagieRuntime.RotorHit
/// Size: 0x001C (0x000000 - 0x00001C)
class FRotorHit : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FActorInstanceHandle)                      HitObjectHandle                                             OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     LastHitTimer                                                OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/HoagieRuntime.CachedSeatCollision
/// Size: 0x0008 (0x000000 - 0x000008)
class FCachedSeatCollision : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SeatIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bOccupied                                                   OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/HoagieRuntime.ReplicatedHeliControlState
/// Size: 0x0030 (0x000000 - 0x000030)
class FReplicatedHeliControlState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector_NetQuantizeNormal)                 Up                                                          OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector_NetQuantizeNormal)                 Forward                                                     OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/HoagieRuntime.HoagieCmd
/// Size: 0x0078 (0x000000 - 0x000078)
class FHoagieCmd : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Struct /Script/HoagieRuntime.HoagieInPersistent
/// Size: 0x0040 (0x000188 - 0x0001C8)
class FHoagieInPersistent : public FFortVehicleInPersistent
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	CMember(UFortHoagieVehicleConfigs*)                FortHoagieVehicleConfigs                                    OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(EHoagieState)                              CurrentHoagieState                                          OFFSET(get<T>, {0x190, 4, 0, 0})
	DMember(float)                                     LastRotorImpulseTime                                        OFFSET(get<float>, {0x194, 4, 0, 0})
	SMember(FVector)                                   RotorHitLinearImpulse                                       OFFSET(get<T>, {0x198, 24, 0, 0})
	SMember(FVector)                                   RotorHitAngularImpulse                                      OFFSET(get<T>, {0x1B0, 24, 0, 0})
};

/// Struct /Script/HoagieRuntime.HoagieInternal
/// Size: 0x01F0 (0x000080 - 0x000270)
class FHoagieInternal : public FFortVehicleInternalPersistent
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FFortHeliFlightModel)                      FlightModel                                                 OFFSET(get<T>, {0x80, 488, 0, 0})
};

/// Struct /Script/HoagieRuntime.HoagieOutContinuous
/// Size: 0x0000 (0x000038 - 0x000038)
class FHoagieOutContinuous : public FFortVehicleOutContinuous
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/HoagieRuntime.HoagieOutPersistent
/// Size: 0x0000 (0x000028 - 0x000028)
class FHoagieOutPersistent : public FFortVehicleOutPersistent
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/HoagieRuntime.HoagieDeathEffectInfo
/// Size: 0x0148 (0x000000 - 0x000148)
class FHoagieDeathEffectInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(float)                                     Damage                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     DamageTags                                                  OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FVector)                                   Momentum                                                    OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FHitResult)                                HitInfo                                                     OFFSET(get<T>, {0x40, 224, 0, 0})
	CMember(AFortPawn*)                                InstigatedBy                                                OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(AActor*)                                   DamageCauser                                                OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               OFFSET(get<T>, {0x130, 24, 0, 0})
};

/// Enum /Script/HoagieRuntime.EHoagieBoostState
/// Size: 0x06
enum EHoagieBoostState : uint8_t
{
	EHoagieBoostState__Unknown0                                                      = 0,
	EHoagieBoostState__Ready1                                                        = 1,
	EHoagieBoostState__Started2                                                      = 2,
	EHoagieBoostState__Finished3                                                     = 3,
	EHoagieBoostState__Failed4                                                       = 4,
	EHoagieBoostState__EHoagieBoostState_MAX5                                        = 5
};

/// Enum /Script/HoagieRuntime.EHoagieState
/// Size: 0x11
enum EHoagieState : uint8_t
{
	EHoagieState__STARTUP0                                                           = 0,
	EHoagieState__STARTUP_LIFT1                                                      = 1,
	EHoagieState__FLIGHT2                                                            = 2,
	EHoagieState__AUTO_LANDING3                                                      = 3,
	EHoagieState__SPIN_CRASHING4                                                     = 4,
	EHoagieState__CRASHING_NO_SPIN5                                                  = 5,
	EHoagieState__CRASH_LANDED6                                                      = 6,
	EHoagieState__LANDED7                                                            = 7,
	EHoagieState__EXPLODING8                                                         = 8,
	EHoagieState__NONE9                                                              = 9,
	EHoagieState__EHoagieState_MAX10                                                 = 10
};

