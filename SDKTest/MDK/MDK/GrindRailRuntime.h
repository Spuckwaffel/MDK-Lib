
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
	SMember(FScalableFloat)                            bUseNativeCalculation                                       OFFSET(getStruct<T>, {0x48, 40, 0, 0})
	CMember(UCurveFloat*)                              BlendInCurve                                                OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UCurveFloat*)                              BlendOutCurve                                               OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FScalableFloat)                            SnapToGrindingLocation                                      OFFSET(getStruct<T>, {0x80, 40, 0, 0})
	SMember(FScalableFloat)                            ADSAlphaInterpSpeed                                         OFFSET(getStruct<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentForwardInterpSpeed                                   OFFSET(getStruct<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxRightSpeedOldRangeForForward                             OFFSET(getStruct<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxRightSpeedNewRangeForForward                             OFFSET(getStruct<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedOldRangeForForward                           OFFSET(getStruct<T>, {0x148, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedOldRangeForForward                           OFFSET(getStruct<T>, {0x170, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedNewRangeForForward                           OFFSET(getStruct<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedNewRangeForForward                           OFFSET(getStruct<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            MinUpSpeedOldRangeForForward                                OFFSET(getStruct<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxUpSpeedOldRangeForForward                                OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            MinUpSpeedNewRangeForForward                                OFFSET(getStruct<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            MaxUpSpeedNewRangeForForward                                OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            BaseForwardMultiplier                                       OFFSET(getStruct<T>, {0x288, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedUpBoosterForwardMultiplier                             OFFSET(getStruct<T>, {0x2B0, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingForwardMultiplier                                  OFFSET(getStruct<T>, {0x2D8, 40, 0, 0})
	SMember(FScalableFloat)                            RightSpeedOldRangeForRight                                  OFFSET(getStruct<T>, {0x300, 40, 0, 0})
	SMember(FScalableFloat)                            RightSpeedNewRangeForRight                                  OFFSET(getStruct<T>, {0x328, 40, 0, 0})
	SMember(FScalableFloat)                            MaxUpSpeedOldRangeForRight                                  OFFSET(getStruct<T>, {0x350, 40, 0, 0})
	SMember(FScalableFloat)                            MaxUpSpeedNewRangeForRight                                  OFFSET(getStruct<T>, {0x378, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedOldRangeForRight                             OFFSET(getStruct<T>, {0x3A0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedOldRangeForRight                             OFFSET(getStruct<T>, {0x3C8, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedNewRangeForRight                             OFFSET(getStruct<T>, {0x3F0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedNewRangeForRight                             OFFSET(getStruct<T>, {0x418, 40, 0, 0})
	SMember(FScalableFloat)                            BaseRightMultiplier                                         OFFSET(getStruct<T>, {0x440, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedUpBoostRightMultiplier                                 OFFSET(getStruct<T>, {0x468, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingRightMultiplier                                    OFFSET(getStruct<T>, {0x490, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentRightInterpSpeed                                     OFFSET(getStruct<T>, {0x4B8, 40, 0, 0})
	SMember(FScalableFloat)                            UpSpeedOldRangeForUp                                        OFFSET(getStruct<T>, {0x4E0, 40, 0, 0})
	SMember(FScalableFloat)                            UpSpeedNewRangeForUp                                        OFFSET(getStruct<T>, {0x508, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentUpInterpSpeed                                        OFFSET(getStruct<T>, {0x530, 40, 0, 0})
	SMember(FScalableFloat)                            BaseUpMultiplier                                            OFFSET(getStruct<T>, {0x558, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedUpBoostUpMultiplier                                    OFFSET(getStruct<T>, {0x580, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingUpMultiplier                                       OFFSET(getStruct<T>, {0x5A8, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedOldRangeForLean                              OFFSET(getStruct<T>, {0x5D0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedOldRangeForLean                              OFFSET(getStruct<T>, {0x5F8, 40, 0, 0})
	SMember(FScalableFloat)                            MinForwardSpeedNewRangeForLean                              OFFSET(getStruct<T>, {0x620, 40, 0, 0})
	SMember(FScalableFloat)                            MaxForwardSpeedNewRangeForLean                              OFFSET(getStruct<T>, {0x648, 40, 0, 0})
	SMember(FScalableFloat)                            MultiplierForMaxNewLeanRange                                OFFSET(getStruct<T>, {0x670, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentLeanInterpSpeed                                      OFFSET(getStruct<T>, {0x698, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedOldRangeForFOV                                      OFFSET(getStruct<T>, {0x6C0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedNewRangeForFOV                                      OFFSET(getStruct<T>, {0x6E8, 40, 0, 0})
	SMember(FScalableFloat)                            BaseFOV                                                     OFFSET(getStruct<T>, {0x710, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedUpBoosterFOV                                           OFFSET(getStruct<T>, {0x738, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingFOV                                                OFFSET(getStruct<T>, {0x760, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentFOVInterpSpeed                                       OFFSET(getStruct<T>, {0x788, 40, 0, 0})
	SMember(FScalableFloat)                            DeltaDecreaseInZForOffset                                   OFFSET(getStruct<T>, {0x7B0, 40, 0, 0})
	SMember(FScalableFloat)                            CurrentOffsetInterpSpeed                                    OFFSET(getStruct<T>, {0x7D8, 40, 0, 0})
	SMember(FScalableFloat)                            StraightnessMultiplierForOffset                             OFFSET(getStruct<T>, {0x800, 40, 0, 0})
	SMember(FScalableFloat)                            FinalOffsetForwardDelta                                     OFFSET(getStruct<T>, {0x828, 40, 0, 0})
	SMember(FScalableFloat)                            FinalOffsetUpDelta                                          OFFSET(getStruct<T>, {0x850, 40, 0, 0})
	SMember(FScalableFloat)                            FinalOffsetRightDelta                                       OFFSET(getStruct<T>, {0x878, 40, 0, 0})
	DMember(bool)                                      bCachedUseNativeCalculation                                 OFFSET(get<bool>, {0x8F0, 1, 0, 0})
};

/// Class /Script/GrindRailRuntime.FortGrindRail
/// Size: 0x0258 (0x000978 - 0x000BD0)
class AFortGrindRail : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:
	SMember(FScalableFloat)                            SpeedHardCap                                                OFFSET(getStruct<T>, {0x978, 40, 0, 0})
	SMember(FScalableFloat)                            BaseMaxSpeed                                                OFFSET(getStruct<T>, {0x9A0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedIncreaseFromDownwardSlope                           OFFSET(getStruct<T>, {0x9C8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxBaseAcceleration                                         OFFSET(getStruct<T>, {0x9F0, 40, 0, 0})
	SMember(FScalableFloat)                            MinBaseAcceleration                                         OFFSET(getStruct<T>, {0xA18, 40, 0, 0})
	SMember(FScalableFloat)                            MaxStartSpeed                                               OFFSET(getStruct<T>, {0xA40, 40, 0, 0})
	SMember(FScalableFloat)                            MinStartSpeed                                               OFFSET(getStruct<T>, {0xA68, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingAcceleration                                       OFFSET(getStruct<T>, {0xA90, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingMaxSpeed                                           OFFSET(getStruct<T>, {0xAB8, 40, 0, 0})
	CMember(TArray<USplineMeshComponent*>)             GrindRailMeshes                                             OFFSET(get<T>, {0xAE0, 16, 0, 0})
	CMember(TArray<FGrindRailBoosterInfo>)             BoosterInfos                                                OFFSET(get<T>, {0xAF0, 16, 0, 0})
	CMember(USplineComponent*)                         SplineComponent                                             OFFSET(get<T>, {0xB00, 8, 0, 0})
	SMember(FScalableFloat)                            EnableBoosters                                              OFFSET(getStruct<T>, {0xB08, 40, 0, 0})
	SMember(FScalableFloat)                            EnableGrinding                                              OFFSET(getStruct<T>, {0xB30, 40, 0, 0})
	SMember(FScalableFloat)                            EnableProjectileCollision                                   OFFSET(getStruct<T>, {0xB58, 40, 0, 0})
	DMember(bool)                                      bDisableBooster                                             OFFSET(get<bool>, {0xB80, 1, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           HeadConnectedRail                                           OFFSET(get<T>, {0xB90, 32, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           TailConnectedRail                                           OFFSET(get<T>, {0xBB0, 32, 0, 0})


	/// Functions
	// Function /Script/GrindRailRuntime.FortGrindRail.UpdateTransientComponentTransforms
	// void UpdateTransientComponentTransforms(TArray<USceneComponent*> TransientSceneComponents);                              // [0x9a2080c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.SetupMeshInfo
	// void SetupMeshInfo(USplineMeshComponent* SplineMeshComponent);                                                           // [0x9a20760] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnRep_DisableBooster
	// void OnRep_DisableBooster();                                                                                             // [0x9a202e4] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnPlaylistDataReady
	// void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0xf6d23c] Final|Native|Protected|HasOutParms 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnPlayerEndedGrinding
	// void OnPlayerEndedGrinding(AFortPlayerPawn* Pawn);                                                                       // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.OnPlayerBeganGrinding
	// void OnPlayerBeganGrinding(AFortPlayerPawn* GrindingPawn);                                                               // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.NativeGetNextPositionToGrind
	// void NativeGetNextPositionToGrind(float DistanceToTravel, float CurrentDistanceAlongSpline, float RightLeanValue, FVector& OutNextLocation, bool& bGotToEnd, float& NextLocationOnRail, EGrindRailBoosterMode& BoosterMode, bool& bHitObstacle, bool& bNewRail, float& DistanceAlongNewRail, AFortGrindRail*& TheNewRail, bool& bNewRailReverseDirection); // [0x9a1fb44] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.IsTipCapped
	// bool IsTipCapped(bool bStartTip);                                                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.IsGrindRailEnabled
	// bool IsGrindRailEnabled();                                                                                               // [0x2cdffe0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.HasTailConnection
	// bool HasTailConnection();                                                                                                // [0x9a1f9f8] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.HasHeadConnection
	// bool HasHeadConnection();                                                                                                // [0x9a1f9d4] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.GetSpeedSettingsOverride
	// bool GetSpeedSettingsOverride(FGrindRailSpeedSettings& SpeedSettingsOverride);                                           // [0x9a1f6d8] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Script/GrindRailRuntime.FortGrindRail.GenerateMeshesAlongSpline
	// void GenerateMeshesAlongSpline();                                                                                        // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.ForceClearBoosters
	// void ForceClearBoosters();                                                                                               // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGrindRail.BPRerunConstructionScript
	// void BPRerunConstructionScript();                                                                                        // [0x2d79908] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortGrindRail.AllowSprinting
	// bool AllowSprinting();                                                                                                   // [0x2cdffe0] Native|Event|Public|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
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
	CMember(UAnimMontage*)                             LancePickaxeMontage                                         OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UAnimMontage*)                             ScythePickaxeMontage                                        OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UAnimMontage*)                             FruitCakePickaxeMontage                                     OFFSET(get<T>, {0x458, 8, 0, 0})
	SMember(FName)                                     LeanAlphaCurve                                              OFFSET(getStruct<T>, {0x460, 4, 0, 0})
	SMember(FName)                                     MeleeTwistCurve                                             OFFSET(getStruct<T>, {0x464, 4, 0, 0})
	SMember(FName)                                     InterruptibleCurve                                          OFFSET(getStruct<T>, {0x468, 4, 0, 0})
	CMember(TMap<FName, float>)                        SlopeWarpingCurveMap                                        OFFSET(get<T>, {0x470, 80, 0, 0})
	DMember(double)                                    LeanBwdVelocityThreshold                                    OFFSET(get<double>, {0x4C0, 8, 0, 0})
	SMember(FCachedAnimRelevancyData)                  BwdStartCachedData                                          OFFSET(getStruct<T>, {0x4C8, 20, 0, 0})
	DMember(double)                                    IsMovingThresholdSpeed                                      OFFSET(get<double>, {0x4E0, 8, 0, 0})
	DMember(double)                                    NoisePlayRateSprintSpeedThreshold                           OFFSET(get<double>, {0x4E8, 8, 0, 0})
	SMember(FVector2D)                                 NoisePlayRateNormalSpeedInputRange                          OFFSET(getStruct<T>, {0x4F0, 16, 0, 0})
	SMember(FVector2D)                                 NoisePlayRateNormalSpeedOutputRange                         OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	SMember(FVector2D)                                 NoisePlayRateHighSpeedInputRange                            OFFSET(getStruct<T>, {0x510, 16, 0, 0})
	SMember(FVector2D)                                 NoisePlayRateHighSpeedOutputRange                           OFFSET(getStruct<T>, {0x520, 16, 0, 0})
	SMember(FVector2D)                                 CombatNoisePlayRateSpeedInputRange                          OFFSET(getStruct<T>, {0x530, 16, 0, 0})
	SMember(FVector2D)                                 CombatNoisePlayRateSpeedOutputRange                         OFFSET(getStruct<T>, {0x540, 16, 0, 0})
	DMember(double)                                    CombatNoiseAlphaTargeting                                   OFFSET(get<double>, {0x550, 8, 0, 0})
	DMember(double)                                    CombatNoiseAlphaNonTargeting                                OFFSET(get<double>, {0x558, 8, 0, 0})
	DMember(double)                                    RootLeanAlphaInterpSpeed                                    OFFSET(get<double>, {0x560, 8, 0, 0})
	DMember(double)                                    SlopeWarpAlphaInterpSpeed                                   OFFSET(get<double>, {0x568, 8, 0, 0})
	DMember(double)                                    SplineRelativeAimYawDeltaThreshold                          OFFSET(get<double>, {0x570, 8, 0, 0})
	DMember(double)                                    AimYawSmoothInterpolationCoefficient                        OFFSET(get<double>, {0x578, 8, 0, 0})
	DMember(double)                                    IsSmoothingYawThreshold                                     OFFSET(get<double>, {0x580, 8, 0, 0})
	DMember(double)                                    LeanBWDThreshold                                            OFFSET(get<double>, {0x588, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlphaMeleeWeapon                               OFFSET(get<double>, {0x590, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlphaNonMeleeWeapon                            OFFSET(get<double>, {0x598, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlphaFruitcakePickaxe                          OFFSET(get<double>, {0x5A0, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlphaLanceSyctheOrDualWeild                    OFFSET(get<double>, {0x5A8, 8, 0, 0})
	DMember(double)                                    BaseLeanDirection                                           OFFSET(get<double>, {0x5B0, 8, 0, 0})
	DMember(bool)                                      bIsGrinding                                                 OFFSET(get<bool>, {0x5B8, 1, 0, 0})
	DMember(double)                                    CurrentSpeed                                                OFFSET(get<double>, {0x5C0, 8, 0, 0})
	DMember(double)                                    LeanDirection                                               OFFSET(get<double>, {0x5C8, 8, 0, 0})
	DMember(bool)                                      bSprinting                                                  OFFSET(get<bool>, {0x5D0, 1, 0, 0})
	DMember(double)                                    LeanForward                                                 OFFSET(get<double>, {0x5D8, 8, 0, 0})
	DMember(bool)                                      bIsWeaponActive                                             OFFSET(get<bool>, {0x5E0, 1, 0, 0})
	SMember(FRotator)                                  SplineRelativeAim                                           OFFSET(getStruct<T>, {0x5E8, 24, 0, 0})
	SMember(FFortAnimInput_GrindRail)                  GrindRailInput                                              OFFSET(getStruct<T>, {0x600, 24, 0, 0})
	CMember(TWeakObjectPtr<UFortPawnComponent_GrindRail*>) GrindingComponent                                       OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(TWeakObjectPtr<UCharacterMovementComponent*>) MovementComponent                                        OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerPawn*>)          FortPlayerPawn                                              OFFSET(get<T>, {0x628, 8, 0, 0})
	DMember(bool)                                      bIsFalling                                                  OFFSET(get<bool>, {0x630, 1, 0, 0})
	DMember(double)                                    LeanAlpha                                                   OFFSET(get<double>, {0x638, 8, 0, 0})
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x640, 1, 0, 0})
	DMember(bool)                                      bShould180Turn                                              OFFSET(get<bool>, {0x641, 1, 0, 0})
	DMember(bool)                                      bShouldPlayEntry                                            OFFSET(get<bool>, {0x642, 1, 0, 0})
	DMember(double)                                    NoisePlayRate                                               OFFSET(get<double>, {0x648, 8, 0, 0})
	DMember(bool)                                      bIsLeanBwd                                                  OFFSET(get<bool>, {0x650, 1, 0, 0})
	DMember(bool)                                      bIsLeft180Turn                                              OFFSET(get<bool>, {0x651, 1, 0, 0})
	DMember(bool)                                      bShould180TurnAgain                                         OFFSET(get<bool>, {0x652, 1, 0, 0})
	DMember(bool)                                      bIsTurning                                                  OFFSET(get<bool>, {0x653, 1, 0, 0})
	DMember(bool)                                      bShouldExitLocomotion                                       OFFSET(get<bool>, {0x654, 1, 0, 0})
	DMember(bool)                                      bIsBoosting                                                 OFFSET(get<bool>, {0x655, 1, 0, 0})
	DMember(bool)                                      bEarlyExitFromEntry                                         OFFSET(get<bool>, {0x656, 1, 0, 0})
	DMember(bool)                                      bAimFWD                                                     OFFSET(get<bool>, {0x657, 1, 0, 0})
	DMember(bool)                                      bAimBWD                                                     OFFSET(get<bool>, {0x658, 1, 0, 0})
	DMember(bool)                                      bAimLFT                                                     OFFSET(get<bool>, {0x659, 1, 0, 0})
	DMember(bool)                                      bAimRGT                                                     OFFSET(get<bool>, {0x65A, 1, 0, 0})
	DMember(double)                                    AimFWDDeltaAngleDegrees                                     OFFSET(get<double>, {0x660, 8, 0, 0})
	DMember(double)                                    AimBWDDeltaAngleDegrees                                     OFFSET(get<double>, {0x668, 8, 0, 0})
	DMember(double)                                    AimLFTDeltaAngleDegrees                                     OFFSET(get<double>, {0x670, 8, 0, 0})
	DMember(double)                                    AimRGTDeltaAngleDegrees                                     OFFSET(get<double>, {0x678, 8, 0, 0})
	DMember(double)                                    NegativeYaw                                                 OFFSET(get<double>, {0x680, 8, 0, 0})
	SMember(FRotator)                                  MeleeTwistRot                                               OFFSET(getStruct<T>, {0x688, 24, 0, 0})
	DMember(double)                                    BwdStartCachedTime                                          OFFSET(get<double>, {0x6A0, 8, 0, 0})
	DMember(double)                                    Velocity                                                    OFFSET(get<double>, {0x6A8, 8, 0, 0})
	DMember(bool)                                      bIsEntryLeft                                                OFFSET(get<bool>, {0x6B0, 1, 0, 0})
	DMember(bool)                                      bIsEntryFromAir                                             OFFSET(get<bool>, {0x6B1, 1, 0, 0})
	DMember(bool)                                      bIsEntryRight                                               OFFSET(get<bool>, {0x6B2, 1, 0, 0})
	DMember(bool)                                      bEnteredFromInteraction                                     OFFSET(get<bool>, {0x6B3, 1, 0, 0})
	DMember(double)                                    SlopeWarpAlpha                                              OFFSET(get<double>, {0x6B8, 8, 0, 0})
	DMember(double)                                    SplineRelativeAimYaw                                        OFFSET(get<double>, {0x6C0, 8, 0, 0})
	DMember(double)                                    AimYawSmoothed                                              OFFSET(get<double>, {0x6C8, 8, 0, 0})
	DMember(bool)                                      bIsSmoothingYaw                                             OFFSET(get<bool>, {0x6D0, 1, 0, 0})
	DMember(double)                                    LastSplineRelativeAimYaw                                    OFFSET(get<double>, {0x6D8, 8, 0, 0})
	DMember(double)                                    RootLeanAlpha                                               OFFSET(get<double>, {0x6E0, 8, 0, 0})
	DMember(double)                                    MuteUpperBodyAlpha                                          OFFSET(get<double>, {0x6E8, 8, 0, 0})
	DMember(bool)                                      bIsLanceType                                                OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(bool)                                      bWasSprinting                                               OFFSET(get<bool>, {0x6F1, 1, 0, 0})
	DMember(bool)                                      bStateRuleToBoostLoop                                       OFFSET(get<bool>, {0x6F2, 1, 0, 0})
	DMember(bool)                                      bIsInAction                                                 OFFSET(get<bool>, {0x6F3, 1, 0, 0})
	DMember(double)                                    CombatNoisePlayRate                                         OFFSET(get<double>, {0x6F8, 8, 0, 0})
	DMember(double)                                    CombatNoiseAlpha                                            OFFSET(get<double>, {0x700, 8, 0, 0})
	DMember(bool)                                      bIsTwoHandedMelee                                           OFFSET(get<bool>, {0x708, 1, 0, 0})
	DMember(bool)                                      bShouldCorrectUpperBody                                     OFFSET(get<bool>, {0x709, 1, 0, 0})
	DMember(bool)                                      bBothHandsDown                                              OFFSET(get<bool>, {0x70A, 1, 0, 0})
	DMember(double)                                    TurnInPlaceAnimCurveValue                                   OFFSET(get<double>, {0x710, 8, 0, 0})
	DMember(double)                                    TurnRotationAmountCurveValue                                OFFSET(get<double>, {0x718, 8, 0, 0})


	/// Functions
	// Function /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance.HandleBegunGrinding
	// void HandleBegunGrinding(bool bWasAlreadyGrinding, bool bWasJumpingFromRail, bool bFromInteraction, FVector PreviousPlayerLocation); // [0x9a1f7a8] Final|Native|Public|HasDefaults 
	// Function /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_IdleEnter
	// void AnimNotify_IdleEnter(UAnimNotify* Notify);                                                                          // [0x9a1edc8] Final|Native|Public  
	// Function /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_EntryExit
	// void AnimNotify_EntryExit(UAnimNotify* Notify);                                                                          // [0x9a1ee38] Final|Native|Public  
	// Function /Script/GrindRailRuntime.FortGrindRailLayerAnimInstance.AnimNotify_EntryEnter
	// void AnimNotify_EntryEnter(UAnimNotify* Notify);                                                                         // [0x9a1edc8] Final|Native|Public  
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
	SMember(FGameplayTag)                              GrindRailTag                                                OFFSET(getStruct<T>, {0xA8, 4, 0, 0})
	SMember(FScalableFloat)                            GrindDuration                                               OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            GrindDurationRandomDeviation                                OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
};

/// Class /Script/GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding
/// Size: 0x0190 (0x000990 - 0x000B20)
class AFortGameplayCueNotifyLoop_Grinding : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2848;

public:
	DMember(bool)                                      bFeetHasLanded                                              OFFSET(get<bool>, {0x990, 1, 0, 0})
	DMember(bool)                                      bEnableNativeAudioUpdate                                    OFFSET(get<bool>, {0x991, 1, 0, 0})
	DMember(float)                                     ForwardChangedValueThreshold                                OFFSET(get<float>, {0x994, 4, 0, 0})
	SMember(FFortAudioFloatParameter)                  Speed                                                       OFFSET(getStruct<T>, {0x998, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  Forward                                                     OFFSET(getStruct<T>, {0x9D0, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  Boost                                                       OFFSET(getStruct<T>, {0xA08, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  Curve                                                       OFFSET(getStruct<T>, {0xA40, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IsGrinding                                                  OFFSET(getStruct<T>, {0xA78, 56, 0, 0})
	SMember(FFortAudioFloatParameter)                  IsSlowDown                                                  OFFSET(getStruct<T>, {0xAB0, 56, 0, 0})
	SMember(FName)                                     LeanForwardSpeedName                                        OFFSET(getStruct<T>, {0xAE8, 4, 0, 0})
	SMember(FName)                                     TurnOnSpeedFXName                                           OFFSET(getStruct<T>, {0xAEC, 4, 0, 0})
	DMember(float)                                     TurnOnSpeedFXThreshold                                      OFFSET(get<float>, {0xAF0, 4, 0, 0})
	CMember(TWeakObjectPtr<UFXSystemComponent*>)       EffectsComponent                                            OFFSET(get<T>, {0xAF4, 8, 0, 0})
	CMember(UAudioComponent*)                          AudioComponent                                              OFFSET(get<T>, {0xB00, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  OFFSET(get<T>, {0xB08, 8, 0, 0})
	CMember(UFortPawnComponent_GrindRail*)             GrindComponent                                              OFFSET(get<T>, {0xB10, 8, 0, 0})


	/// Functions
	// Function /Script/GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding.OnForwardChanged
	// void OnForwardChanged(bool bNewState);                                                                                   // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortGameplayCueNotifyLoop_Grinding.CacheReferences
	// void CacheReferences(UAudioComponent* InAudioComponent, UFXSystemComponent* InEffectsComponent, AFortPlayerPawn* InPlayerPawn, UFortPawnComponent_GrindRail* InGrindComponent); // [0x9a1f1ac] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GrindRailRuntime.FortPawnComponent_GrindRail
/// Size: 0x0B80 (0x0000A8 - 0x000C28)
class UFortPawnComponent_GrindRail : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3112;

public:
	DMember(bool)                                      bUseNativeSpeedCalculation                                  OFFSET(get<bool>, {0xB8, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  GrindRailChangedDelegate                                    OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BegunGrindingDelegate                                       OFFSET(getStruct<T>, {0xD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HitObstacleWhenGrindingDelegate                             OFFSET(getStruct<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BoosterModeChangedDelegate                                  OFFSET(getStruct<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SprintingStateChangedDelegate                               OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  EndedGrindingDelegate                                       OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	DMember(float)                                     LeanForward                                                 OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     LeanRight                                                   OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     BaseLeanRight                                               OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(float)                                     CurrentSpeedAlongSpline                                     OFFSET(get<float>, {0x12C, 4, 0, 0})
	SMember(FVector)                                   CurrentDirection                                            OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	CMember(EGrindRailBoosterMode)                     CurrentBoosterMode                                          OFFSET(get<T>, {0x148, 1, 0, 0})
	DMember(bool)                                      bShould180Turn                                              OFFSET(get<bool>, {0x149, 1, 0, 0})
	DMember(bool)                                      bShould180TurnAgain                                         OFFSET(get<bool>, {0x14A, 1, 0, 0})
	DMember(bool)                                      bUseProtoRotation                                           OFFSET(get<bool>, {0x14B, 1, 0, 0})
	SMember(FScalableFloat)                            BaseMaxLeanAngularSpeed                                     OFFSET(getStruct<T>, {0x150, 40, 0, 0})
	SMember(FScalableFloat)                            BaseLeanInterpSpeed                                         OFFSET(getStruct<T>, {0x178, 40, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           ReplicatedGrindingRail                                      OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           PreviousGrindingRail                                        OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           GrindingRail                                                OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(TWeakObjectPtr<AFortGrindRail*>)           NextGrindingRail                                            OFFSET(get<T>, {0x1B8, 8, 0, 0})
	DMember(bool)                                      bIsGrinding                                                 OFFSET(get<bool>, {0x1C0, 1, 0, 0})
	DMember(bool)                                      bIsGrindJumping                                             OFFSET(get<bool>, {0x1C1, 1, 0, 0})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0x1C2, 1, 0, 0})
	DMember(bool)                                      bWeaponHolstered                                            OFFSET(get<bool>, {0x1C3, 1, 0, 0})
	DMember(bool)                                      bJumpInputReady                                             OFFSET(get<bool>, {0x1C4, 1, 0, 0})
	DMember(float)                                     GrindStartDistance                                          OFFSET(get<float>, {0x1C8, 4, 0, 0})
	DMember(float)                                     CurrentDistanceAlongSpline                                  OFFSET(get<float>, {0x1CC, 4, 0, 0})
	SMember(FVector)                                   NativeLastRailLocation                                      OFFSET(getStruct<T>, {0x1D0, 24, 0, 0})
	DMember(float)                                     NativeMaxSpeed                                              OFFSET(get<float>, {0x1E8, 4, 0, 0})
	SMember(FRotator)                                  GoalRotation                                                OFFSET(getStruct<T>, {0x1F0, 24, 0, 0})
	DMember(bool)                                      bIs180Turning                                               OFFSET(get<bool>, {0x208, 1, 0, 0})
	DMember(float)                                     HorizontalSplineAngleDeltaDegrees                           OFFSET(get<float>, {0x20C, 4, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedInclineSplinePitch                                OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedDeclineSplinePitch                                OFFSET(getStruct<T>, {0x238, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedShootingSplinePitch                               OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	SMember(FScalableFloat)                            TurnAngleThreshold                                          OFFSET(getStruct<T>, {0x288, 40, 0, 0})
	SMember(FScalableFloat)                            AnimatedTurnDuration                                        OFFSET(getStruct<T>, {0x2B0, 40, 0, 0})
	SMember(FScalableFloat)                            BaseGrindRailYawRotationInterpSpeed                         OFFSET(getStruct<T>, {0x2D8, 40, 0, 0})
	SMember(FScalableFloat)                            InclineGrindRailPitchRotationInterpSpeed                    OFFSET(getStruct<T>, {0x300, 40, 0, 0})
	SMember(FScalableFloat)                            DeclineGrindRailPitchRotationInterpSpeed                    OFFSET(getStruct<T>, {0x328, 40, 0, 0})
	SMember(FScalableFloat)                            ShootingGrindRailRotationInterpSpeed                        OFFSET(getStruct<T>, {0x350, 40, 0, 0})
	SMember(FScalableFloat)                            NextGrindRailDetectionOffset                                OFFSET(getStruct<T>, {0x378, 40, 0, 0})
	SMember(FGameplayTag)                              CancelGrindingTag                                           OFFSET(getStruct<T>, {0x3A0, 4, 0, 0})
	SMember(FScalableFloat)                            GrindInteractionReentryCooldownTime                         OFFSET(getStruct<T>, {0x3A8, 40, 0, 0})
	SMember(FScalableFloat)                            ForceGrindingFromWalking                                    OFFSET(getStruct<T>, {0x3D0, 40, 0, 0})
	SMember(FScalableFloat)                            MinTimeBeforeJumpSinceEntry                                 OFFSET(getStruct<T>, {0x3F8, 40, 0, 0})
	SMember(FScalableFloat)                            CancelSprintLeanBackThreshold                               OFFSET(getStruct<T>, {0x420, 40, 0, 0})
	SMember(FScalableFloat)                            WeaponHolsterCooldown                                       OFFSET(getStruct<T>, {0x448, 40, 0, 0})
	SMember(FScalableFloat)                            WeaponIsShootingCooldown                                    OFFSET(getStruct<T>, {0x470, 40, 0, 0})
	SMember(FScalableFloat)                            GravityForceWhenGoingDown                                   OFFSET(getStruct<T>, {0x498, 40, 0, 0})
	SMember(FScalableFloat)                            GravityForceWhenGoingUp                                     OFFSET(getStruct<T>, {0x4C0, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterSprintingAccelerationOnSlowDownBooster               OFFSET(getStruct<T>, {0x4E8, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterAccelerationOnSpeedUpBooster                         OFFSET(getStruct<T>, {0x510, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterSlowDownBoosterDragMultiplier                        OFFSET(getStruct<T>, {0x538, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterSlowDownBoosterGoalSpeed                             OFFSET(getStruct<T>, {0x560, 40, 0, 0})
	SMember(FScalableFloat)                            BoosterMaxSpeed                                             OFFSET(getStruct<T>, {0x588, 40, 0, 0})
	SMember(FScalableFloat)                            ShootingMaxSpeedMultiplier                                  OFFSET(getStruct<T>, {0x5B0, 40, 0, 0})
	SMember(FScalableFloat)                            AngleForMaxSpeedIncreaseFromDownwardSlope                   OFFSET(getStruct<T>, {0x5D8, 40, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedIncreaseFromDownwardSlope                           OFFSET(getStruct<T>, {0x600, 40, 0, 0})
	SMember(FScalableFloat)                            MaxDragForSpeedSoftCap                                      OFFSET(getStruct<T>, {0x628, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedHardCap                                                OFFSET(getStruct<T>, {0x650, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingAcceleration                                       OFFSET(getStruct<T>, {0x678, 40, 0, 0})
	SMember(FScalableFloat)                            SprintingMaxSpeed                                           OFFSET(getStruct<T>, {0x6A0, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedThresholdForTurn                                       OFFSET(getStruct<T>, {0x6C8, 40, 0, 0})
	SMember(FScalableFloat)                            TimeToTurnAround                                            OFFSET(getStruct<T>, {0x6F0, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMaxLeanAcceleration                                 OFFSET(getStruct<T>, {0x718, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMinLeanAcceleration                                 OFFSET(getStruct<T>, {0x740, 40, 0, 0})
	SMember(FScalableFloat)                            MaxLeanAcceleration                                         OFFSET(getStruct<T>, {0x768, 40, 0, 0})
	SMember(FScalableFloat)                            MinLeanAcceleration                                         OFFSET(getStruct<T>, {0x790, 40, 0, 0})
	SMember(FScalableFloat)                            CanAccelerateByLeaningIntoTurns                             OFFSET(getStruct<T>, {0x7B8, 40, 0, 0})
	SMember(FScalableFloat)                            CurvatureForMaxLeanIntoTurnsAcceleration                    OFFSET(getStruct<T>, {0x7E0, 40, 0, 0})
	SMember(FScalableFloat)                            LeanIntoTurnsMaxAcceleration                                OFFSET(getStruct<T>, {0x808, 40, 0, 0})
	SMember(FScalableFloat)                            IncreasedMaxSpeedFromLeanIntoTurn                           OFFSET(getStruct<T>, {0x830, 40, 0, 0})
	SMember(FScalableFloat)                            UseNewCalculationForSidewaysLeanBoost                       OFFSET(getStruct<T>, {0x858, 40, 0, 0})
	SMember(FScalableFloat)                            SidewaysLeanBoostReductionRate                              OFFSET(getStruct<T>, {0x880, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMaxBaseAcceleration                                 OFFSET(getStruct<T>, {0x8A8, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedForMinBaseAcceleration                                 OFFSET(getStruct<T>, {0x8D0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxBaseAcceleration                                         OFFSET(getStruct<T>, {0x8F8, 40, 0, 0})
	SMember(FScalableFloat)                            MinBaseAcceleration                                         OFFSET(getStruct<T>, {0x920, 40, 0, 0})
	SMember(FScalableFloat)                            BaseGoalSpeed                                               OFFSET(getStruct<T>, {0x948, 40, 0, 0})
	SMember(FScalableFloat)                            BaseMaxSpeed                                                OFFSET(getStruct<T>, {0x970, 40, 0, 0})
	SMember(FScalableFloat)                            EnableFriction                                              OFFSET(getStruct<T>, {0x998, 40, 0, 0})
	SMember(FScalableFloat)                            BaseGoalDecelerationSpeed                                   OFFSET(getStruct<T>, {0x9C0, 40, 0, 0})
	SMember(FScalableFloat)                            FrictionWhenNotLeaning                                      OFFSET(getStruct<T>, {0x9E8, 40, 0, 0})
	SMember(FScalableFloat)                            SpeedMultiplierOnHitRailCap                                 OFFSET(getStruct<T>, {0xA10, 40, 0, 0})
	SMember(FScalableFloat)                            MinSpeedAfterBouncedOffRailCap                              OFFSET(getStruct<T>, {0xA38, 40, 0, 0})


	/// Functions
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.SetMovementStatus
	// void SetMovementStatus(FVector& NewStatus);                                                                              // [0x9a20648] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.SetIsSprinting
	// void SetIsSprinting(bool bNewIsSprinting);                                                                               // [0x9a205c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.SetGrindDistanceOnSpline
	// void SetGrindDistanceOnSpline(float NewDistanceOnSpline);                                                                // [0x9a20548] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.SetGrindBaseActor
	// void SetGrindBaseActor(AActor* NewBaseActor);                                                                            // [0x9a204c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.ServerUpdateWeaponHolstered
	// void ServerUpdateWeaponHolstered(bool bNewHolstered, bool bPlayEquipAnim);                                               // [0x9a20400] Net|NetReliableNative|Event|Protected|NetServer 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.RemoveMoveIgnoreActors
	// void RemoveMoveIgnoreActors();                                                                                           // [0x9a203ec] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnWalkingBaseChanged
	// void OnWalkingBaseChanged(AFortPawn* Pawn, AActor* NewBase);                                                             // [0x269cb80] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_IsSprinting
	// void OnRep_IsSprinting();                                                                                                // [0x9a203b8] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_GrindingRail
	// void OnRep_GrindingRail();                                                                                               // [0x9a20334] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnRep_CurrentBoosterMode
	// void OnRep_CurrentBoosterMode(EGrindRailBoosterMode PreviousBoosterMode);                                                // [0x9a20258] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnReloadInput
	// void OnReloadInput();                                                                                                    // [0x9a20244] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnMovementModeChanged
	// void OnMovementModeChanged(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x1ab83a4] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnJumpInput
	// void OnJumpInput(bool bPressed);                                                                                         // [0x9a201c4] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnIgnoredBuildingEndPlay
	// void OnIgnoredBuildingEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                 // [0x9a20100] Final|Native|Protected 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.OnBaseMeshReady
	// void OnBaseMeshReady(AFortPlayerPawn* Pawn, USkeletalMeshComponent* MeshComponent);                                      // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.NativeIsShooting
	// bool NativeIsShooting();                                                                                                 // [0x9a200dc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsWeaponADS
	// bool IsWeaponADS();                                                                                                      // [0x9a1fab8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsWeaponActive
	// bool IsWeaponActive();                                                                                                   // [0x9a1fb28] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsUsingToggleSprint
	// bool IsUsingToggleSprint();                                                                                              // [0x9a1fa58] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsUsingFirstPersonCamera
	// bool IsUsingFirstPersonCamera();                                                                                         // [0x9a1fa34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.IsGrinding
	// bool IsGrinding();                                                                                                       // [0x9a1fa1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleSprintInput
	// void HandleSprintInput(bool bPressed);                                                                                   // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleRailJump
	// void HandleRailJump();                                                                                                   // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleJumpOffEnd
	// void HandleJumpOffEnd();                                                                                                 // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleHitWhenGrinding
	// void HandleHitWhenGrinding(FHitResult& Hit);                                                                             // [0x1ebf994] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingEndedFromReplication
	// void HandleGrindingEndedFromReplication();                                                                               // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingEnded
	// void HandleGrindingEnded();                                                                                              // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindingBegun
	// void HandleGrindingBegun();                                                                                              // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.HandleGrindFinishedAfterJumping
	// void HandleGrindFinishedAfterJumping();                                                                                  // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetWantsToGrind
	// bool GetWantsToGrind();                                                                                                  // [0x9a1f760] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetSpeedHardCap
	// float GetSpeedHardCap();                                                                                                 // [0x9a1f6c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetMovementStatus
	// FVector GetMovementStatus();                                                                                             // [0x9a1f660] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetLeanForwardSpeedNormalized
	// float GetLeanForwardSpeedNormalized();                                                                                   // [0x9a1f640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetHorizontalSplineAngleDeltaDegrees
	// float GetHorizontalSplineAngleDeltaDegrees();                                                                            // [0x9a1f628] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindRequestJump
	// bool GetGrindRequestJump();                                                                                              // [0x9a1f5e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindDistanceOnSpline
	// float GetGrindDistanceOnSpline();                                                                                        // [0x9a1f5bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetGrindBaseActor
	// AActor* GetGrindBaseActor();                                                                                             // [0x9a1f56c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.GetCameraOrientedLeanValues
	// void GetCameraOrientedLeanValues(float RawLeanForward, float RawLeanRight, float& OrientedLeanForward, float& OrientedLeanRight); // [0x9a1f408] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.EndGrinding
	// void EndGrinding(bool bSetEndMovementMode);                                                                              // [0x9a1f388] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.DrawDebugHUD
	// void DrawDebugHUD(AHUD* HUD, UCanvas* Canvas);                                                                           // [0x5fd7ee0] Final|Native|Protected|Const 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.CanBeginGrinding
	// bool CanBeginGrinding();                                                                                                 // [0x15f1910] Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.CalculateVelocity
	// void CalculateVelocity(float DeltaTime, bool bReplayingMovement, FVector& OutVelocity);                                  // [0x1ebf994] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.BeginGrinding
	// void BeginGrinding(AFortGrindRail* GrindRail, float OptionalStartDistance, bool bFromInteraction);                       // [0x9a1f0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.AttemptDestroyVehicleWhileGrinding
	// bool AttemptDestroyVehicleWhileGrinding(AFortAthenaVehicle* Vehicle);                                                    // [0x9a1eea8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.AddTemporaryMoveIgnoreActor
	// void AddTemporaryMoveIgnoreActor(ABuildingActor* BuildingActor, float IgnoreDuration);                                   // [0x9a1ed04] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GrindRailRuntime.FortPawnComponent_GrindRail.AddMoveIgnoreActor
	// bool AddMoveIgnoreActor(ABuildingActor* BuildingActor);                                                                  // [0x9a1ec74] Final|Native|Protected|BlueprintCallable 
};

/// Struct /Script/GrindRailRuntime.FortAnimInput_GrindRail
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortAnimInput_GrindRail : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bAimFWD                                                     OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bAimBWD                                                     OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bAimLFT                                                     OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bAimRGT                                                     OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(float)                                     AimFWDDeltaAngleDegrees                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AimBWDDeltaAngleDegrees                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AimLFTDeltaAngleDegrees                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AimRGTDeltaAngleDegrees                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     PawnToSplineDeltaYawAngleDegrees                            OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/GrindRailRuntime.FortAnimNode_GrindRailSlopeWarping
/// Size: 0x0058 (0x0002E8 - 0x000340)
class FFortAnimNode_GrindRailSlopeWarping : public FFortAnimNode_SlopeWarping
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	DMember(float)                                     BaseSplineRadius                                            OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(bool)                                      bAbsentCurveMeansFootDown                                   OFFSET(get<bool>, {0x2EC, 1, 1, 0})
	SMember(FName)                                     LFootOnGroundCurveName                                      OFFSET(getStruct<T>, {0x2F0, 4, 0, 0})
	DMember(bool)                                      bLeftCurveHighMeansFootDown                                 OFFSET(get<bool>, {0x2F4, 1, 1, 0})
	SMember(FName)                                     RFootOnGroundCurveName                                      OFFSET(getStruct<T>, {0x2F8, 4, 0, 0})
	DMember(bool)                                      bRightCurveHighMeansFootDown                                OFFSET(get<bool>, {0x2FC, 1, 1, 0})
	SMember(FBoneReference)                            LeftFootFKBone                                              OFFSET(getStruct<T>, {0x300, 12, 0, 0})
};

/// Struct /Script/GrindRailRuntime.GrindRailBoosterInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FGrindRailBoosterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MinDistanceAlongSpline                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxDistanceAlongSpline                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EGrindRailBoosterMode)                     PositiveMode                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(EGrindRailBoosterMode)                     NegativeMode                                                OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Struct /Script/GrindRailRuntime.FortRailPointSnapData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortRailPointSnapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(AFortGrindRail*)                           RailToSnapTo                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   PointToSnapTo                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/GrindRailRuntime.GrindRailSpeedSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FGrindRailSpeedSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     SprintAcceleration                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxLeanAcceleration                                         OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinLeanAcceleration                                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ShootingSpeedMultiplier                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     GravityForceWhenGoingUp                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     GravityForceWhenGoingDown                                   OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/GrindRailRuntime.GrindRailStatus
/// Size: 0x0010 (0x000000 - 0x000010)
class FGrindRailStatus : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<AFortGrindRail*>)           GrindingRail                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     CurrentSpeedAlongSpline                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CurrentDistanceAlongSpline                                  OFFSET(get<float>, {0xC, 4, 0, 0})
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

