
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
	SMember(FMulticastInlineDelegate)                  OnEnergyCompletelyDrained                                   ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyRechargeComplete                                    ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FGameplayTagQuery)                         RechargeDisabledQuery                                       ___ OFFSET(get<T>, {0xC0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         EnergyUseDisabledQuery                                      ___ OFFSET(get<T>, {0x118, 72, 0, 0})
	SMember(FTimerHandle)                              BeginRechargeTimerHandle                                    ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FGameplayTagContainer)                     EnergyTypeIdentifierTagContainer                            ___ OFFSET(get<T>, {0x168, 32, 0, 0})
	DMember(float)                                     CurrentEnergy                                               ___ OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     NetEnergyDeltaPerSecond                                     ___ OFFSET(get<float>, {0x18C, 4, 0, 0})
	SMember(FScalableFloat)                            MaxEnergy                                                   ___ OFFSET(get<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            MinEnergyForUsing                                           ___ OFFSET(get<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            RechargeAmountPerSecond                                     ___ OFFSET(get<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            RechargeDelayInSeconds                                      ___ OFFSET(get<T>, {0x210, 40, 0, 0})
	SMember(FScalableFloat)                            RechargePercentageLimit                                     ___ OFFSET(get<T>, {0x238, 40, 0, 0})
	CMember(TArray<FEnergyChannelingData>)             ActiveEnergyChannels                                        ___ OFFSET(get<T>, {0x260, 16, 0, 0})
	CMember(TArray<FEnergyChannelingData>)             NewActiveEnergyChannels                                     ___ OFFSET(get<T>, {0x270, 16, 0, 0})
	CMember(TArray<FEnergyRegenOverrideData>)          EnergyRegenOverrides                                        ___ OFFSET(get<T>, {0x280, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCurrentEnergyChanged                                      ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyRechargeBegun                                       ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyRechargeInterrupted                                 ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyReachedMax                                          ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnergyReachedMinForUsing                                  ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	DMember(bool)                                      bRechargingEnabled                                          ___ OFFSET(get<bool>, {0x2E0, 1, 1, 0})
	DMember(bool)                                      bIsRecharging                                               ___ OFFSET(get<bool>, {0x2E0, 1, 1, 1})
	DMember(bool)                                      bIsUsingEnergy                                              ___ OFFSET(get<bool>, {0x2E0, 1, 1, 2})
};

/// Struct /Script/EnergyRuntime.EnergyChannelingData
/// Size: 0x0018 (0x000000 - 0x000018)
class FEnergyChannelingData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     EnergyPerSecond                                             ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              EnergyChannelingPurposeIdentifier                           ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(UObject*)                                  OptionalEnergyChannelingSource                              ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bShouldStopApplyingNextTick                                 ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/EnergyRuntime.EnergyRegenOverrideData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEnergyRegenOverrideData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              EnergyRegenIdentifier                                       ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     RechargeAmountPerSecond                                     ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RechargeDelayInSeconds                                      ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     RechargePercentageLimit                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

