
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: Water

/// Class /Script/MotorboatRuntime.FortMeatballVehicleAnimInstance
/// Size: 0x00E0 (0x000600 - 0x0006E0)
class UFortMeatballVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	CMember(AFortMeatballVehicle*)                     Meatball                                                    ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(float)                                     MeatballSpeed                                               ___ OFFSET(get<float>, {0x600, 4, 0, 0})
	DMember(float)                                     SteeringAngle                                               ___ OFFSET(get<float>, {0x604, 4, 0, 0})
	DMember(float)                                     BoostCharge                                                 ___ OFFSET(get<float>, {0x608, 4, 0, 0})
	SMember(FVector)                                   SeatOffset                                                  ___ OFFSET(get<T>, {0x610, 24, 0, 0})
	SMember(FRotator)                                  SeatRotation                                                ___ OFFSET(get<T>, {0x628, 24, 0, 0})
	SMember(FRotator)                                  CurrentDriveJiggle                                          ___ OFFSET(get<T>, {0x640, 24, 0, 0})
	SMember(FRotator)                                  SteeringRotator                                             ___ OFFSET(get<T>, {0x658, 24, 0, 0})
	SMember(FRotator)                                  SpeedGuageRotator                                           ___ OFFSET(get<T>, {0x670, 24, 0, 0})
	SMember(FRotator)                                  BoostPercentRotator                                         ___ OFFSET(get<T>, {0x688, 24, 0, 0})
	SMember(FRotator)                                  RandomJiggleRotatorMotorTop                                 ___ OFFSET(get<T>, {0x6A0, 24, 0, 0})
	SMember(FRotator)                                  RandomJiggleRotatorMotorBase                                ___ OFFSET(get<T>, {0x6B8, 24, 0, 0})
	DMember(bool)                                      bIsMovingForward                                            ___ OFFSET(get<bool>, {0x6D0, 1, 0, 0})
	DMember(bool)                                      bIsDrivingFast                                              ___ OFFSET(get<bool>, {0x6D1, 1, 0, 0})
	DMember(bool)                                      bIsBraking                                                  ___ OFFSET(get<bool>, {0x6D2, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 ___ OFFSET(get<bool>, {0x6D3, 1, 0, 0})
	DMember(bool)                                      bIsBoostReady                                               ___ OFFSET(get<bool>, {0x6D4, 1, 0, 0})
	DMember(bool)                                      bIsBoostStarting                                            ___ OFFSET(get<bool>, {0x6D5, 1, 0, 0})
	DMember(bool)                                      bIsBoostEnding                                              ___ OFFSET(get<bool>, {0x6D6, 1, 0, 0})
	DMember(bool)                                      bIsRocketReady                                              ___ OFFSET(get<bool>, {0x6D7, 1, 0, 0})
	DMember(bool)                                      bIsRocketOnCooldown                                         ___ OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	DMember(bool)                                      bIsSteeringLeft                                             ___ OFFSET(get<bool>, {0x6D9, 1, 0, 0})
	DMember(bool)                                      bIsSteeringRight                                            ___ OFFSET(get<bool>, {0x6DA, 1, 0, 0})
};

/// Class /Script/MotorboatRuntime.FortMeatballPontoonsComponent
/// Size: 0x0000 (0x0002C0 - 0x0002C0)
class UFortMeatballPontoonsComponent : public UFortVehiclePontoonsComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
};

/// Class /Script/MotorboatRuntime.FortMeatballVehicle
/// Size: 0x02F0 (0x001B80 - 0x001E70)
class AFortMeatballVehicle : public AFortAthenaSKVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7792;

