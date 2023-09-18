/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package EnhancedInput.

/// Struct /Script/EnhancedInput.InputActionValue
/// Size: 0x0020 (0x000000 - 0x000020)
class FInputActionValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/EnhancedInput.PlayerMappableKeyProfileCreationArgs
/// Size: 0x0030 (0x000000 - 0x000030)
class FPlayerMappableKeyProfileCreationArgs : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UClass*)                                   ProfileType                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTag)                              ProfileIdentifier                                           ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FPlatformUserId)                           UserId                                                      ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	DMember(bool)                                      bSetAsCurrentProfile                                        ___ OFFSET(get<bool>, {0x28, 1, 1, 0})
};

/// Struct /Script/EnhancedInput.PlayerKeyMapping
/// Size: 0x0088 (0x000000 - 0x000088)
class FPlayerKeyMapping : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FName)                                     MappingName                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     DisplayCategory                                             ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	CMember(EPlayerMappableKeySlot)                    Slot                                                        ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bIsDirty                                                    ___ OFFSET(get<bool>, {0x39, 1, 1, 0})
	SMember(FKey)                                      DefaultKey                                                  ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FKey)                                      CurrentKey                                                  ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FHardwareDeviceIdentifier)                 HardwareDeviceId                                            ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(UInputAction*)                             AssociatedInputAction                                       ___ OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Struct /Script/EnhancedInput.MapPlayerKeyArgs
/// Size: 0x0030 (0x000000 - 0x000030)
class FMapPlayerKeyArgs : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     MappingName                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EPlayerMappableKeySlot)                    Slot                                                        ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	SMember(FKey)                                      NewKey                                                      ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FName)                                     HardwareDeviceId                                            ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FGameplayTag)                              ProfileId                                                   ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	DMember(bool)                                      bCreateMatchingSlotIfNeeded                                 ___ OFFSET(get<bool>, {0x28, 1, 1, 0})
	DMember(bool)                                      bDeferOnSettingsChangedBroadcast                            ___ OFFSET(get<bool>, {0x28, 1, 1, 1})
};

/// Struct /Script/EnhancedInput.InputActionInstance
/// Size: 0x0060 (0x000000 - 0x000060)
class FInputActionInstance : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UInputAction*)                             SourceAction                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(ETriggerEvent)                             TriggerEvent                                                ___ OFFSET(get<T>, {0x13, 1, 0, 0})
	DMember(float)                                     LastTriggeredWorldTime                                      ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TArray<UInputTrigger*>)                    Triggers                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<UInputModifier*>)                   Modifiers                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(float)                                     ElapsedProcessedTime                                        ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     ElapsedTriggeredTime                                        ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
};

/// Struct /Script/EnhancedInput.KeyMappingRow
/// Size: 0x0050 (0x000000 - 0x000050)
class FKeyMappingRow : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TSet<FPlayerKeyMapping>)                   Mappings                                                    ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/EnhancedInput.PlayerMappableKeyQueryOptions
/// Size: 0x0028 (0x000000 - 0x000028)
class FPlayerMappableKeyQueryOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     MappingName                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FKey)                                      KeyToMatch                                                  ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(EPlayerMappableKeySlot)                    SlotToMatch                                                 ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(bool)                                      bMatchBasicKeyTypes                                         ___ OFFSET(get<bool>, {0x21, 1, 1, 0})
	DMember(bool)                                      bMatchKeyAxisType                                           ___ OFFSET(get<bool>, {0x21, 1, 1, 1})
	CMember(EHardwareDevicePrimaryType)                RequiredDeviceType                                          ___ OFFSET(get<T>, {0x22, 1, 0, 0})
	DMember(int32_t)                                   RequiredDeviceFlags                                         ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
};

