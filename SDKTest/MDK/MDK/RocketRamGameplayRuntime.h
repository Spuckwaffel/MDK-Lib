
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTasks

/// Class /Script/RocketRamGameplayRuntime.AbilityTask_ApplyRootMotion_RocketRam
/// Size: 0x0050 (0x000100 - 0x000150)
class UAbilityTask_ApplyRootMotion_RocketRam : public UAbilityTask_ApplyRootMotionConstantForce
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FVector)                                   InitialDirection                                            OFFSET(getStruct<T>, {0x100, 24, 0, 0})
	SMember(FVector)                                   EndingDirection                                             OFFSET(getStruct<T>, {0x118, 24, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x134, 4, 0, 0})
	CMember(UCurveFloat*)                              SpeedCurve                                                  OFFSET(get<T>, {0x138, 8, 0, 0})
	DMember(float)                                     FloorTraceHeight                                            OFFSET(get<float>, {0x140, 4, 0, 0})
	CMember(UCurveVector*)                             PathOffsetCurve                                             OFFSET(get<T>, {0x148, 8, 0, 0})


	/// Functions
	// Function /Script/RocketRamGameplayRuntime.AbilityTask_ApplyRootMotion_RocketRam.ApplyRootMotion_RocketRam
	// UAbilityTask_ApplyRootMotion_RocketRam* ApplyRootMotion_RocketRam(UGameplayAbility* InOwningAbility, FName InTaskInstanceName, float InDuration, FVector InInitialDirection, FVector InEndingDirection, float InMinSpeed, float InMaxSpeed, UCurveFloat* InSpeedCurve, float InFloorTraceHeight, UCurveVector* InPathOffsetCurve, ERootMotionFinishVelocityMode InVelocityOnFinishMode, FVector InSetVelocityOnFinish, float InClampVelocityOnFinish); // [0xa16a25c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/RocketRamGameplayRuntime.RocketRamItemLayerAnimInstance
/// Size: 0x00D0 (0x0006D0 - 0x0007A0)
class URocketRamItemLayerAnimInstance : public UFortItemLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1952;

