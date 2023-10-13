
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
/// Size: 0x00C3 (0x000318 - 0x0003DB)
class A_WaterMeshBlueprintMaster_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x318, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CollisionMesh1                                              OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CollisionMesh2                                              OFFSET(get<T>, {0x328, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CollisionMesh4                                              OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CollisionMesh3                                              OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh1                                                 OFFSET(get<T>, {0x340, 8, 0, 0})
	DMember(int32_t)                                   Number_of_Collision_Meshes                                  OFFSET(get<int32_t>, {0x348, 4, 0, 0})
	CMember(UParticleSystem*)                          EnterExitWaterSplash_Ripple_Texture_Particle                OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UParticleSystem*)                          EnterExitWaterSplash_Visual_Particle                        OFFSET(get<T>, {0x358, 8, 0, 0})
	DMember(bool)                                      FlipFlow                                                    OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(bool)                                      NoFlow                                                      OFFSET(get<bool>, {0x361, 1, 0, 0})
	CMember(UMaterialInterface*)                       FlippedMaterial                                             OFFSET(get<T>, {0x368, 8, 0, 0})
	CMember(TArray<int32_t>)                           Internal_volume_penetration_Counter                         OFFSET(get<T>, {0x370, 16, 0, 0})
	CMember(TArray<APlayerPawn_Generic_Parent_C*>)     PlayerGenericArray                                          OFFSET(get<T>, {0x380, 16, 0, 0})
	CMember(TArray<UParticleSystemComponent*>)         WaterRingArray                                              OFFSET(get<T>, {0x390, 16, 0, 0})
	DMember(int32_t)                                   Current_Characters_Personal_Water_Counter                   OFFSET(get<int32_t>, {0x3A0, 4, 0, 0})
	CMember(TArray<FListOfWaterComponentsThatTheCharactersInteractingWithByIndex>) ArrayOfCollisionComponentsPerActor OFFSET(get<T>, {0x3A8, 16, 0, 0})
	DMember(bool)                                      Enable_Player_Water_Interactions                            OFFSET(get<bool>, {0x3B8, 1, 0, 0})
	DMember(bool)                                      Entering_True_Exiting_False                                 OFFSET(get<bool>, {0x3B9, 1, 0, 0})
	CMember(APlayerPawn_Generic_Parent_C*)             ExternalActor                                               OFFSET(get<T>, {0x3C0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Internal_Mesh                                               OFFSET(get<T>, {0x3C8, 8, 0, 0})
	DMember(bool)                                      Continue                                                    OFFSET(get<bool>, {0x3D0, 1, 0, 0})
	DMember(float)                                     Minimum_time_between_splashes                               OFFSET(get<float>, {0x3D4, 4, 0, 0})
	DMember(bool)                                      ShowTestMesh                                                OFFSET(get<bool>, {0x3D8, 1, 0, 0})
	DMember(bool)                                      HasExecutedConstuctionScript                                OFFSET(get<bool>, {0x3D9, 1, 0, 0})
	DMember(bool)                                      Is_Deep_Water_Asset_                                        OFFSET(get<bool>, {0x3DA, 1, 0, 0})


	/// Functions
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construction
	// void Construction();                                                                                                     // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Handle Water Penetration Components And Arrays
	// void Handle Water Penetration Components And Arrays(bool In T Out F, AActor* Touching Actor, UStaticMeshComponent* Touching Volume); // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Find Placement on water mesh surfaces
	// void Find Placement on water mesh surfaces(FTransform& Traced Transform, FVector& VelocityVector, bool& Trace Hit);      // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.SetupMeshCollisionVolumes
	// void SetupMeshCollisionVolumes(UStaticMeshComponent* StaticMeshComponent, int32_t Target Int);                           // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_220_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x154a140] BlueprintEvent       
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_211_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x154a140] BlueprintEvent       
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_66_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_203_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x154a140] BlueprintEvent       
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh2_K2Node_ComponentBoundEvent_196_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh3_K2Node_ComponentBoundEvent_190_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh4_K2Node_ComponentBoundEvent_185_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__CollisionMesh_K2Node_ComponentBoundEvent_69_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x154a140] BlueprintEvent       
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.Construct
	// void Construct();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C.ExecuteUbergraph__WaterMeshBlueprintMaster
	// void ExecuteUbergraph__WaterMeshBlueprintMaster(int32_t EntryPoint);                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_Half_x_Half.S_TRV_Water_Shallow_Half_x_Half_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_Half_x_Half_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_Half_x5.S_TRV_Water_Shallow_Half_x5_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_Half_x5_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_Half_x4.S_TRV_Water_Shallow_Half_x4_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_Half_x4_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_Half_x3.S_TRV_Water_Shallow_Half_x3_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_Half_x3_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_Half_x2.S_TRV_Water_Shallow_Half_x2_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_Half_x2_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_Half_x1.S_TRV_Water_Shallow_Half_x1_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_Half_x1_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_5x5.S_TRV_Water_Shallow_5x5_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_5x5_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_4x5.S_TRV_Water_Shallow_4x5_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_4x5_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_4x4.S_TRV_Water_Shallow_4x4_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_4x4_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_3x5.S_TRV_Water_Shallow_3x5_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_3x5_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_3x4.S_TRV_Water_Shallow_3x4_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_3x4_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_3x3.S_TRV_Water_Shallow_3x3_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_3x3_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_2x5.S_TRV_Water_Shallow_2x5_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_2x5_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_2x4.S_TRV_Water_Shallow_2x4_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_2x4_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_2x3.S_TRV_Water_Shallow_2x3_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_2x3_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_2x2.S_TRV_Water_Shallow_2x2_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_2x2_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_1x5.S_TRV_Water_Shallow_1x5_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_1x5_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_1x4.S_TRV_Water_Shallow_1x4_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_1x4_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_1x3.S_TRV_Water_Shallow_1x3_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_1x3_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_1x2.S_TRV_Water_Shallow_1x2_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_1x2_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_TRV_Terrain/Blueprints/S_TRV_Water_Shallow_1x1.S_TRV_Water_Shallow_1x1_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_TRV_Water_Shallow_1x1_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_Half_x_Half.S_Water_Shallow_Half_x_Half_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_Half_x_Half_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_Half_x5.S_Water_Shallow_Half_x5_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_Half_x5_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_Half_x4.S_Water_Shallow_Half_x4_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_Half_x4_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_Half_x3.S_Water_Shallow_Half_x3_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_Half_x3_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_Half_x2.S_Water_Shallow_Half_x2_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_Half_x2_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_Half_x1.S_Water_Shallow_Half_x1_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_Half_x1_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_5x5.S_Water_Shallow_5x5_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_5x5_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_4x5.S_Water_Shallow_4x5_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_4x5_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_4x4.S_Water_Shallow_4x4_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_4x4_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_3x5.S_Water_Shallow_3x5_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_3x5_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_3x4.S_Water_Shallow_3x4_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_3x4_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_3x3.S_Water_Shallow_3x3_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_3x3_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_2x5.S_Water_Shallow_2x5_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_2x5_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_2x4.S_Water_Shallow_2x4_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_2x4_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_2x3.S_Water_Shallow_2x3_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_2x3_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_2x2.S_Water_Shallow_2x2_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_2x2_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_1x5.S_Water_Shallow_1x5_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_1x5_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_1x4.S_Water_Shallow_1x4_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_1x4_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_1x3.S_Water_Shallow_1x3_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_1x3_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_1x2.S_Water_Shallow_1x2_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_1x2_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Water_Shallow_1x1.S_Water_Shallow_1x1_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Water_Shallow_1x1_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Stream_2W_Turn_2L_a.S_Stream_2W_Turn_2L_a_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Stream_2W_Turn_2L_a_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Stream_2W_TSection_2L_a.S_Stream_2W_TSection_2L_a_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Stream_2W_TSection_2L_a_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Stream_2W_ToShoreline_1L_a.S_Stream_2W_ToShoreline_1L_a_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Stream_2W_ToShoreline_1L_a_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Stream_2W_Straight_2L_a.S_Stream_2W_Straight_2L_a_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Stream_2W_Straight_2L_a_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Stream_2W_Straight_1L_a.S_Stream_2W_Straight_1L_a_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Stream_2W_Straight_1L_a_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Stream_2W_Straight_05L_a.S_Stream_2W_Straight_05L_a_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Stream_2W_Straight_05L_a_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Stream_2W_SBend_3L_a.S_Stream_2W_SBend_3L_a_C
