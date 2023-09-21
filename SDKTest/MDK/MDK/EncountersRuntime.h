
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayStateTreeModule
/// dependency: LagerRuntime
/// dependency: McpProfileSys
/// dependency: ModularGameplay
/// dependency: PlayspaceSystem
/// dependency: StateTreeModule

/// Class /Script/EncountersRuntime.EncounterMobAnchor
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AEncounterMobAnchor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FGameplayTagContainer)                     FilterTags                                                  ___ OFFSET(get<T>, {0x290, 32, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterMobManagerComponent
/// Size: 0x0178 (0x0000A0 - 0x000218)
class UEncounterMobManagerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(TArray<FEncounterMobInstance>)             SpawnedMobs                                                 ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FEncounterMobSpawnData>)            MobEncounterSpawnData                                       ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FEncounterMobSpawnInfo)                    DefaultMobSpawnInfo                                         ___ OFFSET(get<T>, {0xC0, 160, 0, 0})
	SMember(FScalableFloat)                            LWMDensityWeight                                            ___ OFFSET(get<T>, {0x160, 40, 0, 0})
	SMember(FScalableFloat)                            LWMDensityRange                                             ___ OFFSET(get<T>, {0x188, 40, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterStarted                                          ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterPaused                                           ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterResumed                                          ___ OFFSET(get<T>, {0x1D0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterActorSpawned                                     ___ OFFSET(get<T>, {0x1E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterActorDead                                        ___ OFFSET(get<T>, {0x1F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEncounterEnded                                            ___ OFFSET(get<T>, {0x200, 16, 0, 0})
	CMember(TWeakObjectPtr<ALivingWorldEncounterPrefab*>) EncounterPrefab                                          ___ OFFSET(get<T>, {0x210, 8, 0, 0})
};

/// Class /Script/EncountersRuntime.StartLWMEncounterDelegateHandler
/// Size: 0x0008 (0x000028 - 0x000030)
class UStartLWMEncounterDelegateHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/EncountersRuntime.EncounterActorSpawnerData
/// Size: 0x0038 (0x000050 - 0x000088)
class UEncounterActorSpawnerData : public UFortAthenaActorSpawnerData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FEncounterPrefabEntry)                     EncounterEntry                                              ___ OFFSET(get<T>, {0x50, 56, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEncounterBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EncountersRuntime.EncounterGameplayVolume
/// Size: 0x0078 (0x000330 - 0x0003A8)
class AEncounterGameplayVolume : public AGameplayVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	DMember(bool)                                      bShouldPersist                                              ___ OFFSET(get<bool>, {0x348, 1, 0, 0})
	SMember(FGuid)                                     SavedActorGuid                                              ___ OFFSET(get<T>, {0x368, 16, 0, 0})
	CMember(UEncounterStateTreeComponent*)             EncounterStateTreeComponent                                 ___ OFFSET(get<T>, {0x378, 8, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterItem
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UEncounterItem : public UFortItem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UEncounterItemDefinition*)                 EncounterItemDefinition                                     ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TWeakObjectPtr<ALivingWorldEncounterPrefab*>) EncounterPrefab                                          ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(TWeakObjectPtr<UEncounterManagerComponent*>) EncounterManager                                          ___ OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterItemDefinition
/// Size: 0x0138 (0x000378 - 0x0004B0)
class UEncounterItemDefinition : public UFortItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	DMember(bool)                                      bAutoHandleSuccessFailure                                   ___ OFFSET(get<bool>, {0x378, 1, 0, 0})
	CMember(TWeakObjectPtr<UWorld*>)                   Level                                                       ___ OFFSET(get<T>, {0x380, 32, 0, 0})
	CMember(UStateTree*)                               StateTreeOverride                                           ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	SMember(FGameplayCueTag)                           ProximityGameplayCueTag                                     ___ OFFSET(get<T>, {0x3A8, 4, 0, 0})
	SMember(FGameplayCueTag)                           ActorCleanupGameplayCueTag                                  ___ OFFSET(get<T>, {0x3AC, 4, 0, 0})
	CMember(TArray<FName>)                             SuccessRewards                                              ___ OFFSET(get<T>, {0x3B0, 16, 0, 0})
	SMember(FEncounterRewardBehavior)                  SuccessRewardBehavior                                       ___ OFFSET(get<T>, {0x3C0, 56, 0, 0})
	SMember(FGameplayCueTag)                           ActorSuccessGameplayCueTag                                  ___ OFFSET(get<T>, {0x3F8, 4, 0, 0})
	SMember(FGameplayCueTag)                           PlayerSuccessGameplayCueTag                                 ___ OFFSET(get<T>, {0x3FC, 4, 0, 0})
	CMember(TArray<FName>)                             FailureRewards                                              ___ OFFSET(get<T>, {0x400, 16, 0, 0})
	SMember(FEncounterRewardBehavior)                  FailureRewardBehavior                                       ___ OFFSET(get<T>, {0x410, 56, 0, 0})
	SMember(FGameplayCueTag)                           ActorFailureGameplayCueTag                                  ___ OFFSET(get<T>, {0x448, 4, 0, 0})
	SMember(FGameplayCueTag)                           PlayerFailureGameplayCueTag                                 ___ OFFSET(get<T>, {0x44C, 4, 0, 0})
	SMember(FScalableFloat)                            LWMDensityWeight                                            ___ OFFSET(get<T>, {0x450, 40, 0, 0})
	SMember(FScalableFloat)                            LWMDensityRange                                             ___ OFFSET(get<T>, {0x478, 40, 0, 0})
	CMember(TArray<FInstancedStruct>)                  Vars                                                        ___ OFFSET(get<T>, {0x4A0, 16, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterManagerComponent
/// Size: 0x0068 (0x0000A0 - 0x000108)
class UEncounterManagerComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TWeakObjectPtr<AEncounterGameplayVolume*>) EncounterVolume                                             ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   CenterActorOverride                                         ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TSet<APlayerController*>)                  ExplicitContributors                                        ___ OFFSET(get<T>, {0xB0, 80, 0, 0})
	CMember(TWeakObjectPtr<UEncounterItem*>)           EncounterItem                                               ___ OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Class /Script/EncountersRuntime.EncounterStateTreeComponent
/// Size: 0x0000 (0x000148 - 0x000148)
class UEncounterStateTreeComponent : public UStateTreeComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

/// Class /Script/EncountersRuntime.LivingWorldEncounterPrefab
/// Size: 0x0060 (0x000918 - 0x000978)
class ALivingWorldEncounterPrefab : public AFortAthenaLivingWorldPrefab
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2424;

public:
	CMember(TArray<FEncounterPrefabEntry>)             EncounterEntries                                            ___ OFFSET(get<T>, {0x958, 16, 0, 0})
	CMember(UEncounterItem*)                           EncounterItem                                               ___ OFFSET(get<T>, {0x968, 8, 0, 0})
	CMember(TWeakObjectPtr<UEncounterItemDefinition*>) EncounterDefinition                                         ___ OFFSET(get<T>, {0x970, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterMobSpawnInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FEncounterMobSpawnInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FScalableFloat)                            LeashRadiusInner                                            ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            LeashRadiusOuter                                            ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	CMember(TWeakObjectPtr<AEncounterMobAnchor*>)      EncounterAnchorPoint                                        ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(EEncounterMobSpawnType)                    MobSpawnType                                                ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	SMember(FGameplayTagContainer)                     PointProviderFilterTags                                     ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    StaticPointProviders                                        ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(UEnvQuery*)                                PointProviderEQS                                            ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UClass*)                                   PointProviderVolumeClass                                    ___ OFFSET(get<T>, {0x98, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterMobSpawnData
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FEncounterMobSpawnData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FString)                                   DevNotes                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTag)                              MobIdentifier                                               ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bActiveOnStart                                              ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) MobEncounterData                                     ___ OFFSET(get<T>, {0x18, 32, 0, 0})
	DMember(bool)                                      bOverrideDefaultSpawnInfo                                   ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FEncounterMobSpawnInfo)                    MobSpawnInfo                                                ___ OFFSET(get<T>, {0x40, 160, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterMobInstance
/// Size: 0x0058 (0x000000 - 0x000058)
class FEncounterMobInstance : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(AFortAthenaLivingWorldVolume*)             VolumePointProvider                                         ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TArray<TScriptInterface>)                  CurrentPointProviders                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableBoolStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetVariableBoolStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bValue                                                      ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableBoolStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableBoolStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableFloatStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetVariableFloatStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableFloatStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableFloatStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetVariableGameplayTagStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              Value                                                       ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableGameplayTagStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableGameplayTagStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableIntStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterGetVariableIntStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableIntStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableIntStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEncounterGetVariableItemDefinitionStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) Value                                                       ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableItemDefinitionStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableItemDefinitionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTaskInstanceData
/// Size: 0x0030 (0x000000 - 0x000030)
class FEncounterGetVariableLWMEncounterStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Value                                                ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableLWMEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableLWMEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableTagQueryStateTreeTaskInstanceData
/// Size: 0x0058 (0x000000 - 0x000058)
class FEncounterGetVariableTagQueryStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGameplayTag)                              VariableIdentifier                                          ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTagQuery)                         Value                                                       ___ OFFSET(get<T>, {0x8, 72, 0, 0})
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterGetVariableTagQueryStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEncounterGetVariableTagQueryStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterPrefabEntry
/// Size: 0x0038 (0x000000 - 0x000038)
class FEncounterPrefabEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UEncounterItemDefinition*)                 EncounterDefinition                                         ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              EncounterIdentifierTag                                      ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FScalableFloat)                            Weight                                                      ___ OFFSET(get<T>, {0x10, 40, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable
/// Size: 0x0010 (0x000000 - 0x000010)
class FEncounterVariable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              VarName                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_Boolean
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_Boolean : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_Float
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_Float : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_GameplayTag
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_GameplayTag : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_Integer
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_Integer : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_ItemDefinition
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_ItemDefinition : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_LWMEncounter
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_LWMEncounter : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVariable_TagQuery
/// Size: 0x0010 (0x000010 - 0x000020)
class FEncounterVariable_TagQuery : public FEncounterVariable
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDataTableRowHandle)                       RowValue                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_Boolean
/// Size: 0x0008 (0x000008 - 0x000010)
class FEncounterVarRow_Boolean : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bValue                                                      ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_Float
/// Size: 0x0008 (0x000008 - 0x000010)
class FEncounterVarRow_Float : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_GameplayTag
/// Size: 0x0008 (0x000008 - 0x000010)
class FEncounterVarRow_GameplayTag : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              Value                                                       ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_Integer
/// Size: 0x0008 (0x000008 - 0x000010)
class FEncounterVarRow_Integer : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_ItemDefinition
/// Size: 0x0020 (0x000008 - 0x000028)
class FEncounterVarRow_ItemDefinition : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortWorldItemDefinition*>) Value                                                       ___ OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_LWMEncounter
/// Size: 0x0020 (0x000008 - 0x000028)
class FEncounterVarRow_LWMEncounter : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) Value                                                ___ OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVarRow_TagQuery
/// Size: 0x0048 (0x000008 - 0x000050)
class FEncounterVarRow_TagQuery : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagQuery)                         Value                                                       ___ OFFSET(get<T>, {0x8, 72, 0, 0})
};