/// Struct /Script/EnhancedInput.MappingQueryIssue
/// Size: 0x0018 (0x000000 - 0x000018)
class FMappingQueryIssue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(EMappingQueryIssue)                        Issue                                                       ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UInputMappingContext*)                     BlockingContext                                             ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UInputAction*)                             BlockingAction                                              ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/EnhancedInput.PlayerMappableKeySlot
/// Size: 0x0004 (0x000000 - 0x000004)
class FPlayerMappableKeySlot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   SlotNumber                                                  ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/EnhancedInput.PlayerMappableKeyOptions
/// Size: 0x0040 (0x000000 - 0x000040)
class FPlayerMappableKeyOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UObject*)                                  MetaData                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FText)                                     DisplayCategory                                             ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/EnhancedInput.EnhancedActionKeyMapping
/// Size: 0x0050 (0x000000 - 0x000050)
class FEnhancedActionKeyMapping : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<UInputTrigger*>)                    Triggers                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<UInputModifier*>)                   Modifiers                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(UInputAction*)                             Action                                                      ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FKey)                                      Key                                                         ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bShouldBeIgnored                                            ___ OFFSET(get<bool>, {0x40, 1, 1, 0})
	CMember(EPlayerMappableKeySettingBehaviors)        SettingBehavior                                             ___ OFFSET(get<T>, {0x41, 1, 0, 0})
	CMember(UPlayerMappableKeySettings*)               PlayerMappableKeySettings                                   ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/EnhancedInput.BlueprintEnhancedInputActionBinding
/// Size: 0x0010 (0x000000 - 0x000010)
class FBlueprintEnhancedInputActionBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UInputAction*)                             InputAction                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(ETriggerEvent)                             TriggerEvent                                                ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FName)                                     FunctionNameToBind                                          ___ OFFSET(get<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/EnhancedInput.DefaultContextSetting
/// Size: 0x0028 (0x000000 - 0x000028)
class FDefaultContextSetting : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UInputMappingContext*>)     InputMappingContext                                         ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   Priority                                                    ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/EnhancedInput.ModifyContextOptions
/// Size: 0x0001 (0x000000 - 0x000001)
class FModifyContextOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bIgnoreAllPressedKeysUntilRelease                           ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bForceImmediately                                           ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bNotifyUserSettings                                         ___ OFFSET(get<bool>, {0x0, 1, 1, 2})
};

/// Struct /Script/EnhancedInput.KeyConsumptionOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FKeyConsumptionOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/EnhancedInput.InjectedInputArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FInjectedInputArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/EnhancedInput.BlueprintInputDebugKeyDelegateBinding
/// Size: 0x0030 (0x000000 - 0x000030)
class FBlueprintInputDebugKeyDelegateBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FInputChord)                               InputChord                                                  ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TEnumAsByte<EInputEvent>)                  InputKeyEvent                                               ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FName)                                     FunctionNameToBind                                          ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	DMember(bool)                                      bExecuteWhenPaused                                          ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/EnhancedInput.InputComboStepData
/// Size: 0x0010 (0x000000 - 0x000010)
class FInputComboStepData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UInputAction*)                             ComboStepAction                                             ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(char)                                      ComboStepCompletionStates                                   ___ OFFSET(get<char>, {0x8, 1, 0, 0})
	DMember(float)                                     TimeToPressKey                                              ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/EnhancedInput.InputCancelAction
/// Size: 0x0010 (0x000000 - 0x000010)
class FInputCancelAction : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UInputAction*)                             CancelAction                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(char)                                      CancellationStates                                          ___ OFFSET(get<char>, {0x8, 1, 0, 0})
};

/// Class /Script/EnhancedInput.EnhancedPlayerMappableKeyProfile
/// Size: 0x0070 (0x000028 - 0x000098)
class UEnhancedPlayerMappableKeyProfile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayTag)                              ProfileIdentifier                                           ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FPlatformUserId)                           OwningUserId                                                ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	CMember(TMap<FName, FKeyMappingRow>)               PlayerMappedKeys                                            ___ OFFSET(get<T>, {0x48, 80, 0, 0})
};

