/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CaretakerRuntime.

/// Class /Script/CaretakerRuntime.FortAthenaCaretakerAIController
/// Size: 0x0008 (0x0005F0 - 0x0005F8)
class AFortAthenaCaretakerAIController : public AAthenaAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1528;

public:
};

/// Class /Script/CaretakerRuntime.FortBTTask_CaretakerMoveTo
/// Size: 0x0030 (0x0000B0 - 0x0000E0)
class UFortBTTask_CaretakerMoveTo : public UBTTask_MoveTo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FBlackboardKeySelector)                    FocalPointWhileMoving                                       ___ OFFSET(get<T>, {0xB0, 40, 0, 0})
	CMember(TEnumAsByte<EPathObstacleAction>)          PathObstacleAction                                          ___ OFFSET(get<T>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bEnableSlowdownAtGoal                                       ___ OFFSET(get<bool>, {0xDC, 1, 1, 0})
	DMember(bool)                                      bMoveDirectlyTowards                                        ___ OFFSET(get<bool>, {0xDC, 1, 1, 1})
	DMember(bool)                                      bStopAtGoal                                                 ___ OFFSET(get<bool>, {0xDC, 1, 1, 2})
	DMember(bool)                                      bFinishMoveOnOverlap                                        ___ OFFSET(get<bool>, {0xDC, 1, 1, 3})
};

/// Class /Script/CaretakerRuntime.FortNavigationFilter_Caretaker
/// Size: 0x0018 (0x000048 - 0x000060)
class UFortNavigationFilter_Caretaker : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     EndPointAcceptableRadius                                    ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(UClass*)                                   EndPointFilterClass                                         ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(bool)                                      bEndPointReachTestIncludesAgentRadius                       ___ OFFSET(get<bool>, {0x58, 1, 1, 0})
	DMember(bool)                                      bEndPointReachTestIncludesGoalRadius                        ___ OFFSET(get<bool>, {0x58, 1, 1, 1})
};

/// Class /Script/CaretakerRuntime.FortAITask_CaretakerMove
/// Size: 0x0000 (0x000198 - 0x000198)
class UFortAITask_CaretakerMove : public UFortAbilityTask_MoveAI
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
};

/// Class /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker
/// Size: 0x0050 (0x000580 - 0x0005D0)
class UFortAIAnimInstance_Caretaker : public UFortAIAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	DMember(bool)                                      bIsMoving                                                   ___ OFFSET(get<bool>, {0x578, 1, 0, 0})
	DMember(float)                                     WalkPlayRate                                                ___ OFFSET(get<float>, {0x57C, 4, 0, 0})
	DMember(float)                                     AimOffsetCurve                                              ___ OFFSET(get<float>, {0x580, 4, 0, 0})
	DMember(bool)                                      bFootPhase_StopLeftPlant                                    ___ OFFSET(get<bool>, {0x584, 1, 0, 0})
	DMember(bool)                                      bFootPhase_StopLeftPass                                     ___ OFFSET(get<bool>, {0x585, 1, 0, 0})
	DMember(bool)                                      bFootPhase_StopRightPlant                                   ___ OFFSET(get<bool>, {0x586, 1, 0, 0})
	DMember(bool)                                      bFootPhase_StopRightPass                                    ___ OFFSET(get<bool>, {0x587, 1, 0, 0})
	DMember(float)                                     BreathingCurve                                              ___ OFFSET(get<float>, {0x588, 4, 0, 0})
	DMember(float)                                     MovingTreshold                                              ___ OFFSET(get<float>, {0x58C, 4, 0, 0})
	SMember(FName)                                     CurveName_AimOffsetCurve                                    ___ OFFSET(get<T>, {0x590, 4, 0, 0})
	SMember(FName)                                     CurveName_FootPhase                                         ___ OFFSET(get<T>, {0x594, 4, 0, 0})
	SMember(FName)                                     CurveName_BreathingCurve                                    ___ OFFSET(get<T>, {0x598, 4, 0, 0})
	SMember(FName)                                     SocketName_FX_Chest                                         ___ OFFSET(get<T>, {0x59C, 4, 0, 0})
	SMember(FName)                                     ParamName_ChestSocketLocation                               ___ OFFSET(get<T>, {0x5A0, 4, 0, 0})
	SMember(FName)                                     ParamName_ChestSocketVector                                 ___ OFFSET(get<T>, {0x5A4, 4, 0, 0})
	DMember(float)                                     FirstFootPhaseMin                                           ___ OFFSET(get<float>, {0x5A8, 4, 0, 0})
	DMember(float)                                     SecondFootPhaseMin                                          ___ OFFSET(get<float>, {0x5AC, 4, 0, 0})
	DMember(float)                                     ThirdFootPhaseMin                                           ___ OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(float)                                     FourthFootPhaseMin                                          ___ OFFSET(get<float>, {0x5B4, 4, 0, 0})
	DMember(float)                                     FootPhaseMax                                                ___ OFFSET(get<float>, {0x5B8, 4, 0, 0})
	CMember(UFortAnimWorldStriderComponent*)           WorldStriderComponent                                       ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
};

