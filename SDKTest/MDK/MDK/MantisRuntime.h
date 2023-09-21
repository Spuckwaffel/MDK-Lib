
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayTasks
/// dependency: IrisCore
/// dependency: ModularGameplay

/// Class /Script/MantisRuntime.FortMantisLayerAnimInstance
/// Size: 0x0010 (0x0015D0 - 0x0015E0)
class UFortMantisLayerAnimInstance : public UFortPlayerAnimInstanceProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5600;

public:
	SMember(FFortMantisReplicatedAnimInstanceInfo)     MantisAnimInstanceInfo                                      ___ OFFSET(get<T>, {0x15C8, 16, 0, 0})
};

/// Class /Script/MantisRuntime.FortItemLayerAnimInstance_UncleBrolly
/// Size: 0x0090 (0x0006D0 - 0x000760)
class UFortItemLayerAnimInstance_UncleBrolly : public UFortItemLayerAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1888;

public:
	SMember(FCachedAnimStateArray)                     UmbrellaGliderOpenStateDataArray                            ___ OFFSET(get<T>, {0x6C8, 24, 0, 0})
	SMember(FVector)                                   WrapTranslation                                             ___ OFFSET(get<T>, {0x6E0, 24, 0, 0})
	SMember(FRotator)                                  WrapRotation                                                ___ OFFSET(get<T>, {0x6F8, 24, 0, 0})
	SMember(FRotator)                                  RootRotationOffset                                          ___ OFFSET(get<T>, {0x710, 24, 0, 0})
	DMember(float)                                     LandingPredictedTimer                                       ___ OFFSET(get<float>, {0x728, 4, 0, 0})
	DMember(bool)                                      bShouldUpdateYawCorrection                                  ___ OFFSET(get<bool>, {0x72C, 1, 0, 0})
	DMember(bool)                                      bWasAcceleratingBeforeDodge                                 ___ OFFSET(get<bool>, {0x72D, 1, 0, 0})
	DMember(float)                                     UncleBrollyDeployCurveValue                                 ___ OFFSET(get<float>, {0x730, 4, 0, 0})
	DMember(float)                                     DashChargeTier                                              ___ OFFSET(get<float>, {0x734, 4, 0, 0})
	DMember(float)                                     DashChargeAdditivePlayrate                                  ___ OFFSET(get<float>, {0x738, 4, 0, 0})
	DMember(bool)                                      bIsUmbrellaFailing                                          ___ OFFSET(get<bool>, {0x73C, 1, 0, 0})
	DMember(bool)                                      bIsMeleeGuarding                                            ___ OFFSET(get<bool>, {0x73D, 1, 0, 0})
	DMember(bool)                                      bIsSprinting                                                ___ OFFSET(get<bool>, {0x73E, 1, 0, 0})
	DMember(bool)                                      bIsInAir                                                    ___ OFFSET(get<bool>, {0x73F, 1, 0, 0})
	DMember(bool)                                      bIsLandingPredicted                                         ___ OFFSET(get<bool>, {0x740, 1, 0, 0})
	DMember(bool)                                      bIsJumping                                                  ___ OFFSET(get<bool>, {0x741, 1, 0, 0})
	DMember(bool)                                      bIsDodging                                                  ___ OFFSET(get<bool>, {0x742, 1, 0, 0})
	DMember(bool)                                      bIsDodgingEast                                              ___ OFFSET(get<bool>, {0x743, 1, 0, 0})
	DMember(bool)                                      bIsDodgingSouth                                             ___ OFFSET(get<bool>, {0x744, 1, 0, 0})
	DMember(bool)                                      bIsDodgingWest                                              ___ OFFSET(get<bool>, {0x745, 1, 0, 0})
	DMember(bool)                                      bIsDashing                                                  ___ OFFSET(get<bool>, {0x746, 1, 0, 0})
	DMember(bool)                                      bIsDashCharging                                             ___ OFFSET(get<bool>, {0x747, 1, 0, 0})
	DMember(bool)                                      bIsDashPredictingEnd                                        ___ OFFSET(get<bool>, {0x748, 1, 0, 0})
	DMember(bool)                                      bIsChargeTier1                                              ___ OFFSET(get<bool>, {0x749, 1, 0, 0})
	DMember(bool)                                      bIsChargeTier2                                              ___ OFFSET(get<bool>, {0x74A, 1, 0, 0})
	DMember(bool)                                      bIsChargeTier3                                              ___ OFFSET(get<bool>, {0x74B, 1, 0, 0})
	DMember(bool)                                      bMeleeGuardingOrUmbrellaFailing                             ___ OFFSET(get<bool>, {0x74C, 1, 0, 0})
	DMember(bool)                                      bTransition_Default_to_GuardLoop                            ___ OFFSET(get<bool>, {0x74D, 1, 0, 0})
	DMember(bool)                                      bTransition_Default_to_GuardIntro                           ___ OFFSET(get<bool>, {0x74E, 1, 0, 0})
	DMember(bool)                                      bTransition_GuardIntro_to_Default                           ___ OFFSET(get<bool>, {0x74F, 1, 0, 0})
	DMember(bool)                                      bUpperBodyShouldPassThrough                                 ___ OFFSET(get<bool>, {0x750, 1, 0, 0})
	DMember(bool)                                      bUmbrellaGliderIsOpen                                       ___ OFFSET(get<bool>, {0x751, 1, 0, 0})
};

