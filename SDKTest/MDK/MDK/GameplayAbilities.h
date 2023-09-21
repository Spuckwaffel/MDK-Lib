
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTasks
/// dependency: IrisCore
/// dependency: MovieScene
/// dependency: NetCore

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUD
/// Size: 0x0000 (0x000380 - 0x000380)
class AAbilitySystemDebugHUD : public AHUD
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Script/GameplayAbilities.GameplayEffect
/// Size: 0x0A40 (0x000028 - 0x000A68)
class UGameplayEffect : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
	CMember(EGameplayEffectDurationType)               DurationPolicy                                              ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FGameplayEffectModifierMagnitude)          DurationMagnitude                                           ___ OFFSET(get<T>, {0x38, 472, 0, 0})
	SMember(FScalableFloat)                            Period                                                      ___ OFFSET(get<T>, {0x210, 40, 0, 0})
	DMember(bool)                                      bExecutePeriodicEffectOnApplication                         ___ OFFSET(get<bool>, {0x238, 1, 0, 0})
	CMember(EGameplayEffectPeriodInhibitionRemovedPolicy) PeriodicInhibitionPolicy                                 ___ OFFSET(get<T>, {0x239, 1, 0, 0})
	CMember(TArray<FGameplayModifierInfo>)             Modifiers                                                   ___ OFFSET(get<T>, {0x240, 16, 0, 0})
	CMember(TArray<FGameplayEffectExecutionDefinition>) Executions                                                 ___ OFFSET(get<T>, {0x250, 16, 0, 0})
	SMember(FScalableFloat)                            ChanceToApplyToTarget                                       ___ OFFSET(get<T>, {0x260, 40, 0, 0})
	CMember(TArray<UClass*>)                           ApplicationRequirements                                     ___ OFFSET(get<T>, {0x288, 16, 0, 0})
	CMember(TArray<FConditionalGameplayEffect>)        ConditionalGameplayEffects                                  ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<UClass*>)                           OverflowEffects                                             ___ OFFSET(get<T>, {0x2A8, 16, 0, 0})
	DMember(bool)                                      bDenyOverflowApplication                                    ___ OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(bool)                                      bClearStackOnOverflow                                       ___ OFFSET(get<bool>, {0x2B9, 1, 0, 0})
	CMember(TArray<UClass*>)                           PrematureExpirationEffectClasses                            ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<UClass*>)                           RoutineExpirationEffectClasses                              ___ OFFSET(get<T>, {0x2D0, 16, 0, 0})
	DMember(bool)                                      bRequireModifierSuccessToTriggerCues                        ___ OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	DMember(bool)                                      bSuppressStackingCues                                       ___ OFFSET(get<bool>, {0x2E1, 1, 0, 0})
	CMember(TArray<FGameplayEffectCue>)                GameplayCues                                                ___ OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(UGameplayEffectUIData*)                    UIData                                                      ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(FInheritedTagContainer)                    InheritableGameplayEffectTags                               ___ OFFSET(get<T>, {0x300, 96, 0, 0})
	SMember(FInheritedTagContainer)                    InheritableOwnedTagsContainer                               ___ OFFSET(get<T>, {0x360, 96, 0, 0})
	SMember(FInheritedTagContainer)                    InheritableBlockedAbilityTagsContainer                      ___ OFFSET(get<T>, {0x3C0, 96, 0, 0})
	SMember(FGameplayTagRequirements)                  OngoingTagRequirements                                      ___ OFFSET(get<T>, {0x420, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  ApplicationTagRequirements                                  ___ OFFSET(get<T>, {0x4A8, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  RemovalTagRequirements                                      ___ OFFSET(get<T>, {0x530, 136, 0, 0})
	SMember(FInheritedTagContainer)                    RemoveGameplayEffectsWithTags                               ___ OFFSET(get<T>, {0x5B8, 96, 0, 0})
	SMember(FGameplayTagRequirements)                  GrantedApplicationImmunityTags                              ___ OFFSET(get<T>, {0x618, 136, 0, 0})
	SMember(FGameplayEffectQuery)                      GrantedApplicationImmunityQuery                             ___ OFFSET(get<T>, {0x6A0, 408, 0, 0})
	SMember(FGameplayEffectQuery)                      RemoveGameplayEffectQuery                                   ___ OFFSET(get<T>, {0x840, 408, 0, 0})
	CMember(EGameplayEffectStackingType)               StackingType                                                ___ OFFSET(get<T>, {0x9D9, 1, 0, 0})
	DMember(int32_t)                                   StackLimitCount                                             ___ OFFSET(get<int32_t>, {0x9DC, 4, 0, 0})
	CMember(EGameplayEffectStackingDurationPolicy)     StackDurationRefreshPolicy                                  ___ OFFSET(get<T>, {0x9E0, 1, 0, 0})
	CMember(EGameplayEffectStackingPeriodPolicy)       StackPeriodResetPolicy                                      ___ OFFSET(get<T>, {0x9E1, 1, 0, 0})
	CMember(EGameplayEffectStackingExpirationPolicy)   StackExpirationPolicy                                       ___ OFFSET(get<T>, {0x9E2, 1, 0, 0})
	CMember(TArray<FGameplayAbilitySpecDef>)           GrantedAbilities                                            ___ OFFSET(get<T>, {0x9E8, 16, 0, 0})
	CMember(TArray<UGameplayEffectComponent*>)         GEComponents                                                ___ OFFSET(get<T>, {0xA58, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayEffectComponent
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEffectComponent : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.AbilitiesGameplayEffectComponent
/// Size: 0x0010 (0x000028 - 0x000038)
class UAbilitiesGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGameplayAbilitySpecConfig>)        GrantAbilityConfigs                                         ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AdditionalEffectsGameplayEffectComponent
/// Size: 0x0048 (0x000028 - 0x000070)
class UAdditionalEffectsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bOnApplicationCopyDataFromOriginalSpec                      ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<FConditionalGameplayEffect>)        OnApplicationGameplayEffects                                ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UClass*>)                           OnCompleteAlways                                            ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<UClass*>)                           OnCompleteNormal                                            ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<UClass*>)                           OnCompletePrematurely                                       ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AssetTagsGameplayEffectComponent
/// Size: 0x0060 (0x000028 - 0x000088)
class UAssetTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FInheritedTagContainer)                    InheritableAssetTags                                        ___ OFFSET(get<T>, {0x28, 96, 0, 0})
};

/// Class /Script/GameplayAbilities.BlockAbilityTagsGameplayEffectComponent
/// Size: 0x0060 (0x000028 - 0x000088)
class UBlockAbilityTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FInheritedTagContainer)                    InheritableBlockedAbilityTagsContainer                      ___ OFFSET(get<T>, {0x28, 96, 0, 0})
};

/// Class /Script/GameplayAbilities.ChanceToApplyGameplayEffectComponent
/// Size: 0x0028 (0x000028 - 0x000050)
class UChanceToApplyGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            ChanceToApplyToTarget                                       ___ OFFSET(get<T>, {0x28, 40, 0, 0})
};

