
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities

/// Class /Game/GameplayCueNotifies/Shields/GC_Shield_FullyCharged.GC_Shield_FullyCharged_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGC_Shield_FullyCharged_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C
/// Size: 0x0019 (0x000990 - 0x0009A9)
class AGCNL_EdgeOfStorm_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2473;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UAudioComponent*)                          Audio                                                       ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          StormPawn                                                   ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
	DMember(bool)                                      bBoundAudioPercent                                          ___ OFFSET(get<bool>, {0x9A8, 1, 0, 0})
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_LightIntensity_81C5527F43A6972D94623590BA582E8C ___ OFFSET(get<float>, {0x550, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_ZHeightParam_81C5527F43A6972D94623590BA582E8C ___ OFFSET(get<float>, {0x554, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_TransitionParam_81C5527F43A6972D94623590BA582E8C ___ OFFSET(get<float>, {0x558, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_ResOutCharacterMesh__Direction_81C5527F43A6972D94623590BA582E8C ___ OFFSET(get<T>, {0x55C, 1, 0, 0})
	CMember(UTimelineComponent*)                       TFX_ResOutCharacterMesh                                     ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	DMember(float)                                     TFX_GlowCharacterMesh_EmissiveWarp_9EA15145493A8F1A5915938D5529A028 ___ OFFSET(get<float>, {0x568, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_GlowCharacterMesh__Direction_9EA15145493A8F1A5915938D5529A028 ___ OFFSET(get<T>, {0x56C, 1, 0, 0})
	CMember(UTimelineComponent*)                       TFX_GlowCharacterMesh                                       ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	DMember(bool)                                      DEBUG_ANIMATION                                             ___ OFFSET(get<bool>, {0x578, 1, 0, 0})
	DMember(bool)                                      SpawnDrone                                                  ___ OFFSET(get<bool>, {0x579, 1, 0, 0})
	CMember(UClass*)                                   Teleportation_Drone                                         ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_AnimPlayRate                                   ___ OFFSET(get<double>, {0x588, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_Lifespan                                       ___ OFFSET(get<double>, {0x590, 8, 0, 0})
	CMember(UPointLightComponent*)                     Teleportation_Point_Light                                   ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	SMember(FVector)                                   Teleportation_Light_Offset                                  ___ OFFSET(get<T>, {0x5A0, 24, 0, 0})
	SMember(FLinearColor)                              Teleportation_Light_Color                                   ___ OFFSET(get<T>, {0x5B8, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         DissolveMIDs                                                ___ OFFSET(get<T>, {0x5C8, 16, 0, 0})
	CMember(UMaterialInterface*)                       Mat_Chracter_Dissolve                                       ___ OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(APlayerPawn_Athena_C*)                     Pawn                                                        ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(TSet<USkeletalMeshComponent*>)             Dissolve                                                    ___ OFFSET(get<T>, {0x5E8, 80, 0, 0})
	SMember(FName)                                     Socket_Mesh_Top                                             ___ OFFSET(get<T>, {0x638, 4, 0, 0})
	DMember(double)                                    Max_Light_Intensity                                         ___ OFFSET(get<double>, {0x640, 8, 0, 0})
	SMember(FName)                                     Socket_Mesh_Bottom                                          ___ OFFSET(get<T>, {0x648, 4, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           Meshes_to_Dissolve                                          ___ OFFSET(get<T>, {0x650, 16, 0, 0})
	CMember(ABP_TeleportationDrone_C*)                 Drone                                                       ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	DMember(bool)                                      DEBUG_CHILDCOMPONENTS                                       ___ OFFSET(get<bool>, {0x668, 1, 0, 0})
	CMember(TArray<UFXSystemComponent*>)               Particle_Components                                         ___ OFFSET(get<T>, {0x670, 16, 0, 0})
	CMember(UNiagaraComponent*)                        Spawned_Teleport_VFX                                        ___ OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UNiagaraSystem*)                           Teleport_In_Visual_Effect                                   ___ OFFSET(get<T>, {0x688, 8, 0, 0})
	SMember(FName)                                     Teleport_In_VFX_Attach_Point_Name                           ___ OFFSET(get<T>, {0x690, 4, 0, 0})
	DMember(int32_t)                                   Cur_Dissolve_Setup_Attempt                                  ___ OFFSET(get<int32_t>, {0x694, 4, 0, 0})
	DMember(int32_t)                                   AmountOfTimesToAttemptRestoreMats                           ___ OFFSET(get<int32_t>, {0x698, 4, 0, 0})
	DMember(bool)                                      Spawn_VFX_Attached                                          ___ OFFSET(get<bool>, {0x69C, 1, 0, 0})
	DMember(double)                                    Dissolve_Timeline_Playrate                                  ___ OFFSET(get<double>, {0x6A0, 8, 0, 0})
	DMember(double)                                    Glow_Timeline_Playrate                                      ___ OFFSET(get<double>, {0x6A8, 8, 0, 0})
	CMember(UNiagaraSystem*)                           Drone_Visual_Effect                                         ___ OFFSET(get<T>, {0x6B0, 8, 0, 0})
	DMember(bool)                                      DEBUG_TESTJANUSFX                                           ___ OFFSET(get<bool>, {0x6B8, 1, 0, 0})
	SMember(FName)                                     Drone_VFX_Attach_Point                                      ___ OFFSET(get<T>, {0x6BC, 4, 0, 0})
	SMember(FGuid)                                     Material_Override_ID                                        ___ OFFSET(get<T>, {0x6C0, 16, 0, 0})
	SMember(FFortPawnMaterialOverrideCopiedParameters) Copied_Parameters                                           ___ OFFSET(get<T>, {0x6D0, 48, 0, 0})
	SMember(FDelegateHandleController)                 Delegate_Handle_Controller                                  ___ OFFSET(get<T>, {0x700, 16, 0, 0})
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezOut.GCN_RezOut_C
/// Size: 0x01F0 (0x000548 - 0x000738)
class AGCN_RezOut_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_LightIntensity_E9C2D3554642468472CCCFA609A39FBC ___ OFFSET(get<float>, {0x550, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_ZHeightParam_E9C2D3554642468472CCCFA609A39FBC ___ OFFSET(get<float>, {0x554, 4, 0, 0})
	DMember(float)                                     TFX_ResOutCharacterMesh_TransitionParam_E9C2D3554642468472CCCFA609A39FBC ___ OFFSET(get<float>, {0x558, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_ResOutCharacterMesh__Direction_E9C2D3554642468472CCCFA609A39FBC ___ OFFSET(get<T>, {0x55C, 1, 0, 0})
	CMember(UTimelineComponent*)                       TFX_ResOutCharacterMesh                                     ___ OFFSET(get<T>, {0x560, 8, 0, 0})
	DMember(float)                                     TFX_GlowCharacterMesh_EmissiveWarp_39A37BC9407CF090A09ABDA5A488F776 ___ OFFSET(get<float>, {0x568, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TFX_GlowCharacterMesh__Direction_39A37BC9407CF090A09ABDA5A488F776 ___ OFFSET(get<T>, {0x56C, 1, 0, 0})
	CMember(UTimelineComponent*)                       TFX_GlowCharacterMesh                                       ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	DMember(bool)                                      DEBUG_ANIMATION                                             ___ OFFSET(get<bool>, {0x578, 1, 0, 0})
	DMember(bool)                                      SpawnDrone                                                  ___ OFFSET(get<bool>, {0x579, 1, 0, 0})
	CMember(UClass*)                                   Teleportation_Drone                                         ___ OFFSET(get<T>, {0x580, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_AnimPlayRate                                   ___ OFFSET(get<double>, {0x588, 8, 0, 0})
	DMember(double)                                    Teleport_Bot_Lifespan                                       ___ OFFSET(get<double>, {0x590, 8, 0, 0})
	CMember(UPointLightComponent*)                     Teleportation_Point_Light                                   ___ OFFSET(get<T>, {0x598, 8, 0, 0})
	SMember(FVector)                                   Teleportation_Light_Offset                                  ___ OFFSET(get<T>, {0x5A0, 24, 0, 0})
	SMember(FLinearColor)                              Teleportation_Light_Color                                   ___ OFFSET(get<T>, {0x5B8, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         DissolveMIDs                                                ___ OFFSET(get<T>, {0x5C8, 16, 0, 0})
	CMember(UMaterialInterface*)                       Mat_Chracter_Dissolve                                       ___ OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(APlayerPawn_Athena_C*)                     Pawn                                                        ___ OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(TSet<USkeletalMeshComponent*>)             Dissolve                                                    ___ OFFSET(get<T>, {0x5E8, 80, 0, 0})
	SMember(FName)                                     Socket_Mesh_Top                                             ___ OFFSET(get<T>, {0x638, 4, 0, 0})
	DMember(double)                                    Max_Light_Intensity                                         ___ OFFSET(get<double>, {0x640, 8, 0, 0})
	SMember(FName)                                     Socket_Mesh_Bottom                                          ___ OFFSET(get<T>, {0x648, 4, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           Meshes_to_Dissolve                                          ___ OFFSET(get<T>, {0x650, 16, 0, 0})
	CMember(ABP_TeleportationDrone_C*)                 Drone                                                       ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	DMember(bool)                                      DEBUG_CHILDCOMPONENTS                                       ___ OFFSET(get<bool>, {0x668, 1, 0, 0})
	CMember(TArray<UFXSystemComponent*>)               Particle_Components                                         ___ OFFSET(get<T>, {0x670, 16, 0, 0})
	CMember(UNiagaraComponent*)                        Spawned_Death_VFX                                           ___ OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UNiagaraSystem*)                           Dissolve_Visual_Effect                                      ___ OFFSET(get<T>, {0x688, 8, 0, 0})
	SMember(FName)                                     Dissolve_VFX_Spawn_Point_Name                               ___ OFFSET(get<T>, {0x690, 4, 0, 0})
	CMember(UAnimMontage*)                             Base_Elimination_Montage                                    ___ OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(UAnimMontage*)                             DBNO_Elimination_Montage                                    ___ OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(UAnimMontage*)                             Skydiving_Elimination_Montage                               ___ OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(UAnimMontage*)                             Swimming_Elimination_Montage                                ___ OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(UAnimMontage*)                             DBNO_Swimming_Elimination_Montage                           ___ OFFSET(get<T>, {0x6B8, 8, 0, 0})
	DMember(bool)                                      Spawn_VFX_Attached                                          ___ OFFSET(get<bool>, {0x6C0, 1, 0, 0})
	DMember(double)                                    Dissolve_Timeline_Playrate                                  ___ OFFSET(get<double>, {0x6C8, 8, 0, 0})
	DMember(double)                                    Glow_Timeline_Playrate                                      ___ OFFSET(get<double>, {0x6D0, 8, 0, 0})
	DMember(bool)                                      DEBUG_REMOVESPAWNVFX                                        ___ OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	DMember(bool)                                      DEBUG_REMOVESPAWNEDPOINTLIGHT                               ___ OFFSET(get<bool>, {0x6D9, 1, 0, 0})
	CMember(UNiagaraSystem*)                           Drone_Visual_Effect                                         ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	SMember(FName)                                     Drone_VFX_Attach_Point                                      ___ OFFSET(get<T>, {0x6E8, 4, 0, 0})
	DMember(bool)                                      DEBUG_FXSYSTEMCOMPONENTS                                    ___ OFFSET(get<bool>, {0x6EC, 1, 0, 0})
	DMember(bool)                                      ShouldDelayBetweenAnimAndVFX                                ___ OFFSET(get<bool>, {0x6ED, 1, 0, 0})
	DMember(double)                                    DelayBetweenAnimAndVFX                                      ___ OFFSET(get<double>, {0x6F0, 8, 0, 0})
	SMember(FGuid)                                     Material_Override_ID                                        ___ OFFSET(get<T>, {0x6F8, 16, 0, 0})
	SMember(FFortPawnMaterialOverrideCopiedParameters) Copied_Parameters                                           ___ OFFSET(get<T>, {0x708, 48, 0, 0})
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
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	DMember(float)                                     CapsuleFadeTL_RemoveShadow_B48F4431426ECD264BA37C992B6887C3 ___ OFFSET(get<float>, {0x550, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CapsuleFadeTL__Direction_B48F4431426ECD264BA37C992B6887C3   ___ OFFSET(get<T>, {0x554, 1, 0, 0})
	CMember(UTimelineComponent*)                       CapsuleFadeTL                                               ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	DMember(double)                                    Starting_Min_Capsule_Shadow_Vis                             ___ OFFSET(get<double>, {0x560, 8, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           SkeletalMesh                                                ___ OFFSET(get<T>, {0x568, 16, 0, 0})
};

/// Class /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C
/// Size: 0x0030 (0x000548 - 0x000578)
class AGC_Abilities_Death_FadeCapsule_StW_C : public AFortGameplayCueNotify_BurstLatent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1400;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x548, 8, 0, 0})
	DMember(float)                                     CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1 ___ OFFSET(get<float>, {0x550, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1   ___ OFFSET(get<T>, {0x554, 1, 0, 0})
	CMember(UTimelineComponent*)                       CapsuleFadeTL                                               ___ OFFSET(get<T>, {0x558, 8, 0, 0})
	DMember(double)                                    Starting_Min_Capsule_Shadow_Vis                             ___ OFFSET(get<double>, {0x560, 8, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           SkeletalMesh                                                ___ OFFSET(get<T>, {0x568, 16, 0, 0})
};

/// Class /Game/GameplayCueNotifies/Death/GCN_RezOut_NPC.GCN_RezOut_NPC_C
/// Size: 0x0010 (0x000738 - 0x000748)
class AGCN_RezOut_NPC_C : public AGCN_RezOut_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(USoundBase*)                               SoundOnNPCDeath                                             ___ OFFSET(get<T>, {0x740, 8, 0, 0})
};

/// Class /Game/GameplayCueNotifies/Death/GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C
/// Size: 0x0010 (0x000738 - 0x000748)
class AGCN_NPC_Interaction_RezOut_Glitch_C : public AGCN_RezOut_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(USoundBase*)                               SoundOnNPCDeath                                             ___ OFFSET(get<T>, {0x740, 8, 0, 0})
};

/// Class /TacticalSprintGame/GameplayCueNotifies/GCNL_Athena_Player_TacticalSprint_EnergyDrain.GCNL_Athena_Player_TacticalSprint_EnergyDrain_C
/// Size: 0x0038 (0x000990 - 0x0009C8)
class AGCNL_Athena_Player_TacticalSprint_EnergyDrain_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2504;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	DMember(double)                                    FrequencyToCheckEnergy                                      ___ OFFSET(get<double>, {0x998, 8, 0, 0})
	CMember(TArray<UAudioComponent*>)                  Audio_Components                                            ___ OFFSET(get<T>, {0x9A0, 16, 0, 0})
	CMember(UTacticalSprintEnergyComponent_C*)         TacSprintComp                                               ___ OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(AActor*)                                   Pawn                                                        ___ OFFSET(get<T>, {0x9B8, 8, 0, 0})
	DMember(double)                                    CurrentEnergyPercentage                                     ___ OFFSET(get<double>, {0x9C0, 8, 0, 0})
};

/// Class /TacticalSprintGame/GameplayCueNotifies/GCNL_Athena_Player_TacticalSprint_Speedlines.GCNL_Athena_Player_TacticalSprint_Speedlines_C
/// Size: 0x0048 (0x000990 - 0x0009D8)
class AGCNL_Athena_Player_TacticalSprint_Speedlines_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2520;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	DMember(double)                                    TimeBetweenLoopUpdates                                      ___ OFFSET(get<double>, {0x998, 8, 0, 0})
	CMember(TArray<UNiagaraComponent*>)                Particle_Components                                         ___ OFFSET(get<T>, {0x9A0, 16, 0, 0})
	CMember(ACharacter*)                               TargetCharacter                                             ___ OFFSET(get<T>, {0x9B0, 8, 0, 0})
	DMember(bool)                                      IsLocallyViewed                                             ___ OFFSET(get<bool>, {0x9B8, 1, 0, 0})
	CMember(AFortPlayerPawn*)                          As_Fort_Player_Pawn                                         ___ OFFSET(get<T>, {0x9C0, 8, 0, 0})
	DMember(int32_t)                                   SurfaceTypeInt                                              ___ OFFSET(get<int32_t>, {0x9C8, 4, 0, 0})
	SMember(FTimerHandle)                              LoopUpdateTimer                                             ___ OFFSET(get<T>, {0x9D0, 8, 0, 0})
};

