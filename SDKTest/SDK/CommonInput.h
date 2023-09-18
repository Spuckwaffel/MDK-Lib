/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CommonInput.

/// Struct /Script/CommonInput.CommonInputKeyBrushConfiguration
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FCommonInputKeyBrushConfiguration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FKey)                                      Key                                                         ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FSlateBrush)                               KeyBrush                                                    ___ OFFSET(get<T>, {0x20, 192, 0, 0})
};

/// Struct /Script/CommonInput.CommonInputKeySetBrushConfiguration
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FCommonInputKeySetBrushConfiguration : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FKey>)                              Keys                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FSlateBrush)                               KeyBrush                                                    ___ OFFSET(get<T>, {0x10, 192, 0, 0})
};

/// Struct /Script/CommonInput.InputDeviceIdentifierPair
/// Size: 0x0018 (0x000000 - 0x000018)
class FInputDeviceIdentifierPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     InputDeviceName                                             ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   HardwareDeviceIdentifier                                    ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CommonInput.InputHoldData
/// Size: 0x0008 (0x000000 - 0x000008)
class FInputHoldData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     HoldTime                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     HoldRollbackTime                                            ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CommonInput.CommonInputPlatformBaseData
/// Size: 0x0038 (0x000000 - 0x000038)
class FCommonInputPlatformBaseData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(ECommonInputType)                          DefaultInputType                                            ___ OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      bSupportsMouseAndKeyboard                                   ___ OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bSupportsGamepad                                            ___ OFFSET(get<bool>, {0xA, 1, 0, 0})
	SMember(FName)                                     DefaultGamepadName                                          ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(bool)                                      bCanChangeGamepadType                                       ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(bool)                                      bSupportsTouch                                              ___ OFFSET(get<bool>, {0x11, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ControllerData                                              ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<UClass*>)                           ControllerDataClasses                                       ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/CommonInput.CommonInputActionDomain
/// Size: 0x0010 (0x000030 - 0x000040)
class UCommonInputActionDomain : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ECommonInputEventFlowBehavior)             Behavior                                                    ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(ECommonInputEventFlowBehavior)             InnerBehavior                                               ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	DMember(bool)                                      bUseActionDomainDesiredInputConfig                          ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	CMember(ECommonInputMode)                          InputMode                                                   ___ OFFSET(get<T>, {0x39, 1, 0, 0})
	CMember(EMouseCaptureMode)                         MouseCaptureMode                                            ___ OFFSET(get<T>, {0x3A, 1, 0, 0})
};

/// Class /Script/CommonInput.CommonInputActionDomainTable
/// Size: 0x0018 (0x000030 - 0x000048)
class UCommonInputActionDomainTable : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<UCommonInputActionDomain*>)         ActionDomains                                               ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(ECommonInputMode)                          InputMode                                                   ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(EMouseCaptureMode)                         MouseCaptureMode                                            ___ OFFSET(get<T>, {0x41, 1, 0, 0})
};

/// Class /Script/CommonInput.CommonUIInputData
/// Size: 0x0050 (0x000028 - 0x000078)
class UCommonUIInputData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FDataTableRowHandle)                       DefaultClickAction                                          ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FDataTableRowHandle)                       DefaultBackAction                                           ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultHoldData                                             ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(UInputAction*)                             EnhancedInputClickAction                                    ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UInputAction*)                             EnhancedInputBackAction                                     ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/CommonInput.CommonUIHoldData
/// Size: 0x0018 (0x000028 - 0x000040)
class UCommonUIHoldData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FInputHoldData)                            KeyboardAndMouse                                            ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FInputHoldData)                            Gamepad                                                     ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FInputHoldData)                            Touch                                                       ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/CommonInput.CommonInputBaseControllerData
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UCommonInputBaseControllerData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(ECommonInputType)                          InputType                                                   ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	SMember(FName)                                     GamepadName                                                 ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	SMember(FText)                                     GamepadDisplayName                                          ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     GamepadCategory                                             ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	SMember(FText)                                     GamepadPlatformName                                         ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	CMember(TArray<FInputDeviceIdentifierPair>)        GamepadHardwareIdMapping                                    ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               ControllerTexture                                           ___ OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               ControllerButtonMaskTexture                                 ___ OFFSET(get<T>, {0xA8, 32, 0, 0})
	CMember(TArray<FCommonInputKeyBrushConfiguration>) InputBrushDataMap                                           ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FCommonInputKeySetBrushConfiguration>) InputBrushKeySets                                        ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/CommonInput.CommonInputPlatformSettings
