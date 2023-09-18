/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DynamicRollTablesRuntime.

/// Struct /Script/DynamicRollTablesRuntime.FortDynamicRollResult
/// Size: 0x0008 (0x000000 - 0x000008)
class FFortDynamicRollResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(UFortItemDefinition*)                      Item                                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/DynamicRollTablesRuntime.FortDynamicRollBaseWeightTableRow
/// Size: 0x0030 (0x000008 - 0x000038)
class FFortDynamicRollBaseWeightTableRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortItemDefinition*)                      ItemDefinition                                              ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     BaseWeight                                                  ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      ModTags                                                     ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bOwningItemZerosWeight                                      ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     MaxModifiedWeight                                           ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MinModifiedWeight                                           ___ OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/DynamicRollTablesRuntime.FortDynamicRollWeightModifierTableRow
/// Size: 0x0010 (0x000008 - 0x000018)
class FFortDynamicRollWeightModifierTableRow : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              ActivatingPlayerTag                                         ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FGameplayTag)                              TargetModTag                                                ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	CMember(ERollModifierOperation)                    WeightModifierOperation                                     ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	DMember(float)                                     WeightModificationValue                                     ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/DynamicRollTablesRuntime.DynamicRollModifiersActivatedByPlayerTagContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FDynamicRollModifiersActivatedByPlayerTagContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Class /Script/DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent
/// Size: 0x00F8 (0x0000A8 - 0x0001A0)
class UFortControllerComponent_DynamicRollPlayerComponent : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(UClass*)                                   AssociatedManagerClass                                      ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FScalableFloat)                            Enabled                                                     ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	CMember(UFortGamestateComponent_DynamicRollTableManager*) TableManager                                         ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FRandomStream)                             SeededRNG                                                   ___ OFFSET(get<T>, {0x144, 8, 0, 0})
};

/// Class /Script/DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager
/// Size: 0x0238 (0x0000A0 - 0x0002D8)
class UFortGamestateComponent_DynamicRollTableManager : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	SMember(FDataRegistryType)                         DataRegistryType_BaseWeights                                ___ OFFSET(get<T>, {0xD0, 4, 0, 0})
	SMember(FDataRegistryType)                         DataRegistryType_WeightModifiers                            ___ OFFSET(get<T>, {0xD4, 4, 0, 0})
	SMember(FScalableFloat)                            Enabled                                                     ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
};

/// Enum /Script/DynamicRollTablesRuntime.ERollModifierOperation
/// Size: 0x04
enum ERollModifierOperation : uint8_t
{
	ERollModifierOperation__Add0                                                     = 0,
	ERollModifierOperation__Multiply1                                                = 1,
	ERollModifierOperation__Zero2                                                    = 2,
	ERollModifierOperation__ERollModifierOperation_MAX3                              = 3
};

