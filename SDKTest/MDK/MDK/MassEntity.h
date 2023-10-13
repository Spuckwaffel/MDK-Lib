
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/MassEntity.MassModuleSettings
/// Size: 0x0000 (0x000028 - 0x000028)
class UMassModuleSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/MassEntity.MassEntitySettings
/// Size: 0x00E8 (0x000028 - 0x000110)
class UMassEntitySettings : public UMassModuleSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FString)                                   DumpDependencyGraphFileName                                 OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FMassProcessingPhaseConfig)                ProcessingPhasesConfig                                      OFFSET(getStruct<T>, {0x38, 192, 0, 0})
	CMember(TArray<UMassProcessor*>)                   ProcessorCDOs                                               OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Class /Script/MassEntity.MassEntitySubsystem
/// Size: 0x0010 (0x000030 - 0x000040)
class UMassEntitySubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/MassEntity.MassProcessor
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UMassProcessor : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(int32_t)                                   ExecutionFlags                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	CMember(EMassProcessingPhase)                      ProcessingPhase                                             OFFSET(get<T>, {0x2C, 1, 0, 0})
	SMember(FMassProcessorExecutionOrder)              ExecutionOrder                                              OFFSET(getStruct<T>, {0x30, 40, 0, 0})
	DMember(bool)                                      bAutoRegisterWithProcessingPhases                           OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bRequiresGameThreadExecution                                OFFSET(get<bool>, {0x5B, 1, 0, 0})
};

/// Class /Script/MassEntity.MassObserverProcessor
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class UMassObserverProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(bool)                                      bAutoRegisterWithObserverRegistry                           OFFSET(get<bool>, {0xB8, 1, 0, 0})
	CMember(UScriptStruct*)                            ObservedType                                                OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/MassEntity.MassObserverRegistry
/// Size: 0x0140 (0x000028 - 0x000168)
class UMassObserverRegistry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:
	SMember(FMassEntityObserverClassesMap)             FragmentObservers                                           OFFSET(getStruct<T>, {0x28, 160, 0, 0})
	SMember(FMassEntityObserverClassesMap)             TagObservers                                                OFFSET(getStruct<T>, {0xC8, 160, 0, 0})
};

/// Class /Script/MassEntity.MassCompositeProcessor
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UMassCompositeProcessor : public UMassProcessor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FMassRuntimePipeline)                      ChildPipeline                                               OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FName)                                     GroupName                                                   OFFSET(getStruct<T>, {0xC8, 4, 0, 0})
};

/// Class /Script/MassEntity.MassSettings
/// Size: 0x0050 (0x000030 - 0x000080)
class UMassSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FName, UMassModuleSettings*>)         ModuleSettings                                              OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/MassEntity.MassFragmentRequirements
/// Size: 0x01E8 (0x000000 - 0x0001E8)
class FMassFragmentRequirements : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
};

/// Struct /Script/MassEntity.MassEntityQuery
/// Size: 0x00B8 (0x0001E8 - 0x0002A0)
class FMassEntityQuery : public FMassFragmentRequirements
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
};

/// Struct /Script/MassEntity.MassFragment
/// Size: 0x0001 (0x000000 - 0x000001)
class FMassFragment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassEntity.MassTag
/// Size: 0x0001 (0x000000 - 0x000001)
class FMassTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassEntity.MassChunkFragment
/// Size: 0x0001 (0x000000 - 0x000001)
class FMassChunkFragment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassEntity.MassSharedFragment
/// Size: 0x0001 (0x000000 - 0x000001)
class FMassSharedFragment : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassEntity.MassEntityHandle
/// Size: 0x0008 (0x000000 - 0x000008)
class FMassEntityHandle : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SerialNumber                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/MassEntity.MassEntityView
/// Size: 0x0020 (0x000000 - 0x000020)
class FMassEntityView : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/MassEntity.MassObserversMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FMassObserversMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<UScriptStruct*, FMassRuntimePipeline>) Container                                                  OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/MassEntity.MassRuntimePipeline
/// Size: 0x0010 (0x000000 - 0x000010)
class FMassRuntimePipeline : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UMassProcessor*>)                   Processors                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MassEntity.MassObserverManager
/// Size: 0x01C8 (0x000000 - 0x0001C8)
class FMassObserverManager : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 456;

public:
	SMember(FMassObserversMap)                         FragmentObservers                                           OFFSET(getStruct<T>, {0x80, 160, 0, 0})
	SMember(FMassObserversMap)                         TagObservers                                                OFFSET(getStruct<T>, {0x120, 160, 0, 0})
};

