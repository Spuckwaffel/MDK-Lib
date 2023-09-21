
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AIModule
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GameplayBehaviorsModule.BTDecorator_GameplayTagQuery
/// Size: 0x0080 (0x000068 - 0x0000E8)
class UBTDecorator_GameplayTagQuery : public UBTDecorator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	SMember(FBlackboardKeySelector)                    ActorForGameplayTagQuery                                    OFFSET(get<T>, {0x68, 40, 0, 0})
	SMember(FGameplayTagQuery)                         GameplayTagQuery                                            OFFSET(get<T>, {0x90, 72, 0, 0})
	CMember(TArray<FGameplayTag>)                      QueryTags                                                   OFFSET(get<T>, {0xD8, 16, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.BTTask_StopGameplayBehavior
/// Size: 0x0008 (0x000070 - 0x000078)
class UBTTask_StopGameplayBehavior : public UBTTaskNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(UClass*)                                   BehaviorToStop                                              OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig
/// Size: 0x0008 (0x000028 - 0x000030)
class UGameplayBehaviorConfig : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UClass*)                                   BehaviorClass                                               OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehaviorConfig_BehaviorTree
/// Size: 0x0028 (0x000030 - 0x000058)
class UGameplayBehaviorConfig_BehaviorTree : public UGameplayBehaviorConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TWeakObjectPtr<UBehaviorTree*>)            BehaviorTree                                                OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(bool)                                      bRevertToPreviousBTOnFinish                                 OFFSET(get<bool>, {0x50, 1, 1, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehavior
/// Size: 0x0060 (0x000028 - 0x000088)
class UGameplayBehavior : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGameplayTag)                              ActionTag                                                   OFFSET(get<T>, {0x3C, 4, 0, 0})
	CMember(TArray<AActor*>)                           RelevantActors                                              OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(AActor*)                                   TransientSmartObjectOwner                                   OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(AActor*)                                   TransientAvatar                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(TArray<UGameplayTask*>)                    ActiveTasks                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
};



	/// Functions
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_TriggerBehavior
	// void K2_TriggerBehavior(AActor* Avatar, UGameplayBehaviorConfig* Config, AActor* SmartObjectOwner);                      // [0x7475c10] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredPawn
	// void K2_OnTriggeredPawn(APawn* Avatar, UGameplayBehaviorConfig* Config, AActor* SmartObjectOwner);                       // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggeredCharacter
	// void K2_OnTriggeredCharacter(ACharacter* Avatar, UGameplayBehaviorConfig* Config, AActor* SmartObjectOwner);             // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnTriggered
	// void K2_OnTriggered(AActor* Avatar, UGameplayBehaviorConfig* Config, AActor* SmartObjectOwner);                          // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedPawn
	// void K2_OnFinishedPawn(APawn* Avatar, bool bWasInterrupted);                                                             // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnFinishedCharacter
	// void K2_OnFinishedCharacter(ACharacter* Avatar, bool bWasInterrupted);                                                   // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_OnFinished
	// void K2_OnFinished(AActor* Avatar, bool bWasInterrupted);                                                                // [0x1ebf994] Event|Public|BlueprintEvent 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_GetNextActorIndexInSequence
	// int32_t K2_GetNextActorIndexInSequence(int32_t CurrentIndex);                                                            // [0x7475b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_EndBehavior
	// void K2_EndBehavior(AActor* Avatar);                                                                                     // [0x7475adc] Final|Native|Public|BlueprintCallable 
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior.K2_AbortBehavior
	// void K2_AbortBehavior(AActor* Avatar);                                                                                   // [0x7475a58] Final|Native|Public|BlueprintCallable 
/// Class /Script/GameplayBehaviorsModule.GameplayBehavior_BehaviorTree
/// Size: 0x0020 (0x000088 - 0x0000A8)
class UGameplayBehavior_BehaviorTree : public UGameplayBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(UBehaviorTree*)                            PreviousBT                                                  OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(AAIController*)                            AIController                                                OFFSET(get<T>, {0x90, 8, 0, 0})
	DMember(bool)                                      bSingleRun                                                  OFFSET(get<bool>, {0x98, 1, 0, 0})
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
	CMember(TWeakObjectPtr<UAnimMontage*>)             AnimMontage                                                 OFFSET(get<T>, {0x30, 32, 0, 0})
	DMember(float)                                     PlayRate                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	SMember(FName)                                     StartSectionName                                            OFFSET(get<T>, {0x54, 4, 0, 0})
	DMember(bool)                                      bLoop                                                       OFFSET(get<bool>, {0x58, 1, 1, 0})
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
	CMember(TMap<AActor*, FAgentGameplayBehaviors>)    AgentGameplayBehaviors                                      OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Class /Script/GameplayBehaviorsModule.GameplayBehavior_AnimationBased
/// Size: 0x0010 (0x000088 - 0x000098)
class UGameplayBehavior_AnimationBased : public UGameplayBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FMontagePlaybackData>)              ActivePlayback                                              OFFSET(get<T>, {0x88, 16, 0, 0})
};



	/// Functions
	// Function /Script/GameplayBehaviorsModule.GameplayBehavior_AnimationBased.OnMontageFinished
	// void OnMontageFinished(UAnimMontage* Montage, bool bInterrupted, AActor* InAvatar);                                      // [0x7475d1c] Final|Native|Protected 
/// Struct /Script/GameplayBehaviorsModule.AgentGameplayBehaviors
/// Size: 0x0010 (0x000000 - 0x000010)
class FAgentGameplayBehaviors : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UGameplayBehavior*>)                Behaviors                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayBehaviorsModule.MontagePlaybackData
/// Size: 0x0040 (0x000000 - 0x000040)
class FMontagePlaybackData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(AActor*)                                   Avatar                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UAnimMontage*)                             AnimMontage                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UAbilitySystemComponent*)                  AbilityComponent                                            OFFSET(get<T>, {0x10, 8, 0, 0})
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