/// Class /Script/EnhancedInput.EnhancedInputUserSettings
/// Size: 0x00F8 (0x000028 - 0x000120)
class UEnhancedInputUserSettings : public USaveGame
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMulticastInlineDelegate)                  OnSettingsChanged                                           ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSettingsApplied                                           ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FGameplayTag)                              CurrentProfileIdentifier                                    ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	CMember(TMap<FGameplayTag, UEnhancedPlayerMappableKeyProfile*>) SavedKeyProfiles                               ___ OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TWeakObjectPtr<ULocalPlayer*>)             OwningLocalPlayer                                           ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(TSet<UInputMappingContext*>)               RegisteredMappingContexts                                   ___ OFFSET(get<T>, {0xD0, 80, 0, 0})
};

/// Class /Script/EnhancedInput.EnhancedInputActionDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UEnhancedInputActionDelegateBinding : public UInputDelegateBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FBlueprintEnhancedInputActionBinding>) InputActionDelegateBindings                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/EnhancedInput.EnhancedInputActionValueBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UEnhancedInputActionValueBinding : public UInputDelegateBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FBlueprintEnhancedInputActionBinding>) InputActionValueBindings                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/EnhancedInput.EnhancedInputComponent
/// Size: 0x0038 (0x000128 - 0x000160)
class UEnhancedInputComponent : public UInputComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Script/EnhancedInput.EnhancedInputDeveloperSettings
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UEnhancedInputDeveloperSettings : public UDeveloperSettingsBackedByCVars
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TArray<FDefaultContextSetting>)            DefaultMappingContexts                                      ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FDefaultContextSetting>)            DefaultWorldSubsystemMappingContexts                        ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FPerPlatformSettings)                      PlatformSettings                                            ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   UserSettingsClass                                           ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultPlayerMappableKeyProfileClass                        ___ OFFSET(get<T>, {0x80, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultWorldInputClass                                      ___ OFFSET(get<T>, {0xA0, 32, 0, 0})
	DMember(bool)                                      bSendTriggeredEventsWhenInputIsFlushed                      ___ OFFSET(get<bool>, {0xC0, 1, 1, 0})
	DMember(bool)                                      bEnableUserSettings                                         ___ OFFSET(get<bool>, {0xC0, 1, 1, 1})
	DMember(bool)                                      bEnableDefaultMappingContexts                               ___ OFFSET(get<bool>, {0xC0, 1, 1, 2})
	DMember(bool)                                      bShouldOnlyTriggerLastActionInChord                         ___ OFFSET(get<bool>, {0xC0, 1, 1, 3})
	DMember(bool)                                      bLogOnDeprecatedConfigUsed                                  ___ OFFSET(get<bool>, {0xC0, 1, 1, 4})
	DMember(bool)                                      bEnableWorldSubsystem                                       ___ OFFSET(get<bool>, {0xC0, 1, 1, 5})
	DMember(bool)                                      bShouldLogAllWorldSubsystemInputs                           ___ OFFSET(get<bool>, {0xC0, 1, 1, 6})
};

/// Class /Script/EnhancedInput.EnhancedInputLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnhancedInputLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EnhancedInput.EnhancedInputPlatformData
/// Size: 0x0050 (0x000028 - 0x000078)
class UEnhancedInputPlatformData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<UInputMappingContext*, UInputMappingContext*>) MappingContextRedirects                            ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/EnhancedInput.EnhancedInputPlatformSettings
/// Size: 0x0028 (0x000040 - 0x000068)
class UEnhancedInputPlatformSettings : public UPlatformSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<TWeakObjectPtr>)                    InputData                                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<UClass*>)                           InputDataClasses                                            ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bShouldLogMappingContextRedirects                           ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/EnhancedInput.EnhancedInputSubsystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UEnhancedInputSubsystemInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EnhancedInput.EnhancedInputLocalPlayerSubsystem
/// Size: 0x01B8 (0x000030 - 0x0001E8)
class UEnhancedInputLocalPlayerSubsystem : public ULocalPlayerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FMulticastInlineDelegate)                  ControlMappingsRebuiltDelegate                              ___ OFFSET(get<T>, {0x1D0, 16, 0, 0})
	CMember(UEnhancedInputUserSettings*)               UserSettings                                                ___ OFFSET(get<T>, {0x1E0, 8, 0, 0})
};

