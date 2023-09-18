/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TankRuntime.

/// Struct /Script/TankRuntime.TankWeaponAimingData
/// Size: 0x01C0 (0x000000 - 0x0001C0)
class FTankWeaponAimingData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	DMember(int32_t)                                   SeatIndex                                                   ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bAimRotationLerpWithEasing                                  ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	SMember(FScalableFloat)                            AimRotationLerpSpeed                                        ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FRuntimeFloatCurve)                        AimYawRotationEasingCurve                                   ___ OFFSET(get<T>, {0x30, 136, 0, 0})
	SMember(FRuntimeFloatCurve)                        AimPitchRotationEasingCurve                                 ___ OFFSET(get<T>, {0xB8, 136, 0, 0})
	CMember(TEnumAsByte<ETankAimingMode>)              AimingMode                                                  ___ OFFSET(get<T>, {0x140, 1, 0, 0})
	SMember(FScalableFloat)                            AimingCameraToMuzzleDistanceScalar                          ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            AimingWhileTargetingCameraToMuzzleDistanceScalar            ___ OFFSET(get<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            AimingPitchAdjust                                           ___ OFFSET(get<T>, {0x198, 40, 0, 0})
};

/// Struct /Script/TankRuntime.TankAnimAimingData
/// Size: 0x0060 (0x000000 - 0x000060)
class FTankAnimAimingData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/TankRuntime.ServerSocketTransformOverride
/// Size: 0x0038 (0x000000 - 0x000038)
class FServerSocketTransformOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     SocketName                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   PivotOffset                                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   OffsetFromPivot                                             ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/TankRuntime.TankAudioUpdateContext
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FTankAudioUpdateContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      bIsAwake                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     SpeedParamValue                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     LeftTrackPower                                              ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RightTrackPower                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     TurningParamValue                                           ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   CurrentGear                                                 ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(float)                                     AccelSpeedThreshold                                         ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     LastGearChangeTime                                          ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     AccelWaitTime                                               ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bTurningRight                                               ___ OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(bool)                                      bTurningLeft                                                ___ OFFSET(get<bool>, {0x25, 1, 0, 0})
	DMember(bool)                                      bPreviousTryMotion                                          ___ OFFSET(get<bool>, {0x26, 1, 0, 0})
	DMember(float)                                     LastForwardSpeed                                            ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     TimeUntilAccelOneShotFade                                   ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     DecelSpeedThreshold                                         ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     EngineIdleThreshold                                         ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector2D)                                 WeaponsMovementThreshold                                    ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FName)                                     CannonSocketName                                            ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	SMember(FName)                                     TurretSocketName                                            ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   SurfaceID                                                   ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	CMember(UAudioComponent*)                          DecelOneShot                                                ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UAudioComponent*)                          AccelOneShot                                                ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UAudioComponent*)                          TurningOneShot                                              ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               TracksLeftAudio                                             ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               TracksRightAudio                                            ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/TankRuntime.FortTankVehicleConfigs
/// Size: 0x0058 (0x000980 - 0x0009D8)
class UFortTankVehicleConfigs : public UFortTreadVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2520;

public:
	CMember(TArray<FTankWeaponAimingData>)             TankWeaponAimingData                                        ___ OFFSET(get<T>, {0x980, 16, 0, 0})
	SMember(FText)                                     SecondInteractText                                          ___ OFFSET(get<T>, {0x990, 24, 0, 0})
	CMember(TEnumAsByte<TInteractionType>)             SecondInteractType                                          ___ OFFSET(get<T>, {0x9A8, 1, 0, 0})
	SMember(FScalableFloat)                            SecondInteractDuration                                      ___ OFFSET(get<T>, {0x9B0, 40, 0, 0})
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
/// Size: 0x01A0 (0x001B20 - 0x001CC0)
class AFortTankVehicle : public AFortTreadVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7360;

