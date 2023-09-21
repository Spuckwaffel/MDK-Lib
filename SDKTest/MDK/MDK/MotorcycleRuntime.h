
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/MotorcycleRuntime.FortMotorcycleVehicleAnimInstance
/// Size: 0x0070 (0x000600 - 0x000670)
class UFortMotorcycleVehicleAnimInstance : public UFortVehicleAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	CMember(AFortMotorcycleVehicle*)                   MotorcycleVehicle                                           OFFSET(get<T>, {0x5F8, 8, 0, 0})
	SMember(FRotator)                                  SwingArmRotation                                            OFFSET(getStruct<T>, {0x600, 24, 0, 0})
	DMember(bool)                                      bIsInInventoryMode                                          OFFSET(get<bool>, {0x618, 1, 0, 0})
	CMember(UFortPlayerAnimInstance_MotorcycleDriver*) DriverAnimInstance                                          OFFSET(get<T>, {0x620, 8, 0, 0})
	DMember(bool)                                      bIsBikeParked                                               OFFSET(get<bool>, {0x628, 1, 0, 0})
	DMember(bool)                                      bIsBikeOn                                                   OFFSET(get<bool>, {0x629, 1, 0, 0})
	DMember(bool)                                      bIsBikeStopping                                             OFFSET(get<bool>, {0x62A, 1, 0, 0})
	DMember(bool)                                      bIsReversing                                                OFFSET(get<bool>, {0x62B, 1, 0, 0})
	DMember(float)                                     TotalSpeed                                                  OFFSET(get<float>, {0x62C, 4, 0, 0})
	DMember(bool)                                      bIsSurfaceWater                                             OFFSET(get<bool>, {0x630, 1, 0, 0})
	DMember(float)                                     AdditiveAlpha                                               OFFSET(get<float>, {0x634, 4, 0, 0})
	DMember(bool)                                      bIsRevving                                                  OFFSET(get<bool>, {0x638, 1, 0, 0})
	DMember(float)                                     AccelAlpha                                                  OFFSET(get<float>, {0x63C, 4, 0, 0})
	DMember(bool)                                      bIsThrottling                                               OFFSET(get<bool>, {0x640, 1, 0, 0})
	DMember(bool)                                      bIsHonking                                                  OFFSET(get<bool>, {0x641, 1, 0, 0})
	DMember(bool)                                      bIsSoloJumpTrickOutro                                       OFFSET(get<bool>, {0x642, 1, 0, 0})
	DMember(bool)                                      bIsJumpTrickNone                                            OFFSET(get<bool>, {0x643, 1, 0, 0})
	DMember(float)                                     BrakeLeverAlpha                                             OFFSET(get<float>, {0x644, 4, 0, 0})
	DMember(bool)                                      bShouldExitFromLocomotion                                   OFFSET(get<bool>, {0x648, 1, 0, 0})
	DMember(bool)                                      bStateRuleFromRevvingToThrottle                             OFFSET(get<bool>, {0x649, 1, 0, 0})
	DMember(bool)                                      bShouldPlayThrottleAnim                                     OFFSET(get<bool>, {0x64A, 1, 0, 0})
	DMember(bool)                                      bStateTransitionRuleToMovingLoop                            OFFSET(get<bool>, {0x64B, 1, 0, 0})
	DMember(bool)                                      bEarlyOutFromMovingStart                                    OFFSET(get<bool>, {0x64C, 1, 0, 0})
	DMember(bool)                                      bShouldStop                                                 OFFSET(get<bool>, {0x64D, 1, 0, 0})
	DMember(bool)                                      bShouldReverse                                              OFFSET(get<bool>, {0x64E, 1, 0, 0})
	DMember(bool)                                      bShouldReverseStop                                          OFFSET(get<bool>, {0x64F, 1, 0, 0})
	DMember(bool)                                      bShouldStopThrottling                                       OFFSET(get<bool>, {0x650, 1, 0, 0})
	DMember(bool)                                      bIsFromJumpTrick                                            OFFSET(get<bool>, {0x651, 1, 0, 0})
	DMember(bool)                                      bIsSoloJumpTrick                                            OFFSET(get<bool>, {0x652, 1, 0, 0})
	DMember(bool)                                      bShouldJump                                                 OFFSET(get<bool>, {0x653, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x654, 1, 0, 0})
	CMember(EFortMotorcycleAirTrickType)               AirTrickType                                                OFFSET(get<T>, {0x655, 1, 0, 0})
	DMember(bool)                                      bIsLandingInPlace                                           OFFSET(get<bool>, {0x656, 1, 0, 0})
	DMember(bool)                                      bStateRuleFallingToMoving                                   OFFSET(get<bool>, {0x657, 1, 0, 0})
	DMember(float)                                     JumpChargeFactor                                            OFFSET(get<float>, {0x658, 4, 0, 0})
	DMember(float)                                     ForwardSpeed                                                OFFSET(get<float>, {0x65C, 4, 0, 0})
	DMember(bool)                                      bStoppie                                                    OFFSET(get<bool>, {0x660, 1, 0, 0})
	DMember(bool)                                      bIsBraking                                                  OFFSET(get<bool>, {0x661, 1, 0, 0})
	DMember(bool)                                      bShouldBrake                                                OFFSET(get<bool>, {0x662, 1, 0, 0})
	DMember(bool)                                      bEarlyOutBrakingOutro                                       OFFSET(get<bool>, {0x663, 1, 0, 0})
	DMember(bool)                                      bShouldJumpTrick                                            OFFSET(get<bool>, {0x664, 1, 0, 0})
	DMember(bool)                                      bStateTransitionRuleToReverseLoop                           OFFSET(get<bool>, {0x665, 1, 0, 0})
	DMember(bool)                                      bIsReverseNoFeet                                            OFFSET(get<bool>, {0x666, 1, 0, 0})


	/// Functions
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicleAnimInstance.CollectConditionsFromDriver
	// void CollectConditionsFromDriver();                                                                                      // [0x9a012e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider
/// Size: 0x0410 (0x000450 - 0x000860)
class UFortPlayerAnimInstance_MotorcycleRider : public UFortBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2144;

