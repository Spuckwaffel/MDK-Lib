/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AnimationBudgetAllocator.

/// Struct /Script/AnimationBudgetAllocator.AnimationBudgetAllocatorParameters
/// Size: 0x0058 (0x000000 - 0x000058)
class FAnimationBudgetAllocatorParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(float)                                     BudgetInMs                                                  ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     MinQuality                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxTickRate                                                 ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     WorkUnitSmoothingSpeed                                      ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AlwaysTickFalloffAggression                                 ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     InterpolationFalloffAggression                              ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   InterpolationMaxRate                                        ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   MaxInterpolatedComponents                                   ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(float)                                     InterpolationTickMultiplier                                 ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     InitialEstimatedWorkUnitTimeMs                              ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   MaxTickedOffsreenComponents                                 ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   StateChangeThrottleInFrames                                 ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(float)                                     BudgetFactorBeforeReducedWork                               ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     BudgetFactorBeforeReducedWorkEpsilon                        ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     BudgetPressureSmoothingSpeed                                ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   ReducedWorkThrottleMinInFrames                              ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   ReducedWorkThrottleMaxInFrames                              ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     BudgetFactorBeforeAggressiveReducedWork                     ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   ReducedWorkThrottleMaxPerFrame                              ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(float)                                     BudgetPressureBeforeEmergencyReducedWork                    ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     AutoCalculatedSignificanceMaxDistance                       ___ OFFSET(get<float>, {0x50, 4, 0, 0})
};

/// Class /Script/AnimationBudgetAllocator.AnimationBudgetBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnimationBudgetBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AnimationBudgetAllocator.SkeletalMeshComponentBudgeted
/// Size: 0x0030 (0x000F90 - 0x000FC0)
class USkeletalMeshComponentBudgeted : public USkeletalMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4032;

public:
	DMember(bool)                                      bAutoRegisterWithBudgetAllocator                            ___ OFFSET(get<bool>, {0xFB0, 1, 1, 0})
	DMember(bool)                                      bAutoCalculateSignificance                                  ___ OFFSET(get<bool>, {0xFB0, 1, 1, 1})
	DMember(bool)                                      bShouldUseActorRenderedFlag                                 ___ OFFSET(get<bool>, {0xFB0, 1, 1, 2})
};

