/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Athena.

/// Struct /Game/Athena/AI/NPCs/Base/Struct_NPC_HealthInfo.Struct_NPC_HealthInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FStruct_NPC_HealthInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(double)                                    HealthPercent_2_7EDADA384C7908EA98DEBD9958A249DE            ___ OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    ShieldPercent_5_B79C63B64AACF275A1621A9315964DCD            ___ OFFSET(get<double>, {0x8, 8, 0, 0})
	DMember(double)                                    MaxHealth_6_7D7BEF7841B13FB96D2578989CF135BB                ___ OFFSET(get<double>, {0x10, 8, 0, 0})
	DMember(double)                                    MaxShield_9_F923E4444E2E476C56FB0E9D9D2F7846                ___ OFFSET(get<double>, {0x18, 8, 0, 0})
};

/// Struct /Game/Athena/AI/Pawns/NPC/Parents/Struct_NPC_TargetSlots.Struct_NPC_TargetSlots
/// Size: 0x0078 (0x000000 - 0x000078)
class FStruct_NPC_TargetSlots : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TEnumAsByte<Enum_NPC_TargetSlots>)         TargetSlotType_6_B268C50140F4F849CE916EA5DB4A30E7           ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(UClass*)                                   TargetSlotCountingGE_7_F6007B01441781AB71302C91A1C4CFD2     ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FScalableFloat)                            AITargetSlotSizeHF_8_E81162534B067D58D70AE9AC8B4B1F98       ___ OFFSET(get<T>, {0x10, 40, 0, 0})
	SMember(FScalableFloat)                            AITargetSlotDurationHF_14_A9B6ED4D4072D7BB507AA5A14118FA5B  ___ OFFSET(get<T>, {0x38, 40, 0, 0})
	CMember(UClass*)                                   TargetSlotOverrideGE_11_6C40525043B50B2B696580B362A65DB3    ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UClass*)                                   TargetSlotOwnerGE_17_19F50D8848750D3BC118D9BBD861CAA1       ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(UClass*)                                   TargetSlotCountingMaxedGE_19_BF1E1EF24CCA642F87D4379BB916F271 ___ OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Struct /Game/Athena/AI/MANG/AnimSet/MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.AnimBlueprintGeneratedConstantData
/// Size: 0x0157 (0x000001 - 0x000158)
class FAnimBlueprintGeneratedConstantData : public FAnimBlueprintConstantData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	CMember(UBlendProfile*)                            __BlendProfile                                              ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UCurveFloat*)                              __CurveFloat                                                ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(EAlphaBlendOption)                         __EnumProperty                                              ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	CMember(EBlendListTransitionType)                  __EnumProperty                                              ___ OFFSET(get<T>, {0x21, 1, 0, 0})
	CMember(TArray<float>)                             __ArrayProperty                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0x58, 4, 0, 0})
	DMember(int32_t)                                   __IntProperty                                               ___ OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x64, 4, 0, 0})
	SMember(FInputScaleBiasClampConstants)             __StructProperty                                            ___ OFFSET(get<T>, {0x68, 44, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x94, 4, 0, 0})
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x98, 1, 0, 0})
	CMember(EAnimSyncMethod)                           __EnumProperty                                              ___ OFFSET(get<T>, {0x99, 1, 0, 0})
	CMember(TEnumAsByte<EAnimGroupRole>)               __ByteProperty                                              ___ OFFSET(get<T>, {0x9A, 1, 0, 0})
	SMember(FAnimNodeFunctionRef)                      __StructProperty                                            ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xB8, 4, 0, 0})
	SMember(FName)                                     __NameProperty                                              ___ OFFSET(get<T>, {0xBC, 4, 0, 0})
	SMember(FAnimSubsystem_PropertyAccess)             AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0xC0, 128, 0, 0})
	SMember(FAnimSubsystem_Base)                       AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x140, 24, 0, 0})
};

/// Struct /Game/Athena/AI/MANG/AnimSet/MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C.AnimBlueprintGeneratedMutableData
/// Size: 0x001B (0x000001 - 0x00001C)
class FAnimBlueprintGeneratedMutableData : public FAnimBlueprintMutableData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      __BoolProperty                                              ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     __FloatProperty                                             ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Class /Game/Athena/HUD/Bacchus/CustomizableHUD/MobileHUDPresets.MobileHUDPresets_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UMobileHUDPresets_C : public UFortMobileHUDPresetContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Athena/HUD/Bacchus/CustomizableHUD/MobileHUDPresetsInDevelopment.MobileHUDPresetsInDevelopment_C
/// Size: 0x0000 (0x000040 - 0x000040)
class UMobileHUDPresetsInDevelopment_C : public UFortMobileHUDPresetContainer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Game/Athena/GameplayCueNotifies/GCNL_Creative_Powerup_HealthPositive.GCNL_Creative_Powerup_HealthPositive_C
/// Size: 0x0000 (0x000990 - 0x000990)
class AGCNL_Creative_Powerup_HealthPositive_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2448;

public:
};

/// Class /Game/Athena/GameplayCueNotifies/GCNL_Creative_Powerup_HealthNegative.GCNL_Creative_Powerup_HealthNegative_C
/// Size: 0x0000 (0x000990 - 0x000990)
class AGCNL_Creative_Powerup_HealthNegative_C : public AFortGameplayCueNotify_Loop
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2448;

public:
};

/// Class /Game/Athena/Effects/Blueprints/Ash/GE_SnowFlakes_PlayerEffect.GE_SnowFlakes_PlayerEffect_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_SnowFlakes_PlayerEffect_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/Abilities/NPC/Parents/GE_NPC_GoalSelection_Tamed.GE_NPC_GoalSelection_Tamed_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_GoalSelection_Tamed_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/MANG/Abilities/GE_NPC_Status_Stressed_Cooldown.GE_NPC_Status_Stressed_Cooldown_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Status_Stressed_Cooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/NPCs/Base/BPI_NonParticipant.BPI_NonParticipant_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBPI_NonParticipant_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Athena/MappedEffects/GE_Athena_Revive.GE_Athena_Revive_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_Revive_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/NavFilters/NavFilter_NPC_AvoidAllWater.NavFilter_NPC_AvoidAllWater_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_NPC_AvoidAllWater_C : public URecastFilter_UseDefaultArea
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_DBNO.AI_skill_phoebe_bot_DBNO_C
/// Size: 0x0000 (0x000170 - 0x000170)
class UAI_skill_phoebe_bot_DBNO_C : public UFortAthenaAIBotDBNOSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_unstuck.AI_skill_phoebe_bot_unstuck_C
/// Size: 0x0000 (0x000468 - 0x000468)
class UAI_skill_phoebe_bot_unstuck_C : public UFortAthenaAIBotUnstuckSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_building.AI_skill_phoebe_bot_building_C
/// Size: 0x0000 (0x000220 - 0x000220)
class UAI_skill_phoebe_bot_building_C : public UFortAthenaAIBotBuildingSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_movement.AI_skill_phoebe_bot_movement_C
/// Size: 0x0000 (0x0013F8 - 0x0013F8)
class UAI_skill_phoebe_bot_movement_C : public UFortAthenaAIBotMovementSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5112;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_revive.AI_skill_phoebe_bot_revive_C
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UAI_skill_phoebe_bot_revive_C : public UFortAthenaAIBotReviveSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_harvest.AI_skill_phoebe_bot_harvest_C
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class UAI_skill_phoebe_bot_harvest_C : public UFortAthenaAIBotHarvestSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_healing.AI_skill_phoebe_bot_healing_C
/// Size: 0x0000 (0x000070 - 0x000070)
class UAI_skill_phoebe_bot_healing_C : public UFortAthenaAIBotHealingSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_attacking.AI_skill_phoebe_bot_attacking_C
/// Size: 0x0000 (0x000550 - 0x000550)
class UAI_skill_phoebe_bot_attacking_C : public UFortAthenaAIBotAttackingSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_warmup.AI_skill_phoebe_bot_warmup_C
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UAI_skill_phoebe_bot_warmup_C : public UFortAthenaAIBotWarmupSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_emote.AI_skill_phoebe_bot_emote_C
/// Size: 0x0000 (0x000148 - 0x000148)
class UAI_skill_phoebe_bot_emote_C : public UFortAthenaAIBotEmoteSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_evasiveManeuvers.AI_skill_phoebe_bot_evasiveManeuvers_C
/// Size: 0x0000 (0x0006C8 - 0x0006C8)
class UAI_skill_phoebe_bot_evasiveManeuvers_C : public UFortAthenaAIBotEvasiveManeuversSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1736;

public:
};

/// Class /Game/Athena/PawnHighlight_Interface.PawnHighlight_Interface_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UPawnHighlight_Interface_C : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_looting.AI_skill_phoebe_bot_looting_C
/// Size: 0x0000 (0x0002A0 - 0x0002A0)
class UAI_skill_phoebe_bot_looting_C : public UFortAthenaAIBotLootingSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_perception.AI_skill_phoebe_bot_perception_C
/// Size: 0x0000 (0x000CE0 - 0x000CE0)
class UAI_skill_phoebe_bot_perception_C : public UFortAthenaAIBotPerceptionSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3296;

public:
};

/// Class /Game/Athena/MappedEffects/GE_Athena_Revive_Self.GE_Athena_Revive_Self_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_Revive_Self_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Quests/QuestAbilities/QuestGEs/GE_Quest_Converted_HireNPC.GE_Quest_Converted_HireNPC_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Quest_Converted_HireNPC_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/NPCs/Base/GameplayEffects/GE_Patrolling.GE_Patrolling_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Patrolling_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/Abilities/NPC/Parents/GE_NPC_Parent_Alert_Cooldown.GE_NPC_Parent_Alert_Cooldown_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Parent_Alert_Cooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/Abilities/NPC/Parents/GE_InSafeZone.GE_InSafeZone_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_InSafeZone_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Components/MultiInteractActorComponent.MultiInteractActorComponent_C
/// Size: 0x0021 (0x000158 - 0x000179)
class UMultiInteractActorComponent_C : public UFortActorComponent_MultiInteract
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 377;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x158, 8, 0, 0})
	SMember(FGameplayTag)                              RemoveInteractPlayerTag                                     ___ OFFSET(get<T>, {0x160, 4, 0, 0})
	SMember(FGameplayTag)                              AddInteractPlayerTag                                        ___ OFFSET(get<T>, {0x164, 4, 0, 0})
	SMember(FGameplayTag)                              LoopingMultiInteractTag                                     ___ OFFSET(get<T>, {0x168, 4, 0, 0})
	DMember(double)                                    RequiredDuration                                            ___ OFFSET(get<double>, {0x170, 8, 0, 0})
	DMember(bool)                                      GCNLApplied                                                 ___ OFFSET(get<bool>, {0x178, 1, 0, 0})
};

/// Class /Game/Athena/MappedEffects/Lockout/GA_Athena_Lockout.GA_Athena_Lockout_C
/// Size: 0x0018 (0x000B28 - 0x000B40)
class UGA_Athena_Lockout_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2880;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FTimerHandle)                              Timer_LockoutFailsafe                                       ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	DMember(double)                                    LockoutFailsafeTime                                         ___ OFFSET(get<double>, {0xB38, 8, 0, 0})
};

/// Class /Game/Athena/MappedEffects/Lockout/GE_Athena_Lockout.GE_Athena_Lockout_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_Lockout_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Irwin/Characters/Parents/Abilities/TargetSlots/Melee/GE_NPC_Behavior_TargetSlots_Melee_SlotInUse.GE_NPC_Behavior_TargetSlots_Melee_SlotInUse_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Behavior_TargetSlots_Melee_SlotInUse_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Irwin/Characters/Parents/Abilities/TargetSlots/Ranged/GE_NPC_Behavior_TargetSlots_Ranged_Max.GE_NPC_Behavior_TargetSlots_Ranged_Max_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Behavior_TargetSlots_Ranged_Max_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Effects/Blueprints/ColdBreath/GE_ColdBreath_V2.GE_ColdBreath_V2_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_ColdBreath_V2_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Irwin/Characters/Parents/Abilities/TargetSlots/Melee/GE_NPC_Behavior_TargetSlots_Melee_AbandonSlot.GE_NPC_Behavior_TargetSlots_Melee_AbandonSlot_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Behavior_TargetSlots_Melee_AbandonSlot_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Quests/QuestAbilities/QuestGEs/GE_Quest_Converted_Irwin.GE_Quest_Converted_Irwin_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Quest_Converted_Irwin_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Irwin/Characters/Parents/Abilities/TargetSlots/Melee/GE_NPC_Behavior_TargetSlots_Melee_OverrideSlot.GE_NPC_Behavior_TargetSlots_Melee_OverrideSlot_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Behavior_TargetSlots_Melee_OverrideSlot_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Irwin/Characters/Parents/Abilities/TargetSlots/Melee/GE_NPC_Behavior_TargetSlots_Melee_SlotOwner.GE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Behavior_TargetSlots_Melee_SlotOwner_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_playstyle.AI_skill_phoebe_bot_playstyle_C
/// Size: 0x0000 (0x000108 - 0x000108)
class UAI_skill_phoebe_bot_playstyle_C : public UFortAthenaAIBotPlayStyleSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
};

/// Class /Game/Athena/Sounds/Ambient/BP_AmbientAudioController.BP_AmbientAudioController_C
/// Size: 0x00C0 (0x0000C8 - 0x000188)
class UBP_AmbientAudioController_C : public UFortAmbientAudioController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 392;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xC8, 8, 0, 0})
	DMember(double)                                    CheckFrequency                                              ___ OFFSET(get<double>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bInSnowCurrent                                              ___ OFFSET(get<bool>, {0xD8, 1, 0, 0})
	CMember(UAmbientAudioDataAsset*)                   WinterAudioBank                                             ___ OFFSET(get<T>, {0xE0, 8, 0, 0})
	DMember(bool)                                      bSnowEnabled                                                ___ OFFSET(get<bool>, {0xE8, 1, 0, 0})
	CMember(UAmbientAudioDataAsset*)                   StormAudioBank                                              ___ OFFSET(get<T>, {0xF0, 8, 0, 0})
	SMember(FGameplayTag)                              AmbientAudioInsideTag                                       ___ OFFSET(get<T>, {0xF8, 4, 0, 0})
	CMember(UAmbientAudioDataAsset*)                   CurieAudioBank                                              ___ OFFSET(get<T>, {0x100, 8, 0, 0})
	SMember(FVector)                                   SnowOriginWorldLoc                                          ___ OFFSET(get<T>, {0x108, 24, 0, 0})
	DMember(double)                                    SnowRadius                                                  ___ OFFSET(get<double>, {0x120, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      SnowTagsToApply                                             ___ OFFSET(get<T>, {0x128, 16, 0, 0})
	SMember(FName)                                     SnowEntryName                                               ___ OFFSET(get<T>, {0x138, 4, 0, 0})
	CMember(AActor*)                                   CurrViewTarget                                              ___ OFFSET(get<T>, {0x140, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      GenericTagsToApply                                          ___ OFFSET(get<T>, {0x148, 16, 0, 0})
	DMember(bool)                                      bTagApplicationEnabled                                      ___ OFFSET(get<bool>, {0x158, 1, 0, 0})
	DMember(char)                                      Current_State                                               ___ OFFSET(get<char>, {0x159, 1, 0, 0})
	CMember(UFortGameStateComponent_SurfaceOverride*)  SnowCoverageComponent                                       ___ OFFSET(get<T>, {0x160, 8, 0, 0})
	CMember(TArray<FString>)                           SupportedTagLevels                                          ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(double)                                    SpecialSurfacePadding                                       ___ OFFSET(get<double>, {0x178, 8, 0, 0})
	CMember(USoundMix*)                                AmbientAudioSoundMix                                        ___ OFFSET(get<T>, {0x180, 8, 0, 0})
};

/// Class /Game/Athena/AI/NavFilters/NavFilter_NPC_AnyTraversable.NavFilter_NPC_AnyTraversable_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_NPC_AnyTraversable_C : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Athena/AI/GoalSelection/GoalComponents/GoalComponent_Default.GoalComponent_Default_C
/// Size: 0x0000 (0x000158 - 0x000158)
class UGoalComponent_Default_C : public UFortAIGoalComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 344;

public:
};

/// Class /Game/Athena/AI/Abilities/NPC/Parents/GE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s.GE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_BehaviorPhaseIntroBehaviorCooldown_60s_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/Abilities/NPC/Parents/GE_NPC_Parent_Convert_Damage.GE_NPC_Parent_Convert_Damage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Parent_Convert_Damage_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/Abilities/NPC/Parents/RecentlyDamaged/GE_NPC_Gameplay_Status_RecentlyDamaged_10sec.GE_NPC_Gameplay_Status_RecentlyDamaged_10sec_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Gameplay_Status_RecentlyDamaged_10sec_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Prototype/Blueprints/White/GE_Lowgrav.GE_Lowgrav_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Lowgrav_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/HUD/Actors/ConvertedMarkerInfo.ConvertedMarkerInfo_C
/// Size: 0x00F8 (0x0002D0 - 0x0003C8)
class UConvertedMarkerInfo_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 968;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UImage*)                                   Image_Avatar                                                ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UImage*)                                   Image_Command                                               ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonVisibilitySwitcher*)                ImageSwitcher                                               ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(UImage*)                                   SquadMarker                                                 ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	SMember(FTimerHandle)                              DBNOPulseTimer                                              ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     RelevantPlaylistTags                                        ___ OFFSET(get<T>, {0x300, 32, 0, 0})
	DMember(bool)                                      bIsTalking                                                  ___ OFFSET(get<bool>, {0x320, 1, 0, 0})
	DMember(bool)                                      bShowBackgroundOverridden                                   ___ OFFSET(get<bool>, {0x321, 1, 0, 0})
	DMember(bool)                                      bEnemyVersion                                               ___ OFFSET(get<bool>, {0x322, 1, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               Icon_Move                                                   ___ OFFSET(get<T>, {0x328, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               Icon_Hold                                                   ___ OFFSET(get<T>, {0x348, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               Icon_BackToMe                                               ___ OFFSET(get<T>, {0x368, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               Icon_Revive                                                 ___ OFFSET(get<T>, {0x388, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               Icon_Attack                                                 ___ OFFSET(get<T>, {0x3A8, 32, 0, 0})
};

/// Class /Game/Athena/HUD/SimpleMaterialProgressBar.SimpleMaterialProgressBar_C
/// Size: 0x0000 (0x0003A0 - 0x0003A0)
class USimpleMaterialProgressBar_C : public UFortSimpleMaterialProgressBar
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 928;

public:
};

/// Class /Game/Athena/HUD/Actors/NPCStatusWidgetBar.NPCStatusWidgetBar_C
/// Size: 0x00F1 (0x0002A8 - 0x000399)
class UNPCStatusWidgetBar_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 921;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(USizeBox*)                                 BarSizeBox                                                  ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UImage*)                                   Image_BarBG                                                 ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UImage*)                                   Image_CastShadow                                            ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(USimpleMaterialProgressBar_C*)             ProgressBarDelta                                            ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(USimpleMaterialProgressBar_C*)             ProgressBarFill                                             ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	SMember(FLinearColor)                              FillColor1                                                  ___ OFFSET(get<T>, {0x2D8, 16, 0, 0})
	SMember(FLinearColor)                              FillColor2                                                  ___ OFFSET(get<T>, {0x2E8, 16, 0, 0})
	SMember(FLinearColor)                              Delta1                                                      ___ OFFSET(get<T>, {0x2F8, 16, 0, 0})
	SMember(FLinearColor)                              Delta2                                                      ___ OFFSET(get<T>, {0x308, 16, 0, 0})
	SMember(FLinearColor)                              FillColor1_75Percent                                        ___ OFFSET(get<T>, {0x318, 16, 0, 0})
	SMember(FLinearColor)                              FillColor2_75Percent                                        ___ OFFSET(get<T>, {0x328, 16, 0, 0})
	SMember(FLinearColor)                              FillColor1_50Percent                                        ___ OFFSET(get<T>, {0x338, 16, 0, 0})
	SMember(FLinearColor)                              FillColor2_50Percent                                        ___ OFFSET(get<T>, {0x348, 16, 0, 0})
	SMember(FLinearColor)                              FillColor1_25Percent                                        ___ OFFSET(get<T>, {0x358, 16, 0, 0})
	SMember(FLinearColor)                              FillColor2_25Percent                                        ___ OFFSET(get<T>, {0x368, 16, 0, 0})
	SMember(FLinearColor)                              FillColor1_100Percent                                       ___ OFFSET(get<T>, {0x378, 16, 0, 0})
	SMember(FLinearColor)                              FillColor2_100Percent                                       ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	DMember(bool)                                      DifferentProgressColors                                     ___ OFFSET(get<bool>, {0x398, 1, 0, 0})
};

/// Class /Game/Athena/HUD/Actors/NPCStatusWidget_AIBoss.NPCStatusWidget_AIBoss_C
/// Size: 0x0084 (0x0002A8 - 0x00032C)
class UNPCStatusWidget_AIBoss_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 812;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UImage*)                                   Background                                                  ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UNPCStatusWidgetBar_C*)                    Bar_Health                                                  ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UNPCStatusWidgetBar_C*)                    Bar_Shield                                                  ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(USizeBox*)                                 SizeBox_Health                                              ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	SMember(FTimerHandle)                              VisibiltyTimer                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  VisibilityChanged                                           ___ OFFSET(get<T>, {0x2D8, 16, 0, 0})
	DMember(double)                                    StatusWidgetVisibleDuration                                 ___ OFFSET(get<double>, {0x2E8, 8, 0, 0})
	DMember(double)                                    CurrentHealthPercent                                        ___ OFFSET(get<double>, {0x2F0, 8, 0, 0})
	DMember(double)                                    CurrentShieldPercent                                        ___ OFFSET(get<double>, {0x2F8, 8, 0, 0})
	DMember(double)                                    Max_Health                                                  ___ OFFSET(get<double>, {0x300, 8, 0, 0})
	DMember(double)                                    PipAmount                                                   ___ OFFSET(get<double>, {0x308, 8, 0, 0})
	DMember(double)                                    MinimumPipAmount                                            ___ OFFSET(get<double>, {0x310, 8, 0, 0})
	DMember(int32_t)                                   NumHealthPips                                               ___ OFFSET(get<int32_t>, {0x318, 4, 0, 0})
	DMember(double)                                    MaxShield                                                   ___ OFFSET(get<double>, {0x320, 8, 0, 0})
	DMember(int32_t)                                   NumShieldPips                                               ___ OFFSET(get<int32_t>, {0x328, 4, 0, 0})
};

/// Class /Game/Athena/HUD/Actors/NPCStatusWidget.NPCStatusWidget_C
/// Size: 0x0068 (0x000388 - 0x0003F0)
class UNPCStatusWidget_C : public UNPCStatusWidgetBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x388, 8, 0, 0})
	CMember(UNPCStatusWidgetBar_C*)                    Bar_Health                                                  ___ OFFSET(get<T>, {0x390, 8, 0, 0})
	CMember(UNPCStatusWidgetBar_C*)                    Bar_Shield                                                  ___ OFFSET(get<T>, {0x398, 8, 0, 0})
	CMember(UOverlay*)                                 Overlay_BarsPrefix                                          ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(UVerticalBox*)                             VerticalBox_BarExtensions                                   ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
	SMember(FTimerHandle)                              VisibiltyTimer                                              ___ OFFSET(get<T>, {0x3B0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  VisibilityChanged                                           ___ OFFSET(get<T>, {0x3B8, 16, 0, 0})
	DMember(double)                                    StatusWidgetVisibleDuration                                 ___ OFFSET(get<double>, {0x3C8, 8, 0, 0})
	DMember(double)                                    CurrentHealthPercent                                        ___ OFFSET(get<double>, {0x3D0, 8, 0, 0})
	DMember(double)                                    CurrentShieldPercent                                        ___ OFFSET(get<double>, {0x3D8, 8, 0, 0})
	DMember(bool)                                      KeepVisibilityOn                                            ___ OFFSET(get<bool>, {0x3E0, 1, 0, 0})
	CMember(AFortPawn*)                                FortPawn                                                    ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
};

/// Class /Game/Athena/Irwin/Characters/Parents/Abilities/TargetSlots/Melee/GE_NPC_Behavior_TargetSlots_Melee_Max.GE_NPC_Behavior_TargetSlots_Melee_Max_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Behavior_TargetSlots_Melee_Max_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Parents/FallImmunity/GE_Athena_TillLandFallDamageImmunity.GE_Athena_TillLandFallDamageImmunity_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_TillLandFallDamageImmunity_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_Parent.GA_Athena_TillLandFallDamageImmunity_Parent_C
/// Size: 0x0070 (0x000B28 - 0x000B98)
class UGA_Athena_TillLandFallDamageImmunity_Parent_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UClass*)                                   GE_FallDamageImmunity                                       ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GEH_FallDamageImmunity                                      ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	DMember(double)                                    Delay_PostLand                                              ___ OFFSET(get<double>, {0xB40, 8, 0, 0})
	SMember(FGameplayTag)                              Tag_SurfaceSwimming                                         ___ OFFSET(get<T>, {0xB48, 4, 0, 0})
	SMember(FGameplayTag)                              Tag_Sliding                                                 ___ OFFSET(get<T>, {0xB4C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_IgnoreApplication                                        ___ OFFSET(get<T>, {0xB50, 32, 0, 0})
	SMember(FGameplayTag)                              Tag_InVehicle                                               ___ OFFSET(get<T>, {0xB70, 4, 0, 0})
	DMember(double)                                    Delay_WaterSwimBind                                         ___ OFFSET(get<double>, {0xB78, 8, 0, 0})
	DMember(bool)                                      ApplyInAirOnly                                              ___ OFFSET(get<bool>, {0xB80, 1, 0, 0})
	SMember(FGameplayTag)                              TagIsRiding                                                 ___ OFFSET(get<T>, {0xB84, 4, 0, 0})
	CMember(TArray<UAbilityTask_WaitGameplayTagAdded*>) WaitTagAsyncTasks                                          ___ OFFSET(get<T>, {0xB88, 16, 0, 0})
};

/// Class /Game/Athena/Environments/Blueprints/DudeBro/GE_Athena_FallDmgImmune_FX.GE_Athena_FallDmgImmune_FX_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_FallDmgImmune_FX_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AthenaFunctionLibrary.AthenaFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UAthenaFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Athena/DrivableVehicles/GE_VehicleDamage_PhysicsObject_Global.GE_VehicleDamage_PhysicsObject_Global_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_VehicleDamage_PhysicsObject_Global_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/SafeZone/GE_UnderwaterDamage.GE_UnderwaterDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_UnderwaterDamage_C : public UGET_PeriodicEnergyDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/SafeZone/GE_OutsideSafeZoneDamage.GE_OutsideSafeZoneDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_OutsideSafeZoneDamage_C : public UGET_PeriodicEnergyDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/BuildingActors/FortVolumeManager_BP.FortVolumeManager_BP_C
/// Size: 0x0000 (0x000610 - 0x000610)
class AFortVolumeManager_BP_C : public AFortVolumeManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1552;

public:
};

/// Class /Game/Athena/AI/Controllers/NPC_Wildlife_Controller_Parent.NPC_Wildlife_Controller_Parent_C
/// Size: 0x0010 (0x0005F0 - 0x000600)
class ANPC_Wildlife_Controller_Parent_C : public AAthenaAIController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	CMember(UAthenaMarkerComponent*)                   AthenaMarker                                                ___ OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(UFortAthenaNpcPatrollingComponent*)        FortAthenaNpcPatrolling                                     ___ OFFSET(get<T>, {0x5F8, 8, 0, 0})
};

/// Class /Game/Athena/Irwin/Characters/Parents/Abilities/TargetSlots/Ranged/GE_NPC_Behavior_TargetSlots_Ranged_AbandonSlot.GE_NPC_Behavior_TargetSlots_Ranged_AbandonSlot_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Behavior_TargetSlots_Ranged_AbandonSlot_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Irwin/Characters/Parents/Abilities/TargetSlots/Ranged/GE_NPC_Behavior_TargetSlots_Ranged_SlotOwner.GE_NPC_Behavior_TargetSlots_Ranged_SlotOwner_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Behavior_TargetSlots_Ranged_SlotOwner_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Irwin/Characters/Parents/Abilities/TargetSlots/Ranged/GE_NPC_Behavior_TargetSlots_Ranged_OverrideSlot.GE_NPC_Behavior_TargetSlots_Ranged_OverrideSlot_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Behavior_TargetSlots_Ranged_OverrideSlot_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/GameplayCueNotifies/GCN_Athena_PlayerLevelUp.GCN_Athena_PlayerLevelUp_C
/// Size: 0x0000 (0x000218 - 0x000218)
class UGCN_Athena_PlayerLevelUp_C : public UFortGameplayCueNotify_Burst
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
};

/// Class /Game/Athena/UI/Customization/AthenaVariantTileCustomizationSelector.AthenaVariantTileCustomizationSelector_C
/// Size: 0x0000 (0x0003D0 - 0x0003D0)
class UAthenaVariantTileCustomizationSelector_C : public UFortVariantSelector
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
};

/// Class /Game/Athena/UI/Customization/AthenaRichColorVariantPicker.AthenaRichColorVariantPicker_C
/// Size: 0x0000 (0x0003F0 - 0x0003F0)
class UAthenaRichColorVariantPicker_C : public UFortVariantRichColorPicker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
};

/// Class /Game/Athena/UI/Customization/AthenaItemTextureVariantPicker.AthenaItemTextureVariantPicker_C
/// Size: 0x0018 (0x0004B0 - 0x0004C8)
class UAthenaItemTextureVariantPicker_C : public UFortVariantItemTexturePicker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1224;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     TextBlock_AllItemsArchived                                  ___ OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          WidgetSwitcher_AvailableItems                               ___ OFFSET(get<T>, {0x4C0, 8, 0, 0})
};

/// Class /Game/Athena/Prototype/Blueprints/White/GE_AntiGrav.GE_AntiGrav_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_AntiGrav_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_inventory.AI_skill_phoebe_bot_inventory_C
/// Size: 0x0000 (0x0002B0 - 0x0002B0)
class UAI_skill_phoebe_bot_inventory_C : public UFortAthenaAIBotInventorySkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Class /Game/Athena/AI/Abilities/NPC/GE_NPC_Challenged.GE_NPC_Challenged_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Challenged_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/UI/Customization/AthenaVariantTileButton.AthenaVariantTileButton_C
/// Size: 0x0018 (0x001560 - 0x001578)
class UAthenaVariantTileButton_C : public UFortVariantTileButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5496;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1560, 8, 0, 0})
	CMember(UWidgetAnimation*)                         WarningPulse                                                ___ OFFSET(get<T>, {0x1568, 8, 0, 0})
	CMember(UImage*)                                   Image_Conflict                                              ___ OFFSET(get<T>, {0x1570, 8, 0, 0})
};

/// Class /Game/Athena/UI/Customization/AthenaVariantNumericalCustomizationSelector.AthenaVariantNumericalCustomizationSelector_C
/// Size: 0x0000 (0x0003F0 - 0x0003F0)
class UAthenaVariantNumericalCustomizationSelector_C : public UFortVariantNumericalPicker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
};

/// Class /Game/Athena/Irwin/Characters/Parents/Abilities/TargetSlots/Ranged/GE_NPC_Behavior_TargetSlots_Ranged_SlotInUse.GE_NPC_Behavior_TargetSlots_Ranged_SlotInUse_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Behavior_TargetSlots_Ranged_SlotInUse_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_rangeAttack.AI_skill_phoebe_bot_rangeAttack_C
/// Size: 0x0000 (0x000700 - 0x000700)
class UAI_skill_phoebe_bot_rangeAttack_C : public UFortAthenaAIBotRangeAttackSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1792;

public:
};

