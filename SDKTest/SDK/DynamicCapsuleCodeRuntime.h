/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package DynamicCapsuleCodeRuntime.

/// Struct /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleState
/// Size: 0x0010 (0x000000 - 0x000010)
class FDynamicCapsuleState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     CapsuleRadius                                               ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CapsuleHalfHeight                                           ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(double)                                    RelativeMeshHeight                                          ___ OFFSET(get<double>, {0x8, 8, 0, 0})
};

/// Struct /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FDynamicCapsuleEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              tag                                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FDynamicCapsuleState)                      State                                                       ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Class /Script/DynamicCapsuleCodeRuntime.DynamicCapsuleComponent
/// Size: 0x0050 (0x0000A8 - 0x0000F8)
class UDynamicCapsuleComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FDynamicCapsuleEntry>)              DynamicCapsuleEntryStack                                    ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	SMember(FDynamicCapsuleState)                      ReplicatedCapsuleState                                      ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/DynamicCapsuleCodeRuntime.AnimNotifyState_SetCapsuleSize
/// Size: 0x0018 (0x000030 - 0x000048)
class UAnimNotifyState_SetCapsuleSize : public UAnimNotifyState
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     TargetCapsuleRadius                                         ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     TargetCapsuleHalfHeight                                     ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bAdjustRelativeMeshHeight                                   ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(float)                                     TargetRelativeMeshHeight                                    ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FGameplayTag)                              CapsuleSizeTag                                              ___ OFFSET(get<T>, {0x40, 4, 0, 0})
};

/// Class /Script/DynamicCapsuleCodeRuntime.JumpSlideComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UJumpSlideComponent : public UFortPawnComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

