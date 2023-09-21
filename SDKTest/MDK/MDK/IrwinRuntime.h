
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance
/// Size: 0x0160 (0x000580 - 0x0006E0)
class UFortAIFaunaAnimInstance : public UFortAIAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	DMember(float)                                     AverageSpeed                                                OFFSET(get<float>, {0x578, 4, 0, 0})
	DMember(float)                                     AverageSpeedTimeFrame                                       OFFSET(get<float>, {0x57C, 4, 0, 0})
	DMember(bool)                                      bHasValidAimTarget                                          OFFSET(get<bool>, {0x580, 1, 0, 0})
	DMember(float)                                     AimTime                                                     OFFSET(get<float>, {0x584, 4, 0, 0})
	SMember(FVector)                                   AimTargetLocation                                           OFFSET(get<T>, {0x588, 24, 0, 0})
	DMember(bool)                                      bIsSurfaceSwimming                                          OFFSET(get<bool>, {0x5A0, 1, 0, 0})
	DMember(bool)                                      bIsMovingOnGround                                           OFFSET(get<bool>, {0x5A1, 1, 0, 0})
	DMember(bool)                                      bIsInTornado                                                OFFSET(get<bool>, {0x5A2, 1, 0, 0})
	DMember(float)                                     LookAtAlpha                                                 OFFSET(get<float>, {0x5A4, 4, 0, 0})
	DMember(float)                                     MaxDistanceToPlayerForLookAt                                OFFSET(get<float>, {0x5A8, 4, 0, 0})
	DMember(float)                                     LookAtTooFarFromPlayerTimeOut                               OFFSET(get<float>, {0x5AC, 4, 0, 0})
	DMember(bool)                                      bDisableLookAtDuringMontage                                 OFFSET(get<bool>, {0x5B0, 1, 0, 0})
	SMember(FName)                                     DisableHeadTrackingCurveName                                OFFSET(get<T>, {0x5B4, 4, 0, 0})
	SMember(FRidingAnimationData)                      RidingAnimationData                                         OFFSET(get<T>, {0x5B8, 20, 0, 0})
	DMember(bool)                                      bIsSlopeSliding                                             OFFSET(get<bool>, {0x5CC, 1, 0, 0})
	DMember(float)                                     SlopeSlidingPitch                                           OFFSET(get<float>, {0x5D0, 4, 0, 0})
	DMember(float)                                     SlopeSlidingRoll                                            OFFSET(get<float>, {0x5D4, 4, 0, 0})
	DMember(float)                                     RidingMovePlayRate                                          OFFSET(get<float>, {0x5D8, 4, 0, 0})
	DMember(bool)                                      bJustGotPlayer                                              OFFSET(get<bool>, {0x5DC, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x5DD, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           OFFSET(get<bool>, {0x5DE, 1, 0, 0})
	DMember(float)                                     TurnInPlaceRotationSpeed                                    OFFSET(get<float>, {0x5E0, 4, 0, 0})
	DMember(float)                                     TurnInPlaceAngleDelta                                       OFFSET(get<float>, {0x5E4, 4, 0, 0})
	DMember(bool)                                      bIsMovingBackwards                                          OFFSET(get<bool>, {0x5E8, 1, 0, 0})
	DMember(float)                                     RiderReferentialYaw                                         OFFSET(get<float>, {0x5EC, 4, 0, 0})
	DMember(float)                                     BoostPlayRate                                               OFFSET(get<float>, {0x5F0, 4, 0, 0})
	DMember(bool)                                      bIsTurnInPlaceAngleDeltaPositive                            OFFSET(get<bool>, {0x5F4, 1, 0, 0})
	DMember(bool)                                      bPlayLandAdditive                                           OFFSET(get<bool>, {0x5F5, 1, 0, 0})
	DMember(float)                                     BackwardVelocity                                            OFFSET(get<float>, {0x5F8, 4, 0, 0})
	DMember(bool)                                      bShouldPlayStopBackwards                                    OFFSET(get<bool>, {0x5FC, 1, 0, 0})
	DMember(float)                                     SwimmingYaw                                                 OFFSET(get<float>, {0x600, 4, 0, 0})
	DMember(float)                                     BackwardsPlayRate                                           OFFSET(get<float>, {0x604, 4, 0, 0})
	DMember(float)                                     BodyRoll                                                    OFFSET(get<float>, {0x608, 4, 0, 0})
	DMember(float)                                     TurnAngleStored                                             OFFSET(get<float>, {0x60C, 4, 0, 0})
	DMember(bool)                                      bWasTurningRight                                            OFFSET(get<bool>, {0x610, 1, 0, 0})
	CMember(ERidingFootPhase)                          FootPhase                                                   OFFSET(get<T>, {0x611, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FeetInAir                                      OFFSET(get<bool>, {0x612, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FrontFeetPlanted                               OFFSET(get<bool>, {0x613, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_BackFeetPlanted                                OFFSET(get<bool>, {0x614, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftBackFeetForward                            OFFSET(get<bool>, {0x615, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightBackFeetForward                           OFFSET(get<bool>, {0x616, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftPlantedRightPass                           OFFSET(get<bool>, {0x617, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightPlantedLeftPass                           OFFSET(get<bool>, {0x618, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SlipstreamTags                                              OFFSET(get<T>, {0x620, 32, 0, 0})
	DMember(bool)                                      bIsInSlipstream                                             OFFSET(get<bool>, {0x640, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SkydivingTags                                               OFFSET(get<T>, {0x648, 32, 0, 0})
	DMember(bool)                                      bMovementMode_Skydiving                                     OFFSET(get<bool>, {0x668, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SkytubingTags                                               OFFSET(get<T>, {0x670, 32, 0, 0})
	DMember(bool)                                      bGameplay_Status_Skytubing                                  OFFSET(get<bool>, {0x690, 1, 0, 0})
	DMember(bool)                                      bIsAbducted                                                 OFFSET(get<bool>, {0x691, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TractorBeamTags                                             OFFSET(get<T>, {0x698, 32, 0, 0})
	DMember(bool)                                      bIsInTractorBeam                                            OFFSET(get<bool>, {0x6B8, 1, 0, 0})
	DMember(bool)                                      bIsFloating                                                 OFFSET(get<bool>, {0x6B9, 1, 0, 0})
	DMember(float)                                     JustGotPlayerInitialDelaySec                                OFFSET(get<float>, {0x6BC, 4, 0, 0})
};



	/// Functions
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateTurnAngleStored
	// void UpdateTurnAngleStored();                                                                                            // [0x5ae76ac] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateSwimmingYaw
	// void UpdateSwimmingYaw();                                                                                                // [0x5ae1d98] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateRidingMovePlayRate
	// void UpdateRidingMovePlayRate();                                                                                         // [0x97d2c70] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdatePlayLandAdditive
	// void UpdatePlayLandAdditive();                                                                                           // [0x97d2c58] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateFootPhaseStop
	// void UpdateFootPhaseStop();                                                                                              // [0x5ae1ab8] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBoostPlayRate
	// void UpdateBoostPlayRate();                                                                                              // [0x97d2ab8] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBodyRoll
	// void UpdateBodyRoll();                                                                                                   // [0x5ae1db0] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardVelocity
	// void UpdateBackwardVelocity();                                                                                           // [0x5ae1de0] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardsPlayRate
	// void UpdateBackwardsPlayRate();                                                                                          // [0x5ae1dc8] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.FinishFootPhaseStopUpdate
	// void FinishFootPhaseStopUpdate();                                                                                        // [0x5ae1b54] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.CalculateLookAtAlpha
	// void CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds);                                                 // [0x97d2894] Final|Native|Public|BlueprintCallable 
/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt
/// Size: 0x00A0 (0x0006E0 - 0x000780)
class UFortAIFaunaAnimInstance_Burt : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	DMember(float)                                     MovingPlayRate                                              OFFSET(get<float>, {0x6D8, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha                                 OFFSET(get<float>, {0x6DC, 4, 0, 0})
	DMember(bool)                                      bEnableHeadTiltUpAdditive                                   OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	DMember(bool)                                      bTurnAngleIsNegative                                        OFFSET(get<bool>, {0x6E1, 1, 0, 0})
	SMember(FName)                                     DisableLocomotionAdditiveCurveName                          OFFSET(get<T>, {0x6E4, 4, 0, 0})
	SMember(FName)                                     InterruptibleCurveName                                      OFFSET(get<T>, {0x6E8, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x6EC, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x6F9, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToApex                                    OFFSET(get<bool>, {0x6FA, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToMoving                                  OFFSET(get<bool>, {0x6FB, 1, 0, 0})
	DMember(bool)                                      bCanTransitionMovingToIdle                                  OFFSET(get<bool>, {0x6FC, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLandToIdle                                    OFFSET(get<bool>, {0x6FD, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLandToJumpStart                               OFFSET(get<bool>, {0x6FE, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpStartToApex                               OFFSET(get<bool>, {0x6FF, 1, 0, 0})
	DMember(bool)                                      bCanTransitionApexToFall                                    OFFSET(get<bool>, {0x700, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToLand                                    OFFSET(get<bool>, {0x701, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToIdle                                OFFSET(get<bool>, {0x702, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToIdle                          OFFSET(get<bool>, {0x703, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToMoving                        OFFSET(get<bool>, {0x704, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToMoving                              OFFSET(get<bool>, {0x705, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToMoving                                  OFFSET(get<bool>, {0x706, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToIdle                                    OFFSET(get<bool>, {0x707, 1, 0, 0})
	DMember(float)                                     MovingPlayRate_SpeedThreshold                               OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_SlowSpeedDivisor                             OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_FastSpeedDivisor                             OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MinClamp                                     OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MaxClamp                                     OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_InterpSpeed                                  OFFSET(get<float>, {0x71C, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha_InterpSpeed                     OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(float)                                     EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier             OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     EnableHeadTiltUpAdditive_ModOperand                         OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveValue_LargeThreshold                      OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveValue_TurnAngleThreshold                  OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     Speed_MovingThreshold                                       OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     Speed_IdleThreshold                                         OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     TurnAngle_LargeThreshold                                    OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     Speed_RidingMovingThreshold                                 OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     Speed_RidingIdleThreshold                                   OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     MinSpeedSlowRidingMovePlayRate                              OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     SpeedSlowDivisorRidingMovePlayRate                          OFFSET(get<float>, {0x768, 4, 0, 0})
	SMember(FMapRangeClamped_Ranges)                   RidingMovePlayRate_Ranges                                   OFFSET(get<T>, {0x76C, 16, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt_Hitchhiker
/// Size: 0x0010 (0x000780 - 0x000790)
class UFortAIFaunaAnimInstance_Burt_Hitchhiker : public UFortAIFaunaAnimInstance_Burt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	DMember(bool)                                      IsFloating                                                  OFFSET(get<bool>, {0x780, 1, 0, 0})
	DMember(bool)                                      IsInTractorBeam                                             OFFSET(get<bool>, {0x781, 1, 0, 0})
	DMember(bool)                                      IsHitchhiked                                                OFFSET(get<bool>, {0x782, 1, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Crow
/// Size: 0x0030 (0x0006E0 - 0x000710)
class UFortAIFaunaAnimInstance_Crow : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	DMember(float)                                     WingFlapPlayRate                                            OFFSET(get<float>, {0x6D8, 4, 0, 0})
	DMember(bool)                                      bIsDescending                                               OFFSET(get<bool>, {0x6DC, 1, 0, 0})
	DMember(bool)                                      bIsGliding                                                  OFFSET(get<bool>, {0x6DD, 1, 0, 0})
	DMember(bool)                                      bIsFlying                                                   OFFSET(get<bool>, {0x6DE, 1, 0, 0})
	DMember(bool)                                      bIsFlyingSlow                                               OFFSET(get<bool>, {0x6DF, 1, 0, 0})
	DMember(bool)                                      bIsLanding                                                  OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	DMember(float)                                     WingFlapPlayRateInRangeA                                    OFFSET(get<float>, {0x6E4, 4, 0, 0})
	DMember(float)                                     WingFlapPlayRateInRangeB                                    OFFSET(get<float>, {0x6E8, 4, 0, 0})
	DMember(float)                                     WingFlapPlayRateOutRangeA                                   OFFSET(get<float>, {0x6EC, 4, 0, 0})
	DMember(float)                                     WingFlapPlayRateOutRangeB                                   OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(float)                                     ZVelocityDescendingThreshold                                OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(float)                                     GlidingSpeedThreshold                                       OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(float)                                     FlyingSpeedThreshold                                        OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     FlyingSlowSpeedThreshold                                    OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(float)                                     LandingSpeedThreshold                                       OFFSET(get<float>, {0x704, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma
/// Size: 0x00C0 (0x0006E0 - 0x0007A0)
class UFortAIFaunaAnimInstance_Grandma : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	CMember(AFortAIPawn*)                              AIPawn                                                      OFFSET(get<T>, {0x6D8, 8, 0, 0})
	DMember(float)                                     MeshScale                                                   OFFSET(get<float>, {0x6E0, 4, 0, 0})
	DMember(bool)                                      bShouldPlayFullBodyInPlace                                  OFFSET(get<bool>, {0x6E4, 1, 0, 0})
	DMember(float)                                     BlinkAlpha                                                  OFFSET(get<float>, {0x6E8, 4, 0, 0})
	DMember(float)                                     WalkRunPlayRate                                             OFFSET(get<float>, {0x6EC, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha                                 OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(bool)                                      bEnableSniffAdditive                                        OFFSET(get<bool>, {0x6F4, 1, 0, 0})
	DMember(bool)                                      bEnableAlertAdditive                                        OFFSET(get<bool>, {0x6F5, 1, 0, 0})
	DMember(bool)                                      bIdleStartTurn                                              OFFSET(get<bool>, {0x6F6, 1, 0, 0})
	DMember(bool)                                      bLookAtAdditiveTurnAlpha                                    OFFSET(get<bool>, {0x6F7, 1, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x704, 1, 0, 0})
	DMember(float)                                     TurnInPlaceModulatedSpeed                                   OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     MaxSpeedFullBodyInPlace                                     OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     MinCurveValueFullBodyInPlace                                OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlphaInterpRate                       OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(int32_t)                                   SniffAdditiveFrequenceySeconds                              OFFSET(get<int32_t>, {0x718, 4, 0, 0})
	DMember(int32_t)                                   AlertAdditiveFrequenceySeconds                              OFFSET(get<int32_t>, {0x71C, 4, 0, 0})
	DMember(int32_t)                                   PawnIDScale                                                 OFFSET(get<int32_t>, {0x720, 4, 0, 0})
	SMember(FName)                                     ShouldPlayFullBodyInPlaceCurveName                          OFFSET(get<T>, {0x724, 4, 0, 0})
	SMember(FName)                                     BlinkAlphaCurveName                                         OFFSET(get<T>, {0x728, 4, 0, 0})
	DMember(float)                                     IdleStartTurnInterruptibleThreshold                         OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     LookAtAdditiveTurnAlphaThreshold                            OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     TurnInPlaceModulatedSpeedFactor                             OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(bool)                                      bIsMovingOnGroundORIsSurfaceSwimming                        OFFSET(get<bool>, {0x754, 1, 0, 0})
	DMember(bool)                                      bStateRule_DefaultJump_ToJumpApex                           OFFSET(get<bool>, {0x755, 1, 0, 0})
	DMember(bool)                                      bStateRule_TurnIdle_Idle                                    OFFSET(get<bool>, {0x756, 1, 0, 0})
	DMember(bool)                                      bStateRule_TurnIdle_Moving                                  OFFSET(get<bool>, {0x757, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_TurnIdle                                  OFFSET(get<bool>, {0x758, 1, 0, 0})
	DMember(bool)                                      bStateRule_TurnMoving_Moving                                OFFSET(get<bool>, {0x759, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_TurnMoving                                OFFSET(get<bool>, {0x75A, 1, 0, 0})
	DMember(bool)                                      bStateRule_Idle_Moving                                      OFFSET(get<bool>, {0x75B, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_Idle                                      OFFSET(get<bool>, {0x75C, 1, 0, 0})
	DMember(bool)                                      bStateRule_JumpLand_Idle                                    OFFSET(get<bool>, {0x75D, 1, 0, 0})
	DMember(bool)                                      bStateRule_JumpLand_Moving                                  OFFSET(get<bool>, {0x75E, 1, 0, 0})
	DMember(bool)                                      bStateRule_JumpStart_JumpApex                               OFFSET(get<bool>, {0x75F, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Moving                                      OFFSET(get<bool>, {0x760, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Idle                                        OFFSET(get<bool>, {0x761, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimIdle_SwimLoco                                OFFSET(get<bool>, {0x762, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimLoco_SwimIdle                                OFFSET(get<bool>, {0x763, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimTurn_SwimIdle                                OFFSET(get<bool>, {0x764, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimTurn_SwimLoco                                OFFSET(get<bool>, {0x765, 1, 0, 0})
	DMember(bool)                                      bAnimRule_NegativeTurnAngle                                 OFFSET(get<bool>, {0x766, 1, 0, 0})
	DMember(float)                                     InterruptibleMaxCheck                                       OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(float)                                     SpeedStopTransition                                         OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     SpeedIdleMoveTransition                                     OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     SpeedMovingTurnIdleTransition                               OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMin                                              OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMinWhileRiding                                   OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMinWhileAcceleratingAndRiding                    OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(float)                                     StateTimeFromEndThreshold                                   OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     SpeedIdleStartTurnThreshold                                 OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(float)                                     SpeedFallMovingThreshold                                    OFFSET(get<float>, {0x78C, 4, 0, 0})
};



	/// Functions
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateStateVariables
	// void UpdateStateVariables(bool bAccelerating);                                                                           // [0x97d2cb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateShouldPlayFullBodyInPlace
	// void UpdateShouldPlayFullBodyInPlace();                                                                                  // [0x97d2c88] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMovingRates
	// void UpdateMovingRates();                                                                                                // [0x97d2c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMeshScale
	// void UpdateMeshScale();                                                                                                  // [0x97d2c0c] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateLocomotionPoseAlpha
	// void UpdateLocomotionPoseAlpha();                                                                                        // [0x97d2be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateIdleStartTurn
	// void UpdateIdleStartTurn();                                                                                              // [0x97d2b3c] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableSniffAdditive
	// void UpdateEnableSniffAdditive();                                                                                        // [0x97d2b18] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableAlertAdditive
	// void UpdateEnableAlertAdditive();                                                                                        // [0x97d2ad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateBlinkAlpha
	// void UpdateBlinkAlpha();                                                                                                 // [0x97d2a8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineShouldPlayFullBodyInPlace
	// bool DetermineShouldPlayFullBodyInPlace();                                                                               // [0x97d2a68] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineIdleStartTurn
	// bool DetermineIdleStartTurn();                                                                                           // [0x97d29fc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableSniffAdditive
	// bool DetermineEnableSniffAdditive();                                                                                     // [0x97d29dc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableAlertAdditive
	// bool DetermineEnableAlertAdditive();                                                                                     // [0x97d299c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateWalkRunPlayRate
	// float CalculateWalkRunPlayRate();                                                                                        // [0x97d2978] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateMeshScale
	// float CalculateMeshScale();                                                                                              // [0x97d2958] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateLocomotionPoseAlpha
	// float CalculateLocomotionPoseAlpha();                                                                                    // [0x97d286c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateBlinkAlpha
	// float CalculateBlinkAlpha();                                                                                             // [0x97d281c] Final|Native|Public|BlueprintCallable|BlueprintPure 
/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma_Hitchhiker
/// Size: 0x0000 (0x0007A0 - 0x0007A0)
class UFortAIFaunaAnimInstance_Grandma_Hitchhiker : public UFortAIFaunaAnimInstance_Grandma
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Nug
/// Size: 0x0090 (0x0006E0 - 0x000770)
class UFortAIFaunaAnimInstance_Nug : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1904;

public:
	DMember(bool)                                      bIsBeingHeld                                                OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	DMember(bool)                                      bIsBeingThrown                                              OFFSET(get<bool>, {0x6D9, 1, 0, 0})
	DMember(float)                                     LowerBodyMaskAlpha                                          OFFSET(get<float>, {0x6DC, 4, 0, 0})
	DMember(bool)                                      bShouldExitJump                                             OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	DMember(float)                                     MovingPlayRate                                              OFFSET(get<float>, {0x6E4, 4, 0, 0})
	DMember(bool)                                      bShouldLean                                                 OFFSET(get<bool>, {0x6E8, 1, 0, 0})
	DMember(float)                                     LeanDirection                                               OFFSET(get<float>, {0x6EC, 4, 0, 0})
	DMember(bool)                                      bTurnAngleIsNegative                                        OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	SMember(FName)                                     InterruptibleCurveName                                      OFFSET(get<T>, {0x6F4, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x704, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToIdleTurn                                OFFSET(get<bool>, {0x705, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToLocomotionTurn                          OFFSET(get<bool>, {0x706, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToMoving                                  OFFSET(get<bool>, {0x707, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToJumpApex                                OFFSET(get<bool>, {0x708, 1, 0, 0})
	DMember(bool)                                      bCanTransitionMovingToIdle                                  OFFSET(get<bool>, {0x709, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpStartToJumpApex                           OFFSET(get<bool>, {0x70A, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpApexToJumpLoop                            OFFSET(get<bool>, {0x70B, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToIdle                          OFFSET(get<bool>, {0x70C, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToMoving                        OFFSET(get<bool>, {0x70D, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToMoving                              OFFSET(get<bool>, {0x70E, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToIdle                                OFFSET(get<bool>, {0x70F, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpLoopToJumpLand                            OFFSET(get<bool>, {0x710, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIsBeingHeldToChickenChuck                     OFFSET(get<bool>, {0x711, 1, 0, 0})
	DMember(float)                                     ShouldExitJump_SpeedThreshold                               OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_SpeedThreshold                               OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_SlowSpeedDivisor                             OFFSET(get<float>, {0x71C, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_FastSpeedDivisor                             OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_InterpSpeed                                  OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MinClamp                                     OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MaxClamp                                     OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     LeanDirection_SpeedThreshold                                OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     ShouldLean_SpeedThreshold                                   OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveValue_LargeThreshold                      OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     Speed_MovingThreshold                                       OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     Speed_IdleThreshold                                         OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     IdleTurnTransition_SpeedThreshold                           OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     LocomotionTurnTransition_SpeedThreshold                     OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x764, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Nug_Hitchhiker
/// Size: 0x0000 (0x000770 - 0x000770)
class UFortAIFaunaAnimInstance_Nug_Hitchhiker : public UFortAIFaunaAnimInstance_Nug
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1904;

public:
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert
/// Size: 0x01B0 (0x0006E0 - 0x000890)
class UFortAIFaunaAnimInstance_Robert : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2192;

public:
	CMember(AFortAIPawn*)                              AIPawn                                                      OFFSET(get<T>, {0x6E0, 8, 0, 0})
	DMember(bool)                                      bIdleStartTurn                                              OFFSET(get<bool>, {0x6E8, 1, 0, 0})
	DMember(bool)                                      bEnableHeadTiltDownAdditive                                 OFFSET(get<bool>, {0x6E9, 1, 0, 0})
	DMember(bool)                                      bIsFullBodyInPlace                                          OFFSET(get<bool>, {0x6EA, 1, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha                                 OFFSET(get<float>, {0x6EC, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x6FC, 1, 0, 0})
	DMember(bool)                                      bLookAtAdditiveTurnAlpha                                    OFFSET(get<bool>, {0x6FD, 1, 0, 0})
	DMember(bool)                                      bTurnDirection                                              OFFSET(get<bool>, {0x6FE, 1, 0, 0})
	DMember(int32_t)                                   PawnIDScale                                                 OFFSET(get<int32_t>, {0x700, 4, 0, 0})
	DMember(int32_t)                                   HeadTiltDownAdditiveFrequenceySeconds                       OFFSET(get<int32_t>, {0x704, 4, 0, 0})
	DMember(float)                                     ForceFullBodyTransition                                     OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlphaInterpRate                       OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     IdleStartTurnInterruptibleThreshold                         OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(float)                                     LookAtAlphaThreshold                                        OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     SpeedMovingThreshold                                        OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(float)                                     TurnDirectionThreshold                                      OFFSET(get<float>, {0x71C, 4, 0, 0})
	DMember(float)                                     SprintStopThreshold                                         OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(float)                                     WalkStopThreshold                                           OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     BackwardStopThreshold                                       OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     AdditiveInterruptibleThreshold                              OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     InterruptibleThreshold                                      OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     TurningRightThreshold                                       OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     LeftFootStopThreshold                                       OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_Fast                                         OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_Slow                                         OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     AdditiveHipAlphaTargeting_Constant                          OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     BackwardLocomotionThreshold                                 OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     LocomotionThreshold                                         OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     PawnSpeedThreshold                                          OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     LocomotionPlayRate_Fixed                                    OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     BoostJumpingThreshold                                       OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     BoostStartPosition_Jumping                                  OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     BoostStartPosition_NotJumping                               OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimInRangeA                                OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimInRangeB                                OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimOutRangeA                               OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimOutRangeB                               OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimInRangeA                             OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimInRangeB                             OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimOutRangeA                            OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimOutRangeB                            OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(float)                                     BodyTurnInterpSpeed_Accel                                   OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     BodyTurnInterpSpeed_NotAccel                                OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(float)                                     IdleAdditiveBodyTurnTarget_NotAccel                         OFFSET(get<float>, {0x78C, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaTargeting_Targeting                        OFFSET(get<float>, {0x790, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaTargeting_NonTargeting                     OFFSET(get<float>, {0x794, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaInterpSpeed                                OFFSET(get<float>, {0x798, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlphaTargeting_PlayerTargeting               OFFSET(get<float>, {0x79C, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_PlayerTargeting                              OFFSET(get<float>, {0x7A0, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlphaTargeting_NotPlayerTargeting            OFFSET(get<float>, {0x7A4, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_NotPlayerTargeting                           OFFSET(get<float>, {0x7A8, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryInRangeA                                 OFFSET(get<float>, {0x7AC, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryInRangeB                                 OFFSET(get<float>, {0x7B0, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryOutRangeA                                OFFSET(get<float>, {0x7B4, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryOutRangeB                                OFFSET(get<float>, {0x7B8, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryInRangeA                         OFFSET(get<float>, {0x7BC, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryInRangeB                         OFFSET(get<float>, {0x7C0, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryOutRangeA                        OFFSET(get<float>, {0x7C4, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryOutRangeB                        OFFSET(get<float>, {0x7C8, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryInRangeA                         OFFSET(get<float>, {0x7CC, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryInRangeB                         OFFSET(get<float>, {0x7D0, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryOutRangeA                        OFFSET(get<float>, {0x7D4, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryOutRangeB                        OFFSET(get<float>, {0x7D8, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x7DC, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x7E0, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x7E4, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x7E8, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x7EC, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x7F0, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x7F4, 4, 0, 0})
	DMember(bool)                                      bStateRule_Idle_Moving                                      OFFSET(get<bool>, {0x7F8, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_Idle                                      OFFSET(get<bool>, {0x7F9, 1, 0, 0})
	DMember(bool)                                      bStateRule_Swimming_Fall                                    OFFSET(get<bool>, {0x7FA, 1, 0, 0})
	DMember(bool)                                      bStateRule_Land_Idle                                        OFFSET(get<bool>, {0x7FB, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Idle                                        OFFSET(get<bool>, {0x7FC, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Moving                                      OFFSET(get<bool>, {0x7FD, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimIdle_SwimLoco                                OFFSET(get<bool>, {0x7FE, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsTurnInPlace                                    OFFSET(get<bool>, {0x7FF, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsSprintStop                                     OFFSET(get<bool>, {0x800, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsStopBackwards                                  OFFSET(get<bool>, {0x801, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotion                                     OFFSET(get<bool>, {0x802, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsFinishedTurnInPlace                            OFFSET(get<bool>, {0x803, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsInterruptible                                  OFFSET(get<bool>, {0x804, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsIdleTurnRight                                  OFFSET(get<bool>, {0x805, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLeftFootStop                                   OFFSET(get<bool>, {0x806, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsTurningRight                                   OFFSET(get<bool>, {0x807, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsAdditiveInterruptible                          OFFSET(get<bool>, {0x808, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsBackwardLocomotion                             OFFSET(get<bool>, {0x809, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpIdleLand                                   OFFSET(get<bool>, {0x80A, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsIdleTurnToIdleTurn                             OFFSET(get<bool>, {0x80B, 1, 0, 0})
	DMember(bool)                                      bStateRule_BoostJumpToBoostLand                             OFFSET(get<bool>, {0x80C, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpToBoostJump                                OFFSET(get<bool>, {0x80D, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpToJumpLand                                 OFFSET(get<bool>, {0x80E, 1, 0, 0})
	DMember(bool)                                      bStateRule_BoostFallLoopToBoostLand                         OFFSET(get<bool>, {0x80F, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotionToIdle                               OFFSET(get<bool>, {0x810, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsExitLocomotionToIdle                           OFFSET(get<bool>, {0x811, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotionHoldToSecondary                      OFFSET(get<bool>, {0x812, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotionSecondaryToHold                      OFFSET(get<bool>, {0x813, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpAdditive                                   OFFSET(get<bool>, {0x814, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLandAdditiveToJump                             OFFSET(get<bool>, {0x815, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsAllowSlopeSlide                                OFFSET(get<bool>, {0x816, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsToJumpState                                    OFFSET(get<bool>, {0x817, 1, 0, 0})
	DMember(bool)                                      bIsRidden                                                   OFFSET(get<bool>, {0x818, 1, 0, 0})
	DMember(bool)                                      bIsStop                                                     OFFSET(get<bool>, {0x819, 1, 0, 0})
	DMember(bool)                                      bIsWalkStop                                                 OFFSET(get<bool>, {0x81A, 1, 0, 0})
	DMember(float)                                     AdditiveHipAlpha                                            OFFSET(get<float>, {0x81C, 4, 0, 0})
	DMember(float)                                     AdditiveBodyAlpha                                           OFFSET(get<float>, {0x820, 4, 0, 0})
	DMember(float)                                     RiderAimYaw                                                 OFFSET(get<float>, {0x824, 4, 0, 0})
	DMember(float)                                     PlayerSlopePitch                                            OFFSET(get<float>, {0x828, 4, 0, 0})
	DMember(bool)                                      bIsPlayerTargeting                                          OFFSET(get<bool>, {0x82C, 1, 0, 0})
	DMember(float)                                     AdditiveHipAlphaTargeting                                   OFFSET(get<float>, {0x830, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed                                              OFFSET(get<float>, {0x834, 4, 0, 0})
	DMember(float)                                     IdleAdditiveBodyTurnTarget                                  OFFSET(get<float>, {0x838, 4, 0, 0})
	DMember(float)                                     BodyTurnAlpha                                               OFFSET(get<float>, {0x83C, 4, 0, 0})
	DMember(float)                                     BodyTurnInterpSpeed                                         OFFSET(get<float>, {0x840, 4, 0, 0})
	DMember(float)                                     LocomotionPlayRate                                          OFFSET(get<float>, {0x844, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlpha                                           OFFSET(get<float>, {0x848, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaTargeting                                  OFFSET(get<float>, {0x84C, 4, 0, 0})
	DMember(float)                                     BoostStartPosition                                          OFFSET(get<float>, {0x850, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlpha                                        OFFSET(get<float>, {0x854, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlphaTargeting                               OFFSET(get<float>, {0x858, 4, 0, 0})
	DMember(bool)                                      bIsAllowBoost                                               OFFSET(get<bool>, {0x85C, 1, 0, 0})
	DMember(bool)                                      bIsSlopeWarpHack                                            OFFSET(get<bool>, {0x85D, 1, 0, 0})
	DMember(float)                                     LocomotionHeadSecondary                                     OFFSET(get<float>, {0x860, 4, 0, 0})
	DMember(float)                                     LocomotionTailSecondary                                     OFFSET(get<float>, {0x864, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondary                                 OFFSET(get<float>, {0x868, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondary                                 OFFSET(get<float>, {0x86C, 4, 0, 0})
	DMember(float)                                     SwimTurnYaw                                                 OFFSET(get<float>, {0x870, 4, 0, 0})
	DMember(float)                                     SwimHeadYaw                                                 OFFSET(get<float>, {0x874, 4, 0, 0})
	DMember(bool)                                      bAnimRule_NegativeTurnAngle                                 OFFSET(get<bool>, {0x878, 1, 0, 0})
	DMember(bool)                                      bIsAccelerating2D                                           OFFSET(get<bool>, {0x879, 1, 0, 0})
	DMember(float)                                     InterruptibleMaxCheck                                       OFFSET(get<float>, {0x87C, 4, 0, 0})
	DMember(float)                                     SpeedStopTransition                                         OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(float)                                     SpeedIdleMoveTransition                                     OFFSET(get<float>, {0x884, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMin                                              OFFSET(get<float>, {0x888, 4, 0, 0})
	DMember(float)                                     StateTimeFromEndThreshold                                   OFFSET(get<float>, {0x88C, 4, 0, 0})
};



	/// Functions
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateStateVariables
	// void UpdateStateVariables();                                                                                             // [0x97d2d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateLocomotionPoseAdditiveAlpha
	// void UpdateLocomotionPoseAdditiveAlpha();                                                                                // [0x97d2bb4] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIsFullBodyInPlace
	// void UpdateIsFullBodyInPlace();                                                                                          // [0x97d2b8c] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIdleStartTurn
	// void UpdateIdleStartTurn();                                                                                              // [0x97d2b64] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateEnableHeadTiltDownAdditive
	// void UpdateEnableHeadTiltDownAdditive();                                                                                 // [0x97d2af4] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIsFullBodyInPlace
	// bool DetermineIsFullBodyInPlace();                                                                                       // [0x97d2a44] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIdleStartTurn
	// bool DetermineIdleStartTurn();                                                                                           // [0x97d2a20] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineEnableHeadTiltDownAdditive
	// bool DetermineEnableHeadTiltDownAdditive();                                                                              // [0x97d29bc] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.CalculateLocomotionPoseAdditiveAlpha
	// float CalculateLocomotionPoseAdditiveAlpha();                                                                            // [0x97d2844] Final|Native|Public|BlueprintCallable|BlueprintPure 
/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Smackie
/// Size: 0x0030 (0x0006E0 - 0x000710)
class UFortAIFaunaAnimInstance_Smackie : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x6DC, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x6E0, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x6E4, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToHop                                     OFFSET(get<bool>, {0x6E5, 1, 0, 0})
	DMember(bool)                                      bCanTransitionHopToIdle                                     OFFSET(get<bool>, {0x6E6, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToIdle                                    OFFSET(get<bool>, {0x6E7, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToHop                                     OFFSET(get<bool>, {0x6E8, 1, 0, 0})
	DMember(float)                                     SpeedThreshold                                              OFFSET(get<float>, {0x6EC, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x708, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaLayerAnimInstance
/// Size: 0x0000 (0x000450 - 0x000450)
class UFortAIFaunaLayerAnimInstance : public UFortBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
};

/// Struct /Script/IrwinRuntime.RidingAnimationData
/// Size: 0x0014 (0x000000 - 0x000014)
class FRidingAnimationData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bIsRidden                                                   OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bIsBeingPetted                                              OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bIsMovingBackwards                                          OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     TurnInPlaceRotationSpeed                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     TurnInPlaceAngleDelta                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     RiderReferentialYaw                                         OFFSET(get<float>, {0x10, 4, 0, 0})
};