/// Class /Script/EnhancedInput.EnhancedInputWorldSubsystem
/// Size: 0x01C8 (0x000030 - 0x0001F8)
class UEnhancedInputWorldSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 504;

public:
	CMember(UEnhancedPlayerInput*)                     PlayerInput                                                 ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    CurrentInputStack                                           ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
};

/// Class /Script/EnhancedInput.EnhancedPlayerInput
/// Size: 0x0350 (0x000498 - 0x0007E8)
class UEnhancedPlayerInput : public UPlayerInput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2024;

public:
	CMember(TMap<UInputAction*, FKeyConsumptionOptions>) KeyConsumptionData                                        ___ OFFSET(get<T>, {0x498, 80, 0, 0})
	CMember(TMap<UInputMappingContext*, int32_t>)      AppliedInputContexts                                        ___ OFFSET(get<T>, {0x4E8, 80, 0, 0})
	CMember(TArray<FEnhancedActionKeyMapping>)         EnhancedActionMappings                                      ___ OFFSET(get<T>, {0x538, 16, 0, 0})
	CMember(TMap<UInputAction*, FInputActionInstance>) ActionInstanceData                                          ___ OFFSET(get<T>, {0x598, 80, 0, 0})
	CMember(TMap<FKey, FVector>)                       KeysPressedThisTick                                         ___ OFFSET(get<T>, {0x688, 80, 0, 0})
	CMember(TMap<UInputAction*, FInjectedInputArray>)  InputsInjectedThisTick                                      ___ OFFSET(get<T>, {0x6D8, 80, 0, 0})
	CMember(TSet<UInputAction*>)                       LastInjectedActions                                         ___ OFFSET(get<T>, {0x728, 80, 0, 0})
};

/// Class /Script/EnhancedInput.InputAction
/// Size: 0x0050 (0x000030 - 0x000080)
class UInputAction : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FText)                                     ActionDescription                                           ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bTriggerWhenPaused                                          ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bConsumeInput                                               ___ OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      bConsumesActionAndAxisMappings                              ___ OFFSET(get<bool>, {0x4A, 1, 0, 0})
	DMember(bool)                                      bReserveAllMappings                                         ___ OFFSET(get<bool>, {0x4B, 1, 0, 0})
	DMember(int32_t)                                   TriggerEventsThatConsumeLegacyKeys                          ___ OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	CMember(EInputActionValueType)                     ValueType                                                   ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	CMember(EInputActionAccumulationBehavior)          AccumulationBehavior                                        ___ OFFSET(get<T>, {0x51, 1, 0, 0})
	CMember(TArray<UInputTrigger*>)                    Triggers                                                    ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<UInputModifier*>)                   Modifiers                                                   ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(UPlayerMappableKeySettings*)               PlayerMappableKeySettings                                   ___ OFFSET(get<T>, {0x78, 8, 0, 0})
};

/// Class /Script/EnhancedInput.InputDebugKeyDelegateBinding
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputDebugKeyDelegateBinding : public UInputDelegateBinding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FBlueprintInputDebugKeyDelegateBinding>) InputDebugKeyDelegateBindings                          ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/EnhancedInput.InputMappingContext
/// Size: 0x0028 (0x000030 - 0x000058)
class UInputMappingContext : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FEnhancedActionKeyMapping>)         Mappings                                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FText)                                     ContextDescription                                          ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EnhancedInput.InputModifierDeadZone
/// Size: 0x0010 (0x000028 - 0x000038)
class UInputModifierDeadZone : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     LowerThreshold                                              ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     UpperThreshold                                              ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	CMember(EDeadZoneType)                             Type                                                        ___ OFFSET(get<T>, {0x30, 1, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierScalar
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierScalar : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Scalar                                                      ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierScaleByDeltaTime
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifierScaleByDeltaTime : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EnhancedInput.InputModifierNegate
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierNegate : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bX                                                          ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bY                                                          ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bZ                                                          ___ OFFSET(get<bool>, {0x2A, 1, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierSmooth
/// Size: 0x0030 (0x000028 - 0x000058)
class UInputModifierSmooth : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveExponential
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierResponseCurveExponential : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   CurveExponent                                               ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierResponseCurveUser
/// Size: 0x0018 (0x000028 - 0x000040)
class UInputModifierResponseCurveUser : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UCurveFloat*)                              ResponseX                                                   ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UCurveFloat*)                              ResponseY                                                   ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UCurveFloat*)                              ResponseZ                                                   ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierFOVScaling
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierFOVScaling : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     FOVScale                                                    ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(EFOVScalingType)                           FOVScalingType                                              ___ OFFSET(get<T>, {0x2C, 1, 0, 0})
};

