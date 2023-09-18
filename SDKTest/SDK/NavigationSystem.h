/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NavigationSystem.

/// Struct /Script/NavigationSystem.NavCollisionCylinder
/// Size: 0x0020 (0x000000 - 0x000020)
class FNavCollisionCylinder : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Offset                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Radius                                                      ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Height                                                      ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/NavigationSystem.NavCollisionBox
/// Size: 0x0030 (0x000000 - 0x000030)
class FNavCollisionBox : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Offset                                                      ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Extent                                                      ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/NavigationSystem.NavigationFilterArea
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavigationFilterArea : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UClass*)                                   AreaClass                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TravelCostOverride                                          ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EnteringCostOverride                                        ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bIsExcluded                                                 ___ OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bOverrideTravelCost                                         ___ OFFSET(get<bool>, {0x10, 1, 1, 1})
	DMember(bool)                                      bOverrideEnteringCost                                       ___ OFFSET(get<bool>, {0x10, 1, 1, 2})
};

/// Struct /Script/NavigationSystem.NavigationFilterFlags
/// Size: 0x0004 (0x000000 - 0x000004)
class FNavigationFilterFlags : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bNavFlag0                                                   ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bNavFlag1                                                   ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bNavFlag2                                                   ___ OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bNavFlag3                                                   ___ OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(bool)                                      bNavFlag4                                                   ___ OFFSET(get<bool>, {0x0, 1, 1, 4})
	DMember(bool)                                      bNavFlag5                                                   ___ OFFSET(get<bool>, {0x0, 1, 1, 5})
	DMember(bool)                                      bNavFlag6                                                   ___ OFFSET(get<bool>, {0x0, 1, 1, 6})
	DMember(bool)                                      bNavFlag7                                                   ___ OFFSET(get<bool>, {0x0, 1, 1, 7})
	DMember(bool)                                      bNavFlag8                                                   ___ OFFSET(get<bool>, {0x1, 1, 1, 0})
	DMember(bool)                                      bNavFlag9                                                   ___ OFFSET(get<bool>, {0x1, 1, 1, 1})
	DMember(bool)                                      bNavFlag10                                                  ___ OFFSET(get<bool>, {0x1, 1, 1, 2})
	DMember(bool)                                      bNavFlag11                                                  ___ OFFSET(get<bool>, {0x1, 1, 1, 3})
	DMember(bool)                                      bNavFlag12                                                  ___ OFFSET(get<bool>, {0x1, 1, 1, 4})
	DMember(bool)                                      bNavFlag13                                                  ___ OFFSET(get<bool>, {0x1, 1, 1, 5})
	DMember(bool)                                      bNavFlag14                                                  ___ OFFSET(get<bool>, {0x1, 1, 1, 6})
	DMember(bool)                                      bNavFlag15                                                  ___ OFFSET(get<bool>, {0x1, 1, 1, 7})
};

/// Struct /Script/NavigationSystem.NavGraphEdge
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavGraphEdge : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/NavigationSystem.NavGraphNode
/// Size: 0x0018 (0x000000 - 0x000018)
class FNavGraphNode : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UObject*)                                  Owner                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/NavigationSystem.SupportedAreaData
/// Size: 0x0020 (0x000000 - 0x000020)
class FSupportedAreaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   AreaClassName                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   AreaID                                                      ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	CMember(UClass*)                                   AreaClass                                                   ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/NavigationSystem.NavLinkCustomInstanceData
/// Size: 0x0010 (0x000068 - 0x000078)
class FNavLinkCustomInstanceData : public FActorComponentInstanceData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FNavLinkId)                                CustomLinkId                                                ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FNavLinkAuxiliaryId)                       AuxiliaryCustomLinkId                                       ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Struct /Script/NavigationSystem.RecastNavMeshGenerationProperties
/// Size: 0x0040 (0x000000 - 0x000040)
class FRecastNavMeshGenerationProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   TilePoolSize                                                ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     TileSizeUU                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CellSize                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CellHeight                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     AgentRadius                                                 ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     AgentHeight                                                 ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     AgentMaxSlope                                               ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     AgentMaxStepHeight                                          ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinRegionArea                                               ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MergeRegionSize                                             ___ OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     MaxSimplificationError                                      ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   TileNumberHardLimit                                         ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	CMember(TEnumAsByte<ERecastPartitioning>)          RegionPartitioning                                          ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	CMember(TEnumAsByte<ERecastPartitioning>)          LayerPartitioning                                           ___ OFFSET(get<T>, {0x31, 1, 0, 0})
	DMember(int32_t)                                   RegionChunkSplits                                           ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   LayerChunkSplits                                            ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bSortNavigationAreasByCost                                  ___ OFFSET(get<bool>, {0x3C, 1, 1, 0})
	DMember(bool)                                      bPerformVoxelFiltering                                      ___ OFFSET(get<bool>, {0x3C, 1, 1, 1})
	DMember(bool)                                      bMarkLowHeightAreas                                         ___ OFFSET(get<bool>, {0x3C, 1, 1, 2})
	DMember(bool)                                      bUseExtraTopCellWhenMarkingAreas                            ___ OFFSET(get<bool>, {0x3C, 1, 1, 3})
	DMember(bool)                                      bFilterLowSpanSequences                                     ___ OFFSET(get<bool>, {0x3C, 1, 1, 4})
	DMember(bool)                                      bFilterLowSpanFromTileCache                                 ___ OFFSET(get<bool>, {0x3C, 1, 1, 5})
	DMember(bool)                                      bFixedTilePoolSize                                          ___ OFFSET(get<bool>, {0x3C, 1, 1, 6})
	DMember(bool)                                      bIsWorldPartitioned                                         ___ OFFSET(get<bool>, {0x3C, 1, 1, 7})
};

