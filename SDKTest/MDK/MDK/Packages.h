
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/_WaterMeshBlueprintMaster._WaterMeshBlueprintMaster_C
/// Size: 0x006B (0x000290 - 0x0002FB)
class A_WaterMeshBlueprintMaster_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 763;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CollisionMesh1                                              ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CollisionMesh2                                              ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CollisionMesh4                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     CollisionMesh3                                              ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh1                                                 ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	DMember(int32_t)                                   Number_of_Collision_Meshes                                  ___ OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	DMember(bool)                                      FlipFlow                                                    ___ OFFSET(get<bool>, {0x2C4, 1, 0, 0})
	DMember(bool)                                      NoFlow                                                      ___ OFFSET(get<bool>, {0x2C5, 1, 0, 0})
	CMember(UMaterialInterface*)                       FlippedMaterial                                             ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	DMember(int32_t)                                   Current_Characters_Personal_Water_Counter                   ___ OFFSET(get<int32_t>, {0x2D0, 4, 0, 0})
	DMember(bool)                                      Enable_Player_Water_Interactions                            ___ OFFSET(get<bool>, {0x2D4, 1, 0, 0})
	DMember(bool)                                      Entering_True_Exiting_False                                 ___ OFFSET(get<bool>, {0x2D5, 1, 0, 0})
	CMember(APlayerPawn_Generic_Parent_C*)             ExternalActor                                               ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Internal_Mesh                                               ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	DMember(bool)                                      Continue                                                    ___ OFFSET(get<bool>, {0x2E8, 1, 0, 0})
	DMember(double)                                    Minimum_time_between_splashes                               ___ OFFSET(get<double>, {0x2F0, 8, 0, 0})
	DMember(bool)                                      ShowTestMesh                                                ___ OFFSET(get<bool>, {0x2F8, 1, 0, 0})
	DMember(bool)                                      HasExecutedConstuctionScript                                ___ OFFSET(get<bool>, {0x2F9, 1, 0, 0})
	DMember(bool)                                      Is_Deep_Water_Asset_                                        ___ OFFSET(get<bool>, {0x2FA, 1, 0, 0})
};

/// Struct /Game/Packages/DS_Fortnite_Terrain_NoLOD/Blueprints/WaterMeshAssetsToReplace.WaterMeshAssetsToReplace
/// Size: 0x0014 (0x000000 - 0x000014)
class FWaterMeshAssetsToReplace : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	CMember(UStaticMesh*)                              StaticMesh_4_B162F6034281E7ABCD4DD1A24FFB5843               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UClass*)                                   Blueprint_8_FAC48F2D497ED83408C598897E74E513                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   WaterMaterialID_11_1F00A5914214393D3251C4918ACFBCD2         ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

