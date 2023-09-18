/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package ScoutDroneUI.

/// Struct /Script/ScoutDroneUI.ScoutDroneWidgetIdentifier
/// Size: 0x0028 (0x000000 - 0x000028)
class FScoutDroneWidgetIdentifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UWidget*>)                  WeakWdiget                                                  ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Class /Script/ScoutDroneUI.FortMobileActionButtonBehaviorExtension_ScoutDroneUse
/// Size: 0x0020 (0x000080 - 0x0000A0)
class UFortMobileActionButtonBehaviorExtension_ScoutDroneUse : public UFortMobileActionButtonBehaviorExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FGameplayTagContainer)                     ContextTagToCheck                                           ___ OFFSET(get<T>, {0x80, 32, 0, 0})
};

/// Class /Script/ScoutDroneUI.FortMobileButtonBehaviorComponent_ScoutDronePickupItems
/// Size: 0x0030 (0x000048 - 0x000078)
class UFortMobileButtonBehaviorComponent_ScoutDronePickupItems : public UFortMobileButtonBehaviorComponent_Visibility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FGameplayTagContainer)                     HoldingItemsTags                                            ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TWeakObjectPtr<UFortControllerComponent_Interaction*>) InteractionComponent                            ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/ScoutDroneUI.DronePickUpIndicatorComponent
/// Size: 0x00B8 (0x0000A0 - 0x000158)
class UDronePickUpIndicatorComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	CMember(UClass*)                                   ItemIndicatorType                                           ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UClass*)                                   DbnoIndicatorType                                           ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FUserWidgetPool)                           IndicatorPool                                               ___ OFFSET(get<T>, {0xB0, 136, 0, 0})
};

/// Class /Script/ScoutDroneUI.ScoutDroneHUD
/// Size: 0x0120 (0x0002A8 - 0x0003C8)
class UScoutDroneHUD : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	DMember(float)                                     TimeToConfirmTargetCache                                    ___ OFFSET(get<float>, {0x2A8, 4, 0, 0})
	DMember(float)                                     InitialHealth                                               ___ OFFSET(get<float>, {0x2AC, 4, 0, 0})
	SMember(FScalableFloat)                            WarningRange                                                ___ OFFSET(get<T>, {0x2B0, 40, 0, 0})
	SMember(FScalableFloat)                            SignalLossRange                                             ___ OFFSET(get<T>, {0x2D8, 40, 0, 0})
	SMember(FScalableFloat)                            UpdateSignalInterval                                        ___ OFFSET(get<T>, {0x300, 40, 0, 0})
	SMember(FGameplayTag)                              MarkAbilityTag                                              ___ OFFSET(get<T>, {0x328, 4, 0, 0})
	SMember(FGameplayTag)                              DismissAbilityTag                                           ___ OFFSET(get<T>, {0x32C, 4, 0, 0})
	SMember(FGameplayTag)                              InteractAbilityTag                                          ___ OFFSET(get<T>, {0x330, 4, 0, 0})
	SMember(FGameplayTag)                              PickUpAbilityTag                                            ___ OFFSET(get<T>, {0x334, 4, 0, 0})
	SMember(FGameplayTag)                              PickUpTargetsChangedTag                                     ___ OFFSET(get<T>, {0x338, 4, 0, 0})
	SMember(FGameplayTag)                              SpeedBoostAbilityTag                                        ___ OFFSET(get<T>, {0x33C, 4, 0, 0})
	CMember(UOverlay*)                                 Overlay_Health                                              ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_EnergyLevel                                         ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_Reticle                                             ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_TetheringIndicator                                  ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(float)                                     MaxHealthCache                                              ___ OFFSET(get<float>, {0x360, 4, 0, 0})
	DMember(float)                                     MaxEnergyCache                                              ___ OFFSET(get<float>, {0x364, 4, 0, 0})
	SMember(FTimerHandle)                              SignalDataTimerHandle                                       ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(TArray<FScoutDroneWidgetIdentifier>)       HUDIdentifiers                                              ___ OFFSET(get<T>, {0x3B8, 16, 0, 0})
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
	SMember(FGameplayTagContainer)                     HUDTagsToHide                                               ___ OFFSET(get<T>, {0x2B0, 32, 0, 0})
};