/// Struct /Script/NavigationSystem.RecastNavMeshTileGenerationDebug
/// Size: 0x001C (0x000000 - 0x00001C)
class FRecastNavMeshTileGenerationDebug : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	SMember(FIntVector)                                TileCoordinate                                              ___ OFFSET(get<T>, {0x4, 12, 0, 0})
	DMember(bool)                                      bGenerateDebugTileOnly                                      ___ OFFSET(get<bool>, {0x10, 1, 1, 0})
	DMember(bool)                                      bCollisionGeometry                                          ___ OFFSET(get<bool>, {0x10, 1, 1, 1})
	CMember(EHeightFieldRenderMode)                    HeightFieldRenderMode                                       ___ OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(bool)                                      bHeightfieldFromRasterization                               ___ OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(bool)                                      bHeightfieldPostInclusionBoundsFiltering                    ___ OFFSET(get<bool>, {0x18, 1, 1, 1})
	DMember(bool)                                      bHeightfieldPostHeightFiltering                             ___ OFFSET(get<bool>, {0x18, 1, 1, 2})
	DMember(bool)                                      bHeightfieldBounds                                          ___ OFFSET(get<bool>, {0x18, 1, 1, 3})
	DMember(bool)                                      bCompactHeightfield                                         ___ OFFSET(get<bool>, {0x18, 1, 1, 4})
	DMember(bool)                                      bCompactHeightfieldEroded                                   ___ OFFSET(get<bool>, {0x18, 1, 1, 5})
	DMember(bool)                                      bCompactHeightfieldRegions                                  ___ OFFSET(get<bool>, {0x18, 1, 1, 6})
	DMember(bool)                                      bCompactHeightfieldDistances                                ___ OFFSET(get<bool>, {0x18, 1, 1, 7})
	DMember(bool)                                      bTileCacheLayerAreas                                        ___ OFFSET(get<bool>, {0x19, 1, 1, 0})
	DMember(bool)                                      bTileCacheLayerRegions                                      ___ OFFSET(get<bool>, {0x19, 1, 1, 1})
	DMember(bool)                                      bTileCacheContours                                          ___ OFFSET(get<bool>, {0x19, 1, 1, 2})
	DMember(bool)                                      bTileCachePolyMesh                                          ___ OFFSET(get<bool>, {0x19, 1, 1, 3})
	DMember(bool)                                      bTileCacheDetailMesh                                        ___ OFFSET(get<bool>, {0x19, 1, 1, 4})
};

/// Struct /Script/NavigationSystem.NavMeshResolutionParam
/// Size: 0x000C (0x000000 - 0x00000C)
class FNavMeshResolutionParam : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     CellSize                                                    ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CellHeight                                                  ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AgentMaxStepHeight                                          ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Class /Script/NavigationSystem.CrowdManagerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UCrowdManagerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavigationGraphNode
/// Size: 0x0000 (0x000290 - 0x000290)
class ANavigationGraphNode : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/NavigationSystem.NavigationGraphNodeComponent
/// Size: 0x0030 (0x0002A0 - 0x0002D0)
class UNavigationGraphNodeComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FNavGraphNode)                             Node                                                        ___ OFFSET(get<T>, {0x2A0, 24, 0, 0})
	CMember(UNavigationGraphNodeComponent*)            NextNodeComponent                                           ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UNavigationGraphNodeComponent*)            PrevNodeComponent                                           ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Class /Script/NavigationSystem.NavigationPathGenerator
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavigationPathGenerator : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavLinkCustomInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavLinkCustomInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavLinkHostInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavLinkHostInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavLinkTrivial
/// Size: 0x0000 (0x000050 - 0x000050)
class UNavLinkTrivial : public UNavLinkDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/NavigationSystem.NavNodeInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNavNodeInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/NavigationSystem.NavigationData
/// Size: 0x0200 (0x000290 - 0x000490)
class ANavigationData : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
	CMember(UPrimitiveComponent*)                      RenderingComp                                               ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	SMember(FNavDataConfig)                            NavDataConfig                                               ___ OFFSET(get<T>, {0x2A0, 112, 0, 0})
	DMember(bool)                                      bEnableDrawing                                              ___ OFFSET(get<bool>, {0x310, 1, 1, 0})
	DMember(bool)                                      bForceRebuildOnLoad                                         ___ OFFSET(get<bool>, {0x310, 1, 1, 1})
	DMember(bool)                                      bAutoDestroyWhenNoNavigation                                ___ OFFSET(get<bool>, {0x310, 1, 1, 2})
	DMember(bool)                                      bCanBeMainNavData                                           ___ OFFSET(get<bool>, {0x310, 1, 1, 3})
	DMember(bool)                                      bCanSpawnOnRebuild                                          ___ OFFSET(get<bool>, {0x310, 1, 1, 4})
	DMember(bool)                                      bRebuildAtRuntime                                           ___ OFFSET(get<bool>, {0x310, 1, 1, 5})
	CMember(ERuntimeGenerationType)                    RuntimeGeneration                                           ___ OFFSET(get<T>, {0x314, 1, 0, 0})
	DMember(float)                                     ObservedPathsTickInterval                                   ___ OFFSET(get<float>, {0x318, 4, 0, 0})
	DMember(uint32_t)                                  DataVersion                                                 ___ OFFSET(get<uint32_t>, {0x31C, 4, 0, 0})
	CMember(TArray<FSupportedAreaData>)                SupportedAreas                                              ___ OFFSET(get<T>, {0x428, 16, 0, 0})
};

