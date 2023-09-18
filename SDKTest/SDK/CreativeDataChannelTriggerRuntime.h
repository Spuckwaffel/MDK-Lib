/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CreativeDataChannelTriggerRuntime.

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringFloatArrayMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FCDCStringFloatArrayMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FVector>)                    Data                                                        ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCFloatArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FCDCFloatArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<float>)                             Data                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringFloatMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FCDCStringFloatMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, float>)                      Data                                                        ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringIntMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FCDCStringIntMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, int32_t>)                    Data                                                        ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCInt
/// Size: 0x0004 (0x000000 - 0x000004)
class FCDCInt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Data                                                        ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCLargeInt
/// Size: 0x0008 (0x000000 - 0x000008)
class FCDCLargeInt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Data                                                        ___ OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringStringMap
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FCDCStringStringMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FString, FString>)                    Data                                                        ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FString, int32_t>)                    ExtraData                                                   ___ OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCString
/// Size: 0x0010 (0x000000 - 0x000010)
class FCDCString : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Data                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringArray
/// Size: 0x0018 (0x000000 - 0x000018)
class FCDCStringArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FString>)                           Data                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ExtraData                                                   ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelEvents
/// Size: 0x0010 (0x000000 - 0x000010)
class FCreativeDataChannelEvents : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FCreativeDataChannelEvent>)         Events                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelEvent
/// Size: 0x000C (0x000000 - 0x00000C)
class FCreativeDataChannelEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     EventName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Parameters                                                  ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     TriggerCondition                                            ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Class /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelAnalytics
/// Size: 0x0000 (0x000028 - 0x000028)
class UCreativeDataChannelAnalytics : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget
/// Size: 0x0050 (0x000308 - 0x000358)
class ACreativeDataChannelTarget : public AElectraDataChannelTarget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	DMember(int8_t)                                    VersionByte                                                 ___ OFFSET(get<int8_t>, {0x310, 1, 0, 0})
	SMember(FCreativeDataChannelEvents)                Events                                                      ___ OFFSET(get<T>, {0x318, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEventsRep                                                 ___ OFFSET(get<T>, {0x328, 16, 0, 0})
	SMember(FCreativeDataChannelEvents)                EventsCache                                                 ___ OFFSET(get<T>, {0x338, 16, 0, 0})
};

/// Class /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetFN
/// Size: 0x02B8 (0x000308 - 0x0005C0)
class ACreativeDataChannelTargetFN : public AElectraDataChannelTarget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	DMember(int32_t)                                   VersionByte                                                 ___ OFFSET(get<int32_t>, {0x310, 4, 0, 0})
	SMember(FCDCInt)                                   VersionByteTracker                                          ___ OFFSET(get<T>, {0x314, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  VersionByteEvent                                            ___ OFFSET(get<T>, {0x318, 16, 0, 0})
	SMember(FString)                                   LeaderBoard                                                 ___ OFFSET(get<T>, {0x328, 16, 0, 0})
	DMember(int64_t)                                   StormCircleSize                                             ___ OFFSET(get<int64_t>, {0x338, 8, 0, 0})
	SMember(FCDCLargeInt)                              StormCircleSizeTracker                                      ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  StormCircleSizeEvent                                        ___ OFFSET(get<T>, {0x348, 16, 0, 0})
	CMember(TArray<float>)                             StormCircleLocation                                         ___ OFFSET(get<T>, {0x358, 16, 0, 0})
	SMember(FCDCFloatArray)                            StormCircleLocationTracker                                  ___ OFFSET(get<T>, {0x368, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  StormCircleLocationEvent                                    ___ OFFSET(get<T>, {0x378, 16, 0, 0})
	SMember(FString)                                   PlayerLocation                                              ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FCDCStringFloatArrayMap)                   PlayerLocationTracker                                       ___ OFFSET(get<T>, {0x398, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayerLocationEvent                                         ___ OFFSET(get<T>, {0x3E8, 16, 0, 0})
	SMember(FString)                                   ArenaPointLeaderBoard                                       ___ OFFSET(get<T>, {0x3F8, 16, 0, 0})
	SMember(FCDCStringStringMap)                       ArenaPointLeaderBoardTracker                                ___ OFFSET(get<T>, {0x408, 160, 0, 0})
	SMember(FMulticastInlineDelegate)                  ArenaPointLeaderBoardEvent                                  ___ OFFSET(get<T>, {0x4A8, 16, 0, 0})
	SMember(FString)                                   CashCupDataAllTimeEarners                                   ___ OFFSET(get<T>, {0x4B8, 16, 0, 0})
	SMember(FCDCStringFloatMap)                        CashCupDataAllTimeEanersTracker                             ___ OFFSET(get<T>, {0x4C8, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  CashCupDataAllTimeEarnersEvent                              ___ OFFSET(get<T>, {0x518, 16, 0, 0})
	SMember(FString)                                   MythicBossEliminatedPlayer                                  ___ OFFSET(get<T>, {0x528, 16, 0, 0})
	SMember(FCDCString)                                MythicBossEliminatedPlayerTracker                           ___ OFFSET(get<T>, {0x538, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  MythicBossEliminatedPlayerEvent                             ___ OFFSET(get<T>, {0x548, 16, 0, 0})
	SMember(FString)                                   MythicWeaponPlayer                                          ___ OFFSET(get<T>, {0x558, 16, 0, 0})
	SMember(FCDCString)                                MythicWeaponPlayerTracker                                   ___ OFFSET(get<T>, {0x568, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  MythicWeaponPlayerEvent                                     ___ OFFSET(get<T>, {0x578, 16, 0, 0})
	SMember(FString)                                   PlayerInfo                                                  ___ OFFSET(get<T>, {0x588, 16, 0, 0})
	SMember(FCDCStringArray)                           PlayerInfoTracker                                           ___ OFFSET(get<T>, {0x598, 24, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayerInfoEvent                                             ___ OFFSET(get<T>, {0x5B0, 16, 0, 0})
};

/// Class /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL
/// Size: 0x04C0 (0x000308 - 0x0007C8)
class ACreativeDataChannelTargetRL : public AElectraDataChannelTarget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1992;

public:
	DMember(int32_t)                                   VersionByte                                                 ___ OFFSET(get<int32_t>, {0x310, 4, 0, 0})
	SMember(FCDCInt)                                   VersionByteTracker                                          ___ OFFSET(get<T>, {0x314, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  VersionByteEvent                                            ___ OFFSET(get<T>, {0x318, 16, 0, 0})
	DMember(int32_t)                                   ScoreTeam                                                   ___ OFFSET(get<int32_t>, {0x328, 4, 0, 0})
	SMember(FCDCString)                                ScoreTeamTracker                                            ___ OFFSET(get<T>, {0x330, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ScoreTeamEvent                                              ___ OFFSET(get<T>, {0x340, 16, 0, 0})
	SMember(FString)                                   ScoreTotal                                                  ___ OFFSET(get<T>, {0x350, 16, 0, 0})
	SMember(FCDCStringIntMap)                          ScoreTotalTracker                                           ___ OFFSET(get<T>, {0x360, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  ScoreTotalEvent                                             ___ OFFSET(get<T>, {0x3B0, 16, 0, 0})
	DMember(int64_t)                                   ScoreboardTimeLeft                                          ___ OFFSET(get<int64_t>, {0x3C0, 8, 0, 0})
	SMember(FCDCLargeInt)                              ScoreboardTimeLeftTracker                                   ___ OFFSET(get<T>, {0x3C8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  ScoreboardTimeLeftEvent                                     ___ OFFSET(get<T>, {0x3D0, 16, 0, 0})
	SMember(FString)                                   ScoreboardBestOf                                            ___ OFFSET(get<T>, {0x3E0, 16, 0, 0})
	SMember(FCDCStringIntMap)                          ScoreboardBestOfTracker                                     ___ OFFSET(get<T>, {0x3F0, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  ScoreboardBestOfEvent                                       ___ OFFSET(get<T>, {0x440, 16, 0, 0})
	DMember(int32_t)                                   OverTime                                                    ___ OFFSET(get<int32_t>, {0x450, 4, 0, 0})
	SMember(FCDCInt)                                   OvertimeTracker                                             ___ OFFSET(get<T>, {0x454, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OvertimeEvent                                               ___ OFFSET(get<T>, {0x458, 16, 0, 0})
	SMember(FString)                                   TeamNames                                                   ___ OFFSET(get<T>, {0x468, 16, 0, 0})
	SMember(FCDCStringArray)                           TeamNamesTracker                                            ___ OFFSET(get<T>, {0x478, 24, 0, 0})
	SMember(FMulticastInlineDelegate)                  TeamNamesEvent                                              ___ OFFSET(get<T>, {0x490, 16, 0, 0})
	SMember(FString)                                   PlayerNames                                                 ___ OFFSET(get<T>, {0x4A0, 16, 0, 0})
	SMember(FCDCStringArray)                           PlayerNamesTracker                                          ___ OFFSET(get<T>, {0x4B0, 24, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayerNamesEvent                                            ___ OFFSET(get<T>, {0x4C8, 16, 0, 0})
	SMember(FString)                                   PlayerBoost                                                 ___ OFFSET(get<T>, {0x4D8, 16, 0, 0})
	SMember(FCDCStringIntMap)                          PlayerBoostTracker                                          ___ OFFSET(get<T>, {0x4E8, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayerBoostEvent                                            ___ OFFSET(get<T>, {0x538, 16, 0, 0})
	SMember(FString)                                   PlayerBoostCollected                                        ___ OFFSET(get<T>, {0x548, 16, 0, 0})
	SMember(FCDCStringStringMap)                       PlayerBoostCollectedTracker                                 ___ OFFSET(get<T>, {0x558, 160, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayerBoostCollectedEvent                                   ___ OFFSET(get<T>, {0x5F8, 16, 0, 0})
	SMember(FString)                                   PlayerCoords                                                ___ OFFSET(get<T>, {0x608, 16, 0, 0})
	SMember(FCDCStringFloatArrayMap)                   PlayerCoordsTracker                                         ___ OFFSET(get<T>, {0x618, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayerCoordsEvent                                           ___ OFFSET(get<T>, {0x668, 16, 0, 0})
	SMember(FString)                                   BallCoords                                                  ___ OFFSET(get<T>, {0x678, 16, 0, 0})
	SMember(FCDCFloatArray)                            BallCoordsTracker                                           ___ OFFSET(get<T>, {0x688, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BallCoordsEvent                                             ___ OFFSET(get<T>, {0x698, 16, 0, 0})
	SMember(FString)                                   MediaStart                                                  ___ OFFSET(get<T>, {0x6A8, 16, 0, 0})
	SMember(FCDCStringStringMap)                       MediaStartTracker                                           ___ OFFSET(get<T>, {0x6B8, 160, 0, 0})
	SMember(FMulticastInlineDelegate)                  MediaStartEvent                                             ___ OFFSET(get<T>, {0x758, 16, 0, 0})
	DMember(int32_t)                                   MediaStop                                                   ___ OFFSET(get<int32_t>, {0x768, 4, 0, 0})
	SMember(FCDCInt)                                   MediaStopTracker                                            ___ OFFSET(get<T>, {0x76C, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  MediaStopEvent                                              ___ OFFSET(get<T>, {0x770, 16, 0, 0})
	DMember(int32_t)                                   SeriesState                                                 ___ OFFSET(get<int32_t>, {0x780, 4, 0, 0})
	SMember(FCDCInt)                                   SeriesStateTracker                                          ___ OFFSET(get<T>, {0x784, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  SeriesStateEvent                                            ___ OFFSET(get<T>, {0x788, 16, 0, 0})
	DMember(int32_t)                                   MatchState                                                  ___ OFFSET(get<int32_t>, {0x798, 4, 0, 0})
	SMember(FCDCInt)                                   MatchStateTracker                                           ___ OFFSET(get<T>, {0x79C, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  MatchStateEvent                                             ___ OFFSET(get<T>, {0x7A0, 16, 0, 0})
	DMember(int32_t)                                   FinaleState                                                 ___ OFFSET(get<int32_t>, {0x7B0, 4, 0, 0})
	SMember(FCDCInt)                                   FinaleStateTracker                                          ___ OFFSET(get<T>, {0x7B4, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  FinaleStateEvent                                            ___ OFFSET(get<T>, {0x7B8, 16, 0, 0})
};