/// Class /Script/MantisRuntime.UncleBrollyWeaponAnimInstance
/// Size: 0x0040 (0x000350 - 0x000390)
class UUncleBrollyWeaponAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
	CMember(UClass*)                                   UncleBrollyItemLayer                                        ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	SMember(FRotator)                                  UmbrellaRotation                                            ___ OFFSET(get<T>, {0x350, 24, 0, 0})
	DMember(float)                                     UmbrellaSpinSpeed                                           ___ OFFSET(get<float>, {0x368, 4, 0, 0})
	DMember(float)                                     BlockDeployEndPlayrate                                      ___ OFFSET(get<float>, {0x36C, 4, 0, 0})
	DMember(float)                                     BlockDeployEndStartPosition                                 ___ OFFSET(get<float>, {0x370, 4, 0, 0})
	DMember(bool)                                      bIsDodging                                                  ___ OFFSET(get<bool>, {0x374, 1, 0, 0})
	DMember(bool)                                      bIsPlayingMeleeAnim                                         ___ OFFSET(get<bool>, {0x375, 1, 0, 0})
	DMember(bool)                                      bIsUmbrellaFailing                                          ___ OFFSET(get<bool>, {0x376, 1, 0, 0})
	DMember(bool)                                      bIsMeleeGuarding                                            ___ OFFSET(get<bool>, {0x377, 1, 0, 0})
	DMember(bool)                                      bIsInAir                                                    ___ OFFSET(get<bool>, {0x378, 1, 0, 0})
	DMember(bool)                                      bIsDashing                                                  ___ OFFSET(get<bool>, {0x379, 1, 0, 0})
	DMember(bool)                                      bIsSprinting                                                ___ OFFSET(get<bool>, {0x37A, 1, 0, 0})
	DMember(bool)                                      bIsPredictingEnd                                            ___ OFFSET(get<bool>, {0x37B, 1, 0, 0})
	DMember(bool)                                      bIsDashCharging                                             ___ OFFSET(get<bool>, {0x37C, 1, 0, 0})
	DMember(bool)                                      bIsDashPredictingEnd                                        ___ OFFSET(get<bool>, {0x37D, 1, 0, 0})
	DMember(bool)                                      bInAirAndMeleeGuarding                                      ___ OFFSET(get<bool>, {0x37E, 1, 0, 0})
	DMember(bool)                                      bTransition_Default_to_DeployStart                          ___ OFFSET(get<bool>, {0x37F, 1, 0, 0})
	DMember(bool)                                      bTransition_DeployStart_to_Default                          ___ OFFSET(get<bool>, {0x380, 1, 0, 0})
	DMember(bool)                                      bTransition_Fail_to_FailToDeploy                            ___ OFFSET(get<bool>, {0x381, 1, 0, 0})
	DMember(bool)                                      bTransition_FailLoop_to_DeployEnd                           ___ OFFSET(get<bool>, {0x382, 1, 0, 0})
};

