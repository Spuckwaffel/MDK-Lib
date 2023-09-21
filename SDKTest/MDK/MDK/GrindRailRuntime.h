
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AnimGraphRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: ModularGameplay

/// Class /Script/GrindRailRuntime.FortCameraModifier_Grinding
/// Size: 0x0978 (0x000048 - 0x0009C0)
class UFortCameraModifier_Grinding : public UCameraModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2496;

public:
	SMember(FScalableFloat)                            bUseNativeCalculation                                       ___ OFFSET(get<T>, {0x48, 40, 0, 0})
	CMember(UCurveFloat*)                              BlendInCurve                                                ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UCurveFloat*)                              BlendOutCurve                                               ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FScalableFloat)                            SnapToGrindingLocation                                      ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            ADSAlphaInterpSpeed                                         ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentForwardInterpSpeed                                   ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxRightSpeedOldRangeForForward                             ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxRightSpeedNewRangeForForward                             ___ OFFSET(get<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedOldRangeForForward                           ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedOldRangeForForward                           ___ OFFSET(get<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedNewRangeForForward                           ___ OFFSET(get<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedNewRangeForForward                           ___ OFFSET(get<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            MinUpSpeedOldRangeForForward                                ___ OFFSET(get<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxUpSpeedOldRangeForForward                                ___ OFFSET(get<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            MinUpSpeedNewRangeForForward                                ___ OFFSET(get<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            MaxUpSpeedNewRangeForForward                                ___ OFFSET(get<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            BaseForwardMultiplier                                       ___ OFFSET(get<T>, {0x288, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedUpBoosterForwardMultiplier                             ___ OFFSET(get<T>, {0x2B0, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingForwardMultiplier                                  ___ OFFSET(get<T>, {0x2D8, 40, 0, 0})
	SMember(FScalableFloat)                            RightSpeedOldRangeForRight                                  ___ OFFSET(get<T>, {0x300, 40, 0, 0})
	SMember(FScalableFloat)                            RightSpeedNewRangeForRight                                  ___ OFFSET(get<T>, {0x328, 40, 0, 0})
	SMember(FScalableFloat)                            MaxUpSpeedOldRangeForRight                                  ___ OFFSET(get<T>, {0x350, 40, 0, 0})
	SMember(FScalableFloat)                            MaxUpSpeedNewRangeForRight                                  ___ OFFSET(get<T>, {0x378, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedOldRangeForRight                             ___ OFFSET(get<T>, {0x3A0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedOldRangeForRight                             ___ OFFSET(get<T>, {0x3C8, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedNewRangeForRight                             ___ OFFSET(get<T>, {0x3F0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedNewRangeForRight                             ___ OFFSET(get<T>, {0x418, 40, 0, 0})
	SMember(FScalableFloat)                            BaseRightMultiplier                                         ___ OFFSET(get<T>, {0x440, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedUpBoostRightMultiplier                                 ___ OFFSET(get<T>, {0x468, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingRightMultiplier                                    ___ OFFSET(get<T>, {0x490, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentRightInterpSpeed                                     ___ OFFSET(get<T>, {0x4B8, 40, 0, 0})
	SMember(FScalableFloat)                            UpSpeedOldRangeForUp                                        ___ OFFSET(get<T>, {0x4E0, 40, 0, 0})
	SMember(FScalableFloat)                            UpSpeedNewRangeForUp                                        ___ OFFSET(get<T>, {0x508, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentUpInterpSpeed                                        ___ OFFSET(get<T>, {0x530, 40, 0, 0})
	SMember(FScalableFloat)                            BaseUpMultiplier                                            ___ OFFSET(get<T>, {0x558, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedUpBoostUpMultiplier                                    ___ OFFSET(get<T>, {0x580, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingUpMultiplier                                       ___ OFFSET(get<T>, {0x5A8, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedOldRangeForLean                              ___ OFFSET(get<T>, {0x5D0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedOldRangeForLean                              ___ OFFSET(get<T>, {0x5F8, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedNewRangeForLean                              ___ OFFSET(get<T>, {0x620, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedNewRangeForLean                              ___ OFFSET(get<T>, {0x648, 40, 0, 0})
	SMember(FScalableFloat)                            MultiplierForMaxNewLeanRange                                ___ OFFSET(get<T>, {0x670, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentLeanInterpSpeed                                      ___ OFFSET(get<T>, {0x698, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedOldRangeForFOV                                      ___ OFFSET(get<T>, {0x6C0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedNewRangeForFOV                                      ___ OFFSET(get<T>, {0x6E8, 40, 0, 0})
	SMember(FScalableFloat)                            BaseFOV                                                     ___ OFFSET(get<T>, {0x710, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedUpBoosterFOV                                           ___ OFFSET(get<T>, {0x738, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingFOV                                                ___ OFFSET(get<T>, {0x760, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentFOVInterpSpeed                                       ___ OFFSET(get<T>, {0x788, 40, 0, 0})
	SMember(FScalableFloat)                            DeltaDecreaseInZForOffset                                   ___ OFFSET(get<T>, {0x7B0, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentOffsetInterpSpeed                                    ___ OFFSET(get<T>, {0x7D8, 40, 0, 0})
	SMember(FScalableFloat)                            StraightnessMultiplierForOffset                             ___ OFFSET(get<T>, {0x800, 40, 0, 0})
	SMember(FScalableFloat)                            FinalOffsetForwardDelta                                     ___ OFFSET(get<T>, {0x828, 40, 0, 0})
	SMember(FScalableFloat)                            FinalOffsetUpDelta                                          ___ OFFSET(get<T>, {0x850, 40, 0, 0})
	SMember(FScalableFloat)                            FinalOffsetRightDelta                                       ___ OFFSET(get<T>, {0x878, 40, 0, 0})
	DMember(bool)                                      bCachedUseNativeCalculation                                 ___ OFFSET(get<bool>, {0x8F0, 1, 0, 0})
};

/// Class /Script/GrindRailRuntime.FortGrindRail
/// Size: 0x0258 (0x000978 - 0x000BD0)
class AFortGrindRail : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:
	SMember(FScalableFloat)                            SpeedHardCap                                                ___ OFFSET(get<T>, {0x978, 40, 0, 0})
	SMember(FScalableFloat)                            BaseMaxSpeed                                                ___ OFFSET(get<T>, {0x9A0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedIncreaseFromDownwardSlope                           ___ OFFSET(get<T>, {0x9C8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxBaseAcceleration                                         ___ OFFSET(get<T>, {0x9F0, 40, 0, 0})
	SMember(FScalableFloat)                            MinBaseAcceleration                                         ___ OFFSET(get<T>, {0xA18, 40, 0, 0})
	SMember(FScalableFloat)                            MaxStartSpeed                                               ___ OFFSET(get<T>, {0xA40, 40, 0, 0})
	SMember(FScalableFloat)                            MinStartSpeed                                               ___ OFFSET(get<T>, {0xA68, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingAcceleration                                       ___ OFFSET(get<T>, {0xA90, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingMaxSpeed                                           ___ OFFSET(get<T>, {0xAB8, 40, 0, 0})
	CMember(TArray<USplineMeshComponent*>)             GrindRailMeshes                                             ___ OFFSET(get<T>, {0xAE0, 16, 0, 0})
	CMember(TArray<FGrindRailBoosterInfo>)             BoosterInfos                                                ___ OFFSET(get<T>, {0xAF0, 16, 0, 0})
	CMember(USplineComponent*)                         SplineComponent                                             ___ OFFSET(get<T>, {0xB00, 8, 0, 0})
	SMember(FScalableFloat)                            EnableBoosters                                              ___ OFFSET(get<T>, {0xB08, 40, 0, 0})
	SMember(FScalableFloat)                            EnableGrinding                                              ___ OFFSET(get<T>, {0xB30, 40, 0, 0})
	SMember(FScalableFloat)                            EnableProjectileCollision                                   ___ OFFSET(get<T>, {0xB58, 40, 0, 0})
	DMember(bool)                                      bDisableBooster                                             ___ OFFSET(get<bool>, {0xB80, 1, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           HeadConnectedRail                                           ___ OFFSET(get<T>, {0xB90, 32, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           TailConnectedRail                                           ___ OFFSET(get<T>, {0xBB0, 32, 0, 0})
};

/// Class /Script/GrindRailRuntime.FortGrindRailConnector
/// Size: 0x0000 (0x000978 - 0x000978)
class AFortGrindRailConnector : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2424;

public:
};

/// Class /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance
/// Size: 0x02E0 (0x000450 - 0x000730)
class UFortGrindRailLayerAnimInstance : public UFortBaseLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
	CMember(UAnimMontage*)                             LancePickaxeMontage                                         ___ OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UAnimMontage*)                             ScythePickaxeMontage                                        ___ OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UAnimMontage*)                             FruitCakePickaxeMontage                                     ___ OFFSET(get<T>, {0x458, 8, 0, 0})
	SMember(FName)                                     LeanAlphaCurve                                              ___ OFFSET(get<T>, {0x460, 4, 0, 0})
	SMember(FName)                                     MeleeTwistCurve                                             ___ OFFSET(get<T>, {0x464, 4, 0, 0})
	SMember(FName)                                     InterruptibleCurve                                          ___ OFFSET(get<T>, {0x468, 4, 0, 0})
	CMember(TMap<FName, float>)                        SlopeWarpingCurveMap                                        ___ OFFSET(get<T>, {0x470, 80, 0, 0})
	DMember(double)                                    LeanBwdVelocityThreshold                                    ___ OFFSET(get<double>, {0x4C0, 8, 0, 0})
	SMember(FCachedAnimRelevancyData)                  BwdStartCachedData                                          ___ OFFSET(get<T>, {0x4C8, 20, 0, 0})
	DMember(double)                                    IsMovingThresholdSpeed                                      ___ OFFSET(get<double>, {0x4E0, 8, 0, 0})
	DMember(double)                                    NoisePlayRateSprintSpeedThreshold                           ___ OFFSET(get<double>, {0x4E8, 8, 0, 0})
	SMember(FVector2D)                                 NoisePlayRateNormalSpeedInputRange                          ___ OFFSET(get<T>, {0x4F0, 16, 0, 0})
	SMember(FVector2D)                                 NoisePlayRateNormalSpeedOutputRange                         ___ OFFSET(get<T>, {0x500, 16, 0, 0})
	SMember(FVector2D)                                 NoisePlayRateHighSpeedInputRange                            ___ OFFSET(get<T>, {0x510, 16, 0, 0})
	SMember(FVector2D)                                 NoisePlayRateHighSpeedOutputRange                           ___ OFFSET(get<T>, {0x520, 16, 0, 0})
	SMember(FVector2D)                                 CombatNoisePlayRateSpeedInputRange                          ___ OFFSET(get<T>, {0x530, 16, 0, 0})
	SMember(FVector2D)                                 CombatNoisePlayRateSpeedOutputRange                         ___ OFFSET(get<T>, {0x540, 16, 0, 0})
	DMember(double)                                    CombatNoiseAlphaTargeting                                   ___ OFFSET(get<double>, {0x550, 8, 0, 0})
	DMember(double)                                    CombatNoiseAlphaNonTargeting                                ___ OFFSET(get<double>, {0x558, 8, 0, 0})
	DMember(double)                                    RootLeanAlphaInterpSpeed                                    ___ OFFSET(get<double>, {0x560, 8, 0, 0})
	DMember(double)                                    SlopeWarpAlphaInterpSpeed                                   ___ OFFSET(get<double>, {0x568, 8, 0, 0})
	DMember(double)                                    SplineRelativeAimYawDeltaThreshold                          ___ OFFSET(get<double>, {0x570, 8, 0, 0})
	DMember(double)                                    AimYawSmoothInterpolationCoefficient                        ___ OFFSET(get<double>, {0x578, 8, 0, 0})
	DMember(double)                                    IsSmoothingYawThreshold                                     ___ OFFSET(get<double>, {0x580, 8, 0, 0})
	DMember(double)                                    LeanBWDThreshold                                            ___ OFFSET(get<double>, {0x588, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlphaMeleeWeapon                               ___ OFFSET(get<double>, {0x590, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlphaNonMeleeWeapon                            ___ OFFSET(get<double>, {0x598, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlphaFruitcakePickaxe                          ___ OFFSET(get<double>, {0x5A0, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlphaLanceSyctheOrDualWeild                    ___ OFFSET(get<double>, {0x5A8, 8, 0, 0})
	DMember(double)                                    BaseLeanDirection                                           ___ OFFSET(get<double>, {0x5B0, 8, 0, 0})
	DMember(bool)                                      bIsGrinding                                                 ___ OFFSET(get<bool>, {0x5B8, 1, 0, 0})
	DMember(double)                                    CurrentSpeed                                                ___ OFFSET(get<double>, {0x5C0, 8, 0, 0})
	DMember(double)                                    LeanDirection                                               ___ OFFSET(get<double>, {0x5C8, 8, 0, 0})
	DMember(bool)                                      bSprinting                                                  ___ OFFSET(get<bool>, {0x5D0, 1, 0, 0})
	DMember(double)                                    LeanForward                                                 ___ OFFSET(get<double>, {0x5D8, 8, 0, 0})
	DMember(bool)                                      bIsWeaponActive                                             ___ OFFSET(get<bool>, {0x5E0, 1, 0, 0})
	SMember(FRotator)                                  SplineRelativeAim                                           ___ OFFSET(get<T>, {0x5E8, 24, 0, 0})
	SMember(FFortAnimInput_GrindRail)                  GrindRailInput                                              ___ OFFSET(get<T>, {0x600, 24, 0, 0})
	CMember(TWeakObjectPtr<UFortPawnComponent_GrindRail*>) GrindingComponent                                       ___ OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(TWeakObjectPtr<UCharacterMovementComponent*>) MovementComponent                                        ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          FortPlayerPawn                                              ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	DMember(bool)                                      bIsFalling                                                  ___ OFFSET(get<bool>, {0x630, 1, 0, 0})
	DMember(double)                                    LeanAlpha                                                   ___ OFFSET(get<double>, {0x638, 8, 0, 0})
	DMember(bool)                                      bIsMoving                                                   ___ OFFSET(get<bool>, {0x640, 1, 0, 0})
	DMember(bool)                                      bShould180Turn                                              ___ OFFSET(get<bool>, {0x641, 1, 0, 0})
	DMember(bool)                                      bShouldPlayEntry                                            ___ OFFSET(get<bool>, {0x642, 1, 0, 0})
	DMember(double)                                    NoisePlayRate                                               ___ OFFSET(get<double>, {0x648, 8, 0, 0})
	DMember(bool)                                      bIsLeanBwd                                                  ___ OFFSET(get<bool>, {0x650, 1, 0, 0})
	DMember(bool)                                      bIsLeft180Turn                                              ___ OFFSET(get<bool>, {0x651, 1, 0, 0})
	DMember(bool)                                      bShould180TurnAgain                                         ___ OFFSET(get<bool>, {0x652, 1, 0, 0})
	DMember(bool)                                      bIsTurning                                                  ___ OFFSET(get<bool>, {0x653, 1, 0, 0})
	DMember(bool)                                      bShouldExitLocomotion                                       ___ OFFSET(get<bool>, {0x654, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 ___ OFFSET(get<bool>, {0x655, 1, 0, 0})
	DMember(bool)                                      bEarlyExitFromEntry                                         ___ OFFSET(get<bool>, {0x656, 1, 0, 0})
	DMember(bool)                                      bAimFWD                                                     ___ OFFSET(get<bool>, {0x657, 1, 0, 0})
	DMember(bool)                                      bAimBWD                                                     ___ OFFSET(get<bool>, {0x658, 1, 0, 0})
	DMember(bool)                                      bAimLFT                                                     ___ OFFSET(get<bool>, {0x659, 1, 0, 0})
	DMember(bool)                                      bAimRGT                                                     ___ OFFSET(get<bool>, {0x65A, 1, 0, 0})
	DMember(double)                                    AimFWDDeltaAngleDegrees                                     ___ OFFSET(get<double>, {0x660, 8, 0, 0})
	DMember(double)                                    AimBWDDeltaAngleDegrees                                     ___ OFFSET(get<double>, {0x668, 8, 0, 0})
	DMember(double)                                    AimLFTDeltaAngleDegrees                                     ___ OFFSET(get<double>, {0x670, 8, 0, 0})
	DMember(double)                                    AimRGTDeltaAngleDegrees                                     ___ OFFSET(get<double>, {0x678, 8, 0, 0})
	DMember(double)                                    NegativeYaw                                                 ___ OFFSET(get<double>, {0x680, 8, 0, 0})
	SMember(FRotator)                                  MeleeTwistRot                                               ___ OFFSET(get<T>, {0x688, 24, 0, 0})
	DMember(double)                                    BwdStartCachedTime                                          ___ OFFSET(get<double>, {0x6A0, 8, 0, 0})
	DMember(double)                                    Velocity                                                    ___ OFFSET(get<double>, {0x6A8, 8, 0, 0})
	DMember(bool)                                      bIsEntryLeft                                                ___ OFFSET(get<bool>, {0x6B0, 1, 0, 0})
	DMember(bool)                                      bIsEntryFromAir                                             ___ OFFSET(get<bool>, {0x6B1, 1, 0, 0})
	DMember(bool)                                      bIsEntryRight                                               ___ OFFSET(get<bool>, {0x6B2, 1, 0, 0})
	DMember(bool)                                      bEnteredFromInteraction                                     ___ OFFSET(get<bool>, {0x6B3, 1, 0, 0})
	DMember(double)                                    SlopeWarpAlpha                                              ___ OFFSET(get<double>, {0x6B8, 8, 0, 0})
	DMember(double)                                    SplineRelativeAimYaw                                        ___ OFFSET(get<double>, {0x6C0, 8, 0, 0})
	DMember(double)                                    AimYawSmoothed                                              ___ OFFSET(get<double>, {0x6C8, 8, 0, 0})
	DMember(bool)                                      bIsSmoothingYaw                                             ___ OFFSET(get<bool>, {0x6D0, 1, 0, 0})
	DMember(double)                                    LastSplineRelativeAimYaw                                    ___ OFFSET(get<double>, {0x6D8, 8, 0, 0})
	DMember(double)                                    RootLeanAlpha                                               ___ OFFSET(get<double>, {0x6E0, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlpha                                          ___ OFFSET(get<double>, {0x6E8, 8, 0, 0})
	DMember(bool)                                      bIsLanceType                                                ___ OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(bool)                                      bWasSprinting                                               ___ OFFSET(get<bool>, {0x6F1, 1, 0, 0})
	DMember(bool)                                      bStateRuleToBoostLoop                                       ___ OFFSET(get<bool>, {0x6F2, 1, 0, 0})
	DMember(bool)                                      bIsInAction                                                 ___ OFFSET(get<bool>, {0x6F3, 1, 0, 0})
	DMember(double)                                    CombatNoisePlayRate                                         ___ OFFSET(get<double>, {0x6F8, 8, 0, 0})
	DMember(double)                                    CombatNoiseAlpha                                            ___ OFFSET(get<double>, {0x700, 8, 0, 0})
	DMember(bool)                                      bIsTwoHandedMelee                                           ___ OFFSET(get<bool>, {0x708, 1, 0, 0})
	DMember(bool)                                      bShouldCorrectUpperBody                                     ___ OFFSET(get<bool>, {0x709, 1, 0, 0})
	DMember(bool)                                      bBothHandsDown                                              ___ OFFSET(get<bool>, {0x70A, 1, 0, 0})
	DMember(double)                                    TurnInPlaceAnimCurveValue                                   ___ OFFSET(get<double>, {0x710, 8, 0, 0})
	DMember(double)                                    TurnRotationAmountCurveValue                                ___ OFFSET(get<double>, {0x718, 8, 0, 0})
};

/// Class /Script/GrindRailRuntime.GrindRailEditorComponent
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class UGrindRailEditorComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Class /Script/GrindRailRuntime.GrindRailMovementControls
/// Size: 0x0000 (0x000030 - 0x000030)
class UGrindRailMovementControls : public UFortMovementControls
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/GrindRailRuntime.FortAthenaAIBotEvaluator_GrindRail
/// Size: 0x0068 (0x0000A8 - 0x000110)
class UFortAthenaAIBotEvaluator_GrindRail : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FGameplayTag)                              GrindRailTag                                                ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	SMember(FScalableFloat)                            GrindDuration                                               ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            GrindDurationRandomDeviation                                ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
};

/// Class /Script/GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding
/// Size: 0x0190 (0x000990 - 0x000B20)
class AFortGameplayCueNotifyLoop_Grinding : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2848;

public:
	DMember(bool)                                      bFeetHasLanded                                              ___ OFFSET(get<bool>, {0x990, 1, 0, 0})
	DMember(bool)                                      bEnableNativeAudioUpdate                                    ___ OFFSET(get<bool>, {0x991, 1, 0, 0})
	DMember(float)                                     ForwardChangedValueThreshold                                ___ OFFSET(get<float>, {0x994, 4, 0, 0})
	SMember(FFortAudioFloatParameter)                  Speed                                                       ___ OFFSET(get<T>, {0x998, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  Forward                                                     ___ OFFSET(get<T>, {0x9D0, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  Boost                                                       ___ OFFSET(get<T>, {0xA08, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  Curve                                                       ___ OFFSET(get<T>, {0xA40, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IsGrinding                                                  ___ OFFSET(get<T>, {0xA78, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IsSlowDown                                                  ___ OFFSET(get<T>, {0xAB0, 56, 0, 0})
	SMember(FName)                                     LeanForwardSpeedName                                        ___ OFFSET(get<T>, {0xAE8, 4, 0, 0})
	SMember(FName)                                     TurnOnSpeedFXName                                           ___ OFFSET(get<T>, {0xAEC, 4, 0, 0})
	DMember(float)                                     TurnOnSpeedFXThreshold                                      ___ OFFSET(get<float>, {0xAF0, 4, 0, 0})
	CMember(TWeakObjectPtr<UFXSystemComponent*>)       EffectsComponent                                            ___ OFFSET(get<T>, {0xAF4, 8, 0, 0})
	CMember(UAudioComponent*)                          AudioComponent                                              ___ OFFSET(get<T>, {0xB00, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB08, 8, 0, 0})
	CMember(UFortPawnComponent_GrindRail*)             GrindComponent                                              ___ OFFSET(get<T>, {0xB10, 8, 0, 0})
};

/// Class /Script/GrindRailRuntime.FortPawnComponent_GrindRail
/// Size: 0x0B80 (0x0000A8 - 0x000C28)
class UFortPawnComponent_GrindRail : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3112;

public:
	DMember(bool)                                      bUseNativeSpeedCalculation                                  ___ OFFSET(get<bool>, {0xB8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  GrindRailChangedDelegate                                    ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BegunGrindingDelegate                                       ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HitObstacleWhenGrindingDelegate                             ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BoosterModeChangedDelegate                                  ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SprintingStateChangedDelegate                               ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  EndedGrindingDelegate                                       ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(float)                                     LeanForward                                                 ___ OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     LeanRight                                                   ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     BaseLeanRight                                               ___ OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     CurrentSpeedAlongSpline                                     ___ OFFSET(get<float>, {0x12C, 4, 0, 0})
	SMember(FVector)                                   CurrentDirection                                            ___ OFFSET(get<T>, {0x130, 24, 0, 0})
	CMember(EGrindRailBoosterMode)                     CurrentBoosterMode                                          ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	DMember(bool)                                      bShould180Turn                                              ___ OFFSET(get<bool>, {0x149, 1, 0, 0})
	DMember(bool)                                      bShould180TurnAgain                                         ___ OFFSET(get<bool>, {0x14A, 1, 0, 0})
	DMember(bool)                                      bUseProtoRotation                                           ___ OFFSET(get<bool>, {0x14B, 1, 0, 0})
	SMember(FScalableFloat)                            BaseMaxLeanAngularSpeed                                     ___ OFFSET(get<T>, {0x150, 40, 0, 0})
	SMember(FScalableFloat)                            BaseLeanInterpSpeed                                         ___ OFFSET(get<T>, {0x178, 40, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           ReplicatedGrindingRail                                      ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           PreviousGrindingRail                                        ___ OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           GrindingRail                                                ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           NextGrindingRail                                            ___ OFFSET(get<T>, {0x1B8, 8, 0, 0})
	DMember(bool)                                      bIsGrinding                                                 ___ OFFSET(get<bool>, {0x1C0, 1, 0, 0})
	DMember(bool)                                      bIsGrindJumping                                             ___ OFFSET(get<bool>, {0x1C1, 1, 0, 0})
	DMember(bool)                                      bIsSprinting                                                ___ OFFSET(get<bool>, {0x1C2, 1, 0, 0})
	DMember(bool)                                      bWeaponHolstered                                            ___ OFFSET(get<bool>, {0x1C3, 1, 0, 0})
	DMember(bool)                                      bJumpInputReady                                             ___ OFFSET(get<bool>, {0x1C4, 1, 0, 0})
	DMember(float)                                     GrindStartDistance                                          ___ OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(float)                                     CurrentDistanceAlongSpline                                  ___ OFFSET(get<float>, {0x1CC, 4, 0, 0})
	SMember(FVector)                                   NativeLastRailLocation                                      ___ OFFSET(get<T>, {0x1D0, 24, 0, 0})
	DMember(float)                                     NativeMaxSpeed                                              ___ OFFSET(get<float>, {0x1E8, 4, 0, 0})
	SMember(FRotator)                                  GoalRotation                                                ___ OFFSET(get<T>, {0x1F0, 24, 0, 0})
	DMember(bool)                                      bIs180Turning                                               ___ OFFSET(get<bool>, {0x208, 1, 0, 0})
	DMember(float)                                     HorizontalSplineAngleDeltaDegrees                           ___ OFFSET(get<float>, {0x20C, 4, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedInclineSplinePitch                                ___ OFFSET(get<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedDeclineSplinePitch                                ___ OFFSET(get<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedShootingSplinePitch                               ___ OFFSET(get<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            TurnAngleThreshold                                          ___ OFFSET(get<T>, {0x288, 40, 0, 0})
	SMember(FScalableFloat)                            AnimatedTurnDuration                                        ___ OFFSET(get<T>, {0x2B0, 40, 0, 0})
	SMember(FScalableFloat)                            BaseGrindRailYawRotationInterpSpeed                         ___ OFFSET(get<T>, {0x2D8, 40, 0, 0})
	SMember(FScalableFloat)                            InclineGrindRailPitchRotationInterpSpeed                    ___ OFFSET(get<T>, {0x300, 40, 0, 0})
	SMember(FScalableFloat)                            DeclineGrindRailPitchRotationInterpSpeed                    ___ OFFSET(get<T>, {0x328, 40, 0, 0})
	SMember(FScalableFloat)                            ShootingGrindRailRotationInterpSpeed                        ___ OFFSET(get<T>, {0x350, 40, 0, 0})
	SMember(FScalableFloat)                            NextGrindRailDetectionOffset                                ___ OFFSET(get<T>, {0x378, 40, 0, 0})
	SMember(FGameplayTag)                              CancelGrindingTag                                           ___ OFFSET(get<T>, {0x3A0, 4, 0, 0})
	SMember(FScalableFloat)                            GrindInteractionReentryCooldownTime                         ___ OFFSET(get<T>, {0x3A8, 40, 0, 0})
	SMember(FScalableFloat)                            ForceGrindingFromWalking                                    ___ OFFSET(get<T>, {0x3D0, 40, 0, 0})
	SMember(FScalableFloat)                            MinTimeBeforeJumpSinceEntry                                 ___ OFFSET(get<T>, {0x3F8, 40, 0, 0})
	SMember(FScalableFloat)                            CancelSprintLeanBackThreshold                               ___ OFFSET(get<T>, {0x420, 40, 0, 0})
	SMember(FScalableFloat)                            WeaponHolsterCooldown                                       ___ OFFSET(get<T>, {0x448, 40, 0, 0})
	SMember(FScalableFloat)                            WeaponIsShootingCooldown                                    ___ OFFSET(get<T>, {0x470, 40, 0, 0})
	SMember(FScalableFloat)                            GravityForceWhenGoingDown                                   ___ OFFSET(get<T>, {0x498, 40, 0, 0})
	SMember(FScalableFloat)                            GravityForceWhenGoingUp                                     ___ OFFSET(get<T>, {0x4C0, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterSprintingAccelerationOnSlowDownBooster               ___ OFFSET(get<T>, {0x4E8, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterAccelerationOnSpeedUpBooster                         ___ OFFSET(get<T>, {0x510, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterSlowDownBoosterDragMultiplier                        ___ OFFSET(get<T>, {0x538, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterSlowDownBoosterGoalSpeed                             ___ OFFSET(get<T>, {0x560, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterMaxSpeed                                             ___ OFFSET(get<T>, {0x588, 40, 0, 0})
	SMember(FScalableFloat)                            ShootingMaxSpeedMultiplier                                  ___ OFFSET(get<T>, {0x5B0, 40, 0, 0})
	SMember(FScalableFloat)                            AngleForMaxSpeedIncreaseFromDownwardSlope                   ___ OFFSET(get<T>, {0x5D8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedIncreaseFromDownwardSlope                           ___ OFFSET(get<T>, {0x600, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDragForSpeedSoftCap                                      ___ OFFSET(get<T>, {0x628, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedHardCap                                                ___ OFFSET(get<T>, {0x650, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingAcceleration                                       ___ OFFSET(get<T>, {0x678, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingMaxSpeed                                           ___ OFFSET(get<T>, {0x6A0, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedThresholdForTurn                                       ___ OFFSET(get<T>, {0x6C8, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToTurnAround                                            ___ OFFSET(get<T>, {0x6F0, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMaxLeanAcceleration                                 ___ OFFSET(get<T>, {0x718, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMinLeanAcceleration                                 ___ OFFSET(get<T>, {0x740, 40, 0, 0})
	SMember(FScalableFloat)                            MaxLeanAcceleration                                         ___ OFFSET(get<T>, {0x768, 40, 0, 0})
	SMember(FScalableFloat)                            MinLeanAcceleration                                         ___ OFFSET(get<T>, {0x790, 40, 0, 0})
	SMember(FScalableFloat)                            CanAccelerateByLeaningIntoTurns                             ___ OFFSET(get<T>, {0x7B8, 40, 0, 0})
	SMember(FScalableFloat)                            CurvatureForMaxLeanIntoTurnsAcceleration                    ___ OFFSET(get<T>, {0x7E0, 40, 0, 0})
	SMember(FScalableFloat)                            LeanIntoTurnsMaxAcceleration                                ___ OFFSET(get<T>, {0x808, 40, 0, 0})
	SMember(FScalableFloat)                            IncreasedMaxSpeedFromLeanIntoTurn                           ___ OFFSET(get<T>, {0x830, 40, 0, 0})
	SMember(FScalableFloat)                            UseNewCalculationForSidewaysLeanBoost                       ___ OFFSET(get<T>, {0x858, 40, 0, 0})
	SMember(FScalableFloat)                            SidewaysLeanBoostReductionRate                              ___ OFFSET(get<T>, {0x880, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMaxBaseAcceleration                                 ___ OFFSET(get<T>, {0x8A8, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMinBaseAcceleration                                 ___ OFFSET(get<T>, {0x8D0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxBaseAcceleration                                         ___ OFFSET(get<T>, {0x8F8, 40, 0, 0})
	SMember(FScalableFloat)                            MinBaseAcceleration                                         ___ OFFSET(get<T>, {0x920, 40, 0, 0})
	SMember(FScalableFloat)                            BaseGoalSpeed                                               ___ OFFSET(get<T>, {0x948, 40, 0, 0})
	SMember(FScalableFloat)                            BaseMaxSpeed                                                ___ OFFSET(get<T>, {0x970, 40, 0, 0})
	SMember(FScalableFloat)                            EnableFriction                                              ___ OFFSET(get<T>, {0x998, 40, 0, 0})
	SMember(FScalableFloat)                            BaseGoalDecelerationSpeed                                   ___ OFFSET(get<T>, {0x9C0, 40, 0, 0})
	SMember(FScalableFloat)                            FrictionWhenNotLeaning                                      ___ OFFSET(get<T>, {0x9E8, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedMultiplierOnHitRailCap                                 ___ OFFSET(get<T>, {0xA10, 40, 0, 0})
	SMember(FScalableFloat)                            MinSpeedAfterBouncedOffRailCap                              ___ OFFSET(get<T>, {0xA38, 40, 0, 0})
};

/// Struct /Script/GrindRailRuntime.FortAnimInput_GrindRail
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAnimInput_GrindRail : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bAimFWD                                                     ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bAimBWD                                                     ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bAimLFT                                                     ___ OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bAimRGT                                                     ___ OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(float)                                     AimFWDDeltaAngleDegrees                                     ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AimBWDDeltaAngleDegrees                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AimLFTDeltaAngleDegrees                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AimRGTDeltaAngleDegrees                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PawnToSplineDeltaYawAngleDegrees                            ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/GrindRailRuntime.FortAnimNode_GrindRailSlopeWarping
/// Size: 0x0058 (0x0002E8 - 0x000340)
class FFortAnimNode_GrindRailSlopeWarping : public FFortAnimNode_SlopeWarping
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(float)                                     BaseSplineRadius                                            ___ OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(bool)                                      bAbsentCurveMeansFootDown                                   ___ OFFSET(get<bool>, {0x2EC, 1, 1, 0})
	SMember(FName)                                     LFootOnGroundCurveName                                      ___ OFFSET(get<T>, {0x2F0, 4, 0, 0})
	DMember(bool)                                      bLeftCurveHighMeansFootDown                                 ___ OFFSET(get<bool>, {0x2F4, 1, 1, 0})
	SMember(FName)                                     RFootOnGroundCurveName                                      ___ OFFSET(get<T>, {0x2F8, 4, 0, 0})
	DMember(bool)                                      bRightCurveHighMeansFootDown                                ___ OFFSET(get<bool>, {0x2FC, 1, 1, 0})
	SMember(FBoneReference)                            LeftFootFKBone                                              ___ OFFSET(get<T>, {0x300, 12, 0, 0})
};

/// Struct /Script/GrindRailRuntime.GrindRailBoosterInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FGrindRailBoosterInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MinDistanceAlongSpline                                      ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxDistanceAlongSpline                                      ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EGrindRailBoosterMode)                     PositiveMode                                                ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EGrindRailBoosterMode)                     NegativeMode                                                ___ OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Script/GrindRailRuntime.FortRailPointSnapData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortRailPointSnapData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(AFortGrindRail*)                           RailToSnapTo                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PointToSnapTo                                               ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/GrindRailRuntime.GrindRailSpeedSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FGrindRailSpeedSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     SprintAcceleration                                          ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxLeanAcceleration                                         ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinLeanAcceleration                                         ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ShootingSpeedMultiplier                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     GravityForceWhenGoingUp                                     ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     GravityForceWhenGoingDown                                   ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/GrindRailRuntime.GrindRailStatus
/// Size: 0x0010 (0x000000 - 0x000010)
class FGrindRailStatus : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AFortGrindRail*>)           GrindingRail                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     CurrentSpeedAlongSpline                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CurrentDistanceAlongSpline                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Enum /Script/GrindRailRuntime.EGrindRailBoosterMode
/// Size: 0x04
enum EGrindRailBoosterMode : uint8_t
{
	EGrindRailBoosterMode__SpeedUp0                                                  = 0,
	EGrindRailBoosterMode__SlowDown1                                                 = 1,
	EGrindRailBoosterMode__NoEffect2                                                 = 2,
	EGrindRailBoosterMode__EGrindRailBoosterMode_MAX3                                = 3
};