/// Class /Script/NavigationSystem.AbstractNavData
/// Size: 0x0000 (0x000490 - 0x000490)
class AAbstractNavData : public ANavigationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
};

/// Class /Script/NavigationSystem.NavArea
/// Size: 0x0018 (0x000030 - 0x000048)
class UNavArea : public UNavAreaBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     DefaultCost                                                 ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     FixedAreaEnteringCost                                       ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FColor)                                    DrawColor                                                   ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bSupportsAgent0                                             ___ OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bSupportsAgent1                                             ___ OFFSET(get<bool>, {0x40, 1, 1, 1})
	DMember(bool)                                      bSupportsAgent2                                             ___ OFFSET(get<bool>, {0x40, 1, 1, 2})
	DMember(bool)                                      bSupportsAgent3                                             ___ OFFSET(get<bool>, {0x40, 1, 1, 3})
	DMember(bool)                                      bSupportsAgent4                                             ___ OFFSET(get<bool>, {0x40, 1, 1, 4})
	DMember(bool)                                      bSupportsAgent5                                             ___ OFFSET(get<bool>, {0x40, 1, 1, 5})
	DMember(bool)                                      bSupportsAgent6                                             ___ OFFSET(get<bool>, {0x40, 1, 1, 6})
	DMember(bool)                                      bSupportsAgent7                                             ___ OFFSET(get<bool>, {0x40, 1, 1, 7})
	DMember(bool)                                      bSupportsAgent8                                             ___ OFFSET(get<bool>, {0x41, 1, 1, 0})
	DMember(bool)                                      bSupportsAgent9                                             ___ OFFSET(get<bool>, {0x41, 1, 1, 1})
	DMember(bool)                                      bSupportsAgent10                                            ___ OFFSET(get<bool>, {0x41, 1, 1, 2})
	DMember(bool)                                      bSupportsAgent11                                            ___ OFFSET(get<bool>, {0x41, 1, 1, 3})
	DMember(bool)                                      bSupportsAgent12                                            ___ OFFSET(get<bool>, {0x41, 1, 1, 4})
	DMember(bool)                                      bSupportsAgent13                                            ___ OFFSET(get<bool>, {0x41, 1, 1, 5})
	DMember(bool)                                      bSupportsAgent14                                            ___ OFFSET(get<bool>, {0x41, 1, 1, 6})
	DMember(bool)                                      bSupportsAgent15                                            ___ OFFSET(get<bool>, {0x41, 1, 1, 7})
};

/// Class /Script/NavigationSystem.NavAreaMeta
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavAreaMeta : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavAreaMeta_SwitchByAgent
/// Size: 0x0080 (0x000048 - 0x0000C8)
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(UClass*)                                   Agent0Area                                                  ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(UClass*)                                   Agent1Area                                                  ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(UClass*)                                   Agent2Area                                                  ___ OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(UClass*)                                   Agent3Area                                                  ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UClass*)                                   Agent4Area                                                  ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UClass*)                                   Agent5Area                                                  ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	CMember(UClass*)                                   Agent6Area                                                  ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(UClass*)                                   Agent7Area                                                  ___ OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(UClass*)                                   Agent8Area                                                  ___ OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(UClass*)                                   Agent9Area                                                  ___ OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(UClass*)                                   Agent10Area                                                 ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(UClass*)                                   Agent11Area                                                 ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UClass*)                                   Agent12Area                                                 ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(UClass*)                                   Agent13Area                                                 ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UClass*)                                   Agent14Area                                                 ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UClass*)                                   Agent15Area                                                 ___ OFFSET(get<T>, {0xC0, 8, 0, 0})
};

/// Class /Script/NavigationSystem.NavArea_Default
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Default : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavArea_LowHeight
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_LowHeight : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavArea_Null
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Null : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavArea_Obstacle
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavArea_Obstacle : public UNavArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavCollision
/// Size: 0x0060 (0x000070 - 0x0000D0)
class UNavCollision : public UNavCollisionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TArray<FNavCollisionCylinder>)             CylinderCollision                                           ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FNavCollisionBox>)                  BoxCollision                                                ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(UClass*)                                   AreaClass                                                   ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	DMember(bool)                                      bGatherConvexGeometry                                       ___ OFFSET(get<bool>, {0xA8, 1, 1, 0})
	DMember(bool)                                      bCreateOnClient                                             ___ OFFSET(get<bool>, {0xA8, 1, 1, 1})
};

/// Class /Script/NavigationSystem.NavigationQueryFilter
/// Size: 0x0020 (0x000028 - 0x000048)
class UNavigationQueryFilter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FNavigationFilterArea>)             Areas                                                       ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FNavigationFilterFlags)                    IncludeFlags                                                ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	SMember(FNavigationFilterFlags)                    ExcludeFlags                                                ___ OFFSET(get<T>, {0x3C, 4, 0, 0})
};

