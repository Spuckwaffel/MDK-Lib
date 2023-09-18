/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package VisualThreatManager.

/// Struct /Game/VisualThreatManager/StormVisuals/Blueprints/StaticMeshMaterialArrayCombo.StaticMeshMaterialArrayCombo
/// Size: 0x0018 (0x000000 - 0x000018)
class FStaticMeshMaterialArrayCombo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AStaticMeshActor*)                         StaticMesh_6_F7234FBB43D39B4944E60390FB9D9D4D               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               MaterialArray_5_FAE74D234840C6E8BEEBE4BC4590BE6C            ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Game/VisualThreatManager/StormVisuals/Blueprints/FlowMapMaterials.FlowMapMaterials
/// Size: 0x0010 (0x000000 - 0x000010)
class FFlowMapMaterials : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UMaterialInterface*)                       OriginalMaterial_4_C9560D9C4A128A0A813E97865710CC97         ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMaterialInterface*)                       RenderToTextureMaterial_5_5CB972A744E80375B62CF68122B83C88  ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Class /Game/VisualThreatManager/WindManager.WindManager_C
/// Size: 0x012C (0x000518 - 0x000644)
class AWindManager_C : public AFortWindManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1604;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x518, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     EmptyStaticMesh                                             ___ OFFSET(get<T>, {0x520, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x528, 8, 0, 0})
	DMember(double)                                    SmallerRenderTargetOrthoWidth                               ___ OFFSET(get<double>, {0x530, 8, 0, 0})
	CMember(TArray<AActor*>)                           External_Test_Actor                                         ___ OFFSET(get<T>, {0x538, 16, 0, 0})
	CMember(TArray<AFortStaticMeshActor*>)             World_Terrain_Meshes                                        ___ OFFSET(get<T>, {0x548, 16, 0, 0})
	SMember(FVector)                                   Camera_Height_Offset                                        ___ OFFSET(get<T>, {0x558, 24, 0, 0})
	DMember(double)                                    Particle_Z_Offset                                           ___ OFFSET(get<double>, {0x570, 8, 0, 0})
	DMember(bool)                                      Is_Water_Interaction_Enabled                                ___ OFFSET(get<bool>, {0x578, 1, 0, 0})
	CMember(TArray<FStaticMeshMaterialArrayCombo>)     WorldStaticMeshArray                                        ___ OFFSET(get<T>, {0x580, 16, 0, 0})
	SMember(FArrayOfWaterMeshWaterBlueprintPairs)      Array_Of_Water_Assets                                       ___ OFFSET(get<T>, {0x590, 16, 0, 0})
	CMember(TArray<UStaticMesh*>)                      PrototypicalStaticMeshes                                    ___ OFFSET(get<T>, {0x5A0, 16, 0, 0})
	DMember(int32_t)                                   Current_Water_Mesh_Index                                    ___ OFFSET(get<int32_t>, {0x5B0, 4, 0, 0})
	CMember(TArray<FFlowMapMaterials>)                 WaterVectorMatToDefaultMaterialPairing                      ___ OFFSET(get<T>, {0x5B8, 16, 0, 0})
	DMember(bool)                                      MaterialPairingFound                                        ___ OFFSET(get<bool>, {0x5C8, 1, 0, 0})
	SMember(FLinearColor)                              WorldBoundsMinMax                                           ___ OFFSET(get<T>, {0x5CC, 16, 0, 0})
	CMember(UMaterialInterface*)                       Black_Scene_Capture_Material                                ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	SMember(FBox)                                      Max_level_bounds___used_to_isolate_the_level_from_the_vista ___ OFFSET(get<T>, {0x5E8, 56, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             StormCylinderMeshes                                         ___ OFFSET(get<T>, {0x620, 16, 0, 0})
	DMember(bool)                                      Storm_Cyl_Mesh_Match                                        ___ OFFSET(get<bool>, {0x630, 1, 0, 0})
	DMember(int32_t)                                   Wind_Cyl_Mesh_Array_Match_Index                             ___ OFFSET(get<int32_t>, {0x634, 4, 0, 0})
	DMember(double)                                    Delta_Wind_Falloff_in_World_Units                           ___ OFFSET(get<double>, {0x638, 8, 0, 0})
	SMember(FFortWindImpulseHandle)                    NewVar                                                      ___ OFFSET(get<T>, {0x640, 4, 0, 0})
};

/// Class /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
/// Size: 0x0170 (0x0002A0 - 0x000410)
class AThreatPostProcessManagerAndParticleBlueprint_C : public AFortThreatParticleActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UAudioComponent*)                          EnterTheStormSound                                          ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UBillboardComponent*)                      Sprite1                                                     ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	DMember(float)                                     Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4 ___ OFFSET(get<float>, {0x2B8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4 ___ OFFSET(get<T>, {0x2BC, 1, 0, 0})
	CMember(UTimelineComponent*)                       Ramp_Up_down_values_on_death                                ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  NewEventDispatcher                                          ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NewEventDispatcher0                                         ___ OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<FVector>)                           Array_of_Cloud_Positions                                    ___ OFFSET(get<T>, {0x2E8, 16, 0, 0})
	DMember(int32_t)                                   RecalculateTimer                                            ___ OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	DMember(bool)                                      Is_Alive                                                    ___ OFFSET(get<bool>, {0x2FC, 1, 0, 0})
	DMember(bool)                                      IsAliveJustChanged                                          ___ OFFSET(get<bool>, {0x2FD, 1, 0, 0})
	DMember(bool)                                      IsAlivePrevious                                             ___ OFFSET(get<bool>, {0x2FE, 1, 0, 0})
	DMember(int32_t)                                   Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive ___ OFFSET(get<int32_t>, {0x300, 4, 0, 0})
	DMember(int32_t)                                   Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead ___ OFFSET(get<int32_t>, {0x304, 4, 0, 0})
	CMember(APostProcessVolume*)                       Materialpost                                                ___ OFFSET(get<T>, {0x308, 8, 0, 0})
	DMember(double)                                    post_process_volume_falloff__around_the_threat_volume       ___ OFFSET(get<double>, {0x310, 8, 0, 0})
	DMember(bool)                                      ShowRainEffect                                              ___ OFFSET(get<bool>, {0x318, 1, 0, 0})
	DMember(double)                                    DeltaTime                                                   ___ OFFSET(get<double>, {0x320, 8, 0, 0})
	DMember(double)                                    PostProcessTargetWeight                                     ___ OFFSET(get<double>, {0x328, 8, 0, 0})
	DMember(double)                                    Current_Post_Process_Weight                                 ___ OFFSET(get<double>, {0x330, 8, 0, 0})
	DMember(double)                                    Post_Process_Fade_in_speed                                  ___ OFFSET(get<double>, {0x338, 8, 0, 0})
	DMember(bool)                                      SoundIsActive                                               ___ OFFSET(get<bool>, {0x340, 1, 0, 0})
	DMember(bool)                                      SoundWasPreviouslyActive                                    ___ OFFSET(get<bool>, {0x341, 1, 0, 0})
	DMember(bool)                                      is_On                                                       ___ OFFSET(get<bool>, {0x342, 1, 0, 0})
	SMember(FLinearColor)                              ThreatFogPostProcessColor_Morning                           ___ OFFSET(get<T>, {0x344, 16, 0, 0})
	SMember(FLinearColor)                              ThreatFogPostProcessColor_Day                               ___ OFFSET(get<T>, {0x354, 16, 0, 0})
	SMember(FLinearColor)                              ThreatFogPostProcessColor_Evening                           ___ OFFSET(get<T>, {0x364, 16, 0, 0})
	SMember(FLinearColor)                              ThreatFogPostProcessColor_Night                             ___ OFFSET(get<T>, {0x374, 16, 0, 0})
	CMember(TArray<FBox>)                              Array_of_Cloud_Volumes                                      ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	DMember(double)                                    PostProcessWeightModulation                                 ___ OFFSET(get<double>, {0x398, 8, 0, 0})
	DMember(double)                                    Ramp_Up_And_Down_Anim_Values                                ___ OFFSET(get<double>, {0x3A0, 8, 0, 0})
	DMember(bool)                                      ShowRainOnCameraLens                                        ___ OFFSET(get<bool>, {0x3A8, 1, 0, 0})
	CMember(AEmitterCameraLensEffectBase*)             Rain_Camera_Lens_Effect                                     ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 LocalizedParticleSystem                                     ___ OFFSET(get<T>, {0x3B8, 8, 0, 0})
	DMember(bool)                                      IsWorldReady                                                ___ OFFSET(get<bool>, {0x3C0, 1, 0, 0})
	DMember(double)                                    Rain_Trace_Timer                                            ___ OFFSET(get<double>, {0x3C8, 8, 0, 0})
	SMember(FVector)                                   RainTraceOffset                                             ___ OFFSET(get<T>, {0x3D0, 24, 0, 0})
	DMember(double)                                    RainMultiplierCurrent                                       ___ OFFSET(get<double>, {0x3E8, 8, 0, 0})
	DMember(double)                                    Rain_Spawn_Rate_Exponent                                    ___ OFFSET(get<double>, {0x3F0, 8, 0, 0})
	DMember(bool)                                      TracePrevious                                               ___ OFFSET(get<bool>, {0x3F8, 1, 0, 0})
	DMember(bool)                                      IsAthenaWorld                                               ___ OFFSET(get<bool>, {0x3F9, 1, 0, 0})
	DMember(bool)                                      bThreatOverride                                             ___ OFFSET(get<bool>, {0x3FA, 1, 0, 0})
	DMember(bool)                                      bForceOff                                                   ___ OFFSET(get<bool>, {0x3FB, 1, 0, 0})
	CMember(TScriptInterface<Class>)                   CameraLensEffectInterface                                   ___ OFFSET(get<T>, {0x400, 16, 0, 0})
};

/// Class /Game/VisualThreatManager/StormVisuals/Blueprints/Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class AThreat_RainAttachedToPlayer_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UParticleSystemComponent*)                 ParticleSystem                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C
/// Size: 0x0018 (0x000380 - 0x000398)
class AB_CameraRainDrops_01_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	DMember(float)                                     Alpha_Alpha_06897833405CC2B231B02C93C4E725A3                ___ OFFSET(get<float>, {0x388, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Alpha__Direction_06897833405CC2B231B02C93C4E725A3           ___ OFFSET(get<T>, {0x38C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Alpha                                                       ___ OFFSET(get<T>, {0x390, 8, 0, 0})
};

/// Class /Game/VisualThreatManager/StormVisuals/Debug/Delete.Delete_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelete_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

