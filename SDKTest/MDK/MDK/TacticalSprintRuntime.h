
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint
/// Size: 0x0238 (0x000048 - 0x000280)
class UFortMovementMode_ELTacSprint : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FGameplayTag)                              GCEnergyDrain                                               OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FGameplayTag)                              GCSpeedLines                                                OFFSET(get<T>, {0x54, 4, 0, 0})
	SMember(FGameplayTag)                              GCSprintEnd                                                 OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedMultiplier                                          OFFSET(get<T>, {0x60, 40, 0, 0})
	SMember(FScalableFloat)                            JumpHeightMultiplier                                        OFFSET(get<T>, {0x88, 40, 0, 0})
	SMember(FGameplayTag)                              TutorialGameplayTag                                         OFFSET(get<T>, {0xB4, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TutorialAdditionalSourceTag                                 OFFSET(get<T>, {0xB8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TutorialTargetTag                                           OFFSET(get<T>, {0xD8, 32, 0, 0})
	SMember(FGameplayTag)                              TagPreventWeaponHolster                                     OFFSET(get<T>, {0xF8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TacticalSprintFail                                          OFFSET(get<T>, {0x100, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TacticalSprintFailLowEnergy                                 OFFSET(get<T>, {0x120, 32, 0, 0})
	CMember(USoundBase*)                               OnEnergyFullyDrainedSound                                   OFFSET(get<T>, {0x140, 8, 0, 0})
	DMember(float)                                     MinSpeedForHolster                                          OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(float)                                     HolsterTimeAttemptDelay                                     OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(float)                                     MinEnergyToActivate                                         OFFSET(get<float>, {0x15C, 4, 0, 0})
	SMember(FScalableFloat)                            MinEnergyToActivateRow                                      OFFSET(get<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnSlide                                        OFFSET(get<T>, {0x188, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnStart                                        OFFSET(get<T>, {0x1B0, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostPerSecond                                      OFFSET(get<T>, {0x1D8, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnJump                                         OFFSET(get<T>, {0x200, 40, 0, 0})
	SMember(FGameplayTag)                              IgnoreJumpCostTag                                           OFFSET(get<T>, {0x228, 4, 0, 0})
	SMember(FGameplayTag)                              TacticalSprintTag                                           OFFSET(get<T>, {0x22C, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyUseIdentifier                                         OFFSET(get<T>, {0x230, 4, 0, 0})
	CMember(USoundMix*)                                SprintStartedSoundMix                                       OFFSET(get<T>, {0x238, 8, 0, 0})
	CMember(USoundBase*)                               SprintStartedSound2D                                        OFFSET(get<T>, {0x240, 8, 0, 0})
	SMember(FScalableFloat)                            HF_TacSprintEnabled                                         OFFSET(get<T>, {0x248, 40, 0, 0})
	CMember(UClass*)                                   CameraMode                                                  OFFSET(get<T>, {0x270, 8, 0, 0})
	SMember(FGameplayTag)                              CameraModeTag                                               OFFSET(get<T>, {0x278, 4, 0, 0})


	/// Functions
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnReloadCanceling
	// void HandleOnReloadCanceling();                                                                                          // [0x9960370] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPawnJump
	// void HandleOnPawnJump();                                                                                                 // [0x9960358] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnteredEditMode
	// void HandleOnEnteredEditMode();                                                                                          // [0x9960340] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnterAircraft
	// void HandleOnEnterAircraft();                                                                                            // [0x9960328] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnergyDrained
	// void HandleOnEnergyDrained(UFortComponent_Energy* EnergyComp);                                                           // [0x99602ac] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleMovementModeChanged
	// void HandleMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0x99601c8] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleFailedToSprint
	// void HandleFailedToSprint();                                                                                             // [0x99601b4] Final|Native|Public  
};

/// Class /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint
/// Size: 0x0138 (0x0000A0 - 0x0001D8)
class UFortPlayerControllerComponent_TacticalSprint : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(UClass*)                                   MovementModeExtension                                       OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailedToSprint                                            OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(AFortPlayerPawn*)                          CurrentBoundPlayerPawn                                      OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bTacticalSprintEnabled                                      OFFSET(get<bool>, {0xD8, 1, 1, 0})
	DMember(bool)                                      bWantsToTacticalSprint                                      OFFSET(get<bool>, {0xD8, 1, 1, 1})
	DMember(bool)                                      bHandlingMoveForward                                        OFFSET(get<bool>, {0xD8, 1, 1, 2})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0xD8, 1, 1, 3})
	DMember(bool)                                      bWasInBuildMode                                             OFFSET(get<bool>, {0xD8, 1, 1, 4})
	DMember(bool)                                      bFireAnalyticsEventOnEndPlay                                OFFSET(get<bool>, {0xD8, 1, 1, 5})
	SMember(FGameplayTag)                              TacticalSprintAbilityGameplayTag                            OFFSET(get<T>, {0xDC, 4, 0, 0})
	SMember(FGameplayTag)                              DisableTacticalSprintAbilityGameplayTag                     OFFSET(get<T>, {0xE0, 4, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintEnabled                                       OFFSET(get<T>, {0xE8, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintToggleGracePeriod                             OFFSET(get<T>, {0x110, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTacticalSprintStarted                                     OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTacticalSprintEnded                                       OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FTimerHandle)                              StopWantingToSprintTimerReceipt                             OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(UInputComponent*)                          InputComponent                                              OFFSET(get<T>, {0x1C8, 8, 0, 0})


	/// Functions
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.SetIsSprinting
	// void SetIsSprinting(bool bNewIsSprinting);                                                                               // [0x9960e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate();                                                                                   // [0x9960e6c] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnWeaponEquipped
	// void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon);                                              // [0x9960da8] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);                                         // [0x9960cb0] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPawnChanged
	// void OnPawnChanged(AFortPawn* InPawn);                                                                                   // [0x9960c1c] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0x9960c08] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMovementModeChanged
	// void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x9960b0c] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnAutoRunChanged
	// void OnAutoRunChanged(bool bAutoRunIsOn);                                                                                // [0x9960a8c] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.LogAndVisualLog
	// void LogAndVisualLog(UObject* LoggingSource, ESprintLoggingVerbosityLevel Verbosity, FString& LogString);                // [0x9960388] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TacticalSprintRuntime.FortMovementMode_TacSprintRuntimeData
/// Size: 0x0018 (0x000010 - 0x000028)
class FFortMovementMode_TacSprintRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/TacticalSprintRuntime.ESprintLoggingVerbosityLevel
/// Size: 0x07
enum ESprintLoggingVerbosityLevel : uint8_t
{
	ESprintLoggingVerbosityLevel__Error0                                             = 0,
	ESprintLoggingVerbosityLevel__Warning1                                           = 1,
	ESprintLoggingVerbosityLevel__Display2                                           = 2,
	ESprintLoggingVerbosityLevel__Log3                                               = 3,
	ESprintLoggingVerbosityLevel__Verbose4                                           = 4,
	ESprintLoggingVerbosityLevel__VeryVerbose5                                       = 5,
	ESprintLoggingVerbosityLevel__ESprintLoggingVerbosityLevel_MAX6                  = 6
};

