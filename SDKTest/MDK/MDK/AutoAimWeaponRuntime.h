
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/AutoAimWeaponRuntime.AutoAimWeaponKismetLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAutoAimWeaponKismetLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/AutoAimWeaponRuntime.AutoAimWeaponPawnComponent
/// Size: 0x00E0 (0x0000A8 - 0x000188)
class UAutoAimWeaponPawnComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FGameplayTagContainer)                     UseSingleLocationTargetingPawnTags                          ___ OFFSET(get<T>, {0xA8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     LowPriorityTargetPawnTags                                   ___ OFFSET(get<T>, {0xC8, 32, 0, 0})
	CMember(TArray<FAutoAimWeaponBoneSegmentData>)     MultiSocketTargetingBoneSegmentDatas                        ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FScalableFloat)                            LockOnTimeReticleCenter                                     ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FScalableFloat)                            LockOnTimeReticleEdge                                       ___ OFFSET(get<T>, {0x120, 40, 0, 0})
	SMember(FScalableFloat)                            MaxLockOns                                                  ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	DMember(float)                                     ProgressTowardNextLockOn                                    ___ OFFSET(get<float>, {0x170, 4, 0, 0})
	DMember(int32_t)                                   CurrentLockOnCount                                          ___ OFFSET(get<int32_t>, {0x174, 4, 0, 0})
	DMember(float)                                     TargetToReticleDistanceNormalized                           ___ OFFSET(get<float>, {0x178, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortPawn*>)                LockOnTarget                                                ___ OFFSET(get<T>, {0x17C, 8, 0, 0})
};

/// Struct /Script/AutoAimWeaponRuntime.AutoAimWeaponBoneSegmentData
/// Size: 0x000C (0x000000 - 0x00000C)
class FAutoAimWeaponBoneSegmentData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     BoneName1                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     BoneName2                                                   ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(float)                                     BoneCollisionCapsuleRadiusAproximation                      ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

