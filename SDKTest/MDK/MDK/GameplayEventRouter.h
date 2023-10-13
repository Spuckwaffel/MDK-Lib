
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent
/// Size: 0x0078 (0x000030 - 0x0000A8)
class UAsyncAction_StartListeningToEvent : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  OnEventReceived                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.StopListeningToEvent
	// void StopListeningToEvent();                                                                                             // [0x21a1844] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.StartListeningToEventBackwardCompatible
	// UAsyncAction_StartListeningToEvent* StartListeningToEventBackwardCompatible(UObject* WorldContextObject, FEventMessageTag Channel, UGameplayEventRouterComponent* Target, UScriptStruct* EventType, UObject* Context, EEventBubblingRule EventBubblingRule); // [0x176908c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.StartListeningToEvent
	// UAsyncAction_StartListeningToEvent* StartListeningToEvent(UObject* WorldContextObject, UGameplayEventRouterComponent* Target, UScriptStruct* EventType, UObject* Context, EEventBubblingRule EventBubblingRule); // [0x6383ea8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.GetPayload
	// bool GetPayload(int32_t& OutPayload);                                                                                    // [0x31d6a68] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UAsyncAction_StartListeningToStatefulEvent : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FMulticastInlineDelegate)                  OnEventReceived                                             OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSavedEventStateExists                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEventStateCleared                                         OFFSET(getStruct<T>, {0x50, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StopListeningToStatefulEvent
	// void StopListeningToStatefulEvent();                                                                                     // [0x21a1844] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StartListeningToStatefulEventBackwardsCompatible
	// UAsyncAction_StartListeningToStatefulEvent* StartListeningToStatefulEventBackwardsCompatible(UObject* WorldContextObject, FEventMessageTag Channel, UGameplayEventRouterComponent* Target, UScriptStruct* EventType, UObject* Context, EEventBubblingRule EventBubblingRule); // [0x6384024] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StartListeningToStatefulEvent
	// UAsyncAction_StartListeningToStatefulEvent* StartListeningToStatefulEvent(UObject* WorldContextObject, UGameplayEventRouterComponent* Target, UScriptStruct* EventType, UObject* Context, EEventBubblingRule EventBubblingRule); // [0x1768838] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.GetPayload
	// bool GetPayload(int32_t& OutPayload);                                                                                    // [0x6383040] Final|Native|Public|HasOutParms|BlueprintCallable 
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
/// Size: 0x0108 (0x000030 - 0x000138)
class UGameplayEventRouterSubsytem : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
};

/// Struct /Script/GameplayEventRouter.GameplayEventId
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayEventId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerHandle
/// Size: 0x001C (0x000000 - 0x00001C)
class FGameplayEventListenerHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   Handle                                                      OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerBackwardCompatibleHandle
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayEventListenerBackwardCompatibleHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FGameplayEventListenerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(UScriptStruct*)                            EventType                                                   OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UObject*)                                  EventContext                                                OFFSET(get<T>, {0xC8, 8, 0, 0})
};

/// Struct /Script/GameplayEventRouter.GameplayEventListenerList
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayEventListenerList : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

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