/// Class /Script/NavigationSystem.RecastFilter_UseDefaultArea
/// Size: 0x0000 (0x000048 - 0x000048)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/NavigationSystem.NavigationGraph
/// Size: 0x0000 (0x000490 - 0x000490)
class ANavigationGraph : public ANavigationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1168;

public:
};

/// Class /Script/NavigationSystem.NavigationInvokerComponent
/// Size: 0x0010 (0x0000A0 - 0x0000B0)
class UNavigationInvokerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(float)                                     TileGenerationRadius                                        ___ OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     TileRemovalRadius                                           ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             ___ OFFSET(get<T>, {0xA8, 4, 0, 0})
	CMember(ENavigationInvokerPriority)                Priority                                                    ___ OFFSET(get<T>, {0xAC, 1, 0, 0})
};

/// Class /Script/NavigationSystem.NavigationPath
/// Size: 0x0060 (0x000028 - 0x000088)
class UNavigationPath : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  PathUpdatedNotifier                                         ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FVector>)                           PathPoints                                                  ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<ENavigationOptionFlag>)        RecalculateOnInvalidation                                   ___ OFFSET(get<T>, {0x48, 1, 0, 0})
};

/// Class /Script/NavigationSystem.NavigationSystemV1
/// Size: 0x1560 (0x000028 - 0x001588)
class UNavigationSystemV1 : public UNavigationSystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5512;

public:
	CMember(ANavigationData*)                          MainNavData                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(ANavigationData*)                          AbstractNavData                                             ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FName)                                     DefaultAgentName                                            ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CrowdManagerClass                                           ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	DMember(bool)                                      bAutoCreateNavigationData                                   ___ OFFSET(get<bool>, {0x60, 1, 1, 0})
	DMember(bool)                                      bSpawnNavDataInNavBoundsLevel                               ___ OFFSET(get<bool>, {0x60, 1, 1, 1})
	DMember(bool)                                      bAllowClientSideNavigation                                  ___ OFFSET(get<bool>, {0x60, 1, 1, 2})
	DMember(bool)                                      bShouldDiscardSubLevelNavData                               ___ OFFSET(get<bool>, {0x60, 1, 1, 3})
	DMember(bool)                                      bTickWhilePaused                                            ___ OFFSET(get<bool>, {0x60, 1, 1, 4})
	DMember(bool)                                      bSupportRebuilding                                          ___ OFFSET(get<bool>, {0x60, 1, 1, 5})
	DMember(bool)                                      bInitialBuildingLocked                                      ___ OFFSET(get<bool>, {0x60, 1, 1, 6})
	DMember(bool)                                      bSkipAgentHeightCheckWhenPickingNavData                     ___ OFFSET(get<bool>, {0x61, 1, 1, 0})
	DMember(int32_t)                                   GeometryExportTriangleCountWarningThreshold                 ___ OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bGenerateNavigationOnlyAroundNavigationInvokers             ___ OFFSET(get<bool>, {0x68, 1, 1, 0})
	DMember(float)                                     ActiveTilesUpdateInterval                                   ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	CMember(ENavDataGatheringModeConfig)               DataGatheringMode                                           ___ OFFSET(get<T>, {0x70, 1, 0, 0})
	DMember(float)                                     DirtyAreaWarningSizeThreshold                               ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     GatheringNavModifiersWarningLimitTime                       ___ OFFSET(get<float>, {0x78, 4, 0, 0})
	CMember(TArray<FNavDataConfig>)                    SupportedAgents                                             ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgentsMask                                         ___ OFFSET(get<T>, {0x90, 4, 0, 0})
	SMember(FBox)                                      BuildBounds                                                 ___ OFFSET(get<T>, {0x98, 56, 0, 0})
	CMember(TArray<ANavigationData*>)                  NavDataSet                                                  ___ OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<ANavigationData*>)                  NavDataRegistrationQueue                                    ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNavDataRegisteredEvent                                    ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNavigationGenerationFinishedDelegate                      ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FNavigationSystemRunMode)                  OperationMode                                               ___ OFFSET(get<T>, {0x200, 1, 0, 0})
};

/// Class /Script/NavigationSystem.NavigationSystemModuleConfig
/// Size: 0x0008 (0x000050 - 0x000058)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(bool)                                      bStrictlyStatic                                             ___ OFFSET(get<bool>, {0x50, 1, 1, 0})
	DMember(bool)                                      bCreateOnClient                                             ___ OFFSET(get<bool>, {0x50, 1, 1, 1})
	DMember(bool)                                      bAutoSpawnMissingNavData                                    ___ OFFSET(get<bool>, {0x50, 1, 1, 2})
	DMember(bool)                                      bSpawnNavDataInNavBoundsLevel                               ___ OFFSET(get<bool>, {0x50, 1, 1, 3})
};

