/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NevadaRuntime.

/// Struct /Script/NevadaRuntime.NevadaAudioUpdateContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FNevadaAudioUpdateContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/NevadaRuntime.NevadaOutContinuous
/// Size: 0x0008 (0x000038 - 0x000040)
class FNevadaOutContinuous : public FFortVehicleOutContinuous
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     AltimeterTraceHitDistance                                   ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     TractorBeamAppliedForceMagnitude                            ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Struct /Script/NevadaRuntime.NevadaOutPersistent
/// Size: 0x0428 (0x000028 - 0x000450)
class FNevadaOutPersistent : public FFortVehicleOutPersistent
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
};

/// Struct /Script/NevadaRuntime.NevadaState
/// Size: 0x0014 (0x000000 - 0x000014)
class FNevadaState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(ENevadaFlightStates)                       CurrentStatus                                               ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   LivesRemaining                                              ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bHijackingActive                                            ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bPilotBubbleCollisionEnabled                                ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(float)                                     CurrentBatteryCharge                                        ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bCannonEnabled                                              ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bTractorBeamEnabled                                         ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
};

/// Struct /Script/NevadaRuntime.NevadaMoveModeConfig
/// Size: 0x0014 (0x000000 - 0x000014)
class FNevadaMoveModeConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     ThrustForce                                                 ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LiftForce                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxHorizontalSpeed                                          ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MaxVerticalSpeed                                            ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DragForceMultiplier                                         ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/NevadaRuntime.DampedSpringConfig
/// Size: 0x000C (0x000000 - 0x00000C)
class FDampedSpringConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Stiffness                                                   ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Damping                                                     ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxAccel                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/NevadaRuntime.NevadaInPersistent
/// Size: 0x0110 (0x000188 - 0x000298)
class FNevadaInPersistent : public FFortVehicleInPersistent
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UFortNevadaVehicleConfigs*)                FortNevadaVehicleConfigs                                    ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	DMember(bool)                                      bBoostThrust                                                ___ OFFSET(get<bool>, {0x190, 1, 0, 0})
	DMember(bool)                                      bBoostDrag                                                  ___ OFFSET(get<bool>, {0x191, 1, 0, 0})
	DMember(float)                                     TractorBeamExtraLengthForExtents                            ___ OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(bool)                                      bUseTractorBeamUprightForce                                 ___ OFFSET(get<bool>, {0x198, 1, 0, 0})
	SMember(FVector)                                   CrashingDesiredUp                                           ___ OFFSET(get<T>, {0x1A0, 24, 0, 0})
	CMember(ENevadaFlightStates)                       CurrentVehicleState                                         ___ OFFSET(get<T>, {0x1B8, 1, 0, 0})
};

/// Class /Script/NevadaRuntime.FortNevadaVehicle
/// Size: 0x0600 (0x001B80 - 0x002180)
class AFortNevadaVehicle : public AFortAthenaSKVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8576;