/// Class /Script/EnhancedInput.InputModifierToWorldSpace
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputModifierToWorldSpace : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/EnhancedInput.InputModifierSwizzleAxis
/// Size: 0x0008 (0x000028 - 0x000030)
class UInputModifierSwizzleAxis : public UInputModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EInputAxisSwizzle)                         Order                                                       ___ OFFSET(get<T>, {0x28, 1, 0, 0})
};

/// Class /Script/EnhancedInput.InputTrigger
/// Size: 0x0028 (0x000028 - 0x000050)
class UInputTrigger : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     ActuationThreshold                                          ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bShouldAlwaysTick                                           ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
	SMember(FInputActionValue)                         LastValue                                                   ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerTimedBase
/// Size: 0x0008 (0x000050 - 0x000058)
class UInputTriggerTimedBase : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     HeldDuration                                                ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bAffectedByTimeDilation                                     ___ OFFSET(get<bool>, {0x54, 1, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerDown
/// Size: 0x0000 (0x000050 - 0x000050)
class UInputTriggerDown : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/EnhancedInput.InputTriggerPressed
/// Size: 0x0000 (0x000050 - 0x000050)
class UInputTriggerPressed : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/EnhancedInput.InputTriggerReleased
/// Size: 0x0000 (0x000050 - 0x000050)
class UInputTriggerReleased : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/EnhancedInput.InputTriggerHold
/// Size: 0x0010 (0x000058 - 0x000068)
class UInputTriggerHold : public UInputTriggerTimedBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(float)                                     HoldTimeThreshold                                           ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(bool)                                      bIsOneShot                                                  ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerHoldAndRelease
/// Size: 0x0008 (0x000058 - 0x000060)
class UInputTriggerHoldAndRelease : public UInputTriggerTimedBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     HoldTimeThreshold                                           ___ OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerTap
/// Size: 0x0008 (0x000058 - 0x000060)
class UInputTriggerTap : public UInputTriggerTimedBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     TapReleaseTimeThreshold                                     ___ OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerPulse
/// Size: 0x0010 (0x000058 - 0x000068)
class UInputTriggerPulse : public UInputTriggerTimedBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bTriggerOnStart                                             ___ OFFSET(get<bool>, {0x5C, 1, 0, 0})
	DMember(float)                                     Interval                                                    ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   TriggerLimit                                                ___ OFFSET(get<int32_t>, {0x64, 4, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerChordAction
/// Size: 0x0008 (0x000050 - 0x000058)
class UInputTriggerChordAction : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UInputAction*)                             ChordAction                                                 ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Class /Script/EnhancedInput.InputTriggerChordBlocker
/// Size: 0x0000 (0x000058 - 0x000058)
class UInputTriggerChordBlocker : public UInputTriggerChordAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/EnhancedInput.InputTriggerCombo
/// Size: 0x0028 (0x000050 - 0x000078)
class UInputTriggerCombo : public UInputTrigger
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   CurrentComboStepIndex                                       ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(float)                                     CurrentTimeBetweenComboSteps                                ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	CMember(TArray<FInputComboStepData>)               ComboActions                                                ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FInputCancelAction>)                InputCancelActions                                          ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/EnhancedInput.PlayerMappableInputConfig
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UPlayerMappableInputConfig : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     ConfigName                                                  ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FText)                                     ConfigDisplayName                                           ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bIsDeprecated                                               ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	CMember(UObject*)                                  MetaData                                                    ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(TMap<UInputMappingContext*, int32_t>)      Contexts                                                    ___ OFFSET(get<T>, {0x60, 80, 0, 0})
};

