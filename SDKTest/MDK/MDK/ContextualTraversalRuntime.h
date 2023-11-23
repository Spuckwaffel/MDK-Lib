
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: FortniteGame

/// Class /Script/ContextualTraversalRuntime.FortMovementMode_ExtLogicTraversalBase
/// Size: 0x0048 (0x0000C8 - 0x000110)
class UFortMovementMode_ExtLogicTraversalBase : public UFortMovementMode_BaseExtLogic
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(UClass*)                                   CameraMode                                                  OFFSET(get<T>, {0xF0, 8, 0, 0})
	SMember(FGameplayTag)                              CameraModeTag                                               OFFSET(getStruct<T>, {0xF8, 4, 0, 0})
	SMember(FName)                                     MontageStartSectionName                                     OFFSET(getStruct<T>, {0xFC, 4, 0, 0})
	DMember(bool)                                      bUseNextSectionAnimName                                     OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(float)                                     OverrideServerAllowablePositionError                        OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     OverrideAnimBlendOutTimeWhenLanding                         OFFSET(get<float>, {0x108, 4, 0, 0})
};

/// Struct /Script/ContextualTraversalRuntime.FortMovementMode_TraversalBaseRuntimeData
/// Size: 0x00C0 (0x000010 - 0x0000D0)
class FFortMovementMode_TraversalBaseRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(UAnimMontage*)                             AnimMontage                                                 OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     MontageStartSectionName                                     OFFSET(getStruct<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     MontageMiddleSectionName                                    OFFSET(getStruct<T>, {0x1C, 4, 0, 0})
	SMember(FSynchedActionWarpPointInfo_Replicated)    SynchedActionWarpPointInfo                                  OFFSET(getStruct<T>, {0x20, 160, 0, 0})
};

/// Struct /Script/ContextualTraversalRuntime.FortMovementMode_TraversalBaseCreationData
/// Size: 0x0128 (0x000008 - 0x000130)
class FFortMovementMode_TraversalBaseCreationData : public FFortMovementMode_BaseExtCreationData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FSynchedActionInfo)                        SynchedActionInfo                                           OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	SMember(FSynchedActionWarpPointInfo_Replicated)    SynchedActionWarpPointInfo                                  OFFSET(getStruct<T>, {0x40, 160, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0xE0, 24, 0, 0})
	SMember(FRotator)                                  TargetRotation                                              OFFSET(getStruct<T>, {0xF8, 24, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   RefActor                                                    OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(TWeakObjectPtr<UPrimitiveComponent*>)      RefActorComponent                                           OFFSET(get<T>, {0x118, 8, 0, 0})
	SMember(FName)                                     RefActorBoneName                                            OFFSET(getStruct<T>, {0x120, 4, 0, 0})
	CMember(EFortSynchedActionEndMovementMode)         EndMovementMode                                             OFFSET(get<T>, {0x124, 1, 0, 0})
};

