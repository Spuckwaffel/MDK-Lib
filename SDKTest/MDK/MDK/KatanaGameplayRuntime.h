
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
/// dependency: MantisRuntime
/// dependency: ModularGameplay

/// Class /Script/KatanaGameplayRuntime.FortKatanaLayerAnimInstance
/// Size: 0x0160 (0x001600 - 0x001760)
class UFortKatanaLayerAnimInstance : public UFortMantisLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5984;

public:
	DMember(bool)                                      IsDashCharge                                                OFFSET(get<bool>, {0x15F8, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          AsFortPlayerPawn                                            OFFSET(get<T>, {0x1600, 8, 0, 0})
	DMember(bool)                                      IsBMeleeKatana                                              OFFSET(get<bool>, {0x1608, 1, 0, 0})
	DMember(float)                                     HandIKHipAttachAlpha                                        OFFSET(get<float>, {0x160C, 4, 0, 0})
	SMember(FVector)                                   LeftAttachedHandIKLoc                                       OFFSET(getStruct<T>, {0x1610, 24, 0, 0})
	SMember(FRotator)                                  LeftAttachedhandIKRot                                       OFFSET(getStruct<T>, {0x1628, 24, 0, 0})
	SMember(FVector)                                   RightWeaponLoc                                              OFFSET(getStruct<T>, {0x1640, 24, 0, 0})
	SMember(FRotator)                                  RightWeaponRot                                              OFFSET(getStruct<T>, {0x1658, 24, 0, 0})
	SMember(FVector)                                   LeftAttachedHandIKLocOffsetMED                              OFFSET(getStruct<T>, {0x1670, 24, 0, 0})
	SMember(FRotator)                                  LeftAttachedHandIKRotOffset                                 OFFSET(getStruct<T>, {0x1688, 24, 0, 0})
	SMember(FVector)                                   RightWeaponLocOffsetMED                                     OFFSET(getStruct<T>, {0x16A0, 24, 0, 0})
	SMember(FRotator)                                  RightWeaponRotOffset                                        OFFSET(getStruct<T>, {0x16B8, 24, 0, 0})
	DMember(float)                                     LocalLeftHandIKAlpha                                        OFFSET(get<float>, {0x16D0, 4, 0, 0})
	DMember(float)                                     LocalRightHandIKAlpha                                       OFFSET(get<float>, {0x16D4, 4, 0, 0})
	DMember(bool)                                      IsDashAttack                                                OFFSET(get<bool>, {0x16D8, 1, 0, 0})
	DMember(bool)                                      IsDashOutro                                                 OFFSET(get<bool>, {0x16D9, 1, 0, 0})
	DMember(float)                                     PelvisAOAlpha                                               OFFSET(get<float>, {0x16DC, 4, 0, 0})
	DMember(float)                                     ClampedAimPitch                                             OFFSET(get<float>, {0x16E0, 4, 0, 0})
	DMember(bool)                                      EarlyExitFromDashOutro                                      OFFSET(get<bool>, {0x16E4, 1, 0, 0})
	DMember(bool)                                      IsTechniqueActive                                           OFFSET(get<bool>, {0x16E5, 1, 0, 0})
	DMember(bool)                                      IsPrimaryAttack                                             OFFSET(get<bool>, {0x16E6, 1, 0, 0})
	DMember(float)                                     WeaponHipAttachAlpha                                        OFFSET(get<float>, {0x16E8, 4, 0, 0})
	SMember(FVector)                                   LeftAttachedHandIKLocOffsetLRG                              OFFSET(getStruct<T>, {0x16F0, 24, 0, 0})
	SMember(FVector)                                   RightWeaponLocOffsetLRG                                     OFFSET(getStruct<T>, {0x1708, 24, 0, 0})
	DMember(float)                                     FeetCorrectionAlpha                                         OFFSET(get<float>, {0x1720, 4, 0, 0})
	DMember(bool)                                      IsInAirAttackLeap                                           OFFSET(get<bool>, {0x1724, 1, 0, 0})
	DMember(bool)                                      ShouldStartDashOutro                                        OFFSET(get<bool>, {0x1725, 1, 0, 0})
	DMember(bool)                                      StartedDashOutro                                            OFFSET(get<bool>, {0x1726, 1, 0, 0})
	SMember(FScalableFloat)                            DashRootMotionDuration                                      OFFSET(getStruct<T>, {0x1728, 40, 0, 0})
	DMember(bool)                                      IsPrimaryAttack2                                            OFFSET(get<bool>, {0x1750, 1, 0, 0})
	DMember(bool)                                      IsAirAttackSlam                                             OFFSET(get<bool>, {0x1751, 1, 0, 0})
	DMember(bool)                                      TransitionRuleToDefault                                     OFFSET(get<bool>, {0x1752, 1, 0, 0})
	DMember(bool)                                      IsGrindRailSwing                                            OFFSET(get<bool>, {0x1753, 1, 0, 0})
	DMember(float)                                     DashChargePlayRate                                          OFFSET(get<float>, {0x1754, 4, 0, 0})
};

/// Class /Script/KatanaGameplayRuntime.FortKatanaWeaponAnimInstance
/// Size: 0x0150 (0x001600 - 0x001750)
class UFortKatanaWeaponAnimInstance : public UFortMantisLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5968;

public:
	CMember(AFortPlayerPawn*)                          AsFortPlayerPawn                                            OFFSET(get<T>, {0x15F8, 8, 0, 0})
	CMember(AFortWeapon*)                              BMeleeKatanaAsWeapon                                        OFFSET(get<T>, {0x1600, 8, 0, 0})
	DMember(bool)                                      IsBMeleeKatana                                              OFFSET(get<bool>, {0x1608, 1, 0, 0})
	DMember(float)                                     LocalLeftHandIKAlpha                                        OFFSET(get<float>, {0x160C, 4, 0, 0})
	DMember(float)                                     LocalRightHandIKAlpha                                       OFFSET(get<float>, {0x1610, 4, 0, 0})
	DMember(bool)                                      IsDashCharge                                                OFFSET(get<bool>, {0x1614, 1, 0, 0})
	DMember(bool)                                      IsDashAttack                                                OFFSET(get<bool>, {0x1615, 1, 0, 0})
	DMember(float)                                     SwordPlayRate                                               OFFSET(get<float>, {0x1618, 4, 0, 0})
	DMember(bool)                                      IsInAirAttack_Leap                                          OFFSET(get<bool>, {0x161C, 1, 0, 0})
	DMember(bool)                                      IsInAirAttack_Slam                                          OFFSET(get<bool>, {0x161D, 1, 0, 0})
	CMember(UFortKatanaLayerAnimInstance*)             KatanaPlayer                                                OFFSET(get<T>, {0x1620, 8, 0, 0})
	DMember(bool)                                      EarlyExitFromDashOutro                                      OFFSET(get<bool>, {0x1628, 1, 0, 0})
	DMember(bool)                                      IsDashOutro                                                 OFFSET(get<bool>, {0x1629, 1, 0, 0})
	SMember(FVector)                                   ScabbardLoc                                                 OFFSET(getStruct<T>, {0x1630, 24, 0, 0})
	SMember(FRotator)                                  ScabbardRot                                                 OFFSET(getStruct<T>, {0x1648, 24, 0, 0})
	SMember(FVector)                                   ScabbardLocOffset                                           OFFSET(getStruct<T>, {0x1660, 24, 0, 0})
	SMember(FRotator)                                  ScabbardRotOffset                                           OFFSET(getStruct<T>, {0x1678, 24, 0, 0})
	DMember(bool)                                      IsSurfaceSwimming                                           OFFSET(get<bool>, {0x1690, 1, 0, 0})
	DMember(bool)                                      IsTechniqueActive                                           OFFSET(get<bool>, {0x1691, 1, 0, 0})
	SMember(FVector)                                   SwordLoc                                                    OFFSET(getStruct<T>, {0x1698, 24, 0, 0})
	SMember(FRotator)                                  SwordRot                                                    OFFSET(getStruct<T>, {0x16B0, 24, 0, 0})
	SMember(FVector)                                   SwordLocOffset                                              OFFSET(getStruct<T>, {0x16C8, 24, 0, 0})
	SMember(FRotator)                                  SwordRotOffset                                              OFFSET(getStruct<T>, {0x16E0, 24, 0, 0})
	DMember(bool)                                      IsRidingSwing                                               OFFSET(get<bool>, {0x16F8, 1, 0, 0})
	DMember(bool)                                      IsPrimaryAttack                                             OFFSET(get<bool>, {0x16F9, 1, 0, 0})
	DMember(bool)                                      IsPrimaryAttack2                                            OFFSET(get<bool>, {0x16FA, 1, 0, 0})
	DMember(bool)                                      ExitFromPrimaryAttack                                       OFFSET(get<bool>, {0x16FB, 1, 0, 0})
	DMember(bool)                                      ExitFromPrimaryAttack2                                      OFFSET(get<bool>, {0x16FC, 1, 0, 0})
	DMember(bool)                                      NonPrimaryAttackState                                       OFFSET(get<bool>, {0x16FD, 1, 0, 0})
	DMember(bool)                                      IsComboAttack                                               OFFSET(get<bool>, {0x16FE, 1, 0, 0})
	DMember(bool)                                      TransitionRuleToDefaultPose                                 OFFSET(get<bool>, {0x16FF, 1, 0, 0})
	DMember(bool)                                      ExitFromInAirLand                                           OFFSET(get<bool>, {0x1700, 1, 0, 0})
	DMember(bool)                                      IsGrindRailSwing                                            OFFSET(get<bool>, {0x1701, 1, 0, 0})
	DMember(int32_t)                                   CurrentTechniqueBranch                                      OFFSET(get<int32_t>, {0x1704, 4, 0, 0})
	DMember(int32_t)                                   PreviousTechniqueBranch                                     OFFSET(get<int32_t>, {0x1708, 4, 0, 0})
	SMember(FName)                                     PelvisSocket                                                OFFSET(getStruct<T>, {0x170C, 4, 0, 0})
	SMember(FVector)                                   ScabbardLocOffsetVeh                                        OFFSET(getStruct<T>, {0x1710, 24, 0, 0})
	SMember(FRotator)                                  ScabbardRotOffsetVeh                                        OFFSET(getStruct<T>, {0x1728, 24, 0, 0})
	DMember(float)                                     DashChargePlayRate                                          OFFSET(get<float>, {0x1740, 4, 0, 0})
};

