
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_GridProviderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UFortScriptedObjectMovement_GridProviderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_WorldPhaseSite
/// Size: 0x01C8 (0x000290 - 0x000458)
class AFortScriptedObjectMovement_WorldPhaseSite : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	CMember(TArray<FFortScriptedObjectMovementPhaseData>) Phases                                                   ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	SMember(FScalableFloat)                            NumSimulatenousMovingObjects                                ___ OFFSET(get<T>, {0x2A8, 40, 0, 0})
	SMember(FScalableFloat)                            PhaseIntervalSeconds                                        ___ OFFSET(get<T>, {0x2D0, 40, 0, 0})
	SMember(FScriptedObjectMovement_Grid)              BaseGrid                                                    ___ OFFSET(get<T>, {0x318, 200, 0, 0})
	SMember(FScriptedObjectMovement_DynamicPathContext) InProgressPath                                             ___ OFFSET(get<T>, {0x3E0, 56, 0, 0})
	CMember(TArray<UFortScriptedObjectMovement_Slot*>) LeavingSlotStack                                            ___ OFFSET(get<T>, {0x418, 16, 0, 0})
	CMember(TArray<UFortScriptedObjectMovement_Slot*>) DestinationSlotStack                                        ___ OFFSET(get<T>, {0x428, 16, 0, 0})
	CMember(TArray<UFortScriptedObjectMovement_Slot*>) OverflowSlotStack                                           ___ OFFSET(get<T>, {0x438, 16, 0, 0})
	CMember(TArray<AFortScriptedObjectMovement_MovableObjectBase*>) CurrentlyMovingObjects                         ___ OFFSET(get<T>, {0x448, 16, 0, 0})
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_SlotDefinition
/// Size: 0x0010 (0x000030 - 0x000040)
class UFortScriptedObjectMovement_SlotDefinition : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UClass*)                                   ScriptedObjectClass                                         ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     ObjectScale                                                 ___ OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_Slot
/// Size: 0x0020 (0x000620 - 0x000640)
class UFortScriptedObjectMovement_Slot : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1600;

public:
	CMember(UFortScriptedObjectMovement_SlotDefinition*) SlotDefinition                                            ___ OFFSET(get<T>, {0x620, 8, 0, 0})
	DMember(int32_t)                                   ObjectRemoveOrder                                           ___ OFFSET(get<int32_t>, {0x628, 4, 0, 0})
	CMember(AFortScriptedObjectMovement_MovableObjectBase*) SlottedObject                                          ___ OFFSET(get<T>, {0x630, 8, 0, 0})
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_Structure
/// Size: 0x0020 (0x000290 - 0x0002B0)
class AFortScriptedObjectMovement_Structure : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	CMember(TArray<UFortScriptedObjectMovement_Slot*>) CachedObjectSlots                                           ___ OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TArray<UFortScriptedObjectMovement_SlotDefinition*>) CachedSlotDefinitions                             ___ OFFSET(get<T>, {0x2A0, 16, 0, 0})
};

/// Class /Script/SOMRuntime.FortGameStateComponent_ScriptedObjectMovementManager
/// Size: 0x0120 (0x0000A0 - 0x0001C0)
class UFortGameStateComponent_ScriptedObjectMovementManager : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	CMember(TArray<AFortScriptedObjectMovement_WorldPhaseSite*>) WorldPhaseSites                                   ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<AScriptedObjectMovement_StaticPath*>) RegisteredStaticPaths                                     ___ OFFSET(get<T>, {0x150, 16, 0, 0})
	CMember(AScriptedObjectMovement_StaticPath*)       CurrentlyMovingStaticPath                                   ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	SMember(FScalableFloat)                            StaticPathCooldownBetweenMoves                              ___ OFFSET(get<T>, {0x190, 40, 0, 0})
};

/// Class /Script/SOMRuntime.FortScriptedObjectMovement_MovableObjectBase
/// Size: 0x0218 (0x000978 - 0x000B90)
class AFortScriptedObjectMovement_MovableObjectBase : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2960;

public:
	DMember(int32_t)                                   Editor_SkipMasterPathIndex                                  ___ OFFSET(get<int32_t>, {0x9F0, 4, 0, 0})
	DMember(int32_t)                                   Editor_SkipSubPathIndex                                     ___ OFFSET(get<int32_t>, {0x9F4, 4, 0, 0})
	DMember(int32_t)                                   Editor_NumStepsPerClick                                     ___ OFFSET(get<int32_t>, {0x9F8, 4, 0, 0})
	CMember(UFortScriptedObjectMovement_SlotDefinition*) AssignedSlotDefinition                                    ___ OFFSET(get<T>, {0xA20, 8, 0, 0})
	SMember(FScriptedObjectMovement_DynamicPathContext) MovementPath                                               ___ OFFSET(get<T>, {0xA28, 56, 0, 0})
	CMember(UStaticMesh*)                              ScriptedObjectMesh                                          ___ OFFSET(get<T>, {0xA68, 8, 0, 0})
	DMember(bool)                                      bDebugStaticMovement                                        ___ OFFSET(get<bool>, {0xA88, 1, 0, 0})
	DMember(bool)                                      bWaitingForBeginPlaySkip                                    ___ OFFSET(get<bool>, {0xA89, 1, 0, 0})
	CMember(AScriptedObjectMovement_StaticPath*)       StaticFollowPath                                            ___ OFFSET(get<T>, {0xA90, 8, 0, 0})
	SMember(FScriptedObjectMovement_StaticPathStepData) CurrentStepData                                            ___ OFFSET(get<T>, {0xAA0, 240, 0, 0})
};

