
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: ElectraDataChannelRuntime
/// dependency: Engine

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
	DMember(int8_t)                                    VersionByte                                                 OFFSET(get<int8_t>, {0x310, 1, 0, 0})
	SMember(FCreativeDataChannelEvents)                Events                                                      OFFSET(get<T>, {0x318, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEventsRep                                                 OFFSET(get<T>, {0x328, 16, 0, 0})
	SMember(FCreativeDataChannelEvents)                EventsCache                                                 OFFSET(get<T>, {0x338, 16, 0, 0})


	/// Functions
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.TestCreativeDataChannelTarget
	// void TestCreativeDataChannelTarget(FCreativeDataChannelEvents TestEvents);                                               // [0x9abc734] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.OnRep_Events
	// void OnRep_Events();                                                                                                     // [0x2d79908] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget.FireEvent
	// void FireEvent(FName EventName);                                                                                         // [0x1ebf994] Event|Public|BlueprintEvent 
};

/// Class /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetFN
/// Size: 0x02B8 (0x000308 - 0x0005C0)
class ACreativeDataChannelTargetFN : public AElectraDataChannelTarget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
	DMember(int32_t)                                   VersionByte                                                 OFFSET(get<int32_t>, {0x310, 4, 0, 0})
	SMember(FCDCInt)                                   VersionByteTracker                                          OFFSET(get<T>, {0x314, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  VersionByteEvent                                            OFFSET(get<T>, {0x318, 16, 0, 0})
	SMember(FString)                                   LeaderBoard                                                 OFFSET(get<T>, {0x328, 16, 0, 0})
	DMember(int64_t)                                   StormCircleSize                                             OFFSET(get<int64_t>, {0x338, 8, 0, 0})
	SMember(FCDCLargeInt)                              StormCircleSizeTracker                                      OFFSET(get<T>, {0x340, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  StormCircleSizeEvent                                        OFFSET(get<T>, {0x348, 16, 0, 0})
	CMember(TArray<float>)                             StormCircleLocation                                         OFFSET(get<T>, {0x358, 16, 0, 0})
	SMember(FCDCFloatArray)                            StormCircleLocationTracker                                  OFFSET(get<T>, {0x368, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  StormCircleLocationEvent                                    OFFSET(get<T>, {0x378, 16, 0, 0})
	SMember(FString)                                   PlayerLocation                                              OFFSET(get<T>, {0x388, 16, 0, 0})
	SMember(FCDCStringFloatArrayMap)                   PlayerLocationTracker                                       OFFSET(get<T>, {0x398, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayerLocationEvent                                         OFFSET(get<T>, {0x3E8, 16, 0, 0})
	SMember(FString)                                   ArenaPointLeaderBoard                                       OFFSET(get<T>, {0x3F8, 16, 0, 0})
	SMember(FCDCStringStringMap)                       ArenaPointLeaderBoardTracker                                OFFSET(get<T>, {0x408, 160, 0, 0})
	SMember(FMulticastInlineDelegate)                  ArenaPointLeaderBoardEvent                                  OFFSET(get<T>, {0x4A8, 16, 0, 0})
	SMember(FString)                                   CashCupDataAllTimeEarners                                   OFFSET(get<T>, {0x4B8, 16, 0, 0})
	SMember(FCDCStringFloatMap)                        CashCupDataAllTimeEanersTracker                             OFFSET(get<T>, {0x4C8, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  CashCupDataAllTimeEarnersEvent                              OFFSET(get<T>, {0x518, 16, 0, 0})
	SMember(FString)                                   MythicBossEliminatedPlayer                                  OFFSET(get<T>, {0x528, 16, 0, 0})
	SMember(FCDCString)                                MythicBossEliminatedPlayerTracker                           OFFSET(get<T>, {0x538, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  MythicBossEliminatedPlayerEvent                             OFFSET(get<T>, {0x548, 16, 0, 0})
	SMember(FString)                                   MythicWeaponPlayer                                          OFFSET(get<T>, {0x558, 16, 0, 0})
	SMember(FCDCString)                                MythicWeaponPlayerTracker                                   OFFSET(get<T>, {0x568, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  MythicWeaponPlayerEvent                                     OFFSET(get<T>, {0x578, 16, 0, 0})
	SMember(FString)                                   PlayerInfo                                                  OFFSET(get<T>, {0x588, 16, 0, 0})
	SMember(FCDCStringArray)                           PlayerInfoTracker                                           OFFSET(get<T>, {0x598, 24, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayerInfoEvent                                             OFFSET(get<T>, {0x5B0, 16, 0, 0})
};

/// Class /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL
/// Size: 0x04C0 (0x000308 - 0x0007C8)
class ACreativeDataChannelTargetRL : public AElectraDataChannelTarget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1992;

public:
	DMember(int32_t)                                   VersionByte                                                 OFFSET(get<int32_t>, {0x310, 4, 0, 0})
	SMember(FCDCInt)                                   VersionByteTracker                                          OFFSET(get<T>, {0x314, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  VersionByteEvent                                            OFFSET(get<T>, {0x318, 16, 0, 0})
	DMember(int32_t)                                   ScoreTeam                                                   OFFSET(get<int32_t>, {0x328, 4, 0, 0})
	SMember(FCDCString)                                ScoreTeamTracker                                            OFFSET(get<T>, {0x330, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ScoreTeamEvent                                              OFFSET(get<T>, {0x340, 16, 0, 0})
	SMember(FString)                                   ScoreTotal                                                  OFFSET(get<T>, {0x350, 16, 0, 0})
	SMember(FCDCStringIntMap)                          ScoreTotalTracker                                           OFFSET(get<T>, {0x360, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  ScoreTotalEvent                                             OFFSET(get<T>, {0x3B0, 16, 0, 0})
	DMember(int64_t)                                   ScoreboardTimeLeft                                          OFFSET(get<int64_t>, {0x3C0, 8, 0, 0})
	SMember(FCDCLargeInt)                              ScoreboardTimeLeftTracker                                   OFFSET(get<T>, {0x3C8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  ScoreboardTimeLeftEvent                                     OFFSET(get<T>, {0x3D0, 16, 0, 0})
	SMember(FString)                                   ScoreboardBestOf                                            OFFSET(get<T>, {0x3E0, 16, 0, 0})
	SMember(FCDCStringIntMap)                          ScoreboardBestOfTracker                                     OFFSET(get<T>, {0x3F0, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  ScoreboardBestOfEvent                                       OFFSET(get<T>, {0x440, 16, 0, 0})
	DMember(int32_t)                                   OverTime                                                    OFFSET(get<int32_t>, {0x450, 4, 0, 0})
	SMember(FCDCInt)                                   OvertimeTracker                                             OFFSET(get<T>, {0x454, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OvertimeEvent                                               OFFSET(get<T>, {0x458, 16, 0, 0})
	SMember(FString)                                   TeamNames                                                   OFFSET(get<T>, {0x468, 16, 0, 0})
	SMember(FCDCStringArray)                           TeamNamesTracker                                            OFFSET(get<T>, {0x478, 24, 0, 0})
	SMember(FMulticastInlineDelegate)                  TeamNamesEvent                                              OFFSET(get<T>, {0x490, 16, 0, 0})
	SMember(FString)                                   PlayerNames                                                 OFFSET(get<T>, {0x4A0, 16, 0, 0})
	SMember(FCDCStringArray)                           PlayerNamesTracker                                          OFFSET(get<T>, {0x4B0, 24, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayerNamesEvent                                            OFFSET(get<T>, {0x4C8, 16, 0, 0})
	SMember(FString)                                   PlayerBoost                                                 OFFSET(get<T>, {0x4D8, 16, 0, 0})
	SMember(FCDCStringIntMap)                          PlayerBoostTracker                                          OFFSET(get<T>, {0x4E8, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayerBoostEvent                                            OFFSET(get<T>, {0x538, 16, 0, 0})
	SMember(FString)                                   PlayerBoostCollected                                        OFFSET(get<T>, {0x548, 16, 0, 0})
	SMember(FCDCStringStringMap)                       PlayerBoostCollectedTracker                                 OFFSET(get<T>, {0x558, 160, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayerBoostCollectedEvent                                   OFFSET(get<T>, {0x5F8, 16, 0, 0})
	SMember(FString)                                   PlayerCoords                                                OFFSET(get<T>, {0x608, 16, 0, 0})
	SMember(FCDCStringFloatArrayMap)                   PlayerCoordsTracker                                         OFFSET(get<T>, {0x618, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayerCoordsEvent                                           OFFSET(get<T>, {0x668, 16, 0, 0})
	SMember(FString)                                   BallCoords                                                  OFFSET(get<T>, {0x678, 16, 0, 0})
	SMember(FCDCFloatArray)                            BallCoordsTracker                                           OFFSET(get<T>, {0x688, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  BallCoordsEvent                                             OFFSET(get<T>, {0x698, 16, 0, 0})
	SMember(FString)                                   MediaStart                                                  OFFSET(get<T>, {0x6A8, 16, 0, 0})
	SMember(FCDCStringStringMap)                       MediaStartTracker                                           OFFSET(get<T>, {0x6B8, 160, 0, 0})
	SMember(FMulticastInlineDelegate)                  MediaStartEvent                                             OFFSET(get<T>, {0x758, 16, 0, 0})
	DMember(int32_t)                                   MediaStop                                                   OFFSET(get<int32_t>, {0x768, 4, 0, 0})
	SMember(FCDCInt)                                   MediaStopTracker                                            OFFSET(get<T>, {0x76C, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  MediaStopEvent                                              OFFSET(get<T>, {0x770, 16, 0, 0})
	DMember(int32_t)                                   SeriesState                                                 OFFSET(get<int32_t>, {0x780, 4, 0, 0})
	SMember(FCDCInt)                                   SeriesStateTracker                                          OFFSET(get<T>, {0x784, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  SeriesStateEvent                                            OFFSET(get<T>, {0x788, 16, 0, 0})
	DMember(int32_t)                                   MatchState                                                  OFFSET(get<int32_t>, {0x798, 4, 0, 0})
	SMember(FCDCInt)                                   MatchStateTracker                                           OFFSET(get<T>, {0x79C, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  MatchStateEvent                                             OFFSET(get<T>, {0x7A0, 16, 0, 0})
	DMember(int32_t)                                   FinaleState                                                 OFFSET(get<int32_t>, {0x7B0, 4, 0, 0})
	SMember(FCDCInt)                                   FinaleStateTracker                                          OFFSET(get<T>, {0x7B4, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  FinaleStateEvent                                            OFFSET(get<T>, {0x7B8, 16, 0, 0})


	/// Functions
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.ReportServerStateStreamError
	// void ReportServerStateStreamError(FString Error, FString UID, FString URL);                                              // [0x9abb9e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_VersionByte
	// void OnRep_VersionByte();                                                                                                // [0x9abb9a8] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_TeamNames
	// void OnRep_TeamNames();                                                                                                  // [0x9abb940] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_SeriesState
	// void OnRep_SeriesState();                                                                                                // [0x9abb908] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTotal
	// void OnRep_ScoreTotal();                                                                                                 // [0x9abb8a4] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTeam
	// void OnRep_ScoreTeam();                                                                                                  // [0x9abb890] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardTimeLeft
	// void OnRep_ScoreboardTimeLeft();                                                                                         // [0x9abb8cc] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardBestOf
	// void OnRep_ScoreboardBestOf();                                                                                           // [0x9abb8b8] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerNames
	// void OnRep_PlayerNames();                                                                                                // [0x9abb87c] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerCoords
	// void OnRep_PlayerCoords();                                                                                               // [0x9abb868] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoostCollected
	// void OnRep_PlayerBoostCollected();                                                                                       // [0x9abb854] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoost
	// void OnRep_PlayerBoost();                                                                                                // [0x9abb840] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_Overtime
	// void OnRep_Overtime();                                                                                                   // [0x9abb808] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStop
	// void OnRep_MediaStop();                                                                                                  // [0x9abb7d0] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStart
	// void OnRep_MediaStart();                                                                                                 // [0x9abb7bc] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MatchState
	// void OnRep_MatchState();                                                                                                 // [0x9abb784] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_FinaleState
	// void OnRep_FinaleState();                                                                                                // [0x9abb74c] Final|Native|Public  
	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_BallCoords
	// void OnRep_BallCoords();                                                                                                 // [0x9abb738] Final|Native|Public  
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringFloatArrayMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FCDCStringFloatArrayMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FVector>)                    Data                                                        OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCFloatArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FCDCFloatArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<float>)                             Data                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringFloatMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FCDCStringFloatMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, float>)                      Data                                                        OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringIntMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FCDCStringIntMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, int32_t>)                    Data                                                        OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCInt
/// Size: 0x0004 (0x000000 - 0x000004)
class FCDCInt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Data                                                        OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCLargeInt
/// Size: 0x0008 (0x000000 - 0x000008)
class FCDCLargeInt : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Data                                                        OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringStringMap
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FCDCStringStringMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TMap<FString, FString>)                    Data                                                        OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FString, int32_t>)                    ExtraData                                                   OFFSET(get<T>, {0x50, 80, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCString
/// Size: 0x0010 (0x000000 - 0x000010)
class FCDCString : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FString)                                   Data                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CDCStringArray
/// Size: 0x0018 (0x000000 - 0x000018)
class FCDCStringArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FString>)                           Data                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   ExtraData                                                   OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelEvents
/// Size: 0x0010 (0x000000 - 0x000010)
class FCreativeDataChannelEvents : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FCreativeDataChannelEvent>)         Events                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelEvent
/// Size: 0x000C (0x000000 - 0x00000C)
class FCreativeDataChannelEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     EventName                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Parameters                                                  OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     TriggerCondition                                            OFFSET(get<T>, {0x8, 4, 0, 0})
};

