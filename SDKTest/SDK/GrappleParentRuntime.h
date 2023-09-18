/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GrappleParentRuntime.

/// Struct /Script/GrappleParentRuntime.SpeedScaledAxisOffsetData
/// Size: 0x0060 (0x000000 - 0x000060)
class FSpeedScaledAxisOffsetData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FScalableFloat)                            OffsetModifier                                              ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	DMember(float)                                     BaseOffset                                                  ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     SpeedScaledOffset                                           ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	SMember(FVector2D)                                 SpeedBounds                                                 ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FVector2D)                                 SpeedMultiplierBounds                                       ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/GrappleParentRuntime.FortCameraModifier_Swinging
/// Size: 0x0240 (0x000048 - 0x000288)
class UFortCameraModifier_Swinging : public UCameraModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	DMember(float)                                     MaxVelocityDeltaPerSecond                                   ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(UCurveFloat*)                              BlendInCurve                                                ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UCurveFloat*)                              BlendOutCurve                                               ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FSpeedScaledAxisOffsetData)                ForwardOffsetData                                           ___ OFFSET(get<T>, {0x60, 96, 0, 0})
	SMember(FVector2D)                                 TotalForwardOffsetBounds                                    ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FSpeedScaledAxisOffsetData)                RightOffsetData                                             ___ OFFSET(get<T>, {0xD0, 96, 0, 0})
	SMember(FVector2D)                                 RightForwardOffsetMultiplierBounds                          ___ OFFSET(get<T>, {0x130, 16, 0, 0})
	SMember(FSpeedScaledAxisOffsetData)                UpOffsetData                                                ___ OFFSET(get<T>, {0x140, 96, 0, 0})
	SMember(FVector2D)                                 UpPositiveForwardOffsetMultiplierBounds                     ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
	SMember(FVector2D)                                 UpNegativeForwardOffsetMultiplierBounds                     ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
	DMember(float)                                     FOVInterpSpeed                                              ___ OFFSET(get<float>, {0x1C0, 4, 0, 0})
	SMember(FVector2D)                                 FOVBounds                                                   ___ OFFSET(get<T>, {0x1C8, 16, 0, 0})
	CMember(UCurveFloat*)                              BoostCurve                                                  ___ OFFSET(get<T>, {0x1D8, 8, 0, 0})
	SMember(FScalableFloat)                            BoostModifier                                               ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	DMember(float)                                     AttachBoostDuration                                         ___ OFFSET(get<float>, {0x208, 4, 0, 0})
	DMember(float)                                     AttachBoostMagnitude                                        ___ OFFSET(get<float>, {0x20C, 4, 0, 0})
	DMember(float)                                     DetachBoostDuration                                         ___ OFFSET(get<float>, {0x210, 4, 0, 0})
	DMember(float)                                     DetachBoostMagnitude                                        ___ OFFSET(get<float>, {0x214, 4, 0, 0})
	CMember(UCurveFloat*)                              SlidingHeightCurve                                          ___ OFFSET(get<T>, {0x218, 8, 0, 0})
	SMember(FGameplayTag)                              SlidingGameplayTag                                          ___ OFFSET(get<T>, {0x220, 4, 0, 0})
	DMember(float)                                     SlideHeightTransitionDuration                               ___ OFFSET(get<float>, {0x224, 4, 0, 0})
	DMember(float)                                     MaxSlidingSpeedMultiplierOffset                             ___ OFFSET(get<float>, {0x228, 4, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    CachedPlayer                                                ___ OFFSET(get<T>, {0x230, 8, 0, 0})
	CMember(AFortWeaponRangedDualSwing*)               CachedWeapon                                                ___ OFFSET(get<T>, {0x238, 8, 0, 0})
};

/// Class /Script/GrappleParentRuntime.FortSwingingLayerAnimInstance
/// Size: 0x01A0 (0x000450 - 0x0005F0)
class UFortSwingingLayerAnimInstance : public UFortBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1520;

public:
	CMember(UAnimInstance*)                            MainAnimBP                                                  ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    Player                                                      ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	DMember(bool)                                      IsGroundSwing                                               ___ OFFSET(get<bool>, {0x458, 1, 0, 0})
	DMember(bool)                                      IsFemale                                                    ___ OFFSET(get<bool>, {0x459, 1, 0, 0})
	DMember(float)                                     PlayerDistanceToGround                                      ___ OFFSET(get<float>, {0x45C, 4, 0, 0})
	DMember(bool)                                      CalculateRotation                                           ___ OFFSET(get<bool>, {0x460, 1, 0, 0})
	SMember(FScalableFloat)                            ForwardInfluenceOnRotation                                  ___ OFFSET(get<T>, {0x468, 40, 0, 0})
	SMember(FScalableFloat)                            TimeForMaxRotationSpeed                                     ___ OFFSET(get<T>, {0x490, 40, 0, 0})
	SMember(FScalableFloat)                            MaxRotationSpeed                                            ___ OFFSET(get<T>, {0x4B8, 40, 0, 0})
	SMember(FScalableFloat)                            RotationSpeedWhileNotAttached                               ___ OFFSET(get<T>, {0x4E0, 40, 0, 0})
	SMember(FScalableFloat)                            RotationSpeedWhileNotRotated                                ___ OFFSET(get<T>, {0x508, 40, 0, 0})
	CMember(AActor*)                                   GetAttachedActor                                            ___ OFFSET(get<T>, {0x530, 8, 0, 0})
	DMember(bool)                                      IsFreeFalling                                               ___ OFFSET(get<bool>, {0x538, 1, 0, 0})
	DMember(bool)                                      IsAttached                                                  ___ OFFSET(get<bool>, {0x539, 1, 0, 0})
	DMember(bool)                                      IsNotAttachedToCliff                                        ___ OFFSET(get<bool>, {0x53A, 1, 0, 0})
	SMember(FVector)                                   Velocity                                                    ___ OFFSET(get<T>, {0x540, 24, 0, 0})
	SMember(FVector)                                   XYVelocity                                                  ___ OFFSET(get<T>, {0x558, 24, 0, 0})
	SMember(FVector)                                   VecFromPlayerToAttachPoint                                  ___ OFFSET(get<T>, {0x570, 24, 0, 0})
	DMember(float)                                     PitchAngleFromAttachPoint                                   ___ OFFSET(get<float>, {0x588, 4, 0, 0})
	DMember(float)                                     RollAngle                                                   ___ OFFSET(get<float>, {0x58C, 4, 0, 0})
	DMember(float)                                     YawAngleToAttachTarget                                      ___ OFFSET(get<float>, {0x590, 4, 0, 0})
	SMember(FName)                                     CurveName_SwingPhase                                        ___ OFFSET(get<T>, {0x594, 4, 0, 0})
	SMember(FName)                                     CurveName_BlendOut                                          ___ OFFSET(get<T>, {0x598, 4, 0, 0})
	DMember(float)                                     SwingPhase                                                  ___ OFFSET(get<float>, {0x59C, 4, 0, 0})
	SMember(FRotator)                                  CurrentRootRotation                                         ___ OFFSET(get<T>, {0x5A0, 24, 0, 0})
	SMember(FVector)                                   CurrentRootTranslation                                      ___ OFFSET(get<T>, {0x5B8, 24, 0, 0})
	DMember(bool)                                      IsSwingRelease1                                             ___ OFFSET(get<bool>, {0x5D0, 1, 0, 0})
	DMember(bool)                                      IsSwingRelease2                                             ___ OFFSET(get<bool>, {0x5D1, 1, 0, 0})
	DMember(bool)                                      IsSwingRelease3                                             ___ OFFSET(get<bool>, {0x5D2, 1, 0, 0})
	DMember(bool)                                      IsSwingRelease4                                             ___ OFFSET(get<bool>, {0x5D3, 1, 0, 0})
	DMember(bool)                                      IsSwingRelease5                                             ___ OFFSET(get<bool>, {0x5D4, 1, 0, 0})
	DMember(bool)                                      IsSwingReleaseSkid                                          ___ OFFSET(get<bool>, {0x5D5, 1, 0, 0})
	DMember(bool)                                      IsMovingAttachPoint                                         ___ OFFSET(get<bool>, {0x5D6, 1, 0, 0})
	DMember(bool)                                      IsBlendOut                                                  ___ OFFSET(get<bool>, {0x5D7, 1, 0, 0})
	DMember(float)                                     WebCastAttachDirection                                      ___ OFFSET(get<float>, {0x5D8, 4, 0, 0})
	DMember(bool)                                      IsWebCastDown                                               ___ OFFSET(get<bool>, {0x5DC, 1, 0, 0})
	DMember(bool)                                      IsSwingOneHand                                              ___ OFFSET(get<bool>, {0x5DD, 1, 0, 0})
	DMember(bool)                                      IsRandomHandBool                                            ___ OFFSET(get<bool>, {0x5DE, 1, 0, 0})
	DMember(bool)                                      IsRandomSwingReleaseBool                                    ___ OFFSET(get<bool>, {0x5DF, 1, 0, 0})
	DMember(bool)                                      IsRandomeReleaseBool                                        ___ OFFSET(get<bool>, {0x5E0, 1, 0, 0})
	DMember(bool)                                      IsWithin100UnitsOfGround                                    ___ OFFSET(get<bool>, {0x5E1, 1, 0, 0})
	DMember(bool)                                      IsHanging                                                   ___ OFFSET(get<bool>, {0x5E2, 1, 0, 0})
	DMember(bool)                                      IsFallRelease                                               ___ OFFSET(get<bool>, {0x5E3, 1, 0, 0})
	DMember(bool)                                      IsOnGroundWebCast                                           ___ OFFSET(get<bool>, {0x5E4, 1, 0, 0})
	DMember(bool)                                      IsSwingNearGroundToSkid                                     ___ OFFSET(get<bool>, {0x5E5, 1, 0, 0})
	DMember(bool)                                      IsHangToSwingInAir                                          ___ OFFSET(get<bool>, {0x5E6, 1, 0, 0})
	DMember(bool)                                      IsHangToSwingNearGround                                     ___ OFFSET(get<bool>, {0x5E7, 1, 0, 0})
};