public:
	CMember(AFortMotorcycleVehicle*)                   Motorcycle                                                  OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UFortMotorcycleVehicleAnimInstance*)       MotorcycleAnimInstance                                      OFFSET(get<T>, {0x450, 8, 0, 0})
	SMember(FFortAnimInput_Motorcycle)                 MotorcycleInput                                             OFFSET(getStruct<T>, {0x458, 84, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayerPawn                                              OFFSET(get<T>, {0x4B0, 8, 0, 0})
	SMember(FVector)                                   WorldVelocity                                               OFFSET(getStruct<T>, {0x4B8, 24, 0, 0})
	SMember(FVector)                                   LocalVelocity                                               OFFSET(getStruct<T>, {0x4D0, 24, 0, 0})
	DMember(float)                                     RightHandIKAlpha                                            OFFSET(get<float>, {0x4E8, 4, 0, 0})
	DMember(float)                                     LeftHandIKAlpha                                             OFFSET(get<float>, {0x4EC, 4, 0, 0})
	DMember(float)                                     Speed2D                                                     OFFSET(get<float>, {0x4F0, 4, 0, 0})
	CMember(EFortCardinalDirection)                    LocomotionCardinalDirection                                 OFFSET(get<T>, {0x4F4, 1, 0, 0})
	CMember(EFortCardinalDirection)                    PrePivotCardinalDirection                                   OFFSET(get<T>, {0x4F5, 1, 0, 0})
	DMember(bool)                                      bShouldPlayJogPivotTransition                               OFFSET(get<bool>, {0x4F6, 1, 1, 0})
	DMember(bool)                                      bPivotTransitionDoOnceTriggered                             OFFSET(get<bool>, {0x4F6, 1, 1, 1})
	DMember(bool)                                      bIsJumping                                                  OFFSET(get<bool>, {0x4F6, 1, 1, 2})
	DMember(bool)                                      bIsReloading                                                OFFSET(get<bool>, {0x4F6, 1, 1, 3})
	SMember(FRotator)                                  RiderCatchupRotation                                        OFFSET(getStruct<T>, {0x4F8, 24, 0, 0})
	DMember(float)                                     RiderZDisplacement                                          OFFSET(get<float>, {0x518, 4, 0, 0})
	DMember(float)                                     RiderDisplacementDampUpFactor                               OFFSET(get<float>, {0x51C, 4, 0, 0})
	DMember(float)                                     RiderDisplacementDampDownFactor                             OFFSET(get<float>, {0x520, 4, 0, 0})
	DMember(float)                                     RiderDisplacementLandingFallDistanceThreshold               OFFSET(get<float>, {0x524, 4, 0, 0})
	DMember(float)                                     RiderMinDisplacement                                        OFFSET(get<float>, {0x528, 4, 0, 0})
	DMember(float)                                     RiderMaxDisplacement                                        OFFSET(get<float>, {0x52C, 4, 0, 0})
	DMember(float)                                     RiderDisplacementRampPerSecond                              OFFSET(get<float>, {0x530, 4, 0, 0})
	DMember(float)                                     RiderRotationInterpSpeed                                    OFFSET(get<float>, {0x534, 4, 0, 0})
	SMember(FFortAnimInput_VelocityImpact)             VelocityImpact                                              OFFSET(getStruct<T>, {0x538, 240, 0, 0})
	SMember(FVector)                                   ImpactDisplacement                                          OFFSET(getStruct<T>, {0x628, 24, 0, 0})
	DMember(float)                                     AbsSteerAngle                                               OFFSET(get<float>, {0x640, 4, 0, 0})
	DMember(float)                                     LeanAngle                                                   OFFSET(get<float>, {0x644, 4, 0, 0})
	DMember(float)                                     FallDistanceValue                                           OFFSET(get<float>, {0x648, 4, 0, 0})
	SMember(FVector)                                   FootTraceLocation                                           OFFSET(getStruct<T>, {0x650, 24, 0, 0})
	DMember(float)                                     FootTraceSideOffset                                         OFFSET(get<float>, {0x668, 4, 0, 0})
	DMember(float)                                     MaxFootLocationDistance                                     OFFSET(get<float>, {0x66C, 4, 0, 0})
	DMember(bool)                                      bHasFootTrace                                               OFFSET(get<bool>, {0x670, 1, 0, 0})
	DMember(bool)                                      bInAir                                                      OFFSET(get<bool>, {0x671, 1, 0, 0})
	DMember(bool)                                      bIsInRollAngleThreshold                                     OFFSET(get<bool>, {0x672, 1, 0, 0})
	DMember(bool)                                      bIsDriveStarting                                            OFFSET(get<bool>, {0x673, 1, 0, 0})
	SMember(FVector)                                   LocalLeftOffset                                             OFFSET(getStruct<T>, {0x678, 24, 0, 0})
	SMember(FVector)                                   WorldPosLeft                                                OFFSET(getStruct<T>, {0x690, 24, 0, 0})
	SMember(FRotator)                                  LocalRotLeftOffset                                          OFFSET(getStruct<T>, {0x6A8, 24, 0, 0})
	SMember(FRotator)                                  WorldRotLeft                                                OFFSET(getStruct<T>, {0x6C0, 24, 0, 0})
	SMember(FVector)                                   LocalRightOffset                                            OFFSET(getStruct<T>, {0x6D8, 24, 0, 0})
	SMember(FVector)                                   WorldPosRight                                               OFFSET(getStruct<T>, {0x6F0, 24, 0, 0})
	SMember(FRotator)                                  LocalRotRightOffset                                         OFFSET(getStruct<T>, {0x708, 24, 0, 0})
	SMember(FRotator)                                  WorldRotRight                                               OFFSET(getStruct<T>, {0x720, 24, 0, 0})
	DMember(bool)                                      bIsSteeringRotating                                         OFFSET(get<bool>, {0x738, 1, 0, 0})
	DMember(bool)                                      bIsStopped                                                  OFFSET(get<bool>, {0x739, 1, 0, 0})
	DMember(bool)                                      bIsIdle                                                     OFFSET(get<bool>, {0x73A, 1, 0, 0})
	DMember(float)                                     IdleSpeedKmh                                                OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(bool)                                      bIsSlowingDown                                              OFFSET(get<bool>, {0x740, 1, 0, 0})
	DMember(bool)                                      bIsDrivingFast                                              OFFSET(get<bool>, {0x741, 1, 0, 0})
	DMember(bool)                                      bIsTurningRightHard                                         OFFSET(get<bool>, {0x742, 1, 0, 0})
	DMember(bool)                                      bIsTurningLeftHard                                          OFFSET(get<bool>, {0x743, 1, 0, 0})
	DMember(bool)                                      bIsBraking                                                  OFFSET(get<bool>, {0x744, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x746, 1, 0, 0})
	DMember(bool)                                      bIsJumpTrick                                                OFFSET(get<bool>, {0x747, 1, 0, 0})
	DMember(float)                                     JumpPlayRate                                                OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(bool)                                      bIsJumpFlipping                                             OFFSET(get<bool>, {0x74C, 1, 0, 0})
	DMember(bool)                                      bShouldEnableAO                                             OFFSET(get<bool>, {0x74D, 1, 0, 0})
	DMember(bool)                                      bIsBodyDragging                                             OFFSET(get<bool>, {0x74E, 1, 0, 0})
	DMember(float)                                     FallDistanceJumpingThreshold                                OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     FallDistanceJumpTrickThreshold                              OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     RollAngleThreshold                                          OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     StartSpeedThreshold                                         OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     SlowingSpeedThreshold                                       OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     FastSpeedThreshold                                          OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     BrakingDeltaThreshold                                       OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(float)                                     SteerHardAngleThreshold                                     OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     GroundTraceUpOffset                                         OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     GroundTraceLength                                           OFFSET(get<float>, {0x774, 4, 0, 0})
	SMember(FVector2D)                                 JumpPlayRateInRange                                         OFFSET(getStruct<T>, {0x778, 16, 0, 0})
	SMember(FVector2D)                                 JumpPlayRateOutRange                                        OFFSET(getStruct<T>, {0x788, 16, 0, 0})
	DMember(float)                                     JumpChargeFactor                                            OFFSET(get<float>, {0x798, 4, 0, 0})
	DMember(bool)                                      bIsChargingJump                                             OFFSET(get<bool>, {0x79C, 1, 0, 0})
	DMember(bool)                                      bIsMotorcycleJumping                                        OFFSET(get<bool>, {0x79D, 1, 0, 0})
	DMember(bool)                                      bMotorcycleLaunchedJump                                     OFFSET(get<bool>, {0x79E, 1, 0, 0})
	DMember(bool)                                      bWheelie                                                    OFFSET(get<bool>, {0x79F, 1, 0, 0})
	DMember(bool)                                      bStoppie                                                    OFFSET(get<bool>, {0x7A0, 1, 0, 0})
	CMember(EFortMotorcycleAirTrickType)               AirTrickType                                                OFFSET(get<T>, {0x7A1, 1, 0, 0})
	DMember(bool)                                      bIsJumpingAndNotRolling                                     OFFSET(get<bool>, {0x7A2, 1, 0, 0})
	DMember(bool)                                      bIsOnGroundAndNotRolling                                    OFFSET(get<bool>, {0x7A3, 1, 0, 0})
	DMember(bool)                                      bIsOnGroundAndBoosting                                      OFFSET(get<bool>, {0x7A4, 1, 0, 0})
	DMember(bool)                                      bPlayPivotOnGroundAndNotBoosting                            OFFSET(get<bool>, {0x7A5, 1, 0, 0})
	DMember(bool)                                      bIsPowerSliding                                             OFFSET(get<bool>, {0x7A6, 1, 0, 0})
	DMember(float)                                     PowerSlideSteeringAngleThreshold                            OFFSET(get<float>, {0x7A8, 4, 0, 0})
	DMember(float)                                     PowerSlideSpeedThreshold                                    OFFSET(get<float>, {0x7AC, 4, 0, 0})
	SMember(FVector2D)                                 LandStartPosInRange                                         OFFSET(getStruct<T>, {0x7B8, 16, 0, 0})
	SMember(FVector2D)                                 LandStartPosOutRange                                        OFFSET(getStruct<T>, {0x7C8, 16, 0, 0})
	DMember(float)                                     LandStartPosition                                           OFFSET(get<float>, {0x7D8, 4, 0, 0})
	DMember(bool)                                      bShouldPawnStandUp                                          OFFSET(get<bool>, {0x7DC, 1, 0, 0})
	DMember(bool)                                      bIsSmoothingYaw                                             OFFSET(get<bool>, {0x7DD, 1, 0, 0})
	DMember(float)                                     AimPitch                                                    OFFSET(get<float>, {0x7E0, 4, 0, 0})
	DMember(float)                                     AimYaw                                                      OFFSET(get<float>, {0x7E4, 4, 0, 0})
	DMember(float)                                     AimYawLastFrame                                             OFFSET(get<float>, {0x7E8, 4, 0, 0})
	DMember(float)                                     AimYawSmoothed                                              OFFSET(get<float>, {0x7EC, 4, 0, 0})
	DMember(float)                                     BodyAimYaw                                                  OFFSET(get<float>, {0x7F0, 4, 0, 0})
	DMember(float)                                     NegativeBodyAimYaw                                          OFFSET(get<float>, {0x7F4, 4, 0, 0})
	DMember(float)                                     ForwardSpeed                                                OFFSET(get<float>, {0x7F8, 4, 0, 0})
	DMember(float)                                     PreviousForwardSpeed                                        OFFSET(get<float>, {0x7FC, 4, 0, 0})
	DMember(float)                                     TotalSpeed                                                  OFFSET(get<float>, {0x800, 4, 0, 0})
	DMember(bool)                                      bIsReversing                                                OFFSET(get<bool>, {0x804, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x805, 1, 0, 0})
	DMember(bool)                                      bIsInAir                                                    OFFSET(get<bool>, {0x806, 1, 0, 0})
	DMember(bool)                                      bIsUsingConsumable                                          OFFSET(get<bool>, {0x807, 1, 0, 0})
	SMember(FCachedAnimRelevancyData)                  IntroCachedTime                                             OFFSET(getStruct<T>, {0x808, 20, 0, 0})
	DMember(float)                                     StoppieLandTime                                             OFFSET(get<float>, {0x81C, 4, 0, 0})
	DMember(bool)                                      bShouldPlayHitReact                                         OFFSET(get<bool>, {0x820, 1, 0, 0})
	DMember(bool)                                      bIsPlayingMontage                                           OFFSET(get<bool>, {0x821, 1, 0, 0})
	DMember(float)                                     VehiclePitch                                                OFFSET(get<float>, {0x824, 4, 0, 0})
	DMember(float)                                     VehicleRoll                                                 OFFSET(get<float>, {0x828, 4, 0, 0})
	SMember(FRotator)                                  MeleeTwistRot                                               OFFSET(getStruct<T>, {0x830, 24, 0, 0})
	DMember(bool)                                      bStateTransitionRuleToMovingLoop                            OFFSET(get<bool>, {0x848, 1, 0, 0})
	DMember(float)                                     UpperBodyAdditiveAlpha                                      OFFSET(get<float>, {0x84C, 4, 0, 0})
	DMember(float)                                     UpperBodyAdditiveStrength                                   OFFSET(get<float>, {0x850, 4, 0, 0})
	DMember(float)                                     MovingNoisePlayRate                                         OFFSET(get<float>, {0x854, 4, 0, 0})
	DMember(bool)                                      bIsFemale                                                   OFFSET(get<bool>, {0x858, 1, 0, 0})


	/// Functions
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartWheelie
	// void HandleStartWheelie();                                                                                               // [0x9a0156c] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartStoppie
	// void HandleStartStoppie();                                                                                               // [0x9a01554] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartChargingJump
	// void HandleStartChargingJump();                                                                                          // [0x9a0153c] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleStartAirTrick
	// void HandleStartAirTrick(EFortMotorcycleAirTrickType TrickType);                                                         // [0x9a014c0] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleReleaseWheelie
	// void HandleReleaseWheelie();                                                                                             // [0x9a014a8] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleReleaseStoppie
	// void HandleReleaseStoppie();                                                                                             // [0x9a01490] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleJump
	// void HandleJump(float InJumpChargeFactor);                                                                               // [0x9a0140c] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleFinishAirTrick
	// void HandleFinishAirTrick();                                                                                             // [0x9a013f4] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleChargingJump
	// void HandleChargingJump(float InJumpChargeFactor);                                                                       // [0x9a01374] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.HandleCancelChargingJump
	// void HandleCancelChargingJump();                                                                                         // [0x9a0135c] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.CollapsedAimYawSmoothed
	// void CollapsedAimYawSmoothed(float DeltaSeconds);                                                                        // [0x9a01260] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.CalculateNoiseAlpha
	// void CalculateNoiseAlpha();                                                                                              // [0x9a011a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleRider.AnimNotify_JumpEntered
	// void AnimNotify_JumpEntered();                                                                                           // [0x9a01184] Final|Native|Public  
};

/// Class /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcycleDriver
/// Size: 0x00C0 (0x000860 - 0x000920)
class UFortPlayerAnimInstance_MotorcycleDriver : public UFortPlayerAnimInstance_MotorcycleRider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2336;

public:
	DMember(bool)                                      bHasMoved                                                   OFFSET(get<bool>, {0x860, 1, 0, 0})
	DMember(float)                                     SteeringRotation                                            OFFSET(get<float>, {0x864, 4, 0, 0})
	DMember(bool)                                      bIsInInventoryMode                                          OFFSET(get<bool>, {0x868, 1, 0, 0})
	DMember(bool)                                      bShouldJump                                                 OFFSET(get<bool>, {0x869, 1, 0, 0})
	DMember(bool)                                      bShouldAllowHeadAO                                          OFFSET(get<bool>, {0x86A, 1, 0, 0})
	DMember(float)                                     FeetDragPlayRate                                            OFFSET(get<float>, {0x86C, 4, 0, 0})
	DMember(bool)                                      bShouldJumpCharge                                           OFFSET(get<bool>, {0x870, 1, 0, 0})
	DMember(bool)                                      bIsLandingInPlace                                           OFFSET(get<bool>, {0x871, 1, 0, 0})
	DMember(bool)                                      bStateRuleFallingToMoving                                   OFFSET(get<bool>, {0x872, 1, 0, 0})
	DMember(bool)                                      bShouldApplyChargingNoise                                   OFFSET(get<bool>, {0x873, 1, 0, 0})
	DMember(float)                                     JumpTimer                                                   OFFSET(get<float>, {0x874, 4, 0, 0})
	DMember(bool)                                      bShouldAllowJump                                            OFFSET(get<bool>, {0x878, 1, 0, 0})
	DMember(bool)                                      bIsSurfaceWater                                             OFFSET(get<bool>, {0x879, 1, 0, 0})
	DMember(bool)                                      bSlopeAlphaShouldIncrease                                   OFFSET(get<bool>, {0x87A, 1, 0, 0})
	DMember(float)                                     SlopeAlpha                                                  OFFSET(get<float>, {0x87C, 4, 0, 0})
	DMember(bool)                                      bHasPassenger                                               OFFSET(get<bool>, {0x880, 1, 0, 0})
	DMember(bool)                                      bIsOneHandedDualWield                                       OFFSET(get<bool>, {0x881, 1, 0, 0})
	DMember(bool)                                      bShouldApplyBodyTwistForMelee                               OFFSET(get<bool>, {0x882, 1, 0, 0})
	DMember(bool)                                      bIsMelee                                                    OFFSET(get<bool>, {0x883, 1, 0, 0})
	DMember(bool)                                      bIsRangedOrConsumable                                       OFFSET(get<bool>, {0x884, 1, 0, 0})
	DMember(bool)                                      bShouldApplyFeetNoise                                       OFFSET(get<bool>, {0x885, 1, 0, 0})
	DMember(float)                                     CachedFallingStartTime                                      OFFSET(get<float>, {0x888, 4, 0, 0})
	DMember(bool)                                      bWasFalling                                                 OFFSET(get<bool>, {0x88C, 1, 0, 0})
	DMember(bool)                                      bIsRevving                                                  OFFSET(get<bool>, {0x88D, 1, 0, 0})
	DMember(float)                                     StoppieLeanAlpha                                            OFFSET(get<float>, {0x890, 4, 0, 0})
	DMember(bool)                                      bShouldPlayMovingJump                                       OFFSET(get<bool>, {0x894, 1, 0, 0})
	DMember(bool)                                      bWasJumpTrickLeftOrRight                                    OFFSET(get<bool>, {0x895, 1, 0, 0})
	DMember(bool)                                      bIsFromJumpTrick                                            OFFSET(get<bool>, {0x896, 1, 0, 0})
	DMember(bool)                                      bShouldAllowMovingJumpLand                                  OFFSET(get<bool>, {0x897, 1, 0, 0})
	DMember(bool)                                      bStateTransitionRuleToReverseLoop                           OFFSET(get<bool>, {0x898, 1, 0, 0})
	DMember(bool)                                      bIsReverseNoFeet                                            OFFSET(get<bool>, {0x899, 1, 0, 0})
	DMember(float)                                     WalkSPlayRate                                               OFFSET(get<float>, {0x89C, 4, 0, 0})
	DMember(float)                                     LeanSpeed                                                   OFFSET(get<float>, {0x8A0, 4, 0, 0})
	DMember(float)                                     LeanAlpha                                                   OFFSET(get<float>, {0x8A4, 4, 0, 0})
	DMember(bool)                                      bIsCombatTransition                                         OFFSET(get<bool>, {0x8A8, 1, 0, 0})
	DMember(bool)                                      bShouldBrake                                                OFFSET(get<bool>, {0x8A9, 1, 0, 0})
	DMember(bool)                                      bShouldExitFromLocomotion                                   OFFSET(get<bool>, {0x8AA, 1, 0, 0})
	DMember(bool)                                      bEarlyOutBrakingOutro                                       OFFSET(get<bool>, {0x8AB, 1, 0, 0})
	DMember(bool)                                      bIsRightInput                                               OFFSET(get<bool>, {0x8AC, 1, 0, 0})
	DMember(bool)                                      bShouldPlayReverseOutro                                     OFFSET(get<bool>, {0x8AD, 1, 0, 0})
	DMember(bool)                                      bShouldApplyHipSuspension                                   OFFSET(get<bool>, {0x8AE, 1, 0, 0})
	DMember(bool)                                      bIsDefaultJumpTrick                                         OFFSET(get<bool>, {0x8AF, 1, 0, 0})
	DMember(bool)                                      bIsLeftJumpTrick                                            OFFSET(get<bool>, {0x8B0, 1, 0, 0})
	DMember(bool)                                      bIsRightJumpTrick                                           OFFSET(get<bool>, {0x8B1, 1, 0, 0})
	DMember(bool)                                      bIsNoneJumpTrick                                            OFFSET(get<bool>, {0x8B2, 1, 0, 0})
	DMember(bool)                                      bIsSoloJumpTrick                                            OFFSET(get<bool>, {0x8B3, 1, 0, 0})
	DMember(bool)                                      bShouldExitFromDefaultJumpTrick                             OFFSET(get<bool>, {0x8B4, 1, 0, 0})
	DMember(bool)                                      bEarlyOutFromMoveStart                                      OFFSET(get<bool>, {0x8B5, 1, 0, 0})
	DMember(bool)                                      bShouldStop                                                 OFFSET(get<bool>, {0x8B6, 1, 0, 0})
	DMember(float)                                     CachedTrickIntroTime                                        OFFSET(get<float>, {0x8B8, 4, 0, 0})
	DMember(bool)                                      bShouldPlayJumpTrickIntroLeft                               OFFSET(get<bool>, {0x8BC, 1, 0, 0})
	DMember(bool)                                      bShouldPlayJumpTrickIntroRight                              OFFSET(get<bool>, {0x8BD, 1, 0, 0})
	DMember(bool)                                      bStateRuleNeutralToJumpTrickLeft                            OFFSET(get<bool>, {0x8BE, 1, 0, 0})
	DMember(bool)                                      bStateRuleNeutralToJumpTrickRight                           OFFSET(get<bool>, {0x8BF, 1, 0, 0})
	DMember(bool)                                      bShouldJumpTrick                                            OFFSET(get<bool>, {0x8C0, 1, 0, 0})
	DMember(bool)                                      bHasJumpChargeStarted                                       OFFSET(get<bool>, {0x8C1, 1, 0, 0})
	DMember(bool)                                      bIsJumpTrickLanding                                         OFFSET(get<bool>, {0x8C2, 1, 0, 0})
	DMember(bool)                                      bWasSoloJumping                                             OFFSET(get<bool>, {0x8C3, 1, 0, 0})
	DMember(bool)                                      bWasStoppieLanding                                          OFFSET(get<bool>, {0x8C4, 1, 0, 0})
	DMember(float)                                     UpperBodyBlendAlpha                                         OFFSET(get<float>, {0x8C8, 4, 0, 0})
	DMember(float)                                     StoredJumpTrickIntroPosition                                OFFSET(get<float>, {0x8CC, 4, 0, 0})
	DMember(float)                                     JumpTrickIntroPosition                                      OFFSET(get<float>, {0x8D0, 4, 0, 0})
	DMember(float)                                     JumpChargeLegIKAlpha                                        OFFSET(get<float>, {0x8D4, 4, 0, 0})
	SMember(FSoftObjectPath)                           ScytheMontage                                               OFFSET(getStruct<T>, {0x8D8, 24, 0, 0})
	SMember(FName)                                     JumpTrickIntroPositionCurveName                             OFFSET(getStruct<T>, {0x8F0, 4, 0, 0})
	SMember(FCachedAnimRelevancyData)                  FallStartCachedTime                                         OFFSET(getStruct<T>, {0x8F4, 20, 0, 0})
	SMember(FCachedAnimRelevancyData)                  TrickCachedTime                                             OFFSET(getStruct<T>, {0x908, 20, 0, 0})
};

