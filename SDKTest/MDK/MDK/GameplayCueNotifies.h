
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C
/// Size: 0x0019 (0x000990 - 0x0009A9)
class AGCNL_EdgeOfStorm_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2473;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x990, 8, 0, 0})
	CMember(UAudioComponent*)                          Audio                                                       OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          StormPawn                                                   OFFSET(get<T>, {0x9A0, 8, 0, 0})
	DMember(bool)                                      bBoundAudioPercent                                          OFFSET(get<bool>, {0x9A8, 1, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x1d9241c] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x1d9241c] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x1d9241c] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Activated
	// void Activated(FVector EdgeOfStorm);                                                                                     // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Deactivated
	// void Deactivated();                                                                                                      // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.ExecuteUbergraph_GCNL_EdgeOfStorm
	// void ExecuteUbergraph_GCNL_EdgeOfStorm(int32_t EntryPoint);                                                              // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Shields/GC_Shield_FullyCharged.GC_Shield_FullyCharged_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGC_Shield_FullyCharged_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /Game/GameplayCueNotifies/Death/EliminationBotVFXInterface.EliminationBotVFXInterface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UEliminationBotVFXInterface_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C
/// Size: 0x01C8 (0x000548 - 0x000710)
class AGCN_RezIn_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x548, 8, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_LightIntensity_81C5527F43A6972D94623590BA582E8C OFFSET(get<float>, {0x550, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_ZHeightParam_81C5527F43A6972D94623590BA582E8C OFFSET(get<float>, {0x554, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_TransitionParam_81C5527F43A6972D94623590BA582E8C OFFSET(get<float>, {0x558, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_ResOutCharacterMesh__Direction_81C5527F43A6972D94623590BA582E8C OFFSET(get<T>, {0x55C, 1, 0, 0})
	CMember(UTimelineComponent*)                       TFX_ResOutCharacterMesh                                     OFFSET(get<T>, {0x560, 8, 0, 0})
	DMember(float)                                     TFX_GlowCharacterMesh_EmissiveWarp_9EA15145493A8F1A5915938D5529A028 OFFSET(get<float>, {0x568, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_GlowCharacterMesh__Direction_9EA15145493A8F1A5915938D5529A028 OFFSET(get<T>, {0x56C, 1, 0, 0})
	CMember(UTimelineComponent*)                       TFX_GlowCharacterMesh                                       OFFSET(get<T>, {0x570, 8, 0, 0})
	DMember(bool)                                      DEBUG_ANIMATION                                             OFFSET(get<bool>, {0x578, 1, 0, 0})
	DMember(bool)                                      SpawnDrone                                                  OFFSET(get<bool>, {0x579, 1, 0, 0})
	CMember(UClass*)                                   Teleportation_Drone                                         OFFSET(get<T>, {0x580, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_AnimPlayRate                                   OFFSET(get<double>, {0x588, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_Lifespan                                       OFFSET(get<double>, {0x590, 8, 0, 0})
	CMember(UPointLightComponent*)                     Teleportation_Point_Light                                   OFFSET(get<T>, {0x598, 8, 0, 0})
	SMember(FVector)                                   Teleportation_Light_Offset                                  OFFSET(getStruct<T>, {0x5A0, 24, 0, 0})
	SMember(FLinearColor)                              Teleportation_Light_Color                                   OFFSET(getStruct<T>, {0x5B8, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         DissolveMIDs                                                OFFSET(get<T>, {0x5C8, 16, 0, 0})
	CMember(UMaterialInterface*)                       Mat_Chracter_Dissolve                                       OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(APlayerPawn_Athena_C*)                     Pawn                                                        OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(TSet<USkeletalMeshComponent*>)             Dissolve                                                    OFFSET(get<T>, {0x5E8, 80, 0, 0})
	SMember(FName)                                     Socket_Mesh_Top                                             OFFSET(getStruct<T>, {0x638, 4, 0, 0})
	DMember(double)                                    Max_Light_Intensity                                         OFFSET(get<double>, {0x640, 8, 0, 0})
	SMember(FName)                                     Socket_Mesh_Bottom                                          OFFSET(getStruct<T>, {0x648, 4, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           Meshes_to_Dissolve                                          OFFSET(get<T>, {0x650, 16, 0, 0})
	CMember(ABP_TeleportationDrone_C*)                 Drone                                                       OFFSET(get<T>, {0x660, 8, 0, 0})
	DMember(bool)                                      DEBUG_CHILDCOMPONENTS                                       OFFSET(get<bool>, {0x668, 1, 0, 0})
	CMember(TArray<UFXSystemComponent*>)               Particle_Components                                         OFFSET(get<T>, {0x670, 16, 0, 0})
	CMember(UNiagaraComponent*)                        Spawned_Teleport_VFX                                        OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UNiagaraSystem*)                           Teleport_In_Visual_Effect                                   OFFSET(get<T>, {0x688, 8, 0, 0})
	SMember(FName)                                     Teleport_In_VFX_Attach_Point_Name                           OFFSET(getStruct<T>, {0x690, 4, 0, 0})
	DMember(int32_t)                                   Cur_Dissolve_Setup_Attempt                                  OFFSET(get<int32_t>, {0x694, 4, 0, 0})
	DMember(int32_t)                                   AmountOfTimesToAttemptRestoreMats                           OFFSET(get<int32_t>, {0x698, 4, 0, 0})
	DMember(bool)                                      Spawn_VFX_Attached                                          OFFSET(get<bool>, {0x69C, 1, 0, 0})
	DMember(double)                                    Dissolve_Timeline_Playrate                                  OFFSET(get<double>, {0x6A0, 8, 0, 0})
	DMember(double)                                    Glow_Timeline_Playrate                                      OFFSET(get<double>, {0x6A8, 8, 0, 0})
	CMember(UNiagaraSystem*)                           Drone_Visual_Effect                                         OFFSET(get<T>, {0x6B0, 8, 0, 0})
	DMember(bool)                                      DEBUG_TESTJANUSFX                                           OFFSET(get<bool>, {0x6B8, 1, 0, 0})
	SMember(FName)                                     Drone_VFX_Attach_Point                                      OFFSET(getStruct<T>, {0x6BC, 4, 0, 0})
	SMember(FGuid)                                     Material_Override_ID                                        OFFSET(getStruct<T>, {0x6C0, 16, 0, 0})
	SMember(FFortPawnMaterialOverrideCopiedParameters) Copied_Parameters                                           OFFSET(getStruct<T>, {0x6D0, 48, 0, 0})
	SMember(FDelegateHandleController)                 Delegate_Handle_Controller                                  OFFSET(getStruct<T>, {0x700, 16, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Drone VFX
	// void Spawn Drone VFX();                                                                                                  // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Set Timelines' Playrates
	// void Set Timelines' Playrates();                                                                                         // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Teleport In VFX
	// void Spawn Teleport In VFX();                                                                                            // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Restore Character Materials
	// void Restore Character Materials(bool& Fully Completed);                                                                 // [0x1d9241c] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Clean-Up Teleportation Light
	// void Clean-Up Teleportation Light();                                                                                     // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Light
	// void Spawn Teleportation Light();                                                                                        // [0x1d9241c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Spawn Teleportation Drone
	// void Spawn Teleportation Drone();                                                                                        // [0x1d9241c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Stop Looping Audio
	// void Stop Looping Audio();                                                                                               // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__FinishedFunc
	// void TFX_GlowCharacterMesh__FinishedFunc();                                                                              // [0x1d9241c] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_GlowCharacterMesh__UpdateFunc
	// void TFX_GlowCharacterMesh__UpdateFunc();                                                                                // [0x1d9241c] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__FinishedFunc
	// void TFX_ResOutCharacterMesh__FinishedFunc();                                                                            // [0x1d9241c] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TFX_ResOutCharacterMesh__UpdateFunc
	// void TFX_ResOutCharacterMesh__UpdateFunc();                                                                              // [0x1d9241c] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.OnBurstGeneric
	// void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1d9241c] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Pre-Sequence Change
	// void Pre-Sequence Change();                                                                                              // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameters on Spawned FX
	// void Set Additional Niagara Parameters on Spawned FX(UNiagaraComponent* Spawned Teleport In FX);                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.EndVFX
	// void EndVFX();                                                                                                           // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.Set Additional Niagara Parameter on Drone FX
	// void Set Additional Niagara Parameter on Drone FX(UNiagaraComponent* Drone FX);                                          // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.OnCosmeticPart
	// void OnCosmeticPart(AFortPlayerPawn* Pawn, UCustomCharacterPart* Part, USkeletalMeshComponent* MeshPart, TEnumAsByte<EFortCustomPartType> PartType); // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.TriggerVFX
	// void TriggerVFX();                                                                                                       // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezIn.GCN_RezIn_C.ExecuteUbergraph_GCN_RezIn
	// void ExecuteUbergraph_GCN_RezIn(int32_t EntryPoint);                                                                     // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C
/// Size: 0x01F0 (0x000548 - 0x000738)
class AGCN_RezOut_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x548, 8, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_LightIntensity_E9C2D3554642468472CCCFA609A39FBC OFFSET(get<float>, {0x550, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_ZHeightParam_E9C2D3554642468472CCCFA609A39FBC OFFSET(get<float>, {0x554, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_TransitionParam_E9C2D3554642468472CCCFA609A39FBC OFFSET(get<float>, {0x558, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_ResOutCharacterMesh__Direction_E9C2D3554642468472CCCFA609A39FBC OFFSET(get<T>, {0x55C, 1, 0, 0})
	CMember(UTimelineComponent*)                       TFX_ResOutCharacterMesh                                     OFFSET(get<T>, {0x560, 8, 0, 0})
	DMember(float)                                     TFX_GlowCharacterMesh_EmissiveWarp_39A37BC9407CF090A09ABDA5A488F776 OFFSET(get<float>, {0x568, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_GlowCharacterMesh__Direction_39A37BC9407CF090A09ABDA5A488F776 OFFSET(get<T>, {0x56C, 1, 0, 0})
	CMember(UTimelineComponent*)                       TFX_GlowCharacterMesh                                       OFFSET(get<T>, {0x570, 8, 0, 0})
	DMember(bool)                                      DEBUG_ANIMATION                                             OFFSET(get<bool>, {0x578, 1, 0, 0})
	DMember(bool)                                      SpawnDrone                                                  OFFSET(get<bool>, {0x579, 1, 0, 0})
	CMember(UClass*)                                   Teleportation_Drone                                         OFFSET(get<T>, {0x580, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_AnimPlayRate                                   OFFSET(get<double>, {0x588, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_Lifespan                                       OFFSET(get<double>, {0x590, 8, 0, 0})
	CMember(UPointLightComponent*)                     Teleportation_Point_Light                                   OFFSET(get<T>, {0x598, 8, 0, 0})
	SMember(FVector)                                   Teleportation_Light_Offset                                  OFFSET(getStruct<T>, {0x5A0, 24, 0, 0})
	SMember(FLinearColor)                              Teleportation_Light_Color                                   OFFSET(getStruct<T>, {0x5B8, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         DissolveMIDs                                                OFFSET(get<T>, {0x5C8, 16, 0, 0})
	CMember(UMaterialInterface*)                       Mat_Chracter_Dissolve                                       OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(APlayerPawn_Athena_C*)                     Pawn                                                        OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(TSet<USkeletalMeshComponent*>)             Dissolve                                                    OFFSET(get<T>, {0x5E8, 80, 0, 0})
	SMember(FName)                                     Socket_Mesh_Top                                             OFFSET(getStruct<T>, {0x638, 4, 0, 0})
	DMember(double)                                    Max_Light_Intensity                                         OFFSET(get<double>, {0x640, 8, 0, 0})
	SMember(FName)                                     Socket_Mesh_Bottom                                          OFFSET(getStruct<T>, {0x648, 4, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           Meshes_to_Dissolve                                          OFFSET(get<T>, {0x650, 16, 0, 0})
	CMember(ABP_TeleportationDrone_C*)                 Drone                                                       OFFSET(get<T>, {0x660, 8, 0, 0})
	DMember(bool)                                      DEBUG_CHILDCOMPONENTS                                       OFFSET(get<bool>, {0x668, 1, 0, 0})
	CMember(TArray<UFXSystemComponent*>)               Particle_Components                                         OFFSET(get<T>, {0x670, 16, 0, 0})
	CMember(UNiagaraComponent*)                        Spawned_Death_VFX                                           OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UNiagaraSystem*)                           Dissolve_Visual_Effect                                      OFFSET(get<T>, {0x688, 8, 0, 0})
	SMember(FName)                                     Dissolve_VFX_Spawn_Point_Name                               OFFSET(getStruct<T>, {0x690, 4, 0, 0})
	CMember(UAnimMontage*)                             Base_Elimination_Montage                                    OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(UAnimMontage*)                             DBNO_Elimination_Montage                                    OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(UAnimMontage*)                             Skydiving_Elimination_Montage                               OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(UAnimMontage*)                             Swimming_Elimination_Montage                                OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(UAnimMontage*)                             DBNO_Swimming_Elimination_Montage                           OFFSET(get<T>, {0x6B8, 8, 0, 0})
	DMember(bool)                                      Spawn_VFX_Attached                                          OFFSET(get<bool>, {0x6C0, 1, 0, 0})
	DMember(double)                                    Dissolve_Timeline_Playrate                                  OFFSET(get<double>, {0x6C8, 8, 0, 0})
	DMember(double)                                    Glow_Timeline_Playrate                                      OFFSET(get<double>, {0x6D0, 8, 0, 0})
	DMember(bool)                                      DEBUG_REMOVESPAWNVFX                                        OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	DMember(bool)                                      DEBUG_REMOVESPAWNEDPOINTLIGHT                               OFFSET(get<bool>, {0x6D9, 1, 0, 0})
	CMember(UNiagaraSystem*)                           Drone_Visual_Effect                                         OFFSET(get<T>, {0x6E0, 8, 0, 0})
	SMember(FName)                                     Drone_VFX_Attach_Point                                      OFFSET(getStruct<T>, {0x6E8, 4, 0, 0})
	DMember(bool)                                      DEBUG_FXSYSTEMCOMPONENTS                                    OFFSET(get<bool>, {0x6EC, 1, 0, 0})
	DMember(bool)                                      ShouldDelayBetweenAnimAndVFX                                OFFSET(get<bool>, {0x6ED, 1, 0, 0})
	DMember(double)                                    DelayBetweenAnimAndVFX                                      OFFSET(get<double>, {0x6F0, 8, 0, 0})
	SMember(FGuid)                                     Material_Override_ID                                        OFFSET(getStruct<T>, {0x6F8, 16, 0, 0})
	SMember(FFortPawnMaterialOverrideCopiedParameters) Copied_Parameters                                           OFFSET(getStruct<T>, {0x708, 48, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Drone VFX
	// void Spawn Drone VFX();                                                                                                  // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Set Timeline Playrates
	// void Set Timeline Playrates();                                                                                           // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Dissolve Material Setup
	// void Dissolve Material Setup();                                                                                          // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Dissolve VFX
	// void Spawn Dissolve VFX();                                                                                               // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Clean-Up Teleportation Light
	// void Clean-Up Teleportation Light();                                                                                     // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Light
	// void Spawn Teleportation Light();                                                                                        // [0x1d9241c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Spawn Teleportation Drone
	// void Spawn Teleportation Drone();                                                                                        // [0x1d9241c] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Stop Looping Audio
	// void Stop Looping Audio();                                                                                               // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Play Elmination AnimMontage
	// void Play Elmination AnimMontage();                                                                                      // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__FinishedFunc
	// void TFX_GlowCharacterMesh__FinishedFunc();                                                                              // [0x1d9241c] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_GlowCharacterMesh__UpdateFunc
	// void TFX_GlowCharacterMesh__UpdateFunc();                                                                                // [0x1d9241c] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__FinishedFunc
	// void TFX_ResOutCharacterMesh__FinishedFunc();                                                                            // [0x1d9241c] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TFX_ResOutCharacterMesh__UpdateFunc
	// void TFX_ResOutCharacterMesh__UpdateFunc();                                                                              // [0x1d9241c] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.EndVFX
	// void EndVFX();                                                                                                           // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.OnBurstGeneric
	// void OnBurstGeneric(AActor* MyTarget, FGameplayCueParameters& Parameters, TArray<UFXSystemComponent*>& ParticleComponents, TArray<UAudioComponent*>& AudioComponents, ULegacyCameraShake* BurstCameraShakeInstance, ADecalActor* BurstDecalInstance); // [0x1d9241c] Event|Public|HasOutParms|BlueprintEvent|Const 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Pre-Sequence Change
	// void Pre-Sequence Change();                                                                                              // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Spawned FX
	// void Set Additional Niagara Parameters on Spawned FX(UNiagaraComponent* Spawned Death FX);                               // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.Set Additional Niagara Parameters on Drone FX
	// void Set Additional Niagara Parameters on Drone FX(UNiagaraComponent* Drone FX);                                         // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.TriggerVFX
	// void TriggerVFX();                                                                                                       // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C.ExecuteUbergraph_GCN_RezOut
	// void ExecuteUbergraph_GCN_RezOut(int32_t EntryPoint);                                                                    // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezIn_CreativeRespawn.GCN_RezIn_CreativeRespawn_C
/// Size: 0x0000 (0x000710 - 0x000710)
class AGCN_RezIn_CreativeRespawn_C : public AGCN_RezIn_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1808;

public:
};

/// Class /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C
/// Size: 0x0030 (0x000548 - 0x000578)
class AGC_Abilities_Death_FadeCapsule_Athena_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x548, 8, 0, 0})
	DMember(float)                                     CapsuleFadeTL_RemoveShadow_B48F4431426ECD264BA37C992B6887C3 OFFSET(get<float>, {0x550, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CapsuleFadeTL__Direction_B48F4431426ECD264BA37C992B6887C3   OFFSET(get<T>, {0x554, 1, 0, 0})
	CMember(UTimelineComponent*)                       CapsuleFadeTL                                               OFFSET(get<T>, {0x558, 8, 0, 0})
	DMember(double)                                    Starting_Min_Capsule_Shadow_Vis                             OFFSET(get<double>, {0x560, 8, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           SkeletalMesh                                                OFFSET(get<T>, {0x568, 16, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.SkeletalMeshSetup
	// void SkeletalMeshSetup(AFortPlayerPawnAthena* FortPawn);                                                                 // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__FinishedFunc
	// void CapsuleFadeTL__FinishedFunc();                                                                                      // [0x1d9241c] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__UpdateFunc
	// void CapsuleFadeTL__UpdateFunc();                                                                                        // [0x1d9241c] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x1d9241c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena
	// void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena(int32_t EntryPoint);                                         // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C
/// Size: 0x0030 (0x000548 - 0x000578)
class AGC_Abilities_Death_FadeCapsule_StW_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x548, 8, 0, 0})
	DMember(float)                                     CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1 OFFSET(get<float>, {0x550, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1   OFFSET(get<T>, {0x554, 1, 0, 0})
	CMember(UTimelineComponent*)                       CapsuleFadeTL                                               OFFSET(get<T>, {0x558, 8, 0, 0})
	DMember(double)                                    Starting_Min_Capsule_Shadow_Vis                             OFFSET(get<double>, {0x560, 8, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           SkeletalMesh                                                OFFSET(get<T>, {0x568, 16, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.SkeletalMeshSetup
	// void SkeletalMeshSetup(AFortPlayerPawn* FortPawn);                                                                       // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.CapsuleFadeTL__FinishedFunc
	// void CapsuleFadeTL__FinishedFunc();                                                                                      // [0x1d9241c] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.CapsuleFadeTL__UpdateFunc
	// void CapsuleFadeTL__UpdateFunc();                                                                                        // [0x1d9241c] BlueprintEvent       
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x1d9241c] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW
	// void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW(int32_t EntryPoint);                                            // [0x1d9241c] Final|HasDefaults    
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C
/// Size: 0x0010 (0x000738 - 0x000748)
class AGCN_RezOut_NPC_C : public AGCN_RezOut_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x738, 8, 0, 0})
	CMember(USoundBase*)                               SoundOnNPCDeath                                             OFFSET(get<T>, {0x740, 8, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C.Pre-Sequence Change
	// void Pre-Sequence Change();                                                                                              // [0x1d9241c] BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C.ExecuteUbergraph_GCN_RezOut_NPC
	// void ExecuteUbergraph_GCN_RezOut_NPC(int32_t EntryPoint);                                                                // [0x1d9241c] Final                
};

/// Class /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C
/// Size: 0x0010 (0x000738 - 0x000748)
class AGCN_NPC_Interaction_RezOut_Glitch_C : public AGCN_RezOut_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x738, 8, 0, 0})
	CMember(USoundBase*)                               SoundOnNPCDeath                                             OFFSET(get<T>, {0x740, 8, 0, 0})


	/// Functions
	// Function /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C.Spawn Dissolve VFX
	// void Spawn Dissolve VFX();                                                                                               // [0x1d9241c] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C.ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch
	// void ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch(int32_t EntryPoint);                                             // [0x1d9241c] Final|HasDefaults    
};

