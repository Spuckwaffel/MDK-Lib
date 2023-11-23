
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/GasDebuggerExternals.GasDebuggerCommandListener
/// Size: 0x0000 (0x000028 - 0x000028)
class UGasDebuggerCommandListener : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GasDebuggerExternals.GasEventHistoryProvider
/// Size: 0x0000 (0x000028 - 0x000028)
class UGasEventHistoryProvider : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GasDebuggerExternals.GasEventHistoryItem
/// Size: 0x0078 (0x000000 - 0x000078)
class FGasEventHistoryItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(uint16_t)                                  ID                                                          OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(char)                                      Depth                                                       OFFSET(get<char>, {0x2, 1, 0, 0})
	CMember(EAbilityHistoryClassType)                  ClassType                                                   OFFSET(get<T>, {0x3, 1, 0, 0})
	CMember(UClass*)                                   Class                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int64_t)                                   Timestamp                                                   OFFSET(get<int64_t>, {0x10, 8, 0, 0})
	SMember(FGameplayTag)                              InstigatingTag                                              OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Reason                                                      OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(EAbilityHistoryEventType)                  EventType                                                   OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FString)                                   BlueprintCallStack                                          OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	CMember(TArray<uint64_t>)                          NativeCallStack                                             OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   NativeCallStackAsString                                     OFFSET(getStruct<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/GasDebuggerExternals.GasEventHistory
/// Size: 0x0018 (0x000000 - 0x000018)
class FGasEventHistory : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FGasEventHistoryItem>)              Items                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   CurrentItemDepth                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Enum /Script/GasDebuggerExternals.EAbilityHistoryEventType
/// Size: 0x08
enum EAbilityHistoryEventType : uint8_t
{
	EAbilityHistoryEventType__Added0                                                 = 0,
	EAbilityHistoryEventType__Removed1                                               = 1,
	EAbilityHistoryEventType__Committed2                                             = 2,
	EAbilityHistoryEventType__Activated3                                             = 3,
	EAbilityHistoryEventType__Cancelled4                                             = 4,
	EAbilityHistoryEventType__Ended5                                                 = 5,
	EAbilityHistoryEventType__FailedActivation6                                      = 6,
	EAbilityHistoryEventType__EAbilityHistoryEventType_MAX7                          = 7
};

/// Enum /Script/GasDebuggerExternals.EAbilityHistoryClassType
/// Size: 0x05
enum EAbilityHistoryClassType : uint8_t
{
	EAbilityHistoryClassType__Ability0                                               = 0,
	EAbilityHistoryClassType__Effect1                                                = 1,
	EAbilityHistoryClassType__Tag2                                                   = 2,
	EAbilityHistoryClassType__NumTypes3                                              = 3,
	EAbilityHistoryClassType__EAbilityHistoryClassType_MAX4                          = 4
};

