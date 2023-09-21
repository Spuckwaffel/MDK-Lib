
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
	SMember(FCachedAnimRelevancyData)                  IntoVehicleCachedData                                       ___ OFFSET(get<T>, {0x810, 20, 0, 0})
	SMember(FCachedAnimRelevancyData)                  OutOfVehicleCachedData                                      ___ OFFSET(get<T>, {0x824, 20, 0, 0})
	DMember(float)                                     InTime                                                      ___ OFFSET(get<float>, {0x838, 4, 0, 0})
	DMember(float)                                     OutTime                                                     ___ OFFSET(get<float>, {0x83C, 4, 0, 0})
	DMember(float)                                     BodyYawOffset                                               ___ OFFSET(get<float>, {0x840, 4, 0, 0})
	SMember(FRotator)                                  BodyCounterRotation                                         ___ OFFSET(get<T>, {0x848, 24, 0, 0})
	DMember(float)                                     BodyCounterRotationAlpha                                    ___ OFFSET(get<float>, {0x860, 4, 0, 0})
	DMember(bool)                                      bIsReloading                                                ___ OFFSET(get<bool>, {0x864, 1, 0, 0})
	DMember(bool)                                      bIsTargeting                                                ___ OFFSET(get<bool>, {0x865, 1, 0, 0})
	DMember(bool)                                      bIsFiring                                                   ___ OFFSET(get<bool>, {0x866, 1, 0, 0})
	DMember(bool)                                      bIsUsingConsumable                                          ___ OFFSET(get<bool>, {0x867, 1, 0, 0})
	DMember(bool)                                      bIsInAction                                                 ___ OFFSET(get<bool>, {0x868, 1, 0, 0})
	DMember(bool)                                      bIsThrowConsumable                                          ___ OFFSET(get<bool>, {0x869, 1, 0, 0})
	DMember(bool)                                      bIsTargetingOrThrowingConsumable                            ___ OFFSET(get<bool>, {0x86A, 1, 0, 0})
	DMember(bool)                                      bIsTurningInPlace                                           ___ OFFSET(get<bool>, {0x86B, 1, 0, 0})
	DMember(bool)                                      bIsRidingSprinting                                          ___ OFFSET(get<bool>, {0x86C, 1, 0, 0})
	DMember(bool)                                      bIsRidingPetting                                            ___ OFFSET(get<bool>, {0x86D, 1, 0, 0})
	DMember(float)                                     TurnInPlaceRotationSpeed                                    ___ OFFSET(get<float>, {0x870, 4, 0, 0})
	DMember(float)                                     TurnInPlaceAngleDelta                                       ___ OFFSET(get<float>, {0x874, 4, 0, 0})
	DMember(bool)                                      bIsRidingMovingBackward                                     ___ OFFSET(get<bool>, {0x878, 1, 0, 0})
	DMember(bool)                                      bIsSlopeSliding                                             ___ OFFSET(get<bool>, {0x879, 1, 0, 0})
	DMember(float)                                     SlopeSlidingPitch                                           ___ OFFSET(get<float>, {0x87C, 4, 0, 0})
	DMember(float)                                     SlopeSlidingRoll                                            ___ OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(float)                                     RiderReferentialRidableYaw                                  ___ OFFSET(get<float>, {0x884, 4, 0, 0})
	DMember(float)                                     AimYawDegreesCoverage                                       ___ OFFSET(get<float>, {0x888, 4, 0, 0})
	DMember(float)                                     SmoothedAimYaw                                              ___ OFFSET(get<float>, {0x88C, 4, 0, 0})
	DMember(bool)                                      bJustEntered                                                ___ OFFSET(get<bool>, {0x890, 1, 0, 0})
	DMember(bool)                                      bIsRidableMoving                                            ___ OFFSET(get<bool>, {0x891, 1, 0, 0})
	DMember(bool)                                      bIsRideMode                                                 ___ OFFSET(get<bool>, {0x892, 1, 0, 0})
	DMember(float)                                     RidableVelocity                                             ___ OFFSET(get<float>, {0x894, 4, 0, 0})
	DMember(float)                                     BodyYaw                                                     ___ OFFSET(get<float>, {0x898, 4, 0, 0})
	DMember(float)                                     BoostPlayRate                                               ___ OFFSET(get<float>, {0x89C, 4, 0, 0})
	DMember(float)                                     RidingMovePlayRate                                          ___ OFFSET(get<float>, {0x8A0, 4, 0, 0})
	DMember(float)                                     FalseBlendTime                                              ___ OFFSET(get<float>, {0x8A4, 4, 0, 0})
	DMember(float)                                     CombatToRideYaw                                             ___ OFFSET(get<float>, {0x8A8, 4, 0, 0})
	DMember(float)                                     InPlaceYaw                                                  ___ OFFSET(get<float>, {0x8AC, 4, 0, 0})
	DMember(float)                                     HeadAOAlpha                                                 ___ OFFSET(get<float>, {0x8B0, 4, 0, 0})
	SMember(FRotator)                                  MeleeTwistRot                                               ___ OFFSET(get<T>, {0x8B8, 24, 0, 0})
	DMember(bool)                                      bIsDualWield                                                ___ OFFSET(get<bool>, {0x8D0, 1, 0, 0})
	DMember(bool)                                      bIsOneHandedDualWield                                       ___ OFFSET(get<bool>, {0x8D1, 1, 0, 0})
	DMember(bool)                                      bIsTwoHandedSword                                           ___ OFFSET(get<bool>, {0x8D2, 1, 0, 0})
	DMember(bool)                                      bShouldAdjustBodyTwistForMelee                              ___ OFFSET(get<bool>, {0x8D3, 1, 0, 0})
	SMember(FVector)                                   PlayerOffset                                                ___ OFFSET(get<T>, {0x8D8, 24, 0, 0})
	DMember(float)                                     NoiseAlpha                                                  ___ OFFSET(get<float>, {0x8F0, 4, 0, 0})
	DMember(bool)                                      bIsLobsterBlockActive                                       ___ OFFSET(get<bool>, {0x8F4, 1, 0, 0})
	DMember(float)                                     SlopePitch                                                  ___ OFFSET(get<float>, {0x8F8, 4, 0, 0})
	DMember(float)                                     RiderHeightAdjustmentSpringConstant                         ___ OFFSET(get<float>, {0x8FC, 4, 0, 0})
	DMember(float)                                     MinSlopePitchForRiderHeightAdjustment                       ___ OFFSET(get<float>, {0x900, 4, 0, 0})
	DMember(float)                                     MaxSlopePitchForRiderHeightAdjustment                       ___ OFFSET(get<float>, {0x904, 4, 0, 0})
	DMember(float)                                     RiderHeightAdjustmentForMinSlopePitch                       ___ OFFSET(get<float>, {0x908, 4, 0, 0})
	DMember(float)                                     RiderHeightAdjustmentForMaxSlopePitch                       ___ OFFSET(get<float>, {0x90C, 4, 0, 0})
	DMember(float)                                     PettingRotAlpha                                             ___ OFFSET(get<float>, {0x910, 4, 0, 0})
	SMember(FRotator)                                  PettingRot                                                  ___ OFFSET(get<T>, {0x918, 24, 0, 0})
	DMember(float)                                     PettingPitchFactor                                          ___ OFFSET(get<float>, {0x930, 4, 0, 0})
	DMember(float)                                     PettingRollFactor                                           ___ OFFSET(get<float>, {0x934, 4, 0, 0})
	SMember(FVector)                                   HandAttachLeft                                              ___ OFFSET(get<T>, {0x938, 24, 0, 0})
	SMember(FVector)                                   HandAttachRight                                             ___ OFFSET(get<T>, {0x950, 24, 0, 0})
	DMember(float)                                     HandAttachAlpha                                             ___ OFFSET(get<float>, {0x968, 4, 0, 0})
	CMember(ERidingFootPhase)                          FootPhase                                                   ___ OFFSET(get<T>, {0x96C, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FeetInAir                                      ___ OFFSET(get<bool>, {0x96D, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_FrontFeetPlanted                               ___ OFFSET(get<bool>, {0x96E, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_BackFeetPlanted                                ___ OFFSET(get<bool>, {0x96F, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftBackFeetForward                            ___ OFFSET(get<bool>, {0x970, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightBackFeetForward                           ___ OFFSET(get<bool>, {0x971, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_LeftPlantedRightPass                           ___ OFFSET(get<bool>, {0x972, 1, 0, 0})
	DMember(bool)                                      bIsFootPhase_RightPlantedLeftPass                           ___ OFFSET(get<bool>, {0x973, 1, 0, 0})
	DMember(float)                                     TurnInPlaceModulatedSpeed                                   ___ OFFSET(get<float>, {0x974, 4, 0, 0})
	DMember(bool)                                      bIsTurnInPlaceAngleDeltaPositive                            ___ OFFSET(get<bool>, {0x978, 1, 0, 0})
	DMember(float)                                     SlopeRoll                                                   ___ OFFSET(get<float>, {0x97C, 4, 0, 0})
	DMember(float)                                     MovingVelocityLowerBound                                    ___ OFFSET(get<float>, {0x980, 4, 0, 0})
	DMember(float)                                     JustEnteredDelayTimeSec                                     ___ OFFSET(get<float>, {0x984, 4, 0, 0})
	DMember(float)                                     FalseBlendTime_Moving                                       ___ OFFSET(get<float>, {0x988, 4, 0, 0})
	DMember(float)                                     FalseBlendTime_NotMoving                                    ___ OFFSET(get<float>, {0x98C, 4, 0, 0})
	SMember(FVector)                                   PlayerOffsetMale                                            ___ OFFSET(get<T>, {0x990, 24, 0, 0})
	SMember(FVector)                                   PlayerOffsetFemale                                          ___ OFFSET(get<T>, {0x9A8, 24, 0, 0})
	SMember(FSoftObjectPath)                           ScytheMontage                                               ___ OFFSET(get<T>, {0x9C0, 24, 0, 0})
	SMember(FSoftObjectPath)                           BRSwordMontage                                              ___ OFFSET(get<T>, {0x9D8, 24, 0, 0})
	CMember(TEnumAsByte<EFortWeaponCoreAnimation>)     MeleeDualWieldCoreAnimation                                 ___ OFFSET(get<T>, {0x9F0, 1, 0, 0})
	SMember(FVector)                                   SlopePitchTraceStart                                        ___ OFFSET(get<T>, {0x9F8, 24, 0, 0})
	SMember(FVector)                                   SlopePitchTraceEnd                                          ___ OFFSET(get<T>, {0xA10, 24, 0, 0})
	SMember(FVector)                                   HandAttachLocationLeftMale                                  ___ OFFSET(get<T>, {0xA28, 24, 0, 0})
	SMember(FVector)                                   HandAttachLocationRightMale                                 ___ OFFSET(get<T>, {0xA40, 24, 0, 0})
	SMember(FVector)                                   HandAttachLocationLeftFemale                                ___ OFFSET(get<T>, {0xA58, 24, 0, 0})
	SMember(FVector)                                   HandAttachLocationRightFemale                               ___ OFFSET(get<T>, {0xA70, 24, 0, 0})
	SMember(FName)                                     PlayerHandAttachLeft                                        ___ OFFSET(get<T>, {0xA88, 4, 0, 0})
	SMember(FName)                                     PlayerHandAttachRight                                       ___ OFFSET(get<T>, {0xA8C, 4, 0, 0})
	SMember(FName)                                     DisableHandAttachCurveName                                  ___ OFFSET(get<T>, {0xA90, 4, 0, 0})
	SMember(FName)                                     AllowRidingNoiseAdditiveCurveName                           ___ OFFSET(get<T>, {0xA94, 4, 0, 0})
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
	SMember(FMulticastInlineDelegate)                  OnRiderStartedRiding                                        ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRiderStoppedRiding                                        ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(UClass*)                                   RiderAnimLayerOverlayClass                                  ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FName)                                     AttachSocket                                                ___ OFFSET(get<T>, {0xD0, 4, 0, 0})
	SMember(FVector)                                   AttachLocationOffset                                        ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	SMember(FRotator)                                  AttachRotationOffset                                        ___ OFFSET(get<T>, {0xF0, 24, 0, 0})
	SMember(FName)                                     ClientAttachGuideSocket                                     ___ OFFSET(get<T>, {0x108, 4, 0, 0})
	SMember(FVector)                                   ClientAttachGuideLocationOffset                             ___ OFFSET(get<T>, {0x110, 24, 0, 0})
	SMember(FName)                                     RidablePropAttachSocket                                     ___ OFFSET(get<T>, {0x128, 4, 0, 0})
	SMember(FVector)                                   RidablePropAttachLocationOffset                             ___ OFFSET(get<T>, {0x130, 24, 0, 0})
	SMember(FRotator)                                  RidablePropAttachRotationOffset                             ___ OFFSET(get<T>, {0x148, 24, 0, 0})
	DMember(float)                                     RidablePropAttachScale                                      ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	DMember(float)                                     RidablePropAttachRiderVerticalBuffer                        ___ OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FRidingAttachmentBoundsOverride)           RiderPropAttachBoundsOverride                               ___ OFFSET(get<T>, {0x168, 56, 0, 0})
	DMember(bool)                                      bOverrideNoiseGeneration                                    ___ OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	SMember(FFortPlayerPawnAthenaMovementNoiseOverride) RiderMovementNoiseOverride                                 ___ OFFSET(get<T>, {0x1A4, 12, 0, 0})
	CMember(UClass*)                                   CameraModeClassOverride                                     ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(UClass*)                                   SprintCameraModeClassOverride                               ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	SMember(FScalableFloat)                            UseTargetingAdditionalViewTargetSpaceViewOffsetOverride     ___ OFFSET(get<T>, {0x1C0, 40, 0, 0})
	SMember(FInterpOffset)                             TargetingAdditionalViewTargetSpaceViewOffsetOverride        ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	SMember(FVector)                                   WeaponTargetingSourceOffsetModifier                         ___ OFFSET(get<T>, {0x1F8, 24, 0, 0})
	SMember(FGameplayTag)                              RidableTag                                                  ___ OFFSET(get<T>, {0x210, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyDepletedTag                                           ___ OFFSET(get<T>, {0x214, 4, 0, 0})
	SMember(FDataTableRowHandle)                       PlaylistTagBlacklistRowHandle                               ___ OFFSET(get<T>, {0x218, 16, 0, 0})
	CMember(URiderComponent*)                          ActiveRider                                                 ___ OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(URiderComponent*)                          LastRider                                                   ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(USceneComponent*)                          RidableProp                                                 ___ OFFSET(get<T>, {0x238, 8, 0, 0})
	DMember(float)                                     OriginalCapsuleRadius                                       ___ OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(float)                                     OriginalCapsuleHalfHeight                                   ___ OFFSET(get<float>, {0x244, 4, 0, 0})
	DMember(float)                                     RidingCapsuleRadius                                         ___ OFFSET(get<float>, {0x248, 4, 0, 0})
	DMember(float)                                     RidingCapsuleHalfHeight                                     ___ OFFSET(get<float>, {0x24C, 4, 0, 0})
	DMember(bool)                                      bOriginalClientPositionSmoothingThrottlingSetting           ___ OFFSET(get<bool>, {0x250, 1, 0, 0})
	SMember(FScalableFloat)                            MaxHalfAimingAngle                                          ___ OFFSET(get<T>, {0x258, 40, 0, 0})
	CMember(TArray<FPrimaryFireAnimMontageAnimCoreTypeOverride>) PrimaryFireMontageAnimCoreTypeOverrides           ___ OFFSET(get<T>, {0x280, 16, 0, 0})
	CMember(TArray<FPrimaryFireAnimMontageTagOverride>) PrimaryFireMontageTagOverrides                             ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(FRidingPettingData)                        PettingData                                                 ___ OFFSET(get<T>, {0x2A0, 272, 0, 0})
	SMember(FTimerHandle)                              RestoreCollisionHandle                                      ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	DMember(bool)                                      bIsSprinting                                                ___ OFFSET(get<bool>, {0x3C8, 1, 0, 0})
};

/// Class /Script/RidingCodeRuntime.ControllableRidableComponent
/// Size: 0x02D0 (0x0003E0 - 0x0006B0)
class UControllableRidableComponent : public URidableComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1712;

public:
	DMember(bool)                                      bUseGravityJump                                             ___ OFFSET(get<bool>, {0x3E0, 1, 0, 0})
	DMember(bool)                                      bIsControllable                                             ___ OFFSET(get<bool>, {0x3E1, 1, 0, 0})
	DMember(bool)                                      bHasAbility                                                 ___ OFFSET(get<bool>, {0x3E2, 1, 0, 0})
	SMember(FText)                                     AbilityDisplayText                                          ___ OFFSET(get<T>, {0x3E8, 24, 0, 0})
	DMember(bool)                                      bCanJump                                                    ___ OFFSET(get<bool>, {0x400, 1, 0, 0})
	DMember(bool)                                      bAlwaysMoveForward                                          ___ OFFSET(get<bool>, {0x401, 1, 0, 0})
	DMember(float)                                     ForwardMoveSpeedMultiplier                                  ___ OFFSET(get<float>, {0x404, 4, 0, 0})
	DMember(float)                                     BackwardMoveSpeedMultiplier                                 ___ OFFSET(get<float>, {0x408, 4, 0, 0})
	DMember(float)                                     SidewaysMoveRotationOffset                                  ___ OFFSET(get<float>, {0x40C, 4, 0, 0})
	CMember(TEnumAsByte<EFortMovementUrgency>)         MovementUrgency                                             ___ OFFSET(get<T>, {0x410, 1, 0, 0})
	DMember(bool)                                      bIsBeingControlled                                          ___ OFFSET(get<bool>, {0x411, 1, 0, 0})
	SMember(FRidableControlParams)                     RidableControlParams                                        ___ OFFSET(get<T>, {0x430, 520, 0, 0})
	SMember(FScalableFloat)                            JumpUpwardGravityScale                                      ___ OFFSET(get<T>, {0x660, 40, 0, 0})
	SMember(FScalableFloat)                            JumpDownwardGravityScale                                    ___ OFFSET(get<T>, {0x688, 40, 0, 0})
};

/// Class /Script/RidingCodeRuntime.RiderComponent
/// Size: 0x05C8 (0x0000A8 - 0x000670)
class URiderComponent : public UFortPawnOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FMulticastInlineDelegate)                  OnStartedRiding                                             ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStoppedRiding                                             ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(UClass*)                                   RidingCameraModeClass                                       ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UClass*)                                   RidingSprintCameraModeClass                                 ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
	DMember(float)                                     RidingCameraModeBlendTime                                   ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
	SMember(FInterpOffset)                             TargetingAdditionalViewTargetSpaceViewOffset                ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(UClass*)                                   RiderPropClass                                              ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(UClass*)                                   RidablePropClass                                            ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FVector)                                   RiderPropAttachLocationOffset                               ___ OFFSET(get<T>, {0x108, 24, 0, 0})
	SMember(FRotator)                                  RiderPropAttachRotationOffset                               ___ OFFSET(get<T>, {0x120, 24, 0, 0})
	DMember(float)                                     RiderPropAttachScale                                        ___ OFFSET(get<float>, {0x138, 4, 0, 0})
	SMember(FName)                                     RiderPropAttachSocket                                       ___ OFFSET(get<T>, {0x13C, 4, 0, 0})
	DMember(bool)                                      bUseClientAttachGuideSocket                                 ___ OFFSET(get<bool>, {0x140, 1, 0, 0})
	SMember(FVector)                                   RiderPropAttachSoftBounds                                   ___ OFFSET(get<T>, {0x148, 24, 0, 0})
	DMember(float)                                     RiderPropAttachSoftBoundsScalar                             ___ OFFSET(get<float>, {0x160, 4, 0, 0})
	SMember(FVector)                                   RiderPropAttachHardBounds                                   ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	DMember(float)                                     RiderPropAttachSoftBoundsTargetingScalar                    ___ OFFSET(get<float>, {0x180, 4, 0, 0})
	DMember(float)                                     RiderPropAttachHardBoundsTargetingScalar                    ___ OFFSET(get<float>, {0x184, 4, 0, 0})
	DMember(float)                                     RiderPropAttachVerticalBufferTargetingScalar                ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     RidingExitHoldTime                                          ___ OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FScalableFloat)                            TimeBeforeReenteringRiding                                  ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FGameplayTag)                              RidingExitStartedEventTag                                   ___ OFFSET(get<T>, {0x1B8, 4, 0, 0})
	SMember(FGameplayTag)                              RidingExitStoppedEventTag                                   ___ OFFSET(get<T>, {0x1BC, 4, 0, 0})
	CMember(UFortInputMappingContext*)                 RidingInputContext                                          ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(UInputAction*)                             RidingExit                                                  ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(UInputAction*)                             GamepadRidingExit                                           ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(UFXSystemAsset*)                           ConnectorFXAsset                                            ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FName)                                     ConnectorPropSourceMeshParameterName                        ___ OFFSET(get<T>, {0x1E0, 4, 0, 0})
	SMember(FName)                                     ConnectorPropTargetMeshParameterName                        ___ OFFSET(get<T>, {0x1E4, 4, 0, 0})
	DMember(float)                                     SimulatedSmoothedRotationSpeed                              ___ OFFSET(get<float>, {0x1E8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     ExcludedEmoteTags                                           ___ OFFSET(get<T>, {0x1F0, 32, 0, 0})
	CMember(URidableComponent*)                        ActiveRidable                                               ___ OFFSET(get<T>, {0x218, 8, 0, 0})
	CMember(URidableComponent*)                        LastRidable                                                 ___ OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(USceneComponent*)                          RiderProp                                                   ___ OFFSET(get<T>, {0x228, 8, 0, 0})
	CMember(UFXSystemComponent*)                       ConnectorProp                                               ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	SMember(FVector)                                   PropAttachSeparation                                        ___ OFFSET(get<T>, {0x238, 24, 0, 0})
	SMember(FVector)                                   AdditionalAttachOffset                                      ___ OFFSET(get<T>, {0x250, 24, 0, 0})
	SMember(FVector)                                   SoftBoundsAttachmentOffset                                  ___ OFFSET(get<T>, {0x268, 24, 0, 0})
	SMember(FVector)                                   HardBoundsAttachmentOffset                                  ___ OFFSET(get<T>, {0x280, 24, 0, 0})
	SMember(FDataTableRowHandle)                       PlaylistTagDenylistRowHandle                                ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(UFortInputComponent*)                      RiderInputComponent                                         ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     PendingFailedEmoteErrorTags                                 ___ OFFSET(get<T>, {0x2B0, 32, 0, 0})
	SMember(FRiderDismountLaunchVelocity)              ExitLaunchVelocity                                          ___ OFFSET(get<T>, {0x2D0, 168, 0, 0})
	SMember(FRiderDismountLaunchVelocity)              JumpExitLaunchVelocity                                      ___ OFFSET(get<T>, {0x378, 168, 0, 0})
	SMember(FRidingAnalyticsData_Stopped)              ActiveAnaltyicsData                                         ___ OFFSET(get<T>, {0x428, 128, 0, 0})
	SMember(FVector)                                   RidableLocationLastFrame                                    ___ OFFSET(get<T>, {0x4A8, 24, 0, 0})
	SMember(FTimerHandle)                              RestoreCollisionHandle                                      ___ OFFSET(get<T>, {0x4C8, 8, 0, 0})
	SMember(FRidableControlRuntimeData)                RidableControlRuntimeData                                   ___ OFFSET(get<T>, {0x4D0, 64, 0, 0})
	DMember(bool)                                      bIsSprintingReplay                                          ___ OFFSET(get<bool>, {0x510, 1, 1, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    ClampedController                                           ___ OFFSET(get<T>, {0x514, 8, 0, 0})
	DMember(bool)                                      bIsPetting                                                  ___ OFFSET(get<bool>, {0x51C, 1, 0, 0})
	SMember(FScalableFloat)                            RidingCapsuleHalfHeight                                     ___ OFFSET(get<T>, {0x520, 40, 0, 0})
	SMember(FScalableFloat)                            RidingCapsuleRadius                                         ___ OFFSET(get<T>, {0x548, 40, 0, 0})
	SMember(FCollisionProfileName)                     CollisionProfileName                                        ___ OFFSET(get<T>, {0x580, 4, 0, 0})
	SMember(FScalableFloat)                            TraceRadius                                                 ___ OFFSET(get<T>, {0x588, 40, 0, 0})
	SMember(FScalableFloat)                            TraceLength                                                 ___ OFFSET(get<T>, {0x5B0, 40, 0, 0})
	DMember(bool)                                      bPreventExitRidingFromInput                                 ___ OFFSET(get<bool>, {0x5D8, 1, 0, 0})
};

/// Class /Script/RidingCodeRuntime.ControllingRiderComponent
/// Size: 0x0058 (0x000670 - 0x0006C8)
class UControllingRiderComponent : public URiderComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1736;

public:
	CMember(UFortInputMappingContext*)                 ControllingRidingInputContext                               ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UInputAction*)                             RidingAbility                                               ___ OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UInputAction*)                             GamepadRidingAbility                                        ___ OFFSET(get<T>, {0x680, 8, 0, 0})
	DMember(bool)                                      bCanControlRidable                                          ___ OFFSET(get<bool>, {0x688, 1, 0, 0})
	DMember(bool)                                      bIsControllingRidable                                       ___ OFFSET(get<bool>, {0x689, 1, 0, 0})
	CMember(ERidingControlInputStyle)                  ControlInputStyle                                           ___ OFFSET(get<T>, {0x68A, 1, 0, 0})
	SMember(FRidingControlInputState)                  ReplicatedControlInputState                                 ___ OFFSET(get<T>, {0x698, 12, 0, 0})
	SMember(FRidingControlInputStateReliable)          ReplicatedControlInputStateReliable                         ___ OFFSET(get<T>, {0x6A4, 1, 0, 0})
	SMember(FRidingControlInputStateUnreliable)        ReplicatedControlInputStateUnreliable                       ___ OFFSET(get<T>, {0x6A5, 2, 0, 0})
	CMember(UFortInputComponent*)                      ControllingRiderInputComponent                              ___ OFFSET(get<T>, {0x6A8, 8, 0, 0})
	DMember(float)                                     AutoRunDoubleTapTimestamp                                   ___ OFFSET(get<float>, {0x6C0, 4, 0, 0})
	DMember(bool)                                      bCanBePet                                                   ___ OFFSET(get<bool>, {0x6C4, 1, 0, 0})
};

/// Class /Script/RidingCodeRuntime.FortCameraMode_Riding
/// Size: 0x0020 (0x001B50 - 0x001B70)
class UFortCameraMode_Riding : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7024;

public:
	SMember(FVector)                                   OriginOffset                                                ___ OFFSET(get<T>, {0x1B50, 24, 0, 0})
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
	DMember(int32_t)                                   PetCount                                                    ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingControlInputStateReliable
/// Size: 0x0001 (0x000000 - 0x000001)
class FRidingControlInputStateReliable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIsJumping                                                  ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bIsUsingAbility                                             ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bIsPetting                                                  ___ OFFSET(get<bool>, {0x0, 1, 1, 2})
};

/// Struct /Script/RidingCodeRuntime.RidingControlInputStateUnreliable
/// Size: 0x0002 (0x000000 - 0x000002)
class FRidingControlInputStateUnreliable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(char)                                      RightAlphaQuantized                                         ___ OFFSET(get<char>, {0x0, 1, 0, 0})
	DMember(char)                                      ForwardAlphaQuantized                                       ___ OFFSET(get<char>, {0x1, 1, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingControlInputState
/// Size: 0x000C (0x000000 - 0x00000C)
class FRidingControlInputState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     RightAlpha                                                  ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ForwardAlpha                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bIsJumping                                                  ___ OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bIsUsingAbility                                             ___ OFFSET(get<bool>, {0x8, 1, 1, 2})
	DMember(bool)                                      bIsPetting                                                  ___ OFFSET(get<bool>, {0x8, 1, 1, 4})
};

/// Struct /Script/RidingCodeRuntime.RidingPlaylistBlacklistTableRow
/// Size: 0x0020 (0x000008 - 0x000028)
class FRidingPlaylistBlacklistTableRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     PlaylistTags                                                ___ OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.PrimaryFireAnimMontageAnimCoreTypeOverride
/// Size: 0x0060 (0x000000 - 0x000060)
class FPrimaryFireAnimMontageAnimCoreTypeOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TEnumAsByte<EFortWeaponCoreAnimation>)     CoreTypeToOverride                                          ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           OverridingMontageInfo                                       ___ OFFSET(get<T>, {0x8, 88, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.PrimaryFireAnimMontageTagOverride
/// Size: 0x0060 (0x000000 - 0x000060)
class FPrimaryFireAnimMontageTagOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTag)                              TagOverride                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           OverridingMontageInfo                                       ___ OFFSET(get<T>, {0x8, 88, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingAttachmentBoundsOverride
/// Size: 0x0038 (0x000000 - 0x000038)
class FRidingAttachmentBoundsOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bUseOverride                                                ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   AttachSoftBounds                                            ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   AttachHardBounds                                            ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingPettingData
/// Size: 0x0110 (0x000000 - 0x000110)
class FRidingPettingData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(bool)                                      bIsPettableCreature                                         ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           RiderMalePettingMontageInfo                                 ___ OFFSET(get<T>, {0x8, 88, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           RiderFemalePettingMontageInfo                               ___ OFFSET(get<T>, {0x60, 88, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           RidablePettingMontageInfo                                   ___ OFFSET(get<T>, {0xB8, 88, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RiderDismountLaunchVelocity
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FRiderDismountLaunchVelocity : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FScalableFloat)                            DismountVelocityMultiplier                                  ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            DismountVelocityBaseForwardVelocity                         ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            DismountVelocityBaseRightVelocity                           ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            DismountVelocityBaseUpVelocity                              ___ OFFSET(get<T>, {0x78, 40, 0, 0})
	DMember(bool)                                      bApplyDismountVelocityMultiplierToZVelocity                 ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingAnalyticsData_Base
/// Size: 0x0048 (0x000000 - 0x000048)
class FRidingAnalyticsData_Base : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<URiderComponent*>)          Rider                                                       ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TWeakObjectPtr<URidableComponent*>)        Ridable                                                     ___ OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/RidingCodeRuntime.RidingAnalyticsData_Started
/// Size: 0x0000 (0x000048 - 0x000048)
class FRidingAnalyticsData_Started : public FRidingAnalyticsData_Base
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/RidingCodeRuntime.RidingAnalyticsData_Stopped
/// Size: 0x0038 (0x000048 - 0x000080)
class FRidingAnalyticsData_Stopped : public FRidingAnalyticsData_Base
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(float)                                     TotalRidingTime                                             ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     RiderStartHealth                                            ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     RiderStartShield                                            ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     RiderEndHealth                                              ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     RiderEndShield                                              ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     TotalDistanceTraveled                                       ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(int32_t)                                   JumpUseCount                                                ___ OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   AbilityUseCount                                             ___ OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(float)                                     RiderDamageDealt                                            ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     RiderDamageTaken                                            ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     RiderHealingReceived                                        ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     RiderShieldGained                                           ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(bool)                                      bRidableEliminated                                          ___ OFFSET(get<bool>, {0x78, 1, 1, 0})
	DMember(bool)                                      bRidableExhausted                                           ___ OFFSET(get<bool>, {0x78, 1, 1, 1})
};

/// Enum /Script/RidingCodeRuntime.ERidingControlInputStyle
/// Size: 0x03
enum ERidingControlInputStyle : uint8_t
{
	ERidingControlInputStyle__SteeringControl0                                       = 0,
	ERidingControlInputStyle__DirectControl1                                         = 1,
	ERidingControlInputStyle__ERidingControlInputStyle_MAX2                          = 2
};

