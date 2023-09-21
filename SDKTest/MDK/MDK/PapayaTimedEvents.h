
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: NetCore

/// Class /Script/PapayaTimedEvents.PapayaTimedEvents
/// Size: 0x01D8 (0x000290 - 0x000468)
class APapayaTimedEvents : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	CMember(TMap<FString, UMediaPlayer*>)              MediaPlayerMap                                              ___ OFFSET(get<T>, {0x290, 80, 0, 0})
	CMember(UPapayaTimedEventsResponderComponent*)     MeshEventResponder                                          ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(TArray<AActor*>)                           TimedEventActorTargets                                      ___ OFFSET(get<T>, {0x2E8, 16, 0, 0})
	SMember(FMediaTimeEventArray)                      TimedEventsArray                                            ___ OFFSET(get<T>, {0x300, 280, 0, 0})
	SMember(FString)                                   ScreenName                                                  ___ OFFSET(get<T>, {0x430, 16, 0, 0})
};

/// Class /Script/PapayaTimedEvents.PapayaTimedEventsResponderComponent
/// Size: 0x0078 (0x0000E8 - 0x000160)
class UPapayaTimedEventsResponderComponent : public UFortEventResponderComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Struct /Script/PapayaTimedEvents.MediaTimeEventItem
/// Size: 0x002C (0x00000C - 0x000038)
class FMediaTimeEventItem : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   EventName                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int64_t)                                   Time                                                        ___ OFFSET(get<int64_t>, {0x20, 8, 0, 0})
	SMember(FString)                                   Parameter                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/PapayaTimedEvents.MediaTimeEventArray
/// Size: 0x0010 (0x000108 - 0x000118)
class FMediaTimeEventArray : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FMediaTimeEventItem>)               Items                                                       ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