/// Class /Script/MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UFortAbilityTask_ApplyRootMotionMantisForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(UAnimMontage*)                             TechniqueMontage                                            ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FFortMantisRootMotionWarpInfo)             WarpInfo                                                    ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
};

/// Class /Script/MantisRuntime.FortAnimNotify_Mantis
/// Size: 0x0008 (0x000038 - 0x000040)
class UFortAnimNotify_Mantis : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EFortMantisNotifyEvent)                    MantisNotifyEvent                                           ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(EFortMantisBranchRule)                     MantisBranchRule                                            ___ OFFSET(get<T>, {0x39, 1, 0, 0})
	CMember(EFortMantisBranchPath)                     MantisBranchPath                                            ___ OFFSET(get<T>, {0x3A, 1, 0, 0})
};

/// Class /Script/MantisRuntime.FortAnimNotifyState_Mantis
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortAnimNotifyState_Mantis : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(EFortMantisNotifyWindow)                   MantisNotifyWindow                                          ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FGameplayTag)                              MantisNotifyTag                                             ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	CMember(EFortMantisNotifyRotationWarpRateRule)     RotationRateWarpRule                                        ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bWarpRotation                                               ___ OFFSET(get<bool>, {0x39, 1, 1, 0})
	DMember(bool)                                      bWarpTranslation                                            ___ OFFSET(get<bool>, {0x39, 1, 1, 1})
};

/// Class /Script/MantisRuntime.FortGameplayAbility_Mantis
/// Size: 0x0048 (0x000B28 - 0x000B70)
class UFortGameplayAbility_Mantis : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2928;

public:
	DMember(bool)                                      bAllowRootMotionWarping                                     ___ OFFSET(get<bool>, {0xB28, 1, 0, 0})
	DMember(bool)                                      bApplyEffectContainerOnTechniqueDamage                      ___ OFFSET(get<bool>, {0xB29, 1, 0, 0})
	DMember(bool)                                      bApplyEffectContainerOnTechniqueStart                       ___ OFFSET(get<bool>, {0xB2A, 1, 0, 0})
	CMember(UFortMantisPawnComponent*)                 MantisPawnComponent                                         ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(UAbilityTask_PlayMontageAndWait*)          MontageTask                                                 ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	CMember(UAbilityTask_ApplyRootMotion_Base*)        RootMotionTask                                              ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
};

/// Class /Script/MantisRuntime.FortMantisData
/// Size: 0x0040 (0x000030 - 0x000070)
class UFortMantisData : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bShowTargetHealthBar                                        ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	CMember(UClass*)                                   TechniqueAbility                                            ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<FFortGameplayEffectContainer>)      TechniqueAdditionEffectContainers                           ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FFortMantisTechniqueData>)          Techniques                                                  ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FFortMantisTechniqueBranch>)        Branches                                                    ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/MantisRuntime.FortMantisPawnComponent
/// Size: 0x03A8 (0x0000A0 - 0x000448)
class UFortMantisPawnComponent : public UPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FMulticastInlineDelegate)                  OnTechniqueMetadataReady                                    ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TMap<UAnimMontage*, FFortMantisMontageData>) MontageDataMap                                            ___ OFFSET(get<T>, {0x178, 80, 0, 0})
	CMember(UFortMantisData*)                          MantisData                                                  ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	CMember(AFortWeapon*)                              Weapon                                                      ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
};

