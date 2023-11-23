
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: ContextualTraversalRuntime
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle
/// Size: 0x0048 (0x000110 - 0x000158)
class UFortMovementMode_ExtLogicHurdle : public UFortMovementMode_ExtLogicTraversalBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FGameplayTagContainer)                     HurdleTag                                                   OFFSET(getStruct<T>, {0x110, 32, 0, 0})
	SMember(FGameplayTag)                              HurdleStartedTag                                            OFFSET(getStruct<T>, {0x130, 4, 0, 0})
	SMember(FGameplayTagContainer)                     HurdleFinishedTag                                           OFFSET(getStruct<T>, {0x138, 32, 0, 0})


	/// Functions
	// Function /Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle.IsContextualActionPrototypeActive
	// bool IsContextualActionPrototypeActive();                                                                                // [0xa2ea0b0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.FortMovementMode_ExtLogicHurdle.BP_GetAnimationMontageInformation
	// void BP_GetAnimationMontageInformation(FSynchedActionInfo SynchedActionInfo, EHurdleType Type, bool bIsNarrowOpening, bool bIsCrouched, UAnimMontage*& AnimMontage, FName& StartSectionName, FName& MontageMiddleSectionName); // [0x101681c] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/VaultingCodeRuntime.HurdleCameraMode
/// Size: 0x0200 (0x001B90 - 0x001D90)
class UHurdleCameraMode : public UFortCameraMode_ThirdPerson
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7568;

public:
	SMember(FVector)                                   StartCameraOriginInterpSpeed                                OFFSET(getStruct<T>, {0x1B90, 24, 0, 0})
	SMember(FVector)                                   ApexCameraOriginInterpSpeed                                 OFFSET(getStruct<T>, {0x1BA8, 24, 0, 0})
	SMember(FVector)                                   EndCameraOriginInterpSpeed                                  OFFSET(getStruct<T>, {0x1BC0, 24, 0, 0})
	DMember(float)                                     ConstantSpeedCameraTrackInterpolationExponent               OFFSET(get<float>, {0x1BD8, 4, 0, 0})
	DMember(float)                                     CameraOriginVerticalThreshold                               OFFSET(get<float>, {0x1BDC, 4, 0, 0})
	DMember(float)                                     FallingVerticalInterpSpeed                                  OFFSET(get<float>, {0x1BE0, 4, 0, 0})
	DMember(float)                                     FallSpeedThreshold                                          OFFSET(get<float>, {0x1BE4, 4, 0, 0})
	DMember(float)                                     NonSprintFOV                                                OFFSET(get<float>, {0x1BE8, 4, 0, 0})
	DMember(bool)                                      bOverrideSpectatorCamera                                    OFFSET(get<bool>, {0x1BEC, 1, 0, 0})
	SMember(FHurdleTargetingData)                      HurdleTargetingData                                         OFFSET(getStruct<T>, {0x1BF0, 304, 0, 0})
};

/// Class /Script/VaultingCodeRuntime.HurdleComponent
/// Size: 0x0938 (0x0000A8 - 0x0009E0)
class UHurdleComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2528;

