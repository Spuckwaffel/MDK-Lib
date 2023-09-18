/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package HoagieRuntime.

/// Struct /Script/HoagieRuntime.FortHeliFlightModel
/// Size: 0x01E8 (0x000000 - 0x0001E8)
class FFortHeliFlightModel : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	CMember(UFortHoagieVehicleConfigs*)                Configs                                                     ___ OFFSET(get<T>, {0x1E0, 8, 0, 0})
};

/// Struct /Script/HoagieRuntime.RotorHit
/// Size: 0x001C (0x000000 - 0x00001C)
class FRotorHit : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FActorInstanceHandle)                      HitObjectHandle                                             ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     LastHitTimer                                                ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/HoagieRuntime.CachedSeatCollision
/// Size: 0x0008 (0x000000 - 0x000008)
class FCachedSeatCollision : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   SeatIndex                                                   ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bOccupied                                                   ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/HoagieRuntime.ReplicatedHeliControlState
/// Size: 0x0030 (0x000000 - 0x000030)
class FReplicatedHeliControlState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector_NetQuantizeNormal)                 Up                                                          ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector_NetQuantizeNormal)                 Forward                                                     ___ OFFSET(get<T>, {0x18, 24, 0, 0})
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
	CMember(UFortHoagieVehicleConfigs*)                FortHoagieVehicleConfigs                                    ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(EHoagieState)                              CurrentHoagieState                                          ___ OFFSET(get<T>, {0x190, 4, 0, 0})
	DMember(float)                                     LastRotorImpulseTime                                        ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	SMember(FVector)                                   RotorHitLinearImpulse                                       ___ OFFSET(get<T>, {0x198, 24, 0, 0})
	SMember(FVector)                                   RotorHitAngularImpulse                                      ___ OFFSET(get<T>, {0x1B0, 24, 0, 0})
};

/// Struct /Script/HoagieRuntime.HoagieInternal
/// Size: 0x01F0 (0x000080 - 0x000270)
class FHoagieInternal : public FFortVehicleInternalPersistent
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FFortHeliFlightModel)                      FlightModel                                                 ___ OFFSET(get<T>, {0x80, 488, 0, 0})
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
	DMember(float)                                     Damage                                                      ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     DamageTags                                                  ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	SMember(FVector)                                   Momentum                                                    ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FHitResult)                                HitInfo                                                     ___ OFFSET(get<T>, {0x40, 224, 0, 0})
	CMember(AFortPawn*)                                InstigatedBy                                                ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	CMember(AActor*)                                   DamageCauser                                                ___ OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               ___ OFFSET(get<T>, {0x130, 24, 0, 0})
};

/// Class /Script/HoagieRuntime.FortHoagieDriverAnimInstance
/// Size: 0x0080 (0x000810 - 0x000890)
class UFortHoagieDriverAnimInstance : public UFortVehicleOccupantAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2192;

public:
	SMember(FVector)                                   LeftHandIKPositionOffset                                    ___ OFFSET(get<T>, {0x810, 24, 0, 0})
	SMember(FVector)                                   RightHandIKPositionOffset                                   ___ OFFSET(get<T>, {0x828, 24, 0, 0})
	SMember(FRotator)                                  LeftHandIKRotationOffset                                    ___ OFFSET(get<T>, {0x840, 24, 0, 0})
	SMember(FRotator)                                  RightHandIKRotationOffset                                   ___ OFFSET(get<T>, {0x858, 24, 0, 0})
	CMember(EFortCardinalDirection)                    BoostCardinalDirection                                      ___ OFFSET(get<T>, {0x870, 1, 0, 0})
	DMember(float)                                     NormalizedAcceleration                                      ___ OFFSET(get<float>, {0x874, 4, 0, 0})
	DMember(float)                                     VehicleRoll                                                 ___ OFFSET(get<float>, {0x878, 4, 0, 0})
	DMember(float)                                     VehicleYaw                                                  ___ OFFSET(get<float>, {0x87C, 4, 0, 0})
	DMember(float)                                     ForwardSpeed                                                ___ OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(bool)                                      bIsMovingAnyDirection                                       ___ OFFSET(get<bool>, {0x884, 1, 0, 0})
	DMember(bool)                                      bIsMovingFastAnyDirection                                   ___ OFFSET(get<bool>, {0x885, 1, 0, 0})
	DMember(bool)                                      bShouldReverse                                              ___ OFFSET(get<bool>, {0x886, 1, 0, 0})
	DMember(bool)                                      bShouldGoBackToIdle                                         ___ OFFSET(get<bool>, {0x887, 1, 0, 0})
	DMember(bool)                                      bTransition_Default_ReverseStart                            ___ OFFSET(get<bool>, {0x888, 1, 0, 0})
	DMember(bool)                                      bTransition_BoostLoop_Reverse                               ___ OFFSET(get<bool>, {0x889, 1, 0, 0})
};