/// Class /Script/GameplayAbilities.CustomCanApplyGameplayEffectComponent
/// Size: 0x0010 (0x000028 - 0x000038)
class UCustomCanApplyGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UClass*>)                           ApplicationRequirements                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEffectUIData : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.GameplayEffectUIData_TextOnly
/// Size: 0x0018 (0x000028 - 0x000040)
class UGameplayEffectUIData_TextOnly : public UGameplayEffectUIData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     Description                                                 ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Class /Script/GameplayAbilities.ImmunityGameplayEffectComponent
/// Size: 0x0010 (0x000028 - 0x000038)
class UImmunityGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGameplayEffectQuery>)              ImmunityQueries                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.RemoveOtherGameplayEffectComponent
/// Size: 0x0010 (0x000028 - 0x000038)
class URemoveOtherGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGameplayEffectQuery>)              RemoveGameplayEffectQueries                                 ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.TargetTagRequirementsGameplayEffectComponent
/// Size: 0x0198 (0x000028 - 0x0001C0)
class UTargetTagRequirementsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FGameplayTagRequirements)                  ApplicationTagRequirements                                  ___ OFFSET(get<T>, {0x28, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  OngoingTagRequirements                                      ___ OFFSET(get<T>, {0xB0, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  RemovalTagRequirements                                      ___ OFFSET(get<T>, {0x138, 136, 0, 0})
};

/// Class /Script/GameplayAbilities.TargetTagsGameplayEffectComponent
/// Size: 0x0060 (0x000028 - 0x000088)
class UTargetTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FInheritedTagContainer)                    InheritableGrantedTagsContainer                             ___ OFFSET(get<T>, {0x28, 96, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityAsync
/// Size: 0x0008 (0x000030 - 0x000038)
class UAbilityAsync : public UCancellableAsyncAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged
/// Size: 0x0058 (0x000038 - 0x000090)
class UAbilityAsync_WaitAttributeChanged : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  Changed                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
/// Size: 0x0150 (0x000038 - 0x000188)
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FMulticastInlineDelegate)                  OnApplied                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent
/// Size: 0x0020 (0x000038 - 0x000058)
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMulticastInlineDelegate)                  EventReceived                                               ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTag
/// Size: 0x0018 (0x000038 - 0x000050)
class UAbilityAsync_WaitGameplayTag : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded
/// Size: 0x0010 (0x000050 - 0x000060)
class UAbilityAsync_WaitGameplayTagAdded : public UAbilityAsync_WaitGameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  Added                                                       ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
/// Size: 0x0010 (0x000050 - 0x000060)
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  Removed                                                     ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
/// Size: 0x00D0 (0x000038 - 0x000108)
class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  Triggered                                                   ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbility
/// Size: 0x0390 (0x000028 - 0x0003B8)
class UGameplayAbility : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	SMember(FGameplayTagContainer)                     AbilityTags                                                 ___ OFFSET(get<T>, {0xA8, 32, 0, 0})
	DMember(bool)                                      bReplicateInputDirectly                                     ___ OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      RemoteInstanceEnded                                         ___ OFFSET(get<bool>, {0xC9, 1, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityReplicationPolicy>) ReplicationPolicy                                      ___ OFFSET(get<T>, {0xCE, 1, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityInstancingPolicy>) InstancingPolicy                                        ___ OFFSET(get<T>, {0xCF, 1, 0, 0})
	DMember(bool)                                      bServerRespectsRemoteAbilityCancellation                    ___ OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bRetriggerInstancedAbility                                  ___ OFFSET(get<bool>, {0xD1, 1, 0, 0})
	SMember(FGameplayAbilityActivationInfo)            CurrentActivationInfo                                       ___ OFFSET(get<T>, {0xD8, 32, 0, 0})
	SMember(FGameplayEventData)                        CurrentEventData                                            ___ OFFSET(get<T>, {0xF8, 176, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityNetExecutionPolicy>) NetExecutionPolicy                                    ___ OFFSET(get<T>, {0x1A8, 1, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityNetSecurityPolicy>) NetSecurityPolicy                                      ___ OFFSET(get<T>, {0x1A9, 1, 0, 0})
	CMember(UClass*)                                   CostGameplayEffectClass                                     ___ OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(TArray<FAbilityTriggerData>)               AbilityTriggers                                             ___ OFFSET(get<T>, {0x1B8, 16, 0, 0})
	CMember(UClass*)                                   CooldownGameplayEffectClass                                 ___ OFFSET(get<T>, {0x1C8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     CancelAbilitiesWithTag                                      ___ OFFSET(get<T>, {0x1D0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     BlockAbilitiesWithTag                                       ___ OFFSET(get<T>, {0x1F0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ActivationOwnedTags                                         ___ OFFSET(get<T>, {0x210, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ActivationRequiredTags                                      ___ OFFSET(get<T>, {0x230, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ActivationBlockedTags                                       ___ OFFSET(get<T>, {0x250, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SourceRequiredTags                                          ___ OFFSET(get<T>, {0x270, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SourceBlockedTags                                           ___ OFFSET(get<T>, {0x290, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetRequiredTags                                          ___ OFFSET(get<T>, {0x2B0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetBlockedTags                                           ___ OFFSET(get<T>, {0x2D0, 32, 0, 0})
	CMember(TArray<UGameplayTask*>)                    ActiveTasks                                                 ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(UAnimMontage*)                             CurrentMontage                                              ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(bool)                                      bIsActive                                                   ___ OFFSET(get<bool>, {0x398, 1, 0, 0})
	DMember(bool)                                      bIsAbilityEnding                                            ___ OFFSET(get<bool>, {0x399, 1, 0, 0})
	DMember(bool)                                      bIsCancelable                                               ___ OFFSET(get<bool>, {0x39A, 1, 0, 0})
	DMember(bool)                                      bIsBlockingOtherAbilities                                   ___ OFFSET(get<bool>, {0x39B, 1, 0, 0})
	DMember(bool)                                      bMarkPendingKillOnAbilityEnd                                ___ OFFSET(get<bool>, {0x3B0, 1, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilitySet
/// Size: 0x0010 (0x000030 - 0x000040)
class UGameplayAbilitySet : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FGameplayAbilityBindInfo>)          Abilities                                                   ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor
/// Size: 0x0150 (0x000290 - 0x0003E0)
class AGameplayAbilityTargetActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	DMember(bool)                                      ShouldProduceTargetDataOnServer                             ___ OFFSET(get<bool>, {0x290, 1, 0, 0})
	SMember(FGameplayAbilityTargetingLocationInfo)     StartLocation                                               ___ OFFSET(get<T>, {0x2A0, 160, 0, 0})
	CMember(APlayerController*)                        PrimaryPC                                                   ___ OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UGameplayAbility*)                         OwningAbility                                               ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(bool)                                      bDestroyOnConfirmation                                      ___ OFFSET(get<bool>, {0x380, 1, 0, 0})
	CMember(AActor*)                                   SourceActor                                                 ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	SMember(FWorldReticleParameters)                   ReticleParams                                               ___ OFFSET(get<T>, {0x390, 24, 0, 0})
	CMember(UClass*)                                   ReticleClass                                                ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	SMember(FGameplayTargetDataFilterHandle)           Filter                                                      ___ OFFSET(get<T>, {0x3B0, 16, 0, 0})
	DMember(bool)                                      bDebug                                                      ___ OFFSET(get<bool>, {0x3C0, 1, 0, 0})
	CMember(UAbilitySystemComponent*)                  GenericDelegateBoundASC                                     ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Trace
/// Size: 0x0020 (0x0003E0 - 0x000400)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	DMember(float)                                     MaxRange                                                    ___ OFFSET(get<float>, {0x3E0, 4, 0, 0})
	SMember(FCollisionProfileName)                     TraceProfile                                                ___ OFFSET(get<T>, {0x3E4, 4, 0, 0})
	DMember(bool)                                      bTraceAffectsAimPitch                                       ___ OFFSET(get<bool>, {0x3E8, 1, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
/// Size: 0x0020 (0x000400 - 0x000420)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	DMember(float)                                     CollisionRadius                                             ___ OFFSET(get<float>, {0x3F8, 4, 0, 0})
	DMember(float)                                     CollisionHeight                                             ___ OFFSET(get<float>, {0x3FC, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
/// Size: 0x0010 (0x000420 - 0x000430)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(UClass*)                                   PlacedActorClass                                            ___ OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UMaterialInterface*)                       PlacedActorMaterial                                         ___ OFFSET(get<T>, {0x420, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Radius
/// Size: 0x0010 (0x0003E0 - 0x0003F0)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x3E0, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_SingleLineTrace
/// Size: 0x0000 (0x000400 - 0x000400)
class AGameplayAbilityTargetActor_SingleLineTrace : public AGameplayAbilityTargetActor_Trace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle
/// Size: 0x0030 (0x000290 - 0x0002C0)
class AGameplayAbilityWorldReticle : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FWorldReticleParameters)                   Parameters                                                  ___ OFFSET(get<T>, {0x290, 24, 0, 0})
	DMember(bool)                                      bFaceOwnerFlat                                              ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bSnapToTargetedActor                                        ___ OFFSET(get<bool>, {0x2A9, 1, 0, 0})
	DMember(bool)                                      bIsTargetValid                                              ___ OFFSET(get<bool>, {0x2AA, 1, 0, 0})
	DMember(bool)                                      bIsTargetAnActor                                            ___ OFFSET(get<bool>, {0x2AB, 1, 0, 0})
	CMember(APlayerController*)                        PrimaryPC                                                   ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(AGameplayAbilityTargetActor*)              TargetingActor                                              ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UCapsuleComponent*)                        CollisionComponent                                          ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(TArray<UActorComponent*>)                  VisualizationComponents                                     ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbility_CharacterJump
/// Size: 0x0000 (0x0003B8 - 0x0003B8)
class UGameplayAbility_CharacterJump : public UGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
};

/// Class /Script/GameplayAbilities.GameplayAbility_Montage
/// Size: 0x0030 (0x0003B8 - 0x0003E8)
class UGameplayAbility_Montage : public UGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	CMember(UAnimMontage*)                             MontageToPlay                                               ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x3C0, 4, 0, 0})
	SMember(FName)                                     SectionName                                                 ___ OFFSET(get<T>, {0x3C4, 4, 0, 0})
	CMember(TArray<UClass*>)                           GameplayEffectClassesWhileAnimating                         ___ OFFSET(get<T>, {0x3C8, 16, 0, 0})
	CMember(TArray<UGameplayEffect*>)                  GameplayEffectsWhileAnimating                               ___ OFFSET(get<T>, {0x3D8, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask
/// Size: 0x0018 (0x000060 - 0x000078)
class UAbilityTask : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UGameplayAbility*)                         Ability                                                     ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TWeakObjectPtr<UAbilitySystemComponent*>)  AbilitySystemComponent                                      ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FName)                                     ForceName                                                   ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	CMember(ERootMotionFinishVelocityMode)             FinishVelocityMode                                          ___ OFFSET(get<T>, {0x7C, 1, 0, 0})
	SMember(FVector)                                   FinishSetVelocity                                           ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	DMember(float)                                     FinishClampVelocity                                         ___ OFFSET(get<float>, {0x98, 4, 0, 0})
	CMember(UCharacterMovementComponent*)              MovementComponent                                           ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FVector)                                   WorldDirection                                              ___ OFFSET(get<T>, {0xC8, 24, 0, 0})
	DMember(float)                                     Strength                                                    ___ OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(bool)                                      bIsAdditive                                                 ___ OFFSET(get<bool>, {0xE8, 1, 0, 0})
	CMember(UCurveFloat*)                              StrengthOverTime                                            ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bEnableGravity                                              ___ OFFSET(get<bool>, {0xF8, 1, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLanded                                                    ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FRotator)                                  Rotation                                                    ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	DMember(float)                                     Distance                                                    ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     Height                                                      ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     MinimumLandedTriggerTime                                    ___ OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(bool)                                      bFinishOnLanded                                             ___ OFFSET(get<bool>, {0x100, 1, 0, 0})
	CMember(UCurveVector*)                             PathOffsetCurve                                             ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(UCurveFloat*)                              TimeMappingCurve                                            ___ OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
/// Size: 0x00A0 (0x0000B8 - 0x000158)
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FVector)                                   StartLocation                                               ___ OFFSET(get<T>, {0xD0, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              ___ OFFSET(get<T>, {0xE8, 24, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FVector)                                   TargetLocationOffset                                        ___ OFFSET(get<T>, {0x108, 24, 0, 0})
	CMember(ERootMotionMoveToActorTargetOffsetType)    OffsetAlignment                                             ___ OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(bool)                                      bDisableDestinationReachedInterrupt                         ___ OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(bool)                                      bSetNewMovementMode                                         ___ OFFSET(get<bool>, {0x129, 1, 0, 0})
	CMember(TEnumAsByte<EMovementMode>)                NewMovementMode                                             ___ OFFSET(get<T>, {0x12A, 1, 0, 0})
	DMember(bool)                                      bRestrictSpeedToExpected                                    ___ OFFSET(get<bool>, {0x12B, 1, 0, 0})
	CMember(UCurveVector*)                             PathOffsetCurve                                             ___ OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(UCurveFloat*)                              TimeMappingCurve                                            ___ OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(UCurveFloat*)                              TargetLerpSpeedHorizontalCurve                              ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(UCurveFloat*)                              TargetLerpSpeedVerticalCurve                                ___ OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMulticastInlineDelegate)                  OnTimedOut                                                  ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTimedOutAndDestinationReached                             ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	SMember(FVector)                                   StartLocation                                               ___ OFFSET(get<T>, {0xD8, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              ___ OFFSET(get<T>, {0xF0, 24, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(bool)                                      bSetNewMovementMode                                         ___ OFFSET(get<bool>, {0x10C, 1, 0, 0})
	CMember(TEnumAsByte<EMovementMode>)                NewMovementMode                                             ___ OFFSET(get<T>, {0x10D, 1, 0, 0})
	DMember(bool)                                      bRestrictSpeedToExpected                                    ___ OFFSET(get<bool>, {0x10E, 1, 0, 0})
	CMember(UCurveVector*)                             PathOffsetCurve                                             ___ OFFSET(get<T>, {0x110, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
/// Size: 0x0070 (0x0000B8 - 0x000128)
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0xC8, 24, 0, 0})
	CMember(AActor*)                                   LocationActor                                               ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(float)                                     Strength                                                    ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(bool)                                      bIsPush                                                     ___ OFFSET(get<bool>, {0xF4, 1, 0, 0})
	DMember(bool)                                      bIsAdditive                                                 ___ OFFSET(get<bool>, {0xF5, 1, 0, 0})
	DMember(bool)                                      bNoZForce                                                   ___ OFFSET(get<bool>, {0xF6, 1, 0, 0})
	CMember(UCurveFloat*)                              StrengthDistanceFalloff                                     ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(UCurveFloat*)                              StrengthOverTime                                            ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	DMember(bool)                                      bUseFixedWorldDirection                                     ___ OFFSET(get<bool>, {0x108, 1, 0, 0})
	SMember(FRotator)                                  FixedWorldDirection                                         ___ OFFSET(get<T>, {0x110, 24, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_MoveToLocation
/// Size: 0x0068 (0x000078 - 0x0000E0)
class UAbilityTask_MoveToLocation : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FMulticastInlineDelegate)                  OnTargetLocationReached                                     ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FVector)                                   StartLocation                                               ___ OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	DMember(float)                                     DurationOfMovement                                          ___ OFFSET(get<float>, {0xC0, 4, 0, 0})
	CMember(UCurveFloat*)                              LerpCurve                                                   ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UCurveVector*)                             LerpCurveVector                                             ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint
/// Size: 0x0018 (0x000078 - 0x000090)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnSync                                                      ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait
/// Size: 0x0088 (0x000078 - 0x000100)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  OnCompleted                                                 ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBlendOut                                                  ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterrupted                                               ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCancelled                                                 ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(UAnimMontage*)                             MontageToPlay                                               ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(float)                                     Rate                                                        ___ OFFSET(get<float>, {0xE8, 4, 0, 0})
	SMember(FName)                                     StartSection                                                ___ OFFSET(get<T>, {0xEC, 4, 0, 0})
	DMember(float)                                     AnimRootMotionTranslationScale                              ___ OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     StartTimeSeconds                                            ___ OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(bool)                                      bStopWhenAbilityEnds                                        ___ OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bAllowInterruptAfterBlendOut                                ___ OFFSET(get<bool>, {0xF9, 1, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_Repeat
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UAbilityTask_Repeat : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnPerformAction                                             ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_SpawnActor
/// Size: 0x0048 (0x000078 - 0x0000C0)
class UAbilityTask_SpawnActor : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMulticastInlineDelegate)                  Success                                                     ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DidNotSpawn                                                 ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_StartAbilityState
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UAbilityTask_StartAbilityState : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnStateEnded                                                ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStateInterrupted                                          ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_VisualizeTargeting
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  TimeElapsed                                                 ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate
/// Size: 0x00F8 (0x000078 - 0x000170)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FMulticastInlineDelegate)                  OnActivate                                                  ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit
/// Size: 0x0070 (0x000078 - 0x0000E8)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnCommit                                                    ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChange
/// Size: 0x0070 (0x000078 - 0x0000E8)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  ExternalOwner                                               ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
/// Size: 0x00C0 (0x000078 - 0x000138)
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  ExternalOwner                                               ___ OFFSET(get<T>, {0x130, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
/// Size: 0x0070 (0x000078 - 0x0000E8)
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  ExternalOwner                                               ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitCancel
/// Size: 0x0018 (0x000078 - 0x000090)
class UAbilityTask_WaitCancel : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnCancel                                                    ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirm
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitConfirm : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnConfirm                                                   ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  OnConfirm                                                   ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCancel                                                    ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitDelay
/// Size: 0x0018 (0x000078 - 0x000090)
class UAbilityTask_WaitDelay : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
/// Size: 0x01C8 (0x000078 - 0x000240)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(UAbilitySystemComponent*)                  ExternalOwner                                               ___ OFFSET(get<T>, {0x230, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
/// Size: 0x0020 (0x000240 - 0x000260)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FMulticastInlineDelegate)                  OnApplied                                                   ___ OFFSET(get<T>, {0x240, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
/// Size: 0x0020 (0x000240 - 0x000260)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FMulticastInlineDelegate)                  OnApplied                                                   ___ OFFSET(get<T>, {0x240, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
/// Size: 0x0138 (0x000078 - 0x0001B0)
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FMulticastInlineDelegate)                  bLocked                                                     ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  ExternalOwner                                               ___ OFFSET(get<T>, {0x1A0, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  OnRemoved                                                   ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  InvalidHandle                                               ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  InvalidHandle                                               ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  EventReceived                                               ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  OptionalExternalTarget                                      ___ OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTag
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UAbilitySystemComponent*)                  OptionalExternalTarget                                      ___ OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  Added                                                       ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  Removed                                                     ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery
/// Size: 0x00E0 (0x000078 - 0x000158)
class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FMulticastInlineDelegate)                  Triggered                                                   ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  OptionalExternalTarget                                      ___ OFFSET(get<T>, {0x148, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputPress
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitInputPress : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnPress                                                     ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputRelease
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnRelease                                                   ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitOverlap
/// Size: 0x0010 (0x000078 - 0x000088)
class UAbilityTask_WaitOverlap : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  OnOverlap                                                   ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitTargetData
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UAbilityTask_WaitTargetData : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  ValidData                                                   ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Cancelled                                                   ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	CMember(UClass*)                                   TargetClass                                                 ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(AGameplayAbilityTargetActor*)              TargetActor                                                 ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitVelocityChange
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnVelocityChage                                             ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(UMovementComponent*)                       CachedMovementComponent                                     ___ OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilitySystemBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemComponent
/// Size: 0x1130 (0x000118 - 0x001248)
class UAbilitySystemComponent : public UGameplayTasksComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4680;

public:
	CMember(TArray<FAttributeDefaults>)                DefaultStartingData                                         ___ OFFSET(get<T>, {0x128, 16, 0, 0})
	SMember(FName)                                     AffectedAnimInstanceTag                                     ___ OFFSET(get<T>, {0x138, 4, 0, 0})
	DMember(float)                                     OutgoingDuration                                            ___ OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(float)                                     IncomingDuration                                            ___ OFFSET(get<float>, {0x2EC, 4, 0, 0})
	CMember(TArray<FString>)                           ClientDebugStrings                                          ___ OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(TArray<FString>)                           ServerDebugStrings                                          ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	DMember(bool)                                      UserAbilityActivationInhibited                              ___ OFFSET(get<bool>, {0x390, 1, 0, 0})
	DMember(bool)                                      ReplicationProxyEnabled                                     ___ OFFSET(get<bool>, {0x391, 1, 0, 0})
	DMember(bool)                                      bSuppressGrantAbility                                       ___ OFFSET(get<bool>, {0x392, 1, 0, 0})
	DMember(bool)                                      bSuppressGameplayCues                                       ___ OFFSET(get<bool>, {0x393, 1, 0, 0})
	CMember(TArray<AGameplayAbilityTargetActor*>)      SpawnedTargetActors                                         ___ OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(AActor*)                                   OwnerActor                                                  ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(AActor*)                                   AvatarActor                                                 ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
	SMember(FGameplayAbilitySpecContainer)             ActivatableAbilities                                        ___ OFFSET(get<T>, {0x3F0, 288, 0, 0})
	CMember(TArray<UGameplayAbility*>)                 AllReplicatedInstancedAbilities                             ___ OFFSET(get<T>, {0x540, 16, 0, 0})
	SMember(FGameplayAbilityRepAnimMontage)            RepAnimMontageInfo                                          ___ OFFSET(get<T>, {0x780, 56, 0, 0})
	DMember(bool)                                      bCachedIsNetSimulated                                       ___ OFFSET(get<bool>, {0x7B8, 1, 0, 0})
	DMember(bool)                                      bPendingMontageRep                                          ___ OFFSET(get<bool>, {0x7B9, 1, 0, 0})
	SMember(FGameplayAbilityLocalAnimMontage)          LocalAnimMontageInfo                                        ___ OFFSET(get<T>, {0x7C0, 48, 0, 0})
	SMember(FActiveGameplayEffectsContainer)           ActiveGameplayEffects                                       ___ OFFSET(get<T>, {0x890, 760, 0, 0})
	SMember(FActiveGameplayCueContainer)               ActiveGameplayCues                                          ___ OFFSET(get<T>, {0xB88, 296, 0, 0})
	SMember(FActiveGameplayCueContainer)               MinimalReplicationGameplayCues                              ___ OFFSET(get<T>, {0xCB0, 296, 0, 0})
	CMember(TArray<char>)                              BlockedAbilityBindings                                      ___ OFFSET(get<T>, {0xF00, 16, 0, 0})
	SMember(FMinimalReplicationTagCountMap)            MinimalReplicationTags                                      ___ OFFSET(get<T>, {0x1038, 96, 0, 0})
	CMember(TArray<UAttributeSet*>)                    SpawnedAttributes                                           ___ OFFSET(get<T>, {0x1098, 16, 0, 0})
	SMember(FMinimalReplicationTagCountMap)            ReplicatedLooseTags                                         ___ OFFSET(get<T>, {0x10B8, 96, 0, 0})
	SMember(FReplicatedPredictionKeyMap)               ReplicatedPredictionKeyMap                                  ___ OFFSET(get<T>, {0x1120, 280, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemDebugHUDExtension : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Tags
/// Size: 0x0058 (0x000028 - 0x000080)
class UAbilitySystemDebugHUDExtension_Tags : public UAbilitySystemDebugHUDExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_Attributes
/// Size: 0x0058 (0x000028 - 0x000080)
class UAbilitySystemDebugHUDExtension_Attributes : public UAbilitySystemDebugHUDExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemDebugHUDExtension_BlockedAbilityTags
/// Size: 0x0058 (0x000028 - 0x000080)
class UAbilitySystemDebugHUDExtension_BlockedAbilityTags : public UAbilitySystemDebugHUDExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemGlobals
/// Size: 0x01F0 (0x000028 - 0x000218)
class UAbilitySystemGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FSoftClassPath)                            AbilitySystemGlobalsClassName                               ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bUseDebugTargetFromHud                                      ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FGameplayTag)                              ActivateFailIsDeadTag                                       ___ OFFSET(get<T>, {0x6C, 4, 0, 0})
	SMember(FName)                                     ActivateFailIsDeadName                                      ___ OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailCooldownTag                                     ___ OFFSET(get<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     ActivateFailCooldownName                                    ___ OFFSET(get<T>, {0x78, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailCostTag                                         ___ OFFSET(get<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     ActivateFailCostName                                        ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailTagsBlockedTag                                  ___ OFFSET(get<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     ActivateFailTagsBlockedName                                 ___ OFFSET(get<T>, {0x88, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailTagsMissingTag                                  ___ OFFSET(get<T>, {0x8C, 4, 0, 0})
	SMember(FName)                                     ActivateFailTagsMissingName                                 ___ OFFSET(get<T>, {0x90, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailNetworkingTag                                   ___ OFFSET(get<T>, {0x94, 4, 0, 0})
	SMember(FName)                                     ActivateFailNetworkingName                                  ___ OFFSET(get<T>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   MinimalReplicationTagCountBits                              ___ OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	SMember(FNetSerializeScriptStructCache)            TargetDataStructCache                                       ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FNetSerializeScriptStructCache)            EffectContextStructCache                                    ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bAllowGameplayModEvaluationChannels                         ___ OFFSET(get<bool>, {0xC0, 1, 0, 0})
	CMember(EGameplayModEvaluationChannel)             DefaultGameplayModEvaluationChannel                         ___ OFFSET(get<T>, {0xC1, 1, 0, 0})
	SMember(FName)                                     GameplayModEvaluationChannelAliases                         ___ OFFSET(get<T>, {0xC4, 40, 0, 0})
	SMember(FSoftObjectPath)                           GlobalCurveTableName                                        ___ OFFSET(get<T>, {0xF0, 24, 0, 0})
	CMember(UCurveTable*)                              GlobalCurveTable                                            ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FSoftObjectPath)                           GlobalAttributeMetaDataTableName                            ___ OFFSET(get<T>, {0x110, 24, 0, 0})
	CMember(UDataTable*)                               GlobalAttributeMetaDataTable                                ___ OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FSoftObjectPath)                           GlobalAttributeSetDefaultsTableName                         ___ OFFSET(get<T>, {0x130, 24, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   GlobalAttributeSetDefaultsTableNames                        ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<UCurveTable*>)                      GlobalAttributeDefaultsTables                               ___ OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FSoftObjectPath)                           GlobalGameplayCueManagerClass                               ___ OFFSET(get<T>, {0x168, 24, 0, 0})
	SMember(FSoftObjectPath)                           GlobalGameplayCueManagerName                                ___ OFFSET(get<T>, {0x180, 24, 0, 0})
	CMember(TArray<FString>)                           GameplayCueNotifyPaths                                      ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FSoftObjectPath)                           GameplayTagResponseTableName                                ___ OFFSET(get<T>, {0x1A8, 24, 0, 0})
	CMember(UGameplayTagReponseTable*)                 GameplayTagResponseTable                                    ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	DMember(bool)                                      PredictTargetGameplayEffects                                ___ OFFSET(get<bool>, {0x1C9, 1, 0, 0})
	DMember(bool)                                      ReplicateActivationOwnedTags                                ___ OFFSET(get<bool>, {0x1CA, 1, 0, 0})
	CMember(UGameplayCueManager*)                      GlobalGameplayCueManager                                    ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilitySystemInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemReplicationProxyInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UAbilitySystemReplicationProxyInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.AttributeSet
/// Size: 0x0008 (0x000028 - 0x000030)
class UAttributeSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/GameplayAbilities.AbilitySystemTestAttributeSet
/// Size: 0x0040 (0x000030 - 0x000070)
class UAbilitySystemTestAttributeSet : public UAttributeSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(float)                                     MaxHealth                                                   ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Health                                                      ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Mana                                                        ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxMana                                                     ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Damage                                                      ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SpellDamage                                                 ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     PhysicalDamage                                              ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     CritChance                                                  ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     CritMultiplier                                              ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     ArmorDamageReduction                                        ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     DodgeChance                                                 ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LifeSteal                                                   ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     Strength                                                    ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     StackingAttribute1                                          ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     StackingAttribute2                                          ___ OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     NoStackAttribute                                            ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilitySystemTestPawn
/// Size: 0x0020 (0x000340 - 0x000360)
class AAbilitySystemTestPawn : public ADefaultPawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(UAbilitySystemComponent*)                  AbilitySystemComponent                                      ___ OFFSET(get<T>, {0x358, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AnimNotify_GameplayCue
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimNotify_GameplayCue : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayCueTag)                           GameplayCue                                                 ___ OFFSET(get<T>, {0x38, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.AnimNotify_GameplayCueState
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotify_GameplayCueState : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayCueTag)                           GameplayCue                                                 ___ OFFSET(get<T>, {0x30, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityBlueprint
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UGameplayAbilityBlueprint : public UBlueprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/GameplayAbilities.GameplayCueFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.GameplayCueInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.GameplayCueManager
/// Size: 0x0290 (0x000030 - 0x0002C0)
class UGameplayCueManager : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	SMember(FGameplayCueObjectLibrary)                 RuntimeGameplayCueObjectLibrary                             ___ OFFSET(get<T>, {0x48, 80, 0, 0})
	SMember(FGameplayCueObjectLibrary)                 EditorGameplayCueObjectLibrary                              ___ OFFSET(get<T>, {0x98, 80, 0, 0})
	CMember(TArray<UClass*>)                           LoadedGameplayCueNotifyClasses                              ___ OFFSET(get<T>, {0x260, 16, 0, 0})
	CMember(TArray<UClass*>)                           GameplayCueClassesForPreallocation                          ___ OFFSET(get<T>, {0x270, 16, 0, 0})
	CMember(TArray<FGameplayCuePendingExecute>)        PendingExecuteCues                                          ___ OFFSET(get<T>, {0x280, 16, 0, 0})
	DMember(int32_t)                                   GameplayCueSendContextCount                                 ___ OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	CMember(TArray<FPreallocationInfo>)                PreallocationInfoList_Internal                              ___ OFFSET(get<T>, {0x298, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Actor
/// Size: 0x0068 (0x000290 - 0x0002F8)
class AGameplayCueNotify_Actor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	DMember(bool)                                      bAutoDestroyOnRemove                                        ___ OFFSET(get<bool>, {0x290, 1, 0, 0})
	DMember(float)                                     AutoDestroyDelay                                            ___ OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(bool)                                      WarnIfTimelineIsStillRunning                                ___ OFFSET(get<bool>, {0x298, 1, 0, 0})
	DMember(bool)                                      WarnIfLatentActionIsStillRunning                            ___ OFFSET(get<bool>, {0x299, 1, 0, 0})
	SMember(FGameplayTag)                              GameplayCueTag                                              ___ OFFSET(get<T>, {0x29C, 4, 0, 0})
	SMember(FName)                                     GameplayCueName                                             ___ OFFSET(get<T>, {0x2A0, 4, 0, 0})
	DMember(bool)                                      bAutoAttachToOwner                                          ___ OFFSET(get<bool>, {0x2A4, 1, 0, 0})
	DMember(bool)                                      IsOverride                                                  ___ OFFSET(get<bool>, {0x2A5, 1, 0, 0})
	DMember(bool)                                      bUniqueInstancePerInstigator                                ___ OFFSET(get<bool>, {0x2A6, 1, 0, 0})
	DMember(bool)                                      bUniqueInstancePerSourceObject                              ___ OFFSET(get<bool>, {0x2A7, 1, 0, 0})
	DMember(bool)                                      bAllowMultipleOnActiveEvents                                ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bAllowMultipleWhileActiveEvents                             ___ OFFSET(get<bool>, {0x2A9, 1, 0, 0})
	DMember(int32_t)                                   NumPreallocatedInstances                                    ___ OFFSET(get<int32_t>, {0x2AC, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Static
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameplayCueNotify_Static : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              GameplayCueTag                                              ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     GameplayCueName                                             ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	DMember(bool)                                      IsOverride                                                  ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Burst
/// Size: 0x0310 (0x000038 - 0x000348)
class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         DefaultSpawnCondition                                       ___ OFFSET(get<T>, {0x38, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          DefaultPlacementInfo                                        ___ OFFSET(get<T>, {0x70, 64, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           BurstEffects                                                ___ OFFSET(get<T>, {0xB0, 664, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_BurstLatent
/// Size: 0x0368 (0x0002F8 - 0x000660)
class AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         DefaultSpawnCondition                                       ___ OFFSET(get<T>, {0x2F8, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          DefaultPlacementInfo                                        ___ OFFSET(get<T>, {0x330, 64, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           BurstEffects                                                ___ OFFSET(get<T>, {0x370, 664, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            BurstSpawnResults                                           ___ OFFSET(get<T>, {0x608, 88, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_HitImpact
/// Size: 0x0010 (0x000038 - 0x000048)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(USoundBase*)                               sound                                                       ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UParticleSystem*)                          ParticleSystem                                              ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Looping
/// Size: 0x0B98 (0x0002F8 - 0x000E90)
class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3728;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         DefaultSpawnCondition                                       ___ OFFSET(get<T>, {0x2F8, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          DefaultPlacementInfo                                        ___ OFFSET(get<T>, {0x330, 64, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           ApplicationEffects                                          ___ OFFSET(get<T>, {0x370, 664, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            ApplicationSpawnResults                                     ___ OFFSET(get<T>, {0x608, 88, 0, 0})
	SMember(FGameplayCueNotify_LoopingEffects)         LoopingEffects                                              ___ OFFSET(get<T>, {0x660, 496, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            LoopingSpawnResults                                         ___ OFFSET(get<T>, {0x850, 88, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           RecurringEffects                                            ___ OFFSET(get<T>, {0x8A8, 664, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            RecurringSpawnResults                                       ___ OFFSET(get<T>, {0xB40, 88, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           RemovalEffects                                              ___ OFFSET(get<T>, {0xB98, 664, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            RemovalSpawnResults                                         ___ OFFSET(get<T>, {0xE30, 88, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueSet
/// Size: 0x0060 (0x000030 - 0x000090)
class UGameplayCueSet : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FGameplayCueNotifyData>)            GameplayCueData                                             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueTranslator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.GameplayCueTranslator_Test
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayCueTranslator_Test : public UGameplayCueTranslator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.GameplayEffectCalculation
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameplayEffectCalculation : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGameplayEffectAttributeCaptureDefinition>) RelevantAttributesToCapture                         ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayEffectCustomApplicationRequirement
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayEffectCustomApplicationRequirement : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayAbilities.GameplayEffectExecutionCalculation
/// Size: 0x0008 (0x000038 - 0x000040)
class UGameplayEffectExecutionCalculation : public UGameplayEffectCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bRequiresPassedInTags                                       ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayModMagnitudeCalculation
/// Size: 0x0008 (0x000038 - 0x000040)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bAllowNonNetAuthorityDependencyRegistration                 ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayTagReponseTable
/// Size: 0x0200 (0x000030 - 0x000230)
class UGameplayTagReponseTable : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(TArray<FGameplayTagResponseTableEntry>)    Entries                                                     ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTriggerSection
/// Size: 0x00F8 (0x000108 - 0x000200)
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FMovieSceneGameplayCueChannel)             Channel                                                     ___ OFFSET(get<T>, {0x108, 248, 0, 0})
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueSection
/// Size: 0x0088 (0x000108 - 0x000190)
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMovieSceneGameplayCueKey)                 Cue                                                         ___ OFFSET(get<T>, {0x108, 136, 0, 0})
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.TickableAttributeSetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UTickableAttributeSetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffect
/// Size: 0x035C (0x00000C - 0x000368)
class FActiveGameplayEffect : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	SMember(FGameplayEffectSpec)                       Spec                                                        ___ OFFSET(get<T>, {0x18, 664, 0, 0})
	SMember(FPredictionKey)                            PredictionKey                                               ___ OFFSET(get<T>, {0x2B0, 24, 0, 0})
	CMember(TArray<FGameplayAbilitySpecHandle>)        GrantedAbilityHandles                                       ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
	DMember(float)                                     StartServerWorldTime                                        ___ OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     CachedStartServerWorldTime                                  ___ OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     StartWorldTime                                              ___ OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(bool)                                      bIsInhibited                                                ___ OFFSET(get<bool>, {0x2E4, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayAbilitySpecHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Handle                                                      ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.PredictionKey
/// Size: 0x0018 (0x000000 - 0x000018)
class FPredictionKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UPackageMap*)                              PredictiveConnection                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int16_t)                                   Current                                                     ___ OFFSET(get<int16_t>, {0x8, 2, 0, 0})
	DMember(int16_t)                                   base                                                        ___ OFFSET(get<int16_t>, {0xA, 2, 0, 0})
	DMember(bool)                                      bIsStale                                                    ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bIsServerInitiated                                          ___ OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpec
/// Size: 0x0298 (0x000000 - 0x000298)
class FGameplayEffectSpec : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UGameplayEffect*)                          Def                                                         ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FGameplayEffectModifiedAttribute>)  ModifiedAttributes                                          ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayEffectAttributeCaptureSpecContainer) CapturedRelevantAttributes                               ___ OFFSET(get<T>, {0x18, 40, 0, 0})
	DMember(float)                                     Duration                                                    ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Period                                                      ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     ChanceToApplyToTarget                                       ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FTagContainerAggregator)                   CapturedSourceTags                                          ___ OFFSET(get<T>, {0x60, 136, 0, 0})
	SMember(FTagContainerAggregator)                   CapturedTargetTags                                          ___ OFFSET(get<T>, {0xE8, 136, 0, 0})
	SMember(FGameplayTagContainer)                     DynamicGrantedTags                                          ___ OFFSET(get<T>, {0x170, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DynamicAssetTags                                            ___ OFFSET(get<T>, {0x190, 32, 0, 0})
	CMember(TArray<FModifierSpec>)                     Modifiers                                                   ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
	DMember(int32_t)                                   StackCount                                                  ___ OFFSET(get<int32_t>, {0x1C0, 4, 0, 0})
	DMember(bool)                                      bCompletedSourceAttributeCapture                            ___ OFFSET(get<bool>, {0x1C4, 1, 1, 0})
	DMember(bool)                                      bCompletedTargetAttributeCapture                            ___ OFFSET(get<bool>, {0x1C4, 1, 1, 1})
	DMember(bool)                                      bDurationLocked                                             ___ OFFSET(get<bool>, {0x1C4, 1, 1, 2})
	CMember(TArray<FGameplayAbilitySpecDef>)           GrantedAbilitySpecs                                         ___ OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               ___ OFFSET(get<T>, {0x278, 24, 0, 0})
	DMember(float)                                     Level                                                       ___ OFFSET(get<float>, {0x290, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandle
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayEffectContextHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecDef
/// Size: 0x0098 (0x000000 - 0x000098)
class FGameplayAbilitySpecDef : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UClass*)                                   Ability                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            LevelScalableFloat                                          ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	DMember(int32_t)                                   InputID                                                     ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(EGameplayEffectGrantedAbilityRemovePolicy) RemovalPolicy                                               ___ OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                AssignedHandle                                              ___ OFFSET(get<T>, {0x90, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.ScalableFloat
/// Size: 0x0028 (0x000000 - 0x000028)
class FScalableFloat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FCurveTableRowHandle)                      Curve                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FDataRegistryType)                         RegistryType                                                ___ OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.ModifierSpec
/// Size: 0x0004 (0x000000 - 0x000004)
class FModifierSpec : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     EvaluatedMagnitude                                          ___ OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.TagContainerAggregator
/// Size: 0x0088 (0x000000 - 0x000088)
class FTagContainerAggregator : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTagContainer)                     CapturedActorTags                                           ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     CapturedSpecTags                                            ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ScopedTags                                                  ___ OFFSET(get<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayEffectAttributeCaptureSpecContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FGameplayEffectAttributeCaptureSpec>) SourceAttributes                                          ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGameplayEffectAttributeCaptureSpec>) TargetAttributes                                          ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bHasNonSnapshottedAttributes                                ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpec
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayEffectAttributeCaptureSpec : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayEffectAttributeCaptureDefinition) BackingDefinition                                           ___ OFFSET(get<T>, {0x0, 64, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureDefinition
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayEffectAttributeCaptureDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayAttribute)                        AttributeToCapture                                          ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	CMember(EGameplayEffectAttributeCaptureSource)     AttributeSource                                             ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bSnapshot                                                   ___ OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAttribute
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayAttribute : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   AttributeName                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(UStruct*)                                  AttributeOwner                                              ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifiedAttribute
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayEffectModifiedAttribute : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	DMember(float)                                     TotalMagnitude                                              ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FActiveGameplayEffectHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Handle                                                      ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bPassedFiltersAndWasExecuted                                ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayEffectSpecHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.GameplayCueParameters
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FGameplayCueParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     NormalizedMagnitude                                         ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RawMagnitude                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FGameplayTag)                              MatchedTagName                                              ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	SMember(FGameplayTag)                              OriginalTag                                                 ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FGameplayTagContainer)                     AggregatedSourceTags                                        ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AggregatedTargetTags                                        ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	SMember(FVector_NetQuantize10)                     Location                                                    ___ OFFSET(get<T>, {0x68, 24, 0, 0})
	SMember(FVector_NetQuantizeNormal)                 Normal                                                      ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Instigator                                                  ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   EffectCauser                                                ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TWeakObjectPtr<UPhysicalMaterial*>)        PhysicalMaterial                                            ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(int32_t)                                   GameplayEffectLevel                                         ___ OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   AbilityLevel                                                ___ OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          TargetAttachComponent                                       ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bReplicateLocationWhenUsingMinimalRepProxy                  ___ OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectRemovalInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayEffectRemovalInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bPrematureRemoval                                           ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   StackCount                                                  ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEventData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FGameplayEventData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FGameplayTag)                              EventTag                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(AActor*)                                   Instigator                                                  ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(AActor*)                                   Target                                                      ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UObject*)                                  OptionalObject                                              ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(UObject*)                                  OptionalObject2                                             ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FGameplayEffectContextHandle)              ContextHandle                                               ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FGameplayTagContainer)                     InstigatorTags                                              ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetTags                                                  ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	DMember(float)                                     EventMagnitude                                              ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	SMember(FGameplayAbilityTargetDataHandle)          TargetData                                                  ___ OFFSET(get<T>, {0x88, 40, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetDataHandle
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayAbilityTargetDataHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayAbilities.GameplayTagRequirements
/// Size: 0x0088 (0x000000 - 0x000088)
class FGameplayTagRequirements : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTagContainer)                     RequireTags                                                 ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     IgnoreTags                                                  ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagQuery)                         TagQuery                                                    ___ OFFSET(get<T>, {0x40, 72, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilterHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayTargetDataFilterHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActivationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayAbilityActivationInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TEnumAsByte<EGameplayAbilityActivationMode>) ActivationMode                                            ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bCanBeEndedByOtherInstance                                  ___ OFFSET(get<bool>, {0x1, 1, 1, 0})
	SMember(FPredictionKey)                            PredictionKeyWhenActivated                                  ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectQuery
/// Size: 0x0198 (0x000000 - 0x000198)
class FGameplayEffectQuery : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FDelegateProperty)                         CustomMatchDelegate_BP                                      ___ OFFSET(get<T>, {0x10, 12, 0, 0})
	SMember(FGameplayTagQuery)                         OwningTagQuery                                              ___ OFFSET(get<T>, {0x20, 72, 0, 0})
	SMember(FGameplayTagQuery)                         EffectTagQuery                                              ___ OFFSET(get<T>, {0x68, 72, 0, 0})
	SMember(FGameplayTagQuery)                         SourceTagQuery                                              ___ OFFSET(get<T>, {0xB0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         SourceAggregateTagQuery                                     ___ OFFSET(get<T>, {0xF8, 72, 0, 0})
	SMember(FGameplayAttribute)                        ModifyingAttribute                                          ___ OFFSET(get<T>, {0x140, 56, 0, 0})
	CMember(UObject*)                                  EffectSource                                                ___ OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(UClass*)                                   EffectDefinition                                            ___ OFFSET(get<T>, {0x180, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecForRPC
/// Size: 0x0078 (0x000000 - 0x000078)
class FGameplayEffectSpecForRPC : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UGameplayEffect*)                          Def                                                         ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FGameplayEffectModifiedAttribute>)  ModifiedAttributes                                          ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FGameplayTagContainer)                     AggregatedSourceTags                                        ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AggregatedTargetTags                                        ___ OFFSET(get<T>, {0x50, 32, 0, 0})
	DMember(float)                                     Level                                                       ___ OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     AbilityLevel                                                ___ OFFSET(get<float>, {0x74, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.ServerAbilityRPCBatch
/// Size: 0x0050 (0x000000 - 0x000050)
class FServerAbilityRPCBatch : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayAbilitySpecHandle)                AbilitySpecHandle                                           ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FPredictionKey)                            PredictionKey                                               ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FGameplayAbilityTargetDataHandle)          TargetData                                                  ___ OFFSET(get<T>, {0x20, 40, 0, 0})
	DMember(bool)                                      InputPressed                                                ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      Ended                                                       ___ OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      Started                                                     ___ OFFSET(get<bool>, {0x4A, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyMap
/// Size: 0x0010 (0x000108 - 0x000118)
class FReplicatedPredictionKeyMap : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FReplicatedPredictionKeyItem>)      PredictionKeys                                              ___ OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyItem
/// Size: 0x001C (0x00000C - 0x000028)
class FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPredictionKey)                            PredictionKey                                               ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMap
/// Size: 0x0060 (0x000000 - 0x000060)
class FMinimalReplicationTagCountMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UAbilitySystemComponent*)                  Owner                                                       ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCueContainer
/// Size: 0x0020 (0x000108 - 0x000128)
class FActiveGameplayCueContainer : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TArray<FActiveGameplayCue>)                GameplayCues                                                ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  Owner                                                       ___ OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCue
/// Size: 0x00F4 (0x00000C - 0x000100)
class FActiveGameplayCue : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FGameplayTag)                              GameplayCueTag                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	SMember(FPredictionKey)                            PredictionKey                                               ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FGameplayCueParameters)                    Parameters                                                  ___ OFFSET(get<T>, {0x28, 208, 0, 0})
	DMember(bool)                                      bPredictivelyRemoved                                        ___ OFFSET(get<bool>, {0xF8, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectsContainer
/// Size: 0x01F0 (0x000108 - 0x0002F8)
class FActiveGameplayEffectsContainer : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TArray<FActiveGameplayEffect>)             GameplayEffects_Internal                                    ___ OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityLocalAnimMontage
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayAbilityLocalAnimMontage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UAnimMontage*)                             AnimMontage                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(char)                                      PlayInstanceId                                              ___ OFFSET(get<char>, {0x8, 1, 0, 0})
	SMember(FPredictionKey)                            PredictionKey                                               ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	CMember(TWeakObjectPtr<UGameplayAbility*>)         AnimatingAbility                                            ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontage
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayAbilityRepAnimMontage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UAnimMontage*)                             AnimMontage                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Position                                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     BlendTime                                                   ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(char)                                      NextSectionID                                               ___ OFFSET(get<char>, {0x14, 1, 0, 0})
	DMember(char)                                      PlayInstanceId                                              ___ OFFSET(get<char>, {0x15, 1, 0, 0})
	DMember(bool)                                      bRepPosition                                                ___ OFFSET(get<bool>, {0x16, 1, 1, 0})
	DMember(bool)                                      IsStopped                                                   ___ OFFSET(get<bool>, {0x16, 1, 1, 1})
	DMember(bool)                                      SkipPositionCorrection                                      ___ OFFSET(get<bool>, {0x16, 1, 1, 2})
	DMember(bool)                                      bSkipPlayRate                                               ___ OFFSET(get<bool>, {0x16, 1, 1, 3})
	SMember(FPredictionKey)                            PredictionKey                                               ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(char)                                      SectionIdToPlay                                             ___ OFFSET(get<char>, {0x30, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecContainer
/// Size: 0x0018 (0x000108 - 0x000120)
class FGameplayAbilitySpecContainer : public FFastArraySerializer
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FGameplayAbilitySpec>)              Items                                                       ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  Owner                                                       ___ OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpec
/// Size: 0x00EC (0x00000C - 0x0000F8)
class FGameplayAbilitySpec : public FFastArraySerializerItem
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FGameplayAbilitySpecHandle)                Handle                                                      ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	CMember(UGameplayAbility*)                         Ability                                                     ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   Level                                                       ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   InputID                                                     ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(char)                                      ActiveCount                                                 ___ OFFSET(get<char>, {0x28, 1, 0, 0})
	DMember(bool)                                      InputPressed                                                ___ OFFSET(get<bool>, {0x29, 1, 1, 0})
	DMember(bool)                                      RemoveAfterActivation                                       ___ OFFSET(get<bool>, {0x29, 1, 1, 1})
	DMember(bool)                                      PendingRemove                                               ___ OFFSET(get<bool>, {0x29, 1, 1, 2})
	DMember(bool)                                      bActivateOnce                                               ___ OFFSET(get<bool>, {0x29, 1, 1, 3})
	SMember(FGameplayAbilityActivationInfo)            ActivationInfo                                              ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DynamicAbilityTags                                          ___ OFFSET(get<T>, {0x60, 32, 0, 0})
	CMember(TArray<UGameplayAbility*>)                 NonReplicatedInstances                                      ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<UGameplayAbility*>)                 ReplicatedInstances                                         ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GameplayEffectHandle                                        ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.AttributeDefaults
/// Size: 0x0010 (0x000000 - 0x000010)
class FAttributeDefaults : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UClass*)                                   Attributes                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UDataTable*)                               DefaultStartingTable                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTag
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayCueTag : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              GameplayCueTag                                              ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecConfig
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayAbilitySpecConfig : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UClass*)                                   Ability                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            LevelScalableFloat                                          ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	DMember(int32_t)                                   InputID                                                     ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(EGameplayEffectGrantedAbilityRemovePolicy) RemovalPolicy                                               ___ OFFSET(get<T>, {0x34, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfoNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGameplayAbilityTargetingLocationInfoNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.GameplayCuePendingExecute
/// Size: 0x0188 (0x000000 - 0x000188)
class FGameplayCuePendingExecute : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FPredictionKey)                            PredictionKey                                               ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	CMember(EGameplayCuePayloadType)                   PayloadType                                                 ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(UAbilitySystemComponent*)                  OwningComponent                                             ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGameplayEffectSpecForRPC)                 FromSpec                                                    ___ OFFSET(get<T>, {0x40, 120, 0, 0})
	SMember(FGameplayCueParameters)                    CueParameters                                               ___ OFFSET(get<T>, {0xB8, 208, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyActorArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayCueNotifyActorArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<AGameplayCueNotify_Actor*>)         Actors                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.PreallocationInfo
/// Size: 0x0068 (0x000000 - 0x000068)
class FPreallocationInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<UClass*, FGameplayCueNotifyActorArray>) PreallocatedInstances                                     ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<UClass*>)                           ClassesNeedingPreallocation                                 ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyForNetSerializer
/// Size: 0x0020 (0x000000 - 0x000020)
class FMinimalGameplayCueReplicationProxyForNetSerializer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGameplayTag>)                      Tags                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector_NetQuantize>)               Locations                                                   ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMapForNetSerializer
/// Size: 0x0010 (0x000000 - 0x000010)
class FMinimalReplicationTagCountMapForNetSerializer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGameplayTag>)                      Tags                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.AbilityTriggerData
/// Size: 0x0008 (0x000000 - 0x000008)
class FAbilityTriggerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              TriggerTag                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityTriggerSource>) TriggerSource                                              ___ OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityBindInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayAbilityBindInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TEnumAsByte<EGameplayAbilityInputBinds>)   Command                                                     ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UClass*)                                   GameplayAbilityClass                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilter
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTargetDataFilter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AActor*)                                   SelfActor                                                   ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UClass*)                                   RequiredActorClass                                          ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TEnumAsByte<ETargetDataFilterSelf>)        SelfFilter                                                  ___ OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bReverseFilter                                              ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.WorldReticleParameters
/// Size: 0x0018 (0x000000 - 0x000018)
class FWorldReticleParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   AOEScale                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.NetSerializeScriptStructCache
/// Size: 0x0010 (0x000000 - 0x000010)
class FNetSerializeScriptStructCache : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UScriptStruct*>)                    ScriptStructs                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAttributeData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayAttributeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     BaseValue                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CurrentValue                                                ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.AttributeMetaData
/// Size: 0x0028 (0x000008 - 0x000030)
class FAttributeMetaData : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     BaseValue                                                   ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinValue                                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FString)                                   DerivedAttributeInfo                                        ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bCanStack                                                   ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData
/// Size: 0x0008 (0x000000 - 0x000008)
class FGameplayAbilityTargetData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FGameplayAbilityTargetingLocationInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TEnumAsByte<EGameplayAbilityTargetingLocationType>) LocationType                                       ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                LiteralTransform                                            ___ OFFSET(get<T>, {0x20, 96, 0, 0})
	CMember(AActor*)                                   SourceActor                                                 ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UMeshComponent*)                           SourceComponent                                             ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(UGameplayAbility*)                         SourceAbility                                               ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FName)                                     SourceSocketName                                            ___ OFFSET(get<T>, {0x98, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_LocationInfo
/// Size: 0x0148 (0x000008 - 0x000150)
class FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FGameplayAbilityTargetingLocationInfo)     SourceLocation                                              ___ OFFSET(get<T>, {0x10, 160, 0, 0})
	SMember(FGameplayAbilityTargetingLocationInfo)     TargetLocation                                              ___ OFFSET(get<T>, {0xB0, 160, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_ActorArray
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGameplayAbilityTargetingLocationInfo)     SourceLocation                                              ___ OFFSET(get<T>, {0x10, 160, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    TargetActorArray                                            ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FHitResult)                                HitResult                                                   ___ OFFSET(get<T>, {0x8, 224, 0, 0})
	DMember(bool)                                      bHitReplaced                                                ___ OFFSET(get<bool>, {0xE8, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActorInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameplayAbilityActorInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<AActor*>)                   OwnerActor                                                  ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   AvatarActor                                                 ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<APlayerController*>)        PlayerController                                            ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<UAbilitySystemComponent*>)  AbilitySystemComponent                                      ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SkeletalMeshComponent                                       ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimInstance*>)            AnimInstance                                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TWeakObjectPtr<UMovementComponent*>)       MovementComponent                                           ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FName)                                     AffectedAnimInstanceTag                                     ___ OFFSET(get<T>, {0x40, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.AbilityEndedData
/// Size: 0x0010 (0x000000 - 0x000010)
class FAbilityEndedData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UGameplayAbility*)                         AbilityThatEnded                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                AbilitySpecHandle                                           ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bReplicateEndAbility                                        ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bWasCancelled                                               ___ OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.AbilityTaskDebugMessage
/// Size: 0x0018 (0x000000 - 0x000018)
class FAbilityTaskDebugMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UGameplayTask*)                            FromTask                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   Message                                                     ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FGameplayAbilitySpecHandleAndPredictionKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayAbilitySpecHandle)                AbilityHandle                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PredictionKeyAtCreation                                     ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxy
/// Size: 0x02D0 (0x000000 - 0x0002D0)
class FMinimalGameplayCueReplicationProxy : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(UAbilitySystemComponent*)                  Owner                                                       ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueObjectLibrary
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayCueObjectLibrary : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FString>)                           Paths                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(UObjectLibrary*)                           ActorObjectLibrary                                          ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UObjectLibrary*)                           StaticObjectLibrary                                         ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UGameplayCueSet*)                          CueSet                                                      ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bShouldSyncScan                                             ___ OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      bShouldAsyncLoad                                            ___ OFFSET(get<bool>, {0x4D, 1, 0, 0})
	DMember(bool)                                      bShouldSyncLoad                                             ___ OFFSET(get<bool>, {0x4E, 1, 0, 0})
	DMember(bool)                                      bHasBeenInitialized                                         ___ OFFSET(get<bool>, {0x4F, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SpawnCondition
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayCueNotify_SpawnCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EGameplayCueNotify_LocallyControlledSource) LocallyControlledSource                                    ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EGameplayCueNotify_LocallyControlledPolicy) LocallyControlledPolicy                                    ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     ChanceToPlay                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TArray<TEnumAsByte>)                       AllowedSurfaceTypes                                         ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<TEnumAsByte>)                       RejectedSurfaceTypes                                        ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_PlacementInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayCueNotify_PlacementInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     SocketName                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(EGameplayCueNotify_AttachPolicy)           AttachPolicy                                                ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentRule                                              ___ OFFSET(get<T>, {0x5, 1, 0, 0})
	DMember(bool)                                      bOverrideRotation                                           ___ OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bOverrideScale                                              ___ OFFSET(get<bool>, {0x8, 1, 1, 1})
	SMember(FRotator)                                  RotationOverride                                            ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   ScaleOverride                                               ___ OFFSET(get<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SpawnResult
/// Size: 0x0058 (0x000000 - 0x000058)
class FGameplayCueNotify_SpawnResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<UFXSystemComponent*>)               FxSystemComponents                                          ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<UAudioComponent*>)                  AudioComponents                                             ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<UCameraShakeBase*>)                 CameraShakes                                                ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<TScriptInterface>)                  CameraLensEffects                                           ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UForceFeedbackComponent*)                  ForceFeedbackComponent                                      ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(APlayerController*)                        ForceFeedbackTargetPC                                       ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UDecalComponent*)                          DecalComponent                                              ___ OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_ParticleInfo
/// Size: 0x0088 (0x000000 - 0x000088)
class FGameplayCueNotify_ParticleInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       ___ OFFSET(get<T>, {0x38, 64, 0, 0})
	CMember(UNiagaraSystem*)                           NiagaraSystem                                               ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     ___ OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      ___ OFFSET(get<bool>, {0x80, 1, 1, 1})
	DMember(bool)                                      bCastShadow                                                 ___ OFFSET(get<bool>, {0x80, 1, 1, 2})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SoundParameterInterfaceInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayCueNotify_SoundParameterInterfaceInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     StopTriggerName                                             ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SoundInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FGameplayCueNotify_SoundInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       ___ OFFSET(get<T>, {0x38, 64, 0, 0})
	CMember(USoundBase*)                               sound                                                       ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(USoundBase*)                               SoundCue                                                    ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(float)                                     LoopingFadeOutDuration                                      ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     LoopingFadeVolumeLevel                                      ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	SMember(FGameplayCueNotify_SoundParameterInterfaceInfo) SoundParameterInterfaceInfo                            ___ OFFSET(get<T>, {0x90, 4, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     ___ OFFSET(get<bool>, {0x94, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      ___ OFFSET(get<bool>, {0x94, 1, 1, 1})
	DMember(bool)                                      bUseSoundParameterInterface                                 ___ OFFSET(get<bool>, {0x94, 1, 1, 2})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_CameraShakeInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FGameplayCueNotify_CameraShakeInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       ___ OFFSET(get<T>, {0x38, 64, 0, 0})
	CMember(UClass*)                                   CameraShake                                                 ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(float)                                     ShakeScale                                                  ___ OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(EGameplayCueNotify_EffectPlaySpace)        Playspace                                                   ___ OFFSET(get<T>, {0x84, 1, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     ___ OFFSET(get<bool>, {0x88, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      ___ OFFSET(get<bool>, {0x88, 1, 1, 1})
	DMember(bool)                                      bPlayInWorld                                                ___ OFFSET(get<bool>, {0x88, 1, 1, 2})
	DMember(float)                                     WorldInnerRadius                                            ___ OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     WorldOuterRadius                                            ___ OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     WorldFalloffExponent                                        ___ OFFSET(get<float>, {0x94, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_CameraLensEffectInfo
/// Size: 0x0090 (0x000000 - 0x000090)
class FGameplayCueNotify_CameraLensEffectInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       ___ OFFSET(get<T>, {0x38, 64, 0, 0})
	CMember(UClass*)                                   CameraLensEffect                                            ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     ___ OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      ___ OFFSET(get<bool>, {0x80, 1, 1, 1})
	DMember(bool)                                      bPlayInWorld                                                ___ OFFSET(get<bool>, {0x80, 1, 1, 2})
	DMember(float)                                     WorldInnerRadius                                            ___ OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     WorldOuterRadius                                            ___ OFFSET(get<float>, {0x88, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_ForceFeedbackInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FGameplayCueNotify_ForceFeedbackInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       ___ OFFSET(get<T>, {0x38, 64, 0, 0})
	CMember(UForceFeedbackEffect*)                     ForceFeedbackEffect                                         ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FName)                                     ForceFeedbackTag                                            ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	DMember(bool)                                      bIsLooping                                                  ___ OFFSET(get<bool>, {0x84, 1, 1, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     ___ OFFSET(get<bool>, {0x84, 1, 1, 1})
	DMember(bool)                                      bOverridePlacementInfo                                      ___ OFFSET(get<bool>, {0x84, 1, 1, 2})
	DMember(bool)                                      bPlayInWorld                                                ___ OFFSET(get<bool>, {0x84, 1, 1, 3})
	DMember(float)                                     WorldIntensity                                              ___ OFFSET(get<float>, {0x88, 4, 0, 0})
	CMember(UForceFeedbackAttenuation*)                WorldAttenuation                                            ___ OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_InputDevicePropertyInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayCueNotify_InputDevicePropertyInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UClass*>)                           DeviceProperties                                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_DecalInfo
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FGameplayCueNotify_DecalInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       ___ OFFSET(get<T>, {0x38, 64, 0, 0})
	CMember(UMaterialInterface*)                       DecalMaterial                                               ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FVector)                                   DecalSize                                                   ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     ___ OFFSET(get<bool>, {0x98, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      ___ OFFSET(get<bool>, {0x98, 1, 1, 1})
	DMember(bool)                                      bOverrideFadeOut                                            ___ OFFSET(get<bool>, {0x98, 1, 1, 2})
	DMember(float)                                     FadeOutStartDelay                                           ___ OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     FadeOutDuration                                             ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_BurstEffects
/// Size: 0x0298 (0x000000 - 0x000298)
class FGameplayCueNotify_BurstEffects : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(TArray<FGameplayCueNotify_ParticleInfo>)   BurstParticles                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGameplayCueNotify_SoundInfo>)      BurstSounds                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGameplayCueNotify_CameraShakeInfo)        BurstCameraShake                                            ___ OFFSET(get<T>, {0x20, 152, 0, 0})
	SMember(FGameplayCueNotify_CameraLensEffectInfo)   BurstCameraLensEffect                                       ___ OFFSET(get<T>, {0xB8, 144, 0, 0})
	SMember(FGameplayCueNotify_ForceFeedbackInfo)      BurstForceFeedback                                          ___ OFFSET(get<T>, {0x148, 152, 0, 0})
	SMember(FGameplayCueNotify_InputDevicePropertyInfo) BurstDevicePropertyEffect                                  ___ OFFSET(get<T>, {0x1E0, 16, 0, 0})
	SMember(FGameplayCueNotify_DecalInfo)              BurstDecal                                                  ___ OFFSET(get<T>, {0x1F0, 168, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_LoopingEffects
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FGameplayCueNotify_LoopingEffects : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TArray<FGameplayCueNotify_ParticleInfo>)   LoopingParticles                                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGameplayCueNotify_SoundInfo>)      LoopingSounds                                               ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGameplayCueNotify_CameraShakeInfo)        LoopingCameraShake                                          ___ OFFSET(get<T>, {0x20, 152, 0, 0})
	SMember(FGameplayCueNotify_CameraLensEffectInfo)   LoopingCameraLensEffect                                     ___ OFFSET(get<T>, {0xB8, 144, 0, 0})
	SMember(FGameplayCueNotify_ForceFeedbackInfo)      LoopingForceFeedback                                        ___ OFFSET(get<T>, {0x148, 152, 0, 0})
	SMember(FGameplayCueNotify_InputDevicePropertyInfo) LoopingInputDevicePropertyEffect                           ___ OFFSET(get<T>, {0x1E0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyData
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayCueNotifyData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              GameplayCueTag                                              ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FSoftObjectPath)                           GameplayCueNotifyObj                                        ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(UClass*)                                   LoadedGameplayCueClass                                      ___ OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNodeIndex
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayCueTranslatorNodeIndex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationLink
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayCueTranslationLink : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UGameplayCueTranslator*)                   RulesCDO                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNode
/// Size: 0x0070 (0x000000 - 0x000070)
class FGameplayCueTranslatorNode : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FGameplayCueTranslationLink>)       Links                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayCueTranslatorNodeIndex)           CachedIndex                                                 ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FGameplayTag)                              CachedGameplayTag                                           ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     CachedGameplayTagName                                       ___ OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationManager
/// Size: 0x0080 (0x000000 - 0x000080)
class FGameplayCueTranslationManager : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FGameplayCueTranslatorNode>)        TranslationLUT                                              ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, FGameplayCueTranslatorNodeIndex>) TranslationNameToIndexMap                                ___ OFFSET(get<T>, {0x10, 80, 0, 0})
	CMember(UGameplayTagsManager*)                     TagManager                                                  ___ OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.AttributeBasedFloat
/// Size: 0x0110 (0x000000 - 0x000110)
class FAttributeBasedFloat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FScalableFloat)                            Coefficient                                                 ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            PreMultiplyAdditiveValue                                    ___ OFFSET(get<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            PostMultiplyAdditiveValue                                   ___ OFFSET(get<T>, {0x50, 40, 0, 0})
	SMember(FGameplayEffectAttributeCaptureDefinition) BackingAttribute                                            ___ OFFSET(get<T>, {0x78, 64, 0, 0})
	SMember(FCurveTableRowHandle)                      AttributeCurve                                              ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(EAttributeBasedFloatCalculationType)       AttributeCalculationType                                    ___ OFFSET(get<T>, {0xC8, 1, 0, 0})
	CMember(EGameplayModEvaluationChannel)             FinalChannel                                                ___ OFFSET(get<T>, {0xC9, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SourceTagFilter                                             ___ OFFSET(get<T>, {0xD0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetTagFilter                                             ___ OFFSET(get<T>, {0xF0, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.CustomCalculationBasedFloat
/// Size: 0x0090 (0x000000 - 0x000090)
class FCustomCalculationBasedFloat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UClass*)                                   CalculationClassMagnitude                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            Coefficient                                                 ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FScalableFloat)                            PreMultiplyAdditiveValue                                    ___ OFFSET(get<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            PostMultiplyAdditiveValue                                   ___ OFFSET(get<T>, {0x58, 40, 0, 0})
	SMember(FCurveTableRowHandle)                      FinalLookupCurve                                            ___ OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.SetByCallerFloat
/// Size: 0x0008 (0x000000 - 0x000008)
class FSetByCallerFloat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     DataName                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              DataTag                                                     ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifierMagnitude
/// Size: 0x01D8 (0x000000 - 0x0001D8)
class FGameplayEffectModifierMagnitude : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(EGameplayEffectMagnitudeCalculation)       MagnitudeCalculationType                                    ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FScalableFloat)                            ScalableFloatMagnitude                                      ___ OFFSET(get<T>, {0x8, 40, 0, 0})
	SMember(FAttributeBasedFloat)                      AttributeBasedMagnitude                                     ___ OFFSET(get<T>, {0x30, 272, 0, 0})
	SMember(FCustomCalculationBasedFloat)              CustomMagnitude                                             ___ OFFSET(get<T>, {0x140, 144, 0, 0})
	SMember(FSetByCallerFloat)                         SetByCallerMagnitude                                        ___ OFFSET(get<T>, {0x1D0, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
/// Size: 0x0338 (0x000000 - 0x000338)
class FGameplayEffectExecutionScopedModifierInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FGameplayEffectAttributeCaptureDefinition) CapturedAttribute                                           ___ OFFSET(get<T>, {0x0, 64, 0, 0})
	SMember(FGameplayTag)                              TransientAggregatorIdentifier                               ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	CMember(EGameplayEffectScopedModifierAggregatorType) AggregatorType                                            ___ OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TEnumAsByte<EGameplayModOp>)               ModifierOp                                                  ___ OFFSET(get<T>, {0x45, 1, 0, 0})
	SMember(FGameplayEffectModifierMagnitude)          ModifierMagnitude                                           ___ OFFSET(get<T>, {0x48, 472, 0, 0})
	SMember(FGameplayModEvaluationChannelSettings)     EvaluationChannelSettings                                   ___ OFFSET(get<T>, {0x220, 1, 0, 0})
	SMember(FGameplayTagRequirements)                  SourceTags                                                  ___ OFFSET(get<T>, {0x228, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  TargetTags                                                  ___ OFFSET(get<T>, {0x2B0, 136, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayModEvaluationChannelSettings
/// Size: 0x0001 (0x000000 - 0x000001)
class FGameplayModEvaluationChannelSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EGameplayModEvaluationChannel)             Channel                                                     ___ OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.ConditionalGameplayEffect
/// Size: 0x0028 (0x000000 - 0x000028)
class FConditionalGameplayEffect : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UClass*)                                   EffectClass                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     RequiredSourceTags                                          ___ OFFSET(get<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionDefinition
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameplayEffectExecutionDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UClass*)                                   CalculationClass                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     PassedInTags                                                ___ OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<FGameplayEffectExecutionScopedModifierInfo>) CalculationModifiers                               ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FConditionalGameplayEffect>)        ConditionalGameplayEffects                                  ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayModifierInfo
/// Size: 0x0330 (0x000000 - 0x000330)
class FGameplayModifierInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	CMember(TEnumAsByte<EGameplayModOp>)               ModifierOp                                                  ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FGameplayEffectModifierMagnitude)          ModifierMagnitude                                           ___ OFFSET(get<T>, {0x40, 472, 0, 0})
	SMember(FGameplayModEvaluationChannelSettings)     EvaluationChannelSettings                                   ___ OFFSET(get<T>, {0x218, 1, 0, 0})
	SMember(FGameplayTagRequirements)                  SourceTags                                                  ___ OFFSET(get<T>, {0x220, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  TargetTags                                                  ___ OFFSET(get<T>, {0x2A8, 136, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectCue
/// Size: 0x0060 (0x000000 - 0x000060)
class FGameplayEffectCue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayAttribute)                        MagnitudeAttribute                                          ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	DMember(float)                                     MinLevel                                                    ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxLevel                                                    ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayCueTags                                             ___ OFFSET(get<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.InheritedTagContainer
/// Size: 0x0060 (0x000000 - 0x000060)
class FInheritedTagContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagContainer)                     CombinedTags                                                ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     Added                                                       ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagContainer)                     Removed                                                     ___ OFFSET(get<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectQuery
/// Size: 0x0088 (0x000000 - 0x000088)
class FActiveGameplayEffectQuery : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectVersion
/// Size: 0x0001 (0x000000 - 0x000001)
class FGameplayEffectVersion : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionParameters
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FGameplayEffectCustomExecutionParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionOutput
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayEffectCustomExecutionOutput : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FGameplayModifierEvaluatedData>)    OutputModifiers                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bTriggerConditionalGameplayEffects                          ___ OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bHandledStackCountManually                                  ___ OFFSET(get<bool>, {0x10, 1, 1, 1})
	DMember(bool)                                      bHandledGameplayCuesManually                                ___ OFFSET(get<bool>, {0x10, 1, 1, 2})
};

/// Struct /Script/GameplayAbilities.GameplayModifierEvaluatedData
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayModifierEvaluatedData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	CMember(TEnumAsByte<EGameplayModOp>)               ModifierOp                                                  ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(float)                                     Magnitude                                                   ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FActiveGameplayEffectHandle)               Handle                                                      ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      IsValid                                                     ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectContext
/// Size: 0x0080 (0x000000 - 0x000080)
class FGameplayEffectContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Instigator                                                  ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   EffectCauser                                                ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<UGameplayAbility*>)         AbilityCDO                                                  ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<UGameplayAbility*>)         AbilityInstanceNotReplicated                                ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   AbilityLevel                                                ___ OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                ___ OFFSET(get<T>, {0x2C, 8, 0, 0})
	CMember(TWeakObjectPtr<UAbilitySystemComponent*>)  InstigatorAbilitySystemComponent                            ___ OFFSET(get<T>, {0x34, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Actors                                                      ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FVector)                                   WorldOrigin                                                 ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	DMember(bool)                                      bHasWorldOrigin                                             ___ OFFSET(get<bool>, {0x78, 1, 1, 0})
	DMember(bool)                                      bReplicateSourceObject                                      ___ OFFSET(get<bool>, {0x78, 1, 1, 1})
	DMember(bool)                                      bReplicateInstigator                                        ___ OFFSET(get<bool>, {0x78, 1, 1, 2})
	DMember(bool)                                      bReplicateEffectCauser                                      ___ OFFSET(get<bool>, {0x78, 1, 1, 3})
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMapping
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameplayTagBlueprintPropertyMapping : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTag)                              TagToMap                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     PropertyName                                                ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FGuid)                                     PropertyGuid                                                ___ OFFSET(get<T>, {0x2C, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMap
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTagBlueprintPropertyMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGameplayTagBlueprintPropertyMapping>) PropertyMappings                                         ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTagReponsePair
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayTagReponsePair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTag)                              tag                                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UClass*)                                   ResponseGameplayEffect                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<UClass*>)                           ResponseGameplayEffects                                     ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   SoftCountCap                                                ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTagResponseTableEntry
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayTagResponseTableEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagReponsePair)                   Positive                                                    ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FGameplayTagReponsePair)                   Negative                                                    ___ OFFSET(get<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueKey
/// Size: 0x0088 (0x000000 - 0x000088)
class FMovieSceneGameplayCueKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayCueTag)                           Cue                                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	SMember(FName)                                     AttachSocketName                                            ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	DMember(float)                                     NormalizedMagnitude                                         ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FMovieSceneObjectBindingID)                Instigator                                                  ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FMovieSceneObjectBindingID)                EffectCauser                                                ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	CMember(UPhysicalMaterial*)                        PhysicalMaterial                                            ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(int32_t)                                   GameplayEffectLevel                                         ___ OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   AbilityLevel                                                ___ OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bAttachToBinding                                            ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class FMovieSceneGameplayCueChannel : public FMovieSceneChannel
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FMovieSceneGameplayCueKey>)         KeyValues                                                   ___ OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontageNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGameplayAbilityRepAnimMontageNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandleNetSerializerConfig
/// Size: 0x0000 (0x000028 - 0x000028)
class FGameplayEffectContextHandleNetSerializerConfig : public FPolymorphicStructNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGameplayEffectContextNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FMinimalGameplayCueReplicationProxyNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMapNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FMinimalReplicationTagCountMapNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.PredictionKeyNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FPredictionKeyNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Enum /Script/GameplayAbilities.EGameplayEffectGrantedAbilityRemovePolicy
/// Size: 0x04
enum EGameplayEffectGrantedAbilityRemovePolicy : uint8_t
{
	EGameplayEffectGrantedAbilityRemovePolicy__CancelAbilityImmediately0             = 0,
	EGameplayEffectGrantedAbilityRemovePolicy__RemoveAbilityOnEnd1                   = 1,
	EGameplayEffectGrantedAbilityRemovePolicy__DoNothing2                            = 2,
	EGameplayEffectGrantedAbilityRemovePolicy__EGameplayEffectGrantedAbilityRemovePolicy_MAX3 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectAttributeCaptureSource
/// Size: 0x03
enum EGameplayEffectAttributeCaptureSource : uint8_t
{
	EGameplayEffectAttributeCaptureSource__Source0                                   = 0,
	EGameplayEffectAttributeCaptureSource__Target1                                   = 1,
	EGameplayEffectAttributeCaptureSource__EGameplayEffectAttributeCaptureSource_MAX2 = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueEvent
/// Size: 0x05
enum EGameplayCueEvent : uint8_t
{
	EGameplayCueEvent__OnActive0                                                     = 0,
	EGameplayCueEvent__WhileActive1                                                  = 1,
	EGameplayCueEvent__Executed2                                                     = 2,
	EGameplayCueEvent__Removed3                                                      = 3,
	EGameplayCueEvent__EGameplayCueEvent_MAX4                                        = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityActivationMode
/// Size: 0x06
enum EGameplayAbilityActivationMode : uint8_t
{
	EGameplayAbilityActivationMode__Authority0                                       = 0,
	EGameplayAbilityActivationMode__NonAuthority1                                    = 1,
	EGameplayAbilityActivationMode__Predicting2                                      = 2,
	EGameplayAbilityActivationMode__Confirmed3                                       = 3,
	EGameplayAbilityActivationMode__Rejected4                                        = 4,
	EGameplayAbilityActivationMode__EGameplayAbilityActivationMode_MAX5              = 5
};

/// Enum /Script/GameplayAbilities.EAbilityGenericReplicatedEvent
/// Size: 0x13
enum EAbilityGenericReplicatedEvent : uint8_t
{
	EAbilityGenericReplicatedEvent__GenericConfirm0                                  = 0,
	EAbilityGenericReplicatedEvent__GenericCancel1                                   = 1,
	EAbilityGenericReplicatedEvent__InputPressed2                                    = 2,
	EAbilityGenericReplicatedEvent__InputReleased3                                   = 3,
	EAbilityGenericReplicatedEvent__GenericSignalFromClient4                         = 4,
	EAbilityGenericReplicatedEvent__GenericSignalFromServer5                         = 5,
	EAbilityGenericReplicatedEvent__GameCustom16                                     = 6,
	EAbilityGenericReplicatedEvent__GameCustom27                                     = 7,
	EAbilityGenericReplicatedEvent__GameCustom38                                     = 8,
	EAbilityGenericReplicatedEvent__GameCustom49                                     = 9,
	EAbilityGenericReplicatedEvent__GameCustom510                                    = 10,
	EAbilityGenericReplicatedEvent__GameCustom611                                    = 11,
	EAbilityGenericReplicatedEvent__MAX12                                            = 12
};

/// Enum /Script/GameplayAbilities.EGameplayCuePayloadType
/// Size: 0x03
enum EGameplayCuePayloadType : uint8_t
{
	EGameplayCuePayloadType__CueParameters0                                          = 0,
	EGameplayCuePayloadType__FromSpec1                                               = 1,
	EGameplayCuePayloadType__EGameplayCuePayloadType_MAX2                            = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInputBinds
/// Size: 0x10
enum EGameplayAbilityInputBinds : uint8_t
{
	EGameplayAbilityInputBinds__Ability10                                            = 0,
	EGameplayAbilityInputBinds__Ability21                                            = 1,
	EGameplayAbilityInputBinds__Ability32                                            = 2,
	EGameplayAbilityInputBinds__Ability43                                            = 3,
	EGameplayAbilityInputBinds__Ability54                                            = 4,
	EGameplayAbilityInputBinds__Ability65                                            = 5,
	EGameplayAbilityInputBinds__Ability76                                            = 6,
	EGameplayAbilityInputBinds__Ability87                                            = 7,
	EGameplayAbilityInputBinds__Ability98                                            = 8,
	EGameplayAbilityInputBinds__EGameplayAbilityInputBinds_MAX9                      = 9
};

/// Enum /Script/GameplayAbilities.ETargetDataFilterSelf
/// Size: 0x04
enum ETargetDataFilterSelf : uint8_t
{
	ETargetDataFilterSelf__TDFS_Any0                                                 = 0,
	ETargetDataFilterSelf__TDFS_NoSelf1                                              = 1,
	ETargetDataFilterSelf__TDFS_NoOthers2                                            = 2,
	ETargetDataFilterSelf__TDFS_MAX3                                                 = 3
};

/// Enum /Script/GameplayAbilities.EAbilityTaskWaitState
/// Size: 0x04
enum EAbilityTaskWaitState : uint8_t
{
	EAbilityTaskWaitState__WaitingOnGame0                                            = 1,
	EAbilityTaskWaitState__WaitingOnUser1                                            = 2,
	EAbilityTaskWaitState__WaitingOnAvatar2                                          = 4,
	EAbilityTaskWaitState__EAbilityTaskWaitState_MAX3                                = 5
};

/// Enum /Script/GameplayAbilities.ERootMotionMoveToActorTargetOffsetType
/// Size: 0x04
enum ERootMotionMoveToActorTargetOffsetType : uint8_t
{
	ERootMotionMoveToActorTargetOffsetType__AlignFromTargetToSource0                 = 0,
	ERootMotionMoveToActorTargetOffsetType__AlignToTargetForward1                    = 1,
	ERootMotionMoveToActorTargetOffsetType__AlignToWorldSpace2                       = 2,
	ERootMotionMoveToActorTargetOffsetType__ERootMotionMoveToActorTargetOffsetType_MAX3 = 3
};

/// Enum /Script/GameplayAbilities.EAbilityTaskNetSyncType
/// Size: 0x04
enum EAbilityTaskNetSyncType : uint8_t
{
	EAbilityTaskNetSyncType__BothWait0                                               = 0,
	EAbilityTaskNetSyncType__OnlyServerWait1                                         = 1,
	EAbilityTaskNetSyncType__OnlyClientWait2                                         = 2,
	EAbilityTaskNetSyncType__EAbilityTaskNetSyncType_MAX3                            = 3
};

/// Enum /Script/GameplayAbilities.EWaitAttributeChangeComparison
/// Size: 0x08
enum EWaitAttributeChangeComparison : uint8_t
{
	EWaitAttributeChangeComparison__None0                                            = 0,
	EWaitAttributeChangeComparison__GreaterThan1                                     = 1,
	EWaitAttributeChangeComparison__LessThan2                                        = 2,
	EWaitAttributeChangeComparison__GreaterThanOrEqualTo3                            = 3,
	EWaitAttributeChangeComparison__LessThanOrEqualTo4                               = 4,
	EWaitAttributeChangeComparison__NotEqualTo5                                      = 5,
	EWaitAttributeChangeComparison__ExactlyEqualTo6                                  = 6,
	EWaitAttributeChangeComparison__MAX7                                             = 7
};

/// Enum /Script/GameplayAbilities.EWaitGameplayTagQueryTriggerCondition
/// Size: 0x03
enum EWaitGameplayTagQueryTriggerCondition : uint8_t
{
	EWaitGameplayTagQueryTriggerCondition__WhenTrue0                                 = 0,
	EWaitGameplayTagQueryTriggerCondition__WhenFalse1                                = 1,
	EWaitGameplayTagQueryTriggerCondition__EWaitGameplayTagQueryTriggerCondition_MAX2 = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectReplicationMode
/// Size: 0x04
enum EGameplayEffectReplicationMode : uint8_t
{
	EGameplayEffectReplicationMode__Minimal0                                         = 0,
	EGameplayEffectReplicationMode__Mixed1                                           = 1,
	EGameplayEffectReplicationMode__Full2                                            = 2,
	EGameplayEffectReplicationMode__EGameplayEffectReplicationMode_MAX3              = 3
};

/// Enum /Script/GameplayAbilities.ERepAnimPositionMethod
/// Size: 0x03
enum ERepAnimPositionMethod : uint8_t
{
	ERepAnimPositionMethod__Position0                                                = 0,
	ERepAnimPositionMethod__CurrentSectionId1                                        = 1,
	ERepAnimPositionMethod__ERepAnimPositionMethod_MAX2                              = 2
};

/// Enum /Script/GameplayAbilities.EGameplayTargetingConfirmation
/// Size: 0x05
enum EGameplayTargetingConfirmation : uint8_t
{
	EGameplayTargetingConfirmation__Instant0                                         = 0,
	EGameplayTargetingConfirmation__UserConfirmed1                                   = 1,
	EGameplayTargetingConfirmation__Custom2                                          = 2,
	EGameplayTargetingConfirmation__CustomMulti3                                     = 3,
	EGameplayTargetingConfirmation__EGameplayTargetingConfirmation_MAX4              = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTargetingLocationType
/// Size: 0x04
enum EGameplayAbilityTargetingLocationType : uint8_t
{
	EGameplayAbilityTargetingLocationType__LiteralTransform0                         = 0,
	EGameplayAbilityTargetingLocationType__ActorTransform1                           = 1,
	EGameplayAbilityTargetingLocationType__SocketTransform2                          = 2,
	EGameplayAbilityTargetingLocationType__EGameplayAbilityTargetingLocationType_MAX3 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityInstancingPolicy
/// Size: 0x04
enum EGameplayAbilityInstancingPolicy : uint8_t
{
	EGameplayAbilityInstancingPolicy__NonInstanced0                                  = 0,
	EGameplayAbilityInstancingPolicy__InstancedPerActor1                             = 1,
	EGameplayAbilityInstancingPolicy__InstancedPerExecution2                         = 2,
	EGameplayAbilityInstancingPolicy__EGameplayAbilityInstancingPolicy_MAX3          = 3
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetExecutionPolicy
/// Size: 0x05
enum EGameplayAbilityNetExecutionPolicy : uint8_t
{
	EGameplayAbilityNetExecutionPolicy__LocalPredicted0                              = 0,
	EGameplayAbilityNetExecutionPolicy__LocalOnly1                                   = 1,
	EGameplayAbilityNetExecutionPolicy__ServerInitiated2                             = 2,
	EGameplayAbilityNetExecutionPolicy__ServerOnly3                                  = 3,
	EGameplayAbilityNetExecutionPolicy__EGameplayAbilityNetExecutionPolicy_MAX4      = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityNetSecurityPolicy
/// Size: 0x05
enum EGameplayAbilityNetSecurityPolicy : uint8_t
{
	EGameplayAbilityNetSecurityPolicy__ClientOrServer0                               = 0,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyExecution1                          = 1,
	EGameplayAbilityNetSecurityPolicy__ServerOnlyTermination2                        = 2,
	EGameplayAbilityNetSecurityPolicy__ServerOnly3                                   = 3,
	EGameplayAbilityNetSecurityPolicy__EGameplayAbilityNetSecurityPolicy_MAX4        = 4
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityReplicationPolicy
/// Size: 0x03
enum EGameplayAbilityReplicationPolicy : uint8_t
{
	EGameplayAbilityReplicationPolicy__ReplicateNo0                                  = 0,
	EGameplayAbilityReplicationPolicy__ReplicateYes1                                 = 1,
	EGameplayAbilityReplicationPolicy__EGameplayAbilityReplicationPolicy_MAX2        = 2
};

/// Enum /Script/GameplayAbilities.EGameplayAbilityTriggerSource
/// Size: 0x04
enum EGameplayAbilityTriggerSource : uint8_t
{
	EGameplayAbilityTriggerSource__GameplayEvent0                                    = 0,
	EGameplayAbilityTriggerSource__OwnedTagAdded1                                    = 1,
	EGameplayAbilityTriggerSource__OwnedTagPresent2                                  = 2,
	EGameplayAbilityTriggerSource__EGameplayAbilityTriggerSource_MAX3                = 3
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_EffectPlaySpace
/// Size: 0x03
enum EGameplayCueNotify_EffectPlaySpace : uint8_t
{
	EGameplayCueNotify_EffectPlaySpace__WorldSpace0                                  = 0,
	EGameplayCueNotify_EffectPlaySpace__CameraSpace1                                 = 1,
	EGameplayCueNotify_EffectPlaySpace__EGameplayCueNotify_MAX2                      = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_LocallyControlledSource
/// Size: 0x03
enum EGameplayCueNotify_LocallyControlledSource : uint8_t
{
	EGameplayCueNotify_LocallyControlledSource__InstigatorActor0                     = 0,
	EGameplayCueNotify_LocallyControlledSource__TargetActor1                         = 1,
	EGameplayCueNotify_LocallyControlledSource__EGameplayCueNotify_MAX2              = 2
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_LocallyControlledPolicy
/// Size: 0x04
enum EGameplayCueNotify_LocallyControlledPolicy : uint8_t
{
	EGameplayCueNotify_LocallyControlledPolicy__Always0                              = 0,
	EGameplayCueNotify_LocallyControlledPolicy__LocalOnly1                           = 1,
	EGameplayCueNotify_LocallyControlledPolicy__NotLocal2                            = 2,
	EGameplayCueNotify_LocallyControlledPolicy__EGameplayCueNotify_MAX3              = 3
};

/// Enum /Script/GameplayAbilities.EGameplayCueNotify_AttachPolicy
/// Size: 0x03
enum EGameplayCueNotify_AttachPolicy : uint8_t
{
	EGameplayCueNotify_AttachPolicy__DoNotAttach0                                    = 0,
	EGameplayCueNotify_AttachPolicy__AttachToTarget1                                 = 1,
	EGameplayCueNotify_AttachPolicy__EGameplayCueNotify_MAX2                         = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectMagnitudeCalculation
/// Size: 0x05
enum EGameplayEffectMagnitudeCalculation : uint8_t
{
	EGameplayEffectMagnitudeCalculation__ScalableFloat0                              = 0,
	EGameplayEffectMagnitudeCalculation__AttributeBased1                             = 1,
	EGameplayEffectMagnitudeCalculation__CustomCalculationClass2                     = 2,
	EGameplayEffectMagnitudeCalculation__SetByCaller3                                = 3,
	EGameplayEffectMagnitudeCalculation__EGameplayEffectMagnitudeCalculation_MAX4    = 4
};

/// Enum /Script/GameplayAbilities.EAttributeBasedFloatCalculationType
/// Size: 0x05
enum EAttributeBasedFloatCalculationType : uint8_t
{
	EAttributeBasedFloatCalculationType__AttributeMagnitude0                         = 0,
	EAttributeBasedFloatCalculationType__AttributeBaseValue1                         = 1,
	EAttributeBasedFloatCalculationType__AttributeBonusMagnitude2                    = 2,
	EAttributeBasedFloatCalculationType__AttributeMagnitudeEvaluatedUpToChannel3     = 3,
	EAttributeBasedFloatCalculationType__EAttributeBasedFloatCalculationType_MAX4    = 4
};

/// Enum /Script/GameplayAbilities.EGameplayEffectVersion
/// Size: 0x05
enum EGameplayEffectVersion : uint8_t
{
	EGameplayEffectVersion__Monolithic0                                              = 0,
	EGameplayEffectVersion__Modular531                                               = 1,
	EGameplayEffectVersion__AbilitiesComponent532                                    = 2,
	EGameplayEffectVersion__Current3                                                 = 2,
	EGameplayEffectVersion__EGameplayEffectVersion_MAX4                              = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectScopedModifierAggregatorType
/// Size: 0x03
enum EGameplayEffectScopedModifierAggregatorType : uint8_t
{
	EGameplayEffectScopedModifierAggregatorType__CapturedAttributeBacked0            = 0,
	EGameplayEffectScopedModifierAggregatorType__Transient1                          = 1,
	EGameplayEffectScopedModifierAggregatorType__EGameplayEffectScopedModifierAggregatorType_MAX2 = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectDurationType
/// Size: 0x04
enum EGameplayEffectDurationType : uint8_t
{
	EGameplayEffectDurationType__Instant0                                            = 0,
	EGameplayEffectDurationType__Infinite1                                           = 1,
	EGameplayEffectDurationType__HasDuration2                                        = 2,
	EGameplayEffectDurationType__EGameplayEffectDurationType_MAX3                    = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingDurationPolicy
/// Size: 0x03
enum EGameplayEffectStackingDurationPolicy : uint8_t
{
	EGameplayEffectStackingDurationPolicy__RefreshOnSuccessfulApplication0           = 0,
	EGameplayEffectStackingDurationPolicy__NeverRefresh1                             = 1,
	EGameplayEffectStackingDurationPolicy__EGameplayEffectStackingDurationPolicy_MAX2 = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingPeriodPolicy
/// Size: 0x03
enum EGameplayEffectStackingPeriodPolicy : uint8_t
{
	EGameplayEffectStackingPeriodPolicy__ResetOnSuccessfulApplication0               = 0,
	EGameplayEffectStackingPeriodPolicy__NeverReset1                                 = 1,
	EGameplayEffectStackingPeriodPolicy__EGameplayEffectStackingPeriodPolicy_MAX2    = 2
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingExpirationPolicy
/// Size: 0x04
enum EGameplayEffectStackingExpirationPolicy : uint8_t
{
	EGameplayEffectStackingExpirationPolicy__ClearEntireStack0                       = 0,
	EGameplayEffectStackingExpirationPolicy__RemoveSingleStackAndRefreshDuration1    = 1,
	EGameplayEffectStackingExpirationPolicy__RefreshDuration2                        = 2,
	EGameplayEffectStackingExpirationPolicy__EGameplayEffectStackingExpirationPolicy_MAX3 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayEffectPeriodInhibitionRemovedPolicy
/// Size: 0x04
enum EGameplayEffectPeriodInhibitionRemovedPolicy : uint8_t
{
	EGameplayEffectPeriodInhibitionRemovedPolicy__NeverReset0                        = 0,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ResetPeriod1                       = 1,
	EGameplayEffectPeriodInhibitionRemovedPolicy__ExecuteAndResetPeriod2             = 2,
	EGameplayEffectPeriodInhibitionRemovedPolicy__EGameplayEffectPeriodInhibitionRemovedPolicy_MAX3 = 3
};

/// Enum /Script/GameplayAbilities.EGameplayModEvaluationChannel
/// Size: 0x12
enum EGameplayModEvaluationChannel : uint8_t
{
	EGameplayModEvaluationChannel__Channel00                                         = 0,
	EGameplayModEvaluationChannel__Channel11                                         = 1,
	EGameplayModEvaluationChannel__Channel22                                         = 2,
	EGameplayModEvaluationChannel__Channel33                                         = 3,
	EGameplayModEvaluationChannel__Channel44                                         = 4,
	EGameplayModEvaluationChannel__Channel55                                         = 5,
	EGameplayModEvaluationChannel__Channel66                                         = 6,
	EGameplayModEvaluationChannel__Channel77                                         = 7,
	EGameplayModEvaluationChannel__Channel88                                         = 8,
	EGameplayModEvaluationChannel__Channel99                                         = 9,
	EGameplayModEvaluationChannel__Channel_MAX10                                     = 10,
	EGameplayModEvaluationChannel__EGameplayModEvaluationChannel_MAX11               = 11
};

/// Enum /Script/GameplayAbilities.EGameplayModOp
/// Size: 0x05
enum EGameplayModOp : uint8_t
{
	EGameplayModOp__Additive0                                                        = 0,
	EGameplayModOp__Multiplicitive1                                                  = 1,
	EGameplayModOp__Division2                                                        = 2,
	EGameplayModOp__Override3                                                        = 3,
	EGameplayModOp__Max4                                                             = 4
};

/// Enum /Script/GameplayAbilities.EGameplayEffectStackingType
/// Size: 0x04
enum EGameplayEffectStackingType : uint8_t
{
	EGameplayEffectStackingType__None0                                               = 0,
	EGameplayEffectStackingType__AggregateBySource1                                  = 1,
	EGameplayEffectStackingType__AggregateByTarget2                                  = 2,
	EGameplayEffectStackingType__EGameplayEffectStackingType_MAX3                    = 3
};

/// Enum /Script/GameplayAbilities.EGameplayTagEventType
/// Size: 0x03
enum EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved0                                             = 0,
	EGameplayTagEventType__AnyCountChange1                                           = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX2                                = 2
};

