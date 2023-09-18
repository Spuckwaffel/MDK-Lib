/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package AnimationSharing.

/// Struct /Script/AnimationSharing.AnimationSetup
/// Size: 0x0018 (0x000000 - 0x000018)
class FAnimationSetup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UAnimSequence*)                            AnimSequence                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   AnimBlueprint                                               ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FPerPlatformInt)                           NumRandomizedInstances                                      ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FPerPlatformBool)                          Enabled                                                     ___ OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/AnimationSharing.AnimationStateEntry
/// Size: 0x0030 (0x000000 - 0x000030)
class FAnimationStateEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(char)                                      State                                                       ___ OFFSET(get<char>, {0x0, 1, 0, 0})
	CMember(TArray<FAnimationSetup>)                   AnimationSetups                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bOnDemand                                                   ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bAdditive                                                   ___ OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(float)                                     BlendTime                                                   ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bReturnToPreviousState                                      ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	DMember(bool)                                      bSetNextState                                               ___ OFFSET(get<bool>, {0x21, 1, 0, 0})
	DMember(char)                                      NextState                                                   ___ OFFSET(get<char>, {0x22, 1, 0, 0})
	SMember(FPerPlatformInt)                           MaximumNumberOfConcurrentInstances                          ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	DMember(float)                                     WiggleTimePercentage                                        ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(bool)                                      bRequiresCurves                                             ___ OFFSET(get<bool>, {0x2C, 1, 0, 0})
};

/// Struct /Script/AnimationSharing.PerSkeletonAnimationSharingSetup
/// Size: 0x0038 (0x000000 - 0x000038)
class FPerSkeletonAnimationSharingSetup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(USkeleton*)                                Skeleton                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(USkeletalMesh*)                            SkeletalMesh                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(UClass*)                                   BlendAnimBlueprint                                          ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UClass*)                                   AdditiveAnimBlueprint                                       ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(UClass*)                                   StateProcessorClass                                         ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(TArray<FAnimationStateEntry>)              AnimationStates                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/AnimationSharing.AnimationSharingScalability
/// Size: 0x0010 (0x000000 - 0x000010)
class FAnimationSharingScalability : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPerPlatformBool)                          UseBlendTransitions                                         ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FPerPlatformFloat)                         BlendSignificanceValue                                      ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FPerPlatformInt)                           MaximumNumberConcurrentBlends                               ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FPerPlatformFloat)                         TickSignificanceValue                                       ___ OFFSET(get<T>, {0xC, 4, 0, 0})
};

/// Struct /Script/AnimationSharing.TickAnimationSharingFunction
/// Size: 0x0008 (0x000028 - 0x000030)
class FTickAnimationSharingFunction : public FTickFunction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/AnimationSharing.AnimationSharingStateProcessor
/// Size: 0x0020 (0x000028 - 0x000048)
class UAnimationSharingStateProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UEnum*>)                    AnimationStateEnum                                          ___ OFFSET(get<T>, {0x28, 32, 0, 0})
};

/// Class /Script/AnimationSharing.AnimSharingStateInstance
/// Size: 0x0020 (0x000350 - 0x000370)
class UAnimSharingStateInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	CMember(UAnimSequence*)                            AnimationToPlay                                             ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(float)                                     PermutationTimeOffset                                       ___ OFFSET(get<float>, {0x350, 4, 0, 0})
	DMember(float)                                     PlayRate                                                    ___ OFFSET(get<float>, {0x354, 4, 0, 0})
	DMember(bool)                                      bStateBool                                                  ___ OFFSET(get<bool>, {0x358, 1, 0, 0})
	CMember(UAnimSharingInstance*)                     Instance                                                    ___ OFFSET(get<T>, {0x360, 8, 0, 0})
};

/// Class /Script/AnimationSharing.AnimSharingTransitionInstance
/// Size: 0x0010 (0x000350 - 0x000360)
class UAnimSharingTransitionInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   FromComponent                                               ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   ToComponent                                                 ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(float)                                     BlendTime                                                   ___ OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(bool)                                      bBlendBool                                                  ___ OFFSET(get<bool>, {0x35C, 1, 0, 0})
};

/// Class /Script/AnimationSharing.AnimSharingAdditiveInstance
/// Size: 0x0010 (0x000350 - 0x000360)
class UAnimSharingAdditiveInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   BaseComponent                                               ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimSequence*>)            AdditiveAnimation                                           ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	DMember(float)                                     Alpha                                                       ___ OFFSET(get<float>, {0x358, 4, 0, 0})
	DMember(bool)                                      bStateBool                                                  ___ OFFSET(get<bool>, {0x35C, 1, 0, 0})
};

/// Class /Script/AnimationSharing.AnimSharingInstance
/// Size: 0x00F8 (0x000028 - 0x000120)
class UAnimSharingInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<AActor*>)                           RegisteredActors                                            ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UAnimationSharingStateProcessor*)          StateProcessor                                              ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(TArray<UAnimSequence*>)                    UsedAnimationSequences                                      ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(UEnum*)                                    StateEnum                                                   ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(AActor*)                                   SharingActor                                                ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Class /Script/AnimationSharing.AnimationSharingManager
/// Size: 0x0060 (0x000028 - 0x000088)
class UAnimationSharingManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<USkeleton*>)                        Skeletons                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<UAnimSharingInstance*>)             PerSkeletonData                                             ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/AnimationSharing.AnimationSharingSetup
/// Size: 0x0020 (0x000028 - 0x000048)
class UAnimationSharingSetup : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FPerSkeletonAnimationSharingSetup>) SkeletonSetups                                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FAnimationSharingScalability)              ScalabilitySettings                                         ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