/// Class /Script/NavigationSystem.NavigationTestingActor
/// Size: 0x0120 (0x000290 - 0x0003B0)
class ANavigationTestingActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	CMember(UCapsuleComponent*)                        CapsuleComponent                                            ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UNavigationInvokerComponent*)              InvokerComponent                                            ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	DMember(bool)                                      bActAsNavigationInvoker                                     ___ OFFSET(get<bool>, {0x2B0, 1, 1, 0})
	SMember(FNavAgentProperties)                       NavAgentProps                                               ___ OFFSET(get<T>, {0x2B8, 48, 0, 0})
	SMember(FVector)                                   QueryingExtent                                              ___ OFFSET(get<T>, {0x2E8, 24, 0, 0})
	CMember(ANavigationData*)                          MyNavData                                                   ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	SMember(FVector)                                   ProjectedLocation                                           ___ OFFSET(get<T>, {0x308, 24, 0, 0})
	DMember(bool)                                      bProjectedLocationValid                                     ___ OFFSET(get<bool>, {0x320, 1, 1, 0})
	DMember(bool)                                      bSearchStart                                                ___ OFFSET(get<bool>, {0x320, 1, 1, 1})
	DMember(float)                                     CostLimitFactor                                             ___ OFFSET(get<float>, {0x324, 4, 0, 0})
	DMember(float)                                     MinimumCostLimit                                            ___ OFFSET(get<float>, {0x328, 4, 0, 0})
	DMember(bool)                                      bBacktracking                                               ___ OFFSET(get<bool>, {0x32C, 1, 1, 0})
	DMember(bool)                                      bUseHierarchicalPathfinding                                 ___ OFFSET(get<bool>, {0x32C, 1, 1, 1})
	DMember(bool)                                      bGatherDetailedInfo                                         ___ OFFSET(get<bool>, {0x32C, 1, 1, 2})
	DMember(bool)                                      bRequireNavigableEndLocation                                ___ OFFSET(get<bool>, {0x32C, 1, 1, 3})
	DMember(bool)                                      bDrawDistanceToWall                                         ___ OFFSET(get<bool>, {0x32C, 1, 1, 4})
	DMember(bool)                                      bShowNodePool                                               ___ OFFSET(get<bool>, {0x32C, 1, 1, 5})
	DMember(bool)                                      bShowBestPath                                               ___ OFFSET(get<bool>, {0x32C, 1, 1, 6})
	DMember(bool)                                      bShowDiffWithPreviousStep                                   ___ OFFSET(get<bool>, {0x32C, 1, 1, 7})
	DMember(bool)                                      bShouldBeVisibleInGame                                      ___ OFFSET(get<bool>, {0x32D, 1, 1, 0})
	CMember(TEnumAsByte<ENavCostDisplay>)              CostDisplayMode                                             ___ OFFSET(get<T>, {0x330, 1, 0, 0})
	SMember(FVector2D)                                 TextCanvasOffset                                            ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	DMember(bool)                                      bPathExist                                                  ___ OFFSET(get<bool>, {0x348, 1, 1, 0})
	DMember(bool)                                      bPathIsPartial                                              ___ OFFSET(get<bool>, {0x348, 1, 1, 1})
	DMember(bool)                                      bPathSearchOutOfNodes                                       ___ OFFSET(get<bool>, {0x348, 1, 1, 2})
	DMember(float)                                     PathfindingTime                                             ___ OFFSET(get<float>, {0x34C, 4, 0, 0})
	DMember(double)                                    PathCost                                                    ___ OFFSET(get<double>, {0x350, 8, 0, 0})
	DMember(int32_t)                                   PathfindingSteps                                            ___ OFFSET(get<int32_t>, {0x358, 4, 0, 0})
	CMember(ANavigationTestingActor*)                  OtherActor                                                  ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UClass*)                                   FilterClass                                                 ___ OFFSET(get<T>, {0x368, 8, 0, 0})
	DMember(int32_t)                                   ShowStepIndex                                               ___ OFFSET(get<int32_t>, {0x370, 4, 0, 0})
	DMember(float)                                     OffsetFromCornersDistance                                   ___ OFFSET(get<float>, {0x374, 4, 0, 0})
};

/// Class /Script/NavigationSystem.NavLinkComponent
/// Size: 0x0010 (0x000570 - 0x000580)
class UNavLinkComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(TArray<FNavigationLink>)                   Links                                                       ___ OFFSET(get<T>, {0x570, 16, 0, 0})
};

/// Class /Script/NavigationSystem.NavRelevantComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UNavRelevantComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	DMember(bool)                                      bAttachToOwnersRoot                                         ___ OFFSET(get<bool>, {0xE0, 1, 1, 0})
	CMember(UObject*)                                  CachedNavParent                                             ___ OFFSET(get<T>, {0xE8, 8, 0, 0})
};

