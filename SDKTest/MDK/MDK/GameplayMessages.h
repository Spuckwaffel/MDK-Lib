
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/GameplayMessages.AsyncAction_RegisterGameplayMessageReceiver
/// Size: 0x0068 (0x000030 - 0x000098)
class UAsyncAction_RegisterGameplayMessageReceiver : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnMessageReceived                                           ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HandleSavedState                                            ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  HandleStateCleared                                          ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/GameplayMessages.GameplayMessageReplicator
/// Size: 0x0000 (0x000290 - 0x000290)
class AGameplayMessageReplicator : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/GameplayMessages.GameplayMessageRouter
/// Size: 0x00A8 (0x000030 - 0x0000D8)
class UGameplayMessageRouter : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(AGameplayMessageReplicator*)               MessageReplicator                                           ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
};

/// Class /Script/GameplayMessages.BlueprintEventMessageTagLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlueprintEventMessageTagLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayMessages.EventMessageTag
/// Size: 0x0000 (0x000004 - 0x000004)
class FEventMessageTag : public FGameplayTag
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
};

/// Struct /Script/GameplayMessages.ReplicatedMessageData
/// Size: 0x0018 (0x000000 - 0x000018)
class FReplicatedMessageData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UScriptStruct*)                            StructType                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/GameplayMessages.ReplicatedMessage
/// Size: 0x0010 (0x000000 - 0x000010)
class FReplicatedMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayMessages.GameplayMessageReceiverHandle
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayMessageReceiverHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TWeakObjectPtr<UGameplayMessageRouter*>)   Subsystem                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FEventMessageTag)                          Channel                                                     ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ID                                                          ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/GameplayMessages.GameplayMessageReceiverData
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FGameplayMessageReceiverData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Enum /Script/GameplayMessages.EGameplayMessageMatchType
/// Size: 0x03
enum EGameplayMessageMatchType : uint8_t
{
	EGameplayMessageMatchType__ExactMatch0                                           = 0,
	EGameplayMessageMatchType__PartialMatch1                                         = 1,
	EGameplayMessageMatchType__EGameplayMessageMatchType_MAX2                        = 2
};

