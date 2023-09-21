
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MotionTrajectory.CharacterTrajectoryComponent
/// Size: 0x0090 (0x0000A0 - 0x000130)
class UCharacterTrajectoryComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FPoseSearchQueryTrajectory)                Trajectory                                                  ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     HistoryLengthSeconds                                        ___ OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   HistorySamplesPerSecond                                     ___ OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(float)                                     PredictionLengthSeconds                                     ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   PredictionSamplesPerSecond                                  ___ OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(float)                                     RotateTowardsMovementSpeed                                  ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bAutoUpdateTrajectory                                       ___ OFFSET(get<bool>, {0xC4, 1, 0, 0})
	DMember(float)                                     MaxControllerRotationRate                                   ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(USkeletalMeshComponent*)                   SkelMeshComponent                                           ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UCharacterMovementComponent*)              CharacterMovementComponent                                  ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/MotionTrajectory.CharacterMovementTrajectoryLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCharacterMovementTrajectoryLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/MotionTrajectory.MotionTrajectorySettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FMotionTrajectorySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Seconds                                                     ___ OFFSET(get<float>, {0x0, 4, 0, 0})
};