/// Class /Script/NavigationSystem.NavLinkCustomComponent
/// Size: 0x00F0 (0x0000F0 - 0x0001E0)
class UNavLinkCustomComponent : public UNavRelevantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	DMember(uint32_t)                                  NavLinkUserId                                               ___ OFFSET(get<uint32_t>, {0xF8, 4, 0, 0})
	SMember(FNavLinkId)                                CustomLinkId                                                ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FNavLinkAuxiliaryId)                       AuxiliaryCustomLinkId                                       ___ OFFSET(get<T>, {0x108, 8, 0, 0})
	CMember(UClass*)                                   EnabledAreaClass                                            ___ OFFSET(get<T>, {0x110, 8, 0, 0})
	CMember(UClass*)                                   DisabledAreaClass                                           ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	SMember(FNavAgentSelector)                         SupportedAgents                                             ___ OFFSET(get<T>, {0x120, 4, 0, 0})
	SMember(FVector)                                   LinkRelativeStart                                           ___ OFFSET(get<T>, {0x128, 24, 0, 0})
	SMember(FVector)                                   LinkRelativeEnd                                             ___ OFFSET(get<T>, {0x140, 24, 0, 0})
	CMember(TEnumAsByte<ENavLinkDirection>)            LinkDirection                                               ___ OFFSET(get<T>, {0x158, 1, 0, 0})
	DMember(bool)                                      bLinkEnabled                                                ___ OFFSET(get<bool>, {0x15C, 1, 1, 0})
	DMember(bool)                                      bNotifyWhenEnabled                                          ___ OFFSET(get<bool>, {0x15C, 1, 1, 1})
	DMember(bool)                                      bNotifyWhenDisabled                                         ___ OFFSET(get<bool>, {0x15C, 1, 1, 2})
	DMember(bool)                                      bCreateBoxObstacle                                          ___ OFFSET(get<bool>, {0x15C, 1, 1, 3})
	SMember(FVector)                                   ObstacleOffset                                              ___ OFFSET(get<T>, {0x160, 24, 0, 0})
	SMember(FVector)                                   ObstacleExtent                                              ___ OFFSET(get<T>, {0x178, 24, 0, 0})
	CMember(UClass*)                                   ObstacleAreaClass                                           ___ OFFSET(get<T>, {0x190, 8, 0, 0})
	DMember(float)                                     BroadcastRadius                                             ___ OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(float)                                     BroadcastInterval                                           ___ OFFSET(get<float>, {0x19C, 4, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            BroadcastChannel                                            ___ OFFSET(get<T>, {0x1A0, 1, 0, 0})
};

/// Class /Script/NavigationSystem.NavLinkRenderingComponent
/// Size: 0x0000 (0x000570 - 0x000570)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1392;

public:
};

/// Class /Script/NavigationSystem.NavMeshBoundsVolume
/// Size: 0x0008 (0x0002C8 - 0x0002D0)
class ANavMeshBoundsVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FNavAgentSelector)                         SupportedAgents                                             ___ OFFSET(get<T>, {0x2C8, 4, 0, 0})
};

/// Class /Script/NavigationSystem.NavMeshRenderingComponent
/// Size: 0x0010 (0x0005C0 - 0x0005D0)
class UNavMeshRenderingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
};

/// Class /Script/NavigationSystem.NavTestRenderingComponent
/// Size: 0x0000 (0x0005C0 - 0x0005C0)
class UNavTestRenderingComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1472;

public:
};

/// Class /Script/NavigationSystem.RecastNavMesh
/// Size: 0x0118 (0x000490 - 0x0005A8)
class ARecastNavMesh : public ANavigationData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1448;

