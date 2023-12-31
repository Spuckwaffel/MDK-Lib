
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
	CMember(AFortMeatballVehicle*)                     Meatball                                                    OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(float)                                     MeatballSpeed                                               OFFSET(get<float>, {0x600, 4, 0, 0})
	DMember(float)                                     SteeringAngle                                               OFFSET(get<float>, {0x604, 4, 0, 0})
	DMember(float)                                     BoostCharge                                                 OFFSET(get<float>, {0x608, 4, 0, 0})
	SMember(FVector)                                   SeatOffset                                                  OFFSET(getStruct<T>, {0x610, 24, 0, 0})
	SMember(FRotator)                                  SeatRotation                                                OFFSET(getStruct<T>, {0x628, 24, 0, 0})
	SMember(FRotator)                                  CurrentDriveJiggle                                          OFFSET(getStruct<T>, {0x640, 24, 0, 0})
	SMember(FRotator)                                  SteeringRotator                                             OFFSET(getStruct<T>, {0x658, 24, 0, 0})
	SMember(FRotator)                                  SpeedGuageRotator                                           OFFSET(getStruct<T>, {0x670, 24, 0, 0})
	SMember(FRotator)                                  BoostPercentRotator                                         OFFSET(getStruct<T>, {0x688, 24, 0, 0})
	SMember(FRotator)                                  RandomJiggleRotatorMotorTop                                 OFFSET(getStruct<T>, {0x6A0, 24, 0, 0})
	SMember(FRotator)                                  RandomJiggleRotatorMotorBase                                OFFSET(getStruct<T>, {0x6B8, 24, 0, 0})
	DMember(bool)                                      bIsMovingForward                                            OFFSET(get<bool>, {0x6D0, 1, 0, 0})
	DMember(bool)                                      bIsDrivingFast                                              OFFSET(get<bool>, {0x6D1, 1, 0, 0})
	DMember(bool)                                      bIsBraking                                                  OFFSET(get<bool>, {0x6D2, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x6D3, 1, 0, 0})
	DMember(bool)                                      bIsBoostReady                                               OFFSET(get<bool>, {0x6D4, 1, 0, 0})
	DMember(bool)                                      bIsBoostStarting                                            OFFSET(get<bool>, {0x6D5, 1, 0, 0})
	DMember(bool)                                      bIsBoostEnding                                              OFFSET(get<bool>, {0x6D6, 1, 0, 0})
	DMember(bool)                                      bIsRocketReady                                              OFFSET(get<bool>, {0x6D7, 1, 0, 0})
	DMember(bool)                                      bIsRocketOnCooldown                                         OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	DMember(bool)                                      bIsSteeringLeft                                             OFFSET(get<bool>, {0x6D9, 1, 0, 0})
	DMember(bool)                                      bIsSteeringRight                                            OFFSET(get<bool>, {0x6DA, 1, 0, 0})
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
/// Size: 0x02F0 (0x001BC0 - 0x001EB0)
class AFortMeatballVehicle : public AFortAthenaSKVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7856;