/// Size: 0x0001 (0x0003DB - 0x0003DC)
class AS_Stream_2W_SBend_3L_a_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 988;

public:
	DMember(bool)                                      ShowTestMesh                                                OFFSET(get<bool>, {0x3DB, 1, 0, 0})


	/// Functions
	// Function /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Stream_2W_SBend_3L_a.S_Stream_2W_SBend_3L_a_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Stream_2W_GeoSlope_2L_a.S_Stream_2W_GeoSlope_2L_a_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Stream_2W_GeoSlope_2L_a_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Pool_Outer.S_Pool_Outer_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Pool_Outer_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/S_Pool_Inner.S_Pool_Inner_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class AS_Pool_Inner_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/s_pool_floor.s_pool_floor_C
/// Size: 0x0000 (0x0003DB - 0x0003DB)
class As_pool_floor_C : public A_WaterMeshBlueprintMaster_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 987;

public:
};

/// Struct /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/ListOfWaterComponentsThatTheCharactersInteractingWithByIndex.ListOfWaterComponentsThatTheCharactersInteractingWithByIndex
/// Size: 0x0010 (0x000000 - 0x000010)
class FListOfWaterComponentsThatTheCharactersInteractingWithByIndex : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           WaterCollisionComponentIndices_3_A6FB8AAE4E16FD605B61E1A03FF83823 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/WaterMeshAssetsToReplace.WaterMeshAssetsToReplace
/// Size: 0x0014 (0x000000 - 0x000014)
class FWaterMeshAssetsToReplace : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(UStaticMesh*)                              StaticMesh_4_B162F6034281E7ABCD4DD1A24FFB5843               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   Blueprint_8_FAC48F2D497ED83408C598897E74E513                OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   WaterMaterialID_11_1F00A5914214393D3251C4918ACFBCD2         OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