/// Class /Script/MotorcycleRuntime.FortPlayerAnimInstance_MotorcyclePassenger
/// Size: 0x0050 (0x000860 - 0x0008B0)
class UFortPlayerAnimInstance_MotorcyclePassenger : public UFortPlayerAnimInstance_MotorcycleRider
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
	CMember(UFortPlayerAnimInstance_MotorcycleDriver*) DriverAnimInstance                                          OFFSET(get<T>, {0x860, 8, 0, 0})
	DMember(bool)                                      bHasDriver                                                  OFFSET(get<bool>, {0x868, 1, 0, 0})
	DMember(bool)                                      bIsDriverJumping                                            OFFSET(get<bool>, {0x869, 1, 0, 0})
	DMember(bool)                                      bIsDriverInventoryMode                                      OFFSET(get<bool>, {0x86A, 1, 0, 0})
	DMember(bool)                                      bIsSeatedAction                                             OFFSET(get<bool>, {0x86B, 1, 0, 0})
	DMember(bool)                                      bIsThrowingConsumable                                       OFFSET(get<bool>, {0x86C, 1, 0, 0})
	DMember(bool)                                      bEarlyOutStoppieOutro                                       OFFSET(get<bool>, {0x86D, 1, 0, 0})
	DMember(float)                                     RunForwardAlpha                                             OFFSET(get<float>, {0x870, 4, 0, 0})
	DMember(bool)                                      bAimFWD                                                     OFFSET(get<bool>, {0x874, 1, 0, 0})
	DMember(bool)                                      bAimBWD                                                     OFFSET(get<bool>, {0x875, 1, 0, 0})
	DMember(bool)                                      bAimLFT                                                     OFFSET(get<bool>, {0x876, 1, 0, 0})
	DMember(bool)                                      bAimRGT                                                     OFFSET(get<bool>, {0x877, 1, 0, 0})
	DMember(float)                                     AimFWDDeltaAngleDegrees                                     OFFSET(get<float>, {0x878, 4, 0, 0})
	DMember(float)                                     AimBWDDeltaAngleDegrees                                     OFFSET(get<float>, {0x87C, 4, 0, 0})
	DMember(float)                                     AimLFTDeltaAngleDegrees                                     OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(float)                                     AimRGTDeltaAngleDegrees                                     OFFSET(get<float>, {0x884, 4, 0, 0})
	DMember(bool)                                      bShouldJump                                                 OFFSET(get<bool>, {0x888, 1, 0, 0})
	DMember(bool)                                      bShouldApplySlopeCorrection                                 OFFSET(get<bool>, {0x889, 1, 0, 0})
	DMember(bool)                                      bShouldExitFromLocomotion                                   OFFSET(get<bool>, {0x88A, 1, 0, 0})
	SMember(FCachedAnimRelevancyData)                  JumpIntroCachedTime                                         OFFSET(getStruct<T>, {0x88C, 20, 0, 0})
	DMember(float)                                     CachedJumpIntroTime                                         OFFSET(get<float>, {0x8A0, 4, 0, 0})
};