/// Class /Script/EnhancedInput.PlayerMappableKeySettings
/// Size: 0x0060 (0x000028 - 0x000088)
class UPlayerMappableKeySettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(UObject*)                                  MetaData                                                    ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FText)                                     DisplayCategory                                             ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FGameplayTagContainer)                     SupportedKeyProfiles                                        ___ OFFSET(get<T>, {0x68, 32, 0, 0})
};

/// Enum /Script/EnhancedInput.EPlayerMappableKeySlot
/// Size: 0x09
enum EPlayerMappableKeySlot : uint8_t
{
	EPlayerMappableKeySlot__First0                                                   = 0,
	EPlayerMappableKeySlot__Second1                                                  = 1,
	EPlayerMappableKeySlot__Third2                                                   = 2,
	EPlayerMappableKeySlot__Fourth3                                                  = 3,
	EPlayerMappableKeySlot__Fifth4                                                   = 4,
	EPlayerMappableKeySlot__Sixth5                                                   = 5,
	EPlayerMappableKeySlot__Seventh6                                                 = 6,
	EPlayerMappableKeySlot__Unspecified7                                             = 7,
	EPlayerMappableKeySlot__Max8                                                     = 8
};

/// Enum /Script/EnhancedInput.EInputActionValueType
/// Size: 0x05
enum EInputActionValueType : uint8_t
{
	EInputActionValueType__Boolean0                                                  = 0,
	EInputActionValueType__Axis1D1                                                   = 1,
	EInputActionValueType__Axis2D2                                                   = 2,
	EInputActionValueType__Axis3D3                                                   = 3,
	EInputActionValueType__EInputActionValueType_MAX4                                = 4
};

/// Enum /Script/EnhancedInput.EMappingQueryResult
/// Size: 0x06
enum EMappingQueryResult : uint8_t
{
	EMappingQueryResult__Error_EnhancedInputNotEnabled0                              = 0,
	EMappingQueryResult__Error_InputContextNotInActiveContexts1                      = 1,
	EMappingQueryResult__Error_InvalidAction2                                        = 2,
	EMappingQueryResult__NotMappable3                                                = 3,
	EMappingQueryResult__MappingAvailable4                                           = 4,
	EMappingQueryResult__EMappingQueryResult_MAX5                                    = 5
};

/// Enum /Script/EnhancedInput.EMappingQueryIssue
/// Size: 0x08
enum EMappingQueryIssue : uint8_t
{
	EMappingQueryIssue__NoIssue0                                                     = 0,
	EMappingQueryIssue__ReservedByAction1                                            = 1,
	EMappingQueryIssue__HidesExistingMapping2                                        = 2,
	EMappingQueryIssue__HiddenByExistingMapping3                                     = 4,
	EMappingQueryIssue__CollisionWithMappingInSameContext4                           = 8,
	EMappingQueryIssue__ForcesTypePromotion5                                         = 16,
	EMappingQueryIssue__ForcesTypeDemotion6                                          = 32,
	EMappingQueryIssue__EMappingQueryIssue_MAX7                                      = 33
};

/// Enum /Script/EnhancedInput.EPlayerMappableKeySettingBehaviors
/// Size: 0x04
enum EPlayerMappableKeySettingBehaviors : uint8_t
{
	EPlayerMappableKeySettingBehaviors__InheritSettingsFromAction0                   = 0,
	EPlayerMappableKeySettingBehaviors__OverrideSettings1                            = 1,
	EPlayerMappableKeySettingBehaviors__IgnoreSettings2                              = 2,
	EPlayerMappableKeySettingBehaviors__EPlayerMappableKeySettingBehaviors_MAX3      = 3
};

