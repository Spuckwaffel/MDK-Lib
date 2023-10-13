
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/GrappleParentRuntime.FortCameraModifier_Swinging
/// Size: 0x0240 (0x000048 - 0x000288)
class UFortCameraModifier_Swinging : public UCameraModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	DMember(float)                                     MaxVelocityDeltaPerSecond                                   OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(UCurveFloat*)                              BlendInCurve                                                OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UCurveFloat*)                              BlendOutCurve                                               OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FSpeedScaledAxisOffsetData)                ForwardOffsetData                                           OFFSET(getStruct<T>, {0x60, 96, 0, 0})
	SMember(FVector2D)                                 TotalForwardOffsetBounds                                    OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FSpeedScaledAxisOffsetData)                RightOffsetData                                             OFFSET(getStruct<T>, {0xD0, 96, 0, 0})
	SMember(FVector2D)                                 RightForwardOffsetMultiplierBounds                          OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FSpeedScaledAxisOffsetData)                UpOffsetData                                                OFFSET(getStruct<T>, {0x140, 96, 0, 0})
	SMember(FVector2D)                                 UpPositiveForwardOffsetMultiplierBounds                     OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})
	SMember(FVector2D)                                 UpNegativeForwardOffsetMultiplierBounds                     OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	DMember(float)                                     FOVInterpSpeed                                              OFFSET(get<float>, {0x1C0, 4, 0, 0})
	SMember(FVector2D)                                 FOVBounds                                                   OFFSET(getStruct<T>, {0x1C8, 16, 0, 0})
	CMember(UCurveFloat*)                              BoostCurve                                                  OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FScalableFloat)                            BoostModifier                                               OFFSET(getStruct<T>, {0x1E0, 40, 0, 0})
	DMember(float)                                     AttachBoostDuration                                         OFFSET(get<float>, {0x208, 4, 0, 0})
	DMember(float)                                     AttachBoostMagnitude                                        OFFSET(get<float>, {0x20C, 4, 0, 0})
	DMember(float)                                     DetachBoostDuration                                         OFFSET(get<float>, {0x210, 4, 0, 0})
	DMember(float)                                     DetachBoostMagnitude                                        OFFSET(get<float>, {0x214, 4, 0, 0})
	CMember(UCurveFloat*)                              SlidingHeightCurve                                          OFFSET(get<T>, {0x218, 8, 0, 0})
	SMember(FGameplayTag)                              SlidingGameplayTag                                          OFFSET(getStruct<T>, {0x220, 4, 0, 0})
	DMember(float)                                     SlideHeightTransitionDuration                               OFFSET(get<float>, {0x224, 4, 0, 0})
	DMember(float)                                     MaxSlidingSpeedMultiplierOffset                             OFFSET(get<float>, {0x228, 4, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    CachedPlayer                                                OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(AFortWeaponRangedDualSwing*)               CachedWeapon                                                OFFSET(get<T>, {0x238, 8, 0, 0})


	/// Functions
	// Function /Script/GrappleParentRuntime.FortCameraModifier_Swinging.RemoveSelfFromCameraManager
	// void RemoveSelfFromCameraManager();                                                                                      // [0x99c1e10] Final|Native|Protected 
	// Function /Script/GrappleParentRuntime.FortCameraModifier_Swinging.CalculateDynamicMultipliers
	// void CalculateDynamicMultipliers(float& OutFOVBoundsMultiplier, float& OutBoostOffsetMultiplier);                        // [0x99c1b60] Native|Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GrappleParentRuntime.FortSwingingLayerAnimInstance
/// Size: 0x01A0 (0x000450 - 0x0005F0)
class UFortSwingingLayerAnimInstance : public UFortBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	CMember(UAnimInstance*)                            MainAnimBP                                                  OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    Player                                                      OFFSET(get<T>, {0x450, 8, 0, 0})
	DMember(bool)                                      IsGroundSwing                                               OFFSET(get<bool>, {0x458, 1, 0, 0})
	DMember(bool)                                      IsFemale                                                    OFFSET(get<bool>, {0x459, 1, 0, 0})
	DMember(float)                                     PlayerDistanceToGround                                      OFFSET(get<float>, {0x45C, 4, 0, 0})
	DMember(bool)                                      CalculateRotation                                           OFFSET(get<bool>, {0x460, 1, 0, 0})
	SMember(FScalableFloat)                            ForwardInfluenceOnRotation                                  OFFSET(getStruct<T>, {0x468, 40, 0, 0})
	SMember(FScalableFloat)                            TimeForMaxRotationSpeed                                     OFFSET(getStruct<T>, {0x490, 40, 0, 0})
	SMember(FScalableFloat)                            MaxRotationSpeed                                            OFFSET(getStruct<T>, {0x4B8, 40, 0, 0})
	SMember(FScalableFloat)                            RotationSpeedWhileNotAttached                               OFFSET(getStruct<T>, {0x4E0, 40, 0, 0})
	SMember(FScalableFloat)                            RotationSpeedWhileNotRotated                                OFFSET(getStruct<T>, {0x508, 40, 0, 0})
	CMember(AActor*)                                   GetAttachedActor                                            OFFSET(get<T>, {0x530, 8, 0, 0})
	DMember(bool)                                      IsFreeFalling                                               OFFSET(get<bool>, {0x538, 1, 0, 0})
	DMember(bool)                                      IsAttached                                                  OFFSET(get<bool>, {0x539, 1, 0, 0})
	DMember(bool)                                      IsNotAttachedToCliff                                        OFFSET(get<bool>, {0x53A, 1, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x540, 24, 0, 0})
	SMember(FVector)                                   XYVelocity                                                  OFFSET(getStruct<T>, {0x558, 24, 0, 0})
	SMember(FVector)                                   VecFromPlayerToAttachPoint                                  OFFSET(getStruct<T>, {0x570, 24, 0, 0})
	DMember(float)                                     PitchAngleFromAttachPoint                                   OFFSET(get<float>, {0x588, 4, 0, 0})
	DMember(float)                                     RollAngle                                                   OFFSET(get<float>, {0x58C, 4, 0, 0})
	DMember(float)                                     YawAngleToAttachTarget                                      OFFSET(get<float>, {0x590, 4, 0, 0})
	SMember(FName)                                     CurveName_SwingPhase                                        OFFSET(getStruct<T>, {0x594, 4, 0, 0})
	SMember(FName)                                     CurveName_BlendOut                                          OFFSET(getStruct<T>, {0x598, 4, 0, 0})
	DMember(float)                                     SwingPhase                                                  OFFSET(get<float>, {0x59C, 4, 0, 0})
	SMember(FRotator)                                  CurrentRootRotation                                         OFFSET(getStruct<T>, {0x5A0, 24, 0, 0})
	SMember(FVector)                                   CurrentRootTranslation                                      OFFSET(getStruct<T>, {0x5B8, 24, 0, 0})
	DMember(bool)                                      IsSwingRelease1                                             OFFSET(get<bool>, {0x5D0, 1, 0, 0})
	DMember(bool)                                      IsSwingRelease2                                             OFFSET(get<bool>, {0x5D1, 1, 0, 0})
	DMember(bool)                                      IsSwingRelease3                                             OFFSET(get<bool>, {0x5D2, 1, 0, 0})
	DMember(bool)                                      IsSwingRelease4                                             OFFSET(get<bool>, {0x5D3, 1, 0, 0})
	DMember(bool)                                      IsSwingRelease5                                             OFFSET(get<bool>, {0x5D4, 1, 0, 0})
	DMember(bool)                                      IsSwingReleaseSkid                                          OFFSET(get<bool>, {0x5D5, 1, 0, 0})
	DMember(bool)                                      IsMovingAttachPoint                                         OFFSET(get<bool>, {0x5D6, 1, 0, 0})
	DMember(bool)                                      IsBlendOut                                                  OFFSET(get<bool>, {0x5D7, 1, 0, 0})
	DMember(float)                                     WebCastAttachDirection                                      OFFSET(get<float>, {0x5D8, 4, 0, 0})
	DMember(bool)                                      IsWebCastDown                                               OFFSET(get<bool>, {0x5DC, 1, 0, 0})
	DMember(bool)                                      IsSwingOneHand                                              OFFSET(get<bool>, {0x5DD, 1, 0, 0})
	DMember(bool)                                      IsRandomHandBool                                            OFFSET(get<bool>, {0x5DE, 1, 0, 0})
	DMember(bool)                                      IsRandomSwingReleaseBool                                    OFFSET(get<bool>, {0x5DF, 1, 0, 0})
	DMember(bool)                                      IsRandomeReleaseBool                                        OFFSET(get<bool>, {0x5E0, 1, 0, 0})
	DMember(bool)                                      IsWithin100UnitsOfGround                                    OFFSET(get<bool>, {0x5E1, 1, 0, 0})
	DMember(bool)                                      IsHanging                                                   OFFSET(get<bool>, {0x5E2, 1, 0, 0})
	DMember(bool)                                      IsFallRelease                                               OFFSET(get<bool>, {0x5E3, 1, 0, 0})
	DMember(bool)                                      IsOnGroundWebCast                                           OFFSET(get<bool>, {0x5E4, 1, 0, 0})
	DMember(bool)                                      IsSwingNearGroundToSkid                                     OFFSET(get<bool>, {0x5E5, 1, 0, 0})
	DMember(bool)                                      IsHangToSwingInAir                                          OFFSET(get<bool>, {0x5E6, 1, 0, 0})
	DMember(bool)                                      IsHangToSwingNearGround                                     OFFSET(get<bool>, {0x5E7, 1, 0, 0})


	/// Functions
	// Function /Script/GrappleParentRuntime.FortSwingingLayerAnimInstance.GetPlayerAnglesFromAttachPoint
	// void GetPlayerAnglesFromAttachPoint(float& Pitch, float& Roll, float& Yaw);                                              // [0x99c1ce8] Final|Native|Public|HasOutParms 
	// Function /Script/GrappleParentRuntime.FortSwingingLayerAnimInstance.GetAttachVectorInPlayerSpace
	// FVector GetAttachVectorInPlayerSpace(FVector& InPlayerToAttachPoint);                                                    // [0x99c1c40] Final|Native|Public|HasOutParms|HasDefaults 
};

/// Struct /Script/GrappleParentRuntime.SpeedScaledAxisOffsetData
/// Size: 0x0060 (0x000000 - 0x000060)
class FSpeedScaledAxisOffsetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FScalableFloat)                            OffsetModifier                                              OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	DMember(float)                                     BaseOffset                                                  OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     SpeedScaledOffset                                           OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FVector2D)                                 SpeedBounds                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FVector2D)                                 SpeedMultiplierBounds                                       OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

