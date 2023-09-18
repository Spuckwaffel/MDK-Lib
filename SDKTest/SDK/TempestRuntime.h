/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package TempestRuntime.

/// Struct /Script/TempestRuntime.TempestStateInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FTempestStateInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ETempestState)                             CurrentState                                                ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     StartTime                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EndTime                                                     ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/TempestRuntime.TempestReplicatedMovementData
/// Size: 0x0050 (0x000000 - 0x000050)
class FTempestReplicatedMovementData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   TargetServerLocation                                        ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LastServerLocation                                          ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FQuat)                                     LastServerRotation                                          ___ OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/TempestRuntime.TempestStateChangeTimerInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FTempestStateChangeTimerInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Class /Script/TempestRuntime.FortAIControllerComponent_Tempest
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortAIControllerComponent_Tempest : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UFortTimeOfDayWeatherComponent*)           WeatherComponent                                            ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/TempestRuntime.FortCheatManager_Tempest
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortCheatManager_Tempest : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/TempestRuntime.TempestMovementComponent
/// Size: 0x0110 (0x0000A0 - 0x0001B0)
class UTempestMovementComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FTempestReplicatedMovementData)            MovementData                                                ___ OFFSET(get<T>, {0xA0, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTempestMovementStuck                                      ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTempestSafeZoneStateChanged                               ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(ETempestMovementMode)                      MovementMode                                                ___ OFFSET(get<T>, {0x110, 1, 0, 0})
	CMember(UEnvQuery*)                                FindNextMovementLocationQuery                               ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(AFortAthenaPatrolPath*)                    MovementPath                                                ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FScalableFloat)                            MovementSpeed                                               ___ OFFSET(get<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            RotationSpeed                                               ___ OFFSET(get<T>, {0x150, 40, 0, 0})
	DMember(bool)                                      bShouldIgnoreZMovement                                      ___ OFFSET(get<bool>, {0x178, 1, 1, 0})
	DMember(bool)                                      bFloatOnWater                                               ___ OFFSET(get<bool>, {0x178, 1, 1, 1})
	SMember(FScalableFloat)                            WaterTraceZOffset                                           ___ OFFSET(get<T>, {0x180, 40, 0, 0})
};

/// Class /Script/TempestRuntime.TempestStateMachineComponent
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UTempestStateMachineComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	DMember(bool)                                      bDestroyOnCompletion                                        ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
	SMember(FScalableFloat)                            FormationDuration                                           ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            ActiveDuration                                              ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            DissipationDuration                                         ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FTempestStateInfo)                         CurrentStateInfo                                            ___ OFFSET(get<T>, {0x120, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTempestStateChangedDelegate                               ___ OFFSET(get<T>, {0x148, 16, 0, 0})
};

/// Enum /Script/TempestRuntime.ETempestState
/// Size: 0x06
enum ETempestState : uint8_t
{
	ETempestState__Unformed0                                                         = 0,
	ETempestState__Forming1                                                          = 1,
	ETempestState__Active2                                                           = 2,
	ETempestState__Dissipating3                                                      = 3,
	ETempestState__Complete4                                                         = 4,
	ETempestState__ETempestState_MAX5                                                = 5
};

/// Enum /Script/TempestRuntime.ETempestMovementMode
/// Size: 0x03
enum ETempestMovementMode : uint8_t
{
	ETempestMovementMode__EnvQuery0                                                  = 0,
	ETempestMovementMode__Path1                                                      = 1,
	ETempestMovementMode__ETempestMovementMode_MAX2                                  = 2
};

