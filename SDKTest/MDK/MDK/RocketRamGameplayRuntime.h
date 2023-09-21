
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
	SMember(FVector)                                   InitialDirection                                            ___ OFFSET(get<T>, {0x100, 24, 0, 0})
	SMember(FVector)                                   EndingDirection                                             ___ OFFSET(get<T>, {0x118, 24, 0, 0})
	DMember(float)                                     MinSpeed                                                    ___ OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    ___ OFFSET(get<float>, {0x134, 4, 0, 0})
	CMember(UCurveFloat*)                              SpeedCurve                                                  ___ OFFSET(get<T>, {0x138, 8, 0, 0})
	DMember(float)                                     FloorTraceHeight                                            ___ OFFSET(get<float>, {0x140, 4, 0, 0})
	CMember(UCurveVector*)                             PathOffsetCurve                                             ___ OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Struct /Script/RocketRamGameplayRuntime.RootMotionSource_RocketRam
/// Size: 0x0060 (0x0000E0 - 0x000140)
class FRootMotionSource_RocketRam : public FRootMotionSource
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FVector)                                   InitialDirection                                            ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	SMember(FVector)                                   EndingDirection                                             ___ OFFSET(get<T>, {0xF0, 24, 0, 0})
	DMember(float)                                     MinSpeed                                                    ___ OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     MaxSpeed                                                    ___ OFFSET(get<float>, {0x10C, 4, 0, 0})
	CMember(UCurveFloat*)                              SpeedCurve                                                  ___ OFFSET(get<T>, {0x110, 8, 0, 0})
	DMember(float)                                     FloorTraceHeight                                            ___ OFFSET(get<float>, {0x118, 4, 0, 0})
	CMember(UCurveVector*)                             PathOffsetCurve                                             ___ OFFSET(get<T>, {0x120, 8, 0, 0})
	SMember(FVector)                                   PreviousEndLocationWithoutOffset                            ___ OFFSET(get<T>, {0x128, 24, 0, 0})
};

