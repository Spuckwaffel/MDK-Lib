
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: GameplayTasks
/// dependency: NavigationSystem

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
	SMember(FBlackboardKeySelector)                    FocalPointWhileMoving                                       OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	CMember(TEnumAsByte<EPathObstacleAction>)          PathObstacleAction                                          OFFSET(get<T>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bEnableSlowdownAtGoal                                       OFFSET(get<bool>, {0xDC, 1, 1, 0})
	DMember(bool)                                      bMoveDirectlyTowards                                        OFFSET(get<bool>, {0xDC, 1, 1, 1})
	DMember(bool)                                      bStopAtGoal                                                 OFFSET(get<bool>, {0xDC, 1, 1, 2})
	DMember(bool)                                      bFinishMoveOnOverlap                                        OFFSET(get<bool>, {0xDC, 1, 1, 3})
};

/// Class /Script/CaretakerRuntime.FortNavigationFilter_Caretaker
/// Size: 0x0018 (0x000048 - 0x000060)
class UFortNavigationFilter_Caretaker : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     EndPointAcceptableRadius                                    OFFSET(get<float>, {0x48, 4, 0, 0})
	CMember(UClass*)                                   EndPointFilterClass                                         OFFSET(get<T>, {0x50, 8, 0, 0})
	DMember(bool)                                      bEndPointReachTestIncludesAgentRadius                       OFFSET(get<bool>, {0x58, 1, 1, 0})
	DMember(bool)                                      bEndPointReachTestIncludesGoalRadius                        OFFSET(get<bool>, {0x58, 1, 1, 1})
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
	DMember(bool)                                      bIsMoving                                                   OFFSET(get<bool>, {0x578, 1, 0, 0})
	DMember(float)                                     WalkPlayRate                                                OFFSET(get<float>, {0x57C, 4, 0, 0})
	DMember(float)                                     AimOffsetCurve                                              OFFSET(get<float>, {0x580, 4, 0, 0})
	DMember(bool)                                      bFootPhase_StopLeftPlant                                    OFFSET(get<bool>, {0x584, 1, 0, 0})
	DMember(bool)                                      bFootPhase_StopLeftPass                                     OFFSET(get<bool>, {0x585, 1, 0, 0})
	DMember(bool)                                      bFootPhase_StopRightPlant                                   OFFSET(get<bool>, {0x586, 1, 0, 0})
	DMember(bool)                                      bFootPhase_StopRightPass                                    OFFSET(get<bool>, {0x587, 1, 0, 0})
	DMember(float)                                     BreathingCurve                                              OFFSET(get<float>, {0x588, 4, 0, 0})
	DMember(float)                                     MovingTreshold                                              OFFSET(get<float>, {0x58C, 4, 0, 0})
	SMember(FName)                                     CurveName_AimOffsetCurve                                    OFFSET(getStruct<T>, {0x590, 4, 0, 0})
	SMember(FName)                                     CurveName_FootPhase                                         OFFSET(getStruct<T>, {0x594, 4, 0, 0})
	SMember(FName)                                     CurveName_BreathingCurve                                    OFFSET(getStruct<T>, {0x598, 4, 0, 0})
	SMember(FName)                                     SocketName_FX_Chest                                         OFFSET(getStruct<T>, {0x59C, 4, 0, 0})
	SMember(FName)                                     ParamName_ChestSocketLocation                               OFFSET(getStruct<T>, {0x5A0, 4, 0, 0})
	SMember(FName)                                     ParamName_ChestSocketVector                                 OFFSET(getStruct<T>, {0x5A4, 4, 0, 0})
	DMember(float)                                     FirstFootPhaseMin                                           OFFSET(get<float>, {0x5A8, 4, 0, 0})
	DMember(float)                                     SecondFootPhaseMin                                          OFFSET(get<float>, {0x5AC, 4, 0, 0})
	DMember(float)                                     ThirdFootPhaseMin                                           OFFSET(get<float>, {0x5B0, 4, 0, 0})
	DMember(float)                                     FourthFootPhaseMin                                          OFFSET(get<float>, {0x5B4, 4, 0, 0})
	DMember(float)                                     FootPhaseMax                                                OFFSET(get<float>, {0x5B8, 4, 0, 0})
	CMember(UFortAnimWorldStriderComponent*)           WorldStriderComponent                                       OFFSET(get<T>, {0x5C0, 8, 0, 0})


	/// Functions
	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.SetDelayedMaterialParameters
	// void SetDelayedMaterialParameters();                                                                                     // [0xa0a4f88] Final|Native|Protected|BlueprintCallable 
	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWorldStriderComponent
	// UFortAnimWorldStriderComponent* GetWorldStriderComponent();                                                              // [0xa0a4e64] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkSpeedWarpingValue
	// float GetWalkSpeedWarpingValue();                                                                                        // [0xa0a4e38] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.GetWalkPlayRateValue
	// float GetWalkPlayRateValue();                                                                                            // [0xa0a4e18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CaretakerRuntime.FortAIAnimInstance_Caretaker.GetStartAnimPosition
	// float GetStartAnimPosition();                                                                                            // [0xa0a4dec] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

