
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/GeometryCollectionEngine.GeometryCollectionExternalRenderInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGeometryCollectionExternalRenderInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolSubSystem
/// Size: 0x0008 (0x000030 - 0x000038)
class UGeometryCollectionISMPoolSubSystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(AGeometryCollectionISMPoolActor*)          ISMPoolActor                                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
/// Size: 0x02B0 (0x0002A0 - 0x000550)
class UChaosDestructionListener : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	DMember(bool)                                      bIsCollisionEventListeningEnabled                           ___ OFFSET(get<bool>, {0x2A0, 1, 1, 0})
	DMember(bool)                                      bIsBreakingEventListeningEnabled                            ___ OFFSET(get<bool>, {0x2A0, 1, 1, 1})
	DMember(bool)                                      bIsTrailingEventListeningEnabled                            ___ OFFSET(get<bool>, {0x2A0, 1, 1, 2})
	DMember(bool)                                      bIsRemovalEventListeningEnabled                             ___ OFFSET(get<bool>, {0x2A0, 1, 1, 3})
	SMember(FChaosCollisionEventRequestSettings)       CollisionEventRequestSettings                               ___ OFFSET(get<T>, {0x2A4, 24, 0, 0})
	SMember(FChaosBreakingEventRequestSettings)        BreakingEventRequestSettings                                ___ OFFSET(get<T>, {0x2BC, 24, 0, 0})
	SMember(FChaosTrailingEventRequestSettings)        TrailingEventRequestSettings                                ___ OFFSET(get<T>, {0x2D4, 24, 0, 0})
	SMember(FChaosRemovalEventRequestSettings)         RemovalEventRequestSettings                                 ___ OFFSET(get<T>, {0x2EC, 16, 0, 0})
	CMember(TSet<AChaosSolverActor*>)                  ChaosSolverActors                                           ___ OFFSET(get<T>, {0x300, 80, 0, 0})
	CMember(TSet<AGeometryCollectionActor*>)           GeometryCollectionActors                                    ___ OFFSET(get<T>, {0x350, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollisionEvents                                           ___ OFFSET(get<T>, {0x3A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBreakingEvents                                            ___ OFFSET(get<T>, {0x3B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTrailingEvents                                            ___ OFFSET(get<T>, {0x3C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemovalEvents                                             ___ OFFSET(get<T>, {0x3D0, 16, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AGeometryCollectionActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UGeometryCollectionComponent*)             GeometryCollectionComponent                                 ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UGeometryCollectionDebugDrawComponent*)    GeometryCollectionDebugDrawComponent                        ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionCache
/// Size: 0x0028 (0x000028 - 0x000050)
class UGeometryCollectionCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRecordedTransformTrack)                   RecordedData                                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UGeometryCollection*)                      SupportedCollection                                         ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGuid)                                     CompatibleCollectionState                                   ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
/// Size: 0x0620 (0x0005A0 - 0x000BC0)
class UGeometryCollectionComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3008;

public:
	CMember(AChaosSolverActor*)                        ChaosSolverActor                                            ___ OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UGeometryCollection*)                      RestCollection                                              ___ OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(TArray<AFieldSystemActor*>)                InitializationFields                                        ___ OFFSET(get<T>, {0x6A0, 16, 0, 0})
	DMember(bool)                                      Simulating                                                  ___ OFFSET(get<bool>, {0x6B0, 1, 0, 0})
	CMember(EObjectStateTypeEnum)                      ObjectType                                                  ___ OFFSET(get<T>, {0x6B2, 1, 0, 0})
	DMember(int32_t)                                   GravityGroupIndex                                           ___ OFFSET(get<int32_t>, {0x6B4, 4, 0, 0})
	DMember(bool)                                      bForceMotionBlur                                            ___ OFFSET(get<bool>, {0x6B8, 1, 0, 0})
	DMember(bool)                                      EnableClustering                                            ___ OFFSET(get<bool>, {0x6B9, 1, 0, 0})
	DMember(int32_t)                                   ClusterGroupIndex                                           ___ OFFSET(get<int32_t>, {0x6BC, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevel                                             ___ OFFSET(get<int32_t>, {0x6C0, 4, 0, 0})
	DMember(int32_t)                                   MaxSimulatedLevel                                           ___ OFFSET(get<int32_t>, {0x6C4, 4, 0, 0})
	CMember(EDamageModelTypeEnum)                      DamageModel                                                 ___ OFFSET(get<T>, {0x6C8, 1, 0, 0})
	CMember(TArray<float>)                             DamageThreshold                                             ___ OFFSET(get<T>, {0x6D0, 16, 0, 0})
	DMember(bool)                                      bUseSizeSpecificDamageThreshold                             ___ OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	SMember(FGeometryCollectionDamagePropagationData)  DamagePropagationData                                       ___ OFFSET(get<T>, {0x6E4, 12, 0, 0})
	DMember(bool)                                      bEnableDamageFromCollision                                  ___ OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(bool)                                      bAllowRemovalOnSleep                                        ___ OFFSET(get<bool>, {0x6F1, 1, 0, 0})
	DMember(bool)                                      bAllowRemovalOnBreak                                        ___ OFFSET(get<bool>, {0x6F2, 1, 0, 0})
	CMember(EClusterConnectionTypeEnum)                ClusterConnectionType                                       ___ OFFSET(get<T>, {0x6F3, 1, 0, 0})
	DMember(int32_t)                                   CollisionGroup                                              ___ OFFSET(get<int32_t>, {0x6F4, 4, 0, 0})
	DMember(float)                                     CollisionSampleFraction                                     ___ OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(float)                                     LinearEtherDrag                                             ___ OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     AngularEtherDrag                                            ___ OFFSET(get<float>, {0x700, 4, 0, 0})
	CMember(UChaosPhysicalMaterial*)                   PhysicalMaterial                                            ___ OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(EInitialVelocityTypeEnum)                  InitialVelocityType                                         ___ OFFSET(get<T>, {0x710, 1, 0, 0})
	SMember(FVector)                                   InitialLinearVelocity                                       ___ OFFSET(get<T>, {0x718, 24, 0, 0})
	SMember(FVector)                                   InitialAngularVelocity                                      ___ OFFSET(get<T>, {0x730, 24, 0, 0})
	CMember(UPhysicalMaterial*)                        PhysicalMaterialOverride                                    ___ OFFSET(get<T>, {0x748, 8, 0, 0})
	SMember(FGeomComponentCacheParameters)             CacheParameters                                             ___ OFFSET(get<T>, {0x750, 80, 0, 0})
	CMember(TArray<FTransform>)                        RestTransforms                                              ___ OFFSET(get<T>, {0x7A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyGeometryCollectionPhysicsStateChange                  ___ OFFSET(get<T>, {0x7B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyGeometryCollectionPhysicsLoadingStateChange           ___ OFFSET(get<T>, {0x7C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosBreakEvent                                           ___ OFFSET(get<T>, {0x7E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosRemovalEvent                                         ___ OFFSET(get<T>, {0x7F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosCrumblingEvent                                       ___ OFFSET(get<T>, {0x808, 16, 0, 0})
	DMember(float)                                     DesiredCacheTime                                            ___ OFFSET(get<float>, {0x828, 4, 0, 0})
	DMember(bool)                                      CachePlayback                                               ___ OFFSET(get<bool>, {0x82C, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosPhysicsCollision                                     ___ OFFSET(get<T>, {0x830, 16, 0, 0})
	DMember(bool)                                      bNotifyBreaks                                               ___ OFFSET(get<bool>, {0x840, 1, 0, 0})
	DMember(bool)                                      bNotifyCollisions                                           ___ OFFSET(get<bool>, {0x841, 1, 0, 0})
	DMember(bool)                                      bNotifyTrailing                                             ___ OFFSET(get<bool>, {0x842, 1, 0, 0})
	DMember(bool)                                      bNotifyRemovals                                             ___ OFFSET(get<bool>, {0x843, 1, 0, 0})
	DMember(bool)                                      bNotifyCrumblings                                           ___ OFFSET(get<bool>, {0x844, 1, 0, 0})
	DMember(bool)                                      bCrumblingEventIncludesChildren                             ___ OFFSET(get<bool>, {0x845, 1, 0, 0})
	DMember(bool)                                      bNotifyGlobalBreaks                                         ___ OFFSET(get<bool>, {0x846, 1, 0, 0})
	DMember(bool)                                      bNotifyGlobalCollisions                                     ___ OFFSET(get<bool>, {0x847, 1, 0, 0})
	DMember(bool)                                      bNotifyGlobalRemovals                                       ___ OFFSET(get<bool>, {0x848, 1, 0, 0})
	DMember(bool)                                      bNotifyGlobalCrumblings                                     ___ OFFSET(get<bool>, {0x849, 1, 0, 0})
	DMember(bool)                                      bGlobalCrumblingEventIncludesChildren                       ___ OFFSET(get<bool>, {0x84A, 1, 0, 0})
	DMember(bool)                                      bStoreVelocities                                            ___ OFFSET(get<bool>, {0x84B, 1, 0, 0})
	DMember(bool)                                      bShowBoneColors                                             ___ OFFSET(get<bool>, {0x84C, 1, 0, 0})
	DMember(bool)                                      bUseRootProxyForNavigation                                  ___ OFFSET(get<bool>, {0x84D, 1, 0, 0})
	DMember(bool)                                      bUpdateNavigationInTick                                     ___ OFFSET(get<bool>, {0x84E, 1, 0, 0})
	CMember(AGeometryCollectionISMPoolActor*)          ISMPool                                                     ___ OFFSET(get<T>, {0x850, 8, 0, 0})
	DMember(bool)                                      bAutoAssignISMPool                                          ___ OFFSET(get<bool>, {0x858, 1, 0, 0})
	DMember(bool)                                      bOverrideCustomRenderer                                     ___ OFFSET(get<bool>, {0x859, 1, 0, 0})
	CMember(UClass*)                                   CustomRendererType                                          ___ OFFSET(get<T>, {0x860, 8, 0, 0})
	CMember(UGeometryCollectionExternalRenderInterface*) CustomRenderer                                            ___ OFFSET(get<T>, {0x868, 8, 0, 0})
	DMember(bool)                                      bEnableReplication                                          ___ OFFSET(get<bool>, {0x870, 1, 0, 0})
	DMember(bool)                                      bEnableAbandonAfterLevel                                    ___ OFFSET(get<bool>, {0x871, 1, 0, 0})
	SMember(FName)                                     AbandonedCollisionProfileName                               ___ OFFSET(get<T>, {0x874, 4, 0, 0})
	CMember(TArray<FName>)                             CollisionProfilePerLevel                                    ___ OFFSET(get<T>, {0x878, 16, 0, 0})
	DMember(int32_t)                                   ReplicationAbandonClusterLevel                              ___ OFFSET(get<int32_t>, {0x898, 4, 0, 0})
	DMember(int32_t)                                   ReplicationAbandonAfterLevel                                ___ OFFSET(get<int32_t>, {0x89C, 4, 0, 0})
	DMember(int32_t)                                   ReplicationMaxPositionAndVelocityCorrectionLevel            ___ OFFSET(get<int32_t>, {0x8A0, 4, 0, 0})
	SMember(FGeometryCollectionRepData)                RepData                                                     ___ OFFSET(get<T>, {0x8A8, 56, 0, 0})
	CMember(UBodySetup*)                               DummyBodySetup                                              ___ OFFSET(get<T>, {0xB80, 8, 0, 0})
	CMember(UChaosGameplayEventDispatcher*)            EventDispatcher                                             ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
	CMember(TArray<UInstancedStaticMeshComponent*>)    EmbeddedGeometryComponents                                  ___ OFFSET(get<T>, {0xB90, 16, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
/// Size: 0x00C0 (0x000290 - 0x000350)
class AGeometryCollectionDebugDrawActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FGeometryCollectionDebugDrawWarningMessage) WarningMessage                                             ___ OFFSET(get<T>, {0x290, 1, 0, 0})
	SMember(FGeometryCollectionDebugDrawActorSelectedRigidBody) SelectedRigidBody                                  ___ OFFSET(get<T>, {0x298, 24, 0, 0})
	DMember(bool)                                      bDebugDrawWholeCollection                                   ___ OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	DMember(bool)                                      bDebugDrawHierarchy                                         ___ OFFSET(get<bool>, {0x2B1, 1, 0, 0})
	DMember(bool)                                      bDebugDrawClustering                                        ___ OFFSET(get<bool>, {0x2B2, 1, 0, 0})
	CMember(EGeometryCollectionDebugDrawActorHideGeometry) HideGeometry                                            ___ OFFSET(get<T>, {0x2B3, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyId                                            ___ OFFSET(get<bool>, {0x2B4, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyCollision                                     ___ OFFSET(get<bool>, {0x2B5, 1, 0, 0})
	DMember(bool)                                      bCollisionAtOrigin                                          ___ OFFSET(get<bool>, {0x2B6, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyTransform                                     ___ OFFSET(get<bool>, {0x2B7, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyInertia                                       ___ OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyVelocity                                      ___ OFFSET(get<bool>, {0x2B9, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyForce                                         ___ OFFSET(get<bool>, {0x2BA, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyInfos                                         ___ OFFSET(get<bool>, {0x2BB, 1, 0, 0})
	DMember(bool)                                      bShowTransformIndex                                         ___ OFFSET(get<bool>, {0x2BC, 1, 0, 0})
	DMember(bool)                                      bShowTransform                                              ___ OFFSET(get<bool>, {0x2BD, 1, 0, 0})
	DMember(bool)                                      bShowParent                                                 ___ OFFSET(get<bool>, {0x2BE, 1, 0, 0})
	DMember(bool)                                      bShowLevel                                                  ___ OFFSET(get<bool>, {0x2BF, 1, 0, 0})
	DMember(bool)                                      bShowConnectivityEdges                                      ___ OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bShowGeometryIndex                                          ___ OFFSET(get<bool>, {0x2C1, 1, 0, 0})
	DMember(bool)                                      bShowGeometryTransform                                      ___ OFFSET(get<bool>, {0x2C2, 1, 0, 0})
	DMember(bool)                                      bShowBoundingBox                                            ___ OFFSET(get<bool>, {0x2C3, 1, 0, 0})
	DMember(bool)                                      bShowFaces                                                  ___ OFFSET(get<bool>, {0x2C4, 1, 0, 0})
	DMember(bool)                                      bShowFaceIndices                                            ___ OFFSET(get<bool>, {0x2C5, 1, 0, 0})
	DMember(bool)                                      bShowFaceNormals                                            ___ OFFSET(get<bool>, {0x2C6, 1, 0, 0})
	DMember(bool)                                      bShowSingleFace                                             ___ OFFSET(get<bool>, {0x2C7, 1, 0, 0})
	DMember(int32_t)                                   SingleFaceIndex                                             ___ OFFSET(get<int32_t>, {0x2C8, 4, 0, 0})
	DMember(bool)                                      bShowVertices                                               ___ OFFSET(get<bool>, {0x2CC, 1, 0, 0})
	DMember(bool)                                      bShowVertexIndices                                          ___ OFFSET(get<bool>, {0x2CD, 1, 0, 0})
	DMember(bool)                                      bShowVertexNormals                                          ___ OFFSET(get<bool>, {0x2CE, 1, 0, 0})
	DMember(bool)                                      bUseActiveVisualization                                     ___ OFFSET(get<bool>, {0x2CF, 1, 0, 0})
	DMember(float)                                     PointThickness                                              ___ OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     LineThickness                                               ___ OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(bool)                                      bTextShadow                                                 ___ OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	DMember(float)                                     TextScale                                                   ___ OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     NormalScale                                                 ___ OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(float)                                     AxisScale                                                   ___ OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     ArrowScale                                                  ___ OFFSET(get<float>, {0x2E8, 4, 0, 0})
	SMember(FColor)                                    RigidBodyIdColor                                            ___ OFFSET(get<T>, {0x2EC, 4, 0, 0})
	DMember(float)                                     RigidBodyTransformScale                                     ___ OFFSET(get<float>, {0x2F0, 4, 0, 0})
	SMember(FColor)                                    RigidBodyCollisionColor                                     ___ OFFSET(get<T>, {0x2F4, 4, 0, 0})
	SMember(FColor)                                    RigidBodyInertiaColor                                       ___ OFFSET(get<T>, {0x2F8, 4, 0, 0})
	SMember(FColor)                                    RigidBodyVelocityColor                                      ___ OFFSET(get<T>, {0x2FC, 4, 0, 0})
	SMember(FColor)                                    RigidBodyForceColor                                         ___ OFFSET(get<T>, {0x300, 4, 0, 0})
	SMember(FColor)                                    RigidBodyInfoColor                                          ___ OFFSET(get<T>, {0x304, 4, 0, 0})
	SMember(FColor)                                    TransformIndexColor                                         ___ OFFSET(get<T>, {0x308, 4, 0, 0})
	DMember(float)                                     TransformScale                                              ___ OFFSET(get<float>, {0x30C, 4, 0, 0})
	SMember(FColor)                                    LevelColor                                                  ___ OFFSET(get<T>, {0x310, 4, 0, 0})
	SMember(FColor)                                    ParentColor                                                 ___ OFFSET(get<T>, {0x314, 4, 0, 0})
	DMember(float)                                     ConnectivityEdgeThickness                                   ___ OFFSET(get<float>, {0x318, 4, 0, 0})
	SMember(FColor)                                    GeometryIndexColor                                          ___ OFFSET(get<T>, {0x31C, 4, 0, 0})
	DMember(float)                                     GeometryTransformScale                                      ___ OFFSET(get<float>, {0x320, 4, 0, 0})
	SMember(FColor)                                    BoundingBoxColor                                            ___ OFFSET(get<T>, {0x324, 4, 0, 0})
	SMember(FColor)                                    FaceColor                                                   ___ OFFSET(get<T>, {0x328, 4, 0, 0})
	SMember(FColor)                                    FaceIndexColor                                              ___ OFFSET(get<T>, {0x32C, 4, 0, 0})
	SMember(FColor)                                    FaceNormalColor                                             ___ OFFSET(get<T>, {0x330, 4, 0, 0})
	SMember(FColor)                                    SingleFaceColor                                             ___ OFFSET(get<T>, {0x334, 4, 0, 0})
	SMember(FColor)                                    VertexColor                                                 ___ OFFSET(get<T>, {0x338, 4, 0, 0})
	SMember(FColor)                                    VertexIndexColor                                            ___ OFFSET(get<T>, {0x33C, 4, 0, 0})
	SMember(FColor)                                    VertexNormalColor                                           ___ OFFSET(get<T>, {0x340, 4, 0, 0})
	CMember(UBillboardComponent*)                      SpriteComponent                                             ___ OFFSET(get<T>, {0x348, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(AGeometryCollectionDebugDrawActor*)        GeometryCollectionDebugDrawActor                            ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(AGeometryCollectionRenderLevelSetActor*)   GeometryCollectionRenderLevelSetActor                       ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AGeometryCollectionISMPoolActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UGeometryCollectionISMPoolComponent*)      ISMPoolComp                                                 ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UGeometryCollectionISMPoolDebugDrawComponent*) ISMPoolDebugDrawComp                                    ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolComponent
/// Size: 0x00D0 (0x0002A0 - 0x000370)
class UGeometryCollectionISMPoolComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolRenderer
/// Size: 0x00A8 (0x000028 - 0x0000D0)
class UGeometryCollectionISMPoolRenderer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(AGeometryCollectionISMPoolActor*)          ISMPoolActor                                                ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollection
/// Size: 0x01C0 (0x000028 - 0x0001E8)
class UGeometryCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	DMember(bool)                                      EnableClustering                                            ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   ClusterGroupIndex                                           ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevel                                             ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(EDamageModelTypeEnum)                      DamageModel                                                 ___ OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TArray<float>)                             DamageThreshold                                             ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bUseSizeSpecificDamageThreshold                             ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      PerClusterOnlyDamageThreshold                               ___ OFFSET(get<bool>, {0x59, 1, 0, 0})
	SMember(FGeometryCollectionDamagePropagationData)  DamagePropagationData                                       ___ OFFSET(get<T>, {0x5C, 12, 0, 0})
	CMember(EClusterConnectionTypeEnum)                ClusterConnectionType                                       ___ OFFSET(get<T>, {0x68, 1, 0, 0})
	DMember(float)                                     ConnectionGraphBoundsFilteringMargin                        ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	CMember(TArray<UMaterialInterface*>)               Materials                                                   ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FGeometryCollectionEmbeddedExemplar>) EmbeddedGeometryExemplar                                  ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bUseFullPrecisionUVs                                        ___ OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bStripOnCook                                                ___ OFFSET(get<bool>, {0x91, 1, 0, 0})
	DMember(bool)                                      bStripRenderDataOnCook                                      ___ OFFSET(get<bool>, {0x92, 1, 0, 0})
	CMember(UClass*)                                   CustomRendererType                                          ___ OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FGeometryCollectionProxyMeshData)          RootProxyData                                               ___ OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FGeometryCollectionAutoInstanceMesh>) AutoInstanceMeshes                                        ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      EnableNanite                                                ___ OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bConvertVertexColorsToSRGB                                  ___ OFFSET(get<bool>, {0xC1, 1, 0, 0})
	CMember(UPhysicalMaterial*)                        PhysicsMaterial                                             ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bDensityFromPhysicsMaterial                                 ___ OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bMassAsDensity                                              ___ OFFSET(get<bool>, {0xD1, 1, 0, 0})
	DMember(float)                                     Mass                                                        ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     MinimumMassClamp                                            ___ OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(bool)                                      bImportCollisionFromSource                                  ___ OFFSET(get<bool>, {0xDC, 1, 0, 0})
	DMember(bool)                                      bScaleOnRemoval                                             ___ OFFSET(get<bool>, {0xDD, 1, 0, 0})
	DMember(bool)                                      bRemoveOnMaxSleep                                           ___ OFFSET(get<bool>, {0xDE, 1, 0, 0})
	SMember(FVector2D)                                 MaximumSleepTime                                            ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FVector2D)                                 RemovalDuration                                             ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(bool)                                      bSlowMovingAsSleeping                                       ___ OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(float)                                     SlowMovingVelocityThreshold                                 ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	CMember(TArray<FGeometryCollectionSizeSpecificData>) SizeSpecificData                                          ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      EnableRemovePiecesOnFracture                                ___ OFFSET(get<bool>, {0x118, 1, 0, 0})
	CMember(TArray<UMaterialInterface*>)               RemoveOnFractureMaterials                                   ___ OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(UDataflow*)                                DataflowAsset                                               ___ OFFSET(get<T>, {0x130, 8, 0, 0})
	SMember(FString)                                   DataflowTerminal                                            ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TMap<FString, FString>)                    Overrides                                                   ___ OFFSET(get<T>, {0x148, 80, 0, 0})
	SMember(FGuid)                                     PersistentGuid                                              ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FGuid)                                     StateGuid                                                   ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
	DMember(int32_t)                                   RootIndex                                                   ___ OFFSET(get<int32_t>, {0x1B8, 4, 0, 0})
	DMember(int32_t)                                   BoneSelectedMaterialIndex                                   ___ OFFSET(get<int32_t>, {0x1BC, 4, 0, 0})
	CMember(UMaterialInterface*)                       BoneSelectedMaterial                                        ___ OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(TArray<UAssetUserData*>)                   AssetUserData                                               ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
/// Size: 0x00F0 (0x000290 - 0x000380)
class AGeometryCollectionRenderLevelSetActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(UVolumeTexture*)                           TargetVolumeTexture                                         ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UMaterial*)                                RayMarchMaterial                                            ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(float)                                     SurfaceTolerance                                            ___ OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     Isovalue                                                    ___ OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(bool)                                      Enabled                                                     ___ OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      RenderVolumeBoundingBox                                     ___ OFFSET(get<bool>, {0x2A9, 1, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolDebugDrawComponent
/// Size: 0x0010 (0x0005C0 - 0x0005D0)
class UGeometryCollectionISMPoolDebugDrawComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	DMember(bool)                                      bShowGlobalStats                                            ___ OFFSET(get<bool>, {0x5B8, 1, 0, 0})
	DMember(bool)                                      bShowStats                                                  ___ OFFSET(get<bool>, {0x5B9, 1, 0, 0})
	DMember(bool)                                      bShowBounds                                                 ___ OFFSET(get<bool>, {0x5BA, 1, 0, 0})
	CMember(UInstancedStaticMeshComponent*)            SelectedComponent                                           ___ OFFSET(get<T>, {0x5C0, 8, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventData
/// Size: 0x0038 (0x000000 - 0x000038)
class FChaosBreakingEventData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(float)                                     Mass                                                        ___ OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventData
/// Size: 0x0080 (0x000000 - 0x000080)
class FChaosCollisionEventData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Velocity1                                                   ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Velocity2                                                   ___ OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(float)                                     Mass1                                                       ___ OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     Mass2                                                       ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FVector)                                   Impulse                                                     ___ OFFSET(get<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventData
/// Size: 0x0020 (0x000000 - 0x000020)
class FChaosRemovalEventData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Mass                                                        ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               ___ OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventData
/// Size: 0x0050 (0x000000 - 0x000050)
class FChaosTrailingEventData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(float)                                     Mass                                                        ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               ___ OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepData
/// Size: 0x0038 (0x000000 - 0x000038)
class FGeometryCollectionRepData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/GeometryCollectionEngine.GeomComponentCacheParameters
/// Size: 0x0050 (0x000000 - 0x000050)
class FGeomComponentCacheParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(EGeometryCollectionCacheType)              CacheMode                                                   ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UGeometryCollectionCache*)                 TargetCache                                                 ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ReverseCacheBeginTime                                       ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      SaveCollisionData                                           ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      DoGenerateCollisionData                                     ___ OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(int32_t)                                   CollisionDataSizeMax                                        ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      DoCollisionDataSpatialHash                                  ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(float)                                     CollisionDataSpatialHashRadius                              ___ OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   MaxCollisionPerCell                                         ___ OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(bool)                                      SaveBreakingData                                            ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      DoGenerateBreakingData                                      ___ OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   BreakingDataSizeMax                                         ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      DoBreakingDataSpatialHash                                   ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     BreakingDataSpatialHashRadius                               ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   MaxBreakingPerCell                                          ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      SaveTrailingData                                            ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      DoGenerateTrailingData                                      ___ OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(int32_t)                                   TrailingDataSizeMax                                         ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     TrailingMinSpeedThreshold                                   ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     TrailingMinVolumeThreshold                                  ___ OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDamagePropagationData
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryCollectionDamagePropagationData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     BreakDamagePropagationFactor                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ShockDamagePropagationFactor                                ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosBreakingEventRequestSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinRadius                                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinMass                                                     ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosBreakingSortMethod)                  SortMethod                                                  ___ OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosCollisionEventRequestSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberResults                                            ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinImpulse                                                  ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosCollisionSortMethod)                 SortMethod                                                  ___ OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventRequestSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FChaosRemovalEventRequestSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EChaosRemovalSortMethod)                   SortMethod                                                  ___ OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosTrailingEventRequestSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinAngularSpeed                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosTrailingSortMethod)                  SortMethod                                                  ___ OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FGeometryCollectionDebugDrawWarningMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryCollectionDebugDrawActorSelectedRigidBody : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ID                                                          ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(AChaosSolverActor*)                        Solver                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(AGeometryCollectionActor*)                 GeometryCollection                                          ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSource
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FGeometryCollectionSource : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSoftObjectPath)                           SourceGeometryObject                                        ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                LocalTransform                                              ___ OFFSET(get<T>, {0x20, 96, 0, 0})
	CMember(TArray<UMaterialInterface*>)               SourceMaterial                                              ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<float>)                             InstanceCustomData                                          ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      bAddInternalMaterials                                       ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bSplitComponents                                            ___ OFFSET(get<bool>, {0xA1, 1, 0, 0})
	DMember(bool)                                      bSetInternalFromMaterialIndex                               ___ OFFSET(get<bool>, {0xA2, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
/// Size: 0x0030 (0x000000 - 0x000030)
class FGeometryCollectionAutoInstanceMesh : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UStaticMesh*)                              Mesh                                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               Materials                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   NumInstances                                                ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TArray<float>)                             CustomData                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeometryCollectionEmbeddedExemplar : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSoftObjectPath)                           StaticMeshExemplar                                          ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     StartCullDistance                                           ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     EndCullDistance                                             ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   InstanceCount                                               ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionLevelSetData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryCollectionLevelSetData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MinLevelSetResolution                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaxLevelSetResolution                                       ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MinClusterLevelSetResolution                                ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevelSetResolution                                ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionParticleData
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryCollectionCollisionParticleData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     CollisionParticlesFraction                                  ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaximumCollisionParticles                                   ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionTypeData
/// Size: 0x0024 (0x000000 - 0x000024)
class FGeometryCollectionCollisionTypeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(ECollisionTypeEnum)                        CollisionType                                               ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EImplicitTypeEnum)                         ImplicitType                                                ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FGeometryCollectionLevelSetData)           LevelSet                                                    ___ OFFSET(get<T>, {0x4, 16, 0, 0})
	SMember(FGeometryCollectionCollisionParticleData)  CollisionParticles                                          ___ OFFSET(get<T>, {0x14, 8, 0, 0})
	DMember(float)                                     CollisionObjectReductionPercentage                          ___ OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     CollisionMarginFraction                                     ___ OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeometryCollectionSizeSpecificData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     MaxSize                                                     ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FGeometryCollectionCollisionTypeData>) CollisionShapes                                          ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   DamageThreshold                                             ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionProxyMeshData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryCollectionProxyMeshData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UStaticMesh*>)                      ProxyMeshes                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRenderResourceSizeInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryCollectionRenderResourceSizeInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint64_t)                                  MeshResourcesSize                                           ___ OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
	DMember(uint64_t)                                  NaniteResourcesSize                                         ___ OFFSET(get<uint64_t>, {0x8, 8, 0, 0})
};

/// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
/// Size: 0x04
enum ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active0                                          = 0,
	ECollectionAttributeEnum__Chaos_DynamicState1                                    = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup2                                  = 2,
	ECollectionAttributeEnum__Chaos_Max3                                             = 3
};

/// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
/// Size: 0x02
enum ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform0                                          = 0,
	ECollectionGroupEnum__Chaos_Max1                                                 = 1
};

/// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
/// Size: 0x06
enum EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone0                                              = 0,
	EChaosBreakingSortMethod__SortByHighestMass1                                     = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed2                                    = 2,
	EChaosBreakingSortMethod__SortByNearestFirst3                                    = 3,
	EChaosBreakingSortMethod__Count4                                                 = 4,
	EChaosBreakingSortMethod__EChaosBreakingSortMethod_MAX5                          = 5
};

/// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
/// Size: 0x07
enum EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone0                                             = 0,
	EChaosCollisionSortMethod__SortByHighestMass1                                    = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed2                                   = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse3                                 = 3,
	EChaosCollisionSortMethod__SortByNearestFirst4                                   = 4,
	EChaosCollisionSortMethod__Count5                                                = 5,
	EChaosCollisionSortMethod__EChaosCollisionSortMethod_MAX6                        = 6
};

/// Enum /Script/GeometryCollectionEngine.EChaosRemovalSortMethod
/// Size: 0x05
enum EChaosRemovalSortMethod : uint8_t
{
	EChaosRemovalSortMethod__SortNone0                                               = 0,
	EChaosRemovalSortMethod__SortByHighestMass1                                      = 1,
	EChaosRemovalSortMethod__SortByNearestFirst2                                     = 2,
	EChaosRemovalSortMethod__Count3                                                  = 3,
	EChaosRemovalSortMethod__EChaosRemovalSortMethod_MAX4                            = 4
};

/// Enum /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
/// Size: 0x06
enum EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone0                                              = 0,
	EChaosTrailingSortMethod__SortByHighestMass1                                     = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed2                                    = 2,
	EChaosTrailingSortMethod__SortByNearestFirst3                                    = 3,
	EChaosTrailingSortMethod__Count4                                                 = 4,
	EChaosTrailingSortMethod__EChaosTrailingSortMethod_MAX5                          = 5
};

/// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
/// Size: 0x06
enum EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone0                         = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision1                = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected2                     = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection3              = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll4                          = 4,
	EGeometryCollectionDebugDrawActorHideGeometry__EGeometryCollectionDebugDrawActorHideGeometry_MAX5 = 5
};