public:
	DMember(bool)                                      bDrawTriangleEdges                                          ___ OFFSET(get<bool>, {0x490, 1, 1, 0})
	DMember(bool)                                      bDrawPolyEdges                                              ___ OFFSET(get<bool>, {0x490, 1, 1, 1})
	DMember(bool)                                      bDrawFilledPolys                                            ___ OFFSET(get<bool>, {0x490, 1, 1, 2})
	DMember(bool)                                      bDrawNavMeshEdges                                           ___ OFFSET(get<bool>, {0x490, 1, 1, 3})
	DMember(bool)                                      bDrawTileBounds                                             ___ OFFSET(get<bool>, {0x490, 1, 1, 4})
	DMember(bool)                                      bDrawTileResolutions                                        ___ OFFSET(get<bool>, {0x490, 1, 1, 5})
	DMember(bool)                                      bDrawPathCollidingGeometry                                  ___ OFFSET(get<bool>, {0x490, 1, 1, 6})
	DMember(bool)                                      bDrawTileLabels                                             ___ OFFSET(get<bool>, {0x490, 1, 1, 7})
	DMember(bool)                                      bDrawTileBuildTimes                                         ___ OFFSET(get<bool>, {0x491, 1, 1, 0})
	DMember(bool)                                      bDrawTileBuildTimesHeatMap                                  ___ OFFSET(get<bool>, {0x491, 1, 1, 1})
	DMember(bool)                                      bDrawPolygonLabels                                          ___ OFFSET(get<bool>, {0x491, 1, 1, 2})
	DMember(bool)                                      bDrawDefaultPolygonCost                                     ___ OFFSET(get<bool>, {0x491, 1, 1, 3})
	DMember(bool)                                      bDrawPolygonFlags                                           ___ OFFSET(get<bool>, {0x491, 1, 1, 4})
	DMember(bool)                                      bDrawLabelsOnPathNodes                                      ___ OFFSET(get<bool>, {0x491, 1, 1, 5})
	DMember(bool)                                      bDrawNavLinks                                               ___ OFFSET(get<bool>, {0x491, 1, 1, 6})
	DMember(bool)                                      bDrawFailedNavLinks                                         ___ OFFSET(get<bool>, {0x491, 1, 1, 7})
	DMember(bool)                                      bDrawClusters                                               ___ OFFSET(get<bool>, {0x492, 1, 1, 0})
	DMember(bool)                                      bDrawOctree                                                 ___ OFFSET(get<bool>, {0x492, 1, 1, 1})
	DMember(bool)                                      bDrawOctreeDetails                                          ___ OFFSET(get<bool>, {0x492, 1, 1, 2})
	DMember(bool)                                      bDrawMarkedForbiddenPolys                                   ___ OFFSET(get<bool>, {0x492, 1, 1, 3})
	DMember(bool)                                      bDistinctlyDrawTilesBeingBuilt                              ___ OFFSET(get<bool>, {0x492, 1, 1, 4})
	DMember(float)                                     DrawOffset                                                  ___ OFFSET(get<float>, {0x494, 4, 0, 0})
	SMember(FRecastNavMeshTileGenerationDebug)         TileGenerationDebug                                         ___ OFFSET(get<T>, {0x498, 28, 0, 0})
	DMember(bool)                                      bFixedTilePoolSize                                          ___ OFFSET(get<bool>, {0x4B4, 1, 1, 0})
	DMember(int32_t)                                   TilePoolSize                                                ___ OFFSET(get<int32_t>, {0x4B8, 4, 0, 0})
	DMember(float)                                     TileSizeUU                                                  ___ OFFSET(get<float>, {0x4BC, 4, 0, 0})
	DMember(float)                                     CellSize                                                    ___ OFFSET(get<float>, {0x4C0, 4, 0, 0})
	DMember(float)                                     CellHeight                                                  ___ OFFSET(get<float>, {0x4C4, 4, 0, 0})
	SMember(FNavMeshResolutionParam)                   NavMeshResolutionParams                                     ___ OFFSET(get<T>, {0x4C8, 36, 0, 0})
	DMember(float)                                     AgentRadius                                                 ___ OFFSET(get<float>, {0x4EC, 4, 0, 0})
	DMember(float)                                     AgentHeight                                                 ___ OFFSET(get<float>, {0x4F0, 4, 0, 0})
	DMember(float)                                     AgentMaxSlope                                               ___ OFFSET(get<float>, {0x4F4, 4, 0, 0})
	DMember(float)                                     AgentMaxStepHeight                                          ___ OFFSET(get<float>, {0x4F8, 4, 0, 0})
	DMember(float)                                     MinRegionArea                                               ___ OFFSET(get<float>, {0x4FC, 4, 0, 0})
	DMember(float)                                     MergeRegionSize                                             ___ OFFSET(get<float>, {0x500, 4, 0, 0})
	DMember(float)                                     MaxSimplificationError                                      ___ OFFSET(get<float>, {0x504, 4, 0, 0})
	DMember(int32_t)                                   MaxSimultaneousTileGenerationJobsCount                      ___ OFFSET(get<int32_t>, {0x508, 4, 0, 0})
	DMember(int32_t)                                   TileNumberHardLimit                                         ___ OFFSET(get<int32_t>, {0x50C, 4, 0, 0})
	DMember(int32_t)                                   PolyRefTileBits                                             ___ OFFSET(get<int32_t>, {0x510, 4, 0, 0})
	DMember(int32_t)                                   PolyRefNavPolyBits                                          ___ OFFSET(get<int32_t>, {0x514, 4, 0, 0})
	DMember(int32_t)                                   PolyRefSaltBits                                             ___ OFFSET(get<int32_t>, {0x518, 4, 0, 0})
	SMember(FVector)                                   NavMeshOriginOffset                                         ___ OFFSET(get<T>, {0x520, 24, 0, 0})
	DMember(float)                                     DefaultDrawDistance                                         ___ OFFSET(get<float>, {0x538, 4, 0, 0})
	DMember(float)                                     DefaultMaxSearchNodes                                       ___ OFFSET(get<float>, {0x53C, 4, 0, 0})
	DMember(float)                                     DefaultMaxHierarchicalSearchNodes                           ___ OFFSET(get<float>, {0x540, 4, 0, 0})
	CMember(TEnumAsByte<ERecastPartitioning>)          RegionPartitioning                                          ___ OFFSET(get<T>, {0x544, 1, 0, 0})
	CMember(TEnumAsByte<ERecastPartitioning>)          LayerPartitioning                                           ___ OFFSET(get<T>, {0x545, 1, 0, 0})
	DMember(int32_t)                                   RegionChunkSplits                                           ___ OFFSET(get<int32_t>, {0x548, 4, 0, 0})
	DMember(int32_t)                                   LayerChunkSplits                                            ___ OFFSET(get<int32_t>, {0x54C, 4, 0, 0})
	DMember(bool)                                      bSortNavigationAreasByCost                                  ___ OFFSET(get<bool>, {0x550, 1, 1, 0})
	DMember(bool)                                      bIsWorldPartitioned                                         ___ OFFSET(get<bool>, {0x550, 1, 1, 1})
	DMember(bool)                                      bPerformVoxelFiltering                                      ___ OFFSET(get<bool>, {0x550, 1, 1, 2})
	DMember(bool)                                      bMarkLowHeightAreas                                         ___ OFFSET(get<bool>, {0x550, 1, 1, 3})
	DMember(bool)                                      bUseExtraTopCellWhenMarkingAreas                            ___ OFFSET(get<bool>, {0x550, 1, 1, 4})
	DMember(bool)                                      bFilterLowSpanSequences                                     ___ OFFSET(get<bool>, {0x550, 1, 1, 5})
	DMember(bool)                                      bFilterLowSpanFromTileCache                                 ___ OFFSET(get<bool>, {0x550, 1, 1, 6})
	DMember(bool)                                      bDoFullyAsyncNavDataGathering                               ___ OFFSET(get<bool>, {0x550, 1, 1, 7})
	DMember(bool)                                      bUseBetterOffsetsFromCorners                                ___ OFFSET(get<bool>, {0x551, 1, 1, 0})
	DMember(bool)                                      bStoreEmptyTileLayers                                       ___ OFFSET(get<bool>, {0x551, 1, 1, 1})
	DMember(bool)                                      bUseVirtualFilters                                          ___ OFFSET(get<bool>, {0x551, 1, 1, 2})
	DMember(bool)                                      bUseVirtualGeometryFilteringAndDirtying                     ___ OFFSET(get<bool>, {0x551, 1, 1, 3})
	DMember(bool)                                      bAllowNavLinkAsPathEnd                                      ___ OFFSET(get<bool>, {0x551, 1, 1, 4})
	DMember(int32_t)                                   TimeSliceFilterLedgeSpansMaxYProcess                        ___ OFFSET(get<int32_t>, {0x554, 4, 0, 0})
	DMember(double)                                    TimeSliceLongDurationDebug                                  ___ OFFSET(get<double>, {0x558, 8, 0, 0})
	DMember(uint32_t)                                  InvokerTilePriorityBumpDistanceThresholdInTileUnits         ___ OFFSET(get<uint32_t>, {0x560, 4, 0, 0})
	DMember(char)                                      InvokerTilePriorityBumpIncrease                             ___ OFFSET(get<char>, {0x564, 1, 0, 0})
	DMember(bool)                                      bUseVoxelCache                                              ___ OFFSET(get<bool>, {0x568, 1, 1, 0})
	DMember(float)                                     TileSetUpdateInterval                                       ___ OFFSET(get<float>, {0x56C, 4, 0, 0})
	DMember(float)                                     HeuristicScale                                              ___ OFFSET(get<float>, {0x570, 4, 0, 0})
	DMember(float)                                     VerticalDeviationFromGroundCompensation                     ___ OFFSET(get<float>, {0x574, 4, 0, 0})
};

