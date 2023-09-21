
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ModularGameplay

/// Class /Script/EnergyRuntime.FortComponent_Energy
/// Size: 0x0248 (0x0000A0 - 0x0002E8)
class UFortComponent_Energy : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FMulticastInlineDelegate)                  OnEnergyCompletelyDrained                                   OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyRechargeComplete                                    OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FGameplayTagQuery)                         RechargeDisabledQuery                                       OFFSET(get<T>, {0xC0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         EnergyUseDisabledQuery                                      OFFSET(get<T>, {0x118, 72, 0, 0})
	SMember(FTimerHandle)                              BeginRechargeTimerHandle                                    OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FGameplayTagContainer)                     EnergyTypeIdentifierTagContainer                            OFFSET(get<T>, {0x168, 32, 0, 0})
	DMember(float)                                     CurrentEnergy                                               OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     NetEnergyDeltaPerSecond                                     OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FScalableFloat)                            MaxEnergy                                                   OFFSET(get<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            MinEnergyForUsing                                           OFFSET(get<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            RechargeAmountPerSecond                                     OFFSET(get<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            RechargeDelayInSeconds                                      OFFSET(get<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            RechargePercentageLimit                                     OFFSET(get<T>, {0x238, 40, 0, 0})
	CMember(TArray<FEnergyChannelingData>)             ActiveEnergyChannels                                        OFFSET(get<T>, {0x260, 16, 0, 0})
	CMember(TArray<FEnergyChannelingData>)             NewActiveEnergyChannels                                     OFFSET(get<T>, {0x270, 16, 0, 0})
	CMember(TArray<FEnergyRegenOverrideData>)          EnergyRegenOverrides                                        OFFSET(get<T>, {0x280, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCurrentEnergyChanged                                      OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyRechargeBegun                                       OFFSET(get<T>, {0x2A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyRechargeInterrupted                                 OFFSET(get<T>, {0x2B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyReachedMax                                          OFFSET(get<T>, {0x2C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyReachedMinForUsing                                  OFFSET(get<T>, {0x2D0, 16, 0, 0})
	DMember(bool)                                      bRechargingEnabled                                          OFFSET(get<bool>, {0x2E0, 1, 1, 0})
	DMember(bool)                                      bIsRecharging                                               OFFSET(get<bool>, {0x2E0, 1, 1, 1})
	DMember(bool)                                      bIsUsingEnergy                                              OFFSET(get<bool>, {0x2E0, 1, 1, 2})
};



	/// Functions
	// Function /Script/EnergyRuntime.FortComponent_Energy.UseEnergy
	// bool UseEnergy(float& OutAmountOfEnergyUsed, float AmountOfEnergyToUse, bool bUseEnergyEvenOnFailure, UObject* OptionalEnergyUser, bool bBroadcastEnergyPercentChanged); // [0x995a094] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.StopUsingEnergy
	// bool StopUsingEnergy(FGameplayTag& EnergyUseIdentifier, UObject* OptionalEnergyUser);                                    // [0x9959f54] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.StopAddingEnergy
	// bool StopAddingEnergy(FGameplayTag& EnergyUseIdentifier, UObject* OptionalEnergySource);                                 // [0x9959d9c] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.StartUsingEnergy
	// bool StartUsingEnergy(float EnergyToUseToStart, float EnergyToUsePerSecond, FGameplayTag& EnergyUseIdentifier, UObject* OptionalEnergyUser); // [0x9959bd8] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.StartAddingEnergy
	// bool StartAddingEnergy(float EnergyToAddPerSecond, FGameplayTag& EnergySourceIdentifier, UObject* OptionalEnergySource); // [0x9959a58] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.SetAllEnergyUsageFree
	// bool SetAllEnergyUsageFree(bool bShouldEnergyUsageBeFree);                                                               // [0x7c1678c] Final|Native|Public|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.RemoveRegenDataOverride
	// bool RemoveRegenDataOverride(FGameplayTag& RegenOverrideIdentifier);                                                     // [0x99599b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.RegisterMutatorUpdatedDelegate
	// void RegisterMutatorUpdatedDelegate(APawn* AffectedPawn);                                                                // [0x99597f0] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.OnPlayerStatePawnSet
	// void OnPlayerStatePawnSet(APlayerState* Player, APawn* NewPawn, APawn* OldPawn);                                         // [0x2c1dae4] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.OnMutatorUpdated
	// void OnMutatorUpdated();                                                                                                 // [0x99597dc] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.HasSufficientEnergy
	// bool HasSufficientEnergy(float EnergyAmountToTest);                                                                      // [0x995974c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnergyRuntime.FortComponent_Energy.HandleAbilitySystemComponentInvalidated
	// void HandleAbilitySystemComponentInvalidated();                                                                          // [0x3417238] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.HandleAbilitySystemComponentInitialized
	// void HandleAbilitySystemComponentInitialized(UFortAbilitySystemComponent* AbilitySystemComponent, AFortPlayerPawn* PlayerPawn); // [0x1fcea4c] Final|Native|Private 
	// Function /Script/EnergyRuntime.FortComponent_Energy.GetCurrentEnergyPercentage
	// float GetCurrentEnergyPercentage();                                                                                      // [0x1fccdb4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/EnergyRuntime.FortComponent_Energy.ApplyRegenDataOverride
	// void ApplyRegenDataOverride(FGameplayTag& RegenOverrideIdentifier, float NewRechargeAmountPerSecond, float NewRechargeDelayInSeconds, float NewRechargePercentageLimit); // [0x99594c4] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/EnergyRuntime.FortComponent_Energy.AddEnergy
	// bool AddEnergy(float& OutAmountOfEnergyAdded, float AmountOfEnergyToAdd, UObject* OptionalEnergySource, bool bBroadcastEnergyPercentChanged); // [0x995923c] Final|Native|Public|HasOutParms|BlueprintCallable 
/// Struct /Script/EnergyRuntime.EnergyChannelingData
/// Size: 0x0018 (0x000000 - 0x000018)
class FEnergyChannelingData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     EnergyPerSecond                                             OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyChannelingPurposeIdentifier                           OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(UObject*)                                  OptionalEnergyChannelingSource                              OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bShouldStopApplyingNextTick                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/EnergyRuntime.EnergyRegenOverrideData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEnergyRegenOverrideData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              EnergyRegenIdentifier                                       OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     RechargeAmountPerSecond                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RechargeDelayInSeconds                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RechargePercentageLimit                                     OFFSET(get<float>, {0xC, 4, 0, 0})
};