/// Class /Script/MantisRuntime.FortMantisWeaponComponent
/// Size: 0x0040 (0x0000A0 - 0x0000E0)
class UFortMantisWeaponComponent : public UFortWeaponComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(UFortMantisData*)                          MantisData                                                  ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bAllowPrimaryFireInputsWhileHolstered                       ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bAllowSecondaryFireInputsWhileHolstered                     ___ OFFSET(get<bool>, {0xA9, 1, 0, 0})
	CMember(TWeakObjectPtr<UFortMantisPawnComponent*>) MantisPawnComponent                                         ___ OFFSET(get<T>, {0xAC, 8, 0, 0})
	SMember(FFortMantisReplicatedAnimInstanceInfo)     AnimInstanceInfo                                            ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FFortMantisReplicatedAnimInstanceInfo)     ReplayAnimInstanceInfo                                      ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisTechniqueMetadata
/// Size: 0x0140 (0x000000 - 0x000140)
class FFortMantisTechniqueMetadata : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TMap<FGameplayTag, int32_t>)               IntValues                                                   ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FGameplayTag, float>)                 FloatValues                                                 ___ OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<FGameplayTag, FVector>)               VectorValues                                                ___ OFFSET(get<T>, {0xA0, 80, 0, 0})
	CMember(TMap<FGameplayTag, FString>)               StringValues                                                ___ OFFSET(get<T>, {0xF0, 80, 0, 0})
};

/// Struct /Script/MantisRuntime.FortRootMotionSource_Mantis
/// Size: 0x0080 (0x0000E0 - 0x000160)
class FFortRootMotionSource_Mantis : public FRootMotionSource
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	DMember(float)                                     CurrentTechniqueTime                                        ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	CMember(UAnimMontage*)                             TechniqueMontage                                            ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	SMember(FFortMantisRootMotionWarpInfo)             WarpInfo                                                    ___ OFFSET(get<T>, {0xE8, 40, 0, 0})
	SMember(FVector)                                   LatestRepMovementLocation                                   ___ OFFSET(get<T>, {0x110, 24, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisRootMotionWarpInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FFortMantisRootMotionWarpInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<AActor*>)                   WarpTarget                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector_NetQuantize)                       LastValidWarpTargetLocation                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bAllowTranslationWarp                                       ___ OFFSET(get<bool>, {0x20, 1, 1, 1})
	DMember(bool)                                      bAllowRotationWarp                                          ___ OFFSET(get<bool>, {0x20, 1, 1, 2})
	DMember(bool)                                      bSnapshotTargetLocation                                     ___ OFFSET(get<bool>, {0x20, 1, 1, 3})
};