public:
	SMember(FHurdleInputConfig)                        HurdleInputConfig                                           OFFSET(getStruct<T>, {0xB0, 1328, 0, 0})
	SMember(FHurdleInputConfigCache)                   HurdleInputConfigCache                                      OFFSET(getStruct<T>, {0x5E0, 140, 0, 0})
	CMember(UClass*)                                   MovementModeExtension                                       OFFSET(get<T>, {0x670, 8, 0, 0})
	SMember(FScalableFloat)                            HurdleEnabled                                               OFFSET(getStruct<T>, {0x680, 40, 0, 0})
	SMember(FScalableFloat)                            AutoHurdleEnabled                                           OFFSET(getStruct<T>, {0x6A8, 40, 0, 0})
	SMember(FReplicatedHurdleTargetingData)            ReplayHurdleTargetingData                                   OFFSET(getStruct<T>, {0x808, 112, 0, 0})
	DMember(double)                                    LastTeleportTime                                            OFFSET(get<double>, {0x878, 8, 0, 0})
	SMember(FHurdleTargetingData)                      ParallelTargetingData                                       OFFSET(getStruct<T>, {0x880, 304, 0, 0})
	CMember(EHurdleState)                              ReplicatedHurdleState                                       OFFSET(get<T>, {0x9B1, 1, 0, 0})


	/// Functions
	// Function /Script/VaultingCodeRuntime.HurdleComponent.UnregisterMutatorUpdatedDelegate
	// void UnregisterMutatorUpdatedDelegate();                                                                                 // [0x9f1a314] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.ShouldShowHurdleIndicator
	// bool ShouldShowHurdleIndicator();                                                                                        // [0xa2ea9a0] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.ServerStartHurdle
	// void ServerStartHurdle(FReplicatedHurdleTargetingData InReplicatedTargetingData, double ClientLastTeleportTime);         // [0xa2ea6bc] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate(APawn* AffectedPawn);                                                                // [0xa2ea4b8] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.OnRep_ReplicatedLastTeleportTime
	// void OnRep_ReplicatedLastTeleportTime();                                                                                 // [0xa2ea258] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.OnRep_ReplicatedHurdleState
	// void OnRep_ReplicatedHurdleState();                                                                                      // [0xa2ea230] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);                                         // [0xa2ea138] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0xa2ea124] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.IsContextualActionPrototypeActive
	// bool IsContextualActionPrototypeActive();                                                                                // [0xa2ea100] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleTargetingDataValid
	// void HandleTargetingDataValid(FHurdleTargetingData& TargetingData);                                                      // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleTargetingDataInvalid
	// void HandleTargetingDataInvalid();                                                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleOwnerTeleported
	// void HandleOwnerTeleported(AFortPawn* TeleportedOwner);                                                                  // [0xa2ea030] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleOwnerMovementModeChanged
	// void HandleOwnerMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0xa2e9f28] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.HandleOwnerJumpInput
	// void HandleOwnerJumpInput(bool bPressed);                                                                                // [0xa2e9ea8] Final|Native|Protected 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_HandleSpringJump
	// void BP_HandleSpringJump();                                                                                              // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_HandleHurdleStarted
	// void BP_HandleHurdleStarted(FHurdleTargetingData& TargetingData, FSynchedActionInfo& SynchedActionInfo);                 // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_HandleHurdleEnded
	// void BP_HandleHurdleEnded();                                                                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/VaultingCodeRuntime.HurdleComponent.BP_CanStartHurdle
	// void BP_CanStartHurdle(bool& OutCanStartHurdle);                                                                         // [0x101681c] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/VaultingCodeRuntime.HurdleLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UHurdleLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/VaultingCodeRuntime.FortMovementMode_HurdleRuntimeData
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class FFortMovementMode_HurdleRuntimeData : public FFortMovementMode_TraversalBaseRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Struct /Script/VaultingCodeRuntime.FortMovementMode_HurdleCreationData
/// Size: 0x0000 (0x000130 - 0x000130)
class FFortMovementMode_HurdleCreationData : public FFortMovementMode_TraversalBaseCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
};

