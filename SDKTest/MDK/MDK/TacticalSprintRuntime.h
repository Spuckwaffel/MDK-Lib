
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
/// Size: 0x0280 (0x0000C8 - 0x000348)
class UFortMovementMode_ELTacSprint : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FGameplayTag)                              GCEnergyDrain                                               OFFSET(getStruct<T>, {0xD0, 4, 0, 0})
	SMember(FGameplayTag)                              GCSpeedLines                                                OFFSET(getStruct<T>, {0xD4, 4, 0, 0})
	SMember(FGameplayTag)                              GCSprintEnd                                                 OFFSET(getStruct<T>, {0xD8, 4, 0, 0})
	SMember(FScalableFloat)                            MaxSpeedMultiplier                                          OFFSET(getStruct<T>, {0xE0, 40, 0, 0})
	SMember(FScalableFloat)                            RampUpSpeed                                                 OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	SMember(FScalableFloat)                            RampDownSpeed                                               OFFSET(getStruct<T>, {0x130, 40, 0, 0})
	SMember(FScalableFloat)                            JumpHeightMultiplier                                        OFFSET(getStruct<T>, {0x158, 40, 0, 0})
	SMember(FGameplayTag)                              TutorialGameplayTag                                         OFFSET(getStruct<T>, {0x184, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TutorialAdditionalSourceTag                                 OFFSET(getStruct<T>, {0x188, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TutorialTargetTag                                           OFFSET(getStruct<T>, {0x1A8, 32, 0, 0})
	SMember(FGameplayTag)                              TagPreventWeaponHolster                                     OFFSET(getStruct<T>, {0x1C8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TacticalSprintFail                                          OFFSET(getStruct<T>, {0x1D0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TacticalSprintFailLowEnergy                                 OFFSET(getStruct<T>, {0x1F0, 32, 0, 0})
	CMember(USoundBase*)                               OnEnergyFullyDrainedSound                                   OFFSET(get<T>, {0x210, 8, 0, 0})
	SMember(FGameplayTag)                              TacticalBehaviorTag                                         OFFSET(getStruct<T>, {0x218, 4, 0, 0})
	DMember(float)                                     MinSpeedForHolster                                          OFFSET(get<float>, {0x21C, 4, 0, 0})
	DMember(float)                                     HolsterTimeAttemptDelay                                     OFFSET(get<float>, {0x220, 4, 0, 0})
	DMember(float)                                     MinEnergyToActivate                                         OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(bool)                                      bIsCancelledBySliding                                       OFFSET(get<bool>, {0x238, 1, 0, 0})
	SMember(FScalableFloat)                            MinEnergyToActivateRow                                      OFFSET(getStruct<T>, {0x240, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnStart                                        OFFSET(getStruct<T>, {0x268, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostPerSecond                                      OFFSET(getStruct<T>, {0x290, 40, 0, 0})
	SMember(FScalableFloat)                            HF_EnergyCostOnJump                                         OFFSET(getStruct<T>, {0x2B8, 40, 0, 0})
	SMember(FGameplayTag)                              IgnoreJumpCostTag                                           OFFSET(getStruct<T>, {0x2E0, 4, 0, 0})
	SMember(FGameplayTag)                              TacticalSprintTag                                           OFFSET(getStruct<T>, {0x2E4, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyUseIdentifier                                         OFFSET(getStruct<T>, {0x2E8, 4, 0, 0})
	CMember(USoundMix*)                                SprintStartedSoundMix                                       OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(USoundBase*)                               SprintStartedSound2D                                        OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(FScalableFloat)                            HF_TacSprintEnabled                                         OFFSET(getStruct<T>, {0x308, 40, 0, 0})
	CMember(UClass*)                                   CameraMode                                                  OFFSET(get<T>, {0x338, 8, 0, 0})
	SMember(FGameplayTag)                              CameraModeTag                                               OFFSET(getStruct<T>, {0x340, 4, 0, 0})


	/// Functions
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnReloadCanceling
	// void HandleOnReloadCanceling();                                                                                          // [0x9fea65c] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPlayerWeaponChanged
	// void HandleOnPlayerWeaponChanged(AFortPawn* InPawn, AFortWeapon* InNewWeapon, AFortWeapon* InPlayerWeapon);              // [0x9fea574] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnPawnJump
	// void HandleOnPawnJump();                                                                                                 // [0x9fea55c] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnteredEditMode
	// void HandleOnEnteredEditMode();                                                                                          // [0x9fea544] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnterAircraft
	// void HandleOnEnterAircraft();                                                                                            // [0x9fea52c] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleOnEnergyDrained
	// void HandleOnEnergyDrained(UFortComponent_Energy* EnergyComp);                                                           // [0x9fea4b0] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleMovementModeChanged
	// void HandleMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PreviousMovementMode, char PreviousCustomMode); // [0x9fea3cc] Final|Native|Public  
	// Function /Script/TacticalSprintRuntime.FortMovementMode_ELTacSprint.HandleFailedToSprint
	// void HandleFailedToSprint();                                                                                             // [0x9fea3b8] Final|Native|Public  
};

/// Class /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint
/// Size: 0x0150 (0x0000A0 - 0x0001F0)
class UFortPlayerControllerComponent_TacticalSprint : public UControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(UClass*)                                   MovementModeExtension                                       OFFSET(get<T>, {0xB8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFailedToSprint                                            OFFSET(getStruct<T>, {0xC0, 16, 0, 0})
	CMember(AFortPlayerPawn*)                          CurrentBoundPlayerPawn                                      OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bTacticalSprintEnabled                                      OFFSET(get<bool>, {0xD8, 1, 1, 0})
	DMember(bool)                                      bWantsToTacticalSprint                                      OFFSET(get<bool>, {0xD8, 1, 1, 1})
	DMember(bool)                                      bHandlingMoveForward                                        OFFSET(get<bool>, {0xD8, 1, 1, 2})
	DMember(bool)                                      bIsSprinting                                                OFFSET(get<bool>, {0xD8, 1, 1, 3})
	DMember(bool)                                      bWasInBuildMode                                             OFFSET(get<bool>, {0xD8, 1, 1, 4})
	DMember(bool)                                      bFireAnalyticsEventOnEndPlay                                OFFSET(get<bool>, {0xD8, 1, 1, 5})
	SMember(FGameplayTag)                              TacticalSprintAbilityGameplayTag                            OFFSET(getStruct<T>, {0xDC, 4, 0, 0})
	SMember(FGameplayTag)                              DisableTacticalSprintAbilityGameplayTag                     OFFSET(getStruct<T>, {0xE0, 4, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintEnabled                                       OFFSET(getStruct<T>, {0xE8, 40, 0, 0})
	SMember(FScalableFloat)                            TacticalSprintToggleGracePeriod                             OFFSET(getStruct<T>, {0x110, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTacticalSprintStarted                                     OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTacticalSprintEnded                                       OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	DMember(bool)                                      bUseMovementModeExtension                                   OFFSET(get<bool>, {0x158, 1, 0, 0})
	SMember(FTimerHandle)                              StopWantingToSprintTimerReceipt                             OFFSET(getStruct<T>, {0x160, 8, 0, 0})
	CMember(UInputComponent*)                          InputComponent                                              OFFSET(get<T>, {0x1D0, 8, 0, 0})


	/// Functions
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.SetIsSprinting
	// void SetIsSprinting(bool bNewIsSprinting);                                                                               // [0x9feb1c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate();                                                                                   // [0x9feb1b4] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.PushCustomMovementModeExtensionClass
	// void PushCustomMovementModeExtensionClass(UClass* NewCustomMMExtensionClass);                                            // [0x9feb0fc] Final|Native|Public|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.PopCustomMovementModeExtensionClass
	// void PopCustomMovementModeExtensionClass();                                                                              // [0x9feb0b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnWeaponEquipped
	// void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PreviousWeapon);                                              // [0x9feaff4] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);                                         // [0x9feaefc] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnPawnChanged
	// void OnPawnChanged(AFortPawn* InPawn);                                                                                   // [0x9feae60] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0x9feae4c] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnMovementModeChanged
	// void OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode); // [0x9fead50] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.OnAutoRunChanged
	// void OnAutoRunChanged(bool bAutoRunIsOn);                                                                                // [0x9feacd0] Final|Native|Private 
	// Function /Script/TacticalSprintRuntime.FortPlayerControllerComponent_TacticalSprint.LogAndVisualLog
	// void LogAndVisualLog(UObject* LoggingSource, ESprintLoggingVerbosityLevel Verbosity, FString& LogString);                // [0x9fea674] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/TacticalSprintRuntime.FortMovementMode_TacSprintRuntimeData
/// Size: 0x0030 (0x000010 - 0x000040)
class FFortMovementMode_TacSprintRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

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