/// Class /Script/SOMRuntime.ScriptedObjectMovement_CalendarCheatDefinition
/// Size: 0x0010 (0x000030 - 0x000040)
class UScriptedObjectMovement_CalendarCheatDefinition : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData>) CheatCalendarEvents             ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/SOMRuntime.ScriptedObjectMovement_StaticPath
/// Size: 0x0250 (0x000290 - 0x0004E0)
class AScriptedObjectMovement_StaticPath : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1248;

public:
	CMember(USplineComponent*)                         MasterSplinePath                                            ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(TArray<FScriptedObjectMovement_StaticPathTravelerData>) PathTravelers                                  ___ OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<FScriptedObjectMovement_StaticPathSplineInputKeyData>) SplineData                               ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
	DMember(float)                                     StepSpacingDistance                                         ___ OFFSET(get<float>, {0x2D0, 4, 0, 0})
	CMember(TWeakObjectPtr<UScriptedObjectMovement_CalendarCheatDefinition*>) CheatCalendarEventDefinition         ___ OFFSET(get<T>, {0x2D8, 32, 0, 0})
	SMember(FGameplayTag)                              MovementStyleTag                                            ___ OFFSET(get<T>, {0x2F8, 4, 0, 0})
	SMember(FString)                                   EnterSplineCalendarEvent                                    ___ OFFSET(get<T>, {0x378, 16, 0, 0})
	SMember(FString)                                   ExitSplineCalendarEvent                                     ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	CMember(TArray<FStaticPathCalendarSplinePointGroup>) OrderedCalendarEventPointGroups                           ___ OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(UFortAsyncAction_CalendarMultiEventWatcher*) CalendarWatcherAction                                     ___ OFFSET(get<T>, {0x4D0, 8, 0, 0})
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_AStarGraphWrapper
/// Size: 0x0001 (0x000000 - 0x000001)
class FScriptedObjectMovement_AStarGraphWrapper : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_DynamicPathContext
/// Size: 0x0038 (0x000000 - 0x000038)
class FScriptedObjectMovement_DynamicPathContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UFortScriptedObjectMovement_Slot*)         SourceSlot                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UFortScriptedObjectMovement_Slot*)         DestinationSlot                                             ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   GridProvider                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_Grid
/// Size: 0x00C8 (0x000000 - 0x0000C8)
class FScriptedObjectMovement_Grid : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FVector)                                   CellSize                                                    ___ OFFSET(get<T>, {0x50, 24, 0, 0})
};

/// Struct /Script/SOMRuntime.FortScriptedObjectMovementPhaseData
/// Size: 0x0010 (0x000000 - 0x000010)
class FFortScriptedObjectMovementPhaseData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<AFortScriptedObjectMovement_Structure*>) Structures                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovementCalendarEventData
/// Size: 0x0028 (0x000000 - 0x000028)
class FScriptedObjectMovementCalendarEventData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathCalendarCheatDefinitionData
/// Size: 0x0018 (0x000000 - 0x000018)
class FScriptedObjectMovement_StaticPathCalendarCheatDefinitionData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   EventName                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     DurationTimeSeconds                                         ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DelayStartTimeSeconds                                       ___ OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathStepData
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FScriptedObjectMovement_StaticPathStepData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FTransform)                                StartWorldTransform                                         ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FTransform)                                EndWorldTransform                                           ___ OFFSET(get<T>, {0x60, 96, 0, 0})
	DMember(int32_t)                                   MasterPathStartSplinePoint                                  ___ OFFSET(get<int32_t>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   SubSplineStartPoint                                         ___ OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     MoveAtServerTimeSecs                                        ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(AFortScriptedObjectMovement_MovableObjectBase*) PathTraveler                                           ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FGameplayTag)                              MoveStyleTag                                                ___ OFFSET(get<T>, {0xE0, 4, 0, 0})
	DMember(bool)                                      bTeleport                                                   ___ OFFSET(get<bool>, {0xE4, 1, 0, 0})
	DMember(bool)                                      bIsSkipStep                                                 ___ OFFSET(get<bool>, {0xE5, 1, 0, 0})
};

/// Struct /Script/SOMRuntime.StaticPathCalendarSplinePointGroup
/// Size: 0x0030 (0x000000 - 0x000030)
class FStaticPathCalendarSplinePointGroup : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathSplineInputKeyData
/// Size: 0x0028 (0x000000 - 0x000028)
class FScriptedObjectMovement_StaticPathSplineInputKeyData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bLockGeneratedData                                          ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   CalendarEvent                                               ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   PauseCalendarEvent                                          ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StepMetaData
/// Size: 0x0001 (0x000000 - 0x000001)
class FScriptedObjectMovement_StepMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bSkipStep                                                   ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/SOMRuntime.ScriptedObjectMovement_StaticPathTravelerData
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FScriptedObjectMovement_StaticPathTravelerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<USplineComponent*>)                 GeneratedSplinesArray                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FScriptedObjectMovement_StepMetaData>) StepMetaData                                             ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(USplineComponent*)                         EnterSpline                                                 ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(USplineComponent*)                         ExitSpline                                                  ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(AFortScriptedObjectMovement_MovableObjectBase*) PathTraveler                                           ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   TravelOrder                                                 ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(float)                                     LateralOffset                                               ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bLocked                                                     ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bLockEnterSpline                                            ___ OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bLockExitSpline                                             ___ OFFSET(get<bool>, {0x42, 1, 0, 0})
	SMember(FVector)                                   TravelerBounds                                              ___ OFFSET(get<T>, {0x48, 24, 0, 0})
};

