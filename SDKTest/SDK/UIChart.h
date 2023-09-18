/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package UIChart.

/// Struct /Script/UIChart.UIStateChartTransitionOperationParameters
/// Size: 0x0028 (0x000000 - 0x000028)
class FUIStateChartTransitionOperationParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     AnimationHints                                              ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(EUIStateTransitionUrgency)                 Urgency                                                     ___ OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/UIChart.ContextSetterSetEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FContextSetterSetEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              Key                                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/UIChart.ContextSetterClearEntry
/// Size: 0x0004 (0x000000 - 0x000004)
class FContextSetterClearEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              Key                                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/UIChart.ContextSetterChanges
/// Size: 0x0020 (0x000000 - 0x000020)
class FContextSetterChanges : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FContextSetterSetEntry>)            ValuesToSet                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FContextSetterClearEntry>)          ValuesToClear                                               ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/UIChart.UIStateComponentInstanceStack
/// Size: 0x0010 (0x000000 - 0x000010)
class FUIStateComponentInstanceStack : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UStackingUIStateComponent*>)        InstanceStack                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/UIChart.UIStateConfigurationChildReference
/// Size: 0x0004 (0x000000 - 0x000004)
class FUIStateConfigurationChildReference : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ChildStateId                                                ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/UIChart.UIStateAutomationRule
/// Size: 0x0018 (0x000000 - 0x000018)
class FUIStateAutomationRule : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FUIStateChartContextCondition>)     ContextConditions                                           ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FUIStateConfigurationChildReference)       ChildStateReference                                         ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/UIChart.UIStateChartContextCondition
/// Size: 0x0018 (0x000000 - 0x000018)
class FUIStateChartContextCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              Key                                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EUIStateChartContextConditionType)         ConditionType                                               ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FString)                                   ComparisonConstant                                          ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/UIChart.UIStateTransitionData
/// Size: 0x000C (0x000000 - 0x00000C)
class FUIStateTransitionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FGameplayTag)                              TriggerTag                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SourceStateId                                               ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   TargetStateId                                               ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/UIChart.UIStateChartContextChangeSet
/// Size: 0x0050 (0x000000 - 0x000050)
class FUIStateChartContextChangeSet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGameplayTag, FString>)               Changes                                                     ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/UIChart.UIStateChartContextEntryOverride
/// Size: 0x0028 (0x000000 - 0x000028)
class FUIStateChartContextEntryOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FString)                                   OverrideValue                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/UIChart.UIStateChartManagerChartDeactivationRequest
/// Size: 0x0088 (0x000000 - 0x000088)
class FUIStateChartManagerChartDeactivationRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/UIChart.UIStateRelayBaton
/// Size: 0x0028 (0x000000 - 0x000028)
class FUIStateRelayBaton : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UUIStateComponent*)                        OfferingComponent                                           ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UClass*)                                   OfferingComponentType                                       ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(UUIStateComponentConfiguration*)           OfferingComponentConfiguration                              ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/UIChart.UIStateRelay
/// Size: 0x0028 (0x000000 - 0x000028)
class FUIStateRelay : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FUIStateRelayBaton>)                AvailableBatons                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FUIStateRelayBaton>)                ClaimedBatons                                               ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Class /Script/UIChart.UIStateSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UUIStateSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     StateLoadTimeout                                            ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     StateUnloadTimeout                                          ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     WidgetStateComponentLoadTimeout                             ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     WidgetStateComponentUnloadTimeout                           ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	CMember(EWidgetStateComponentUnloadDefaultBehavior) WidgetStateComponentDefaultUnloadBehavior                  ___ OFFSET(get<T>, {0x40, 4, 0, 0})
};

