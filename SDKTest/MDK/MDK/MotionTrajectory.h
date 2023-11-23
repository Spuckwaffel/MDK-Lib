
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/MotionTrajectory.CharacterTrajectoryComponent
/// Size: 0x01B0 (0x0000A0 - 0x000250)
class UCharacterTrajectoryComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	SMember(FPoseSearchQueryTrajectory)                Trajectory                                                  OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     HistoryLengthSeconds                                        OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   HistorySamplesPerSecond                                     OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(float)                                     PredictionLengthSeconds                                     OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   PredictionSamplesPerSecond                                  OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(float)                                     RotateTowardsMovementSpeed                                  OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bAutoUpdateTrajectory                                       OFFSET(get<bool>, {0xC4, 1, 0, 0})
	DMember(float)                                     MaxControllerRotationRate                                   OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bUseSpeedRemappingCurve                                     OFFSET(get<bool>, {0xCC, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        SpeedRemappingCurve                                         OFFSET(getStruct<T>, {0xD0, 136, 0, 0})
	DMember(bool)                                      bUseAccelerationRemappingCurve                              OFFSET(get<bool>, {0x158, 1, 0, 0})
	SMember(FRuntimeFloatCurve)                        AccelerationRemappingCurve                                  OFFSET(getStruct<T>, {0x160, 136, 0, 0})
	CMember(USkeletalMeshComponent*)                   SkelMeshComponent                                           OFFSET(get<T>, {0x1E8, 8, 0, 0})
	CMember(UCharacterMovementComponent*)              CharacterMovementComponent                                  OFFSET(get<T>, {0x1F0, 8, 0, 0})


	/// Functions
	// Function /Script/MotionTrajectory.CharacterTrajectoryComponent.UpdateTrajectory
	// void UpdateTrajectory(float DeltaSeconds);                                                                               // [0xac742b8] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionTrajectory.CharacterTrajectoryComponent.OnMovementUpdated
	// void OnMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);                                    // [0xac73df8] Final|Native|Protected|HasDefaults 
	// Function /Script/MotionTrajectory.CharacterTrajectoryComponent.GetFacingFromMeshComponent
	// FRotator GetFacingFromMeshComponent(USkeletalMeshComponent* MeshComponent);                                              // [0xac73d50] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
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
class FMotionTrajectorySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Seconds                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
};

