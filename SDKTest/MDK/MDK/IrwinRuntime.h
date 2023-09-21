
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
	DMember(float)                                     AverageSpeed                                                ___ OFFSET(get<float>, {0x578, 4, 0, 0})
	DMember(float)                                     AverageSpeedTimeFrame                                       ___ OFFSET(get<float>, {0x57C, 4, 0, 0})
	DMember(bool)                                      bHasValidAimTarget                                          ___ OFFSET(get<bool>, {0x580, 1, 0, 0})
	DMember(float)                                     AimTime                                                     ___ OFFSET(get<float>, {0x584, 4, 0, 0})
	SMember(FVector)                                   AimTargetLocation                                           ___ OFFSET(get<T>, {0x588, 24, 0, 0})
	DMember(bool)                                      bIsSurfaceSwimming                                          ___ OFFSET(get<bool>, {0x5A0, 1, 0, 0})
	DMember(bool)                                      bIsMovingOnGround                                           ___ OFFSET(get<bool>, {0x5A1, 1, 0, 0})
	DMember(bool)                                      bIsInTornado                                                ___ OFFSET(get<bool>, {0x5A2, 1, 0, 0})
	DMember(float)                                     LookAtAlpha                                                 ___ OFFSET(get<float>, {0x5A4, 4, 0, 0})
	DMember(float)                                     MaxDistanceToPlayerForLookAt                                ___ OFFSET(get<float>, {0x5A8, 4, 0, 0})
	DMember(float)                                     LookAtTooFarFromPlayerTimeOut                               ___ OFFSET(get<float>, {0x5AC, 4, 0, 0})
	DMember(bool)                                      bDisableLookAtDuringMontage                                 ___ OFFSET(get<bool>, {0x5B0, 1, 0, 0})
	SMember(FName)                                     DisableHeadTrackingCurveName                                ___ OFFSET(get<T>, {0x5B4, 4, 0, 0})
	SMember(FRidingAnimationData)                      RidingAnimationData                                         ___ OFFSET(get<T>, {0x5B8, 20, 0, 0})
	DMember(bool)                                      bIsSlopeSliding                                             ___ OFFSET(get<bool>, {0x5CC, 1, 0, 0})
	DMember(float)                                     SlopeSlidingPitch                                           ___ OFFSET(get<float>, {0x5D0, 4, 0, 0})
	DMember(float)                                     SlopeSlidingRoll                                            ___ OFFSET(get<float>, {0x5D4, 4, 0, 0})
	DMember(float)                                     RidingMovePlayRate                                          ___ OFFSET(get<float>, {0x5D8, 4, 0, 0})
	DMember(bool)                                      bJustGotPlayer                                              ___ OFFSET(get<bool>, {0x5DC, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 ___ OFFSET(get<bool>, {0x5DD, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           ___ OFFSET(get<bool>, {0x5DE, 1, 0, 0})
	DMember(float)                                     TurnInPlaceRotationSpeed                                    ___ OFFSET(get<float>, {0x5E0, 4, 0, 0})
	DMember(float)                                     TurnInPlaceAngleDelta                                       ___ OFFSET(get<float>, {0x5E4, 4, 0, 0})
	DMember(bool)                                      bIsMovingBackwards                                          ___ OFFSET(get<bool>, {0x5E8, 1, 0, 0})
	DMember(float)                                     RiderReferentialYaw                                         ___ OFFSET(get<float>, {0x5EC, 4, 0, 0})
	DMember(float)                                     BoostPlayRate                                               ___ OFFSET(get<float>, {0x5F0, 4, 0, 0})
	DMember(bool)                                      bIsTurnInPlaceAngleDeltaPositive                            ___ OFFSET(get<bool>, {0x5F4, 1, 0, 0})
	DMember(bool)                                      bPlayLandAdditive                                           ___ OFFSET(get<bool>, {0x5F5, 1, 0, 0})
	DMember(float)                                     BackwardVelocity                                            ___ OFFSET(get<float>, {0x5F8, 4, 0, 0})
	DMember(bool)                                      bShouldPlayStopBackwards                                    ___ OFFSET(get<bool>, {0x5FC, 1, 0, 0})
	DMember(float)                                     SwimmingYaw                                                 ___ OFFSET(get<float>, {0x600, 4, 0, 0})
	DMember(float)                                     BackwardsPlayRate                                           ___ OFFSET(get<float>, {0x604, 4, 0, 0})
	DMember(float)                                     BodyRoll                                                    ___ OFFSET(get<float>, {0x608, 4, 0, 0})
	DMember(float)                                     TurnAngleStored                                             ___ OFFSET(get<float>, {0x60C, 4, 0, 0})
	DMember(bool)                                      bWasTurningRight                                            ___ OFFSET(get<bool>, {0x610, 1, 0, 0})
	CMember(ERidingFootPhase)                          FootPhase                                                   ___ OFFSET(get<T>, {0x611, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FeetInAir                                      ___ OFFSET(get<bool>, {0x612, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FrontFeetPlanted                               ___ OFFSET(get<bool>, {0x613, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_BackFeetPlanted                                ___ OFFSET(get<bool>, {0x614, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftBackFeetForward                            ___ OFFSET(get<bool>, {0x615, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightBackFeetForward                           ___ OFFSET(get<bool>, {0x616, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftPlantedRightPass                           ___ OFFSET(get<bool>, {0x617, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightPlantedLeftPass                           ___ OFFSET(get<bool>, {0x618, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SlipstreamTags                                              ___ OFFSET(get<T>, {0x620, 32, 0, 0})
	DMember(bool)                                      bIsInSlipstream                                             ___ OFFSET(get<bool>, {0x640, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SkydivingTags                                               ___ OFFSET(get<T>, {0x648, 32, 0, 0})
	DMember(bool)                                      bMovementMode_Skydiving                                     ___ OFFSET(get<bool>, {0x668, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SkytubingTags                                               ___ OFFSET(get<T>, {0x670, 32, 0, 0})
	DMember(bool)                                      bGameplay_Status_Skytubing                                  ___ OFFSET(get<bool>, {0x690, 1, 0, 0})
	DMember(bool)                                      bIsAbducted                                                 ___ OFFSET(get<bool>, {0x691, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TractorBeamTags                                             ___ OFFSET(get<T>, {0x698, 32, 0, 0})
	DMember(bool)                                      bIsInTractorBeam                                            ___ OFFSET(get<bool>, {0x6B8, 1, 0, 0})
	DMember(bool)                                      bIsFloating                                                 ___ OFFSET(get<bool>, {0x6B9, 1, 0, 0})
	DMember(float)                                     JustGotPlayerInitialDelaySec                                ___ OFFSET(get<float>, {0x6BC, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt
/// Size: 0x00A0 (0x0006E0 - 0x000780)
class UFortAIFaunaAnimInstance_Burt : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
	DMember(float)                                     MovingPlayRate                                              ___ OFFSET(get<float>, {0x6D8, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha                                 ___ OFFSET(get<float>, {0x6DC, 4, 0, 0})
	DMember(bool)                                      bEnableHeadTiltUpAdditive                                   ___ OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	DMember(bool)                                      bTurnAngleIsNegative                                        ___ OFFSET(get<bool>, {0x6E1, 1, 0, 0})
	SMember(FName)                                     DisableLocomotionAdditiveCurveName                          ___ OFFSET(get<T>, {0x6E4, 4, 0, 0})
	SMember(FName)                                     InterruptibleCurveName                                      ___ OFFSET(get<T>, {0x6E8, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          ___ OFFSET(get<bool>, {0x6EC, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         ___ OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         ___ OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   ___ OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(bool)                                      bIsMoving                                                   ___ OFFSET(get<bool>, {0x6F9, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToApex                                    ___ OFFSET(get<bool>, {0x6FA, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToMoving                                  ___ OFFSET(get<bool>, {0x6FB, 1, 0, 0})
	DMember(bool)                                      bCanTransitionMovingToIdle                                  ___ OFFSET(get<bool>, {0x6FC, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLandToIdle                                    ___ OFFSET(get<bool>, {0x6FD, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLandToJumpStart                               ___ OFFSET(get<bool>, {0x6FE, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpStartToApex                               ___ OFFSET(get<bool>, {0x6FF, 1, 0, 0})
	DMember(bool)                                      bCanTransitionApexToFall                                    ___ OFFSET(get<bool>, {0x700, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToLand                                    ___ OFFSET(get<bool>, {0x701, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToIdle                                ___ OFFSET(get<bool>, {0x702, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToIdle                          ___ OFFSET(get<bool>, {0x703, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToMoving                        ___ OFFSET(get<bool>, {0x704, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToMoving                              ___ OFFSET(get<bool>, {0x705, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToMoving                                  ___ OFFSET(get<bool>, {0x706, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToIdle                                    ___ OFFSET(get<bool>, {0x707, 1, 0, 0})
	DMember(float)                                     MovingPlayRate_SpeedThreshold                               ___ OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_SlowSpeedDivisor                             ___ OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_FastSpeedDivisor                             ___ OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MinClamp                                     ___ OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MaxClamp                                     ___ OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_InterpSpeed                                  ___ OFFSET(get<float>, {0x71C, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha_InterpSpeed                     ___ OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(float)                                     EnableHeadTiltUpAdditive_PawnUniqueIDMultiplier             ___ OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     EnableHeadTiltUpAdditive_ModOperand                         ___ OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveValue_LargeThreshold                      ___ OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveValue_TurnAngleThreshold                  ___ OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     Speed_MovingThreshold                                       ___ OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     Speed_IdleThreshold                                         ___ OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     TurnAngle_LargeThreshold                                    ___ OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     Speed_RidingMovingThreshold                                 ___ OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     Speed_RidingIdleThreshold                                   ___ OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               ___ OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    ___ OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           ___ OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 ___ OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 ___ OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                ___ OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                ___ OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     MinSpeedSlowRidingMovePlayRate                              ___ OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     SpeedSlowDivisorRidingMovePlayRate                          ___ OFFSET(get<float>, {0x768, 4, 0, 0})
	SMember(FMapRangeClamped_Ranges)                   RidingMovePlayRate_Ranges                                   ___ OFFSET(get<T>, {0x76C, 16, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Burt_Hitchhiker
/// Size: 0x0010 (0x000780 - 0x000790)
class UFortAIFaunaAnimInstance_Burt_Hitchhiker : public UFortAIFaunaAnimInstance_Burt
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1936;

public:
	DMember(bool)                                      IsFloating                                                  ___ OFFSET(get<bool>, {0x780, 1, 0, 0})
	DMember(bool)                                      IsInTractorBeam                                             ___ OFFSET(get<bool>, {0x781, 1, 0, 0})
	DMember(bool)                                      IsHitchhiked                                                ___ OFFSET(get<bool>, {0x782, 1, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Crow
/// Size: 0x0030 (0x0006E0 - 0x000710)
class UFortAIFaunaAnimInstance_Crow : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	DMember(float)                                     WingFlapPlayRate                                            ___ OFFSET(get<float>, {0x6D8, 4, 0, 0})
	DMember(bool)                                      bIsDescending                                               ___ OFFSET(get<bool>, {0x6DC, 1, 0, 0})
	DMember(bool)                                      bIsGliding                                                  ___ OFFSET(get<bool>, {0x6DD, 1, 0, 0})
	DMember(bool)                                      bIsFlying                                                   ___ OFFSET(get<bool>, {0x6DE, 1, 0, 0})
	DMember(bool)                                      bIsFlyingSlow                                               ___ OFFSET(get<bool>, {0x6DF, 1, 0, 0})
	DMember(bool)                                      bIsLanding                                                  ___ OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	DMember(float)                                     WingFlapPlayRateInRangeA                                    ___ OFFSET(get<float>, {0x6E4, 4, 0, 0})
	DMember(float)                                     WingFlapPlayRateInRangeB                                    ___ OFFSET(get<float>, {0x6E8, 4, 0, 0})
	DMember(float)                                     WingFlapPlayRateOutRangeA                                   ___ OFFSET(get<float>, {0x6EC, 4, 0, 0})
	DMember(float)                                     WingFlapPlayRateOutRangeB                                   ___ OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(float)                                     ZVelocityDescendingThreshold                                ___ OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(float)                                     GlidingSpeedThreshold                                       ___ OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(float)                                     FlyingSpeedThreshold                                        ___ OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     FlyingSlowSpeedThreshold                                    ___ OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(float)                                     LandingSpeedThreshold                                       ___ OFFSET(get<float>, {0x704, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Grandma
/// Size: 0x00C0 (0x0006E0 - 0x0007A0)
class UFortAIFaunaAnimInstance_Grandma : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	CMember(AFortAIPawn*)                              AIPawn                                                      ___ OFFSET(get<T>, {0x6D8, 8, 0, 0})
	DMember(float)                                     MeshScale                                                   ___ OFFSET(get<float>, {0x6E0, 4, 0, 0})
	DMember(bool)                                      bShouldPlayFullBodyInPlace                                  ___ OFFSET(get<bool>, {0x6E4, 1, 0, 0})
	DMember(float)                                     BlinkAlpha                                                  ___ OFFSET(get<float>, {0x6E8, 4, 0, 0})
	DMember(float)                                     WalkRunPlayRate                                             ___ OFFSET(get<float>, {0x6EC, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha                                 ___ OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(bool)                                      bEnableSniffAdditive                                        ___ OFFSET(get<bool>, {0x6F4, 1, 0, 0})
	DMember(bool)                                      bEnableAlertAdditive                                        ___ OFFSET(get<bool>, {0x6F5, 1, 0, 0})
	DMember(bool)                                      bIdleStartTurn                                              ___ OFFSET(get<bool>, {0x6F6, 1, 0, 0})
	DMember(bool)                                      bLookAtAdditiveTurnAlpha                                    ___ OFFSET(get<bool>, {0x6F7, 1, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          ___ OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         ___ OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         ___ OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   ___ OFFSET(get<bool>, {0x704, 1, 0, 0})
	DMember(float)                                     TurnInPlaceModulatedSpeed                                   ___ OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     MaxSpeedFullBodyInPlace                                     ___ OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     MinCurveValueFullBodyInPlace                                ___ OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlphaInterpRate                       ___ OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(int32_t)                                   SniffAdditiveFrequenceySeconds                              ___ OFFSET(get<int32_t>, {0x718, 4, 0, 0})
	DMember(int32_t)                                   AlertAdditiveFrequenceySeconds                              ___ OFFSET(get<int32_t>, {0x71C, 4, 0, 0})
	DMember(int32_t)                                   PawnIDScale                                                 ___ OFFSET(get<int32_t>, {0x720, 4, 0, 0})
	SMember(FName)                                     ShouldPlayFullBodyInPlaceCurveName                          ___ OFFSET(get<T>, {0x724, 4, 0, 0})
	SMember(FName)                                     BlinkAlphaCurveName                                         ___ OFFSET(get<T>, {0x728, 4, 0, 0})
	DMember(float)                                     IdleStartTurnInterruptibleThreshold                         ___ OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               ___ OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    ___ OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           ___ OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     LookAtAdditiveTurnAlphaThreshold                            ___ OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 ___ OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 ___ OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                ___ OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                ___ OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     TurnInPlaceModulatedSpeedFactor                             ___ OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(bool)                                      bIsMovingOnGroundORIsSurfaceSwimming                        ___ OFFSET(get<bool>, {0x754, 1, 0, 0})
	DMember(bool)                                      bStateRule_DefaultJump_ToJumpApex                           ___ OFFSET(get<bool>, {0x755, 1, 0, 0})
	DMember(bool)                                      bStateRule_TurnIdle_Idle                                    ___ OFFSET(get<bool>, {0x756, 1, 0, 0})
	DMember(bool)                                      bStateRule_TurnIdle_Moving                                  ___ OFFSET(get<bool>, {0x757, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_TurnIdle                                  ___ OFFSET(get<bool>, {0x758, 1, 0, 0})
	DMember(bool)                                      bStateRule_TurnMoving_Moving                                ___ OFFSET(get<bool>, {0x759, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_TurnMoving                                ___ OFFSET(get<bool>, {0x75A, 1, 0, 0})
	DMember(bool)                                      bStateRule_Idle_Moving                                      ___ OFFSET(get<bool>, {0x75B, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_Idle                                      ___ OFFSET(get<bool>, {0x75C, 1, 0, 0})
	DMember(bool)                                      bStateRule_JumpLand_Idle                                    ___ OFFSET(get<bool>, {0x75D, 1, 0, 0})
	DMember(bool)                                      bStateRule_JumpLand_Moving                                  ___ OFFSET(get<bool>, {0x75E, 1, 0, 0})
	DMember(bool)                                      bStateRule_JumpStart_JumpApex                               ___ OFFSET(get<bool>, {0x75F, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Moving                                      ___ OFFSET(get<bool>, {0x760, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Idle                                        ___ OFFSET(get<bool>, {0x761, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimIdle_SwimLoco                                ___ OFFSET(get<bool>, {0x762, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimLoco_SwimIdle                                ___ OFFSET(get<bool>, {0x763, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimTurn_SwimIdle                                ___ OFFSET(get<bool>, {0x764, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimTurn_SwimLoco                                ___ OFFSET(get<bool>, {0x765, 1, 0, 0})
	DMember(bool)                                      bAnimRule_NegativeTurnAngle                                 ___ OFFSET(get<bool>, {0x766, 1, 0, 0})
	DMember(float)                                     InterruptibleMaxCheck                                       ___ OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(float)                                     SpeedStopTransition                                         ___ OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     SpeedIdleMoveTransition                                     ___ OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     SpeedMovingTurnIdleTransition                               ___ OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMin                                              ___ OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMinWhileRiding                                   ___ OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMinWhileAcceleratingAndRiding                    ___ OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(float)                                     StateTimeFromEndThreshold                                   ___ OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     SpeedIdleStartTurnThreshold                                 ___ OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(float)                                     SpeedFallMovingThreshold                                    ___ OFFSET(get<float>, {0x78C, 4, 0, 0})
};

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
	DMember(bool)                                      bIsBeingHeld                                                ___ OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	DMember(bool)                                      bIsBeingThrown                                              ___ OFFSET(get<bool>, {0x6D9, 1, 0, 0})
	DMember(float)                                     LowerBodyMaskAlpha                                          ___ OFFSET(get<float>, {0x6DC, 4, 0, 0})
	DMember(bool)                                      bShouldExitJump                                             ___ OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	DMember(float)                                     MovingPlayRate                                              ___ OFFSET(get<float>, {0x6E4, 4, 0, 0})
	DMember(bool)                                      bShouldLean                                                 ___ OFFSET(get<bool>, {0x6E8, 1, 0, 0})
	DMember(float)                                     LeanDirection                                               ___ OFFSET(get<float>, {0x6EC, 4, 0, 0})
	DMember(bool)                                      bTurnAngleIsNegative                                        ___ OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	SMember(FName)                                     InterruptibleCurveName                                      ___ OFFSET(get<T>, {0x6F4, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          ___ OFFSET(get<bool>, {0x6F8, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         ___ OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         ___ OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   ___ OFFSET(get<bool>, {0x704, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToIdleTurn                                ___ OFFSET(get<bool>, {0x705, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToLocomotionTurn                          ___ OFFSET(get<bool>, {0x706, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToMoving                                  ___ OFFSET(get<bool>, {0x707, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToJumpApex                                ___ OFFSET(get<bool>, {0x708, 1, 0, 0})
	DMember(bool)                                      bCanTransitionMovingToIdle                                  ___ OFFSET(get<bool>, {0x709, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpStartToJumpApex                           ___ OFFSET(get<bool>, {0x70A, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpApexToJumpLoop                            ___ OFFSET(get<bool>, {0x70B, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToIdle                          ___ OFFSET(get<bool>, {0x70C, 1, 0, 0})
	DMember(bool)                                      bCanTransitionLocomotionTurnToMoving                        ___ OFFSET(get<bool>, {0x70D, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToMoving                              ___ OFFSET(get<bool>, {0x70E, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleTurnToIdle                                ___ OFFSET(get<bool>, {0x70F, 1, 0, 0})
	DMember(bool)                                      bCanTransitionJumpLoopToJumpLand                            ___ OFFSET(get<bool>, {0x710, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIsBeingHeldToChickenChuck                     ___ OFFSET(get<bool>, {0x711, 1, 0, 0})
	DMember(float)                                     ShouldExitJump_SpeedThreshold                               ___ OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_SpeedThreshold                               ___ OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_SlowSpeedDivisor                             ___ OFFSET(get<float>, {0x71C, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_FastSpeedDivisor                             ___ OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_InterpSpeed                                  ___ OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MinClamp                                     ___ OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     MovingPlayRate_MaxClamp                                     ___ OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     LeanDirection_SpeedThreshold                                ___ OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     ShouldLean_SpeedThreshold                                   ___ OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     InterruptibleCurveValue_LargeThreshold                      ___ OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     Speed_MovingThreshold                                       ___ OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     Speed_IdleThreshold                                         ___ OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     IdleTurnTransition_SpeedThreshold                           ___ OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     LocomotionTurnTransition_SpeedThreshold                     ___ OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               ___ OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    ___ OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           ___ OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 ___ OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 ___ OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                ___ OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                ___ OFFSET(get<float>, {0x764, 4, 0, 0})
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
	CMember(AFortAIPawn*)                              AIPawn                                                      ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	DMember(bool)                                      bIdleStartTurn                                              ___ OFFSET(get<bool>, {0x6E8, 1, 0, 0})
	DMember(bool)                                      bEnableHeadTiltDownAdditive                                 ___ OFFSET(get<bool>, {0x6E9, 1, 0, 0})
	DMember(bool)                                      bIsFullBodyInPlace                                          ___ OFFSET(get<bool>, {0x6EA, 1, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlpha                                 ___ OFFSET(get<float>, {0x6EC, 4, 0, 0})
	DMember(bool)                                      bIsIdleShuffleTurn                                          ___ OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         ___ OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         ___ OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   ___ OFFSET(get<bool>, {0x6FC, 1, 0, 0})
	DMember(bool)                                      bLookAtAdditiveTurnAlpha                                    ___ OFFSET(get<bool>, {0x6FD, 1, 0, 0})
	DMember(bool)                                      bTurnDirection                                              ___ OFFSET(get<bool>, {0x6FE, 1, 0, 0})
	DMember(int32_t)                                   PawnIDScale                                                 ___ OFFSET(get<int32_t>, {0x700, 4, 0, 0})
	DMember(int32_t)                                   HeadTiltDownAdditiveFrequenceySeconds                       ___ OFFSET(get<int32_t>, {0x704, 4, 0, 0})
	DMember(float)                                     ForceFullBodyTransition                                     ___ OFFSET(get<float>, {0x708, 4, 0, 0})
	DMember(float)                                     LocomotionPoseAdditiveAlphaInterpRate                       ___ OFFSET(get<float>, {0x70C, 4, 0, 0})
	DMember(float)                                     IdleStartTurnInterruptibleThreshold                         ___ OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(float)                                     LookAtAlphaThreshold                                        ___ OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     SpeedMovingThreshold                                        ___ OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(float)                                     TurnDirectionThreshold                                      ___ OFFSET(get<float>, {0x71C, 4, 0, 0})
	DMember(float)                                     SprintStopThreshold                                         ___ OFFSET(get<float>, {0x720, 4, 0, 0})
	DMember(float)                                     WalkStopThreshold                                           ___ OFFSET(get<float>, {0x724, 4, 0, 0})
	DMember(float)                                     BackwardStopThreshold                                       ___ OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(float)                                     AdditiveInterruptibleThreshold                              ___ OFFSET(get<float>, {0x72C, 4, 0, 0})
	DMember(float)                                     InterruptibleThreshold                                      ___ OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     TurningRightThreshold                                       ___ OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     LeftFootStopThreshold                                       ___ OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_Fast                                         ___ OFFSET(get<float>, {0x73C, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_Slow                                         ___ OFFSET(get<float>, {0x740, 4, 0, 0})
	DMember(float)                                     AdditiveHipAlphaTargeting_Constant                          ___ OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     BackwardLocomotionThreshold                                 ___ OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(float)                                     LocomotionThreshold                                         ___ OFFSET(get<float>, {0x74C, 4, 0, 0})
	DMember(float)                                     PawnSpeedThreshold                                          ___ OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     LocomotionPlayRate_Fixed                                    ___ OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     BoostJumpingThreshold                                       ___ OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(float)                                     BoostStartPosition_Jumping                                  ___ OFFSET(get<float>, {0x75C, 4, 0, 0})
	DMember(float)                                     BoostStartPosition_NotJumping                               ___ OFFSET(get<float>, {0x760, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimInRangeA                                ___ OFFSET(get<float>, {0x764, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimInRangeB                                ___ OFFSET(get<float>, {0x768, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimOutRangeA                               ___ OFFSET(get<float>, {0x76C, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnSwimOutRangeB                               ___ OFFSET(get<float>, {0x770, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimInRangeA                             ___ OFFSET(get<float>, {0x774, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimInRangeB                             ___ OFFSET(get<float>, {0x778, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimOutRangeA                            ___ OFFSET(get<float>, {0x77C, 4, 0, 0})
	DMember(float)                                     AdditiveBodyTurnNotSwimOutRangeB                            ___ OFFSET(get<float>, {0x780, 4, 0, 0})
	DMember(float)                                     BodyTurnInterpSpeed_Accel                                   ___ OFFSET(get<float>, {0x784, 4, 0, 0})
	DMember(float)                                     BodyTurnInterpSpeed_NotAccel                                ___ OFFSET(get<float>, {0x788, 4, 0, 0})
	DMember(float)                                     IdleAdditiveBodyTurnTarget_NotAccel                         ___ OFFSET(get<float>, {0x78C, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaTargeting_Targeting                        ___ OFFSET(get<float>, {0x790, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaTargeting_NonTargeting                     ___ OFFSET(get<float>, {0x794, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaInterpSpeed                                ___ OFFSET(get<float>, {0x798, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlphaTargeting_PlayerTargeting               ___ OFFSET(get<float>, {0x79C, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_PlayerTargeting                              ___ OFFSET(get<float>, {0x7A0, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlphaTargeting_NotPlayerTargeting            ___ OFFSET(get<float>, {0x7A4, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed_NotPlayerTargeting                           ___ OFFSET(get<float>, {0x7A8, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryInRangeA                                 ___ OFFSET(get<float>, {0x7AC, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryInRangeB                                 ___ OFFSET(get<float>, {0x7B0, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryOutRangeA                                ___ OFFSET(get<float>, {0x7B4, 4, 0, 0})
	DMember(float)                                     LocomotionSecondaryOutRangeB                                ___ OFFSET(get<float>, {0x7B8, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryInRangeA                         ___ OFFSET(get<float>, {0x7BC, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryInRangeB                         ___ OFFSET(get<float>, {0x7C0, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryOutRangeA                        ___ OFFSET(get<float>, {0x7C4, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondaryOutRangeB                        ___ OFFSET(get<float>, {0x7C8, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryInRangeA                         ___ OFFSET(get<float>, {0x7CC, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryInRangeB                         ___ OFFSET(get<float>, {0x7D0, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryOutRangeA                        ___ OFFSET(get<float>, {0x7D4, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondaryOutRangeB                        ___ OFFSET(get<float>, {0x7D8, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               ___ OFFSET(get<float>, {0x7DC, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    ___ OFFSET(get<float>, {0x7E0, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           ___ OFFSET(get<float>, {0x7E4, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 ___ OFFSET(get<float>, {0x7E8, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 ___ OFFSET(get<float>, {0x7EC, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                ___ OFFSET(get<float>, {0x7F0, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                ___ OFFSET(get<float>, {0x7F4, 4, 0, 0})
	DMember(bool)                                      bStateRule_Idle_Moving                                      ___ OFFSET(get<bool>, {0x7F8, 1, 0, 0})
	DMember(bool)                                      bStateRule_Moving_Idle                                      ___ OFFSET(get<bool>, {0x7F9, 1, 0, 0})
	DMember(bool)                                      bStateRule_Swimming_Fall                                    ___ OFFSET(get<bool>, {0x7FA, 1, 0, 0})
	DMember(bool)                                      bStateRule_Land_Idle                                        ___ OFFSET(get<bool>, {0x7FB, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Idle                                        ___ OFFSET(get<bool>, {0x7FC, 1, 0, 0})
	DMember(bool)                                      bStateRule_Fall_Moving                                      ___ OFFSET(get<bool>, {0x7FD, 1, 0, 0})
	DMember(bool)                                      bStateRule_SwimIdle_SwimLoco                                ___ OFFSET(get<bool>, {0x7FE, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsTurnInPlace                                    ___ OFFSET(get<bool>, {0x7FF, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsSprintStop                                     ___ OFFSET(get<bool>, {0x800, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsStopBackwards                                  ___ OFFSET(get<bool>, {0x801, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotion                                     ___ OFFSET(get<bool>, {0x802, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsFinishedTurnInPlace                            ___ OFFSET(get<bool>, {0x803, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsInterruptible                                  ___ OFFSET(get<bool>, {0x804, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsIdleTurnRight                                  ___ OFFSET(get<bool>, {0x805, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLeftFootStop                                   ___ OFFSET(get<bool>, {0x806, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsTurningRight                                   ___ OFFSET(get<bool>, {0x807, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsAdditiveInterruptible                          ___ OFFSET(get<bool>, {0x808, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsBackwardLocomotion                             ___ OFFSET(get<bool>, {0x809, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpIdleLand                                   ___ OFFSET(get<bool>, {0x80A, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsIdleTurnToIdleTurn                             ___ OFFSET(get<bool>, {0x80B, 1, 0, 0})
	DMember(bool)                                      bStateRule_BoostJumpToBoostLand                             ___ OFFSET(get<bool>, {0x80C, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpToBoostJump                                ___ OFFSET(get<bool>, {0x80D, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpToJumpLand                                 ___ OFFSET(get<bool>, {0x80E, 1, 0, 0})
	DMember(bool)                                      bStateRule_BoostFallLoopToBoostLand                         ___ OFFSET(get<bool>, {0x80F, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotionToIdle                               ___ OFFSET(get<bool>, {0x810, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsExitLocomotionToIdle                           ___ OFFSET(get<bool>, {0x811, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotionHoldToSecondary                      ___ OFFSET(get<bool>, {0x812, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLocomotionSecondaryToHold                      ___ OFFSET(get<bool>, {0x813, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsJumpAdditive                                   ___ OFFSET(get<bool>, {0x814, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsLandAdditiveToJump                             ___ OFFSET(get<bool>, {0x815, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsAllowSlopeSlide                                ___ OFFSET(get<bool>, {0x816, 1, 0, 0})
	DMember(bool)                                      bStateRule_IsToJumpState                                    ___ OFFSET(get<bool>, {0x817, 1, 0, 0})
	DMember(bool)                                      bIsRidden                                                   ___ OFFSET(get<bool>, {0x818, 1, 0, 0})
	DMember(bool)                                      bIsStop                                                     ___ OFFSET(get<bool>, {0x819, 1, 0, 0})
	DMember(bool)                                      bIsWalkStop                                                 ___ OFFSET(get<bool>, {0x81A, 1, 0, 0})
	DMember(float)                                     AdditiveHipAlpha                                            ___ OFFSET(get<float>, {0x81C, 4, 0, 0})
	DMember(float)                                     AdditiveBodyAlpha                                           ___ OFFSET(get<float>, {0x820, 4, 0, 0})
	DMember(float)                                     RiderAimYaw                                                 ___ OFFSET(get<float>, {0x824, 4, 0, 0})
	DMember(float)                                     PlayerSlopePitch                                            ___ OFFSET(get<float>, {0x828, 4, 0, 0})
	DMember(bool)                                      bIsPlayerTargeting                                          ___ OFFSET(get<bool>, {0x82C, 1, 0, 0})
	DMember(float)                                     AdditiveHipAlphaTargeting                                   ___ OFFSET(get<float>, {0x830, 4, 0, 0})
	DMember(float)                                     HipInterpSpeed                                              ___ OFFSET(get<float>, {0x834, 4, 0, 0})
	DMember(float)                                     IdleAdditiveBodyTurnTarget                                  ___ OFFSET(get<float>, {0x838, 4, 0, 0})
	DMember(float)                                     BodyTurnAlpha                                               ___ OFFSET(get<float>, {0x83C, 4, 0, 0})
	DMember(float)                                     BodyTurnInterpSpeed                                         ___ OFFSET(get<float>, {0x840, 4, 0, 0})
	DMember(float)                                     LocomotionPlayRate                                          ___ OFFSET(get<float>, {0x844, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlpha                                           ___ OFFSET(get<float>, {0x848, 4, 0, 0})
	DMember(float)                                     AdditiveLeanAlphaTargeting                                  ___ OFFSET(get<float>, {0x84C, 4, 0, 0})
	DMember(float)                                     BoostStartPosition                                          ___ OFFSET(get<float>, {0x850, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlpha                                        ___ OFFSET(get<float>, {0x854, 4, 0, 0})
	DMember(float)                                     AdditiveHipStopAlphaTargeting                               ___ OFFSET(get<float>, {0x858, 4, 0, 0})
	DMember(bool)                                      bIsAllowBoost                                               ___ OFFSET(get<bool>, {0x85C, 1, 0, 0})
	DMember(bool)                                      bIsSlopeWarpHack                                            ___ OFFSET(get<bool>, {0x85D, 1, 0, 0})
	DMember(float)                                     LocomotionHeadSecondary                                     ___ OFFSET(get<float>, {0x860, 4, 0, 0})
	DMember(float)                                     LocomotionTailSecondary                                     ___ OFFSET(get<float>, {0x864, 4, 0, 0})
	DMember(float)                                     SwimCameraRotationSecondary                                 ___ OFFSET(get<float>, {0x868, 4, 0, 0})
	DMember(float)                                     SwimRaptorRotationSecondary                                 ___ OFFSET(get<float>, {0x86C, 4, 0, 0})
	DMember(float)                                     SwimTurnYaw                                                 ___ OFFSET(get<float>, {0x870, 4, 0, 0})
	DMember(float)                                     SwimHeadYaw                                                 ___ OFFSET(get<float>, {0x874, 4, 0, 0})
	DMember(bool)                                      bAnimRule_NegativeTurnAngle                                 ___ OFFSET(get<bool>, {0x878, 1, 0, 0})
	DMember(bool)                                      bIsAccelerating2D                                           ___ OFFSET(get<bool>, {0x879, 1, 0, 0})
	DMember(float)                                     InterruptibleMaxCheck                                       ___ OFFSET(get<float>, {0x87C, 4, 0, 0})
	DMember(float)                                     SpeedStopTransition                                         ___ OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(float)                                     SpeedIdleMoveTransition                                     ___ OFFSET(get<float>, {0x884, 4, 0, 0})
	DMember(float)                                     SpeedToMoveMin                                              ___ OFFSET(get<float>, {0x888, 4, 0, 0})
	DMember(float)                                     StateTimeFromEndThreshold                                   ___ OFFSET(get<float>, {0x88C, 4, 0, 0})
};

/// Class /Script/IrwinRuntime.FortAIFaunaAnimInstance_Smackie
/// Size: 0x0030 (0x0006E0 - 0x000710)
class UFortAIFaunaAnimInstance_Smackie : public UFortAIFaunaAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	DMember(bool)                                      bIsIdleShuffleTurn                                          ___ OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	DMember(float)                                     IdleShuffleBodyBend                                         ___ OFFSET(get<float>, {0x6DC, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRate                                         ___ OFFSET(get<float>, {0x6E0, 4, 0, 0})
	DMember(bool)                                      bIdleShuffleTurnDirection                                   ___ OFFSET(get<bool>, {0x6E4, 1, 0, 0})
	DMember(bool)                                      bCanTransitionIdleToHop                                     ___ OFFSET(get<bool>, {0x6E5, 1, 0, 0})
	DMember(bool)                                      bCanTransitionHopToIdle                                     ___ OFFSET(get<bool>, {0x6E6, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToIdle                                    ___ OFFSET(get<bool>, {0x6E7, 1, 0, 0})
	DMember(bool)                                      bCanTransitionFallToHop                                     ___ OFFSET(get<bool>, {0x6E8, 1, 0, 0})
	DMember(float)                                     SpeedThreshold                                              ___ OFFSET(get<float>, {0x6EC, 4, 0, 0})
	DMember(float)                                     IdleShuffleBodyBendMultiplier                               ___ OFFSET(get<float>, {0x6F0, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnThreshold                                    ___ OFFSET(get<float>, {0x6F4, 4, 0, 0})
	DMember(float)                                     IdleShuffleTurnDirectionThreshold                           ___ OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeA                                 ___ OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateInRangeB                                 ___ OFFSET(get<float>, {0x700, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeA                                ___ OFFSET(get<float>, {0x704, 4, 0, 0})
	DMember(float)                                     IdleShufflePlayRateOutRangeB                                ___ OFFSET(get<float>, {0x708, 4, 0, 0})
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
	DMember(bool)                                      bIsRidden                                                   ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bIsSprinting                                                ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bIsBeingPetted                                              ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bIsMovingBackwards                                          ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(float)                                     TurnInPlaceRotationSpeed                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     TurnInPlaceAngleDelta                                       ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     RiderReferentialYaw                                         ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

