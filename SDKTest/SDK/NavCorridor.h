/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NavCorridor.

/// Struct /Script/NavCorridor.NavCorridorParams
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavCorridorParams : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Width                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ObstacleTaperAngle                                          ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     SmallSectorThreshold                                        ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     LargeSectorThreshold                                        ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     SimplifyEdgeThreshold                                       ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bSimplifyFlipPortals                                        ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bSimplifyConvexPortals                                      ___ OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(bool)                                      bSimplifyConcavePortals                                     ___ OFFSET(get<bool>, {0x16, 1, 0, 0})
};

/// Class /Script/NavCorridor.NavCorridorTestingComponent
/// Size: 0x0110 (0x0005C0 - 0x0006D0)
class UNavCorridorTestingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	SMember(FNavAgentProperties)                       NavAgentProps                                               ___ OFFSET(get<T>, {0x5B8, 48, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 ___ OFFSET(get<T>, {0x5E8, 8, 0, 0})
	DMember(bool)                                      bFindCorridorToGoal                                         ___ OFFSET(get<bool>, {0x5F0, 1, 0, 0})
	DMember(bool)                                      bFollowPathOnGoalCorridor                                   ___ OFFSET(get<bool>, {0x5F1, 1, 0, 0})
	DMember(float)                                     FollowLookAheadDistance                                     ___ OFFSET(get<float>, {0x5F4, 4, 0, 0})
	CMember(AActor*)                                   GoalActor                                                   ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
	CMember(ANavigationData*)                          NavData                                                     ___ OFFSET(get<T>, {0x600, 8, 0, 0})
	SMember(FNavCorridorParams)                        CorridorParams                                              ___ OFFSET(get<T>, {0x608, 24, 0, 0})
	DMember(bool)                                      bUpdateParametersFromWidth                                  ___ OFFSET(get<bool>, {0x620, 1, 0, 0})
	DMember(float)                                     PathOffset                                                  ___ OFFSET(get<float>, {0x624, 4, 0, 0})
	DMember(float)                                     PathfindingTimeUs                                           ___ OFFSET(get<float>, {0x628, 4, 0, 0})
	DMember(float)                                     CorridorTimeUs                                              ___ OFFSET(get<float>, {0x62C, 4, 0, 0})
};

/// Class /Script/NavCorridor.NavCorridorTestingActor
/// Size: 0x0008 (0x000290 - 0x000298)
class ANavCorridorTestingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UNavCorridorTestingComponent*)             DebugComp                                                   ___ OFFSET(get<T>, {0x290, 8, 0, 0})
};