public:
	SMember(FFortRechargingActionTimer)                BoostAction                                                 OFFSET(getStruct<T>, {0x1BB8, 216, 0, 0})
	DMember(float)                                     FxNormalizationMaxSpeedKmh                                  OFFSET(get<float>, {0x1C90, 4, 0, 0})
	CMember(UFortVehicleAudioVoice*)                   CacheAudioEngineUp                                          OFFSET(get<T>, {0x1C98, 8, 0, 0})
	CMember(UFortVehicleAudioVoice*)                   CacheAudioEngineDown                                        OFFSET(get<T>, {0x1CA0, 8, 0, 0})
	CMember(UFortVehicleAudioVoice*)                   CacheAudioWakeTurn                                          OFFSET(get<T>, {0x1CA8, 8, 0, 0})
	CMember(UFortVehicleAudioVoice*)                   CacheAudioWakeSpeed                                         OFFSET(get<T>, {0x1CB0, 8, 0, 0})
	CMember(UFortVehicleAudioVoice*)                   CacheAudioScrape                                            OFFSET(get<T>, {0x1CB8, 8, 0, 0})
	CMember(UFortVehicleAudioVoice*)                   CacheAudioEngineOutOfFuel                                   OFFSET(get<T>, {0x1CC0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 BoostMID                                                    OFFSET(get<T>, {0x1CC8, 8, 0, 0})
	CMember(UNiagaraComponent*)                        CachedGroundFXComponent                                     OFFSET(get<T>, {0x1CD0, 8, 0, 0})
	CMember(APlayerController*)                        DrivingPlayerController                                     OFFSET(get<T>, {0x1CD8, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       LandCameraShake                                             OFFSET(get<T>, {0x1CE0, 8, 0, 0})
	CMember(UClass*)                                   LandCameraShakeClass                                        OFFSET(get<T>, {0x1CE8, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       DriverCameraShake                                           OFFSET(get<T>, {0x1CF0, 8, 0, 0})
	CMember(UClass*)                                   DriverCameraShakeClass                                      OFFSET(get<T>, {0x1CF8, 8, 0, 0})
	DMember(float)                                     LandRumbleIntensity                                         OFFSET(get<float>, {0x1D00, 4, 0, 0})
	DMember(uint64_t)                                  LandForceFeedbackHandle                                     OFFSET(get<uint64_t>, {0x1D08, 8, 0, 0})
	DMember(float)                                     TurnRumbleIntensity                                         OFFSET(get<float>, {0x1D10, 4, 0, 0})
	DMember(uint64_t)                                  TurnForceFeedbackHandle                                     OFFSET(get<uint64_t>, {0x1D18, 8, 0, 0})
	DMember(float)                                     CurrentSnowAltitude                                         OFFSET(get<float>, {0x1D20, 4, 0, 0})
	DMember(bool)                                      bHasSnow                                                    OFFSET(get<bool>, {0x1D24, 1, 0, 0})
	DMember(bool)                                      bLargeRumble                                                OFFSET(get<bool>, {0x1D25, 1, 0, 0})
	DMember(bool)                                      bTurnRumbleActive                                           OFFSET(get<bool>, {0x1D26, 1, 0, 0})
	DMember(bool)                                      bWaterDropsOnScreen                                         OFFSET(get<bool>, {0x1D27, 1, 0, 0})
	SMember(FGameplayTag)                              GCVehicleScreenDrips                                        OFFSET(getStruct<T>, {0x1D28, 4, 0, 0})
	SMember(FGameplayCueParameters)                    GCParamsEmpty                                               OFFSET(getStruct<T>, {0x1D30, 208, 0, 0})
	CMember(UClass*)                                   BoostingCamera                                              OFFSET(get<T>, {0x1E00, 8, 0, 0})
	CMember(UClass*)                                   VehicleCameraNoWeaponOverride                               OFFSET(get<T>, {0x1E08, 8, 0, 0})
	CMember(UFortMeatballVehicleConfigs*)              FortMeatballVehicleConfigs                                  OFFSET(get<T>, {0x1E20, 8, 0, 0})
	DMember(int32_t)                                   WaterLineStartPontoonIndex                                  OFFSET(get<int32_t>, {0x1E28, 4, 0, 0})
	DMember(int32_t)                                   WaterLineEndPontoonIndex                                    OFFSET(get<int32_t>, {0x1E2C, 4, 0, 0})
	DMember(bool)                                      bBoostFailed                                                OFFSET(get<bool>, {0x1E70, 1, 0, 0})


	/// Functions
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.UpdateSnowAndDirtParams
	// void UpdateSnowAndDirtParams(float NormalizedForwardSpeed);                                                              // [0x9f43c54] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.StopTurnRumble
	// void StopTurnRumble();                                                                                                   // [0x9f43c40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.StopLandRumble
	// void StopLandRumble();                                                                                                   // [0x9f43c2c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.StopDriverCameraShake
	// void StopDriverCameraShake();                                                                                            // [0x9f43c18] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.SmashedThroughBuildingPiece
	// void SmashedThroughBuildingPiece(FVector& ImpactPoint, FVector& ImpactNormal, ABuildingActor* BuildingHitActor);         // [0x101681c] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.ShowCooldownCue
	// void ShowCooldownCue(AFortPlayerPawn* Pawn, float duration);                                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.OnBoostStarted
	// void OnBoostStarted();                                                                                                   // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.OnBoostReady
	// void OnBoostReady();                                                                                                     // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.OnBoostFinished
	// void OnBoostFinished();                                                                                                  // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.OnBoostFailed
	// void OnBoostFailed();                                                                                                    // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.LandShakeEnd
	// void LandShakeEnd();                                                                                                     // [0x9f43c04] Final|Native|Protected|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.GetSeatRotation
	// FQuat GetSeatRotation();                                                                                                 // [0x9f43bdc] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.GetSeatOffset
	// FVector GetSeatOffset();                                                                                                 // [0x9f43bb4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.GetBoostCharge
	// float GetBoostCharge();                                                                                                  // [0x9f43b8c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.CacheGroundFXComponent
	// void CacheGroundFXComponent(UNiagaraComponent* InGroundFXComponent);                                                     // [0x9f43b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotorboatRuntime.FortMeatballVehicle.CacheAudioPointers
	// void CacheAudioPointers(UFortVehicleAudioVoice* InAudioEngineUp, UFortVehicleAudioVoice* InAudioEngineDown, UFortVehicleAudioVoice* InAudioWakeTurn, UFortVehicleAudioVoice* InAudioWakeSpeed, UFortVehicleAudioVoice* InAudioScrape, UFortVehicleAudioVoice* InAudioEngineOutOfFuel); // [0x9f43884] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MotorboatRuntime.FortMeatballVehicleConfigs
/// Size: 0x00D0 (0x0008B0 - 0x000980)
class UFortMeatballVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2432;

public:
	DMember(float)                                     WaterSteerRollFactor                                        OFFSET(get<float>, {0x8B0, 4, 0, 0})
	DMember(float)                                     InnerTurnPontoonOffsetMultiplier                            OFFSET(get<float>, {0x8B4, 4, 0, 0})
	DMember(float)                                     OuterTurnPontoonOffsetMultiplier                            OFFSET(get<float>, {0x8B8, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedToBankOnTurn                                 OFFSET(get<float>, {0x8BC, 4, 0, 0})
	DMember(float)                                     BoostMinPushForce                                           OFFSET(get<float>, {0x8C0, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedForceMultiplier                                OFFSET(get<float>, {0x8C4, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedMultiplier                                     OFFSET(get<float>, {0x8C8, 4, 0, 0})
	DMember(float)                                     MaxPontoonOffsetPerSecond                                   OFFSET(get<float>, {0x8CC, 4, 0, 0})
	DMember(float)                                     LandTopSpeedMultiplier                                      OFFSET(get<float>, {0x8D0, 4, 0, 0})
	DMember(float)                                     LandPushForceMultiplier                                     OFFSET(get<float>, {0x8D4, 4, 0, 0})
	DMember(int32_t)                                   MinPushPontoonsForWaterDriving                              OFFSET(get<int32_t>, {0x8D8, 4, 0, 0})
	DMember(float)                                     MaxWaterPitchAngle                                          OFFSET(get<float>, {0x8DC, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedToPitch                                      OFFSET(get<float>, {0x8E0, 4, 0, 0})
	DMember(float)                                     MinForwardSpeedForMaxPitch                                  OFFSET(get<float>, {0x8E4, 4, 0, 0})
	DMember(float)                                     MaxForwardSpeedForMaxPitch                                  OFFSET(get<float>, {0x8E8, 4, 0, 0})
	DMember(float)                                     MaxFowrardSpeedPitchFactor                                  OFFSET(get<float>, {0x8EC, 4, 0, 0})
	DMember(float)                                     BoostMaxForwardSpeedPitchFactor                             OFFSET(get<float>, {0x8F0, 4, 0, 0})
	DMember(float)                                     FrontLateralFrictionFactor                                  OFFSET(get<float>, {0x8F4, 4, 0, 0})
	DMember(float)                                     RearLateralFrictionFactor                                   OFFSET(get<float>, {0x8F8, 4, 0, 0})
	DMember(float)                                     LandFrontLateralFrictionFactor                              OFFSET(get<float>, {0x8FC, 4, 0, 0})
	DMember(float)                                     LandRearLateralFrictionFactor                               OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(float)                                     LateralFrictionModStartSpeedKmh                             OFFSET(get<float>, {0x904, 4, 0, 0})
	DMember(float)                                     RearLateralFrictionModPerSpeedKmh                           OFFSET(get<float>, {0x908, 4, 0, 0})
	DMember(float)                                     FrontLateralFrictionModPerSpeedKmh                          OFFSET(get<float>, {0x90C, 4, 0, 0})
	DMember(float)                                     SeatOffsetScaleX                                            OFFSET(get<float>, {0x910, 4, 0, 0})
	DMember(float)                                     SeatOffsetScaleY                                            OFFSET(get<float>, {0x914, 4, 0, 0})
	DMember(float)                                     SeatYawAngleMax                                             OFFSET(get<float>, {0x918, 4, 0, 0})
	DMember(float)                                     SeatPitchAngleMax                                           OFFSET(get<float>, {0x91C, 4, 0, 0})
	DMember(float)                                     BoostSteeringMultiplier                                     OFFSET(get<float>, {0x920, 4, 0, 0})
	DMember(float)                                     BoostSteeringMultiplierRampTime                             OFFSET(get<float>, {0x924, 4, 0, 0})
	DMember(float)                                     LandSteeringMultiplier                                      OFFSET(get<float>, {0x928, 4, 0, 0})
	DMember(float)                                     LandMinSpeedSteeringAngle                                   OFFSET(get<float>, {0x92C, 4, 0, 0})
	DMember(float)                                     LandMaxSpeedSteeringAngle                                   OFFSET(get<float>, {0x930, 4, 0, 0})
	DMember(float)                                     DragCoefficientNoAccel                                      OFFSET(get<float>, {0x934, 4, 0, 0})
	DMember(float)                                     DragCoefficient2NoAccel                                     OFFSET(get<float>, {0x938, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierRoad                               OFFSET(get<float>, {0x93C, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierGrass                              OFFSET(get<float>, {0x940, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierDirt                               OFFSET(get<float>, {0x944, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierSnow                               OFFSET(get<float>, {0x948, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierIce                                OFFSET(get<float>, {0x94C, 4, 0, 0})
	DMember(float)                                     DragCoefficientMultiplierMud                                OFFSET(get<float>, {0x950, 4, 0, 0})
	DMember(float)                                     MinSteerAlphaForWaterFriction                               OFFSET(get<float>, {0x954, 4, 0, 0})
	DMember(float)                                     TurnInPlaceYawStiff                                         OFFSET(get<float>, {0x958, 4, 0, 0})
	DMember(float)                                     TurnInPlaceYawDamp                                          OFFSET(get<float>, {0x95C, 4, 0, 0})
	DMember(float)                                     MaxSteerRollAngle                                           OFFSET(get<float>, {0x960, 4, 0, 0})
	DMember(float)                                     MaxTurnInPlaceYawAngle                                      OFFSET(get<float>, {0x964, 4, 0, 0})
	DMember(float)                                     UprightSpringSteerStrength                                  OFFSET(get<float>, {0x968, 4, 0, 0})
	DMember(float)                                     TurnInPlaceYawStrength                                      OFFSET(get<float>, {0x96C, 4, 0, 0})
	DMember(float)                                     MaxSpeedForTurnInPlaceKmH                                   OFFSET(get<float>, {0x970, 4, 0, 0})
	DMember(float)                                     BlendOutExtraSpeedTurnInPlaceKmH                            OFFSET(get<float>, {0x974, 4, 0, 0})
	DMember(float)                                     MaxPitchForCameraInPlaceSteer                               OFFSET(get<float>, {0x978, 4, 0, 0})
	DMember(float)                                     SpringLengthMutliplierWater                                 OFFSET(get<float>, {0x97C, 4, 0, 0})
};

/// Struct /Script/MotorboatRuntime.MeatballInPersistent
/// Size: 0x0028 (0x000190 - 0x0001B8)
class FMeatballInPersistent : public FFortVehicleInPersistent
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(UFortMeatballVehicleConfigs*)              FortMeatballVehicleConfigs                                  OFFSET(get<T>, {0x1A8, 8, 0, 0})
	DMember(float)                                     PushForceCurrentMultiplier                                  OFFSET(get<float>, {0x1B0, 4, 0, 0})
};