/// Struct /Script/MassEntity.MassProcessorClassCollection
/// Size: 0x0010 (0x000000 - 0x000010)
class FMassProcessorClassCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UClass*>)                           ClassCollection                                             OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/MassEntity.MassEntityObserverClassesMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FMassEntityObserverClassesMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<UScriptStruct*, FMassProcessorClassCollection>) Container                                         OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/MassEntity.MassProcessingPhaseConfig
/// Size: 0x0020 (0x000000 - 0x000020)
class FMassProcessingPhaseConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     PhaseName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(UClass*)                                   PhaseGroupClass                                             OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<UMassProcessor*>)                   ProcessorCDOs                                               OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/MassEntity.ProcessorAuxDataBase
/// Size: 0x0001 (0x000000 - 0x000001)
class FProcessorAuxDataBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/MassEntity.MassProcessingContext
/// Size: 0x0040 (0x000000 - 0x000040)
class FMassProcessingContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     DeltaSeconds                                                OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FInstancedStruct)                          AuxData                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bFlushCommandBuffer                                         OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/MassEntity.MassProcessorExecutionOrder
/// Size: 0x0028 (0x000000 - 0x000028)
class FMassProcessorExecutionOrder : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     ExecuteInGroup                                              OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<FName>)                             ExecuteBefore                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FName>)                             ExecuteAfter                                                OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/MassEntity.MassSubsystemRequirements
/// Size: 0x0048 (0x000000 - 0x000048)
class FMassSubsystemRequirements : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Enum /Script/MassEntity.EMassCommandOperationType
/// Size: 0x08
enum EMassCommandOperationType : uint8_t
{
	EMassCommandOperationType__None0                                                 = 0,
	EMassCommandOperationType__Create1                                               = 1,
	EMassCommandOperationType__Add2                                                  = 2,
	EMassCommandOperationType__Remove3                                               = 3,
	EMassCommandOperationType__ChangeComposition4                                    = 4,
	EMassCommandOperationType__Set5                                                  = 5,
	EMassCommandOperationType__Destroy6                                              = 6,
	EMassCommandOperationType__MAX7                                                  = 7
};

/// Enum /Script/MassEntity.EMassObservedOperation
/// Size: 0x03
enum EMassObservedOperation : uint8_t
{
	EMassObservedOperation__Add0                                                     = 0,
	EMassObservedOperation__Remove1                                                  = 1,
	EMassObservedOperation__MAX2                                                     = 2
};

/// Enum /Script/MassEntity.EProcessorExecutionFlags
/// Size: 0x08
enum EProcessorExecutionFlags : uint8_t
{
	EProcessorExecutionFlags__None0                                                  = 0,
	EProcessorExecutionFlags__Standalone1                                            = 1,
	EProcessorExecutionFlags__Server2                                                = 2,
	EProcessorExecutionFlags__Client3                                                = 4,
	EProcessorExecutionFlags__Editor4                                                = 8,
	EProcessorExecutionFlags__AllNetModes5                                           = 7,
	EProcessorExecutionFlags__All6                                                   = 15,
	EProcessorExecutionFlags__EProcessorExecutionFlags_MAX7                          = 16
};

/// Enum /Script/MassEntity.EMassProcessingPhase
/// Size: 0x07
enum EMassProcessingPhase : uint8_t
{
	EMassProcessingPhase__PrePhysics0                                                = 0,
	EMassProcessingPhase__StartPhysics1                                              = 1,
	EMassProcessingPhase__DuringPhysics2                                             = 2,
	EMassProcessingPhase__EndPhysics3                                                = 3,
	EMassProcessingPhase__PostPhysics4                                               = 4,
	EMassProcessingPhase__FrameEnd5                                                  = 5,
	EMassProcessingPhase__MAX6                                                       = 6
};

/// Enum /Script/MassEntity.EMassFragmentAccess
/// Size: 0x04
enum EMassFragmentAccess : uint8_t
{
	EMassFragmentAccess__None0                                                       = 0,
	EMassFragmentAccess__ReadOnly1                                                   = 1,
	EMassFragmentAccess__ReadWrite2                                                  = 2,
	EMassFragmentAccess__MAX3                                                        = 3
};

/// Enum /Script/MassEntity.EMassFragmentPresence
/// Size: 0x05
enum EMassFragmentPresence : uint8_t
{
	EMassFragmentPresence__All0                                                      = 0,
	EMassFragmentPresence__Any1                                                      = 1,
	EMassFragmentPresence__None2                                                     = 2,
	EMassFragmentPresence__Optional3                                                 = 3,
	EMassFragmentPresence__MAX4                                                      = 4
};