/// Class /Script/UIChart.UIStateComponent
/// Size: 0x0020 (0x000028 - 0x000048)
class UUIStateComponent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(EStateComponentStatus)                     Status                                                      ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(UUIStateComponentConfiguration*)           ComponentConfiguration                                      ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UUIState*)                                 OwningState                                                 ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UUIStateChartRegion*)                      StateChartRegion                                            ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/UIChart.ContextSetterUIStateComponent
/// Size: 0x0008 (0x000048 - 0x000050)
class UContextSetterUIStateComponent : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UContextSetterUIStateComponentConfiguration*) Configuration                                            ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Script/UIChart.UIStateComponentConfiguration
/// Size: 0x0000 (0x000028 - 0x000028)
class UUIStateComponentConfiguration : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/UIChart.ContextSetterUIStateComponentConfiguration
/// Size: 0x0040 (0x000028 - 0x000068)
class UContextSetterUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FContextSetterChanges)                     ActivationChanges                                           ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FContextSetterChanges)                     DeactivationChanges                                         ___ OFFSET(get<T>, {0x48, 32, 0, 0})
};

/// Class /Script/UIChart.GlobalViewModelUIStateComponent
/// Size: 0x0060 (0x000048 - 0x0000A8)
class UGlobalViewModelUIStateComponent : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UGlobalViewModelUIStateComponentConfiguration*) Configuration                                          ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TSet<FGameplayTag>)                        ConditionContextKeys                                        ___ OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Class /Script/UIChart.GlobalViewModelUIStateComponentConfiguration
/// Size: 0x0020 (0x000028 - 0x000048)
class UGlobalViewModelUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FMVVMViewModelContext>)             ViewModelContexts                                           ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FUIStateChartContextCondition>)     ContextConditions                                           ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/UIChart.StackingUIStateComponent
/// Size: 0x0008 (0x000048 - 0x000050)
class UStackingUIStateComponent : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(EStateChartResourceScope)                  StackScope                                                  ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	DMember(bool)                                      bAlwaysRemoveStackingBehavior                               ___ OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      bIsOnStack                                                  ___ OFFSET(get<bool>, {0x4D, 1, 0, 0})
};

/// Class /Script/UIChart.InputConfigUIStateComponent
/// Size: 0x0008 (0x000050 - 0x000058)
class UInputConfigUIStateComponent : public UStackingUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UInputConfigUIStateComponentConfiguration*) Configuration                                              ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/UIChart.InputConfigUIStateComponentConfiguration
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputConfigUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ECommonInputMode)                          InputMode                                                   ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(EMouseCaptureMode)                         MouseCaptureMode                                            ___ OFFSET(get<T>, {0x29, 1, 0, 0})
	DMember(bool)                                      bHideCursorDuringCapture                                    ___ OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bIgnoreLookInput                                            ___ OFFSET(get<bool>, {0x2B, 1, 0, 0})
	DMember(bool)                                      bIgnoreMovementInput                                        ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bFlushPlayerInputWhenActivating                             ___ OFFSET(get<bool>, {0x2D, 1, 0, 0})
	DMember(bool)                                      bFlushPlayerInputWhenDeactivating                           ___ OFFSET(get<bool>, {0x2E, 1, 0, 0})
};

/// Class /Script/UIChart.SceneUIStateComponent
/// Size: 0x0068 (0x000048 - 0x0000B0)
class USceneUIStateComponent : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(USceneUIStateComponentConfiguration*)      Configuration                                               ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TSet<FGameplayTag>)                        ConditionContextKeys                                        ___ OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Class /Script/UIChart.SceneUIStateComponentConfiguration
/// Size: 0x0018 (0x000028 - 0x000040)
class USceneUIStateComponentConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UDynamicUIScene*)                          Scene                                                       ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FUIStateChartContextCondition>)     ContextConditions                                           ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/UIChart.SplitScreenUIStateComponentBase
/// Size: 0x0068 (0x000048 - 0x0000B0)
class USplitScreenUIStateComponentBase : public UUIStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(USplitScreenUIStateComponentBaseConfiguration*) BaseConfiguration                                      ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TMap<ULocalPlayer*, int32_t>)              ChildStateCharts                                            ___ OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TArray<int32_t>)                           DeactivatingStateCharts                                     ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/UIChart.SplitScreenUIStateComponentBaseConfiguration
/// Size: 0x0058 (0x000028 - 0x000080)
class USplitScreenUIStateComponentBaseConfiguration : public UUIStateComponentConfiguration
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(UUIStateChart*)                            PlayerStateChart                                            ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	DMember(bool)                                      bIgnoreTransitionParametersOnActivation                     ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(EUIStateTransitionUrgency)                 UrgencyOnPlayerAdd                                          ___ OFFSET(get<T>, {0x31, 1, 0, 0})
	SMember(FGameplayTagContainer)                     AnimationHintsOnPlayerAdd                                   ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	DMember(bool)                                      bIgnoreTransitionParametersOnDeactivation                   ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(EUIStateTransitionUrgency)                 UrgencyOnPlayerRemove                                       ___ OFFSET(get<T>, {0x59, 1, 0, 0})
	SMember(FGameplayTagContainer)                     AnimationHintsOnPlayerRemove                                ___ OFFSET(get<T>, {0x60, 32, 0, 0})
};

