
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding
/// Size: 0x02C0 (0x000810 - 0x000AD0)
class UFortVehicleLayerAnimInstance_Riding : public UFortVehicleOccupantAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
	SMember(FCachedAnimRelevancyData)                  IntoVehicleCachedData                                       OFFSET(getStruct<T>, {0x810, 20, 0, 0})
	SMember(FCachedAnimRelevancyData)                  OutOfVehicleCachedData                                      OFFSET(getStruct<T>, {0x824, 20, 0, 0})
	DMember(float)                                     InTime                                                      OFFSET(get<float>, {0x838, 4, 0, 0})
	DMember(float)                                     OutTime                                                     OFFSET(get<float>, {0x83C, 4, 0, 0})
	DMember(float)                                     BodyYawOffset                                               OFFSET(get<float>, {0x840, 4, 0, 0})
	SMember(FRotator)                                  BodyCounterRotation                                         OFFSET(getStruct<T>, {0x848, 24, 0, 0})
	DMember(float)                                     BodyCounterRotationAlpha                                    OFFSET(get<float>, {0x860, 4, 0, 0})
	DMember(bool)                                      bIsReloading                                                OFFSET(get<bool>, {0x864, 1, 0, 0})
	DMember(bool)                                      bIsTargeting                                                OFFSET(get<bool>, {0x865, 1, 0, 0})
	DMember(bool)                                      bIsFiring                                                   OFFSET(get<bool>, {0x866, 1, 0, 0})
	DMember(bool)                                      bIsUsingConsumable                                          OFFSET(get<bool>, {0x867, 1, 0, 0})
	DMember(bool)                                      bIsInAction                                                 OFFSET(get<bool>, {0x868, 1, 0, 0})
	DMember(bool)                                      bIsThrowConsumable                                          OFFSET(get<bool>, {0x869, 1, 0, 0})
	DMember(bool)                                      bIsTargetingOrThrowingConsumable                            OFFSET(get<bool>, {0x86A, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           OFFSET(get<bool>, {0x86B, 1, 0, 0})
	DMember(bool)                                      bIsRidingSprinting                                          OFFSET(get<bool>, {0x86C, 1, 0, 0})
	DMember(bool)                                      bIsRidingPetting                                            OFFSET(get<bool>, {0x86D, 1, 0, 0})
	DMember(float)                                     TurnInPlaceRotationSpeed                                    OFFSET(get<float>, {0x870, 4, 0, 0})
	DMember(float)                                     TurnInPlaceAngleDelta                                       OFFSET(get<float>, {0x874, 4, 0, 0})
	DMember(bool)                                      bIsRidingMovingBackward                                     OFFSET(get<bool>, {0x878, 1, 0, 0})
	DMember(bool)                                      bIsSlopeSliding                                             OFFSET(get<bool>, {0x879, 1, 0, 0})
	DMember(float)                                     SlopeSlidingPitch                                           OFFSET(get<float>, {0x87C, 4, 0, 0})
	DMember(float)                                     SlopeSlidingRoll                                            OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(float)                                     RiderReferentialRidableYaw                                  OFFSET(get<float>, {0x884, 4, 0, 0})
	DMember(float)                                     AimYawDegreesCoverage                                       OFFSET(get<float>, {0x888, 4, 0, 0})
	DMember(float)                                     SmoothedAimYaw                                              OFFSET(get<float>, {0x88C, 4, 0, 0})
	DMember(bool)                                      bJustEntered                                                OFFSET(get<bool>, {0x890, 1, 0, 0})
	DMember(bool)                                      bIsRidableMoving                                            OFFSET(get<bool>, {0x891, 1, 0, 0})
	DMember(bool)                                      bIsRideMode                                                 OFFSET(get<bool>, {0x892, 1, 0, 0})
	DMember(float)                                     RidableVelocity                                             OFFSET(get<float>, {0x894, 4, 0, 0})
	DMember(float)                                     BodyYaw                                                     OFFSET(get<float>, {0x898, 4, 0, 0})
	DMember(float)                                     BoostPlayRate                                               OFFSET(get<float>, {0x89C, 4, 0, 0})
	DMember(float)                                     RidingMovePlayRate                                          OFFSET(get<float>, {0x8A0, 4, 0, 0})
	DMember(float)                                     FalseBlendTime                                              OFFSET(get<float>, {0x8A4, 4, 0, 0})
	DMember(float)                                     CombatToRideYaw                                             OFFSET(get<float>, {0x8A8, 4, 0, 0})
	DMember(float)                                     InPlaceYaw                                                  OFFSET(get<float>, {0x8AC, 4, 0, 0})
	DMember(float)                                     HeadAOAlpha                                                 OFFSET(get<float>, {0x8B0, 4, 0, 0})
	SMember(FRotator)                                  MeleeTwistRot                                               OFFSET(getStruct<T>, {0x8B8, 24, 0, 0})
	DMember(bool)                                      bIsDualWield                                                OFFSET(get<bool>, {0x8D0, 1, 0, 0})
	DMember(bool)                                      bIsOneHandedDualWield                                       OFFSET(get<bool>, {0x8D1, 1, 0, 0})
	DMember(bool)                                      bIsTwoHandedSword                                           OFFSET(get<bool>, {0x8D2, 1, 0, 0})
	DMember(bool)                                      bShouldAdjustBodyTwistForMelee                              OFFSET(get<bool>, {0x8D3, 1, 0, 0})
	SMember(FVector)                                   PlayerOffset                                                OFFSET(getStruct<T>, {0x8D8, 24, 0, 0})
	DMember(float)                                     NoiseAlpha                                                  OFFSET(get<float>, {0x8F0, 4, 0, 0})
	DMember(bool)                                      bIsLobsterBlockActive                                       OFFSET(get<bool>, {0x8F4, 1, 0, 0})
	DMember(float)                                     SlopePitch                                                  OFFSET(get<float>, {0x8F8, 4, 0, 0})
	DMember(float)                                     RiderHeightAdjustmentSpringConstant                         OFFSET(get<float>, {0x8FC, 4, 0, 0})
	DMember(float)                                     MinSlopePitchForRiderHeightAdjustment                       OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(float)                                     MaxSlopePitchForRiderHeightAdjustment                       OFFSET(get<float>, {0x904, 4, 0, 0})
	DMember(float)                                     RiderHeightAdjustmentForMinSlopePitch                       OFFSET(get<float>, {0x908, 4, 0, 0})
	DMember(float)                                     RiderHeightAdjustmentForMaxSlopePitch                       OFFSET(get<float>, {0x90C, 4, 0, 0})
	DMember(float)                                     PettingRotAlpha                                             OFFSET(get<float>, {0x910, 4, 0, 0})
	SMember(FRotator)                                  PettingRot                                                  OFFSET(getStruct<T>, {0x918, 24, 0, 0})
	DMember(float)                                     PettingPitchFactor                                          OFFSET(get<float>, {0x930, 4, 0, 0})
	DMember(float)                                     PettingRollFactor                                           OFFSET(get<float>, {0x934, 4, 0, 0})
	SMember(FVector)                                   HandAttachLeft                                              OFFSET(getStruct<T>, {0x938, 24, 0, 0})
	SMember(FVector)                                   HandAttachRight                                             OFFSET(getStruct<T>, {0x950, 24, 0, 0})
	DMember(float)                                     HandAttachAlpha                                             OFFSET(get<float>, {0x968, 4, 0, 0})
	CMember(ERidingFootPhase)                          FootPhase                                                   OFFSET(get<T>, {0x96C, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FeetInAir                                      OFFSET(get<bool>, {0x96D, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FrontFeetPlanted                               OFFSET(get<bool>, {0x96E, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_BackFeetPlanted                                OFFSET(get<bool>, {0x96F, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftBackFeetForward                            OFFSET(get<bool>, {0x970, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightBackFeetForward                           OFFSET(get<bool>, {0x971, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftPlantedRightPass                           OFFSET(get<bool>, {0x972, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightPlantedLeftPass                           OFFSET(get<bool>, {0x973, 1, 0, 0})
	DMember(float)                                     TurnInPlaceModulatedSpeed                                   OFFSET(get<float>, {0x974, 4, 0, 0})
	DMember(bool)                                      bIsTurnInPlaceAngleDeltaPositive                            OFFSET(get<bool>, {0x978, 1, 0, 0})
	DMember(float)                                     SlopeRoll                                                   OFFSET(get<float>, {0x97C, 4, 0, 0})
	DMember(float)                                     MovingVelocityLowerBound                                    OFFSET(get<float>, {0x980, 4, 0, 0})
	DMember(float)                                     JustEnteredDelayTimeSec                                     OFFSET(get<float>, {0x984, 4, 0, 0})
	DMember(float)                                     FalseBlendTime_Moving                                       OFFSET(get<float>, {0x988, 4, 0, 0})
	DMember(float)                                     FalseBlendTime_NotMoving                                    OFFSET(get<float>, {0x98C, 4, 0, 0})
	SMember(FVector)                                   PlayerOffsetMale                                            OFFSET(getStruct<T>, {0x990, 24, 0, 0})
	SMember(FVector)                                   PlayerOffsetFemale                                          OFFSET(getStruct<T>, {0x9A8, 24, 0, 0})
	SMember(FSoftObjectPath)                           ScytheMontage                                               OFFSET(getStruct<T>, {0x9C0, 24, 0, 0})
	SMember(FSoftObjectPath)                           BRSwordMontage                                              OFFSET(getStruct<T>, {0x9D8, 24, 0, 0})
	CMember(TEnumAsByte<EFortWeaponCoreAnimation>)     MeleeDualWieldCoreAnimation                                 OFFSET(get<T>, {0x9F0, 1, 0, 0})
	SMember(FVector)                                   SlopePitchTraceStart                                        OFFSET(getStruct<T>, {0x9F8, 24, 0, 0})
	SMember(FVector)                                   SlopePitchTraceEnd                                          OFFSET(getStruct<T>, {0xA10, 24, 0, 0})
	SMember(FVector)                                   HandAttachLocationLeftMale                                  OFFSET(getStruct<T>, {0xA28, 24, 0, 0})
	SMember(FVector)                                   HandAttachLocationRightMale                                 OFFSET(getStruct<T>, {0xA40, 24, 0, 0})
	SMember(FVector)                                   HandAttachLocationLeftFemale                                OFFSET(getStruct<T>, {0xA58, 24, 0, 0})
	SMember(FVector)                                   HandAttachLocationRightFemale                               OFFSET(getStruct<T>, {0xA70, 24, 0, 0})
	SMember(FName)                                     PlayerHandAttachLeft                                        OFFSET(getStruct<T>, {0xA88, 4, 0, 0})
	SMember(FName)                                     PlayerHandAttachRight                                       OFFSET(getStruct<T>, {0xA8C, 4, 0, 0})
	SMember(FName)                                     DisableHandAttachCurveName                                  OFFSET(getStruct<T>, {0xA90, 4, 0, 0})
	SMember(FName)                                     AllowRidingNoiseAdditiveCurveName                           OFFSET(getStruct<T>, {0xA94, 4, 0, 0})


	/// Functions
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.UpdateSlopePitchForRiding
	// void UpdateSlopePitchForRiding();                                                                                        // [0x59acdb0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.UpdateBoostPlayRate
	// void UpdateBoostPlayRate();                                                                                              // [0x59acd14] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.SetFootPhase
	// void SetFootPhase(ERidingFootPhase InFootPhase);                                                                         // [0x9ef7090] Final|Native|Public|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.PlaceHandIKTargets
	// void PlaceHandIKTargets();                                                                                               // [0x59afecc] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.FortVehicleLayerAnimInstance_Riding.BlueprintCollectRidableAnimBPData
	// void BlueprintCollectRidableAnimBPData(UAnimInstance* RidableAnimInstance);                                              // [0x101681c] Event|Protected|BlueprintEvent 
};

/// Class /Script/RidingCodeRuntime.RidingCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class URidingCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/RidingCodeRuntime.RidableComponent
/// Size: 0x0340 (0x0000A0 - 0x0003E0)
class URidableComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FMulticastInlineDelegate)                  OnRiderStartedRiding                                        OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRiderStoppedRiding                                        OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(UClass*)                                   RiderAnimLayerOverlayClass                                  OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FName)                                     AttachSocket                                                OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	SMember(FVector)                                   AttachLocationOffset                                        OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FRotator)                                  AttachRotationOffset                                        OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	SMember(FName)                                     ClientAttachGuideSocket                                     OFFSET(getStruct<T>, {0x108, 4, 0, 0})
	SMember(FVector)                                   ClientAttachGuideLocationOffset                             OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	SMember(FName)                                     RidablePropAttachSocket                                     OFFSET(getStruct<T>, {0x128, 4, 0, 0})
	SMember(FVector)                                   RidablePropAttachLocationOffset                             OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	SMember(FRotator)                                  RidablePropAttachRotationOffset                             OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	DMember(float)                                     RidablePropAttachScale                                      OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     RidablePropAttachRiderVerticalBuffer                        OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FRidingAttachmentBoundsOverride)           RiderPropAttachBoundsOverride                               OFFSET(getStruct<T>, {0x168, 56, 0, 0})
	DMember(bool)                                      bOverrideNoiseGeneration                                    OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	SMember(FFortPlayerPawnAthenaMovementNoiseOverride) RiderMovementNoiseOverride                                 OFFSET(getStruct<T>, {0x1A4, 12, 0, 0})
	CMember(UClass*)                                   CameraModeClassOverride                                     OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(UClass*)                                   SprintCameraModeClassOverride                               OFFSET(get<T>, {0x1B8, 8, 0, 0})
	SMember(FScalableFloat)                            UseTargetingAdditionalViewTargetSpaceViewOffsetOverride     OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FInterpOffset)                             TargetingAdditionalViewTargetSpaceViewOffsetOverride        OFFSET(getStruct<T>, {0x1E8, 16, 0, 0})
	SMember(FVector)                                   WeaponTargetingSourceOffsetModifier                         OFFSET(getStruct<T>, {0x1F8, 24, 0, 0})
	SMember(FGameplayTag)                              RidableTag                                                  OFFSET(getStruct<T>, {0x210, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyDepletedTag                                           OFFSET(getStruct<T>, {0x214, 4, 0, 0})
	SMember(FDataTableRowHandle)                       PlaylistTagBlacklistRowHandle                               OFFSET(getStruct<T>, {0x218, 16, 0, 0})
	CMember(URiderComponent*)                          ActiveRider                                                 OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(URiderComponent*)                          LastRider                                                   OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(USceneComponent*)                          RidableProp                                                 OFFSET(get<T>, {0x238, 8, 0, 0})
	DMember(float)                                     OriginalCapsuleRadius                                       OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     OriginalCapsuleHalfHeight                                   OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(float)                                     RidingCapsuleRadius                                         OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     RidingCapsuleHalfHeight                                     OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(bool)                                      bOriginalClientPositionSmoothingThrottlingSetting           OFFSET(get<bool>, {0x250, 1, 0, 0})
	SMember(FScalableFloat)                            MaxHalfAimingAngle                                          OFFSET(getStruct<T>, {0x258, 40, 0, 0})
	CMember(TArray<FPrimaryFireAnimMontageAnimCoreTypeOverride>) PrimaryFireMontageAnimCoreTypeOverrides           OFFSET(get<T>, {0x280, 16, 0, 0})
	CMember(TArray<FPrimaryFireAnimMontageTagOverride>) PrimaryFireMontageTagOverrides                             OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(FRidingPettingData)                        PettingData                                                 OFFSET(getStruct<T>, {0x2A0, 272, 0, 0})
	SMember(FTimerHandle)                              RestoreCollisionHandle                                      OFFSET(getStruct<T>, {0x3B0, 8, 0, 0})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0x3C8, 1, 0, 0})


	/// Functions
	// Function /Script/RidingCodeRuntime.RidableComponent.ShouldCameraFocusOnRidable
	// bool ShouldCameraFocusOnRidable(URiderComponent* Rider);                                                                 // [0x9ef7110] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.OnRep_ActiveRider
	// void OnRep_ActiveRider();                                                                                                // [0x9ef6bd8] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RidableComponent.IsSprinting
	// bool IsSprinting();                                                                                                      // [0x9ef6800] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.IsFlying
	// bool IsFlying();                                                                                                         // [0x9ef675c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.IsBeingRidden
	// bool IsBeingRidden();                                                                                                    // [0x9ef6740] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.HandleRiderStoppedRiding
	// void HandleRiderStoppedRiding(URiderComponent* Rider);                                                                   // [0x5cf078c] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RidableComponent.HandleRiderStartedRiding
	// void HandleRiderStartedRiding(URiderComponent* Rider);                                                                   // [0x5ea4560] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RidableComponent.HandleRiderEndPlay
	// void HandleRiderEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                       // [0x9ef6174] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetRidingEmoteCapsuleSize
	// void GetRidingEmoteCapsuleSize(URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // [0x9ef561c] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetRidingCapsuleSize
	// void GetRidingCapsuleSize(URiderComponent* Rider, float OriginalRadius, float OriginalHalfHeight, float& OutRadius, float& OutHalfHeight); // [0x9ef5480] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetRidingAttachComponent
	// USceneComponent* GetRidingAttachComponent();                                                                             // [0x9ef5458] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.GetPettingData
	// FRidingPettingData GetPettingData();                                                                                     // [0x9ef543c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.CheatSetStaminaPercent
	// void CheatSetStaminaPercent(float StaminaPercent);                                                                       // [0x101681c] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RidableComponent.CanRiderPlayEmote
	// bool CanRiderPlayEmote(URiderComponent* Rider);                                                                          // [0x86a2050] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.CanBeRiddenBP
	// bool CanBeRiddenBP(URiderComponent* Rider);                                                                              // [0x9ef4fbc] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RidableComponent.CanBePet
	// bool CanBePet(URiderComponent* Rider);                                                                                   // [0x7f0b760] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Script/RidingCodeRuntime.ControllableRidableComponent
/// Size: 0x0320 (0x0003E0 - 0x000700)
class UControllableRidableComponent : public URidableComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
	DMember(bool)                                      bUseGravityJump                                             OFFSET(get<bool>, {0x3E0, 1, 0, 0})
	SMember(FGameplayTagQuery)                         IgnoreGravityJumpTagQuery                                   OFFSET(getStruct<T>, {0x3E8, 72, 0, 0})
	DMember(bool)                                      bIsControllable                                             OFFSET(get<bool>, {0x430, 1, 0, 0})
	DMember(bool)                                      bHasAbility                                                 OFFSET(get<bool>, {0x431, 1, 0, 0})
	SMember(FText)                                     AbilityDisplayText                                          OFFSET(getStruct<T>, {0x438, 24, 0, 0})
	DMember(bool)                                      bCanJump                                                    OFFSET(get<bool>, {0x450, 1, 0, 0})
	DMember(bool)                                      bAlwaysMoveForward                                          OFFSET(get<bool>, {0x451, 1, 0, 0})
	DMember(float)                                     ForwardMoveSpeedMultiplier                                  OFFSET(get<float>, {0x454, 4, 0, 0})
	DMember(float)                                     BackwardMoveSpeedMultiplier                                 OFFSET(get<float>, {0x458, 4, 0, 0})
	DMember(float)                                     SidewaysMoveRotationOffset                                  OFFSET(get<float>, {0x45C, 4, 0, 0})
	CMember(TEnumAsByte<EFortMovementUrgency>)         MovementUrgency                                             OFFSET(get<T>, {0x460, 1, 0, 0})
	DMember(bool)                                      bIsBeingControlled                                          OFFSET(get<bool>, {0x461, 1, 0, 0})
	SMember(FRidableControlParams)                     RidableControlParams                                        OFFSET(getStruct<T>, {0x480, 520, 0, 0})
	SMember(FScalableFloat)                            JumpUpwardGravityScale                                      OFFSET(getStruct<T>, {0x6B0, 40, 0, 0})
	SMember(FScalableFloat)                            JumpDownwardGravityScale                                    OFFSET(getStruct<T>, {0x6D8, 40, 0, 0})


	/// Functions
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.ServerDoJumpExit
	// void ServerDoJumpExit();                                                                                                 // [0x3192864] Net|NetReliableNative|Event|Protected|NetServer|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.OnRep_IsBeingControlled
	// void OnRep_IsBeingControlled();                                                                                          // [0x9ef6c2c] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.OnCapsuleBeginOverlap
	// void OnCapsuleBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x9ef68cc] Final|Native|Protected|HasOutParms 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.IsSprintToggleable
	// bool IsSprintToggleable();                                                                                               // [0x9ef6784] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleJumpStopped
	// void HandleJumpStopped();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleJumpStarted
	// void HandleJumpStarted();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleJumpHeld
	// void HandleJumpHeld();                                                                                                   // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleCancelSprint
	// void HandleCancelSprint(bool bAbilityInputHeld, bool bForceCancel);                                                      // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStopped
	// void HandleAbilityStopped();                                                                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleAbilityStarted
	// void HandleAbilityStarted();                                                                                             // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.HandleAbilityHeld
	// void HandleAbilityHeld();                                                                                                // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.GetAbilityDisplayText
	// FText GetAbilityDisplayText();                                                                                           // [0x9ef53f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.CanStartSprinting
	// bool CanStartSprinting();                                                                                                // [0x9ef5050] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.CancelBuildBar
	// void CancelBuildBar();                                                                                                   // [0x9ef5074] Final|Native|Protected|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.ControllableRidableComponent.CanBeControlled
	// bool CanBeControlled(URiderComponent* Rider);                                                                            // [0x9ef4f28] Native|Event|Public|BlueprintEvent|Const 
};

/// Class /Script/RidingCodeRuntime.RiderComponent
/// Size: 0x05C8 (0x0000A8 - 0x000670)
class URiderComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FMulticastInlineDelegate)                  OnStartedRiding                                             OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStoppedRiding                                             OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(UClass*)                                   RidingCameraModeClass                                       OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UClass*)                                   RidingSprintCameraModeClass                                 OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(float)                                     RidingCameraModeBlendTime                                   OFFSET(get<float>, {0xE0, 4, 0, 0})
	SMember(FInterpOffset)                             TargetingAdditionalViewTargetSpaceViewOffset                OFFSET(getStruct<T>, {0xE8, 16, 0, 0})
	CMember(UClass*)                                   RiderPropClass                                              OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(UClass*)                                   RidablePropClass                                            OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FVector)                                   RiderPropAttachLocationOffset                               OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	SMember(FRotator)                                  RiderPropAttachRotationOffset                               OFFSET(getStruct<T>, {0x120, 24, 0, 0})
	DMember(float)                                     RiderPropAttachScale                                        OFFSET(get<float>, {0x138, 4, 0, 0})
	SMember(FName)                                     RiderPropAttachSocket                                       OFFSET(getStruct<T>, {0x13C, 4, 0, 0})
	DMember(bool)                                      bUseClientAttachGuideSocket                                 OFFSET(get<bool>, {0x140, 1, 0, 0})
	SMember(FVector)                                   RiderPropAttachSoftBounds                                   OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	DMember(float)                                     RiderPropAttachSoftBoundsScalar                             OFFSET(get<float>, {0x160, 4, 0, 0})
	SMember(FVector)                                   RiderPropAttachHardBounds                                   OFFSET(getStruct<T>, {0x168, 24, 0, 0})
	DMember(float)                                     RiderPropAttachSoftBoundsTargetingScalar                    OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     RiderPropAttachHardBoundsTargetingScalar                    OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     RiderPropAttachVerticalBufferTargetingScalar                OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     RidingExitHoldTime                                          OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FScalableFloat)                            TimeBeforeReenteringRiding                                  OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FGameplayTag)                              RidingExitStartedEventTag                                   OFFSET(getStruct<T>, {0x1B8, 4, 0, 0})
	SMember(FGameplayTag)                              RidingExitStoppedEventTag                                   OFFSET(getStruct<T>, {0x1BC, 4, 0, 0})
	CMember(UFortInputMappingContext*)                 RidingInputContext                                          OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(UInputAction*)                             RidingExit                                                  OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(UInputAction*)                             GamepadRidingExit                                           OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(UFXSystemAsset*)                           ConnectorFXAsset                                            OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FName)                                     ConnectorPropSourceMeshParameterName                        OFFSET(getStruct<T>, {0x1E0, 4, 0, 0})
	SMember(FName)                                     ConnectorPropTargetMeshParameterName                        OFFSET(getStruct<T>, {0x1E4, 4, 0, 0})
	DMember(float)                                     SimulatedSmoothedRotationSpeed                              OFFSET(get<float>, {0x1E8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     ExcludedEmoteTags                                           OFFSET(getStruct<T>, {0x1F0, 32, 0, 0})
	CMember(URidableComponent*)                        ActiveRidable                                               OFFSET(get<T>, {0x218, 8, 0, 0})
	CMember(URidableComponent*)                        LastRidable                                                 OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(USceneComponent*)                          RiderProp                                                   OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(UFXSystemComponent*)                       ConnectorProp                                               OFFSET(get<T>, {0x230, 8, 0, 0})
	SMember(FVector)                                   PropAttachSeparation                                        OFFSET(getStruct<T>, {0x238, 24, 0, 0})
	SMember(FVector)                                   AdditionalAttachOffset                                      OFFSET(getStruct<T>, {0x250, 24, 0, 0})
	SMember(FVector)                                   SoftBoundsAttachmentOffset                                  OFFSET(getStruct<T>, {0x268, 24, 0, 0})
	SMember(FVector)                                   HardBoundsAttachmentOffset                                  OFFSET(getStruct<T>, {0x280, 24, 0, 0})
	SMember(FDataTableRowHandle)                       PlaylistTagDenylistRowHandle                                OFFSET(getStruct<T>, {0x298, 16, 0, 0})
	CMember(UFortInputComponent*)                      RiderInputComponent                                         OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     PendingFailedEmoteErrorTags                                 OFFSET(getStruct<T>, {0x2B0, 32, 0, 0})
	SMember(FRiderDismountLaunchVelocity)              ExitLaunchVelocity                                          OFFSET(getStruct<T>, {0x2D0, 168, 0, 0})
	SMember(FRiderDismountLaunchVelocity)              JumpExitLaunchVelocity                                      OFFSET(getStruct<T>, {0x378, 168, 0, 0})
	SMember(FRidingAnalyticsData_Stopped)              ActiveAnaltyicsData                                         OFFSET(getStruct<T>, {0x428, 128, 0, 0})
	SMember(FVector)                                   RidableLocationLastFrame                                    OFFSET(getStruct<T>, {0x4A8, 24, 0, 0})
	SMember(FTimerHandle)                              RestoreCollisionHandle                                      OFFSET(getStruct<T>, {0x4C8, 8, 0, 0})
	SMember(FRidableControlRuntimeData)                RidableControlRuntimeData                                   OFFSET(getStruct<T>, {0x4D0, 64, 0, 0})
	DMember(bool)                                      bIsSprintingReplay                                          OFFSET(get<bool>, {0x510, 1, 1, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    ClampedController                                           OFFSET(get<T>, {0x514, 8, 0, 0})
	DMember(bool)                                      bIsPetting                                                  OFFSET(get<bool>, {0x51C, 1, 0, 0})
	SMember(FScalableFloat)                            RidingCapsuleHalfHeight                                     OFFSET(getStruct<T>, {0x520, 40, 0, 0})
	SMember(FScalableFloat)                            RidingCapsuleRadius                                         OFFSET(getStruct<T>, {0x548, 40, 0, 0})
	SMember(FCollisionProfileName)                     CollisionProfileName                                        OFFSET(getStruct<T>, {0x580, 4, 0, 0})
	SMember(FScalableFloat)                            TraceRadius                                                 OFFSET(getStruct<T>, {0x588, 40, 0, 0})
	SMember(FScalableFloat)                            TraceLength                                                 OFFSET(getStruct<T>, {0x5B0, 40, 0, 0})
	DMember(bool)                                      bPreventExitRidingFromInput                                 OFFSET(get<bool>, {0x5D8, 1, 0, 0})


	/// Functions
	// Function /Script/RidingCodeRuntime.RiderComponent.StopRidingActor
	// bool StopRidingActor(bool bLaunchRider, bool bFindDismountLocation, bool bIsJumpExit);                                   // [0x9ef7238] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.RiderComponent.StartRidingActor
	// bool StartRidingActor(AActor* TargetActor);                                                                              // [0x9ef71a4] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/RidingCodeRuntime.RiderComponent.ServerRidingExit
	// void ServerRidingExit();                                                                                                 // [0x9ef6d88] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/RidingCodeRuntime.RiderComponent.OnRep_RidableControlRuntimeUpdated
	// void OnRep_RidableControlRuntimeUpdated();                                                                               // [0x9ef6c68] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.OnRep_IsSprintingReplay
	// void OnRep_IsSprintingReplay();                                                                                          // [0x9ef6c54] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.OnRep_ActiveRidable
	// void OnRep_ActiveRidable();                                                                                              // [0x9ef6bc4] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.OnMovementModeChanged
	// void OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x9ef6ab4] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.IsRidingActor
	// bool IsRidingActor();                                                                                                    // [0x9ef675c] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleStoppedRiding
	// void HandleStoppedRiding(URidableComponent* Ridable);                                                                    // [0x7f0c6a8] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleStartedRiding
	// void HandleStartedRiding(URidableComponent* Ridable);                                                                    // [0x5a00558] Native|Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidingExitReleased
	// void HandleRidingExitReleased();                                                                                         // [0x9ef6704] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidingExitPressed
	// void HandleRidingExitPressed();                                                                                          // [0x9ef66f0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRiderTakenDamage
	// void HandleRiderTakenDamage(AActor* DamageOnOwnerPawnDamageddActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x9ef6234] Final|Native|Protected|HasDefaults 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRiderDidDamage
	// void HandleRiderDidDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* HitComponent, FName BoneName, FVector Momentum); // [0x9ef5ce0] Final|Native|Protected|HasDefaults 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidableMovementModeChanged
	// void HandleRidableMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x9ef5be4] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleRidableFound
	// void HandleRidableFound(FHitResult& HitResult);                                                                          // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandlePawnTeleported
	// void HandlePawnTeleported(AFortPawn* TeleportedPawn);                                                                    // [0x9ef5b50] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandlePawnDiedWhileRiding
	// void HandlePawnDiedWhileRiding(AFortPawn* DeadPawn);                                                                     // [0x9ef5ad0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleOnWeaponEquipped
	// void HandleOnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);                                            // [0x9ef5a08] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleGamepadRidingExitReleased
	// void HandleGamepadRidingExitReleased();                                                                                  // [0x9ef59f4] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleDeferredExitVelocity
	// void HandleDeferredExitVelocity(FVector ExitVelocity);                                                                   // [0x9ef5890] Final|Native|Protected|HasDefaults 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleDBNOWhileRiding
	// void HandleDBNOWhileRiding();                                                                                            // [0x9ef587c] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.HandleActorEndPlayWhileRiding
	// void HandleActorEndPlayWhileRiding(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                            // [0x9ef57b8] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.RiderComponent.ClientNotifyEmoteFailure
	// void ClientNotifyEmoteFailure(FGameplayTagContainer ErrorTags);                                                          // [0x9ef5174] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/RidingCodeRuntime.RiderComponent.ClientHandleFinishedCharacterCustomization
	// void ClientHandleFinishedCharacterCustomization(AFortPlayerPawn* PlayerPawn);                                            // [0x9ef50f4] Final|Native|Protected 
};

/// Class /Script/RidingCodeRuntime.ControllingRiderComponent
/// Size: 0x0058 (0x000670 - 0x0006C8)
class UControllingRiderComponent : public URiderComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1736;

public:
	CMember(UFortInputMappingContext*)                 ControllingRidingInputContext                               OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UInputAction*)                             RidingAbility                                               OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UInputAction*)                             GamepadRidingAbility                                        OFFSET(get<T>, {0x680, 8, 0, 0})
	DMember(bool)                                      bCanControlRidable                                          OFFSET(get<bool>, {0x688, 1, 0, 0})
	DMember(bool)                                      bIsControllingRidable                                       OFFSET(get<bool>, {0x689, 1, 0, 0})
	CMember(ERidingControlInputStyle)                  ControlInputStyle                                           OFFSET(get<T>, {0x68A, 1, 0, 0})
	SMember(FRidingControlInputState)                  ReplicatedControlInputState                                 OFFSET(getStruct<T>, {0x698, 12, 0, 0})
	SMember(FRidingControlInputStateReliable)          ReplicatedControlInputStateReliable                         OFFSET(getStruct<T>, {0x6A4, 1, 0, 0})
	SMember(FRidingControlInputStateUnreliable)        ReplicatedControlInputStateUnreliable                       OFFSET(getStruct<T>, {0x6A5, 2, 0, 0})
	CMember(UFortInputComponent*)                      ControllingRiderInputComponent                              OFFSET(get<T>, {0x6A8, 8, 0, 0})
	DMember(float)                                     AutoRunDoubleTapTimestamp                                   OFFSET(get<float>, {0x6C0, 4, 0, 0})
	DMember(bool)                                      bCanBePet                                                   OFFSET(get<bool>, {0x6C4, 1, 0, 0})


	/// Functions
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.UpdateFromInput
	// void UpdateFromInput(float DeltaTime, FRidingControlInputState& InputState);                                             // [0x9ef734c] Native|Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateUnreliable
	// void ServerUpdateControlInputStateUnreliable(FRidingControlInputStateUnreliable InputState);                             // [0x9ef6f30] Net|Native|Event|Protected|NetServer|NetValidate 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerUpdateControlInputStateReliable
	// void ServerUpdateControlInputStateReliable(FRidingControlInputStateReliable InputState);                                 // [0x9ef6dd4] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ServerCancelPetting
	// void ServerCancelPetting();                                                                                              // [0x6640e64] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ReloadPressed
	// void ReloadPressed();                                                                                                    // [0x9ef6cf0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnSprintCanceled
	// void OnSprintCanceled();                                                                                                 // [0x6640e4c] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_IsControllingRidable
	// void OnRep_IsControllingRidable();                                                                                       // [0x9ef6c40] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputUnreliable
	// void OnRep_ControlInputUnreliable();                                                                                     // [0x9ef6c0c] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.OnRep_ControlInputReliable
	// void OnRep_ControlInputReliable();                                                                                       // [0x9ef6bec] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.IsTryingToMove
	// bool IsTryingToMove(float Tolerance);                                                                                    // [0x9ef6818] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityReleased
	// void HandleSpotActorOrPettingAbilityReleased();                                                                          // [0x9ef672c] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleSpotActorOrPettingAbilityPressed
	// void HandleSpotActorOrPettingAbilityPressed();                                                                           // [0x9ef6718] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityReleased
	// void HandleRidingAbilityReleased();                                                                                      // [0x9ef66dc] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRidingAbilityPressed
	// void HandleRidingAbilityPressed();                                                                                       // [0x9ef66c8] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStop
	// void HandleRequestPettingStop();                                                                                         // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleRequestPettingStart
	// void HandleRequestPettingStart();                                                                                        // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandlePettingAbilityPressed
	// void HandlePettingAbilityPressed();                                                                                      // [0x9ef5bd0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.HandleGamepadRidingAbilityPressed
	// void HandleGamepadRidingAbilityPressed();                                                                                // [0x9ef59e0] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.GetControlInputState
	// FRidingControlInputState GetControlInputState();                                                                         // [0x9ef5410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveRight
	// void ControllingActor_OnMoveRight(float Val);                                                                            // [0x9ef5374] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnMoveForward
	// void ControllingActor_OnMoveForward(float Val);                                                                          // [0x67662e4] Final|Native|Protected 
	// Function /Script/RidingCodeRuntime.ControllingRiderComponent.ControllingActor_OnJumpInput
	// void ControllingActor_OnJumpInput(bool bPressed);                                                                        // [0x9ef52f4] Final|Native|Protected 
};

/// Class /Script/RidingCodeRuntime.FortCameraMode_Riding
/// Size: 0x0020 (0x001B90 - 0x001BB0)
class UFortCameraMode_Riding : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7088;

public:
	SMember(FVector)                                   OriginOffset                                                OFFSET(getStruct<T>, {0x1B90, 24, 0, 0})
};

/// Class /Script/RidingCodeRuntime.RidingGameStateMutator
/// Size: 0x0000 (0x000338 - 0x000338)
class ARidingGameStateMutator : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Script/RidingCodeRuntime.RidingAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class URidingAnalytics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData
/// Size: 0x0008 (0x000028 - 0x000030)
class UFortAthenaPettingWildlifeTelemetryData : public UFortAthenaAITelemetryData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   PetCount                                                    OFFSET(get<int32_t>, {0x28, 4, 0, 0})


	/// Functions
	// Function /Script/RidingCodeRuntime.FortAthenaPettingWildlifeTelemetryData.OnPetted
	// void OnPetted();                                                                                                         // [0x9ef6bb0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/RidingCodeRuntime.RidingControlInputStateReliable
/// Size: 0x0001 (0x000000 - 0x000001)
class FRidingControlInputStateReliable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsJumping                                                  OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bIsUsingAbility                                             OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bIsPetting                                                  OFFSET(get<bool>, {0x0, 1, 1, 2})
};

/// Struct /Script/RidingCodeRuntime.RidingControlInputStateUnreliable
/// Size: 0x0002 (0x000000 - 0x000002)
class FRidingControlInputStateUnreliable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(char)                                      RightAlphaQuantized                                         OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(char)                                      ForwardAlphaQuantized                                       OFFSET(get<char>, {0x1, 1, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingControlInputState
/// Size: 0x000C (0x000000 - 0x00000C)
class FRidingControlInputState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     RightAlpha                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ForwardAlpha                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIsJumping                                                  OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bIsUsingAbility                                             OFFSET(get<bool>, {0x8, 1, 1, 2})
	DMember(bool)                                      bIsPetting                                                  OFFSET(get<bool>, {0x8, 1, 1, 4})
};

/// Struct /Script/RidingCodeRuntime.RidingPlaylistBlacklistTableRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FRidingPlaylistBlacklistTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     PlaylistTags                                                OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.PrimaryFireAnimMontageAnimCoreTypeOverride
/// Size: 0x0060 (0x000000 - 0x000060)
class FPrimaryFireAnimMontageAnimCoreTypeOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TEnumAsByte<EFortWeaponCoreAnimation>)     CoreTypeToOverride                                          OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           OverridingMontageInfo                                       OFFSET(getStruct<T>, {0x8, 88, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.PrimaryFireAnimMontageTagOverride
/// Size: 0x0060 (0x000000 - 0x000060)
class FPrimaryFireAnimMontageTagOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTag)                              TagOverride                                                 OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           OverridingMontageInfo                                       OFFSET(getStruct<T>, {0x8, 88, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingAttachmentBoundsOverride
/// Size: 0x0038 (0x000000 - 0x000038)
class FRidingAttachmentBoundsOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bUseOverride                                                OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   AttachSoftBounds                                            OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   AttachHardBounds                                            OFFSET(getStruct<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingPettingData
/// Size: 0x0110 (0x000000 - 0x000110)
class FRidingPettingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(bool)                                      bIsPettableCreature                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           RiderMalePettingMontageInfo                                 OFFSET(getStruct<T>, {0x8, 88, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           RiderFemalePettingMontageInfo                               OFFSET(getStruct<T>, {0x60, 88, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           RidablePettingMontageInfo                                   OFFSET(getStruct<T>, {0xB8, 88, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RiderDismountLaunchVelocity
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FRiderDismountLaunchVelocity : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FScalableFloat)                            DismountVelocityMultiplier                                  OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            DismountVelocityBaseForwardVelocity                         OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            DismountVelocityBaseRightVelocity                           OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            DismountVelocityBaseUpVelocity                              OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	DMember(bool)                                      bApplyDismountVelocityMultiplierToZVelocity                 OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingAnalyticsData_Base
/// Size: 0x0048 (0x000000 - 0x000048)
class FRidingAnalyticsData_Base : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<URiderComponent*>)          Rider                                                       OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<URidableComponent*>)        Ridable                                                     OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingAnalyticsData_Started
/// Size: 0x0000 (0x000048 - 0x000048)
class FRidingAnalyticsData_Started : public FRidingAnalyticsData_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/RidingCodeRuntime.RidingAnalyticsData_Stopped
/// Size: 0x0038 (0x000048 - 0x000080)
class FRidingAnalyticsData_Stopped : public FRidingAnalyticsData_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     TotalRidingTime                                             OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     RiderStartHealth                                            OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     RiderStartShield                                            OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     RiderEndHealth                                              OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     RiderEndShield                                              OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     TotalDistanceTraveled                                       OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   JumpUseCount                                                OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   AbilityUseCount                                             OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(float)                                     RiderDamageDealt                                            OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     RiderDamageTaken                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     RiderHealingReceived                                        OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     RiderShieldGained                                           OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      bRidableEliminated                                          OFFSET(get<bool>, {0x78, 1, 1, 0})
	DMember(bool)                                      bRidableExhausted                                           OFFSET(get<bool>, {0x78, 1, 1, 1})
};

/// Enum /Script/RidingCodeRuntime.ERidingControlInputStyle
/// Size: 0x03
enum ERidingControlInputStyle : uint8_t
{
	ERidingControlInputStyle__SteeringControl0                                       = 0,
	ERidingControlInputStyle__DirectControl1                                         = 1,
	ERidingControlInputStyle__ERidingControlInputStyle_MAX2                          = 2
};

