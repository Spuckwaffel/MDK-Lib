/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package GameplayBehaviorsModule.

/// Struct /Script/GameplayBehaviorsModule.AgentGameplayBehaviors
/// Size: 0x0010 (0x000000 - 0x000010)
class FAgentGameplayBehaviors : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UGameplayBehavior*>)                Behaviors                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayBehaviorsModule.MontagePlaybackData
/// Size: 0x0040 (0x000000 - 0x000040)
class FMontagePlaybackData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(AActor*)                                   Avatar                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UAnimMontage*)                             AnimMontage                                                 ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UAbilitySystemComponent*)                  AbilityComponent                                            ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.BTDecorator_GameplayTagQuery
/// Size: 0x0080 (0x000068 - 0x0000E8)
class UBTDecorator_GameplayTagQuery : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FBlackboardKeySelector)                    ActorForGameplayTagQuery                                    ___ OFFSET(get<T>, {0x68, 40, 0, 0})
	SMember(FGameplayTagQuery)                         GameplayTagQuery                                            ___ OFFSET(get<T>, {0x90, 72, 0, 0})
	CMember(TArray<FGameplayTag>)                      QueryTags                                                   ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.BTTask_StopGameplayBehavior
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_StopGameplayBehavior : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UClass*)                                   BehaviorToStop                                              ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameplayBehaviorConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UClass*)                                   BehaviorClass                                               ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
/// Size: 0x0028 (0x000030 - 0x000058)
class UGameplayBehaviorConfig_BehaviorTree : public UGameplayBehaviorConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<UBehaviorTree*>)            BehaviorTree                                                ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      bRevertToPreviousBTOnFinish                                 ___ OFFSET(get<bool>, {0x50, 1, 1, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehavior
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameplayBehavior : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTag)                              ActionTag                                                   ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	CMember(TArray<AActor*>)                           RelevantActors                                              ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(AActor*)                                   TransientSmartObjectOwner                                   ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(AActor*)                                   TransientAvatar                                             ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TArray<UGameplayTask*>)                    ActiveTasks                                                 ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UGameplayBehavior_BehaviorTree : public UGameplayBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UBehaviorTree*)                            PreviousBT                                                  ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(AAIController*)                            AIController                                                ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	DMember(bool)                                      bSingleRun                                                  ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.BlackboardKeyType_GameplayTag
/// Size: 0x0000 (0x000030 - 0x000030)
class UBlackboardKeyType_GameplayTag : public UBlackboardKeyType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig_Animation
/// Size: 0x0030 (0x000030 - 0x000060)
class UGameplayBehaviorConfig_Animation : public UGameplayBehaviorConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TWeakObjectPtr<UAnimMontage*>)             AnimMontage                                                 ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FName)                                     StartSectionName                                            ___ OFFSET(get<T>, {0x54, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       ___ OFFSET(get<bool>, {0x58, 1, 1, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorsBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayBehaviorsBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UGameplayBehaviorSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<AActor*, FAgentGameplayBehaviors>)    AgentGameplayBehaviors                                      ___ OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehavior_AnimationBased
/// Size: 0x0010 (0x000088 - 0x000098)
class UGameplayBehavior_AnimationBased : public UGameplayBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FMontagePlaybackData>)              ActivePlayback                                              ___ OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Enum /Script/GameplayBehaviorsModule.EGameplayBehaviorInstantiationPolicy
/// Size: 0x04
enum EGameplayBehaviorInstantiationPolicy : uint8_t
{
	EGameplayBehaviorInstantiationPolicy__Instantiate0                               = 0,
	EGameplayBehaviorInstantiationPolicy__ConditionallyInstantiate1                  = 1,
	EGameplayBehaviorInstantiationPolicy__DontInstantiate2                           = 2,
	EGameplayBehaviorInstantiationPolicy__EGameplayBehaviorInstantiationPolicy_MAX3  = 3
};

