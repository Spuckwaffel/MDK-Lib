
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/


/// Struct /Script/ScheduledEvents.EventRecord
/// Size: 0x0020 (0x000000 - 0x000020)
class FEventRecord : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   EventType                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FDateTime)                                 ActiveUntil                                                 ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FDateTime)                                 ActiveSince                                                 ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/ScheduledEvents.EventChannelState
/// Size: 0x0038 (0x000000 - 0x000038)
class FEventChannelState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FDateTime)                                 ValidFrom                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FEventRecord>)                      ActiveEvents                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FJsonObjectWrapper)                        State                                                       ___ OFFSET(get<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/ScheduledEvents.EventsTimeline
/// Size: 0x0018 (0x000000 - 0x000018)
class FEventsTimeline : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FDateTime)                                 CacheExpire                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FEventChannelState>)                States                                                      ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ScheduledEvents.CalendarDownload
/// Size: 0x0060 (0x000000 - 0x000060)
class FCalendarDownload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FDateTime)                                 CurrentTime                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(double)                                    CacheIntervalMins                                           ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	CMember(TMap<FString, FEventsTimeline>)            Channels                                                    ___ OFFSET(get<T>, {0x10, 80, 0, 0})
};

