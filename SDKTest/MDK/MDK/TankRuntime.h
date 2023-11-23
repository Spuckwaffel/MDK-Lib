
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: VehicleAudioRuntime

/// Class /Script/TankRuntime.FortTankVehicleConfigs
/// Size: 0x0058 (0x000980 - 0x0009D8)
class UFortTankVehicleConfigs : public UFortTreadVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2520;

public:
	CMember(TArray<FTankWeaponAimingData>)             TankWeaponAimingData                                        OFFSET(get<T>, {0x980, 16, 0, 0})
	SMember(FText)                                     SecondInteractText                                          OFFSET(getStruct<T>, {0x990, 24, 0, 0})
	CMember(TEnumAsByte<TInteractionType>)             SecondInteractType                                          OFFSET(get<T>, {0x9A8, 1, 0, 0})
	SMember(FScalableFloat)                            SecondInteractDuration                                      OFFSET(getStruct<T>, {0x9B0, 40, 0, 0})
};

/// Class /Script/TankRuntime.FortTankAnimFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortTankAnimFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TankRuntime.FortTankVehicle
/// Size: 0x01A0 (0x001B60 - 0x001D00)
class AFortTankVehicle : public AFortTreadVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7424;

public:
	SMember(FMulticastInlineDelegate)                  OnTankRepairedDelegate                                      OFFSET(getStruct<T>, {0x1BD8, 16, 0, 0})
	SMember(FName)                                     BarrelSocketName                                            OFFSET(getStruct<T>, {0x1BE8, 4, 0, 0})
	CMember(UCapsuleComponent*)                        BarrelCollision                                             OFFSET(get<T>, {0x1BF0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     UnderVehicleCollision                                       OFFSET(get<T>, {0x1BF8, 8, 0, 0})
	CMember(TArray<FServerSocketTransformOverride>)    SocketOverrideArray                                         OFFSET(get<T>, {0x1C00, 16, 0, 0})
	CMember(TMap<FName, FTransform>)                   SocketTransformOverrideMap                                  OFFSET(get<T>, {0x1C10, 80, 0, 0})
	CMember(USkeletalMeshComponent*)                   CachedSkeletalMeshComponent                                 OFFSET(get<T>, {0x1C60, 8, 0, 0})
	CMember(AFortVehicleAudioController*)              CachedVehicleAudioController                                OFFSET(get<T>, {0x1C68, 8, 0, 0})
	CMember(EVisibilityBasedAnimTickOption)            DefaultServerVisibilityBasedAnimTickOption                  OFFSET(get<T>, {0x1C70, 1, 0, 0})
	DMember(bool)                                      DefaultServerSkeletalMeshTickEnabled                        OFFSET(get<bool>, {0x1C71, 1, 0, 0})
	SMember(FName)                                     YawPivotSocketName                                          OFFSET(getStruct<T>, {0x1C74, 4, 0, 0})
	SMember(FName)                                     PitchPivotSocketName                                        OFFSET(getStruct<T>, {0x1C78, 4, 0, 0})
	CMember(ULegacyCameraShake*)                       DriverCameraShakeInstance                                   OFFSET(get<T>, {0x1C80, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       AcceleratingCameraShakeInstance                             OFFSET(get<T>, {0x1C88, 8, 0, 0})
	CMember(UNiagaraComponent*)                        CachedNiagaraComponentRoadAndExhaust                        OFFSET(get<T>, {0x1C98, 8, 0, 0})
	SMember(FString)                                   RoadAndExhaustNiagaraComponentName                          OFFSET(getStruct<T>, {0x1CA0, 16, 0, 0})
	SMember(FName)                                     RoadAndExhaustPeelOutLeftName                               OFFSET(getStruct<T>, {0x1CB0, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustPeelOutRightName                              OFFSET(getStruct<T>, {0x1CB4, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustVehicleSpeedName                              OFFSET(getStruct<T>, {0x1CB8, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustSlideDirectionName                            OFFSET(getStruct<T>, {0x1CBC, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustMinSpeedForDust                               OFFSET(get<float>, {0x1CC0, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustColorLerpName                             OFFSET(getStruct<T>, {0x1CC4, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustColorLerpOffRoad                          OFFSET(get<float>, {0x1CC8, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustColorLerpOnRoad                           OFFSET(get<float>, {0x1CCC, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustAlphaMultiplierName                       OFFSET(getStruct<T>, {0x1CD0, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustAlphaMultiplierOffRoad                    OFFSET(get<float>, {0x1CD4, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustAlphaMultiplierOnRoad                     OFFSET(get<float>, {0x1CD8, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustFrontLeftName                             OFFSET(getStruct<T>, {0x1CDC, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustFrontRightName                            OFFSET(getStruct<T>, {0x1CE0, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustMiddleLeftName                            OFFSET(getStruct<T>, {0x1CE4, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustMiddleRightName                           OFFSET(getStruct<T>, {0x1CE8, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustRearLeftName                              OFFSET(getStruct<T>, {0x1CEC, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustRearRightName                             OFFSET(getStruct<T>, {0x1CF0, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustIsOnDirtName                                  OFFSET(getStruct<T>, {0x1CF4, 4, 0, 0})
};

/// Class /Script/TankRuntime.FortTankVehicleAnimInstance
/// Size: 0x0110 (0x0006D0 - 0x0007E0)
class UFortTankVehicleAnimInstance : public UFortTreadVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2016;

public:
	CMember(AFortTankVehicle*)                         TankVehicle                                                 OFFSET(get<T>, {0x6C8, 8, 0, 0})
	SMember(FRotator)                                  CurrentAimRotation                                          OFFSET(getStruct<T>, {0x6D0, 24, 0, 0})
	SMember(FRotator)                                  CurrentTurretAimRotation                                    OFFSET(getStruct<T>, {0x6E8, 24, 0, 0})
	SMember(FRotator)                                  SmoothedTurretDeltaRotation                                 OFFSET(getStruct<T>, {0x700, 24, 0, 0})
	DMember(float)                                     InterpolationRate                                           OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(bool)                                      bEngineOverheated                                           OFFSET(get<bool>, {0x71C, 1, 0, 0})
	DMember(bool)                                      bHasPassenger                                               OFFSET(get<bool>, {0x71D, 1, 0, 0})
	DMember(bool)                                      bIsFired                                                    OFFSET(get<bool>, {0x71E, 1, 0, 0})
	DMember(bool)                                      bIsReady                                                    OFFSET(get<bool>, {0x71F, 1, 0, 0})
	DMember(bool)                                      bDriverCoverOnCooldown                                      OFFSET(get<bool>, {0x720, 1, 0, 0})
	DMember(float)                                     LeftTreadPower                                              OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     RightTreadPower                                             OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     TurretYawAlpha                                              OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     TurretYawAlphaSmoothingRate                                 OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     CannonYaw                                                   OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     CannonPitch                                                 OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     TurretYaw                                                   OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     TurretPitch                                                 OFFSET(get<float>, {0x740, 4, 0, 0})
	SMember(FLinearColor)                              MIDTreadPositionColor                                       OFFSET(getStruct<T>, {0x744, 16, 0, 0})
	DMember(float)                                     MIDTreadDamageLeft                                          OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     MIDTreadDamageRight                                         OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     MIDExhaustShakeSpeed                                        OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     MIDExhaustShakeAmp                                          OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     MIDEngineBoostGlow                                          OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     MIDEngineHealthRatio                                        OFFSET(get<float>, {0x768, 4, 0, 0})
	CMember(TMap<EVehicleSeats, FTankAnimAimingData>)  AimingData                                                  OFFSET(get<T>, {0x770, 80, 0, 0})
	SMember(FRotator)                                  PreviousTurretAimRotation                                   OFFSET(getStruct<T>, {0x7C0, 24, 0, 0})


	/// Functions
	// Function /Script/TankRuntime.FortTankVehicleAnimInstance.UpdateMIDEngineProperties
	// void UpdateMIDEngineProperties(float DeltaSeconds, float EngineHealthRatio);                                             // [0xa1c19e0] Final|Native|Private|BlueprintCallable 
};

/// Class /Script/TankRuntime.FortTankVehicleAudioController
/// Size: 0x0400 (0x000300 - 0x000700)
class AFortTankVehicleAudioController : public AFortVehicleAudioController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	SMember(FFortAudioFloatParameter)                  SpeedParam                                                  OFFSET(getStruct<T>, {0x300, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  TurnPowerParam                                              OFFSET(getStruct<T>, {0x338, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  OutOfFuelParam                                              OFFSET(getStruct<T>, {0x370, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IdleParam                                                   OFFSET(getStruct<T>, {0x3A8, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  TurningParam                                                OFFSET(getStruct<T>, {0x3E0, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  ForwardParam                                                OFFSET(getStruct<T>, {0x418, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  ReverseParam                                                OFFSET(getStruct<T>, {0x450, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  SurfaceParam                                                OFFSET(getStruct<T>, {0x488, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IsInWaterParam                                              OFFSET(getStruct<T>, {0x4C0, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IsInAirParam                                                OFFSET(getStruct<T>, {0x4F8, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  BoostParam                                                  OFFSET(getStruct<T>, {0x530, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  CannonHorizontalMovementParam                               OFFSET(getStruct<T>, {0x568, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  CannonVerticalMovementParam                                 OFFSET(getStruct<T>, {0x5A0, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  TurretHorizontalMovementParam                               OFFSET(getStruct<T>, {0x5D8, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  TurretVerticalMovementParam                                 OFFSET(getStruct<T>, {0x610, 56, 0, 0})
	SMember(FTankAudioUpdateContext)                   Context                                                     OFFSET(getStruct<T>, {0x648, 184, 0, 0})


	/// Functions
	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayTurningOneShot
	// void PlayTurningOneShot();                                                                                               // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayDecelOneShot
	// void PlayDecelOneShot();                                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/TankRuntime.FortTankVehicleAudioController.PlayAccelOneShot
	// void PlayAccelOneShot();                                                                                                 // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/TankRuntime.FortTankVehicleAudioController.GetTankVehicleActor
	// AFortTankVehicle* GetTankVehicleActor();                                                                                 // [0xa1c199c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/TankRuntime.TankWeaponAimingData
/// Size: 0x01C0 (0x000000 - 0x0001C0)
class FTankWeaponAimingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	DMember(int32_t)                                   SeatIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAimRotationLerpWithEasing                                  OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FScalableFloat)                            AimRotationLerpSpeed                                        OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FRuntimeFloatCurve)                        AimYawRotationEasingCurve                                   OFFSET(getStruct<T>, {0x30, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        AimPitchRotationEasingCurve                                 OFFSET(getStruct<T>, {0xB8, 136, 0, 0})
	CMember(TEnumAsByte<ETankAimingMode>)              AimingMode                                                  OFFSET(get<T>, {0x140, 1, 0, 0})
	SMember(FScalableFloat)                            AimingCameraToMuzzleDistanceScalar                          OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            AimingWhileTargetingCameraToMuzzleDistanceScalar            OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            AimingPitchAdjust                                           OFFSET(getStruct<T>, {0x198, 40, 0, 0})
};

/// Struct /Script/TankRuntime.TankAnimAimingData
/// Size: 0x0060 (0x000000 - 0x000060)
class FTankAnimAimingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/TankRuntime.ServerSocketTransformOverride
/// Size: 0x0038 (0x000000 - 0x000038)
class FServerSocketTransformOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   PivotOffset                                                 OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   OffsetFromPivot                                             OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/TankRuntime.TankAudioUpdateContext
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FTankAudioUpdateContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bIsAwake                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     SpeedParamValue                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LeftTrackPower                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RightTrackPower                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     TurningParamValue                                           OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   CurrentGear                                                 OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     AccelSpeedThreshold                                         OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     LastGearChangeTime                                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     AccelWaitTime                                               OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bTurningRight                                               OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      bTurningLeft                                                OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(bool)                                      bPreviousTryMotion                                          OFFSET(get<bool>, {0x26, 1, 0, 0})
	DMember(float)                                     LastForwardSpeed                                            OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     TimeUntilAccelOneShotFade                                   OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     DecelSpeedThreshold                                         OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     EngineIdleThreshold                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector2D)                                 WeaponsMovementThreshold                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FName)                                     CannonSocketName                                            OFFSET(getStruct<T>, {0x48, 4, 0, 0})
	SMember(FName)                                     TurretSocketName                                            OFFSET(getStruct<T>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   SurfaceID                                                   OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	CMember(UAudioComponent*)                          DecelOneShot                                                OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UAudioComponent*)                          AccelOneShot                                                OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UAudioComponent*)                          TurningOneShot                                              OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               TracksLeftAudio                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               TracksRightAudio                                            OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Enum /Script/TankRuntime.ETankAimingMode
/// Size: 0x04
enum ETankAimingMode : uint8_t
{
	CameraRotationNoTrace0                                                           = 0,
	CameraTraceFromPivotSocket1                                                      = 1,
	CameraTraceFromDistanceScalar2                                                   = 2,
	ETankAimingMode_MAX3                                                             = 3
};

