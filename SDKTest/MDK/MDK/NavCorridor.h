
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/NavCorridor.NavCorridorTestingComponent
/// Size: 0x0110 (0x0005D0 - 0x0006E0)
class UNavCorridorTestingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1760;

public:
	SMember(FNavAgentProperties)                       NavAgentProps                                               OFFSET(getStruct<T>, {0x5C8, 48, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 OFFSET(get<T>, {0x5F8, 8, 0, 0})
	DMember(bool)                                      bFindCorridorToGoal                                         OFFSET(get<bool>, {0x600, 1, 0, 0})
	DMember(bool)                                      bFollowPathOnGoalCorridor                                   OFFSET(get<bool>, {0x601, 1, 0, 0})
	DMember(float)                                     FollowLookAheadDistance                                     OFFSET(get<float>, {0x604, 4, 0, 0})
	CMember(AActor*)                                   GoalActor                                                   OFFSET(get<T>, {0x608, 8, 0, 0})
	CMember(ANavigationData*)                          NavData                                                     OFFSET(get<T>, {0x610, 8, 0, 0})
	SMember(FNavCorridorParams)                        CorridorParams                                              OFFSET(getStruct<T>, {0x618, 24, 0, 0})
	DMember(bool)                                      bUpdateParametersFromWidth                                  OFFSET(get<bool>, {0x630, 1, 0, 0})
	DMember(float)                                     PathOffset                                                  OFFSET(get<float>, {0x634, 4, 0, 0})
	DMember(float)                                     PathfindingTimeUs                                           OFFSET(get<float>, {0x638, 4, 0, 0})
	DMember(float)                                     CorridorTimeUs                                              OFFSET(get<float>, {0x63C, 4, 0, 0})
};

/// Class /Script/NavCorridor.NavCorridorTestingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ANavCorridorTestingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UNavCorridorTestingComponent*)             DebugComp                                                   OFFSET(get<T>, {0x290, 8, 0, 0})
};

/// Struct /Script/NavCorridor.NavCorridorParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavCorridorParams : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ObstacleTaperAngle                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SmallSectorThreshold                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LargeSectorThreshold                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     SimplifyEdgeThreshold                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bSimplifyFlipPortals                                        OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bSimplifyConvexPortals                                      OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(bool)                                      bSimplifyConcavePortals                                     OFFSET(get<bool>, {0x16, 1, 0, 0})
};