/// Class /Script/HoagieRuntime.FortHoagieVehicleAnimInstance
/// Size: 0x01F0 (0x000600 - 0x0007F0)
class UFortHoagieVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2032;

public:
	SMember(FRotator)                                  EngineRotation                                              ___ OFFSET(get<T>, {0x728, 24, 0, 0})
	SMember(FRotator)                                  MainRotorRotation                                           ___ OFFSET(get<T>, {0x740, 24, 0, 0})
	SMember(FRotator)                                  TailRotorRotaton                                            ___ OFFSET(get<T>, {0x758, 24, 0, 0})
	SMember(FRotator)                                  BoosterFanRotation                                          ___ OFFSET(get<T>, {0x770, 24, 0, 0})
	CMember(EFortCardinalDirection)                    BoostCardinalDirection                                      ___ OFFSET(get<T>, {0x788, 1, 0, 0})
	DMember(float)                                     EngineRotationInterpSpeed                                   ___ OFFSET(get<float>, {0x7A4, 4, 0, 0})
	DMember(float)                                     EngineRotationDuringBoostInterpSpeed                        ___ OFFSET(get<float>, {0x7A8, 4, 0, 0})
	DMember(float)                                     EngineFlipSpeedThreshold                                    ___ OFFSET(get<float>, {0x7AC, 4, 0, 0})
	DMember(float)                                     BoostDirectionDeadzone                                      ___ OFFSET(get<float>, {0x7B0, 4, 0, 0})
	DMember(float)                                     EngineFlipDeadzone                                          ___ OFFSET(get<float>, {0x7B4, 4, 0, 0})
	DMember(float)                                     DriverRoll                                                  ___ OFFSET(get<float>, {0x7B8, 4, 0, 0})
	DMember(float)                                     DriverYaw                                                   ___ OFFSET(get<float>, {0x7BC, 4, 0, 0})
	DMember(float)                                     VerticalSpeed                                               ___ OFFSET(get<float>, {0x7C0, 4, 0, 0})
	DMember(float)                                     FwdSpeed                                                    ___ OFFSET(get<float>, {0x7C4, 4, 0, 0})
	DMember(float)                                     LocalBoostDirection                                         ___ OFFSET(get<float>, {0x7C8, 4, 0, 0})
	DMember(float)                                     YawBlendSpaceInput                                          ___ OFFSET(get<float>, {0x7CC, 4, 0, 0})
	DMember(float)                                     NormalizedAcceleration                                      ___ OFFSET(get<float>, {0x7D0, 4, 0, 0})
	DMember(bool)                                      bShouldHideBlades                                           ___ OFFSET(get<bool>, {0x7D5, 1, 0, 0})
	DMember(bool)                                      bIsBoostOnCD                                                ___ OFFSET(get<bool>, {0x7D6, 1, 0, 0})
	DMember(bool)                                      bIsBoostReady                                               ___ OFFSET(get<bool>, {0x7D7, 1, 0, 0})
	DMember(bool)                                      bIsMovingForward                                            ___ OFFSET(get<bool>, {0x7D8, 1, 0, 0})
	DMember(bool)                                      bIsReversing                                                ___ OFFSET(get<bool>, {0x7D9, 1, 0, 0})
	DMember(bool)                                      bIsMovingAnyDirection                                       ___ OFFSET(get<bool>, {0x7DA, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 ___ OFFSET(get<bool>, {0x7DB, 1, 0, 0})
	DMember(bool)                                      bShouldReverse                                              ___ OFFSET(get<bool>, {0x7DC, 1, 0, 0})
	DMember(bool)                                      bShouldGoBackToIdle                                         ___ OFFSET(get<bool>, {0x7DD, 1, 0, 0})
	DMember(bool)                                      bShouldApplyBoostAdditive                                   ___ OFFSET(get<bool>, {0x7DE, 1, 0, 0})
	DMember(bool)                                      bIsEngineShuttingOff                                        ___ OFFSET(get<bool>, {0x7DF, 1, 0, 0})
	DMember(bool)                                      bTransition_Default_ReverseStart                            ___ OFFSET(get<bool>, {0x7E0, 1, 0, 0})
	DMember(bool)                                      bTransition_BoostLoop_Reverse                               ___ OFFSET(get<bool>, {0x7E1, 1, 0, 0})
};

/// Class /Script/HoagieRuntime.FortCameraMode_Hoagie
/// Size: 0x0070 (0x001B70 - 0x001BE0)
class UFortCameraMode_Hoagie : public UFortCameraMode_AthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7136;

public:
	DMember(float)                                     CurrentRollMultiplier                                       ___ OFFSET(get<float>, {0x1B68, 4, 0, 0})
	DMember(float)                                     CurrentPitchMultiplier                                      ___ OFFSET(get<float>, {0x1B6C, 4, 0, 0})
	SMember(FVector)                                   LastOrigin                                                  ___ OFFSET(get<T>, {0x1B70, 24, 0, 0})
	SMember(FVector)                                   CurrentInterpSpeed                                          ___ OFFSET(get<T>, {0x1B88, 24, 0, 0})
	SMember(FVector)                                   BoostInterpSpeed                                            ___ OFFSET(get<T>, {0x1BA0, 24, 0, 0})
	DMember(float)                                     BaseRollMultiplier                                          ___ OFFSET(get<float>, {0x1BB8, 4, 0, 0})
	DMember(float)                                     BasePitchMultiplier                                         ___ OFFSET(get<float>, {0x1BBC, 4, 0, 0})
	DMember(float)                                     BoostRollMultiplier                                         ___ OFFSET(get<float>, {0x1BC0, 4, 0, 0})
	DMember(float)                                     BoostPitchMultiplier                                        ___ OFFSET(get<float>, {0x1BC4, 4, 0, 0})
	DMember(float)                                     BoostRollDampFactor                                         ___ OFFSET(get<float>, {0x1BC8, 4, 0, 0})
	DMember(float)                                     BoostRollRecoveryDampFactor                                 ___ OFFSET(get<float>, {0x1BCC, 4, 0, 0})
	DMember(float)                                     BoostRecoveryInterpSpeed                                    ___ OFFSET(get<float>, {0x1BD0, 4, 0, 0})
};

