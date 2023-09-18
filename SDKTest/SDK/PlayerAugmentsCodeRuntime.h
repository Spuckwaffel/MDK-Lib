/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package PlayerAugmentsCodeRuntime.

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentPassiveUnlockResult
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortAugmentPassiveUnlockResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UFortPlayerAugmentItemDefinition*)         UnlockedAugment                                             ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bAlreadyInInventory                                         ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentLockStatus
/// Size: 0x0018 (0x000000 - 0x000018)
class FPlayerAugmentLockStatus : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UFortPlayerAugmentItemDefinition*)         PlayerAugmentItemDefinition                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bIsLocked                                                   ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bWasCollectedInThisMatch                                    ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	CMember(AFortPlayerStateAthena*)                   SharedFromPlayer                                            ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentChoiceDatum
/// Size: 0x0028 (0x000000 - 0x000028)
class FPlayerAugmentChoiceDatum : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UFortPlayerAugmentItemDefinition*)         ItemDef                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ChoiceMetaTags                                              ___ OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentRerollCost
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortAugmentRerollCost : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UFortItemDefinition*)                      ResourceCurrency                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            Amount                                                      ___ OFFSET(get<T>, {0x8, 40, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentTrackedData
/// Size: 0x0028 (0x000000 - 0x000028)
class FPlayerAugmentTrackedData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FFortAbilitySetHandle>)             AbilitySetHandles                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FPlayerAugmentGameplayEffectHandlesStackEntry>) GEHandlesStack                                  ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.PlayerAugmentGameplayEffectHandlesStackEntry
/// Size: 0x0010 (0x000000 - 0x000010)
class FPlayerAugmentGameplayEffectHandlesStackEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FActiveGameplayEffectHandle>)       GEHandles                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.CarryOverPlayerAugment
/// Size: 0x000C (0x000000 - 0x00000C)
class FCarryOverPlayerAugment : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FPrimaryAssetId)                           AugmentAssetId                                              ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     SourcePlaylistName                                          ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.ReplicatedSharedPlayerAugment
/// Size: 0x000C (0x000000 - 0x00000C)
class FReplicatedSharedPlayerAugment : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   PlayerAugmentIndex                                          ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerStateAthena*>)   SharedFromPlayer                                            ___ OFFSET(get<T>, {0x4, 8, 0, 0})
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentBaseWeightTableRow
/// Size: 0x0000 (0x000038 - 0x000038)
class FFortAugmentBaseWeightTableRow : public FFortDynamicRollBaseWeightTableRow
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortAugmentWeightModificationDataRow
/// Size: 0x0000 (0x000018 - 0x000018)
class FFortAugmentWeightModificationDataRow : public FFortDynamicRollWeightModifierTableRow
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/PlayerAugmentsCodeRuntime.FortMcpCollectedPlayerAugmentProperties
/// Size: 0x0001 (0x000000 - 0x000001)
class FFortMcpCollectedPlayerAugmentProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortAthenaAIBotEvaluator_Augments
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UFortAthenaAIBotEvaluator_Augments : public UFortAthenaAIBotEvaluator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FGameplayTag)                              InjectionTag                                                ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(UBehaviorTree*)                            BehaviorAsset                                               ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FName)                                     AugmentStatusKeyName                                        ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     AugmentItemKeyName                                          ___ OFFSET(get<T>, {0xBC, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortAthenaBTTask_Augments
/// Size: 0x0018 (0x000070 - 0x000088)
class UFortAthenaBTTask_Augments : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(float)                                     MinSelectionTime                                            ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     MaxSelectionTime                                            ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	SMember(FName)                                     AugmentStatusKeyName                                        ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FName)                                     AugmentItemKeyName                                          ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortAugmentSelectionToolAbility
/// Size: 0x0078 (0x000B28 - 0x000BA0)
class UFortAugmentSelectionToolAbility : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
	CMember(UInputComponent*)                          SelectionInputComponent                                     ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FScalableFloat)                            InputPriority                                               ___ OFFSET(get<T>, {0xB30, 40, 0, 0})
	DMember(int32_t)                                   NumChoices                                                  ___ OFFSET(get<int32_t>, {0xB58, 4, 0, 0})
	DMember(int32_t)                                   HighlightedChoiceIndex                                      ___ OFFSET(get<int32_t>, {0xB5C, 4, 0, 0})
	SMember(FScalableFloat)                            RerollHoldInputSeconds                                      ___ OFFSET(get<T>, {0xB70, 40, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortBattleRoyalePlayerAugmentSystem
/// Size: 0x00A0 (0x0000A8 - 0x000148)
class UFortBattleRoyalePlayerAugmentSystem : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(float)                                     ServerGrantingStartedTimestamp                              ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMatchAugmentsResetEvent                                   ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bEnableAugmentCollectionUnlocking                           ___ OFFSET(get<bool>, {0xC0, 1, 0, 0})
	SMember(FScalableFloat)                            NumRollsForUnlock                                           ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            EnableUnlocking                                             ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            EnableBRAugmentSystem                                       ___ OFFSET(get<T>, {0x120, 40, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortCollectionDataEntryPlayerAugment
/// Size: 0x0020 (0x000030 - 0x000050)
class UFortCollectionDataEntryPlayerAugment : public UFortCollectionDataEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UFortPlayerAugmentItemDefinition*)         PlayerAugmentItemDefinition                                 ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FText)                                     AdditionalDescription                                       ___ OFFSET(get<T>, {0x38, 24, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortCollectionDataPlayerAugment
/// Size: 0x0000 (0x000090 - 0x000090)
class UFortCollectionDataPlayerAugment : public UFortCollectionData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortContextualTutorial_MultipleAugmentsQueued
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UFortContextualTutorial_MultipleAugmentsQueued : public UFortContextualTutorial
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentGrantingSystem
/// Size: 0x0520 (0x0000A8 - 0x0005C8)
class UFortControllerComponent_AugmentGrantingSystem : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1480;

public:
	SMember(FMulticastInlineDelegate)                  OnCanSelectAugmentChanged                                   ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSelectedAugmentForGrant                                   ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAvailableAugmentsForGrantingUpdated                       ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAuthorityRequestAugmentChoices                            ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLocalReroll                                               ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnReplicateNumPendingAugmentsToGrant                        ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(UFortWeaponItemDefinition*)                AugmentSelectionModeItem                                    ___ OFFSET(get<T>, {0x128, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      CachedResourceCurrencyOverride                              ___ OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(UFortWorldItem*)                           SelectionModeWorldItem                                      ___ OFFSET(get<T>, {0x138, 8, 0, 0})
	SMember(FScalableFloat)                            Enabled                                                     ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	DMember(int8_t)                                    ReplicatedNumPendingAugmentsToGrant                         ___ OFFSET(get<int8_t>, {0x168, 1, 0, 0})
	CMember(TArray<FPlayerAugmentChoiceDatum>)         ReplicatedAugmentChoices                                    ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(int8_t)                                    NumFreeRerolls                                              ___ OFFSET(get<int8_t>, {0x180, 1, 0, 0})
	DMember(int8_t)                                    NumLockedSelectionChoices                                   ___ OFFSET(get<int8_t>, {0x181, 1, 0, 0})
	CMember(UInputComponent*)                          PrimaryInputComponentWeaponMode                             ___ OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(UInputComponent*)                          PrimaryInputComponentBuildMode                              ___ OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(UInputComponent*)                          TemporaryInputComponent                                     ___ OFFSET(get<T>, {0x198, 8, 0, 0})
	SMember(FScalableFloat)                            AugmentSelectInputPriority                                  ___ OFFSET(get<T>, {0x1A0, 40, 0, 0})
	SMember(FGameplayTagContainer)                     SelectionBlockedPlayerTags                                  ___ OFFSET(get<T>, {0x1C8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AugmentSelectInputDisablePlayerTags                         ___ OFFSET(get<T>, {0x1E8, 32, 0, 0})
	CMember(TArray<FFortAugmentRerollCost>)            RerollCosts                                                 ___ OFFSET(get<T>, {0x230, 16, 0, 0})
	SMember(FFortItemEntry)                            SelectorItemEntry                                           ___ OFFSET(get<T>, {0x240, 408, 0, 0})
	SMember(FFortItemEntry)                            LocalCachedPreviousWeapon                                   ___ OFFSET(get<T>, {0x3D8, 408, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.AugmentFuctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAugmentFuctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentUIEvents
/// Size: 0x00A8 (0x0000A8 - 0x000150)
class UFortControllerComponent_AugmentUIEvents : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FMulticastInlineDelegate)                  OnAugmentSelectorHighlightedChoice                          ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentStartedSelectionOfChoice                           ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentGrantingTimersFinishedForMatch                     ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentGrantingTimersResetForMatch                        ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AugmentHoldInputRerollChanged                               ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAugmentToolViewSwap                                       ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	DMember(int32_t)                                   NumAugmentGrantRoundsForPlaylist                            ___ OFFSET(get<int32_t>, {0x140, 4, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_PlayerAugmentPersistence
/// Size: 0x0118 (0x0000A8 - 0x0001C0)
class UFortControllerComponent_PlayerAugmentPersistence : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FScalableFloat)                            Enabled                                                     ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            LockMissingCollectionAugmentsEnabled                        ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	CMember(AFortPlayerControllerAthena*)              PlayerController                                            ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(UFortCollectionDataPlayerAugment*)         CollectionData                                              ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FPlayerAugmentsPersistenceData)            LivePlayerAugmentsPersistenceData                           ___ OFFSET(get<T>, {0x108, 24, 0, 0})
	CMember(TSet<UFortPlayerAugmentItemDefinition*>)   AugmentsCollectedThisMatch                                  ___ OFFSET(get<T>, {0x120, 80, 0, 0})
	CMember(TArray<FReplicatedSharedPlayerAugment>)    ReplicatedSharedPlayerAugments                              ___ OFFSET(get<T>, {0x170, 16, 0, 0})
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortGamestateComponent_AugmentTableManager
/// Size: 0x0050 (0x0002D8 - 0x000328)
class UFortGamestateComponent_AugmentTableManager : public UFortGamestateComponent_DynamicRollTableManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortControllerComponent_AugmentDynamicRollPlayerComponent
/// Size: 0x0000 (0x0001A0 - 0x0001A0)
class UFortControllerComponent_AugmentDynamicRollPlayerComponent : public UFortControllerComponent_DynamicRollPlayerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortMcpCollectionPlayerAugment
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UFortMcpCollectionPlayerAugment : public UFortMcpCollectionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortPlayerAugmentCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortPlayerAugmentCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/PlayerAugmentsCodeRuntime.FortPlayerStateComponent_PlayerAugmentSystem
/// Size: 0x0108 (0x0000A0 - 0x0001A8)
class UFortPlayerStateComponent_PlayerAugmentSystem : public UFortPlayerStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	SMember(FMulticastInlineDelegate)                  OnAugmentListUpdated                                        ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FScalableFloat)                            EnableAugmentsFeature                                       ___ OFFSET(get<T>, {0xC8, 40, 0, 0})
	CMember(UClass*)                                   DynamicTagGEClass                                           ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TMap<FPrimaryAssetId, FPlayerAugmentTrackedData>) AugmentToRuntimeDataMap                              ___ OFFSET(get<T>, {0xF8, 80, 0, 0})
	CMember(TArray<UFortPlayerAugmentItemDefinition*>) ActiveAugments                                              ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TMap<FGameplayTag, double>)                RuntimeAugmentMatchDataCacheFloat                           ___ OFFSET(get<T>, {0x158, 80, 0, 0})
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EBattleRoyaleBPAugmentLogVerbosity
/// Size: 0x03
enum EBattleRoyaleBPAugmentLogVerbosity : uint8_t
{
	EBattleRoyaleBPAugmentLogVerbosity__Log0                                         = 0,
	EBattleRoyaleBPAugmentLogVerbosity__Verbose1                                     = 1,
	EBattleRoyaleBPAugmentLogVerbosity__EBattleRoyaleBPAugmentLogVerbosity_MAX2      = 2
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EFortBRAugmentSystemCastResult
/// Size: 0x03
enum EFortBRAugmentSystemCastResult : uint8_t
{
	EFortBRAugmentSystemCastResult__Valid0                                           = 0,
	EFortBRAugmentSystemCastResult__Invalid1                                         = 1,
	EFortBRAugmentSystemCastResult__EFortBRAugmentSystemCastResult_MAX2              = 2
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EAugmentHoldInputRerollState
/// Size: 0x03
enum EAugmentHoldInputRerollState : uint8_t
{
	EAugmentHoldInputRerollState__Pressed0                                           = 0,
	EAugmentHoldInputRerollState__Released1                                          = 1,
	EAugmentHoldInputRerollState__EAugmentHoldInputRerollState_MAX2                  = 2
};

/// Enum /Script/PlayerAugmentsCodeRuntime.EAugmentExecResult
/// Size: 0x03
enum EAugmentExecResult : uint8_t
{
	EAugmentExecResult__Success0                                                     = 0,
	EAugmentExecResult__Failure1                                                     = 1,
	EAugmentExecResult__EAugmentExecResult_MAX2                                      = 2
};

