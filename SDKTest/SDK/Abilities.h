/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Abilities.

/// Struct /Game/Abilities/Player/Pawns/CharacterPartMidArrayStruct.CharacterPartMidArrayStruct
/// Size: 0x0018 (0x000000 - 0x000018)
class FCharacterPartMidArrayStruct : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TEnumAsByte<EFortCustomPartType>)          PartType_5_EBDFFF5740627902CC51DD966B8EE419                 ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MID_7_A0D19AC74319389A5DF2019166F976F0                      ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_HealthRegen.GE_Generic_HealthRegen_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Generic_HealthRegen_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_TransferFullBodyHit.GE_TransferFullBodyHit_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_TransferFullBodyHit_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_ShieldRegen.GE_Generic_ShieldRegen_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Generic_ShieldRegen_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_ImpactImmunity.GE_ImpactImmunity_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_ImpactImmunity_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_RestoreControlResistance.GE_RestoreControlResistance_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_RestoreControlResistance_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C
/// Size: 0x0000 (0x000290 - 0x000290)
class AB_FortGlobalAbilityTargetingActor_C : public AFortGlobalAbilityTargetingActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Game/Abilities/Player/Generic/GE_HealthRegen.GE_HealthRegen_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_HealthRegen_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Traps/Generic/GE_TrapArmGeneric.GE_TrapArmGeneric_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_TrapArmGeneric_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Traps/Generic/GA_TrapBuildGeneric.GA_TrapBuildGeneric_C
/// Size: 0x000C (0x000B28 - 0x000B34)
class UGA_TrapBuildGeneric_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2868;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FGameplayTag)                              PlacedCue                                                   ___ OFFSET(get<T>, {0xB30, 4, 0, 0})
};

