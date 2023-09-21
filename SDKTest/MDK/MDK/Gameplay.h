
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AscenderCodeRuntime
/// dependency: Athena
/// dependency: Blueprints
/// dependency: CoreUObject
/// dependency: EnergyRuntime
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayCameras
/// dependency: GameplayEffectTemplates
/// dependency: ModularGameplay
/// dependency: RidingCodeRuntime
/// dependency: TacticalSprintRuntime
/// dependency: VaultingCodeRuntime

/// Class /TacticalSprintGame/Gameplay/Camera/Athena_PlayerCameraMode_TacticalSprint.Athena_PlayerCameraMode_TacticalSprint_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraMode_TacticalSprint_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /TacticalSprintGame/Gameplay/MovementModeExtension/FMMEL_TacSprint.FMMEL_TacSprint_C
/// Size: 0x0000 (0x000280 - 0x000280)
class UFMMEL_TacSprint_C : public UFortMovementMode_ELTacSprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
};

/// Class /TacticalSprintGame/Gameplay/TacticalSprintEnergyComponent.TacticalSprintEnergyComponent_C
/// Size: 0x0000 (0x0002E8 - 0x0002E8)
class UTacticalSprintEnergyComponent_C : public UFortComponent_Energy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
};

/// Class /MidMatchObjectivesGameplay/Gameplay/B_MMObj_ObjectiveNotificationControllerComponent.B_MMObj_ObjectiveNotificationControllerComponent_C
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UB_MMObj_ObjectiveNotificationControllerComponent_C : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBroadcastNotification                                     ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Ascender/Gameplay/Ascender/CameraShake_Ascender_LineAttach1.CameraShake_Ascender_LineAttach1_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Ascender_LineAttach1_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_Burt_SprintCharge.GA_Riding_Creature_Burt_SprintCharge_C
/// Size: 0x0008 (0x000B28 - 0x000B30)
class UGA_Riding_Creature_Burt_SprintCharge_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
};

/// Class /RidingContent/Gameplay/Camera/Riding_PlayerCameraMode_TacticalSprint.Riding_PlayerCameraMode_TacticalSprint_C
/// Size: 0x0000 (0x001B70 - 0x001B70)
class URiding_PlayerCameraMode_TacticalSprint_C : public UFortCameraMode_Riding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7024;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_StopRidingOnTriggered.GA_Riding_Player_StopRidingOnTriggered_C
/// Size: 0x0008 (0x000B28 - 0x000B30)
class UGA_Riding_Player_StopRidingOnTriggered_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
};