/// Size: 0x0030 (0x000040 - 0x000070)
class UCommonInputPlatformSettings : public UPlatformSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(ECommonInputType)                          DefaultInputType                                            ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	DMember(bool)                                      bSupportsMouseAndKeyboard                                   ___ OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bSupportsTouch                                              ___ OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bSupportsGamepad                                            ___ OFFSET(get<bool>, {0x43, 1, 0, 0})
	SMember(FName)                                     DefaultGamepadName                                          ___ OFFSET(get<T>, {0x44, 4, 0, 0})
	DMember(bool)                                      bCanChangeGamepadType                                       ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ControllerData                                              ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<UClass*>)                           ControllerDataClasses                                       ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/CommonInput.CommonInputSettings
/// Size: 0x00D8 (0x000030 - 0x000108)
class UCommonInputSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(TWeakObjectPtr<UClass*>)                   InputData                                                   ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FPerPlatformSettings)                      PlatformInput                                               ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TMap<FName, FCommonInputPlatformBaseData>) CommonInputPlatformData                                     ___ OFFSET(get<T>, {0x60, 80, 0, 0})
	DMember(bool)                                      bEnableInputMethodThrashingProtection                       ___ OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(int32_t)                                   InputMethodThrashingLimit                                   ___ OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(double)                                    InputMethodThrashingWindowInSeconds                         ___ OFFSET(get<double>, {0xB8, 8, 0, 0})
	DMember(double)                                    InputMethodThrashingCooldownInSeconds                       ___ OFFSET(get<double>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bAllowOutOfFocusDeviceInput                                 ___ OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      bEnableDefaultInputConfig                                   ___ OFFSET(get<bool>, {0xC9, 1, 0, 0})
	DMember(bool)                                      bEnableEnhancedInputSupport                                 ___ OFFSET(get<bool>, {0xCA, 1, 0, 0})
	CMember(TWeakObjectPtr<UCommonInputActionDomainTable*>) ActionDomainTable                                      ___ OFFSET(get<T>, {0xD0, 32, 0, 0})
	CMember(UClass*)                                   InputDataClass                                              ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(UCommonInputActionDomainTable*)            ActionDomainTablePtr                                        ___ OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Class /Script/CommonInput.CommonInputSubsystem
/// Size: 0x00D8 (0x000030 - 0x000108)
class UCommonInputSubsystem : public ULocalPlayerSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  OnInputMethodChanged                                        ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(int32_t)                                   NumberOfInputMethodChangesRecently                          ___ OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(double)                                    LastInputMethodChangeTime                                   ___ OFFSET(get<double>, {0x80, 8, 0, 0})
	DMember(double)                                    LastTimeInputMethodThrashingBegan                           ___ OFFSET(get<double>, {0x88, 8, 0, 0})
	CMember(ECommonInputType)                          LastInputType                                               ___ OFFSET(get<T>, {0x90, 1, 0, 0})
	CMember(ECommonInputType)                          CurrentInputType                                            ___ OFFSET(get<T>, {0x91, 1, 0, 0})
	SMember(FName)                                     GamepadInputType                                            ___ OFFSET(get<T>, {0x94, 4, 0, 0})
	CMember(TMap<FName, ECommonInputType>)             CurrentInputLocks                                           ___ OFFSET(get<T>, {0x98, 80, 0, 0})
	CMember(UCommonInputActionDomainTable*)            ActionDomainTable                                           ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bIsGamepadSimulatedClick                                    ___ OFFSET(get<bool>, {0xF8, 1, 0, 0})
};

/// Enum /Script/CommonInput.ECommonInputType
/// Size: 0x05
enum ECommonInputType : uint8_t
{
	ECommonInputType__MouseAndKeyboard0                                              = 0,
	ECommonInputType__Gamepad1                                                       = 1,
	ECommonInputType__Touch2                                                         = 2,
	ECommonInputType__Count3                                                         = 3,
	ECommonInputType__ECommonInputType_MAX4                                          = 4
};

/// Enum /Script/CommonInput.ECommonInputMode
/// Size: 0x04
enum ECommonInputMode : uint8_t
{
	ECommonInputMode__Menu0                                                          = 0,
	ECommonInputMode__Game1                                                          = 1,
	ECommonInputMode__All2                                                           = 2,
	ECommonInputMode__MAX3                                                           = 3
};

/// Enum /Script/CommonInput.ECommonInputEventFlowBehavior
/// Size: 0x04
enum ECommonInputEventFlowBehavior : uint8_t
{
	ECommonInputEventFlowBehavior__BlockIfActive0                                    = 0,
	ECommonInputEventFlowBehavior__BlockIfHandled1                                   = 1,
	ECommonInputEventFlowBehavior__NeverBlock2                                       = 2,
	ECommonInputEventFlowBehavior__ECommonInputEventFlowBehavior_MAX3                = 3
};