/// Class /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
/// Size: 0x00E0 (0x004A40 - 0x004B20)
class APlayerPawn_Generic_Parent_C : public AFortPlayerPawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 19232;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x4A40, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               Default_Weapon_Materials                                    ___ OFFSET(get<T>, {0x4A48, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnBackpackMaterials                                       ___ OFFSET(get<T>, {0x4A58, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnHatMaterials                                            ___ OFFSET(get<T>, {0x4A68, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnHeadMaterials                                           ___ OFFSET(get<T>, {0x4A78, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnBodyMaterials                                           ___ OFFSET(get<T>, {0x4A88, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnCharmMaterials                                          ___ OFFSET(get<T>, {0x4A98, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnFaceMaterials                                           ___ OFFSET(get<T>, {0x4AA8, 16, 0, 0})
	CMember(UPostProcessComponent*)                    PlayerPostProcessFX                                         ___ OFFSET(get<T>, {0x4AB8, 8, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           SkeletalMeshes                                              ___ OFFSET(get<T>, {0x4AC0, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnMaterials_ALL                                           ___ OFFSET(get<T>, {0x4AD0, 16, 0, 0})
	DMember(int32_t)                                   WaterCounter                                                ___ OFFSET(get<int32_t>, {0x4AE0, 4, 0, 0})
	CMember(AActor*)                                   CurrentWaterMeshActor                                       ___ OFFSET(get<T>, {0x4AE8, 8, 0, 0})
	DMember(bool)                                      IsInWater                                                   ___ OFFSET(get<bool>, {0x4AF0, 1, 0, 0})
	DMember(double)                                    Time_when_you_ll_be_able_to_splash_again                    ___ OFFSET(get<double>, {0x4AF8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnOverlapWaterVolume                                        ___ OFFSET(get<T>, {0x4B00, 16, 0, 0})
	CMember(TArray<FCharacterPartMidArrayStruct>)      PawnPartMaterials                                           ___ OFFSET(get<T>, {0x4B10, 16, 0, 0})
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_Revive.GE_Generic_Revive_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Generic_Revive_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_ExtraLifeRevive.GE_ExtraLifeRevive_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_ExtraLifeRevive_C : public UGE_Generic_Revive_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C
/// Size: 0x0070 (0x000B28 - 0x000B98)
class UGAB_GenericApplyFullBodyHit_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UClass*)                                   GE_FullBodyHitActiveEffect                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FVector)                                   HitImpulse                                                  ___ OFFSET(get<T>, {0xB38, 24, 0, 0})
	CMember(UClass*)                                   GE_RestoreControlResistance                                 ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               ActiveImpactImmunity                                        ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(UClass*)                                   GE_ImpactImmunity                                           ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               ActiveFullBodyHit                                           ___ OFFSET(get<T>, {0xB68, 8, 0, 0})
	SMember(FGameplayTag)                              Event_Triggered_FullBodyHit                                 ___ OFFSET(get<T>, {0xB70, 4, 0, 0})
	SMember(FGameplayTag)                              Event_Control_Ended                                         ___ OFFSET(get<T>, {0xB74, 4, 0, 0})
	CMember(UClass*)                                   GE_TransferFullBodyHit                                      ___ OFFSET(get<T>, {0xB78, 8, 0, 0})
	CMember(UAnimMontage*)                             FullBodyHitMontage                                          ___ OFFSET(get<T>, {0xB80, 8, 0, 0})
	SMember(FName)                                     FullBodyHitMontageSection                                   ___ OFFSET(get<T>, {0xB88, 4, 0, 0})
	DMember(bool)                                      EndAbilityOnBlendOut                                        ___ OFFSET(get<bool>, {0xB8C, 1, 0, 0})
	DMember(double)                                    Duration_NoAnim                                             ___ OFFSET(get<double>, {0xB90, 8, 0, 0})
};

/// Class /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C
/// Size: 0x0020 (0x000068 - 0x000088)
class UGCNS_GM_OnDisplayChatEmoji_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FVector)                                   ParticleRelativeOffset                                      ___ OFFSET(get<T>, {0x68, 24, 0, 0})
	CMember(USoundBase*)                               BubbleSound                                                 ___ OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnPreviewEmoji.GCNS_GM_OnPreviewEmoji_C
/// Size: 0x0000 (0x000248 - 0x000248)
class UGCNS_GM_OnPreviewEmoji_C : public UGameplayCueNotify_OnPreviewEmoji
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
};

/// Class /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayEmoji.GCNS_GM_OnDisplayEmoji_C
/// Size: 0x0000 (0x000230 - 0x000230)
class UGCNS_GM_OnDisplayEmoji_C : public UGameplayCueNotify_OnDisplayEmoji
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_HealthRegen_Delay_Damaged.GE_HealthRegen_Delay_Damaged_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_HealthRegen_Delay_Damaged_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Sliding/GE_AthenaPlayer_DisableSliding.GE_AthenaPlayer_DisableSliding_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_AthenaPlayer_DisableSliding_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_ShieldRegen_Delay_Damaged.GE_ShieldRegen_Delay_Damaged_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_ShieldRegen_Delay_Damaged_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C
/// Size: 0x05F8 (0x004B20 - 0x005118)
class APlayerPawn_Generic_C : public APlayerPawn_Generic_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 20760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x4B20, 8, 0, 0})
	CMember(UMotionWarpingComponent*)                  MotionWarping                                               ___ OFFSET(get<T>, {0x4B28, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 SplashEffectsForEnteringOrExitingWater                      ___ OFFSET(get<T>, {0x4B30, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 GamplayWindInteractionEffects                               ___ OFFSET(get<T>, {0x4B38, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_Player_Run_Land                                      ___ OFFSET(get<T>, {0x4B40, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_Player_Walk_Land                                     ___ OFFSET(get<T>, {0x4B48, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_Player_Walk_Water                                    ___ OFFSET(get<T>, {0x4B50, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_Player_Run_Water                                     ___ OFFSET(get<T>, {0x4B58, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_WaterInteraction_FX                                  ___ OFFSET(get<T>, {0x4B60, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 HitDamageParticles                                          ___ OFFSET(get<T>, {0x4B68, 8, 0, 0})
	CMember(UWidgetComponent*)                         SpeechBubbleComponent                                       ___ OFFSET(get<T>, {0x4B70, 8, 0, 0})
	CMember(USpotLightComponent*)                      PlayerLight                                                 ___ OFFSET(get<T>, {0x4B78, 8, 0, 0})
	DMember(float)                                     ShatterShield_Push_3B96BD02488A8F69F3D086A2B7978EC8         ___ OFFSET(get<float>, {0x4B80, 4, 0, 0})
	DMember(float)                                     ShatterShield_Opacity_3B96BD02488A8F69F3D086A2B7978EC8      ___ OFFSET(get<float>, {0x4B84, 4, 0, 0})
	DMember(float)                                     ShatterShield_Highlight_Cracks_3B96BD02488A8F69F3D086A2B7978EC8 ___ OFFSET(get<float>, {0x4B88, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ShatterShield__Direction_3B96BD02488A8F69F3D086A2B7978EC8   ___ OFFSET(get<T>, {0x4B8C, 1, 0, 0})
	CMember(UTimelineComponent*)                       ShatterShield                                               ___ OFFSET(get<T>, {0x4B90, 8, 0, 0})
	CMember(USoundBase*)                               HitByHuskRangedSound                                        ___ OFFSET(get<T>, {0x4B98, 8, 0, 0})
	CMember(USoundBase*)                               HitByHuskMeleeSound                                         ___ OFFSET(get<T>, {0x4BA0, 8, 0, 0})
	CMember(UAnimMontage*)                             SoulSuckVictimMontage                                       ___ OFFSET(get<T>, {0x4BA8, 8, 0, 0})
	DMember(double)                                    PlayerSpeed                                                 ___ OFFSET(get<double>, {0x4BB0, 8, 0, 0})
	DMember(double)                                    Run_Particle_Activate_Speed                                 ___ OFFSET(get<double>, {0x4BB8, 8, 0, 0})
	DMember(double)                                    Walk_Dust_Activate_Speed                                    ___ OFFSET(get<double>, {0x4BC0, 8, 0, 0})
	DMember(double)                                    Walk_Particle_Reset_Speed                                   ___ OFFSET(get<double>, {0x4BC8, 8, 0, 0})
	SMember(FVector)                                   PreviousVelocityVector                                      ___ OFFSET(get<T>, {0x4BD0, 24, 0, 0})
	DMember(bool)                                      CanSpawnRunKickupFX_                                        ___ OFFSET(get<bool>, {0x4BE8, 1, 0, 0})
	DMember(bool)                                      CanSpawnWalkKickupFX_                                       ___ OFFSET(get<bool>, {0x4BE9, 1, 0, 0})
	DMember(bool)                                      CanSpawnDustLandFX_                                         ___ OFFSET(get<bool>, {0x4BEA, 1, 0, 0})
	SMember(FRotator)                                  RunWalkParticleRotation                                     ___ OFFSET(get<T>, {0x4BF0, 24, 0, 0})
	DMember(bool)                                      IsNinjaInShadowStance_                                      ___ OFFSET(get<bool>, {0x4C08, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTagsForHitByHuskMeleeSound                          ___ OFFSET(get<T>, {0x4C10, 32, 0, 0})
	CMember(UMaterialInterface*)                       Shield_Material                                             ___ OFFSET(get<T>, {0x4C30, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         BodyShieldMIDArray                                          ___ OFFSET(get<T>, {0x4C38, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         HeadShieldMIDArray                                          ___ OFFSET(get<T>, {0x4C48, 16, 0, 0})
	DMember(bool)                                      Shield_Active                                               ___ OFFSET(get<bool>, {0x4C58, 1, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_Impact                                         ___ OFFSET(get<T>, {0x4C60, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_Destroyed                                      ___ OFFSET(get<T>, {0x4C68, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_FullyCharged                                   ___ OFFSET(get<T>, {0x4C70, 8, 0, 0})
	DMember(double)                                    Shield_Shatter_Opacity                                      ___ OFFSET(get<double>, {0x4C78, 8, 0, 0})
	DMember(double)                                    Regen_Opacity                                               ___ OFFSET(get<double>, {0x4C80, 8, 0, 0})
	DMember(double)                                    Damage_Opacity                                              ___ OFFSET(get<double>, {0x4C88, 8, 0, 0})
	DMember(double)                                    Default_Shield_opacity                                      ___ OFFSET(get<double>, {0x4C90, 8, 0, 0})
	DMember(double)                                    Shield_PushMinValue                                         ___ OFFSET(get<double>, {0x4C98, 8, 0, 0})
	DMember(bool)                                      ShieldVisible_Hit                                           ___ OFFSET(get<bool>, {0x4CA0, 1, 0, 0})
	DMember(bool)                                      ShieldVisible_Recover                                       ___ OFFSET(get<bool>, {0x4CA1, 1, 0, 0})
	DMember(bool)                                      ShieldVisible_Shatter                                       ___ OFFSET(get<bool>, {0x4CA2, 1, 0, 0})
	DMember(bool)                                      ShieldVisible_FullHealth                                    ___ OFFSET(get<bool>, {0x4CA3, 1, 0, 0})
	DMember(double)                                    Fully_Regened_Shield_health_Opacity                         ___ OFFSET(get<double>, {0x4CA8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_GameplayCueDamageShielded                                ___ OFFSET(get<T>, {0x4CB0, 32, 0, 0})
	DMember(bool)                                      LatestDamageIsShieldDamage                                  ___ OFFSET(get<bool>, {0x4CD0, 1, 0, 0})
	DMember(double)                                    Damage_Taken                                                ___ OFFSET(get<double>, {0x4CD8, 8, 0, 0})
	DMember(double)                                    Last_Shield_Damage_Time                                     ___ OFFSET(get<double>, {0x4CE0, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         CharmShieldMIDArray                                         ___ OFFSET(get<T>, {0x4CE8, 16, 0, 0})
	DMember(bool)                                      BodyValid                                                   ___ OFFSET(get<bool>, {0x4CF8, 1, 0, 0})
	DMember(bool)                                      BackpackValid                                               ___ OFFSET(get<bool>, {0x4CF9, 1, 0, 0})
	DMember(bool)                                      HatValid                                                    ___ OFFSET(get<bool>, {0x4CFA, 1, 0, 0})
	DMember(bool)                                      FaceValid                                                   ___ OFFSET(get<bool>, {0x4CFB, 1, 0, 0})
	DMember(bool)                                      CharmValid                                                  ___ OFFSET(get<bool>, {0x4CFC, 1, 0, 0})
	DMember(bool)                                      HeadValid                                                   ___ OFFSET(get<bool>, {0x4CFD, 1, 0, 0})
	DMember(bool)                                      On_Player_Built_Floor                                       ___ OFFSET(get<bool>, {0x4CFE, 1, 0, 0})
	SMember(FGameplayTag)                              Event_NeedRoadsActive                                       ___ OFFSET(get<T>, {0x4D00, 4, 0, 0})
	SMember(FGameplayTag)                              Event_NeedRoadsDeactive                                     ___ OFFSET(get<T>, {0x4D04, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_WhereWereGoingWeNeedRoads                                ___ OFFSET(get<T>, {0x4D08, 32, 0, 0})
	CMember(UParticleSystem*)                          Effect_Player_LandedDust                                    ___ OFFSET(get<T>, {0x4D28, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Shield_BodySkeletalMesh                                     ___ OFFSET(get<T>, {0x4D30, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Shield_HeadSkeletalMesh                                     ___ OFFSET(get<T>, {0x4D38, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Shield_CharmSkeletalMesh                                    ___ OFFSET(get<T>, {0x4D40, 8, 0, 0})
	CMember(USceneComponent*)                          Sound_Player_Hit                                            ___ OFFSET(get<T>, {0x4D48, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     DamageForceFeedback                                         ___ OFFSET(get<T>, {0x4D50, 8, 0, 0})
	CMember(UParticleSystem*)                          Effect_Player_Landed_WindVector_P                           ___ OFFSET(get<T>, {0x4D58, 8, 0, 0})
	CMember(UClass*)                                   SpeechBubbleWidgetClass                                     ___ OFFSET(get<T>, {0x4D60, 8, 0, 0})
	SMember(FText)                                     LastSpeechText                                              ___ OFFSET(get<T>, {0x4D68, 24, 0, 0})
	CMember(UClass*)                                   DamageCameraShake                                           ___ OFFSET(get<T>, {0x4D80, 8, 0, 0})
	DMember(bool)                                      UseAnimTrailsNotifies                                       ___ OFFSET(get<bool>, {0x4D88, 1, 0, 0})
	SMember(FVector)                                   StableVelocityVector                                        ___ OFFSET(get<T>, {0x4D90, 24, 0, 0})
	DMember(bool)                                      TickWaterLevel                                              ___ OFFSET(get<bool>, {0x4DA8, 1, 0, 0})
	CMember(UTextureRenderTarget2D*)                   WetnessDepthTexture                                         ___ OFFSET(get<T>, {0x4DB0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 WaterLevelMID                                               ___ OFFSET(get<T>, {0x4DB8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 WaterDecayMID                                               ___ OFFSET(get<T>, {0x4DC0, 8, 0, 0})
	DMember(bool)                                      Was_RTT_Enabled_Var_Set                                     ___ OFFSET(get<bool>, {0x4DC8, 1, 0, 0})
	DMember(bool)                                      Is_the_Wind_Water_Scene_Capture_Enabled                     ___ OFFSET(get<bool>, {0x4DC9, 1, 0, 0})
	CMember(AActor*)                                   CachedEffect                                                ___ OFFSET(get<T>, {0x4DD0, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         WaterInteractionWakeMIDS                                    ___ OFFSET(get<T>, {0x4DD8, 16, 0, 0})
	SMember(FLinearColor)                              WaterTraceImpactNormalAndZHeightLocation                    ___ OFFSET(get<T>, {0x4DE8, 16, 0, 0})
	SMember(FVector)                                   PlayerVelocity                                              ___ OFFSET(get<T>, {0x4DF8, 24, 0, 0})
	DMember(bool)                                      EnableRunWalkWaterGroundFX                                  ___ OFFSET(get<bool>, {0x4E10, 1, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Previous_MID                                                ___ OFFSET(get<T>, {0x4E18, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Previous_Weapon_MID                                         ___ OFFSET(get<T>, {0x4E28, 16, 0, 0})
	CMember(USkeletalMeshComponent*)                   DuplicateCharacterMesh                                      ___ OFFSET(get<T>, {0x4E38, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Previous_Head_MID                                           ___ OFFSET(get<T>, {0x4E40, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Previous_Body_MID                                           ___ OFFSET(get<T>, {0x4E50, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Previous_Hat_MID                                            ___ OFFSET(get<T>, {0x4E60, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Previous_Backpack_MID                                       ___ OFFSET(get<T>, {0x4E70, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Previous_Charm_MID                                          ___ OFFSET(get<T>, {0x4E80, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Previous_Face_MID                                           ___ OFFSET(get<T>, {0x4E90, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SwingRight                                                  ___ OFFSET(get<T>, {0x4EA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SwingRightEnd                                               ___ OFFSET(get<T>, {0x4EB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SwingLeft                                                   ___ OFFSET(get<T>, {0x4EC0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SwingLeftEnd                                                ___ OFFSET(get<T>, {0x4ED0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimNotify_Begin                                            ___ OFFSET(get<T>, {0x4EE0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimNotify_End                                              ___ OFFSET(get<T>, {0x4EF0, 16, 0, 0})
	CMember(UFXSystemComponent*)                       OverrideAnimTrail                                           ___ OFFSET(get<T>, {0x4F00, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  SwingRight2                                                 ___ OFFSET(get<T>, {0x4F08, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SwingLeft2                                                  ___ OFFSET(get<T>, {0x4F18, 16, 0, 0})
	CMember(UFXSystemComponent*)                       AnimTrailFX                                                 ___ OFFSET(get<T>, {0x4F28, 8, 0, 0})
	DMember(bool)                                      BlockedByPawns                                              ___ OFFSET(get<bool>, {0x4F30, 1, 0, 0})
	SMember(FGameplayAttribute)                        Attribute_CurrentShield_Const                               ___ OFFSET(get<T>, {0x4F38, 56, 0, 0})
	SMember(FGameplayAttribute)                        Attribute_Shield_Const                                      ___ OFFSET(get<T>, {0x4F70, 56, 0, 0})
	SMember(FGameplayAttribute)                        Attribute_CurrentHealth_Const                               ___ OFFSET(get<T>, {0x4FA8, 56, 0, 0})
	SMember(FGameplayAttribute)                        Attribute_Max_Health_Const                                  ___ OFFSET(get<T>, {0x4FE0, 56, 0, 0})
	SMember(FCameraLensInterfaceClassSupport)          LensEffectInterfaceClass_PlayerHealthDamage                 ___ OFFSET(get<T>, {0x5018, 8, 0, 0})
	SMember(FCameraLensInterfaceClassSupport)          LensEffectInterfaceClass_PlayerShieldDamage                 ___ OFFSET(get<T>, {0x5020, 8, 0, 0})
	SMember(FCameraLensInterfaceClassSupport)          LensEffectInterfaceClass_Directional_PlayerShieldDamage     ___ OFFSET(get<T>, {0x5028, 8, 0, 0})
	SMember(FCameraLensInterfaceClassSupport)          LensEffectInterfaceClass_Directional_PlayerHealthDamage     ___ OFFSET(get<T>, {0x5030, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Temp_DIM_Array                                              ___ OFFSET(get<T>, {0x5038, 16, 0, 0})
	CMember(TMap<TEnumAsByte, bool>)                   PartValid                                                   ___ OFFSET(get<T>, {0x5048, 80, 0, 0})
	CMember(TArray<TEnumAsByte>)                       ShieldPartList                                              ___ OFFSET(get<T>, {0x5098, 16, 0, 0})
	CMember(TArray<FCharacterPartMidArrayStruct>)      ShieldMIDArrays                                             ___ OFFSET(get<T>, {0x50A8, 16, 0, 0})
	CMember(TMap<TEnumAsByte, USkeletalMeshComponent*>) ShieldSkMeshes                                             ___ OFFSET(get<T>, {0x50B8, 80, 0, 0})
	DMember(int32_t)                                   L_ShieldMIDIndex                                            ___ OFFSET(get<int32_t>, {0x5108, 4, 0, 0})
	CMember(USkeletalMeshComponent*)                   NullPart_Mesh                                               ___ OFFSET(get<T>, {0x5110, 8, 0, 0})
};

/// Class /Game/Abilities/Player/Athena/GCNL_Athena_Tether.GCNL_Athena_Tether_C
/// Size: 0x0088 (0x000990 - 0x000A18)
class AGCNL_Athena_Tether_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2584;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UFortLayeredAudioComponent*)               FortLayeredAudio                                            ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UNiagaraComponent*)                        LandFX                                                      ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(UNiagaraComponent*)                        WaterFX                                                     ___ OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     RightSki                                                    ___ OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     LeftSki                                                     ___ OFFSET(get<T>, {0x9B8, 8, 0, 0})
	DMember(float)                                     ScaleInSkis_SkiScalar_93783D4A4F91BF9F887B16977978DDB4      ___ OFFSET(get<float>, {0x9C0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           ScaleInSkis__Direction_93783D4A4F91BF9F887B16977978DDB4     ___ OFFSET(get<T>, {0x9C4, 1, 0, 0})
	CMember(UTimelineComponent*)                       ScaleInSkis                                                 ___ OFFSET(get<T>, {0x9C8, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          OwningFPP                                                   ___ OFFSET(get<T>, {0x9D0, 8, 0, 0})
	DMember(bool)                                      IsInWater                                                   ___ OFFSET(get<bool>, {0x9D8, 1, 0, 0})
	DMember(double)                                    NormalizedSpeed                                             ___ OFFSET(get<double>, {0x9E0, 8, 0, 0})
	DMember(double)                                    TurnSpeed                                                   ___ OFFSET(get<double>, {0x9E8, 8, 0, 0})
	DMember(double)                                    ForceFeedbackIntensity                                      ___ OFFSET(get<double>, {0x9F0, 8, 0, 0})
	SMember(FTimerHandle)                              ScaleInSkisTimerHandle                                      ___ OFFSET(get<T>, {0x9F8, 8, 0, 0})
	DMember(double)                                    SkiScaleInDelay                                             ___ OFFSET(get<double>, {0xA00, 8, 0, 0})
	CMember(TScriptInterface<Class>)                   CameraLensEffectInterface                                   ___ OFFSET(get<T>, {0xA08, 16, 0, 0})
};

/// Class /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C
/// Size: 0x0090 (0x000990 - 0x000A20)
class AGCN_Athena_Bush_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2592;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     OwningPlayer_BushMesh                                       ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow2                                                      ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow1                                                      ___ OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     BushMesh                                                    ___ OFFSET(get<T>, {0x9B0, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       ___ OFFSET(get<T>, {0x9B8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Trail_Leaves                                                ___ OFFSET(get<T>, {0x9C0, 8, 0, 0})
	DMember(float)                                     OpacityFade_OpacityFadeOut_B989988545DAA0B2E69D77AE069A4437 ___ OFFSET(get<float>, {0x9C8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           OpacityFade__Direction_B989988545DAA0B2E69D77AE069A4437     ___ OFFSET(get<T>, {0x9CC, 1, 0, 0})
	CMember(UTimelineComponent*)                       OpacityFade                                                 ___ OFFSET(get<T>, {0x9D0, 8, 0, 0})
	CMember(AActor*)                                   PlayerPawn                                                  ___ OFFSET(get<T>, {0x9D8, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_Bush                                                    ___ OFFSET(get<T>, {0x9E0, 8, 0, 0})
	DMember(bool)                                      IsActive                                                    ___ OFFSET(get<bool>, {0x9E8, 1, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_OwningClientBush                                        ___ OFFSET(get<T>, {0x9F0, 8, 0, 0})
	SMember(FCurveTableRowHandle)                      ClientBushOpacity                                           ___ OFFSET(get<T>, {0x9F8, 16, 0, 0})
	DMember(double)                                    TargetOpacity                                               ___ OFFSET(get<double>, {0xA08, 8, 0, 0})
	CMember(UParticleSystem*)                          BushDestructionVFX                                          ___ OFFSET(get<T>, {0xA10, 8, 0, 0})
	CMember(USoundBase*)                               BushDestructionSFX                                          ___ OFFSET(get<T>, {0xA18, 8, 0, 0})
};

/// Class /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C
/// Size: 0x0059 (0x000B28 - 0x000B81)
class UGAB_Emote_Generic_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2945;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	DMember(double)                                    PostTriggerCancelDelay                                      ___ OFFSET(get<double>, {0xB38, 8, 0, 0})
	DMember(bool)                                      HideReticle                                                 ___ OFFSET(get<bool>, {0xB40, 1, 0, 0})
	SMember(FGameplayTagContainer)                     ReticleHUDElementTags                                       ___ OFFSET(get<T>, {0xB48, 32, 0, 0})
	SMember(FName)                                     MontageOverrideSection                                      ___ OFFSET(get<T>, {0xB68, 4, 0, 0})
	DMember(bool)                                      bAbilityStopped                                             ___ OFFSET(get<bool>, {0xB6C, 1, 0, 0})
	SMember(FName)                                     EmoteHolsterId                                              ___ OFFSET(get<T>, {0xB70, 4, 0, 0})
	DMember(bool)                                      bHolstered                                                  ___ OFFSET(get<bool>, {0xB74, 1, 0, 0})
	SMember(FName)                                     HUDElementVisibilityReasonName                              ___ OFFSET(get<T>, {0xB78, 4, 0, 0})
	DMember(int32_t)                                   WaitForLoadedCount                                          ___ OFFSET(get<int32_t>, {0xB7C, 4, 0, 0})
	DMember(bool)                                      bClearInteractOnActivate                                    ___ OFFSET(get<bool>, {0xB80, 1, 0, 0})
};

/// Class /Game/Abilities/Sprays/GAB_Spray_Generic.GAB_Spray_Generic_C
/// Size: 0x0067 (0x000B81 - 0x000BE8)
class UGAB_Spray_Generic_C : public UGAB_Emote_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3048;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
	DMember(double)                                    DecalSize                                                   ___ OFFSET(get<double>, {0xB90, 8, 0, 0})
	CMember(UAthenaSprayItemDefinition*)               MySpray                                                     ___ OFFSET(get<T>, {0xB98, 8, 0, 0})
	DMember(double)                                    DecalTraceDistance                                          ___ OFFSET(get<double>, {0xBA0, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             DefaultSprayMontage_M                                       ___ OFFSET(get<T>, {0xBA8, 32, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             DefaultSprayMontage_F                                       ___ OFFSET(get<T>, {0xBC8, 32, 0, 0})
};

/// Class /Game/Abilities/Emotes/GAB_Emote_Generic_Transformation.GAB_Emote_Generic_Transformation_C
/// Size: 0x0000 (0x000B81 - 0x000B81)
class UGAB_Emote_Generic_Transformation_C : public UGAB_Emote_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2945;

public:
};

/// Class /Game/Abilities/Player/Sliding/GE_Athena_Player_Slide_Cooldown.GE_Athena_Player_Slide_Cooldown_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_Player_Slide_Cooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Interrogation/GE_Interrogation_Voice_PickedUp.GE_Interrogation_Voice_PickedUp_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Interrogation_Voice_PickedUp_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Sliding/CamShake_Athena_Player_PreSlide.CamShake_Athena_Player_PreSlide_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCamShake_Athena_Player_PreSlide_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Abilities/Player/Sliding/GA_Athena_Player_PreSlideFeedback.GA_Athena_Player_PreSlideFeedback_C
/// Size: 0x0008 (0x000B28 - 0x000B30)
class UGA_Athena_Player_PreSlideFeedback_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
};

/// Class /Game/Abilities/Player/Commando/TacticalPerks/Clusterbomb/GE_Commando_Tactical_ClusterBomb_Damage.GE_Commando_Tactical_ClusterBomb_Damage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Commando_Tactical_ClusterBomb_Damage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_Character_Launch.GE_Generic_Character_Launch_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Generic_Character_Launch_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Parents/GE_Hero_PulsingEnergyCost.GE_Hero_PulsingEnergyCost_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Hero_PulsingEnergyCost_C : public UGET_EnergyCost_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Weapons/Ranged/GE_Ranged_GenericDamage_Explosive.GE_Ranged_GenericDamage_Explosive_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Ranged_GenericDamage_Explosive_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Commando/Perks/ClusterBomb/GE_Commando_ClusterBombDamage.GE_Commando_ClusterBombDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Commando_ClusterBombDamage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/GE_Commando_FragGrenadeKeepOutDamage.GE_Commando_FragGrenadeKeepOutDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Commando_FragGrenadeKeepOutDamage_C : public UGET_DirectEnergyDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Interrogation/Athena_PlayerCameraMode_Interrogation_Map.Athena_PlayerCameraMode_Interrogation_Map_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraMode_Interrogation_Map_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Abilities/Player/Interrogation/GA_Interrogate_GC.GA_Interrogate_GC_C
/// Size: 0x000C (0x000B28 - 0x000B34)
class UGA_Interrogate_GC_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2868;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FGameplayTag)                              Cue                                                         ___ OFFSET(get<T>, {0xB30, 4, 0, 0})
};

/// Class /Game/Abilities/Player/Interrogation/GE_Interrogate_GC.GE_Interrogate_GC_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Interrogate_GC_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_StaminaRegenLockout.GE_Generic_StaminaRegenLockout_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Generic_StaminaRegenLockout_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Sliding/Athena_PlayerCameraMode_Sliding.Athena_PlayerCameraMode_Sliding_C
/// Size: 0x0000 (0x001B50 - 0x001B50)
class UAthena_PlayerCameraMode_Sliding_C : public UAthena_PlayerCameraModeBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6992;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_KnockbackActive.GE_KnockbackActive_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_KnockbackActive_C : public UGET_TagContainer_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Weapons/Ranged/GE_Damage_Explosive_NoLineOfSight.GE_Damage_Explosive_NoLineOfSight_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Damage_Explosive_NoLineOfSight_C : public UGE_Ranged_GenericDamage_Explosive_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Interrogation/GE_Interrogation_Cooldown.GE_Interrogation_Cooldown_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Interrogation_Cooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Sliding/CameraModifier_Athena_Sliding.CameraModifier_Athena_Sliding_C
/// Size: 0x0008 (0x000100 - 0x000108)
class UCameraModifier_Athena_Sliding_C : public USlidingCameraModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x100, 8, 0, 0})
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/GE_Commando_FragGrenadeCooldown.GE_Commando_FragGrenadeCooldown_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Commando_FragGrenadeCooldown_C : public UGET_Cooldown_Hero_Active_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C
/// Size: 0x000D (0x000B28 - 0x000B35)
class UGAT_TriggeredAbility_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2869;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FGameplayTag)                              TC_AbilitiesGenericTriggeredAbilityActivate                 ___ OFFSET(get<T>, {0xB30, 4, 0, 0})
	DMember(bool)                                      bPlayerHolsterState                                         ___ OFFSET(get<bool>, {0xB34, 1, 0, 0})
};

/// Class /Game/Abilities/NPC/Generic/GE_TransferKnockback.GE_TransferKnockback_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_TransferKnockback_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
/// Size: 0x0129 (0x000B28 - 0x000C51)
class UGAB_GenericApplyKnockback_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3153;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UClass*)                                   GE_TransferKnockback                                        ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(UClass*)                                   GE_KnockbackActive                                          ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	DMember(double)                                    KnockbackPropagationThreshold                               ___ OFFSET(get<double>, {0xB40, 8, 0, 0})
	CMember(UAnimMontage*)                             KnockbackUpMontage                                          ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
	SMember(FName)                                     KnockbackUpMontageSection                                   ___ OFFSET(get<T>, {0xB50, 4, 0, 0})
	CMember(UAnimMontage*)                             KnockbackDownMontage                                        ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	SMember(FName)                                     KnockbackDownMontageSection                                 ___ OFFSET(get<T>, {0xB60, 4, 0, 0})
	CMember(UAnimMontage*)                             KnockbackLandMontage                                        ___ OFFSET(get<T>, {0xB68, 8, 0, 0})
	SMember(FName)                                     KnockbackLandMontageSection                                 ___ OFFSET(get<T>, {0xB70, 4, 0, 0})
	CMember(UAnimMontage*)                             KnockbackLandToIdleMontage                                  ___ OFFSET(get<T>, {0xB78, 8, 0, 0})
	SMember(FName)                                     KnockbackLandToIdleMontageSection                           ___ OFFSET(get<T>, {0xB80, 4, 0, 0})
	CMember(UAnimMontage*)                             KnockbackLandToStunMontage                                  ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
	SMember(FName)                                     KnockbackLandToStunMontageSection                           ___ OFFSET(get<T>, {0xB90, 4, 0, 0})
	DMember(bool)                                      DebugDraw                                                   ___ OFFSET(get<bool>, {0xB94, 1, 0, 0})
	DMember(bool)                                      DebugNumbers                                                ___ OFFSET(get<bool>, {0xB95, 1, 0, 0})
	DMember(bool)                                      DebugForceKnockbackValues                                   ___ OFFSET(get<bool>, {0xB96, 1, 0, 0})
	DMember(bool)                                      bOrientToImpulse                                            ___ OFFSET(get<bool>, {0xB97, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               ActiveKnockback                                             ___ OFFSET(get<T>, {0xB98, 8, 0, 0})
	SMember(FVector)                                   OrientDirection                                             ___ OFFSET(get<T>, {0xBA0, 24, 0, 0})
	SMember(FVector)                                   HitDirection                                                ___ OFFSET(get<T>, {0xBB8, 24, 0, 0})
	SMember(FVector)                                   ImpulseDirectionVelocityOrRotation                          ___ OFFSET(get<T>, {0xBD0, 24, 0, 0})
	SMember(FVector)                                   DebugLastLocation                                           ___ OFFSET(get<T>, {0xBE8, 24, 0, 0})
	SMember(FGameplayTag)                              TC_NPCStatusLockedInPlace                                   ___ OFFSET(get<T>, {0xC00, 4, 0, 0})
	DMember(double)                                    LockedInPlaceKnockbackAngle                                 ___ OFFSET(get<double>, {0xC08, 8, 0, 0})
	DMember(double)                                    LockedInPlaceKnockbackMagnitude                             ___ OFFSET(get<double>, {0xC10, 8, 0, 0})
	CMember(UClass*)                                   GE_RestoreControlResistance                                 ___ OFFSET(get<T>, {0xC18, 8, 0, 0})
	CMember(UClass*)                                   GE_ImpactImmunity                                           ___ OFFSET(get<T>, {0xC20, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               ActiveImpactImmunity                                        ___ OFFSET(get<T>, {0xC28, 8, 0, 0})
	DMember(bool)                                      bHasImpactImmunity                                          ___ OFFSET(get<bool>, {0xC30, 1, 0, 0})
	DMember(double)                                    F_OneFrameDelay                                             ___ OFFSET(get<double>, {0xC38, 8, 0, 0})
	SMember(FGameplayTag)                              Event_Triggered_Knockback                                   ___ OFFSET(get<T>, {0xC40, 4, 0, 0})
	DMember(bool)                                      KnockbackFromFloorTrap                                      ___ OFFSET(get<bool>, {0xC44, 1, 0, 0})
	DMember(bool)                                      KnockbackFromFloorTrap_PlayUpMontage                        ___ OFFSET(get<bool>, {0xC45, 1, 0, 0})
	DMember(bool)                                      KnockbackFromFloorTrap_PlayDownMontage                      ___ OFFSET(get<bool>, {0xC46, 1, 0, 0})
	DMember(bool)                                      KnockbackFromFloorTrap_PlayLandMontage                      ___ OFFSET(get<bool>, {0xC47, 1, 0, 0})
	SMember(FGameplayTag)                              Event_Control_Ended                                         ___ OFFSET(get<T>, {0xC48, 4, 0, 0})
	SMember(FGameplayTag)                              GC_TrapKnockback_Tag                                        ___ OFFSET(get<T>, {0xC4C, 4, 0, 0})
	DMember(bool)                                      AllowKnockbackAnimation                                     ___ OFFSET(get<bool>, {0xC50, 1, 0, 0})
};

/// Class /Game/Abilities/Weapons/Ranged/GE_Impulse.GE_Impulse_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Impulse_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Constructor/TacticalPerks/PlasmaGrenades/GE_Constructor_Tactical_PlasmaGrenades_Applied.GE_Constructor_Tactical_PlasmaGrenades_Applied_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Constructor_Tactical_PlasmaGrenades_Applied_C : public UGET_PeriodicEnergyDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/GE_Commando_FragGrenadeDamage.GE_Commando_FragGrenadeDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Commando_FragGrenadeDamage_C : public UGET_DirectEnergyDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_PetOtherPet.GA_DefaultPlayer_PetOtherPet_C
/// Size: 0x0008 (0x000B28 - 0x000B30)
class UGA_DefaultPlayer_PetOtherPet_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
};

/// Class /Game/Abilities/Weapons/Ranged/GE_Damage_Explosive_LineOfSight.GE_Damage_Explosive_LineOfSight_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Damage_Explosive_LineOfSight_C : public UGE_Ranged_GenericDamage_Explosive_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/B_GrenadeCameraShake.B_GrenadeCameraShake_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UB_GrenadeCameraShake_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C
/// Size: 0x0008 (0x000B28 - 0x000B30)
class UGA_DefaultPlayer_InteractUse_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
};

/// Class /Game/Abilities/Player/Sliding/CamShake_Athena_Player_Slide.CamShake_Athena_Player_Slide_C
/// Size: 0x0000 (0x0001F0 - 0x0001F0)
class UCamShake_Athena_Player_Slide_C : public ULegacyCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
};

/// Class /Game/Abilities/Player/Perks/Hero/ClusterBomb/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C
/// Size: 0x0058 (0x000A88 - 0x000AE0)
class AB_Prj_Commando_FragGrenade_Cluster_C : public AFortProjectileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2784;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA88, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ParticleSystem1                                             ___ OFFSET(get<T>, {0xA90, 8, 0, 0})
	CMember(UAudioComponent*)                          Audio1                                                      ___ OFFSET(get<T>, {0xA98, 8, 0, 0})
	CMember(USoundBase*)                               BounceSound                                                 ___ OFFSET(get<T>, {0xAA0, 8, 0, 0})
	CMember(UParticleSystem*)                          P_Explosion                                                 ___ OFFSET(get<T>, {0xAA8, 8, 0, 0})
	CMember(USoundBase*)                               ExplosionSound                                              ___ OFFSET(get<T>, {0xAB0, 8, 0, 0})
	SMember(FVector)                                   ExplosionLocation                                           ___ OFFSET(get<T>, {0xAB8, 24, 0, 0})
	DMember(double)                                    MinExplosionDelay                                           ___ OFFSET(get<double>, {0xAD0, 8, 0, 0})
	DMember(double)                                    MaxExplosionDelay                                           ___ OFFSET(get<double>, {0xAD8, 8, 0, 0})
};

/// Class /Game/Abilities/NPC/Generic/GAB_CarryPlayer.GAB_CarryPlayer_C
/// Size: 0x0034 (0x000B58 - 0x000B8C)
class UGAB_CarryPlayer_C : public UFortGameplayAbility_CarryPlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2956;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
	SMember(FName)                                     DBNOCarryHolster                                            ___ OFFSET(get<T>, {0xB68, 4, 0, 0})
	DMember(bool)                                      bCompletedPickup                                            ___ OFFSET(get<bool>, {0xB6C, 1, 0, 0})
	SMember(FVector)                                   PickupLocation                                              ___ OFFSET(get<T>, {0xB70, 24, 0, 0})
	DMember(int32_t)                                   CarryLongDistanceThreshold                                  ___ OFFSET(get<int32_t>, {0xB88, 4, 0, 0})
};

/// Class /Game/Abilities/NPC/Generic/GAB_ThrowPlayer.GAB_ThrowPlayer_C
/// Size: 0x0010 (0x000B58 - 0x000B68)
class UGAB_ThrowPlayer_C : public UFortGameplayAbility_CarryPlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
};

/// Class /Game/Abilities/NPC/Generic/GAB_DropPlayer.GAB_DropPlayer_C
/// Size: 0x0010 (0x000B58 - 0x000B68)
class UGAB_DropPlayer_C : public UFortGameplayAbility_CarryPlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
};

/// Class /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C
/// Size: 0x0028 (0x000B28 - 0x000B50)
class UGAT_ActiveAbility_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FGameplayTag)                              TC_AbilitiesGenericActiveAbilityActivate                    ___ OFFSET(get<T>, {0xB30, 4, 0, 0})
	SMember(FName)                                     N_SavedCollisionChannel                                     ___ OFFSET(get<T>, {0xB34, 4, 0, 0})
	CMember(UClass*)                                   GE_KnockBackImmunity                                        ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GEH_KnockBackImmunity                                       ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
	DMember(bool)                                      bPlayerHolsterState                                         ___ OFFSET(get<bool>, {0xB48, 1, 0, 0})
	SMember(FGameplayTag)                              TC_AbilitiesGenericActiveAbilityEndAbility                  ___ OFFSET(get<T>, {0xB4C, 4, 0, 0})
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
/// Size: 0x0400 (0x0006D0 - 0x000AD0)
class AAOE_Commando_KeepOutExplosion_C : public AFortAreaOfEffectCloud
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(UAudioComponent*)                          AOE_Audio_Effect                                            ___ OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Grenade_Linger                                            ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(USphereComponent*)                         DamageArea                                                  ___ OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x6F0, 8, 0, 0})
	DMember(double)                                    Radius                                                      ___ OFFSET(get<double>, {0x6F8, 8, 0, 0})
	SMember(FSoundAttenuationSettings)                 AOE_Sound_Attenuation_Based_On_Radius                       ___ OFFSET(get<T>, {0x700, 976, 0, 0})
};

/// Class /Game/Abilities/Player/Parents/GAT_ActiveAbility_Hero.GAT_ActiveAbility_Hero_C
/// Size: 0x0030 (0x000B50 - 0x000B80)
class UGAT_ActiveAbility_Hero_C : public UGAT_ActiveAbility_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
	DMember(bool)                                      UseHeroLoadoutSystem                                        ___ OFFSET(get<bool>, {0xB58, 1, 0, 0})
	DMember(bool)                                      bUseMidAbilityCosts                                         ___ OFFSET(get<bool>, {0xB59, 1, 0, 0})
	DMember(bool)                                      bTriggerCooldownOnAbilityEnd                                ___ OFFSET(get<bool>, {0xB5A, 1, 0, 0})
	CMember(UAbilitySystemComponent*)                  Owner_ASC                                                   ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(UClass*)                                   GE_CooldownModifier                                         ___ OFFSET(get<T>, {0xB68, 8, 0, 0})
	CMember(TArray<FActiveGameplayEffectHandle>)       Active_Cooldown_Modifiers                                   ___ OFFSET(get<T>, {0xB70, 16, 0, 0})
};

/// Class /Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C
/// Size: 0x00C2 (0x000B80 - 0x000C42)
class UGAT_CommandoActiveAbility_C : public UGAT_ActiveAbility_Hero_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3138;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB80, 8, 0, 0})
	SMember(FGameplayEventData)                        Event_Data                                                  ___ OFFSET(get<T>, {0xB88, 176, 0, 0})
	CMember(AFortPawn*)                                CommandoPlayerPawn                                          ___ OFFSET(get<T>, {0xC38, 8, 0, 0})
	DMember(bool)                                      isAutoCommitted                                             ___ OFFSET(get<bool>, {0xC40, 1, 0, 0})
	DMember(bool)                                      isStaminaLockedOut                                          ___ OFFSET(get<bool>, {0xC41, 1, 0, 0})
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
/// Size: 0x02F4 (0x000A88 - 0x000D7C)
class AB_Prj_Commando_FragGrenade_C : public AFortProjectileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3452;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA88, 8, 0, 0})
	CMember(URotatingMovementComponent*)               RotatingMovement                                            ___ OFFSET(get<T>, {0xA90, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Fuse_Particle                                               ___ OFFSET(get<T>, {0xA98, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Mesh                                                        ___ OFFSET(get<T>, {0xAA0, 8, 0, 0})
	CMember(UAudioComponent*)                          GrenadeFuse_AudioComponent                                  ___ OFFSET(get<T>, {0xAA8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_Distance                                             ___ OFFSET(get<T>, {0xAB0, 8, 0, 0})
	CMember(UParticleSystem*)                          P_Explosion                                                 ___ OFFSET(get<T>, {0xAB8, 8, 0, 0})
	CMember(USoundBase*)                               Cue_DistantSound                                            ___ OFFSET(get<T>, {0xAC0, 8, 0, 0})
	CMember(USoundBase*)                               Cue_CloseSound                                              ___ OFFSET(get<T>, {0xAC8, 8, 0, 0})
	DMember(double)                                    ExplosionRadius                                             ___ OFFSET(get<double>, {0xAD0, 8, 0, 0})
	DMember(int32_t)                                   NumberOfBouncesTillExplode                                  ___ OFFSET(get<int32_t>, {0xAD8, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumberOfBounces                                      ___ OFFSET(get<int32_t>, {0xADC, 4, 0, 0})
	CMember(USoundBase*)                               Cue_GrenadeFuseSound                                        ___ OFFSET(get<T>, {0xAE0, 8, 0, 0})
	DMember(double)                                    BouncePawnAgainstPawnGravityScale                           ___ OFFSET(get<double>, {0xAE8, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ExplosionForceFeedbackNear                                  ___ OFFSET(get<T>, {0xAF0, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ExplosionForceFeedbackFar                                   ___ OFFSET(get<T>, {0xAF8, 8, 0, 0})
	DMember(int32_t)                                   MaxClusterGrenades                                          ___ OFFSET(get<int32_t>, {0xB00, 4, 0, 0})
	SMember(FGameplayTag)                              EC_ClusterExplosion                                         ___ OFFSET(get<T>, {0xB04, 4, 0, 0})
	DMember(bool)                                      bHasCluster                                                 ___ OFFSET(get<bool>, {0xB08, 1, 0, 0})
	CMember(UClass*)                                   Prj_Cluster                                                 ___ OFFSET(get<T>, {0xB10, 8, 0, 0})
	SMember(FFortGameplayEffectContainerSpec)          ClusterContainerSpec                                        ___ OFFSET(get<T>, {0xB18, 184, 0, 0})
	DMember(bool)                                      bHasKeepOut                                                 ___ OFFSET(get<bool>, {0xBD0, 1, 0, 0})
	SMember(FFortGameplayEffectContainerSpec)          KeepOutContainerSpec                                        ___ OFFSET(get<T>, {0xBD8, 184, 0, 0})
	CMember(UClass*)                                   AOE_KeepOut                                                 ___ OFFSET(get<T>, {0xC90, 8, 0, 0})
	DMember(bool)                                      bHasClusterTactical                                         ___ OFFSET(get<bool>, {0xC98, 1, 0, 0})
	SMember(FFortGameplayEffectContainerSpec)          Cluster_Tactical_Container_Spec                             ___ OFFSET(get<T>, {0xCA0, 184, 0, 0})
	SMember(FGameplayTagContainer)                     TC_ActorTagsThatShouldExplodeOnOverlap                      ___ OFFSET(get<T>, {0xD58, 32, 0, 0})
	SMember(FGameplayTag)                              T_Event_GrenadeExploded                                     ___ OFFSET(get<T>, {0xD78, 4, 0, 0})
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/TT_Commando_FragGrenade.TT_Commando_FragGrenade_C
/// Size: 0x0000 (0x000158 - 0x000158)
class UTT_Commando_FragGrenade_C : public UFortGameplayAbilityTooltip
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
/// Size: 0x0336 (0x000C42 - 0x000F78)
class UGA_Commando_FragGrenade_WithTrajectory_C : public UGAT_CommandoActiveAbility_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3960;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xC48, 8, 0, 0})
	CMember(UClass*)                                   Prj_Grenade                                                 ___ OFFSET(get<T>, {0xC50, 8, 0, 0})
	DMember(double)                                    GrenadeSpeedMin                                             ___ OFFSET(get<double>, {0xC58, 8, 0, 0})
	DMember(double)                                    GrenadeSpeedMax                                             ___ OFFSET(get<double>, {0xC60, 8, 0, 0})
	DMember(double)                                    GravityScale                                                ___ OFFSET(get<double>, {0xC68, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_ClusterBomb                                              ___ OFFSET(get<T>, {0xC70, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_BiggerIsBetter                                           ___ OFFSET(get<T>, {0xC90, 32, 0, 0})
	SMember(FGameplayTag)                              T_GEContainer_Explosion                                     ___ OFFSET(get<T>, {0xCB0, 4, 0, 0})
	DMember(double)                                    ExplosionRadius                                             ___ OFFSET(get<double>, {0xCB8, 8, 0, 0})
	DMember(double)                                    AdditionalThrowAngle                                        ___ OFFSET(get<double>, {0xCC0, 8, 0, 0})
	SMember(FGameplayTag)                              EC_ClusterExplosion                                         ___ OFFSET(get<T>, {0xCC8, 4, 0, 0})
	SMember(FFortFeedbackHandle)                       GrenadeDialogFeedback                                       ___ OFFSET(get<T>, {0xCD0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     TC_KeepOut                                                  ___ OFFSET(get<T>, {0xCE0, 32, 0, 0})
	SMember(FGameplayTag)                              EC_KeepOut                                                  ___ OFFSET(get<T>, {0xD00, 4, 0, 0})
	DMember(bool)                                      BiggerIsBetter                                              ___ OFFSET(get<bool>, {0xD04, 1, 0, 0})
	DMember(bool)                                      ClusterBomb                                                 ___ OFFSET(get<bool>, {0xD05, 1, 0, 0})
	DMember(bool)                                      KeepOut                                                     ___ OFFSET(get<bool>, {0xD06, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TC_GrenadeAmmo                                              ___ OFFSET(get<T>, {0xD08, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_GrenadeCost                                              ___ OFFSET(get<T>, {0xD28, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_GrenadeDamage                                            ___ OFFSET(get<T>, {0xD48, 32, 0, 0})
	DMember(bool)                                      GrenadeAmmo                                                 ___ OFFSET(get<bool>, {0xD68, 1, 0, 0})
	DMember(bool)                                      GrenadeCost                                                 ___ OFFSET(get<bool>, {0xD69, 1, 0, 0})
	DMember(bool)                                      GrenadeDamage                                               ___ OFFSET(get<bool>, {0xD6A, 1, 0, 0})
	DMember(int32_t)                                   GrenadeAmmoUpgrade                                          ___ OFFSET(get<int32_t>, {0xD6C, 4, 0, 0})
	DMember(int32_t)                                   GrenadeAmmoDefault                                          ___ OFFSET(get<int32_t>, {0xD70, 4, 0, 0})
	DMember(int32_t)                                   MaxGrenadeAmmo                                              ___ OFFSET(get<int32_t>, {0xD74, 4, 0, 0})
	DMember(int32_t)                                   ExplosionRadiusTooltip                                      ___ OFFSET(get<int32_t>, {0xD78, 4, 0, 0})
	DMember(int32_t)                                   ExplosionRadiusDefault                                      ___ OFFSET(get<int32_t>, {0xD7C, 4, 0, 0})
	DMember(int32_t)                                   ExplosionRadiusUpgrade                                      ___ OFFSET(get<int32_t>, {0xD80, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_PlasmaGrenades                                           ___ OFFSET(get<T>, {0xD88, 32, 0, 0})
	DMember(bool)                                      PlasmaGrenades                                              ___ OFFSET(get<bool>, {0xDA8, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TC_Flashbang                                                ___ OFFSET(get<T>, {0xDB0, 32, 0, 0})
	DMember(bool)                                      Flashbang                                                   ___ OFFSET(get<bool>, {0xDD0, 1, 0, 0})
	SMember(FVector)                                   GrenadeTargetingOriginOffset                                ___ OFFSET(get<T>, {0xDD8, 24, 0, 0})
	DMember(bool)                                      DummyShouldBounce                                           ___ OFFSET(get<bool>, {0xDF0, 1, 0, 0})
	DMember(double)                                    DummyBounciness                                             ___ OFFSET(get<double>, {0xDF8, 8, 0, 0})
	DMember(double)                                    DummyFriction                                               ___ OFFSET(get<double>, {0xE00, 8, 0, 0})
	DMember(double)                                    TrajectoryUpdateInterval                                    ___ OFFSET(get<double>, {0xE08, 8, 0, 0})
	DMember(double)                                    DummyMaxSpeed                                               ___ OFFSET(get<double>, {0xE10, 8, 0, 0})
	DMember(double)                                    DummyGravity                                                ___ OFFSET(get<double>, {0xE18, 8, 0, 0})
	DMember(double)                                    DummyTimeStep                                               ___ OFFSET(get<double>, {0xE20, 8, 0, 0})
	DMember(double)                                    DummyExtent                                                 ___ OFFSET(get<double>, {0xE28, 8, 0, 0})
	DMember(bool)                                      InThrowWindup                                               ___ OFFSET(get<bool>, {0xE30, 1, 0, 0})
	CMember(ABP_ProjectileTrajectory_C*)               TrajectoryIndicator                                         ___ OFFSET(get<T>, {0xE38, 8, 0, 0})
	CMember(UClass*)                                   TrajectoryIndicatorClass                                    ___ OFFSET(get<T>, {0xE40, 8, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           ThrowWindupMontage                                          ___ OFFSET(get<T>, {0xE48, 88, 0, 0})
	DMember(bool)                                      AbilityKeyPressed                                           ___ OFFSET(get<bool>, {0xEA0, 1, 0, 0})
	DMember(double)                                    MaxSpeedPitch                                               ___ OFFSET(get<double>, {0xEA8, 8, 0, 0})
	DMember(double)                                    MinSpeedPitch                                               ___ OFFSET(get<double>, {0xEB0, 8, 0, 0})
	DMember(double)                                    MaxTossPitch                                                ___ OFFSET(get<double>, {0xEB8, 8, 0, 0})
	DMember(int32_t)                                   MaxTrajectoryBounces                                        ___ OFFSET(get<int32_t>, {0xEC0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_Tactical_Clusterbomb                                     ___ OFFSET(get<T>, {0xEC8, 32, 0, 0})
	DMember(bool)                                      Tactical_Clusterbomb                                        ___ OFFSET(get<bool>, {0xEE8, 1, 0, 0})
	SMember(FGameplayTag)                              EC_ClusterExplosion_Tactical                                ___ OFFSET(get<T>, {0xEEC, 4, 0, 0})
	DMember(double)                                    F_FrameDelay                                                ___ OFFSET(get<double>, {0xEF0, 8, 0, 0})
	DMember(bool)                                      BiggerIsBetter_T01                                          ___ OFFSET(get<bool>, {0xEF8, 1, 0, 0})
	DMember(bool)                                      BiggerIsBetter_T02                                          ___ OFFSET(get<bool>, {0xEF9, 1, 0, 0})
	DMember(bool)                                      ClusterBomb_T01                                             ___ OFFSET(get<bool>, {0xEFA, 1, 0, 0})
	DMember(bool)                                      ClusterBomb_T02                                             ___ OFFSET(get<bool>, {0xEFB, 1, 0, 0})
	SMember(FGameplayTag)                              T_BiggerIsBetter_T01                                        ___ OFFSET(get<T>, {0xEFC, 4, 0, 0})
	SMember(FGameplayTag)                              T_BiggerIsBetter_T02                                        ___ OFFSET(get<T>, {0xF00, 4, 0, 0})
	SMember(FGameplayTag)                              T_ClusterBomb_T01                                           ___ OFFSET(get<T>, {0xF04, 4, 0, 0})
	SMember(FGameplayTag)                              T_ClusterBomb_T02                                           ___ OFFSET(get<T>, {0xF08, 4, 0, 0})
	SMember(FScalableFloat)                            SF_BiggerIsBetterRadius_T01                                 ___ OFFSET(get<T>, {0xF10, 40, 0, 0})
	CMember(UAnimMontage*)                             ThrowMontage                                                ___ OFFSET(get<T>, {0xF38, 8, 0, 0})
	SMember(FGameplayTag)                              T_Event_Activate                                            ___ OFFSET(get<T>, {0xF40, 4, 0, 0})
	SMember(FGameplayTag)                              T_Event_Deactivate                                          ___ OFFSET(get<T>, {0xF44, 4, 0, 0})
	SMember(FScalableFloat)                            SF_BiggerIsBetterRadius_T02                                 ___ OFFSET(get<T>, {0xF48, 40, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            DummyCollisionChannel                                       ___ OFFSET(get<T>, {0xF70, 1, 0, 0})
	SMember(FGameplayTag)                              ThrowCue                                                    ___ OFFSET(get<T>, {0xF74, 4, 0, 0})
};

/// Class /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C
/// Size: 0x01D4 (0x000B28 - 0x000CFC)
class UGAB_GenericDeath_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3324;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UAnimMontage*)                             DeathMontage                                                ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FName)                                     DeathMontageSectionName                                     ___ OFFSET(get<T>, {0xB38, 4, 0, 0})
	SMember(FVector)                                   DeathHitDirection                                           ___ OFFSET(get<T>, {0xB40, 24, 0, 0})
	SMember(FHitResult)                                DeathHitResult                                              ___ OFFSET(get<T>, {0xB58, 224, 0, 0})
	SMember(FGameplayTagContainer)                     DamageTags                                                  ___ OFFSET(get<T>, {0xC38, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SpawnDroneTags                                              ___ OFFSET(get<T>, {0xC58, 32, 0, 0})
	CMember(UAnimMontage*)                             Front                                                       ___ OFFSET(get<T>, {0xC78, 8, 0, 0})
	CMember(UAnimMontage*)                             Left                                                        ___ OFFSET(get<T>, {0xC80, 8, 0, 0})
	CMember(UAnimMontage*)                             Right                                                       ___ OFFSET(get<T>, {0xC88, 8, 0, 0})
	CMember(UAnimMontage*)                             Back                                                        ___ OFFSET(get<T>, {0xC90, 8, 0, 0})
	CMember(UAnimMontage*)                             Head_Front                                                  ___ OFFSET(get<T>, {0xC98, 8, 0, 0})
	CMember(UAnimMontage*)                             Head_Left                                                   ___ OFFSET(get<T>, {0xCA0, 8, 0, 0})
	CMember(UAnimMontage*)                             Head_Right                                                  ___ OFFSET(get<T>, {0xCA8, 8, 0, 0})
	CMember(UAnimMontage*)                             Head_Back                                                   ___ OFFSET(get<T>, {0xCB0, 8, 0, 0})
	DMember(int32_t)                                   FrontSectionNameCount                                       ___ OFFSET(get<int32_t>, {0xCB8, 4, 0, 0})
	DMember(int32_t)                                   LeftSectionNameCount                                        ___ OFFSET(get<int32_t>, {0xCBC, 4, 0, 0})
	DMember(int32_t)                                   RightSectionNameCount                                       ___ OFFSET(get<int32_t>, {0xCC0, 4, 0, 0})
	DMember(int32_t)                                   BackSectionNameCount                                        ___ OFFSET(get<int32_t>, {0xCC4, 4, 0, 0})
	DMember(int32_t)                                   Head_FrontSectionNameCount                                  ___ OFFSET(get<int32_t>, {0xCC8, 4, 0, 0})
	DMember(int32_t)                                   Head_LeftSectionNameCount                                   ___ OFFSET(get<int32_t>, {0xCCC, 4, 0, 0})
	DMember(int32_t)                                   Head_RightSectionNameCount                                  ___ OFFSET(get<int32_t>, {0xCD0, 4, 0, 0})
	DMember(int32_t)                                   Head_BackSectionNameCount                                   ___ OFFSET(get<int32_t>, {0xCD4, 4, 0, 0})
	SMember(FName)                                     FrontMontageSectionPrefix                                   ___ OFFSET(get<T>, {0xCD8, 4, 0, 0})
	SMember(FName)                                     BackMontageSectionPrefix                                    ___ OFFSET(get<T>, {0xCDC, 4, 0, 0})
	SMember(FName)                                     LeftMontageSectionPrefix                                    ___ OFFSET(get<T>, {0xCE0, 4, 0, 0})
	SMember(FName)                                     RightMontageSectionPrefix                                   ___ OFFSET(get<T>, {0xCE4, 4, 0, 0})
	SMember(FName)                                     HeadFrontMontageSectionPrefix                               ___ OFFSET(get<T>, {0xCE8, 4, 0, 0})
	SMember(FName)                                     HeadBackMontageSectionPrefix                                ___ OFFSET(get<T>, {0xCEC, 4, 0, 0})
	SMember(FName)                                     HeadLeftMontageSectionPrefix                                ___ OFFSET(get<T>, {0xCF0, 4, 0, 0})
	SMember(FName)                                     HeadRightMontageSectionPrefix                               ___ OFFSET(get<T>, {0xCF4, 4, 0, 0})
	SMember(FGameplayTag)                              TeleportOutCue                                              ___ OFFSET(get<T>, {0xCF8, 4, 0, 0})
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
/// Size: 0x0014 (0x000CFC - 0x000D10)
class UGA_DefaultPlayer_Death_C : public UGAB_GenericDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3344;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xD00, 8, 0, 0})
	SMember(FGameplayTag)                              FadeCapsuleStWCue                                           ___ OFFSET(get<T>, {0xD08, 4, 0, 0})
	SMember(FGameplayTag)                              FadeCapsuleAthenaCue                                        ___ OFFSET(get<T>, {0xD0C, 4, 0, 0})
};

/// Class /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Reveal.GAB_InterrogatePlayer_Reveal_C
/// Size: 0x0480 (0x000B28 - 0x000FA8)
class UGAB_InterrogatePlayer_Reveal_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4008;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(AFortPlayerControllerAthena*)              PlayerController                                            ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          InterrogatedPlayer                                          ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
	CMember(UAnimMontage*)                             Anim_Reveal                                                 ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
	CMember(UAnimMontage*)                             Anim_End                                                    ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
	SMember(FName)                                     RevealHolster                                               ___ OFFSET(get<T>, {0xB58, 4, 0, 0})
	SMember(FGameplayTag)                              GC_Reveal                                                   ___ OFFSET(get<T>, {0xB5C, 4, 0, 0})
	SMember(FScalableFloat)                            MarkDurationPlayer                                          ___ OFFSET(get<T>, {0xB60, 40, 0, 0})
	SMember(FScalableFloat)                            MarkDurationNPC                                             ___ OFFSET(get<T>, {0xB88, 40, 0, 0})
	SMember(FScalableFloat)                            MarkRadius                                                  ___ OFFSET(get<T>, {0xBB0, 40, 0, 0})
	CMember(TArray<AActor*>)                           SquadmatesToMark                                            ___ OFFSET(get<T>, {0xBD8, 16, 0, 0})
	SMember(FTimerHandle)                              Timer_Reveal                                                ___ OFFSET(get<T>, {0xBE8, 8, 0, 0})
	SMember(FGameplayTag)                              T_NPC                                                       ___ OFFSET(get<T>, {0xBF0, 4, 0, 0})
	DMember(double)                                    RevealDuration                                              ___ OFFSET(get<double>, {0xBF8, 8, 0, 0})
	DMember(double)                                    EndAbilityDelay                                             ___ OFFSET(get<double>, {0xC00, 8, 0, 0})
	DMember(double)                                    SweepDelay                                                  ___ OFFSET(get<double>, {0xC08, 8, 0, 0})
	DMember(bool)                                      Cancelled                                                   ___ OFFSET(get<bool>, {0xC10, 1, 0, 0})
	DMember(bool)                                      Ending                                                      ___ OFFSET(get<bool>, {0xC11, 1, 0, 0})
	SMember(FString)                                   IndicatorGroup                                              ___ OFFSET(get<T>, {0xC18, 16, 0, 0})
	CMember(UClass*)                                   CameraMode                                                  ___ OFFSET(get<T>, {0xC28, 8, 0, 0})
	CMember(TArray<AActor*>)                           ActorsToMark                                                ___ OFFSET(get<T>, {0xC30, 16, 0, 0})
	SMember(FGameplayTagContainer)                     T_ReticleHUD                                                ___ OFFSET(get<T>, {0xC40, 32, 0, 0})
	SMember(FGameplayTagContainer)                     NPCTagsToMark                                               ___ OFFSET(get<T>, {0xC60, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ChestTagsToMark                                             ___ OFFSET(get<T>, {0xC80, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayItemTagsToMark                                      ___ OFFSET(get<T>, {0xCA0, 32, 0, 0})
	SMember(FName)                                     ParticleSystemParamName                                     ___ OFFSET(get<T>, {0xCC0, 4, 0, 0})
	CMember(UParticleSystem*)                          IndicatedPS                                                 ___ OFFSET(get<T>, {0xCC8, 8, 0, 0})
	CMember(USoundBase*)                               IndicatedSound                                              ___ OFFSET(get<T>, {0xCD0, 8, 0, 0})
	SMember(FVector)                                   PSOffset                                                    ___ OFFSET(get<T>, {0xCD8, 24, 0, 0})
	SMember(FName)                                     PSVectorParamName                                           ___ OFFSET(get<T>, {0xCF0, 4, 0, 0})
	SMember(FVector)                                   PSDBNOOffset                                                ___ OFFSET(get<T>, {0xCF8, 24, 0, 0})
	SMember(FName)                                     EnemyStencilName                                            ___ OFFSET(get<T>, {0xD10, 4, 0, 0})
	SMember(FName)                                     TreasureChestStencilName                                    ___ OFFSET(get<T>, {0xD14, 4, 0, 0})
	DMember(double)                                    StepTime                                                    ___ OFFSET(get<double>, {0xD18, 8, 0, 0})
	DMember(bool)                                      testbool                                                    ___ OFFSET(get<bool>, {0xD20, 1, 0, 0})
	SMember(FScalableFloat)                            EnemyStencilID                                              ___ OFFSET(get<T>, {0xD28, 40, 0, 0})
	SMember(FScalableFloat)                            StencilStepTime                                             ___ OFFSET(get<T>, {0xD50, 40, 0, 0})
	SMember(FScalableFloat)                            bUseDefaultStencil                                          ___ OFFSET(get<T>, {0xD78, 40, 0, 0})
	SMember(FScalableFloat)                            IndicatorStepTime                                           ___ OFFSET(get<T>, {0xDA0, 40, 0, 0})
	SMember(FGameplayTagQuery)                         NPCGameplayTagQuery                                         ___ OFFSET(get<T>, {0xDC8, 72, 0, 0})
	SMember(FIndicatedActorData)                       IndicatedActorDataPlayers                                   ___ OFFSET(get<T>, {0xE10, 248, 0, 0})
	SMember(FStenciledActorData)                       StenciledActorDataPlayers                                   ___ OFFSET(get<T>, {0xF08, 128, 0, 0})
	SMember(FGameplayTagContainer)                     T_QuestTagContainer                                         ___ OFFSET(get<T>, {0xF88, 32, 0, 0})
};

/// Class /Game/Abilities/Player/Interrogation/GAB_InterrogatePlayer_Search.GAB_InterrogatePlayer_Search_C
/// Size: 0x0118 (0x000B58 - 0x000C70)
class UGAB_InterrogatePlayer_Search_C : public UFortGameplayAbility_CarryPlayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3184;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(AFortPlayerControllerAthena*)              PlayerController                                            ___ OFFSET(get<T>, {0xB68, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          InterrogatedPlayer                                          ___ OFFSET(get<T>, {0xB70, 8, 0, 0})
	CMember(UAnimMontage*)                             Anim_Search                                                 ___ OFFSET(get<T>, {0xB78, 8, 0, 0})
	SMember(FName)                                     InterrogateHolster                                          ___ OFFSET(get<T>, {0xB80, 4, 0, 0})
	SMember(FName)                                     LootTierGroupName                                           ___ OFFSET(get<T>, {0xB84, 4, 0, 0})
	CMember(UFortWorldItemDefinition*)                 ItemDefinition                                              ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
	DMember(int32_t)                                   NumberToSpawn                                               ___ OFFSET(get<int32_t>, {0xB90, 4, 0, 0})
	SMember(FVector)                                   LootSpawnOffset                                             ___ OFFSET(get<T>, {0xB98, 24, 0, 0})
	SMember(FScalableFloat)                            MaxDropsInstance                                            ___ OFFSET(get<T>, {0xBB0, 40, 0, 0})
	DMember(int32_t)                                   NumDropsInstance                                            ___ OFFSET(get<int32_t>, {0xBD8, 4, 0, 0})
	SMember(FScalableFloat)                            KeycardDropBias                                             ___ OFFSET(get<T>, {0xBE0, 40, 0, 0})
	CMember(TArray<UFortWorldItemDefinition*>)         KeycardItemDefinitions                                      ___ OFFSET(get<T>, {0xC08, 16, 0, 0})
	SMember(FGameplayTag)                              T_Keycard_Yacht                                             ___ OFFSET(get<T>, {0xC18, 4, 0, 0})
	SMember(FGameplayTag)                              T_Keycard_OilRig                                            ___ OFFSET(get<T>, {0xC1C, 4, 0, 0})
	SMember(FGameplayTag)                              T_Keycard_SharkIsland                                       ___ OFFSET(get<T>, {0xC20, 4, 0, 0})
	SMember(FGameplayTag)                              T_Keycard_HQ                                                ___ OFFSET(get<T>, {0xC24, 4, 0, 0})
	SMember(FGameplayTag)                              T_Keycard_MountainBase                                      ___ OFFSET(get<T>, {0xC28, 4, 0, 0})
	SMember(FTimerHandle)                              Timer_Interrogation                                         ___ OFFSET(get<T>, {0xC30, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_ReticleHUD                                                ___ OFFSET(get<T>, {0xC38, 32, 0, 0})
	SMember(FGameplayTag)                              T_NPC                                                       ___ OFFSET(get<T>, {0xC58, 4, 0, 0})
	CMember(UClass*)                                   GE_Cooldown                                                 ___ OFFSET(get<T>, {0xC60, 8, 0, 0})
	CMember(UClass*)                                   GE_PickedUp                                                 ___ OFFSET(get<T>, {0xC68, 8, 0, 0})
};

/// Class /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C
/// Size: 0x0030 (0x000B28 - 0x000B58)
class UGAB_AthenaDBNORevive_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FGameplayTag)                              EC_AppliedEffect                                            ___ OFFSET(get<T>, {0xB30, 4, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	SMember(FGameplayTag)                              ResurrectCue                                                ___ OFFSET(get<T>, {0xB40, 4, 0, 0})
	SMember(FGameplayTag)                              ResurrectAthenaCue                                          ___ OFFSET(get<T>, {0xB44, 4, 0, 0})
	CMember(UAnimMontage*)                             DBNOMontageOutro                                            ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
	CMember(UAnimMontage*)                             DBNOMontageOutroSwimming                                    ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C
/// Size: 0x01E8 (0x000B28 - 0x000D10)
class UGA_DefaultPlayer_InteractSearch_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3344;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FGameplayTag)                              RefillGasTankTag                                            ___ OFFSET(get<T>, {0xB38, 4, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           RefillGasTankMontage                                        ___ OFFSET(get<T>, {0xB40, 88, 0, 0})
	SMember(FGameplayTag)                              CatchFireflyTag                                             ___ OFFSET(get<T>, {0xB98, 4, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           FireflyCatchMontage                                         ___ OFFSET(get<T>, {0xBA0, 88, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           RefillVehicleFuelMontage                                    ___ OFFSET(get<T>, {0xBF8, 88, 0, 0})
	SMember(FGameplayTag)                              GasCanRefillVehicleTag                                      ___ OFFSET(get<T>, {0xC50, 4, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           DBNOMontageInfo                                             ___ OFFSET(get<T>, {0xC58, 88, 0, 0})
	SMember(FGameplayTag)                              Tag_UseOverrideSearchMontage                                ___ OFFSET(get<T>, {0xCB0, 4, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           OverrideSearchMontageInfo                                   ___ OFFSET(get<T>, {0xCB8, 88, 0, 0})
};

/// Class /Game/Abilities/Player/Sliding/GA_Athena_Player_Slide.GA_Athena_Player_Slide_C
/// Size: 0x0E58 (0x000B28 - 0x001980)
class UGA_Athena_Player_Slide_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6528;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UClass*)                                   CameraShake                                                 ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(UClass*)                                   Camera_Mode_Class                                           ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	SMember(FGameplayTag)                              CameraShakeGCNL                                             ___ OFFSET(get<T>, {0xB40, 4, 0, 0})
	CMember(UClass*)                                   CameraModifier                                              ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
	DMember(double)                                    MinAngleForMomentum                                         ___ OFFSET(get<double>, {0xB50, 8, 0, 0})
	SMember(FGameplayTag)                              SpeedlinesCue                                               ___ OFFSET(get<T>, {0xB58, 4, 0, 0})
	CMember(UClass*)                                   StartSlideCameraShake                                       ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
	DMember(double)                                    AdditionalLaunchVelocityOffRamp                             ___ OFFSET(get<double>, {0xB68, 8, 0, 0})
	SMember(FSlidingControlParams)                     DefaultSlidingParams                                        ___ OFFSET(get<T>, {0xB70, 1688, 0, 0})
	SMember(FSlidingControlParams)                     PostDashGroundSlidingParams                                 ___ OFFSET(get<T>, {0x1208, 1688, 0, 0})
	DMember(double)                                    LevelGroundSlideDuration                                    ___ OFFSET(get<double>, {0x18A0, 8, 0, 0})
	SMember(FTimerHandle)                              EndLevelGroundSlideTimerHandle                              ___ OFFSET(get<T>, {0x18A8, 8, 0, 0})
	SMember(FScalableFloat)                            DashDuration                                                ___ OFFSET(get<T>, {0x18B0, 40, 0, 0})
	SMember(FTimerHandle)                              CameraFXDelay                                               ___ OFFSET(get<T>, {0x18D8, 8, 0, 0})
	SMember(FGameplayTag)                              PlayerGameplayCue                                           ___ OFFSET(get<T>, {0x18E0, 4, 0, 0})
	DMember(double)                                    CameraShakeDelay                                            ___ OFFSET(get<double>, {0x18E8, 8, 0, 0})
	SMember(FScalableFloat)                            MinAdditionalMomentum                                       ___ OFFSET(get<T>, {0x18F0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxAdditionalMomentum                                       ___ OFFSET(get<T>, {0x1918, 40, 0, 0})
	SMember(FScalableFloat)                            MinAngleForAdditionalMomentum                               ___ OFFSET(get<T>, {0x1940, 40, 0, 0})
	DMember(bool)                                      Prev_FallingGracePeriodState                                ___ OFFSET(get<bool>, {0x1968, 1, 0, 0})
	CMember(UCameraModifier*)                          SlideCameraModifier                                         ___ OFFSET(get<T>, {0x1970, 8, 0, 0})
	SMember(FTimerHandle)                              AddMomentumTimerHandle                                      ___ OFFSET(get<T>, {0x1978, 8, 0, 0})
};

/// Class /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C
/// Size: 0x01B1 (0x000B28 - 0x000CD9)
class UGAB_AthenaDBNO_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3289;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UAnimMontage*)                             DeathMontage                                                ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FVector)                                   DeathHitDirection                                           ___ OFFSET(get<T>, {0xB38, 24, 0, 0})
	SMember(FHitResult)                                DeathHitResult                                              ___ OFFSET(get<T>, {0xB50, 224, 0, 0})
	SMember(FGameplayTagContainer)                     DamageTags                                                  ___ OFFSET(get<T>, {0xC30, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayStatusAfflicted                                     ___ OFFSET(get<T>, {0xC50, 32, 0, 0})
	CMember(UAnimMontage*)                             DeathMontageSkydive                                         ___ OFFSET(get<T>, {0xC70, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               DBNOBleedGEHandle                                           ___ OFFSET(get<T>, {0xC78, 8, 0, 0})
	SMember(FName)                                     HolsterId                                                   ___ OFFSET(get<T>, {0xC80, 4, 0, 0})
	CMember(UAnimMontage*)                             DeathMontageSwimming                                        ___ OFFSET(get<T>, {0xC88, 8, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    FortPlayerPawn                                              ___ OFFSET(get<T>, {0xC90, 8, 0, 0})
	CMember(UClass*)                                   DBNOStart_GE_Class                                          ___ OFFSET(get<T>, {0xC98, 8, 0, 0})
	DMember(bool)                                      ImprovedDBNO                                                ___ OFFSET(get<bool>, {0xCA0, 1, 0, 0})
	SMember(FGameplayTagContainer)                     Old_DBNO_Block_Tags                                         ___ OFFSET(get<T>, {0xCA8, 32, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GE_Handle__Health_Bonus                                     ___ OFFSET(get<T>, {0xCC8, 8, 0, 0})
	DMember(double)                                    TenacityAmount                                              ___ OFFSET(get<double>, {0xCD0, 8, 0, 0})
	CMember(ETenacityType)                             TenacityType                                                ___ OFFSET(get<T>, {0xCD8, 1, 0, 0})
};

/// Class /Game/Abilities/AccountBuff/Buff_PartyXPBoost.Buff_PartyXPBoost_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UBuff_PartyXPBoost_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GE_DefaultPlayer_Tooltips.GE_DefaultPlayer_Tooltips_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_DefaultPlayer_Tooltips_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Abilities/Mission/GE_Resist_Damage_AoE.GE_Resist_Damage_AoE_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Resist_Damage_AoE_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Abilities/Irwin/GE_NPC_Irwin_RidingAbilities_CooldownReduction.GE_NPC_Irwin_RidingAbilities_CooldownReduction_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Irwin_RidingAbilities_CooldownReduction_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Abilities/Base/GE_Riding_Creature_EnergyCritical_Base.GE_Riding_Creature_EnergyCritical_Base_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creature_EnergyCritical_Base_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Abilities/Irwin/GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper.GA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C
/// Size: 0x0038 (0x000B28 - 0x000B60)
class UGA_NPC_Irwin_Prey_Burt_Charge_RidingHelper_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2912;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UControllableRidableComponent*)            ControllableRidableComponent_Cached                         ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(AFortAIPawn*)                              FortAIPawnCached                                            ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	DMember(double)                                    InitialMaxAcceleration                                      ___ OFFSET(get<double>, {0xB40, 8, 0, 0})
	DMember(double)                                    MaxRotationRateYaw                                          ___ OFFSET(get<double>, {0xB48, 8, 0, 0})
	SMember(FGameplayTag)                              GCN_BoostTag                                                ___ OFFSET(get<T>, {0xB50, 4, 0, 0})
	CMember(UFortGameplayAbility*)                     TargetAbilityCached                                         ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
};

/// Class /RidingContent/Abilities/Base/GE_Riding_Creature_EnergyWarning_Base.GE_Riding_Creature_EnergyWarning_Base_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creature_EnergyWarning_Base_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Abilities/Irwin/GE_Riding_Creature_BlockAttackOnDismount.GE_Riding_Creature_BlockAttackOnDismount_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creature_BlockAttackOnDismount_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Abilities/Base/GA_Riding_Creature_EnergyDepleted_Base.GA_Riding_Creature_EnergyDepleted_Base_C
/// Size: 0x0008 (0x000E60 - 0x000E68)
class UGA_Riding_Creature_EnergyDepleted_Base_C : public UGA_NPC_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3688;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xE60, 8, 0, 0})
};

/// Class /RidingContent/Abilities/Irwin/GA_Riding_Creature_EnergyDepleted_Grandma.GA_Riding_Creature_EnergyDepleted_Grandma_C
/// Size: 0x0000 (0x000E68 - 0x000E68)
class UGA_Riding_Creature_EnergyDepleted_Grandma_C : public UGA_Riding_Creature_EnergyDepleted_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3688;

public:
};

/// Class /RidingContent/Abilities/Irwin/GE_Riding_Creature_EnergyDepleted_Grandma.GE_Riding_Creature_EnergyDepleted_Grandma_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creature_EnergyDepleted_Grandma_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /RidingContent/Abilities/Irwin/GA_Riding_Creature_EnergyDepleted_Burt.GA_Riding_Creature_EnergyDepleted_Burt_C
/// Size: 0x0000 (0x000E68 - 0x000E68)
class UGA_Riding_Creature_EnergyDepleted_Burt_C : public UGA_Riding_Creature_EnergyDepleted_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3688;

public:
};

/// Class /RidingContent/Abilities/Irwin/GE_Riding_Creature_EnergyDepleted_Burt.GE_Riding_Creature_EnergyDepleted_Burt_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Riding_Creature_EnergyDepleted_Burt_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

