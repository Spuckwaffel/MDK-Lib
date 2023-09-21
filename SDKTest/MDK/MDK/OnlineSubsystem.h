
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/OnlineSubsystem.NamedInterfaces
/// Size: 0x0038 (0x000028 - 0x000060)
class UNamedInterfaces : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FNamedInterface>)                   NamedInterfaces                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FNamedInterfaceDef>)                NamedInterfaceDefs                                          ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/OnlineSubsystem.TurnBasedMatchInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTurnBasedMatchInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/OnlineSubsystem.NamedInterface
/// Size: 0x0010 (0x000000 - 0x000010)
class FNamedInterface : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     InterfaceName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UObject*)                                  InterfaceObject                                             ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/OnlineSubsystem.NamedInterfaceDef
/// Size: 0x0018 (0x000000 - 0x000018)
class FNamedInterfaceDef : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     InterfaceName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   InterfaceClassName                                          ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Enum /Script/OnlineSubsystem.EInAppPurchaseState
/// Size: 0x09
enum EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Unknown0                                                    = 0,
	EInAppPurchaseState__Success1                                                    = 1,
	EInAppPurchaseState__Failed2                                                     = 2,
	EInAppPurchaseState__Cancelled3                                                  = 3,
	EInAppPurchaseState__Invalid4                                                    = 4,
	EInAppPurchaseState__NotAllowed5                                                 = 5,
	EInAppPurchaseState__Restored6                                                   = 6,
	EInAppPurchaseState__AlreadyOwned7                                               = 7,
	EInAppPurchaseState__EInAppPurchaseState_MAX8                                    = 8
};

/// Enum /Script/OnlineSubsystem.EMPMatchOutcome
/// Size: 0x11
enum EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None0                                                           = 0,
	EMPMatchOutcome__Quit1                                                           = 1,
	EMPMatchOutcome__Won2                                                            = 2,
	EMPMatchOutcome__Lost3                                                           = 3,
	EMPMatchOutcome__Tied4                                                           = 4,
	EMPMatchOutcome__TimeExpired5                                                    = 5,
	EMPMatchOutcome__First6                                                          = 6,
	EMPMatchOutcome__Second7                                                         = 7,
	EMPMatchOutcome__Third8                                                          = 8,
	EMPMatchOutcome__Fourth9                                                         = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX10                                           = 10
};

