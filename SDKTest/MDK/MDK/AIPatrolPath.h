
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/AIPatrolPath.AIPatrolPathEditorComponent
/// Size: 0x0090 (0x0005C0 - 0x000650)
class UAIPatrolPathEditorComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
};

/// Class /Script/AIPatrolPath.AIPatrolPathComponent
/// Size: 0x02D8 (0x0000A0 - 0x000378)
class UAIPatrolPathComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 888;

public:
	CMember(TArray<FString>)                           SharedOptionNames                                           ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   DefaultAIPawn                                               ___ OFFSET(get<T>, {0xD8, 32, 0, 0})
	CMember(UClass*)                                   PathRendererClass                                           ___ OFFSET(get<T>, {0xF8, 8, 0, 0})
	DMember(bool)                                      bAllowPartialPaths                                          ___ OFFSET(get<bool>, {0x100, 1, 0, 0})
	SMember(FGameplayTagContainer)                     UnableToPlaceNewDeviceTags                                  ___ OFFSET(get<T>, {0x108, 32, 0, 0})
	SMember(FNavAgentProperties)                       CachedAIAgentProperties                                     ___ OFFSET(get<T>, {0x128, 48, 0, 0})
	CMember(UNavigationSystemV1*)                      CachedNavSystem                                             ___ OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(ANavigationData*)                          CachedNavData                                               ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(UClass*)                                   CachedFilterClass                                           ___ OFFSET(get<T>, {0x168, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPointFailedToReach                                  ___ OFFSET(get<T>, {0x180, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPointReached                                        ___ OFFSET(get<T>, {0x190, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPathStarted                                         ___ OFFSET(get<T>, {0x1A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPatrolPathStopped                                         ___ OFFSET(get<T>, {0x1B0, 16, 0, 0})
	CMember(TArray<AActor*>)                           PatrolPath                                                  ___ OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FPatrolPathSegmentDetails)                 PathSegmentDetails                                          ___ OFFSET(get<T>, {0x1D8, 264, 0, 0})
	CMember(UAIPatrolPathComponent*)                   CopiedFrom                                                  ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(AActor*)                                   CurrentCloningNode                                          ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UAIPatrolPathComponent*)                   CopiedFromCut                                               ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(AFortCreativePatrolPath*)                  PatrolPathActor                                             ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(AFortAthenaPatrolPoint*)                   PatrolPointActor                                            ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(TArray<UAIPatrolPathComponent*>)           MultiSelectActorToEnterList                                 ___ OFFSET(get<T>, {0x320, 16, 0, 0})
	CMember(UAIPatrolPathEditorComponent*)             PatrolPathEditorComponent                                   ___ OFFSET(get<T>, {0x370, 8, 0, 0})
};

/// Struct /Script/AIPatrolPath.PatrolPathSegmentDetails
/// Size: 0x0108 (0x000000 - 0x000108)
class FPatrolPathSegmentDetails : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(UNavigationPath*)                          Path                                                        ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UAIPatrolPathComponent*)                   Start                                                       ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UAIPatrolPathComponent*)                   End                                                         ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
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