/// Class /RidingContent/Gameplay/General/GE_Riding_EatSlapBerry_TriggerInfiniteStamina.GE_Riding_EatSlapBerry_TriggerInfiniteStamina_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_EatSlapBerry_TriggerInfiniteStamina_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_Petting.GA_Riding_Player_Petting_C
/// Size: 0x0030 (0x000B28 - 0x000B58)
class UGA_Riding_Player_Petting_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(URidableComponent*)                        Active_Ridable                                              ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(UClass*)                                   GE_PlayerPetting                                            ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      TagsToCancelPetting                                         ___ OFFSET(get<T>, {0xB40, 16, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayerPawnRider                                         ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Player_Petting.GE_Riding_Player_Petting_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Player_Petting_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/Camera/RidingCameraMode.RidingCameraMode_C
/// Size: 0x0000 (0x001B70 - 0x001B70)
class URidingCameraMode_C : public UFortCameraMode_Riding
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7024;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden_Passive.GA_Riding_Creature_IsBeingRidden_Passive_C
/// Size: 0x0008 (0x000E60 - 0x000E68)
class UGA_Riding_Creature_IsBeingRidden_Passive_C : public UGA_NPC_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3688;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xE60, 8, 0, 0})
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden_Passive.GE_Riding_Creatue_IsBeingRidden_Passive_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creatue_IsBeingRidden_Passive_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_IsBeingRidden.GA_Riding_Creature_IsBeingRidden_C
/// Size: 0x0008 (0x000E60 - 0x000E68)
class UGA_Riding_Creature_IsBeingRidden_C : public UGA_NPC_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3688;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xE60, 8, 0, 0})
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Creatue_IsBeingRidden.GE_Riding_Creatue_IsBeingRidden_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creatue_IsBeingRidden_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Irwin_Prey_Burt_IsBeingRidden.GE_Riding_Irwin_Prey_Burt_IsBeingRidden_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Irwin_Prey_Burt_IsBeingRidden_C : public UGE_Riding_Creatue_IsBeingRidden_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_IsRiding.GA_Riding_Player_IsRiding_C
/// Size: 0x0018 (0x000B28 - 0x000B40)
class UGA_Riding_Player_IsRiding_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2880;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UAnimMontage*)                             SettleMontageRef                                            ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(UFortAbilityTask_PlayMontageWaitTarget*)   settleMontageTask                                           ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Player_IsRiding.GE_Riding_Player_IsRiding_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Player_IsRiding_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Creature_EatToRefuel.GA_Riding_Creature_EatToRefuel_C
/// Size: 0x0030 (0x000B28 - 0x000B58)
class UGA_Riding_Creature_EatToRefuel_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Slap_Berry_Tags                                             ___ OFFSET(get<T>, {0xB30, 32, 0, 0})
	CMember(UClass*)                                   Slap_Berry_Gameplay_Effect                                  ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Creature_Grant_EatToRefuel.GE_Riding_Creature_Grant_EatToRefuel_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creature_Grant_EatToRefuel_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/General/GA_Riding_Player_Sprint.GA_Riding_Player_Sprint_C
/// Size: 0x0019 (0x000B28 - 0x000B41)
class UGA_Riding_Player_Sprint_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2881;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      Tags_to_cancel_sprinting                                    ___ OFFSET(get<T>, {0xB30, 16, 0, 0})
	DMember(bool)                                      ShouldCancelSprint                                          ___ OFFSET(get<bool>, {0xB40, 1, 0, 0})
};

/// Class /RidingContent/Gameplay/General/GE_Riding_Player_Sprint.GE_Riding_Player_Sprint_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Player_Sprint_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_BuildDestroy.CameraShake_Riding_BoarSprintImpact_BuildDestroy_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_BoarSprintImpact_BuildDestroy_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Default.CameraShake_Riding_BoarSprintImpact_Default_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_BoarSprintImpact_Default_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_Loop.CameraShake_Riding_Sprint_Loop_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_Sprint_Loop_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_Sprint_FOVFlare.CameraShake_Riding_Sprint_FOVFlare_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_Sprint_FOVFlare_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_JumpOnCreature.CameraShake_Riding_JumpOnCreature_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_JumpOnCreature_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /RidingContent/Gameplay/Camera/CameraShakes/CameraShake_Riding_BoarSprintImpact_Pawn.CameraShake_Riding_BoarSprintImpact_Pawn_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Riding_BoarSprintImpact_Pawn_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /VaultingContent/Gameplay/Athena_PlayerCameraMode_Hurdle.Athena_PlayerCameraMode_Hurdle_C
/// Size: 0x0000 (0x001D50 - 0x001D50)
class UAthena_PlayerCameraMode_Hurdle_C : public UHurdleCameraMode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7504;

public:
};

