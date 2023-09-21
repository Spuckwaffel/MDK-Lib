
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: ModularGameplay

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dive
/// Size: 0x01A0 (0x000B28 - 0x000CC8)
class UFortGameplayAbility_ScoutDrone_Dive : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3272;

public:
	SMember(FFortScoutDroneDiveTransitionData)         EaseInData                                                  ___ OFFSET(get<T>, {0xB38, 48, 0, 0})
	SMember(FFortScoutDroneDiveTransitionData)         EaseOutData                                                 ___ OFFSET(get<T>, {0xB68, 48, 0, 0})
	SMember(FScalableFloat)                            DiveUpdateInterval                                          ___ OFFSET(get<T>, {0xBA0, 40, 0, 0})
	SMember(FScalableFloat)                            DiveSpeedIncrease                                           ___ OFFSET(get<T>, {0xBC8, 40, 0, 0})
	SMember(FScalableFloat)                            MinSpeedToDive                                              ___ OFFSET(get<T>, {0xBF0, 40, 0, 0})
	SMember(FScalableFloat)                            MinDistToGround                                             ___ OFFSET(get<T>, {0xC18, 40, 0, 0})
	SMember(FScalableFloat)                            TargetPitchToDive                                           ___ OFFSET(get<T>, {0xC40, 40, 0, 0})
	SMember(FScalableFloat)                            DivingGravityScale                                          ___ OFFSET(get<T>, {0xC68, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedDivingGravityScale                                  ___ OFFSET(get<T>, {0xC90, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_TargetingBase
/// Size: 0x0048 (0x000B28 - 0x000B70)
class UFortGameplayAbility_ScoutDrone_TargetingBase : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2928;

public:
	CMember(UTargetingPreset*)                         TargetingPreset                                             ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FTargetingRequestHandle)                   AsyncTargetingHandle                                        ___ OFFSET(get<T>, {0xB30, 4, 0, 0})
	SMember(FTimerHandle)                              TargetingTimerHandle                                        ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	SMember(FScalableFloat)                            TargetingInterval                                           ___ OFFSET(get<T>, {0xB40, 40, 0, 0})
	DMember(bool)                                      bUseControllerAsInstigator                                  ___ OFFSET(get<bool>, {0xB68, 1, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_SpeedBoost
/// Size: 0x00F0 (0x000B70 - 0x000C60)
class UFortGameplayAbility_ScoutDrone_SpeedBoost : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3168;

public:
	SMember(FGameplayTag)                              DoorBashCueTag                                              ___ OFFSET(get<T>, {0xB70, 4, 0, 0})
	CMember(UClass*)                                   DamageGameplayEffectClass                                   ___ OFFSET(get<T>, {0xB78, 8, 0, 0})
	SMember(FGameplayTag)                              DoorBashPawnLaunchGameplayCueTag                            ___ OFFSET(get<T>, {0xB80, 4, 0, 0})
	SMember(FScalableFloat)                            DoorBashEnabledHotfix                                       ___ OFFSET(get<T>, {0xB88, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashSphereRadiusForPawnLaunch                           ___ OFFSET(get<T>, {0xBB0, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashScalarForPawnLaunch                                 ___ OFFSET(get<T>, {0xBD8, 40, 0, 0})
	CMember(TArray<TEnumAsByte>)                       DoorBashCollisionTypesForPawn                               ___ OFFSET(get<T>, {0xC00, 16, 0, 0})
	SMember(FScalableFloat)                            DoorBashEnabled                                             ___ OFFSET(get<T>, {0xC10, 40, 0, 0})
	SMember(FScalableFloat)                            DamageOnBoostEnabled                                        ___ OFFSET(get<T>, {0xC38, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneAnalyticsComponent
/// Size: 0x00B0 (0x0000A8 - 0x000158)
class UFortScoutDroneAnalyticsComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	DMember(float)                                     SessionStartTime                                            ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     SessionLength                                               ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	SMember(FScalableFloat)                            MinSessionLength                                            ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	DMember(float)                                     DistanceTraveled                                            ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(int32_t)                                   NumberOfContainersInteractedWith                            ___ OFFSET(get<int32_t>, {0xDC, 4, 0, 0})
	SMember(FGameplayTag)                              DismissalReason                                             ___ OFFSET(get<T>, {0xE0, 4, 0, 0})
	DMember(int32_t)                                   NumberOfItemsPickedUp                                       ___ OFFSET(get<int32_t>, {0xE4, 4, 0, 0})
	CMember(TArray<FString>)                           DBNOCarriedPlayers                                          ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(int32_t)                                   NumberOfEnemiesPassivelyMarked                              ___ OFFSET(get<int32_t>, {0xF8, 4, 0, 0})
	DMember(int32_t)                                   NumberOfEnemiesMarkedOnCaw                                  ___ OFFSET(get<int32_t>, {0xFC, 4, 0, 0})
	DMember(int32_t)                                   NumberOfCaws                                                ___ OFFSET(get<int32_t>, {0x100, 4, 0, 0})
	SMember(FScalableFloat)                            DistanceTraveledUpdateInterval                              ___ OFFSET(get<T>, {0x110, 40, 0, 0})
	SMember(FTimerHandle)                              DistanceTraveledUpdateTimerHandle                           ___ OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FVector)                                   LastRecorderDroneLocation                                   ___ OFFSET(get<T>, {0x140, 24, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneAnimInstance
/// Size: 0x01F0 (0x000440 - 0x000630)
class UFortScoutDroneAnimInstance : public UFortBaseAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	CMember(UFortScoutDroneMovementComponent*)         FortScoutDroneMovementComponent                             ___ OFFSET(get<T>, {0x438, 8, 0, 0})
	DMember(double)                                    YawDeltaLastTick                                            ___ OFFSET(get<double>, {0x440, 8, 0, 0})
	SMember(FRotator)                                  ActorCurrentRotationTick                                    ___ OFFSET(get<T>, {0x448, 24, 0, 0})
	DMember(double)                                    YawDeltaCurrentTick                                         ___ OFFSET(get<double>, {0x460, 8, 0, 0})
	SMember(FRotator)                                  ActorRotationLastTick                                       ___ OFFSET(get<T>, {0x468, 24, 0, 0})
	DMember(bool)                                      IsFlying                                                    ___ OFFSET(get<bool>, {0x480, 1, 0, 0})
	DMember(double)                                    CurrentVelocity                                             ___ OFFSET(get<double>, {0x488, 8, 0, 0})
	DMember(double)                                    LastVelocity                                                ___ OFFSET(get<double>, {0x490, 8, 0, 0})
	DMember(double)                                    Velocity                                                    ___ OFFSET(get<double>, {0x498, 8, 0, 0})
	DMember(double)                                    ForwardInputAlpha                                           ___ OFFSET(get<double>, {0x4A0, 8, 0, 0})
	DMember(double)                                    StrafeInputAlpha                                            ___ OFFSET(get<double>, {0x4A8, 8, 0, 0})
	SMember(FRotator)                                  DroneRotation                                               ___ OFFSET(get<T>, {0x4B0, 24, 0, 0})
	DMember(double)                                    Acceleration                                                ___ OFFSET(get<double>, {0x4C8, 8, 0, 0})
	CMember(AFortScoutDrone*)                          ScoutDrone                                                  ___ OFFSET(get<T>, {0x4D0, 8, 0, 0})
	DMember(bool)                                      IsBoosting                                                  ___ OFFSET(get<bool>, {0x4D8, 1, 0, 0})
	DMember(bool)                                      IsDiving                                                    ___ OFFSET(get<bool>, {0x4D9, 1, 0, 0})
	DMember(double)                                    AimPitch                                                    ___ OFFSET(get<double>, {0x4E0, 8, 0, 0})
	DMember(double)                                    NegativeAimPitch                                            ___ OFFSET(get<double>, {0x4E8, 8, 0, 0})
	SMember(FRotator)                                  FinalFanRotationL                                           ___ OFFSET(get<T>, {0x4F0, 24, 0, 0})
	SMember(FRotator)                                  FinalFanRotationR                                           ___ OFFSET(get<T>, {0x508, 24, 0, 0})
	DMember(double)                                    FanIdleSpeed                                                ___ OFFSET(get<double>, {0x520, 8, 0, 0})
	DMember(double)                                    FanAuthoredSpeed                                            ___ OFFSET(get<double>, {0x528, 8, 0, 0})
	DMember(double)                                    FanIdleAuthoredSpeed                                        ___ OFFSET(get<double>, {0x530, 8, 0, 0})
	DMember(double)                                    FanBwdSpeed                                                 ___ OFFSET(get<double>, {0x538, 8, 0, 0})
	DMember(double)                                    FanFwdSpeed                                                 ___ OFFSET(get<double>, {0x540, 8, 0, 0})
	DMember(double)                                    TurnNoiseAlpha                                              ___ OFFSET(get<double>, {0x548, 8, 0, 0})
	DMember(double)                                    LeanAlpha                                                   ___ OFFSET(get<double>, {0x550, 8, 0, 0})
	DMember(double)                                    TurnAlpha                                                   ___ OFFSET(get<double>, {0x558, 8, 0, 0})
	DMember(bool)                                      IsColliding                                                 ___ OFFSET(get<bool>, {0x560, 1, 0, 0})
	DMember(bool)                                      IsFlyingBwd                                                 ___ OFFSET(get<bool>, {0x561, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromFlying                                        ___ OFFSET(get<bool>, {0x562, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromDiving                                        ___ OFFSET(get<bool>, {0x563, 1, 0, 0})
	DMember(bool)                                      EarlyIntoLoop                                               ___ OFFSET(get<bool>, {0x564, 1, 0, 0})
	DMember(double)                                    AccelerationZ                                               ___ OFFSET(get<double>, {0x568, 8, 0, 0})
	DMember(bool)                                      IsLeftStrafe                                                ___ OFFSET(get<bool>, {0x570, 1, 0, 0})
	DMember(bool)                                      WasStrafing                                                 ___ OFFSET(get<bool>, {0x571, 1, 0, 0})
	DMember(double)                                    GroundDistance                                              ___ OFFSET(get<double>, {0x578, 8, 0, 0})
	DMember(bool)                                      HasDivingConditionBeenMet                                   ___ OFFSET(get<bool>, {0x580, 1, 0, 0})
	DMember(bool)                                      IsItemAttached                                              ___ OFFSET(get<bool>, {0x581, 1, 0, 0})
	DMember(bool)                                      IsPlayerAttached                                            ___ OFFSET(get<bool>, {0x582, 1, 0, 0})
	DMember(double)                                    FlapTime                                                    ___ OFFSET(get<double>, {0x588, 8, 0, 0})
	DMember(int32_t)                                   FlapRandomPick                                              ___ OFFSET(get<int32_t>, {0x590, 4, 0, 0})
	DMember(bool)                                      IsFlapSmall                                                 ___ OFFSET(get<bool>, {0x594, 1, 0, 0})
	DMember(int32_t)                                   FlapRandomMaxRange                                          ___ OFFSET(get<int32_t>, {0x598, 4, 0, 0})
	DMember(double)                                    FlapSmallTimeThreshold                                      ___ OFFSET(get<double>, {0x5A0, 8, 0, 0})
	DMember(double)                                    FlapBigTimeThreshold                                        ___ OFFSET(get<double>, {0x5A8, 8, 0, 0})
	DMember(double)                                    FlapSmallResetDelayDuration                                 ___ OFFSET(get<double>, {0x5B0, 8, 0, 0})
	DMember(double)                                    FlapBigResetDelayDuration                                   ___ OFFSET(get<double>, {0x5B8, 8, 0, 0})
	DMember(bool)                                      IsFlapBig                                                   ___ OFFSET(get<bool>, {0x5C0, 1, 0, 0})
	DMember(double)                                    VerticalInputAlpha                                          ___ OFFSET(get<double>, {0x5C8, 8, 0, 0})
	DMember(bool)                                      WasVerticalUp                                               ___ OFFSET(get<bool>, {0x5D0, 1, 0, 0})
	DMember(bool)                                      IsFlyingVerticalUp                                          ___ OFFSET(get<bool>, {0x5D1, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromBoostOutro                                    ___ OFFSET(get<bool>, {0x5D2, 1, 0, 0})
	DMember(bool)                                      HasSpawned                                                  ___ OFFSET(get<bool>, {0x5D3, 1, 0, 0})
	DMember(bool)                                      ShouldExitFromSpawning                                      ___ OFFSET(get<bool>, {0x5D4, 1, 0, 0})
	DMember(bool)                                      ShouldAllowTransition                                       ___ OFFSET(get<bool>, {0x5D5, 1, 0, 0})
	DMember(bool)                                      StateRuleFromBoostOutroToFlying                             ___ OFFSET(get<bool>, {0x5D6, 1, 0, 0})
	DMember(bool)                                      WasBoosting                                                 ___ OFFSET(get<bool>, {0x5D7, 1, 0, 0})
	SMember(FScalableFloat)                            SpeedBoostForceBoostVelocity                                ___ OFFSET(get<T>, {0x5D8, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedBoostMaxSpeedIncrease                                  ___ OFFSET(get<T>, {0x600, 40, 0, 0})
	DMember(bool)                                      IsFlappingTime                                              ___ OFFSET(get<bool>, {0x628, 1, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneGlove
/// Size: 0x0040 (0x0011F8 - 0x001238)
class AFortScoutDroneGlove : public AFortWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4664;

public:
	SMember(FScalableFloat)                            HoldToDeployTime                                            ___ OFFSET(get<T>, {0x11F8, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Activate
/// Size: 0x0020 (0x000B28 - 0x000B48)
class UFortGameplayAbility_ScoutDrone_Activate : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2888;

public:
	CMember(UClass*)                                   RCActorClass                                                ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FVector)                                   SpawnOffset                                                 ___ OFFSET(get<T>, {0xB30, 24, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Dismiss
/// Size: 0x0010 (0x000B28 - 0x000B38)
class UFortGameplayAbility_ScoutDrone_Dismiss : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2872;

public:
	SMember(FScoutDroneDeferredDestructionData)        DismissDelayData                                            ___ OFFSET(get<T>, {0xB28, 16, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_MarkPotentialTargets
/// Size: 0x0130 (0x000B70 - 0x000CA0)
class UFortGameplayAbility_ScoutDrone_MarkPotentialTargets : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3232;

public:
	SMember(FIndicatedActorData)                       IndicatedActorData                                          ___ OFFSET(get<T>, {0xB70, 248, 0, 0})
	SMember(FScalableFloat)                            MaxNumberOfPotentialTargets                                 ___ OFFSET(get<T>, {0xC78, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.ScoutDronePassiveMarkPayload
/// Size: 0x0008 (0x000028 - 0x000030)
class UScoutDronePassiveMarkPayload : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FScoutDroneStatusData)                     TargetStatus                                                ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PassiveMark
/// Size: 0x01F8 (0x000B70 - 0x000D68)
class UFortGameplayAbility_ScoutDrone_PassiveMark : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3432;

public:
	SMember(FScoutDroneStatusData)                     CurrentTargetStatus                                         ___ OFFSET(get<T>, {0xB70, 8, 0, 0})
	SMember(FStenciledActorData)                       StenciledActorData                                          ___ OFFSET(get<T>, {0xB78, 128, 0, 0})
	SMember(FIndicatedActorData)                       IndicatedActorData                                          ___ OFFSET(get<T>, {0xBF8, 248, 0, 0})
	SMember(FScalableFloat)                            ActorTargetingRange                                         ___ OFFSET(get<T>, {0xCF0, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToConfirmTarget                                         ___ OFFSET(get<T>, {0xD18, 40, 0, 0})
	CMember(AActor*)                                   CurrentTarget                                               ___ OFFSET(get<T>, {0xD40, 8, 0, 0})
	SMember(FTimerHandle)                              TargetConfirmationTimerHandle                               ___ OFFSET(get<T>, {0xD48, 8, 0, 0})
	CMember(UScoutDronePassiveMarkPayload*)            PayloadCache                                                ___ OFFSET(get<T>, {0xD50, 8, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.ScoutDronePickUpTargetsPayload
/// Size: 0x0018 (0x000028 - 0x000040)
class UScoutDronePickUpTargetsPayload : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FScoutDronePickupTargets)                  PickUpTargets                                               ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_PickUp
/// Size: 0x0078 (0x000B70 - 0x000BE8)
class UFortGameplayAbility_ScoutDrone_PickUp : public UFortGameplayAbility_ScoutDrone_TargetingBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3048;

public:
	SMember(FScalableFloat)                            MaxNumberOfItemsToGrab                                      ___ OFFSET(get<T>, {0xB78, 40, 0, 0})
	CMember(UScoutDronePickUpTargetsPayload*)          PayloadCache                                                ___ OFFSET(get<T>, {0xBA0, 8, 0, 0})
	SMember(FScalableFloat)                            PickupToggleCooldownDuration                                ___ OFFSET(get<T>, {0xBA8, 40, 0, 0})
	CMember(UClass*)                                   AttachedPawnGEClass                                         ___ OFFSET(get<T>, {0xBE0, 8, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortGameplayAbility_ScoutDrone_Tether
/// Size: 0x0078 (0x000B28 - 0x000BA0)
class UFortGameplayAbility_ScoutDrone_Tether : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
	SMember(FScalableFloat)                            WarningRange                                                ___ OFFSET(get<T>, {0xB28, 40, 0, 0})
	SMember(FScalableFloat)                            SignalLossRange                                             ___ OFFSET(get<T>, {0xB50, 40, 0, 0})
	DMember(bool)                                      bIsInWarningRange                                           ___ OFFSET(get<bool>, {0xB78, 1, 0, 0})
	DMember(bool)                                      bIsInSignalLossRange                                        ___ OFFSET(get<bool>, {0xB79, 1, 0, 0})
	SMember(FTimerHandle)                              TetheringTimerHandle                                        ___ OFFSET(get<T>, {0xB80, 8, 0, 0})
	SMember(FTimerHandle)                              TetheringReportTimerHandle                                  ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
	SMember(FScoutDroneDeferredDestructionData)        DismissDelayData                                            ___ OFFSET(get<T>, {0xB90, 16, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortAthenaMutator_ScoutDrone
/// Size: 0x0048 (0x000338 - 0x000380)
class AFortAthenaMutator_ScoutDrone : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FGameplayTagContainer)                     DroneAllowedInteractionTags                                 ___ OFFSET(get<T>, {0x338, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DroneBlockedInteractionTags                                 ___ OFFSET(get<T>, {0x358, 32, 0, 0})
	DMember(bool)                                      bIsControllingDrone                                         ___ OFFSET(get<bool>, {0x378, 1, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortChargingSet_ScoutDroneEnergy
/// Size: 0x00C0 (0x000048 - 0x000108)
class UFortChargingSet_ScoutDroneEnergy : public UFortChargingSet_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FFortGameplayAttributeData)                Energy                                                      ___ OFFSET(get<T>, {0x48, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                MaxEnergy                                                   ___ OFFSET(get<T>, {0x70, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                EnergyChargeRate                                            ___ OFFSET(get<T>, {0x98, 40, 0, 0})
	SMember(FFortGameplayAttributeData)                ServerTimeEnergyIncrements                                  ___ OFFSET(get<T>, {0xC0, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDrone
/// Size: 0x0190 (0x000660 - 0x0007F0)
class AFortScoutDrone : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2032;

public:
	DMember(bool)                                      bIsDiving                                                   ___ OFFSET(get<bool>, {0x6B0, 1, 0, 0})
	SMember(FScalableFloat)                            DivingEnabled                                               ___ OFFSET(get<T>, {0x6B8, 40, 0, 0})
	DMember(bool)                                      bIsSpeedBoosting                                            ___ OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	CMember(UNiagaraComponent*)                        NSScoutDroneIdle_Native                                     ___ OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(UFortScoutDronePickupManager*)             PickupManagerComponent_Native                               ___ OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(UClass*)                                   TeamMateIndicatorMarkerWidgetClass                          ___ OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(UAudioComponent*)                          DroneMotorLoopComponent                                     ___ OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(UAudioComponent*)                          DroneThrustSoundComponent                                   ___ OFFSET(get<T>, {0x708, 8, 0, 0})
	SMember(FScalableFloat)                            BaseMaxFlySpeed                                             ___ OFFSET(get<T>, {0x710, 40, 0, 0})
	CMember(UFortAbilitySystemComponent*)              AbilitySystemComponent                                      ___ OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UFortActorComponent_Affiliation*)          AffiliationComponent                                        ___ OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(UFortAbilitySet*)                          StartupAbilitySet                                           ___ OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(AFortPawn*)                                ControllingPlayerPawn                                       ___ OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(UFortHealthSet*)                           HealthSet                                                   ___ OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(UFortChargingSet_ScoutDroneEnergy*)        EnergySet                                                   ___ OFFSET(get<T>, {0x768, 8, 0, 0})
	DMember(float)                                     LifespanAfterDeath                                          ___ OFFSET(get<float>, {0x770, 4, 0, 0})
	SMember(FFortAttributeInitializationKey)           AttributeInitKey                                            ___ OFFSET(get<T>, {0x774, 8, 0, 0})
	CMember(TEnumAsByte<EPhysicalSurface>)             PrimarySurfaceType                                          ___ OFFSET(get<T>, {0x77C, 1, 0, 0})
	CMember(TEnumAsByte<EFortBaseWeaponDamage>)        WeaponResponseType                                          ___ OFFSET(get<T>, {0x77D, 1, 0, 0})
	DMember(bool)                                      bPlayedDeath                                                ___ OFFSET(get<bool>, {0x77E, 1, 0, 0})
	SMember(FScoutDroneDeferredDestructionData)        OutOfHealthDismissDelayData                                 ___ OFFSET(get<T>, {0x780, 16, 0, 0})
	SMember(FScoutDroneDeferredDestructionData)        OutOfEnergyDismissDelayData                                 ___ OFFSET(get<T>, {0x790, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTeamIndexChanged                                          ___ OFFSET(get<T>, {0x7A0, 16, 0, 0})
	CMember(UClass*)                                   PawnOverrideComponentClass                                  ___ OFFSET(get<T>, {0x7B0, 8, 0, 0})
	CMember(USoundBase*)                               DroneMotorLoopSound                                         ___ OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(USoundBase*)                               DroneThrusterSound                                          ___ OFFSET(get<T>, {0x7C0, 8, 0, 0})
	CMember(UAudioParameterComponent*)                 AudioParameter                                              ___ OFFSET(get<T>, {0x7C8, 8, 0, 0})
	SMember(FName)                                     LocallyViewedPawnAudioParamName                             ___ OFFSET(get<T>, {0x7D0, 4, 0, 0})
	SMember(FName)                                     IsEnemyAudioParamName                                       ___ OFFSET(get<T>, {0x7D4, 4, 0, 0})
	SMember(FName)                                     ThrustAmountAudioParamName                                  ___ OFFSET(get<T>, {0x7D8, 4, 0, 0})
	DMember(float)                                     ThrustSoundThreshold                                        ___ OFFSET(get<float>, {0x7DC, 4, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneCameraMode
/// Size: 0x0008 (0x0001E8 - 0x0001F0)
class UFortScoutDroneCameraMode : public UFort3PCameraMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	DMember(bool)                                      bShouldInterpolateLocation                                  ___ OFFSET(get<bool>, {0x1E8, 1, 0, 0})
	DMember(bool)                                      bShouldInterpolateRotation                                  ___ OFFSET(get<bool>, {0x1E9, 1, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.ScoutDroneDeferredDestructionPayload
/// Size: 0x0010 (0x000028 - 0x000038)
class UScoutDroneDeferredDestructionPayload : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FScoutDroneDeferredDestructionData)        DeferredDestructionData                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent
/// Size: 0x02B8 (0x0000A8 - 0x000360)
class UFortScoutDroneControllingComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(UInputComponent*)                          DroneInputComponent                                         ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(AFortScoutDrone*)                          ControlledDrone                                             ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(AActor*)                                   OriginalDroneOwner                                          ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UFortInputMappingContext*)                 DroneInputContext                                           ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TArray<FScoutDroneInputTriggerableEvent>)  InputTriggerableEvents                                      ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(UInputAction*)                             MoveUpAction                                                ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(UInputAction*)                             MoveAction                                                  ___ OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(UInputAction*)                             DismissAction                                               ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(UClass*)                                   DroneCooldownEffectClass                                    ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FStenciledActorData)                       OwningActorStencilData                                      ___ OFFSET(get<T>, {0x140, 128, 0, 0})
	SMember(FScoutDroneDeferredDestructionData)        CurrentDestructionData                                      ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(UClass*)                                   FirstPersonCameraModeOverride                               ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(UClass*)                                   ThirdPersonCameraModeOverride                               ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FGameplayAbilitySpec)                      FakeCameraAbilitySpec                                       ___ OFFSET(get<T>, {0x1E0, 248, 0, 0})
	CMember(TArray<FName>)                             LegacyInputActionsToBlock                                   ___ OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(UScoutDroneDeferredDestructionPayload*)    DismissPayloadCache                                         ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	SMember(FScalableFloat)                            DismissButtonPressCooldown                                  ___ OFFSET(get<T>, {0x2F0, 40, 0, 0})
	SMember(FViewTargetTransitionParams)               PlayerToDroneTransitionParams                               ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	SMember(FGameplayTagContainer)                     InterruptingPlayerTags                                      ___ OFFSET(get<T>, {0x338, 32, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneCooldownMagnitudeCalculation
/// Size: 0x0028 (0x000040 - 0x000068)
class UFortScoutDroneCooldownMagnitudeCalculation : public UFortGameplayModMagnitudeCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FScalableFloat)                            MinDroneCooldown                                            ___ OFFSET(get<T>, {0x40, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDroneMovementComponent
/// Size: 0x00C0 (0x000F30 - 0x000FF0)
class UFortScoutDroneMovementComponent : public UCharacterMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4080;

public:
	SMember(FVector)                                   LocalInputState                                             ___ OFFSET(get<T>, {0xF28, 24, 0, 0})
	SMember(FVector)                                   LastInputState                                              ___ OFFSET(get<T>, {0xF40, 24, 0, 0})
	SMember(FVector)                                   ReplicatedAcceleration                                      ___ OFFSET(get<T>, {0xF58, 24, 0, 0})
	SMember(FScalableFloat)                            StrafeInputMultiplier                                       ___ OFFSET(get<T>, {0xF70, 40, 0, 0})
	SMember(FScalableFloat)                            BacktrackingInputMultiplier                                 ___ OFFSET(get<T>, {0xF98, 40, 0, 0})
	SMember(FScalableFloat)                            VerticalMovementInputMultiplier                             ___ OFFSET(get<T>, {0xFC0, 40, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDronePawnOverrideComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortScoutDronePawnOverrideComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(UClass*)                                   DroneSpectateCameraMode                                     ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDronePawnOwnerOverrideComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UFortScoutDronePawnOwnerOverrideComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(TWeakObjectPtr<AFortScoutDrone*>)          ControlledDrone                                             ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/ScoutDroneRuntime.FortScoutDronePickupManager
/// Size: 0x0138 (0x0000A0 - 0x0001D8)
class UFortScoutDronePickupManager : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	SMember(FScoutDronePickupTargets)                  AttachedTargets                                             ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FName)                                     AttachPointSocketName                                       ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	SMember(FScoutDronePickupTargets)                  PreviouslyAttachedTargets                                   ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
	SMember(FVector)                                   ItemOffset                                                  ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	SMember(FVector)                                   DBNOPawnOffset                                              ___ OFFSET(get<T>, {0xF0, 24, 0, 0})
	DMember(float)                                     CurrentlyAppliedCameraOffset                                ___ OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FScoutDroneCapsuleSizeData)                MaxExtraCapsuleDimensions                                   ___ OFFSET(get<T>, {0x110, 80, 0, 0})
	SMember(FScalableFloat)                            MaxPickupSpread                                             ___ OFFSET(get<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            PickupTossSpeed                                             ___ OFFSET(get<T>, {0x188, 40, 0, 0})
	SMember(FGameplayTagContainer)                     ItemsPickupTags                                             ___ OFFSET(get<T>, {0x1B0, 32, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.FortScoutDroneDiveTransitionData
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortScoutDroneDiveTransitionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UCurveFloat*)                              Curve                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            TransitionDuration                                          ___ OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneDeployed
/// Size: 0x0008 (0x000000 - 0x000008)
class FOnFortScoutDroneDeployed : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(TWeakObjectPtr<AFortScoutDrone*>)          DeployedDrone                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneDismissed
/// Size: 0x0004 (0x000000 - 0x000004)
class FOnFortScoutDroneDismissed : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              DismissalReason                                             ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneMarkedEnemies
/// Size: 0x0018 (0x000000 - 0x000018)
class FOnFortScoutDroneMarkedEnemies : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              Source                                                      ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<AActor*>)                           MarkedActors                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.OnFortScoutDroneFinishedLongInteract
/// Size: 0x0001 (0x000000 - 0x000001)
class FOnFortScoutDroneFinishedLongInteract : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneDeferredDestructionData
/// Size: 0x0010 (0x000000 - 0x000010)
class FScoutDroneDeferredDestructionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     DeposessDelay                                               ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DestroyDelay                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FGameplayTag)                              DismissalReason                                             ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(float)                                     ServerDismissStartTime                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.ScoutDronePickupTargets
/// Size: 0x0018 (0x000000 - 0x000018)
class FScoutDronePickupTargets : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<AActor*>)                           Items                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(AFortPawn*)                                DBNOPawn                                                    ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneStatusData
/// Size: 0x0008 (0x000000 - 0x000008)
class FScoutDroneStatusData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(EFortScoutDroneTargetStatus)               Status                                                      ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     ServerTimeStatusChanged                                     ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneInputTriggerableEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FScoutDroneInputTriggerableEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     InputActionName                                             ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UInputAction*)                             InputAction                                                 ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FGameplayTag)                              GameplayEventToTrigger                                      ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/ScoutDroneRuntime.ScoutDroneCapsuleSizeData
/// Size: 0x0050 (0x000000 - 0x000050)
class FScoutDroneCapsuleSizeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            CapsuleHalfHeight                                           ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            CapsuleRadius                                               ___ OFFSET(get<T>, {0x28, 40, 0, 0})
};

/// Enum /Script/ScoutDroneRuntime.EFortScoutDroneTargetStatus
/// Size: 0x05
enum EFortScoutDroneTargetStatus : uint8_t
{
	EFortScoutDroneTargetStatus__None0                                               = 0,
	EFortScoutDroneTargetStatus__TooFar1                                             = 1,
	EFortScoutDroneTargetStatus__Pending2                                            = 2,
	EFortScoutDroneTargetStatus__Confirmed3                                          = 3,
	EFortScoutDroneTargetStatus__EFortScoutDroneTargetStatus_MAX4                    = 4
};