public:
	SMember(FFortRechargingActionTimer)                BoostAction                                                 ___ OFFSET(get<T>, {0x1B78, 216, 0, 0})
	DMember(float)                                     FxNormalizationMaxSpeedKmh                                  ___ OFFSET(get<float>, {0x1C50, 4, 0, 0})
	CMember(UFortVehicleAudioVoice*)                   CacheAudioEngineUp                                          ___ OFFSET(get<T>, {0x1C58, 8, 0, 0})
	CMember(UFortVehicleAudioVoice*)                   CacheAudioEngineDown                                        ___ OFFSET(get<T>, {0x1C60, 8, 0, 0})
	CMember(UFortVehicleAudioVoice*)                   CacheAudioWakeTurn                                          ___ OFFSET(get<T>, {0x1C68, 8, 0, 0})
	CMember(UFortVehicleAudioVoice*)                   CacheAudioWakeSpeed                                         ___ OFFSET(get<T>, {0x1C70, 8, 0, 0})
	CMember(UFortVehicleAudioVoice*)                   CacheAudioScrape                                            ___ OFFSET(get<T>, {0x1C78, 8, 0, 0})
	CMember(UFortVehicleAudioVoice*)                   CacheAudioEngineOutOfFuel                                   ___ OFFSET(get<T>, {0x1C80, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 BoostMID                                                    ___ OFFSET(get<T>, {0x1C88, 8, 0, 0})
	CMember(UNiagaraComponent*)                        CachedGroundFXComponent                                     ___ OFFSET(get<T>, {0x1C90, 8, 0, 0})
	CMember(APlayerController*)                        DrivingPlayerController                                     ___ OFFSET(get<T>, {0x1C98, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       LandCameraShake                                             ___ OFFSET(get<T>, {0x1CA0, 8, 0, 0})
	CMember(UClass*)                                   LandCameraShakeClass                                        ___ OFFSET(get<T>, {0x1CA8, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       DriverCameraShake                                           ___ OFFSET(get<T>, {0x1CB0, 8, 0, 0})
	CMember(UClass*)                                   DriverCameraShakeClass                                      ___ OFFSET(get<T>, {0x1CB8, 8, 0, 0})
	DMember(float)                                     LandRumbleIntensity                                         ___ OFFSET(get<float>, {0x1CC0, 4, 0, 0})
	DMember(uint64_t)                                  LandForceFeedbackHandle                                     ___ OFFSET(get<uint64_t>, {0x1CC8, 8, 0, 0})
	DMember(float)                                     TurnRumbleIntensity                                         ___ OFFSET(get<float>, {0x1CD0, 4, 0, 0})
	DMember(uint64_t)                                  TurnForceFeedbackHandle                                     ___ OFFSET(get<uint64_t>, {0x1CD8, 8, 0, 0})
	DMember(float)                                     CurrentSnowAltitude                                         ___ OFFSET(get<float>, {0x1CE0, 4, 0, 0})
	DMember(bool)                                      bHasSnow                                                    ___ OFFSET(get<bool>, {0x1CE4, 1, 0, 0})
	DMember(bool)                                      bLargeRumble                                                ___ OFFSET(get<bool>, {0x1CE5, 1, 0, 0})
	DMember(bool)                                      bTurnRumbleActive                                           ___ OFFSET(get<bool>, {0x1CE6, 1, 0, 0})
	DMember(bool)                                      bWaterDropsOnScreen                                         ___ OFFSET(get<bool>, {0x1CE7, 1, 0, 0})
	SMember(FGameplayTag)                              GCVehicleScreenDrips                                        ___ OFFSET(get<T>, {0x1CE8, 4, 0, 0})
	SMember(FGameplayCueParameters)                    GCParamsEmpty                                               ___ OFFSET(get<T>, {0x1CF0, 208, 0, 0})
	CMember(UClass*)                                   BoostingCamera                                              ___ OFFSET(get<T>, {0x1DC0, 8, 0, 0})
	CMember(UClass*)                                   VehicleCameraNoWeaponOverride                               ___ OFFSET(get<T>, {0x1DC8, 8, 0, 0})
	CMember(UFortMeatballVehicleConfigs*)              FortMeatballVehicleConfigs                                  ___ OFFSET(get<T>, {0x1DE0, 8, 0, 0})
	DMember(int32_t)                                   WaterLineStartPontoonIndex                                  ___ OFFSET(get<int32_t>, {0x1DE8, 4, 0, 0})
	DMember(int32_t)                                   WaterLineEndPontoonIndex                                    ___ OFFSET(get<int32_t>, {0x1DEC, 4, 0, 0})
	DMember(bool)                                      bBoostFailed                                                ___ OFFSET(get<bool>, {0x1E30, 1, 0, 0})
};

/// Class /Script/MotorboatRuntime.FortMeatballVehicleConfigs
/// Size: 0x00D0 (0x0008B0 - 0x000980)
class UFortMeatballVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2432;

public:
	DMember(float)                                     WaterSteerRollFactor                                        ___ OFFSET(get<float>, {0x8B0, 4, 0, 0})
	DMember(float)                                     InnerTurnPontoonOffsetMultiplier                            ___ OFFSET(get<float>, {0x8B4, 4, 0, 0})
	DMember(float)                                     OuterTurnPontoonOffsetMultiplier                            ___ OFFSET(get<float>, {0x8B8, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedToBankOnTurn                                 ___ OFFSET(get<float>, {0x8BC, 4, 0, 0})
	DMember(float)                                     BoostMinPushForce                                           ___ OFFSET(get<float>, {0x8C0, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedForceMultiplier                                ___ OFFSET(get<float>, {0x8C4, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedMultiplier                                     ___ OFFSET(get<float>, {0x8C8, 4, 0, 0})
	DMember(float)                                     MaxPontoonOffsetPerSecond                                   ___ OFFSET(get<float>, {0x8CC, 4, 0, 0})
	DMember(float)                                     LandTopSpeedMultiplier                                      ___ OFFSET(get<float>, {0x8D0, 4, 0, 0})
	DMember(float)                                     LandPushForceMultiplier                                     ___ OFFSET(get<float>, {0x8D4, 4, 0, 0})
	DMember(int32_t)                                   MinPushPontoonsForWaterDriving                              ___ OFFSET(get<int32_t>, {0x8D8, 4, 0, 0})
	DMember(float)                                     MaxWaterPitchAngle                                          ___ OFFSET(get<float>, {0x8DC, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedToPitch                                      ___ OFFSET(get<float>, {0x8E0, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedForMaxPitch                                  ___ OFFSET(get<float>, {0x8E4, 4, 0, 0})
	DMember(float)                                     MaxForwardSpeedForMaxPitch                                  ___ OFFSET(get<float>, {0x8E8, 4, 0, 0})
	DMember(float)                                     MaxFowrardSpeedPitchFactor                                  ___ OFFSET(get<float>, {0x8EC, 4, 0, 0})
	DMember(float)                                     BoostMaxForwardSpeedPitchFactor                             ___ OFFSET(get<float>, {0x8F0, 4, 0, 0})
	DMember(float)                                     FrontLateralFrictionFactor                                  ___ OFFSET(get<float>, {0x8F4, 4, 0, 0})
	DMember(float)                                     RearLateralFrictionFactor                                   ___ OFFSET(get<float>, {0x8F8, 4, 0, 0})
	DMember(float)                                     LandFrontLateralFrictionFactor                              ___ OFFSET(get<float>, {0x8FC, 4, 0, 0})
	DMember(float)                                     LandRearLateralFrictionFactor                               ___ OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(float)                                     LateralFrictionModStartSpeedKmh                             ___ OFFSET(get<float>, {0x904, 4, 0, 0})
	DMember(float)                                     RearLateralFrictionModPerSpeedKmh                           ___ OFFSET(get<float>, {0x908, 4, 0, 0})
	DMember(float)                                     FrontLateralFrictionModPerSpeedKmh                          ___ OFFSET(get<float>, {0x90C, 4, 0, 0})
	DMember(float)                                     SeatOffsetScaleX                                            ___ OFFSET(get<float>, {0x910, 4, 0, 0})
	DMember(float)                                     SeatOffsetScaleY                                            ___ OFFSET(get<float>, {0x914, 4, 0, 0})
	DMember(float)                                     SeatYawAngleMax                                             ___ OFFSET(get<float>, {0x918, 4, 0, 0})
	DMember(float)                                     SeatPitchAngleMax                                           ___ OFFSET(get<float>, {0x91C, 4, 0, 0})
	DMember(float)                                     BoostSteeringMultiplier                                     ___ OFFSET(get<float>, {0x920, 4, 0, 0})
	DMember(float)                                     BoostSteeringMultiplierRampTime                             ___ OFFSET(get<float>, {0x924, 4, 0, 0})
	DMember(float)                                     LandSteeringMultiplier                                      ___ OFFSET(get<float>, {0x928, 4, 0, 0})
	DMember(float)                                     LandMinSpeedSteeringAngle                                   ___ OFFSET(get<float>, {0x92C, 4, 0, 0})
	DMember(float)                                     LandMaxSpeedSteeringAngle                                   ___ OFFSET(get<float>, {0x930, 4, 0, 0})
	DMember(float)                                     DragCoefficientNoAccel                                      ___ OFFSET(get<float>, {0x934, 4, 0, 0})
	DMember(float)                                     DragCoefficient2NoAccel                                     ___ OFFSET(get<float>, {0x938, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierRoad                               ___ OFFSET(get<float>, {0x93C, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierGrass                              ___ OFFSET(get<float>, {0x940, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierDirt                               ___ OFFSET(get<float>, {0x944, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierSnow                               ___ OFFSET(get<float>, {0x948, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierIce                                ___ OFFSET(get<float>, {0x94C, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierMud                                ___ OFFSET(get<float>, {0x950, 4, 0, 0})
	DMember(float)                                     MinSteerAlphaForWaterFriction                               ___ OFFSET(get<float>, {0x954, 4, 0, 0})
	DMember(float)                                     TurnInPlaceYawStiff                                         ___ OFFSET(get<float>, {0x958, 4, 0, 0})
	DMember(float)                                     TurnInPlaceYawDamp                                          ___ OFFSET(get<float>, {0x95C, 4, 0, 0})
	DMember(float)                                     MaxSteerRollAngle                                           ___ OFFSET(get<float>, {0x960, 4, 0, 0})
	DMember(float)                                     MaxTurnInPlaceYawAngle                                      ___ OFFSET(get<float>, {0x964, 4, 0, 0})
	DMember(float)                                     UprightSpringSteerStrength                                  ___ OFFSET(get<float>, {0x968, 4, 0, 0})
	DMember(float)                                     TurnInPlaceYawStrength                                      ___ OFFSET(get<float>, {0x96C, 4, 0, 0})
	DMember(float)                                     MaxSpeedForTurnInPlaceKmH                                   ___ OFFSET(get<float>, {0x970, 4, 0, 0})
	DMember(float)                                     BlendOutExtraSpeedTurnInPlaceKmH                            ___ OFFSET(get<float>, {0x974, 4, 0, 0})
	DMember(float)                                     MaxPitchForCameraInPlaceSteer                               ___ OFFSET(get<float>, {0x978, 4, 0, 0})
	DMember(float)                                     SpringLengthMutliplierWater                                 ___ OFFSET(get<float>, {0x97C, 4, 0, 0})
};

/// Struct /Script/MotorboatRuntime.MeatballInPersistent
/// Size: 0x0028 (0x000188 - 0x0001B0)
class FMeatballInPersistent : public FFortVehicleInPersistent
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(UFortMeatballVehicleConfigs*)              FortMeatballVehicleConfigs                                  ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	DMember(float)                                     PushForceCurrentMultiplier                                  ___ OFFSET(get<float>, {0x1A8, 4, 0, 0})
};