public:
	DMember(bool)                                      bIsRRWindUp                                                 OFFSET(get<bool>, {0x6C8, 1, 0, 0})
	DMember(bool)                                      bIsRRSlowAcceleration                                       OFFSET(get<bool>, {0x6C9, 1, 0, 0})
	DMember(bool)                                      bIsRRActiveThrust                                           OFFSET(get<bool>, {0x6CA, 1, 0, 0})
	DMember(bool)                                      bIsRRFreeFall                                               OFFSET(get<bool>, {0x6CB, 1, 0, 0})
	DMember(bool)                                      bIsRRFastFreeFall                                           OFFSET(get<bool>, {0x6CC, 1, 0, 0})
	DMember(bool)                                      bIsRRBraking                                                OFFSET(get<bool>, {0x6CD, 1, 0, 0})
	DMember(bool)                                      bIsRRRecovery                                               OFFSET(get<bool>, {0x6CE, 1, 0, 0})
	DMember(bool)                                      bIsRRRecoveryDelayed                                        OFFSET(get<bool>, {0x6CF, 1, 0, 0})
	DMember(bool)                                      bIsRRRecoveryHalfSecDelay                                   OFFSET(get<bool>, {0x6D0, 1, 0, 0})
	DMember(bool)                                      bIsRROff                                                    OFFSET(get<bool>, {0x6D1, 1, 0, 0})
	DMember(bool)                                      bIsFalling                                                  OFFSET(get<bool>, {0x6D2, 1, 0, 0})
	DMember(bool)                                      bIsSliding                                                  OFFSET(get<bool>, {0x6D3, 1, 0, 0})
	DMember(bool)                                      bIsCrouchingLocal                                           OFFSET(get<bool>, {0x6D4, 1, 0, 0})
	DMember(float)                                     XInput                                                      OFFSET(get<float>, {0x6D8, 4, 0, 0})
	DMember(float)                                     YInput                                                      OFFSET(get<float>, {0x6DC, 4, 0, 0})
	DMember(float)                                     pitch                                                       OFFSET(get<float>, {0x6E0, 4, 0, 0})
	DMember(float)                                     Yaw                                                         OFFSET(get<float>, {0x6E4, 4, 0, 0})
	DMember(float)                                     WallImpactPitch                                             OFFSET(get<float>, {0x6E8, 4, 0, 0})
	DMember(float)                                     WallImpactYaw                                               OFFSET(get<float>, {0x6EC, 4, 0, 0})
	SMember(FVector)                                   WeaponLaunchDirection                                       OFFSET(getStruct<T>, {0x6F0, 24, 0, 0})
	DMember(bool)                                      bIsBoneRotOn                                                OFFSET(get<bool>, {0x708, 1, 0, 0})
	DMember(bool)                                      bIsPitchAndYawRot                                           OFFSET(get<bool>, {0x709, 1, 0, 0})
	DMember(bool)                                      bIsNoMortar                                                 OFFSET(get<bool>, {0x70A, 1, 0, 0})
	DMember(bool)                                      bIsGoingUp                                                  OFFSET(get<bool>, {0x70B, 1, 0, 0})
	DMember(bool)                                      bIsJumpFromGround                                           OFFSET(get<bool>, {0x70C, 1, 0, 0})
	DMember(bool)                                      bIsMoving2DLocal                                            OFFSET(get<bool>, {0x70D, 1, 0, 0})
	DMember(float)                                     AdditiveSquatAlpha                                          OFFSET(get<float>, {0x710, 4, 0, 0})
	DMember(float)                                     JumpAddCurveAlpha                                           OFFSET(get<float>, {0x714, 4, 0, 0})
	DMember(float)                                     ArmsHeadAddAlpha                                            OFFSET(get<float>, {0x718, 4, 0, 0})
	DMember(float)                                     JumpAddOffsetAlpha                                          OFFSET(get<float>, {0x71C, 4, 0, 0})
	DMember(bool)                                      bIsImpactWallBackup                                         OFFSET(get<bool>, {0x720, 1, 0, 0})
	DMember(bool)                                      bIsLandingDetected                                          OFFSET(get<bool>, {0x721, 1, 0, 0})
	DMember(bool)                                      bIsWallImpact                                               OFFSET(get<bool>, {0x722, 1, 0, 0})
	DMember(bool)                                      bIsApexTimerEnd                                             OFFSET(get<bool>, {0x723, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayerPawn                                              OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(AFortWeapon*)                              WeaponRocketRam                                             OFFSET(get<T>, {0x730, 8, 0, 0})
	DMember(float)                                     FBImpactGroundStateAlpha                                    OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(bool)                                      bFBGroundSlideToFBWait                                      OFFSET(get<bool>, {0x73C, 1, 0, 0})
	DMember(bool)                                      bFBThrustingToFBApex                                        OFFSET(get<bool>, {0x73D, 1, 0, 0})
	DMember(bool)                                      bFBApexToFBToMortar                                         OFFSET(get<bool>, {0x73E, 1, 0, 0})
	DMember(bool)                                      bFBOffGroundToFBImpactGround                                OFFSET(get<bool>, {0x73F, 1, 0, 0})
	DMember(bool)                                      bFBOffWallToFBImpactWall                                    OFFSET(get<bool>, {0x740, 1, 0, 0})
	DMember(bool)                                      bFBDetectGroundToFBToImpactGround                           OFFSET(get<bool>, {0x741, 1, 0, 0})
	DMember(float)                                     FBJumpStateAlpha                                            OFFSET(get<float>, {0x744, 4, 0, 0})
	DMember(float)                                     FBToApexStateAlpha                                          OFFSET(get<float>, {0x748, 4, 0, 0})
	DMember(bool)                                      bFBDetectSlideToFBToSlide                                   OFFSET(get<bool>, {0x74C, 1, 0, 0})
	DMember(bool)                                      bFBOffToFBWait                                              OFFSET(get<bool>, {0x74D, 1, 0, 0})
	DMember(float)                                     UBPullLeverStateAlpha                                       OFFSET(get<float>, {0x750, 4, 0, 0})
	DMember(float)                                     UBSquatStateAlpha                                           OFFSET(get<float>, {0x754, 4, 0, 0})
	DMember(float)                                     UBJumpStateAlpha                                            OFFSET(get<float>, {0x758, 4, 0, 0})
	DMember(bool)                                      bUBSquatToUBJump                                            OFFSET(get<bool>, {0x75C, 1, 0, 0})
	DMember(bool)                                      bUBJumpToUBWait                                             OFFSET(get<bool>, {0x75D, 1, 0, 0})
	DMember(bool)                                      bUBJumpToUBToGroundImpact                                   OFFSET(get<bool>, {0x75E, 1, 0, 0})
	DMember(bool)                                      bUBWaitToUBImpactGround                                     OFFSET(get<bool>, {0x75F, 1, 0, 0})
	DMember(bool)                                      bUBOffToUBWait                                              OFFSET(get<bool>, {0x760, 1, 0, 0})
};

/// Struct /Script/RocketRamGameplayRuntime.RootMotionSource_RocketRam
/// Size: 0x0060 (0x0000E0 - 0x000140)
class FRootMotionSource_RocketRam : public FRootMotionSource
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FVector)                                   InitialDirection                                            OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FVector)                                   EndingDirection                                             OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x10C, 4, 0, 0})
	CMember(UCurveFloat*)                              SpeedCurve                                                  OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(float)                                     FloorTraceHeight                                            OFFSET(get<float>, {0x118, 4, 0, 0})
	CMember(UCurveVector*)                             PathOffsetCurve                                             OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FVector)                                   PreviousEndLocationWithoutOffset                            OFFSET(getStruct<T>, {0x128, 24, 0, 0})
};

