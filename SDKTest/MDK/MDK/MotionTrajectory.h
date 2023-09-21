
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
	SMember(FPoseSearchQueryTrajectory)                Trajectory                                                  OFFSET(get<T>, {0xA0, 16, 0, 0})
	DMember(float)                                     HistoryLengthSeconds                                        OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(int32_t)                                   HistorySamplesPerSecond                                     OFFSET(get<int32_t>, {0xB4, 4, 0, 0})
	DMember(float)                                     PredictionLengthSeconds                                     OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   PredictionSamplesPerSecond                                  OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	DMember(float)                                     RotateTowardsMovementSpeed                                  OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(bool)                                      bAutoUpdateTrajectory                                       OFFSET(get<bool>, {0xC4, 1, 0, 0})
	DMember(float)                                     MaxControllerRotationRate                                   OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(USkeletalMeshComponent*)                   SkelMeshComponent                                           OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UCharacterMovementComponent*)              CharacterMovementComponent                                  OFFSET(get<T>, {0xD8, 8, 0, 0})
};



	/// Functions
	// Function /Script/MotionTrajectory.CharacterTrajectoryComponent.UpdateTrajectory
	// void UpdateTrajectory(float DeltaSeconds);                                                                               // [0xa3f4dc4] Final|Native|Public|BlueprintCallable 
	// Function /Script/MotionTrajectory.CharacterTrajectoryComponent.OnMovementUpdated
	// void OnMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);                                    // [0xa3f4818] Final|Native|Protected|HasDefaults 
	// Function /Script/MotionTrajectory.CharacterTrajectoryComponent.GetFacingFromMeshComponent
	// FRotator GetFacingFromMeshComponent(USkeletalMeshComponent* MeshComponent);                                              // [0xa3f4770] Native|Event|Public|HasDefaults|BlueprintEvent|Const 
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
	DMember(float)                                     Seconds                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
};