/// Class /Script/KatanaGameplayRuntime.KatanaTargetingComponent
/// Size: 0x0270 (0x0000A0 - 0x000310)
class UKatanaTargetingComponent : public UFortWeaponComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(UClass*)                                   KatanaTechniqueAbilityClass                                 OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UFortGameplayAbility*)                     CachedTechniqueAbilityCDO                                   OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FScalableFloat)                            DashDistance                                                OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            AdditionalDashForwardAttackRange                            OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            AdditionalOutOfRangeDetection                               OFFSET(getStruct<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            DashOffsetFromTarget                                        OFFSET(getStruct<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            PropRemainingHealthToDestroy                                OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	SMember(FScalableFloat)                            BuildingRemainingHealthToDestroy                            OFFSET(getStruct<T>, {0x178, 40, 0, 0})
	SMember(FGameplayTagContainer)                     DashBlockingBuildingTags                                    OFFSET(getStruct<T>, {0x1A0, 32, 0, 0})
	CMember(TSet<UClass*>)                             DashBlockingBuildingClasses                                 OFFSET(get<T>, {0x1C0, 80, 0, 0})
	SMember(FFortAbilityTargetSelectionList)           PawnTargetSelectionList                                     OFFSET(getStruct<T>, {0x210, 72, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DashTraceChannel                                            OFFSET(get<T>, {0x258, 1, 0, 0})
	DMember(float)                                     ObstructionOverlapBoxHalfSize                               OFFSET(get<float>, {0x25C, 4, 0, 0})
	SMember(FFortTargetFilter)                         ObstructionTargetFilter                                     OFFSET(getStruct<T>, {0x260, 56, 0, 0})
	SMember(FGameplayTagContainer)                     DashBlockIgnoreTags                                         OFFSET(getStruct<T>, {0x298, 32, 0, 0})
	CMember(TMap<EFortKatanaPrimaryAttackVariation, FFortKatanaPrimaryAttackVariationInfo>) PrimaryAttackVariationInfos OFFSET(get<T>, {0x2B8, 80, 0, 0})
	DMember(float)                                     PrimaryAttackMinForwardMovement                             OFFSET(get<float>, {0x308, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            PrimaryAttackObstructionTraceChannel                        OFFSET(get<T>, {0x30C, 1, 0, 0})


	/// Functions
	// Function /Script/KatanaGameplayRuntime.KatanaTargetingComponent.PerformPrimaryAttackTargeting
	// FVector PerformPrimaryAttackTargeting(EFortKatanaPrimaryAttackVariation AttackVariation);                                // [0xa016a9c] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KatanaGameplayRuntime.KatanaTargetingComponent.PerformDashTargeting
	// bool PerformDashTargeting(FFortKatanaDashTargetingInfo& OutDashTargetingInfo);                                           // [0xa0169bc] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/KatanaGameplayRuntime.AbilityTask_ApplyRootMotion_KatanaDashForce
/// Size: 0x0008 (0x000120 - 0x000128)
class UAbilityTask_ApplyRootMotion_KatanaDashForce : public UAbilityTask_ApplyRootMotionMoveToForce
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(float)                                     HeightAboveGround                                           OFFSET(get<float>, {0x120, 4, 0, 0})


	/// Functions
	// Function /Script/KatanaGameplayRuntime.AbilityTask_ApplyRootMotion_KatanaDashForce.ApplyRootMotion_KatanaDashForce
	// UAbilityTask_ApplyRootMotion_KatanaDashForce* ApplyRootMotion_KatanaDashForce(UGameplayAbility* InOwningAbility, FName InTaskInstanceName, FVector InTargetLocation, float InDuration, float InHeightAboveGround, bool bInSetNewMovementMode, TEnumAsByte<EMovementMode> InMovementMode, bool bInRestrictSpeedToExpected, UCurveVector* InPathOffsetCurve, ERootMotionFinishVelocityMode InVelocityOnFinishMode, FVector InSetVelocityOnFinish, float InClampVelocityOnFinish); // [0xa015f54] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/KatanaGameplayRuntime.FortKatanaPrimaryAttackVariationInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FFortKatanaPrimaryAttackVariationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FScalableFloat)                            Range                                                       OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            OffsetFromTarget                                            OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FFortAbilityTargetSelectionList)           TargetSelectionList                                         OFFSET(getStruct<T>, {0x50, 72, 0, 0})
};

/// Struct /Script/KatanaGameplayRuntime.FortKatanaDashTargetingInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortKatanaDashTargetingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   DashDirection                                               OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	DMember(float)                                     DashDistance                                                OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   DashBlockingActor                                           OFFSET(get<T>, {0x1C, 8, 0, 0})
	DMember(bool)                                      bWasDashDirectionAdjusted                                   OFFSET(get<bool>, {0x24, 1, 0, 0})
	CMember(TArray<AActor*>)                           DamagedActors                                               OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(float)                                     OutOfRangePercent                                           OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/KatanaGameplayRuntime.RootMotionSource_KatanaDashForce
/// Size: 0x0000 (0x000120 - 0x000120)
class FRootMotionSource_KatanaDashForce : public FRootMotionSource_MoveToForce
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Enum /Script/KatanaGameplayRuntime.EFortKatanaPrimaryAttackVariation
/// Size: 0x04
enum EFortKatanaPrimaryAttackVariation : uint8_t
{
	EFortKatanaPrimaryAttackVariation__OnGroundFirst0                                = 0,
	EFortKatanaPrimaryAttackVariation__OnGroundSecond1                               = 1,
	EFortKatanaPrimaryAttackVariation__InAir2                                        = 2,
	EFortKatanaPrimaryAttackVariation__EFortKatanaPrimaryAttackVariation_MAX3        = 3
};

