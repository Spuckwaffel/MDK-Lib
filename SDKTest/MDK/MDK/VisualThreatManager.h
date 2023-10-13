
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Game/VisualThreatManager/Rifts/Blueprints/B_RiftImpact_CameraShake.B_RiftImpact_CameraShake_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UB_RiftImpact_CameraShake_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C
/// Size: 0x01E8 (0x000710 - 0x0008F8)
class AB_Rift_Portals_C : public ABuildingRift
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2296;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x710, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Wind_Vector_Explosion                                       OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     WindVectorVortex                                            OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(UAudioComponent*)                          Storm_Small_Vortex_Cue                                      OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Rift_RandomLightning_01                                   OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     RiftVortex                                                  OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(UFortMiniMapComponent*)                    FortMiniMap                                                 OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Rift_Active                                               OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(UPointLightComponent*)                     PointLight                                                  OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(UAudioComponent*)                          Audio1                                                      OFFSET(get<T>, {0x758, 8, 0, 0})
	DMember(float)                                     ScaleLightOnOff_LERP_9100A5CB43D5BF71190A45AB7C00C2B9       OFFSET(get<float>, {0x760, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleLightOnOff__Direction_9100A5CB43D5BF71190A45AB7C00C2B9 OFFSET(get<T>, {0x764, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleLightOnOff                                             OFFSET(get<T>, {0x768, 8, 0, 0})
	DMember(float)                                     BoostLight_LERP_B8E171DC42A8E999600BC085D7EDCE3D            OFFSET(get<float>, {0x770, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           BoostLight__Direction_B8E171DC42A8E999600BC085D7EDCE3D      OFFSET(get<T>, {0x774, 1, 0, 0})
	CMember(UTimelineComponent*)                       BoostLight                                                  OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 SpawnCloud                                                  OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 SwipeMaterial                                               OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(UParticleSystem*)                          Plasma_Particles                                            OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UParticleSystem*)                          Lightning_Strike_Particles                                  OFFSET(get<T>, {0x798, 8, 0, 0})
	CMember(UMaterialInterface*)                       Decal_Material                                              OFFSET(get<T>, {0x7A0, 8, 0, 0})
	SMember(FVector)                                   ImpactLocation                                              OFFSET(getStruct<T>, {0x7A8, 12, 0, 0})
	CMember(UDecalComponent*)                          Decal                                                       OFFSET(get<T>, {0x7B8, 8, 0, 0})
	CMember(UVectorFieldComponent*)                    Impact_Vector_Field                                         OFFSET(get<T>, {0x7C0, 8, 0, 0})
	SMember(FFortWindImpulseHandle)                    Wind_Impulse                                                OFFSET(getStruct<T>, {0x7C8, 4, 0, 0})
	DMember(float)                                     Wind_Impulse_Default_Strength                               OFFSET(get<float>, {0x7CC, 4, 0, 0})
	SMember(FVector)                                   Wind_location                                               OFFSET(getStruct<T>, {0x7D0, 12, 0, 0})
	DMember(float)                                     Wind_Radius                                                 OFFSET(get<float>, {0x7DC, 4, 0, 0})
	CMember(TArray<AActor*>)                           Overlapping_Actors                                          OFFSET(get<T>, {0x7E0, 16, 0, 0})
	CMember(TArray<ACar_Copper_C*>)                    ArrayOfNearbyCars                                           OFFSET(get<T>, {0x7F0, 16, 0, 0})
	SMember(FLinearColor)                              Light_Color_Idle                                            OFFSET(getStruct<T>, {0x800, 16, 0, 0})
	SMember(FLinearColor)                              Light_Color_Active                                          OFFSET(getStruct<T>, {0x810, 16, 0, 0})
	DMember(float)                                     Light_Intensity_Idle                                        OFFSET(get<float>, {0x820, 4, 0, 0})
	DMember(float)                                     Light_Intensity_Active                                      OFFSET(get<float>, {0x824, 4, 0, 0})
	DMember(float)                                     Light_Radius_Idle                                           OFFSET(get<float>, {0x828, 4, 0, 0})
	DMember(float)                                     Light_Radius_Active                                         OFFSET(get<float>, {0x82C, 4, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 ParticlesBaseMID                                            OFFSET(get<T>, {0x830, 8, 0, 0})
	DMember(bool)                                      LightEnabled                                                OFFSET(get<bool>, {0x838, 1, 0, 0})
	DMember(float)                                     Light_Fade_In_Time                                          OFFSET(get<float>, {0x83C, 4, 0, 0})
	DMember(float)                                     Light_Fade_Out_Time                                         OFFSET(get<float>, {0x840, 4, 0, 0})
	DMember(bool)                                      SpawnImpactParticles                                        OFFSET(get<bool>, {0x844, 1, 0, 0})
	DMember(float)                                     ManualDeactivateDelayBeforeDestory                          OFFSET(get<float>, {0x848, 4, 0, 0})
	DMember(float)                                     RiftLightningDuration                                       OFFSET(get<float>, {0x84C, 4, 0, 0})
	SMember(FVector)                                   VortexSize                                                  OFFSET(getStruct<T>, {0x850, 12, 0, 0})
	SMember(FVector)                                   VortexSizeMin                                               OFFSET(getStruct<T>, {0x85C, 12, 0, 0})
	SMember(FVector)                                   VortexSizeMax                                               OFFSET(getStruct<T>, {0x868, 12, 0, 0})
	DMember(float)                                     Twist_Amount_Min                                            OFFSET(get<float>, {0x874, 4, 0, 0})
	DMember(float)                                     Twist_Amount_Max                                            OFFSET(get<float>, {0x878, 4, 0, 0})
	DMember(float)                                     Wiggle_Strength_Min                                         OFFSET(get<float>, {0x87C, 4, 0, 0})
	DMember(float)                                     Wiggle_Strength_Max                                         OFFSET(get<float>, {0x880, 4, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 RiftVortexMID                                               OFFSET(get<T>, {0x888, 8, 0, 0})
	DMember(float)                                     Twist_Amount                                                OFFSET(get<float>, {0x890, 4, 0, 0})
	DMember(float)                                     Wiggle_Strength                                             OFFSET(get<float>, {0x894, 4, 0, 0})
	DMember(float)                                     WPO_Strength                                                OFFSET(get<float>, {0x898, 4, 0, 0})
	DMember(float)                                     Model_Height                                                OFFSET(get<float>, {0x89C, 4, 0, 0})
	SMember(FVector2D)                                 UV_Tile_Multiplier_Min                                      OFFSET(getStruct<T>, {0x8A0, 8, 0, 0})
	SMember(FVector2D)                                 UV_Tile_Multiplier_Max                                      OFFSET(getStruct<T>, {0x8A8, 8, 0, 0})
	DMember(float)                                     Wiggle_Frequency_Min                                        OFFSET(get<float>, {0x8B0, 4, 0, 0})
	DMember(float)                                     Wiggle_Frequency_Max                                        OFFSET(get<float>, {0x8B4, 4, 0, 0})
	SMember(FVector2D)                                 Wiggle_Speed_Min                                            OFFSET(getStruct<T>, {0x8B8, 8, 0, 0})
	SMember(FVector2D)                                 Wiggle_Speed_Max                                            OFFSET(getStruct<T>, {0x8C0, 8, 0, 0})
	SMember(FVector)                                   Lightning_Spawn_Loc                                         OFFSET(getStruct<T>, {0x8C8, 12, 0, 0})
	DMember(float)                                     Lightning_Bloat                                             OFFSET(get<float>, {0x8D4, 4, 0, 0})
	DMember(float)                                     RiftVortexFadeInTime                                        OFFSET(get<float>, {0x8D8, 4, 0, 0})
	DMember(float)                                     RiftVortexFadeOutTime                                       OFFSET(get<float>, {0x8DC, 4, 0, 0})
	DMember(bool)                                      Is_The_Wind_Water_Scene_Capture_Activated                   OFFSET(get<bool>, {0x8E0, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Wind_Vortex_MID                                             OFFSET(get<T>, {0x8E8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Explosion_Wind_Vector_Mesh_MID                              OFFSET(get<T>, {0x8F0, 8, 0, 0})


	/// Functions
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.BoostLight__FinishedFunc
	// void BoostLight__FinishedFunc();                                                                                         // [0x154a140] BlueprintEvent       
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.BoostLight__UpdateFunc
	// void BoostLight__UpdateFunc();                                                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.ScaleLightOnOff__FinishedFunc
	// void ScaleLightOnOff__FinishedFunc();                                                                                    // [0x154a140] BlueprintEvent       
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.ScaleLightOnOff__UpdateFunc
	// void ScaleLightOnOff__UpdateFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.OnPlaced
	// void OnPlaced();                                                                                                         // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.OnRemoved
	// void OnRemoved();                                                                                                        // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.OnSpawnAI
	// void OnSpawnAI();                                                                                                        // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.Lightning Impact Event
	// void Lightning Impact Event();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.OnActivated
	// void OnActivated();                                                                                                      // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.FadeLightIn
	// void FadeLightIn();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.FadeLightOut
	// void FadeLightOut();                                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.ManuallyActivateRift
	// void ManuallyActivateRift();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.ManuallyDeactivateRift
	// void ManuallyDeactivateRift();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.PatrolEnemySuckIn
	// void PatrolEnemySuckIn(float Delay, float RiftLightningDuration, bool SpawnImpactParticles);                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.OnDeactivated
	// void OnDeactivated();                                                                                                    // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.ResetGate
	// void ResetGate();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_Rift_Portals.B_Rift_Portals_C.ExecuteUbergraph_B_Rift_Portals
	// void ExecuteUbergraph_B_Rift_Portals(int32_t EntryPoint);                                                                // [0x154a140] HasDefaults          
};

/// Class /Game/VisualThreatManager/WindManager.WindManager_C
/// Size: 0x0118 (0x000558 - 0x000670)
class AWindManager_C : public AFortWindManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x558, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 WaterInteractionParticle                                    OFFSET(get<T>, {0x560, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     EmptyStaticMesh                                             OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(USceneCaptureComponent2D*)                 TopDownCaptureActorOfTheWorld                               OFFSET(get<T>, {0x570, 8, 0, 0})
	CMember(USceneCaptureComponent2D*)                 SceneCaptureComponent2D01                                   OFFSET(get<T>, {0x578, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x580, 8, 0, 0})
	DMember(float)                                     SmallerRenderTargetOrthoWidth                               OFFSET(get<float>, {0x588, 4, 0, 0})
	CMember(TArray<AActor*>)                           External_Test_Actor                                         OFFSET(get<T>, {0x590, 16, 0, 0})
	CMember(TArray<AFortStaticMeshActor*>)             World_Terrain_Meshes                                        OFFSET(get<T>, {0x5A0, 16, 0, 0})
	SMember(FVector)                                   Camera_Height_Offset                                        OFFSET(getStruct<T>, {0x5B0, 12, 0, 0})
	DMember(float)                                     Particle_Z_Offset                                           OFFSET(get<float>, {0x5BC, 4, 0, 0})
	DMember(bool)                                      Has_Water_Interaction_Enabled_Variable_Been_Set             OFFSET(get<bool>, {0x5C0, 1, 0, 0})
	DMember(bool)                                      Is_Water_Interaction_Enabled                                OFFSET(get<bool>, {0x5C1, 1, 0, 0})
	CMember(TArray<FStaticMeshMaterialArrayCombo>)     WorldStaticMeshArray                                        OFFSET(get<T>, {0x5C8, 16, 0, 0})
	SMember(FArrayOfWaterMeshWaterBlueprintPairs)      Array_Of_Water_Assets                                       OFFSET(getStruct<T>, {0x5D8, 16, 0, 0})
	CMember(TArray<UStaticMesh*>)                      PrototypicalStaticMeshes                                    OFFSET(get<T>, {0x5E8, 16, 0, 0})
	DMember(int32_t)                                   Current_Water_Mesh_Index                                    OFFSET(get<int32_t>, {0x5F8, 4, 0, 0})
	CMember(TArray<FFlowMapMaterials>)                 WaterVectorMatToDefaultMaterialPairing                      OFFSET(get<T>, {0x600, 16, 0, 0})
	DMember(bool)                                      MaterialPairingFound                                        OFFSET(get<bool>, {0x610, 1, 0, 0})
	SMember(FLinearColor)                              WorldBoundsMinMax                                           OFFSET(getStruct<T>, {0x614, 16, 0, 0})
	CMember(UMaterialInterface*)                       Black_Scene_Capture_Material                                OFFSET(get<T>, {0x628, 8, 0, 0})
	SMember(FBox)                                      Max_level_bounds___used_to_isolate_the_level_from_the_vista OFFSET(getStruct<T>, {0x630, 28, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             StormCylinderMeshes                                         OFFSET(get<T>, {0x650, 16, 0, 0})
	DMember(bool)                                      Storm_Cyl_Mesh_Match                                        OFFSET(get<bool>, {0x660, 1, 0, 0})
	DMember(int32_t)                                   Wind_Cyl_Mesh_Array_Match_Index                             OFFSET(get<int32_t>, {0x664, 4, 0, 0})
	DMember(float)                                     Delta_Wind_Falloff_in_World_Units                           OFFSET(get<float>, {0x668, 4, 0, 0})
	SMember(FFortWindImpulseHandle)                    NewVar                                                      OFFSET(getStruct<T>, {0x66C, 4, 0, 0})


	/// Functions
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Find Matching Wind Mesh Index And Write Bool
	// void Find Matching Wind Mesh Index And Write Bool(FVector Wind location, bool& Storm Cyl Mesh Match, int32_t& Wind Cyl Mesh Array Match Index); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.SetWindMatVariables
	// void SetWindMatVariables(UMaterialInstanceDynamic* Mid, bool Set AnimatedCylinderCenter, FVector AnimatedCylinderCenter, bool Set Animating Wind Magnitude, float Animating Wind Magnitude, bool Set Static Wind Magnitude, float Static Wind Magnitude, bool Set CylinderCenter, FVector CylinderCenter, bool Set WindVector, FVector WindVector, bool Set WindCrossVector, FVector WindCrossVector, bool Set OverallOuterRadius, float OverallOuterRadius, bool Set OverallInnerRadius, float OverallInnerRadius, bool Set Wind Still 0 or Animating 1, float Wind Still 0 or Animating 1, bool Set Circular Shader?, float Circular Shader?, bool& NewParam); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.UpdateWindDeltaCyl
	// void UpdateWindDeltaCyl(float Static Cylinder Outer Radius, float Duration, UMaterialInstanceDynamic* Mid, bool Is Wind Circular?); // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.RemoveWindCylinder
	// void RemoveWindCylinder(FFortWindImpulseCylinder& WindImpulseCylinder);                                                  // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.UpdateStormWindCylinder
	// void UpdateStormWindCylinder(FFortWindImpulseCylinder Wind Impulse, FFortWindImpulseCylinderDelta Wind Delta);           // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Calculate Camera Position
	// FVector Calculate Camera Position(float Scale, USceneCaptureComponent2D* Scene Capture);                                 // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.SetRenderOnlyAssets
	// void SetRenderOnlyAssets(UPrimitiveComponent* InComponent);                                                              // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.InitializeOrthoSettings
	// void InitializeOrthoSettings();                                                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Add Render To Texture Particle
	// void Add Render To Texture Particle(UParticleSystem* EmitterTemplate, FTransform& InTransform);                          // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWorldReady
	// void OnWorldReady();                                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Register player for render to texture purposes
	// void Register player for render to texture purposes(UPrimitiveComponent* Effect Water Interaction FX, UPrimitiveComponent* Gameplay Wind INteraction Effects); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.AddWindParticleSystemComponent
	// void AddWindParticleSystemComponent(UParticleSystemComponent* ParticleSystemComponent);                                  // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWindImpulseCylinderCreation
	// void OnWindImpulseCylinderCreation(FFortWindImpulseCylinder& WindImpulseCylinder, FFortWindImpulseCylinderDelta& WindImpulseCylinderDelta); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWindImpulseCylinderDeath
	// void OnWindImpulseCylinderDeath(FFortWindImpulseCylinder& WindImpulseCylinder);                                          // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.OnWindImpulseCylinderDeltaComplete
	// void OnWindImpulseCylinderDeltaComplete(FFortWindImpulseCylinder& WindImpulseCylinder);                                  // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.SpawnTestWind
	// void SpawnTestWind(float Radius, float ImpulseMagnitude);                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Play Water Splash Particle System At Location
	// void Play Water Splash Particle System At Location(FTransform Particle Transform);                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Add Wind Component
	// void Add Wind Component(UPrimitiveComponent* InComponent);                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.Update Test
	// void Update Test(float NewMagnitude);                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/WindManager.WindManager_C.ExecuteUbergraph_WindManager
	// void ExecuteUbergraph_WindManager(int32_t EntryPoint);                                                                   // [0x154a140] HasDefaults          
};

/// Class /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C
/// Size: 0x0018 (0x0003D0 - 0x0003E8)
class AB_CameraRainDrops_01_C : public AEmitterCameraLensEffectBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3D0, 8, 0, 0})
	DMember(float)                                     Alpha_Alpha_06897833405CC2B231B02C93C4E725A3                OFFSET(get<float>, {0x3D8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Alpha__Direction_06897833405CC2B231B02C93C4E725A3           OFFSET(get<T>, {0x3DC, 1, 0, 0})
	CMember(UTimelineComponent*)                       Alpha                                                       OFFSET(get<T>, {0x3E0, 8, 0, 0})


	/// Functions
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__FinishedFunc
	// void Alpha__FinishedFunc();                                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.Alpha__UpdateFunc
	// void Alpha__UpdateFunc();                                                                                                // [0x154a140] BlueprintEvent       
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/VisualThreatManager/Rifts/Blueprints/B_CameraRainDrops_01.B_CameraRainDrops_01_C.ExecuteUbergraph_B_CameraRainDrops_01
	// void ExecuteUbergraph_B_CameraRainDrops_01(int32_t EntryPoint);                                                          // [0x154a140] None                 
};

/// Class /Game/VisualThreatManager/StormVisuals/Debug/Delete.Delete_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UDelete_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/VisualThreatManager/StormVisuals/Blueprints/Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C
/// Size: 0x0010 (0x000318 - 0x000328)
class AThreat_RainAttachedToPlayer_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	CMember(UParticleSystemComponent*)                 ParticleSystem                                              OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x320, 8, 0, 0})


	/// Functions
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/Threat_RainAttachedToPlayer.Threat_RainAttachedToPlayer_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
/// Size: 0x01BE (0x000328 - 0x0004E6)
class AThreatPostProcessManagerAndParticleBlueprint_C : public AFortThreatParticleActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1254;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x328, 8, 0, 0})
	CMember(UAudioComponent*)                          EnterTheStormSound                                          OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UBillboardComponent*)                      Sprite1                                                     OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(float)                                     Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4 OFFSET(get<float>, {0x340, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4 OFFSET(get<T>, {0x344, 1, 0, 0})
	CMember(UTimelineComponent*)                       Ramp_Up_down_values_on_death                                OFFSET(get<T>, {0x348, 8, 0, 0})
	DMember(float)                                     Min_Cloud_Distance_from_player                              OFFSET(get<float>, {0x350, 4, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Localized_Particle_System_MID                               OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UMulticastDelegate)                        NewEventDispatcher                                          OFFSET(get<T>, {0x360, 16, 0, 0})
	CMember(UMulticastDelegate)                        NewEventDispatcher0                                         OFFSET(get<T>, {0x370, 16, 0, 0})
	CMember(TArray<FVector>)                           Array_of_Cloud_Positions                                    OFFSET(get<T>, {0x380, 16, 0, 0})
	CMember(TArray<float>)                             SkyParticleCloudDistances                                   OFFSET(get<T>, {0x390, 16, 0, 0})
	CMember(TArray<int32_t>)                           CloudDistanceToPlayerLookUpArray                            OFFSET(get<T>, {0x3A0, 16, 0, 0})
	SMember(FVector)                                   Target_Cloud_Position                                       OFFSET(getStruct<T>, {0x3B0, 12, 0, 0})
	DMember(int32_t)                                   RecalculateTimer                                            OFFSET(get<int32_t>, {0x3BC, 4, 0, 0})
	DMember(bool)                                      Is_Alive                                                    OFFSET(get<bool>, {0x3C0, 1, 0, 0})
	DMember(bool)                                      IsAliveJustChanged                                          OFFSET(get<bool>, {0x3C1, 1, 0, 0})
	DMember(bool)                                      IsAlivePrevious                                             OFFSET(get<bool>, {0x3C2, 1, 0, 0})
	DMember(int32_t)                                   Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_alive OFFSET(get<int32_t>, {0x3C4, 4, 0, 0})
	DMember(bool)                                      CurrentCloudMesh                                            OFFSET(get<bool>, {0x3C8, 1, 0, 0})
	DMember(int32_t)                                   Number_Of_ticks_before_checking_for_the_nearest_cloud_again___when_dead OFFSET(get<int32_t>, {0x3CC, 4, 0, 0})
	CMember(APostProcessVolume*)                       Materialpost                                                OFFSET(get<T>, {0x3D0, 8, 0, 0})
	DMember(float)                                     post_process_volume_falloff__around_the_threat_volume       OFFSET(get<float>, {0x3D8, 4, 0, 0})
	DMember(bool)                                      ShowRainEffect                                              OFFSET(get<bool>, {0x3DC, 1, 0, 0})
	CMember(TArray<AActor*>)                           FourClosestClouds                                           OFFSET(get<T>, {0x3E0, 16, 0, 0})
	DMember(int32_t)                                   Number_Of_Volumes_to_check                                  OFFSET(get<int32_t>, {0x3F0, 4, 0, 0})
	DMember(float)                                     DeltaTime                                                   OFFSET(get<float>, {0x3F4, 4, 0, 0})
	DMember(float)                                     PostProcessTargetWeight                                     OFFSET(get<float>, {0x3F8, 4, 0, 0})
	DMember(float)                                     Current_Post_Process_Weight                                 OFFSET(get<float>, {0x3FC, 4, 0, 0})
	DMember(float)                                     Post_Process_Fade_in_speed                                  OFFSET(get<float>, {0x400, 4, 0, 0})
	DMember(bool)                                      SoundIsActive                                               OFFSET(get<bool>, {0x404, 1, 0, 0})
	DMember(bool)                                      SoundWasPreviouslyActive                                    OFFSET(get<bool>, {0x405, 1, 0, 0})
	SMember(FTransform)                                PlayerTransform                                             OFFSET(getStruct<T>, {0x410, 48, 0, 0})
	DMember(bool)                                      is_On                                                       OFFSET(get<bool>, {0x440, 1, 0, 0})
	CMember(APostProcessVolume*)                       MaterialEffectsPostProcess                                  OFFSET(get<T>, {0x448, 8, 0, 0})
	SMember(FLinearColor)                              ThreatFogPostProcessColor_Morning                           OFFSET(getStruct<T>, {0x450, 16, 0, 0})
	SMember(FLinearColor)                              ThreatFogPostProcessColor_Day                               OFFSET(getStruct<T>, {0x460, 16, 0, 0})
	SMember(FLinearColor)                              ThreatFogPostProcessColor_Evening                           OFFSET(getStruct<T>, {0x470, 16, 0, 0})
	SMember(FLinearColor)                              ThreatFogPostProcessColor_Night                             OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	CMember(TArray<FBox>)                              Array_of_Cloud_Volumes                                      OFFSET(get<T>, {0x490, 16, 0, 0})
	DMember(int32_t)                                   ClosestCloudIndex                                           OFFSET(get<int32_t>, {0x4A0, 4, 0, 0})
	DMember(float)                                     ClosestCloudDistance                                        OFFSET(get<float>, {0x4A4, 4, 0, 0})
	DMember(float)                                     PostProcessWeightModulation                                 OFFSET(get<float>, {0x4A8, 4, 0, 0})
	DMember(float)                                     Ramp_Up_And_Down_Anim_Values                                OFFSET(get<float>, {0x4AC, 4, 0, 0})
	DMember(bool)                                      ShowRainOnCameraLens                                        OFFSET(get<bool>, {0x4B0, 1, 0, 0})
	CMember(AEmitterCameraLensEffectBase*)             Rain_Camera_Lens_Effect                                     OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 LocalizedParticleSystem                                     OFFSET(get<T>, {0x4C0, 8, 0, 0})
	DMember(bool)                                      IsWorldReady                                                OFFSET(get<bool>, {0x4C8, 1, 0, 0})
	DMember(float)                                     Rain_Trace_Timer                                            OFFSET(get<float>, {0x4CC, 4, 0, 0})
	SMember(FVector)                                   RainTraceOffset                                             OFFSET(getStruct<T>, {0x4D0, 12, 0, 0})
	DMember(float)                                     RainMultiplierCurrent                                       OFFSET(get<float>, {0x4DC, 4, 0, 0})
	DMember(float)                                     Rain_Spawn_Rate_Exponent                                    OFFSET(get<float>, {0x4E0, 4, 0, 0})
	DMember(bool)                                      TracePrevious                                               OFFSET(get<bool>, {0x4E4, 1, 0, 0})
	DMember(bool)                                      IsAthenaWorld                                               OFFSET(get<bool>, {0x4E5, 1, 0, 0})


	/// Functions
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox
	// void CalculatePlayerPositionNearBox(FVector BoxMin, FVector BoxMax, float& VolumePlayerCoveragePercentage);              // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__FinishedFunc
	// void Ramp Up down values on death__FinishedFunc();                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__UpdateFunc
	// void Ramp Up down values on death__UpdateFunc();                                                                         // [0x154a140] BlueprintEvent       
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged
	// void OnThreatCloudsChanged(TArray<FThreatLocationInfo>& ThreatLocationInfo);                                             // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnWorldReady
	// void OnWorldReady();                                                                                                     // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.VFX_RainTracePeriodic
	// void VFX_RainTracePeriodic();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.StartTraceTimer
	// void StartTraceTimer();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ForceUpdateLensEffect
	// void ForceUpdateLensEffect();                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint
	// void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32_t EntryPoint);                                  // [0x154a140] HasDefaults          
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0__DelegateSignature
	// void NewEventDispatcher0__DelegateSignature();                                                                           // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/VisualThreatManager/StormVisuals/Blueprints/ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher__DelegateSignature
	// void NewEventDispatcher__DelegateSignature();                                                                            // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Struct /Game/VisualThreatManager/StormVisuals/Blueprints/FlowMapMaterials.FlowMapMaterials
/// Size: 0x0010 (0x000000 - 0x000010)
class FFlowMapMaterials : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UMaterialInterface*)                       OriginalMaterial_4_C9560D9C4A128A0A813E97865710CC97         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMaterialInterface*)                       RenderToTextureMaterial_5_5CB972A744E80375B62CF68122B83C88  OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Game/VisualThreatManager/StormVisuals/Blueprints/StaticMeshMaterialArrayCombo.StaticMeshMaterialArrayCombo
/// Size: 0x0018 (0x000000 - 0x000018)
class FStaticMeshMaterialArrayCombo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(AStaticMeshActor*)                         StaticMesh_6_F7234FBB43D39B4944E60390FB9D9D4D               OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               MaterialArray_5_FAE74D234840C6E8BEEBE4BC4590BE6C            OFFSET(get<T>, {0x8, 16, 0, 0})
};

