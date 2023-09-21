
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/InputCore.InputCoreTypes
/// Size: 0x0000 (0x000028 - 0x000028)
class UInputCoreTypes : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/InputCore.Key
/// Size: 0x0018 (0x000000 - 0x000018)
class FKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     KeyName                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Enum /Script/InputCore.ETouchIndex
/// Size: 0x13
enum ETouchIndex : uint8_t
{
	ETouchIndex__Touch10                                                             = 0,
	ETouchIndex__Touch21                                                             = 1,
	ETouchIndex__Touch32                                                             = 2,
	ETouchIndex__Touch43                                                             = 3,
	ETouchIndex__Touch54                                                             = 4,
	ETouchIndex__Touch65                                                             = 5,
	ETouchIndex__Touch76                                                             = 6,
	ETouchIndex__Touch87                                                             = 7,
	ETouchIndex__Touch98                                                             = 8,
	ETouchIndex__Touch109                                                            = 9,
	ETouchIndex__CursorPointerIndex10                                                = 10,
	ETouchIndex__MAX_TOUCHES11                                                       = 11,
	ETouchIndex__ETouchIndex_MAX12                                                   = 12
};

/// Enum /Script/InputCore.EControllerHand
/// Size: 0x20
enum EControllerHand : uint8_t
{
	EControllerHand__Left0                                                           = 0,
	EControllerHand__Right1                                                          = 1,
	EControllerHand__AnyHand2                                                        = 2,
	EControllerHand__Pad3                                                            = 3,
	EControllerHand__ExternalCamera4                                                 = 4,
	EControllerHand__Gun5                                                            = 5,
	EControllerHand__HMD6                                                            = 6,
	EControllerHand__Chest7                                                          = 7,
	EControllerHand__LeftShoulder8                                                   = 8,
	EControllerHand__RightShoulder9                                                  = 9,
	EControllerHand__LeftElbow10                                                     = 10,
	EControllerHand__RightElbow11                                                    = 11,
	EControllerHand__Waist12                                                         = 12,
	EControllerHand__LeftKnee13                                                      = 13,
	EControllerHand__RightKnee14                                                     = 14,
	EControllerHand__LeftFoot15                                                      = 15,
	EControllerHand__RightFoot16                                                     = 16,
	EControllerHand__Special17                                                       = 17,
	EControllerHand__ControllerHand_Count18                                          = 18,
	EControllerHand__EControllerHand_MAX19                                           = 19
};

/// Enum /Script/InputCore.EConsoleForGamepadLabels
/// Size: 0x04
enum EConsoleForGamepadLabels : uint8_t
{
	EConsoleForGamepadLabels__None0                                                  = 0,
	EConsoleForGamepadLabels__XBoxOne1                                               = 1,
	EConsoleForGamepadLabels__PS42                                                   = 2,
	EConsoleForGamepadLabels__EConsoleForGamepadLabels_MAX3                          = 3
};

/// Enum /Script/InputCore.ETouchType
/// Size: 0x08
enum ETouchType : uint8_t
{
	ETouchType__Began0                                                               = 0,
	ETouchType__Moved1                                                               = 1,
	ETouchType__Stationary2                                                          = 2,
	ETouchType__ForceChanged3                                                        = 3,
	ETouchType__FirstMove4                                                           = 4,
	ETouchType__Ended5                                                               = 5,
	ETouchType__NumTypes6                                                            = 6,
	ETouchType__ETouchType_MAX7                                                      = 7
};

