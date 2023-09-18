/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameplayEventRouter.

/// Struct /Script/GameplayEventRouter.GameplayEventId
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayEventId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerHandle
/// Size: 0x001C (0x000000 - 0x00001C)
class FGameplayEventListenerHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   Handle                                                      ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FGameplayEventListenerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(UScriptStruct*)                            EventType                                                   ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UObject*)                                  EventContext                                                ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerList
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayEventListenerList : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent
/// Size: 0x0050 (0x000030 - 0x000080)
class UAsyncAction_StartListeningToEvent : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnEventReceived                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent
/// Size: 0x0070 (0x000030 - 0x0000A0)
class UAsyncAction_StartListeningToStatefulEvent : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  OnEventReceived                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSavedEventStateExists                                     ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEventStateCleared                                         ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/GameplayEventRouter.GameplayEventRouterComponent
/// Size: 0x0238 (0x0000A0 - 0x0002D8)
class UGameplayEventRouterComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
};

/// Class /Script/GameplayEventRouter.GameplayEventRouterOwnerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEventRouterOwnerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayEventRouter.GameplayEventRouterSubsytem
/// Size: 0x00B0 (0x000030 - 0x0000E0)
class UGameplayEventRouterSubsytem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
};

/// Enum /Script/GameplayEventRouter.EEventBubblingRule
/// Size: 0x04
enum EEventBubblingRule : uint8_t
{
	EEventBubblingRule__None0                                                        = 0,
	EEventBubblingRule__Down1                                                        = 1,
	EEventBubblingRule__Up2                                                          = 2,
	EEventBubblingRule__EEventBubblingRule_MAX3                                      = 3
};

