
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
/// Size: 0x0160 (0x0015E0 - 0x001740)
class UFortKatanaLayerAnimInstance : public UFortMantisLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5952;

public:
	DMember(bool)                                      IsDashCharge                                                OFFSET(get<bool>, {0x15D8, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          AsFortPlayerPawn                                            OFFSET(get<T>, {0x15E0, 8, 0, 0})
	DMember(bool)                                      IsBMeleeKatana                                              OFFSET(get<bool>, {0x15E8, 1, 0, 0})
	DMember(float)                                     HandIKHipAttachAlpha                                        OFFSET(get<float>, {0x15EC, 4, 0, 0})
	SMember(FVector)                                   LeftAttachedHandIKLoc                                       OFFSET(get<T>, {0x15F0, 24, 0, 0})
	SMember(FRotator)                                  LeftAttachedhandIKRot                                       OFFSET(get<T>, {0x1608, 24, 0, 0})
	SMember(FVector)                                   RightWeaponLoc                                              OFFSET(get<T>, {0x1620, 24, 0, 0})
	SMember(FRotator)                                  RightWeaponRot                                              OFFSET(get<T>, {0x1638, 24, 0, 0})
	SMember(FVector)                                   LeftAttachedHandIKLocOffsetMED                              OFFSET(get<T>, {0x1650, 24, 0, 0})
	SMember(FRotator)                                  LeftAttachedHandIKRotOffset                                 OFFSET(get<T>, {0x1668, 24, 0, 0})
	SMember(FVector)                                   RightWeaponLocOffsetMED                                     OFFSET(get<T>, {0x1680, 24, 0, 0})
	SMember(FRotator)                                  RightWeaponRotOffset                                        OFFSET(get<T>, {0x1698, 24, 0, 0})
	DMember(float)                                     LocalLeftHandIKAlpha                                        OFFSET(get<float>, {0x16B0, 4, 0, 0})
	DMember(float)                                     LocalRightHandIKAlpha                                       OFFSET(get<float>, {0x16B4, 4, 0, 0})
	DMember(bool)                                      IsDashAttack                                                OFFSET(get<bool>, {0x16B8, 1, 0, 0})
	DMember(bool)                                      IsDashOutro                                                 OFFSET(get<bool>, {0x16B9, 1, 0, 0})
	DMember(float)                                     PelvisAOAlpha                                               OFFSET(get<float>, {0x16BC, 4, 0, 0})
	DMember(float)                                     ClampedAimPitch                                             OFFSET(get<float>, {0x16C0, 4, 0, 0})
	DMember(bool)                                      EarlyExitFromDashOutro                                      OFFSET(get<bool>, {0x16C4, 1, 0, 0})
	DMember(bool)                                      IsTechniqueActive                                           OFFSET(get<bool>, {0x16C5, 1, 0, 0})
	DMember(bool)                                      IsPrimaryAttack                                             OFFSET(get<bool>, {0x16C6, 1, 0, 0})
	DMember(float)                                     WeaponHipAttachAlpha                                        OFFSET(get<float>, {0x16C8, 4, 0, 0})
	SMember(FVector)                                   LeftAttachedHandIKLocOffsetLRG                              OFFSET(get<T>, {0x16D0, 24, 0, 0})
	SMember(FVector)                                   RightWeaponLocOffsetLRG                                     OFFSET(get<T>, {0x16E8, 24, 0, 0})
	DMember(float)                                     FeetCorrectionAlpha                                         OFFSET(get<float>, {0x1700, 4, 0, 0})
	DMember(bool)                                      IsInAirAttackLeap                                           OFFSET(get<bool>, {0x1704, 1, 0, 0})
	DMember(bool)                                      ShouldStartDashOutro                                        OFFSET(get<bool>, {0x1705, 1, 0, 0})
	DMember(bool)                                      StartedDashOutro                                            OFFSET(get<bool>, {0x1706, 1, 0, 0})
	SMember(FScalableFloat)                            DashRootMotionDuration                                      OFFSET(get<T>, {0x1708, 40, 0, 0})
	DMember(bool)                                      IsPrimaryAttack2                                            OFFSET(get<bool>, {0x1730, 1, 0, 0})
	DMember(bool)                                      IsAirAttackSlam                                             OFFSET(get<bool>, {0x1731, 1, 0, 0})
	DMember(bool)                                      TransitionRuleToDefault                                     OFFSET(get<bool>, {0x1732, 1, 0, 0})
	DMember(bool)                                      IsGrindRailSwing                                            OFFSET(get<bool>, {0x1733, 1, 0, 0})
	DMember(float)                                     DashChargePlayRate                                          OFFSET(get<float>, {0x1734, 4, 0, 0})
};

/// Class /Script/KatanaGameplayRuntime.FortKatanaWeaponAnimInstance
/// Size: 0x0150 (0x0015E0 - 0x001730)
class UFortKatanaWeaponAnimInstance : public UFortMantisLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5936;

public:
	CMember(AFortPlayerPawn*)                          AsFortPlayerPawn                                            OFFSET(get<T>, {0x15D8, 8, 0, 0})
	CMember(AFortWeapon*)                              BMeleeKatanaAsWeapon                                        OFFSET(get<T>, {0x15E0, 8, 0, 0})
	DMember(bool)                                      IsBMeleeKatana                                              OFFSET(get<bool>, {0x15E8, 1, 0, 0})
	DMember(float)                                     LocalLeftHandIKAlpha                                        OFFSET(get<float>, {0x15EC, 4, 0, 0})
	DMember(float)                                     LocalRightHandIKAlpha                                       OFFSET(get<float>, {0x15F0, 4, 0, 0})
	DMember(bool)                                      IsDashCharge                                                OFFSET(get<bool>, {0x15F4, 1, 0, 0})
	DMember(bool)                                      IsDashAttack                                                OFFSET(get<bool>, {0x15F5, 1, 0, 0})
	DMember(float)                                     SwordPlayRate                                               OFFSET(get<float>, {0x15F8, 4, 0, 0})
	DMember(bool)                                      IsInAirAttack_Leap                                          OFFSET(get<bool>, {0x15FC, 1, 0, 0})
	DMember(bool)                                      IsInAirAttack_Slam                                          OFFSET(get<bool>, {0x15FD, 1, 0, 0})
	CMember(UFortKatanaLayerAnimInstance*)             KatanaPlayer                                                OFFSET(get<T>, {0x1600, 8, 0, 0})
	DMember(bool)                                      EarlyExitFromDashOutro                                      OFFSET(get<bool>, {0x1608, 1, 0, 0})
	DMember(bool)                                      IsDashOutro                                                 OFFSET(get<bool>, {0x1609, 1, 0, 0})
	SMember(FVector)                                   ScabbardLoc                                                 OFFSET(get<T>, {0x1610, 24, 0, 0})
	SMember(FRotator)                                  ScabbardRot                                                 OFFSET(get<T>, {0x1628, 24, 0, 0})
	SMember(FVector)                                   ScabbardLocOffset                                           OFFSET(get<T>, {0x1640, 24, 0, 0})
	SMember(FRotator)                                  ScabbardRotOffset                                           OFFSET(get<T>, {0x1658, 24, 0, 0})
	DMember(bool)                                      IsSurfaceSwimming                                           OFFSET(get<bool>, {0x1670, 1, 0, 0})
	DMember(bool)                                      IsTechniqueActive                                           OFFSET(get<bool>, {0x1671, 1, 0, 0})
	SMember(FVector)                                   SwordLoc                                                    OFFSET(get<T>, {0x1678, 24, 0, 0})
	SMember(FRotator)                                  SwordRot                                                    OFFSET(get<T>, {0x1690, 24, 0, 0})
	SMember(FVector)                                   SwordLocOffset                                              OFFSET(get<T>, {0x16A8, 24, 0, 0})
	SMember(FRotator)                                  SwordRotOffset                                              OFFSET(get<T>, {0x16C0, 24, 0, 0})
	DMember(bool)                                      IsRidingSwing                                               OFFSET(get<bool>, {0x16D8, 1, 0, 0})
	DMember(bool)                                      IsPrimaryAttack                                             OFFSET(get<bool>, {0x16D9, 1, 0, 0})
	DMember(bool)                                      IsPrimaryAttack2                                            OFFSET(get<bool>, {0x16DA, 1, 0, 0})
	DMember(bool)                                      ExitFromPrimaryAttack                                       OFFSET(get<bool>, {0x16DB, 1, 0, 0})
	DMember(bool)                                      ExitFromPrimaryAttack2                                      OFFSET(get<bool>, {0x16DC, 1, 0, 0})
	DMember(bool)                                      NonPrimaryAttackState                                       OFFSET(get<bool>, {0x16DD, 1, 0, 0})
	DMember(bool)                                      IsComboAttack                                               OFFSET(get<bool>, {0x16DE, 1, 0, 0})
	DMember(bool)                                      TransitionRuleToDefaultPose                                 OFFSET(get<bool>, {0x16DF, 1, 0, 0})
	DMember(bool)                                      ExitFromInAirLand                                           OFFSET(get<bool>, {0x16E0, 1, 0, 0})
	DMember(bool)                                      IsGrindRailSwing                                            OFFSET(get<bool>, {0x16E1, 1, 0, 0})
	DMember(int32_t)                                   CurrentTechniqueBranch                                      OFFSET(get<int32_t>, {0x16E4, 4, 0, 0})
	DMember(int32_t)                                   PreviousTechniqueBranch                                     OFFSET(get<int32_t>, {0x16E8, 4, 0, 0})
	SMember(FName)                                     PelvisSocket                                                OFFSET(get<T>, {0x16EC, 4, 0, 0})
	SMember(FVector)                                   ScabbardLocOffsetVeh                                        OFFSET(get<T>, {0x16F0, 24, 0, 0})
	SMember(FRotator)                                  ScabbardRotOffsetVeh                                        OFFSET(get<T>, {0x1708, 24, 0, 0})
	DMember(float)                                     DashChargePlayRate                                          OFFSET(get<float>, {0x1720, 4, 0, 0})
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
	SMember(FScalableFloat)                            DashDistance                                                OFFSET(get<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            AdditionalDashForwardAttackRange                            OFFSET(get<T>, {0xD8, 40, 0, 0})
	SMember(FScalableFloat)                            AdditionalOutOfRangeDetection                               OFFSET(get<T>, {0x100, 40, 0, 0})
	SMember(FScalableFloat)                            DashOffsetFromTarget                                        OFFSET(get<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            PropRemainingHealthToDestroy                                OFFSET(get<T>, {0x150, 40, 0, 0})
	SMember(FScalableFloat)                            BuildingRemainingHealthToDestroy                            OFFSET(get<T>, {0x178, 40, 0, 0})
	SMember(FGameplayTagContainer)                     DashBlockingBuildingTags                                    OFFSET(get<T>, {0x1A0, 32, 0, 0})
	CMember(TSet<UClass*>)                             DashBlockingBuildingClasses                                 OFFSET(get<T>, {0x1C0, 80, 0, 0})
	SMember(FFortAbilityTargetSelectionList)           PawnTargetSelectionList                                     OFFSET(get<T>, {0x210, 72, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DashTraceChannel                                            OFFSET(get<T>, {0x258, 1, 0, 0})
	DMember(float)                                     ObstructionOverlapBoxHalfSize                               OFFSET(get<float>, {0x25C, 4, 0, 0})
	SMember(FFortTargetFilter)                         ObstructionTargetFilter                                     OFFSET(get<T>, {0x260, 56, 0, 0})
	SMember(FGameplayTagContainer)                     DashBlockIgnoreTags                                         OFFSET(get<T>, {0x298, 32, 0, 0})
	CMember(TMap<EFortKatanaPrimaryAttackVariation, FFortKatanaPrimaryAttackVariationInfo>) PrimaryAttackVariationInfos OFFSET(get<T>, {0x2B8, 80, 0, 0})
	DMember(float)                                     PrimaryAttackMinForwardMovement                             OFFSET(get<float>, {0x308, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            PrimaryAttackObstructionTraceChannel                        OFFSET(get<T>, {0x30C, 1, 0, 0})


	/// Functions
	// Function /Script/KatanaGameplayRuntime.KatanaTargetingComponent.PerformPrimaryAttackTargeting
	// FVector PerformPrimaryAttackTargeting(EFortKatanaPrimaryAttackVariation AttackVariation);                                // [0x99687e4] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/KatanaGameplayRuntime.KatanaTargetingComponent.PerformDashTargeting
	// bool PerformDashTargeting(FFortKatanaDashTargetingInfo& OutDashTargetingInfo);                                           // [0x9968704] Final|Native|Public|HasOutParms|BlueprintCallable 
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
	// UAbilityTask_ApplyRootMotion_KatanaDashForce* ApplyRootMotion_KatanaDashForce(UGameplayAbility* InOwningAbility, FName InTaskInstanceName, FVector InTargetLocation, float InDuration, float InHeightAboveGround, bool bInSetNewMovementMode, TEnumAsByte<EMovementMode> InMovementMode, bool bInRestrictSpeedToExpected, UCurveVector* InPathOffsetCurve, ERootMotionFinishVelocityMode InVelocityOnFinishMode, FVector InSetVelocityOnFinish, float InClampVelocityOnFinish); // [0x9967b4c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/KatanaGameplayRuntime.FortKatanaPrimaryAttackVariationInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FFortKatanaPrimaryAttackVariationInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FScalableFloat)                            Range                                                       OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            OffsetFromTarget                                            OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FFortAbilityTargetSelectionList)           TargetSelectionList                                         OFFSET(get<T>, {0x50, 72, 0, 0})
};

/// Struct /Script/KatanaGameplayRuntime.FortKatanaDashTargetingInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FFortKatanaDashTargetingInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   DashDirection                                               OFFSET(get<T>, {0x0, 24, 0, 0})
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

