
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/TempestRuntime.FortAIControllerComponent_Tempest
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UFortAIControllerComponent_Tempest : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UFortTimeOfDayWeatherComponent*)           WeatherComponent                                            OFFSET(get<T>, {0xA8, 8, 0, 0})
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
	SMember(FTempestReplicatedMovementData)            MovementData                                                OFFSET(get<T>, {0xA0, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTempestMovementStuck                                      OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTempestSafeZoneStateChanged                               OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(ETempestMovementMode)                      MovementMode                                                OFFSET(get<T>, {0x110, 1, 0, 0})
	CMember(UEnvQuery*)                                FindNextMovementLocationQuery                               OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(AFortAthenaPatrolPath*)                    MovementPath                                                OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FScalableFloat)                            MovementSpeed                                               OFFSET(get<T>, {0x128, 40, 0, 0})
	SMember(FScalableFloat)                            RotationSpeed                                               OFFSET(get<T>, {0x150, 40, 0, 0})
	DMember(bool)                                      bShouldIgnoreZMovement                                      OFFSET(get<bool>, {0x178, 1, 1, 0})
	DMember(bool)                                      bFloatOnWater                                               OFFSET(get<bool>, {0x178, 1, 1, 1})
	SMember(FScalableFloat)                            WaterTraceZOffset                                           OFFSET(get<T>, {0x180, 40, 0, 0})
};



	/// Functions
	// Function /Script/TempestRuntime.TempestMovementComponent.OnRep_MovementData
	// void OnRep_MovementData();                                                                                               // [0x9e7025c] Final|Native|Private|Const 
/// Class /Script/TempestRuntime.TempestStateMachineComponent
/// Size: 0x00D0 (0x0000A0 - 0x000170)
class UTempestStateMachineComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	DMember(bool)                                      bDestroyOnCompletion                                        OFFSET(get<bool>, {0xA0, 1, 0, 0})
	SMember(FScalableFloat)                            FormationDuration                                           OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FScalableFloat)                            ActiveDuration                                              OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FScalableFloat)                            DissipationDuration                                         OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FTempestStateInfo)                         CurrentStateInfo                                            OFFSET(get<T>, {0x120, 12, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTempestStateChangedDelegate                               OFFSET(get<T>, {0x148, 16, 0, 0})
};



	/// Functions
	// Function /Script/TempestRuntime.TempestStateMachineComponent.OnRep_CurrentStateInfo
	// void OnRep_CurrentStateInfo();                                                                                           // [0x9e7021c] Final|Native|Private 
	// Function /Script/TempestRuntime.TempestStateMachineComponent.GetCurrentStateInfo
	// FTempestStateInfo GetCurrentStateInfo();                                                                                 // [0x9e701f4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TempestRuntime.TempestStateMachineComponent.GetCurrentStateCompletionPercentage
	// float GetCurrentStateCompletionPercentage();                                                                             // [0x9e701cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TempestRuntime.TempestStateMachineComponent.GetCurrentState
	// ETempestState GetCurrentState();                                                                                         // [0x9765ce8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/TempestRuntime.TempestStateMachineComponent.ForceDissipate
	// void ForceDissipate(FString InDissipationReason);                                                                        // [0x9e6fb20] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
/// Struct /Script/TempestRuntime.TempestStateInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FTempestStateInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ETempestState)                             CurrentState                                                OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EndTime                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/TempestRuntime.TempestReplicatedMovementData
/// Size: 0x0050 (0x000000 - 0x000050)
class FTempestReplicatedMovementData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   TargetServerLocation                                        OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   LastServerLocation                                          OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FQuat)                                     LastServerRotation                                          OFFSET(get<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/TempestRuntime.TempestStateChangeTimerInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FTempestStateChangeTimerInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
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

