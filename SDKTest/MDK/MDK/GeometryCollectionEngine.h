
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
	CMember(AGeometryCollectionISMPoolActor*)          ISMPoolActor                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
/// Size: 0x02B0 (0x0002A0 - 0x000550)
class UChaosDestructionListener : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	DMember(bool)                                      bIsCollisionEventListeningEnabled                           OFFSET(get<bool>, {0x2A0, 1, 1, 0})
	DMember(bool)                                      bIsBreakingEventListeningEnabled                            OFFSET(get<bool>, {0x2A0, 1, 1, 1})
	DMember(bool)                                      bIsTrailingEventListeningEnabled                            OFFSET(get<bool>, {0x2A0, 1, 1, 2})
	DMember(bool)                                      bIsRemovalEventListeningEnabled                             OFFSET(get<bool>, {0x2A0, 1, 1, 3})
	SMember(FChaosCollisionEventRequestSettings)       CollisionEventRequestSettings                               OFFSET(get<T>, {0x2A4, 24, 0, 0})
	SMember(FChaosBreakingEventRequestSettings)        BreakingEventRequestSettings                                OFFSET(get<T>, {0x2BC, 24, 0, 0})
	SMember(FChaosTrailingEventRequestSettings)        TrailingEventRequestSettings                                OFFSET(get<T>, {0x2D4, 24, 0, 0})
	SMember(FChaosRemovalEventRequestSettings)         RemovalEventRequestSettings                                 OFFSET(get<T>, {0x2EC, 16, 0, 0})
	CMember(TSet<AChaosSolverActor*>)                  ChaosSolverActors                                           OFFSET(get<T>, {0x300, 80, 0, 0})
	CMember(TSet<AGeometryCollectionActor*>)           GeometryCollectionActors                                    OFFSET(get<T>, {0x350, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollisionEvents                                           OFFSET(get<T>, {0x3A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBreakingEvents                                            OFFSET(get<T>, {0x3B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTrailingEvents                                            OFFSET(get<T>, {0x3C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemovalEvents                                             OFFSET(get<T>, {0x3D0, 16, 0, 0})
};



	/// Functions
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	// void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);           // [0x574a470] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
	// void SortRemovalEvents(TArray<FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod);               // [0x5749c98] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	// void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);       // [0x57494c0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	// void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);           // [0x5748ce8] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	// void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings);                                    // [0x5748c3c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	// void SetTrailingEventEnabled(bool bIsEnabled);                                                                           // [0x5748ba8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
	// void SetRemovalEventRequestSettings(FChaosRemovalEventRequestSettings& InSettings);                                      // [0x5748854] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
	// void SetRemovalEventEnabled(bool bIsEnabled);                                                                            // [0x57487c0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	// void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings);                                  // [0x5747c10] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	// void SetCollisionEventEnabled(bool bIsEnabled);                                                                          // [0x5747b80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	// void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings);                                    // [0x5747ad4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	// void SetBreakingEventEnabled(bool bIsEnabled);                                                                           // [0x5747a40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	// void RemoveGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);                                   // [0x5746f0c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	// void RemoveChaosSolverActor(AChaosSolverActor* ChaosSolverActor);                                                        // [0x56ba1a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	// bool IsEventListening();                                                                                                 // [0x5746b90] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	// void AddGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);                                      // [0x5745528] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	// void AddChaosSolverActor(AChaosSolverActor* ChaosSolverActor);                                                           // [0x56ba1a4] Final|RequiredAPI|Native|Public|BlueprintCallable 
/// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AGeometryCollectionActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UGeometryCollectionComponent*)             GeometryCollectionComponent                                 OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UGeometryCollectionDebugDrawComponent*)    GeometryCollectionDebugDrawComponent                        OFFSET(get<T>, {0x298, 8, 0, 0})
};



	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	// bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);                                                      // [0x5746be4] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
/// Class /Script/GeometryCollectionEngine.GeometryCollectionCache
/// Size: 0x0028 (0x000028 - 0x000050)
class UGeometryCollectionCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRecordedTransformTrack)                   RecordedData                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UGeometryCollection*)                      SupportedCollection                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGuid)                                     CompatibleCollectionState                                   OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
/// Size: 0x0620 (0x0005A0 - 0x000BC0)
class UGeometryCollectionComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3008;

public:
	CMember(AChaosSolverActor*)                        ChaosSolverActor                                            OFFSET(get<T>, {0x5A8, 8, 0, 0})
	CMember(UGeometryCollection*)                      RestCollection                                              OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(TArray<AFieldSystemActor*>)                InitializationFields                                        OFFSET(get<T>, {0x6A0, 16, 0, 0})
	DMember(bool)                                      Simulating                                                  OFFSET(get<bool>, {0x6B0, 1, 0, 0})
	CMember(EObjectStateTypeEnum)                      ObjectType                                                  OFFSET(get<T>, {0x6B2, 1, 0, 0})
	DMember(int32_t)                                   GravityGroupIndex                                           OFFSET(get<int32_t>, {0x6B4, 4, 0, 0})
	DMember(bool)                                      bForceMotionBlur                                            OFFSET(get<bool>, {0x6B8, 1, 0, 0})
	DMember(bool)                                      EnableClustering                                            OFFSET(get<bool>, {0x6B9, 1, 0, 0})
	DMember(int32_t)                                   ClusterGroupIndex                                           OFFSET(get<int32_t>, {0x6BC, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevel                                             OFFSET(get<int32_t>, {0x6C0, 4, 0, 0})
	DMember(int32_t)                                   MaxSimulatedLevel                                           OFFSET(get<int32_t>, {0x6C4, 4, 0, 0})
	CMember(EDamageModelTypeEnum)                      DamageModel                                                 OFFSET(get<T>, {0x6C8, 1, 0, 0})
	CMember(TArray<float>)                             DamageThreshold                                             OFFSET(get<T>, {0x6D0, 16, 0, 0})
	DMember(bool)                                      bUseSizeSpecificDamageThreshold                             OFFSET(get<bool>, {0x6E0, 1, 0, 0})
	SMember(FGeometryCollectionDamagePropagationData)  DamagePropagationData                                       OFFSET(get<T>, {0x6E4, 12, 0, 0})
	DMember(bool)                                      bEnableDamageFromCollision                                  OFFSET(get<bool>, {0x6F0, 1, 0, 0})
	DMember(bool)                                      bAllowRemovalOnSleep                                        OFFSET(get<bool>, {0x6F1, 1, 0, 0})
	DMember(bool)                                      bAllowRemovalOnBreak                                        OFFSET(get<bool>, {0x6F2, 1, 0, 0})
	CMember(EClusterConnectionTypeEnum)                ClusterConnectionType                                       OFFSET(get<T>, {0x6F3, 1, 0, 0})
	DMember(int32_t)                                   CollisionGroup                                              OFFSET(get<int32_t>, {0x6F4, 4, 0, 0})
	DMember(float)                                     CollisionSampleFraction                                     OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(float)                                     LinearEtherDrag                                             OFFSET(get<float>, {0x6FC, 4, 0, 0})
	DMember(float)                                     AngularEtherDrag                                            OFFSET(get<float>, {0x700, 4, 0, 0})
	CMember(UChaosPhysicalMaterial*)                   PhysicalMaterial                                            OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(EInitialVelocityTypeEnum)                  InitialVelocityType                                         OFFSET(get<T>, {0x710, 1, 0, 0})
	SMember(FVector)                                   InitialLinearVelocity                                       OFFSET(get<T>, {0x718, 24, 0, 0})
	SMember(FVector)                                   InitialAngularVelocity                                      OFFSET(get<T>, {0x730, 24, 0, 0})
	CMember(UPhysicalMaterial*)                        PhysicalMaterialOverride                                    OFFSET(get<T>, {0x748, 8, 0, 0})
	SMember(FGeomComponentCacheParameters)             CacheParameters                                             OFFSET(get<T>, {0x750, 80, 0, 0})
	CMember(TArray<FTransform>)                        RestTransforms                                              OFFSET(get<T>, {0x7A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyGeometryCollectionPhysicsStateChange                  OFFSET(get<T>, {0x7B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyGeometryCollectionPhysicsLoadingStateChange           OFFSET(get<T>, {0x7C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosBreakEvent                                           OFFSET(get<T>, {0x7E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosRemovalEvent                                         OFFSET(get<T>, {0x7F8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosCrumblingEvent                                       OFFSET(get<T>, {0x808, 16, 0, 0})
	DMember(float)                                     DesiredCacheTime                                            OFFSET(get<float>, {0x828, 4, 0, 0})
	DMember(bool)                                      CachePlayback                                               OFFSET(get<bool>, {0x82C, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosPhysicsCollision                                     OFFSET(get<T>, {0x830, 16, 0, 0})
	DMember(bool)                                      bNotifyBreaks                                               OFFSET(get<bool>, {0x840, 1, 0, 0})
	DMember(bool)                                      bNotifyCollisions                                           OFFSET(get<bool>, {0x841, 1, 0, 0})
	DMember(bool)                                      bNotifyTrailing                                             OFFSET(get<bool>, {0x842, 1, 0, 0})
	DMember(bool)                                      bNotifyRemovals                                             OFFSET(get<bool>, {0x843, 1, 0, 0})
	DMember(bool)                                      bNotifyCrumblings                                           OFFSET(get<bool>, {0x844, 1, 0, 0})
	DMember(bool)                                      bCrumblingEventIncludesChildren                             OFFSET(get<bool>, {0x845, 1, 0, 0})
	DMember(bool)                                      bNotifyGlobalBreaks                                         OFFSET(get<bool>, {0x846, 1, 0, 0})
	DMember(bool)                                      bNotifyGlobalCollisions                                     OFFSET(get<bool>, {0x847, 1, 0, 0})
	DMember(bool)                                      bNotifyGlobalRemovals                                       OFFSET(get<bool>, {0x848, 1, 0, 0})
	DMember(bool)                                      bNotifyGlobalCrumblings                                     OFFSET(get<bool>, {0x849, 1, 0, 0})
	DMember(bool)                                      bGlobalCrumblingEventIncludesChildren                       OFFSET(get<bool>, {0x84A, 1, 0, 0})
	DMember(bool)                                      bStoreVelocities                                            OFFSET(get<bool>, {0x84B, 1, 0, 0})
	DMember(bool)                                      bShowBoneColors                                             OFFSET(get<bool>, {0x84C, 1, 0, 0})
	DMember(bool)                                      bUseRootProxyForNavigation                                  OFFSET(get<bool>, {0x84D, 1, 0, 0})
	DMember(bool)                                      bUpdateNavigationInTick                                     OFFSET(get<bool>, {0x84E, 1, 0, 0})
	CMember(AGeometryCollectionISMPoolActor*)          ISMPool                                                     OFFSET(get<T>, {0x850, 8, 0, 0})
	DMember(bool)                                      bAutoAssignISMPool                                          OFFSET(get<bool>, {0x858, 1, 0, 0})
	DMember(bool)                                      bOverrideCustomRenderer                                     OFFSET(get<bool>, {0x859, 1, 0, 0})
	CMember(UClass*)                                   CustomRendererType                                          OFFSET(get<T>, {0x860, 8, 0, 0})
	CMember(UGeometryCollectionExternalRenderInterface*) CustomRenderer                                            OFFSET(get<T>, {0x868, 8, 0, 0})
	DMember(bool)                                      bEnableReplication                                          OFFSET(get<bool>, {0x870, 1, 0, 0})
	DMember(bool)                                      bEnableAbandonAfterLevel                                    OFFSET(get<bool>, {0x871, 1, 0, 0})
	SMember(FName)                                     AbandonedCollisionProfileName                               OFFSET(get<T>, {0x874, 4, 0, 0})
	CMember(TArray<FName>)                             CollisionProfilePerLevel                                    OFFSET(get<T>, {0x878, 16, 0, 0})
	DMember(int32_t)                                   ReplicationAbandonClusterLevel                              OFFSET(get<int32_t>, {0x898, 4, 0, 0})
	DMember(int32_t)                                   ReplicationAbandonAfterLevel                                OFFSET(get<int32_t>, {0x89C, 4, 0, 0})
	DMember(int32_t)                                   ReplicationMaxPositionAndVelocityCorrectionLevel            OFFSET(get<int32_t>, {0x8A0, 4, 0, 0})
	SMember(FGeometryCollectionRepData)                RepData                                                     OFFSET(get<T>, {0x8A8, 56, 0, 0})
	CMember(UBodySetup*)                               DummyBodySetup                                              OFFSET(get<T>, {0xB80, 8, 0, 0})
	CMember(UChaosGameplayEventDispatcher*)            EventDispatcher                                             OFFSET(get<T>, {0xB88, 8, 0, 0})
	CMember(TArray<UInstancedStaticMeshComponent*>)    EmbeddedGeometryComponents                                  OFFSET(get<T>, {0xB90, 16, 0, 0})
};



	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
	// void SetRestCollection(UGeometryCollection* RestCollectionIn, bool bApplyAssetDefaults);                                 // [0x57488f4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetPerParticleCollisionProfileName
	// void SetPerParticleCollisionProfileName(TArray<int32_t>& BoneIds, FName ProfileName);                                    // [0x5748608] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetPerLevelCollisionProfileNames
	// void SetPerLevelCollisionProfileNames(TArray<FName>& ProfileNames);                                                      // [0x5748560] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
	// void SetNotifyRemovals(bool bNewNotifyRemovals);                                                                         // [0x57484e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalRemovals
	// void SetNotifyGlobalRemovals(bool bNewNotifyGlobalRemovals);                                                             // [0x5748460] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalCrumblings
	// void SetNotifyGlobalCrumblings(bool bNewNotifyGlobalCrumblings, bool bGlobalNewCrumblingEventIncludesChildren);          // [0x574839c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalCollision
	// void SetNotifyGlobalCollision(bool bNewNotifyGlobalCollisions);                                                          // [0x57482ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyGlobalBreaks
	// void SetNotifyGlobalBreaks(bool bNewNotifyGlobalBreaks);                                                                 // [0x5748230] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
	// void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);                            // [0x574816c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	// void SetNotifyBreaks(bool bNewNotifyBreaks);                                                                             // [0x57480ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetLocalRestTransforms
	// void SetLocalRestTransforms(TArray<FTransform>& Transforms, bool bOnlyLeaves);                                           // [0x5747f28] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
	// void SetEnableDamageFromCollision(bool bValue);                                                                          // [0x5747df8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetDamageThreshold
	// void SetDamageThreshold(TArray<float>& InDamageThreshold);                                                               // [0x5747d44] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
	// void SetAnchoredByTransformedBox(FBox Box, FTransform Transform, bool bAnchored, int32_t MaxLevel);                      // [0x57474cc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
	// void SetAnchoredByIndex(int32_t Index, bool bAnchored);                                                                  // [0x57473e4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
	// void SetAnchoredByBox(FBox WorldSpaceBox, bool bAnchored, int32_t MaxLevel);                                             // [0x574702c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAbandonedParticleCollisionProfileName
	// void SetAbandonedParticleCollisionProfileName(FName CollisionProfile);                                                   // [0x5746fa0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
	// void RemoveAllAnchors();                                                                                                 // [0x5746ef8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                                 // [0x1ebf994] RequiredAPI|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
	// void OnRep_RepData();                                                                                                    // [0x5746bd0] Final|RequiredAPI|Native|Protected 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(UGeometryCollectionComponent* FracturedComponent);    // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(UGeometryCollectionComponent* FracturedComponent); // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.IsRootBroken
	// bool IsRootBroken();                                                                                                     // [0x5746bac] Final|RequiredAPI|Native|Private|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootInitialTransform
	// FTransform GetRootInitialTransform();                                                                                    // [0x5746b34] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
	// int32_t GetRootIndex();                                                                                                  // [0x5746b14] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootCurrentTransform
	// FTransform GetRootCurrentTransform();                                                                                    // [0x5746ab8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
	// void GetMassAndExtents(int32_t ItemIndex, float& OutMass, FBox& OutExtents);                                             // [0x5746998] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
	// FBox GetLocalBounds();                                                                                                   // [0x5746958] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLocalRestTransforms
	// TArray<FTransform> GetInitialLocalRestTransforms();                                                                      // [0x5746918] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
	// int32_t GetInitialLevel(int32_t ItemIndex);                                                                              // [0x574688c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
	// FString GetDebugInfo();                                                                                                  // [0x574684c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetDamageThreshold
	// TArray<float> GetDamageThreshold();                                                                                      // [0x57467bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
	// void CrumbleCluster(int32_t ItemIndex);                                                                                  // [0x574673c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
	// void CrumbleActiveClusters();                                                                                            // [0x57466fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field); // [0x574637c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
	// void ApplyLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                                    // [0x5746220] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	// void ApplyKinematicField(float Radius, FVector Position);                                                                // [0x5746074] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
	// void ApplyInternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x5745ca4] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
	// void ApplyExternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x57458d4] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
	// void ApplyBreakingLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                            // [0x574579c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
	// void ApplyBreakingAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                          // [0x574579c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyAssetDefaults
	// void ApplyAssetDefaults();                                                                                               // [0x5745788] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
	// void ApplyAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                                  // [0x574562c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
/// Size: 0x00C0 (0x000290 - 0x000350)
class AGeometryCollectionDebugDrawActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FGeometryCollectionDebugDrawWarningMessage) WarningMessage                                             OFFSET(get<T>, {0x290, 1, 0, 0})
	SMember(FGeometryCollectionDebugDrawActorSelectedRigidBody) SelectedRigidBody                                  OFFSET(get<T>, {0x298, 24, 0, 0})
	DMember(bool)                                      bDebugDrawWholeCollection                                   OFFSET(get<bool>, {0x2B0, 1, 0, 0})
	DMember(bool)                                      bDebugDrawHierarchy                                         OFFSET(get<bool>, {0x2B1, 1, 0, 0})
	DMember(bool)                                      bDebugDrawClustering                                        OFFSET(get<bool>, {0x2B2, 1, 0, 0})
	CMember(EGeometryCollectionDebugDrawActorHideGeometry) HideGeometry                                            OFFSET(get<T>, {0x2B3, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyId                                            OFFSET(get<bool>, {0x2B4, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyCollision                                     OFFSET(get<bool>, {0x2B5, 1, 0, 0})
	DMember(bool)                                      bCollisionAtOrigin                                          OFFSET(get<bool>, {0x2B6, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyTransform                                     OFFSET(get<bool>, {0x2B7, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyInertia                                       OFFSET(get<bool>, {0x2B8, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyVelocity                                      OFFSET(get<bool>, {0x2B9, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyForce                                         OFFSET(get<bool>, {0x2BA, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyInfos                                         OFFSET(get<bool>, {0x2BB, 1, 0, 0})
	DMember(bool)                                      bShowTransformIndex                                         OFFSET(get<bool>, {0x2BC, 1, 0, 0})
	DMember(bool)                                      bShowTransform                                              OFFSET(get<bool>, {0x2BD, 1, 0, 0})
	DMember(bool)                                      bShowParent                                                 OFFSET(get<bool>, {0x2BE, 1, 0, 0})
	DMember(bool)                                      bShowLevel                                                  OFFSET(get<bool>, {0x2BF, 1, 0, 0})
	DMember(bool)                                      bShowConnectivityEdges                                      OFFSET(get<bool>, {0x2C0, 1, 0, 0})
	DMember(bool)                                      bShowGeometryIndex                                          OFFSET(get<bool>, {0x2C1, 1, 0, 0})
	DMember(bool)                                      bShowGeometryTransform                                      OFFSET(get<bool>, {0x2C2, 1, 0, 0})
	DMember(bool)                                      bShowBoundingBox                                            OFFSET(get<bool>, {0x2C3, 1, 0, 0})
	DMember(bool)                                      bShowFaces                                                  OFFSET(get<bool>, {0x2C4, 1, 0, 0})
	DMember(bool)                                      bShowFaceIndices                                            OFFSET(get<bool>, {0x2C5, 1, 0, 0})
	DMember(bool)                                      bShowFaceNormals                                            OFFSET(get<bool>, {0x2C6, 1, 0, 0})
	DMember(bool)                                      bShowSingleFace                                             OFFSET(get<bool>, {0x2C7, 1, 0, 0})
	DMember(int32_t)                                   SingleFaceIndex                                             OFFSET(get<int32_t>, {0x2C8, 4, 0, 0})
	DMember(bool)                                      bShowVertices                                               OFFSET(get<bool>, {0x2CC, 1, 0, 0})
	DMember(bool)                                      bShowVertexIndices                                          OFFSET(get<bool>, {0x2CD, 1, 0, 0})
	DMember(bool)                                      bShowVertexNormals                                          OFFSET(get<bool>, {0x2CE, 1, 0, 0})
	DMember(bool)                                      bUseActiveVisualization                                     OFFSET(get<bool>, {0x2CF, 1, 0, 0})
	DMember(float)                                     PointThickness                                              OFFSET(get<float>, {0x2D0, 4, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0x2D4, 4, 0, 0})
	DMember(bool)                                      bTextShadow                                                 OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	DMember(float)                                     TextScale                                                   OFFSET(get<float>, {0x2DC, 4, 0, 0})
	DMember(float)                                     NormalScale                                                 OFFSET(get<float>, {0x2E0, 4, 0, 0})
	DMember(float)                                     AxisScale                                                   OFFSET(get<float>, {0x2E4, 4, 0, 0})
	DMember(float)                                     ArrowScale                                                  OFFSET(get<float>, {0x2E8, 4, 0, 0})
	SMember(FColor)                                    RigidBodyIdColor                                            OFFSET(get<T>, {0x2EC, 4, 0, 0})
	DMember(float)                                     RigidBodyTransformScale                                     OFFSET(get<float>, {0x2F0, 4, 0, 0})
	SMember(FColor)                                    RigidBodyCollisionColor                                     OFFSET(get<T>, {0x2F4, 4, 0, 0})
	SMember(FColor)                                    RigidBodyInertiaColor                                       OFFSET(get<T>, {0x2F8, 4, 0, 0})
	SMember(FColor)                                    RigidBodyVelocityColor                                      OFFSET(get<T>, {0x2FC, 4, 0, 0})
	SMember(FColor)                                    RigidBodyForceColor                                         OFFSET(get<T>, {0x300, 4, 0, 0})
	SMember(FColor)                                    RigidBodyInfoColor                                          OFFSET(get<T>, {0x304, 4, 0, 0})
	SMember(FColor)                                    TransformIndexColor                                         OFFSET(get<T>, {0x308, 4, 0, 0})
	DMember(float)                                     TransformScale                                              OFFSET(get<float>, {0x30C, 4, 0, 0})
	SMember(FColor)                                    LevelColor                                                  OFFSET(get<T>, {0x310, 4, 0, 0})
	SMember(FColor)                                    ParentColor                                                 OFFSET(get<T>, {0x314, 4, 0, 0})
	DMember(float)                                     ConnectivityEdgeThickness                                   OFFSET(get<float>, {0x318, 4, 0, 0})
	SMember(FColor)                                    GeometryIndexColor                                          OFFSET(get<T>, {0x31C, 4, 0, 0})
	DMember(float)                                     GeometryTransformScale                                      OFFSET(get<float>, {0x320, 4, 0, 0})
	SMember(FColor)                                    BoundingBoxColor                                            OFFSET(get<T>, {0x324, 4, 0, 0})
	SMember(FColor)                                    FaceColor                                                   OFFSET(get<T>, {0x328, 4, 0, 0})
	SMember(FColor)                                    FaceIndexColor                                              OFFSET(get<T>, {0x32C, 4, 0, 0})
	SMember(FColor)                                    FaceNormalColor                                             OFFSET(get<T>, {0x330, 4, 0, 0})
	SMember(FColor)                                    SingleFaceColor                                             OFFSET(get<T>, {0x334, 4, 0, 0})
	SMember(FColor)                                    VertexColor                                                 OFFSET(get<T>, {0x338, 4, 0, 0})
	SMember(FColor)                                    VertexIndexColor                                            OFFSET(get<T>, {0x33C, 4, 0, 0})
	SMember(FColor)                                    VertexNormalColor                                           OFFSET(get<T>, {0x340, 4, 0, 0})
	CMember(UBillboardComponent*)                      SpriteComponent                                             OFFSET(get<T>, {0x348, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(AGeometryCollectionDebugDrawActor*)        GeometryCollectionDebugDrawActor                            OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(AGeometryCollectionRenderLevelSetActor*)   GeometryCollectionRenderLevelSetActor                       OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AGeometryCollectionISMPoolActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UGeometryCollectionISMPoolComponent*)      ISMPoolComp                                                 OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UGeometryCollectionISMPoolDebugDrawComponent*) ISMPoolDebugDrawComp                                    OFFSET(get<T>, {0x298, 8, 0, 0})
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
	CMember(AGeometryCollectionISMPoolActor*)          ISMPoolActor                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollection
/// Size: 0x01C0 (0x000028 - 0x0001E8)
class UGeometryCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	DMember(bool)                                      EnableClustering                                            OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   ClusterGroupIndex                                           OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevel                                             OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(EDamageModelTypeEnum)                      DamageModel                                                 OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TArray<float>)                             DamageThreshold                                             OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bUseSizeSpecificDamageThreshold                             OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      PerClusterOnlyDamageThreshold                               OFFSET(get<bool>, {0x59, 1, 0, 0})
	SMember(FGeometryCollectionDamagePropagationData)  DamagePropagationData                                       OFFSET(get<T>, {0x5C, 12, 0, 0})
	CMember(EClusterConnectionTypeEnum)                ClusterConnectionType                                       OFFSET(get<T>, {0x68, 1, 0, 0})
	DMember(float)                                     ConnectionGraphBoundsFilteringMargin                        OFFSET(get<float>, {0x6C, 4, 0, 0})
	CMember(TArray<UMaterialInterface*>)               Materials                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FGeometryCollectionEmbeddedExemplar>) EmbeddedGeometryExemplar                                  OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bUseFullPrecisionUVs                                        OFFSET(get<bool>, {0x90, 1, 0, 0})
	DMember(bool)                                      bStripOnCook                                                OFFSET(get<bool>, {0x91, 1, 0, 0})
	DMember(bool)                                      bStripRenderDataOnCook                                      OFFSET(get<bool>, {0x92, 1, 0, 0})
	CMember(UClass*)                                   CustomRendererType                                          OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FGeometryCollectionProxyMeshData)          RootProxyData                                               OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FGeometryCollectionAutoInstanceMesh>) AutoInstanceMeshes                                        OFFSET(get<T>, {0xB0, 16, 0, 0})
	DMember(bool)                                      EnableNanite                                                OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      bConvertVertexColorsToSRGB                                  OFFSET(get<bool>, {0xC1, 1, 0, 0})
	CMember(UPhysicalMaterial*)                        PhysicsMaterial                                             OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(bool)                                      bDensityFromPhysicsMaterial                                 OFFSET(get<bool>, {0xD0, 1, 0, 0})
	DMember(bool)                                      bMassAsDensity                                              OFFSET(get<bool>, {0xD1, 1, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0xD4, 4, 0, 0})
	DMember(float)                                     MinimumMassClamp                                            OFFSET(get<float>, {0xD8, 4, 0, 0})
	DMember(bool)                                      bImportCollisionFromSource                                  OFFSET(get<bool>, {0xDC, 1, 0, 0})
	DMember(bool)                                      bScaleOnRemoval                                             OFFSET(get<bool>, {0xDD, 1, 0, 0})
	DMember(bool)                                      bRemoveOnMaxSleep                                           OFFSET(get<bool>, {0xDE, 1, 0, 0})
	SMember(FVector2D)                                 MaximumSleepTime                                            OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FVector2D)                                 RemovalDuration                                             OFFSET(get<T>, {0xF0, 16, 0, 0})
	DMember(bool)                                      bSlowMovingAsSleeping                                       OFFSET(get<bool>, {0x100, 1, 0, 0})
	DMember(float)                                     SlowMovingVelocityThreshold                                 OFFSET(get<float>, {0x104, 4, 0, 0})
	CMember(TArray<FGeometryCollectionSizeSpecificData>) SizeSpecificData                                          OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(bool)                                      EnableRemovePiecesOnFracture                                OFFSET(get<bool>, {0x118, 1, 0, 0})
	CMember(TArray<UMaterialInterface*>)               RemoveOnFractureMaterials                                   OFFSET(get<T>, {0x120, 16, 0, 0})
	CMember(UDataflow*)                                DataflowAsset                                               OFFSET(get<T>, {0x130, 8, 0, 0})
	SMember(FString)                                   DataflowTerminal                                            OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(TMap<FString, FString>)                    Overrides                                                   OFFSET(get<T>, {0x148, 80, 0, 0})
	SMember(FGuid)                                     PersistentGuid                                              OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FGuid)                                     StateGuid                                                   OFFSET(get<T>, {0x1A8, 16, 0, 0})
	DMember(int32_t)                                   RootIndex                                                   OFFSET(get<int32_t>, {0x1B8, 4, 0, 0})
	DMember(int32_t)                                   BoneSelectedMaterialIndex                                   OFFSET(get<int32_t>, {0x1BC, 4, 0, 0})
	CMember(UMaterialInterface*)                       BoneSelectedMaterial                                        OFFSET(get<T>, {0x1C0, 8, 0, 0})
	CMember(TArray<UAssetUserData*>)                   AssetUserData                                               OFFSET(get<T>, {0x1D8, 16, 0, 0})
};



	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollection.SetEnableNanite
	// void SetEnableNanite(bool bValue);                                                                                       // [0x5747ea0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollection.SetConvertVertexColorsToSRGB
	// void SetConvertVertexColorsToSRGB(bool bValue);                                                                          // [0x5747cbc] Final|RequiredAPI|Native|Public|BlueprintCallable 
/// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
/// Size: 0x00F0 (0x000290 - 0x000380)
class AGeometryCollectionRenderLevelSetActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	CMember(UVolumeTexture*)                           TargetVolumeTexture                                         OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UMaterial*)                                RayMarchMaterial                                            OFFSET(get<T>, {0x298, 8, 0, 0})
	DMember(float)                                     SurfaceTolerance                                            OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(float)                                     Isovalue                                                    OFFSET(get<float>, {0x2A4, 4, 0, 0})
	DMember(bool)                                      Enabled                                                     OFFSET(get<bool>, {0x2A8, 1, 0, 0})
	DMember(bool)                                      RenderVolumeBoundingBox                                     OFFSET(get<bool>, {0x2A9, 1, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolDebugDrawComponent
/// Size: 0x0010 (0x0005C0 - 0x0005D0)
class UGeometryCollectionISMPoolDebugDrawComponent : public UDebugDrawComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	DMember(bool)                                      bShowGlobalStats                                            OFFSET(get<bool>, {0x5B8, 1, 0, 0})
	DMember(bool)                                      bShowStats                                                  OFFSET(get<bool>, {0x5B9, 1, 0, 0})
	DMember(bool)                                      bShowBounds                                                 OFFSET(get<bool>, {0x5BA, 1, 0, 0})
	CMember(UInstancedStaticMeshComponent*)            SelectedComponent                                           OFFSET(get<T>, {0x5C0, 8, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventData
/// Size: 0x0038 (0x000000 - 0x000038)
class FChaosBreakingEventData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Location                                                    OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventData
/// Size: 0x0080 (0x000000 - 0x000080)
class FChaosCollisionEventData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Location                                                    OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   Velocity1                                                   OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   Velocity2                                                   OFFSET(get<T>, {0x48, 24, 0, 0})
	DMember(float)                                     Mass1                                                       OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     Mass2                                                       OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FVector)                                   Impulse                                                     OFFSET(get<T>, {0x68, 24, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventData
/// Size: 0x0020 (0x000000 - 0x000020)
class FChaosRemovalEventData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Location                                                    OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventData
/// Size: 0x0050 (0x000000 - 0x000050)
class FChaosTrailingEventData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Location                                                    OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
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
	CMember(EGeometryCollectionCacheType)              CacheMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UGeometryCollectionCache*)                 TargetCache                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ReverseCacheBeginTime                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      SaveCollisionData                                           OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      DoGenerateCollisionData                                     OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(int32_t)                                   CollisionDataSizeMax                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      DoCollisionDataSpatialHash                                  OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(float)                                     CollisionDataSpatialHashRadius                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   MaxCollisionPerCell                                         OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(bool)                                      SaveBreakingData                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      DoGenerateBreakingData                                      OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   BreakingDataSizeMax                                         OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      DoBreakingDataSpatialHash                                   OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     BreakingDataSpatialHashRadius                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   MaxBreakingPerCell                                          OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      SaveTrailingData                                            OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      DoGenerateTrailingData                                      OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(int32_t)                                   TrailingDataSizeMax                                         OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     TrailingMinSpeedThreshold                                   OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     TrailingMinVolumeThreshold                                  OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDamagePropagationData
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryCollectionDamagePropagationData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     BreakDamagePropagationFactor                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ShockDamagePropagationFactor                                OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosBreakingEventRequestSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinRadius                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosBreakingSortMethod)                  SortMethod                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosCollisionEventRequestSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberResults                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinImpulse                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosCollisionSortMethod)                 SortMethod                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventRequestSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FChaosRemovalEventRequestSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EChaosRemovalSortMethod)                   SortMethod                                                  OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosTrailingEventRequestSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinAngularSpeed                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosTrailingSortMethod)                  SortMethod                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
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
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(AChaosSolverActor*)                        Solver                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(AGeometryCollectionActor*)                 GeometryCollection                                          OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSource
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FGeometryCollectionSource : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSoftObjectPath)                           SourceGeometryObject                                        OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(get<T>, {0x20, 96, 0, 0})
	CMember(TArray<UMaterialInterface*>)               SourceMaterial                                              OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<float>)                             InstanceCustomData                                          OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      bAddInternalMaterials                                       OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bSplitComponents                                            OFFSET(get<bool>, {0xA1, 1, 0, 0})
	DMember(bool)                                      bSetInternalFromMaterialIndex                               OFFSET(get<bool>, {0xA2, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
/// Size: 0x0030 (0x000000 - 0x000030)
class FGeometryCollectionAutoInstanceMesh : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UStaticMesh*)                              Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               Materials                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   NumInstances                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TArray<float>)                             CustomData                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeometryCollectionEmbeddedExemplar : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FSoftObjectPath)                           StaticMeshExemplar                                          OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     StartCullDistance                                           OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     EndCullDistance                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   InstanceCount                                               OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionLevelSetData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryCollectionLevelSetData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MinLevelSetResolution                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaxLevelSetResolution                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MinClusterLevelSetResolution                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevelSetResolution                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionParticleData
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryCollectionCollisionParticleData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     CollisionParticlesFraction                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaximumCollisionParticles                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionTypeData
/// Size: 0x0024 (0x000000 - 0x000024)
class FGeometryCollectionCollisionTypeData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(ECollisionTypeEnum)                        CollisionType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EImplicitTypeEnum)                         ImplicitType                                                OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FGeometryCollectionLevelSetData)           LevelSet                                                    OFFSET(get<T>, {0x4, 16, 0, 0})
	SMember(FGeometryCollectionCollisionParticleData)  CollisionParticles                                          OFFSET(get<T>, {0x14, 8, 0, 0})
	DMember(float)                                     CollisionObjectReductionPercentage                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     CollisionMarginFraction                                     OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeometryCollectionSizeSpecificData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     MaxSize                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FGeometryCollectionCollisionTypeData>) CollisionShapes                                          OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   DamageThreshold                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionProxyMeshData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryCollectionProxyMeshData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UStaticMesh*>)                      ProxyMeshes                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRenderResourceSizeInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryCollectionRenderResourceSizeInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(uint64_t)                                  MeshResourcesSize                                           OFFSET(get<uint64_t>, {0x0, 8, 0, 0})
	DMember(uint64_t)                                  NaniteResourcesSize                                         OFFSET(get<uint64_t>, {0x8, 8, 0, 0})
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

