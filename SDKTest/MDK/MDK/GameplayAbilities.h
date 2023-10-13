
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
	CMember(EGameplayEffectDurationType)               DurationPolicy                                              OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FGameplayEffectModifierMagnitude)          DurationMagnitude                                           OFFSET(getStruct<T>, {0x38, 472, 0, 0})
	SMember(FScalableFloat)                            Period                                                      OFFSET(getStruct<T>, {0x210, 40, 0, 0})
	DMember(bool)                                      bExecutePeriodicEffectOnApplication                         OFFSET(get<bool>, {0x238, 1, 0, 0})
	CMember(EGameplayEffectPeriodInhibitionRemovedPolicy) PeriodicInhibitionPolicy                                 OFFSET(get<T>, {0x239, 1, 0, 0})
	CMember(TArray<FGameplayModifierInfo>)             Modifiers                                                   OFFSET(get<T>, {0x240, 16, 0, 0})
	CMember(TArray<FGameplayEffectExecutionDefinition>) Executions                                                 OFFSET(get<T>, {0x250, 16, 0, 0})
	SMember(FScalableFloat)                            ChanceToApplyToTarget                                       OFFSET(getStruct<T>, {0x260, 40, 0, 0})
	CMember(TArray<UClass*>)                           ApplicationRequirements                                     OFFSET(get<T>, {0x288, 16, 0, 0})
	CMember(TArray<FConditionalGameplayEffect>)        ConditionalGameplayEffects                                  OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<UClass*>)                           OverflowEffects                                             OFFSET(get<T>, {0x2A8, 16, 0, 0})
	DMember(bool)                                      bDenyOverflowApplication                                    OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(bool)                                      bClearStackOnOverflow                                       OFFSET(get<bool>, {0x2B9, 1, 0, 0})
	CMember(TArray<UClass*>)                           PrematureExpirationEffectClasses                            OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(TArray<UClass*>)                           RoutineExpirationEffectClasses                              OFFSET(get<T>, {0x2D0, 16, 0, 0})
	DMember(bool)                                      bRequireModifierSuccessToTriggerCues                        OFFSET(get<bool>, {0x2E0, 1, 0, 0})
	DMember(bool)                                      bSuppressStackingCues                                       OFFSET(get<bool>, {0x2E1, 1, 0, 0})
	CMember(TArray<FGameplayEffectCue>)                GameplayCues                                                OFFSET(get<T>, {0x2E8, 16, 0, 0})
	CMember(UGameplayEffectUIData*)                    UIData                                                      OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(FInheritedTagContainer)                    InheritableGameplayEffectTags                               OFFSET(getStruct<T>, {0x300, 96, 0, 0})
	SMember(FInheritedTagContainer)                    InheritableOwnedTagsContainer                               OFFSET(getStruct<T>, {0x360, 96, 0, 0})
	SMember(FInheritedTagContainer)                    InheritableBlockedAbilityTagsContainer                      OFFSET(getStruct<T>, {0x3C0, 96, 0, 0})
	SMember(FGameplayTagRequirements)                  OngoingTagRequirements                                      OFFSET(getStruct<T>, {0x420, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  ApplicationTagRequirements                                  OFFSET(getStruct<T>, {0x4A8, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  RemovalTagRequirements                                      OFFSET(getStruct<T>, {0x530, 136, 0, 0})
	SMember(FInheritedTagContainer)                    RemoveGameplayEffectsWithTags                               OFFSET(getStruct<T>, {0x5B8, 96, 0, 0})
	SMember(FGameplayTagRequirements)                  GrantedApplicationImmunityTags                              OFFSET(getStruct<T>, {0x618, 136, 0, 0})
	SMember(FGameplayEffectQuery)                      GrantedApplicationImmunityQuery                             OFFSET(getStruct<T>, {0x6A0, 408, 0, 0})
	SMember(FGameplayEffectQuery)                      RemoveGameplayEffectQuery                                   OFFSET(getStruct<T>, {0x840, 408, 0, 0})
	CMember(EGameplayEffectStackingType)               StackingType                                                OFFSET(get<T>, {0x9D9, 1, 0, 0})
	DMember(int32_t)                                   StackLimitCount                                             OFFSET(get<int32_t>, {0x9DC, 4, 0, 0})
	CMember(EGameplayEffectStackingDurationPolicy)     StackDurationRefreshPolicy                                  OFFSET(get<T>, {0x9E0, 1, 0, 0})
	CMember(EGameplayEffectStackingPeriodPolicy)       StackPeriodResetPolicy                                      OFFSET(get<T>, {0x9E1, 1, 0, 0})
	CMember(EGameplayEffectStackingExpirationPolicy)   StackExpirationPolicy                                       OFFSET(get<T>, {0x9E2, 1, 0, 0})
	CMember(TArray<FGameplayAbilitySpecDef>)           GrantedAbilities                                            OFFSET(get<T>, {0x9E8, 16, 0, 0})
	CMember(TArray<UGameplayEffectComponent*>)         GEComponents                                                OFFSET(get<T>, {0xA58, 16, 0, 0})
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
	CMember(TArray<FGameplayAbilitySpecConfig>)        GrantAbilityConfigs                                         OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AdditionalEffectsGameplayEffectComponent
/// Size: 0x0048 (0x000028 - 0x000070)
class UAdditionalEffectsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bOnApplicationCopyDataFromOriginalSpec                      OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<FConditionalGameplayEffect>)        OnApplicationGameplayEffects                                OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UClass*>)                           OnCompleteAlways                                            OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<UClass*>)                           OnCompleteNormal                                            OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<UClass*>)                           OnCompletePrematurely                                       OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AssetTagsGameplayEffectComponent
/// Size: 0x0060 (0x000028 - 0x000088)
class UAssetTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FInheritedTagContainer)                    InheritableAssetTags                                        OFFSET(getStruct<T>, {0x28, 96, 0, 0})
};

/// Class /Script/GameplayAbilities.BlockAbilityTagsGameplayEffectComponent
/// Size: 0x0060 (0x000028 - 0x000088)
class UBlockAbilityTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FInheritedTagContainer)                    InheritableBlockedAbilityTagsContainer                      OFFSET(getStruct<T>, {0x28, 96, 0, 0})
};