/// Struct /Script/VaultingCodeRuntime.HurdleInputConfig
/// Size: 0x0530 (0x000000 - 0x000530)
class FHurdleInputConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
	SMember(FScalableFloat)                            CastRadius                                                  OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAllowedFallDistance                                      OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastIndicatorDistance_Phase1                         OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastDistance_Phase1                                  OFFSET(getStruct<T>, {0x78, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastDistance_Phase1_HurdleFromJog                    OFFSET(getStruct<T>, {0xA0, 40, 0, 0})
	SMember(FScalableFloat)                            ForwardCastDistance_Phase1_ManualHurdle                     OFFSET(getStruct<T>, {0xC8, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_WallAngleToleranceFlat                               OFFSET(getStruct<T>, {0xF0, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_SweepGroundBufferHeight                              OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_SweepGroundMaxHeight                                 OFFSET(getStruct<T>, {0x140, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_Floor_WallOffset                                     OFFSET(getStruct<T>, {0x168, 40, 0, 0})
	SMember(FScalableFloat)                            Phase1_Floor_MinHeightForHurlde                             OFFSET(getStruct<T>, {0x190, 40, 0, 0})
	SMember(FScalableFloat)                            Phase2_UpAngleTolerance                                     OFFSET(getStruct<T>, {0x1E0, 40, 0, 0})
	SMember(FScalableFloat)                            Phase2_Floor_MaxHeightForHurlde                             OFFSET(getStruct<T>, {0x208, 40, 0, 0})
	SMember(FScalableFloat)                            Phase3_CapsuleOffset                                        OFFSET(getStruct<T>, {0x258, 40, 0, 0})
	SMember(FScalableFloat)                            Phase3_ClearanceCapsuleSize                                 OFFSET(getStruct<T>, {0x280, 40, 0, 0})
	SMember(FScalableFloat)                            Phase3_ForwardCastDistance                                  OFFSET(getStruct<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            Phase3_MinTopClearanceForHurdleOn                           OFFSET(getStruct<T>, {0x2D0, 40, 0, 0})
	SMember(FScalableFloat)                            Phase4_MaxDownDistance                                      OFFSET(getStruct<T>, {0x2F8, 40, 0, 0})
	SMember(FScalableFloat)                            Phase4_UpAngleTolerance                                     OFFSET(getStruct<T>, {0x320, 40, 0, 0})
	SMember(FScalableFloat)                            Phase4_HurdleOnZTolerance                                   OFFSET(getStruct<T>, {0x348, 40, 0, 0})
	SMember(FScalableFloat)                            Phase5_CapsuleOffset                                        OFFSET(getStruct<T>, {0x370, 40, 0, 0})
	SMember(FScalableFloat)                            Phase5_ClearanceCapsuleSize                                 OFFSET(getStruct<T>, {0x398, 40, 0, 0})
	SMember(FScalableFloat)                            FinalResult_GroundAimOffset                                 OFFSET(getStruct<T>, {0x3C0, 40, 0, 0})
	SMember(FScalableFloat)                            SlideBufferTime                                             OFFSET(getStruct<T>, {0x3E8, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumSpeedToHurdle                                        OFFSET(getStruct<T>, {0x410, 40, 0, 0})
	SMember(FScalableFloat)                            MinimumForwardStickDeflection                               OFFSET(getStruct<T>, {0x438, 40, 0, 0})
	SMember(FScalableFloat)                            RangeToIgnoreMinimumSpeedThreshold                          OFFSET(getStruct<T>, {0x460, 40, 0, 0})
	SMember(FScalableFloat)                            MaximumCapsuleRadius                                        OFFSET(getStruct<T>, {0x488, 40, 0, 0})
	SMember(FScalableFloat)                            MaximumCapsuleHalfHeight                                    OFFSET(getStruct<T>, {0x4B0, 40, 0, 0})
	SMember(FScalableFloat)                            Phase0_HorizontalSweepBreadth                               OFFSET(getStruct<T>, {0x4D8, 40, 0, 0})
	SMember(FScalableFloat)                            Phase0_HorizontalSweepHeight                                OFFSET(getStruct<T>, {0x500, 40, 0, 0})
	SMember(FFortReleaseVersion)                       ContextualActionPrototypeVersion                            OFFSET(getStruct<T>, {0x528, 4, 0, 0})
	SMember(FFortReleaseVersion)                       MovementModeExtensionVersion                                OFFSET(getStruct<T>, {0x52C, 4, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.HurdleInputConfigCache
/// Size: 0x008C (0x000000 - 0x00008C)
class FHurdleInputConfigCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 140;

public:
	DMember(float)                                     CastRadius                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MaxAllowedFallDistance                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ForwardCastIndicatorDistance_Phase1                         OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ForwardCastDistance_Phase1                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ForwardCastDistance_Phase1_HurdleFromJog                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     ForwardCastDistance_Phase1_ManualHurdle                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Phase1_WallAngleToleranceFlat                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Phase1_SweepGroundBufferHeight                              OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Phase1_SweepGroundMaxHeight                                 OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Phase1_Floor_WallOffset                                     OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Phase1_Floor_MinHeightForHurlde                             OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Phase1_Floor_MaxFloorSearchHeight                           OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Phase2_UpAngleTolerance                                     OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Phase2_Floor_MaxHeightForHurlde                             OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Phase2_Floor_HeightCorrectionMinFloorAngle                  OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Phase3_CapsuleOffset                                        OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Phase3_ClearanceCapsuleSize                                 OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Phase3_ForwardCastDistance                                  OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Phase3_MinTopClearanceForHurdleOn                           OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Phase4_MaxDownDistance                                      OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     Phase4_UpAngleTolerance                                     OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Phase4_HurdleOnZTolerance                                   OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     Phase5_CapsuleOffset                                        OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     Phase5_ClearanceCapsuleSize                                 OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     FinalResult_GroundAimOffset                                 OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     SlideBufferTime                                             OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     MinimumSpeedToHurdle                                        OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     MinimumForwardStickDeflection                               OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     RangeToIgnoreMinimumSpeedThreshold                          OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MaximumCapsuleRadius                                        OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     MaximumCapsuleHalfHeight                                    OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     Phase0_HorizontalSweepBreadth                               OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(float)                                     Phase0_HorizontalSweepHeight                                OFFSET(get<float>, {0x80, 4, 0, 0})
	SMember(FFortReleaseVersion)                       ContextualActionPrototypeVersion                            OFFSET(getStruct<T>, {0x84, 4, 0, 0})
	SMember(FFortReleaseVersion)                       MovementModeExtensionVersion                                OFFSET(getStruct<T>, {0x88, 4, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.HurdleTargetingData
/// Size: 0x0130 (0x000000 - 0x000130)
class FHurdleTargetingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(EHurdleType)                               Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EFortSynchedActionEndMovementMode)         EndMovementMode                                             OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x2, 1, 1, 0})
	DMember(bool)                                      bInRange                                                    OFFSET(get<bool>, {0x2, 1, 1, 1})
	DMember(bool)                                      bIsNarrowOpening                                            OFFSET(get<bool>, {0x2, 1, 1, 2})
	SMember(FVector)                                   FacingCornerLocation                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   FacingCornerNormal                                          OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector)                                   BackCornerLocation                                          OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector)                                   FinalLandingPosition                                        OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(AActor*)                                   SourceActor                                                 OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FVector)                                   SourceLocation                                              OFFSET(getStruct<T>, {0x70, 24, 0, 0})
	SMember(FVector)                                   SourceAim                                                   OFFSET(getStruct<T>, {0x88, 24, 0, 0})
	SMember(FVector)                                   WallLocation                                                OFFSET(getStruct<T>, {0xA0, 24, 0, 0})
	SMember(FVector)                                   WallNormal                                                  OFFSET(getStruct<T>, {0xB8, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FVector)                                   TargetNormal                                                OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   TargetActor                                                 OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      TargetActorComponent                                        OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FVector)                                   TargetActorComponentLocation                                OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	SMember(FName)                                     TargetActorBoneName                                         OFFSET(getStruct<T>, {0x128, 4, 0, 0})
};

/// Struct /Script/VaultingCodeRuntime.ReplicatedHurdleTargetingData
/// Size: 0x0070 (0x000000 - 0x000070)
class FReplicatedHurdleTargetingData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(EHurdleType)                               Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EFortSynchedActionEndMovementMode)         EndMovementMode                                             OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FVector_NetQuantize10)                     FacingCornerLocation                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     FacingCornerNormal                                          OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     BackCornerLocation                                          OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FVector_NetQuantize10)                     FinalLandingPosition                                        OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Enum /Script/VaultingCodeRuntime.EHurdleType
/// Size: 0x04
enum EHurdleType : uint8_t
{
	EHurdleType__Invalid0                                                            = 0,
	EHurdleType__HurdleOver1                                                         = 1,
	EHurdleType__HurdleOnTop2                                                        = 2,
	EHurdleType__EHurdleType_MAX3                                                    = 3
};

/// Enum /Script/VaultingCodeRuntime.EHurdleState
/// Size: 0x05
enum EHurdleState : uint8_t
{
	EHurdleState__Inactive0                                                          = 0,
	EHurdleState__Targeting1                                                         = 1,
	EHurdleState__HurdleOver2                                                        = 2,
	EHurdleState__HurdleOn3                                                          = 3,
	EHurdleState__EHurdleState_MAX4                                                  = 4
};