/// Struct /Script/MantisRuntime.FortMantisTargetData
/// Size: 0x0178 (0x000008 - 0x000180)
class FFortMantisTargetData : public FGameplayAbilityTargetData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FFortMantisRootMotionWarpInfo)             TechniqueWarpInfo                                           ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	DMember(int32_t)                                   TechniqueDataIndex                                          ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bIsLockedOn                                                 ___ OFFSET(get<bool>, {0x34, 1, 0, 0})
	SMember(FName)                                     DynamicMontageName                                          ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FFortMantisTechniqueMetadata)              TechniqueMetadata                                           ___ OFFSET(get<T>, {0x40, 320, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisTechniqueCharacterSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortMantisTechniqueCharacterSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bDetachCharacterRotationFromCamera                          ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     ReattachCharacterRotationBlendTime                          ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ReattachCharacterRotationBlendExponent                      ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WindupCharacterRotationRate                                 ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ExecutionCharacterRotationRate                              ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     RecoveryCharacterRotationRate                               ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisTechniqueData
/// Size: 0x0150 (0x000000 - 0x000150)
class FFortMantisTechniqueData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(bool)                                      bStartsSequence                                             ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(bool)                                      bEndsSequence                                               ___ OFFSET(get<bool>, {0x5, 1, 0, 0})
	DMember(int32_t)                                   MaxConsecutiveBranchesToSelf                                ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	CMember(EFortMantisTechniqueAnimationType)         AnimationType                                               ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(UAnimMontage*)                             Montage                                                     ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TMap<FName, UAnimMontage*>)                DynamicMontages                                             ___ OFFSET(get<T>, {0x18, 80, 0, 0})
	SMember(FName)                                     DefaultDynamicMontageName                                   ___ OFFSET(get<T>, {0x68, 4, 0, 0})
	CMember(EFortMantisTechniqueRootMotionType)        RootMotionType                                              ___ OFFSET(get<T>, {0x6C, 1, 0, 0})
	DMember(float)                                     InputWindowDelay                                            ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	CMember(EFortMantisTechniqueActivationInputType)   ActivationInputType                                         ___ OFFSET(get<T>, {0x74, 1, 0, 0})
	CMember(EFortMantisTechniqueActivationTimingType)  ActivationTimingType                                        ___ OFFSET(get<T>, {0x75, 1, 0, 0})
	DMember(float)                                     MinInputHoldDuration                                        ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     MaxInputHoldDuration                                        ___ OFFSET(get<float>, {0x7C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     ActivationGameplayCues                                      ___ OFFSET(get<T>, {0x80, 32, 0, 0})
	SMember(FGameplayTagQuery)                         ActivationTagQuery                                          ___ OFFSET(get<T>, {0xA0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         OngoingTagQuery                                             ___ OFFSET(get<T>, {0xE8, 72, 0, 0})
	SMember(FGameplayTag)                              ActivationApplicationTag                                    ___ OFFSET(get<T>, {0x130, 4, 0, 0})
	SMember(FGameplayTag)                              DamageApplicationTag                                        ___ OFFSET(get<T>, {0x134, 4, 0, 0})
	SMember(FFortMantisTechniqueCharacterSettings)     CharacterSettings                                           ___ OFFSET(get<T>, {0x138, 24, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisTechniqueBranch
/// Size: 0x000C (0x000000 - 0x00000C)
class FFortMantisTechniqueBranch : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     FromTechnique                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ToTechnique                                                 ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(EFortMantisBranchPath)                     BranchPath                                                  ___ OFFSET(get<T>, {0x8, 1, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisMontageData
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortMantisMontageData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UAnimMontage*)                             Montage                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisReplicatedAnimInstanceInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortMantisReplicatedAnimInstanceInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bIsTechniqueActive                                          ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     ActiveTechniqueName                                         ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ActiveTechniqueIndex                                        ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ActiveTechniqueConsecutiveBranchesToSelf                    ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/MantisRuntime.FortMantisRootMotionWarpInfoNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FFortMantisRootMotionWarpInfoNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Enum /Script/MantisRuntime.EFortMantisTechniqueActivationInputType
/// Size: 0x05
enum EFortMantisTechniqueActivationInputType : uint8_t
{
	EFortMantisTechniqueActivationInputType__None0                                   = 0,
	EFortMantisTechniqueActivationInputType__Primary1                                = 1,
	EFortMantisTechniqueActivationInputType__Secondary2                              = 2,
	EFortMantisTechniqueActivationInputType__Max_Invalid3                            = 3,
	EFortMantisTechniqueActivationInputType__EFortMantisTechniqueActivationInputType_MAX4 = 4
};

/// Enum /Script/MantisRuntime.EFortMantisTechniqueActivationTimingType
/// Size: 0x04
enum EFortMantisTechniqueActivationTimingType : uint8_t
{
	EFortMantisTechniqueActivationTimingType__None0                                  = 0,
	EFortMantisTechniqueActivationTimingType__Pressed1                               = 1,
	EFortMantisTechniqueActivationTimingType__Released2                              = 2,
	EFortMantisTechniqueActivationTimingType__EFortMantisTechniqueActivationTimingType_MAX3 = 3
};

/// Enum /Script/MantisRuntime.EFortMantisTechniqueAnimationType
/// Size: 0x04
enum EFortMantisTechniqueAnimationType : uint8_t
{
	EFortMantisTechniqueAnimationType__SingleMontage0                                = 0,
	EFortMantisTechniqueAnimationType__DynamicMontage1                               = 1,
	EFortMantisTechniqueAnimationType__AnimInstance2                                 = 2,
	EFortMantisTechniqueAnimationType__EFortMantisTechniqueAnimationType_MAX3        = 3
};

/// Enum /Script/MantisRuntime.EFortMantisTechniqueRootMotionType
/// Size: 0x03
enum EFortMantisTechniqueRootMotionType : uint8_t
{
	EFortMantisTechniqueRootMotionType__None0                                        = 0,
	EFortMantisTechniqueRootMotionType__ExtractFromMontageAndWarp1                   = 1,
	EFortMantisTechniqueRootMotionType__EFortMantisTechniqueRootMotionType_MAX2      = 2
};

/// Enum /Script/MantisRuntime.EFortMantisNotifyEvent
/// Size: 0x04
enum EFortMantisNotifyEvent : uint8_t
{
	EFortMantisNotifyEvent__Invalid0                                                 = 0,
	EFortMantisNotifyEvent__Branch1                                                  = 1,
	EFortMantisNotifyEvent__EndTechnique2                                            = 2,
	EFortMantisNotifyEvent__EFortMantisNotifyEvent_MAX3                              = 3
};

/// Enum /Script/MantisRuntime.EFortMantisNotifyWindow
/// Size: 0x06
enum EFortMantisNotifyWindow : uint8_t
{
	EFortMantisNotifyWindow__Invalid0                                                = 0,
	EFortMantisNotifyWindow__Input1                                                  = 1,
	EFortMantisNotifyWindow__Execution2                                              = 2,
	EFortMantisNotifyWindow__Damage3                                                 = 3,
	EFortMantisNotifyWindow__RootMotionWarp4                                         = 4,
	EFortMantisNotifyWindow__EFortMantisNotifyWindow_MAX5                            = 5
};

/// Enum /Script/MantisRuntime.EFortMantisNotifyRotationWarpRateRule
/// Size: 0x03
enum EFortMantisNotifyRotationWarpRateRule : uint8_t
{
	EFortMantisNotifyRotationWarpRateRule__Snap0                                     = 0,
	EFortMantisNotifyRotationWarpRateRule__WindowDurationLerp1                       = 1,
	EFortMantisNotifyRotationWarpRateRule__EFortMantisNotifyRotationWarpRateRule_MAX2 = 2
};

/// Enum /Script/MantisRuntime.EFortMantisBranchRule
/// Size: 0x04
enum EFortMantisBranchRule : uint8_t
{
	EFortMantisBranchRule__Off0                                                      = 0,
	EFortMantisBranchRule__Any1                                                      = 1,
	EFortMantisBranchRule__Starter2                                                  = 2,
	EFortMantisBranchRule__EFortMantisBranchRule_MAX3                                = 3
};

/// Enum /Script/MantisRuntime.EFortMantisBranchPath
/// Size: 0x08
enum EFortMantisBranchPath : uint8_t
{
	EFortMantisBranchPath__Default0                                                  = 0,
	EFortMantisBranchPath__Path1                                                     = 1,
	EFortMantisBranchPath__Path2                                                     = 2,
	EFortMantisBranchPath__Path3                                                     = 3,
	EFortMantisBranchPath__Path4                                                     = 4,
	EFortMantisBranchPath__Path5                                                     = 5,
	EFortMantisBranchPath__Blocked6                                                  = 6,
	EFortMantisBranchPath__EFortMantisBranchPath_MAX7                                = 7
};

