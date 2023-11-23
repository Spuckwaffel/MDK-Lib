
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AIPatrolPath.AIPatrolPathEditorComponent
/// Size: 0x0090 (0x0005D0 - 0x000660)
class UAIPatrolPathEditorComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1632;

public:
};

/// Class /Script/AIPatrolPath.AIPatrolPathComponent
/// Size: 0x0308 (0x0000A0 - 0x0003A8)
class UAIPatrolPathComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 936;

public:
	CMember(TArray<FString>)                           SharedOptionNames                                           OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultAIPawn                                               OFFSET(get<T>, {0xD8, 32, 0, 0})
	CMember(UClass*)                                   PathRendererClass                                           OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(bool)                                      bAllowPartialPaths                                          OFFSET(get<bool>, {0x100, 1, 0, 0})
	SMember(FGameplayTagContainer)                     UnableToPlaceNewDeviceTags                                  OFFSET(getStruct<T>, {0x108, 32, 0, 0})
	SMember(FNavAgentProperties)                       CachedAIAgentProperties                                     OFFSET(getStruct<T>, {0x128, 48, 0, 0})
	CMember(UNavigationSystemV1*)                      CachedNavSystem                                             OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(ANavigationData*)                          CachedNavData                                               OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(UClass*)                                   CachedFilterClass                                           OFFSET(get<T>, {0x168, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPointFailedToReach                                  OFFSET(getStruct<T>, {0x180, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPointReached                                        OFFSET(getStruct<T>, {0x190, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPathStarted                                         OFFSET(getStruct<T>, {0x1A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPathStopped                                         OFFSET(getStruct<T>, {0x1B0, 16, 0, 0})
	CMember(TArray<AActor*>)                           PatrolPath                                                  OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FPatrolPathSegmentDetails)                 PathSegmentDetails                                          OFFSET(getStruct<T>, {0x1D8, 264, 0, 0})
	CMember(UAIPatrolPathComponent*)                   CopiedFrom                                                  OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(AActor*)                                   CurrentCloningNode                                          OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UAIPatrolPathComponent*)                   CopiedFromCut                                               OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(AFortCreativePatrolPath*)                  PatrolPathActor                                             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(AFortAthenaPatrolPoint*)                   PatrolPointActor                                            OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(TArray<UAIPatrolPathComponent*>)           MultiSelectActorToEnterList                                 OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(UAIPatrolPathEditorComponent*)             PatrolPathEditorComponent                                   OFFSET(get<T>, {0x3A0, 8, 0, 0})


	/// Functions
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.UpdateEditorComponent
	// void UpdateEditorComponent();                                                                                            // [0x2b7b1c8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.ShouldRenderPath
	// bool ShouldRenderPath();                                                                                                 // [0x101681c] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetRenderPath
	// void SetRenderPath(bool bRenderPath);                                                                                    // [0xa09f968] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetPatrolPathGroup
	// void SetPatrolPathGroup(EFortCreativePatrolPathGroup PatrolPathGroup);                                                   // [0xa09f858] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetPatrolPathEnabled
	// void SetPatrolPathEnabled(bool bIsEnabled);                                                                              // [0xa09f7d4] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.SetPatrollingMode
	// void SetPatrollingMode(EPatrollingMode NewMode);                                                                         // [0xa09f8d8] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RequestRenderPath
	// void RequestRenderPath();                                                                                                // [0xa09f7c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RenderToNextPoint
	// void RenderToNextPoint();                                                                                                // [0xa09f7ac] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RenderToNextAndPreviousPoint
	// void RenderToNextAndPreviousPoint();                                                                                     // [0xa09f744] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.RemovePoint
	// bool RemovePoint();                                                                                                      // [0xa09f720] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PropagatePatrolPathPointIndexToDevice
	// void PropagatePatrolPathPointIndexToDevice(int32_t NewPatrolPathPointIndex);                                             // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PropagatePatrolPathIndexToDevice
	// void PropagatePatrolPathIndexToDevice(int32_t NewPatrolPathIndex);                                                       // [0x101681c] Event|Protected|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PostFinishSpawningActor
	// void PostFinishSpawningActor();                                                                                          // [0xa09f70c] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPointReached
	// void PatrolPointReached(AFortAthenaPatrolPoint* PathPoint, AAIController* Instigator);                                   // [0xa09f648] Final|Native|Private 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPointFailedToReach
	// void PatrolPointFailedToReach(AFortAthenaPatrolPoint* PathPoint, AAIController* Instigator);                             // [0xa09f584] Final|Native|Private 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPathStopped
	// void PatrolPathStopped(AAIController* Instigator);                                                                       // [0xa09f504] Final|Native|Private 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.PatrolPathStarted
	// void PatrolPathStarted(AAIController* Instigator);                                                                       // [0xa09f484] Final|Native|Private 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.OnPatrolPathActorAssigned
	// void OnPatrolPathActorAssigned();                                                                                        // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.OnPathExtremitiesChanged
	// void OnPathExtremitiesChanged(bool bIsStart, bool bIsEnd);                                                               // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.OnAnyPropertyChanged
	// void OnAnyPropertyChanged();                                                                                             // [0x2b7b1c8] Final|Native|Protected 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.NotifyEditorUserOptionChanged
	// void NotifyEditorUserOptionChanged(TArray<FString>& UserOptions);                                                        // [0x7a9fec4] Final|Native|Protected|HasOutParms|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.HasValidPatrolPath
	// bool HasValidPatrolPath();                                                                                               // [0xa09f438] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPointIndexFromDevice
	// int32_t GetPatrolPathPointIndexFromDevice();                                                                             // [0x101681c] Event|Public|BlueprintEvent|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPointIndex
	// int32_t GetPatrolPathPointIndex();                                                                                       // [0xa09f414] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathPoint
	// UAIPatrolPathComponent* GetPatrolPathPoint(int32_t InPatrolPathIndex, int32_t InPatrolPathPointIndex);                   // [0xa09f354] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathIndexFromDevice
	// int32_t GetPatrolPathIndexFromDevice();                                                                                  // [0x101681c] Event|Public|BlueprintEvent|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathIndex
	// int32_t GetPatrolPathIndex();                                                                                            // [0xa09f330] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolPathGroup
	// EFortCreativePatrolPathGroup GetPatrolPathGroup();                                                                       // [0x101681c] Event|Public|BlueprintEvent|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrollingMode
	// EPatrollingMode GetPatrollingMode();                                                                                     // [0x101681c] Event|Public|BlueprintEvent|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetPatrolFilterOptions
	// UClass* GetPatrolFilterOptions();                                                                                        // [0x101681c] Event|Public|BlueprintEvent 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetNextAvailablePatrolPathIndex
	// bool GetNextAvailablePatrolPathIndex(int32_t& NextAvailableIndex);                                                       // [0xa09f298] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GetLinkedPatrolPoints
	// TArray<UAIPatrolPathComponent*> GetLinkedPatrolPoints();                                                                 // [0xa09f22c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.GeneratePathPoints
	// void GeneratePathPoints(EFortCreativePatrolPathGroup PatrolPathGroup, bool bGenerationCausedByDuplication);              // [0xa09f168] Final|Native|Public|BlueprintCallable 
	// Function /Script/AIPatrolPath.AIPatrolPathComponent.CanNextPointBeReached
	// bool CanNextPointBeReached();                                                                                            // [0xa09f148] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AIPatrolPath.PatrolPathSegmentDetails
/// Size: 0x0108 (0x000000 - 0x000108)
class FPatrolPathSegmentDetails : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(UNavigationPath*)                          Path                                                        OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UAIPatrolPathComponent*)                   Start                                                       OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UAIPatrolPathComponent*)                   End                                                         OFFSET(get<T>, {0xB8, 8, 0, 0})
};

/// Enum /Script/AIPatrolPath.EAIPatrolPathVersion
/// Size: 0x06
enum EAIPatrolPathVersion : uint8_t
{
	EAIPatrolPathVersion__InitialVersion0                                            = 0,
	EAIPatrolPathVersion__TemplateFromQuickBarVersion1                               = 1,
	EAIPatrolPathVersion__PatrolPointMovedToUserSettingsVersion2                     = 2,
	EAIPatrolPathVersion__VersionPlusOne3                                            = 3,
	EAIPatrolPathVersion__LatestVersion4                                             = 2,
	EAIPatrolPathVersion__EAIPatrolPathVersion_MAX5                                  = 4
};

/// Enum /Script/AIPatrolPath.SegmentPathStatus
/// Size: 0x06
enum SegmentPathStatus : uint8_t
{
	SegmentPathStatus__INVALID0                                                      = 0,
	SegmentPathStatus__CALCULATING1                                                  = 1,
	SegmentPathStatus__RECALCULATING_PENDING2                                        = 2,
	SegmentPathStatus__PATH_FAILED3                                                  = 3,
	SegmentPathStatus__PATH_SUCCESS4                                                 = 4,
	SegmentPathStatus__SegmentPathStatus_MAX5                                        = 5
};