/// Class /VaultingContent/Gameplay/MovementModeExtension/FMM_ExtHurlde.FMM_ExtHurlde_C
/// Size: 0x0000 (0x0000C0 - 0x0000C0)
class UFMM_ExtHurlde_C : public UFortMovementMode_ExtLogicHurdle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Ascender/Gameplay/Ascender/GameplayEffects/GE_Ascender_Ascending.GE_Ascender_Ascending_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Ascender_Ascending_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Ascender/Gameplay/Ascender/GameplayEffects/GE_Ascender_Descending.GE_Ascender_Descending_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Ascender_Descending_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Ascender/Gameplay/Ascender/GameplayEffects/GE_Athena_Ascender_DestroyBuilding.GE_Athena_Ascender_DestroyBuilding_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_Ascender_DestroyBuilding_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Ascender/Gameplay/Ascender/B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C
/// Size: 0x01A8 (0x000FE8 - 0x001190)
class AB_Athena_Zipline_Ascender_C : public AFortAscenderZipline
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4496;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xFE8, 8, 0, 0})
	CMember(UAudioParameterComponent*)                 AudioParameter                                              ___ OFFSET(get<T>, {0xFF0, 8, 0, 0})
	CMember(UCapsuleComponent*)                        Capsule                                                     ___ OFFSET(get<T>, {0xFF8, 8, 0, 0})
	CMember(UFortSoundIndicatorComponent*)             FortSoundIndicator                                          ___ OFFSET(get<T>, {0x1000, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Ascender_End_Cap                                            ___ OFFSET(get<T>, {0x1008, 8, 0, 0})
	CMember(UAudioComponent*)                          PoleMotorSFX                                                ___ OFFSET(get<T>, {0x1010, 8, 0, 0})
	CMember(UNiagaraComponent*)                        HandleVFX                                                   ___ OFFSET(get<T>, {0x1018, 8, 0, 0})
	CMember(UNiagaraComponent*)                        PoleMotorVFX                                                ___ OFFSET(get<T>, {0x1020, 8, 0, 0})
	CMember(UAudioComponent*)                          HandleAscendingSFX                                          ___ OFFSET(get<T>, {0x1028, 8, 0, 0})
	CMember(UAudioComponent*)                          HandleDescendingSFX                                         ___ OFFSET(get<T>, {0x1030, 8, 0, 0})
	CMember(USphereComponent*)                         HandleInteractVolume                                        ___ OFFSET(get<T>, {0x1038, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Handle                                                      ___ OFFSET(get<T>, {0x1040, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Top                                                         ___ OFFSET(get<T>, {0x1048, 8, 0, 0})
	SMember(FScalableFloat)                            Hotfix                                                      ___ OFFSET(get<T>, {0x1050, 40, 0, 0})
	CMember(USoundBase*)                               StartHandleSound                                            ___ OFFSET(get<T>, {0x1078, 8, 0, 0})
	CMember(USoundBase*)                               StopHandleSound                                             ___ OFFSET(get<T>, {0x1080, 8, 0, 0})
	CMember(USoundBase*)                               StopPoleMotorSoundSkid                                      ___ OFFSET(get<T>, {0x1088, 8, 0, 0})
	CMember(UMaterialInterface*)                       SplineMeshMaterialOverride                                  ___ OFFSET(get<T>, {0x1090, 8, 0, 0})
	CMember(UNiagaraSystem*)                           AscendingHandleVFX                                          ___ OFFSET(get<T>, {0x1098, 8, 0, 0})
	CMember(UNiagaraSystem*)                           DescendingHandleVFX                                         ___ OFFSET(get<T>, {0x10A0, 8, 0, 0})
	CMember(UMaterialInterface*)                       SplineThickenMeshMaterialOverride                           ___ OFFSET(get<T>, {0x10A8, 8, 0, 0})
	DMember(double)                                    MaxWobbleAnimationLength                                    ___ OFFSET(get<double>, {0x10B0, 8, 0, 0})
	DMember(double)                                    LastWobbleActivationTime                                    ___ OFFSET(get<double>, {0x10B8, 8, 0, 0})
	DMember(double)                                    TilingDivisor                                               ___ OFFSET(get<double>, {0x10C0, 8, 0, 0})
	SMember(FVector)                                   HandleAnimOffset                                            ___ OFFSET(get<T>, {0x10C8, 24, 0, 0})
	SMember(FVector)                                   SlideAnimOffset                                             ___ OFFSET(get<T>, {0x10E0, 24, 0, 0})
	CMember(USoundBase*)                               PlayerGrabBeginDecentSound                                  ___ OFFSET(get<T>, {0x10F8, 8, 0, 0})
	CMember(UAudioComponent*)                          HandleStart                                                 ___ OFFSET(get<T>, {0x1100, 8, 0, 0})
	SMember(FVector)                                   EndCapRelativeScale                                         ___ OFFSET(get<T>, {0x1108, 24, 0, 0})
	CMember(UClass*)                                   StructureDamageGE                                           ___ OFFSET(get<T>, {0x1120, 8, 0, 0})
	SMember(FTimerHandle)                              AudioVisualizerHandle                                       ___ OFFSET(get<T>, {0x1128, 8, 0, 0})
	CMember(TArray<AFortPlayerPawn*>)                  PlayersOnAscender                                           ___ OFFSET(get<T>, {0x1130, 16, 0, 0})
	CMember(USoundBase*)                               TravelSound                                                 ___ OFFSET(get<T>, {0x1140, 8, 0, 0})
	DMember(bool)                                      ShouldPlayWhoosh                                            ___ OFFSET(get<bool>, {0x1148, 1, 0, 0})
	CMember(USoundBase*)                               AscendWhooshSound                                           ___ OFFSET(get<T>, {0x1150, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0x1158, 8, 0, 0})
	SMember(FTimerHandle)                              WhooshHandle                                                ___ OFFSET(get<T>, {0x1160, 8, 0, 0})
	SMember(FGameplayTag)                              LinkToDestroyedGC                                           ___ OFFSET(get<T>, {0x1168, 4, 0, 0})
	DMember(bool)                                      BeDestroy                                                   ___ OFFSET(get<bool>, {0x116C, 1, 0, 0})
	CMember(APlayerState*)                             PlayerStateUsingHandleComponent                             ___ OFFSET(get<T>, {0x1170, 8, 0, 0})
	CMember(TArray<FAudioParameter>)                   AudioParameters                                             ___ OFFSET(get<T>, {0x1178, 16, 0, 0})
	CMember(UAudioParameterComponent*)                 ParameterComponent                                          ___ OFFSET(get<T>, {0x1188, 8, 0, 0})
};

/// Class /Ascender/Gameplay/Ascender/GA_Athena_Ascender_Smash.GA_Athena_Ascender_Smash_C
/// Size: 0x0059 (0x000BF0 - 0x000C49)
class UGA_Athena_Ascender_Smash_C : public UGA_Athena_ZipLine_SmashParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3145;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xBF0, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      ZiplineInteractComponent                                    ___ OFFSET(get<T>, {0xBF8, 8, 0, 0})
	CMember(AB_Athena_Zipline_Ascender_C*)             AscenderZipline                                             ___ OFFSET(get<T>, {0xC00, 8, 0, 0})
	SMember(FGameplayTag)                              DescendingTag                                               ___ OFFSET(get<T>, {0xC08, 4, 0, 0})
	CMember(UAnimMontage*)                             M_AscendingAnim                                             ___ OFFSET(get<T>, {0xC10, 8, 0, 0})
	CMember(UAnimMontage*)                             M_DescendingAnim                                            ___ OFFSET(get<T>, {0xC18, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               DescendingGE_Handle                                         ___ OFFSET(get<T>, {0xC20, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               AscendingGE_Handle                                          ___ OFFSET(get<T>, {0xC28, 8, 0, 0})
	CMember(UAnimMontage*)                             F_AscendingAnim                                             ___ OFFSET(get<T>, {0xC30, 8, 0, 0})
	CMember(UAnimMontage*)                             F_DescendingAnim                                            ___ OFFSET(get<T>, {0xC38, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               ZiplinePassiveGE                                            ___ OFFSET(get<T>, {0xC40, 8, 0, 0})
	DMember(bool)                                      bHolsterApplied                                             ___ OFFSET(get<bool>, {0xC48, 1, 0, 0})
};

/// Class /EmeraldGlass_D/Gameplay/SereneYard/ForceFeedback/CameraShake_Spawn_SereneYard.CameraShake_Spawn_SereneYard_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCameraShake_Spawn_SereneYard_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