/// Class /Script/HoagieRuntime.FortHoagieAudioController
/// Size: 0x0068 (0x000290 - 0x0002F8)
class AFortHoagieAudioController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	DMember(bool)                                      bHighQualityOverride                                        ___ OFFSET(get<bool>, {0x290, 1, 0, 0})
	DMember(bool)                                      bLocalPlayerInHoagie                                        ___ OFFSET(get<bool>, {0x291, 1, 0, 0})
	DMember(bool)                                      bCriticalDamageNative                                       ___ OFFSET(get<bool>, {0x292, 1, 0, 0})
	DMember(bool)                                      bRotorHitNative                                             ___ OFFSET(get<bool>, {0x293, 1, 0, 0})
	DMember(bool)                                      bIsRotorWashActiveNative                                    ___ OFFSET(get<bool>, {0x294, 1, 0, 0})
	DMember(float)                                     RotorWashRelativeZOffset                                    ___ OFFSET(get<float>, {0x298, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortHoagieVehicle*>)       Vehicle                                                     ___ OFFSET(get<T>, {0x29C, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               EngineAudio                                                 ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               RotorAudio                                                  ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
};

/// Class /Script/HoagieRuntime.FortHoagieVehicle
/// Size: 0x0620 (0x001B80 - 0x0021A0)
class AFortHoagieVehicle : public AFortAthenaSKVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8608;

public:
	SMember(FName)                                     PassengerCollision                                          ___ OFFSET(get<T>, {0x1B78, 4, 0, 0})
	DMember(float)                                     CameraBoomDistance                                          ___ OFFSET(get<float>, {0x1B7C, 4, 0, 0})
	DMember(float)                                     CameraBoomHeight                                            ___ OFFSET(get<float>, {0x1B80, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBoostStateChanged                                         ___ OFFSET(get<T>, {0x1B88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAltimeterTraceUpdated                                     ___ OFFSET(get<T>, {0x1B98, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCrashingStateEntered                                      ___ OFFSET(get<T>, {0x1BA8, 16, 0, 0})
	DMember(bool)                                      bEngineAudioDisabled                                        ___ OFFSET(get<bool>, {0x1BB8, 1, 0, 0})
	DMember(float)                                     LiftRumbleTimer                                             ___ OFFSET(get<float>, {0x1BBC, 4, 0, 0})
	DMember(bool)                                      bLiftUp                                                     ___ OFFSET(get<bool>, {0x1BC0, 1, 0, 0})
	DMember(uint64_t)                                  LiftForceFeedbackHandle                                     ___ OFFSET(get<uint64_t>, {0x1BC8, 8, 0, 0})
	DMember(uint64_t)                                  PassiveForceFeedbackHandle                                  ___ OFFSET(get<uint64_t>, {0x1BD0, 8, 0, 0})
	DMember(float)                                     Theta_Native                                                ___ OFFSET(get<float>, {0x1BD8, 4, 0, 0})
	DMember(float)                                     WashAltAlpha_Native                                         ___ OFFSET(get<float>, {0x1BDC, 4, 0, 0})
	DMember(float)                                     RotorWashTickTimer                                          ___ OFFSET(get<float>, {0x1BE0, 4, 0, 0})
	CMember(TArray<FVector>)                           RotorTraceArray                                             ___ OFFSET(get<T>, {0x1BE8, 16, 0, 0})
	CMember(TArray<TEnumAsByte>)                       RotorWashObjectsTypes                                       ___ OFFSET(get<T>, {0x1BF8, 16, 0, 0})
	CMember(UFortHoagieVehicleConfigs*)                FortHoagieVehicleConfigs                                    ___ OFFSET(get<T>, {0x1C08, 8, 0, 0})
	CMember(UCurveFloat*)                              RumbleIntensity                                             ___ OFFSET(get<T>, {0x1C10, 8, 0, 0})
	SMember(FFortHeliFlightModel)                      FlightModel                                                 ___ OFFSET(get<T>, {0x1C18, 488, 0, 0})
	DMember(bool)                                      bClearPitchInput                                            ___ OFFSET(get<bool>, {0x1E00, 1, 0, 0})
	DMember(float)                                     BoostTimeLeft                                               ___ OFFSET(get<float>, {0x1E04, 4, 0, 0})
	DMember(float)                                     BoostBrakingTimeLeft                                        ___ OFFSET(get<float>, {0x1E08, 4, 0, 0})
	DMember(float)                                     BoostCooldown                                               ___ OFFSET(get<float>, {0x1E0C, 4, 0, 0})
	DMember(float)                                     ShutdownTimer                                               ___ OFFSET(get<float>, {0x1E10, 4, 0, 0})
	DMember(float)                                     FoliageDestructionTimer                                     ___ OFFSET(get<float>, {0x1E14, 4, 0, 0})
	DMember(float)                                     CrashingScrapingTimer                                       ___ OFFSET(get<float>, {0x1E18, 4, 0, 0})
	DMember(float)                                     CrashingNotMovingTimer                                      ___ OFFSET(get<float>, {0x1E1C, 4, 0, 0})
	DMember(bool)                                      bCanSleep                                                   ___ OFFSET(get<bool>, {0x1E20, 1, 0, 0})
	DMember(bool)                                      bHasAppliedCrashDamage                                      ___ OFFSET(get<bool>, {0x1E21, 1, 0, 0})
	DMember(bool)                                      bOrientedForLanding                                         ___ OFFSET(get<bool>, {0x1E22, 1, 0, 0})
	DMember(bool)                                      bForceNegativeLift                                          ___ OFFSET(get<bool>, {0x1E23, 1, 0, 0})
	DMember(float)                                     AltimeterTraceTimer                                         ___ OFFSET(get<float>, {0x1E24, 4, 0, 0})
	DMember(float)                                     LastRotorImpulseTime                                        ___ OFFSET(get<float>, {0x1E28, 4, 0, 0})
	DMember(float)                                     CriticalExplodeTimer                                        ___ OFFSET(get<float>, {0x1E2C, 4, 0, 0})
	DMember(bool)                                      bCriticalExplosionPlayed                                    ___ OFFSET(get<bool>, {0x1E30, 1, 0, 0})
	DMember(float)                                     TimeWhileCritical                                           ___ OFFSET(get<float>, {0x1E34, 4, 0, 0})
	DMember(float)                                     TimeWhileLanding                                            ___ OFFSET(get<float>, {0x1E38, 4, 0, 0})
	DMember(float)                                     LiftFromOverrideButton                                      ___ OFFSET(get<float>, {0x1E3C, 4, 0, 0})
	SMember(FVector)                                   BoostDirection                                              ___ OFFSET(get<T>, {0x1E40, 24, 0, 0})
	SMember(FVector)                                   LastRotorSweepDirection                                     ___ OFFSET(get<T>, {0x1E58, 24, 0, 0})
	SMember(FHitResult)                                AltimeterTraceResult                                        ___ OFFSET(get<T>, {0x1E70, 224, 0, 0})
	DMember(int32_t)                                   HoagieStateRep                                              ___ OFFSET(get<int32_t>, {0x1F50, 4, 0, 0})
	CMember(EHoagieState)                              CurrentHoagieState                                          ___ OFFSET(get<T>, {0x1F54, 4, 0, 0})
	DMember(float)                                     CurrentRotorSpeed                                           ___ OFFSET(get<float>, {0x1F58, 4, 0, 0})
	DMember(float)                                     CurrentRotorAngle                                           ___ OFFSET(get<float>, {0x1F5C, 4, 0, 0})
	DMember(float)                                     RotorImpactTraceAngle                                       ___ OFFSET(get<float>, {0x1F60, 4, 0, 0})
	SMember(FVehicleGamepadLiftInputs)                 LiftInputs                                                  ___ OFFSET(get<T>, {0x1F64, 8, 0, 0})
	CMember(TArray<FRotorHit>)                         RotorHits                                                   ___ OFFSET(get<T>, {0x1F70, 16, 0, 0})
	CMember(TArray<FCachedSeatCollision>)              CachedSeatCollision                                         ___ OFFSET(get<T>, {0x1F80, 16, 0, 0})
	SMember(FVector)                                   RotorHitLinearImpulse                                       ___ OFFSET(get<T>, {0x1F90, 24, 0, 0})
	SMember(FVector)                                   RotorHitAngularImpulse                                      ___ OFFSET(get<T>, {0x1FA8, 24, 0, 0})
	CMember(UNiagaraComponent*)                        HoagieIdleFX_Native                                         ___ OFFSET(get<T>, {0x1FC0, 8, 0, 0})
	CMember(UNiagaraComponent*)                        DamageFX_Native                                             ___ OFFSET(get<T>, {0x1FC8, 8, 0, 0})
	CMember(UNiagaraComponent*)                        RotorWashFX_Native                                          ___ OFFSET(get<T>, {0x1FD0, 8, 0, 0})
	CMember(UFortHoagieVehicleAnimInstance*)           HoagieAnimBP_Native                                         ___ OFFSET(get<T>, {0x1FD8, 8, 0, 0})
	SMember(FName)                                     AltimeterTraceSocketName                                    ___ OFFSET(get<T>, {0x1FE0, 4, 0, 0})
	SMember(FName)                                     RotorDamageTraceSocketName                                  ___ OFFSET(get<T>, {0x1FE4, 4, 0, 0})
	SMember(FName)                                     MainRotorCritSocketName                                     ___ OFFSET(get<T>, {0x1FE8, 4, 0, 0})
	SMember(FName)                                     TailRotorCritSocketName                                     ___ OFFSET(get<T>, {0x1FEC, 4, 0, 0})
	CMember(UAnimMontage*)                             SeatTransition_ToDriver                                     ___ OFFSET(get<T>, {0x1FF0, 8, 0, 0})
	CMember(UAnimMontage*)                             SeatTransition_ToPassenger                                  ___ OFFSET(get<T>, {0x1FF8, 8, 0, 0})
	SMember(FName)                                     RotorTraceProfile                                           ___ OFFSET(get<T>, {0x2000, 4, 0, 0})
	SMember(FName)                                     FoliageOverlapsBoxTag                                       ___ OFFSET(get<T>, {0x2004, 4, 0, 0})
	SMember(FReplicatedHeliControlState)               ControlState                                                ___ OFFSET(get<T>, {0x2008, 48, 0, 0})
	DMember(float)                                     CurrentViewDistanceScale                                    ___ OFFSET(get<float>, {0x2038, 4, 0, 0})
	DMember(float)                                     CurrentHLODDistanceOverrideScale                            ___ OFFSET(get<float>, {0x203C, 4, 0, 0})
	DMember(float)                                     CurrentHLODMaxDrawDistanceScale                             ___ OFFSET(get<float>, {0x2040, 4, 0, 0})
	SMember(FHoagieDeathEffectInfo)                    CachedDeathEffectInfo                                       ___ OFFSET(get<T>, {0x2050, 328, 0, 0})
};

/// Class /Script/HoagieRuntime.FortHoagieVehicleConfigs
/// Size: 0x0238 (0x0008B0 - 0x000AE8)
class UFortHoagieVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2792;

public:
	DMember(float)                                     StrafeForce                                                 ___ OFFSET(get<float>, {0x8B0, 4, 0, 0})
	DMember(float)                                     StrafeForceMin                                              ___ OFFSET(get<float>, {0x8B4, 4, 0, 0})
	DMember(float)                                     MaxStrafeSpeedKmh                                           ___ OFFSET(get<float>, {0x8B8, 4, 0, 0})
	DMember(float)                                     StrafeTooFastBrakeForce                                     ___ OFFSET(get<float>, {0x8BC, 4, 0, 0})
	DMember(float)                                     LandedBrakeForce                                            ___ OFFSET(get<float>, {0x8C0, 4, 0, 0})
	DMember(float)                                     LiftForce                                                   ___ OFFSET(get<float>, {0x8C4, 4, 0, 0})
	DMember(float)                                     MaxLiftSpeedKmh                                             ___ OFFSET(get<float>, {0x8C8, 4, 0, 0})
	DMember(float)                                     LiftTooFastBrakeForce                                       ___ OFFSET(get<float>, {0x8CC, 4, 0, 0})
	DMember(float)                                     LateralDragCoefficient                                      ___ OFFSET(get<float>, {0x8D0, 4, 0, 0})
	DMember(float)                                     LateralDragCoefficient2                                     ___ OFFSET(get<float>, {0x8D4, 4, 0, 0})
	DMember(float)                                     LiftDragCoefficient                                         ___ OFFSET(get<float>, {0x8D8, 4, 0, 0})
	DMember(float)                                     LiftDragCoefficient2                                        ___ OFFSET(get<float>, {0x8DC, 4, 0, 0})
	DMember(float)                                     MaxPitchForCameraYaw                                        ___ OFFSET(get<float>, {0x8E0, 4, 0, 0})
	DMember(float)                                     MaxCameraYawAngle                                           ___ OFFSET(get<float>, {0x8E4, 4, 0, 0})
	DMember(float)                                     CameraYawStiff                                              ___ OFFSET(get<float>, {0x8E8, 4, 0, 0})
	DMember(float)                                     CameraYawDamp                                               ___ OFFSET(get<float>, {0x8EC, 4, 0, 0})
	DMember(float)                                     CameraYawStrength                                           ___ OFFSET(get<float>, {0x8F0, 4, 0, 0})
	DMember(float)                                     UprightStiff                                                ___ OFFSET(get<float>, {0x8F4, 4, 0, 0})
	DMember(float)                                     UprightDamp                                                 ___ OFFSET(get<float>, {0x8F8, 4, 0, 0})
	DMember(bool)                                      bUseVehiclePivotForCameraPitch                              ___ OFFSET(get<bool>, {0x8FC, 1, 0, 0})
	DMember(float)                                     ThrustTorqueAnglePercent                                    ___ OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(float)                                     BoostThrustTorqueAnglePercent                               ___ OFFSET(get<float>, {0x904, 4, 0, 0})
	DMember(float)                                     ThrustTorqueStiff                                           ___ OFFSET(get<float>, {0x908, 4, 0, 0})
	DMember(float)                                     ThrustTorqueDamp                                            ___ OFFSET(get<float>, {0x90C, 4, 0, 0})
	DMember(float)                                     ThrustTorqueMaxAccel                                        ___ OFFSET(get<float>, {0x910, 4, 0, 0})
	DMember(float)                                     ThrustTorque                                                ___ OFFSET(get<float>, {0x914, 4, 0, 0})
	DMember(float)                                     YawTorque                                                   ___ OFFSET(get<float>, {0x918, 4, 0, 0})
	DMember(float)                                     YawTorqueDampingSpeed                                       ___ OFFSET(get<float>, {0x91C, 4, 0, 0})
	DMember(float)                                     BoostForce                                                  ___ OFFSET(get<float>, {0x920, 4, 0, 0})
	DMember(float)                                     BoostMaxSpeedKmh                                            ___ OFFSET(get<float>, {0x924, 4, 0, 0})
	DMember(float)                                     BoostDuration                                               ___ OFFSET(get<float>, {0x928, 4, 0, 0})
	DMember(float)                                     BoostCooldown                                               ___ OFFSET(get<float>, {0x92C, 4, 0, 0})
	DMember(float)                                     BoostTorqueStiff                                            ___ OFFSET(get<float>, {0x930, 4, 0, 0})
	DMember(float)                                     BoostTorqueDamp                                             ___ OFFSET(get<float>, {0x934, 4, 0, 0})
	DMember(float)                                     AfterBoostBrakingForce                                      ___ OFFSET(get<float>, {0x938, 4, 0, 0})
	DMember(float)                                     AfterBoostBrakingDuration                                   ___ OFFSET(get<float>, {0x93C, 4, 0, 0})
	DMember(float)                                     AfterBoostBrakingMinSpeed                                   ___ OFFSET(get<float>, {0x940, 4, 0, 0})
	DMember(float)                                     PitchAngleRequiredForFullThrust                             ___ OFFSET(get<float>, {0x944, 4, 0, 0})
	DMember(float)                                     DistanceToGroundForLanding                                  ___ OFFSET(get<float>, {0x948, 4, 0, 0})
	DMember(float)                                     StartupDelay                                                ___ OFFSET(get<float>, {0x94C, 4, 0, 0})
	DMember(float)                                     LandingSequenceDelay                                        ___ OFFSET(get<float>, {0x950, 4, 0, 0})
	DMember(float)                                     RotorsRadius                                                ___ OFFSET(get<float>, {0x954, 4, 0, 0})
	DMember(float)                                     RotorsRadiusInner                                           ___ OFFSET(get<float>, {0x958, 4, 0, 0})
	DMember(float)                                     NoDriverBrakeForce                                          ___ OFFSET(get<float>, {0x95C, 4, 0, 0})
	DMember(float)                                     TimeBetweenRotorDamageTicks                                 ___ OFFSET(get<float>, {0x960, 4, 0, 0})
	DMember(float)                                     AutoLandingForce                                            ___ OFFSET(get<float>, {0x964, 4, 0, 0})
	DMember(float)                                     RotorDamageBoxSweepLength                                   ___ OFFSET(get<float>, {0x968, 4, 0, 0})
	DMember(float)                                     CriticalStateLiftForce                                      ___ OFFSET(get<float>, {0x96C, 4, 0, 0})
	DMember(float)                                     IdleRotationMultiplier                                      ___ OFFSET(get<float>, {0x970, 4, 0, 0})
	DMember(float)                                     LiftPitchDegrees                                            ___ OFFSET(get<float>, {0x974, 4, 0, 0})
	DMember(float)                                     MinAltitudeForIdleNoise                                     ___ OFFSET(get<float>, {0x978, 4, 0, 0})
	DMember(float)                                     DefaultLinearDamp                                           ___ OFFSET(get<float>, {0x97C, 4, 0, 0})
	DMember(float)                                     DefaultAngularDamp                                          ___ OFFSET(get<float>, {0x980, 4, 0, 0})
	DMember(float)                                     LandingLinearDamp                                           ___ OFFSET(get<float>, {0x984, 4, 0, 0})
	DMember(float)                                     LandingAngularDamp                                          ___ OFFSET(get<float>, {0x988, 4, 0, 0})
	DMember(float)                                     LandingLiftAlpha                                            ___ OFFSET(get<float>, {0x98C, 4, 0, 0})
	DMember(float)                                     CriticalStateThrustMultiplier                               ___ OFFSET(get<float>, {0x990, 4, 0, 0})
	DMember(float)                                     BodyUpDotThresholdForLanding                                ___ OFFSET(get<float>, {0x994, 4, 0, 0})
	DMember(int32_t)                                   CriticalHealthThreshold                                     ___ OFFSET(get<int32_t>, {0x998, 4, 0, 0})
	DMember(float)                                     DamagePerImpulseWhileCritical                               ___ OFFSET(get<float>, {0x99C, 4, 0, 0})
	DMember(float)                                     RotorImpulseLinear                                          ___ OFFSET(get<float>, {0x9A0, 4, 0, 0})
	DMember(float)                                     RotorImpulseAngular                                         ___ OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(float)                                     RotorImpulseCooldown                                        ___ OFFSET(get<float>, {0x9A8, 4, 0, 0})
	DMember(float)                                     StartupLift                                                 ___ OFFSET(get<float>, {0x9AC, 4, 0, 0})
	DMember(float)                                     StartupLiftTime                                             ___ OFFSET(get<float>, {0x9B0, 4, 0, 0})
	DMember(float)                                     MaxAltitude                                                 ___ OFFSET(get<float>, {0x9B4, 4, 0, 0})
	DMember(float)                                     AltitudeForSpinning                                         ___ OFFSET(get<float>, {0x9B8, 4, 0, 0})
	DMember(float)                                     RotorMaxSpeed                                               ___ OFFSET(get<float>, {0x9BC, 4, 0, 0})
	DMember(float)                                     RotorAccel                                                  ___ OFFSET(get<float>, {0x9C0, 4, 0, 0})
	DMember(float)                                     RotorDecel                                                  ___ OFFSET(get<float>, {0x9C4, 4, 0, 0})
	DMember(float)                                     ExplodeRotorDecel                                           ___ OFFSET(get<float>, {0x9C8, 4, 0, 0})
	DMember(float)                                     MinRotorSpeedForSkippingStartup                             ___ OFFSET(get<float>, {0x9CC, 4, 0, 0})
	DMember(float)                                     RotorSpeedForStartupLift                                    ___ OFFSET(get<float>, {0x9D0, 4, 0, 0})
	DMember(float)                                     CriticalLiftForceDecay                                      ___ OFFSET(get<float>, {0x9D4, 4, 0, 0})
	DMember(float)                                     CriticalYawTorqueMin                                        ___ OFFSET(get<float>, {0x9D8, 4, 0, 0})
	DMember(float)                                     CriticalYawTorqueMax                                        ___ OFFSET(get<float>, {0x9DC, 4, 0, 0})
	DMember(float)                                     CriticalYawTorqueRampDuration                               ___ OFFSET(get<float>, {0x9E0, 4, 0, 0})
	DMember(float)                                     RotorTraceRotationSpeed                                     ___ OFFSET(get<float>, {0x9E4, 4, 0, 0})
	DMember(float)                                     RotorTraceBoxSize                                           ___ OFFSET(get<float>, {0x9E8, 4, 0, 0})
	DMember(float)                                     RotorTraceBoxHeight                                         ___ OFFSET(get<float>, {0x9EC, 4, 0, 0})
	DMember(float)                                     MaxCriticalFallForce                                        ___ OFFSET(get<float>, {0x9F0, 4, 0, 0})
	DMember(float)                                     BoostFOV                                                    ___ OFFSET(get<float>, {0x9F4, 4, 0, 0})
	DMember(float)                                     GentleCrashTimeToExplode                                    ___ OFFSET(get<float>, {0x9F8, 4, 0, 0})
	DMember(float)                                     CriticalTimeForGentleCrash                                  ___ OFFSET(get<float>, {0x9FC, 4, 0, 0})
	DMember(float)                                     AutoLandingYawTorque                                        ___ OFFSET(get<float>, {0xA00, 4, 0, 0})
	DMember(float)                                     MinHeightForAutoLandingYawTorque                            ___ OFFSET(get<float>, {0xA04, 4, 0, 0})
	DMember(float)                                     MinSpeedForScrapingBottom                                   ___ OFFSET(get<float>, {0xA08, 4, 0, 0})
	DMember(float)                                     FallDamageHeightBuffer                                      ___ OFFSET(get<float>, {0xA0C, 4, 0, 0})
	DMember(float)                                     TimeBetweenRotorPlayerDamage                                ___ OFFSET(get<float>, {0xA10, 4, 0, 0})
	DMember(float)                                     RotorMoveSpeedRequiredToUpdateTraceDirSqr                   ___ OFFSET(get<float>, {0xA14, 4, 0, 0})
	DMember(float)                                     FoliageTraceRate                                            ___ OFFSET(get<float>, {0xA18, 4, 0, 0})
	DMember(float)                                     RotorWashTicksPerFrame                                      ___ OFFSET(get<float>, {0xA1C, 4, 0, 0})
	DMember(float)                                     CriticalHitRadius                                           ___ OFFSET(get<float>, {0xA20, 4, 0, 0})
	DMember(float)                                     AngleNormalUpForLockMovement                                ___ OFFSET(get<float>, {0xA24, 4, 0, 0})
	DMember(float)                                     MaxAutoLandingTime                                          ___ OFFSET(get<float>, {0xA28, 4, 0, 0})
	DMember(float)                                     SpeedThresholdForCrashed                                    ___ OFFSET(get<float>, {0xA2C, 4, 0, 0})
	DMember(float)                                     CritMultiplier                                              ___ OFFSET(get<float>, {0xA30, 4, 0, 0})
	DMember(float)                                     AltitudeForSprings                                          ___ OFFSET(get<float>, {0xA34, 4, 0, 0})
	DMember(float)                                     MaxCrashingTime                                             ___ OFFSET(get<float>, {0xA38, 4, 0, 0})
	DMember(float)                                     MaxCrashingScrapingTime                                     ___ OFFSET(get<float>, {0xA3C, 4, 0, 0})
	DMember(float)                                     MaxCrashingTimeSpentNotMoving                               ___ OFFSET(get<float>, {0xA40, 4, 0, 0})
	DMember(float)                                     LandscapeRotorImpulseMag                                    ___ OFFSET(get<float>, {0xA44, 4, 0, 0})
	DMember(float)                                     HealthThresholdForLandscapeRotorImpulse                     ___ OFFSET(get<float>, {0xA48, 4, 0, 0})
	DMember(float)                                     MaxHeightBuffer                                             ___ OFFSET(get<float>, {0xA4C, 4, 0, 0})
	DMember(bool)                                      bImpulseOnOuterRotorHitLandscape                            ___ OFFSET(get<bool>, {0xA50, 1, 0, 0})
	DMember(bool)                                      bSkipRotorImpulses                                          ___ OFFSET(get<bool>, {0xA51, 1, 0, 0})
	DMember(bool)                                      bEnableCVarScaling                                          ___ OFFSET(get<bool>, {0xA52, 1, 0, 0})
	DMember(float)                                     CVarScalingInterp                                           ___ OFFSET(get<float>, {0xA54, 4, 0, 0})
	SMember(FVector)                                   FoliageTraceBoxSize                                         ___ OFFSET(get<T>, {0xA58, 24, 0, 0})
	SMember(FVector)                                   WaterBoxSize                                                ___ OFFSET(get<T>, {0xA70, 24, 0, 0})
	SMember(FVector)                                   WaterBoxOffset                                              ___ OFFSET(get<T>, {0xA88, 24, 0, 0})
	SMember(FVector)                                   RotorOffsetFromActorLocationOnServer                        ___ OFFSET(get<T>, {0xAA0, 24, 0, 0})
	DMember(bool)                                      bSkipContactRotations                                       ___ OFFSET(get<bool>, {0xAB8, 1, 0, 0})
	SMember(FScalableFloat)                            MaxAutoLandHeightWhenOutOfFuel                              ___ OFFSET(get<T>, {0xAC0, 40, 0, 0})
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

