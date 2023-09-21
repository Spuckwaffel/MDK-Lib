
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DynamicUI
/// dependency: Engine
/// dependency: FortniteUI
/// dependency: ModularGameplay
/// dependency: UMG

/// Class /Script/ScoutDroneUI.FortMobileActionButtonBehaviorExtension_ScoutDroneUse
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UFortMobileActionButtonBehaviorExtension_ScoutDroneUse : public UFortMobileActionButtonBehaviorExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FGameplayTagContainer)                     ContextTagToCheck                                           OFFSET(get<T>, {0x80, 32, 0, 0})
};

/// Class /Script/ScoutDroneUI.FortMobileButtonBehaviorComponent_ScoutDronePickupItems
/// Size: 0x0030 (0x000048 - 0x000078)
class UFortMobileButtonBehaviorComponent_ScoutDronePickupItems : public UFortMobileButtonBehaviorComponent_Visibility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTagContainer)                     HoldingItemsTags                                            OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortControllerComponent_Interaction*>) InteractionComponent                            OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/ScoutDroneUI.DronePickUpIndicatorComponent
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UDronePickUpIndicatorComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UClass*)                                   ItemIndicatorType                                           OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UClass*)                                   DbnoIndicatorType                                           OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FUserWidgetPool)                           IndicatorPool                                               OFFSET(get<T>, {0xB0, 136, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneUI.DronePickUpIndicatorComponent.OnDroneDestroyed
	// void OnDroneDestroyed(AActor* DestroyedActor);                                                                           // [0x9a423a0] Final|Native|Protected 
	// Function /Script/ScoutDroneUI.DronePickUpIndicatorComponent.Init
	// void Init(AFortScoutDrone* Drone);                                                                                       // [0x9a421bc] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/ScoutDroneUI.ScoutDroneHUD
/// Size: 0x0120 (0x0002A8 - 0x0003C8)
class UScoutDroneHUD : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	DMember(float)                                     TimeToConfirmTargetCache                                    OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     InitialHealth                                               OFFSET(get<float>, {0x2AC, 4, 0, 0})
	SMember(FScalableFloat)                            WarningRange                                                OFFSET(get<T>, {0x2B0, 40, 0, 0})
	SMember(FScalableFloat)                            SignalLossRange                                             OFFSET(get<T>, {0x2D8, 40, 0, 0})
	SMember(FScalableFloat)                            UpdateSignalInterval                                        OFFSET(get<T>, {0x300, 40, 0, 0})
	SMember(FGameplayTag)                              MarkAbilityTag                                              OFFSET(get<T>, {0x328, 4, 0, 0})
	SMember(FGameplayTag)                              DismissAbilityTag                                           OFFSET(get<T>, {0x32C, 4, 0, 0})
	SMember(FGameplayTag)                              InteractAbilityTag                                          OFFSET(get<T>, {0x330, 4, 0, 0})
	SMember(FGameplayTag)                              PickUpAbilityTag                                            OFFSET(get<T>, {0x334, 4, 0, 0})
	SMember(FGameplayTag)                              PickUpTargetsChangedTag                                     OFFSET(get<T>, {0x338, 4, 0, 0})
	SMember(FGameplayTag)                              SpeedBoostAbilityTag                                        OFFSET(get<T>, {0x33C, 4, 0, 0})
	CMember(UOverlay*)                                 Overlay_Health                                              OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_EnergyLevel                                         OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Reticle                                             OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_TetheringIndicator                                  OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(float)                                     MaxHealthCache                                              OFFSET(get<float>, {0x360, 4, 0, 0})
	DMember(float)                                     MaxEnergyCache                                              OFFSET(get<float>, {0x364, 4, 0, 0})
	SMember(FTimerHandle)                              SignalDataTimerHandle                                       OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(TArray<FScoutDroneWidgetIdentifier>)       HUDIdentifiers                                              OFFSET(get<T>, {0x3B8, 16, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnTargetingStatusChanged
	// void OnTargetingStatusChanged(FScoutDroneStatusData& StatusData);                                                        // [0x1ebf994] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnReticleChangeAbilityActivated
	// void OnReticleChangeAbilityActivated(FGameplayTag UpdatedTag);                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnOwningPlayerDamaged
	// void OnOwningPlayerDamaged();                                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityUsed
	// void OnDroneSpeedBoostAbilityUsed();                                                                                     // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneSpeedBoostAbilityEnd
	// void OnDroneSpeedBoostAbilityEnd();                                                                                      // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneSignalDataUpdated
	// void OnDroneSignalDataUpdated(float DistanceFromPlayer, float SignalPercentage);                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsEmpty
	// void OnDronePickUpTargetsEmpty();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpTargetsAvailable
	// void OnDronePickUpTargetsAvailable();                                                                                    // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityUsed
	// void OnDronePickUpAbilityUsed();                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDronePickUpAbilityEnd
	// void OnDronePickUpAbilityEnd();                                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityUsed
	// void OnDroneMarkAbilityUsed();                                                                                           // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneMarkAbilityEnd
	// void OnDroneMarkAbilityEnd();                                                                                            // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityUsed
	// void OnDroneInteractAbilityUsed();                                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneInteractAbilityEnd
	// void OnDroneInteractAbilityEnd();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneHealthUpdated
	// void OnDroneHealthUpdated(float HealthPercentage, float CurrentHealth);                                                  // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneEnergyChanged
	// void OnDroneEnergyChanged(float EnergyPercentage);                                                                       // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.OnDroneDismissAbilityUsed
	// void OnDroneDismissAbilityUsed();                                                                                        // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.GetTargetConfirmationTime
	// float GetTargetConfirmationTime();                                                                                       // [0x9a42194] Final|Native|Private|BlueprintCallable 
	// Function /Script/ScoutDroneUI.ScoutDroneHUD.GetControlledDrone
	// AFortScoutDrone* GetControlledDrone();                                                                                   // [0x9a42170] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ScoutDroneUI.ScoutDroneTetherIndicator
/// Size: 0x0020 (0x0002A8 - 0x0002C8)
class UScoutDroneTetherIndicator : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/ScoutDroneUI.ScoutDroneUIDirector
/// Size: 0x0020 (0x0002B0 - 0x0002D0)
class AScoutDroneUIDirector : public ADynamicUIDirectorBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FGameplayTagContainer)                     HUDTagsToHide                                               OFFSET(get<T>, {0x2B0, 32, 0, 0})


	/// Functions
	// Function /Script/ScoutDroneUI.ScoutDroneUIDirector.BP_OnScoutDroneDismissed
	// void BP_OnScoutDroneDismissed();                                                                                         // [0x1ebf994] Event|Protected|BlueprintEvent 
	// Function /Script/ScoutDroneUI.ScoutDroneUIDirector.BP_OnScoutDroneDeployed
	// void BP_OnScoutDroneDeployed();                                                                                          // [0x1ebf994] Event|Protected|BlueprintEvent 
};

/// Struct /Script/ScoutDroneUI.ScoutDroneWidgetIdentifier
/// Size: 0x0028 (0x000000 - 0x000028)
class FScoutDroneWidgetIdentifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UWidget*>)                  WeakWdiget                                                  OFFSET(get<T>, {0x20, 8, 0, 0})
};