/// Enum /Script/EnhancedInput.EInputMappingRebuildType
/// Size: 0x04
enum EInputMappingRebuildType : uint8_t
{
	EInputMappingRebuildType__None0                                                  = 0,
	EInputMappingRebuildType__Rebuild1                                               = 1,
	EInputMappingRebuildType__RebuildWithFlush2                                      = 2,
	EInputMappingRebuildType__EInputMappingRebuildType_MAX3                          = 3
};

/// Enum /Script/EnhancedInput.EInputActionAccumulationBehavior
/// Size: 0x03
enum EInputActionAccumulationBehavior : uint8_t
{
	EInputActionAccumulationBehavior__TakeHighestAbsoluteValue0                      = 0,
	EInputActionAccumulationBehavior__Cumulative1                                    = 1,
	EInputActionAccumulationBehavior__EInputActionAccumulationBehavior_MAX2          = 2
};

/// Enum /Script/EnhancedInput.EDeadZoneType
/// Size: 0x03
enum EDeadZoneType : uint8_t
{
	EDeadZoneType__Axial0                                                            = 0,
	EDeadZoneType__Radial1                                                           = 1,
	EDeadZoneType__EDeadZoneType_MAX2                                                = 2
};

/// Enum /Script/EnhancedInput.EFOVScalingType
/// Size: 0x03
enum EFOVScalingType : uint8_t
{
	EFOVScalingType__Standard0                                                       = 0,
	EFOVScalingType__UE4_BackCompat1                                                 = 1,
	EFOVScalingType__EFOVScalingType_MAX2                                            = 2
};

/// Enum /Script/EnhancedInput.EInputAxisSwizzle
/// Size: 0x06
enum EInputAxisSwizzle : uint8_t
{
	EInputAxisSwizzle__YXZ0                                                          = 0,
	EInputAxisSwizzle__ZYX1                                                          = 1,
	EInputAxisSwizzle__XZY2                                                          = 2,
	EInputAxisSwizzle__YZX3                                                          = 3,
	EInputAxisSwizzle__ZXY4                                                          = 4,
	EInputAxisSwizzle__EInputAxisSwizzle_MAX5                                        = 5
};

/// Enum /Script/EnhancedInput.ETriggerState
/// Size: 0x04
enum ETriggerState : uint8_t
{
	ETriggerState__None0                                                             = 0,
	ETriggerState__Ongoing1                                                          = 1,
	ETriggerState__Triggered2                                                        = 2,
	ETriggerState__ETriggerState_MAX3                                                = 3
};

/// Enum /Script/EnhancedInput.ETriggerEvent
/// Size: 0x07
enum ETriggerEvent : uint8_t
{
	ETriggerEvent__None0                                                             = 0,
	ETriggerEvent__Triggered1                                                        = 1,
	ETriggerEvent__Started2                                                          = 2,
	ETriggerEvent__Ongoing3                                                          = 4,
	ETriggerEvent__Canceled4                                                         = 8,
	ETriggerEvent__Completed5                                                        = 16,
	ETriggerEvent__ETriggerEvent_MAX6                                                = 17
};

/// Enum /Script/EnhancedInput.ETriggerType
/// Size: 0x04
enum ETriggerType : uint8_t
{
	ETriggerType__Explicit0                                                          = 0,
	ETriggerType__Implicit1                                                          = 1,
	ETriggerType__Blocker2                                                           = 2,
	ETriggerType__ETriggerType_MAX3                                                  = 3
};

/// Enum /Script/EnhancedInput.ETriggerEventsSupported
/// Size: 0x06
enum ETriggerEventsSupported : uint8_t
{
	ETriggerEventsSupported__None0                                                   = 0,
	ETriggerEventsSupported__Instant1                                                = 1,
	ETriggerEventsSupported__Uninterruptible2                                        = 2,
	ETriggerEventsSupported__Ongoing3                                                = 4,
	ETriggerEventsSupported__All4                                                    = 7,
	ETriggerEventsSupported__ETriggerEventsSupported_MAX5                            = 8
};