/// Struct /Script/EncountersRuntime.EndAllMobEncountersStateTreeTaskInstanceData
/// Size: 0x0008 (0x000000 - 0x000008)
class FEndAllMobEncountersStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EndAllMobEncountersStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FEndAllMobEncountersStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.PauseMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FPauseMobEncounterStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MobIdentifier                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.PauseMobEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FPauseMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.ResumeMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FResumeMobEncounterStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MobIdentifier                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.ResumeMobEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FResumeMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.StartLWMEncounterStateTreeTaskInstanceData
/// Size: 0x0130 (0x000000 - 0x000130)
class FStartLWMEncounterStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounter*>) LWMEncounter                                         ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagQuery)                         PointProviderTagQuery                                       ___ OFFSET(get<T>, {0x20, 72, 0, 0})
	SMember(FGameplayTagQuery)                         AnchorPointTagQuery                                         ___ OFFSET(get<T>, {0x68, 72, 0, 0})
	SMember(FScalableFloat)                            LeashRadiusInner                                            ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	SMember(FScalableFloat)                            LeashRadiusOuter                                            ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	CMember(UStartLWMEncounterDelegateHandler*)        DelegateHandler                                             ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaLivingWorldEncounterInstance*>) LWMInstance                                  ___ OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SpawnedMobPawns                                             ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	CMember(TWeakObjectPtr<AEncounterMobAnchor*>)      EncounterAnchorPoint                                        ___ OFFSET(get<T>, {0x128, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.StartLWMEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FStartLWMEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.StartMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStartMobEncounterStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MobIdentifier                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.StartMobEncounterStateTreeTask
/// Size: 0x0008 (0x000020 - 0x000028)
class FStartMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bStopEncounterOnExit                                        ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/EncountersRuntime.StopMobEncounterStateTreeTaskInstanceData
/// Size: 0x0010 (0x000000 - 0x000010)
class FStopMobEncounterStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              MobIdentifier                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.StopMobEncounterStateTreeTask
/// Size: 0x0000 (0x000020 - 0x000020)
class FStopMobEncounterStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EncountersRuntime.EncounterRewardBehavior
/// Size: 0x0038 (0x000000 - 0x000038)
class FEncounterRewardBehavior : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   RewardOffset                                                ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   RewardDirection                                             ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(float)                                     RewardConeAngle                                             ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     RewardFlingMagnitude                                        ___ OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterObjectiveFilterCache
/// Size: 0x0010 (0x000060 - 0x000070)
class FEncounterObjectiveFilterCache : public FEventObjectiveFilterCache
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/EncountersRuntime.EncounterVerbTransitionStateTreeTaskInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FEncounterVerbTransitionStateTreeTaskInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AActor*)                                   UserActor                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/EncountersRuntime.EncounterVerbTransitionStateTreeTask
/// Size: 0x0020 (0x000020 - 0x000040)
class FEncounterVerbTransitionStateTreeTask : public FStateTreeTaskCommonBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FStateTreeStateLink)                       TransitionTo                                                ___ OFFSET(get<T>, {0x20, 2, 0, 0})
	CMember(TArray<FInstancedStruct>)                  Verbs                                                       ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   ValueThreshold                                              ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Enum /Script/EncountersRuntime.EEncounterMobSpawnType
/// Size: 0x03
enum EEncounterMobSpawnType : uint8_t
{
	EEncounterMobSpawnType__VolumeBased0                                             = 0,
	EEncounterMobSpawnType__StaticPointBased1                                        = 1,
	EEncounterMobSpawnType__EEncounterMobSpawnType_MAX2                              = 2
};

