
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayAbilities
/// dependency: GameplayTasks

/// Class /Script/RocketRamGameplayRuntime.AbilityTask_ApplyRootMotion_RocketRam
/// Size: 0x0050 (0x000100 - 0x000150)
class UAbilityTask_ApplyRootMotion_RocketRam : public UAbilityTask_ApplyRootMotionConstantForce
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FVector)                                   InitialDirection                                            OFFSET(get<T>, {0x100, 24, 0, 0})
	SMember(FVector)                                   EndingDirection                                             OFFSET(get<T>, {0x118, 24, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x134, 4, 0, 0})
	CMember(UCurveFloat*)                              SpeedCurve                                                  OFFSET(get<T>, {0x138, 8, 0, 0})
	DMember(float)                                     FloorTraceHeight                                            OFFSET(get<float>, {0x140, 4, 0, 0})
	CMember(UCurveVector*)                             PathOffsetCurve                                             OFFSET(get<T>, {0x148, 8, 0, 0})


	/// Functions
	// Function /Script/RocketRamGameplayRuntime.AbilityTask_ApplyRootMotion_RocketRam.ApplyRootMotion_RocketRam
	// UAbilityTask_ApplyRootMotion_RocketRam* ApplyRootMotion_RocketRam(UGameplayAbility* InOwningAbility, FName InTaskInstanceName, float InDuration, FVector InInitialDirection, FVector InEndingDirection, float InMinSpeed, float InMaxSpeed, UCurveFloat* InSpeedCurve, float InFloorTraceHeight, UCurveVector* InPathOffsetCurve, ERootMotionFinishVelocityMode InVelocityOnFinishMode, FVector InSetVelocityOnFinish, float InClampVelocityOnFinish); // [0x9a427ac] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Struct /Script/RocketRamGameplayRuntime.RootMotionSource_RocketRam
/// Size: 0x0060 (0x0000E0 - 0x000140)
class FRootMotionSource_RocketRam : public FRootMotionSource
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FVector)                                   InitialDirection                                            OFFSET(get<T>, {0xD8, 24, 0, 0})
	SMember(FVector)                                   EndingDirection                                             OFFSET(get<T>, {0xF0, 24, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    OFFSET(get<float>, {0x10C, 4, 0, 0})
	CMember(UCurveFloat*)                              SpeedCurve                                                  OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(float)                                     FloorTraceHeight                                            OFFSET(get<float>, {0x118, 4, 0, 0})
	CMember(UCurveVector*)                             PathOffsetCurve                                             OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FVector)                                   PreviousEndLocationWithoutOffset                            OFFSET(get<T>, {0x128, 24, 0, 0})
};