public:
	SMember(FMulticastInlineDelegate)                  OnTankRepairedDelegate                                      ___ OFFSET(get<T>, {0x1B98, 16, 0, 0})
	SMember(FName)                                     BarrelSocketName                                            ___ OFFSET(get<T>, {0x1BA8, 4, 0, 0})
	CMember(UCapsuleComponent*)                        BarrelCollision                                             ___ OFFSET(get<T>, {0x1BB0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     UnderVehicleCollision                                       ___ OFFSET(get<T>, {0x1BB8, 8, 0, 0})
	CMember(TArray<FServerSocketTransformOverride>)    SocketOverrideArray                                         ___ OFFSET(get<T>, {0x1BC0, 16, 0, 0})
	CMember(TMap<FName, FTransform>)                   SocketTransformOverrideMap                                  ___ OFFSET(get<T>, {0x1BD0, 80, 0, 0})
	CMember(USkeletalMeshComponent*)                   CachedSkeletalMeshComponent                                 ___ OFFSET(get<T>, {0x1C20, 8, 0, 0})
	CMember(AFortVehicleAudioController*)              CachedVehicleAudioController                                ___ OFFSET(get<T>, {0x1C28, 8, 0, 0})
	CMember(EVisibilityBasedAnimTickOption)            DefaultServerVisibilityBasedAnimTickOption                  ___ OFFSET(get<T>, {0x1C30, 1, 0, 0})
	DMember(bool)                                      DefaultServerSkeletalMeshTickEnabled                        ___ OFFSET(get<bool>, {0x1C31, 1, 0, 0})
	SMember(FName)                                     YawPivotSocketName                                          ___ OFFSET(get<T>, {0x1C34, 4, 0, 0})
	SMember(FName)                                     PitchPivotSocketName                                        ___ OFFSET(get<T>, {0x1C38, 4, 0, 0})
	CMember(ULegacyCameraShake*)                       DriverCameraShakeInstance                                   ___ OFFSET(get<T>, {0x1C40, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       AcceleratingCameraShakeInstance                             ___ OFFSET(get<T>, {0x1C48, 8, 0, 0})
	CMember(UNiagaraComponent*)                        CachedNiagaraComponentRoadAndExhaust                        ___ OFFSET(get<T>, {0x1C58, 8, 0, 0})
	SMember(FString)                                   RoadAndExhaustNiagaraComponentName                          ___ OFFSET(get<T>, {0x1C60, 16, 0, 0})
	SMember(FName)                                     RoadAndExhaustPeelOutLeftName                               ___ OFFSET(get<T>, {0x1C70, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustPeelOutRightName                              ___ OFFSET(get<T>, {0x1C74, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustVehicleSpeedName                              ___ OFFSET(get<T>, {0x1C78, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustSlideDirectionName                            ___ OFFSET(get<T>, {0x1C7C, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustMinSpeedForDust                               ___ OFFSET(get<float>, {0x1C80, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustColorLerpName                             ___ OFFSET(get<T>, {0x1C84, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustColorLerpOffRoad                          ___ OFFSET(get<float>, {0x1C88, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustColorLerpOnRoad                           ___ OFFSET(get<float>, {0x1C8C, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustAlphaMultiplierName                       ___ OFFSET(get<T>, {0x1C90, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustAlphaMultiplierOffRoad                    ___ OFFSET(get<float>, {0x1C94, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustAlphaMultiplierOnRoad                     ___ OFFSET(get<float>, {0x1C98, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustFrontLeftName                             ___ OFFSET(get<T>, {0x1C9C, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustFrontRightName                            ___ OFFSET(get<T>, {0x1CA0, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustMiddleLeftName                            ___ OFFSET(get<T>, {0x1CA4, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustMiddleRightName                           ___ OFFSET(get<T>, {0x1CA8, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustRearLeftName                              ___ OFFSET(get<T>, {0x1CAC, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustRearRightName                             ___ OFFSET(get<T>, {0x1CB0, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustIsOnDirtName                                  ___ OFFSET(get<T>, {0x1CB4, 4, 0, 0})
};

/// Class /Script/TankRuntime.FortTankVehicleAnimInstance
/// Size: 0x0110 (0x0006D0 - 0x0007E0)
class UFortTankVehicleAnimInstance : public UFortTreadVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2016;

public:
	CMember(AFortTankVehicle*)                         TankVehicle                                                 ___ OFFSET(get<T>, {0x6C8, 8, 0, 0})
	SMember(FRotator)                                  CurrentAimRotation                                          ___ OFFSET(get<T>, {0x6D0, 24, 0, 0})
	SMember(FRotator)                                  CurrentTurretAimRotation                                    ___ OFFSET(get<T>, {0x6E8, 24, 0, 0})
	SMember(FRotator)                                  SmoothedTurretDeltaRotation                                 ___ OFFSET(get<T>, {0x700, 24, 0, 0})
	DMember(float)                                     InterpolationRate                                           ___ OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(bool)                                      bEngineOverheated                                           ___ OFFSET(get<bool>, {0x71C, 1, 0, 0})
	DMember(bool)                                      bHasPassenger                                               ___ OFFSET(get<bool>, {0x71D, 1, 0, 0})
	DMember(bool)                                      bIsFired                                                    ___ OFFSET(get<bool>, {0x71E, 1, 0, 0})
	DMember(bool)                                      bIsReady                                                    ___ OFFSET(get<bool>, {0x71F, 1, 0, 0})
	DMember(bool)                                      bDriverCoverOnCooldown                                      ___ OFFSET(get<bool>, {0x720, 1, 0, 0})
	DMember(float)                                     LeftTreadPower                                              ___ OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     RightTreadPower                                             ___ OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     TurretYawAlpha                                              ___ OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     TurretYawAlphaSmoothingRate                                 ___ OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     CannonYaw                                                   ___ OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     CannonPitch                                                 ___ OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     TurretYaw                                                   ___ OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     TurretPitch                                                 ___ OFFSET(get<float>, {0x740, 4, 0, 0})
	SMember(FLinearColor)                              MIDTreadPositionColor                                       ___ OFFSET(get<T>, {0x744, 16, 0, 0})
	DMember(float)                                     MIDTreadDamageLeft                                          ___ OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     MIDTreadDamageRight                                         ___ OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     MIDExhaustShakeSpeed                                        ___ OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     MIDExhaustShakeAmp                                          ___ OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     MIDEngineBoostGlow                                          ___ OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     MIDEngineHealthRatio                                        ___ OFFSET(get<float>, {0x768, 4, 0, 0})
	CMember(TMap<EVehicleSeats, FTankAnimAimingData>)  AimingData                                                  ___ OFFSET(get<T>, {0x770, 80, 0, 0})
	SMember(FRotator)                                  PreviousTurretAimRotation                                   ___ OFFSET(get<T>, {0x7C0, 24, 0, 0})
};

/// Class /Script/TankRuntime.FortTankVehicleAudioController
/// Size: 0x0400 (0x0002F0 - 0x0006F0)
class AFortTankVehicleAudioController : public AFortVehicleAudioController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	SMember(FFortAudioFloatParameter)                  SpeedParam                                                  ___ OFFSET(get<T>, {0x2F0, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  TurnPowerParam                                              ___ OFFSET(get<T>, {0x328, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  OutOfFuelParam                                              ___ OFFSET(get<T>, {0x360, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IdleParam                                                   ___ OFFSET(get<T>, {0x398, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  TurningParam                                                ___ OFFSET(get<T>, {0x3D0, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  ForwardParam                                                ___ OFFSET(get<T>, {0x408, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  ReverseParam                                                ___ OFFSET(get<T>, {0x440, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  SurfaceParam                                                ___ OFFSET(get<T>, {0x478, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IsInWaterParam                                              ___ OFFSET(get<T>, {0x4B0, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IsInAirParam                                                ___ OFFSET(get<T>, {0x4E8, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  BoostParam                                                  ___ OFFSET(get<T>, {0x520, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  CannonHorizontalMovementParam                               ___ OFFSET(get<T>, {0x558, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  CannonVerticalMovementParam                                 ___ OFFSET(get<T>, {0x590, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  TurretHorizontalMovementParam                               ___ OFFSET(get<T>, {0x5C8, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  TurretVerticalMovementParam                                 ___ OFFSET(get<T>, {0x600, 56, 0, 0})
	SMember(FTankAudioUpdateContext)                   Context                                                     ___ OFFSET(get<T>, {0x638, 184, 0, 0})
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