/// Class /Game/Athena/AI/MANG/AnimSet/MANG_PatrolLayerAnimBP.MANG_PatrolLayerAnimBP_C
/// Size: 0x0BD0 (0x0004D0 - 0x0010A0)
class UMANG_PatrolLayerAnimBP_C : public UFortPatrolAnimLayer
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4256;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x4D0, 8, 0, 0})
	SMember(FAnimBlueprintGeneratedMutableData)        __AnimBlueprintMutables                                     ___ OFFSET(get<T>, {0x4D8, 28, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_PropertyAccess                       ___ OFFSET(get<T>, {0x4F8, 8, 0, 0})
	SMember(FAnimSubsystemInstance)                    AnimBlueprintExtension_Base                                 ___ OFFSET(get<T>, {0x500, 8, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x508, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x528, 176, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x5D8, 32, 0, 0})
	SMember(FAnimNode_LinkedInputPose)                 AnimGraphNode_LinkedInputPose                               ___ OFFSET(get<T>, {0x5F8, 176, 0, 0})
	SMember(FAnimNode_BlendListByBool)                 AnimGraphNode_BlendListByBool                               ___ OFFSET(get<T>, {0x6A8, 72, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x6F0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x718, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x740, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x768, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x790, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x7B8, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x7E0, 40, 0, 0})
	SMember(FAnimNode_TransitionResult)                AnimGraphNode_TransitionResult                              ___ OFFSET(get<T>, {0x808, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0x830, 112, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0x8A0, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x990, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0x9B8, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0x9D8, 40, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0xA00, 32, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0xA20, 112, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0xA90, 200, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend                              ___ OFFSET(get<T>, {0xB58, 240, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xC48, 40, 0, 0})
	SMember(FAnimNode_BlendSpacePlayer)                AnimGraphNode_BlendSpacePlayer                              ___ OFFSET(get<T>, {0xC70, 112, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0xCE0, 32, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xD00, 40, 0, 0})
	SMember(FAnimNode_ApplyAdditive)                   AnimGraphNode_ApplyAdditive                                 ___ OFFSET(get<T>, {0xD28, 200, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xDF0, 72, 0, 0})
	SMember(FAnimNode_StateResult)                     AnimGraphNode_StateResult                                   ___ OFFSET(get<T>, {0xE38, 32, 0, 0})
	SMember(FAnimNode_StateMachine)                    AnimGraphNode_StateMachine                                  ___ OFFSET(get<T>, {0xE58, 200, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0xF20, 120, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose                                 ___ OFFSET(get<T>, {0xF98, 40, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer                                ___ OFFSET(get<T>, {0xFC0, 72, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose                                ___ OFFSET(get<T>, {0x1008, 120, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root                                          ___ OFFSET(get<T>, {0x1080, 32, 0, 0})
};

/// Class /Game/Athena/Sounds/Weapons/BulletWhips/BulletWhipTrackerComponent_Default.BulletWhipTrackerComponent_Default_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UBulletWhipTrackerComponent_Default_C : public UBulletWhipTrackerComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Game/Athena/AI/MANG/Abilities/GE_NPC_Status_Stressed_Infinite.GE_NPC_Status_Stressed_Infinite_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Status_Stressed_Infinite_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/PlayerPawn_Athena_Generic_Parent.PlayerPawn_Athena_Generic_Parent_C
/// Size: 0x00F0 (0x005A80 - 0x005B70)
class APlayerPawn_Athena_Generic_Parent_C : public AFortPlayerPawnAthena
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 23408;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x5A80, 8, 0, 0})
	CMember(UMotionWarpingComponent*)                  MotionWarping                                               ___ OFFSET(get<T>, {0x5A88, 8, 0, 0})
	CMember(UMultiInteractActorComponent_C*)           MultiInteractActorComponent                                 ___ OFFSET(get<T>, {0x5A90, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               Default_Weapon_Materials                                    ___ OFFSET(get<T>, {0x5A98, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnBackpackMaterials                                       ___ OFFSET(get<T>, {0x5AA8, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnHatMaterials                                            ___ OFFSET(get<T>, {0x5AB8, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnHeadMaterials                                           ___ OFFSET(get<T>, {0x5AC8, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnBodyMaterials                                           ___ OFFSET(get<T>, {0x5AD8, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnCharmMaterials                                          ___ OFFSET(get<T>, {0x5AE8, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnFaceMaterials                                           ___ OFFSET(get<T>, {0x5AF8, 16, 0, 0})
	CMember(UPostProcessComponent*)                    PlayerPostProcessFX                                         ___ OFFSET(get<T>, {0x5B08, 8, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           SkeletalMeshes                                              ___ OFFSET(get<T>, {0x5B10, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnMaterials_ALL                                           ___ OFFSET(get<T>, {0x5B20, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ShootingTargetReactToJump                                   ___ OFFSET(get<T>, {0x5B30, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPlayHit                                                   ___ OFFSET(get<T>, {0x5B40, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEnteredVehicleDispatcher                                  ___ OFFSET(get<T>, {0x5B50, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnExitedVehicleDispatcher                                   ___ OFFSET(get<T>, {0x5B60, 16, 0, 0})
};

/// Class /Game/Athena/PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C
/// Size: 0x02D8 (0x005B70 - 0x005E48)
class APlayerPawn_Athena_Generic_C : public APlayerPawn_Athena_Generic_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 24136;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x5B70, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_WaterInteraction_FX                                  ___ OFFSET(get<T>, {0x5B78, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 AnimTrailPS                                                 ___ OFFSET(get<T>, {0x5B80, 8, 0, 0})
	DMember(bool)                                      IsInWater                                                   ___ OFFSET(get<bool>, {0x5B88, 1, 0, 0})
	SMember(FRotator)                                  RunWalkParticleRotation                                     ___ OFFSET(get<T>, {0x5B90, 24, 0, 0})
	DMember(int32_t)                                   WaterCounter                                                ___ OFFSET(get<int32_t>, {0x5BA8, 4, 0, 0})
	DMember(double)                                    Tick_Delta_Seconds                                          ___ OFFSET(get<double>, {0x5BB0, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_Impact                                         ___ OFFSET(get<T>, {0x5BB8, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_Destroyed                                      ___ OFFSET(get<T>, {0x5BC0, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_Destroyed_1P                                   ___ OFFSET(get<T>, {0x5BC8, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_FullyCharged                                   ___ OFFSET(get<T>, {0x5BD0, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_StartRecharge                                  ___ OFFSET(get<T>, {0x5BD8, 8, 0, 0})
	DMember(bool)                                      BodyValid                                                   ___ OFFSET(get<bool>, {0x5BE0, 1, 0, 0})
	DMember(bool)                                      BackpackValid                                               ___ OFFSET(get<bool>, {0x5BE1, 1, 0, 0})
	DMember(bool)                                      HatValid                                                    ___ OFFSET(get<bool>, {0x5BE2, 1, 0, 0})
	DMember(bool)                                      FaceValid                                                   ___ OFFSET(get<bool>, {0x5BE3, 1, 0, 0})
	DMember(bool)                                      CharmValid                                                  ___ OFFSET(get<bool>, {0x5BE4, 1, 0, 0})
	DMember(bool)                                      HeadValid                                                   ___ OFFSET(get<bool>, {0x5BE5, 1, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         TempArray                                                   ___ OFFSET(get<T>, {0x5BE8, 16, 0, 0})
	CMember(USceneComponent*)                          Sound_Player_Hit                                            ___ OFFSET(get<T>, {0x5BF8, 8, 0, 0})
	CMember(UClass*)                                   SpeechBubbleWidgetClass                                     ___ OFFSET(get<T>, {0x5C00, 8, 0, 0})
	SMember(FText)                                     LastSpeechText                                              ___ OFFSET(get<T>, {0x5C08, 24, 0, 0})
	DMember(bool)                                      UseAnimTrailsNotifies                                       ___ OFFSET(get<bool>, {0x5C20, 1, 0, 0})
	DMember(double)                                    Time_when_you_ll_be_able_to_splash_again                    ___ OFFSET(get<double>, {0x5C28, 8, 0, 0})
	CMember(AActor*)                                   CurrentWaterMeshActor                                       ___ OFFSET(get<T>, {0x5C30, 8, 0, 0})
	SMember(FHitResult)                                WaterTraceHitLocation                                       ___ OFFSET(get<T>, {0x5C38, 224, 0, 0})
	SMember(FVector)                                   StableVelocityVector                                        ___ OFFSET(get<T>, {0x5D18, 24, 0, 0})
	CMember(UParticleSystem*)                          PlayerRunTemplate_Ground                                    ___ OFFSET(get<T>, {0x5D30, 8, 0, 0})
	CMember(UParticleSystem*)                          PlayerWalkTemplate_Ground                                   ___ OFFSET(get<T>, {0x5D38, 8, 0, 0})
	CMember(UParticleSystem*)                          PlayerRunTemplate_Water                                     ___ OFFSET(get<T>, {0x5D40, 8, 0, 0})
	CMember(UParticleSystem*)                          PlayerWalkTemplate_Water                                    ___ OFFSET(get<T>, {0x5D48, 8, 0, 0})
	CMember(USkeletalMesh*)                            Pawn_Charm_Skeletal_Mesh                                    ___ OFFSET(get<T>, {0x5D50, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 AnimTrailsPS_Ref                                            ___ OFFSET(get<T>, {0x5D58, 8, 0, 0})
	CMember(UMaterialInterface*)                       WeaponMaterialOverride                                      ___ OFFSET(get<T>, {0x5D60, 8, 0, 0})
	DMember(bool)                                      TickWaterLevel                                              ___ OFFSET(get<bool>, {0x5D68, 1, 0, 0})
	CMember(UTextureRenderTarget2D*)                   WetnessDepthTexture                                         ___ OFFSET(get<T>, {0x5D70, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 WaterLevelMID                                               ___ OFFSET(get<T>, {0x5D78, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 WaterDecayMID                                               ___ OFFSET(get<T>, {0x5D80, 8, 0, 0})
	DMember(bool)                                      Was_RTT_Enabled_Var_Set                                     ___ OFFSET(get<bool>, {0x5D88, 1, 0, 0})
	DMember(bool)                                      Is_RTT_Enabled                                              ___ OFFSET(get<bool>, {0x5D89, 1, 0, 0})
	DMember(double)                                    StartingMinCapsuleShadowVis                                 ___ OFFSET(get<double>, {0x5D90, 8, 0, 0})
	DMember(double)                                    InstigatorCheckDistanceSqrd                                 ___ OFFSET(get<double>, {0x5D98, 8, 0, 0})
	DMember(double)                                    SlideDustActivateSpeed                                      ___ OFFSET(get<double>, {0x5DA0, 8, 0, 0})
	DMember(bool)                                      CanSpawnSlideKickupFX_                                      ___ OFFSET(get<bool>, {0x5DA8, 1, 0, 0})
	CMember(UParticleSystem*)                          Effect_Player_ShieldActivate                                ___ OFFSET(get<T>, {0x5DB0, 8, 0, 0})
	CMember(UParticleSystem*)                          Effect_PLayer_ShieldBreak                                   ___ OFFSET(get<T>, {0x5DB8, 8, 0, 0})
	DMember(bool)                                      GhostMode                                                   ___ OFFSET(get<bool>, {0x5DC0, 1, 0, 0})
	CMember(UFXSystemComponent*)                       OverrideAnimTrail                                           ___ OFFSET(get<T>, {0x5DC8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimNotify_Begin                                            ___ OFFSET(get<T>, {0x5DD0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  AnimNotify_End                                              ___ OFFSET(get<T>, {0x5DE0, 16, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_Destroyed_2D                                   ___ OFFSET(get<T>, {0x5DF0, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_Destroyed_Crit_2D                              ___ OFFSET(get<T>, {0x5DF8, 8, 0, 0})
	CMember(UFXSystemComponent*)                       AnimTrailFX                                                 ___ OFFSET(get<T>, {0x5E00, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  PlayDamageEffect                                            ___ OFFSET(get<T>, {0x5E08, 16, 0, 0})
	SMember(FName)                                     Component_Tag_AnimTrailFX_Const                             ___ OFFSET(get<T>, {0x5E18, 4, 0, 0})
	DMember(double)                                    ReppedCapsuleExtraHalfHeight                                ___ OFFSET(get<double>, {0x5E20, 8, 0, 0})
	DMember(double)                                    CachedCapsuleHalfHeight                                     ___ OFFSET(get<double>, {0x5E28, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCharacterPartsMIDInitialized                              ___ OFFSET(get<T>, {0x5E30, 16, 0, 0})
	CMember(USkeletalMeshComponent*)                   NullPart_Mesh                                               ___ OFFSET(get<T>, {0x5E40, 8, 0, 0})
};

/// Class /Game/Athena/PlayerPawn_Athena.PlayerPawn_Athena_C
/// Size: 0x08F0 (0x005E48 - 0x006738)
class APlayerPawn_Athena_C : public APlayerPawn_Athena_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 26424;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x5E48, 8, 0, 0})
	CMember(UFortContrailsComponent*)                  FortContrails                                               ___ OFFSET(get<T>, {0x5E50, 8, 0, 0})
	CMember(UFortUnderwaterDamageComponent*)           FortUnderwaterDamage                                        ___ OFFSET(get<T>, {0x5E58, 8, 0, 0})
	DMember(float)                                     Timeline_0_BlendWeight_A4943458400C3662DB243099F9EAC7E8     ___ OFFSET(get<float>, {0x5E60, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_A4943458400C3662DB243099F9EAC7E8      ___ OFFSET(get<T>, {0x5E64, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    ___ OFFSET(get<T>, {0x5E68, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   TargetHead                                                  ___ OFFSET(get<T>, {0x5E70, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   TargetBody                                                  ___ OFFSET(get<T>, {0x5E78, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               PawnHeadMaterials                                           ___ OFFSET(get<T>, {0x5E80, 16, 0, 0})
	CMember(TArray<UMaterialInterface*>)               PawnBodyMaterials                                           ___ OFFSET(get<T>, {0x5E90, 16, 0, 0})
	SMember(FGameplayTagContainer)                     TC_FlakVest                                                 ___ OFFSET(get<T>, {0x5EA0, 32, 0, 0})
	SMember(FGameplayEventData)                        Event_Data                                                  ___ OFFSET(get<T>, {0x5EC0, 176, 0, 0})
	SMember(FGameplayTag)                              EventSpawnEffect                                            ___ OFFSET(get<T>, {0x5F70, 4, 0, 0})
	DMember(bool)                                      IsMale                                                      ___ OFFSET(get<bool>, {0x5F74, 1, 0, 0})
	CMember(AFortWeapon*)                              MenuGoingCommandowWeapon                                    ___ OFFSET(get<T>, {0x5F78, 8, 0, 0})
	CMember(USoundBase*)                               SafeZonePassThroughSound                                    ___ OFFSET(get<T>, {0x5F80, 8, 0, 0})
	DMember(bool)                                      bHasBeenOutsideSafeZone                                     ___ OFFSET(get<bool>, {0x5F88, 1, 0, 0})
	SMember(FLinearColor)                              ThreatColor                                                 ___ OFFSET(get<T>, {0x5F8C, 16, 0, 0})
	CMember(USoundBase*)                               PlayerKilledSound                                           ___ OFFSET(get<T>, {0x5FA0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 WindDebrisParticles                                         ___ OFFSET(get<T>, {0x5FA8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 FallingRainParticles                                        ___ OFFSET(get<T>, {0x5FB0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 StormAuraParticles                                          ___ OFFSET(get<T>, {0x5FB8, 8, 0, 0})
	SMember(FVector)                                   LightningSpawnLocation                                      ___ OFFSET(get<T>, {0x5FC0, 24, 0, 0})
	DMember(double)                                    LightningIntensityMin                                       ___ OFFSET(get<double>, {0x5FD8, 8, 0, 0})
	DMember(double)                                    LightningIntensityMax                                       ___ OFFSET(get<double>, {0x5FE0, 8, 0, 0})
	CMember(AActor*)                                   SafeZoneActor                                               ___ OFFSET(get<T>, {0x5FE8, 8, 0, 0})
	DMember(double)                                    LightningIntensity                                          ___ OFFSET(get<double>, {0x5FF0, 8, 0, 0})
	CMember(UPointLightComponent*)                     RandomLightningLight                                        ___ OFFSET(get<T>, {0x5FF8, 8, 0, 0})
	DMember(double)                                    LightningTimelinePlaySpeedMin                               ___ OFFSET(get<double>, {0x6000, 8, 0, 0})
	DMember(double)                                    LightningTimelinePlaySpeedMax                               ___ OFFSET(get<double>, {0x6008, 8, 0, 0})
	DMember(double)                                    LightningFlashDiameter                                      ___ OFFSET(get<double>, {0x6010, 8, 0, 0})
	DMember(double)                                    LightningFlashHeight                                        ___ OFFSET(get<double>, {0x6018, 8, 0, 0})
	DMember(double)                                    LightningFlashRepeatDelayMin                                ___ OFFSET(get<double>, {0x6020, 8, 0, 0})
	DMember(double)                                    LightningFlashRepeatDelayMax                                ___ OFFSET(get<double>, {0x6028, 8, 0, 0})
	CMember(AEmitterCameraLensEffectBase*)             RainCameraLensParticles                                     ___ OFFSET(get<T>, {0x6030, 8, 0, 0})
	DMember(double)                                    _ChanceOfLightningMesh                                      ___ OFFSET(get<double>, {0x6038, 8, 0, 0})
	DMember(bool)                                      ShowInvulnerableVisuals                                     ___ OFFSET(get<bool>, {0x6040, 1, 0, 0})
	CMember(UAudioComponent*)                          StormAudioLoop_Inst                                         ___ OFFSET(get<T>, {0x6048, 8, 0, 0})
	DMember(double)                                    StormAudioVolume                                            ___ OFFSET(get<double>, {0x6050, 8, 0, 0})
	CMember(UAudioComponent*)                          FallingAudioLoop_Inst                                       ___ OFFSET(get<T>, {0x6058, 8, 0, 0})
	DMember(bool)                                      bIsPlayingFallingSound                                      ___ OFFSET(get<bool>, {0x6060, 1, 0, 0})
	DMember(double)                                    PlayerAttributes_Speed_Walk                                 ___ OFFSET(get<double>, {0x6068, 8, 0, 0})
	DMember(double)                                    PlayerAttributes_Speed_Run                                  ___ OFFSET(get<double>, {0x6070, 8, 0, 0})
	DMember(double)                                    PlayerAttributes_Speed_Sprint                               ___ OFFSET(get<double>, {0x6078, 8, 0, 0})
	DMember(int32_t)                                   MaxTrailsLOD                                                ___ OFFSET(get<int32_t>, {0x6080, 4, 0, 0})
	CMember(UPostProcessComponent*)                    MobilePostProcess                                           ___ OFFSET(get<T>, {0x6088, 8, 0, 0})
	DMember(bool)                                      bIsOutsideSafeZoneCached                                    ___ OFFSET(get<bool>, {0x6090, 1, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         ResOutMaterials                                             ___ OFFSET(get<T>, {0x6098, 16, 0, 0})
	CMember(ADuplicateResOutMesh_C*)                   RezInFXActor                                                ___ OFFSET(get<T>, {0x60A8, 8, 0, 0})
	DMember(bool)                                      bQueueRezIn                                                 ___ OFFSET(get<bool>, {0x60B0, 1, 0, 0})
	CMember(ADuplicateResOutMesh_C*)                   RezOutFXActor                                               ___ OFFSET(get<T>, {0x60B8, 8, 0, 0})
	DMember(bool)                                      bQueueRezOut                                                ___ OFFSET(get<bool>, {0x60C0, 1, 0, 0})
	DMember(bool)                                      bWasEverInWarmUp                                            ___ OFFSET(get<bool>, {0x60C1, 1, 0, 0})
	DMember(bool)                                      bStormAudioCleanedUp                                        ___ OFFSET(get<bool>, {0x60C2, 1, 0, 0})
	SMember(FTransform)                                Box_Local_Transform                                         ___ OFFSET(get<T>, {0x60D0, 96, 0, 0})
	DMember(double)                                    BoundsRadius                                                ___ OFFSET(get<double>, {0x6130, 8, 0, 0})
	CMember(UPointLightComponent*)                     TeleportationPointLight                                     ___ OFFSET(get<T>, {0x6138, 8, 0, 0})
	DMember(double)                                    MaxLightIntensity                                           ___ OFFSET(get<double>, {0x6140, 8, 0, 0})
	SMember(FName)                                     Socket_MeshTop                                              ___ OFFSET(get<T>, {0x6148, 4, 0, 0})
	SMember(FName)                                     Socket_MeshBot                                              ___ OFFSET(get<T>, {0x614C, 4, 0, 0})
	SMember(FName)                                     MIDParam_Transition                                         ___ OFFSET(get<T>, {0x6150, 4, 0, 0})
	SMember(FName)                                     MIDParam_DissolvePercent                                    ___ OFFSET(get<T>, {0x6154, 4, 0, 0})
	SMember(FName)                                     MIDParam_DissolveDirection                                  ___ OFFSET(get<T>, {0x6158, 4, 0, 0})
	SMember(FName)                                     MIDParam_DissolveBaseLoc                                    ___ OFFSET(get<T>, {0x615C, 4, 0, 0})
	SMember(FName)                                     MIDParam_DissolveDistance                                   ___ OFFSET(get<T>, {0x6160, 4, 0, 0})
	SMember(FName)                                     MIDParam_DissolveFirstSpawn                                 ___ OFFSET(get<T>, {0x6164, 4, 0, 0})
	CMember(UMaterialInterface*)                       Mat_CharacterDissolve                                       ___ OFFSET(get<T>, {0x6168, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         DissolveMIDs                                                ___ OFFSET(get<T>, {0x6170, 16, 0, 0})
	DMember(bool)                                      bUseNewTeleportFX                                           ___ OFFSET(get<bool>, {0x6180, 1, 0, 0})
	SMember(FGameplayTag)                              OutsideSafeZoneGameplayCueTag                               ___ OFFSET(get<T>, {0x6184, 4, 0, 0})
	DMember(int32_t)                                   SafeZonePhase                                               ___ OFFSET(get<int32_t>, {0x6188, 4, 0, 0})
	DMember(int32_t)                                   WhichSafeZoneTag                                            ___ OFFSET(get<int32_t>, {0x618C, 4, 0, 0})
	DMember(bool)                                      bOutsideSafeZoneGameplayCueActive                           ___ OFFSET(get<bool>, {0x6190, 1, 0, 0})
	SMember(FScalableFloat)                            SafeZoneDamageScalableFloat                                 ___ OFFSET(get<T>, {0x6198, 40, 0, 0})
	DMember(bool)                                      bFrontendPartyInProgress                                    ___ OFFSET(get<bool>, {0x61C0, 1, 0, 0})
	DMember(bool)                                      bLockOnInteractionComplete                                  ___ OFFSET(get<bool>, {0x61C1, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  ResIn                                                       ___ OFFSET(get<T>, {0x61C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  ResOut                                                      ___ OFFSET(get<T>, {0x61D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SwingRight                                                  ___ OFFSET(get<T>, {0x61E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SwingLeft                                                   ___ OFFSET(get<T>, {0x61F8, 16, 0, 0})
	DMember(bool)                                      bSkeletalArrayReady                                         ___ OFFSET(get<bool>, {0x6208, 1, 0, 0})
	DMember(int32_t)                                   CurDissolveSetupAttempt                                     ___ OFFSET(get<int32_t>, {0x620C, 4, 0, 0})
	CMember(USoundBase*)                               DBNOEnterSound                                              ___ OFFSET(get<T>, {0x6210, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  onFadeToWhiteTeleported                                     ___ OFFSET(get<T>, {0x6218, 16, 0, 0})
	DMember(bool)                                      Is_Ashton                                                   ___ OFFSET(get<bool>, {0x6228, 1, 0, 0})
	CMember(UParticleSystemComponent*)                 Ashton                                                      ___ OFFSET(get<T>, {0x6230, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  SwingRightEnd                                               ___ OFFSET(get<T>, {0x6238, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SwingLeftEnd                                                ___ OFFSET(get<T>, {0x6248, 16, 0, 0})
	SMember(FGameplayTag)                              PhoneGhostCue                                               ___ OFFSET(get<T>, {0x6258, 4, 0, 0})
	SMember(FGameplayTag)                              WhiteoutCue                                                 ___ OFFSET(get<T>, {0x625C, 4, 0, 0})
	SMember(FGameplayTag)                              OutsideSafeZoneCue                                          ___ OFFSET(get<T>, {0x6260, 4, 0, 0})
	SMember(FGameplayTag)                              OutsideSafeZone2Cue                                         ___ OFFSET(get<T>, {0x6264, 4, 0, 0})
	SMember(FGameplayTag)                              OutsideSafeZone3Cue                                         ___ OFFSET(get<T>, {0x6268, 4, 0, 0})
	DMember(bool)                                      PlayRespawnFXOnSpawn                                        ___ OFFSET(get<bool>, {0x626C, 1, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    PlayerPawnAthena                                            ___ OFFSET(get<T>, {0x6270, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  SwingRight2                                                 ___ OFFSET(get<T>, {0x6278, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  SwingLeft2                                                  ___ OFFSET(get<T>, {0x6288, 16, 0, 0})
	DMember(bool)                                      TestProceduralWaterInIsolation                              ___ OFFSET(get<bool>, {0x6298, 1, 0, 0})
	DMember(bool)                                      NewVar                                                      ___ OFFSET(get<bool>, {0x6299, 1, 0, 0})
	DMember(bool)                                      Is_First_Water_Body                                         ___ OFFSET(get<bool>, {0x629A, 1, 0, 0})
	DMember(bool)                                      Is_Last_Water_Body                                          ___ OFFSET(get<bool>, {0x629B, 1, 0, 0})
	DMember(double)                                    AccumulatedNormalizedDiveSpeed                              ___ OFFSET(get<double>, {0x62A0, 8, 0, 0})
	SMember(FGameplayTag)                              WaterSprintBoostTag                                         ___ OFFSET(get<T>, {0x62A8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  CCPM_isHiddenInProp                                         ___ OFFSET(get<T>, {0x62B0, 16, 0, 0})
	CMember(TMap<UObject*, FPawnHighlight>)            PawnHighlights                                              ___ OFFSET(get<T>, {0x62C0, 80, 0, 0})
	CMember(UObject*)                                  Current_Highlight_Source                                    ___ OFFSET(get<T>, {0x6310, 8, 0, 0})
	DMember(double)                                    Current_Highlight_Priority                                  ___ OFFSET(get<double>, {0x6318, 8, 0, 0})
	SMember(FPawnHighlight)                            Invulnerable_Highlight                                      ___ OFFSET(get<T>, {0x6320, 48, 0, 0})
	DMember(bool)                                      IsGalileo                                                   ___ OFFSET(get<bool>, {0x6350, 1, 0, 0})
	SMember(FScalableFloat)                            HotFixSnow                                                  ___ OFFSET(get<T>, {0x6358, 40, 0, 0})
	CMember(TSet<FName>)                               NoSnowPlaylists                                             ___ OFFSET(get<T>, {0x6380, 80, 0, 0})
	SMember(FGameplayTag)                              GalileoPlaylistTag                                          ___ OFFSET(get<T>, {0x63D0, 4, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         WeaponMIDs                                                  ___ OFFSET(get<T>, {0x63D8, 16, 0, 0})
	DMember(int32_t)                                   AmountOfTimesToAttemptRestoreMats                           ___ OFFSET(get<int32_t>, {0x63E8, 4, 0, 0})
	SMember(FGameplayTag)                              TC_PawnAthenaNPC                                            ___ OFFSET(get<T>, {0x63EC, 4, 0, 0})
	DMember(double)                                    HitGlowBrightnessScalar                                     ___ OFFSET(get<double>, {0x63F0, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               CurrentWeaponMaterials                                      ___ OFFSET(get<T>, {0x63F8, 16, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           CurrentWeaponMeshes                                         ___ OFFSET(get<T>, {0x6408, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         WeaponDissolveMIDs                                          ___ OFFSET(get<T>, {0x6418, 16, 0, 0})
	DMember(double)                                    HitGlowBrightnessScalar_Mobile                              ___ OFFSET(get<double>, {0x6428, 8, 0, 0})
	SMember(FGameplayTag)                              TC_PawnAthenaDecoy                                          ___ OFFSET(get<T>, {0x6430, 4, 0, 0})
	DMember(double)                                    ScaleRate                                                   ___ OFFSET(get<double>, {0x6438, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TetherQuestTag                                              ___ OFFSET(get<T>, {0x6440, 32, 0, 0})
	SMember(FName)                                     FirefliesTag                                                ___ OFFSET(get<T>, {0x6460, 4, 0, 0})
	SMember(FTransform)                                RightSideRim_Transform                                      ___ OFFSET(get<T>, {0x6470, 96, 0, 0})
	CMember(USpotLightComponent*)                      Right_Side_Rim_Light                                        ___ OFFSET(get<T>, {0x64D0, 8, 0, 0})
	DMember(double)                                    Rim_light_Shadow_Bias                                       ___ OFFSET(get<double>, {0x64D8, 8, 0, 0})
	DMember(double)                                    Rim_Light_Intensity                                         ___ OFFSET(get<double>, {0x64E0, 8, 0, 0})
	SMember(FRotator)                                  PlayerAimRotation                                           ___ OFFSET(get<T>, {0x64E8, 24, 0, 0})
	SMember(FScalableFloat)                            ControlRotationReplicationTickRate                          ___ OFFSET(get<T>, {0x6500, 40, 0, 0})
	SMember(FGameplayTag)                              Elimination_Rez_Sequence_GC                                 ___ OFFSET(get<T>, {0x6528, 4, 0, 0})
	SMember(FGameplayTag)                              Creative_Respawn_Teleportation_GC                           ___ OFFSET(get<T>, {0x652C, 4, 0, 0})
	SMember(FGameplayTag)                              Teleport_In_GC                                              ___ OFFSET(get<T>, {0x6530, 4, 0, 0})
	DMember(double)                                    RimlightDistanceFromCamera                                  ___ OFFSET(get<double>, {0x6538, 8, 0, 0})
	SMember(FLinearColor)                              Rim_Light_Color___Night                                     ___ OFFSET(get<T>, {0x6540, 16, 0, 0})
	SMember(FLinearColor)                              Rim_Light_Color___Day                                       ___ OFFSET(get<T>, {0x6550, 16, 0, 0})
	SMember(FGameplayTag)                              PhoneModeratorModeGameplayCue                               ___ OFFSET(get<T>, {0x6560, 4, 0, 0})
	SMember(FGameplayTag)                              PhoneInvulnerableGameplayCue                                ___ OFFSET(get<T>, {0x6564, 4, 0, 0})
	DMember(bool)                                      Swinging_HandsUp                                            ___ OFFSET(get<bool>, {0x6568, 1, 0, 0})
	DMember(bool)                                      Swinging_LockedToHip                                        ___ OFFSET(get<bool>, {0x6569, 1, 0, 0})
	DMember(double)                                    InputDragCoefficient                                        ___ OFFSET(get<double>, {0x6570, 8, 0, 0})
	DMember(bool)                                      ToggleSwingNativized                                        ___ OFFSET(get<bool>, {0x6578, 1, 0, 0})
	CMember(UAudioComponent*)                          SwingingSound                                               ___ OFFSET(get<T>, {0x6580, 8, 0, 0})
	CMember(UCurveFloat*)                              Swinging_ReelingInCurve                                     ___ OFFSET(get<T>, {0x6588, 8, 0, 0})
	CMember(UCurveFloat*)                              Swinging_NotReelingInCurve                                  ___ OFFSET(get<T>, {0x6590, 8, 0, 0})
	SMember(FVector)                                   Swinging_OriginalVecToTarget                                ___ OFFSET(get<T>, {0x6598, 24, 0, 0})
	DMember(bool)                                      Swinging_ReelingIn                                          ___ OFFSET(get<bool>, {0x65B0, 1, 0, 0})
	DMember(double)                                    Swinging_Goal_Length                                        ___ OFFSET(get<double>, {0x65B8, 8, 0, 0})
	CMember(UCurveFloat*)                              Swinging_ReelingTimeCurve                                   ___ OFFSET(get<T>, {0x65C0, 8, 0, 0})
	DMember(bool)                                      Swinging_ColliderBigger                                     ___ OFFSET(get<bool>, {0x65C8, 1, 0, 0})
	CMember(TArray<FAudioParameter>)                   SoundParams                                                 ___ OFFSET(get<T>, {0x65D0, 16, 0, 0})
	DMember(bool)                                      Swinging_UseNewRotationAlgorithm                            ___ OFFSET(get<bool>, {0x65E0, 1, 0, 0})
	SMember(FVector)                                   AttachedWallInverseNormal                                   ___ OFFSET(get<T>, {0x65E8, 24, 0, 0})
	DMember(double)                                    WallCheckDistance                                           ___ OFFSET(get<double>, {0x6600, 8, 0, 0})
	SMember(FVector)                                   VelocityOnSlideStart                                        ___ OFFSET(get<T>, {0x6608, 24, 0, 0})
	DMember(double)                                    SlideStartTime                                              ___ OFFSET(get<double>, {0x6620, 8, 0, 0})
	DMember(double)                                    MaxSlideTime                                                ___ OFFSET(get<double>, {0x6628, 8, 0, 0})
	CMember(UCurveVector*)                             WallSlidingVelocityMultiplierCurve                          ___ OFFSET(get<T>, {0x6630, 8, 0, 0})
	CMember(UCurveFloat*)                              WallSlidingAddedDownwardVelocityMultiplierCurve             ___ OFFSET(get<T>, {0x6638, 8, 0, 0})
	DMember(double)                                    WallSlidingAddedDownwardVelocityMax                         ___ OFFSET(get<double>, {0x6640, 8, 0, 0})
	SMember(FVector)                                   AttachedWallNormal                                          ___ OFFSET(get<T>, {0x6648, 24, 0, 0})
	SMember(FVector)                                   WallSlidingVelocity                                         ___ OFFSET(get<T>, {0x6660, 24, 0, 0})
	DMember(double)                                    DesiredDistanceToAttachedWall                               ___ OFFSET(get<double>, {0x6678, 8, 0, 0})
	DMember(double)                                    MinGroundSlopeToLeaveAttachedWall                           ___ OFFSET(get<double>, {0x6680, 8, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           OverrideSearchMontageInfo                                   ___ OFFSET(get<T>, {0x6688, 88, 0, 0})
	DMember(bool)                                      Is_Hidding_CharacterParrts                                  ___ OFFSET(get<bool>, {0x66E0, 1, 0, 0})
	DMember(double)                                    RimlightCVARBoost                                           ___ OFFSET(get<double>, {0x66E8, 8, 0, 0})
	DMember(bool)                                      Rimlight_Enabled                                            ___ OFFSET(get<bool>, {0x66F0, 1, 0, 0})
	SMember(FString)                                   LCVar_Name                                                  ___ OFFSET(get<T>, {0x66F8, 16, 0, 0})
	CMember(APhysicalRimlight_C*)                      PhysicalRimlightActor                                       ___ OFFSET(get<T>, {0x6708, 8, 0, 0})
	SMember(FScalableFloat)                            UGC_RimLightIntensity                                       ___ OFFSET(get<T>, {0x6710, 40, 0, 0})
};

/// Class /Game/Athena/AI/Phoebe/Skillsets/AI_skill_phoebe_bot_aiming.AI_skill_phoebe_bot_aiming_C
/// Size: 0x0000 (0x001598 - 0x001598)
class UAI_skill_phoebe_bot_aiming_C : public UFortAthenaAIBotAimingSkillSet
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5528;

public:
};

/// Class /Game/Athena/AI/Phoebe/NavFilter/NavFilter_Phoebe.NavFilter_Phoebe_C
/// Size: 0x0000 (0x000048 - 0x000048)
class UNavFilter_Phoebe_C : public UNavigationQueryFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Game/Athena/AI/Phoebe/BP_PhoebePlayerController.BP_PhoebePlayerController_C
/// Size: 0x0020 (0x001730 - 0x001750)
class ABP_PhoebePlayerController_C : public AFortAthenaAIBotController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5968;

public:
	CMember(UFortControllerComponent_RechargeWeapons*) RechargingWeaponsComponent                                  ___ OFFSET(get<T>, {0x1730, 8, 0, 0})
	CMember(UFortBlackboardComponent*)                 Blackboard1                                                 ___ OFFSET(get<T>, {0x1738, 8, 0, 0})
	CMember(UFortAthenaAIBotBuildingComponent*)        FortAthenaAIBotBuilding                                     ___ OFFSET(get<T>, {0x1740, 8, 0, 0})
	CMember(UAIPerceptionComponent*)                   AIPerception                                                ___ OFFSET(get<T>, {0x1748, 8, 0, 0})
};

/// Class /Game/Athena/AI/NPCs/Base/BP_PhoebeController_NonParticipant.BP_PhoebeController_NonParticipant_C
/// Size: 0x0000 (0x001750 - 0x001750)
class ABP_PhoebeController_NonParticipant_C : public ABP_PhoebePlayerController_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5968;

public:
};

/// Class /Game/Athena/AI/NPCs/Base/BP_BotController_NPC_Base.BP_BotController_NPC_Base_C
/// Size: 0x0050 (0x001750 - 0x0017A0)
class ABP_BotController_NPC_Base_C : public ABP_PhoebeController_NonParticipant_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 6048;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1750, 8, 0, 0})
	CMember(UFortAthenaNpcPatrollingComponent*)        FortAthenaNpcPatrolling                                     ___ OFFSET(get<T>, {0x1758, 8, 0, 0})
	CMember(UClass*)                                   GE_Patrolling                                               ___ OFFSET(get<T>, {0x1760, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GE_PatrollingSpeedHandle                                    ___ OFFSET(get<T>, {0x1768, 8, 0, 0})
	SMember(FRotator)                                  SavedRotationRate                                           ___ OFFSET(get<T>, {0x1770, 24, 0, 0})
	SMember(FRotator)                                  PatrollingRotationRate                                      ___ OFFSET(get<T>, {0x1788, 24, 0, 0})
};

/// Class /Game/Athena/AI/Phoebe/BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C
/// Size: 0x0014 (0x006738 - 0x00674C)
class ABP_PlayerPawn_Athena_Phoebe_C : public APlayerPawn_Athena_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 26444;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x6738, 8, 0, 0})
	SMember(FName)                                     AIEvaluator_CharacterLaunchedKeyName                        ___ OFFSET(get<T>, {0x6740, 4, 0, 0})
	DMember(bool)                                      bUseCosmeticVariants                                        ___ OFFSET(get<bool>, {0x6744, 1, 0, 0})
	DMember(int32_t)                                   CosmeticVariantID                                           ___ OFFSET(get<int32_t>, {0x6748, 4, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/PhantomBooth/GE_Athena_Disguise_Remove.GE_Athena_Disguise_Remove_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_Disguise_Remove_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Athena_GameState.Athena_GameState_C
/// Size: 0x0018 (0x0032B0 - 0x0032C8)
class AAthena_GameState_C : public AFortGameStateBR
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 13000;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x32B0, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x32B8, 8, 0, 0})
	CMember(USoundBase*)                               Victory_Royale_Sound                                        ___ OFFSET(get<T>, {0x32C0, 8, 0, 0})
};

/// Class /Game/Athena/AI/NPCs/Base/BP_PlayerPawn_NonParticipant.BP_PlayerPawn_NonParticipant_C
/// Size: 0x0224 (0x00674C - 0x006970)
class ABP_PlayerPawn_NonParticipant_C : public ABP_PlayerPawn_Athena_Phoebe_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 26992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x6750, 8, 0, 0})
	CMember(UFortAthenaAlertStateComponent*)           FortAthenaAlertState                                        ___ OFFSET(get<T>, {0x6758, 8, 0, 0})
	CMember(UAudioComponent*)                          VOAudioComponent                                            ___ OFFSET(get<T>, {0x6760, 8, 0, 0})
	DMember(bool)                                      UseAlertness                                                ___ OFFSET(get<bool>, {0x6768, 1, 0, 0})
	DMember(bool)                                      UseVO                                                       ___ OFFSET(get<bool>, {0x6769, 1, 0, 0})
	DMember(bool)                                      UseIdleVO                                                   ___ OFFSET(get<bool>, {0x676A, 1, 0, 0})
	DMember(bool)                                      UseDropExtraLootOnDeath                                     ___ OFFSET(get<bool>, {0x676B, 1, 0, 0})
	DMember(bool)                                      UseFullBodyHitReact                                         ___ OFFSET(get<bool>, {0x676C, 1, 0, 0})
	DMember(bool)                                      UseChangedTargetReplication                                 ___ OFFSET(get<bool>, {0x676D, 1, 0, 0})
	DMember(bool)                                      UseAlertSound                                               ___ OFFSET(get<bool>, {0x676E, 1, 0, 0})
	CMember(EAlertLevel)                               AlertLevel                                                  ___ OFFSET(get<T>, {0x676F, 1, 0, 0})
	CMember(EAlertLevel)                               OldAlertLevel                                               ___ OFFSET(get<T>, {0x6770, 1, 0, 0})
	SMember(FGameplayTag)                              GameplayCueAlertState                                       ___ OFFSET(get<T>, {0x6774, 4, 0, 0})
	CMember(UClass*)                                   GE_NPC_Status_Stressed_Infinite                             ___ OFFSET(get<T>, {0x6778, 8, 0, 0})
	CMember(UClass*)                                   GE_NPC_Status_Stressed_Cooldown                             ___ OFFSET(get<T>, {0x6780, 8, 0, 0})
	DMember(double)                                    MinDistanceToTargetToPlayCombatAlertAnimation               ___ OFFSET(get<double>, {0x6788, 8, 0, 0})
	SMember(FScalableFloat)                            MinIdleVODelay                                              ___ OFFSET(get<T>, {0x6790, 40, 0, 0})
	SMember(FScalableFloat)                            MaxIdleVODelay                                              ___ OFFSET(get<T>, {0x67B8, 40, 0, 0})
	SMember(FName)                                     LootTierNameToSpawnWhenDead                                 ___ OFFSET(get<T>, {0x67E0, 4, 0, 0})
	SMember(FName)                                     LootTier_Medium                                             ___ OFFSET(get<T>, {0x67E4, 4, 0, 0})
	SMember(FName)                                     LootTier_Shell                                              ___ OFFSET(get<T>, {0x67E8, 4, 0, 0})
	SMember(FName)                                     LootTier_Heavy                                              ___ OFFSET(get<T>, {0x67EC, 4, 0, 0})
	SMember(FName)                                     LootTier_Light                                              ___ OFFSET(get<T>, {0x67F0, 4, 0, 0})
	SMember(FName)                                     LootTier_Rockets                                            ___ OFFSET(get<T>, {0x67F4, 4, 0, 0})
	CMember(UFortGameplayDataTrackerComponentManager*) DataTrackerComponentManager                                 ___ OFFSET(get<T>, {0x67F8, 8, 0, 0})
	SMember(FGameplayTag)                              AlertLevelUnawareTag                                        ___ OFFSET(get<T>, {0x6800, 4, 0, 0})
	SMember(FGameplayTag)                              AlertLevelAlertedTag                                        ___ OFFSET(get<T>, {0x6804, 4, 0, 0})
	SMember(FGameplayTag)                              AlertLevelAggressiveTag                                     ___ OFFSET(get<T>, {0x6808, 4, 0, 0})
	SMember(FGameplayTag)                              TC_DisguiseTag                                              ___ OFFSET(get<T>, {0x680C, 4, 0, 0})
	CMember(UClass*)                                   GE_RemoveDisguise                                           ___ OFFSET(get<T>, {0x6810, 8, 0, 0})
	CMember(UFortAbilitySet*)                          HitReactAbilitySet                                          ___ OFFSET(get<T>, {0x6818, 8, 0, 0})
	CMember(UAnimMontage*)                             DefaultFullbodyHitReactionMontage                           ___ OFFSET(get<T>, {0x6820, 8, 0, 0})
	CMember(UFortPatrolAnimAsset*)                     CurrentPatrolAnimAsset                                      ___ OFFSET(get<T>, {0x6828, 8, 0, 0})
	CMember(UClass*)                                   PatrolLayerAnimBP                                           ___ OFFSET(get<T>, {0x6830, 8, 0, 0})
	CMember(TArray<FFortPatrolAnimSetWeaponPair>)      PatrolAnimSetPairs                                          ___ OFFSET(get<T>, {0x6838, 16, 0, 0})
	DMember(bool)                                      bShouldDoFullAnimationUpdate                                ___ OFFSET(get<bool>, {0x6848, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GEDuelHandle                                                ___ OFFSET(get<T>, {0x684C, 8, 0, 0})
	CMember(UClass*)                                   GE_DuelTag                                                  ___ OFFSET(get<T>, {0x6858, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          Challenger                                                  ___ OFFSET(get<T>, {0x6860, 8, 0, 0})
	CMember(UClass*)                                   OverrideLayerAnimBP                                         ___ OFFSET(get<T>, {0x6868, 8, 0, 0})
	CMember(UFortPatrolAnimAsset*)                     FallbackPatrolAnimAsset                                     ___ OFFSET(get<T>, {0x6870, 8, 0, 0})
	DMember(bool)                                      bIsInVehicleThatSupportsNoAlertState                        ___ OFFSET(get<bool>, {0x6878, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GE_Quest_Converted_Handle                                   ___ OFFSET(get<T>, {0x687C, 8, 0, 0})
	CMember(UClass*)                                   GE_Quest_Converted_HireNPC                                  ___ OFFSET(get<T>, {0x6888, 8, 0, 0})
	CMember(USoundBase*)                               DeathFX_Sound                                               ___ OFFSET(get<T>, {0x6890, 8, 0, 0})
	CMember(AFortPawn*)                                PawnConverter                                               ___ OFFSET(get<T>, {0x6898, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToApplyOnConvertedPawn                                  ___ OFFSET(get<T>, {0x68A0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TagsToApplyOnConvertingPawn                                 ___ OFFSET(get<T>, {0x68C0, 32, 0, 0})
	CMember(USoundLibrary*)                            PawnSoundLibrary                                            ___ OFFSET(get<T>, {0x68E0, 8, 0, 0})
	CMember(UFortAbilitySet*)                          GASToApplyOnConvertedPawn                                   ___ OFFSET(get<T>, {0x68E8, 8, 0, 0})
	DMember(bool)                                      RemoveGASOnUnconverted                                      ___ OFFSET(get<bool>, {0x68F0, 1, 0, 0})
	SMember(FFortAbilitySetHandle)                     HNDL_EquippedAbilitySet                                     ___ OFFSET(get<T>, {0x68F8, 56, 0, 0})
	CMember(AActor*)                                   NewTargetActor                                              ___ OFFSET(get<T>, {0x6930, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTargetChanged                                             ___ OFFSET(get<T>, {0x6938, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAlertLevelChanged                                         ___ OFFSET(get<T>, {0x6948, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnDeath                                                     ___ OFFSET(get<T>, {0x6958, 16, 0, 0})
	SMember(FTimerHandle)                              IdleVOTimerHandle                                           ___ OFFSET(get<T>, {0x6968, 8, 0, 0})
};

/// Class /Game/Athena/AI/NPCs/Base/Abilities/GAB_ApplyFullBodyHit_NonParticipant.GAB_ApplyFullBodyHit_NonParticipant_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UGAB_ApplyFullBodyHit_NonParticipant_C : public UGAB_GenericApplyFullBodyHit_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Parent.NPC_Pawn_Parent_C
/// Size: 0x086C (0x003480 - 0x003CEC)
class ANPC_Pawn_Parent_C : public AFortAIPawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 15596;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x3480, 8, 0, 0})
	CMember(USoundLibraryComponent*)                   SoundLibrary                                                ___ OFFSET(get<T>, {0x3488, 8, 0, 0})
	CMember(UFortPawnComponent_CustomDepth*)           FortPawnComponent_CustomDepth                               ___ OFFSET(get<T>, {0x3490, 8, 0, 0})
	CMember(UCapsuleComponent*)                        WeaponCapsuleCollision                                      ___ OFFSET(get<T>, {0x3498, 8, 0, 0})
	CMember(UFortTaggedNavFiltersComponent*)           FortTaggedNavFilters                                        ___ OFFSET(get<T>, {0x34A0, 8, 0, 0})
	CMember(UFortActorComponent_Affiliation*)          FortActorComponent_Affiliation                              ___ OFFSET(get<T>, {0x34A8, 8, 0, 0})
	CMember(USoundLibraryComponent*)                   SoundLibrary_Component                                      ___ OFFSET(get<T>, {0x34B0, 8, 0, 0})
	CMember(UAudioComponent*)                          MovementAudioComponent                                      ___ OFFSET(get<T>, {0x34B8, 8, 0, 0})
	CMember(UNPC_VoiceComponent_C*)                    NPC_VoiceComponent                                          ___ OFFSET(get<T>, {0x34C0, 8, 0, 0})
	CMember(UAudioComponent*)                          VOAudioComponent                                            ___ OFFSET(get<T>, {0x34C8, 8, 0, 0})
	CMember(UFortWidgetComponent*)                     NPCStatusWidget                                             ___ OFFSET(get<T>, {0x34D0, 8, 0, 0})
	DMember(float)                                     Timeline_ScaleMeshInOrOut_MeshScaleAlpha_9DAAC0B243D26E4160CEC3A458AE0E86 ___ OFFSET(get<float>, {0x34D8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_ScaleMeshInOrOut__Direction_9DAAC0B243D26E4160CEC3A458AE0E86 ___ OFFSET(get<T>, {0x34DC, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline_ScaleMeshInOrOut                                   ___ OFFSET(get<T>, {0x34E0, 8, 0, 0})
	CMember(UClass*)                                   GE_NPC_RecentlyDamaged                                      ___ OFFSET(get<T>, {0x34E8, 8, 0, 0})
	CMember(TEnumAsByte<Enum_NPC_AlertLevel>)          NPC_AlertLevel                                              ___ OFFSET(get<T>, {0x34F0, 1, 0, 0})
	CMember(TEnumAsByte<Enum_NPC_AlertLevel>)          NPC_AlertLevelPrevious                                      ___ OFFSET(get<T>, {0x34F1, 1, 0, 0})
	CMember(TMap<TEnumAsByte, FGameplayTag>)           NPC_AlertLevelToTagMap                                      ___ OFFSET(get<T>, {0x34F8, 80, 0, 0})
	DMember(bool)                                      NPC_StatusWidgetHealthBarDisabled                           ___ OFFSET(get<bool>, {0x3548, 1, 0, 0})
	SMember(FGameplayTag)                              GameplayCue_PickupGrabbed                                   ___ OFFSET(get<T>, {0x354C, 4, 0, 0})
	CMember(EFortRarity)                               NPC_BestLootRarityInInventory                               ___ OFFSET(get<T>, {0x3550, 1, 0, 0})
	DMember(bool)                                      NPC_DebugPawn                                               ___ OFFSET(get<bool>, {0x3551, 1, 0, 0})
	DMember(bool)                                      NPC_ShowInventoryRarityVisuals                              ___ OFFSET(get<bool>, {0x3552, 1, 0, 0})
	DMember(double)                                    InventoryGlowDelay                                          ___ OFFSET(get<double>, {0x3558, 8, 0, 0})
	SMember(FScalableFloat)                            NPC_NumberOfInventoryItemsToDeliverHF                       ___ OFFSET(get<T>, {0x3560, 40, 0, 0})
	DMember(bool)                                      NPC_SpawnInvisible                                          ___ OFFSET(get<bool>, {0x3588, 1, 0, 0})
	DMember(bool)                                      NPC_ScaleMeshInOnSpawn                                      ___ OFFSET(get<bool>, {0x3589, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NPC_SpawnAbilityTag                                      ___ OFFSET(get<T>, {0x3590, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NPC_AlternateSpawnAbilityTag                             ___ OFFSET(get<T>, {0x35B0, 32, 0, 0})
	DMember(bool)                                      NPC_IsSpawning                                              ___ OFFSET(get<bool>, {0x35D0, 1, 0, 0})
	DMember(double)                                    NPC_OriginalGravityScale                                    ___ OFFSET(get<double>, {0x35D8, 8, 0, 0})
	SMember(FRotator)                                  NPC_OriginalRotationRate                                    ___ OFFSET(get<T>, {0x35E0, 24, 0, 0})
	DMember(bool)                                      NPC_HasPawnGoal                                             ___ OFFSET(get<bool>, {0x35F8, 1, 0, 0})
	CMember(AActor*)                                   NPC_PawnGoalActor                                           ___ OFFSET(get<T>, {0x3600, 8, 0, 0})
	SMember(FScalableFloat)                            NPC_NumberOfInventoryItemsToConsumeBeforeFullHF             ___ OFFSET(get<T>, {0x3608, 40, 0, 0})
	DMember(bool)                                      NPC_PawnIsDestroyingBuildingForNavigation                   ___ OFFSET(get<bool>, {0x3630, 1, 0, 0})
	SMember(FScalableFloat)                            MaxIdleVODelay                                              ___ OFFSET(get<T>, {0x3638, 40, 0, 0})
	SMember(FScalableFloat)                            MinIdleVODelay                                              ___ OFFSET(get<T>, {0x3660, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_DeathDropLootDelay                                      ___ OFFSET(get<T>, {0x3688, 40, 0, 0})
	SMember(FName)                                     NPC_DeathDropLootTierGroupName                              ___ OFFSET(get<T>, {0x36B0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     NPC_DeathDropLootRequiredDamageTags                         ___ OFFSET(get<T>, {0x36B8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     NPC_DeathDropLootForbiddenDamageTags                        ___ OFFSET(get<T>, {0x36D8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GrantStartingItemsAbilityTC                                 ___ OFFSET(get<T>, {0x36F8, 32, 0, 0})
	DMember(bool)                                      NPC_HasItemInInventory                                      ___ OFFSET(get<bool>, {0x3718, 1, 0, 0})
	SMember(FGameplayTag)                              VoiceTag_FullAlertIdle                                      ___ OFFSET(get<T>, {0x371C, 4, 0, 0})
	SMember(FGameplayTag)                              VoiceTag_Idle                                               ___ OFFSET(get<T>, {0x3720, 4, 0, 0})
	SMember(FGameplayTag)                              VoiceTag_ReturnToIdle                                       ___ OFFSET(get<T>, {0x3724, 4, 0, 0})
	SMember(FGameplayTag)                              VoiceTag_LostTarget                                         ___ OFFSET(get<T>, {0x3728, 4, 0, 0})
	SMember(FGameplayTag)                              VoiceTag_Suspicious                                         ___ OFFSET(get<T>, {0x372C, 4, 0, 0})
	SMember(FGameplayTag)                              VoiceTag_FullAlert                                          ___ OFFSET(get<T>, {0x3730, 4, 0, 0})
	CMember(TArray<FStruct_NPC_TargetSlots>)           NPC_TargetSlotsHF                                           ___ OFFSET(get<T>, {0x3738, 16, 0, 0})
	DMember(bool)                                      NPC_DamageCanCancelIntroPhase                               ___ OFFSET(get<bool>, {0x3748, 1, 0, 0})
	SMember(FGameplayTagQuery)                         TQ_NPC_DamageTagsThatCanCancelIntroPhase                    ___ OFFSET(get<T>, {0x3750, 72, 0, 0})
	CMember(UClass*)                                   GE_NPC_IntroPhaseBehaviorCooldown                           ___ OFFSET(get<T>, {0x3798, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_IntroBehaviorActive                                      ___ OFFSET(get<T>, {0x37A0, 32, 0, 0})
	DMember(bool)                                      Debug_NPC_AlertLevelForced                                  ___ OFFSET(get<bool>, {0x37C0, 1, 0, 0})
	DMember(bool)                                      NPC_PawnCanInteractInternal                                 ___ OFFSET(get<bool>, {0x37C1, 1, 0, 0})
	SMember(FScalableFloat)                            NPC_PrimtiveDataFloatSetRandomlyInRange                     ___ OFFSET(get<T>, {0x37C8, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_PrimtiveDataFloatIndexHF                                ___ OFFSET(get<T>, {0x37F0, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_PrimtiveDataFloatMinRangeHF                             ___ OFFSET(get<T>, {0x3818, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_PrimtiveDataFloatMaxRangeHF                             ___ OFFSET(get<T>, {0x3840, 40, 0, 0})
	CMember(AActor*)                                   NPC_Leader                                                  ___ OFFSET(get<T>, {0x3868, 8, 0, 0})
	SMember(FGameplayTag)                              GameplayCue_LeaderSet                                       ___ OFFSET(get<T>, {0x3870, 4, 0, 0})
	DMember(double)                                    NPC_Skeletal_Mesh_Index                                     ___ OFFSET(get<double>, {0x3878, 8, 0, 0})
	CMember(USoundBase*)                               TamedSound                                                  ___ OFFSET(get<T>, {0x3880, 8, 0, 0})
	CMember(UAudioComponent*)                          StateChangeSound                                            ___ OFFSET(get<T>, {0x3888, 8, 0, 0})
	SMember(FScalableFloat)                            NPC_ShouldDespawnFromStormHF                                ___ OFFSET(get<T>, {0x3890, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_DespawnTimerHF                                          ___ OFFSET(get<T>, {0x38B8, 40, 0, 0})
	SMember(FGameplayTag)                              NPC_DespawnGameplayTag                                      ___ OFFSET(get<T>, {0x38E0, 4, 0, 0})
	SMember(FTimerHandle)                              NPC_TestIsInSafeZoneTimer                                   ___ OFFSET(get<T>, {0x38E8, 8, 0, 0})
	SMember(FTimerHandle)                              NPC_DespawnFromStormTimer                                   ___ OFFSET(get<T>, {0x38F0, 8, 0, 0})
	DMember(bool)                                      NPC_isTryingToDespawn                                       ___ OFFSET(get<bool>, {0x38F8, 1, 0, 0})
	SMember(FGameplayTag)                              NPC_ResetIntroGameplayTags                                  ___ OFFSET(get<T>, {0x38FC, 4, 0, 0})
	DMember(double)                                    SelectedPrimitiveDataFloat                                  ___ OFFSET(get<double>, {0x3900, 8, 0, 0})
	SMember(FGameplayTag)                              GameplayCue_Death                                           ___ OFFSET(get<T>, {0x3908, 4, 0, 0})
	CMember(TArray<UMaterialInterface*>)               OG_Materials                                                ___ OFFSET(get<T>, {0x3910, 16, 0, 0})
	DMember(bool)                                      NPC_Apply_GE_for_Swimming                                   ___ OFFSET(get<bool>, {0x3920, 1, 0, 0})
	CMember(UClass*)                                   NPC_GE_ClassToApplyForSwimming                              ___ OFFSET(get<T>, {0x3928, 8, 0, 0})
	DMember(bool)                                      NPC_Apply_Water_Enter_Exit_Burst_GC                         ___ OFFSET(get<bool>, {0x3930, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               NPC_GE_AppliedForSwimming                                   ___ OFFSET(get<T>, {0x3934, 8, 0, 0})
	SMember(FName)                                     GoalActorBBKey                                              ___ OFFSET(get<T>, {0x393C, 4, 0, 0})
	SMember(FGameplayTag)                              GameplayCueLureInterest                                     ___ OFFSET(get<T>, {0x3940, 4, 0, 0})
	CMember(UObject*)                                  NPC_PreviousLureGoal                                        ___ OFFSET(get<T>, {0x3948, 8, 0, 0})
	SMember(FGameplayTag)                              Exit_Water                                                  ___ OFFSET(get<T>, {0x3950, 4, 0, 0})
	SMember(FGameplayTag)                              Enter_Water                                                 ___ OFFSET(get<T>, {0x3954, 4, 0, 0})
	SMember(FScalableFloat)                            NPC_MaxDistanceFromDamagedNPCToDrawHeallthBarHF             ___ OFFSET(get<T>, {0x3958, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_HealthBarHideTimeAfterDeathHF                           ___ OFFSET(get<T>, {0x3980, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_PlayEffectWhenLuredHF                                   ___ OFFSET(get<T>, {0x39A8, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_PawnCanInteractHF                                       ___ OFFSET(get<T>, {0x39D0, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_AllowInteractOnlyWhenUnawareHF                          ___ OFFSET(get<T>, {0x39F8, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_AllowInteractWhenHasLeaderHF                            ___ OFFSET(get<T>, {0x3A20, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_AllowDrownInShallowWaterHF                              ___ OFFSET(get<T>, {0x3A48, 40, 0, 0})
	DMember(bool)                                      NPC_IsInventoryInitialized                                  ___ OFFSET(get<bool>, {0x3A70, 1, 0, 0})
	DMember(float)                                     LeaderClearedCueDelay                                       ___ OFFSET(get<float>, {0x3A74, 4, 0, 0})
	SMember(FGameplayTag)                              GameplayCue_LeaderCleared                                   ___ OFFSET(get<T>, {0x3A78, 4, 0, 0})
	DMember(bool)                                      isGCForLeaderSetLooping                                     ___ OFFSET(get<bool>, {0x3A7C, 1, 0, 0})
	SMember(FGameplayTag)                              NPC_DeathByStormTag                                         ___ OFFSET(get<T>, {0x3A80, 4, 0, 0})
	DMember(bool)                                      NPC_TryDespawnAbility                                       ___ OFFSET(get<bool>, {0x3A84, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GeOutsideSafeZoneDamageHandle                               ___ OFFSET(get<T>, {0x3A88, 8, 0, 0})
	DMember(bool)                                      IsGEStormDamageInit                                         ___ OFFSET(get<bool>, {0x3A90, 1, 0, 0})
	DMember(bool)                                      NPC_MeshScalingInProgress                                   ___ OFFSET(get<bool>, {0x3A91, 1, 0, 0})
	DMember(bool)                                      NPC_DisableCapsuleOverlapsWhenScalingOut                    ___ OFFSET(get<bool>, {0x3A92, 1, 0, 0})
	SMember(FVector)                                   NPC_OriginalMeshScale                                       ___ OFFSET(get<T>, {0x3A98, 24, 0, 0})
	SMember(FMulticastInlineDelegate)                  NPCScaleMeshInCompleted                                     ___ OFFSET(get<T>, {0x3AB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NPCScaleMeshOutCompleted                                    ___ OFFSET(get<T>, {0x3AC0, 16, 0, 0})
	DMember(bool)                                      NPC_CanDropLoot                                             ___ OFFSET(get<bool>, {0x3AD0, 1, 0, 0})
	SMember(FScalableFloat)                            NPC_StaleDespawnTestDistance_HF                             ___ OFFSET(get<T>, {0x3AD8, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_StaleDespawnTimeThreshold_HF                            ___ OFFSET(get<T>, {0x3B00, 40, 0, 0})
	DMember(double)                                    NPC_LastNonStaleCheckTime                                   ___ OFFSET(get<double>, {0x3B28, 8, 0, 0})
	DMember(bool)                                      bCanBeDamagedByNullInstigator                               ___ OFFSET(get<bool>, {0x3B30, 1, 0, 0})
	DMember(bool)                                      IsEnteringWater                                             ___ OFFSET(get<bool>, {0x3B31, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  NPCPawnInteractWithDispatcher                               ___ OFFSET(get<T>, {0x3B38, 16, 0, 0})
	DMember(bool)                                      NPCDynamicBlockConversionOnInteract                         ___ OFFSET(get<bool>, {0x3B48, 1, 0, 0})
	DMember(bool)                                      NPC_TempInteractOverride                                    ___ OFFSET(get<bool>, {0x3B49, 1, 0, 0})
	CMember(USoundBase*)                               HeadShot_Sound                                              ___ OFFSET(get<T>, {0x3B50, 8, 0, 0})
	SMember(FName)                                     Headshot_FX_Socket                                          ___ OFFSET(get<T>, {0x3B58, 4, 0, 0})
	DMember(bool)                                      UseHeadShotFX                                               ___ OFFSET(get<bool>, {0x3B5C, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TC_WeaponTypesAllowedForHeadshotFX                          ___ OFFSET(get<T>, {0x3B60, 32, 0, 0})
	DMember(bool)                                      AllowHeadshot                                               ___ OFFSET(get<bool>, {0x3B80, 1, 0, 0})
	DMember(double)                                    AdditiveHitReactRetriggerDelay                              ___ OFFSET(get<double>, {0x3B88, 8, 0, 0})
	CMember(UAnimMontage*)                             Additive_Hit_React_Montage                                  ___ OFFSET(get<T>, {0x3B90, 8, 0, 0})
	CMember(USoundBase*)                               Death_Normal_Sound                                          ___ OFFSET(get<T>, {0x3B98, 8, 0, 0})
	CMember(UParticleSystem*)                          HeadshotFXEmitterTemplate                                   ___ OFFSET(get<T>, {0x3BA0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     Sound_Library_Collection_Tags                               ___ OFFSET(get<T>, {0x3BA8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     Sound_Library_Default_Tags                                  ___ OFFSET(get<T>, {0x3BC8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     Sound_Library_Alert_Tags                                    ___ OFFSET(get<T>, {0x3BE8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     Sound_Library_Aggressive_Tags                               ___ OFFSET(get<T>, {0x3C08, 32, 0, 0})
	CMember(TArray<USoundLibrary*>)                    SoundLibs_Default                                           ___ OFFSET(get<T>, {0x3C28, 16, 0, 0})
	CMember(TArray<USoundLibrary*>)                    SoundLibs_Alert                                             ___ OFFSET(get<T>, {0x3C38, 16, 0, 0})
	CMember(USoundLibrary*)                            CurrentSoundLib                                             ___ OFFSET(get<T>, {0x3C48, 8, 0, 0})
	CMember(TArray<USoundLibrary*>)                    SoundLibs_Aggressive                                        ___ OFFSET(get<T>, {0x3C50, 16, 0, 0})
	CMember(TArray<USoundLibrary*>)                    SoundLibs_Foley                                             ___ OFFSET(get<T>, {0x3C60, 16, 0, 0})
	CMember(TArray<USoundLibrary*>)                    SoundLibs_Foley_Water                                       ___ OFFSET(get<T>, {0x3C70, 16, 0, 0})
	CMember(USoundLibrary*)                            CurrentFoleyLib                                             ___ OFFSET(get<T>, {0x3C80, 8, 0, 0})
	DMember(double)                                    Custom_Depth_Update_Rate                                    ___ OFFSET(get<double>, {0x3C88, 8, 0, 0})
	CMember(UClass*)                                   Class                                                       ___ OFFSET(get<T>, {0x3C90, 8, 0, 0})
	CMember(UClass*)                                   GE_Converted                                                ___ OFFSET(get<T>, {0x3C98, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GE_Converted_Handle                                         ___ OFFSET(get<T>, {0x3CA0, 8, 0, 0})
	DMember(double)                                    NPC_Death_Time                                              ___ OFFSET(get<double>, {0x3CA8, 8, 0, 0})
	DMember(float)                                     ScaleMeshInOrOutPlayRate                                    ___ OFFSET(get<float>, {0x3CB0, 4, 0, 0})
	DMember(bool)                                      AllowSkipScaleOutIfNotRecentlyRendered                      ___ OFFSET(get<bool>, {0x3CB4, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  NPCAlertLevelUpdated                                        ___ OFFSET(get<T>, {0x3CB8, 16, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTagsToBlockHitReact                                 ___ OFFSET(get<T>, {0x3CC8, 32, 0, 0})
	SMember(FGameplayTag)                              GCInstantDeathTag                                           ___ OFFSET(get<T>, {0x3CE8, 4, 0, 0})
};

/// Class /Game/Athena/AI/Pawns/NPC/Parents/NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C
/// Size: 0x01A4 (0x003CEC - 0x003E90)
class ANPC_Pawn_Wildlife_Parent_C : public ANPC_Pawn_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 16016;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x3CF0, 8, 0, 0})
	CMember(UNiagaraComponent*)                        Wildlife_FootDust                                           ___ OFFSET(get<T>, {0x3CF8, 8, 0, 0})
	CMember(UFortPawnComponent_Convert*)               ConvertComponent                                            ___ OFFSET(get<T>, {0x3D00, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   Layer_Idle                                                  ___ OFFSET(get<T>, {0x3D08, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   Layer_Locomotion                                            ___ OFFSET(get<T>, {0x3D28, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   Layer_Jump                                                  ___ OFFSET(get<T>, {0x3D48, 32, 0, 0})
	DMember(char)                                      LeaderTeam                                                  ___ OFFSET(get<char>, {0x3D68, 1, 0, 0})
	CMember(USoundEffectSourcePresetChain*)            VocalSourceEffectChainOverride                              ___ OFFSET(get<T>, {0x3D70, 8, 0, 0})
	DMember(bool)                                      bTamingEnabled                                              ___ OFFSET(get<bool>, {0x3D78, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPickupGrabbed_Destroyed                                   ___ OFFSET(get<T>, {0x3D80, 16, 0, 0})
	DMember(bool)                                      bCanBeInteractedWithWhileTamed                              ___ OFFSET(get<bool>, {0x3D90, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GE_Quest_Converted_Handle                                   ___ OFFSET(get<T>, {0x3D94, 8, 0, 0})
	CMember(UClass*)                                   GE_Quest_Converted_Irwin                                    ___ OFFSET(get<T>, {0x3DA0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  ConvertedDispatcher                                         ___ OFFSET(get<T>, {0x3DA8, 16, 0, 0})
	DMember(bool)                                      bIsBeingRidden                                              ___ OFFSET(get<bool>, {0x3DB8, 1, 0, 0})
	DMember(bool)                                      NPCStatusWidgetShouldDisplayDamage                          ___ OFFSET(get<bool>, {0x3DB9, 1, 0, 0})
	CMember(UClass*)                                   GE_GoalSelectionWhileTamed                                  ___ OFFSET(get<T>, {0x3DC0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_GoalSelectionWhileTamed                                   ___ OFFSET(get<T>, {0x3DC8, 32, 0, 0})
	DMember(double)                                    CurrentEnergy                                               ___ OFFSET(get<double>, {0x3DE8, 8, 0, 0})
	SMember(FGameplayTag)                              IrwinSlidingGC                                              ___ OFFSET(get<T>, {0x3DF0, 4, 0, 0})
	DMember(bool)                                      bLeaderSetSuccess                                           ___ OFFSET(get<bool>, {0x3DF4, 1, 0, 0})
	SMember(FGameplayTag)                              JumpLandSoundLibTag                                         ___ OFFSET(get<T>, {0x3DF8, 4, 0, 0})
	SMember(FGameplayTag)                              TameSoundLibTag                                             ___ OFFSET(get<T>, {0x3DFC, 4, 0, 0})
	CMember(USoundBase*)                               SoundIndicatorSound_Unridden                                ___ OFFSET(get<T>, {0x3E00, 8, 0, 0})
	CMember(USoundBase*)                               SoundIndicatorSound_Ridden                                  ___ OFFSET(get<T>, {0x3E08, 8, 0, 0})
	DMember(bool)                                      OverrideIncomingDmg                                         ___ OFFSET(get<bool>, {0x3E10, 1, 0, 0})
	DMember(double)                                    OverridenIncomingDmgAmount                                  ___ OFFSET(get<double>, {0x3E18, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnModifiedDamageReceived                                    ___ OFFSET(get<T>, {0x3E20, 16, 0, 0})
	DMember(double)                                    ColorVariation                                              ___ OFFSET(get<double>, {0x3E30, 8, 0, 0})
	DMember(char)                                      Default_Unconvert_Reason                                    ___ OFFSET(get<char>, {0x3E38, 1, 0, 0})
	SMember(FScalableFloat)                            StuckBouncing_UnstuckEnabled                                ___ OFFSET(get<T>, {0x3E40, 40, 0, 0})
	DMember(int32_t)                                   StuckBouncing_LaunchCount                                   ___ OFFSET(get<int32_t>, {0x3E68, 4, 0, 0})
	DMember(int32_t)                                   StuckBouncing_MinLaunchCount                                ___ OFFSET(get<int32_t>, {0x3E6C, 4, 0, 0})
	SMember(FActiveGameplayEffectHandle)               StuckBouncing_GeHandle                                      ___ OFFSET(get<T>, {0x3E70, 8, 0, 0})
	CMember(UClass*)                                   StuckBouncing_GE                                            ___ OFFSET(get<T>, {0x3E78, 8, 0, 0})
	DMember(double)                                    StuckBouncing_UnstuckVelocityMaxZRotationAngle              ___ OFFSET(get<double>, {0x3E80, 8, 0, 0})
	DMember(double)                                    StuckBouncing_UnstuckVelocity                               ___ OFFSET(get<double>, {0x3E88, 8, 0, 0})
};

/// Class /Game/Athena/HUD/Actors/NPCConvertedIndicatorMarker.NPCConvertedIndicatorMarker_C
/// Size: 0x0028 (0x000628 - 0x000650)
class UNPCConvertedIndicatorMarker_C : public UAthenaMarkedActorIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1616;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(UImage*)                                   IrwinIndicator                                              ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UConvertedMarkerInfo_C*)                   RidingMarkerInfo                                            ___ OFFSET(get<T>, {0x638, 8, 0, 0})
	SMember(FLinearColor)                              CachedColor                                                 ___ OFFSET(get<T>, {0x640, 16, 0, 0})
};

/// Class /Game/Athena/AI/NPCs/Tandem/Base/Pawns/BP_PlayerPawn_Tandem.BP_PlayerPawn_Tandem_C
/// Size: 0x007A (0x006970 - 0x0069EA)
class ABP_PlayerPawn_Tandem_C : public ABP_PlayerPawn_NonParticipant_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 27114;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x6970, 8, 0, 0})
	CMember(UFortWidgetComponent*)                     NPCStatusWidget                                             ___ OFFSET(get<T>, {0x6978, 8, 0, 0})
	DMember(bool)                                      IsConverted                                                 ___ OFFSET(get<bool>, {0x6980, 1, 0, 0})
	DMember(char)                                      Leader_Team                                                 ___ OFFSET(get<char>, {0x6981, 1, 0, 0})
	SMember(FStruct_NPC_HealthInfo)                    HealthInfo                                                  ___ OFFSET(get<T>, {0x6988, 32, 0, 0})
	DMember(bool)                                      NPCStatusWidgetHealthBarDisabled                            ___ OFFSET(get<bool>, {0x69A8, 1, 0, 0})
	SMember(FScalableFloat)                            ShowHealth                                                  ___ OFFSET(get<T>, {0x69B0, 40, 0, 0})
	DMember(double)                                    NPCHealthBarHideTimeAfterDeath                              ___ OFFSET(get<double>, {0x69D8, 8, 0, 0})
	DMember(double)                                    NPCMaxDistanceFromDamageINstigatorToDrawHealthBar           ___ OFFSET(get<double>, {0x69E0, 8, 0, 0})
	DMember(bool)                                      IsHealthCheatEnabled                                        ___ OFFSET(get<bool>, {0x69E8, 1, 0, 0})
	DMember(bool)                                      IsTandemHealthEnabled                                       ___ OFFSET(get<bool>, {0x69E9, 1, 0, 0})
};

/// Class /Game/Athena/Items/QuestInteractables/AthenaQuestFunctionLibrary.AthenaQuestFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UAthenaQuestFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Athena/Cosmetics/Sprays/BP_SprayDecal.BP_SprayDecal_C
/// Size: 0x00B2 (0x000BB0 - 0x000C62)
class ABP_SprayDecal_C : public AFortSprayDecalInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3170;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xBB0, 8, 0, 0})
	DMember(double)                                    DecalFadeoutTime                                            ___ OFFSET(get<double>, {0xBB8, 8, 0, 0})
	CMember(UDecalComponent*)                          EmissiveDecal                                               ___ OFFSET(get<T>, {0xBC0, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 EmissiveDecalMID                                            ___ OFFSET(get<T>, {0xBC8, 8, 0, 0})
	DMember(double)                                    DecalSize                                                   ___ OFFSET(get<double>, {0xBD0, 8, 0, 0})
	CMember(UMaterialInterface*)                       EmissiveMatSource                                           ___ OFFSET(get<T>, {0xBD8, 8, 0, 0})
	DMember(double)                                    DecalDepth                                                  ___ OFFSET(get<double>, {0xBE0, 8, 0, 0})
	CMember(UAthenaSprayItemDefinition*)               SprayAsset                                                  ___ OFFSET(get<T>, {0xBE8, 8, 0, 0})
	DMember(int32_t)                                   LoadsOutstanding                                            ___ OFFSET(get<int32_t>, {0xBF0, 4, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               DecalTextureOverrideSoft                                    ___ OFFSET(get<T>, {0xBF8, 32, 0, 0})
	CMember(UTexture2D*)                               DecalTextureOverride                                        ___ OFFSET(get<T>, {0xC18, 8, 0, 0})
	SMember(FLinearColor)                              BannerPrimaryColor                                          ___ OFFSET(get<T>, {0xC20, 16, 0, 0})
	SMember(FLinearColor)                              BannerSecondaryColor                                        ___ OFFSET(get<T>, {0xC30, 16, 0, 0})
	CMember(AFortPlayerController*)                    SpawningPlayerController                                    ___ OFFSET(get<T>, {0xC40, 8, 0, 0})
	CMember(TArray<AActor*>)                           NearbyBuildingActors                                        ___ OFFSET(get<T>, {0xC48, 16, 0, 0})
	DMember(double)                                    SpawnStartTimeDelay                                         ___ OFFSET(get<double>, {0xC58, 8, 0, 0})
	DMember(bool)                                      bIsFrontEndPreview                                          ___ OFFSET(get<bool>, {0xC60, 1, 0, 0})
	DMember(bool)                                      bDestroyOnTrapPlaced                                        ___ OFFSET(get<bool>, {0xC61, 1, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/ZipLine/GE_Athena_ZipLine_FallDamageImmunityFX.GE_Athena_ZipLine_FallDamageImmunityFX_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_ZipLine_FallDamageImmunityFX_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Environments/Blueprints/SurfaceEffects/Sand/GE_SurfaceChange_Chrome_Surface.GE_SurfaceChange_Chrome_Surface_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_SurfaceChange_Chrome_Surface_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Environments/Blueprints/SurfaceEffects/GE_SurfaceChange_Lava.GE_SurfaceChange_Lava_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_SurfaceChange_Lava_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GE_Athena_HidingProp_ExitingProp_NoJump.GE_Athena_HidingProp_ExitingProp_NoJump_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_HidingProp_ExitingProp_NoJump_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Heroes/Abilities/Siphon/GE_SiphonEffect_Shield.GE_SiphonEffect_Shield_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_SiphonEffect_Shield_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Environments/Blueprints/DudeBro/GE_DudeBro_Vent.GE_DudeBro_Vent_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_DudeBro_Vent_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Heroes/Abilities/Siphon/GE_SiphonEffect_Heal.GE_SiphonEffect_Heal_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_SiphonEffect_Heal_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Consumables/ZipLine/GE_Athena_ZipLine_Passive.GE_Athena_ZipLine_Passive_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_ZipLine_Passive_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GE_WilliePete_PlayerLaunch_ApplyGC.GE_WilliePete_PlayerLaunch_ApplyGC_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_WilliePete_PlayerLaunch_ApplyGC_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_BlockMovement.GA_Athena_HidingProp_BlockMovement_C
/// Size: 0x0008 (0x000B28 - 0x000B30)
class UGA_Athena_HidingProp_BlockMovement_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
};

/// Class /Game/Athena/Environments/Blueprints/SurfaceEffects/GE_SurfaceChange_Ice_Suppress.GE_SurfaceChange_Ice_Suppress_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_SurfaceChange_Ice_Suppress_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GE_Athena_HidingProp_GettingInProp.GE_Athena_HidingProp_GettingInProp_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_HidingProp_GettingInProp_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/MappedEffects/GE_Athena_DBNO_HealthBonus.GE_Athena_DBNO_HealthBonus_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_DBNO_HealthBonus_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Environments/Blueprints/SurfaceEffects/Sand/GE_SurfaceChange_Sand_Surface.GE_SurfaceChange_Sand_Surface_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_SurfaceChange_Sand_Surface_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Consumables/FloppingRabbit/GA_Athena_Tethered_PassiveTriggered.GA_Athena_Tethered_PassiveTriggered_C
/// Size: 0x0014 (0x000B28 - 0x000B3C)
class UGA_Athena_Tethered_PassiveTriggered_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2876;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FGameplayTag)                              GCN_BoostTag                                                ___ OFFSET(get<T>, {0xB30, 4, 0, 0})
	SMember(FGameplayTag)                              GCN_JumpTag                                                 ___ OFFSET(get<T>, {0xB34, 4, 0, 0})
	SMember(FGameplayTag)                              ZiplineExit                                                 ___ OFFSET(get<T>, {0xB38, 4, 0, 0})
};

/// Class /Game/Athena/DrivableVehicles/GE_AthenaInVehicle.GE_AthenaInVehicle_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_AthenaInVehicle_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GE_Athena_HidingProp_ExitingProp.GE_Athena_HidingProp_ExitingProp_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_HidingProp_ExitingProp_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/DrivableVehicles/GA_AthenaEnterVehicle.GA_AthenaEnterVehicle_C
/// Size: 0x0008 (0x000B28 - 0x000B30)
class UGA_AthenaEnterVehicle_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
};

/// Class /Game/Athena/DrivableVehicles/GA_AthenaExitVehicle.GA_AthenaExitVehicle_C
/// Size: 0x0030 (0x000B28 - 0x000B58)
class UGA_AthenaExitVehicle_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FGameplayTag)                              Keep_DBNO_players_in_Vehicles                               ___ OFFSET(get<T>, {0xB30, 4, 0, 0})
	SMember(FGameplayTagContainer)                     Event_Damage_Died_Tags                                      ___ OFFSET(get<T>, {0xB38, 32, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GE_HidingProp_DestroyStructure.GE_HidingProp_DestroyStructure_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_HidingProp_DestroyStructure_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_WilliePete_WaterBodyChild.B_WilliePete_WaterBodyChild_C
/// Size: 0x0010 (0x0003D0 - 0x0003E0)
class AB_WilliePete_WaterBodyChild_C : public AFortWaterBodyActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UArrowComponent*)                          Debug                                                       ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
};

/// Class /Game/Athena/Environments/Blueprints/SurfaceEffects/GA_SurfaceChange_Ice_IceCheckOnTimer.GA_SurfaceChange_Ice_IceCheckOnTimer_C
/// Size: 0x0020 (0x000B28 - 0x000B48)
class UGA_SurfaceChange_Ice_IceCheckOnTimer_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2888;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayerPawn                                              ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FTimerHandle)                              TraceTimer                                                  ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	SMember(FTimerHandle)                              OffIceTimer                                                 ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/ThrownConsumables/IceGrenade/GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C
/// Size: 0x0010 (0x000B28 - 0x000B38)
class UGA_Athena_RemoveIceFeetOnWater_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2872;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          Fort_Player_Pawn                                            ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
};

/// Class /Game/Athena/DrivableVehicles/GA_Vehicle_ExitHoldEvent.GA_Vehicle_ExitHoldEvent_C
/// Size: 0x0030 (0x000B28 - 0x000B58)
class UGA_Vehicle_ExitHoldEvent_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FGameplayTag)                              EquippingCue                                                ___ OFFSET(get<T>, {0xB38, 4, 0, 0})
	CMember(AFortPlayerController*)                    PlayerController                                            ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
	CMember(UAbilityTask_WaitGameplayEvent*)           OnHoldExitStartedAsyncTask                                  ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
	CMember(UAbilityTask_WaitGameplayEvent*)           OnHoldExitStoppedAsyncTask                                  ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
};

/// Class /Game/Athena/Items/ForagedItems/Rift/GE_Rift_Athena_Teleport.GE_Rift_Athena_Teleport_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Rift_Athena_Teleport_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Consumables/ThrownConsumables/GE_ThrownConsumable_InWindup.GE_ThrownConsumable_InWindup_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_ThrownConsumable_InWindup_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/HUD/Duel/GA_DuelObserver.GA_DuelObserver_C
/// Size: 0x0008 (0x000B38 - 0x000B40)
class UGA_DuelObserver_C : public UFortGameplayAbility_ObserveDuels
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2880;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
};

/// Class /Game/Athena/Items/Gameplay/Sword/GE_Blade_LeapSlam_BuildingDestroy.GE_Blade_LeapSlam_BuildingDestroy_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Blade_LeapSlam_BuildingDestroy_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Consumables/AthenaConsumablesSharedFunctionLibrary.AthenaConsumablesSharedFunctionLibrary_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UAthenaConsumablesSharedFunctionLibrary_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Game/Athena/Playlists/DefaultModifiers/GE_DefaultResourceCap.GE_DefaultResourceCap_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_DefaultResourceCap_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Consumables/ZipLine/GE_ZipLine_Damage_Structure.GE_ZipLine_Damage_Structure_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_ZipLine_Damage_Structure_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C
/// Size: 0x0030 (0x000B28 - 0x000B58)
class UGA_Athena_HidingProp_LandedOn_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FScalableFloat)                            HidingEnabled                                               ___ OFFSET(get<T>, {0xB30, 40, 0, 0})
};

/// Class /Game/Athena/Environments/Blueprints/SurfaceEffects/GE_SurfaceChange_Ice.GE_SurfaceChange_Ice_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_SurfaceChange_Ice_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Environments/Blueprints/SurfaceEffects/GE_SurfaceChange_Snow.GE_SurfaceChange_Snow_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_SurfaceChange_Snow_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Environments/Blueprints/SurfaceEffects/GE_SurfaceChange_Ice_Linger.GE_SurfaceChange_Ice_Linger_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_SurfaceChange_Ice_Linger_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_ReachedEnd.GA_Athena_ZipLine_ReachedEnd_C
/// Size: 0x00F8 (0x000B28 - 0x000C20)
class UGA_Athena_ZipLine_ReachedEnd_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3104;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FScalableFloat)                            MaxLateralSpeed                                             ___ OFFSET(get<T>, {0xB38, 40, 0, 0})
	SMember(FVector)                                   ImpulseVec                                                  ___ OFFSET(get<T>, {0xB60, 24, 0, 0})
	SMember(FScalableFloat)                            JumpVertStrength                                            ___ OFFSET(get<T>, {0xB78, 40, 0, 0})
	SMember(FScalableFloat)                            LateralDamping                                              ___ OFFSET(get<T>, {0xBA0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxZiplineVel                                               ___ OFFSET(get<T>, {0xBC8, 40, 0, 0})
	DMember(bool)                                      Debug                                                       ___ OFFSET(get<bool>, {0xBF0, 1, 0, 0})
	SMember(FScalableFloat)                            MinJumpVertStrength                                         ___ OFFSET(get<T>, {0xBF8, 40, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GE_Athena_HidingProp_Teleporting.GE_Athena_HidingProp_Teleporting_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_HidingProp_Teleporting_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/HidingProp_CameraModifier.HidingProp_CameraModifier_C
/// Size: 0x0008 (0x000048 - 0x000050)
class UHidingProp_CameraModifier_C : public UCameraModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(AFortPlayerPawn*)                          Pawn                                                        ___ OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/PurpleStuff/GAT_Athena_PurpleStuff.GAT_Athena_PurpleStuff_C
/// Size: 0x0013 (0x000B35 - 0x000B48)
class UGAT_Athena_PurpleStuff_C : public UGAT_TriggeredAbility_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2888;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/PurpleStuff/GE_Athena_PurpleStuff_Health.GE_Athena_PurpleStuff_Health_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_PurpleStuff_Health_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/DrivableVehicles/GA_AthenaInVehicle.GA_AthenaInVehicle_C
/// Size: 0x0028 (0x000B28 - 0x000B50)
class UGA_AthenaInVehicle_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ExitTag                                                     ___ OFFSET(get<T>, {0xB30, 32, 0, 0})
};

/// Class /Game/Athena/Environments/Blueprints/DudeBro/GE_DudebroDamageWallsLOTS.GE_DudebroDamageWallsLOTS_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_DudebroDamageWallsLOTS_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Consumables/FloppingRabbit/GE_Athena_Tether_DamageStructure.GE_Athena_Tether_DamageStructure_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_Tether_DamageStructure_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Wildlife_Knockback_Player.GA_NPC_Wildlife_Knockback_Player_C
/// Size: 0x0000 (0x000C51 - 0x000C51)
class UGA_NPC_Wildlife_Knockback_Player_C : public UGAB_GenericApplyKnockback_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3153;

public:
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_HidingInProp.GA_Athena_HidingProp_HidingInProp_C
/// Size: 0x0050 (0x000B28 - 0x000B78)
class UGA_Athena_HidingProp_HidingInProp_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ChangeEquipmentTag                                          ___ OFFSET(get<T>, {0xB30, 32, 0, 0})
	SMember(FScalableFloat)                            Row_bDisablePlayerCollision                                 ___ OFFSET(get<T>, {0xB50, 40, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GE_Athena_HidingProp_HidingInProp.GE_Athena_HidingProp_HidingInProp_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_HidingProp_HidingInProp_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/MappedEffects/GE_Athena_DBNO_Bleed.GE_Athena_DBNO_Bleed_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_DBNO_Bleed_C : public UGET_PeriodicEnergyDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Consumables/PurpleStuff/GE_Athena_PurpleStuff_Shields.GE_Athena_PurpleStuff_Shields_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_PurpleStuff_Shields_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Environments/Blueprints/DudeBro/GA_DudeBro_Vent.GA_DudeBro_Vent_C
/// Size: 0x0044 (0x000B28 - 0x000B6C)
class UGA_DudeBro_Vent_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2924;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   VehicleSkelMesh                                             ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	DMember(double)                                    GravFloorAltitude                                           ___ OFFSET(get<double>, {0xB40, 8, 0, 0})
	DMember(double)                                    UpwardLaunchVelocity                                        ___ OFFSET(get<double>, {0xB48, 8, 0, 0})
	CMember(TArray<AActor*>)                           VentsHitBeforeLanding                                       ___ OFFSET(get<T>, {0xB50, 16, 0, 0})
	DMember(int32_t)                                   NumVentsToHitForQuest                                       ___ OFFSET(get<int32_t>, {0xB60, 4, 0, 0})
	SMember(FGameplayTag)                              Tag_to_Check                                                ___ OFFSET(get<T>, {0xB64, 4, 0, 0})
	SMember(FGameplayTag)                              VentBlocked                                                 ___ OFFSET(get<T>, {0xB68, 4, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GE_Athena_HidingProp_TeleportCoolDown.GE_Athena_HidingProp_TeleportCoolDown_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_HidingProp_TeleportCoolDown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Environments/Blueprints/SurfaceEffects/GE_SurfaceChange_Lava_DamageCoolDown.GE_SurfaceChange_Lava_DamageCoolDown_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_SurfaceChange_Lava_DamageCoolDown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Environments/Blueprints/SurfaceEffects/GE_SurfaceChange_Lava_Damage.GE_SurfaceChange_Lava_Damage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_SurfaceChange_Lava_Damage_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Environments/Blueprints/SurfaceEffects/GAB_SurfaceChange.GAB_SurfaceChange_C
/// Size: 0x02A0 (0x000B28 - 0x000DC8)
class UGAB_SurfaceChange_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3528;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	DMember(bool)                                      Debug                                                       ___ OFFSET(get<bool>, {0xB30, 1, 0, 0})
	SMember(FScalableFloat)                            RemovalDelay                                                ___ OFFSET(get<T>, {0xB38, 40, 0, 0})
	SMember(FScalableFloat)                            IcySurfacesEnabled                                          ___ OFFSET(get<T>, {0xB60, 40, 0, 0})
	SMember(FGameplayTagContainer)                     HasIce                                                      ___ OFFSET(get<T>, {0xB88, 32, 0, 0})
	CMember(UClass*)                                   GE_SurfaceChange_Ice                                        ___ OFFSET(get<T>, {0xBA8, 8, 0, 0})
	CMember(UClass*)                                   GE_SurfaceChange_Snow                                       ___ OFFSET(get<T>, {0xBB0, 8, 0, 0})
	CMember(UClass*)                                   GE_SurfaceChange_Lava                                       ___ OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(AFortPawn*)                                AvatarPawn                                                  ___ OFFSET(get<T>, {0xBC0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     IceTags                                                     ___ OFFSET(get<T>, {0xBC8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     LavaTags                                                    ___ OFFSET(get<T>, {0xBE8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SnowTags                                                    ___ OFFSET(get<T>, {0xC08, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SandTags                                                    ___ OFFSET(get<T>, {0xC28, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ChromeTags                                                  ___ OFFSET(get<T>, {0xC48, 32, 0, 0})
	DMember(double)                                    LavaBounceMultiplier                                        ___ OFFSET(get<double>, {0xC68, 8, 0, 0})
	DMember(double)                                    RandomAngleOffset                                           ___ OFFSET(get<double>, {0xC70, 8, 0, 0})
	SMember(FScalableFloat)                            RandomConeAngle                                             ___ OFFSET(get<T>, {0xC78, 40, 0, 0})
	SMember(FScalableFloat)                            FacingAngleVelocityComponent                                ___ OFFSET(get<T>, {0xCA0, 40, 0, 0})
	SMember(FScalableFloat)                            BaseVerticalBounceVelocity                                  ___ OFFSET(get<T>, {0xCC8, 40, 0, 0})
	SMember(FScalableFloat)                            BaseLateralBounceVelocity                                   ___ OFFSET(get<T>, {0xCF0, 40, 0, 0})
	SMember(FScalableFloat)                            MaxBounceMultiplier                                         ___ OFFSET(get<T>, {0xD18, 40, 0, 0})
	SMember(FScalableFloat)                            BounceMultiplierStepAmount                                  ___ OFFSET(get<T>, {0xD40, 40, 0, 0})
	SMember(FRandomStream)                             RandomAngleStream                                           ___ OFFSET(get<T>, {0xD68, 8, 0, 0})
	SMember(FGameplayTag)                              LavaBounceCue                                               ___ OFFSET(get<T>, {0xD70, 4, 0, 0})
	SMember(FGameplayTag)                              EventTag_SandUnburrow                                       ___ OFFSET(get<T>, {0xD74, 4, 0, 0})
	SMember(FScalableFloat)                            IceLingerDuration                                           ___ OFFSET(get<T>, {0xD78, 40, 0, 0})
	SMember(FGameplayTagContainer)                     PreviousSurfaceTagContainer                                 ___ OFFSET(get<T>, {0xDA0, 32, 0, 0})
	CMember(UAsyncAction_StartListeningToStatefulEvent*) GamePhaseUpdatedAsyncTask                                 ___ OFFSET(get<T>, {0xDC0, 8, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/Grenade/BP_ProjectileTrajectory_Athena.BP_ProjectileTrajectory_Athena_C
/// Size: 0x0000 (0x000309 - 0x000309)
class ABP_ProjectileTrajectory_Athena_C : public ABP_ProjectileTrajectory_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 777;

public:
};

/// Class /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C
/// Size: 0x00A0 (0x000B28 - 0x000BC8)
class UGA_Athena_ZipLine_Jump_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3016;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FScalableFloat)                            MaxLateralSpeed                                             ___ OFFSET(get<T>, {0xB38, 40, 0, 0})
	SMember(FVector)                                   ImpulseVec                                                  ___ OFFSET(get<T>, {0xB60, 24, 0, 0})
	SMember(FScalableFloat)                            JumpVertStrength                                            ___ OFFSET(get<T>, {0xB78, 40, 0, 0})
	SMember(FScalableFloat)                            JumpLateralDamper                                           ___ OFFSET(get<T>, {0xBA0, 40, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/ZipLine/PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C
/// Size: 0x0139 (0x000C90 - 0x000DC9)
class APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C : public AFortAthenaSplineZipline
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3529;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xC90, 8, 0, 0})
	CMember(UStaticMesh*)                              SplineStaticMesh                                            ___ OFFSET(get<T>, {0xC98, 8, 0, 0})
	DMember(double)                                    TangentSmoothStrength                                       ___ OFFSET(get<double>, {0xCA0, 8, 0, 0})
	DMember(bool)                                      AutoSmoothTangents                                          ___ OFFSET(get<bool>, {0xCA8, 1, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              ForwardMeshAxis                                             ___ OFFSET(get<T>, {0xCA9, 1, 0, 0})
	SMember(FVector)                                   MotorOffset                                                 ___ OFFSET(get<T>, {0xCB0, 24, 0, 0})
	CMember(AActor*)                                   PoleA                                                       ___ OFFSET(get<T>, {0xCC8, 8, 0, 0})
	CMember(AActor*)                                   PoleB                                                       ___ OFFSET(get<T>, {0xCD0, 8, 0, 0})
	SMember(FVector)                                   PoleASocketLocation                                         ___ OFFSET(get<T>, {0xCD8, 24, 0, 0})
	SMember(FVector)                                   PoleBSocketLocation                                         ___ OFFSET(get<T>, {0xCF0, 24, 0, 0})
	DMember(int32_t)                                   LowerPointID                                                ___ OFFSET(get<int32_t>, {0xD08, 4, 0, 0})
	DMember(int32_t)                                   HigherPointID                                               ___ OFFSET(get<int32_t>, {0xD0C, 4, 0, 0})
	SMember(FVector)                                   HigherEndLocation                                           ___ OFFSET(get<T>, {0xD10, 24, 0, 0})
	SMember(FVector)                                   LowerEndLocation                                            ___ OFFSET(get<T>, {0xD28, 24, 0, 0})
	DMember(double)                                    AutoLinearFactorLow                                         ___ OFFSET(get<double>, {0xD40, 8, 0, 0})
	DMember(double)                                    AutoLinearFactorHigh                                        ___ OFFSET(get<double>, {0xD48, 8, 0, 0})
	DMember(double)                                    AutoSplineTangentLengthCoef                                 ___ OFFSET(get<double>, {0xD50, 8, 0, 0})
	DMember(double)                                    AutoSplineTangentHorizCoef                                  ___ OFFSET(get<double>, {0xD58, 8, 0, 0})
	DMember(double)                                    AutoSplineTangentVertCoef                                   ___ OFFSET(get<double>, {0xD60, 8, 0, 0})
	DMember(bool)                                      Auto_Set_Spline_Ends                                        ___ OFFSET(get<bool>, {0xD68, 1, 0, 0})
	DMember(bool)                                      Auto_Set_Spline_Mids                                        ___ OFFSET(get<bool>, {0xD69, 1, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         SplineMaterials                                             ___ OFFSET(get<T>, {0xD70, 16, 0, 0})
	SMember(FGameplayTagContainer)                     BlockInteractTags                                           ___ OFFSET(get<T>, {0xD80, 32, 0, 0})
	DMember(double)                                    TilingDivisor                                               ___ OFFSET(get<double>, {0xDA0, 8, 0, 0})
	CMember(TArray<USplineMeshComponent*>)             SplineMeshComponents                                        ___ OFFSET(get<T>, {0xDA8, 16, 0, 0})
	CMember(TArray<AFortPlayerPawn*>)                  PlayerPawnArray                                             ___ OFFSET(get<T>, {0xDB8, 16, 0, 0})
	DMember(bool)                                      Debug                                                       ___ OFFSET(get<bool>, {0xDC8, 1, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/ZipLine/SplineZipline/BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C
/// Size: 0x0128 (0x000C90 - 0x000DB8)
class ABP_Athena_Environmental_ZipLine_Spline_C : public AFortAthenaSplineZipline
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3512;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xC90, 8, 0, 0})
	CMember(USphereComponent*)                         EndPointInteractSphere                                      ___ OFFSET(get<T>, {0xC98, 8, 0, 0})
	CMember(USphereComponent*)                         StartPointInteractSphere                                    ___ OFFSET(get<T>, {0xCA0, 8, 0, 0})
	CMember(UStaticMesh*)                              SplineStaticMesh                                            ___ OFFSET(get<T>, {0xCA8, 8, 0, 0})
	DMember(double)                                    TangentSmoothStrength                                       ___ OFFSET(get<double>, {0xCB0, 8, 0, 0})
	DMember(bool)                                      AutoSmoothTangents                                          ___ OFFSET(get<bool>, {0xCB8, 1, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              ForwardMeshAxis                                             ___ OFFSET(get<T>, {0xCB9, 1, 0, 0})
	SMember(FVector)                                   MotorOffset                                                 ___ OFFSET(get<T>, {0xCC0, 24, 0, 0})
	CMember(ABuildingActor*)                           PoleA                                                       ___ OFFSET(get<T>, {0xCD8, 8, 0, 0})
	CMember(ABuildingActor*)                           PoleB                                                       ___ OFFSET(get<T>, {0xCE0, 8, 0, 0})
	SMember(FVector)                                   PoleASocketLocation                                         ___ OFFSET(get<T>, {0xCE8, 24, 0, 0})
	SMember(FVector)                                   PoleBSocketLocation                                         ___ OFFSET(get<T>, {0xD00, 24, 0, 0})
	DMember(int32_t)                                   LowerPointID                                                ___ OFFSET(get<int32_t>, {0xD18, 4, 0, 0})
	DMember(int32_t)                                   HigherPointID                                               ___ OFFSET(get<int32_t>, {0xD1C, 4, 0, 0})
	SMember(FVector)                                   HigherEndLocation                                           ___ OFFSET(get<T>, {0xD20, 24, 0, 0})
	SMember(FVector)                                   LowerEndLocation                                            ___ OFFSET(get<T>, {0xD38, 24, 0, 0})
	DMember(double)                                    AutoLinearFactorLow                                         ___ OFFSET(get<double>, {0xD50, 8, 0, 0})
	DMember(double)                                    AutoLinearFactorHigh                                        ___ OFFSET(get<double>, {0xD58, 8, 0, 0})
	DMember(double)                                    AutoSplineTangentLengthCoef                                 ___ OFFSET(get<double>, {0xD60, 8, 0, 0})
	DMember(double)                                    AutoSplineTangentHorizCoef                                  ___ OFFSET(get<double>, {0xD68, 8, 0, 0})
	DMember(double)                                    AutoSplineTangentVertCoef                                   ___ OFFSET(get<double>, {0xD70, 8, 0, 0})
	DMember(bool)                                      Auto_Set_Spline_Ends                                        ___ OFFSET(get<bool>, {0xD78, 1, 0, 0})
	DMember(bool)                                      Auto_Set_Spline_Mids                                        ___ OFFSET(get<bool>, {0xD79, 1, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         SplineMaterials                                             ___ OFFSET(get<T>, {0xD80, 16, 0, 0})
	SMember(FGameplayTagContainer)                     BlockInteractTags                                           ___ OFFSET(get<T>, {0xD90, 32, 0, 0})
	DMember(double)                                    TilingDivisor                                               ___ OFFSET(get<double>, {0xDB0, 8, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/Parents/GA_Athena_Consumable_Throw_Parent.GA_Athena_Consumable_Throw_Parent_C
/// Size: 0x0448 (0x000B88 - 0x000FD0)
class UGA_Athena_Consumable_Throw_Parent_C : public UFortGameplayAbility_ThrowTrajectory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4048;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB90, 8, 0, 0})
	DMember(bool)                                      AbilityKeyPressed                                           ___ OFFSET(get<bool>, {0xB98, 1, 0, 0})
	DMember(bool)                                      InThrowWindup                                               ___ OFFSET(get<bool>, {0xB99, 1, 0, 0})
	DMember(double)                                    AdditionalThrowAngle                                        ___ OFFSET(get<double>, {0xBA0, 8, 0, 0})
	DMember(double)                                    MaxTossPitch                                                ___ OFFSET(get<double>, {0xBA8, 8, 0, 0})
	CMember(AFortProjectileBase*)                      SpawnedProjectile                                           ___ OFFSET(get<T>, {0xBB0, 8, 0, 0})
	SMember(FScalableFloat)                            bIsEnabled                                                  ___ OFFSET(get<T>, {0xBB8, 40, 0, 0})
	SMember(FGameplayTagContainer)                     Tag_BlockAbilityActivation                                  ___ OFFSET(get<T>, {0xBE0, 32, 0, 0})
	CMember(UClass*)                                   ThrownProjectileClass                                       ___ OFFSET(get<T>, {0xC00, 8, 0, 0})
	DMember(bool)                                      bIsSecondaryFire                                            ___ OFFSET(get<bool>, {0xC08, 1, 0, 0})
	DMember(bool)                                      bThrowInstantly                                             ___ OFFSET(get<bool>, {0xC09, 1, 0, 0})
	SMember(FScalableFloat)                            ProjectileGravityScale                                      ___ OFFSET(get<T>, {0xC10, 40, 0, 0})
	SMember(FScalableFloat)                            ProjectileSpeed                                             ___ OFFSET(get<T>, {0xC38, 40, 0, 0})
	CMember(ABP_ProjectileTrajectory_C*)               TrajectoryIndicator                                         ___ OFFSET(get<T>, {0xC60, 8, 0, 0})
	CMember(UClass*)                                   TrajectoryIndicatorClass                                    ___ OFFSET(get<T>, {0xC68, 8, 0, 0})
	DMember(double)                                    TrajectoryUpdateInterval                                    ___ OFFSET(get<double>, {0xC70, 8, 0, 0})
	CMember(UAnimMontage*)                             CookMontage                                                 ___ OFFSET(get<T>, {0xC78, 8, 0, 0})
	CMember(UAnimMontage*)                             CookMontage1P                                               ___ OFFSET(get<T>, {0xC80, 8, 0, 0})
	CMember(UAnimMontage*)                             ThrowMontage                                                ___ OFFSET(get<T>, {0xC88, 8, 0, 0})
	CMember(UAnimMontage*)                             ThrowMontage1P                                              ___ OFFSET(get<T>, {0xC90, 8, 0, 0})
	SMember(FGameplayTag)                              GC_OnThrow                                                  ___ OFFSET(get<T>, {0xC98, 4, 0, 0})
	DMember(double)                                    TrajectoryTimeStep                                          ___ OFFSET(get<double>, {0xCA0, 8, 0, 0})
	DMember(int32_t)                                   TrajectoryMaxSteps                                          ___ OFFSET(get<int32_t>, {0xCA8, 4, 0, 0})
	SMember(FName)                                     TrajectoryCollisionProfileName                              ___ OFFSET(get<T>, {0xCAC, 4, 0, 0})
	SMember(FGameplayTag)                              GC_CookLoop                                                 ___ OFFSET(get<T>, {0xCB0, 4, 0, 0})
	CMember(UClass*)                                   GE_InWindup                                                 ___ OFFSET(get<T>, {0xCB8, 8, 0, 0})
	CMember(UClass*)                                   CameraMode                                                  ___ OFFSET(get<T>, {0xCC0, 8, 0, 0})
	SMember(FGameplayTag)                              EC_DefaultExplosion                                         ___ OFFSET(get<T>, {0xCC8, 4, 0, 0})
	DMember(int32_t)                                   ExplosionEffectLevel                                        ___ OFFSET(get<int32_t>, {0xCCC, 4, 0, 0})
	SMember(FGameplayTag)                              EC_DefaultHit                                               ___ OFFSET(get<T>, {0xCD0, 4, 0, 0})
	DMember(int32_t)                                   HitEffectLevel                                              ___ OFFSET(get<int32_t>, {0xCD4, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnProjectileSpawn                                           ___ OFFSET(get<T>, {0xCD8, 16, 0, 0})
	DMember(bool)                                      HasAdditionalExplosion                                      ___ OFFSET(get<bool>, {0xCE8, 1, 0, 0})
	SMember(FGameplayTag)                              EC_AdditionalExplosion                                      ___ OFFSET(get<T>, {0xCEC, 4, 0, 0})
	DMember(int32_t)                                   AdditionalExplodeLevel                                      ___ OFFSET(get<int32_t>, {0xCF0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     QuestCreditTargetTag                                        ___ OFFSET(get<T>, {0xCF8, 32, 0, 0})
	DMember(bool)                                      ReturnPhysicalMaterial                                      ___ OFFSET(get<bool>, {0xD18, 1, 0, 0})
	SMember(FGameplayTagContainer)                     Tags_UseNullFailedActivateReason                            ___ OFFSET(get<T>, {0xD20, 32, 0, 0})
	DMember(bool)                                      bIsThrowing                                                 ___ OFFSET(get<bool>, {0xD40, 1, 0, 0})
	DMember(bool)                                      SpawnedOnEquip                                              ___ OFFSET(get<bool>, {0xD41, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               Handle_GE_InWindup                                          ___ OFFSET(get<T>, {0xD44, 8, 0, 0})
	SMember(FFortGameplayEffectContainerSpec)          HitContainerSpec                                            ___ OFFSET(get<T>, {0xD50, 184, 0, 0})
	SMember(FFortGameplayEffectContainerSpec)          ExplosionContainerSpec                                      ___ OFFSET(get<T>, {0xE08, 184, 0, 0})
	SMember(FFortGameplayEffectContainerSpec)          AdditionalExplosionContainerSpec                            ___ OFFSET(get<T>, {0xEC0, 184, 0, 0})
	DMember(bool)                                      bPreventDeploymentInBlockAreas                              ___ OFFSET(get<bool>, {0xF78, 1, 0, 0})
	DMember(float)                                     DeployableBlockingAreaCheckRadius                           ___ OFFSET(get<float>, {0xF7C, 4, 0, 0})
	SMember(FVector)                                   DeployableBlockingAreaCheckOffset                           ___ OFFSET(get<T>, {0xF80, 24, 0, 0})
	SMember(FFortProjectileTrajectoryData)             Projectile_Trajectory_Data                                  ___ OFFSET(get<T>, {0xF98, 32, 0, 0})
	DMember(float)                                     Trajectory_Max_Distance_Between_Spline_Points               ___ OFFSET(get<float>, {0xFB8, 4, 0, 0})
	DMember(int32_t)                                   Trajectory_Max_Bounces                                      ___ OFFSET(get<int32_t>, {0xFBC, 4, 0, 0})
	DMember(float)                                     Trajectory_Initial_Distance                                 ___ OFFSET(get<float>, {0xFC0, 4, 0, 0})
	DMember(bool)                                      Projectile_Trajectory_Data_Initialized                      ___ OFFSET(get<bool>, {0xFC4, 1, 0, 0})
	DMember(double)                                    Projectile_Gravity_Scale_to_Use                             ___ OFFSET(get<double>, {0xFC8, 8, 0, 0})
};

/// Class /Game/Athena/Playlists/DefaultModifiers/GE_DefaultTurboBuildSettings.GE_DefaultTurboBuildSettings_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_DefaultTurboBuildSettings_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Consumables/FloppingRabbit/GE_Athena_Tethered.GE_Athena_Tethered_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_Tethered_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Consumables/FloppingRabbit/GA_Athena_Tethered.GA_Athena_Tethered_C
/// Size: 0x008C (0x000B28 - 0x000BB4)
class UGA_Athena_Tethered_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2996;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GE_TetheredHandle                                           ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          OwningFortPlayerPawn                                        ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	DMember(double)                                    maxSpeedToPlayGCN                                           ___ OFFSET(get<double>, {0xB40, 8, 0, 0})
	SMember(FGameplayTag)                              GCTagPlayerLand                                             ___ OFFSET(get<T>, {0xB48, 4, 0, 0})
	CMember(UClass*)                                   StructureDamageGE                                           ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
	SMember(FGameplayTag)                              SmashGC                                                     ___ OFFSET(get<T>, {0xB58, 4, 0, 0})
	SMember(FScalableFloat)                            BreakStructuresOnTetherEnabled                              ___ OFFSET(get<T>, {0xB60, 40, 0, 0})
	SMember(FScalableFloat)                            BreakStructuresOnTetherRange                                ___ OFFSET(get<T>, {0xB88, 40, 0, 0})
	SMember(FGameplayTag)                              Event_FishingForceEnd                                       ___ OFFSET(get<T>, {0xBB0, 4, 0, 0})
};

/// Class /Game/Athena/HUD/Team/RebootCardIndicator.RebootCardIndicator_C
/// Size: 0x0030 (0x000658 - 0x000688)
class URebootCardIndicator_C : public UAthenaRebootCardIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1672;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UBorder*)                                  Border_Nameplate                                            ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UImage*)                                   burst                                                       ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UImage*)                                   Image_RebootIcon                                            ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(USpacer*)                                  IndicatorSpacer                                             ___ OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UHorizontalBox*)                           RebootCountdownContainer                                    ___ OFFSET(get<T>, {0x680, 8, 0, 0})
};

/// Class /Game/Athena/Items/ForagedItems/Rift/GA_Rift_Athena_Skydive.GA_Rift_Athena_Skydive_C
/// Size: 0x00F8 (0x000B28 - 0x000C20)
class UGA_Rift_Athena_Skydive_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3104;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UAnimMontage*)                             FallingAnimation                                            ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	DMember(double)                                    Hangtimee                                                   ___ OFFSET(get<double>, {0xB38, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   VehicleSkelMesh                                             ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
	SMember(FScalableFloat)                            HangTime                                                    ___ OFFSET(get<T>, {0xB48, 40, 0, 0})
	SMember(FGameplayTag)                              EventTag                                                    ___ OFFSET(get<T>, {0xB70, 4, 0, 0})
	SMember(FScalableFloat)                            KickFromVehicle_                                            ___ OFFSET(get<T>, {0xB78, 40, 0, 0})
	CMember(USoundBase*)                               LocalPlayerSound                                            ___ OFFSET(get<T>, {0xBA0, 8, 0, 0})
	CMember(UClass*)                                   GameplayCueGE                                               ___ OFFSET(get<T>, {0xBA8, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xBB0, 8, 0, 0})
	DMember(bool)                                      bHolstered                                                  ___ OFFSET(get<bool>, {0xBB8, 1, 0, 0})
	SMember(FName)                                     RiftSkydiveHolster                                          ___ OFFSET(get<T>, {0xBBC, 4, 0, 0})
	SMember(FVector)                                   ImpulseStrength                                             ___ OFFSET(get<T>, {0xBC0, 24, 0, 0})
	DMember(bool)                                      bNeedsInputEnable                                           ___ OFFSET(get<bool>, {0xBD8, 1, 0, 0})
	SMember(FTimerHandle)                              SafetyTimer                                                 ___ OFFSET(get<T>, {0xBE0, 8, 0, 0})
	SMember(FVector)                                   NewVar                                                      ___ OFFSET(get<T>, {0xBE8, 24, 0, 0})
	SMember(FGameplayTagContainer)                     UnblockTagsIfPassenger                                      ___ OFFSET(get<T>, {0xC00, 32, 0, 0})
};

/// Class /Game/Athena/HUD/AthenaEliminationIndicator.AthenaEliminationIndicator_C
/// Size: 0x0028 (0x000630 - 0x000658)
class UAthenaEliminationIndicator_C : public UAthenaEliminationIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1624;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x630, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Outro                                                       ___ OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UImage*)                                   Arrow                                                       ___ OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UImage*)                                   Image_Diamondpulse                                          ___ OFFSET(get<T>, {0x650, 8, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/PurpleStuff/GA_Athena_Slurp_OLD.GA_Athena_Slurp_OLD_C
/// Size: 0x0030 (0x000B28 - 0x000B58)
class UGA_Athena_Slurp_OLD_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	DMember(int32_t)                                   IncreCheck                                                  ___ OFFSET(get<int32_t>, {0xB38, 4, 0, 0})
	DMember(double)                                    MaxTicks                                                    ___ OFFSET(get<double>, {0xB40, 8, 0, 0})
	SMember(FTimerHandle)                              TimerHandle                                                 ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
	DMember(double)                                    TickRate                                                    ___ OFFSET(get<double>, {0xB50, 8, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_Grenade_Base.B_Prj_Athena_Grenade_Base_C
/// Size: 0x0185 (0x000A88 - 0x000C0D)
class AB_Prj_Athena_Grenade_Base_C : public AFortProjectileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3085;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA88, 8, 0, 0})
	CMember(UFortCollisionAudioComponent*)             FortCollisionAudio                                          ___ OFFSET(get<T>, {0xA90, 8, 0, 0})
	CMember(URotatingMovementComponent*)               RotatingMovement                                            ___ OFFSET(get<T>, {0xA98, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Fuse_Particle                                               ___ OFFSET(get<T>, {0xAA0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Mesh                                                        ___ OFFSET(get<T>, {0xAA8, 8, 0, 0})
	CMember(UAudioComponent*)                          GrenadeFuse_AudioComponent                                  ___ OFFSET(get<T>, {0xAB0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_Distance                                             ___ OFFSET(get<T>, {0xAB8, 8, 0, 0})
	CMember(TWeakObjectPtr<UParticleSystem*>)          P_Explosion                                                 ___ OFFSET(get<T>, {0xAC0, 32, 0, 0})
	CMember(USoundBase*)                               Cue_ExplosionSound                                          ___ OFFSET(get<T>, {0xAE0, 8, 0, 0})
	CMember(TWeakObjectPtr<UParticleSystem*>)          P_Explosion_Water                                           ___ OFFSET(get<T>, {0xAE8, 32, 0, 0})
	DMember(int32_t)                                   NumberOfBouncesTillExplode                                  ___ OFFSET(get<int32_t>, {0xB08, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumberOfBounces                                      ___ OFFSET(get<int32_t>, {0xB0C, 4, 0, 0})
	CMember(USoundBase*)                               Cue_GrenadeFuseSound                                        ___ OFFSET(get<T>, {0xB10, 8, 0, 0})
	DMember(double)                                    BouncePawnAgainstPawnGravityScale                           ___ OFFSET(get<double>, {0xB18, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ExplosionForceFeedbackNear                                  ___ OFFSET(get<T>, {0xB20, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ExplosionForceFeedbackFar                                   ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(USoundBase*)                               Cue_Bounce                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(UClass*)                                   ExplosionCameraShake                                        ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	DMember(double)                                    FuseTime                                                    ___ OFFSET(get<double>, {0xB40, 8, 0, 0})
	DMember(double)                                    ExplosionRadius                                             ___ OFFSET(get<double>, {0xB48, 8, 0, 0})
	SMember(FRotator)                                  Explosion_Rotation                                          ___ OFFSET(get<T>, {0xB50, 24, 0, 0})
	CMember(UAudioComponent*)                          WaterFuseAudioComponent                                     ___ OFFSET(get<T>, {0xB68, 8, 0, 0})
	CMember(USoundBase*)                               Water_Debris_Explosion                                      ___ OFFSET(get<T>, {0xB70, 8, 0, 0})
	CMember(USoundBase*)                               Splash_Sound                                                ___ OFFSET(get<T>, {0xB78, 8, 0, 0})
	CMember(UTexture*)                                 SoundIndicatorIcon                                          ___ OFFSET(get<T>, {0xB80, 8, 0, 0})
	SMember(FTimerHandle)                              FuseIndicatorTimer                                          ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           NS_Explosion                                                ___ OFFSET(get<T>, {0xB90, 32, 0, 0})
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           NS_Explosion_Water                                          ___ OFFSET(get<T>, {0xBB0, 32, 0, 0})
	CMember(EFXType)                                   FXType                                                      ___ OFFSET(get<T>, {0xBD0, 1, 0, 0})
	CMember(UFXSystemAsset*)                           VFX_Explosion                                               ___ OFFSET(get<T>, {0xBD8, 8, 0, 0})
	CMember(UFXSystemAsset*)                           VFX_Explosion_Water                                         ___ OFFSET(get<T>, {0xBE0, 8, 0, 0})
	SMember(FTimerHandle)                              FuseTimer_                                                  ___ OFFSET(get<T>, {0xBE8, 8, 0, 0})
	CMember(UNiagaraSystem*)                           NS_HitWater                                                 ___ OFFSET(get<T>, {0xBF0, 8, 0, 0})
	CMember(USoundBase*)                               WaterFuseSound                                              ___ OFFSET(get<T>, {0xBF8, 8, 0, 0})
	CMember(UFXSystemAsset*)                           FX_Physical_Surface                                         ___ OFFSET(get<T>, {0xC00, 8, 0, 0})
	DMember(int32_t)                                   PhysicalSurfaceID                                           ___ OFFSET(get<int32_t>, {0xC08, 4, 0, 0})
	DMember(bool)                                      bShowFuseSoundIndicator                                     ___ OFFSET(get<bool>, {0xC0C, 1, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/Grenade/B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C
/// Size: 0x003B (0x000C0D - 0x000C48)
class AB_Prj_Athena_FragGrenade_C : public AB_Prj_Athena_Grenade_Base_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3144;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xC10, 8, 0, 0})
	CMember(UNiagaraComponent*)                        NS_Object_FloatingInWater                                   ___ OFFSET(get<T>, {0xC18, 8, 0, 0})
	CMember(UBP_SurfaceTypeSoundComponent_C*)          BP_SurfaceTypeSoundComponent                                ___ OFFSET(get<T>, {0xC20, 8, 0, 0})
	DMember(float)                                     PreExploWarning_PreExplo_E5859FFE443F57359EC2C0AB73DFA4CD   ___ OFFSET(get<float>, {0xC28, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           PreExploWarning__Direction_E5859FFE443F57359EC2C0AB73DFA4CD ___ OFFSET(get<T>, {0xC2C, 1, 0, 0})
	CMember(UTimelineComponent*)                       PreExploWarning                                             ___ OFFSET(get<T>, {0xC30, 8, 0, 0})
	SMember(FGameplayTag)                              FeedbackCue                                                 ___ OFFSET(get<T>, {0xC38, 4, 0, 0})
	CMember(UNiagaraSystem*)                           Niagara_Bounse                                              ___ OFFSET(get<T>, {0xC40, 8, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/Grenade/GA_Athena_Grenade_Rethrow.GA_Athena_Grenade_Rethrow_C
/// Size: 0x0028 (0x000FD0 - 0x000FF8)
class UGA_Athena_Grenade_Rethrow_C : public UGA_Athena_Consumable_Throw_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4088;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xFD0, 8, 0, 0})
	CMember(AFortProjectileBase*)                      Projectile                                                  ___ OFFSET(get<T>, {0xFD8, 8, 0, 0})
	DMember(double)                                    TossDelay                                                   ___ OFFSET(get<double>, {0xFE0, 8, 0, 0})
	SMember(FName)                                     HolsterId                                                   ___ OFFSET(get<T>, {0xFE8, 4, 0, 0})
	DMember(double)                                    PostThrowEndDelay                                           ___ OFFSET(get<double>, {0xFF0, 8, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_SmashParent.GA_Athena_ZipLine_SmashParent_C
/// Size: 0x00B0 (0x000B40 - 0x000BF0)
class UGA_Athena_ZipLine_SmashParent_C : public UFortGameplayAbility_ZiplineSmashBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3056;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
	DMember(double)                                    UpdateIntervalForSmashVolume                                ___ OFFSET(get<double>, {0xB50, 8, 0, 0})
	CMember(UClass*)                                   StructureDamageGE                                           ___ OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(ABP_ZipLine_Athena_Harness_C*)             ZiplineHarness                                              ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(AFortAthenaZipline*)                       Zipline                                                     ___ OFFSET(get<T>, {0xB68, 8, 0, 0})
	CMember(UPrimitiveComponent*)                      ZiplineInteractComponent                                    ___ OFFSET(get<T>, {0xB70, 8, 0, 0})
	CMember(TEnumAsByte<EFortCustomMovement>)          DrivingCustomMovementMode                                   ___ OFFSET(get<T>, {0xB78, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               FallImmunityGEFX                                            ___ OFFSET(get<T>, {0xB7C, 8, 0, 0})
	SMember(FGameplayTag)                              AttachVFXCue                                                ___ OFFSET(get<T>, {0xB84, 4, 0, 0})
	SMember(FGameplayTag)                              SmashCue                                                    ___ OFFSET(get<T>, {0xB88, 4, 0, 0})
	SMember(FGameplayTag)                              T_Swimming                                                  ___ OFFSET(get<T>, {0xB8C, 4, 0, 0})
	SMember(FGameplayTag)                              T_Falling                                                   ___ OFFSET(get<T>, {0xB90, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TagsThatBlockFallImmunityRemoval                            ___ OFFSET(get<T>, {0xB98, 32, 0, 0})
	SMember(FTimerHandle)                              TH_DelayFallDamageRemoval                                   ___ OFFSET(get<T>, {0xBB8, 8, 0, 0})
	SMember(FTimerHandle)                              SurroundingsCheckTimerHandle                                ___ OFFSET(get<T>, {0xBC0, 8, 0, 0})
	SMember(FGameplayTag)                              ZiplineExitTag                                              ___ OFFSET(get<T>, {0xBC8, 4, 0, 0})
	SMember(FVector)                                   Smash_Box_Extent                                            ___ OFFSET(get<T>, {0xBD0, 24, 0, 0})
	DMember(double)                                    SmashBoxPosAdditionalZ                                      ___ OFFSET(get<double>, {0xBE8, 8, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/ZipLine/GA_Athena_ZipLine_Smash.GA_Athena_ZipLine_Smash_C
/// Size: 0x0000 (0x000BF0 - 0x000BF0)
class UGA_Athena_ZipLine_Smash_C : public UGA_Athena_ZipLine_SmashParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3056;

public:
};

/// Class /Game/Athena/Items/EnvironmentalItems/SCMachine/BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C
/// Size: 0x00F3 (0x000A80 - 0x000B73)
class ABGA_Athena_SCMachine_Pickup_C : public ABuildingGameplayActorSpawnChip
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2931;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA80, 8, 0, 0})
	CMember(UCapsuleComponent*)                        OverlapCollision                                            ___ OFFSET(get<T>, {0xA88, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     ParentMesh                                                  ___ OFFSET(get<T>, {0xA90, 8, 0, 0})
	CMember(UFortLinkToActorComponent*)                FortLinkToActor                                             ___ OFFSET(get<T>, {0xA98, 8, 0, 0})
	CMember(UAudioComponent*)                          SC_Machine_Memory_Card_Loop_Cue                             ___ OFFSET(get<T>, {0xAA0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 SpawnInEffect                                               ___ OFFSET(get<T>, {0xAA8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     BackgroundGlow                                              ___ OFFSET(get<T>, {0xAB0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Card                                                        ___ OFFSET(get<T>, {0xAB8, 8, 0, 0})
	DMember(int32_t)                                   UnHide                                                      ___ OFFSET(get<int32_t>, {0xAC0, 4, 0, 0})
	DMember(double)                                    DelayBeforeUnhide                                           ___ OFFSET(get<double>, {0xAC8, 8, 0, 0})
	DMember(char)                                      OwnerTeam                                                   ___ OFFSET(get<char>, {0xAD0, 1, 0, 0})
	SMember(FTimerHandle)                              Timer_DestroyPickup                                         ___ OFFSET(get<T>, {0xAD8, 8, 0, 0})
	SMember(FScalableFloat)                            Row_PickupLife                                              ___ OFFSET(get<T>, {0xAE0, 40, 0, 0})
	SMember(FText)                                     InteractText                                                ___ OFFSET(get<T>, {0xB08, 24, 0, 0})
	CMember(UParticleSystem*)                          SpawnOutParticle                                            ___ OFFSET(get<T>, {0xB20, 8, 0, 0})
	CMember(USoundBase*)                               PickupSound                                                 ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	DMember(bool)                                      SpawnSoundPlayed                                            ___ OFFSET(get<bool>, {0xB30, 1, 0, 0})
	CMember(USoundBase*)                               SpawnInSound                                                ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	DMember(bool)                                      IsPendingKill                                               ___ OFFSET(get<bool>, {0xB40, 1, 0, 0})
	DMember(bool)                                      HideAndKill                                                 ___ OFFSET(get<bool>, {0xB41, 1, 0, 0})
	SMember(FScalableFloat)                            Row_PickUpInteractTime                                      ___ OFFSET(get<T>, {0xB48, 40, 0, 0})
	DMember(bool)                                      IsDelayingDeath                                             ___ OFFSET(get<bool>, {0xB70, 1, 0, 0})
	DMember(bool)                                      OwnerDiedInVortex                                           ___ OFFSET(get<bool>, {0xB71, 1, 0, 0})
	DMember(bool)                                      CollectedPickup                                             ___ OFFSET(get<bool>, {0xB72, 1, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/SCMachine/GA_Athena_SCMachine_Passive.GA_Athena_SCMachine_Passive_C
/// Size: 0x0058 (0x000B28 - 0x000B80)
class UGA_Athena_SCMachine_Passive_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    PlayerPawn                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FVector)                                   SpawnZOffset                                                ___ OFFSET(get<T>, {0xB38, 24, 0, 0})
	SMember(FGameplayTag)                              BlockChipSpawnTag                                           ___ OFFSET(get<T>, {0xB50, 4, 0, 0})
	SMember(FScalableFloat)                            DropRebootCards                                             ___ OFFSET(get<T>, {0xB58, 40, 0, 0})
};

/// Class /Game/Athena/BuildingActors/Props/Building/ActorBlueprints/Containers/Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C
/// Size: 0x0110 (0x000BB8 - 0x000CC8)
class AAthena_Prop_ParentBuildingContainerBlueprint_C : public ABuildingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3272;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xBB8, 8, 0, 0})
	DMember(bool)                                      DebugWind                                                   ___ OFFSET(get<bool>, {0xBC0, 1, 0, 0})
	CMember(TArray<UMaterialInterface*>)               IntenseWindMaterialsForPreview                              ___ OFFSET(get<T>, {0xBC8, 16, 0, 0})
	CMember(UStaticMeshComponent*)                     Wind_Intensity_Debug_Mesh                                   ___ OFFSET(get<T>, {0xBD8, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               OriginalMaterials                                           ___ OFFSET(get<T>, {0xBE0, 16, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Debug_TempMaterial                                          ___ OFFSET(get<T>, {0xBF0, 8, 0, 0})
	DMember(double)                                    DebugWindYaw                                                ___ OFFSET(get<double>, {0xBF8, 8, 0, 0})
	DMember(double)                                    Debug_Wind_Intensity                                        ___ OFFSET(get<double>, {0xC00, 8, 0, 0})
	DMember(bool)                                      Set_Max_Actor_Scale                                         ___ OFFSET(get<bool>, {0xC08, 1, 0, 0})
	DMember(double)                                    Max_Scale                                                   ___ OFFSET(get<double>, {0xC10, 8, 0, 0})
	DMember(bool)                                      Disable_TOD_Lights_and_Material_Emissive_Values             ___ OFFSET(get<bool>, {0xC18, 1, 0, 0})
	DMember(bool)                                      Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active   ___ OFFSET(get<bool>, {0xC19, 1, 0, 0})
	DMember(bool)                                      Use_An_Alternate_Shadow_Mesh_When_The_Light_is_On_          ___ OFFSET(get<bool>, {0xC1A, 1, 0, 0})
	CMember(UStaticMesh*)                              AlternateShadowStaticMesh                                   ___ OFFSET(get<T>, {0xC20, 8, 0, 0})
	DMember(bool)                                      Animate_Emissive_and_Lights_Over_Time                       ___ OFFSET(get<bool>, {0xC28, 1, 0, 0})
	CMember(TArray<FLinearColor>)                      CodeControlled_EmissiveColor                                ___ OFFSET(get<T>, {0xC30, 16, 0, 0})
	CMember(TArray<double>)                            CodeControlled_LightConeOpacity                             ___ OFFSET(get<T>, {0xC40, 16, 0, 0})
	SMember(FDayPhaseFloats)                           Light_Intensity_Over_Time_of_Day_                           ___ OFFSET(get<T>, {0xC50, 16, 0, 0})
	DMember(double)                                    Day_Phase_Transition_Length                                 ___ OFFSET(get<double>, {0xC60, 8, 0, 0})
	SMember(FDayPhaseFloats)                           Emissive_Intensity_Over_Time_of_Day                         ___ OFFSET(get<T>, {0xC68, 16, 0, 0})
	DMember(double)                                    Volumetric_Light_Scattering_Intensity                       ___ OFFSET(get<double>, {0xC78, 8, 0, 0})
	DMember(bool)                                      Cast_Volumetric_Shadows                                     ___ OFFSET(get<bool>, {0xC80, 1, 0, 0})
	DMember(bool)                                      Animate_Lights_With_A_Curve___Disables_time_of_day_light_controls ___ OFFSET(get<bool>, {0xC81, 1, 0, 0})
	DMember(bool)                                      Animate_Mesh_MID_Emissive_Value_with_a_Curve___Disables_time_of_day_light_controls ___ OFFSET(get<bool>, {0xC82, 1, 0, 0})
	CMember(UCurveFloat*)                              LightAnimationCurve                                         ___ OFFSET(get<T>, {0xC88, 8, 0, 0})
	DMember(double)                                    CodeControlled_Animation_Curve_Animation_Length             ___ OFFSET(get<double>, {0xC90, 8, 0, 0})
	DMember(int32_t)                                   CodeControlled_NumberOfMaterials                            ___ OFFSET(get<int32_t>, {0xC98, 4, 0, 0})
	CMember(TArray<double>)                            NewVar                                                      ___ OFFSET(get<T>, {0xCA0, 16, 0, 0})
	DMember(double)                                    Random_Time_Scale_Percent                                   ___ OFFSET(get<double>, {0xCB0, 8, 0, 0})
	DMember(double)                                    CodeControlled_CurrentPlayLength                            ___ OFFSET(get<double>, {0xCB8, 8, 0, 0})
	DMember(double)                                    Snow_Coverage_Amount                                        ___ OFFSET(get<double>, {0xCC0, 8, 0, 0})
};

/// Class /Game/Athena/HUD/Team/RebootVanIndicator.RebootVanIndicator_C
/// Size: 0x0040 (0x000638 - 0x000678)
class URebootVanIndicator_C : public UAthenaRebootVanIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1656;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x638, 8, 0, 0})
	CMember(UWidgetAnimation*)                         Intro                                                       ___ OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UBorder*)                                  Border_Nameplate                                            ___ OFFSET(get<T>, {0x648, 8, 0, 0})
	CMember(UImage*)                                   Icon                                                        ___ OFFSET(get<T>, {0x650, 8, 0, 0})
	CMember(UImage*)                                   Image_RebootIcon                                            ___ OFFSET(get<T>, {0x658, 8, 0, 0})
	CMember(UImage*)                                   Image_SmallIndicator                                        ___ OFFSET(get<T>, {0x660, 8, 0, 0})
	CMember(UImage*)                                   Image_Van                                                   ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(USpacer*)                                  IndicatorSpacer                                             ___ OFFSET(get<T>, {0x670, 8, 0, 0})
};

/// Class /Game/Athena/Tutorial/Contextual/ContextTutorialIndicator.ContextTutorialIndicator_C
/// Size: 0x0111 (0x000668 - 0x000779)
class UContextTutorialIndicator_C : public UAthenaContextTutorialIndicator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1913;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x668, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_in_bounce                                                ___ OFFSET(get<T>, {0x670, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Text_Out_Fast                                            ___ OFFSET(get<T>, {0x678, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Marker_Out02                                             ___ OFFSET(get<T>, {0x680, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Marker_Out01                                             ___ OFFSET(get<T>, {0x688, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Text_Out                                                 ___ OFFSET(get<T>, {0x690, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Text_in                                                  ___ OFFSET(get<T>, {0x698, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Arrow_Disappear                                          ___ OFFSET(get<T>, {0x6A0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Arrow_Bounce                                             ___ OFFSET(get<T>, {0x6A8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Arrow_Transition                                         ___ OFFSET(get<T>, {0x6B0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Out_Arrow_Marker                                         ___ OFFSET(get<T>, {0x6B8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Marker_FadeIN                                            ___ OFFSET(get<T>, {0x6C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Arrow_Fade                                               ___ OFFSET(get<T>, {0x6C8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_in_Spin_Arrow_Marker                                     ___ OFFSET(get<T>, {0x6D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_DiamondBox_Fade                                          ___ OFFSET(get<T>, {0x6D8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Diamond_Disappear                                        ___ OFFSET(get<T>, {0x6E0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Marker_MoveReaction                                      ___ OFFSET(get<T>, {0x6E8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_in_DiamondBox_Spin                                       ___ OFFSET(get<T>, {0x6F0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_Marker_Idle                                              ___ OFFSET(get<T>, {0x6F8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_in_Diamond_Spin                                          ___ OFFSET(get<T>, {0x700, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_border                                                   ___ OFFSET(get<T>, {0x708, 8, 0, 0})
	CMember(UWidgetAnimation*)                         ST_in                                                       ___ OFFSET(get<T>, {0x710, 8, 0, 0})
	CMember(UImage*)                                   Circle                                                      ___ OFFSET(get<T>, {0x718, 8, 0, 0})
	CMember(UImage*)                                   Circle                                                      ___ OFFSET(get<T>, {0x720, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Description                                                 ___ OFFSET(get<T>, {0x728, 8, 0, 0})
	CMember(UEditableTextBox*)                         DescriptionOLD                                              ___ OFFSET(get<T>, {0x730, 8, 0, 0})
	CMember(UImage*)                                   Icon                                                        ___ OFFSET(get<T>, {0x738, 8, 0, 0})
	CMember(UImage*)                                   Icon                                                        ___ OFFSET(get<T>, {0x740, 8, 0, 0})
	CMember(UImage*)                                   Image_SmallIndicator                                        ___ OFFSET(get<T>, {0x748, 8, 0, 0})
	CMember(UImage*)                                   Image_SmallIndicator_Child                                  ___ OFFSET(get<T>, {0x750, 8, 0, 0})
	CMember(UImage*)                                   Sign                                                        ___ OFFSET(get<T>, {0x758, 8, 0, 0})
	CMember(UImage*)                                   Sign                                                        ___ OFFSET(get<T>, {0x760, 8, 0, 0})
	CMember(UImage*)                                   White_Box_Child                                             ___ OFFSET(get<T>, {0x768, 8, 0, 0})
	CMember(UImage*)                                   White_Box_Solo                                              ___ OFFSET(get<T>, {0x770, 8, 0, 0})
	DMember(bool)                                      bIntroAnimationDone                                         ___ OFFSET(get<bool>, {0x778, 1, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Teleport.GA_Athena_HidingProp_Teleport_C
/// Size: 0x0098 (0x000B28 - 0x000BC0)
class UGA_Athena_HidingProp_Teleport_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3008;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  NewEventDispatcher                                          ___ OFFSET(get<T>, {0xB30, 16, 0, 0})
	CMember(AB_HidingProp_C*)                          HidingProp                                                  ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
	CMember(AB_HidingProp_C*)                          TargetTeleporter                                            ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_HudElementToHide                                          ___ OFFSET(get<T>, {0xB50, 32, 0, 0})
	SMember(FGameplayTag)                              TargetPropTeleportingCue                                    ___ OFFSET(get<T>, {0xB70, 4, 0, 0})
	SMember(FTimerHandle)                              WobbleHandle                                                ___ OFFSET(get<T>, {0xB78, 8, 0, 0})
	SMember(FGameplayTag)                              WobbleCue                                                   ___ OFFSET(get<T>, {0xB80, 4, 0, 0})
	DMember(double)                                    ServerWorldTime                                             ___ OFFSET(get<double>, {0xB88, 8, 0, 0})
	SMember(FGameplayTag)                              EnterCue                                                    ___ OFFSET(get<T>, {0xB90, 4, 0, 0})
	SMember(FGameplayTag)                              HidingInPropTag                                             ___ OFFSET(get<T>, {0xB94, 4, 0, 0})
	SMember(FGameplayTagContainer)                     ChangeEquipmentTag                                          ___ OFFSET(get<T>, {0xB98, 32, 0, 0})
	SMember(FActiveGameplayEffectHandle)               TeleportingGEOnPlayer                                       ___ OFFSET(get<T>, {0xBB8, 8, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/B_HidingProp.B_HidingProp_C
/// Size: 0x0570 (0x000C10 - 0x001180)
class AB_HidingProp_C : public AFortHidingProp
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4480;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xC10, 8, 0, 0})
	CMember(USceneComponent*)                          ProjectileLocation_ForwardVector                            ___ OFFSET(get<T>, {0xC18, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     LandedOnCollisionMesh                                       ___ OFFSET(get<T>, {0xC20, 8, 0, 0})
	CMember(USphereComponent*)                         Sphere                                                      ___ OFFSET(get<T>, {0xC28, 8, 0, 0})
	CMember(USceneComponent*)                          HideLocation_ForwardVector                                  ___ OFFSET(get<T>, {0xC30, 8, 0, 0})
	DMember(float)                                     Loot_MovementTimeline_Forward_0FC694AE4A45D691CB6BD5A8CD00E521 ___ OFFSET(get<float>, {0xC38, 4, 0, 0})
	DMember(float)                                     Loot_MovementTimeline_Z_0FC694AE4A45D691CB6BD5A8CD00E521    ___ OFFSET(get<float>, {0xC3C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Loot_MovementTimeline__Direction_0FC694AE4A45D691CB6BD5A8CD00E521 ___ OFFSET(get<T>, {0xC40, 1, 0, 0})
	CMember(UTimelineComponent*)                       Loot_MovementTimeline                                       ___ OFFSET(get<T>, {0xC48, 8, 0, 0})
	SMember(FScalableFloat)                            Enabled                                                     ___ OFFSET(get<T>, {0xC50, 40, 0, 0})
	SMember(FScalableFloat)                            HidingEnabled                                               ___ OFFSET(get<T>, {0xC78, 40, 0, 0})
	SMember(FScalableFloat)                            PlayerLimit                                                 ___ OFFSET(get<T>, {0xCA0, 40, 0, 0})
	SMember(FScalableFloat)                            TeleportEnabled                                             ___ OFFSET(get<T>, {0xCC8, 40, 0, 0})
	SMember(FScalableFloat)                            CanTeleport                                                 ___ OFFSET(get<T>, {0xCF0, 40, 0, 0})
	CMember(TArray<AFortPawn*>)                        HidingPlayers                                               ___ OFFSET(get<T>, {0xD18, 16, 0, 0})
	SMember(FGameplayTag)                              EnterGameplayCue                                            ___ OFFSET(get<T>, {0xD28, 4, 0, 0})
	SMember(FGameplayTag)                              ExitGameplayCue                                             ___ OFFSET(get<T>, {0xD2C, 4, 0, 0})
	SMember(FGameplayTag)                              LandedOnGameplayCue                                         ___ OFFSET(get<T>, {0xD30, 4, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Mid                                                         ___ OFFSET(get<T>, {0xD38, 8, 0, 0})
	SMember(FGameplayTag)                              RustleGameplayCue                                           ___ OFFSET(get<T>, {0xD40, 4, 0, 0})
	SMember(FGameplayTag)                              ExitGameplayCue_Player                                      ___ OFFSET(get<T>, {0xD44, 4, 0, 0})
	SMember(FGameplayTag)                              WhileEnteringGameplayCue                                    ___ OFFSET(get<T>, {0xD48, 4, 0, 0})
	DMember(double)                                    ObstructionTraceLength                                      ___ OFFSET(get<double>, {0xD50, 8, 0, 0})
	CMember(TArray<TEnumAsByte>)                       DestroyObjectTypes                                          ___ OFFSET(get<T>, {0xD58, 16, 0, 0})
	CMember(TArray<AFortPawn*>)                        Array                                                       ___ OFFSET(get<T>, {0xD68, 16, 0, 0})
	DMember(int32_t)                                   Int                                                         ___ OFFSET(get<int32_t>, {0xD78, 4, 0, 0})
	SMember(FVector)                                   DeimosPropSpawnerOffset                                     ___ OFFSET(get<T>, {0xD80, 24, 0, 0})
	DMember(bool)                                      FixedEntranceDirection                                      ___ OFFSET(get<bool>, {0xD98, 1, 0, 0})
	DMember(double)                                    MaxInteractAngle                                            ___ OFFSET(get<double>, {0xDA0, 8, 0, 0})
	SMember(FVector)                                   WobbleLocationOffset                                        ___ OFFSET(get<T>, {0xDA8, 24, 0, 0})
	DMember(double)                                    InteractBelowPropDistance                                   ___ OFFSET(get<double>, {0xDC0, 8, 0, 0})
	CMember(TMap<AFortPawn*, double>)                  HiddenPlayersAndEnterTimes                                  ___ OFFSET(get<T>, {0xDC8, 80, 0, 0})
	CMember(AFortPawn*)                                LastPawnToInteract                                          ___ OFFSET(get<T>, {0xE18, 8, 0, 0})
	CMember(AB_HidingProp_C*)                          TargetTeleporter                                            ___ OFFSET(get<T>, {0xE20, 8, 0, 0})
	SMember(FGameplayTag)                              TeleporterEnterGameplayCue                                  ___ OFFSET(get<T>, {0xE28, 4, 0, 0})
	SMember(FGameplayTag)                              TeleporterExitGameplayCue                                   ___ OFFSET(get<T>, {0xE2C, 4, 0, 0})
	SMember(FGameplayTag)                              LoopingTeleportingCue                                       ___ OFFSET(get<T>, {0xE30, 4, 0, 0})
	SMember(FGameplayTag)                              GC_Wobble                                                   ___ OFFSET(get<T>, {0xE34, 4, 0, 0})
	SMember(FTimerHandle)                              WobbleTimerHandle                                           ___ OFFSET(get<T>, {0xE38, 8, 0, 0})
	CMember(TArray<FGameplayTag>)                      BlockEntranceTags                                           ___ OFFSET(get<T>, {0xE40, 16, 0, 0})
	CMember(TArray<FGameplayTag>)                      BlockExitTags                                               ___ OFFSET(get<T>, {0xE50, 16, 0, 0})
	CMember(UAnimMontage*)                             EnterAnimMontage                                            ___ OFFSET(get<T>, {0xE60, 8, 0, 0})
	CMember(UAnimMontage*)                             ExitAnimMontage                                             ___ OFFSET(get<T>, {0xE68, 8, 0, 0})
	CMember(AFortPawn*)                                LastPawnToHide                                              ___ OFFSET(get<T>, {0xE70, 8, 0, 0})
	SMember(FGameplayTag)                              TeleportingStateGC                                          ___ OFFSET(get<T>, {0xE78, 4, 0, 0})
	DMember(bool)                                      RandomWobbleNormal                                          ___ OFFSET(get<bool>, {0xE7C, 1, 0, 0})
	DMember(bool)                                      SingleOccupant                                              ___ OFFSET(get<bool>, {0xE7D, 1, 0, 0})
	DMember(bool)                                      Teleporting                                                 ___ OFFSET(get<bool>, {0xE7E, 1, 0, 0})
	DMember(bool)                                      JumpOut                                                     ___ OFFSET(get<bool>, {0xE7F, 1, 0, 0})
	CMember(UClass*)                                   GE_OnExitingPropNoJump_BlockActions                         ___ OFFSET(get<T>, {0xE80, 8, 0, 0})
	DMember(bool)                                      DestroyInNonSpyLTM                                          ___ OFFSET(get<bool>, {0xE88, 1, 0, 0})
	DMember(bool)                                      ActiveInSpyLTM                                              ___ OFFSET(get<bool>, {0xE89, 1, 0, 0})
	CMember(TArray<FGameplayTag>)                      ForceAllowInteractTags                                      ___ OFFSET(get<T>, {0xE90, 16, 0, 0})
	SMember(FGameplayTag)                              IsTeleporter                                                ___ OFFSET(get<T>, {0xEA0, 4, 0, 0})
	SMember(FGameplayTag)                              ContainsPlayerRepNof                                        ___ OFFSET(get<T>, {0xEA4, 4, 0, 0})
	SMember(FVector)                                   ObstructionTraceExtents                                     ___ OFFSET(get<T>, {0xEA8, 24, 0, 0})
	SMember(FVector)                                   ObstructionTraceStartOffSet                                 ___ OFFSET(get<T>, {0xEC0, 24, 0, 0})
	DMember(double)                                    ExitLaunchVelocity                                          ___ OFFSET(get<double>, {0xED8, 8, 0, 0})
	SMember(FVector)                                   AdditionalLaunchVelocity                                    ___ OFFSET(get<T>, {0xEE0, 24, 0, 0})
	SMember(FVector)                                   FixedEntraceObstructionTraceEndOffset                       ___ OFFSET(get<T>, {0xEF8, 24, 0, 0})
	DMember(bool)                                      isActiveTeleportExit                                        ___ OFFSET(get<bool>, {0xF10, 1, 0, 0})
	CMember(UClass*)                                   GE_TeleportAbilityGranted                                   ___ OFFSET(get<T>, {0xF18, 8, 0, 0})
	DMember(bool)                                      DisableWhenSubmergedInWater                                 ___ OFFSET(get<bool>, {0xF20, 1, 0, 0})
	SMember(FGameplayTagContainer)                     DisableWhenSubmergedExceptionTags                           ___ OFFSET(get<T>, {0xF28, 32, 0, 0})
	CMember(TArray<AFortPawn*>)                        NonCosmeticPawns                                            ___ OFFSET(get<T>, {0xF48, 16, 0, 0})
	CMember(UClass*)                                   CameraModifier                                              ___ OFFSET(get<T>, {0xF58, 8, 0, 0})
	SMember(FVector)                                   NewVar                                                      ___ OFFSET(get<T>, {0xF60, 24, 0, 0})
	CMember(AActor*)                                   Pawn                                                        ___ OFFSET(get<T>, {0xF78, 8, 0, 0})
	SMember(FVector)                                   Loot_CachedActorForward                                     ___ OFFSET(get<T>, {0xF80, 24, 0, 0})
	CMember(TArray<FVector>)                           Loot_VectorOffsets                                          ___ OFFSET(get<T>, {0xF98, 16, 0, 0})
	DMember(bool)                                      SpawnedLoot                                                 ___ OFFSET(get<bool>, {0xFA8, 1, 0, 0})
	DMember(double)                                    Loot_MoveForwardDistance                                    ___ OFFSET(get<double>, {0xFB0, 8, 0, 0})
	DMember(double)                                    Loot_MoveUpDistance                                         ___ OFFSET(get<double>, {0xFB8, 8, 0, 0})
	DMember(double)                                    Loot_SpawnRadius                                            ___ OFFSET(get<double>, {0xFC0, 8, 0, 0})
	SMember(FVector)                                   Loot_SpawnOffset                                            ___ OFFSET(get<T>, {0xFC8, 24, 0, 0})
	DMember(bool)                                      ShouldSpawnLoot                                             ___ OFFSET(get<bool>, {0xFE0, 1, 0, 0})
	SMember(FString)                                   Loot_Tier_Group                                             ___ OFFSET(get<T>, {0xFE8, 16, 0, 0})
	DMember(bool)                                      SetEntranceRotation                                         ___ OFFSET(get<bool>, {0xFF8, 1, 0, 0})
	CMember(UClass*)                                   PropSpecificEffectToApplyToHiders                           ___ OFFSET(get<T>, {0x1000, 8, 0, 0})
	SMember(FScalableFloat)                            RustlesPerWobble                                            ___ OFFSET(get<T>, {0x1008, 40, 0, 0})
	SMember(FScalableFloat)                            RustleWobbleRadius                                          ___ OFFSET(get<T>, {0x1030, 40, 0, 0})
	SMember(FScalableFloat)                            EnterWobbleRadius                                           ___ OFFSET(get<T>, {0x1058, 40, 0, 0})
	DMember(double)                                    NonJumpExitDistance                                         ___ OFFSET(get<double>, {0x1080, 8, 0, 0})
	CMember(UClass*)                                   Camera_Mode                                                 ___ OFFSET(get<T>, {0x1088, 8, 0, 0})
	DMember(bool)                                      MoveToActorOnEnter                                          ___ OFFSET(get<bool>, {0x1090, 1, 0, 0})
	DMember(bool)                                      IgnorePhysicsBodyCollisionOnEnter                           ___ OFFSET(get<bool>, {0x1091, 1, 0, 0})
	DMember(bool)                                      bCanRustleAndWobble                                         ___ OFFSET(get<bool>, {0x1092, 1, 0, 0})
	DMember(bool)                                      SkipRestoreCameraViewTargetOnStopHiding                     ___ OFFSET(get<bool>, {0x1093, 1, 0, 0})
	DMember(bool)                                      SkipRootMotionMovementOnStopHiding                          ___ OFFSET(get<bool>, {0x1094, 1, 0, 0})
	SMember(FRotator)                                  AddedSetEntranceRotation                                    ___ OFFSET(get<T>, {0x1098, 24, 0, 0})
	DMember(double)                                    MoveToActorDelayOnEnter                                     ___ OFFSET(get<double>, {0x10B0, 8, 0, 0})
	DMember(double)                                    MoveToActorDurationOverride                                 ___ OFFSET(get<double>, {0x10B8, 8, 0, 0})
	SMember(FMarkedActorDisplayInfo)                   MarkerDisplay                                               ___ OFFSET(get<T>, {0x10C0, 168, 0, 0})
	SMember(FVector)                                   MarkerPositionOffset                                        ___ OFFSET(get<T>, {0x1168, 24, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GE_WilliePete_PlayerLaunch_Granted.GE_WilliePete_PlayerLaunch_Granted_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_WilliePete_PlayerLaunch_Granted_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GE_Athena_HidingProp_ApplyTeleportGA.GE_Athena_HidingProp_ApplyTeleportGA_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_HidingProp_ApplyTeleportGA_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/GA_WilliePete_PlayerLaunch.GA_WilliePete_PlayerLaunch_C
/// Size: 0x0078 (0x000B28 - 0x000BA0)
class UGA_WilliePete_PlayerLaunch_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    OwningPawn                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(UAnimMontage*)                             ExitMontage                                                 ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	SMember(FScalableFloat)                            LaunchHeightValue                                           ___ OFFSET(get<T>, {0xB40, 40, 0, 0})
	CMember(AB_HidingProp_WilliePete_C*)               WilliePeteLauncher                                          ___ OFFSET(get<T>, {0xB68, 8, 0, 0})
	SMember(FGameplayTagContainer)                     PlayerLaunchTag                                             ___ OFFSET(get<T>, {0xB70, 32, 0, 0})
	CMember(UClass*)                                   GE_WilliePete_PlayerLaunch_ApplyGC                          ___ OFFSET(get<T>, {0xB90, 8, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    TeleportExitPlayer                                          ___ OFFSET(get<T>, {0xB98, 8, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/Props/B_HidingProp_WilliePete.B_HidingProp_WilliePete_C
/// Size: 0x0232 (0x001180 - 0x0013B2)
class AB_HidingProp_WilliePete_C : public AB_HidingProp_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5042;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1180, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     overlapCylinder                                             ___ OFFSET(get<T>, {0x1188, 8, 0, 0})
	CMember(UAudioComponent*)                          WilliePete_Ambient_Loop                                     ___ OFFSET(get<T>, {0x1190, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Geyser                                                      ___ OFFSET(get<T>, {0x1198, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Whirlpool_01                                              ___ OFFSET(get<T>, {0x11A0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_WilliePete_SurfaceVerticalSplash                          ___ OFFSET(get<T>, {0x11A8, 8, 0, 0})
	CMember(UFortProjectileMovementComponent*)         OverlappedFortProjectileMovementComponent                   ___ OFFSET(get<T>, {0x11B0, 8, 0, 0})
	CMember(UProjectileMovementComponent*)             OverlappedStandardProjectileMovementComponent               ___ OFFSET(get<T>, {0x11B8, 8, 0, 0})
	CMember(AActor*)                                   TeleportingNonPawn                                          ___ OFFSET(get<T>, {0x11C0, 8, 0, 0})
	SMember(FHitResult)                                SphereOverlapResult                                         ___ OFFSET(get<T>, {0x11C8, 224, 0, 0})
	DMember(double)                                    ProjectileSpeedCeiling                                      ___ OFFSET(get<double>, {0x12A8, 8, 0, 0})
	SMember(FRotator)                                  ProjectileExitFVectorRotation                               ___ OFFSET(get<T>, {0x12B0, 24, 0, 0})
	DMember(int32_t)                                   WaterLevel                                                  ___ OFFSET(get<int32_t>, {0x12C8, 4, 0, 0})
	SMember(FGameplayTag)                              GC_Exit                                                     ___ OFFSET(get<T>, {0x12CC, 4, 0, 0})
	SMember(FGameplayTag)                              GC_Enter                                                    ___ OFFSET(get<T>, {0x12D0, 4, 0, 0})
	SMember(FScalableFloat)                            EnabledValue                                                ___ OFFSET(get<T>, {0x12D8, 40, 0, 0})
	SMember(FScalableFloat)                            LaunchHeightValue                                           ___ OFFSET(get<T>, {0x1300, 40, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    LaunchPawn                                                  ___ OFFSET(get<T>, {0x1328, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               LaunchGrantedEffectHandle                                   ___ OFFSET(get<T>, {0x1330, 8, 0, 0})
	SMember(FGameplayTagContainer)                     T_Quest                                                     ___ OFFSET(get<T>, {0x1338, 32, 0, 0})
	CMember(UClass*)                                   SpawnedWaterBody                                            ___ OFFSET(get<T>, {0x1358, 8, 0, 0})
	SMember(FGameplayTag)                              GC_ScreenFX                                                 ___ OFFSET(get<T>, {0x1360, 4, 0, 0})
	DMember(bool)                                      isOnTestMap                                                 ___ OFFSET(get<bool>, {0x1364, 1, 0, 0})
	CMember(USoundBase*)                               Launch_Sound                                                ___ OFFSET(get<T>, {0x1368, 8, 0, 0})
	SMember(FVector)                                   AdjustedLocation                                            ___ OFFSET(get<T>, {0x1370, 24, 0, 0})
	DMember(bool)                                      skipAnimForLaunch                                           ___ OFFSET(get<bool>, {0x1388, 1, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    ExitingPawn                                                 ___ OFFSET(get<T>, {0x1390, 8, 0, 0})
	CMember(UMovementComponent*)                       OverlappedMovementComponent                                 ___ OFFSET(get<T>, {0x1398, 8, 0, 0})
	DMember(double)                                    ProjectileSpeedMult                                         ___ OFFSET(get<double>, {0x13A0, 8, 0, 0})
	DMember(double)                                    PickupSpeedMult                                             ___ OFFSET(get<double>, {0x13A8, 8, 0, 0})
	DMember(bool)                                      bSetSilentDie                                               ___ OFFSET(get<bool>, {0x13B0, 1, 0, 0})
	DMember(bool)                                      bSetSpawnedWaterBody                                        ___ OFFSET(get<bool>, {0x13B1, 1, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_JumpOut.GA_Athena_HidingProp_JumpOut_C
/// Size: 0x0008 (0x000B28 - 0x000B30)
class UGA_Athena_HidingProp_JumpOut_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/HidingProps/GA_Athena_HidingProp_Hide.GA_Athena_HidingProp_Hide_C
/// Size: 0x0170 (0x000B28 - 0x000C98)
class UGA_Athena_HidingProp_Hide_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3224;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(AB_HidingProp_C*)                          HidingProp                                                  ___ OFFSET(get<T>, {0xB38, 8, 0, 0})
	CMember(UAnimMontage*)                             Enter_Anim_Montage                                          ___ OFFSET(get<T>, {0xB40, 8, 0, 0})
	SMember(FGameplayTag)                              GC_Wobble                                                   ___ OFFSET(get<T>, {0xB48, 4, 0, 0})
	SMember(FScalableFloat)                            ExitBlockShootDelay                                         ___ OFFSET(get<T>, {0xB50, 40, 0, 0})
	SMember(FGameplayTagContainer)                     TC_Quest                                                    ___ OFFSET(get<T>, {0xB78, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_PlayerOwned                                              ___ OFFSET(get<T>, {0xB98, 32, 0, 0})
	SMember(FScalableFloat)                            RustleMinDelay                                              ___ OFFSET(get<T>, {0xBB8, 40, 0, 0})
	SMember(FScalableFloat)                            RustleMaxDelay                                              ___ OFFSET(get<T>, {0xBE0, 40, 0, 0})
	CMember(AFortPlayerController*)                    PlayerController                                            ___ OFFSET(get<T>, {0xC08, 8, 0, 0})
	SMember(FGameplayTagContainer)                     HidingInPropTag                                             ___ OFFSET(get<T>, {0xC10, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GettingInPropTag                                            ___ OFFSET(get<T>, {0xC30, 32, 0, 0})
	SMember(FGameplayTag)                              CurieBurningTag                                             ___ OFFSET(get<T>, {0xC50, 4, 0, 0})
	DMember(bool)                                      AllowCosmetics                                              ___ OFFSET(get<bool>, {0xC54, 1, 0, 0})
	SMember(FGameplayTag)                              DisallowCosmeticsTag                                        ___ OFFSET(get<T>, {0xC58, 4, 0, 0})
	DMember(bool)                                      LandedOnProp                                                ___ OFFSET(get<bool>, {0xC5C, 1, 0, 0})
	SMember(FTimerHandle)                              LockOnTimer                                                 ___ OFFSET(get<T>, {0xC60, 8, 0, 0})
	SMember(FVector)                                   HideLocationForwardVectorWorldPos                           ___ OFFSET(get<T>, {0xC68, 24, 0, 0})
	SMember(FRotator)                                  HideLocationForwardVectorWorldRot                           ___ OFFSET(get<T>, {0xC80, 24, 0, 0})
};

/// Class /Game/Athena/MappedEffects/GE_Athena_DBNO_Start.GE_Athena_DBNO_Start_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_DBNO_Start_C : public UGE_Map_Fortitude_To_Health_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Settings/Screens/PressAnyKey.PressAnyKey_C
/// Size: 0x0000 (0x0005A0 - 0x0005A0)
class UPressAnyKey_C : public UFortSettingsPressAnyKey
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
};

/// Class /Game/Athena/Settings/SettingsListEntry_Header.SettingsListEntry_Header_C
/// Size: 0x0000 (0x000310 - 0x000310)
class USettingsListEntry_Header_C : public UFortSettingsListEntry_Setting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
};

/// Class /Game/Athena/HUD/FortHUDElementWrapper.FortHUDElementWrapper_C
/// Size: 0x0008 (0x000310 - 0x000318)
class UFortHUDElementWrapper_C : public UFortHUDElementWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	CMember(UNamedSlot*)                               Content                                                     ___ OFFSET(get<T>, {0x310, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Screens/PreviewUnbindAction.PreviewUnbindAction_C
/// Size: 0x0028 (0x0002C0 - 0x0002E8)
class UPreviewUnbindAction_C : public UFortSettingsPreviewActionUnbind
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 744;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UCommonBorder*)                            BorderFrame                                                 ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(UCommonBorder*)                            CommonBorder                                                ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(USizeBox*)                                 PrimaryKeybindTextSizeBox                                   ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(USizeBox*)                                 SecondaryKeybindTextSizeBox                                 ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
};

/// Class /Game/Athena/UI/Matchmaking/SimpleCommonButton.SimpleCommonButton_C
/// Size: 0x0000 (0x0014C0 - 0x0014C0)
class USimpleCommonButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:
};

/// Class /Game/Athena/UI/Matchmaking/SimpleCommonButtonWithInput.SimpleCommonButtonWithInput_C
/// Size: 0x0000 (0x0014C0 - 0x0014C0)
class USimpleCommonButtonWithInput_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5312;

public:
};

/// Class /Game/Athena/Settings/ControllerActionsMenuEntry.ControllerActionsMenuEntry_C
/// Size: 0x0000 (0x0014D0 - 0x0014D0)
class UControllerActionsMenuEntry_C : public UFortControllerActionsMenuEntry
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
};

/// Class /Game/Athena/Settings/ControllerActionsMenu.ControllerActionsMenu_C
/// Size: 0x0008 (0x000548 - 0x000550)
class UControllerActionsMenu_C : public UFortControllerActionsMenu
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x548, 8, 0, 0})
};

/// Class /Game/Athena/Settings/CustomEntries/SettingsRotator_Narrow.SettingsRotator_Narrow_C
/// Size: 0x0018 (0x0014D0 - 0x0014E8)
class USettingsRotator_Narrow_C : public UFortSettingsRotator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5352;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         RotatorHover                                                ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
	CMember(UBorder*)                                  Background                                                  ___ OFFSET(get<T>, {0x14E0, 8, 0, 0})
};

/// Class /Game/Athena/Settings/SettingsRotator.SettingsRotator_C
/// Size: 0x0010 (0x0014D0 - 0x0014E0)
class USettingsRotator_C : public UFortSettingsRotator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5344;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
	CMember(UBorder*)                                  Background                                                  ___ OFFSET(get<T>, {0x14D8, 8, 0, 0})
};

/// Class /Game/Athena/Settings/SettingEntryBackground.SettingEntryBackground_C
/// Size: 0x0028 (0x0002A8 - 0x0002D0)
class USettingEntryBackground_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UNamedSlot*)                               Content                                                     ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseEnterChanged                                         ___ OFFSET(get<T>, {0x2C0, 16, 0, 0})
};

/// Class /Game/Athena/Settings/CustomEntries/SettingsListEntry_Discrete_Narrow.SettingsListEntry_Discrete_Narrow_C
/// Size: 0x0030 (0x000340 - 0x000370)
class USettingsListEntry_Discrete_Narrow_C : public UFortSettingsListEntrySetting_Discrete
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_FirstOption                                          ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_SecondOption                                         ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          OptionsSets                                                 ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UHorizontalBox*)                           Several_Options                                             ___ OFFSET(get<T>, {0x368, 8, 0, 0})
};

/// Class /Game/Athena/Settings/SettingsListEntry_Missing.SettingsListEntry_Missing_C
/// Size: 0x0018 (0x000310 - 0x000328)
class USettingsListEntry_Missing_C : public UFortSettingsListEntry_Setting
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x318, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Text_SettingName                                            ___ OFFSET(get<T>, {0x320, 8, 0, 0})
};

/// Class /Game/Athena/Settings/SettingsListEntry_Discrete.SettingsListEntry_Discrete_C
/// Size: 0x0030 (0x000340 - 0x000370)
class USettingsListEntry_Discrete_C : public UFortSettingsListEntrySetting_Discrete
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x348, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_FirstOption                                          ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UIconTextButton_C*)                        Button_SecondOption                                         ___ OFFSET(get<T>, {0x358, 8, 0, 0})
	CMember(UWidgetSwitcher*)                          OptionsSets                                                 ___ OFFSET(get<T>, {0x360, 8, 0, 0})
	CMember(UHorizontalBox*)                           Several_Options                                             ___ OFFSET(get<T>, {0x368, 8, 0, 0})
};

/// Class /Game/Athena/Settings/CustomEntries/SettingsListEntry_Scalar_Narrow.SettingsListEntry_Scalar_Narrow_C
/// Size: 0x0020 (0x000330 - 0x000350)
class USettingsListEntry_Scalar_Narrow_C : public UFortSettingsListEntrySetting_Scalar
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   DefaultValueLayer                                           ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(USimpleMaterialProgressBar_C*)             Progress                                                    ___ OFFSET(get<T>, {0x348, 8, 0, 0})
};

/// Class /Game/Athena/Settings/SettingsListEntry_Scalar.SettingsListEntry_Scalar_C
/// Size: 0x0020 (0x000330 - 0x000350)
class USettingsListEntry_Scalar_C : public UFortSettingsListEntrySetting_Scalar
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(UImage*)                                   DefaultValueLayer                                           ___ OFFSET(get<T>, {0x340, 8, 0, 0})
	CMember(USimpleMaterialProgressBar_C*)             Progress                                                    ___ OFFSET(get<T>, {0x348, 8, 0, 0})
};

/// Class /Game/Athena/Settings/SettingsListEntry_SubCollection.SettingsListEntry_SubCollection_C
/// Size: 0x0010 (0x000320 - 0x000330)
class USettingsListEntry_SubCollection_C : public UFortSettingsListEntrySetting_Navigation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Game/Athena/Settings/SettingsListEntry_Action.SettingsListEntry_Action_C
/// Size: 0x0010 (0x000320 - 0x000330)
class USettingsListEntry_Action_C : public UFortSettingsListEntrySetting_Action
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x320, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Screens/KeyboardPresetRotator.KeyboardPresetRotator_C
/// Size: 0x0048 (0x0002D0 - 0x000318)
class UKeyboardPresetRotator_C : public UCommonUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(UPanelButton_C*)                           ButtonLeft                                                  ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(UPanelButton_C*)                           ButtonRight                                                 ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         Description                                                 ___ OFFSET(get<T>, {0x2E8, 8, 0, 0})
	CMember(USpacer*)                                  Spacer                                                      ___ OFFSET(get<T>, {0x2F0, 8, 0, 0})
	CMember(UCommonTextBlock*)                         SubDescription                                              ___ OFFSET(get<T>, {0x2F8, 8, 0, 0})
	CMember(UTextRotatorWhite_C*)                      TextRotator                                                 ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	DMember(int32_t)                                   SelectedIndex                                               ___ OFFSET(get<int32_t>, {0x308, 4, 0, 0})
	DMember(double)                                    Spacer_Width                                                ___ OFFSET(get<double>, {0x310, 8, 0, 0})
};

/// Class /Game/Athena/UI/Frontend/Parties/JoinVoiceChannelButton.JoinVoiceChannelButton_C
/// Size: 0x0010 (0x0014C0 - 0x0014D0)
class UJoinVoiceChannelButton_C : public UFortJoinVoiceChannelButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5328;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
};

/// Class /Game/Athena/UI/Frontend/Parties/LeavePlatformPartyButton.LeavePlatformPartyButton_C
/// Size: 0x0018 (0x0014C0 - 0x0014D8)
class ULeavePlatformPartyButton_C : public UCommonButtonLegacy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5336;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x14C0, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x14C8, 8, 0, 0})
	CMember(UCommonTextBlock*)                         CommonTextBlock                                             ___ OFFSET(get<T>, {0x14D0, 8, 0, 0})
};

/// Class /Game/Athena/Settings/SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C
/// Size: 0x0010 (0x000350 - 0x000360)
class USettingsListEntry_KeyboardInput_C : public UFortSettingsListEntrySetting_KeyboardInput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x350, 8, 0, 0})
	CMember(UWidgetAnimation*)                         OnHover                                                     ___ OFFSET(get<T>, {0x358, 8, 0, 0})
};

/// Class /Game/Athena/Settings/SettingsListEntry_ControllerButton.SettingsListEntry_ControllerButton_C
/// Size: 0x0010 (0x000330 - 0x000340)
class USettingsListEntry_ControllerButton_C : public UFortSettingsListEntrySetting_ControllerButton
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x330, 8, 0, 0})
	CMember(USimpleCommonButton_C*)                    Button_ControllerAction                                     ___ OFFSET(get<T>, {0x338, 8, 0, 0})
};

/// Class /Game/Athena/Settings/GameSettingsDetailView.GameSettingsDetailView_C
/// Size: 0x0000 (0x000380 - 0x000380)
class UGameSettingsDetailView_C : public UFortSettingDetailView
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
};

/// Class /Game/Athena/Settings/SettingsPanel.SettingsPanel_C
/// Size: 0x0008 (0x000718 - 0x000720)
class USettingsPanel_C : public UFortSettingsPanel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1824;

public:
	CMember(USafeZone*)                                SafeZone                                                    ___ OFFSET(get<T>, {0x718, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Legacy/TabGameplayOptions_New.TabGameplayOptions_New_C
/// Size: 0x0010 (0x000430 - 0x000440)
class UTabGameplayOptions_New_C : public UFortTabGameplayOptions_TempNew
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
	CMember(UFortHUDElementWrapper_C*)                 FortHUDElementWrapper                                       ___ OFFSET(get<T>, {0x438, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Legacy/TabMouseAndKeyboardOptions_New.TabMouseAndKeyboardOptions_New_C
/// Size: 0x0008 (0x000430 - 0x000438)
class UTabMouseAndKeyboardOptions_New_C : public UFortTabMouseAndKeyboardOptions_TempNew
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Legacy/TabAccountOptions_New.TabAccountOptions_New_C
/// Size: 0x0008 (0x000430 - 0x000438)
class UTabAccountOptions_New_C : public UFortTabAccountOptions_TempNew
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Legacy/TabAudioOptions_New.TabAudioOptions_New_C
/// Size: 0x0008 (0x000430 - 0x000438)
class UTabAudioOptions_New_C : public UFortTabAudioOptions_TempNew
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Legacy/TabTouchOptions_New.TabTouchOptions_New_C
/// Size: 0x0008 (0x000430 - 0x000438)
class UTabTouchOptions_New_C : public UFortTabTouchOptions_TempNew
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Legacy/TabTouchWeaponOptions_New.TabTouchWeaponOptions_New_C
/// Size: 0x0008 (0x000430 - 0x000438)
class UTabTouchWeaponOptions_New_C : public UFortTabTouchWeaponOptions_TempNew
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Legacy/TabHUDOptions_New.TabHUDOptions_New_C
/// Size: 0x0008 (0x000430 - 0x000438)
class UTabHUDOptions_New_C : public UFortTabHUDOptions_TempNew
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Legacy/TabVideoOptions_New.TabVideoOptions_New_C
/// Size: 0x0008 (0x000430 - 0x000438)
class UTabVideoOptions_New_C : public UFortTabVideoOptions_TempNew
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Legacy/TabControllerSettings_New.TabControllerSettings_New_C
/// Size: 0x0008 (0x000430 - 0x000438)
class UTabControllerSettings_New_C : public UFortTabGamepadOptions_TempNew
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Legacy/TabMouseAndKeyboardBindingOptions_New.TabMouseAndKeyboardBindingOptions_New_C
/// Size: 0x0008 (0x000430 - 0x000438)
class UTabMouseAndKeyboardBindingOptions_New_C : public UFortTabMouseAndKeyboardBindingsOptions_TempNew
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Game/Athena/Settings/Legacy/TabGamepadBindings_New.TabGamepadBindings_New_C
/// Size: 0x0008 (0x000430 - 0x000438)
class UTabGamepadBindings_New_C : public UFortTabGamepadButtonMappingOptions_TempNew
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x430, 8, 0, 0})
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GE_BoostJump_Equipped.GE_BoostJump_Equipped_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_BoostJump_Equipped_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GE_BoostJumpPack_JumpHover.GE_BoostJumpPack_JumpHover_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_BoostJumpPack_JumpHover_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_JumpHover.GA_BoostJumpPack_JumpHover_C
/// Size: 0x0040 (0x000B28 - 0x000B68)
class UGA_BoostJumpPack_JumpHover_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2920;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FGameplayTagContainer)                     RequiredTags                                                ___ OFFSET(get<T>, {0xB30, 32, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GE_Hover_Instance                                           ___ OFFSET(get<T>, {0xB50, 8, 0, 0})
	DMember(double)                                    RequiredFuelToActivate                                      ___ OFFSET(get<double>, {0xB58, 8, 0, 0})
	CMember(UClass*)                                   GE_Hover                                                    ___ OFFSET(get<T>, {0xB60, 8, 0, 0})
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GE_BoostJump_IsUsingJetpack.GE_BoostJump_IsUsingJetpack_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_BoostJump_IsUsingJetpack_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GE_BoostJump_IsUsingJetpack_Papaya.GE_BoostJump_IsUsingJetpack_Papaya_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_BoostJump_IsUsingJetpack_Papaya_C : public UGE_BoostJump_IsUsingJetpack_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_Jump.GA_BoostJumpPack_Jump_C
/// Size: 0x0000 (0x000B58 - 0x000B58)
class UGA_BoostJumpPack_Jump_C : public UFortGameplayAbility_Jump
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GE_BoostJump_Regen.GE_BoostJump_Regen_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_BoostJump_Regen_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GE_BoostJump_IsUsingJetpack_Lateral.GE_BoostJump_IsUsingJetpack_Lateral_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_BoostJump_IsUsingJetpack_Lateral_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack.GA_BoostJumpPack_C
/// Size: 0x0234 (0x000B48 - 0x000D7C)
class UGA_BoostJumpPack_C : public UFortGameplayAbility_JumpBoostPack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3452;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB48, 8, 0, 0})
	DMember(double)                                    Jump_Multiple                                               ___ OFFSET(get<double>, {0xB50, 8, 0, 0})
	SMember(FVector)                                   Basic_Jump_Z_Adjust                                         ___ OFFSET(get<T>, {0xB58, 24, 0, 0})
	SMember(FVector)                                   FinalJumpHeight                                             ___ OFFSET(get<T>, {0xB70, 24, 0, 0})
	SMember(FGameplayEventData)                        EventTriggerData                                            ___ OFFSET(get<T>, {0xB88, 176, 0, 0})
	DMember(bool)                                      bJumpButtonHeld                                             ___ OFFSET(get<bool>, {0xC38, 1, 0, 0})
	DMember(bool)                                      bHoverButtonHeld                                            ___ OFFSET(get<bool>, {0xC39, 1, 0, 0})
	DMember(bool)                                      bAtApex                                                     ___ OFFSET(get<bool>, {0xC3A, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               JetpackEffectHandle                                         ___ OFFSET(get<T>, {0xC3C, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayerPawn                                              ___ OFFSET(get<T>, {0xC48, 8, 0, 0})
	DMember(double)                                    FuelFudge                                                   ___ OFFSET(get<double>, {0xC50, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               RegenEffectHandle                                           ___ OFFSET(get<T>, {0xC58, 8, 0, 0})
	DMember(bool)                                      bRegenEffectActive                                          ___ OFFSET(get<bool>, {0xC60, 1, 0, 0})
	SMember(FGameplayTagContainer)                     BoostExecuteTags                                            ___ OFFSET(get<T>, {0xC68, 32, 0, 0})
	DMember(int32_t)                                   HoverButtonHeldCount                                        ___ OFFSET(get<int32_t>, {0xC88, 4, 0, 0})
	SMember(FGameplayTagContainer)                     HoverExecuteTags                                            ___ OFFSET(get<T>, {0xC90, 32, 0, 0})
	DMember(int32_t)                                   JumpButtonHeldCount                                         ___ OFFSET(get<int32_t>, {0xCB0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     HoverReleaseTags                                            ___ OFFSET(get<T>, {0xCB8, 32, 0, 0})
	DMember(double)                                    TimeStartedHovering                                         ___ OFFSET(get<double>, {0xCD8, 8, 0, 0})
	DMember(double)                                    TimeStartedFalling                                          ___ OFFSET(get<double>, {0xCE0, 8, 0, 0})
	DMember(double)                                    EndHoverDelay                                               ___ OFFSET(get<double>, {0xCE8, 8, 0, 0})
	DMember(double)                                    EndFallingDelay                                             ___ OFFSET(get<double>, {0xCF0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     BoostReleaseTags                                            ___ OFFSET(get<T>, {0xCF8, 32, 0, 0})
	DMember(bool)                                      bHasDied                                                    ___ OFFSET(get<bool>, {0xD18, 1, 0, 0})
	SMember(FGameplayTag)                              BoostCue                                                    ___ OFFSET(get<T>, {0xD1C, 4, 0, 0})
	SMember(FGameplayTag)                              BoostJumpPackCue                                            ___ OFFSET(get<T>, {0xD20, 4, 0, 0})
	CMember(UClass*)                                   JetpackInUseEffect                                          ___ OFFSET(get<T>, {0xD28, 8, 0, 0})
	DMember(bool)                                      TriggeredByJump                                             ___ OFFSET(get<bool>, {0xD30, 1, 0, 0})
	SMember(FGameplayTagContainer)                     BlockExecuteTags                                            ___ OFFSET(get<T>, {0xD38, 32, 0, 0})
	CMember(UClass*)                                   JetpackInUseEffect_Alt                                      ___ OFFSET(get<T>, {0xD58, 8, 0, 0})
	SMember(FGameplayTag)                              HidingPropTag                                               ___ OFFSET(get<T>, {0xD60, 4, 0, 0})
	SMember(FGameplayTag)                              ZiplineTag                                                  ___ OFFSET(get<T>, {0xD64, 4, 0, 0})
	SMember(FGameplayTag)                              GliderRedeployTag                                           ___ OFFSET(get<T>, {0xD68, 4, 0, 0})
	SMember(FGameplayTag)                              InitialBoostCue                                             ___ OFFSET(get<T>, {0xD6C, 4, 0, 0})
	DMember(bool)                                      bFirstBoost                                                 ___ OFFSET(get<bool>, {0xD70, 1, 0, 0})
	SMember(FGameplayTag)                              BoostEndCue                                                 ___ OFFSET(get<T>, {0xD74, 4, 0, 0})
	SMember(FGameplayTag)                              BoostOutOfFuelEndCue                                        ___ OFFSET(get<T>, {0xD78, 4, 0, 0})
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_Papaya.GA_BoostJumpPack_Papaya_C
/// Size: 0x0000 (0x000D7C - 0x000D7C)
class UGA_BoostJumpPack_Papaya_C : public UGA_BoostJumpPack_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3452;

public:
};

/// Class /Game/Athena/Sounds/Weapons/BulletWhips/BulletWhipTrackerComponent_Crossbow.BulletWhipTrackerComponent_Crossbow_C
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UBulletWhipTrackerComponent_Crossbow_C : public UBulletWhipTrackerComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C
/// Size: 0x0018 (0x0004A0 - 0x0004B8)
class AGCL_BoostJumpPack_FuelRegen_C : public AGameplayCueNotify_Jetpack_FuelRegen
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x4A0, 8, 0, 0})
	DMember(float)                                     FullBlinkTimeline_Blink_108772B949790E60DC9BE1BAC70C2EA1    ___ OFFSET(get<float>, {0x4A8, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FullBlinkTimeline__Direction_108772B949790E60DC9BE1BAC70C2EA1 ___ OFFSET(get<T>, {0x4AC, 1, 0, 0})
	CMember(UTimelineComponent*)                       FullBlinkTimeline                                           ___ OFFSET(get<T>, {0x4B0, 8, 0, 0})
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/GliderItem/DA_Glider_Item.DA_Glider_Item_C
/// Size: 0x0028 (0x001290 - 0x0012B8)
class ADA_Glider_Item_C : public AFortCustomizableAbilityDecoTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1290, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ErrorReason                                                 ___ OFFSET(get<T>, {0x1298, 32, 0, 0})
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/DA_BoostJumpPack.DA_BoostJumpPack_C
/// Size: 0x0048 (0x001290 - 0x0012D8)
class ADA_BoostJumpPack_C : public AFortCustomizableAbilityDecoTool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 4824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x1290, 8, 0, 0})
	SMember(FGameplayTagContainer)                     ErrorReason                                                 ___ OFFSET(get<T>, {0x1298, 32, 0, 0})
	SMember(FGameplayTagContainer)                     ErrorReasonGamepad                                          ___ OFFSET(get<T>, {0x12B8, 32, 0, 0})
};

/// Class /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C
/// Size: 0x0010 (0x000B28 - 0x000B38)
class UGA_BoostJumpPack_Equip_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2872;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
};

/// Class /Game/Athena/GameplayCueNotifies/GCL_BoostJumpPack_Hovering.GCL_BoostJumpPack_Hovering_C
/// Size: 0x00C8 (0x000AD0 - 0x000B98)
class AGCL_BoostJumpPack_Hovering_C : public AGameplayCueNotify_Jetpack_Hovering
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xAD0, 8, 0, 0})
	DMember(bool)                                      bJetpackAudioEnabled                                        ___ OFFSET(get<bool>, {0xAD8, 1, 0, 0})
	CMember(USoundBase*)                               SoundOnStart                                                ___ OFFSET(get<T>, {0xAE0, 8, 0, 0})
	CMember(USoundBase*)                               SoundOnStop                                                 ___ OFFSET(get<T>, {0xAE8, 8, 0, 0})
	CMember(USoundBase*)                               SoundLoopOnIdle                                             ___ OFFSET(get<T>, {0xAF0, 8, 0, 0})
	CMember(USoundBase*)                               SoundLoopOnAccel                                            ___ OFFSET(get<T>, {0xAF8, 8, 0, 0})
	CMember(USoundBase*)                               SoundLoopOnOutOfFuel                                        ___ OFFSET(get<T>, {0xB00, 8, 0, 0})
	CMember(USoundBase*)                               SoundOnFuelWarning                                          ___ OFFSET(get<T>, {0xB08, 8, 0, 0})
	CMember(USoundBase*)                               SoundOnOutOfFuel                                            ___ OFFSET(get<T>, {0xB10, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 GroundInteract                                              ___ OFFSET(get<T>, {0xB18, 8, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMeshComponent*>)   Milo_Check                                                  ___ OFFSET(get<T>, {0xB20, 32, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  Milo_Backpack                                               ___ OFFSET(get<T>, {0xB40, 32, 0, 0})
	SMember(FVector)                                   Milo_LightScale                                             ___ OFFSET(get<T>, {0xB60, 24, 0, 0})
	SMember(FName)                                     AttachSocketName                                            ___ OFFSET(get<T>, {0xB78, 4, 0, 0})
	CMember(UFXSystemComponent*)                       VFX                                                         ___ OFFSET(get<T>, {0xB80, 8, 0, 0})
	CMember(UParticleSystem*)                          P_GroundInteraction                                         ___ OFFSET(get<T>, {0xB88, 8, 0, 0})
	CMember(UFXSystemAsset*)                           NS_Hover                                                    ___ OFFSET(get<T>, {0xB90, 8, 0, 0})
};

/// Class /Game/Athena/B_AthenaAlwaysLoadedContentHack.B_AthenaAlwaysLoadedContentHack_C
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AB_AthenaAlwaysLoadedContentHack_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TArray<UObject*>)                          HardObjectList                                              ___ OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(TArray<UClass*>)                           HardClassList                                               ___ OFFSET(get<T>, {0x2A8, 16, 0, 0})
};

/// Class /Game/Athena/UI/Frontend/Art/BP_Frontend_ShopBG.BP_Frontend_ShopBG_C
/// Size: 0x0120 (0x000290 - 0x0003B0)
class ABP_Frontend_ShopBG_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 944;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StandardBackgroundPlane1                                    ___ OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StandardBackgroundPlane                                     ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Cone                                                        ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Plane                                                       ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(USceneComponent*)                          Scene                                                       ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     BackgroundTexturePlane                                      ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     VeryLargeBackgroundPlane                                    ___ OFFSET(get<T>, {0x2C8, 8, 0, 0})
	CMember(USceneComponent*)                          Scene_Signal                                                ___ OFFSET(get<T>, {0x2D0, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x2D8, 8, 0, 0})
	SMember(FRotator)                                  Rot_Intro                                                   ___ OFFSET(get<T>, {0x2E0, 24, 0, 0})
	SMember(FRotator)                                  NextRot                                                     ___ OFFSET(get<T>, {0x2F8, 24, 0, 0})
	SMember(FRotator)                                  Rot                                                         ___ OFFSET(get<T>, {0x310, 24, 0, 0})
	SMember(FRotator)                                  Rot                                                         ___ OFFSET(get<T>, {0x328, 24, 0, 0})
	DMember(double)                                    PlayRate                                                    ___ OFFSET(get<double>, {0x340, 8, 0, 0})
	SMember(FRotator)                                  Rot_IntroStart                                              ___ OFFSET(get<T>, {0x348, 24, 0, 0})
	DMember(bool)                                      bHasEvent                                                   ___ OFFSET(get<bool>, {0x360, 1, 0, 0})
	DMember(double)                                    YInitial                                                    ___ OFFSET(get<double>, {0x368, 8, 0, 0})
	DMember(double)                                    YEnd                                                        ___ OFFSET(get<double>, {0x370, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Mid                                                         ___ OFFSET(get<T>, {0x378, 8, 0, 0})
	CMember(ACMSLobbyDirector_C*)                      CMSDirector                                                 ___ OFFSET(get<T>, {0x380, 8, 0, 0})
	SMember(FString)                                   BPEnvName                                                   ___ OFFSET(get<T>, {0x388, 16, 0, 0})
	DMember(bool)                                      ShopEntered                                                 ___ OFFSET(get<bool>, {0x398, 1, 0, 0})
	SMember(FTimerHandle)                              DonutSeqTimerHandle                                         ___ OFFSET(get<T>, {0x3A0, 8, 0, 0})
	CMember(AActor*)                                   DomeObstruction                                             ___ OFFSET(get<T>, {0x3A8, 8, 0, 0})
};

/// Class /Game/Athena/Cosmetics/Emotes/B_EmotePreviewDisplay.B_EmotePreviewDisplay_C
/// Size: 0x0070 (0x0002A8 - 0x000318)
class AB_EmotePreviewDisplay_C : public AFortEmotePreviewActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(USceneComponent*)                          Scene                                                       ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UAthenaEmojiItemDefinition*)               EmojiItemDefinition                                         ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(TWeakObjectPtr<UAnimMontage*>)             Animation                                                   ___ OFFSET(get<T>, {0x2C0, 32, 0, 0})
	CMember(UFortMontageItemDefinitionBase*)           DanceOrEmojiItemDefinition                                  ___ OFFSET(get<T>, {0x2E0, 8, 0, 0})
	SMember(FName)                                     StartSectionName                                            ___ OFFSET(get<T>, {0x2E8, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnEmoteSetupFinished                                        ___ OFFSET(get<T>, {0x2F0, 16, 0, 0})
	CMember(UAthenaShoutItemDefinition*)               ShoutItemDefinition                                         ___ OFFSET(get<T>, {0x300, 8, 0, 0})
	CMember(TArray<UAudioComponent*>)                  DynamicallySpawnedSounds                                    ___ OFFSET(get<T>, {0x308, 16, 0, 0})
};

/// Class /Game/Athena/UI/Challenges/Art/ChallengeTile_EmptyButton.ChallengeTile_EmptyButton_C
/// Size: 0x0000 (0x000730 - 0x000730)
class UChallengeTile_EmptyButton_C : public UCommonButtonStyle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
};

/// Class /Game/Athena/UI/Customization/AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C
/// Size: 0x0018 (0x0003D8 - 0x0003F0)
class UAthenaFloatSliderVariantPicker_C : public UFortFloatSliderVariantPicker
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1008;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UOverlay*)                                 Panel_Value                                                 ___ OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(USimpleMaterialProgressBar_C*)             Progress                                                    ___ OFFSET(get<T>, {0x3E8, 8, 0, 0})
};

/// Class /Game/Athena/Playlists/Creative/MissionGen_CreativeTestIsland.MissionGen_CreativeTestIsland_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_CreativeTestIsland_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Game/Athena/Playlists/Creative/MissionGen_CreativeMMS.MissionGen_CreativeMMS_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_CreativeMMS_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Game/Athena/DrivableVehicles/PapayaBoundarySpline.PapayaBoundarySpline_C
/// Size: 0x0010 (0x000290 - 0x0002A0)
class APapayaBoundarySpline_C : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(USplineComponent*)                         Spline2                                                     ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Game/Athena/Playlists/Playground/MissionGen_Playground.MissionGen_Playground_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_Playground_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Game/Athena/Playlists/SolidGold/MissionGen_Gold.MissionGen_Gold_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_Gold_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Game/Athena/Playlists/Trios/MissionGen_Trios.MissionGen_Trios_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_Trios_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Game/Athena/Playlists/Respawn/MissionGen_Respawn.MissionGen_Respawn_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_Respawn_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Game/Athena/Playlists/NoBuildBR/MissionGen/MissionGen_NoBuildBR_Trio.MissionGen_NoBuildBR_Trio_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_NoBuildBR_Trio_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Game/Athena/Playlists/NoBuildBR/MissionGen/MissionGen_NoBuildBR_Squad.MissionGen_NoBuildBR_Squad_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_NoBuildBR_Squad_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Game/Athena/Playlists/NoBuildBR/MissionGen/MissionGen_NoBuildBR_Solo.MissionGen_NoBuildBR_Solo_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_NoBuildBR_Solo_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Game/Athena/Playlists/NoBuildBR/BigBattle/MissionGen_BigBattle.MissionGen_BigBattle_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_BigBattle_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Game/Athena/Playlists/NoBuildBR/MissionGen/MissionGen_NoBuildBR_Duo.MissionGen_NoBuildBR_Duo_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_NoBuildBR_Duo_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Game/Athena/Playlists/Papaya/MissionGen_Papaya.MissionGen_Papaya_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_Papaya_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Class /Game/Athena/UI/InGame/Leto/LetoPlayerAvatar.LetoPlayerAvatar_C
/// Size: 0x0000 (0x0002D8 - 0x0002D8)
class ULetoPlayerAvatar_C : public ULetoPlayerAvatar
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 728;

public:
};

/// Class /Game/Athena/UI/InGame/Leto/LetoHudOverlay.LetoHudOverlay_C
/// Size: 0x0000 (0x000308 - 0x000308)
class ULetoHudOverlay_C : public ULetoHudOverlay
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
};

/// Class /Game/Athena/UI/Subscriptions/SubscriptionProgressiveGiftBoxHeader.SubscriptionProgressiveGiftBoxHeader_C
/// Size: 0x0020 (0x0002A8 - 0x0002C8)
class USubscriptionProgressiveGiftBoxHeader_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(UImage*)                                   Badge                                                       ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock                                         ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UImage*)                                   Skin_Text_Bullet                                            ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Class /Game/Athena/UI/Subscriptions/SubscriptionGiftBoxHeader.SubscriptionGiftBoxHeader_C
/// Size: 0x0020 (0x0002A8 - 0x0002C8)
class USubscriptionGiftBoxHeader_C : public UUserWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
	CMember(UImage*)                                   Badge                                                       ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UCommonRichTextBlock*)                     CommonRichTextBlock                                         ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(UImage*)                                   Image                                                       ___ OFFSET(get<T>, {0x2B8, 8, 0, 0})
	CMember(UImage*)                                   Skin_Text_Bullet                                            ___ OFFSET(get<T>, {0x2C0, 8, 0, 0})
};

/// Class /Game/Athena/Playset/Minigames/StatFilters/MinigameStat_Score.MinigameStat_Score_C
/// Size: 0x0000 (0x000190 - 0x000190)
class UMinigameStat_Score_C : public UFortMinigameStatFilter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
};

/// Class /Game/Athena/Items/Parents/FallImmunity/GE_Athena_TillLandFallDamageImmunity_Grant_Parent.GE_Athena_TillLandFallDamageImmunity_Grant_Parent_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_TillLandFallDamageImmunity_Grant_Parent_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/Abilities/NPC/Parents/GE_NPC_Parent_DirectDamage.GE_NPC_Parent_DirectDamage_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Parent_DirectDamage_C : public UGET_DirectCreatureDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/Abilities/NPC/Parents/GE_NPC_Parent_DestroyBuilding.GE_NPC_Parent_DestroyBuilding_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_NPC_Parent_DestroyBuilding_C : public UGE_NPC_Parent_DirectDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/AI/Abilities/NPC/Parents/GA_NPC_Parent.GA_NPC_Parent_C
/// Size: 0x0338 (0x000B28 - 0x000E60)
class UGA_NPC_Parent_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3680;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(AFortAIPawn*)                              NPC_ActivatingFortAIPawn                                    ___ OFFSET(get<T>, {0xB30, 8, 0, 0})
	CMember(TEnumAsByte<EFortMovementUrgency>)         NPC_InitialMovementUrgency                                  ___ OFFSET(get<T>, {0xB38, 1, 0, 0})
	DMember(bool)                                      NPC_DebugAbility                                            ___ OFFSET(get<bool>, {0xB39, 1, 0, 0})
	SMember(FGameplayTagContainer)                     NPC_IgnoreDamageAndOnlyDoKnockbackIfTheseAbilitiesAreActive ___ OFFSET(get<T>, {0xB40, 32, 0, 0})
	DMember(bool)                                      NPC_DebugFreezeFrameEnabled                                 ___ OFFSET(get<bool>, {0xB60, 1, 0, 0})
	DMember(bool)                                      NPC_DebugFreezeFrameOnlyWhenAbilityTargetHit                ___ OFFSET(get<bool>, {0xB61, 1, 0, 0})
	DMember(bool)                                      NPC_DebugFreezeFrameOnlyWhenWeHaveSomeTarget                ___ OFFSET(get<bool>, {0xB62, 1, 0, 0})
	DMember(bool)                                      NPC_DamageHitAbilityTargetDuringThisAbilityActivation       ___ OFFSET(get<bool>, {0xB63, 1, 0, 0})
	CMember(TArray<AActor*>)                           NPC_DamageActorsWeHaveHitDuringThisAbilityActivation        ___ OFFSET(get<T>, {0xB68, 16, 0, 0})
	DMember(double)                                    NPC_CanActivateAbility_MaxTargetZDistanceBelow              ___ OFFSET(get<double>, {0xB78, 8, 0, 0})
	DMember(double)                                    NPC_CanActivateAbility_MaxTargetZDistanceAbove              ___ OFFSET(get<double>, {0xB80, 8, 0, 0})
	DMember(double)                                    NPC_CanActivateAbility_MaxTargetZDistanceAbove_ForIntentionalFailedAttack ___ OFFSET(get<double>, {0xB88, 8, 0, 0})
	CMember(TArray<AActor*>)                           BuildingTargetingHitActors                                  ___ OFFSET(get<T>, {0xB90, 16, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NPC_FrustrationTagsToClearForGoals                       ___ OFFSET(get<T>, {0xBA0, 32, 0, 0})
	CMember(TEnumAsByte<Enum_NPC_AlertLevel>)          NPC_AlertLevelGoalIsFortPawn                                ___ OFFSET(get<T>, {0xBC0, 1, 0, 0})
	CMember(TEnumAsByte<Enum_NPC_AlertLevel>)          NPC_AlertLevelGoalIsOther                                   ___ OFFSET(get<T>, {0xBC1, 1, 0, 0})
	CMember(TEnumAsByte<Enum_NPC_AlertLevel>)          NPC_AlertLevelGoalIsNotValid                                ___ OFFSET(get<T>, {0xBC2, 1, 0, 0})
	SMember(FScalableFloat)                            NPC_DamageKnockbackVelocityHF                               ___ OFFSET(get<T>, {0xBC8, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_DamageKnockbackVerticalAngleHF                          ___ OFFSET(get<T>, {0xBF0, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_DamageKnockbackMinimumYawValueHF                        ___ OFFSET(get<T>, {0xC18, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_DamageCanAttackDBNOPlayersHF                            ___ OFFSET(get<T>, {0xC40, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_DamageKnockbackVelocityVehicleHF                        ___ OFFSET(get<T>, {0xC68, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_DamageKnockbackVerticalAngleVehicleHF                   ___ OFFSET(get<T>, {0xC90, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_DamageKnockbackMinimumYawValueVehicleHF                 ___ OFFSET(get<T>, {0xCB8, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_DamageChanceToEjectFromVehicleHF                        ___ OFFSET(get<T>, {0xCE0, 40, 0, 0})
	SMember(FGameplayTag)                              DestroyBuildingGC                                           ___ OFFSET(get<T>, {0xD08, 4, 0, 0})
	CMember(UClass*)                                   DestroyBuildingGE                                           ___ OFFSET(get<T>, {0xD10, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NPC_FrustrationTagsToClearForMovement                    ___ OFFSET(get<T>, {0xD18, 32, 0, 0})
	SMember(FGameplayTag)                              TC_NPC_FrustrationBuildDueToGoal                            ___ OFFSET(get<T>, {0xD38, 4, 0, 0})
	SMember(FGameplayTag)                              TC_NPC_FrustrationBuildDueToMovement                        ___ OFFSET(get<T>, {0xD3C, 4, 0, 0})
	SMember(FGameplayTagQuery)                         TQ_NPC_RequirementsToBuildFrustrationDueToGoal              ___ OFFSET(get<T>, {0xD40, 72, 0, 0})
	SMember(FGameplayTagQuery)                         TQ_NPC_RequirementsToBuildFrustrationDueToMovement          ___ OFFSET(get<T>, {0xD88, 72, 0, 0})
	SMember(FScalableFloat)                            NPC_BodyBumpBuildingsWhenBuildingMovementFrustrationHF      ___ OFFSET(get<T>, {0xDD0, 40, 0, 0})
	SMember(FScalableFloat)                            NPC_FrustrationBodyBumpOnlyDestroyPlayerBuildingsHF         ___ OFFSET(get<T>, {0xDF8, 40, 0, 0})
	SMember(FGameplayTag)                              TC_NPC_EffectContainer_BodyBumpBuildingsWhenBuildingMovementFrustration ___ OFFSET(get<T>, {0xE20, 4, 0, 0})
	SMember(FGameplayAbilityTargetDataHandle)          BuildingTargetingTargetData                                 ___ OFFSET(get<T>, {0xE28, 40, 0, 0})
	SMember(FGameplayTag)                              BuildingTargetingApplicationTag                             ___ OFFSET(get<T>, {0xE50, 4, 0, 0})
	SMember(FGameplayTag)                              TC_BuildingTypePlayer                                       ___ OFFSET(get<T>, {0xE54, 4, 0, 0})
	CMember(UClass*)                                   GE_NPC_MMR_Scaling_AbilityCooldown                          ___ OFFSET(get<T>, {0xE58, 8, 0, 0})
};

/// Class /Game/Athena/FortTimeDilationComponent.FortTimeDilationComponent_C
/// Size: 0x0000 (0x0000D8 - 0x0000D8)
class UFortTimeDilationComponent_C : public UFortGameStateComponent_TimeDilation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
};

/// Class /Game/Athena/Items/Cosmetics/Dances/AthenaDanceItemDefinition_AdHocSquadsJoin.AthenaDanceItemDefinition_AdHocSquadsJoin_C
/// Size: 0x0020 (0x000998 - 0x0009B8)
class UAthenaDanceItemDefinition_AdHocSquadsJoin_C : public UAthenaDanceItemDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2488;

public:
	CMember(UAthenaDanceItemDefinition*)               GroupEmoteToStartLeader_AutoSquadUp                         ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UAthenaDanceItemDefinition*)               GroupEmoteToStartFollower_AdHocSquadUp                      ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(UAthenaDanceItemDefinition*)               GroupEmoteToStartLeaderIfBothOwn_AdHocSquadUp               ___ OFFSET(get<T>, {0x9A8, 8, 0, 0})
	CMember(UAthenaDanceItemDefinition*)               GroupEmoteToStartFollowerIfBothOwn_AdHocSquadUp             ___ OFFSET(get<T>, {0x9B0, 8, 0, 0})
};

/// Class /Game/Athena/Items/Parents/FallImmunity/GE_Athena_FallDamageImmunity_NoFX.GE_Athena_FallDamageImmunity_NoFX_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_FallDamageImmunity_NoFX_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Parents/FallImmunity/GA_Athena_TillLandFallDamageImmunity_NoFX_Parent.GA_Athena_TillLandFallDamageImmunity_NoFX_Parent_C
/// Size: 0x0000 (0x000B98 - 0x000B98)
class UGA_Athena_TillLandFallDamageImmunity_NoFX_Parent_C : public UGA_Athena_TillLandFallDamageImmunity_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2968;

public:
};

/// Class /Game/Athena/Items/Parents/FallImmunity/GE_Athena_TillLandFallDamageImmunity_NoFX_Grant_Parent.GE_Athena_TillLandFallDamageImmunity_NoFX_Grant_Parent_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_Athena_TillLandFallDamageImmunity_NoFX_Grant_Parent_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Parents/LinkedActor/BGA_LinkedActorWithGravity_Parent.BGA_LinkedActorWithGravity_Parent_C
/// Size: 0x0030 (0x000978 - 0x0009A8)
class ABGA_LinkedActorWithGravity_Parent_C : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2472;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(UFortWaterInteractionComponent*)           FortWaterInteraction                                        ___ OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(UCapsuleComponent*)                        FallingCollisionCapsule                                     ___ OFFSET(get<T>, {0x988, 8, 0, 0})
	CMember(UFortLinkToActorComponent*)                FortLinkToActor                                             ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UFortProjectileMovementComponent*)         FortProjectileMovement                                      ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	DMember(bool)                                      SimulateOnBeginPlay                                         ___ OFFSET(get<bool>, {0x9A0, 1, 0, 0})
	DMember(bool)                                      HideOnDeath                                                 ___ OFFSET(get<bool>, {0x9A1, 1, 0, 0})
	DMember(bool)                                      bAttached                                                   ___ OFFSET(get<bool>, {0x9A2, 1, 0, 0})
	SMember(FGameplayTag)                              GC_Death                                                    ___ OFFSET(get<T>, {0x9A4, 4, 0, 0})
};

/// Class /Game/Athena/Items/HeldObjects/HeldObjectVersion2/BGA_HeldObject_Parent.BGA_HeldObject_Parent_C
/// Size: 0x0238 (0x000978 - 0x000BB0)
class ABGA_HeldObject_Parent_C : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(UFortWaterInteractionComponent*)           FortWaterInteraction                                        ___ OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(UFortLinkToActorComponent*)                FortLinkToActor                                             ___ OFFSET(get<T>, {0x988, 8, 0, 0})
	CMember(UFortHeldObjectComponent*)                 FortHeldObject                                              ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	CMember(UFortProjectileMovementComponent*)         FortProjectileMovement                                      ___ OFFSET(get<T>, {0x998, 8, 0, 0})
	CMember(UCapsuleComponent*)                        Capsule                                                     ___ OFFSET(get<T>, {0x9A0, 8, 0, 0})
	DMember(int32_t)                                   RepStartMoving                                              ___ OFFSET(get<int32_t>, {0x9A8, 4, 0, 0})
	SMember(FGameplayTag)                              GC_HitPlayer                                                ___ OFFSET(get<T>, {0x9AC, 4, 0, 0})
	SMember(FGameplayTag)                              GC_HitWorld                                                 ___ OFFSET(get<T>, {0x9B0, 4, 0, 0})
	SMember(FGameplayTag)                              GC_Throw                                                    ___ OFFSET(get<T>, {0x9B4, 4, 0, 0})
	SMember(FGameplayTag)                              GC_EnterWater                                               ___ OFFSET(get<T>, {0x9B8, 4, 0, 0})
	SMember(FGameplayTag)                              GC_Pickup                                                   ___ OFFSET(get<T>, {0x9BC, 4, 0, 0})
	SMember(FGameplayTag)                              GC_Death                                                    ___ OFFSET(get<T>, {0x9C0, 4, 0, 0})
	DMember(bool)                                      PlayDeathGC                                                 ___ OFFSET(get<bool>, {0x9C4, 1, 0, 0})
	DMember(bool)                                      RepHideActor                                                ___ OFFSET(get<bool>, {0x9C5, 1, 0, 0})
	DMember(bool)                                      SetHideActorOnDeath                                         ___ OFFSET(get<bool>, {0x9C6, 1, 0, 0})
	DMember(bool)                                      IsDestructable                                              ___ OFFSET(get<bool>, {0x9C7, 1, 0, 0})
	SMember(FGameplayTag)                              GC_GenericDeath                                             ___ OFFSET(get<T>, {0x9C8, 4, 0, 0})
	DMember(double)                                    WorldStopSlop                                               ___ OFFSET(get<double>, {0x9D0, 8, 0, 0})
	DMember(bool)                                      AttachToWallsAndCeilings                                    ___ OFFSET(get<bool>, {0x9D8, 1, 0, 0})
	CMember(TMap<ELinkToDirection, FVector>)           Map_DirectionToRelativeVector                               ___ OFFSET(get<T>, {0x9E0, 80, 0, 0})
	CMember(ELinkToDirection)                          DirectionToAttach                                           ___ OFFSET(get<T>, {0xA30, 1, 0, 0})
	CMember(AActor*)                                   EmptyAttachLinkActor                                        ___ OFFSET(get<T>, {0xA38, 8, 0, 0})
	SMember(FTransform)                                AttachRelativeTrans                                         ___ OFFSET(get<T>, {0xA40, 96, 0, 0})
	SMember(FTransform)                                AttachTransform                                             ___ OFFSET(get<T>, {0xAA0, 96, 0, 0})
	SMember(FText)                                     FirstInteractString                                         ___ OFFSET(get<T>, {0xB00, 24, 0, 0})
	SMember(FText)                                     SecondInteractString                                        ___ OFFSET(get<T>, {0xB18, 24, 0, 0})
	DMember(double)                                    SecondInteractTime                                          ___ OFFSET(get<double>, {0xB30, 8, 0, 0})
	DMember(double)                                    FirstInteractTime                                           ___ OFFSET(get<double>, {0xB38, 8, 0, 0})
	DMember(bool)                                      EverBeenThrownPlaced                                        ___ OFFSET(get<bool>, {0xB40, 1, 0, 0})
	DMember(bool)                                      AutoEnableInteractionsOnStop                                ___ OFFSET(get<bool>, {0xB41, 1, 0, 0})
	DMember(bool)                                      AlreadySavedDefaultTransform                                ___ OFFSET(get<bool>, {0xB42, 1, 0, 0})
	CMember(TEnumAsByte<Enum_HeldObject_GenericWeights>) ObjectWeights                                             ___ OFFSET(get<T>, {0xB43, 1, 0, 0})
	DMember(bool)                                      StopOnFlatSurface                                           ___ OFFSET(get<bool>, {0xB44, 1, 0, 0})
	SMember(FGameplayTagContainer)                     ThrownQuestCreditTargetTag                                  ___ OFFSET(get<T>, {0xB48, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_BlockPickup                                              ___ OFFSET(get<T>, {0xB68, 32, 0, 0})
	DMember(double)                                    Hit_Velocity_Threshold                                      ___ OFFSET(get<double>, {0xB88, 8, 0, 0})
	DMember(bool)                                      ShouldKillWhenSpawningUnderwater                            ___ OFFSET(get<bool>, {0xB90, 1, 0, 0})
	CMember(UPrimitiveComponent*)                      HitComponentToAttachTo                                      ___ OFFSET(get<T>, {0xB98, 8, 0, 0})
	CMember(TEnumAsByte<ECollisionResponse>)           CapsuleDefaultCollisionResponseToPawn                       ___ OFFSET(get<T>, {0xBA0, 1, 0, 0})
	DMember(bool)                                      RestoreDefaultPawnCollisionOnInteract                       ___ OFFSET(get<bool>, {0xBA1, 1, 0, 0})
	DMember(bool)                                      IsAttachedToVehicle                                         ___ OFFSET(get<bool>, {0xBA2, 1, 0, 0})
	CMember(AActor*)                                   VehicleAttached                                             ___ OFFSET(get<T>, {0xBA8, 8, 0, 0})
};

/// Class /Game/Athena/Apollo/Water/Blueprints/BP_FluidSim_FN.BP_FluidSim_FN_C
/// Size: 0x01C0 (0x000570 - 0x000730)
class ABP_FluidSim_FN_C : public ABP_FluidSim_01_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1840;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x570, 8, 0, 0})
	SMember(FFluidForceDynamic)                        BoatForceSettings                                           ___ OFFSET(get<T>, {0x578, 112, 0, 0})
	SMember(FFluidForceDynamic)                        PlayerForceSettings                                         ___ OFFSET(get<T>, {0x5E8, 112, 0, 0})
	SMember(FFluidForceDynamic)                        MechForceSettings                                           ___ OFFSET(get<T>, {0x658, 112, 0, 0})
	CMember(TArray<AFortPawn*>)                        RelevantFortPawns                                           ___ OFFSET(get<T>, {0x6C8, 16, 0, 0})
	DMember(bool)                                      Use_FN_Pawn_Forces                                          ___ OFFSET(get<bool>, {0x6D8, 1, 0, 0})
	CMember(TMap<FGameplayTag, FFluidForceDynamic>)    VehicleTypeMap                                              ___ OFFSET(get<T>, {0x6E0, 80, 0, 0})
};

/// Class /Game/Athena/Apollo/Environments/Landscape/Water/FortWaterBodyBP.FortWaterBodyBP_C
/// Size: 0x0010 (0x0003D0 - 0x0003E0)
class AFortWaterBodyBP_C : public AFortWaterBodyActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(ABP_FluidSim_FN_C*)                        FluidSimBP                                                  ___ OFFSET(get<T>, {0x3D8, 8, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/Parents/BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C
/// Size: 0x02B9 (0x000978 - 0x000C31)
class ABGA_Athena_WithGravity_Parent_C : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3121;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(UFortWaterInteractionComponent*)           FortWaterInteraction                                        ___ OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh                                                  ___ OFFSET(get<T>, {0x988, 8, 0, 0})
	CMember(UProjectileMovementComponent*)             ProjectileMovement                                          ___ OFFSET(get<T>, {0x990, 8, 0, 0})
	DMember(bool)                                      ResumeGravSimOnBegin                                        ___ OFFSET(get<bool>, {0x998, 1, 0, 0})
	DMember(bool)                                      bResumeSimulation                                           ___ OFFSET(get<bool>, {0x999, 1, 0, 0})
	SMember(FHitResult)                                NullHit                                                     ___ OFFSET(get<T>, {0x9A0, 224, 0, 0})
	SMember(FVector)                                   GravImpact_Loc                                              ___ OFFSET(get<T>, {0xA80, 24, 0, 0})
	SMember(FVector)                                   GravHitNormal                                               ___ OFFSET(get<T>, {0xA98, 24, 0, 0})
	DMember(double)                                    GravMaxSlope                                                ___ OFFSET(get<double>, {0xAB0, 8, 0, 0})
	DMember(bool)                                      CheckForBounce                                              ___ OFFSET(get<bool>, {0xAB8, 1, 0, 0})
	DMember(double)                                    ForcedBounceExtraZ                                          ___ OFFSET(get<double>, {0xAC0, 8, 0, 0})
	DMember(int32_t)                                   ForcedBounceCurrentCount                                    ___ OFFSET(get<int32_t>, {0xAC8, 4, 0, 0})
	DMember(double)                                    ForcedBounceMult                                            ___ OFFSET(get<double>, {0xAD0, 8, 0, 0})
	CMember(TArray<AActor*>)                           GravFoundBuildingOnDied                                     ___ OFFSET(get<T>, {0xAD8, 16, 0, 0})
	DMember(bool)                                      RepCollision                                                ___ OFFSET(get<bool>, {0xAE8, 1, 0, 0})
	CMember(UObject*)                                  AdditionalBounceObject                                      ___ OFFSET(get<T>, {0xAF0, 8, 0, 0})
	DMember(int32_t)                                   ForcedBounceMaxCount                                        ___ OFFSET(get<int32_t>, {0xAF8, 4, 0, 0})
	DMember(bool)                                      ForceBounce                                                 ___ OFFSET(get<bool>, {0xAFC, 1, 0, 0})
	DMember(bool)                                      CountNonForceBounces                                        ___ OFFSET(get<bool>, {0xAFD, 1, 0, 0})
	DMember(double)                                    BounceExtraZ                                                ___ OFFSET(get<double>, {0xB00, 8, 0, 0})
	DMember(double)                                    BounceMult                                                  ___ OFFSET(get<double>, {0xB08, 8, 0, 0})
	DMember(bool)                                      ShouldAttach                                                ___ OFFSET(get<bool>, {0xB10, 1, 0, 0})
	CMember(TArray<AActor*>)                           ActorsToNotAttachTo                                         ___ OFFSET(get<T>, {0xB18, 16, 0, 0})
	DMember(bool)                                      DontAttachToOthersOfThisClass                               ___ OFFSET(get<bool>, {0xB28, 1, 0, 0})
	DMember(bool)                                      DebugText                                                   ___ OFFSET(get<bool>, {0xB29, 1, 0, 0})
	DMember(bool)                                      ShouldNotReattach                                           ___ OFFSET(get<bool>, {0xB2A, 1, 0, 0})
	DMember(bool)                                      BlockStoppingSim                                            ___ OFFSET(get<bool>, {0xB2B, 1, 0, 0})
	DMember(bool)                                      DeactivatePawnAndVehicleCollisionOnStop                     ___ OFFSET(get<bool>, {0xB2C, 1, 0, 0})
	DMember(bool)                                      AllowReattachmentToActors                                   ___ OFFSET(get<bool>, {0xB2D, 1, 0, 0})
	SMember(FHitResult)                                StopSimHitResult                                            ___ OFFSET(get<T>, {0xB30, 224, 0, 0})
	SMember(FVector)                                   StopSimServerLocation                                       ___ OFFSET(get<T>, {0xC10, 24, 0, 0})
	DMember(double)                                    BounceAwayFromLocation_MinSpeed                             ___ OFFSET(get<double>, {0xC28, 8, 0, 0})
	DMember(bool)                                      BounceOffTires                                              ___ OFFSET(get<bool>, {0xC30, 1, 0, 0})
};

/// Class /Game/Athena/Items/EnvironmentalItems/ExplosiveProps/FuelIndicator.FuelIndicator_C
/// Size: 0x0010 (0x000978 - 0x000988)
class AFuelIndicator_C : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2440;

public:
	CMember(UAthenaSpecialActorComponent*)             AthenaSpecialActor                                          ___ OFFSET(get<T>, {0x978, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            ___ OFFSET(get<T>, {0x980, 8, 0, 0})
};

/// Class /Game/Athena/Items/Consumables/RiftItem/GE_RiftPortal_Teleported.GE_RiftPortal_Teleported_C
/// Size: 0x0000 (0x000A68 - 0x000A68)
class UGE_RiftPortal_Teleported_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2664;

public:
};

/// Class /Game/Athena/Items/Consumables/RiftItem/BGA_RiftPortal_Item_Athena.BGA_RiftPortal_Item_Athena_C
/// Size: 0x0270 (0x000A10 - 0x000C80)
class ABGA_RiftPortal_Item_Athena_C : public AFortAthenaRiftPortal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3200;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              ___ OFFSET(get<T>, {0xA10, 8, 0, 0})
	CMember(UFortSoundIndicatorComponent*)             SoundIndicator                                              ___ OFFSET(get<T>, {0xA18, 8, 0, 0})
	CMember(UPostProcessComponent*)                    RiftPostProcess                                             ___ OFFSET(get<T>, {0xA20, 8, 0, 0})
	CMember(USphereComponent*)                         PostProcessRadius                                           ___ OFFSET(get<T>, {0xA28, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_RiftClosingUp                                             ___ OFFSET(get<T>, {0xA30, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Rift_Idle_Loop                                            ___ OFFSET(get<T>, {0xA38, 8, 0, 0})
	CMember(UCapsuleComponent*)                        OverlapCapsule                                              ___ OFFSET(get<T>, {0xA40, 8, 0, 0})
	CMember(UCapsuleComponent*)                        Capsule                                                     ___ OFFSET(get<T>, {0xA48, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     SM_Rift                                                     ___ OFFSET(get<T>, {0xA50, 8, 0, 0})
	CMember(UAudioComponent*)                          Audio_Looping                                               ___ OFFSET(get<T>, {0xA58, 8, 0, 0})
	DMember(float)                                     FragmentMovement_Glow_9A68D88241DDB9CCA0BC82888C4EC266      ___ OFFSET(get<float>, {0xA60, 4, 0, 0})
	DMember(float)                                     FragmentMovement_Open_9A68D88241DDB9CCA0BC82888C4EC266      ___ OFFSET(get<float>, {0xA64, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           FragmentMovement__Direction_9A68D88241DDB9CCA0BC82888C4EC266 ___ OFFSET(get<T>, {0xA68, 1, 0, 0})
	CMember(UTimelineComponent*)                       FragmentMovement                                            ___ OFFSET(get<T>, {0xA70, 8, 0, 0})
	DMember(float)                                     Audio_RiftDestroyed_PitchCurve_00EF53CD47287903FB5B01AC2A7BE7C6 ___ OFFSET(get<float>, {0xA78, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Audio_RiftDestroyed__Direction_00EF53CD47287903FB5B01AC2A7BE7C6 ___ OFFSET(get<T>, {0xA7C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Audio_RiftDestroyed                                         ___ OFFSET(get<T>, {0xA80, 8, 0, 0})
	DMember(float)                                     VectorScale_Open_1424CF6C4426FFF7BA2A64817506E111           ___ OFFSET(get<float>, {0xA88, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           VectorScale__Direction_1424CF6C4426FFF7BA2A64817506E111     ___ OFFSET(get<T>, {0xA8C, 1, 0, 0})
	CMember(UTimelineComponent*)                       VectorScale                                                 ___ OFFSET(get<T>, {0xA90, 8, 0, 0})
	CMember(UParticleSystem*)                          DeathEffects                                                ___ OFFSET(get<T>, {0xA98, 8, 0, 0})
	CMember(USoundBase*)                               EnteredRift                                                 ___ OFFSET(get<T>, {0xAA0, 8, 0, 0})
	CMember(USoundBase*)                               RiftDestroyed                                               ___ OFFSET(get<T>, {0xAA8, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  ___ OFFSET(get<T>, {0xAB0, 8, 0, 0})
	SMember(FVector)                                   TeleportLocation                                            ___ OFFSET(get<T>, {0xAB8, 24, 0, 0})
	CMember(UParticleSystem*)                          EnterRift                                                   ___ OFFSET(get<T>, {0xAD0, 8, 0, 0})
	DMember(bool)                                      PortalOpen                                                  ___ OFFSET(get<bool>, {0xAD8, 1, 0, 0})
	CMember(UAnimMontage*)                             FallingAnimation                                            ___ OFFSET(get<T>, {0xAE0, 8, 0, 0})
	SMember(FScalableFloat)                            TeleportHeight                                              ___ OFFSET(get<T>, {0xAE8, 40, 0, 0})
	SMember(FScalableFloat)                            ActiveDuration                                              ___ OFFSET(get<T>, {0xB10, 40, 0, 0})
	SMember(FScalableFloat)                            HangTime                                                    ___ OFFSET(get<T>, {0xB38, 40, 0, 0})
	DMember(double)                                    TeleportDelay                                               ___ OFFSET(get<double>, {0xB60, 8, 0, 0})
	CMember(TArray<AFortPlayerPawn*>)                  PassengerArray                                              ___ OFFSET(get<T>, {0xB68, 16, 0, 0})
	CMember(UParticleSystem*)                          CrackExitRift                                               ___ OFFSET(get<T>, {0xB78, 8, 0, 0})
	CMember(USoundBase*)                               PlayerExitSkyCrack                                          ___ OFFSET(get<T>, {0xB80, 8, 0, 0})
	SMember(FVector)                                   ActorOriginalLocation                                       ___ OFFSET(get<T>, {0xB88, 24, 0, 0})
	DMember(int32_t)                                   MaxSpawnHeightMultiplier                                    ___ OFFSET(get<int32_t>, {0xBA0, 4, 0, 0})
	CMember(UFortQuestItemDefinition*)                 QuestItem                                                   ___ OFFSET(get<T>, {0xBA8, 8, 0, 0})
	SMember(FName)                                     ObjectiveBackendName                                        ___ OFFSET(get<T>, {0xBB0, 4, 0, 0})
	CMember(UFortQuestItemDefinition*)                 RiftPortalLocationsQuest                                    ___ OFFSET(get<T>, {0xBB8, 8, 0, 0})
	DMember(bool)                                      CreativeMode                                                ___ OFFSET(get<bool>, {0xBC0, 1, 0, 0})
	CMember(AActor*)                                   OverlapActor                                                ___ OFFSET(get<T>, {0xBC8, 8, 0, 0})
	DMember(int32_t)                                   RiftLocationNum                                             ___ OFFSET(get<int32_t>, {0xBD0, 4, 0, 0})
	SMember(FRotator)                                  ActorRotation                                               ___ OFFSET(get<T>, {0xBD8, 24, 0, 0})
	CMember(TScriptInterface<Class>)                   VehicleInterface                                            ___ OFFSET(get<T>, {0xBF0, 16, 0, 0})
	SMember(FVector)                                   Player_Location                                             ___ OFFSET(get<T>, {0xC00, 24, 0, 0})
	SMember(FVector)                                   TeleportLocationOffset                                      ___ OFFSET(get<T>, {0xC18, 24, 0, 0})
	CMember(TSet<AActor*>)                             BeganOverlapList                                            ___ OFFSET(get<T>, {0xC30, 80, 0, 0})
};

/// Class /Game/Athena/HUD/Bacchus/WidgetBehaviors/EmptyBehavior.EmptyBehavior_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UEmptyBehavior_C : public UHUDWidgetBehavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Athena/Playlists/Taxes/MissionGen_BlueFlatline.MissionGen_BlueFlatline_C
/// Size: 0x0000 (0x000830 - 0x000830)
class UMissionGen_BlueFlatline_C : public UFortMissionGenerator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2096;

public:
};

/// Enum /Game/Athena/AI/Pawns/NPC/Parents/Enum_NPC_AlertLevel.Enum_NPC_AlertLevel
/// Size: 0x06
enum Enum_NPC_AlertLevel : uint8_t
{
	Enum_NPC_AlertLevel__NewEnumerator40                                             = 0,
	Enum_NPC_AlertLevel__NewEnumerator01                                             = 1,
	Enum_NPC_AlertLevel__NewEnumerator12                                             = 2,
	Enum_NPC_AlertLevel__NewEnumerator23                                             = 3,
	Enum_NPC_AlertLevel__NewEnumerator34                                             = 4,
	Enum_NPC_AlertLevel__Enum_NPC_MAX5                                               = 5
};

/// Enum /Game/Athena/AI/Pawns/NPC/Parents/Enum_NPC_TargetSlots.Enum_NPC_TargetSlots
/// Size: 0x03
enum Enum_NPC_TargetSlots : uint8_t
{
	Enum_NPC_TargetSlots__NewEnumerator00                                            = 0,
	Enum_NPC_TargetSlots__NewEnumerator11                                            = 1,
	Enum_NPC_TargetSlots__Enum_NPC_MAX2                                              = 2
};

/// Enum /Game/Athena/Items/Gameplay/BackPacks/BoostJumpPack/Enum_BoostJumpStates.Enum_BoostJumpStates
/// Size: 0x06
enum Enum_BoostJumpStates : uint8_t
{
	Enum_BoostJumpStates__NewEnumerator30                                            = 0,
	Enum_BoostJumpStates__NewEnumerator01                                            = 1,
	Enum_BoostJumpStates__NewEnumerator12                                            = 2,
	Enum_BoostJumpStates__NewEnumerator23                                            = 3,
	Enum_BoostJumpStates__NewEnumerator44                                            = 4,
	Enum_BoostJumpStates__Enum_MAX5                                                  = 5
};

/// Enum /Game/Athena/Items/HeldObjects/HeldObjectVersion2/Enum_HeldObject_GenericWeights.Enum_HeldObject_GenericWeights
/// Size: 0x04
enum Enum_HeldObject_GenericWeights : uint8_t
{
	Enum_HeldObject_GenericWeights__NewEnumerator00                                  = 0,
	Enum_HeldObject_GenericWeights__NewEnumerator11                                  = 1,
	Enum_HeldObject_GenericWeights__NewEnumerator22                                  = 2,
	Enum_HeldObject_GenericWeights__Enum_HeldObject_MAX3                             = 3
};

