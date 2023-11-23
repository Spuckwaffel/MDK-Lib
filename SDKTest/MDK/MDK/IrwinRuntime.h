
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance
/// Size: 0x0170 (0x000580 - 0x0006F0)
class UFortAIFaunaAnimInstance : public UFortAIAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1776;

public:
	DMember(float)                                     AverageSpeed                                                OFFSET(get<float>, {0x578, 4, 0, 0})
	DMember(float)                                     AverageSpeedTimeFrame                                       OFFSET(get<float>, {0x57C, 4, 0, 0})
	DMember(bool)                                      bHasValidAimTarget                                          OFFSET(get<bool>, {0x580, 1, 0, 0})
	DMember(float)                                     AimTime                                                     OFFSET(get<float>, {0x584, 4, 0, 0})
	SMember(FVector)                                   AimTargetLocation                                           OFFSET(getStruct<T>, {0x588, 24, 0, 0})
	DMember(bool)                                      bIsSurfaceSwimming                                          OFFSET(get<bool>, {0x5A0, 1, 0, 0})
	DMember(bool)                                      bIsMovingOnGround                                           OFFSET(get<bool>, {0x5A1, 1, 0, 0})
	DMember(bool)                                      bIsInTornado                                                OFFSET(get<bool>, {0x5A2, 1, 0, 0})
	DMember(float)                                     LookAtAlpha                                                 OFFSET(get<float>, {0x5A4, 4, 0, 0})
	DMember(float)                                     MaxDistanceToPlayerForLookAt                                OFFSET(get<float>, {0x5A8, 4, 0, 0})
	DMember(float)                                     LookAtTooFarFromPlayerTimeOut                               OFFSET(get<float>, {0x5AC, 4, 0, 0})
	DMember(bool)                                      bDisableLookAtDuringMontage                                 OFFSET(get<bool>, {0x5B0, 1, 0, 0})
	SMember(FName)                                     DisableHeadTrackingCurveName                                OFFSET(getStruct<T>, {0x5B4, 4, 0, 0})
	SMember(FRidingAnimationData)                      RidingAnimationData                                         OFFSET(getStruct<T>, {0x5B8, 20, 0, 0})
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
	SMember(FGameplayTagContainer)                     SlipstreamTags                                              OFFSET(getStruct<T>, {0x620, 32, 0, 0})
	DMember(bool)                                      bIsInSlipstream                                             OFFSET(get<bool>, {0x640, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SkydivingTags                                               OFFSET(getStruct<T>, {0x648, 32, 0, 0})
	DMember(bool)                                      bMovementMode_Skydiving                                     OFFSET(get<bool>, {0x668, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SkytubingTags                                               OFFSET(getStruct<T>, {0x670, 32, 0, 0})
	DMember(bool)                                      bGameplay_Status_Skytubing                                  OFFSET(get<bool>, {0x690, 1, 0, 0})
	DMember(bool)                                      bIsAbducted                                                 OFFSET(get<bool>, {0x691, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TractorBeamTags                                             OFFSET(getStruct<T>, {0x698, 32, 0, 0})
	DMember(bool)                                      bIsInTractorBeam                                            OFFSET(get<bool>, {0x6B8, 1, 0, 0})
	DMember(bool)                                      bIsFloating                                                 OFFSET(get<bool>, {0x6B9, 1, 0, 0})
	DMember(float)                                     JustGotPlayerInitialDelaySec                                OFFSET(get<float>, {0x6BC, 4, 0, 0})
	DMember(float)                                     FallAsleepAnimDuration                                      OFFSET(get<float>, {0x6DC, 4, 0, 0})
	DMember(float)                                     WakeUpAnimDuration                                          OFFSET(get<float>, {0x6E0, 4, 0, 0})
	DMember(float)                                     FallAsleepToSleepingCrossfade                               OFFSET(get<float>, {0x6E4, 4, 0, 0})
	DMember(float)                                     WakeUpToIdleCrossfade                                       OFFSET(get<float>, {0x6E8, 4, 0, 0})
	DMember(bool)                                      StateTransition_FallAsleepToSleeping                        OFFSET(get<bool>, {0x6EC, 1, 1, 0})
	DMember(bool)                                      StateTransition_SleepingToWakeUp                            OFFSET(get<bool>, {0x6EC, 1, 1, 1})
	DMember(bool)                                      StateTransition_WakeUpToIdle                                OFFSET(get<bool>, {0x6EC, 1, 1, 2})
	DMember(bool)                                      StateTransition_IdleToFallAsleep                            OFFSET(get<bool>, {0x6EC, 1, 1, 3})


	/// Functions
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateTurnAngleStored
	// void UpdateTurnAngleStored();                                                                                            // [0x59afecc] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateSwimmingYaw
	// void UpdateSwimmingYaw();                                                                                                // [0x59ad024] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateRidingMovePlayRate
	// void UpdateRidingMovePlayRate();                                                                                         // [0x9dd0b44] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdatePlayLandAdditive
	// void UpdatePlayLandAdditive();                                                                                           // [0x9dd0b2c] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateFootPhaseStop
	// void UpdateFootPhaseStop();                                                                                              // [0x59acd14] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBoostPlayRate
	// void UpdateBoostPlayRate();                                                                                              // [0x9dd098c] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBodyRoll
	// void UpdateBodyRoll();                                                                                                   // [0x59ad03c] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardVelocity
	// void UpdateBackwardVelocity();                                                                                           // [0x59ad06c] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.UpdateBackwardsPlayRate
	// void UpdateBackwardsPlayRate();                                                                                          // [0x59ad054] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.FinishFootPhaseStopUpdate
	// void FinishFootPhaseStopUpdate();                                                                                        // [0x59acdb0] Native|Event|Public|BlueprintEvent 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance.CalculateLookAtAlpha
	// void CalculateLookAtAlpha(bool bForceDisableLookAt, float DeltaSeconds);                                                 // [0x9dd0768] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt
/// Size: 0x00B0 (0x0006F0 - 0x0007A0)
class UFortAIFaunaAnimInstance_Burt : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	DMember(float)                                     MovingPlayRate                                              OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha                                 OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(bool)                                      bEnableHeadTiltUpAdditive                                   OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(bool)                                      bTurnAngleIsNegative                                        OFFSET(get<bool>, {0x6F9, 1, 0, 0})
	SMember(FName)                                     DisableLocomotionAdditiveCurveName                          OFFSET(getStruct<T>, {0x6FC, 4, 0, 0})
	SMember(FName)                                     InterruptibleCurveName                                      OFFSET(getStruct<T>, {0x700, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x704, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x710, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x711, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToApex                                    OFFSET(get<bool>, {0x712, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToMoving                                  OFFSET(get<bool>, {0x713, 1, 0, 0})
	DMember(bool)                                      bCanTransitionMovingToIdle                                  OFFSET(get<bool>, {0x714, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLandToIdle                                    OFFSET(get<bool>, {0x715, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLandToJumpStart                               OFFSET(get<bool>, {0x716, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpStartToApex                               OFFSET(get<bool>, {0x717, 1, 0, 0})
	DMember(bool)                                      bCanTransitionApexToFall                                    OFFSET(get<bool>, {0x718, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToLand                                    OFFSET(get<bool>, {0x719, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToIdle                                OFFSET(get<bool>, {0x71A, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToIdle                          OFFSET(get<bool>, {0x71B, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToMoving                        OFFSET(get<bool>, {0x71C, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToMoving                              OFFSET(get<bool>, {0x71D, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToMoving                                  OFFSET(get<bool>, {0x71E, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToIdle                                    OFFSET(get<bool>, {0x71F, 1, 0, 0})
	DMember(float)                                     MovingPlayRate_SpeedThreshold                               OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_SlowSpeedDivisor                             OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_FastSpeedDivisor                             OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MinClamp                                     OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MaxClamp                                     OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_InterpSpeed                                  OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha_InterpSpeed                     OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier             OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     EnableHeadTiltUpAdditive_ModOperand                         OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveValue_LargeThreshold                      OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveValue_TurnAngleThreshold                  OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     Speed_MovingThreshold                                       OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     Speed_IdleThreshold                                         OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     TurnAngle_LargeThreshold                                    OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     Speed_RidingMovingThreshold                                 OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     Speed_RidingIdleThreshold                                   OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     MinSpeedSlowRidingMovePlayRate                              OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     SpeedSlowDivisorRidingMovePlayRate                          OFFSET(get<float>, {0x780, 4, 0, 0})
	SMember(FMapRangeClamped_Ranges)                   RidingMovePlayRate_Ranges                                   OFFSET(getStruct<T>, {0x784, 16, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt_Hitchhiker
/// Size: 0x0000 (0x0007A0 - 0x0007A0)
class UFortAIFaunaAnimInstance_Burt_Hitchhiker : public UFortAIFaunaAnimInstance_Burt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Crow
/// Size: 0x0030 (0x0006F0 - 0x000720)
class UFortAIFaunaAnimInstance_Crow : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	DMember(float)                                     WingFlapPlayRate                                            OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(bool)                                      bIsDescending                                               OFFSET(get<bool>, {0x6F4, 1, 0, 0})
	DMember(bool)                                      bIsGliding                                                  OFFSET(get<bool>, {0x6F5, 1, 0, 0})
	DMember(bool)                                      bIsFlying                                                   OFFSET(get<bool>, {0x6F6, 1, 0, 0})
	DMember(bool)                                      bIsFlyingSlow                                               OFFSET(get<bool>, {0x6F7, 1, 0, 0})
	DMember(bool)                                      bIsLanding                                                  OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(float)                                     WingFlapPlayRateInRangeA                                    OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     WingFlapPlayRateInRangeB                                    OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(float)                                     WingFlapPlayRateOutRangeA                                   OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(float)                                     WingFlapPlayRateOutRangeB                                   OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     ZVelocityDescendingThreshold                                OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     GlidingSpeedThreshold                                       OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(float)                                     FlyingSpeedThreshold                                        OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     FlyingSlowSpeedThreshold                                    OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(float)                                     LandingSpeedThreshold                                       OFFSET(get<float>, {0x71C, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma
/// Size: 0x00C0 (0x0006F0 - 0x0007B0)
class UFortAIFaunaAnimInstance_Grandma : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1968;

public:
	CMember(AFortAIPawn*)                              AIPawn                                                      OFFSET(get<T>, {0x6F0, 8, 0, 0})
	DMember(float)                                     MeshScale                                                   OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(bool)                                      bShouldPlayFullBodyInPlace                                  OFFSET(get<bool>, {0x6FC, 1, 0, 0})
	DMember(float)                                     BlinkAlpha                                                  OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(float)                                     WalkRunPlayRate                                             OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha                                 OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(bool)                                      bEnableSniffAdditive                                        OFFSET(get<bool>, {0x70C, 1, 0, 0})
	DMember(bool)                                      bEnableAlertAdditive                                        OFFSET(get<bool>, {0x70D, 1, 0, 0})
	DMember(bool)                                      bIdleStartTurn                                              OFFSET(get<bool>, {0x70E, 1, 0, 0})
	DMember(bool)                                      bLookAtAdditiveTurnAlpha                                    OFFSET(get<bool>, {0x70F, 1, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x710, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x71C, 1, 0, 0})
	DMember(float)                                     TurnInPlaceModulatedSpeed                                   OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(float)                                     MaxSpeedFullBodyInPlace                                     OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     MinCurveValueFullBodyInPlace                                OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlphaInterpRate                       OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(int32_t)                                   SniffAdditiveFrequenceySeconds                              OFFSET(get<int32_t>, {0x730, 4, 0, 0})
	DMember(int32_t)                                   AlertAdditiveFrequenceySeconds                              OFFSET(get<int32_t>, {0x734, 4, 0, 0})
	DMember(int32_t)                                   PawnIDScale                                                 OFFSET(get<int32_t>, {0x738, 4, 0, 0})
	SMember(FName)                                     ShouldPlayFullBodyInPlaceCurveName                          OFFSET(getStruct<T>, {0x73C, 4, 0, 0})
	SMember(FName)                                     BlinkAlphaCurveName                                         OFFSET(getStruct<T>, {0x740, 4, 0, 0})
	DMember(float)                                     IdleStartTurnInterruptibleThreshold                         OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     LookAtAdditiveTurnAlphaThreshold                            OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     TurnInPlaceModulatedSpeedFactor                             OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(bool)                                      bIsMovingOnGroundORIsSurfaceSwimming                        OFFSET(get<bool>, {0x76C, 1, 0, 0})
	DMember(bool)                                      bStateRule_DefaultJump_ToJumpApex                           OFFSET(get<bool>, {0x76D, 1, 0, 0})
	DMember(bool)                                      bStateRule_TurnIdle_Idle                                    OFFSET(get<bool>, {0x76E, 1, 0, 0})
	DMember(bool)                                      bStateRule_TurnIdle_Moving                                  OFFSET(get<bool>, {0x76F, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_TurnIdle                                  OFFSET(get<bool>, {0x770, 1, 0, 0})
	DMember(bool)                                      bStateRule_TurnMoving_Moving                                OFFSET(get<bool>, {0x771, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_TurnMoving                                OFFSET(get<bool>, {0x772, 1, 0, 0})
	DMember(bool)                                      bStateRule_Idle_Moving                                      OFFSET(get<bool>, {0x773, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_Idle                                      OFFSET(get<bool>, {0x774, 1, 0, 0})
	DMember(bool)                                      bStateRule_JumpLand_Idle                                    OFFSET(get<bool>, {0x775, 1, 0, 0})
	DMember(bool)                                      bStateRule_JumpLand_Moving                                  OFFSET(get<bool>, {0x776, 1, 0, 0})
	DMember(bool)                                      bStateRule_JumpStart_JumpApex                               OFFSET(get<bool>, {0x777, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Moving                                      OFFSET(get<bool>, {0x778, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Idle                                        OFFSET(get<bool>, {0x779, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimIdle_SwimLoco                                OFFSET(get<bool>, {0x77A, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimLoco_SwimIdle                                OFFSET(get<bool>, {0x77B, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimTurn_SwimIdle                                OFFSET(get<bool>, {0x77C, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimTurn_SwimLoco                                OFFSET(get<bool>, {0x77D, 1, 0, 0})
	DMember(bool)                                      bAnimRule_NegativeTurnAngle                                 OFFSET(get<bool>, {0x77E, 1, 0, 0})
	DMember(float)                                     InterruptibleMaxCheck                                       OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(float)                                     SpeedStopTransition                                         OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     SpeedIdleMoveTransition                                     OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(float)                                     SpeedMovingTurnIdleTransition                               OFFSET(get<float>, {0x78C, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMin                                              OFFSET(get<float>, {0x790, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMinWhileRiding                                   OFFSET(get<float>, {0x794, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMinWhileAcceleratingAndRiding                    OFFSET(get<float>, {0x798, 4, 0, 0})
	DMember(float)                                     StateTimeFromEndThreshold                                   OFFSET(get<float>, {0x79C, 4, 0, 0})
	DMember(float)                                     SpeedIdleStartTurnThreshold                                 OFFSET(get<float>, {0x7A0, 4, 0, 0})
	DMember(float)                                     SpeedFallMovingThreshold                                    OFFSET(get<float>, {0x7A4, 4, 0, 0})


	/// Functions
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateStateVariables
	// void UpdateStateVariables(bool bAccelerating);                                                                           // [0x9dd0b84] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateShouldPlayFullBodyInPlace
	// void UpdateShouldPlayFullBodyInPlace();                                                                                  // [0x9dd0b5c] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMovingRates
	// void UpdateMovingRates();                                                                                                // [0x9dd0b04] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateMeshScale
	// void UpdateMeshScale();                                                                                                  // [0x9dd0ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateLocomotionPoseAlpha
	// void UpdateLocomotionPoseAlpha();                                                                                        // [0x9dd0ab4] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateIdleStartTurn
	// void UpdateIdleStartTurn();                                                                                              // [0x9dd0a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableSniffAdditive
	// void UpdateEnableSniffAdditive();                                                                                        // [0x9dd09ec] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateEnableAlertAdditive
	// void UpdateEnableAlertAdditive();                                                                                        // [0x9dd09a4] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.UpdateBlinkAlpha
	// void UpdateBlinkAlpha();                                                                                                 // [0x9dd0960] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineShouldPlayFullBodyInPlace
	// bool DetermineShouldPlayFullBodyInPlace();                                                                               // [0x9dd093c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineIdleStartTurn
	// bool DetermineIdleStartTurn();                                                                                           // [0x9dd08d0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableSniffAdditive
	// bool DetermineEnableSniffAdditive();                                                                                     // [0x9dd08b0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.DetermineEnableAlertAdditive
	// bool DetermineEnableAlertAdditive();                                                                                     // [0x9dd0870] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateWalkRunPlayRate
	// float CalculateWalkRunPlayRate();                                                                                        // [0x9dd084c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateMeshScale
	// float CalculateMeshScale();                                                                                              // [0x9dd082c] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateLocomotionPoseAlpha
	// float CalculateLocomotionPoseAlpha();                                                                                    // [0x9dd0740] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma.CalculateBlinkAlpha
	// float CalculateBlinkAlpha();                                                                                             // [0x9dd06f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma_Hitchhiker
/// Size: 0x0010 (0x0007B0 - 0x0007C0)
class UFortAIFaunaAnimInstance_Grandma_Hitchhiker : public UFortAIFaunaAnimInstance_Grandma
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1984;

public:
	DMember(bool)                                      bIsHitchhiked                                               OFFSET(get<bool>, {0x7B0, 1, 0, 0})
	DMember(bool)                                      bIsGrandmaSprinting                                         OFFSET(get<bool>, {0x7B1, 1, 0, 0})
	DMember(float)                                     SprintCheckSpeed                                            OFFSET(get<float>, {0x7B4, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Nug
/// Size: 0x0090 (0x0006F0 - 0x000780)
class UFortAIFaunaAnimInstance_Nug : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	DMember(bool)                                      bIsBeingHeld                                                OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(bool)                                      bIsBeingThrown                                              OFFSET(get<bool>, {0x6F1, 1, 0, 0})
	DMember(float)                                     LowerBodyMaskAlpha                                          OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(bool)                                      bShouldExitJump                                             OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(float)                                     MovingPlayRate                                              OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(bool)                                      bShouldLean                                                 OFFSET(get<bool>, {0x700, 1, 0, 0})
	DMember(float)                                     LeanDirection                                               OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(bool)                                      bTurnAngleIsNegative                                        OFFSET(get<bool>, {0x708, 1, 0, 0})
	SMember(FName)                                     InterruptibleCurveName                                      OFFSET(getStruct<T>, {0x70C, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x710, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x71C, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToIdleTurn                                OFFSET(get<bool>, {0x71D, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToLocomotionTurn                          OFFSET(get<bool>, {0x71E, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToMoving                                  OFFSET(get<bool>, {0x71F, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToJumpApex                                OFFSET(get<bool>, {0x720, 1, 0, 0})
	DMember(bool)                                      bCanTransitionMovingToIdle                                  OFFSET(get<bool>, {0x721, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpStartToJumpApex                           OFFSET(get<bool>, {0x722, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpApexToJumpLoop                            OFFSET(get<bool>, {0x723, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToIdle                          OFFSET(get<bool>, {0x724, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToMoving                        OFFSET(get<bool>, {0x725, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToMoving                              OFFSET(get<bool>, {0x726, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToIdle                                OFFSET(get<bool>, {0x727, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpLoopToJumpLand                            OFFSET(get<bool>, {0x728, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIsBeingHeldToChickenChuck                     OFFSET(get<bool>, {0x729, 1, 0, 0})
	DMember(float)                                     ShouldExitJump_SpeedThreshold                               OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_SpeedThreshold                               OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_SlowSpeedDivisor                             OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_FastSpeedDivisor                             OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_InterpSpeed                                  OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MinClamp                                     OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MaxClamp                                     OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     LeanDirection_SpeedThreshold                                OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     ShouldLean_SpeedThreshold                                   OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveValue_LargeThreshold                      OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     Speed_MovingThreshold                                       OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     Speed_IdleThreshold                                         OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     IdleTurnTransition_SpeedThreshold                           OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     LocomotionTurnTransition_SpeedThreshold                     OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x77C, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Nug_Hitchhiker
/// Size: 0x0010 (0x000780 - 0x000790)
class UFortAIFaunaAnimInstance_Nug_Hitchhiker : public UFortAIFaunaAnimInstance_Nug
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	DMember(bool)                                      bIsSwimming                                                 OFFSET(get<bool>, {0x780, 1, 0, 0})
	DMember(bool)                                      bIsHitchhiked                                               OFFSET(get<bool>, {0x781, 1, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert
/// Size: 0x01C0 (0x0006F0 - 0x0008B0)
class UFortAIFaunaAnimInstance_Robert : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2224;

public:
	CMember(AFortAIPawn*)                              AIPawn                                                      OFFSET(get<T>, {0x6F8, 8, 0, 0})
	DMember(bool)                                      bIdleStartTurn                                              OFFSET(get<bool>, {0x700, 1, 0, 0})
	DMember(bool)                                      bEnableHeadTiltDownAdditive                                 OFFSET(get<bool>, {0x701, 1, 0, 0})
	DMember(bool)                                      bIsFullBodyInPlace                                          OFFSET(get<bool>, {0x702, 1, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha                                 OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x708, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x714, 1, 0, 0})
	DMember(bool)                                      bLookAtAdditiveTurnAlpha                                    OFFSET(get<bool>, {0x715, 1, 0, 0})
	DMember(bool)                                      bTurnDirection                                              OFFSET(get<bool>, {0x716, 1, 0, 0})
	DMember(int32_t)                                   PawnIDScale                                                 OFFSET(get<int32_t>, {0x718, 4, 0, 0})
	DMember(int32_t)                                   HeadTiltDownAdditiveFrequenceySeconds                       OFFSET(get<int32_t>, {0x71C, 4, 0, 0})
	DMember(float)                                     ForceFullBodyTransition                                     OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlphaInterpRate                       OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     IdleStartTurnInterruptibleThreshold                         OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     LookAtAlphaThreshold                                        OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     SpeedMovingThreshold                                        OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     TurnDirectionThreshold                                      OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     SprintStopThreshold                                         OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     WalkStopThreshold                                           OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     BackwardStopThreshold                                       OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     AdditiveInterruptibleThreshold                              OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     InterruptibleThreshold                                      OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     TurningRightThreshold                                       OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     LeftFootStopThreshold                                       OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_Fast                                         OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_Slow                                         OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     AdditiveHipAlphaTargeting_Constant                          OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     BackwardLocomotionThreshold                                 OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     LocomotionThreshold                                         OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     PawnSpeedThreshold                                          OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(float)                                     LocomotionPlayRate_Fixed                                    OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     BoostJumpingThreshold                                       OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     BoostStartPosition_Jumping                                  OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     BoostStartPosition_NotJumping                               OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimInRangeA                                OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimInRangeB                                OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimOutRangeA                               OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimOutRangeB                               OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimInRangeA                             OFFSET(get<float>, {0x78C, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimInRangeB                             OFFSET(get<float>, {0x790, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimOutRangeA                            OFFSET(get<float>, {0x794, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimOutRangeB                            OFFSET(get<float>, {0x798, 4, 0, 0})
	DMember(float)                                     BodyTurnInterpSpeed_Accel                                   OFFSET(get<float>, {0x79C, 4, 0, 0})
	DMember(float)                                     BodyTurnInterpSpeed_NotAccel                                OFFSET(get<float>, {0x7A0, 4, 0, 0})
	DMember(float)                                     IdleAdditiveBodyTurnTarget_NotAccel                         OFFSET(get<float>, {0x7A4, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaTargeting_Targeting                        OFFSET(get<float>, {0x7A8, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaTargeting_NonTargeting                     OFFSET(get<float>, {0x7AC, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaInterpSpeed                                OFFSET(get<float>, {0x7B0, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlphaTargeting_PlayerTargeting               OFFSET(get<float>, {0x7B4, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_PlayerTargeting                              OFFSET(get<float>, {0x7B8, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlphaTargeting_NotPlayerTargeting            OFFSET(get<float>, {0x7BC, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_NotPlayerTargeting                           OFFSET(get<float>, {0x7C0, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryInRangeA                                 OFFSET(get<float>, {0x7C4, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryInRangeB                                 OFFSET(get<float>, {0x7C8, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryOutRangeA                                OFFSET(get<float>, {0x7CC, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryOutRangeB                                OFFSET(get<float>, {0x7D0, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryInRangeA                         OFFSET(get<float>, {0x7D4, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryInRangeB                         OFFSET(get<float>, {0x7D8, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryOutRangeA                        OFFSET(get<float>, {0x7DC, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryOutRangeB                        OFFSET(get<float>, {0x7E0, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryInRangeA                         OFFSET(get<float>, {0x7E4, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryInRangeB                         OFFSET(get<float>, {0x7E8, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryOutRangeA                        OFFSET(get<float>, {0x7EC, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryOutRangeB                        OFFSET(get<float>, {0x7F0, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x7F4, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x7F8, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x7FC, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x800, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x804, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x808, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x80C, 4, 0, 0})
	DMember(bool)                                      bStateRule_Idle_Moving                                      OFFSET(get<bool>, {0x810, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_Idle                                      OFFSET(get<bool>, {0x811, 1, 0, 0})
	DMember(bool)                                      bStateRule_Swimming_Fall                                    OFFSET(get<bool>, {0x812, 1, 0, 0})
	DMember(bool)                                      bStateRule_Land_Idle                                        OFFSET(get<bool>, {0x813, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Idle                                        OFFSET(get<bool>, {0x814, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Moving                                      OFFSET(get<bool>, {0x815, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimIdle_SwimLoco                                OFFSET(get<bool>, {0x816, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsTurnInPlace                                    OFFSET(get<bool>, {0x817, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsSprintStop                                     OFFSET(get<bool>, {0x818, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsStopBackwards                                  OFFSET(get<bool>, {0x819, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotion                                     OFFSET(get<bool>, {0x81A, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsFinishedTurnInPlace                            OFFSET(get<bool>, {0x81B, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsInterruptible                                  OFFSET(get<bool>, {0x81C, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsIdleTurnRight                                  OFFSET(get<bool>, {0x81D, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLeftFootStop                                   OFFSET(get<bool>, {0x81E, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsTurningRight                                   OFFSET(get<bool>, {0x81F, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsAdditiveInterruptible                          OFFSET(get<bool>, {0x820, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsBackwardLocomotion                             OFFSET(get<bool>, {0x821, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpIdleLand                                   OFFSET(get<bool>, {0x822, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsIdleTurnToIdleTurn                             OFFSET(get<bool>, {0x823, 1, 0, 0})
	DMember(bool)                                      bStateRule_BoostJumpToBoostLand                             OFFSET(get<bool>, {0x824, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpToBoostJump                                OFFSET(get<bool>, {0x825, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpToJumpLand                                 OFFSET(get<bool>, {0x826, 1, 0, 0})
	DMember(bool)                                      bStateRule_BoostFallLoopToBoostLand                         OFFSET(get<bool>, {0x827, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotionToIdle                               OFFSET(get<bool>, {0x828, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsExitLocomotionToIdle                           OFFSET(get<bool>, {0x829, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotionHoldToSecondary                      OFFSET(get<bool>, {0x82A, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotionSecondaryToHold                      OFFSET(get<bool>, {0x82B, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpAdditive                                   OFFSET(get<bool>, {0x82C, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLandAdditiveToJump                             OFFSET(get<bool>, {0x82D, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsAllowSlopeSlide                                OFFSET(get<bool>, {0x82E, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsToJumpState                                    OFFSET(get<bool>, {0x82F, 1, 0, 0})
	DMember(bool)                                      bIsRidden                                                   OFFSET(get<bool>, {0x830, 1, 0, 0})
	DMember(bool)                                      bIsStop                                                     OFFSET(get<bool>, {0x831, 1, 0, 0})
	DMember(bool)                                      bIsWalkStop                                                 OFFSET(get<bool>, {0x832, 1, 0, 0})
	DMember(float)                                     AdditiveHipAlpha                                            OFFSET(get<float>, {0x834, 4, 0, 0})
	DMember(float)                                     AdditiveBodyAlpha                                           OFFSET(get<float>, {0x838, 4, 0, 0})
	DMember(float)                                     RiderAimYaw                                                 OFFSET(get<float>, {0x83C, 4, 0, 0})
	DMember(float)                                     PlayerSlopePitch                                            OFFSET(get<float>, {0x840, 4, 0, 0})
	DMember(bool)                                      bIsPlayerTargeting                                          OFFSET(get<bool>, {0x844, 1, 0, 0})
	DMember(float)                                     AdditiveHipAlphaTargeting                                   OFFSET(get<float>, {0x848, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed                                              OFFSET(get<float>, {0x84C, 4, 0, 0})
	DMember(float)                                     IdleAdditiveBodyTurnTarget                                  OFFSET(get<float>, {0x850, 4, 0, 0})
	DMember(float)                                     BodyTurnAlpha                                               OFFSET(get<float>, {0x854, 4, 0, 0})
	DMember(float)                                     BodyTurnInterpSpeed                                         OFFSET(get<float>, {0x858, 4, 0, 0})
	DMember(float)                                     LocomotionPlayRate                                          OFFSET(get<float>, {0x85C, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlpha                                           OFFSET(get<float>, {0x860, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaTargeting                                  OFFSET(get<float>, {0x864, 4, 0, 0})
	DMember(float)                                     BoostStartPosition                                          OFFSET(get<float>, {0x868, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlpha                                        OFFSET(get<float>, {0x86C, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlphaTargeting                               OFFSET(get<float>, {0x870, 4, 0, 0})
	DMember(bool)                                      bIsAllowBoost                                               OFFSET(get<bool>, {0x874, 1, 0, 0})
	DMember(bool)                                      bIsSlopeWarpHack                                            OFFSET(get<bool>, {0x875, 1, 0, 0})
	DMember(float)                                     LocomotionHeadSecondary                                     OFFSET(get<float>, {0x878, 4, 0, 0})
	DMember(float)                                     LocomotionTailSecondary                                     OFFSET(get<float>, {0x87C, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondary                                 OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondary                                 OFFSET(get<float>, {0x884, 4, 0, 0})
	DMember(float)                                     SwimTurnYaw                                                 OFFSET(get<float>, {0x888, 4, 0, 0})
	DMember(float)                                     SwimHeadYaw                                                 OFFSET(get<float>, {0x88C, 4, 0, 0})
	DMember(bool)                                      bAnimRule_NegativeTurnAngle                                 OFFSET(get<bool>, {0x890, 1, 0, 0})
	DMember(bool)                                      bIsAccelerating2D                                           OFFSET(get<bool>, {0x891, 1, 0, 0})
	DMember(float)                                     InterruptibleMaxCheck                                       OFFSET(get<float>, {0x894, 4, 0, 0})
	DMember(float)                                     SpeedStopTransition                                         OFFSET(get<float>, {0x898, 4, 0, 0})
	DMember(float)                                     SpeedIdleMoveTransition                                     OFFSET(get<float>, {0x89C, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMin                                              OFFSET(get<float>, {0x8A0, 4, 0, 0})
	DMember(float)                                     StateTimeFromEndThreshold                                   OFFSET(get<float>, {0x8A4, 4, 0, 0})


	/// Functions
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateStateVariables
	// void UpdateStateVariables();                                                                                             // [0x9dd0c04] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateLocomotionPoseAdditiveAlpha
	// void UpdateLocomotionPoseAdditiveAlpha();                                                                                // [0x9dd0a88] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIsFullBodyInPlace
	// void UpdateIsFullBodyInPlace();                                                                                          // [0x9dd0a60] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateIdleStartTurn
	// void UpdateIdleStartTurn();                                                                                              // [0x9dd0a38] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.UpdateEnableHeadTiltDownAdditive
	// void UpdateEnableHeadTiltDownAdditive();                                                                                 // [0x9dd09c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIsFullBodyInPlace
	// bool DetermineIsFullBodyInPlace();                                                                                       // [0x9dd0918] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineIdleStartTurn
	// bool DetermineIdleStartTurn();                                                                                           // [0x9dd08f4] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.DetermineEnableHeadTiltDownAdditive
	// bool DetermineEnableHeadTiltDownAdditive();                                                                              // [0x9dd0890] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/IrwinRuntime.FortAIFaunaAnimInstance_Robert.CalculateLocomotionPoseAdditiveAlpha
	// float CalculateLocomotionPoseAdditiveAlpha();                                                                            // [0x9dd0718] Final|Native|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Smackie
/// Size: 0x0040 (0x0006F0 - 0x000730)
class UFortAIFaunaAnimInstance_Smackie : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
	DMember(bool)                                      bIsIdleShuffleTurn                                          OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   OFFSET(get<bool>, {0x6FC, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToHop                                     OFFSET(get<bool>, {0x6FD, 1, 0, 0})
	DMember(bool)                                      bCanTransitionHopToIdle                                     OFFSET(get<bool>, {0x6FE, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToIdle                                    OFFSET(get<bool>, {0x6FF, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToHop                                     OFFSET(get<bool>, {0x700, 1, 0, 0})
	DMember(float)                                     SpeedThreshold                                              OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                OFFSET(get<float>, {0x71C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                OFFSET(get<float>, {0x720, 4, 0, 0})
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
class FRidingAnimationData : public MDKBase
{ 
	friend MDKHandler;
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