public:
	SMember(FNevadaState)                              ServerReplicatedState                                       ___ OFFSET(get<T>, {0x1B78, 20, 0, 0})
	CMember(UFortNevadaVehicleConfigs*)                FortNevadaVehicleConfigs                                    ___ OFFSET(get<T>, {0x1B90, 8, 0, 0})
	CMember(UClass*)                                   FortNevadaAudioControllerClass                              ___ OFFSET(get<T>, {0x1B98, 8, 0, 0})
	CMember(UChildActorComponent*)                     AudioControllerActor                                        ___ OFFSET(get<T>, {0x1BA0, 8, 0, 0})
	CMember(AFortNevadaAudioController*)               FortNevadaAudioController                                   ___ OFFSET(get<T>, {0x1BA8, 8, 0, 0})
	SMember(FVehicleGamepadLiftInputs)                 LiftInputs                                                  ___ OFFSET(get<T>, {0x1BB0, 8, 0, 0})
	DMember(float)                                     LastBatteryRegenTickTime                                    ___ OFFSET(get<float>, {0x1BB8, 4, 0, 0})
	DMember(bool)                                      bBoostThrust                                                ___ OFFSET(get<bool>, {0x1BBC, 1, 0, 0})
	DMember(bool)                                      bBoostDrag                                                  ___ OFFSET(get<bool>, {0x1BBD, 1, 0, 0})
	DMember(bool)                                      bBoostInputReleased                                         ___ OFFSET(get<bool>, {0x1BBE, 1, 0, 0})
	DMember(bool)                                      bUseTractorBeamUprightForce                                 ___ OFFSET(get<bool>, {0x1BBF, 1, 0, 0})
	DMember(bool)                                      bDeadBattery                                                ___ OFFSET(get<bool>, {0x1BC0, 1, 0, 0})
	DMember(float)                                     TractorBeamExtraLengthForExtents                            ___ OFFSET(get<float>, {0x1BC4, 4, 0, 0})
	SMember(FVector)                                   CrashingDesiredUp                                           ___ OFFSET(get<T>, {0x1BC8, 24, 0, 0})
	DMember(float)                                     BoostStartTime                                              ___ OFFSET(get<float>, {0x1BE0, 4, 0, 0})
	DMember(float)                                     BoostPitchAlpha                                             ___ OFFSET(get<float>, {0x1BE4, 4, 0, 0})
	DMember(float)                                     BoostChargeProgress                                         ___ OFFSET(get<float>, {0x1BE8, 4, 0, 0})
	DMember(int32_t)                                   BoostChargesAvailable                                       ___ OFFSET(get<int32_t>, {0x1BEC, 4, 0, 0})
	SMember(FVector)                                   CachedBoostMoveDir                                          ___ OFFSET(get<T>, {0x1BF0, 24, 0, 0})
	DMember(float)                                     CurrentStateStartTime                                       ___ OFFSET(get<float>, {0x1C08, 4, 0, 0})
	DMember(float)                                     HeightAtLandingTime                                         ___ OFFSET(get<float>, {0x1C0C, 4, 0, 0})
	DMember(float)                                     CrashingScrapingTime                                        ___ OFFSET(get<float>, {0x1C10, 4, 0, 0})
	DMember(float)                                     CrashingNotMovingTimer                                      ___ OFFSET(get<float>, {0x1C14, 4, 0, 0})
	DMember(float)                                     AltimeterTraceHitDistance                                   ___ OFFSET(get<float>, {0x1C18, 4, 0, 0})
	DMember(float)                                     TractorBeamAppliedForceMagnitude                            ___ OFFSET(get<float>, {0x1C1C, 4, 0, 0})
	DMember(float)                                     AnimParamDriverSeatLeftRight                                ___ OFFSET(get<float>, {0x1C20, 4, 0, 0})
	DMember(float)                                     AnimParamDriverSeatForwardBack                              ___ OFFSET(get<float>, {0x1C24, 4, 0, 0})
	DMember(bool)                                      bForceNegativeLift                                          ___ OFFSET(get<bool>, {0x1C28, 1, 0, 0})
	DMember(bool)                                      bForcePositiveLift                                          ___ OFFSET(get<bool>, {0x1C29, 1, 0, 0})
	DMember(bool)                                      bInitialLift                                                ___ OFFSET(get<bool>, {0x1C2A, 1, 0, 0})
	CMember(ENevadaFlightStates)                       CurrentVehicleState                                         ___ OFFSET(get<T>, {0x1C2B, 1, 0, 0})
	CMember(TWeakObjectPtr<ALandscapeProxy*>)          CachedLandscapeProxy                                        ___ OFFSET(get<T>, {0x1C78, 8, 0, 0})
	CMember(UClass*)                                   PassengerCameraModeClass                                    ___ OFFSET(get<T>, {0x1C80, 8, 0, 0})
	DMember(bool)                                      bTractorBeamChargeStarted                                   ___ OFFSET(get<bool>, {0x1C88, 1, 0, 0})
	SMember(FTowhookParams)                            TowhookParams                                               ___ OFFSET(get<T>, {0x1C90, 208, 0, 0})
	CMember(UClass*)                                   AttachedPawnHiddenVehicle                                   ___ OFFSET(get<T>, {0x1D60, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      TractorBeamAttachedPrimitive                                ___ OFFSET(get<T>, {0x1D68, 8, 0, 0})
	CMember(AFortAthenaVehicle*)                       SpawnedTractorBeamVictimVehicle                             ___ OFFSET(get<T>, {0x1D70, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      PreviousTractorBeamAttachedPrimitive                        ___ OFFSET(get<T>, {0x1D78, 8, 0, 0})
	CMember(TArray<AActor*>)                           TractorBeamTargetedActors                                   ___ OFFSET(get<T>, {0x1D80, 16, 0, 0})
	CMember(TArray<AActor*>)                           PreviouslyTargetedActors                                    ___ OFFSET(get<T>, {0x1D90, 16, 0, 0})
	CMember(AActor*)                                   TractorBeamAttachedActor                                    ___ OFFSET(get<T>, {0x1DA0, 8, 0, 0})
	CMember(AActor*)                                   TractorBeamTargetedActor                                    ___ OFFSET(get<T>, {0x1DA8, 8, 0, 0})
	SMember(FVector)                                   TractorBeamTargetPosition                                   ___ OFFSET(get<T>, {0x1DB0, 24, 0, 0})
	DMember(bool)                                      bBeamButtonReleased                                         ___ OFFSET(get<bool>, {0x1DC9, 1, 0, 0})
	CMember(TArray<TEnumAsByte>)                       TractorBeamObjectsTypes                                     ___ OFFSET(get<T>, {0x1DD0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     DisallowedBeamTags                                          ___ OFFSET(get<T>, {0x1DE0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AlwaysAllowedBeamTags                                       ___ OFFSET(get<T>, {0x1E00, 32, 0, 0})
	CMember(UNiagaraSystem*)                           TractorBeamFX_Unattached                                    ___ OFFSET(get<T>, {0x1EB8, 8, 0, 0})
	CMember(UNiagaraSystem*)                           TractorBeamFX_Attached                                      ___ OFFSET(get<T>, {0x1EC0, 8, 0, 0})
	CMember(UNiagaraComponent*)                        BeamPSC                                                     ___ OFFSET(get<T>, {0x1EC8, 8, 0, 0})
	CMember(TEnumAsByte<ETractorBeamState>)            TractorBeamState                                            ___ OFFSET(get<T>, {0x1F20, 1, 0, 0})
	DMember(float)                                     TractorBeamDeactivationTimestamp                            ___ OFFSET(get<float>, {0x1F48, 4, 0, 0})
	DMember(float)                                     TractorBeamDisruptedTimestamp                               ___ OFFSET(get<float>, {0x1F4C, 4, 0, 0})
	DMember(float)                                     CockpitHealth                                               ___ OFFSET(get<float>, {0x1FD0, 4, 0, 0})
	DMember(float)                                     Native_CockpitEnabled                                       ___ OFFSET(get<float>, {0x1FD4, 4, 0, 0})
	DMember(float)                                     LastCockpitHealthTickTime                                   ___ OFFSET(get<float>, {0x1FD8, 4, 0, 0})
	DMember(float)                                     LastCockpitDamageTime                                       ___ OFFSET(get<float>, {0x1FDC, 4, 0, 0})
	DMember(float)                                     CockpitDissolveStartTime                                    ___ OFFSET(get<float>, {0x1FE0, 4, 0, 0})
	SMember(FScalableFloat)                            CockpitMaxHealth                                            ___ OFFSET(get<T>, {0x1FE8, 40, 0, 0})
	SMember(FScalableFloat)                            CockpitHealthTickRate                                       ___ OFFSET(get<T>, {0x2010, 40, 0, 0})
	SMember(FScalableFloat)                            CockpitHealthPerTick                                        ___ OFFSET(get<T>, {0x2038, 40, 0, 0})
	SMember(FScalableFloat)                            CockpitRegenDelay                                           ___ OFFSET(get<T>, {0x2060, 40, 0, 0})
	CMember(UCurveFloat*)                              CockpitHitMaterialWobble                                    ___ OFFSET(get<T>, {0x2088, 8, 0, 0})
	DMember(float)                                     LastDamageAlpha                                             ___ OFFSET(get<float>, {0x2090, 4, 0, 0})
	DMember(bool)                                      bDissolvingCockpit                                          ___ OFFSET(get<bool>, {0x2094, 1, 0, 0})
	DMember(bool)                                      bRestoringCockpit                                           ___ OFFSET(get<bool>, {0x2095, 1, 0, 0})
	DMember(bool)                                      bCockpitWobble                                              ___ OFFSET(get<bool>, {0x2096, 1, 0, 0})
	CMember(UStaticMeshComponent*)                     NativeComp_ShieldMesh                                       ___ OFFSET(get<T>, {0x2098, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Native_CockpitMaterial                                      ___ OFFSET(get<T>, {0x20A0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Native_EnergyRingMatInstance                                ___ OFFSET(get<T>, {0x20A8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Native_EnergyFieldMatInstance                               ___ OFFSET(get<T>, {0x20B0, 8, 0, 0})
	CMember(UAudioComponent*)                          NativeComp_DamageStateLastLife                              ___ OFFSET(get<T>, {0x20B8, 8, 0, 0})
	CMember(UAudioComponent*)                          NativeComp_DamageState                                      ___ OFFSET(get<T>, {0x20C0, 8, 0, 0})
	SMember(FVector)                                   Native_LastHitLocation                                      ___ OFFSET(get<T>, {0x20C8, 24, 0, 0})
	SMember(FVector)                                   Native_LastHitNormal                                        ___ OFFSET(get<T>, {0x20E0, 24, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_DamageStateFX                                    ___ OFFSET(get<T>, {0x20F8, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_HologramScreen                                   ___ OFFSET(get<T>, {0x2100, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NativeComp_SpeedLines                                       ___ OFFSET(get<T>, {0x2108, 8, 0, 0})
	CMember(UMaterialInterface*)                       Native_EnergyRingMat                                        ___ OFFSET(get<T>, {0x2110, 8, 0, 0})
	CMember(UMaterialInterface*)                       Native_EnergyFieldMat                                       ___ OFFSET(get<T>, {0x2118, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NativeSys_DamageStateFX                                     ___ OFFSET(get<T>, {0x2120, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NativeSys_CockpitDestroyed                                  ___ OFFSET(get<T>, {0x2128, 8, 0, 0})
	CMember(USoundBase*)                               CockpitDamagedSound                                         ___ OFFSET(get<T>, {0x2130, 8, 0, 0})
	CMember(USoundBase*)                               CockpitDestroyedSound                                       ___ OFFSET(get<T>, {0x2138, 8, 0, 0})
	CMember(USoundBase*)                               CockpitRespawnSound                                         ___ OFFSET(get<T>, {0x2140, 8, 0, 0})
	CMember(USoundBase*)                               Native_DamageStateSound                                     ___ OFFSET(get<T>, {0x2148, 8, 0, 0})
	CMember(USoundBase*)                               Native_DamageStateLastLifeSound                             ___ OFFSET(get<T>, {0x2150, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     CockpitDeactivatedForceFeedback                             ___ OFFSET(get<T>, {0x2158, 8, 0, 0})
	CMember(UClass*)                                   CockpitDestroyedCamShake                                    ___ OFFSET(get<T>, {0x2160, 8, 0, 0})
	CMember(TArray<UClass*>)                           TractorBeamDisallowedClasses                                ___ OFFSET(get<T>, {0x2168, 16, 0, 0})
};

/// Class /Script/NevadaRuntime.FortNevadaVehicleAnimInstance
/// Size: 0x00E0 (0x000600 - 0x0006E0)
class UFortNevadaVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	CMember(AFortNevadaVehicle*)                       NevadaVehicle                                               ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(bool)                                      bTractorBeam_IsAttached                                     ___ OFFSET(get<bool>, {0x600, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_IsCharging                                     ___ OFFSET(get<bool>, {0x601, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_IsActive                                       ___ OFFSET(get<bool>, {0x602, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_IsInactive                                     ___ OFFSET(get<bool>, {0x603, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_IsOn                                           ___ OFFSET(get<bool>, {0x604, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_HasTarget                                      ___ OFFSET(get<bool>, {0x605, 1, 0, 0})
	DMember(bool)                                      bTractorBeam_ShouldApplyCustomAO                            ___ OFFSET(get<bool>, {0x606, 1, 0, 0})
	DMember(float)                                     TractorBeam_LookAtPitch                                     ___ OFFSET(get<float>, {0x608, 4, 0, 0})
	DMember(float)                                     TractorBeam_LookAtYaw                                       ___ OFFSET(get<float>, {0x60C, 4, 0, 0})
	DMember(float)                                     LeanLeftRight                                               ___ OFFSET(get<float>, {0x610, 4, 0, 0})
	DMember(float)                                     LeanForwardBackward                                         ___ OFFSET(get<float>, {0x614, 4, 0, 0})
	DMember(float)                                     LeanValue                                                   ___ OFFSET(get<float>, {0x618, 4, 0, 0})
	DMember(float)                                     PreviousLeanValue                                           ___ OFFSET(get<float>, {0x61C, 4, 0, 0})
	DMember(float)                                     VelocityZValue                                              ___ OFFSET(get<float>, {0x620, 4, 0, 0})
	DMember(float)                                     LeanDelta                                                   ___ OFFSET(get<float>, {0x624, 4, 0, 0})
	DMember(bool)                                      bTurnAgain                                                  ___ OFFSET(get<bool>, {0x628, 1, 0, 0})
	DMember(bool)                                      bHadDriver                                                  ___ OFFSET(get<bool>, {0x629, 1, 0, 0})
	DMember(bool)                                      bJustGotDriver                                              ___ OFFSET(get<bool>, {0x62A, 1, 0, 0})
	DMember(bool)                                      bJustLostDriver                                             ___ OFFSET(get<bool>, {0x62B, 1, 0, 0})
	DMember(bool)                                      bWasBoosting                                                ___ OFFSET(get<bool>, {0x62C, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 ___ OFFSET(get<bool>, {0x62D, 1, 0, 0})
	DMember(int32_t)                                   PreviousBoostCount                                          ___ OFFSET(get<int32_t>, {0x630, 4, 0, 0})
	DMember(int32_t)                                   BoostCount                                                  ___ OFFSET(get<int32_t>, {0x634, 4, 0, 0})
	DMember(bool)                                      bIsBoostingAgain                                            ___ OFFSET(get<bool>, {0x638, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   ___ OFFSET(get<bool>, {0x639, 1, 0, 0})
	DMember(float)                                     WingsPlayRate                                               ___ OFFSET(get<float>, {0x63C, 4, 0, 0})
	DMember(float)                                     TractorBeamAlpha                                            ___ OFFSET(get<float>, {0x640, 4, 0, 0})
	DMember(float)                                     AimPitch                                                    ___ OFFSET(get<float>, {0x644, 4, 0, 0})
	DMember(float)                                     AimYaw                                                      ___ OFFSET(get<float>, {0x648, 4, 0, 0})
	DMember(bool)                                      bIsFiringCannon                                             ___ OFFSET(get<bool>, {0x64C, 1, 0, 0})
	DMember(float)                                     DistanceFromGround                                          ___ OFFSET(get<float>, {0x650, 4, 0, 0})
	DMember(bool)                                      bIsLanding                                                  ___ OFFSET(get<bool>, {0x654, 1, 0, 0})
	DMember(bool)                                      bHasLanded                                                  ___ OFFSET(get<bool>, {0x655, 1, 0, 0})
	DMember(float)                                     LandingAlpha                                                ___ OFFSET(get<float>, {0x658, 4, 0, 0})
	DMember(bool)                                      bNotLandingMode                                             ___ OFFSET(get<bool>, {0x65C, 1, 0, 0})
	DMember(bool)                                      bHadBattery                                                 ___ OFFSET(get<bool>, {0x65D, 1, 0, 0})
	DMember(bool)                                      bOutOfBattery                                               ___ OFFSET(get<bool>, {0x65E, 1, 0, 0})
	DMember(bool)                                      bJustGotBattery                                             ___ OFFSET(get<bool>, {0x65F, 1, 0, 0})
	DMember(bool)                                      bLaunchToDepart                                             ___ OFFSET(get<bool>, {0x660, 1, 0, 0})
	DMember(bool)                                      bLaunchToIdle                                               ___ OFFSET(get<bool>, {0x661, 1, 0, 0})
	DMember(bool)                                      bIsPartsLanding                                             ___ OFFSET(get<bool>, {0x662, 1, 0, 0})
	SMember(FName)                                     TractorBeamSocketName                                       ___ OFFSET(get<T>, {0x664, 4, 0, 0})
	SMember(FName)                                     TractorBeamAimCurveName                                     ___ OFFSET(get<T>, {0x668, 4, 0, 0})
	SMember(FName)                                     NevadaVehicleInterruptName                                  ___ OFFSET(get<T>, {0x66C, 4, 0, 0})
	SMember(FName)                                     LandingTraceRightName                                       ___ OFFSET(get<T>, {0x670, 4, 0, 0})
	SMember(FName)                                     LandingTraceLeftName                                        ___ OFFSET(get<T>, {0x674, 4, 0, 0})
	DMember(float)                                     MaxLeanDeltaInterruptMagnitude                              ___ OFFSET(get<float>, {0x678, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedToBeMoving                                   ___ OFFSET(get<float>, {0x67C, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedToPlayWings                                  ___ OFFSET(get<float>, {0x680, 4, 0, 0})
	DMember(float)                                     MinWingsPlayRate                                            ___ OFFSET(get<float>, {0x684, 4, 0, 0})
	DMember(float)                                     MaxWingsPlayRate                                            ___ OFFSET(get<float>, {0x688, 4, 0, 0})
	DMember(float)                                     WingsPlayRateInterpSpeed                                    ___ OFFSET(get<float>, {0x68C, 4, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             CannonFiringMontage                                         ___ OFFSET(get<T>, {0x690, 32, 0, 0})
	DMember(float)                                     LandingGearTraceLength                                      ___ OFFSET(get<float>, {0x6B0, 4, 0, 0})
};

/// Class /Script/NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
/// Size: 0x0180 (0x001800 - 0x001980)
class UFortPlayerAnimInstance_NevadaDriver : public UFortPlayerAnimInstance_OctopusDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6528;

public:
	CMember(AFortNevadaVehicle*)                       NevadaVehicle                                               ___ OFFSET(get<T>, {0x1800, 8, 0, 0})
	DMember(float)                                     AnimLeftRight                                               ___ OFFSET(get<float>, {0x1808, 4, 0, 0})
	DMember(float)                                     AnimForwardBackward                                         ___ OFFSET(get<float>, {0x180C, 4, 0, 0})
	SMember(FVector)                                   RootAttachmentLoc                                           ___ OFFSET(get<T>, {0x1810, 24, 0, 0})
	SMember(FRotator)                                  RootAttachmentRot                                           ___ OFFSET(get<T>, {0x1828, 24, 0, 0})
	DMember(int32_t)                                   BoostCount                                                  ___ OFFSET(get<int32_t>, {0x1840, 4, 0, 0})
	DMember(int32_t)                                   PreviousBoostCount                                          ___ OFFSET(get<int32_t>, {0x1844, 4, 0, 0})
	DMember(bool)                                      bIsBoostingAgain                                            ___ OFFSET(get<bool>, {0x1848, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   ___ OFFSET(get<bool>, {0x1849, 1, 0, 0})
	DMember(float)                                     MinVehicleVelocityToBeMoving                                ___ OFFSET(get<float>, {0x184C, 4, 0, 0})
	SMember(FName)                                     DriverSocketName                                            ___ OFFSET(get<T>, {0x1850, 4, 0, 0})
	SMember(FName)                                     RightHandAttachmentSocketName                               ___ OFFSET(get<T>, {0x1854, 4, 0, 0})
	SMember(FName)                                     LeftHandAttachmentSocketName                                ___ OFFSET(get<T>, {0x1858, 4, 0, 0})
	SMember(FName)                                     RightFootAttachmentSocketName                               ___ OFFSET(get<T>, {0x185C, 4, 0, 0})
	SMember(FName)                                     LeftFootAttachementSocketName                               ___ OFFSET(get<T>, {0x1860, 4, 0, 0})
	SMember(FRotator)                                  RightHandRotationOffset                                     ___ OFFSET(get<T>, {0x1868, 24, 0, 0})
	SMember(FRotator)                                  LeftHandRotationOffset                                      ___ OFFSET(get<T>, {0x1880, 24, 0, 0})
	SMember(FRotator)                                  RightFootRotationOffset                                     ___ OFFSET(get<T>, {0x1898, 24, 0, 0})
	SMember(FRotator)                                  LeftFootRotationOffset                                      ___ OFFSET(get<T>, {0x18B0, 24, 0, 0})
	SMember(FVector)                                   RootAttachmentOffset                                        ___ OFFSET(get<T>, {0x18C8, 24, 0, 0})
};

/// Class /Script/NevadaRuntime.FortCameraMode_Nevada
/// Size: 0x0070 (0x001B70 - 0x001BE0)
class UFortCameraMode_Nevada : public UFortCameraMode_AthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7136;

public:
	SMember(FVector)                                   TractorBeamCameraOffset                                     ___ OFFSET(get<T>, {0x1B90, 24, 0, 0})
	DMember(float)                                     TractorBeamCameraLerpTime                                   ___ OFFSET(get<float>, {0x1BA8, 4, 0, 0})
	DMember(float)                                     TractorBeamCameraExtraPitch                                 ___ OFFSET(get<float>, {0x1BAC, 4, 0, 0})
	DMember(float)                                     TractorBeamInactiveCameraExtraPitch                         ___ OFFSET(get<float>, {0x1BB0, 4, 0, 0})
	DMember(float)                                     TractorBeamCameraPositionResetDelay                         ___ OFFSET(get<float>, {0x1BB4, 4, 0, 0})
	DMember(float)                                     MinPitchForOffset                                           ___ OFFSET(get<float>, {0x1BB8, 4, 0, 0})
	DMember(float)                                     MaxPitchForOffset                                           ___ OFFSET(get<float>, {0x1BBC, 4, 0, 0})
	SMember(FVector)                                   ExtraOffset                                                 ___ OFFSET(get<T>, {0x1BC0, 24, 0, 0})
};

/// Class /Script/NevadaRuntime.FortNevadaAudioController
/// Size: 0x00C8 (0x000290 - 0x000358)
class AFortNevadaAudioController : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FVector2D)                                 SpeedRangeMap                                               ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(FVector2D)                                 TurningRangeMap                                             ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	SMember(FVector2D)                                 AcceleratingRangeMap                                        ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	SMember(FVector2D)                                 BrakingRangeMap                                             ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
	SMember(FVector2D)                                 PassByRangeMap                                              ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	SMember(FVector2D)                                 LFORangeMap                                                 ___ OFFSET(get<T>, {0x2E0, 16, 0, 0})
	CMember(AFortNevadaVehicle*)                       Vehicle                                                     ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               LayeredAudioComponent                                       ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	DMember(float)                                     SpeedParamValue                                             ___ OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(float)                                     SpeedParamValuePrev                                         ___ OFFSET(get<float>, {0x304, 4, 0, 0})
	DMember(float)                                     AcceleratingParamValue                                      ___ OFFSET(get<float>, {0x308, 4, 0, 0})
	DMember(float)                                     BrakingParamValue                                           ___ OFFSET(get<float>, {0x30C, 4, 0, 0})
	SMember(FVector)                                   ForwardVector                                               ___ OFFSET(get<T>, {0x310, 24, 0, 0})
	SMember(FVector)                                   ForwardVectorPrev                                           ___ OFFSET(get<T>, {0x328, 24, 0, 0})
	DMember(float)                                     TurningParamValue                                           ___ OFFSET(get<float>, {0x340, 4, 0, 0})
	DMember(float)                                     PassByParamValue                                            ___ OFFSET(get<float>, {0x344, 4, 0, 0})
	DMember(float)                                     LocallyControlledParamValue                                 ___ OFFSET(get<float>, {0x348, 4, 0, 0})
	DMember(float)                                     LFOParamValue                                               ___ OFFSET(get<float>, {0x34C, 4, 0, 0})
};

/// Class /Script/NevadaRuntime.FortNevadaVehicleConfigs
/// Size: 0x04A8 (0x0008B0 - 0x000D58)
class UFortNevadaVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3416;

public:
	SMember(FNevadaMoveModeConfig)                     BaseMovement                                                ___ OFFSET(get<T>, {0x8B0, 20, 0, 0})
	SMember(FNevadaMoveModeConfig)                     BoostMovement                                               ___ OFFSET(get<T>, {0x8C4, 20, 0, 0})
	SMember(FNevadaMoveModeConfig)                     ChargingMovement                                            ___ OFFSET(get<T>, {0x8D8, 20, 0, 0})
	SMember(FDampedSpringConfig)                       UprightSpringForce                                          ___ OFFSET(get<T>, {0x8EC, 12, 0, 0})
	DMember(float)                                     DebaseLaunchspeed                                           ___ OFFSET(get<float>, {0x8F8, 4, 0, 0})
	DMember(float)                                     MaxHeight                                                   ___ OFFSET(get<float>, {0x8FC, 4, 0, 0})
	DMember(float)                                     MinHeight                                                   ___ OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(float)                                     OnEnterPitchAlpha                                           ___ OFFSET(get<float>, {0x904, 4, 0, 0})
	DMember(float)                                     FallDamageHeightBuffer                                      ___ OFFSET(get<float>, {0x908, 4, 0, 0})
	DMember(float)                                     TurningForce                                                ___ OFFSET(get<float>, {0x90C, 4, 0, 0})
	DMember(float)                                     ThrustRotationAlpha                                         ___ OFFSET(get<float>, {0x910, 4, 0, 0})
	DMember(float)                                     PitchDrag                                                   ___ OFFSET(get<float>, {0x914, 4, 0, 0})
	DMember(float)                                     YawDrag                                                     ___ OFFSET(get<float>, {0x918, 4, 0, 0})
	DMember(float)                                     RollDrag                                                    ___ OFFSET(get<float>, {0x91C, 4, 0, 0})
	DMember(float)                                     BoostThrustDuration                                         ___ OFFSET(get<float>, {0x920, 4, 0, 0})
	DMember(float)                                     BoostDragDuration                                           ___ OFFSET(get<float>, {0x924, 4, 0, 0})
	DMember(int32_t)                                   NumBoostCharges                                             ___ OFFSET(get<int32_t>, {0x928, 4, 0, 0})
	DMember(float)                                     BoostChargeDuration                                         ___ OFFSET(get<float>, {0x92C, 4, 0, 0})
	DMember(float)                                     BoostChargeDelay                                            ___ OFFSET(get<float>, {0x930, 4, 0, 0})
	DMember(float)                                     BoostDragFinishSpeed                                        ___ OFFSET(get<float>, {0x934, 4, 0, 0})
	DMember(float)                                     TractorBeamRadius                                           ___ OFFSET(get<float>, {0x938, 4, 0, 0})
	DMember(float)                                     TractorBeamWithTargetRadius                                 ___ OFFSET(get<float>, {0x93C, 4, 0, 0})
	SMember(FScalableFloat)                            TractorBeamSweepLength                                      ___ OFFSET(get<T>, {0x940, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamChargeTime                                       ___ OFFSET(get<T>, {0x968, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamDurationTime                                     ___ OFFSET(get<T>, {0x990, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamTossImpulseStrengthForward                       ___ OFFSET(get<T>, {0x9B8, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamTossImpulseStrengthUpward                        ___ OFFSET(get<T>, {0x9E0, 40, 0, 0})
	DMember(float)                                     TractorBeamShutdownTime                                     ___ OFFSET(get<float>, {0xA08, 4, 0, 0})
	SMember(FScalableFloat)                            TractorBeamTurnOffDamage                                    ___ OFFSET(get<T>, {0xA10, 40, 0, 0})
	SMember(FScalableFloat)                            AllowTractorBeamAIPawns                                     ___ OFFSET(get<T>, {0xA38, 40, 0, 0})
	DMember(float)                                     TractorBeamBreakForceMagnitude                              ___ OFFSET(get<float>, {0xA60, 4, 0, 0})
	SMember(FScalableFloat)                            TractorBeamActive                                           ___ OFFSET(get<T>, {0xA68, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamCooldown                                         ___ OFFSET(get<T>, {0xA90, 40, 0, 0})
	SMember(FScalableFloat)                            TractorBeamDisruptionCooldown                               ___ OFFSET(get<T>, {0xAB8, 40, 0, 0})
	SMember(FName)                                     TractorBeamSocket                                           ___ OFFSET(get<T>, {0xAE0, 4, 0, 0})
	SMember(FVector)                                   TractorBeamAttachPositionOffset                             ___ OFFSET(get<T>, {0xAE8, 24, 0, 0})
	SMember(FRigidBodyErrorCorrection)                 TractorBeamTargetOverridenErrorCorrection                   ___ OFFSET(get<T>, {0xB00, 52, 0, 0})
	DMember(float)                                     VictimPitchDrag                                             ___ OFFSET(get<float>, {0xB34, 4, 0, 0})
	DMember(float)                                     VictimYawDrag                                               ___ OFFSET(get<float>, {0xB38, 4, 0, 0})
	DMember(float)                                     VictimRollDrag                                              ___ OFFSET(get<float>, {0xB3C, 4, 0, 0})
	SMember(FDampedSpringConfig)                       TractorBeamVictimUprightForce                               ___ OFFSET(get<T>, {0xB40, 12, 0, 0})
	DMember(int32_t)                                   NumReboots                                                  ___ OFFSET(get<int32_t>, {0xB4C, 4, 0, 0})
	DMember(int32_t)                                   NumRebootsDefault                                           ___ OFFSET(get<int32_t>, {0xB50, 4, 0, 0})
	DMember(float)                                     MaxCrashingTime                                             ___ OFFSET(get<float>, {0xB54, 4, 0, 0})
	DMember(float)                                     MaxCrashingScrapingTime                                     ___ OFFSET(get<float>, {0xB58, 4, 0, 0})
	DMember(float)                                     MaxCrashingTimeSpentNotMoving                               ___ OFFSET(get<float>, {0xB5C, 4, 0, 0})
	DMember(float)                                     SpeedThresholdForCrashed                                    ___ OFFSET(get<float>, {0xB60, 4, 0, 0})
	SMember(FScalableFloat)                            RebootDuration                                              ___ OFFSET(get<T>, {0xB68, 40, 0, 0})
	SMember(FScalableFloat)                            RebootDelay                                                 ___ OFFSET(get<T>, {0xB90, 40, 0, 0})
	DMember(float)                                     LandingTraceRange                                           ___ OFFSET(get<float>, {0xBB8, 4, 0, 0})
	DMember(float)                                     DesiredLandingDistance                                      ___ OFFSET(get<float>, {0xBBC, 4, 0, 0})
	DMember(float)                                     LandingDelay_Max                                            ___ OFFSET(get<float>, {0xBC0, 4, 0, 0})
	DMember(float)                                     LandingDelay_Min                                            ___ OFFSET(get<float>, {0xBC4, 4, 0, 0})
	DMember(float)                                     HeightForMinLandingDelay                                    ___ OFFSET(get<float>, {0xBC8, 4, 0, 0})
	DMember(float)                                     HeightForMaxLandingDelay                                    ___ OFFSET(get<float>, {0xBCC, 4, 0, 0})
	DMember(float)                                     LandingPitchAlphaMax                                        ___ OFFSET(get<float>, {0xBD0, 4, 0, 0})
	DMember(float)                                     LandingPitchAlphaMin                                        ___ OFFSET(get<float>, {0xBD4, 4, 0, 0})
	DMember(float)                                     DriverSeatRotationAnimBlendSpeed                            ___ OFFSET(get<float>, {0xBD8, 4, 0, 0})
	DMember(float)                                     CrashingDesiredUpLerpFactor                                 ___ OFFSET(get<float>, {0xBDC, 4, 0, 0})
	DMember(float)                                     CrashedLinearDrag                                           ___ OFFSET(get<float>, {0xBE0, 4, 0, 0})
	DMember(float)                                     LandedDragCoef                                              ___ OFFSET(get<float>, {0xBE4, 4, 0, 0})
	DMember(float)                                     LandedDragCoef2                                             ___ OFFSET(get<float>, {0xBE8, 4, 0, 0})
	DMember(float)                                     LandedMaxDragSpeed                                          ___ OFFSET(get<float>, {0xBEC, 4, 0, 0})
	DMember(float)                                     CrashedAngularDragMultiplier                                ___ OFFSET(get<float>, {0xBF0, 4, 0, 0})
	DMember(float)                                     BoostFOV                                                    ___ OFFSET(get<float>, {0xBF4, 4, 0, 0})
	DMember(float)                                     ExtraTraceInteractRange                                     ___ OFFSET(get<float>, {0xBF8, 4, 0, 0})
	DMember(float)                                     AntiGravityMult                                             ___ OFFSET(get<float>, {0xBFC, 4, 0, 0})
	DMember(float)                                     InitialLiftDuration                                         ___ OFFSET(get<float>, {0xC00, 4, 0, 0})
	SMember(FScalableFloat)                            BatteryCostDuringFlight                                     ___ OFFSET(get<T>, {0xC08, 40, 0, 0})
	SMember(FScalableFloat)                            BatteryRegenDelay                                           ___ OFFSET(get<T>, {0xC30, 40, 0, 0})
	SMember(FScalableFloat)                            BatteryRegenTickRate                                        ___ OFFSET(get<T>, {0xC58, 40, 0, 0})
	SMember(FScalableFloat)                            BatteryRegenAmount                                          ___ OFFSET(get<T>, {0xC80, 40, 0, 0})
	SMember(FScalableFloat)                            MaxBattery                                                  ___ OFFSET(get<T>, {0xCA8, 40, 0, 0})
	SMember(FScalableFloat)                            MinBatteryForFlight                                         ___ OFFSET(get<T>, {0xCD0, 40, 0, 0})
	CMember(TArray<FName>)                             CockpitShapeNames                                           ___ OFFSET(get<T>, {0xCF8, 16, 0, 0})
	SMember(FScalableFloat)                            CockpitDamageMult                                           ___ OFFSET(get<T>, {0xD08, 40, 0, 0})
	SMember(FScalableFloat)                            CockpitHealth                                               ___ OFFSET(get<T>, {0xD30, 40, 0, 0})
};

/// Enum /Script/NevadaRuntime.ETractorBeamState
/// Size: 0x04
enum ETractorBeamState : uint8_t
{
	TBS_Inactive0                                                                    = 0,
	TBS_Charging1                                                                    = 1,
	TBS_Active2                                                                      = 2,
	TBS_MAX3                                                                         = 3
};

/// Enum /Script/NevadaRuntime.ENevadaFlightStates
/// Size: 0x09
enum ENevadaFlightStates : uint8_t
{
	ENevadaFlightStates__FLIGHT0                                                     = 0,
	ENevadaFlightStates__CRASHING1                                                   = 1,
	ENevadaFlightStates__CRASHED2                                                    = 2,
	ENevadaFlightStates__REBOOTING3                                                  = 3,
	ENevadaFlightStates__LANDING4                                                    = 4,
	ENevadaFlightStates__LANDED5                                                     = 5,
	ENevadaFlightStates__IDLE6                                                       = 6,
	ENevadaFlightStates__NONE7                                                       = 7,
	ENevadaFlightStates__ENevadaFlightStates_MAX8                                    = 8
};