/// Class /Script/UIChart.StackingUIStateComponentSharedData
/// Size: 0x0050 (0x000028 - 0x000078)
class UStackingUIStateComponentSharedData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<UClass*, FUIStateComponentInstanceStack>) InstanceStacks                                          ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/UIChart.UIStateConfiguration
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UUIStateConfiguration : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FGameplayTagContainer)                     StateTags                                                   ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	DMember(int32_t)                                   ID                                                          ___ OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(TArray<UUIStateConfiguration*>)            Children                                                    ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<UUIStateConfiguration*>)            ParallelRegions                                             ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<UUIStateComponentConfiguration*>)   Components                                                  ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(float)                                     MinimumUnloadTime                                           ___ OFFSET(get<float>, {0x90, 4, 0, 0})
	CMember(EUIStateAutomationType)                    AutomationType                                              ___ OFFSET(get<T>, {0x94, 1, 0, 0})
	CMember(TArray<FUIStateAutomationRule>)            AutomationRules                                             ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(bool)                                      bSupportsBacktracking                                       ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bOverrideIncomingBacktracks                                 ___ OFFSET(get<bool>, {0xA9, 1, 0, 0})
};

/// Class /Script/UIChart.UIState
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UUIState : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<UUIState*>)                         Children                                                    ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UUIStateChartRegion*>)              ParallelRegions                                             ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<UUIStateComponent*>)                Components                                                  ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(UUIStateConfiguration*)                    Configuration                                               ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TArray<UUIStateChartTransition*>)          OutgoingTransitions                                         ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	DMember(float)                                     SecondsUntilTimeout                                         ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	CMember(UUIState*)                                 Parent                                                      ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(UUIStateChartRegion*)                      StateChartRegion                                            ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(EStateComponentStatus)                     Status                                                      ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	CMember(TSet<FGameplayTag>)                        ContinualAutomationContextKeys                              ___ OFFSET(get<T>, {0x90, 80, 0, 0})
};