/// Class /Script/NavigationSystem.RecastNavMeshDataChunk
/// Size: 0x0010 (0x000030 - 0x000040)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/NavigationSystem.NavModifierComponent
/// Size: 0x00A0 (0x0000F0 - 0x000190)
class UNavModifierComponent : public UNavRelevantComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	CMember(UClass*)                                   AreaClass                                                   ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	SMember(FVector)                                   FailsafeExtent                                              ___ OFFSET(get<T>, {0xF8, 24, 0, 0})
	CMember(ENavigationDataResolution)                 NavMeshResolution                                           ___ OFFSET(get<T>, {0x110, 1, 0, 0})
	DMember(bool)                                      bIncludeAgentHeight                                         ___ OFFSET(get<bool>, {0x111, 1, 1, 0})
};

/// Class /Script/NavigationSystem.NavModifierVolume
/// Size: 0x0018 (0x0002C8 - 0x0002E0)
class ANavModifierVolume : public AVolume
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UClass*)                                   AreaClass                                                   ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(bool)                                      bMaskFillCollisionUnderneathForNavmesh                      ___ OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	CMember(ENavigationDataResolution)                 NavMeshResolution                                           ___ OFFSET(get<T>, {0x2D9, 1, 0, 0})
};

/// Class /Script/NavigationSystem.NavSystemConfigOverride
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANavSystemConfigOverride : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UNavigationSystemConfig*)                  NavigationSystemConfig                                      ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(ENavSystemOverridePolicy)                  OverridePolicy                                              ___ OFFSET(get<T>, {0x298, 1, 0, 0})
	DMember(bool)                                      bLoadOnClient                                               ___ OFFSET(get<bool>, {0x299, 1, 1, 0})
};

/// Enum /Script/NavigationSystem.ERuntimeGenerationType
/// Size: 0x05
enum ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static0                                                  = 0,
	ERuntimeGenerationType__DynamicModifiersOnly1                                    = 1,
	ERuntimeGenerationType__Dynamic2                                                 = 2,
	ERuntimeGenerationType__LegacyGeneration3                                        = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX4                              = 4
};

/// Enum /Script/NavigationSystem.ENavCostDisplay
/// Size: 0x04
enum ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost0                                                      = 0,
	ENavCostDisplay__HeuristicOnly1                                                  = 1,
	ENavCostDisplay__RealCostOnly2                                                   = 2,
	ENavCostDisplay__ENavCostDisplay_MAX3                                            = 3
};

/// Enum /Script/NavigationSystem.ERecastPartitioning
/// Size: 0x04
enum ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone0                                                   = 0,
	ERecastPartitioning__Watershed1                                                  = 1,
	ERecastPartitioning__ChunkyMonotone2                                             = 2,
	ERecastPartitioning__ERecastPartitioning_MAX3                                    = 3
};

/// Enum /Script/NavigationSystem.EHeightFieldRenderMode
/// Size: 0x03
enum EHeightFieldRenderMode : uint8_t
{
	EHeightFieldRenderMode__Solid0                                                   = 0,
	EHeightFieldRenderMode__Walkable1                                                = 1,
	EHeightFieldRenderMode__EHeightFieldRenderMode_MAX2                              = 2
};

/// Enum /Script/NavigationSystem.ENavSystemOverridePolicy
/// Size: 0x04
enum ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override0                                              = 0,
	ENavSystemOverridePolicy__Append1                                                = 1,
	ENavSystemOverridePolicy__Skip2                                                  = 2,
	ENavSystemOverridePolicy__ENavSystemOverridePolicy_MAX3                          = 3
};

