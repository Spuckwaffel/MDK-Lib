
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BlueprintContext
/// dependency: CoreUObject

/// Class /Script/CommonInput.CommonInputContext
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UCommonInputContext : public UBlueprintContextBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UMulticastDelegate)                        OnInputMethodChanged                                        OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(ECommonInputType)                          CurrentInputType                                            OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(ECommonGamepadType)                        GamepadInputType                                            OFFSET(get<T>, {0xB1, 1, 0, 0})
	DMember(bool)                                      bIsGamepadSimulatedClick                                    OFFSET(get<bool>, {0xC9, 1, 0, 0})


	/// Functions
	// Function /Script/CommonInput.CommonInputContext.SetGamepadInputType
	// void SetGamepadInputType(ECommonGamepadType InGamepadInputType);                                                         // [0x311640] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonInput.CommonInputContext.SetCurrentInputType
	// void SetCurrentInputType(ECommonInputType NewInputType);                                                                 // [0x311570] Final|Native|Public|BlueprintCallable 
	// Function /Script/CommonInput.CommonInputContext.IsUsingPointerInput
	// bool IsUsingPointerInput();                                                                                              // [0x311510] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputContext.InputMethodChangedDelegate__DelegateSignature
	// void InputMethodChangedDelegate__DelegateSignature(ECommonInputType bNewInputType);                                      // [0x154a140] MulticastDelegate|Public|Delegate 
	// Function /Script/CommonInput.CommonInputContext.GetCurrentInputType
	// ECommonInputType GetCurrentInputType();                                                                                  // [0x3114b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CommonInput.CommonInputContext.GetCurrentGamepadType
	// ECommonGamepadType GetCurrentGamepadType();                                                                              // [0x311450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Enum /Script/CommonInput.ECommonGamepadType
/// Size: 0x05
enum ECommonGamepadType : uint8_t
{
	ECommonGamepadType__XboxOneController0                                           = 0,
	ECommonGamepadType__PS4Controller1                                               = 1,
	ECommonGamepadType__SwitchController2                                            = 2,
	ECommonGamepadType__Count3                                                       = 3,
	ECommonGamepadType__ECommonGamepadType_MAX4                                      = 4
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