/// Class /Script/GameplayAbilities.ChanceToApplyGameplayEffectComponent
/// Size: 0x0028 (0x000028 - 0x000050)
class UChanceToApplyGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FScalableFloat)                            ChanceToApplyToTarget                                       OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Class /Script/GameplayAbilities.CustomCanApplyGameplayEffectComponent
/// Size: 0x0010 (0x000028 - 0x000038)
class UCustomCanApplyGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UClass*>)                           ApplicationRequirements                                     OFFSET(get<T>, {0x28, 16, 0, 0})
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
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Class /Script/GameplayAbilities.ImmunityGameplayEffectComponent
/// Size: 0x0010 (0x000028 - 0x000038)
class UImmunityGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGameplayEffectQuery>)              ImmunityQueries                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.RemoveOtherGameplayEffectComponent
/// Size: 0x0010 (0x000028 - 0x000038)
class URemoveOtherGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FGameplayEffectQuery>)              RemoveGameplayEffectQueries                                 OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.TargetTagRequirementsGameplayEffectComponent
/// Size: 0x0198 (0x000028 - 0x0001C0)
class UTargetTagRequirementsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FGameplayTagRequirements)                  ApplicationTagRequirements                                  OFFSET(getStruct<T>, {0x28, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  OngoingTagRequirements                                      OFFSET(getStruct<T>, {0xB0, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  RemovalTagRequirements                                      OFFSET(getStruct<T>, {0x138, 136, 0, 0})
};

/// Class /Script/GameplayAbilities.TargetTagsGameplayEffectComponent
/// Size: 0x0060 (0x000028 - 0x000088)
class UTargetTagsGameplayEffectComponent : public UGameplayEffectComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FInheritedTagContainer)                    InheritableGrantedTagsContainer                             OFFSET(getStruct<T>, {0x28, 96, 0, 0})
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
	SMember(FMulticastInlineDelegate)                  Changed                                                     OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged.WaitForAttributeChanged
	// UAbilityAsync_WaitAttributeChanged* WaitForAttributeChanged(AActor* TargetActor, FGameplayAttribute Attribute, bool OnlyTriggerOnce); // [0x2452464] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitAttributeChanged.AsyncWaitAttributeChangedDelegate__DelegateSignature
	// void AsyncWaitAttributeChangedDelegate__DelegateSignature(FGameplayAttribute Attribute, float NewValue, float OldValue); // [0x1d9241c] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied
/// Size: 0x0150 (0x000038 - 0x000188)
class UAbilityAsync_WaitGameplayEffectApplied : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FMulticastInlineDelegate)                  OnApplied                                                   OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.WaitGameplayEffectAppliedToActor
	// UAbilityAsync_WaitGameplayEffectApplied* WaitGameplayEffectAppliedToActor(AActor* TargetActor, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, bool ListenForPeriodicEffect); // [0x68b5684] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEffectApplied.OnAppliedDelegate__DelegateSignature
	// void OnAppliedDelegate__DelegateSignature(AActor* Source, FGameplayEffectSpecHandle SpecHandle, FActiveGameplayEffectHandle ActiveHandle); // [0x1d9241c] MulticastDelegate|Public|Delegate 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent
/// Size: 0x0020 (0x000038 - 0x000058)
class UAbilityAsync_WaitGameplayEvent : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FMulticastInlineDelegate)                  EventReceived                                               OFFSET(getStruct<T>, {0x38, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.WaitGameplayEventToActor
	// UAbilityAsync_WaitGameplayEvent* WaitGameplayEventToActor(AActor* TargetActor, FGameplayTag EventTag, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0x24533c4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayEvent.EventReceivedDelegate__DelegateSignature
	// void EventReceivedDelegate__DelegateSignature(FGameplayEventData Payload);                                               // [0x1d9241c] MulticastDelegate|Public|Delegate 
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
	SMember(FMulticastInlineDelegate)                  Added                                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagAdded.WaitGameplayTagAddToActor
	// UAbilityAsync_WaitGameplayTagAdded* WaitGameplayTagAddToActor(AActor* TargetActor, FGameplayTag tag, bool OnlyTriggerOnce); // [0x2453928] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved
/// Size: 0x0010 (0x000050 - 0x000060)
class UAbilityAsync_WaitGameplayTagRemoved : public UAbilityAsync_WaitGameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FMulticastInlineDelegate)                  Removed                                                     OFFSET(getStruct<T>, {0x50, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagRemoved.WaitGameplayTagRemoveFromActor
	// UAbilityAsync_WaitGameplayTagRemoved* WaitGameplayTagRemoveFromActor(AActor* TargetActor, FGameplayTag tag, bool OnlyTriggerOnce); // [0x2453698] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery
/// Size: 0x00D0 (0x000038 - 0x000108)
class UAbilityAsync_WaitGameplayTagQuery : public UAbilityAsync
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FMulticastInlineDelegate)                  Triggered                                                   OFFSET(getStruct<T>, {0xF8, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityAsync_WaitGameplayTagQuery.WaitGameplayTagQueryOnActor
	// UAbilityAsync_WaitGameplayTagQuery* WaitGameplayTagQueryOnActor(AActor* TargetActor, FGameplayTagQuery TagQuery, EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // [0x2453080] Final|Native|Static|Protected|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbility
/// Size: 0x0390 (0x000028 - 0x0003B8)
class UGameplayAbility : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 952;

public:
	SMember(FGameplayTagContainer)                     AbilityTags                                                 OFFSET(getStruct<T>, {0xA8, 32, 0, 0})
	DMember(bool)                                      bReplicateInputDirectly                                     OFFSET(get<bool>, {0xC8, 1, 0, 0})
	DMember(bool)                                      RemoteInstanceEnded                                         OFFSET(get<bool>, {0xC9, 1, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityReplicationPolicy>) ReplicationPolicy                                      OFFSET(get<T>, {0xCE, 1, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityInstancingPolicy>) InstancingPolicy                                        OFFSET(get<T>, {0xCF, 1, 0, 0})
	DMember(bool)                                      bServerRespectsRemoteAbilityCancellation                    OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bRetriggerInstancedAbility                                  OFFSET(get<bool>, {0xD1, 1, 0, 0})
	SMember(FGameplayAbilityActivationInfo)            CurrentActivationInfo                                       OFFSET(getStruct<T>, {0xD8, 32, 0, 0})
	SMember(FGameplayEventData)                        CurrentEventData                                            OFFSET(getStruct<T>, {0xF8, 176, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityNetExecutionPolicy>) NetExecutionPolicy                                    OFFSET(get<T>, {0x1A8, 1, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityNetSecurityPolicy>) NetSecurityPolicy                                      OFFSET(get<T>, {0x1A9, 1, 0, 0})
	CMember(UClass*)                                   CostGameplayEffectClass                                     OFFSET(get<T>, {0x1B0, 8, 0, 0})
	CMember(TArray<FAbilityTriggerData>)               AbilityTriggers                                             OFFSET(get<T>, {0x1B8, 16, 0, 0})
	CMember(UClass*)                                   CooldownGameplayEffectClass                                 OFFSET(get<T>, {0x1C8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     CancelAbilitiesWithTag                                      OFFSET(getStruct<T>, {0x1D0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     BlockAbilitiesWithTag                                       OFFSET(getStruct<T>, {0x1F0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ActivationOwnedTags                                         OFFSET(getStruct<T>, {0x210, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ActivationRequiredTags                                      OFFSET(getStruct<T>, {0x230, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ActivationBlockedTags                                       OFFSET(getStruct<T>, {0x250, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SourceRequiredTags                                          OFFSET(getStruct<T>, {0x270, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SourceBlockedTags                                           OFFSET(getStruct<T>, {0x290, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetRequiredTags                                          OFFSET(getStruct<T>, {0x2B0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetBlockedTags                                           OFFSET(getStruct<T>, {0x2D0, 32, 0, 0})
	CMember(TArray<UGameplayTask*>)                    ActiveTasks                                                 OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(UAnimMontage*)                             CurrentMontage                                              OFFSET(get<T>, {0x330, 8, 0, 0})
	DMember(bool)                                      bIsActive                                                   OFFSET(get<bool>, {0x398, 1, 0, 0})
	DMember(bool)                                      bIsAbilityEnding                                            OFFSET(get<bool>, {0x399, 1, 0, 0})
	DMember(bool)                                      bIsCancelable                                               OFFSET(get<bool>, {0x39A, 1, 0, 0})
	DMember(bool)                                      bIsBlockingOtherAbilities                                   OFFSET(get<bool>, {0x39B, 1, 0, 0})
	DMember(bool)                                      bMarkPendingKillOnAbilityEnd                                OFFSET(get<bool>, {0x3B0, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbility.SetShouldBlockOtherAbilities
	// void SetShouldBlockOtherAbilities(bool bShouldBlockAbilities);                                                           // [0x68b5600] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SetCanBeCanceled
	// void SetCanBeCanceled(bool bCanBeCanceled);                                                                              // [0x68b557c] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.SendGameplayEvent
	// void SendGameplayEvent(FGameplayTag EventTag, FGameplayEventData Payload);                                               // [0x68b52b0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.RemoveGrantedByEffect
	// void RemoveGrantedByEffect();                                                                                            // [0x5ae6e10] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageStop
	// void MontageStop(float OverrideBlendOutTime);                                                                            // [0x68b49c8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageSetNextSectionName
	// void MontageSetNextSectionName(FName FromSectionName, FName ToSectionName);                                              // [0x68b48e8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MontageJumpToSection
	// void MontageJumpToSection(FName SectionName);                                                                            // [0x68b4848] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerSkeletalMeshComponent
	// FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerSkeletalMeshComponent(FName SocketName);            // [0x68b475c] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeTargetLocationInfoFromOwnerActor
	// FGameplayAbilityTargetingLocationInfo MakeTargetLocationInfoFromOwnerActor();                                            // [0x68b46c4] Final|Native|Protected|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.GameplayAbility.MakeOutgoingGameplayEffectSpec
	// FGameplayEffectSpecHandle MakeOutgoingGameplayEffectSpec(UClass* GameplayEffectClass, float Level);                      // [0x68b45e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ShouldAbilityRespondToEvent
	// bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);                    // [0x1d9241c] Event|Protected|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_RemoveGameplayCue
	// void K2_RemoveGameplayCue(FGameplayTag GameplayCueTag);                                                                  // [0x68b4490] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_HasAuthority
	// bool K2_HasAuthority();                                                                                                  // [0x68b4474] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCueWithParams
	// void K2_ExecuteGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameters);        // [0x68b4298] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ExecuteGameplayCue
	// void K2_ExecuteGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context);                           // [0x68b3f54] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbilityLocally
	// void K2_EndAbilityLocally();                                                                                             // [0x5ae6aa0] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_EndAbility
	// void K2_EndAbility();                                                                                                    // [0x68b3f3c] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitExecute
	// void K2_CommitExecute();                                                                                                 // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCost
	// bool K2_CommitAbilityCost(bool BroadcastCommitEvent);                                                                    // [0x68b3ea4] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbilityCooldown
	// bool K2_CommitAbilityCooldown(bool BroadcastCommitEvent, bool ForceCooldown);                                            // [0x68b3dc8] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CommitAbility
	// bool K2_CommitAbility();                                                                                                 // [0x51b1f24] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCost
	// bool K2_CheckAbilityCost();                                                                                              // [0x68b3da0] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CheckAbilityCooldown
	// bool K2_CheckAbilityCooldown();                                                                                          // [0x68b3d78] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CancelAbility
	// void K2_CancelAbility();                                                                                                 // [0x68b3d28] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayAbilitySpecHandle Handle, FGameplayTagContainer& RelevantTags); // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToTarget
	// TArray<FActiveGameplayEffectHandle> K2_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle EffectSpecHandle, FGameplayAbilityTargetDataHandle TargetData); // [0x68b39a4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ApplyGameplayEffectSpecToOwner
	// FActiveGameplayEffectHandle K2_ApplyGameplayEffectSpecToOwner(FGameplayEffectSpecHandle EffectSpecHandle);               // [0x68b3790] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCueWithParams
	// void K2_AddGameplayCueWithParams(FGameplayTag GameplayCueTag, FGameplayCueParameters& GameplayCueParameter, bool bRemoveOnAbilityEnd); // [0x68b34b0] Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_AddGameplayCue
	// void K2_AddGameplayCue(FGameplayTag GameplayCueTag, FGameplayEffectContextHandle Context, bool bRemoveOnAbilityEnd);     // [0x68b305c] Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x1d9241c] Event|Protected|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbility.IsLocallyControlled
	// bool IsLocallyControlled();                                                                                              // [0x68b3038] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.InvalidateClientPredictionKey
	// void InvalidateClientPredictionKey();                                                                                    // [0x68b2fd4] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetSourceObject_BP
	// UObject* GetSourceObject_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo);                    // [0x68b2e0c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningComponentFromActorInfo
	// USkeletalMeshComponent* GetOwningComponentFromActorInfo();                                                               // [0x68b2dd4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetOwningActorFromActorInfo
	// AActor* GetOwningActorFromActorInfo();                                                                                   // [0x68b2db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetGrantedByEffectContext
	// FGameplayEffectContextHandle GetGrantedByEffectContext();                                                                // [0x68b2d74] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentSourceObject
	// UObject* GetCurrentSourceObject();                                                                                       // [0x68b2d34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCurrentMontage
	// UAnimMontage* GetCurrentMontage();                                                                                       // [0x32eb224] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetCooldownTimeRemaining
	// float GetCooldownTimeRemaining();                                                                                        // [0x68b2cf8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetContextFromOwner
	// FGameplayEffectContextHandle GetContextFromOwner(FGameplayAbilityTargetDataHandle OptionalTargetData);                   // [0x68b2b40] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAvatarActorFromActorInfo
	// AActor* GetAvatarActorFromActorInfo();                                                                                   // [0x68b2b1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetActorInfo
	// FGameplayAbilityActorInfo GetActorInfo();                                                                                // [0x68b2ae8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilitySystemComponentFromActorInfo
	// UAbilitySystemComponent* GetAbilitySystemComponentFromActorInfo();                                                       // [0x68b2ac4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel_BP
	// int32_t GetAbilityLevel_BP(FGameplayAbilitySpecHandle Handle, FGameplayAbilityActorInfo& ActorInfo);                     // [0x68b28ec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.GetAbilityLevel
	// int32_t GetAbilityLevel();                                                                                               // [0x68b28c8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayAbility.EndTaskByInstanceName
	// void EndTaskByInstanceName(FName InstanceName);                                                                          // [0x68b27b4] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.EndAbilityState
	// void EndAbilityState(FName OptionalStateNameToEnd);                                                                      // [0x68b2734] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.ConfirmTaskByInstanceName
	// void ConfirmTaskByInstanceName(FName InstanceName, bool bEndTask);                                                       // [0x68b23e0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.CancelTaskByInstanceName
	// void CancelTaskByInstanceName(FName InstanceName);                                                                       // [0x68b2360] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithHandle
	// void BP_RemoveGameplayEffectFromOwnerWithHandle(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);             // [0x68b20e8] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithGrantedTags
	// void BP_RemoveGameplayEffectFromOwnerWithGrantedTags(FGameplayTagContainer WithGrantedTags, int32_t StacksToRemove);     // [0x68b1e40] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_RemoveGameplayEffectFromOwnerWithAssetTags
	// void BP_RemoveGameplayEffectFromOwnerWithAssetTags(FGameplayTagContainer WithAssetTags, int32_t StacksToRemove);         // [0x68b1b98] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToTarget
	// TArray<FActiveGameplayEffectHandle> BP_ApplyGameplayEffectToTarget(FGameplayAbilityTargetDataHandle TargetData, UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x68b1680] Final|Native|Protected|BlueprintCallable 
	// Function /Script/GameplayAbilities.GameplayAbility.BP_ApplyGameplayEffectToOwner
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToOwner(UClass* GameplayEffectClass, int32_t GameplayEffectLevel, int32_t Stacks); // [0x68b157c] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbilitySet
/// Size: 0x0010 (0x000030 - 0x000040)
class UGameplayAbilitySet : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FGameplayAbilityBindInfo>)          Abilities                                                   OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor
/// Size: 0x0150 (0x000290 - 0x0003E0)
class AGameplayAbilityTargetActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	DMember(bool)                                      ShouldProduceTargetDataOnServer                             OFFSET(get<bool>, {0x290, 1, 0, 0})
	SMember(FGameplayAbilityTargetingLocationInfo)     StartLocation                                               OFFSET(getStruct<T>, {0x2A0, 160, 0, 0})
	CMember(APlayerController*)                        PrimaryPC                                                   OFFSET(get<T>, {0x370, 8, 0, 0})
	CMember(UGameplayAbility*)                         OwningAbility                                               OFFSET(get<T>, {0x378, 8, 0, 0})
	DMember(bool)                                      bDestroyOnConfirmation                                      OFFSET(get<bool>, {0x380, 1, 0, 0})
	CMember(AActor*)                                   SourceActor                                                 OFFSET(get<T>, {0x388, 8, 0, 0})
	SMember(FWorldReticleParameters)                   ReticleParams                                               OFFSET(getStruct<T>, {0x390, 24, 0, 0})
	CMember(UClass*)                                   ReticleClass                                                OFFSET(get<T>, {0x3A8, 8, 0, 0})
	SMember(FGameplayTargetDataFilterHandle)           Filter                                                      OFFSET(getStruct<T>, {0x3B0, 16, 0, 0})
	DMember(bool)                                      bDebug                                                      OFFSET(get<bool>, {0x3C0, 1, 0, 0})
	CMember(UAbilitySystemComponent*)                  GenericDelegateBoundASC                                     OFFSET(get<T>, {0x3D8, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting
	// void ConfirmTargeting();                                                                                                 // [0x2b3eb1c] Native|Public        
	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting
	// void CancelTargeting();                                                                                                  // [0x149a7f4] Native|Public        
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Trace
/// Size: 0x0020 (0x0003E0 - 0x000400)
class AGameplayAbilityTargetActor_Trace : public AGameplayAbilityTargetActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1024;

public:
	DMember(float)                                     MaxRange                                                    OFFSET(get<float>, {0x3E0, 4, 0, 0})
	SMember(FCollisionProfileName)                     TraceProfile                                                OFFSET(getStruct<T>, {0x3E4, 4, 0, 0})
	DMember(bool)                                      bTraceAffectsAimPitch                                       OFFSET(get<bool>, {0x3E8, 1, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_GroundTrace
/// Size: 0x0020 (0x000400 - 0x000420)
class AGameplayAbilityTargetActor_GroundTrace : public AGameplayAbilityTargetActor_Trace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1056;

public:
	DMember(float)                                     CollisionRadius                                             OFFSET(get<float>, {0x3F8, 4, 0, 0})
	DMember(float)                                     CollisionHeight                                             OFFSET(get<float>, {0x3FC, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_ActorPlacement
/// Size: 0x0010 (0x000420 - 0x000430)
class AGameplayAbilityTargetActor_ActorPlacement : public AGameplayAbilityTargetActor_GroundTrace
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	CMember(UClass*)                                   PlacedActorClass                                            OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UMaterialInterface*)                       PlacedActorMaterial                                         OFFSET(get<T>, {0x420, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayAbilityTargetActor_Radius
/// Size: 0x0010 (0x0003E0 - 0x0003F0)
class AGameplayAbilityTargetActor_Radius : public AGameplayAbilityTargetActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x3E0, 4, 0, 0})
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
	SMember(FWorldReticleParameters)                   Parameters                                                  OFFSET(getStruct<T>, {0x290, 24, 0, 0})
	DMember(bool)                                      bFaceOwnerFlat                                              OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bSnapToTargetedActor                                        OFFSET(get<bool>, {0x2A9, 1, 0, 0})
	DMember(bool)                                      bIsTargetValid                                              OFFSET(get<bool>, {0x2AA, 1, 0, 0})
	DMember(bool)                                      bIsTargetAnActor                                            OFFSET(get<bool>, {0x2AB, 1, 0, 0})
	CMember(APlayerController*)                        PrimaryPC                                                   OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(AGameplayAbilityTargetActor*)              TargetingActor                                              OFFSET(get<T>, {0x2B8, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamVector
	// void SetReticleMaterialParamVector(FName ParamName, FVector Value);                                                      // [0x1d9241c] Event|Public|HasDefaults|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.SetReticleMaterialParamFloat
	// void SetReticleMaterialParamFloat(FName ParamName, float Value);                                                         // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnValidTargetChanged
	// void OnValidTargetChanged(bool bNewValue);                                                                               // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnTargetingAnActor
	// void OnTargetingAnActor(bool bNewValue);                                                                                 // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.OnParametersInitialized
	// void OnParametersInitialized();                                                                                          // [0x1d9241c] Event|Public|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayAbilityWorldReticle.FaceTowardSource
	// void FaceTowardSource(bool bFaceIn2D);                                                                                   // [0x68b2834] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayAbilityWorldReticle_ActorVisualization
/// Size: 0x0018 (0x0002C0 - 0x0002D8)
class AGameplayAbilityWorldReticle_ActorVisualization : public AGameplayAbilityWorldReticle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
	CMember(UCapsuleComponent*)                        CollisionComponent                                          OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(TArray<UActorComponent*>)                  VisualizationComponents                                     OFFSET(get<T>, {0x2C8, 16, 0, 0})
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
	CMember(UAnimMontage*)                             MontageToPlay                                               OFFSET(get<T>, {0x3B8, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x3C0, 4, 0, 0})
	SMember(FName)                                     SectionName                                                 OFFSET(getStruct<T>, {0x3C4, 4, 0, 0})
	CMember(TArray<UClass*>)                           GameplayEffectClassesWhileAnimating                         OFFSET(get<T>, {0x3C8, 16, 0, 0})
	CMember(TArray<UGameplayEffect*>)                  GameplayEffectsWhileAnimating                               OFFSET(get<T>, {0x3D8, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask
/// Size: 0x0018 (0x000060 - 0x000078)
class UAbilityTask : public UGameplayTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UGameplayAbility*)                         Ability                                                     OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(TWeakObjectPtr<UAbilitySystemComponent*>)  AbilitySystemComponent                                      OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FName)                                     ForceName                                                   OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	CMember(ERootMotionFinishVelocityMode)             FinishVelocityMode                                          OFFSET(get<T>, {0x7C, 1, 0, 0})
	SMember(FVector)                                   FinishSetVelocity                                           OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	DMember(float)                                     FinishClampVelocity                                         OFFSET(get<float>, {0x98, 4, 0, 0})
	CMember(UCharacterMovementComponent*)              MovementComponent                                           OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
/// Size: 0x0048 (0x0000B8 - 0x000100)
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FVector)                                   WorldDirection                                              OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xE0, 4, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0xE4, 4, 0, 0})
	DMember(bool)                                      bIsAdditive                                                 OFFSET(get<bool>, {0xE8, 1, 0, 0})
	CMember(UCurveFloat*)                              StrengthOverTime                                            OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(bool)                                      bEnableGravity                                              OFFSET(get<bool>, {0xF8, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce
	// UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector WorldDirection, float Strength, float Duration, bool bIsAdditive, UCurveFloat* StrengthOverTime, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bEnableGravity); // [0x68abe34] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLanded                                                    OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	DMember(float)                                     Distance                                                    OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     Height                                                      OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0xF8, 4, 0, 0})
	DMember(float)                                     MinimumLandedTriggerTime                                    OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(bool)                                      bFinishOnLanded                                             OFFSET(get<bool>, {0x100, 1, 0, 0})
	CMember(UCurveVector*)                             PathOffsetCurve                                             OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(UCurveFloat*)                              TimeMappingCurve                                            OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback
	// void OnLandedCallback(FHitResult& Hit);                                                                                  // [0x68b4f84] Final|Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish
	// void Finish();                                                                                                           // [0x68b28b4] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce
	// UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FRotator Rotation, float Distance, float Height, float Duration, float MinimumLandedTriggerTime, bool bFinishOnLanded, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve); // [0x68ac8e0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
/// Size: 0x00A0 (0x0000B8 - 0x000158)
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FVector)                                   StartLocation                                               OFFSET(getStruct<T>, {0xD0, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0xE8, 24, 0, 0})
	CMember(AActor*)                                   TargetActor                                                 OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FVector)                                   TargetLocationOffset                                        OFFSET(getStruct<T>, {0x108, 24, 0, 0})
	CMember(ERootMotionMoveToActorTargetOffsetType)    OffsetAlignment                                             OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(bool)                                      bDisableDestinationReachedInterrupt                         OFFSET(get<bool>, {0x128, 1, 0, 0})
	DMember(bool)                                      bSetNewMovementMode                                         OFFSET(get<bool>, {0x129, 1, 0, 0})
	CMember(TEnumAsByte<EMovementMode>)                NewMovementMode                                             OFFSET(get<T>, {0x12A, 1, 0, 0})
	DMember(bool)                                      bRestrictSpeedToExpected                                    OFFSET(get<bool>, {0x12B, 1, 0, 0})
	CMember(UCurveVector*)                             PathOffsetCurve                                             OFFSET(get<T>, {0x130, 8, 0, 0})
	CMember(UCurveFloat*)                              TimeMappingCurve                                            OFFSET(get<T>, {0x138, 8, 0, 0})
	CMember(UCurveFloat*)                              TargetLerpSpeedHorizontalCurve                              OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(UCurveFloat*)                              TargetLerpSpeedVerticalCurve                                OFFSET(get<T>, {0x148, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped
	// void OnTargetActorSwapped(AActor* OriginalTarget, AActor* NewTarget);                                                    // [0x68b51e4] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation
	// void OnRep_TargetLocation();                                                                                             // [0x68b51ac] Final|Native|Protected 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce
	// UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FGameplayAbilityTargetDataHandle TargetDataHandle, int32_t TargetDataIndex, int32_t TargetActorIndex, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0x68af090] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce
	// UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, AActor* TargetActor, FVector TargetLocationOffset, ERootMotionMoveToActorTargetOffsetType OffsetAlignment, float Duration, UCurveFloat* TargetLerpSpeedHorizontal, UCurveFloat* TargetLerpSpeedVertical, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, UCurveFloat* TimeMappingCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish, bool bDisableDestinationReachedInterrupt); // [0x68ad5ac] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
/// Size: 0x0068 (0x0000B8 - 0x000120)
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FMulticastInlineDelegate)                  OnTimedOut                                                  OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTimedOutAndDestinationReached                             OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	SMember(FVector)                                   StartLocation                                               OFFSET(getStruct<T>, {0xD8, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(bool)                                      bSetNewMovementMode                                         OFFSET(get<bool>, {0x10C, 1, 0, 0})
	CMember(TEnumAsByte<EMovementMode>)                NewMovementMode                                             OFFSET(get<T>, {0x10D, 1, 0, 0})
	DMember(bool)                                      bRestrictSpeedToExpected                                    OFFSET(get<bool>, {0x10E, 1, 0, 0})
	CMember(UCurveVector*)                             PathOffsetCurve                                             OFFSET(get<T>, {0x110, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce
	// UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector TargetLocation, float Duration, bool bSetNewMovementMode, TEnumAsByte<EMovementMode> MovementMode, bool bRestrictSpeedToExpected, UCurveVector* PathOffsetCurve, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x68ae5e8] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
/// Size: 0x0070 (0x0000B8 - 0x000128)
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0xC8, 24, 0, 0})
	CMember(AActor*)                                   LocationActor                                               OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(bool)                                      bIsPush                                                     OFFSET(get<bool>, {0xF4, 1, 0, 0})
	DMember(bool)                                      bIsAdditive                                                 OFFSET(get<bool>, {0xF5, 1, 0, 0})
	DMember(bool)                                      bNoZForce                                                   OFFSET(get<bool>, {0xF6, 1, 0, 0})
	CMember(UCurveFloat*)                              StrengthDistanceFalloff                                     OFFSET(get<T>, {0xF8, 8, 0, 0})
	CMember(UCurveFloat*)                              StrengthOverTime                                            OFFSET(get<T>, {0x100, 8, 0, 0})
	DMember(bool)                                      bUseFixedWorldDirection                                     OFFSET(get<bool>, {0x108, 1, 0, 0})
	SMember(FRotator)                                  FixedWorldDirection                                         OFFSET(getStruct<T>, {0x110, 24, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce
	// UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, AActor* LocationActor, float Strength, float Duration, float Radius, bool bIsPush, bool bIsAdditive, bool bNoZForce, UCurveFloat* StrengthDistanceFalloff, UCurveFloat* StrengthOverTime, bool bUseFixedWorldDirection, FRotator FixedWorldDirection, ERootMotionFinishVelocityMode VelocityOnFinishMode, FVector SetVelocityOnFinish, float ClampVelocityOnFinish); // [0x68b0440] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_MoveToLocation
/// Size: 0x0068 (0x000078 - 0x0000E0)
class UAbilityTask_MoveToLocation : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FMulticastInlineDelegate)                  OnTargetLocationReached                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FVector)                                   StartLocation                                               OFFSET(getStruct<T>, {0x90, 24, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0xA8, 24, 0, 0})
	DMember(float)                                     DurationOfMovement                                          OFFSET(get<float>, {0xC0, 4, 0, 0})
	CMember(UCurveFloat*)                              LerpCurve                                                   OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UCurveVector*)                             LerpCurveVector                                             OFFSET(get<T>, {0xD8, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_MoveToLocation.MoveToLocation
	// UAbilityTask_MoveToLocation* MoveToLocation(UGameplayAbility* OwningAbility, FName TaskInstanceName, FVector Location, float Duration, UCurveFloat* OptionalInterpolationCurve, UCurveVector* OptionalVectorInterpolationCurve); // [0x68b4a48] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint
/// Size: 0x0018 (0x000078 - 0x000090)
class UAbilityTask_NetworkSyncPoint : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnSync                                                      OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.WaitNetSync
	// UAbilityTask_NetworkSyncPoint* WaitNetSync(UGameplayAbility* OwningAbility, EAbilityTaskNetSyncType SyncType);           // [0x68b5e34] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_NetworkSyncPoint.OnSignalCallback
	// void OnSignalCallback();                                                                                                 // [0x68b51d0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait
/// Size: 0x0088 (0x000078 - 0x000100)
class UAbilityTask_PlayMontageAndWait : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FMulticastInlineDelegate)                  OnCompleted                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBlendOut                                                  OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnInterrupted                                               OFFSET(getStruct<T>, {0x98, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCancelled                                                 OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(UAnimMontage*)                             MontageToPlay                                               OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(float)                                     Rate                                                        OFFSET(get<float>, {0xE8, 4, 0, 0})
	SMember(FName)                                     StartSection                                                OFFSET(getStruct<T>, {0xEC, 4, 0, 0})
	DMember(float)                                     AnimRootMotionTranslationScale                              OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     StartTimeSeconds                                            OFFSET(get<float>, {0xF4, 4, 0, 0})
	DMember(bool)                                      bStopWhenAbilityEnds                                        OFFSET(get<bool>, {0xF8, 1, 0, 0})
	DMember(bool)                                      bAllowInterruptAfterBlendOut                                OFFSET(get<bool>, {0xF9, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageInterrupted
	// void OnMontageInterrupted();                                                                                             // [0x68b4f70] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageEnded
	// void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);                                                           // [0x68b50e4] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnMontageBlendingOut
	// void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);                                                     // [0x68b501c] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.OnGameplayAbilityCancelled
	// void OnGameplayAbilityCancelled();                                                                                       // [0x68b4f70] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_PlayMontageAndWait.CreatePlayMontageAndWaitProxy
	// UAbilityTask_PlayMontageAndWait* CreatePlayMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* MontageToPlay, float Rate, FName StartSection, bool bStopWhenAbilityEnds, float AnimRootMotionTranslationScale, float StartTimeSeconds, bool bAllowInterruptAfterBlendOut); // [0x68b24a4] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_Repeat
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UAbilityTask_Repeat : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnPerformAction                                             OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_Repeat.RepeatAction
	// UAbilityTask_Repeat* RepeatAction(UGameplayAbility* OwningAbility, float TimeBetweenActions, int32_t TotalActionCount);  // [0x6904c20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_SpawnActor
/// Size: 0x0048 (0x000078 - 0x0000C0)
class UAbilityTask_SpawnActor : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FMulticastInlineDelegate)                  Success                                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  DidNotSpawn                                                 OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.SpawnActor
	// UAbilityTask_SpawnActor* SpawnActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, UClass* Class); // [0x6908a10] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.FinishSpawningActor
	// void FinishSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, AActor* SpawnedActor); // [0x68fac54] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_SpawnActor.BeginSpawningActor
	// bool BeginSpawningActor(UGameplayAbility* OwningAbility, FGameplayAbilityTargetDataHandle TargetData, UClass* Class, AActor*& SpawnedActor); // [0x68f54c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_StartAbilityState
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UAbilityTask_StartAbilityState : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnStateEnded                                                OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnStateInterrupted                                          OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_StartAbilityState.StartAbilityState
	// UAbilityTask_StartAbilityState* StartAbilityState(UGameplayAbility* OwningAbility, FName StateName, bool bEndCurrentState); // [0x6908d04] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_VisualizeTargeting
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UAbilityTask_VisualizeTargeting : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  TimeElapsed                                                 OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargetingUsingActor
	// UAbilityTask_VisualizeTargeting* VisualizeTargetingUsingActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* TargetActor, FName TaskInstanceName, float Duration); // [0x690a3b8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.VisualizeTargeting
	// UAbilityTask_VisualizeTargeting* VisualizeTargeting(UGameplayAbility* OwningAbility, UClass* Class, FName TaskInstanceName, float Duration); // [0x690a280] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.FinishSpawningActor
	// void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor);                    // [0x68faf4c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_VisualizeTargeting.BeginSpawningActor
	// bool BeginSpawningActor(UGameplayAbility* OwningAbility, UClass* Class, AGameplayAbilityTargetActor*& SpawnedActor);     // [0x68f5808] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate
/// Size: 0x00F8 (0x000078 - 0x000170)
class UAbilityTask_WaitAbilityActivate : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FMulticastInlineDelegate)                  OnActivate                                                  OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivateWithTagRequirements
	// UAbilityTask_WaitAbilityActivate* WaitForAbilityActivateWithTagRequirements(UGameplayAbility* OwningAbility, FGameplayTagRequirements TagRequirements, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x690acd4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate_Query
	// UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x690b13c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.WaitForAbilityActivate
	// UAbilityTask_WaitAbilityActivate* WaitForAbilityActivate(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTag, bool IncludeTriggeredAbilities, bool TriggerOnce); // [0x690a800] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityActivate.OnAbilityActivate
	// void OnAbilityActivate(UGameplayAbility* ActivatedAbility);                                                              // [0x6903240] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit
/// Size: 0x0070 (0x000078 - 0x0000E8)
class UAbilityTask_WaitAbilityCommit : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnCommit                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit_Query
	// UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit_Query(UGameplayAbility* OwningAbility, FGameplayTagQuery Query, bool TriggerOnce); // [0x690b90c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.WaitForAbilityCommit
	// UAbilityTask_WaitAbilityCommit* WaitForAbilityCommit(UGameplayAbility* OwningAbility, FGameplayTag WithTag, FGameplayTag WithoutTage, bool TriggerOnce); // [0x690b548] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAbilityCommit.OnAbilityCommit
	// void OnAbilityCommit(UGameplayAbility* ActivatedAbility);                                                                // [0x69032c0] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChange
/// Size: 0x0070 (0x000078 - 0x0000E8)
class UAbilityTask_WaitAttributeChange : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  ExternalOwner                                               OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChangeWithComparison
	// UAbilityTask_WaitAttributeChange* WaitForAttributeChangeWithComparison(UGameplayAbility* OwningAbility, FGameplayAttribute InAttribute, FGameplayTag InWithTag, FGameplayTag InWithoutTag, TEnumAsByte<EWaitAttributeChangeComparison> InComparisonType, float InComparisonValue, bool TriggerOnce, AActor* OptionalExternalOwner); // [0x690d0b4] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChange.WaitForAttributeChange
	// UAbilityTask_WaitAttributeChange* WaitForAttributeChange(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, FGameplayTag WithSrcTag, FGameplayTag WithoutSrcTag, bool TriggerOnce, AActor* OptionalExternalOwner); // [0x690bc00] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold
/// Size: 0x00C0 (0x000078 - 0x000138)
class UAbilityTask_WaitAttributeChangeRatioThreshold : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  ExternalOwner                                               OFFSET(get<T>, {0x130, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeRatioThreshold.WaitForAttributeChangeRatioThreshold
	// UAbilityTask_WaitAttributeChangeRatioThreshold* WaitForAttributeChangeRatioThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute AttributeNumerator, FGameplayAttribute AttributeDenominator, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner); // [0x690c24c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold
/// Size: 0x0070 (0x000078 - 0x0000E8)
class UAbilityTask_WaitAttributeChangeThreshold : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  ExternalOwner                                               OFFSET(get<T>, {0xE0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitAttributeChangeThreshold.WaitForAttributeChangeThreshold
	// UAbilityTask_WaitAttributeChangeThreshold* WaitForAttributeChangeThreshold(UGameplayAbility* OwningAbility, FGameplayAttribute Attribute, TEnumAsByte<EWaitAttributeChangeComparison> ComparisonType, float ComparisonValue, bool bTriggerOnce, AActor* OptionalExternalOwner); // [0x690ca5c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitCancel
/// Size: 0x0018 (0x000078 - 0x000090)
class UAbilityTask_WaitCancel : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnCancel                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.WaitCancel
	// UAbilityTask_WaitCancel* WaitCancel(UGameplayAbility* OwningAbility);                                                    // [0x690a4f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnLocalCancelCallback
	// void OnLocalCancelCallback();                                                                                            // [0x6903ea0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitCancel.OnCancelCallback
	// void OnCancelCallback();                                                                                                 // [0x6903570] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirm
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitConfirm : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnConfirm                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.WaitConfirm
	// UAbilityTask_WaitConfirm* WaitConfirm(UGameplayAbility* OwningAbility);                                                  // [0x690a5b0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirm.OnConfirmCallback
	// void OnConfirmCallback(UGameplayAbility* InAbility);                                                                     // [0x6903598] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel
/// Size: 0x0028 (0x000078 - 0x0000A0)
class UAbilityTask_WaitConfirmCancel : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMulticastInlineDelegate)                  OnConfirm                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCancel                                                    OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.WaitConfirmCancel
	// UAbilityTask_WaitConfirmCancel* WaitConfirmCancel(UGameplayAbility* OwningAbility);                                      // [0x690a670] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalConfirmCallback
	// void OnLocalConfirmCallback();                                                                                           // [0x6903ec8] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnLocalCancelCallback
	// void OnLocalCancelCallback();                                                                                            // [0x6903eb4] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnConfirmCallback
	// void OnConfirmCallback();                                                                                                // [0x6903618] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitConfirmCancel.OnCancelCallback
	// void OnCancelCallback();                                                                                                 // [0x6903584] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitDelay
/// Size: 0x0018 (0x000078 - 0x000090)
class UAbilityTask_WaitDelay : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnFinish                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitDelay.WaitDelay
	// UAbilityTask_WaitDelay* WaitDelay(UGameplayAbility* OwningAbility, float Time);                                          // [0x690a730] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied
/// Size: 0x01C8 (0x000078 - 0x000240)
class UAbilityTask_WaitGameplayEffectApplied : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(UAbilitySystemComponent*)                  ExternalOwner                                               OFFSET(get<T>, {0x230, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied.OnApplyGameplayEffectCallback
	// void OnApplyGameplayEffectCallback(UAbilitySystemComponent* Target, FGameplayEffectSpec& SpecApplied, FActiveGameplayEffectHandle ActiveHandle); // [0x6903340] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self
/// Size: 0x0020 (0x000240 - 0x000260)
class UAbilityTask_WaitGameplayEffectApplied_Self : public UAbilityTask_WaitGameplayEffectApplied
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FMulticastInlineDelegate)                  OnApplied                                                   OFFSET(getStruct<T>, {0x240, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf_Query
	// UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf_Query(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x690e5f0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Self.WaitGameplayEffectAppliedToSelf
	// UAbilityTask_WaitGameplayEffectApplied_Self* WaitGameplayEffectAppliedToSelf(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x690dd18] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target
/// Size: 0x0020 (0x000240 - 0x000260)
class UAbilityTask_WaitGameplayEffectApplied_Target : public UAbilityTask_WaitGameplayEffectApplied
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FMulticastInlineDelegate)                  OnApplied                                                   OFFSET(getStruct<T>, {0x240, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget_Query
	// UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget_Query(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle SourceFilter, FGameplayTagQuery SourceTagQuery, FGameplayTagQuery TargetTagQuery, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffect); // [0x690f754] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectApplied_Target.WaitGameplayEffectAppliedToTarget
	// UAbilityTask_WaitGameplayEffectApplied_Target* WaitGameplayEffectAppliedToTarget(UGameplayAbility* OwningAbility, FGameplayTargetDataFilterHandle TargetFilter, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, bool TriggerOnce, AActor* OptionalExternalOwner, bool ListenForPeriodicEffects); // [0x690ee7c] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity
/// Size: 0x0138 (0x000078 - 0x0001B0)
class UAbilityTask_WaitGameplayEffectBlockedImmunity : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	SMember(FMulticastInlineDelegate)                  bLocked                                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  ExternalOwner                                               OFFSET(get<T>, {0x1A0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectBlockedImmunity.WaitGameplayEffectBlockedByImmunity
	// UAbilityTask_WaitGameplayEffectBlockedImmunity* WaitGameplayEffectBlockedByImmunity(UGameplayAbility* OwningAbility, FGameplayTagRequirements SourceTagRequirements, FGameplayTagRequirements TargetTagRequirements, AActor* OptionalExternalTarget, bool OnlyTriggerOnce); // [0x690ffe0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UAbilityTask_WaitGameplayEffectRemoved : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  OnRemoved                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  InvalidHandle                                               OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.WaitForGameplayEffectRemoved
	// UAbilityTask_WaitGameplayEffectRemoved* WaitForGameplayEffectRemoved(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x690d938] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectRemoved.OnGameplayEffectRemoved
	// void OnGameplayEffectRemoved(FGameplayEffectRemovalInfo& InGameplayEffectRemovalInfo);                                   // [0x690362c] Final|Native|Public|HasOutParms 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UAbilityTask_WaitGameplayEffectStackChange : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  InvalidHandle                                               OFFSET(getStruct<T>, {0x88, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.WaitForGameplayEffectStackChange
	// UAbilityTask_WaitGameplayEffectStackChange* WaitForGameplayEffectStackChange(UGameplayAbility* OwningAbility, FActiveGameplayEffectHandle Handle); // [0x690dac8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEffectStackChange.OnGameplayEffectStackChange
	// void OnGameplayEffectStackChange(FActiveGameplayEffectHandle Handle, int32_t NewCount, int32_t OldCount);                // [0x6903754] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent
/// Size: 0x0030 (0x000078 - 0x0000A8)
class UAbilityTask_WaitGameplayEvent : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  EventReceived                                               OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  OptionalExternalTarget                                      OFFSET(get<T>, {0x90, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayEvent.WaitGameplayEvent
	// UAbilityTask_WaitGameplayEvent* WaitGameplayEvent(UGameplayAbility* OwningAbility, FGameplayTag EventTag, AActor* OptionalExternalTarget, bool OnlyTriggerOnce, bool OnlyMatchExact); // [0x69105bc] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTag
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitGameplayTag : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UAbilitySystemComponent*)                  OptionalExternalTarget                                      OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTag.GameplayTagCallback
	// void GameplayTagCallback(FGameplayTag tag, int32_t NewCount);                                                            // [0x68fb374] Native|Public        
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UAbilityTask_WaitGameplayTagAdded : public UAbilityTask_WaitGameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  Added                                                       OFFSET(getStruct<T>, {0x98, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagAdded.WaitGameplayTagAdd
	// UAbilityTask_WaitGameplayTagAdded* WaitGameplayTagAdd(UGameplayAbility* OwningAbility, FGameplayTag tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x6910a90] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UAbilityTask_WaitGameplayTagRemoved : public UAbilityTask_WaitGameplayTag
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FMulticastInlineDelegate)                  Removed                                                     OFFSET(getStruct<T>, {0x98, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagRemoved.WaitGameplayTagRemove
	// UAbilityTask_WaitGameplayTagRemoved* WaitGameplayTagRemove(UGameplayAbility* OwningAbility, FGameplayTag tag, AActor* InOptionalExternalTarget, bool OnlyTriggerOnce); // [0x6911374] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery
/// Size: 0x00E0 (0x000078 - 0x000158)
class UAbilityTask_WaitGameplayTagQuery : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FMulticastInlineDelegate)                  Triggered                                                   OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  OptionalExternalTarget                                      OFFSET(get<T>, {0x148, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery.WaitGameplayTagQuery
	// UAbilityTask_WaitGameplayTagQuery* WaitGameplayTagQuery(UGameplayAbility* OwningAbility, FGameplayTagQuery TagQuery, AActor* InOptionalExternalTarget, EWaitGameplayTagQueryTriggerCondition TriggerCondition, bool bOnlyTriggerOnce); // [0x6910e54] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitGameplayTagQuery.UpdateTargetTags
	// void UpdateTargetTags(FGameplayTag tag, int32_t NewCount);                                                               // [0x690a00c] Final|Native|Protected 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputPress
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitInputPress : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnPress                                                     OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.WaitInputPress
	// UAbilityTask_WaitInputPress* WaitInputPress(UGameplayAbility* OwningAbility, bool bTestAlreadyPressed);                  // [0x6911738] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputPress.OnPressCallback
	// void OnPressCallback();                                                                                                  // [0x6904024] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitInputRelease
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitInputRelease : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnRelease                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.WaitInputRelease
	// UAbilityTask_WaitInputRelease* WaitInputRelease(UGameplayAbility* OwningAbility, bool bTestAlreadyReleased);             // [0x6911840] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitInputRelease.OnReleaseCallback
	// void OnReleaseCallback();                                                                                                // [0x6904038] Final|Native|Public  
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange
/// Size: 0x0020 (0x000078 - 0x000098)
class UAbilityTask_WaitMovementModeChange : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FMulticastInlineDelegate)                  OnChange                                                    OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.OnMovementModeChange
	// void OnMovementModeChange(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, char PreviousCustomMode);  // [0x6903edc] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilityTask_WaitMovementModeChange.CreateWaitMovementModeChange
	// UAbilityTask_WaitMovementModeChange* CreateWaitMovementModeChange(UGameplayAbility* OwningAbility, TEnumAsByte<EMovementMode> NewMode); // [0x68f7138] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitOverlap
/// Size: 0x0010 (0x000078 - 0x000088)
class UAbilityTask_WaitOverlap : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  OnOverlap                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap
	// UAbilityTask_WaitOverlap* WaitForOverlap(UGameplayAbility* OwningAbility);                                               // [0x690dc58] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback
	// void OnHitCallback(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, FHitResult& Hit); // [0x6903ad8] Final|Native|Public|HasOutParms|HasDefaults 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitTargetData
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UAbilityTask_WaitTargetData : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  ValidData                                                   OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  Cancelled                                                   OFFSET(getStruct<T>, {0x88, 16, 0, 0})
	CMember(UClass*)                                   TargetClass                                                 OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(AGameplayAbilityTargetActor*)              TargetActor                                                 OFFSET(get<T>, {0xA0, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetDataUsingActor
	// UAbilityTask_WaitTargetData* WaitTargetDataUsingActor(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, AGameplayAbilityTargetActor* TargetActor); // [0x6911a9c] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.WaitTargetData
	// UAbilityTask_WaitTargetData* WaitTargetData(UGameplayAbility* OwningAbility, FName TaskInstanceName, TEnumAsByte<EGameplayTargetingConfirmation> ConfirmationType, UClass* Class); // [0x6911948] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCancelledCallback
	// void OnTargetDataReplicatedCancelledCallback();                                                                          // [0x1d2f760] Native|Public        
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReplicatedCallback
	// void OnTargetDataReplicatedCallback(FGameplayAbilityTargetDataHandle& Data, FGameplayTag ActivationTag);                 // [0x69042a0] Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataReadyCallback
	// void OnTargetDataReadyCallback(FGameplayAbilityTargetDataHandle& Data);                                                  // [0x69041d8] Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.OnTargetDataCancelledCallback
	// void OnTargetDataCancelledCallback(FGameplayAbilityTargetDataHandle& Data);                                              // [0x6904110] Native|Public|HasOutParms 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.FinishSpawningActor
	// void FinishSpawningActor(UGameplayAbility* OwningAbility, AGameplayAbilityTargetActor* SpawnedActor);                    // [0x68fb098] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilityTask_WaitTargetData.BeginSpawningActor
	// bool BeginSpawningActor(UGameplayAbility* OwningAbility, UClass* Class, AGameplayAbilityTargetActor*& SpawnedActor);     // [0x68f5910] Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.AbilityTask_WaitVelocityChange
/// Size: 0x0038 (0x000078 - 0x0000B0)
class UAbilityTask_WaitVelocityChange : public UAbilityTask
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FMulticastInlineDelegate)                  OnVelocityChage                                             OFFSET(getStruct<T>, {0x78, 16, 0, 0})
	CMember(UMovementComponent*)                       CachedMovementComponent                                     OFFSET(get<T>, {0x88, 8, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilityTask_WaitVelocityChange.CreateWaitVelocityChange
	// UAbilityTask_WaitVelocityChange* CreateWaitVelocityChange(UGameplayAbility* OwningAbility, FVector Direction, float MinimumMagnitude); // [0x68f723c] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
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
	CMember(TArray<FAttributeDefaults>)                DefaultStartingData                                         OFFSET(get<T>, {0x128, 16, 0, 0})
	SMember(FName)                                     AffectedAnimInstanceTag                                     OFFSET(getStruct<T>, {0x138, 4, 0, 0})
	DMember(float)                                     OutgoingDuration                                            OFFSET(get<float>, {0x2E8, 4, 0, 0})
	DMember(float)                                     IncomingDuration                                            OFFSET(get<float>, {0x2EC, 4, 0, 0})
	CMember(TArray<FString>)                           ClientDebugStrings                                          OFFSET(get<T>, {0x310, 16, 0, 0})
	CMember(TArray<FString>)                           ServerDebugStrings                                          OFFSET(get<T>, {0x320, 16, 0, 0})
	DMember(bool)                                      UserAbilityActivationInhibited                              OFFSET(get<bool>, {0x390, 1, 0, 0})
	DMember(bool)                                      ReplicationProxyEnabled                                     OFFSET(get<bool>, {0x391, 1, 0, 0})
	DMember(bool)                                      bSuppressGrantAbility                                       OFFSET(get<bool>, {0x392, 1, 0, 0})
	DMember(bool)                                      bSuppressGameplayCues                                       OFFSET(get<bool>, {0x393, 1, 0, 0})
	CMember(TArray<AGameplayAbilityTargetActor*>)      SpawnedTargetActors                                         OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(AActor*)                                   OwnerActor                                                  OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(AActor*)                                   AvatarActor                                                 OFFSET(get<T>, {0x3D8, 8, 0, 0})
	SMember(FGameplayAbilitySpecContainer)             ActivatableAbilities                                        OFFSET(getStruct<T>, {0x3F0, 288, 0, 0})
	CMember(TArray<UGameplayAbility*>)                 AllReplicatedInstancedAbilities                             OFFSET(get<T>, {0x540, 16, 0, 0})
	SMember(FGameplayAbilityRepAnimMontage)            RepAnimMontageInfo                                          OFFSET(getStruct<T>, {0x780, 56, 0, 0})
	DMember(bool)                                      bCachedIsNetSimulated                                       OFFSET(get<bool>, {0x7B8, 1, 0, 0})
	DMember(bool)                                      bPendingMontageRep                                          OFFSET(get<bool>, {0x7B9, 1, 0, 0})
	SMember(FGameplayAbilityLocalAnimMontage)          LocalAnimMontageInfo                                        OFFSET(getStruct<T>, {0x7C0, 48, 0, 0})
	SMember(FActiveGameplayEffectsContainer)           ActiveGameplayEffects                                       OFFSET(getStruct<T>, {0x890, 760, 0, 0})
	SMember(FActiveGameplayCueContainer)               ActiveGameplayCues                                          OFFSET(getStruct<T>, {0xB88, 296, 0, 0})
	SMember(FActiveGameplayCueContainer)               MinimalReplicationGameplayCues                              OFFSET(getStruct<T>, {0xCB0, 296, 0, 0})
	CMember(TArray<char>)                              BlockedAbilityBindings                                      OFFSET(get<T>, {0xF00, 16, 0, 0})
	SMember(FMinimalReplicationTagCountMap)            MinimalReplicationTags                                      OFFSET(getStruct<T>, {0x1038, 96, 0, 0})
	CMember(TArray<UAttributeSet*>)                    SpawnedAttributes                                           OFFSET(get<T>, {0x1098, 16, 0, 0})
	SMember(FMinimalReplicationTagCountMap)            ReplicatedLooseTags                                         OFFSET(getStruct<T>, {0x10B8, 96, 0, 0})
	SMember(FReplicatedPredictionKeyMap)               ReplicatedPredictionKeyMap                                  OFFSET(getStruct<T>, {0x1120, 280, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitudes
	// void UpdateActiveGameplayEffectSetByCallerMagnitudes(FActiveGameplayEffectHandle ActiveHandle, TMap<FGameplayTag, float>& NewSetByCallerValues); // [0x6909de4] BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.UpdateActiveGameplayEffectSetByCallerMagnitude
	// void UpdateActiveGameplayEffectSetByCallerMagnitude(FActiveGameplayEffectHandle ActiveHandle, FGameplayTag SetByCallerTag, float NewValue); // [0x6909a5c] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilityByClass
	// bool TryActivateAbilityByClass(UClass* InAbilityToActivate, bool bAllowRemoteActivation);                                // [0x6909998] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbility
	// bool TryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool bAllowRemoteActivation);                      // [0x6909714] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TryActivateAbilitiesByTag
	// bool TryActivateAbilitiesByTag(FGameplayTagContainer& GameplayTagContainer, bool bAllowRemoteActivation);                // [0x6909594] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetConfirm
	// void TargetConfirm();                                                                                                    // [0x1cf0170] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.TargetCancel
	// void TargetCancel();                                                                                                     // [0x6908e3c] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetUserAbilityActivationInhibited
	// void SetUserAbilityActivationInhibited(bool NewInhibit);                                                                 // [0x690898c] Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevelUsingQuery
	// void SetActiveGameplayEffectLevelUsingQuery(FGameplayEffectQuery Query, int32_t NewLevel);                               // [0x6907e2c] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.SetActiveGameplayEffectLevel
	// void SetActiveGameplayEffectLevel(FActiveGameplayEffectHandle ActiveHandle, int32_t NewLevel);                           // [0x6907bac] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbilityWithEventData
	// void ServerTryActivateAbilityWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x6907624] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerTryActivateAbility
	// void ServerTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate, bool InputPressed, FPredictionKey PredictionKey); // [0x690722c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetDataCancelled
	// void ServerSetReplicatedTargetDataCancelled(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x6906dfc] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedTargetData
	// void ServerSetReplicatedTargetData(FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FGameplayAbilityTargetDataHandle ReplicatedTargetDataHandle, FGameplayTag ApplicationTag, FPredictionKey CurrentPredictionKey); // [0x6906768] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEventWithPayload
	// void ServerSetReplicatedEventWithPayload(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey, FVector_NetQuantize100 VectorPayload); // [0x69061b4] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetReplicatedEvent
	// void ServerSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey, FPredictionKey CurrentPredictionKey); // [0x6905d44] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputReleased
	// void ServerSetInputReleased(FGameplayAbilitySpecHandle AbilityHandle);                                                   // [0x6905bc8] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerSetInputPressed
	// void ServerSetInputPressed(FGameplayAbilitySpecHandle AbilityHandle);                                                    // [0x6905a4c] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_RequestWithStrings
	// void ServerPrintDebug_RequestWithStrings(TArray<FString> Strings);                                                       // [0x6905998] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerPrintDebug_Request
	// void ServerPrintDebug_Request();                                                                                         // [0x690594c] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerEndAbility
	// void ServerEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo, FPredictionKey PredictionKey); // [0x6905528] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetPlayRate
	// void ServerCurrentMontageSetPlayRate(UAnimMontage* ClientAnimMontage, float InPlayRate);                                 // [0x690543c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageSetNextSectionName
	// void ServerCurrentMontageSetNextSectionName(UAnimMontage* ClientAnimMontage, float ClientPosition, FName SectionName, FName NextSectionName); // [0x69052c8] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCurrentMontageJumpToSectionName
	// void ServerCurrentMontageJumpToSectionName(UAnimMontage* ClientAnimMontage, FName SectionName);                          // [0x69051dc] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerCancelAbility
	// void ServerCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x6904f0c] Net|NetReliableNative|Event|Protected|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ServerAbilityRPCBatch
	// void ServerAbilityRPCBatch(FServerAbilityRPCBatch BatchInfo);                                                            // [0x6904d18] Net|NetReliableNative|Event|Public|NetServer|NetValidate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffectBySourceEffect
	// void RemoveActiveGameplayEffectBySourceEffect(UClass* GameplayEffect, UAbilitySystemComponent* InstigatorAbilitySystemComponent, int32_t StacksToRemove); // [0x6904b24] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveGameplayEffect
	// bool RemoveActiveGameplayEffect(FActiveGameplayEffectHandle Handle, int32_t StacksToRemove);                             // [0x6904894] BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithTags
	// int32_t RemoveActiveEffectsWithTags(FGameplayTagContainer Tags);                                                         // [0x2d7f048] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithSourceTags
	// int32_t RemoveActiveEffectsWithSourceTags(FGameplayTagContainer Tags);                                                   // [0x6904708] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithGrantedTags
	// int32_t RemoveActiveEffectsWithGrantedTags(FGameplayTagContainer Tags);                                                  // [0x2deb7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.RemoveActiveEffectsWithAppliedTags
	// int32_t RemoveActiveEffectsWithAppliedTags(FGameplayTagContainer Tags);                                                  // [0x690457c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ReleaseInputID
	// void ReleaseInputID(int32_t InputID);                                                                                    // [0x69044f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.PressInputID
	// void PressInputID(int32_t InputID);                                                                                      // [0x6904474] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnSpawnedAttributesEndPlayed
	// void OnSpawnedAttributesEndPlayed(AActor* InActor, TEnumAsByte<EEndPlayReason> EndPlayReason);                           // [0x690404c] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_SpawnedAttributes
	// void OnRep_SpawnedAttributes(TArray<UAttributeSet*>& PreviousSpawnedAttributes);                                         // [0x1ceb298] Final|Native|Private|HasOutParms 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ServerDebugString
	// void OnRep_ServerDebugString();                                                                                          // [0x5c49968] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ReplicatedAnimMontage
	// void OnRep_ReplicatedAnimMontage();                                                                                      // [0x5aec148] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_OwningActor
	// void OnRep_OwningActor();                                                                                                // [0x1ceb1a0] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ClientDebugString
	// void OnRep_ClientDebugString();                                                                                          // [0x5c8fa74] Native|Public        
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnRep_ActivateAbilities
	// void OnRep_ActivateAbilities();                                                                                          // [0x248010c] Native|Protected     
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnOwnerActorDestroyed
	// void OnOwnerActorDestroyed(AActor* InActor);                                                                             // [0x2a283bc] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.OnAvatarActorDestroyed
	// void OnAvatarActorDestroyed(AActor* InActor);                                                                            // [0x296f51c] Final|Native|Public  
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted_WithParams
	// void NetMulticast_InvokeGameplayCuesExecuted_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x69028fc] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesExecuted
	// void NetMulticast_InvokeGameplayCuesExecuted(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x6902434] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams
	// void NetMulticast_InvokeGameplayCuesAddedAndWhileActive_WithParams(FGameplayTagContainer GameplayCueTags, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x6902008] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_WithParams
	// void NetMulticast_InvokeGameplayCueExecuted_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x26f84e4] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted_FromSpec
	// void NetMulticast_InvokeGameplayCueExecuted_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey);      // [0x29a50b4] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueExecuted
	// void NetMulticast_InvokeGameplayCueExecuted(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x6901b88] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams
	// void NetMulticast_InvokeGameplayCueAddedAndWhileActive_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters GameplayCueParameters); // [0x6901784] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec
	// void NetMulticast_InvokeGameplayCueAddedAndWhileActive_FromSpec(FGameplayEffectSpecForRPC Spec, FPredictionKey PredictionKey); // [0x69014bc] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded_WithParams
	// void NetMulticast_InvokeGameplayCueAdded_WithParams(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayCueParameters Parameters); // [0x2489eec] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.NetMulticast_InvokeGameplayCueAdded
	// void NetMulticast_InvokeGameplayCueAdded(FGameplayTag GameplayCueTag, FPredictionKey PredictionKey, FGameplayEffectContextHandle EffectContext); // [0x690103c] Net|Native|Event|NetMulticast|Public 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeOutgoingSpec
	// FGameplayEffectSpecHandle MakeOutgoingSpec(UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle Context); // [0x27d3d48] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.MakeEffectContext
	// FGameplayEffectContextHandle MakeEffectContext();                                                                        // [0x6900bc0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_InitStats
	// void K2_InitStats(UClass* Attributes, UDataTable* DataTable);                                                            // [0x6900afc] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_GiveAbilityAndActivateOnce
	// FGameplayAbilitySpecHandle K2_GiveAbilityAndActivateOnce(UClass* AbilityClass, int32_t Level, int32_t InputID);          // [0x69009f8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.K2_GiveAbility
	// FGameplayAbilitySpecHandle K2_GiveAbility(UClass* AbilityClass, int32_t Level, int32_t InputID);                         // [0x69008f4] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.IsGameplayCueActive
	// bool IsGameplayCueActive(FGameplayTag GameplayCueTag);                                                                   // [0x69002b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.InputConfirm
	// void InputConfirm();                                                                                                     // [0x1cefc84] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.InputCancel
	// void InputCancel();                                                                                                      // [0x285a024] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetUserAbilityActivationInhibited
	// bool GetUserAbilityActivationInhibited();                                                                                // [0x6900118] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayTagCount
	// int32_t GetGameplayTagCount(FGameplayTag GameplayTag);                                                                   // [0x68ff098] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectMagnitude
	// float GetGameplayEffectMagnitude(FActiveGameplayEffectHandle Handle, FGameplayAttribute Attribute);                      // [0x68fece8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount_IfLoaded
	// int32_t GetGameplayEffectCount_IfLoaded(TWeakObjectPtr<UClass*> SoftSourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0x68feaa0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayEffectCount
	// int32_t GetGameplayEffectCount(UClass* SourceGameplayEffect, UAbilitySystemComponent* OptionalInstigatorFilterComponent, bool bEnforceOnGoingCheck); // [0x68fe9a4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetGameplayAttributeValue
	// float GetGameplayAttributeValue(FGameplayAttribute Attribute, bool& bFound);                                             // [0x68fe1a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAttributeSet
	// UAttributeSet* GetAttributeSet(UClass* AttributeSetClass);                                                               // [0x68fccbc] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAllAttributes
	// void GetAllAttributes(TArray<FGameplayAttribute>& OutAttributes);                                                        // [0x68fc9e8] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetAllAbilities
	// void GetAllAbilities(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles);                                             // [0x68fc870] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffectsWithAllTags
	// TArray<FActiveGameplayEffectHandle> GetActiveEffectsWithAllTags(FGameplayTagContainer Tags);                             // [0x68fb6b8] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.GetActiveEffects
	// TArray<FActiveGameplayEffectHandle> GetActiveEffects(FGameplayEffectQuery& Query);                                       // [0x68fb5f0] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithTags
	// void FindAllAbilitiesWithTags(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagContainer Tags, bool bExactMatch); // [0x68fa954] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesWithInputID
	// void FindAllAbilitiesWithInputID(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, int32_t InputID);                // [0x68fa79c] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.FindAllAbilitiesMatchingQuery
	// void FindAllAbilitiesMatchingQuery(TArray<FGameplayAbilitySpecHandle>& OutAbilityHandles, FGameplayTagQuery Query);      // [0x68fa59c] Final|Native|Public|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientTryActivateAbility
	// void ClientTryActivateAbility(FGameplayAbilitySpecHandle AbilityToActivate);                                             // [0x68f6d50] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientSetReplicatedEvent
	// void ClientSetReplicatedEvent(TEnumAsByte<EAbilityGenericReplicatedEvent> EventType, FGameplayAbilitySpecHandle AbilityHandle, FPredictionKey AbilityOriginalPredictionKey); // [0x68f6a7c] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientPrintDebug_Response
	// void ClientPrintDebug_Response(TArray<FString> Strings, int32_t GameFlags);                                              // [0x68f69a8] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientEndAbility
	// void ClientEndAbility(FGameplayAbilitySpecHandle AbilityToEnd, FGameplayAbilityActivationInfo ActivationInfo);           // [0x68f6708] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientCancelAbility
	// void ClientCancelAbility(FGameplayAbilitySpecHandle AbilityToCancel, FGameplayAbilityActivationInfo ActivationInfo);     // [0x68f6468] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceedWithEventData
	// void ClientActivateAbilitySucceedWithEventData(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey, FGameplayEventData TriggerEventData); // [0x68f6064] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilitySucceed
	// void ClientActivateAbilitySucceed(FGameplayAbilitySpecHandle AbilityToActivate, FPredictionKey PredictionKey);           // [0x68f5dbc] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClientActivateAbilityFailed
	// void ClientActivateAbilityFailed(FGameplayAbilitySpecHandle AbilityToActivate, int16_t PredictionKey);                   // [0x68f5b3c] Net|NetReliableNative|Event|Protected|NetClient 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAllAbilitiesWithInputID
	// void ClearAllAbilitiesWithInputID(int32_t InputID);                                                                      // [0x68f5abc] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAllAbilities
	// void ClearAllAbilities();                                                                                                // [0x68f5aa8] Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.ClearAbility
	// void ClearAbility(FGameplayAbilitySpecHandle& Handle);                                                                   // [0x68f5a1c] Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToTarget
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToTarget(UClass* GameplayEffectClass, UAbilitySystemComponent* Target, float Level, FGameplayEffectContextHandle Context); // [0x2b0467c] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectToSelf
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectToSelf(UClass* GameplayEffectClass, float Level, FGameplayEffectContextHandle EffectContext); // [0x2e915d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToTarget
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToTarget(FGameplayEffectSpecHandle& SpecHandle, UAbilitySystemComponent* Target); // [0x68f5284] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.BP_ApplyGameplayEffectSpecToSelf
	// FActiveGameplayEffectHandle BP_ApplyGameplayEffectSpecToSelf(FGameplayEffectSpecHandle& SpecHandle);                     // [0x27d4028] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityConfirmOrCancel__DelegateSignature
	// void AbilityConfirmOrCancel__DelegateSignature();                                                                        // [0x1d9241c] MulticastDelegate|Public|Delegate 
	// Function /Script/GameplayAbilities.AbilitySystemComponent.AbilityAbilityKey__DelegateSignature
	// void AbilityAbilityKey__DelegateSignature(int32_t InputID);                                                              // [0x1d9241c] MulticastDelegate|Public|Delegate 
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
	SMember(FSoftClassPath)                            AbilitySystemGlobalsClassName                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	DMember(bool)                                      bUseDebugTargetFromHud                                      OFFSET(get<bool>, {0x68, 1, 0, 0})
	SMember(FGameplayTag)                              ActivateFailIsDeadTag                                       OFFSET(getStruct<T>, {0x6C, 4, 0, 0})
	SMember(FName)                                     ActivateFailIsDeadName                                      OFFSET(getStruct<T>, {0x70, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailCooldownTag                                     OFFSET(getStruct<T>, {0x74, 4, 0, 0})
	SMember(FName)                                     ActivateFailCooldownName                                    OFFSET(getStruct<T>, {0x78, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailCostTag                                         OFFSET(getStruct<T>, {0x7C, 4, 0, 0})
	SMember(FName)                                     ActivateFailCostName                                        OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailTagsBlockedTag                                  OFFSET(getStruct<T>, {0x84, 4, 0, 0})
	SMember(FName)                                     ActivateFailTagsBlockedName                                 OFFSET(getStruct<T>, {0x88, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailTagsMissingTag                                  OFFSET(getStruct<T>, {0x8C, 4, 0, 0})
	SMember(FName)                                     ActivateFailTagsMissingName                                 OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	SMember(FGameplayTag)                              ActivateFailNetworkingTag                                   OFFSET(getStruct<T>, {0x94, 4, 0, 0})
	SMember(FName)                                     ActivateFailNetworkingName                                  OFFSET(getStruct<T>, {0x98, 4, 0, 0})
	DMember(int32_t)                                   MinimalReplicationTagCountBits                              OFFSET(get<int32_t>, {0x9C, 4, 0, 0})
	SMember(FNetSerializeScriptStructCache)            TargetDataStructCache                                       OFFSET(getStruct<T>, {0xA0, 16, 0, 0})
	SMember(FNetSerializeScriptStructCache)            EffectContextStructCache                                    OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      bAllowGameplayModEvaluationChannels                         OFFSET(get<bool>, {0xC0, 1, 0, 0})
	CMember(EGameplayModEvaluationChannel)             DefaultGameplayModEvaluationChannel                         OFFSET(get<T>, {0xC1, 1, 0, 0})
	SMember(FName)                                     GameplayModEvaluationChannelAliases                         OFFSET(getStruct<T>, {0xC4, 40, 0, 0})
	SMember(FSoftObjectPath)                           GlobalCurveTableName                                        OFFSET(getStruct<T>, {0xF0, 24, 0, 0})
	CMember(UCurveTable*)                              GlobalCurveTable                                            OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FSoftObjectPath)                           GlobalAttributeMetaDataTableName                            OFFSET(getStruct<T>, {0x110, 24, 0, 0})
	CMember(UDataTable*)                               GlobalAttributeMetaDataTable                                OFFSET(get<T>, {0x128, 8, 0, 0})
	SMember(FSoftObjectPath)                           GlobalAttributeSetDefaultsTableName                         OFFSET(getStruct<T>, {0x130, 24, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   GlobalAttributeSetDefaultsTableNames                        OFFSET(get<T>, {0x148, 16, 0, 0})
	CMember(TArray<UCurveTable*>)                      GlobalAttributeDefaultsTables                               OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FSoftObjectPath)                           GlobalGameplayCueManagerClass                               OFFSET(getStruct<T>, {0x168, 24, 0, 0})
	SMember(FSoftObjectPath)                           GlobalGameplayCueManagerName                                OFFSET(getStruct<T>, {0x180, 24, 0, 0})
	CMember(TArray<FString>)                           GameplayCueNotifyPaths                                      OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FSoftObjectPath)                           GameplayTagResponseTableName                                OFFSET(getStruct<T>, {0x1A8, 24, 0, 0})
	CMember(UGameplayTagReponseTable*)                 GameplayTagResponseTable                                    OFFSET(get<T>, {0x1C0, 8, 0, 0})
	DMember(bool)                                      PredictTargetGameplayEffects                                OFFSET(get<bool>, {0x1C9, 1, 0, 0})
	DMember(bool)                                      ReplicateActivationOwnedTags                                OFFSET(get<bool>, {0x1CA, 1, 0, 0})
	CMember(UGameplayCueManager*)                      GlobalGameplayCueManager                                    OFFSET(get<T>, {0x1D0, 8, 0, 0})
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
	DMember(float)                                     MaxHealth                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Health                                                      OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Mana                                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxMana                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Damage                                                      OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     SpellDamage                                                 OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     PhysicalDamage                                              OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     CritChance                                                  OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     CritMultiplier                                              OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     ArmorDamageReduction                                        OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     DodgeChance                                                 OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LifeSteal                                                   OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     StackingAttribute1                                          OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     StackingAttribute2                                          OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     NoStackAttribute                                            OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.AbilitySystemTestPawn
/// Size: 0x0020 (0x000340 - 0x000360)
class AAbilitySystemTestPawn : public ADefaultPawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(UAbilitySystemComponent*)                  AbilitySystemComponent                                      OFFSET(get<T>, {0x358, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.AnimNotify_GameplayCue
/// Size: 0x0008 (0x000038 - 0x000040)
class UAnimNotify_GameplayCue : public UAnimNotify
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayCueTag)                           GameplayCue                                                 OFFSET(getStruct<T>, {0x38, 4, 0, 0})
};

/// Class /Script/GameplayAbilities.AnimNotify_GameplayCueState
/// Size: 0x0008 (0x000030 - 0x000038)
class UAnimNotify_GameplayCueState : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayCueTag)                           GameplayCue                                                 OFFSET(getStruct<T>, {0x30, 4, 0, 0})
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
	SMember(FGameplayCueObjectLibrary)                 RuntimeGameplayCueObjectLibrary                             OFFSET(getStruct<T>, {0x48, 80, 0, 0})
	SMember(FGameplayCueObjectLibrary)                 EditorGameplayCueObjectLibrary                              OFFSET(getStruct<T>, {0x98, 80, 0, 0})
	CMember(TArray<UClass*>)                           LoadedGameplayCueNotifyClasses                              OFFSET(get<T>, {0x260, 16, 0, 0})
	CMember(TArray<UClass*>)                           GameplayCueClassesForPreallocation                          OFFSET(get<T>, {0x270, 16, 0, 0})
	CMember(TArray<FGameplayCuePendingExecute>)        PendingExecuteCues                                          OFFSET(get<T>, {0x280, 16, 0, 0})
	DMember(int32_t)                                   GameplayCueSendContextCount                                 OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	CMember(TArray<FPreallocationInfo>)                PreallocationInfoList_Internal                              OFFSET(get<T>, {0x298, 16, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Actor
/// Size: 0x0068 (0x000290 - 0x0002F8)
class AGameplayCueNotify_Actor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	DMember(bool)                                      bAutoDestroyOnRemove                                        OFFSET(get<bool>, {0x290, 1, 0, 0})
	DMember(float)                                     AutoDestroyDelay                                            OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(bool)                                      WarnIfTimelineIsStillRunning                                OFFSET(get<bool>, {0x298, 1, 0, 0})
	DMember(bool)                                      WarnIfLatentActionIsStillRunning                            OFFSET(get<bool>, {0x299, 1, 0, 0})
	SMember(FGameplayTag)                              GameplayCueTag                                              OFFSET(getStruct<T>, {0x29C, 4, 0, 0})
	SMember(FName)                                     GameplayCueName                                             OFFSET(getStruct<T>, {0x2A0, 4, 0, 0})
	DMember(bool)                                      bAutoAttachToOwner                                          OFFSET(get<bool>, {0x2A4, 1, 0, 0})
	DMember(bool)                                      IsOverride                                                  OFFSET(get<bool>, {0x2A5, 1, 0, 0})
	DMember(bool)                                      bUniqueInstancePerInstigator                                OFFSET(get<bool>, {0x2A6, 1, 0, 0})
	DMember(bool)                                      bUniqueInstancePerSourceObject                              OFFSET(get<bool>, {0x2A7, 1, 0, 0})
	DMember(bool)                                      bAllowMultipleOnActiveEvents                                OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      bAllowMultipleWhileActiveEvents                             OFFSET(get<bool>, {0x2A9, 1, 0, 0})
	DMember(int32_t)                                   NumPreallocatedInstances                                    OFFSET(get<int32_t>, {0x2AC, 4, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.WhileActive
	// bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                  // [0x184fae8] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x184f6ac] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnOwnerDestroyed
	// void OnOwnerDestroyed(AActor* DestroyedActor);                                                                           // [0x2af54ec] Native|Public        
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x27ab0cc] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x184f130] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x1d9241c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Actor.K2_EndGameplayCue
	// void K2_EndGameplayCue();                                                                                                // [0x1aabfa0] Native|Public|BlueprintCallable 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Static
/// Size: 0x0010 (0x000028 - 0x000038)
class UGameplayCueNotify_Static : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGameplayTag)                              GameplayCueTag                                              OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     GameplayCueName                                             OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	DMember(bool)                                      IsOverride                                                  OFFSET(get<bool>, {0x30, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.WhileActive
	// bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                  // [0x2a73f88] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x2a83ae8] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x184f244] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x2a70074] Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Static.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x1d9241c] Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Burst
/// Size: 0x0310 (0x000038 - 0x000348)
class UGameplayCueNotify_Burst : public UGameplayCueNotify_Static
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 840;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         DefaultSpawnCondition                                       OFFSET(getStruct<T>, {0x38, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          DefaultPlacementInfo                                        OFFSET(getStruct<T>, {0x70, 64, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           BurstEffects                                                OFFSET(getStruct<T>, {0xB0, 664, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Burst.OnBurst
	// void OnBurst(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);          // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_BurstLatent
/// Size: 0x0368 (0x0002F8 - 0x000660)
class AGameplayCueNotify_BurstLatent : public AGameplayCueNotify_Actor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         DefaultSpawnCondition                                       OFFSET(getStruct<T>, {0x2F8, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          DefaultPlacementInfo                                        OFFSET(getStruct<T>, {0x330, 64, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           BurstEffects                                                OFFSET(getStruct<T>, {0x370, 664, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            BurstSpawnResults                                           OFFSET(getStruct<T>, {0x608, 88, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_BurstLatent.OnBurst
	// void OnBurst(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);          // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_HitImpact
/// Size: 0x0010 (0x000038 - 0x000048)
class UGameplayCueNotify_HitImpact : public UGameplayCueNotify_Static
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(USoundBase*)                               sound                                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UParticleSystem*)                          ParticleSystem                                              OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/GameplayAbilities.GameplayCueNotify_Looping
/// Size: 0x0B98 (0x0002F8 - 0x000E90)
class AGameplayCueNotify_Looping : public AGameplayCueNotify_Actor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3728;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         DefaultSpawnCondition                                       OFFSET(getStruct<T>, {0x2F8, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          DefaultPlacementInfo                                        OFFSET(getStruct<T>, {0x330, 64, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           ApplicationEffects                                          OFFSET(getStruct<T>, {0x370, 664, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            ApplicationSpawnResults                                     OFFSET(getStruct<T>, {0x608, 88, 0, 0})
	SMember(FGameplayCueNotify_LoopingEffects)         LoopingEffects                                              OFFSET(getStruct<T>, {0x660, 496, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            LoopingSpawnResults                                         OFFSET(getStruct<T>, {0x850, 88, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           RecurringEffects                                            OFFSET(getStruct<T>, {0x8A8, 664, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            RecurringSpawnResults                                       OFFSET(getStruct<T>, {0xB40, 88, 0, 0})
	SMember(FGameplayCueNotify_BurstEffects)           RemovalEffects                                              OFFSET(getStruct<T>, {0xB98, 664, 0, 0})
	SMember(FGameplayCueNotify_SpawnResult)            RemovalSpawnResults                                         OFFSET(getStruct<T>, {0xE30, 88, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRemoval
	// void OnRemoval(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);        // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnRecurring
	// void OnRecurring(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);      // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnLoopingStart
	// void OnLoopingStart(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);   // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Script/GameplayAbilities.GameplayCueNotify_Looping.OnApplication
	// void OnApplication(AActor* Target, FGameplayCueParameters& Parameters, FGameplayCueNotify_SpawnResult& SpawnResults);    // [0x1d9241c] Event|Protected|HasOutParms|BlueprintEvent 
};

/// Class /Script/GameplayAbilities.GameplayCueSet
/// Size: 0x0060 (0x000030 - 0x000090)
class UGameplayCueSet : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TArray<FGameplayCueNotifyData>)            GameplayCueData                                             OFFSET(get<T>, {0x30, 16, 0, 0})
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
	CMember(TArray<FGameplayEffectAttributeCaptureDefinition>) RelevantAttributesToCapture                         OFFSET(get<T>, {0x28, 16, 0, 0})
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
	DMember(bool)                                      bRequiresPassedInTags                                       OFFSET(get<bool>, {0x38, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayEffectExecutionCalculation.Execute
	// void Execute(FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput); // [0x6941cec] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayModMagnitudeCalculation
/// Size: 0x0008 (0x000038 - 0x000040)
class UGameplayModMagnitudeCalculation : public UGameplayEffectCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bAllowNonNetAuthorityDependencyRegistration                 OFFSET(get<bool>, {0x38, 1, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.K2_GetCapturedAttributeMagnitude
	// float K2_GetCapturedAttributeMagnitude(FGameplayEffectSpec& EffectSpec, FGameplayAttribute Attribute, FGameplayTagContainer& SourceTags, FGameplayTagContainer& TargetTags); // [0x69425e4] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetSpecTags
	// FGameplayTagContainer GetTargetSpecTags(FGameplayEffectSpec& EffectSpec);                                                // [0x6942518] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetAggregatedTags
	// FGameplayTagContainer GetTargetAggregatedTags(FGameplayEffectSpec& EffectSpec);                                          // [0x69423e8] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetTargetActorTags
	// FGameplayTagContainer GetTargetActorTags(FGameplayEffectSpec& EffectSpec);                                               // [0x694231c] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceSpecTags
	// FGameplayTagContainer GetSourceSpecTags(FGameplayEffectSpec& EffectSpec);                                                // [0x6942250] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceAggregatedTags
	// FGameplayTagContainer GetSourceAggregatedTags(FGameplayEffectSpec& EffectSpec);                                          // [0x6942120] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSourceActorTags
	// FGameplayTagContainer GetSourceActorTags(FGameplayEffectSpec& EffectSpec);                                               // [0x6942058] Final|Native|Protected|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByTag
	// float GetSetByCallerMagnitudeByTag(FGameplayEffectSpec& EffectSpec, FGameplayTag& tag);                                  // [0x6941f3c] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.GetSetByCallerMagnitudeByName
	// float GetSetByCallerMagnitudeByName(FGameplayEffectSpec& EffectSpec, FName& MagnitudeName);                              // [0x6941e20] Final|Native|Protected|HasOutParms|BlueprintCallable|Const 
	// Function /Script/GameplayAbilities.GameplayModMagnitudeCalculation.CalculateBaseMagnitude
	// float CalculateBaseMagnitude(FGameplayEffectSpec& Spec);                                                                 // [0x69419ec] Native|Event|Public|HasOutParms|BlueprintEvent|Const 
};

/// Class /Script/GameplayAbilities.GameplayTagReponseTable
/// Size: 0x0200 (0x000030 - 0x000230)
class UGameplayTagReponseTable : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(TArray<FGameplayTagResponseTableEntry>)    Entries                                                     OFFSET(get<T>, {0x30, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.GameplayTagReponseTable.TagResponseEvent
	// void TagResponseEvent(FGameplayTag tag, int32_t NewCount, UAbilitySystemComponent* ASC, int32_t idx);                    // [0x6942968] Final|Native|Protected 
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTriggerSection
/// Size: 0x00F8 (0x000108 - 0x000200)
class UMovieSceneGameplayCueTriggerSection : public UMovieSceneHookSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	SMember(FMovieSceneGameplayCueChannel)             Channel                                                     OFFSET(getStruct<T>, {0x108, 248, 0, 0})
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueSection
/// Size: 0x0088 (0x000108 - 0x000190)
class UMovieSceneGameplayCueSection : public UMovieSceneHookSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FMovieSceneGameplayCueKey)                 Cue                                                         OFFSET(getStruct<T>, {0x108, 136, 0, 0})
};

/// Class /Script/GameplayAbilities.MovieSceneGameplayCueTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneGameplayCueTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})


	/// Functions
	// Function /Script/GameplayAbilities.MovieSceneGameplayCueTrack.SetSequencerTrackHandler
	// void SetSequencerTrackHandler(FDelegateProperty InGameplayCueTrackHandler);                                              // [0x69428e8] Final|Native|Static|Public|BlueprintCallable 
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
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 872;

public:
	SMember(FGameplayEffectSpec)                       Spec                                                        OFFSET(getStruct<T>, {0x18, 664, 0, 0})
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x2B0, 24, 0, 0})
	CMember(TArray<FGameplayAbilitySpecHandle>)        GrantedAbilityHandles                                       OFFSET(get<T>, {0x2C8, 16, 0, 0})
	DMember(float)                                     StartServerWorldTime                                        OFFSET(get<float>, {0x2D8, 4, 0, 0})
	DMember(float)                                     CachedStartServerWorldTime                                  OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     StartWorldTime                                              OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(bool)                                      bIsInhibited                                                OFFSET(get<bool>, {0x2E4, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayAbilitySpecHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Handle                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.PredictionKey
/// Size: 0x0018 (0x000000 - 0x000018)
class FPredictionKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UPackageMap*)                              PredictiveConnection                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int16_t)                                   Current                                                     OFFSET(get<int16_t>, {0x8, 2, 0, 0})
	DMember(int16_t)                                   base                                                        OFFSET(get<int16_t>, {0xA, 2, 0, 0})
	DMember(bool)                                      bIsStale                                                    OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bIsServerInitiated                                          OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpec
/// Size: 0x0298 (0x000000 - 0x000298)
class FGameplayEffectSpec : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UGameplayEffect*)                          Def                                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FGameplayEffectModifiedAttribute>)  ModifiedAttributes                                          OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayEffectAttributeCaptureSpecContainer) CapturedRelevantAttributes                               OFFSET(getStruct<T>, {0x18, 40, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Period                                                      OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     ChanceToApplyToTarget                                       OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FTagContainerAggregator)                   CapturedSourceTags                                          OFFSET(getStruct<T>, {0x60, 136, 0, 0})
	SMember(FTagContainerAggregator)                   CapturedTargetTags                                          OFFSET(getStruct<T>, {0xE8, 136, 0, 0})
	SMember(FGameplayTagContainer)                     DynamicGrantedTags                                          OFFSET(getStruct<T>, {0x170, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DynamicAssetTags                                            OFFSET(getStruct<T>, {0x190, 32, 0, 0})
	CMember(TArray<FModifierSpec>)                     Modifiers                                                   OFFSET(get<T>, {0x1B0, 16, 0, 0})
	DMember(int32_t)                                   StackCount                                                  OFFSET(get<int32_t>, {0x1C0, 4, 0, 0})
	DMember(bool)                                      bCompletedSourceAttributeCapture                            OFFSET(get<bool>, {0x1C4, 1, 1, 0})
	DMember(bool)                                      bCompletedTargetAttributeCapture                            OFFSET(get<bool>, {0x1C4, 1, 1, 1})
	DMember(bool)                                      bDurationLocked                                             OFFSET(get<bool>, {0x1C4, 1, 1, 2})
	CMember(TArray<FGameplayAbilitySpecDef>)           GrantedAbilitySpecs                                         OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               OFFSET(getStruct<T>, {0x278, 24, 0, 0})
	DMember(float)                                     Level                                                       OFFSET(get<float>, {0x290, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandle
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayEffectContextHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecDef
/// Size: 0x0098 (0x000000 - 0x000098)
class FGameplayAbilitySpecDef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UClass*)                                   Ability                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            LevelScalableFloat                                          OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	DMember(int32_t)                                   InputID                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(EGameplayEffectGrantedAbilityRemovePolicy) RemovalPolicy                                               OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                AssignedHandle                                              OFFSET(getStruct<T>, {0x90, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.ScalableFloat
/// Size: 0x0028 (0x000000 - 0x000028)
class FScalableFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FCurveTableRowHandle)                      Curve                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FDataRegistryType)                         RegistryType                                                OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.ModifierSpec
/// Size: 0x0004 (0x000000 - 0x000004)
class FModifierSpec : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     EvaluatedMagnitude                                          OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.TagContainerAggregator
/// Size: 0x0088 (0x000000 - 0x000088)
class FTagContainerAggregator : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTagContainer)                     CapturedActorTags                                           OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     CapturedSpecTags                                            OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ScopedTags                                                  OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpecContainer
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayEffectAttributeCaptureSpecContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FGameplayEffectAttributeCaptureSpec>) SourceAttributes                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGameplayEffectAttributeCaptureSpec>) TargetAttributes                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bHasNonSnapshottedAttributes                                OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureSpec
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayEffectAttributeCaptureSpec : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayEffectAttributeCaptureDefinition) BackingDefinition                                           OFFSET(getStruct<T>, {0x0, 64, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectAttributeCaptureDefinition
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayEffectAttributeCaptureDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayAttribute)                        AttributeToCapture                                          OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	CMember(EGameplayEffectAttributeCaptureSource)     AttributeSource                                             OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(bool)                                      bSnapshot                                                   OFFSET(get<bool>, {0x39, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAttribute
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayAttribute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   AttributeName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(UStruct*)                                  AttributeOwner                                              OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifiedAttribute
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayEffectModifiedAttribute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(float)                                     TotalMagnitude                                              OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FActiveGameplayEffectHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Handle                                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(bool)                                      bPassedFiltersAndWasExecuted                                OFFSET(get<bool>, {0x4, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayEffectSpecHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.GameplayCueParameters
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FGameplayCueParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     NormalizedMagnitude                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RawMagnitude                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FGameplayTag)                              MatchedTagName                                              OFFSET(getStruct<T>, {0x20, 4, 0, 0})
	SMember(FGameplayTag)                              OriginalTag                                                 OFFSET(getStruct<T>, {0x24, 4, 0, 0})
	SMember(FGameplayTagContainer)                     AggregatedSourceTags                                        OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AggregatedTargetTags                                        OFFSET(getStruct<T>, {0x48, 32, 0, 0})
	SMember(FVector_NetQuantize10)                     Location                                                    OFFSET(getStruct<T>, {0x68, 24, 0, 0})
	SMember(FVector_NetQuantizeNormal)                 Normal                                                      OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   Instigator                                                  OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   EffectCauser                                                OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(TWeakObjectPtr<UPhysicalMaterial*>)        PhysicalMaterial                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(int32_t)                                   GameplayEffectLevel                                         OFFSET(get<int32_t>, {0xB8, 4, 0, 0})
	DMember(int32_t)                                   AbilityLevel                                                OFFSET(get<int32_t>, {0xBC, 4, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          TargetAttachComponent                                       OFFSET(get<T>, {0xC0, 8, 0, 0})
	DMember(bool)                                      bReplicateLocationWhenUsingMinimalRepProxy                  OFFSET(get<bool>, {0xC8, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectRemovalInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayEffectRemovalInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bPrematureRemoval                                           OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   StackCount                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEventData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FGameplayEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FGameplayTag)                              EventTag                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(AActor*)                                   Instigator                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(AActor*)                                   Target                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UObject*)                                  OptionalObject                                              OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(UObject*)                                  OptionalObject2                                             OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FGameplayEffectContextHandle)              ContextHandle                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FGameplayTagContainer)                     InstigatorTags                                              OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetTags                                                  OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	DMember(float)                                     EventMagnitude                                              OFFSET(get<float>, {0x80, 4, 0, 0})
	SMember(FGameplayAbilityTargetDataHandle)          TargetData                                                  OFFSET(getStruct<T>, {0x88, 40, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetDataHandle
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayAbilityTargetDataHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayAbilities.GameplayTagRequirements
/// Size: 0x0088 (0x000000 - 0x000088)
class FGameplayTagRequirements : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTagContainer)                     RequireTags                                                 OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     IgnoreTags                                                  OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagQuery)                         TagQuery                                                    OFFSET(getStruct<T>, {0x40, 72, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilterHandle
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayTargetDataFilterHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActivationInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayAbilityActivationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TEnumAsByte<EGameplayAbilityActivationMode>) ActivationMode                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bCanBeEndedByOtherInstance                                  OFFSET(get<bool>, {0x1, 1, 1, 0})
	SMember(FPredictionKey)                            PredictionKeyWhenActivated                                  OFFSET(getStruct<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectQuery
/// Size: 0x0198 (0x000000 - 0x000198)
class FGameplayEffectQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FDelegateProperty)                         CustomMatchDelegate_BP                                      OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FGameplayTagQuery)                         OwningTagQuery                                              OFFSET(getStruct<T>, {0x20, 72, 0, 0})
	SMember(FGameplayTagQuery)                         EffectTagQuery                                              OFFSET(getStruct<T>, {0x68, 72, 0, 0})
	SMember(FGameplayTagQuery)                         SourceTagQuery                                              OFFSET(getStruct<T>, {0xB0, 72, 0, 0})
	SMember(FGameplayTagQuery)                         SourceAggregateTagQuery                                     OFFSET(getStruct<T>, {0xF8, 72, 0, 0})
	SMember(FGameplayAttribute)                        ModifyingAttribute                                          OFFSET(getStruct<T>, {0x140, 56, 0, 0})
	CMember(UObject*)                                  EffectSource                                                OFFSET(get<T>, {0x178, 8, 0, 0})
	CMember(UClass*)                                   EffectDefinition                                            OFFSET(get<T>, {0x180, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectSpecForRPC
/// Size: 0x0078 (0x000000 - 0x000078)
class FGameplayEffectSpecForRPC : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UGameplayEffect*)                          Def                                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FGameplayEffectModifiedAttribute>)  ModifiedAttributes                                          OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FGameplayEffectContextHandle)              EffectContext                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FGameplayTagContainer)                     AggregatedSourceTags                                        OFFSET(getStruct<T>, {0x30, 32, 0, 0})
	SMember(FGameplayTagContainer)                     AggregatedTargetTags                                        OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	DMember(float)                                     Level                                                       OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     AbilityLevel                                                OFFSET(get<float>, {0x74, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.ServerAbilityRPCBatch
/// Size: 0x0050 (0x000000 - 0x000050)
class FServerAbilityRPCBatch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayAbilitySpecHandle)                AbilitySpecHandle                                           OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FGameplayAbilityTargetDataHandle)          TargetData                                                  OFFSET(getStruct<T>, {0x20, 40, 0, 0})
	DMember(bool)                                      InputPressed                                                OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      Ended                                                       OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      Started                                                     OFFSET(get<bool>, {0x4A, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyMap
/// Size: 0x0010 (0x000108 - 0x000118)
class FReplicatedPredictionKeyMap : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(TArray<FReplicatedPredictionKeyItem>)      PredictionKeys                                              OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.ReplicatedPredictionKeyItem
/// Size: 0x001C (0x00000C - 0x000028)
class FReplicatedPredictionKeyItem : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMap
/// Size: 0x0060 (0x000000 - 0x000060)
class FMinimalReplicationTagCountMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UAbilitySystemComponent*)                  Owner                                                       OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCueContainer
/// Size: 0x0020 (0x000108 - 0x000128)
class FActiveGameplayCueContainer : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	CMember(TArray<FActiveGameplayCue>)                GameplayCues                                                OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  Owner                                                       OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayCue
/// Size: 0x00F4 (0x00000C - 0x000100)
class FActiveGameplayCue : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FGameplayTag)                              GameplayCueTag                                              OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FGameplayCueParameters)                    Parameters                                                  OFFSET(getStruct<T>, {0x28, 208, 0, 0})
	DMember(bool)                                      bPredictivelyRemoved                                        OFFSET(get<bool>, {0xF8, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectsContainer
/// Size: 0x01F0 (0x000108 - 0x0002F8)
class FActiveGameplayEffectsContainer : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TArray<FActiveGameplayEffect>)             GameplayEffects_Internal                                    OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityLocalAnimMontage
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayAbilityLocalAnimMontage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UAnimMontage*)                             AnimMontage                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(char)                                      PlayInstanceId                                              OFFSET(get<char>, {0x8, 1, 0, 0})
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	CMember(TWeakObjectPtr<UGameplayAbility*>)         AnimatingAbility                                            OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontage
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayAbilityRepAnimMontage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UAnimMontage*)                             AnimMontage                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Position                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     BlendTime                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(char)                                      NextSectionID                                               OFFSET(get<char>, {0x14, 1, 0, 0})
	DMember(char)                                      PlayInstanceId                                              OFFSET(get<char>, {0x15, 1, 0, 0})
	DMember(bool)                                      bRepPosition                                                OFFSET(get<bool>, {0x16, 1, 1, 0})
	DMember(bool)                                      IsStopped                                                   OFFSET(get<bool>, {0x16, 1, 1, 1})
	DMember(bool)                                      SkipPositionCorrection                                      OFFSET(get<bool>, {0x16, 1, 1, 2})
	DMember(bool)                                      bSkipPlayRate                                               OFFSET(get<bool>, {0x16, 1, 1, 3})
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	DMember(char)                                      SectionIdToPlay                                             OFFSET(get<char>, {0x30, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecContainer
/// Size: 0x0018 (0x000108 - 0x000120)
class FGameplayAbilitySpecContainer : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FGameplayAbilitySpec>)              Items                                                       OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(UAbilitySystemComponent*)                  Owner                                                       OFFSET(get<T>, {0x118, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpec
/// Size: 0x00EC (0x00000C - 0x0000F8)
class FGameplayAbilitySpec : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FGameplayAbilitySpecHandle)                Handle                                                      OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	CMember(UGameplayAbility*)                         Ability                                                     OFFSET(get<T>, {0x10, 8, 0, 0})
	DMember(int32_t)                                   Level                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   InputID                                                     OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(char)                                      ActiveCount                                                 OFFSET(get<char>, {0x28, 1, 0, 0})
	DMember(bool)                                      InputPressed                                                OFFSET(get<bool>, {0x29, 1, 1, 0})
	DMember(bool)                                      RemoveAfterActivation                                       OFFSET(get<bool>, {0x29, 1, 1, 1})
	DMember(bool)                                      PendingRemove                                               OFFSET(get<bool>, {0x29, 1, 1, 2})
	DMember(bool)                                      bActivateOnce                                               OFFSET(get<bool>, {0x29, 1, 1, 3})
	SMember(FGameplayAbilityActivationInfo)            ActivationInfo                                              OFFSET(getStruct<T>, {0x40, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DynamicAbilityTags                                          OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	CMember(TArray<UGameplayAbility*>)                 NonReplicatedInstances                                      OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<UGameplayAbility*>)                 ReplicatedInstances                                         OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GameplayEffectHandle                                        OFFSET(getStruct<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.AttributeDefaults
/// Size: 0x0010 (0x000000 - 0x000010)
class FAttributeDefaults : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UClass*)                                   Attributes                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UDataTable*)                               DefaultStartingTable                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTag
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayCueTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              GameplayCueTag                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecConfig
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayAbilitySpecConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UClass*)                                   Ability                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            LevelScalableFloat                                          OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	DMember(int32_t)                                   InputID                                                     OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	CMember(EGameplayEffectGrantedAbilityRemovePolicy) RemovalPolicy                                               OFFSET(get<T>, {0x34, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfoNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGameplayAbilityTargetingLocationInfoNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.GameplayCuePendingExecute
/// Size: 0x0188 (0x000000 - 0x000188)
class FGameplayCuePendingExecute : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FPredictionKey)                            PredictionKey                                               OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(EGameplayCuePayloadType)                   PayloadType                                                 OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(UAbilitySystemComponent*)                  OwningComponent                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGameplayEffectSpecForRPC)                 FromSpec                                                    OFFSET(getStruct<T>, {0x40, 120, 0, 0})
	SMember(FGameplayCueParameters)                    CueParameters                                               OFFSET(getStruct<T>, {0xB8, 208, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyActorArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayCueNotifyActorArray : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<AGameplayCueNotify_Actor*>)         Actors                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.PreallocationInfo
/// Size: 0x0068 (0x000000 - 0x000068)
class FPreallocationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<UClass*, FGameplayCueNotifyActorArray>) PreallocatedInstances                                     OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<UClass*>)                           ClassesNeedingPreallocation                                 OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyForNetSerializer
/// Size: 0x0020 (0x000000 - 0x000020)
class FMinimalGameplayCueReplicationProxyForNetSerializer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGameplayTag>)                      Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector_NetQuantize>)               Locations                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMapForNetSerializer
/// Size: 0x0010 (0x000000 - 0x000010)
class FMinimalReplicationTagCountMapForNetSerializer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGameplayTag>)                      Tags                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.AbilityTriggerData
/// Size: 0x0008 (0x000000 - 0x000008)
class FAbilityTriggerData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayTag)                              TriggerTag                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TEnumAsByte<EGameplayAbilityTriggerSource>) TriggerSource                                              OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityBindInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayAbilityBindInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TEnumAsByte<EGameplayAbilityInputBinds>)   Command                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UClass*)                                   GameplayAbilityClass                                        OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTargetDataFilter
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTargetDataFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AActor*)                                   SelfActor                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UClass*)                                   RequiredActorClass                                          OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TEnumAsByte<ETargetDataFilterSelf>)        SelfFilter                                                  OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bReverseFilter                                              OFFSET(get<bool>, {0x19, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.WorldReticleParameters
/// Size: 0x0018 (0x000000 - 0x000018)
class FWorldReticleParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector)                                   AOEScale                                                    OFFSET(getStruct<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.NetSerializeScriptStructCache
/// Size: 0x0010 (0x000000 - 0x000010)
class FNetSerializeScriptStructCache : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UScriptStruct*>)                    ScriptStructs                                               OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAttributeData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayAttributeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     BaseValue                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CurrentValue                                                OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.AttributeMetaData
/// Size: 0x0028 (0x000008 - 0x000030)
class FAttributeMetaData : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     BaseValue                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FString)                                   DerivedAttributeInfo                                        OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bCanStack                                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData
/// Size: 0x0008 (0x000000 - 0x000008)
class FGameplayAbilityTargetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetingLocationInfo
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FGameplayAbilityTargetingLocationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(TEnumAsByte<EGameplayAbilityTargetingLocationType>) LocationType                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                LiteralTransform                                            OFFSET(getStruct<T>, {0x20, 96, 0, 0})
	CMember(AActor*)                                   SourceActor                                                 OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UMeshComponent*)                           SourceComponent                                             OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(UGameplayAbility*)                         SourceAbility                                               OFFSET(get<T>, {0x90, 8, 0, 0})
	SMember(FName)                                     SourceSocketName                                            OFFSET(getStruct<T>, {0x98, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_LocationInfo
/// Size: 0x0148 (0x000008 - 0x000150)
class FGameplayAbilityTargetData_LocationInfo : public FGameplayAbilityTargetData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FGameplayAbilityTargetingLocationInfo)     SourceLocation                                              OFFSET(getStruct<T>, {0x10, 160, 0, 0})
	SMember(FGameplayAbilityTargetingLocationInfo)     TargetLocation                                              OFFSET(getStruct<T>, {0xB0, 160, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_ActorArray
/// Size: 0x00B8 (0x000008 - 0x0000C0)
class FGameplayAbilityTargetData_ActorArray : public FGameplayAbilityTargetData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FGameplayAbilityTargetingLocationInfo)     SourceLocation                                              OFFSET(getStruct<T>, {0x10, 160, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    TargetActorArray                                            OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityTargetData_SingleTargetHit
/// Size: 0x00E8 (0x000008 - 0x0000F0)
class FGameplayAbilityTargetData_SingleTargetHit : public FGameplayAbilityTargetData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FHitResult)                                HitResult                                                   OFFSET(getStruct<T>, {0x8, 224, 0, 0})
	DMember(bool)                                      bHitReplaced                                                OFFSET(get<bool>, {0xE8, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityActorInfo
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameplayAbilityActorInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<AActor*>)                   OwnerActor                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   AvatarActor                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<APlayerController*>)        PlayerController                                            OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<UAbilitySystemComponent*>)  AbilitySystemComponent                                      OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   SkeletalMeshComponent                                       OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimInstance*>)            AnimInstance                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TWeakObjectPtr<UMovementComponent*>)       MovementComponent                                           OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FName)                                     AffectedAnimInstanceTag                                     OFFSET(getStruct<T>, {0x40, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.AbilityEndedData
/// Size: 0x0010 (0x000000 - 0x000010)
class FAbilityEndedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UGameplayAbility*)                         AbilityThatEnded                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                AbilitySpecHandle                                           OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	DMember(bool)                                      bReplicateEndAbility                                        OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bWasCancelled                                               OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.AbilityTaskDebugMessage
/// Size: 0x0018 (0x000000 - 0x000018)
class FAbilityTaskDebugMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UGameplayTask*)                            FromTask                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   Message                                                     OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilitySpecHandleAndPredictionKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FGameplayAbilitySpecHandleAndPredictionKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FGameplayAbilitySpecHandle)                AbilityHandle                                               OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   PredictionKeyAtCreation                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxy
/// Size: 0x02D0 (0x000000 - 0x0002D0)
class FMinimalGameplayCueReplicationProxy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	CMember(UAbilitySystemComponent*)                  Owner                                                       OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueObjectLibrary
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayCueObjectLibrary : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FString>)                           Paths                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(UObjectLibrary*)                           ActorObjectLibrary                                          OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UObjectLibrary*)                           StaticObjectLibrary                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UGameplayCueSet*)                          CueSet                                                      OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bShouldSyncScan                                             OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      bShouldAsyncLoad                                            OFFSET(get<bool>, {0x4D, 1, 0, 0})
	DMember(bool)                                      bShouldSyncLoad                                             OFFSET(get<bool>, {0x4E, 1, 0, 0})
	DMember(bool)                                      bHasBeenInitialized                                         OFFSET(get<bool>, {0x4F, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SpawnCondition
/// Size: 0x0038 (0x000000 - 0x000038)
class FGameplayCueNotify_SpawnCondition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(EGameplayCueNotify_LocallyControlledSource) LocallyControlledSource                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EGameplayCueNotify_LocallyControlledPolicy) LocallyControlledPolicy                                    OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     ChanceToPlay                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TArray<TEnumAsByte>)                       AllowedSurfaceTypes                                         OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<TEnumAsByte>)                       RejectedSurfaceTypes                                        OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_PlacementInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FGameplayCueNotify_PlacementInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EGameplayCueNotify_AttachPolicy)           AttachPolicy                                                OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EAttachmentRule)                           AttachmentRule                                              OFFSET(get<T>, {0x5, 1, 0, 0})
	DMember(bool)                                      bOverrideRotation                                           OFFSET(get<bool>, {0x8, 1, 1, 0})
	DMember(bool)                                      bOverrideScale                                              OFFSET(get<bool>, {0x8, 1, 1, 1})
	SMember(FRotator)                                  RotationOverride                                            OFFSET(getStruct<T>, {0x10, 24, 0, 0})
	SMember(FVector)                                   ScaleOverride                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SpawnResult
/// Size: 0x0058 (0x000000 - 0x000058)
class FGameplayCueNotify_SpawnResult : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<UFXSystemComponent*>)               FxSystemComponents                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<UAudioComponent*>)                  AudioComponents                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<UCameraShakeBase*>)                 CameraShakes                                                OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<TScriptInterface>)                  CameraLensEffects                                           OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UForceFeedbackComponent*)                  ForceFeedbackComponent                                      OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(APlayerController*)                        ForceFeedbackTargetPC                                       OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UDecalComponent*)                          DecalComponent                                              OFFSET(get<T>, {0x50, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_ParticleInfo
/// Size: 0x0088 (0x000000 - 0x000088)
class FGameplayCueNotify_ParticleInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	CMember(UNiagaraSystem*)                           NiagaraSystem                                               OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      OFFSET(get<bool>, {0x80, 1, 1, 1})
	DMember(bool)                                      bCastShadow                                                 OFFSET(get<bool>, {0x80, 1, 1, 2})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SoundParameterInterfaceInfo
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayCueNotify_SoundParameterInterfaceInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     StopTriggerName                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_SoundInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FGameplayCueNotify_SoundInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	CMember(USoundBase*)                               sound                                                       OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(USoundBase*)                               SoundCue                                                    OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(float)                                     LoopingFadeOutDuration                                      OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     LoopingFadeVolumeLevel                                      OFFSET(get<float>, {0x8C, 4, 0, 0})
	SMember(FGameplayCueNotify_SoundParameterInterfaceInfo) SoundParameterInterfaceInfo                            OFFSET(getStruct<T>, {0x90, 4, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     OFFSET(get<bool>, {0x94, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      OFFSET(get<bool>, {0x94, 1, 1, 1})
	DMember(bool)                                      bUseSoundParameterInterface                                 OFFSET(get<bool>, {0x94, 1, 1, 2})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_CameraShakeInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FGameplayCueNotify_CameraShakeInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	CMember(UClass*)                                   CameraShake                                                 OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(float)                                     ShakeScale                                                  OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(EGameplayCueNotify_EffectPlaySpace)        Playspace                                                   OFFSET(get<T>, {0x84, 1, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     OFFSET(get<bool>, {0x88, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      OFFSET(get<bool>, {0x88, 1, 1, 1})
	DMember(bool)                                      bPlayInWorld                                                OFFSET(get<bool>, {0x88, 1, 1, 2})
	DMember(float)                                     WorldInnerRadius                                            OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     WorldOuterRadius                                            OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(float)                                     WorldFalloffExponent                                        OFFSET(get<float>, {0x94, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_CameraLensEffectInfo
/// Size: 0x0090 (0x000000 - 0x000090)
class FGameplayCueNotify_CameraLensEffectInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	CMember(UClass*)                                   CameraLensEffect                                            OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     OFFSET(get<bool>, {0x80, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      OFFSET(get<bool>, {0x80, 1, 1, 1})
	DMember(bool)                                      bPlayInWorld                                                OFFSET(get<bool>, {0x80, 1, 1, 2})
	DMember(float)                                     WorldInnerRadius                                            OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     WorldOuterRadius                                            OFFSET(get<float>, {0x88, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_ForceFeedbackInfo
/// Size: 0x0098 (0x000000 - 0x000098)
class FGameplayCueNotify_ForceFeedbackInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	CMember(UForceFeedbackEffect*)                     ForceFeedbackEffect                                         OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FName)                                     ForceFeedbackTag                                            OFFSET(getStruct<T>, {0x80, 4, 0, 0})
	DMember(bool)                                      bIsLooping                                                  OFFSET(get<bool>, {0x84, 1, 1, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     OFFSET(get<bool>, {0x84, 1, 1, 1})
	DMember(bool)                                      bOverridePlacementInfo                                      OFFSET(get<bool>, {0x84, 1, 1, 2})
	DMember(bool)                                      bPlayInWorld                                                OFFSET(get<bool>, {0x84, 1, 1, 3})
	DMember(float)                                     WorldIntensity                                              OFFSET(get<float>, {0x88, 4, 0, 0})
	CMember(UForceFeedbackAttenuation*)                WorldAttenuation                                            OFFSET(get<T>, {0x90, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_InputDevicePropertyInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayCueNotify_InputDevicePropertyInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UClass*>)                           DeviceProperties                                            OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_DecalInfo
/// Size: 0x00A8 (0x000000 - 0x0000A8)
class FGameplayCueNotify_DecalInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FGameplayCueNotify_SpawnCondition)         SpawnConditionOverride                                      OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	SMember(FGameplayCueNotify_PlacementInfo)          PlacementInfoOverride                                       OFFSET(getStruct<T>, {0x38, 64, 0, 0})
	CMember(UMaterialInterface*)                       DecalMaterial                                               OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FVector)                                   DecalSize                                                   OFFSET(getStruct<T>, {0x80, 24, 0, 0})
	DMember(bool)                                      bOverrideSpawnCondition                                     OFFSET(get<bool>, {0x98, 1, 1, 0})
	DMember(bool)                                      bOverridePlacementInfo                                      OFFSET(get<bool>, {0x98, 1, 1, 1})
	DMember(bool)                                      bOverrideFadeOut                                            OFFSET(get<bool>, {0x98, 1, 1, 2})
	DMember(float)                                     FadeOutStartDelay                                           OFFSET(get<float>, {0x9C, 4, 0, 0})
	DMember(float)                                     FadeOutDuration                                             OFFSET(get<float>, {0xA0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_BurstEffects
/// Size: 0x0298 (0x000000 - 0x000298)
class FGameplayCueNotify_BurstEffects : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(TArray<FGameplayCueNotify_ParticleInfo>)   BurstParticles                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGameplayCueNotify_SoundInfo>)      BurstSounds                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGameplayCueNotify_CameraShakeInfo)        BurstCameraShake                                            OFFSET(getStruct<T>, {0x20, 152, 0, 0})
	SMember(FGameplayCueNotify_CameraLensEffectInfo)   BurstCameraLensEffect                                       OFFSET(getStruct<T>, {0xB8, 144, 0, 0})
	SMember(FGameplayCueNotify_ForceFeedbackInfo)      BurstForceFeedback                                          OFFSET(getStruct<T>, {0x148, 152, 0, 0})
	SMember(FGameplayCueNotify_InputDevicePropertyInfo) BurstDevicePropertyEffect                                  OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
	SMember(FGameplayCueNotify_DecalInfo)              BurstDecal                                                  OFFSET(getStruct<T>, {0x1F0, 168, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotify_LoopingEffects
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FGameplayCueNotify_LoopingEffects : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	CMember(TArray<FGameplayCueNotify_ParticleInfo>)   LoopingParticles                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGameplayCueNotify_SoundInfo>)      LoopingSounds                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGameplayCueNotify_CameraShakeInfo)        LoopingCameraShake                                          OFFSET(getStruct<T>, {0x20, 152, 0, 0})
	SMember(FGameplayCueNotify_CameraLensEffectInfo)   LoopingCameraLensEffect                                     OFFSET(getStruct<T>, {0xB8, 144, 0, 0})
	SMember(FGameplayCueNotify_ForceFeedbackInfo)      LoopingForceFeedback                                        OFFSET(getStruct<T>, {0x148, 152, 0, 0})
	SMember(FGameplayCueNotify_InputDevicePropertyInfo) LoopingInputDevicePropertyEffect                           OFFSET(getStruct<T>, {0x1E0, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueNotifyData
/// Size: 0x0030 (0x000000 - 0x000030)
class FGameplayCueNotifyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FGameplayTag)                              GameplayCueTag                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FSoftObjectPath)                           GameplayCueNotifyObj                                        OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	CMember(UClass*)                                   LoadedGameplayCueClass                                      OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNodeIndex
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayCueTranslatorNodeIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationLink
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayCueTranslationLink : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UGameplayCueTranslator*)                   RulesCDO                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslatorNode
/// Size: 0x0070 (0x000000 - 0x000070)
class FGameplayCueTranslatorNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FGameplayCueTranslationLink>)       Links                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayCueTranslatorNodeIndex)           CachedIndex                                                 OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FGameplayTag)                              CachedGameplayTag                                           OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     CachedGameplayTagName                                       OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayCueTranslationManager
/// Size: 0x0080 (0x000000 - 0x000080)
class FGameplayCueTranslationManager : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TArray<FGameplayCueTranslatorNode>)        TranslationLUT                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, FGameplayCueTranslatorNodeIndex>) TranslationNameToIndexMap                                OFFSET(get<T>, {0x10, 80, 0, 0})
	CMember(UGameplayTagsManager*)                     TagManager                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.AttributeBasedFloat
/// Size: 0x0110 (0x000000 - 0x000110)
class FAttributeBasedFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FScalableFloat)                            Coefficient                                                 OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FScalableFloat)                            PreMultiplyAdditiveValue                                    OFFSET(getStruct<T>, {0x28, 40, 0, 0})
	SMember(FScalableFloat)                            PostMultiplyAdditiveValue                                   OFFSET(getStruct<T>, {0x50, 40, 0, 0})
	SMember(FGameplayEffectAttributeCaptureDefinition) BackingAttribute                                            OFFSET(getStruct<T>, {0x78, 64, 0, 0})
	SMember(FCurveTableRowHandle)                      AttributeCurve                                              OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	CMember(EAttributeBasedFloatCalculationType)       AttributeCalculationType                                    OFFSET(get<T>, {0xC8, 1, 0, 0})
	CMember(EGameplayModEvaluationChannel)             FinalChannel                                                OFFSET(get<T>, {0xC9, 1, 0, 0})
	SMember(FGameplayTagContainer)                     SourceTagFilter                                             OFFSET(getStruct<T>, {0xD0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TargetTagFilter                                             OFFSET(getStruct<T>, {0xF0, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.CustomCalculationBasedFloat
/// Size: 0x0090 (0x000000 - 0x000090)
class FCustomCalculationBasedFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UClass*)                                   CalculationClassMagnitude                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FScalableFloat)                            Coefficient                                                 OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FScalableFloat)                            PreMultiplyAdditiveValue                                    OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	SMember(FScalableFloat)                            PostMultiplyAdditiveValue                                   OFFSET(getStruct<T>, {0x58, 40, 0, 0})
	SMember(FCurveTableRowHandle)                      FinalLookupCurve                                            OFFSET(getStruct<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.SetByCallerFloat
/// Size: 0x0008 (0x000000 - 0x000008)
class FSetByCallerFloat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     DataName                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              DataTag                                                     OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectModifierMagnitude
/// Size: 0x01D8 (0x000000 - 0x0001D8)
class FGameplayEffectModifierMagnitude : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 472;

public:
	CMember(EGameplayEffectMagnitudeCalculation)       MagnitudeCalculationType                                    OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FScalableFloat)                            ScalableFloatMagnitude                                      OFFSET(getStruct<T>, {0x8, 40, 0, 0})
	SMember(FAttributeBasedFloat)                      AttributeBasedMagnitude                                     OFFSET(getStruct<T>, {0x30, 272, 0, 0})
	SMember(FCustomCalculationBasedFloat)              CustomMagnitude                                             OFFSET(getStruct<T>, {0x140, 144, 0, 0})
	SMember(FSetByCallerFloat)                         SetByCallerMagnitude                                        OFFSET(getStruct<T>, {0x1D0, 8, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionScopedModifierInfo
/// Size: 0x0338 (0x000000 - 0x000338)
class FGameplayEffectExecutionScopedModifierInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
	SMember(FGameplayEffectAttributeCaptureDefinition) CapturedAttribute                                           OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	SMember(FGameplayTag)                              TransientAggregatorIdentifier                               OFFSET(getStruct<T>, {0x40, 4, 0, 0})
	CMember(EGameplayEffectScopedModifierAggregatorType) AggregatorType                                            OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TEnumAsByte<EGameplayModOp>)               ModifierOp                                                  OFFSET(get<T>, {0x45, 1, 0, 0})
	SMember(FGameplayEffectModifierMagnitude)          ModifierMagnitude                                           OFFSET(getStruct<T>, {0x48, 472, 0, 0})
	SMember(FGameplayModEvaluationChannelSettings)     EvaluationChannelSettings                                   OFFSET(getStruct<T>, {0x220, 1, 0, 0})
	SMember(FGameplayTagRequirements)                  SourceTags                                                  OFFSET(getStruct<T>, {0x228, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  TargetTags                                                  OFFSET(getStruct<T>, {0x2B0, 136, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayModEvaluationChannelSettings
/// Size: 0x0001 (0x000000 - 0x000001)
class FGameplayModEvaluationChannelSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	CMember(EGameplayModEvaluationChannel)             Channel                                                     OFFSET(get<T>, {0x0, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.ConditionalGameplayEffect
/// Size: 0x0028 (0x000000 - 0x000028)
class FConditionalGameplayEffect : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UClass*)                                   EffectClass                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     RequiredSourceTags                                          OFFSET(getStruct<T>, {0x8, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectExecutionDefinition
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameplayEffectExecutionDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UClass*)                                   CalculationClass                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     PassedInTags                                                OFFSET(getStruct<T>, {0x8, 32, 0, 0})
	CMember(TArray<FGameplayEffectExecutionScopedModifierInfo>) CalculationModifiers                               OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FConditionalGameplayEffect>)        ConditionalGameplayEffects                                  OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayModifierInfo
/// Size: 0x0330 (0x000000 - 0x000330)
class FGameplayModifierInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	CMember(TEnumAsByte<EGameplayModOp>)               ModifierOp                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FGameplayEffectModifierMagnitude)          ModifierMagnitude                                           OFFSET(getStruct<T>, {0x40, 472, 0, 0})
	SMember(FGameplayModEvaluationChannelSettings)     EvaluationChannelSettings                                   OFFSET(getStruct<T>, {0x218, 1, 0, 0})
	SMember(FGameplayTagRequirements)                  SourceTags                                                  OFFSET(getStruct<T>, {0x220, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  TargetTags                                                  OFFSET(getStruct<T>, {0x2A8, 136, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectCue
/// Size: 0x0060 (0x000000 - 0x000060)
class FGameplayEffectCue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayAttribute)                        MagnitudeAttribute                                          OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	DMember(float)                                     MinLevel                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxLevel                                                    OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayCueTags                                             OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.InheritedTagContainer
/// Size: 0x0060 (0x000000 - 0x000060)
class FInheritedTagContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FGameplayTagContainer)                     CombinedTags                                                OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     Added                                                       OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FGameplayTagContainer)                     Removed                                                     OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/GameplayAbilities.ActiveGameplayEffectQuery
/// Size: 0x0088 (0x000000 - 0x000088)
class FActiveGameplayEffectQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectVersion
/// Size: 0x0001 (0x000000 - 0x000001)
class FGameplayEffectVersion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionParameters
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FGameplayEffectCustomExecutionParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectCustomExecutionOutput
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayEffectCustomExecutionOutput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FGameplayModifierEvaluatedData>)    OutputModifiers                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bTriggerConditionalGameplayEffects                          OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bHandledStackCountManually                                  OFFSET(get<bool>, {0x10, 1, 1, 1})
	DMember(bool)                                      bHandledGameplayCuesManually                                OFFSET(get<bool>, {0x10, 1, 1, 2})
};

/// Struct /Script/GameplayAbilities.GameplayModifierEvaluatedData
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayModifierEvaluatedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayAttribute)                        Attribute                                                   OFFSET(getStruct<T>, {0x0, 56, 0, 0})
	CMember(TEnumAsByte<EGameplayModOp>)               ModifierOp                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(float)                                     Magnitude                                                   OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FActiveGameplayEffectHandle)               Handle                                                      OFFSET(getStruct<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      IsValid                                                     OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayEffectContext
/// Size: 0x0080 (0x000000 - 0x000080)
class FGameplayEffectContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TWeakObjectPtr<AActor*>)                   Instigator                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   EffectCauser                                                OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(TWeakObjectPtr<UGameplayAbility*>)         AbilityCDO                                                  OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(TWeakObjectPtr<UGameplayAbility*>)         AbilityInstanceNotReplicated                                OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(int32_t)                                   AbilityLevel                                                OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  SourceObject                                                OFFSET(get<T>, {0x2C, 8, 0, 0})
	CMember(TWeakObjectPtr<UAbilitySystemComponent*>)  InstigatorAbilitySystemComponent                            OFFSET(get<T>, {0x34, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Actors                                                      OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FVector)                                   WorldOrigin                                                 OFFSET(getStruct<T>, {0x60, 24, 0, 0})
	DMember(bool)                                      bHasWorldOrigin                                             OFFSET(get<bool>, {0x78, 1, 1, 0})
	DMember(bool)                                      bReplicateSourceObject                                      OFFSET(get<bool>, {0x78, 1, 1, 1})
	DMember(bool)                                      bReplicateInstigator                                        OFFSET(get<bool>, {0x78, 1, 1, 2})
	DMember(bool)                                      bReplicateEffectCauser                                      OFFSET(get<bool>, {0x78, 1, 1, 3})
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMapping
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameplayTagBlueprintPropertyMapping : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTag)                              TagToMap                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FGuid)                                     PropertyGuid                                                OFFSET(getStruct<T>, {0x2C, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTagBlueprintPropertyMap
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTagBlueprintPropertyMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGameplayTagBlueprintPropertyMapping>) PropertyMappings                                         OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTagReponsePair
/// Size: 0x0028 (0x000000 - 0x000028)
class FGameplayTagReponsePair : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTag)                              tag                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(UClass*)                                   ResponseGameplayEffect                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<UClass*>)                           ResponseGameplayEffects                                     OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   SoftCountCap                                                OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayTagResponseTableEntry
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayTagResponseTableEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagReponsePair)                   Positive                                                    OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	SMember(FGameplayTagReponsePair)                   Negative                                                    OFFSET(getStruct<T>, {0x28, 40, 0, 0})
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueKey
/// Size: 0x0088 (0x000000 - 0x000088)
class FMovieSceneGameplayCueKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayCueTag)                           Cue                                                         OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x20, 24, 0, 0})
	SMember(FName)                                     AttachSocketName                                            OFFSET(getStruct<T>, {0x38, 4, 0, 0})
	DMember(float)                                     NormalizedMagnitude                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FMovieSceneObjectBindingID)                Instigator                                                  OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	SMember(FMovieSceneObjectBindingID)                EffectCauser                                                OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	CMember(UPhysicalMaterial*)                        PhysicalMaterial                                            OFFSET(get<T>, {0x70, 8, 0, 0})
	DMember(int32_t)                                   GameplayEffectLevel                                         OFFSET(get<int32_t>, {0x78, 4, 0, 0})
	DMember(int32_t)                                   AbilityLevel                                                OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bAttachToBinding                                            OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Struct /Script/GameplayAbilities.MovieSceneGameplayCueChannel
/// Size: 0x00A8 (0x000050 - 0x0000F8)
class FMovieSceneGameplayCueChannel : public FMovieSceneChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FMovieSceneGameplayCueKey>)         KeyValues                                                   OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Struct /Script/GameplayAbilities.GameplayAbilityRepAnimMontageNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGameplayAbilityRepAnimMontageNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextHandleNetSerializerConfig
/// Size: 0x0000 (0x000028 - 0x000028)
class FGameplayEffectContextHandleNetSerializerConfig : public FPolymorphicStructNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/GameplayAbilities.GameplayEffectContextNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGameplayEffectContextNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.MinimalGameplayCueReplicationProxyNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FMinimalGameplayCueReplicationProxyNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.MinimalReplicationTagCountMapNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FMinimalReplicationTagCountMapNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayAbilities.PredictionKeyNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FPredictionKeyNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
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