/// Class /Script/UIChart.UIStateChart
/// Size: 0x0018 (0x000030 - 0x000048)
class UUIStateChart : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UUIStateConfiguration*)                    RootState                                                   ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<FUIStateTransitionData>)            Transitions                                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/UIChart.UIStateChartContext
/// Size: 0x0068 (0x000028 - 0x000090)
class UUIStateChartContext : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TMap<FGameplayTag, UUIStateChartContextEntry*>) Store                                                  ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/UIChart.UIStateChartContextEntry
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UUIStateChartContextEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FString)                                   CommonValue                                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TMap<ULocalPlayer*, FUIStateChartContextEntryOverride>) PlayerOverrides                                ___ OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Class /Script/UIChart.UIStateChartManager
/// Size: 0x00C8 (0x000030 - 0x0000F8)
class UUIStateChartManager : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TMap<ULocalPlayer*, UUIStateChartManagerPlayer*>) PlayerEntries                                        ___ OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TArray<UUIStateChartManagerPlayer*>)       RemovedPlayerEntries                                        ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(UUIStateChartContext*)                     Context                                                     ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(UUIStateChartResourceCollection*)          GlobalResources                                             ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/UIChart.UIStateChartManagerEntry
/// Size: 0x0018 (0x000028 - 0x000040)
class UUIStateChartManagerEntry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UUIStateChartRegion*)                      MainRegion                                                  ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UUIStateChartManagerPlayer*)               ManagerPlayer                                               ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UUIStateChartResourceCollection*)          StateChartResources                                         ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/UIChart.UIStateChartManagerPlayer
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UUIStateChartManagerPlayer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TMap<int32_t, UUIStateChartManagerEntry*>) ActiveChartEntries                                          ___ OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TMap<int32_t, UUIStateChartManagerEntry*>) InactiveChartEntries                                        ___ OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TArray<FUIStateChartManagerChartDeactivationRequest>) DeactivationRequests                             ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(UUIStateChartManager*)                     Manager                                                     ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UUIStateChartResourceCollection*)          PlayerResources                                             ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Class /Script/UIChart.UIStateBacktrackStep
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UUIStateBacktrackStep : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FGameplayTag)                              TransitionTag                                               ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(UUIState*)                                 ReturnState                                                 ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UUIState*)                                 AvailableState                                              ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FUIStateChartContextChangeSet)             ReverseContextChanges                                       ___ OFFSET(get<T>, {0x40, 80, 0, 0})
	CMember(TArray<UUIStateBacktrackStep*>)            AvailablePaths                                              ___ OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/UIChart.UIStateChartRegion
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UUIStateChartRegion : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(UUIStateChartManagerEntry*)                ManagerEntry                                                ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UUIState*)                                 RootState                                                   ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UUIState*)                                 ParentState                                                 ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<UUIStateChartRegion*>)              ParallelRegions                                             ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TMap<FGameplayTag, UUIState*>)             TaggedStates                                                ___ OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(UUIState*)                                 ActiveLeafState                                             ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UUIStateChartTransitionOperation*)         ActiveTransitionOperation                                   ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UUIStateChartTransitionOperation*)         QueuedTransitionOperation                                   ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TArray<UUIStateBacktrackStep*>)            AvailableBacktrackPaths                                     ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(UUIStateBacktrackStep*)                    ActiveTransitionBacktrackStep                               ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FString)                                   ChartName                                                   ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Class /Script/UIChart.UIStateChartResourceCollection
/// Size: 0x0050 (0x000028 - 0x000078)
class UUIStateChartResourceCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<UClass*, UObject*>)                   ResourcesByClass                                            ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/UIChart.UIStateChartTransition
/// Size: 0x0018 (0x000028 - 0x000040)
class UUIStateChartTransition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UUIState*)                                 Source                                                      ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UUIState*)                                 Target                                                      ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/UIChart.UIStateChartTransitionOperation
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UUIStateChartTransitionOperation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UUIStateChartRegion*)                      Region                                                      ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UUIState*)                                 OriginState                                                 ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UUIState*)                                 EndState                                                    ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UUIState*)                                 TransitionTargetState                                       ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<UUIState*>)                         KnownStatesToActivate                                       ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<UUIState*>)                         StatesToDeactivate                                          ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(UUIStateChartTransitionOperationGroup*)    Group                                                       ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FUIStateRelay)                             StateRelay                                                  ___ OFFSET(get<T>, {0x80, 40, 0, 0})
	CMember(UUIState*)                                 BacktrackReturnState                                        ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/UIChart.UIStateChartTransitionOperationGroup
/// Size: 0x0180 (0x000028 - 0x0001A8)
class UUIStateChartTransitionOperationGroup : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(TSet<UUIStateChartTransitionOperation*>)   Operations                                                  ___ OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TSet<UUIStateChartTransitionOperation*>)   OperationsReadyForContextUpdate                             ___ OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(UUIStateChartContext*)                     Context                                                     ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(ULocalPlayer*)                             LocalPlayer                                                 ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FUIStateChartContextChangeSet)             ContextChanges                                              ___ OFFSET(get<T>, {0xD8, 80, 0, 0})
	SMember(FUIStateChartContextChangeSet)             ReverseContextChanges                                       ___ OFFSET(get<T>, {0x128, 80, 0, 0})
	SMember(FUIStateChartTransitionOperationParameters) Parameters                                                 ___ OFFSET(get<T>, {0x178, 40, 0, 0})
	SMember(FGameplayTag)                              TransitionEventTag                                          ___ OFFSET(get<T>, {0x1A0, 4, 0, 0})
};