/// Class /Script/MotorcycleRuntime.FortCameraMode_Motorcycle
/// Size: 0x0000 (0x001B70 - 0x001B70)
class UFortCameraMode_Motorcycle : public UFortCameraMode_AthenaVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7024;

public:
};

/// Class /Script/MotorcycleRuntime.FortMotorcycleVehicle
/// Size: 0x0460 (0x001BF0 - 0x002050)
class AFortMotorcycleVehicle : public AFortAthenaSKMotorVehicle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8272;

public:
	SMember(FMulticastInlineDelegate)                  OnStartChargingJumpDelegate                                 OFFSET(getStruct<T>, {0x1BF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCancelChargingJumpDelegate                                OFFSET(getStruct<T>, {0x1C00, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnJumpDelegate                                              OFFSET(getStruct<T>, {0x1C10, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChargingJumpDelegate                                      OFFSET(getStruct<T>, {0x1C20, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartAirTrickDelegate                                     OFFSET(getStruct<T>, {0x1C30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinishAirTrickDelegate                                    OFFSET(getStruct<T>, {0x1C40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartWheelieDelegate                                      OFFSET(getStruct<T>, {0x1C50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReleaseWheelieDelegate                                    OFFSET(getStruct<T>, {0x1C60, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLandWheelieDelegate                                       OFFSET(getStruct<T>, {0x1C70, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailWheelieDelegate                                       OFFSET(getStruct<T>, {0x1C80, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStartStoppieDelegate                                      OFFSET(getStruct<T>, {0x1C90, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReleaseStoppieDelegate                                    OFFSET(getStruct<T>, {0x1CA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLandStoppieDelegate                                       OFFSET(getStruct<T>, {0x1CB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInventoryModeChangedDelegate                              OFFSET(getStruct<T>, {0x1CC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSuperSlidingChangedDelegate                               OFFSET(getStruct<T>, {0x1CD0, 16, 0, 0})
	CMember(UClass*)                                   InventoryCameraModeClass                                    OFFSET(get<T>, {0x1CE0, 8, 0, 0})
	CMember(UClass*)                                   InventoryCameraModeClassADS                                 OFFSET(get<T>, {0x1CE8, 8, 0, 0})
	CMember(UClass*)                                   PassengerCameraModeClass                                    OFFSET(get<T>, {0x1CF0, 8, 0, 0})
	CMember(UClass*)                                   PassengerCameraModeClassADS                                 OFFSET(get<T>, {0x1CF8, 8, 0, 0})
	CMember(UFortMotorcycleVehicleConfigs*)            FortMotorcycleVehicleConfigs                                OFFSET(get<T>, {0x1D00, 8, 0, 0})
	SMember(FName)                                     RearAxleSocket                                              OFFSET(getStruct<T>, {0x1D08, 4, 0, 0})
	CMember(TArray<FActionDefForUI>)                   ActionDefForUI                                              OFFSET(get<T>, {0x1D10, 16, 0, 0})
	DMember(float)                                     SwingArmRotation                                            OFFSET(get<float>, {0x1D20, 4, 0, 0})
	CMember(TArray<int32_t>)                           BoostShapeIndices                                           OFFSET(get<T>, {0x1DA0, 16, 0, 0})
	DMember(bool)                                      bIsBoostAttacking                                           OFFSET(get<bool>, {0x1DB0, 1, 0, 0})
	CMember(EFortMotorcycleAirTrickType)               CachedTrickType                                             OFFSET(get<T>, {0x1DC0, 1, 0, 0})
	DMember(bool)                                      bHadPassengerAtTrickStart                                   OFFSET(get<bool>, {0x1DC1, 1, 0, 0})
	CMember(TArray<FName>)                             PassengerADSSockets                                         OFFSET(get<T>, {0x1DF8, 16, 0, 0})
	CMember(TArray<FVector>)                           PassengerADSRelativeOffsets                                 OFFSET(get<T>, {0x1E08, 16, 0, 0})
	CMember(UNiagaraComponent*)                        CachedNiagaraComponentRoadAndExhaust                        OFFSET(get<T>, {0x1E18, 8, 0, 0})
	SMember(FString)                                   RoadAndExhaustNiagaraComponentName                          OFFSET(getStruct<T>, {0x1E20, 16, 0, 0})
	SMember(FName)                                     RoadAndExhaustVehicleSpeedName                              OFFSET(getStruct<T>, {0x1E30, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustSlideDirectionName                            OFFSET(getStruct<T>, {0x1E34, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustMinSpeedForDust                               OFFSET(get<float>, {0x1E38, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustRearName                                  OFFSET(getStruct<T>, {0x1E3C, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustColorLerpName                             OFFSET(getStruct<T>, {0x1E40, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustColorLerp                                 OFFSET(get<float>, {0x1E44, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustDustAlphaMultiplierName                       OFFSET(getStruct<T>, {0x1E48, 4, 0, 0})
	DMember(float)                                     RoadAndExhaustDustAlphaMultiplier                           OFFSET(get<float>, {0x1E4C, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustPeelOutColorIndexName                         OFFSET(getStruct<T>, {0x1E50, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustPeelOutRearName                               OFFSET(getStruct<T>, {0x1E54, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustIsPeelOutOnRoadName                           OFFSET(getStruct<T>, {0x1E58, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustIsPeelOutOnRoadRewindName                     OFFSET(getStruct<T>, {0x1E5C, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustIsInAirName                                   OFFSET(getStruct<T>, {0x1E60, 4, 0, 0})
	SMember(FGameplayTag)                              RoadAndExhaustCameraDirtGameplayCueTag                      OFFSET(getStruct<T>, {0x1E64, 4, 0, 0})
	SMember(FGameplayTag)                              RoadAndExhaustCameraWaterGameplayCueTag                     OFFSET(getStruct<T>, {0x1E68, 4, 0, 0})
	CMember(TArray<TEnumAsByte>)                       RoadAndExhaustSurfaceTypeArrayForFX                         OFFSET(get<T>, {0x1E70, 16, 0, 0})
	CMember(ULegacyCameraShake*)                       DriverCameraShakeInstance                                   OFFSET(get<T>, {0x1E80, 8, 0, 0})
	CMember(ULegacyCameraShake*)                       AcceleratingCameraShakeInstance                             OFFSET(get<T>, {0x1E88, 8, 0, 0})
	SMember(FName)                                     RoadAndExhaustHeadlightsName                                OFFSET(getStruct<T>, {0x1E98, 4, 0, 0})
	SMember(FName)                                     RoadAndExhaustBrakelightsName                               OFFSET(getStruct<T>, {0x1E9C, 4, 0, 0})
	SMember(FScalableFloat)                            DoorBashMinSpeed                                            OFFSET(getStruct<T>, {0x1EA0, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashMaxSpeed                                            OFFSET(getStruct<T>, {0x1EC8, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashForwardDistanceMin                                  OFFSET(getStruct<T>, {0x1EF0, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashForwardDistanceMax                                  OFFSET(getStruct<T>, {0x1F18, 40, 0, 0})
	SMember(FGameplayTag)                              DoorBashGameplayCueTag                                      OFFSET(getStruct<T>, {0x1F40, 4, 0, 0})
	CMember(TArray<TEnumAsByte>)                       DoorBashCollisionTypesForDoor                               OFFSET(get<T>, {0x1F48, 16, 0, 0})
	CMember(TArray<TEnumAsByte>)                       DoorBashCollisionTypesForPawn                               OFFSET(get<T>, {0x1F58, 16, 0, 0})
	SMember(FScalableFloat)                            DoorBashSphereRadiusForPawnLaunch                           OFFSET(getStruct<T>, {0x1F68, 40, 0, 0})
	SMember(FScalableFloat)                            DoorBashScalarForPawnLaunch                                 OFFSET(getStruct<T>, {0x1F90, 40, 0, 0})
	SMember(FGameplayTag)                              DoorBashPawnLaunchGameplayCueTag                            OFFSET(getStruct<T>, {0x1FB8, 4, 0, 0})
	SMember(FGameplayTagQuery)                         InventoryModeTagQuery                                       OFFSET(getStruct<T>, {0x1FC0, 72, 0, 0})
	SMember(FGameplayTagContainer)                     InputContextBlockedTags                                     OFFSET(getStruct<T>, {0x2008, 32, 0, 0})
	SMember(FGameplayTag)                              MobileHUDTag                                                OFFSET(getStruct<T>, {0x2040, 4, 0, 0})


	/// Functions
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.ServerEjectAllPlayers
	// void ServerEjectAllPlayers();                                                                                            // [0x87262bc] Net|NetReliableNative|Event|Public|NetServer 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.OnRep_IsBoostAttacking
	// void OnRep_IsBoostAttacking();                                                                                           // [0x9a016e4] Final|Native|Protected 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.OnPlayerWeaponChanged
	// void OnPlayerWeaponChanged(AFortWeapon* InNewWeapon, AFortWeapon* InPrevWeapon);                                         // [0x9a015f0] Final|Native|Public  
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleWheelie__DelegateSignature
	// void MotorcycleWheelie__DelegateSignature();                                                                             // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleSuperSlidingChanged__DelegateSignature
	// void MotorcycleSuperSlidingChanged__DelegateSignature(bool bIsSuperSliding);                                             // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStoppie__DelegateSignature
	// void MotorcycleStoppie__DelegateSignature();                                                                             // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleStartAirTrick__DelegateSignature
	// void MotorcycleStartAirTrick__DelegateSignature(EFortMotorcycleAirTrickType TrickType);                                  // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleJump__DelegateSignature
	// void MotorcycleJump__DelegateSignature(float JumpChargeFactor);                                                          // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleInventoryMode__DelegateSignature
	// void MotorcycleInventoryMode__DelegateSignature(bool IsInInventoryMode);                                                 // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleChargingJump__DelegateSignature
	// void MotorcycleChargingJump__DelegateSignature();                                                                        // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.MotorcycleAirTrick__DelegateSignature
	// void MotorcycleAirTrick__DelegateSignature();                                                                            // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsSuperSliding
	// bool IsSuperSliding();                                                                                                   // [0x9a015cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsPowerSliding
	// bool IsPowerSliding();                                                                                                   // [0x9a015a8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.IsInInventoryMode
	// bool IsInInventoryMode();                                                                                                // [0x9a01584] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.GetSurfaceTypeVehicleOn
	// TEnumAsByte<EPhysicalSurface> GetSurfaceTypeVehicleOn();                                                                 // [0x9a01344] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.GetLeanAngleDegrees
	// float GetLeanAngleDegrees();                                                                                             // [0x9a0131c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.GetAverageSpringNormal
	// FVector GetAverageSpringNormal();                                                                                        // [0x9a012f4] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.ChangeBoostAttackState
	// void ChangeBoostAttackState(bool bNewIsBoostAttacking);                                                                  // [0x9a011b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartWheelie
	// void BP_OnStartWheelie();                                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartStoppie
	// void BP_OnStartStoppie();                                                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartChargingJump
	// void BP_OnStartChargingJump();                                                                                           // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnStartAirTrick
	// void BP_OnStartAirTrick(EFortMotorcycleAirTrickType TrickType);                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseWheelie
	// void BP_OnReleaseWheelie();                                                                                              // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnReleaseStoppie
	// void BP_OnReleaseStoppie();                                                                                              // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandWheelie
	// void BP_OnLandWheelie();                                                                                                 // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnLandStoppie
	// void BP_OnLandStoppie();                                                                                                 // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnJump
	// void BP_OnJump(float JumpChargeFactor);                                                                                  // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFinishAirTrick
	// void BP_OnFinishAirTrick();                                                                                              // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnFailWheelie
	// void BP_OnFailWheelie();                                                                                                 // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnChargingJump
	// void BP_OnChargingJump(float JumpChargeFactor);                                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/MotorcycleRuntime.FortMotorcycleVehicle.BP_OnCancelChargingJump
	// void BP_OnCancelChargingJump();                                                                                          // [0x1ebf994] Event|Public|BlueprintEvent 
};

/// Class /Script/MotorcycleRuntime.FortMotorcycleVehicleConfigs
/// Size: 0x02D0 (0x0008B0 - 0x000B80)
class UFortMotorcycleVehicleConfigs : public UFortPhysicsVehicleConfigs
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2944;

public:
	CMember(TArray<FMotorcycleWheel>)                  Wheels                                                      OFFSET(get<T>, {0x8B0, 16, 0, 0})
	DMember(float)                                     SpringInterpDamp                                            OFFSET(get<float>, {0x8C0, 4, 0, 0})
	DMember(float)                                     WheelieSpringInterpDamp                                     OFFSET(get<float>, {0x8C4, 4, 0, 0})
	DMember(float)                                     WallPushStiff                                               OFFSET(get<float>, {0x8C8, 4, 0, 0})
	DMember(float)                                     WallPushDamp                                                OFFSET(get<float>, {0x8CC, 4, 0, 0})
	SMember(FVector)                                   WallPushXTraceOffset                                        OFFSET(getStruct<T>, {0x8D0, 24, 0, 0})
	DMember(float)                                     WallPushForwardTraceLengthScale                             OFFSET(get<float>, {0x8E8, 4, 0, 0})
	DMember(float)                                     WallPushBackTraceLengthScale                                OFFSET(get<float>, {0x8EC, 4, 0, 0})
	DMember(float)                                     WallPushRightTraceLength                                    OFFSET(get<float>, {0x8F0, 4, 0, 0})
	SMember(FVector)                                   WallPushRightTraceOffset                                    OFFSET(getStruct<T>, {0x8F8, 24, 0, 0})
	SMember(FVector)                                   WallPushRearRightTraceOffset                                OFFSET(getStruct<T>, {0x910, 24, 0, 0})
	DMember(float)                                     WallPushAngle                                               OFFSET(get<float>, {0x928, 4, 0, 0})
	DMember(bool)                                      bUseWallPushTracesForWalls                                  OFFSET(get<bool>, {0x92C, 1, 0, 0})
	DMember(bool)                                      bUseWallPushRearSideTracesForWalls                          OFFSET(get<bool>, {0x92D, 1, 0, 0})
	DMember(float)                                     MaxJumpChargeTime                                           OFFSET(get<float>, {0x930, 4, 0, 0})
	DMember(float)                                     MinChargeJumpForce                                          OFFSET(get<float>, {0x934, 4, 0, 0})
	DMember(float)                                     MaxChargeJumpForce                                          OFFSET(get<float>, {0x938, 4, 0, 0})
	DMember(float)                                     MinJumpForwardAngle                                         OFFSET(get<float>, {0x93C, 4, 0, 0})
	DMember(float)                                     MaxJumpForwardAngle                                         OFFSET(get<float>, {0x940, 4, 0, 0})
	SMember(FVector)                                   JumpForceMinCOMOffset                                       OFFSET(getStruct<T>, {0x948, 24, 0, 0})
	SMember(FVector)                                   JumpForceMaxCOMOffset                                       OFFSET(getStruct<T>, {0x960, 24, 0, 0})
	DMember(float)                                     JumpChargeGraceTimeSeconds                                  OFFSET(get<float>, {0x978, 4, 0, 0})
	DMember(float)                                     JumpGraceTimeSeconds                                        OFFSET(get<float>, {0x97C, 4, 0, 0})
	DMember(float)                                     LeanAngleScale                                              OFFSET(get<float>, {0x980, 4, 0, 0})
	DMember(float)                                     LeanStiff                                                   OFFSET(get<float>, {0x984, 4, 0, 0})
	DMember(float)                                     LeanDamp                                                    OFFSET(get<float>, {0x988, 4, 0, 0})
	DMember(float)                                     LeanStrength                                                OFFSET(get<float>, {0x98C, 4, 0, 0})
	DMember(float)                                     SlideCatchupForceTime                                       OFFSET(get<float>, {0x990, 4, 0, 0})
	DMember(float)                                     SlideCatchupSpeed                                           OFFSET(get<float>, {0x994, 4, 0, 0})
	DMember(float)                                     SlideCatchupPushForce                                       OFFSET(get<float>, {0x998, 4, 0, 0})
	DMember(float)                                     AutoAirPitchAngle                                           OFFSET(get<float>, {0x99C, 4, 0, 0})
	DMember(float)                                     MinSteeringAngleForModifiedFriction                         OFFSET(get<float>, {0x9A0, 4, 0, 0})
	DMember(float)                                     MinSpeedForModifiedFriction                                 OFFSET(get<float>, {0x9A4, 4, 0, 0})
	DMember(float)                                     MinSteeringAngleToConsiderTractionLost                      OFFSET(get<float>, {0x9A8, 4, 0, 0})
	DMember(float)                                     FrictionRatioToConsiderTractionLost                         OFFSET(get<float>, {0x9AC, 4, 0, 0})
	DMember(float)                                     WheeliePitchStiffMin                                        OFFSET(get<float>, {0x9B0, 4, 0, 0})
	DMember(float)                                     WheeliePitchStiffMax                                        OFFSET(get<float>, {0x9B4, 4, 0, 0})
	DMember(float)                                     WheeliePitchDampMin                                         OFFSET(get<float>, {0x9B8, 4, 0, 0})
	DMember(float)                                     WheeliePitchDampMax                                         OFFSET(get<float>, {0x9BC, 4, 0, 0})
	DMember(float)                                     WheeliePitchAngleMin                                        OFFSET(get<float>, {0x9C0, 4, 0, 0})
	DMember(float)                                     WheeliePitchAngleMax                                        OFFSET(get<float>, {0x9C4, 4, 0, 0})
	DMember(float)                                     StoppiePitchAngle                                           OFFSET(get<float>, {0x9C8, 4, 0, 0})
	DMember(float)                                     StoppiePitchStiff                                           OFFSET(get<float>, {0x9CC, 4, 0, 0})
	DMember(float)                                     StoppiePitchDamp                                            OFFSET(get<float>, {0x9D0, 4, 0, 0})
	DMember(float)                                     WheelieRampSeconds                                          OFFSET(get<float>, {0x9D4, 4, 0, 0})
	DMember(float)                                     WheelieFailPitchAngle                                       OFFSET(get<float>, {0x9D8, 4, 0, 0})
	DMember(float)                                     WheelieRecoveryRate                                         OFFSET(get<float>, {0x9DC, 4, 0, 0})
	DMember(float)                                     WheelieFailRecoveryRate                                     OFFSET(get<float>, {0x9E0, 4, 0, 0})
	DMember(float)                                     WheelieMinStartSpeed                                        OFFSET(get<float>, {0x9E4, 4, 0, 0})
	DMember(float)                                     StoppieMinStopSpeed                                         OFFSET(get<float>, {0x9E8, 4, 0, 0})
	DMember(float)                                     WheelieSteerFactor                                          OFFSET(get<float>, {0x9EC, 4, 0, 0})
	DMember(float)                                     StoppieSteerFactor                                          OFFSET(get<float>, {0x9F0, 4, 0, 0})
	DMember(float)                                     WheelieSteerAlphaThreshold                                  OFFSET(get<float>, {0x9F4, 4, 0, 0})
	DMember(float)                                     WheelieStoppieMaxLeanAllowedToInitiate                      OFFSET(get<float>, {0x9F8, 4, 0, 0})
	DMember(float)                                     WheelieGroundBufferTime                                     OFFSET(get<float>, {0x9FC, 4, 0, 0})
	DMember(float)                                     StoppieGroundBufferTime                                     OFFSET(get<float>, {0xA00, 4, 0, 0})
	DMember(float)                                     WheelieSpringLengthExponent                                 OFFSET(get<float>, {0xA04, 4, 0, 0})
	DMember(float)                                     WheelieWheelOffsetLerpMultiplier                            OFFSET(get<float>, {0xA08, 4, 0, 0})
	DMember(float)                                     WheelieBrakeFactor                                          OFFSET(get<float>, {0xA0C, 4, 0, 0})
	DMember(float)                                     StoppieTurnInPlaceSpeed                                     OFFSET(get<float>, {0xA10, 4, 0, 0})
	DMember(float)                                     StoppieTurnInPlaceSpeedIce                                  OFFSET(get<float>, {0xA14, 4, 0, 0})
	DMember(float)                                     StoppieTurnInPlaceSpeedMud                                  OFFSET(get<float>, {0xA18, 4, 0, 0})
	DMember(float)                                     MinSpeedKmhForMaxStoppie                                    OFFSET(get<float>, {0xA1C, 4, 0, 0})
	DMember(float)                                     StoppieTurnAngleExponent                                    OFFSET(get<float>, {0xA20, 4, 0, 0})
	DMember(float)                                     StoppieMaxTurnAngle                                         OFFSET(get<float>, {0xA24, 4, 0, 0})
	DMember(float)                                     WheelieTireTractionMultiplier_Min                           OFFSET(get<float>, {0xA28, 4, 0, 0})
	DMember(float)                                     WheelieCameraMinStraightFactor                              OFFSET(get<float>, {0xA2C, 4, 0, 0})
	DMember(float)                                     MaxLeanAccel                                                OFFSET(get<float>, {0xA30, 4, 0, 0})
	DMember(float)                                     CruiseControlForwardAlpha                                   OFFSET(get<float>, {0xA34, 4, 0, 0})
	DMember(float)                                     InventoryModeSpeedKmh                                       OFFSET(get<float>, {0xA38, 4, 0, 0})
	DMember(float)                                     CruiseControlDisengageSpeedKmh                              OFFSET(get<float>, {0xA3C, 4, 0, 0})
	DMember(bool)                                      bPowerSlideIsSuperSlide                                     OFFSET(get<bool>, {0xA40, 1, 0, 0})
	DMember(float)                                     PowerSlideFrontFrictionMultiplier                           OFFSET(get<float>, {0xA44, 4, 0, 0})
	DMember(float)                                     PowerSlideRearFrictionMultiplier                            OFFSET(get<float>, {0xA48, 4, 0, 0})
	DMember(float)                                     PowerSlideRoadFrontFrictionMultiplier                       OFFSET(get<float>, {0xA4C, 4, 0, 0})
	DMember(float)                                     PowerSlideRoadRearFrictionMultiplier                        OFFSET(get<float>, {0xA50, 4, 0, 0})
	DMember(float)                                     PowerSlideDirtFrontFrictionMultiplier                       OFFSET(get<float>, {0xA54, 4, 0, 0})
	DMember(float)                                     PowerSlideDirtRearFrictionMultiplier                        OFFSET(get<float>, {0xA58, 4, 0, 0})
	DMember(float)                                     PowerSlideGrassFrontFrictionMultiplier                      OFFSET(get<float>, {0xA5C, 4, 0, 0})
	DMember(float)                                     PowerSlideGrassRearFrictionMultiplier                       OFFSET(get<float>, {0xA60, 4, 0, 0})
	DMember(float)                                     PowerSlideSnowFrontFrictionMultiplier                       OFFSET(get<float>, {0xA64, 4, 0, 0})
	DMember(float)                                     PowerSlideSnowRearFrictionMultiplier                        OFFSET(get<float>, {0xA68, 4, 0, 0})
	DMember(float)                                     PowerSlideIceFrontFrictionMultiplier                        OFFSET(get<float>, {0xA6C, 4, 0, 0})
	DMember(float)                                     PowerSlideIceRearFrictionMultiplier                         OFFSET(get<float>, {0xA70, 4, 0, 0})
	DMember(float)                                     PowerSlideMudFrontFrictionMultiplier                        OFFSET(get<float>, {0xA74, 4, 0, 0})
	DMember(float)                                     PowerSlideMudRearFrictionMultiplier                         OFFSET(get<float>, {0xA78, 4, 0, 0})
	DMember(float)                                     PowerSlideFactor                                            OFFSET(get<float>, {0xA7C, 4, 0, 0})
	DMember(float)                                     PowerSlideDampFactor                                        OFFSET(get<float>, {0xA80, 4, 0, 0})
	DMember(float)                                     FrictionDampFactor                                          OFFSET(get<float>, {0xA84, 4, 0, 0})
	DMember(float)                                     PowerSlideLeanAngleScale                                    OFFSET(get<float>, {0xA88, 4, 0, 0})
	DMember(float)                                     SuperSlideLeanAngle                                         OFFSET(get<float>, {0xA8C, 4, 0, 0})
	DMember(float)                                     SuperSlideMinStartYawSpeedDegrees                           OFFSET(get<float>, {0xA90, 4, 0, 0})
	DMember(float)                                     SuperSlideMinStartSpeedKmh                                  OFFSET(get<float>, {0xA94, 4, 0, 0})
	DMember(float)                                     SuperSlideMaxEndSpeedKmh                                    OFFSET(get<float>, {0xA98, 4, 0, 0})
	DMember(float)                                     PowerslideInputWindow                                       OFFSET(get<float>, {0xA9C, 4, 0, 0})
	DMember(float)                                     ShootingMinSpeedSteeringAngle                               OFFSET(get<float>, {0xAA0, 4, 0, 0})
	DMember(float)                                     ShootingMaxSpeedSteeringAngle                               OFFSET(get<float>, {0xAA4, 4, 0, 0})
	DMember(float)                                     InventoryModeCameraYawConstraint                            OFFSET(get<float>, {0xAA8, 4, 0, 0})
	DMember(float)                                     BoostTopSpeedMultiplier                                     OFFSET(get<float>, {0xAAC, 4, 0, 0})
	DMember(float)                                     BoostPushForceMultiplier                                    OFFSET(get<float>, {0xAB0, 4, 0, 0})
	DMember(float)                                     BoostMinPushForce                                           OFFSET(get<float>, {0xAB4, 4, 0, 0})
	DMember(float)                                     BoostSteeringMultiplier                                     OFFSET(get<float>, {0xAB8, 4, 0, 0})
	DMember(bool)                                      bPlayHolsterAnimsOnClient                                   OFFSET(get<bool>, {0xABC, 1, 0, 0})
	DMember(float)                                     FrontWheelSteeringFactor                                    OFFSET(get<float>, {0xAC0, 4, 0, 0})
	DMember(float)                                     FrontWheelRotationAcceleration                              OFFSET(get<float>, {0xAC4, 4, 0, 0})
	DMember(float)                                     PassengerInventoryCooldown                                  OFFSET(get<float>, {0xAC8, 4, 0, 0})
	DMember(float)                                     DriverInventoryCooldown                                     OFFSET(get<float>, {0xACC, 4, 0, 0})
	CMember(TSet<FName>)                               BoostAttackShapes                                           OFFSET(get<T>, {0xAD0, 80, 0, 0})
	DMember(float)                                     CameraAssistStrengthMax                                     OFFSET(get<float>, {0xB20, 4, 0, 0})
	DMember(float)                                     CameraAssistStrengthMin                                     OFFSET(get<float>, {0xB24, 4, 0, 0})
	DMember(float)                                     CameraAssistStrengthRecovery                                OFFSET(get<float>, {0xB28, 4, 0, 0})
	DMember(float)                                     CameraAssistInterpSpeed                                     OFFSET(get<float>, {0xB2C, 4, 0, 0})
	DMember(float)                                     AirTrickIncrementInterval                                   OFFSET(get<float>, {0xB30, 4, 0, 0})
	DMember(float)                                     AirTrickFeedStartTime                                       OFFSET(get<float>, {0xB34, 4, 0, 0})
	DMember(float)                                     AirTrickPitchMultiplier                                     OFFSET(get<float>, {0xB38, 4, 0, 0})
	DMember(float)                                     AirTrickYawMultiplier                                       OFFSET(get<float>, {0xB3C, 4, 0, 0})
	DMember(bool)                                      bAllowAirTrickNeutral                                       OFFSET(get<bool>, {0xB40, 1, 0, 0})
	DMember(bool)                                      bAllowAirTrickRight                                         OFFSET(get<bool>, {0xB41, 1, 0, 0})
	DMember(bool)                                      bAllowAirTrickLeft                                          OFFSET(get<bool>, {0xB42, 1, 0, 0})
	DMember(float)                                     PoppedTireTractionScalar_Front                              OFFSET(get<float>, {0xB44, 4, 0, 0})
	DMember(float)                                     PoppedTireTractionScalar_Rear                               OFFSET(get<float>, {0xB48, 4, 0, 0})
	DMember(float)                                     PoppedTireTractionScalar_Both                               OFFSET(get<float>, {0xB4C, 4, 0, 0})
	SMember(FScalableFloat)                            TopSpeedKmh                                                 OFFSET(getStruct<T>, {0xB50, 40, 0, 0})
};

/// Struct /Script/MotorcycleRuntime.MotorcycleWheel
/// Size: 0x003C (0x000000 - 0x00003C)
class FMotorcycleWheel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	SMember(FName)                                     WheelSocket                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     TireWidth                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     SpringLength                                                OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WheelieMinSpringLength                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     SpringStiff                                                 OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     SpringDamp                                                  OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringLength                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringStiff                                       OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     PoppedTireSpringDamp                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     PowerslideSpringStiff                                       OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     PowerslideSpringDamp                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     WheelieSpringStiff                                          OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     WheelieSpringDamp                                           OFFSET(get<float>, {0x34, 4, 0, 0})
	CMember(EFortMotorcycleWheelTraceMode)             WheelTraceMode                                              OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Enum /Script/MotorcycleRuntime.EFortMotorcycleAirTrickType
/// Size: 0x05
enum EFortMotorcycleAirTrickType : uint8_t
{
	EFortMotorcycleAirTrickType__None0                                               = 0,
	EFortMotorcycleAirTrickType__Default1                                            = 1,
	EFortMotorcycleAirTrickType__Left2                                               = 2,
	EFortMotorcycleAirTrickType__Right3                                              = 3,
	EFortMotorcycleAirTrickType__EFortMotorcycleAirTrickType_MAX4                    = 4
};

/// Enum /Script/MotorcycleRuntime.EFortMotorcycleWheelTraceMode
/// Size: 0x04
enum EFortMotorcycleWheelTraceMode : uint8_t
{
	EFortMotorcycleWheelTraceMode__None0                                             = 0,
	EFortMotorcycleWheelTraceMode__BoxSweep1                                         = 1,
	EFortMotorcycleWheelTraceMode__LineTrace2                                        = 2,
	EFortMotorcycleWheelTraceMode__EFortMotorcycleWheelTraceMode_MAX3                = 3
};