/// Enum /Script/UIChart.EWidgetStateComponentUnloadDefaultBehavior
/// Size: 0x03
enum EWidgetStateComponentUnloadDefaultBehavior : uint8_t
{
	EWidgetStateComponentUnloadDefaultBehavior__WaitForAnimations0                   = 0,
	EWidgetStateComponentUnloadDefaultBehavior__DoNotWaitForAnimations1              = 1,
	EWidgetStateComponentUnloadDefaultBehavior__EWidgetStateComponentUnloadDefaultBehavior_MAX2 = 2
};

/// Enum /Script/UIChart.EUIStateTransitionUrgency
/// Size: 0x03
enum EUIStateTransitionUrgency : uint8_t
{
	EUIStateTransitionUrgency__Normal0                                               = 0,
	EUIStateTransitionUrgency__High1                                                 = 1,
	EUIStateTransitionUrgency__EUIStateTransitionUrgency_MAX2                        = 2
};

/// Enum /Script/UIChart.EUIStateAutomationType
/// Size: 0x03
enum EUIStateAutomationType : uint8_t
{
	EUIStateAutomationType__Initial0                                                 = 0,
	EUIStateAutomationType__Continual1                                               = 1,
	EUIStateAutomationType__EUIStateAutomationType_MAX2                              = 2
};

/// Enum /Script/UIChart.EUIStateChartContextConditionType
/// Size: 0x14
enum EUIStateChartContextConditionType : uint8_t
{
	EUIStateChartContextConditionType__IsEmpty0                                      = 0,
	EUIStateChartContextConditionType__IsNotEmpty1                                   = 1,
	EUIStateChartContextConditionType__IsEqualTo2                                    = 2,
	EUIStateChartContextConditionType__IsNotEqualTo3                                 = 3,
	EUIStateChartContextConditionType__IsGreaterThan4                                = 4,
	EUIStateChartContextConditionType__IsGreaterThanOrEqualTo5                       = 5,
	EUIStateChartContextConditionType__IsLessThan6                                   = 6,
	EUIStateChartContextConditionType__IsLessThanOrEqualTo7                          = 7,
	EUIStateChartContextConditionType__IsTrue8                                       = 8,
	EUIStateChartContextConditionType__IsNotTrue9                                    = 9,
	EUIStateChartContextConditionType__StartsWith10                                  = 10,
	EUIStateChartContextConditionType__EndsWith11                                    = 11,
	EUIStateChartContextConditionType__Contains12                                    = 12,
	EUIStateChartContextConditionType__EUIStateChartContextConditionType_MAX13       = 13
};

/// Enum /Script/UIChart.EUIChartRegionTransitionScope
/// Size: 0x03
enum EUIChartRegionTransitionScope : uint8_t
{
	EUIChartRegionTransitionScope__ThisRegionOnly0                                   = 0,
	EUIChartRegionTransitionScope__ThisRegionOrChildRegions1                         = 1,
	EUIChartRegionTransitionScope__EUIChartRegionTransitionScope_MAX2                = 2
};

/// Enum /Script/UIChart.EStateComponentStatus
/// Size: 0x09
enum EStateComponentStatus : uint8_t
{
	EStateComponentStatus__Inactive0                                                 = 0,
	EStateComponentStatus__PreparingForLoad1                                         = 1,
	EStateComponentStatus__Loading2                                                  = 2,
	EStateComponentStatus__DoneLoading3                                              = 3,
	EStateComponentStatus__Operational4                                              = 4,
	EStateComponentStatus__PreparingForUnload5                                       = 5,
	EStateComponentStatus__Unloading6                                                = 6,
	EStateComponentStatus__DoneUnloading7                                            = 7,
	EStateComponentStatus__EStateComponentStatus_MAX8                                = 8
};

/// Enum /Script/UIChart.EStateChartResourceScope
/// Size: 0x04
enum EStateChartResourceScope : uint8_t
{
	EStateChartResourceScope__StateChart0                                            = 0,
	EStateChartResourceScope__Player1                                                = 1,
	EStateChartResourceScope__Global2                                                = 2,
	EStateChartResourceScope__EStateChartResourceScope_MAX3                          = 3
};

