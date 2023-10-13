
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: GameplayAbilities
/// dependency: GameplayEffectTemplates

/// Class /Game/Abilities/Player/Ninja/Perks/MantisLeap/GE_Ninja_MantisLeap_Enable.GE_Ninja_MantisLeap_Enable_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Ninja_MantisLeap_Enable_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GE_Generic_BotTurret.GE_Generic_BotTurret_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Generic_BotTurret_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C
/// Size: 0x0018 (0x000AC0 - 0x000AD8)
class UGA_Generic_BotTurretShoot_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2776;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	SMember(FGameplayTag)                              T_None                                                      OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})
	SMember(FGameplayTag)                              T_RangeUpgrade1                                             OFFSET(getStruct<T>, {0xAD0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.GetRangeTag
	// void GetRangeTag(FGameplayTag& TargetTag);                                                                               // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.GetCustomAbilitySourceTransform
	// FTransform GetCustomAbilitySourceTransform();                                                                            // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.Cancelled_A37C36084B41A1B49DD946A52CACDE45
	// void Cancelled_A37C36084B41A1B49DD946A52CACDE45(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.Targeted_A37C36084B41A1B49DD946A52CACDE45
	// void Targeted_A37C36084B41A1B49DD946A52CACDE45(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurretShoot.GA_Generic_BotTurretShoot_C.ExecuteUbergraph_GA_Generic_BotTurretShoot
	// void ExecuteUbergraph_GA_Generic_BotTurretShoot(int32_t EntryPoint);                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C
/// Size: 0x0010 (0x000AC0 - 0x000AD0)
class UGA_Generic_BotTurretExplosion_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	SMember(FGameplayTag)                              EC_Explosion                                                OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.Cancelled_0AE6B0594940799A0AB506A647527DAE
	// void Cancelled_0AE6B0594940799A0AB506A647527DAE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.Targeted_0AE6B0594940799A0AB506A647527DAE
	// void Targeted_0AE6B0594940799A0AB506A647527DAE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GA_Generic_BotTurretExplosion.GA_Generic_BotTurretExplosion_C.ExecuteUbergraph_GA_Generic_BotTurretExplosion
	// void ExecuteUbergraph_GA_Generic_BotTurretExplosion(int32_t EntryPoint);                                                 // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C
/// Size: 0x0080 (0x000770 - 0x0007F0)
class AB_BGA_BotTurret_Parent_C : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2032;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x770, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ExplosionBuildUP_Flashes                                    OFFSET(get<T>, {0x778, 8, 0, 0})
	CMember(UAudioComponent*)                          Bot_Self_Destruct_Beep                                      OFFSET(get<T>, {0x780, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   SK_Bot_Turret                                               OFFSET(get<T>, {0x788, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x790, 8, 0, 0})
	CMember(UMulticastDelegate)                        BotFired                                                    OFFSET(get<T>, {0x798, 16, 0, 0})
	CMember(AFortAIPawn*)                              Target                                                      OFFSET(get<T>, {0x7A8, 8, 0, 0})
	SMember(FFBotTurretData)                           BotData                                                     OFFSET(getStruct<T>, {0x7B0, 24, 0, 0})
	DMember(int32_t)                                   Left_Right_Gun                                              OFFSET(get<int32_t>, {0x7C8, 4, 0, 0})
	CMember(UMulticastDelegate)                        BotExplosionWarning                                         OFFSET(get<T>, {0x7D0, 16, 0, 0})
	CMember(UMulticastDelegate)                        BotExplode                                                  OFFSET(get<T>, {0x7E0, 16, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.OnRep_BotData
	// void OnRep_BotData();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.LeftOrRightGunFired
	// void LeftOrRightGunFired(int32_t A);                                                                                     // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetGunSpawnRotFromSocket
	// void SetGunSpawnRotFromSocket(FName SocketName, FVector InVect);                                                         // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.PassBotInfo
	// void PassBotInfo(float WarmupTime, float BotDuration, float FireRate, float Radius, float RadiusDefault, bool ExplosionUpgrade); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetTarget
	// void SetTarget(AFortAIPawn* Target);                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.Ready
	// void Ready();                                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.Fired
	// void Fired();                                                                                                            // [0x154a140] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.ExecuteUbergraph_B_BGA_BotTurret_Parent
	// void ExecuteUbergraph_B_BGA_BotTurret_Parent(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplode__DelegateSignature
	// void BotExplode__DelegateSignature();                                                                                    // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplosionWarning__DelegateSignature
	// void BotExplosionWarning__DelegateSignature();                                                                           // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotFired__DelegateSignature
	// void BotFired__DelegateSignature(int32_t Left);                                                                          // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/Player/Ninja/Perks/Assassination/GE_Ninja_Assassination.GE_Ninja_Assassination_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Ninja_Assassination_C : public UGET_ModifyEdgedDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/TT_Constructor_HammerHitsHeal.TT_Constructor_HammerHitsHeal_C
/// Size: 0x0000 (0x000168 - 0x000168)
class UTT_Constructor_HammerHitsHeal_C : public UFortGameplayAbilityTooltip
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:


	/// Functions
	// Function /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/TT_Constructor_HammerHitsHeal.TT_Constructor_HammerHitsHeal_C.GetTextForTokenFromAbilityInstanceInternal
	// bool GetTextForTokenFromAbilityInstanceInternal(UGameplayAbility* AbilityInstance, FGameplayTag& Tag, UFortTooltipContext* Context, FGameplayTag& Token, FText& OutText); // [0x154a140] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/TT_Constructor_HammerHitsHeal.TT_Constructor_HammerHitsHeal_C.InitializeAbilityInstanceInternal
	// void InitializeAbilityInstanceInternal(UGameplayAbility* AbilityInstance, UFortTooltipContext* Context);                 // [0x154a140] Event|Protected|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/GE_Constructor_HammerHitsHeal.GE_Constructor_HammerHitsHeal_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_HammerHitsHeal_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/TT_Ninja_SwordHitsHeal.TT_Ninja_SwordHitsHeal_C
/// Size: 0x0000 (0x000168 - 0x000168)
class UTT_Ninja_SwordHitsHeal_C : public UFortGameplayAbilityTooltip
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:


	/// Functions
	// Function /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/TT_Ninja_SwordHitsHeal.TT_Ninja_SwordHitsHeal_C.GetTextForTokenFromAbilityInstanceInternal
	// bool GetTextForTokenFromAbilityInstanceInternal(UGameplayAbility* AbilityInstance, FGameplayTag& Tag, UFortTooltipContext* Context, FGameplayTag& Token, FText& OutText); // [0x154a140] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/TT_Ninja_SwordHitsHeal.TT_Ninja_SwordHitsHeal_C.InitializeAbilityInstanceInternal
	// void InitializeAbilityInstanceInternal(UGameplayAbility* AbilityInstance, UFortTooltipContext* Context);                 // [0x154a140] Event|Protected|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/GE_Ninja_SwordHitsHeal.GE_Ninja_SwordHitsHeal_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Ninja_SwordHitsHeal_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/TT_Ninja_Tactical_MeleeHitsHeal.TT_Ninja_Tactical_MeleeHitsHeal_C
/// Size: 0x0000 (0x000168 - 0x000168)
class UTT_Ninja_Tactical_MeleeHitsHeal_C : public UFortGameplayAbilityTooltip
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:


	/// Functions
	// Function /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/TT_Ninja_Tactical_MeleeHitsHeal.TT_Ninja_Tactical_MeleeHitsHeal_C.GetTextForTokenFromAbilityInstanceInternal
	// bool GetTextForTokenFromAbilityInstanceInternal(UGameplayAbility* AbilityInstance, FGameplayTag& Tag, UFortTooltipContext* Context, FGameplayTag& Token, FText& OutText); // [0x154a140] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/TT_Ninja_Tactical_MeleeHitsHeal.TT_Ninja_Tactical_MeleeHitsHeal_C.InitializeAbilityInstanceInternal
	// void InitializeAbilityInstanceInternal(UGameplayAbility* AbilityInstance, UFortTooltipContext* Context);                 // [0x154a140] Event|Protected|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GE_Ninja_Tactical_MeleeHitsHeal.GE_Ninja_Tactical_MeleeHitsHeal_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Ninja_Tactical_MeleeHitsHeal_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Husk/Base/GE_SpecialEvent_Halloween_PumpkinHead.GE_SpecialEvent_Halloween_PumpkinHead_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_SpecialEvent_Halloween_PumpkinHead_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GE_SmasherClearChargeEffects.GE_SmasherClearChargeEffects_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_SmasherClearChargeEffects_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGAB_AIBaseSimpleMontage_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.Completed_19E6A1264ED43B37D77327A113073715
	// void Completed_19E6A1264ED43B37D77327A113073715(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.Cancelled_19E6A1264ED43B37D77327A113073715
	// void Cancelled_19E6A1264ED43B37D77327A113073715(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.Triggered_19E6A1264ED43B37D77327A113073715
	// void Triggered_19E6A1264ED43B37D77327A113073715(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseSimpleMontage.GAB_AIBaseSimpleMontage_C.ExecuteUbergraph_GAB_AIBaseSimpleMontage
	// void ExecuteUbergraph_GAB_AIBaseSimpleMontage(int32_t EntryPoint);                                                       // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Smasher/GE_SmasherReachedChargeSpeed.GE_SmasherReachedChargeSpeed_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_SmasherReachedChargeSpeed_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GE_SmasherFaceplant.GE_SmasherFaceplant_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_SmasherFaceplant_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GE_Smasher_FloorMeleeCooldown_TEMP.GE_Smasher_FloorMeleeCooldown_TEMP_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Smasher_FloorMeleeCooldown_TEMP_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GE_SmasherFrustration.GE_SmasherFrustration_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_SmasherFrustration_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GE_SmasherMeleeFailure.GE_SmasherMeleeFailure_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_SmasherMeleeFailure_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Husk/Pitcher/GE_HuskPitcherRangedCooldown.GE_HuskPitcherRangedCooldown_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_HuskPitcherRangedCooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C
/// Size: 0x0028 (0x000AC0 - 0x000AE8)
class UGAB_AIBaseRanged_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(AActor*)                                   CurrentAIAbilityTarget                                      OFFSET(get<T>, {0xAC8, 8, 0, 0})
	DMember(float)                                     LastThrowTime                                               OFFSET(get<float>, {0xAD0, 4, 0, 0})
	DMember(float)                                     TimeSinceLastThrowToResetThrowCount                         OFFSET(get<float>, {0xAD4, 4, 0, 0})
	SMember(FCurveTableRowHandle)                      ProjectileSpeedDifficultyCurve                              OFFSET(getStruct<T>, {0xAD8, 16, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C.Completed_2221E89D4148023005FB94B04BA06EF9
	// void Completed_2221E89D4148023005FB94B04BA06EF9(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C.Cancelled_2221E89D4148023005FB94B04BA06EF9
	// void Cancelled_2221E89D4148023005FB94B04BA06EF9(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C.Triggered_2221E89D4148023005FB94B04BA06EF9
	// void Triggered_2221E89D4148023005FB94B04BA06EF9(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C.K2_TriggerFromAnimation
	// void K2_TriggerFromAnimation(FGameplayTag ApplicationTag);                                                               // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C.IncreaseAccuracyAndUpdateLastThrowTime
	// void IncreaseAccuracyAndUpdateLastThrowTime();                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseRanged.GAB_AIBaseRanged_C.ExecuteUbergraph_GAB_AIBaseRanged
	// void ExecuteUbergraph_GAB_AIBaseRanged(int32_t EntryPoint);                                                              // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Flinger/GE_FlingerMeleeSwipeCooldown.GE_FlingerMeleeSwipeCooldown_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_FlingerMeleeSwipeCooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Flinger/GE_FlingerMeleeVulnerability.GE_FlingerMeleeVulnerability_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_FlingerMeleeVulnerability_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C
/// Size: 0x0028 (0x000AC0 - 0x000AE8)
class UGAB_FlingerThrowHusk_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(AFlingerPawn_C*)                           FlingerPawn                                                 OFFSET(get<T>, {0xAC8, 8, 0, 0})
	CMember(AHuskPawn_C*)                              HuskHeldByFlinger                                           OFFSET(get<T>, {0xAD0, 8, 0, 0})
	SMember(FGameplayTag)                              GC_FlingerGrabNPC                                           OFFSET(getStruct<T>, {0xAD8, 8, 0, 0})
	SMember(FGameplayTag)                              GC_NPCRangedThrow                                           OFFSET(getStruct<T>, {0xAE0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer& RelevantTags);                    // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Completed_B56594C44CE933A96A3E13BDCFC1097D
	// void Completed_B56594C44CE933A96A3E13BDCFC1097D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Cancelled_B56594C44CE933A96A3E13BDCFC1097D
	// void Cancelled_B56594C44CE933A96A3E13BDCFC1097D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.Triggered_B56594C44CE933A96A3E13BDCFC1097D
	// void Triggered_B56594C44CE933A96A3E13BDCFC1097D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.CommitAndEndAbility
	// void CommitAndEndAbility();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.SpawnFX
	// void SpawnFX();                                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.StopFX
	// void StopFX();                                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.OnEndPlay
	// void OnEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.BindOnEndPlay
	// void BindOnEndPlay(AHuskPawn_C* Pawn);                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.UnbindOnEndPlay
	// void UnbindOnEndPlay(AHuskPawn_C* Pawn);                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerThrowHusk.GAB_FlingerThrowHusk_C.ExecuteUbergraph_GAB_FlingerThrowHusk
	// void ExecuteUbergraph_GAB_FlingerThrowHusk(int32_t EntryPoint);                                                          // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGAB_FlingerRoar_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C.OnCancelled_AD410E224F398036F9E428A39B02B87C
	// void OnCancelled_AD410E224F398036F9E428A39B02B87C();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C.OnInterrupted_AD410E224F398036F9E428A39B02B87C
	// void OnInterrupted_AD410E224F398036F9E428A39B02B87C();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C.OnBlendOut_AD410E224F398036F9E428A39B02B87C
	// void OnBlendOut_AD410E224F398036F9E428A39B02B87C();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C.OnCompleted_AD410E224F398036F9E428A39B02B87C
	// void OnCompleted_AD410E224F398036F9E428A39B02B87C();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRoar.GAB_FlingerRoar_C.ExecuteUbergraph_GAB_FlingerRoar
	// void ExecuteUbergraph_GAB_FlingerRoar(int32_t EntryPoint);                                                               // [0x154a140] None                 
};

/// Class /Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C
/// Size: 0x0030 (0x000AE8 - 0x000B18)
class UGAB_FlingerRanged_C : public UGAB_AIBaseRanged_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2840;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAE8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ThrowFX                                                     OFFSET(get<T>, {0xAF0, 8, 0, 0})
	CMember(UParticleSystem*)                          ThrowFXTemplate                                             OFFSET(get<T>, {0xAF8, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   FlingerMesh                                                 OFFSET(get<T>, {0xB00, 8, 0, 0})
	SMember(FGameplayTag)                              GC_NPCRangedGrab                                            OFFSET(getStruct<T>, {0xB08, 8, 0, 0})
	SMember(FGameplayTag)                              GC_NPCRangedThrow                                           OFFSET(getStruct<T>, {0xB10, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C.SpawnFX
	// void SpawnFX();                                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C.StopFX
	// void StopFX();                                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerRanged.GAB_FlingerRanged_C.ExecuteUbergraph_GAB_FlingerRanged
	// void ExecuteUbergraph_GAB_FlingerRanged(int32_t EntryPoint);                                                             // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C
/// Size: 0x0010 (0x000AC0 - 0x000AD0)
class UGAB_FlingerMeleeSwipe_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	SMember(FName)                                     MontageSectionToPlay                                        OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.Completed_75D3277A479B3F48D2AD2889328C3F32
	// void Completed_75D3277A479B3F48D2AD2889328C3F32(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.Cancelled_75D3277A479B3F48D2AD2889328C3F32
	// void Cancelled_75D3277A479B3F48D2AD2889328C3F32(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.Triggered_75D3277A479B3F48D2AD2889328C3F32
	// void Triggered_75D3277A479B3F48D2AD2889328C3F32(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.ExecuteUbergraph_GAB_FlingerMeleeSwipe
	// void ExecuteUbergraph_GAB_FlingerMeleeSwipe(int32_t EntryPoint);                                                         // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Smasher/GE_SmasherMeleeSuccess.GE_SmasherMeleeSuccess_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_SmasherMeleeSuccess_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GE_SmasherMeleeCooldown.GE_SmasherMeleeCooldown_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_SmasherMeleeCooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C
/// Size: 0x01D8 (0x000AC0 - 0x000C98)
class UGAB_SmasherCharge_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3224;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(ASmasherPawn_C*)                           SmasherPawn                                                 OFFSET(get<T>, {0xAC8, 8, 0, 0})
	CMember(AActor*)                                   BumpedActor                                                 OFFSET(get<T>, {0xAD0, 8, 0, 0})
	SMember(FVector)                                   BumpedActorNormal                                           OFFSET(getStruct<T>, {0xAD8, 12, 0, 0})
	SMember(FVector)                                   BumpedActorImpactPoint                                      OFFSET(getStruct<T>, {0xAE4, 12, 0, 0})
	DMember(float)                                     BumpedActorImpactBufferHeight                               OFFSET(get<float>, {0xAF0, 4, 0, 0})
	SMember(FVector)                                   BumpedActorSmasherVelocity                                  OFFSET(getStruct<T>, {0xAF4, 12, 0, 0})
	DMember(float)                                     BumpedActorExceptionZNormalThreshold                        OFFSET(get<float>, {0xB00, 4, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0xB04, 1, 0, 0})
	DMember(bool)                                      ChargingSpeedReached                                        OFFSET(get<bool>, {0xB05, 1, 0, 0})
	DMember(bool)                                      LastCheckWasSlow                                            OFFSET(get<bool>, {0xB06, 1, 0, 0})
	DMember(bool)                                      SmasherFaceplanted                                          OFFSET(get<bool>, {0xB07, 1, 0, 0})
	DMember(bool)                                      WaitingForMeleeSwingTargetSelection                         OFFSET(get<bool>, {0xB08, 1, 0, 0})
	DMember(bool)                                      WaitingForChargeDamageTargetSelection                       OFFSET(get<bool>, {0xB09, 1, 0, 0})
	DMember(bool)                                      ChargeDamageTargetSelectionDamagedSomething                 OFFSET(get<bool>, {0xB0A, 1, 0, 0})
	DMember(bool)                                      AbilityShouldEndASAP                                        OFFSET(get<bool>, {0xB0B, 1, 0, 0})
	DMember(bool)                                      AbilityEndingNow                                            OFFSET(get<bool>, {0xB0C, 1, 0, 0})
	CMember(TArray<AActor*>)                           ActorsDamagedBySmasherCharge                                OFFSET(get<T>, {0xB10, 16, 0, 0})
	CMember(UClass*)                                   GE_SmasherReachedChargeSpeed                                OFFSET(get<T>, {0xB20, 8, 0, 0})
	CMember(UClass*)                                   GE_SmasherFaceplant                                         OFFSET(get<T>, {0xB28, 8, 0, 0})
	SMember(FGameplayTag)                              EC_NPCAbilityAttackMeleeCharge                              OFFSET(getStruct<T>, {0xB30, 8, 0, 0})
	DMember(float)                                     MinYawAngleToLaunchPawnsFromSmasherCharge                   OFFSET(get<float>, {0xB38, 4, 0, 0})
	DMember(float)                                     PitchAngleToLaunchPawnsFromSmasherCharge                    OFFSET(get<float>, {0xB3C, 4, 0, 0})
	DMember(float)                                     SmasherChargeLaunchPawnVelocity                             OFFSET(get<float>, {0xB40, 4, 0, 0})
	DMember(float)                                     ChargeTimeoutTime                                           OFFSET(get<float>, {0xB44, 4, 0, 0})
	CMember(TArray<AActor*>)                           CachedArrayOfHitActors                                      OFFSET(get<T>, {0xB48, 16, 0, 0})
	DMember(bool)                                      bTryingToPlayMeleeSwing                                     OFFSET(get<bool>, {0xB58, 1, 0, 0})
	DMember(bool)                                      bCancelledMontage                                           OFFSET(get<bool>, {0xB59, 1, 0, 0})
	DMember(float)                                     SmasherChargeRotationRate                                   OFFSET(get<float>, {0xB5C, 4, 0, 0})
	CMember(AActor*)                                   PreviouslyBumpedActor                                       OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(AActor*)                                   LastDamagedActor                                            OFFSET(get<T>, {0xB68, 8, 0, 0})
	DMember(bool)                                      ChargeMovementReachedGoalActor                              OFFSET(get<bool>, {0xB70, 1, 0, 0})
	DMember(bool)                                      ChargeHitGoalActor                                          OFFSET(get<bool>, {0xB71, 1, 0, 0})
	DMember(float)                                     FaceplantCheckTime                                          OFFSET(get<float>, {0xB74, 4, 0, 0})
	DMember(float)                                     LastCheckWasSlowTime                                        OFFSET(get<float>, {0xB78, 4, 0, 0})
	DMember(float)                                     SmasherFaceplantedTime                                      OFFSET(get<float>, {0xB7C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NPCBehaviorProhibitsAbilityAttackMeleeBump               OFFSET(getStruct<T>, {0xB80, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NPCBehaviorProbibitsAbilityAttackAny                     OFFSET(getStruct<T>, {0xBA0, 32, 0, 0})
	SMember(FGameplayTag)                              GC_GameplayCueNPCSmasherCharge                              OFFSET(getStruct<T>, {0xBC0, 8, 0, 0})
	SMember(FFortFeedbackHandle)                       SmasherChargingFeedback                                     OFFSET(getStruct<T>, {0xBC8, 24, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NPCBehaviorDBNO                                          OFFSET(getStruct<T>, {0xBE0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_GameplayStatusDBNO                                       OFFSET(getStruct<T>, {0xC00, 32, 0, 0})
	CMember(AActor*)                                   FaceplantActorIAmStandingOn                                 OFFSET(get<T>, {0xC20, 8, 0, 0})
	CMember(UFortAbilityTask_MoveAI*)                  ChargeMoveLocation                                          OFFSET(get<T>, {0xC28, 8, 0, 0})
	CMember(UFortAbilityTask_MoveAI*)                  ChargeMove                                                  OFFSET(get<T>, {0xC30, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_ConstructorBullrushing                                   OFFSET(getStruct<T>, {0xC38, 32, 0, 0})
	CMember(TArray<AActor*>)                           OverlappingFortPawns                                        OFFSET(get<T>, {0xC58, 16, 0, 0})
	CMember(TArray<AActor*>)                           OverlappingBuildingActors                                   OFFSET(get<T>, {0xC68, 16, 0, 0})
	SMember(FGameplayTagContainer)                     T_KnockbackImmune                                           OFFSET(getStruct<T>, {0xC78, 32, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.EnableHotspots
	// void EnableHotspots(bool Enable);                                                                                        // [0x154a140] Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.DamageThisActor
	// void DamageThisActor(AActor* Actor);                                                                                     // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Slow Speed Faceplant Check
	// void Slow Speed Faceplant Check(bool& Standing On Bumped Actor We Previously Ignored);                                   // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.UpdateChargingSpeedReached
	// void UpdateChargingSpeedReached();                                                                                       // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.InitializeAbility
	// void InitializeAbility();                                                                                                // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Completed_0B8569504C1E876E723C499B4462A584
	// void Completed_0B8569504C1E876E723C499B4462A584(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Cancelled_0B8569504C1E876E723C499B4462A584
	// void Cancelled_0B8569504C1E876E723C499B4462A584(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Triggered_0B8569504C1E876E723C499B4462A584
	// void Triggered_0B8569504C1E876E723C499B4462A584(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.OnMoveFinished_2B1380284EE36AB4C4A04DBDFF3C24C9
	// void OnMoveFinished_2B1380284EE36AB4C4A04DBDFF3C24C9(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.OnRequestFailed_2B1380284EE36AB4C4A04DBDFF3C24C9
	// void OnRequestFailed_2B1380284EE36AB4C4A04DBDFF3C24C9();                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.OnCancelled_2B1380284EE36AB4C4A04DBDFF3C24C9
	// void OnCancelled_2B1380284EE36AB4C4A04DBDFF3C24C9();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.OnInterrupted_2B1380284EE36AB4C4A04DBDFF3C24C9
	// void OnInterrupted_2B1380284EE36AB4C4A04DBDFF3C24C9();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.OnComplete_2B1380284EE36AB4C4A04DBDFF3C24C9
	// void OnComplete_2B1380284EE36AB4C4A04DBDFF3C24C9();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.OnMoveFinished_1048ADC34DB8C17033C4B9A1C116D220
	// void OnMoveFinished_1048ADC34DB8C17033C4B9A1C116D220(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.OnRequestFailed_1048ADC34DB8C17033C4B9A1C116D220
	// void OnRequestFailed_1048ADC34DB8C17033C4B9A1C116D220();                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.OnCancelled_1048ADC34DB8C17033C4B9A1C116D220
	// void OnCancelled_1048ADC34DB8C17033C4B9A1C116D220();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.OnInterrupted_1048ADC34DB8C17033C4B9A1C116D220
	// void OnInterrupted_1048ADC34DB8C17033C4B9A1C116D220();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.OnComplete_1048ADC34DB8C17033C4B9A1C116D220
	// void OnComplete_1048ADC34DB8C17033C4B9A1C116D220();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Cancelled_9066C547446CB68FD5A3D5BB83B00491
	// void Cancelled_9066C547446CB68FD5A3D5BB83B00491(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Targeted_9066C547446CB68FD5A3D5BB83B00491
	// void Targeted_9066C547446CB68FD5A3D5BB83B00491(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Cancelled_26E7DFC34C3008718C4C46A45D67C637
	// void Cancelled_26E7DFC34C3008718C4C46A45D67C637(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Targeted_26E7DFC34C3008718C4C46A45D67C637
	// void Targeted_26E7DFC34C3008718C4C46A45D67C637(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Completed_C216669A4D935722E29A339C9C0ADB50
	// void Completed_C216669A4D935722E29A339C9C0ADB50(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Cancelled_C216669A4D935722E29A339C9C0ADB50
	// void Cancelled_C216669A4D935722E29A339C9C0ADB50(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Triggered_C216669A4D935722E29A339C9C0ADB50
	// void Triggered_C216669A4D935722E29A339C9C0ADB50(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.EventReceived_51CE074748CA749955FE2CA61620188A
	// void EventReceived_51CE074748CA749955FE2CA61620188A(FGameplayEventData Payload);                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.MoveToLoop
	// void MoveToLoop();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.SmasherBumpsSomething
	// void SmasherBumpsSomething(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);               // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.ChargeTimeOut
	// void ChargeTimeOut();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.AttemptEndAbility
	// void AttemptEndAbility(FString From);                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.StopLoopingOverList
	// void StopLoopingOverList();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.EnableCrushBox
	// void EnableCrushBox();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.DisableCrushBox
	// void DisableCrushBox();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.CrushBoxOverlap
	// void CrushBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.EnableSmasherBump
	// void EnableSmasherBump();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.DisableSmasherBump
	// void DisableSmasherBump();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.MeleeSwingComplete
	// void MeleeSwingComplete();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.MeleeSwingBoxOverlap
	// void MeleeSwingBoxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.AttemptToFindActorsToMeleeSwingAt
	// void AttemptToFindActorsToMeleeSwingAt();                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.AttemptChargeDamage
	// void AttemptChargeDamage();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Faceplant
	// void Faceplant();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.FaceplantCheck
	// void FaceplantCheck();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.ChargeSpeedCheck
	// void ChargeSpeedCheck();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.CheckForActorsThatShouldBeDamagedWhenChargeBegins
	// void CheckForActorsThatShouldBeDamagedWhenChargeBegins();                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.Attempt to Melee Swing And Deal Charge Damage
	// void Attempt to Melee Swing And Deal Charge Damage(FString CallerDebugString);                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherCharge.GAB_SmasherCharge_C.ExecuteUbergraph_GAB_SmasherCharge
	// void ExecuteUbergraph_GAB_SmasherCharge(int32_t EntryPoint);                                                             // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherBump.GAB_SmasherBump_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGAB_SmasherBump_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherBump.GAB_SmasherBump_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherBump.GAB_SmasherBump_C.ExecuteUbergraph_GAB_SmasherBump
	// void ExecuteUbergraph_GAB_SmasherBump(int32_t EntryPoint);                                                               // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C
/// Size: 0x0010 (0x000B10 - 0x000B20)
class UGAB_SmasherTurnTransition_C : public UFortGameplayAbility_AITurnTransition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB10, 8, 0, 0})
	CMember(UClass*)                                   GE_SmasherMeleeFailure                                      OFFSET(get<T>, {0xB18, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C.OnCancelled_74AB7DD04E752966F0F2FB849BD5B81D
	// void OnCancelled_74AB7DD04E752966F0F2FB849BD5B81D();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C.OnInterrupted_74AB7DD04E752966F0F2FB849BD5B81D
	// void OnInterrupted_74AB7DD04E752966F0F2FB849BD5B81D();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C.OnBlendOut_74AB7DD04E752966F0F2FB849BD5B81D
	// void OnBlendOut_74AB7DD04E752966F0F2FB849BD5B81D();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C.OnCompleted_74AB7DD04E752966F0F2FB849BD5B81D
	// void OnCompleted_74AB7DD04E752966F0F2FB849BD5B81D();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C.ExecuteUbergraph_GAB_SmasherTurnTransition
	// void ExecuteUbergraph_GAB_SmasherTurnTransition(int32_t EntryPoint);                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherTired.GAB_SmasherTired_C
/// Size: 0x0010 (0x000AC8 - 0x000AD8)
class UGAB_SmasherTired_C : public UGAB_AIBaseSimpleMontage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2776;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})
	CMember(UClass*)                                   GE_SmasherClearChargeEffects                                OFFSET(get<T>, {0xAD0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherTired.GAB_SmasherTired_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherTired.GAB_SmasherTired_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherTired.GAB_SmasherTired_C.ExecuteUbergraph_GAB_SmasherTired
	// void ExecuteUbergraph_GAB_SmasherTired(int32_t EntryPoint);                                                              // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherRoar.GAB_SmasherRoar_C
/// Size: 0x0000 (0x000AC8 - 0x000AC8)
class UGAB_SmasherRoar_C : public UGAB_AIBaseSimpleMontage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:


	/// Functions
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRoar.GAB_SmasherRoar_C.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer& RelevantTags);                    // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherSpawnRoar.GAB_SmasherSpawnRoar_C
/// Size: 0x0000 (0x000AC8 - 0x000AC8)
class UGAB_SmasherSpawnRoar_C : public UGAB_SmasherRoar_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C
/// Size: 0x0010 (0x000AC8 - 0x000AD8)
class UGAB_SmasherChargeDecelerate_C : public UGAB_AIBaseSimpleMontage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2776;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})
	SMember(FGameplayTag)                              GC_GameplayCueNPCSmasherCharge                              OFFSET(getStruct<T>, {0xAD0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherChargeDecelerate.GAB_SmasherChargeDecelerate_C.ExecuteUbergraph_GAB_SmasherChargeDecelerate
	// void ExecuteUbergraph_GAB_SmasherChargeDecelerate(int32_t EntryPoint);                                                   // [0x154a140] None                 
};

/// Class /Game/Abilities/NPC/Generic/GE_ATLASZapDamage.GE_ATLASZapDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_ATLASZapDamage_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GAB_ATLASZap.GAB_ATLASZap_C
/// Size: 0x0010 (0x000AC0 - 0x000AD0)
class UGAB_ATLASZap_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	SMember(FGameplayTag)                              TC_GameplayEffectInstantDeath                               OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_ATLASZap.GAB_ATLASZap_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_ATLASZap.GAB_ATLASZap_C.ExecuteUbergraph_GAB_ATLASZap
	// void ExecuteUbergraph_GAB_ATLASZap(int32_t EntryPoint);                                                                  // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Generic/GE_InstantHeal.GE_InstantHeal_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_InstantHeal_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Mimic/GAB_InstantHeal.GAB_InstantHeal_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGAB_InstantHeal_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Mimic/GAB_InstantHeal.GAB_InstantHeal_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Mimic/GAB_InstantHeal.GAB_InstantHeal_C.ExecuteUbergraph_GAB_InstantHeal
	// void ExecuteUbergraph_GAB_InstantHeal(int32_t EntryPoint);                                                               // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Mimic/GAB_BecomeChest.GAB_BecomeChest_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGAB_BecomeChest_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Mimic/GAB_BecomeChest.GAB_BecomeChest_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Mimic/GAB_BecomeChest.GAB_BecomeChest_C.ExecuteUbergraph_GAB_BecomeChest
	// void ExecuteUbergraph_GAB_BecomeChest(int32_t EntryPoint);                                                               // [0x154a140] None                 
};

/// Class /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C
/// Size: 0x019C (0x0004C0 - 0x00065C)
class AB_Placement_Preview_AirStrike_C : public AFortDecoPreview
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1628;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x4C0, 8, 0, 0})
	CMember(UAudioComponent*)                          airstrike_incoming_place_audiocomponent                     OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     GridDecal_Mesh                                              OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Sm_SupplyDrop_TargetRay_01                                  OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(UDecalComponent*)                          GridDecal                                                   OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(UBoxComponent*)                            Box1                                                        OFFSET(get<T>, {0x4E8, 8, 0, 0})
	DMember(float)                                     Spawn_Arrow_NewTrack_0_D8CAB91943322A93E0FF2CA94190A798     OFFSET(get<float>, {0x4F0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Spawn_Arrow__Direction_D8CAB91943322A93E0FF2CA94190A798     OFFSET(get<T>, {0x4F4, 1, 0, 0})
	CMember(UTimelineComponent*)                       Spawn_Arrow                                                 OFFSET(get<T>, {0x4F8, 8, 0, 0})
	DMember(float)                                     ReticuleRestartDelay                                        OFFSET(get<float>, {0x500, 4, 0, 0})
	DMember(float)                                     ReticuleIntermittentDelay                                   OFFSET(get<float>, {0x504, 4, 0, 0})
	DMember(float)                                     BombsDelay                                                  OFFSET(get<float>, {0x508, 4, 0, 0})
	DMember(bool)                                      Can_212_x1_Repeat_                                          OFFSET(get<bool>, {0x50C, 1, 0, 0})
	DMember(bool)                                      Can_212_x2_Repeat_                                          OFFSET(get<bool>, {0x50D, 1, 0, 0})
	DMember(float)                                     DecalRotation                                               OFFSET(get<float>, {0x510, 4, 0, 0})
	DMember(int32_t)                                   Dotted_Lines_Amount                                         OFFSET(get<int32_t>, {0x514, 4, 0, 0})
	DMember(float)                                     Dotted_Lines_Spacing_in_Z                                   OFFSET(get<float>, {0x518, 4, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             Dotted_Lines_Spacing                                        OFFSET(get<T>, {0x520, 16, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 _3dline_MID                                                 OFFSET(get<T>, {0x530, 8, 0, 0})
	SMember(FVector)                                   ArrowheadStartLocation                                      OFFSET(getStruct<T>, {0x538, 12, 0, 0})
	SMember(FVector)                                   ArrowheadEndLocation                                        OFFSET(getStruct<T>, {0x544, 12, 0, 0})
	SMember(FTransform)                                Bomb_Init_Transform                                         OFFSET(getStruct<T>, {0x550, 48, 0, 0})
	SMember(FVector)                                   Bomb_Start_Location                                         OFFSET(getStruct<T>, {0x580, 12, 0, 0})
	DMember(int32_t)                                   ForLoopCounter                                              OFFSET(get<int32_t>, {0x58C, 4, 0, 0})
	SMember(FAirStrikesPatterns)                       StrikePatternType                                           OFFSET(getStruct<T>, {0x590, 16, 0, 0})
	CMember(TEnumAsByte<StrikePatternEnum>)            Current_Air_Strike_Pattern                                  OFFSET(get<T>, {0x5A0, 1, 0, 0})
	DMember(float)                                     SpacingBetweenObjects                                       OFFSET(get<float>, {0x5A4, 4, 0, 0})
	CMember(TArray<UParticleSystemComponent*>)         Current_Particle_Array                                      OFFSET(get<T>, {0x5A8, 16, 0, 0})
	CMember(TArray<FVector>)                           Position_Array_Cleaned_of_duplicates                        OFFSET(get<T>, {0x5B8, 16, 0, 0})
	CMember(TArray<int32_t>)                           Duplicate_Positions                                         OFFSET(get<T>, {0x5C8, 16, 0, 0})
	CMember(TArray<int32_t>)                           Double_Entries                                              OFFSET(get<T>, {0x5D8, 16, 0, 0})
	CMember(UParticleSystem*)                          One_Hit_Particle_Indicator                                  OFFSET(get<T>, {0x5E8, 8, 0, 0})
	CMember(UParticleSystem*)                          Two_Hit_Particle_Indicator                                  OFFSET(get<T>, {0x5F0, 8, 0, 0})
	CMember(TArray<FVector>)                           Position_Array_With_duplicates                              OFFSET(get<T>, {0x5F8, 16, 0, 0})
	DMember(int32_t)                                   MultiGateIndex                                              OFFSET(get<int32_t>, {0x608, 4, 0, 0})
	CMember(TArray<FVector>)                           TargetEmitterLocations                                      OFFSET(get<T>, {0x610, 16, 0, 0})
	CMember(TArray<float>)                             TargetEmitterNewMovementStartTimes                          OFFSET(get<T>, {0x620, 16, 0, 0})
	CMember(TArray<UParticleSystemComponent*>)         DefaultPositonParticles                                     OFFSET(get<T>, {0x630, 16, 0, 0})
	CMember(UParticleSystem*)                          Default_Location_Template                                   OFFSET(get<T>, {0x640, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Line_MID                                                    OFFSET(get<T>, {0x648, 8, 0, 0})
	DMember(bool)                                      Placement_is_Valid                                          OFFSET(get<bool>, {0x650, 1, 0, 0})
	DMember(bool)                                      Placement_is_Valid_Previously                               OFFSET(get<bool>, {0x651, 1, 0, 0})
	DMember(bool)                                      Valid_state_changed                                         OFFSET(get<bool>, {0x652, 1, 0, 0})
	DMember(bool)                                      Valid_State_Changed_Override                                OFFSET(get<bool>, {0x653, 1, 0, 0})
	DMember(bool)                                      Reinit_Particles                                            OFFSET(get<bool>, {0x654, 1, 0, 0})
	DMember(bool)                                      NewVar                                                      OFFSET(get<bool>, {0x655, 1, 0, 0})
	DMember(bool)                                      Recreate_particles_if_valid                                 OFFSET(get<bool>, {0x656, 1, 0, 0})
	DMember(float)                                     Delay_Between_Particle_Spawns                               OFFSET(get<float>, {0x658, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Kill Emitters and Start Times
	// void Kill Emitters and Start Times();                                                                                    // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Spawn Arrow__FinishedFunc
	// void Spawn Arrow__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Spawn Arrow__UpdateFunc
	// void Spawn Arrow__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnBounceMotionUpdate
	// void OnBounceMotionUpdate(float VectorScale);                                                                            // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnInitializeDecoPreview
	// void OnInitializeDecoPreview(ABuildingActor* NewBuildingActor, UFortDecoItemDefinition* NewDecoItemDefinition);          // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnUpdateScale
	// void OnUpdateScale(float Scale, FVector& InWorldSpacePivot);                                                             // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnUpdateVisuals
	// void OnUpdateVisuals(float DeltaSeconds, bool bSafeToPlace);                                                             // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SetScalarParameterValueOnAllPreviewMIDs
	// void SetScalarParameterValueOnAllPreviewMIDs(FName ParamName, float ParamValue);                                         // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SetVectorParameterValueOnAllPreviewMIDs
	// void SetVectorParameterValueOnAllPreviewMIDs(FName ParamName, FLinearColor& ParamValue);                                 // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SwitchType
	// void SwitchType(TArray<FVector>& Positions With Duplicates, TArray<FVector>& Cleaned Positions, TArray<int32_t>& Duplicated Entries); // [0x154a140] Net|NetReliableNetMulticast|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.RestartLineReticule
	// void RestartLineReticule();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ToggleAirStrikeParticles
	// void ToggleAirStrikeParticles(bool bInToggle);                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/AirStrike/B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ExecuteUbergraph_B_Placement_Preview_AirStrike
	// void ExecuteUbergraph_B_Placement_Preview_AirStrike(int32_t EntryPoint);                                                 // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C
/// Size: 0x0030 (0x0004C0 - 0x0004F0)
class AB_FDP_SentryGun_C : public AFortDecoPreview
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x4C0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     S_Turret_Aim_Range                                          OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     AmmoMesh                                                    OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Gun                                                         OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Base                                                        OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(UCapsuleComponent*)                        CollisionCapsule                                            OFFSET(get<T>, {0x4E8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C.SetupMIDForMeshComponent
	// void SetupMIDForMeshComponent(UStaticMeshComponent* MeshComp);                                                           // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C.OnInitializeDecoPreview
	// void OnInitializeDecoPreview(ABuildingActor* NewBuildingActor, UFortDecoItemDefinition* NewDecoItemDefinition);          // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/SentryGun/B_FDP_SentryGun.B_FDP_SentryGun_C.ExecuteUbergraph_B_FDP_SentryGun
	// void ExecuteUbergraph_B_FDP_SentryGun(int32_t EntryPoint);                                                               // [0x154a140] None                 
};

/// Class /Game/Abilities/Player/Constructor/Perks/ContainmentUnit/GA_ContainmentUnit_Trigger.GA_ContainmentUnit_Trigger_C
/// Size: 0x0020 (0x000AC0 - 0x000AE0)
class UGA_ContainmentUnit_Trigger_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2784;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(UAbilitySystemComponent*)                  OriginalDamageInstigator                                    OFFSET(get<T>, {0xAC8, 8, 0, 0})
	CMember(UAbilitySystemComponent*)                  OriginalDamageTarget                                        OFFSET(get<T>, {0xAD0, 8, 0, 0})
	SMember(FGameplayTag)                              RequestReflectionTag                                        OFFSET(getStruct<T>, {0xAD8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Constructor/Perks/ContainmentUnit/GA_ContainmentUnit_Trigger.GA_ContainmentUnit_Trigger_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Perks/ContainmentUnit/GA_ContainmentUnit_Trigger.GA_ContainmentUnit_Trigger_C.ExecuteUbergraph_GA_ContainmentUnit_Trigger
	// void ExecuteUbergraph_GA_ContainmentUnit_Trigger(int32_t EntryPoint);                                                    // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Constructor/Perks/FeelTheBase/GE_Constructor_FeelTheBase_StackCountTag_Overflow.GE_Constructor_FeelTheBase_StackCountTag_Overflow_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_FeelTheBase_StackCountTag_Overflow_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/FeelTheBase/GE_Constructor_FeelTheBase_StackCountTag.GE_Constructor_FeelTheBase_StackCountTag_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_FeelTheBase_StackCountTag_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/TrapReloadRate/GE_Constructor_TrapReloadRate_Applied.GE_Constructor_TrapReloadRate_Applied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_TrapReloadRate_Applied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/TrapDamage/GE_Constructor_TrapDamage_Applied.GE_Constructor_TrapDamage_Applied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_TrapDamage_Applied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/SubroutineOptimization/GE_Constructor_SubroutineOptimizationApplied.GE_Constructor_SubroutineOptimizationApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_SubroutineOptimizationApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/StrongerExit/GE_Constructor_StrongerExitApplied.GE_Constructor_StrongerExitApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_StrongerExitApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/ShieldCapacitor/GE_Constructor_ShieldCapacitorApplied.GE_Constructor_ShieldCapacitorApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_ShieldCapacitorApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/SafetyProtocols/GE_Constructor_SafetyProtocolsApplied.GE_Constructor_SafetyProtocolsApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_SafetyProtocolsApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/PowerModulation/GE_Constructor_PowerModulationApplied.GE_Constructor_PowerModulationApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_PowerModulationApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/Overclocking/GE_Constructor_OverclockingApplied.GE_Constructor_OverclockingApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_OverclockingApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/NeuroFeedbackLoop/GE_Constructor_NeuroFeedbackLoopApplied.GE_Constructor_NeuroFeedbackLoopApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_NeuroFeedbackLoopApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/LoftyArchitecture/GE_Constructor_LoftyArchitectureApplied.GE_Constructor_LoftyArchitectureApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_LoftyArchitectureApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/FullyContained/GE_Constructor_FullyContainedApplied.GE_Constructor_FullyContainedApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_FullyContainedApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/FeelTheBase/GE_Constructor_FeelTheBaseApplied.GE_Constructor_FeelTheBaseApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_FeelTheBaseApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/FasterExit/GE_Constructor_FasterExitApplied.GE_Constructor_FasterExitApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_FasterExitApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/ExitPlan/GE_Constructor_ExitPlanApplied.GE_Constructor_ExitPlanApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_ExitPlanApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/EnduringMachine/GE_Constructor_EnduringMachine.GE_Constructor_EnduringMachine_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_EnduringMachine_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/DefensiveIntegration/GE_Constructor_DefensiveIntegrationApplied.GE_Constructor_DefensiveIntegrationApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_DefensiveIntegrationApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/ContainmentUnit/GE_Constructor_ContainmentUnit_Applied.GE_Constructor_ContainmentUnit_Applied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_ContainmentUnit_Applied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/CardioFeedbackLoop/GE_Constructor_CardioFeedbackLoopApplied.GE_Constructor_CardioFeedbackLoopApplied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_CardioFeedbackLoopApplied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Actives/BASE/GE_Constructor_BASEOutgoingHealMod.GE_Constructor_BASEOutgoingHealMod_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_BASEOutgoingHealMod_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Actives/BASE/GE_Constructor_BASEOutgoingDamageMod.GE_Constructor_BASEOutgoingDamageMod_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_BASEOutgoingDamageMod_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Actives/BASE/GE_Constructor_BASEDefault.GE_Constructor_BASEDefault_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_BASEDefault_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C
/// Size: 0x0590 (0x0011A0 - 0x001730)
class AB_Constructor_BASE_C : public AFortConstructorBASE
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5936;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x11A0, 8, 0, 0})
	CMember(UAudioComponent*)                          BaseEnergyComponentC                                        OFFSET(get<T>, {0x11A8, 8, 0, 0})
	CMember(UAudioComponent*)                          BaseEnergyComponentB                                        OFFSET(get<T>, {0x11B0, 8, 0, 0})
	CMember(UAudioComponent*)                          BaseEnergyComponentA                                        OFFSET(get<T>, {0x11B8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_FeeltheBase_Chargup                                       OFFSET(get<T>, {0x11C0, 8, 0, 0})
	CMember(USceneComponent*)                          FeelTheBaseTraceLocation                                    OFFSET(get<T>, {0x11C8, 8, 0, 0})
	CMember(UBoxComponent*)                            Box                                                         OFFSET(get<T>, {0x11D0, 8, 0, 0})
	CMember(UCapsuleComponent*)                        Capsule                                                     OFFSET(get<T>, {0x11D8, 8, 0, 0})
	CMember(USphereComponent*)                         Sphere_Collision_For_Anim                                   OFFSET(get<T>, {0x11E0, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   SK_Base_Device                                              OFFSET(get<T>, {0x11E8, 8, 0, 0})
	CMember(UFortMiniMapComponent*)                    FortMiniMap1                                                OFFSET(get<T>, {0x11F0, 8, 0, 0})
	CMember(UAudioComponent*)                          Workbench_Ticking                                           OFFSET(get<T>, {0x11F8, 8, 0, 0})
	CMember(USceneComponent*)                          Root                                                        OFFSET(get<T>, {0x1200, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_BigBrother                                               OFFSET(getStruct<T>, {0x1208, 32, 0, 0})
	DMember(int32_t)                                   BigBrotherAdditionalNodes                                   OFFSET(get<int32_t>, {0x1228, 4, 0, 0})
	CMember(UTexture2D*)                               MiniMapIcon                                                 OFFSET(get<T>, {0x1230, 8, 0, 0})
	DMember(float)                                     Minimap_View_Distance                                       OFFSET(get<float>, {0x1238, 4, 0, 0})
	CMember(UClass*)                                   GE_ElectrifiedFloors                                        OFFSET(get<T>, {0x1240, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_Hyperthreading                                           OFFSET(getStruct<T>, {0x1248, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_SubroutineOptimization                                   OFFSET(getStruct<T>, {0x1268, 32, 0, 0})
	CMember(UClass*)                                   GE_SubroutineOptimization                                   OFFSET(get<T>, {0x1288, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_Recycling                                                OFFSET(getStruct<T>, {0x1290, 32, 0, 0})
	DMember(int32_t)                                   ConnectedWood                                               OFFSET(get<int32_t>, {0x12B0, 4, 0, 0})
	DMember(int32_t)                                   ConnectedStone                                              OFFSET(get<int32_t>, {0x12B4, 4, 0, 0})
	DMember(int32_t)                                   ConnectedMetal                                              OFFSET(get<int32_t>, {0x12B8, 4, 0, 0})
	CMember(UFortWorldItemDefinition*)                 Wood                                                        OFFSET(get<T>, {0x12C0, 8, 0, 0})
	CMember(UFortWorldItemDefinition*)                 Stone                                                       OFFSET(get<T>, {0x12C8, 8, 0, 0})
	CMember(UFortWorldItemDefinition*)                 Metal                                                       OFFSET(get<T>, {0x12D0, 8, 0, 0})
	DMember(float)                                     RecyclingMultiplier                                         OFFSET(get<float>, {0x12D8, 4, 0, 0})
	DMember(bool)                                      SpawnWood                                                   OFFSET(get<bool>, {0x12DC, 1, 0, 0})
	DMember(bool)                                      SpawnStone                                                  OFFSET(get<bool>, {0x12DD, 1, 0, 0})
	DMember(bool)                                      SpawnMetal                                                  OFFSET(get<bool>, {0x12DE, 1, 0, 0})
	DMember(int32_t)                                   SpawnMax                                                    OFFSET(get<int32_t>, {0x12E0, 4, 0, 0})
	DMember(float)                                     HyperThreadingMultiplier                                    OFFSET(get<float>, {0x12E4, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_DefensiveIntegration                                     OFFSET(getStruct<T>, {0x12E8, 32, 0, 0})
	CMember(UClass*)                                   GE_DefensiveIntegration                                     OFFSET(get<T>, {0x1308, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_AutomatedDefenses                                        OFFSET(getStruct<T>, {0x1310, 32, 0, 0})
	DMember(int32_t)                                   AutomatedDefenses_Additional_Nodes                          OFFSET(get<int32_t>, {0x1330, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_TotalIntegration                                         OFFSET(getStruct<T>, {0x1338, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_PowerModulation                                          OFFSET(getStruct<T>, {0x1358, 32, 0, 0})
	CMember(UClass*)                                   GE_PowerModulation                                          OFFSET(get<T>, {0x1378, 8, 0, 0})
	DMember(int32_t)                                   DefensiveIntegrationLevel                                   OFFSET(get<int32_t>, {0x1380, 4, 0, 0})
	CMember(UClass*)                                   GE_LoftyArchitecture                                        OFFSET(get<T>, {0x1388, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_LoftyArchitecture                                        OFFSET(getStruct<T>, {0x1390, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_SafetyProtocols                                          OFFSET(getStruct<T>, {0x13B0, 32, 0, 0})
	CMember(UClass*)                                   GE_SafetyProtocols                                          OFFSET(get<T>, {0x13D0, 8, 0, 0})
	DMember(bool)                                      BaseIsPlaced                                                OFFSET(get<bool>, {0x13D8, 1, 0, 0})
	DMember(int32_t)                                   NumPlayersNearBase                                          OFFSET(get<int32_t>, {0x13DC, 4, 0, 0})
	DMember(float)                                     BasePowerLevel                                              OFFSET(get<float>, {0x13E0, 4, 0, 0})
	DMember(int32_t)                                   TotalResourcesSpawned                                       OFFSET(get<int32_t>, {0x13E4, 4, 0, 0})
	DMember(int32_t)                                   ResourceLimit                                               OFFSET(get<int32_t>, {0x13E8, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_Overclocking                                             OFFSET(getStruct<T>, {0x13F0, 32, 0, 0})
	CMember(UClass*)                                   GE_UpgradedPowerModulation                                  OFFSET(get<T>, {0x1410, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_ElectrifiedFloors                                        OFFSET(getStruct<T>, {0x1418, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_SlowUnit                                                 OFFSET(getStruct<T>, {0x1438, 32, 0, 0})
	CMember(UClass*)                                   GE_SlowUnit                                                 OFFSET(get<T>, {0x1458, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_ContainmentUnit                                          OFFSET(getStruct<T>, {0x1460, 32, 0, 0})
	CMember(UClass*)                                   GE_Grant_TriggerReflectDamage_FromBASEWall                  OFFSET(get<T>, {0x1480, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_StrongerExit                                             OFFSET(getStruct<T>, {0x1488, 32, 0, 0})
	CMember(UClass*)                                   GE_StrongerExit                                             OFFSET(get<T>, {0x14A8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_CardioFeedbackLoop                                       OFFSET(getStruct<T>, {0x14B0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_ShieldCapacitor                                          OFFSET(getStruct<T>, {0x14D0, 32, 0, 0})
	CMember(UClass*)                                   GE_ShieldCapacitor                                          OFFSET(get<T>, {0x14F0, 8, 0, 0})
	SMember(FStructRecyclingResource)                  StoredWood                                                  OFFSET(getStruct<T>, {0x14F8, 16, 0, 0})
	SMember(FStructRecyclingResource)                  StoredStone                                                 OFFSET(getStruct<T>, {0x1508, 16, 0, 0})
	SMember(FStructRecyclingResource)                  StoredMetal                                                 OFFSET(getStruct<T>, {0x1518, 16, 0, 0})
	DMember(int32_t)                                   HyperthreadingResourceLimit                                 OFFSET(get<int32_t>, {0x1528, 4, 0, 0})
	DMember(int32_t)                                   MegaBASEAdditionalNodes                                     OFFSET(get<int32_t>, {0x152C, 4, 0, 0})
	CMember(UClass*)                                   GE_NeuroFeedbackLoop                                        OFFSET(get<T>, {0x1530, 8, 0, 0})
	CMember(UAbilitySystemComponent*)                  ConstructorAbilitySystemComponent                           OFFSET(get<T>, {0x1538, 8, 0, 0})
	CMember(UClass*)                                   GE_OutgoingHealAmp                                          OFFSET(get<T>, {0x1540, 8, 0, 0})
	CMember(UClass*)                                   GE_FullyContained                                           OFFSET(get<T>, {0x1548, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Effect_Mesh_Comp                                            OFFSET(get<T>, {0x1550, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               Inner_MIDs_Friendly                                         OFFSET(get<T>, {0x1558, 16, 0, 0})
	DMember(float)                                     Transition_Start_Delay                                      OFFSET(get<float>, {0x1568, 4, 0, 0})
	CMember(TArray<UMaterialInterface*>)               Outer_MIDs_Friendly                                         OFFSET(get<T>, {0x1570, 16, 0, 0})
	SMember(FGameplayTagContainer)                     TC_MegaBASE                                                 OFFSET(getStruct<T>, {0x1580, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NeuroFeedbackLoop                                        OFFSET(getStruct<T>, {0x15A0, 32, 0, 0})
	CMember(UClass*)                                   GE_CardioFeedbackLoop                                       OFFSET(get<T>, {0x15C0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_FullyContained                                           OFFSET(getStruct<T>, {0x15C8, 32, 0, 0})
	DMember(bool)                                      InitialStaticMeshAnimationIsComplete                        OFFSET(get<bool>, {0x15E8, 1, 0, 0})
	CMember(USoundBase*)                               SoundResourcesCreated                                       OFFSET(get<T>, {0x15F0, 8, 0, 0})
	CMember(USoundBase*)                               SoundResourcesCollected                                     OFFSET(get<T>, {0x15F8, 8, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             EffectMeshArray                                             OFFSET(get<T>, {0x1600, 16, 0, 0})
	CMember(TArray<ABuildingSMActor*>)                 BuildingActorArray                                          OFFSET(get<T>, {0x1610, 16, 0, 0})
	DMember(float)                                     DelayBeforeShowingMeshes                                    OFFSET(get<float>, {0x1620, 4, 0, 0})
	DMember(bool)                                      DelayDisabled                                               OFFSET(get<bool>, {0x1624, 1, 0, 0})
	SMember(FTimerHandle)                              DelayedMeshedTimer                                          OFFSET(getStruct<T>, {0x1628, 8, 0, 0})
	CMember(UClass*)                                   GE_TrapDamage                                               OFFSET(get<T>, {0x1630, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_TrapDamage                                               OFFSET(getStruct<T>, {0x1638, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_TrapReloadRate                                           OFFSET(getStruct<T>, {0x1658, 32, 0, 0})
	CMember(UClass*)                                   GE_TrapReloadRate                                           OFFSET(get<T>, {0x1678, 8, 0, 0})
	CMember(UClass*)                                   GE_Constructor_BASEOutgoingDamageMod                        OFFSET(get<T>, {0x1680, 8, 0, 0})
	DMember(int32_t)                                   T1Amount                                                    OFFSET(get<int32_t>, {0x1688, 4, 0, 0})
	DMember(int32_t)                                   T2Amount                                                    OFFSET(get<int32_t>, {0x168C, 4, 0, 0})
	DMember(int32_t)                                   T3Amount                                                    OFFSET(get<int32_t>, {0x1690, 4, 0, 0})
	DMember(float)                                     RecyclingTimer                                              OFFSET(get<float>, {0x1694, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_FeelTheBase                                              OFFSET(getStruct<T>, {0x1698, 32, 0, 0})
	CMember(UClass*)                                   GE_FeelTheBase                                              OFFSET(get<T>, {0x16B8, 8, 0, 0})
	CMember(APlayerPawn_Constructor_C*)                ConstructorPawn                                             OFFSET(get<T>, {0x16C0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 FeelTheBasePowerLevel1                                      OFFSET(get<T>, {0x16C8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 FeelTheBasePowerLevel2                                      OFFSET(get<T>, {0x16D0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 FeelTheBasePowerLevel3                                      OFFSET(get<T>, {0x16D8, 8, 0, 0})
	CMember(USoundBase*)                               EnergyBuildASound                                           OFFSET(get<T>, {0x16E0, 8, 0, 0})
	CMember(USoundBase*)                               EnergyBuildBSound                                           OFFSET(get<T>, {0x16E8, 8, 0, 0})
	CMember(USoundBase*)                               EnergyBuildCSound                                           OFFSET(get<T>, {0x16F0, 8, 0, 0})
	CMember(USoundBase*)                               EnergyStageTransitionSound                                  OFFSET(get<T>, {0x16F8, 8, 0, 0})
	DMember(bool)                                      bIsPlayingLoopA                                             OFFSET(get<bool>, {0x1700, 1, 0, 0})
	CMember(UClass*)                                   GE_Enduring_Machine                                         OFFSET(get<T>, {0x1708, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_Enduring_Machine                                         OFFSET(getStruct<T>, {0x1710, 32, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.UpdateAudioCrossfade
	// void UpdateAudioCrossfade(USoundBase* Sound);                                                                            // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.GetFeelTheBaseTraceLocation
	// void GetFeelTheBaseTraceLocation(FTransform& TraceLocation);                                                             // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceWithAmount
	// void SpawnResourceWithAmount(UFortWorldItemDefinition* ItemDefinition, int32_t AmountToSpawn, TEnumAsByte<EFortResourceType> ResourceType); // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.SetHealingMultiplier
	// void SetHealingMultiplier();                                                                                             // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.SetupTrapEffects
	// void SetupTrapEffects(UAbilitySystemComponent* AbilityComponent);                                                        // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.GetTrapGEFromTag
	// void GetTrapGEFromTag(FGameplayTagContainer InTag, UClass*& OutGE);                                                      // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.OnRep_InitialStaticMeshAnimationIsComplete
	// void OnRep_InitialStaticMeshAnimationIsComplete();                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.BaseSelfApplyGameplaySpec
	// void BaseSelfApplyGameplaySpec(FGameplayEffectSpecHandle GE Spec);                                                       // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.SetBaseVisualGlow
	// void SetBaseVisualGlow(UAbilitySystemComponent* AbilitySystemComponent);                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.SetDamageMultiplier
	// void SetDamageMultiplier();                                                                                              // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.OnRep_CollectResources
	// void OnRep_CollectResources();                                                                                           // [0x154a140] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.BlueprintGetInteractionString
	// FText BlueprintGetInteractionString(AFortPawn* InteractingPawn);                                                         // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.AddResourceToStack
	// void AddResourceToStack(FStructRecyclingResource RecyclingResource, UFortWorldItemDefinition* Stored Resource, int32_t AmountToSpawn, FStructRecyclingResource& SetValue); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceForRecycling
	// void SpawnResourceForRecycling(UFortWorldItemDefinition* ItemDefinition, int32_t AmountToSpawn, TEnumAsByte<EFortResourceType> ResourceType); // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.BlueprintCanInteract
	// bool BlueprintCanInteract(AFortPawn* InteractingPawn);                                                                   // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.OnRep_BaseIsPlaced
	// void OnRep_BaseIsPlaced();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.RecycleResources
	// void RecycleResources();                                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.SetupHostileEffects
	// void SetupHostileEffects(UAbilitySystemComponent* AbilitySystemComponent, TArray<FBASEGameplayEffect>& HostileEffects);  // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.SetupFriendlyEffects
	// void SetupFriendlyEffects(UAbilitySystemComponent* AbilitySystemComponent, TArray<FBASEGameplayEffect>& FriendlyEffects); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.SetupBuildingEffects
	// void SetupBuildingEffects(UAbilitySystemComponent* AbilitySystemComponent, TArray<FBASEGameplayEffect>& BuildingEffects); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.Setup Base Effect Array
	// void Setup Base Effect Array(UAbilitySystemComponent* Instigator Ability System, TArray<FBASEGameplayEffect>& BASEBuildingEffects, TArray<FBASEGameplayEffect>& BASEFriendlyEffects, TArray<FBASEGameplayEffect>& BASEHostileEffects); // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.SetupBaseDefaultValues
	// void SetupBaseDefaultValues(UAbilitySystemComponent* Ability System Component, int32_t& NodesToAffect);                  // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.OnPlaced
	// void OnPlaced(UAbilitySystemComponent* InstigatorAbilitySystemComponent);                                                // [0x154a140] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.Recycling
	// void Recycling();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature
	// void BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.AnimateLegs
	// void AnimateLegs(bool LegsUp);                                                                                           // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.StartBuildingActorVisuals
	// void StartBuildingActorVisuals(ABuildingSMActor* BuildingActor, UStaticMeshComponent* EffectMeshComp);                   // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.StopBuildingActorVisuals
	// void StopBuildingActorVisuals(ABuildingSMActor* BuildingActor, UStaticMeshComponent* EffectMeshComp);                    // [0x154a140] BlueprintCosmetic|Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.BlueprintOnInteract
	// void BlueprintOnInteract(AFortPawn* InteractingPawn);                                                                    // [0x154a140] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.GetDamageAmp
	// void GetDamageAmp();                                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCreated
	// void ResourcesCreated();                                                                                                 // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCollected
	// void ResourcesCollected();                                                                                               // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.BaseIsReadyToAnimate
	// void BaseIsReadyToAnimate();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.ShowHiddenMeshes
	// void ShowHiddenMeshes();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.ApplyTrapEffects
	// void ApplyTrapEffects();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.SaveOwner
	// void SaveOwner(APlayerPawn_Constructor_C* ConstructorPawn);                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.FeelTheBaseGlow
	// void FeelTheBaseGlow(bool Stack1, bool Stack2, bool Stack3);                                                             // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.ResetFeelTheBaseGlow
	// void ResetFeelTheBaseGlow();                                                                                             // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature
	// void BndEvt__P_FeeltheBase_Chargup_K2Node_ComponentBoundEvent_0_ParticleBurstSignature__DelegateSignature(FName EventName, float EmitterTime, int32_t ParticleCount); // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Constructor/Actives/BASE/B_Constructor_BASE.B_Constructor_BASE_C.ExecuteUbergraph_B_Constructor_BASE
	// void ExecuteUbergraph_B_Constructor_BASE(int32_t EntryPoint);                                                            // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C
/// Size: 0x0028 (0x000AC0 - 0x000AE8)
class UGAT_ActiveAbility_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	SMember(FGameplayTag)                              TC_AbilitiesGenericActiveAbilityActivate                    OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})
	SMember(FName)                                     N_SavedCollisionChannel                                     OFFSET(getStruct<T>, {0xAD0, 8, 0, 0})
	CMember(UClass*)                                   GE_KnockBackImmunity                                        OFFSET(get<T>, {0xAD8, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               GEH_KnockBackImmunity                                       OFFSET(getStruct<T>, {0xAE0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.SetKnockbackImmunity
	// void SetKnockbackImmunity(bool ImmunityOn);                                                                              // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.SetPawnCollision
	// void SetPawnCollision(AFortPawn* FortPawn, bool CollisionOn);                                                            // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Parents/GAT_ActiveAbility.GAT_ActiveAbility_C.ExecuteUbergraph_GAT_ActiveAbility
	// void ExecuteUbergraph_GAT_ActiveAbility(int32_t EntryPoint);                                                             // [0x154a140] None                 
};

/// Class /Game/Abilities/Player/Parents/GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C
/// Size: 0x00BA (0x000AE8 - 0x000BA2)
class UGAT_ConstructorActiveAbility_C : public UGAT_ActiveAbility_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2978;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAE8, 8, 0, 0})
	SMember(FGameplayEventData)                        Event_Data                                                  OFFSET(getStruct<T>, {0xAF0, 168, 0, 0})
	CMember(APlayerPawn_Constructor_C*)                ConstructorPlayerPawn                                       OFFSET(get<T>, {0xB98, 8, 0, 0})
	DMember(bool)                                      isStaminaLockedOut                                          OFFSET(get<bool>, {0xBA0, 1, 0, 0})
	DMember(bool)                                      isAutoCommitted                                             OFFSET(get<bool>, {0xBA1, 1, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Parents/GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Parents/GAT_ConstructorActiveAbility.GAT_ConstructorActiveAbility_C.ExecuteUbergraph_GAT_ConstructorActiveAbility
	// void ExecuteUbergraph_GAT_ConstructorActiveAbility(int32_t EntryPoint);                                                  // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Constructor/Actives/BullRush/TT_Constructor_BullRush.TT_Constructor_BullRush_C
/// Size: 0x0000 (0x000168 - 0x000168)
class UTT_Constructor_BullRush_C : public UFortGameplayAbilityTooltip
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:


	/// Functions
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/TT_Constructor_BullRush.TT_Constructor_BullRush_C.GetApplicationTag
	// bool GetApplicationTag(UGameplayAbility* AbilityInstance, FGameplayTag& OutTag);                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/TT_Constructor_BullRush.TT_Constructor_BullRush_C.GetTextForTokenFromAbilityInstanceInternal
	// bool GetTextForTokenFromAbilityInstanceInternal(UGameplayAbility* AbilityInstance, FGameplayTag& Tag, UFortTooltipContext* Context, FGameplayTag& Token, FText& OutText); // [0x154a140] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/TT_Constructor_BullRush.TT_Constructor_BullRush_C.InitializeAbilityInstanceInternal
	// void InitializeAbilityInstanceInternal(UGameplayAbility* AbilityInstance, UFortTooltipContext* Context);                 // [0x154a140] Event|Protected|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/Player/Constructor/Actives/BullRush/ShieldHitGround_CameraShake.ShieldHitGround_CameraShake_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UShieldHitGround_CameraShake_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Abilities/Player/Constructor/Actives/BullRush/GE_Constructor_Charging.GE_Constructor_Charging_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_Charging_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Actives/BullRush/GE_Constructor_BullRushCooldown.GE_Constructor_BullRushCooldown_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_BullRushCooldown_C : public UGET_Cooldown_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Husk/Base/GE_HuskMeleeCooldown.GE_HuskMeleeCooldown_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_HuskMeleeCooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_AIBaseMeleeFrustration_Reset.GE_AIBaseMeleeFrustration_Reset_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_AIBaseMeleeFrustration_Reset_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C
/// Size: 0x0010 (0x000AC0 - 0x000AD0)
class UGAB_AIBaseMelee_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0xAC8, 1, 0, 0})
	DMember(bool)                                      UseMoveForwardAction                                        OFFSET(get<bool>, {0xAC9, 1, 0, 0})
	DMember(bool)                                      MoveGate                                                    OFFSET(get<bool>, {0xACA, 1, 0, 0})
	DMember(bool)                                      UseRotationRateModification                                 OFFSET(get<bool>, {0xACB, 1, 0, 0})
	DMember(float)                                     MeleeRotationRate                                           OFFSET(get<float>, {0xACC, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C.Completed_8CCC8A6B41B7B728038BDE887BD23BCC
	// void Completed_8CCC8A6B41B7B728038BDE887BD23BCC(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C.Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC
	// void Cancelled_8CCC8A6B41B7B728038BDE887BD23BCC(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C.Triggered_8CCC8A6B41B7B728038BDE887BD23BCC
	// void Triggered_8CCC8A6B41B7B728038BDE887BD23BCC(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AIBaseMelee.GAB_AIBaseMelee_C.ExecuteUbergraph_GAB_AIBaseMelee
	// void ExecuteUbergraph_GAB_AIBaseMelee(int32_t EntryPoint);                                                               // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Flinger/GAB_FlingerWallMelee.GAB_FlingerWallMelee_C
/// Size: 0x0000 (0x000AD0 - 0x000AD0)
class UGAB_FlingerWallMelee_C : public UGAB_AIBaseMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C
/// Size: 0x0020 (0x000AD0 - 0x000AF0)
class UGAB_SmasherRadialMelee_C : public UGAB_AIBaseMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAD0, 8, 0, 0})
	CMember(UClass*)                                   GE_SmasherMeleeSuccess                                      OFFSET(get<T>, {0xAD8, 8, 0, 0})
	DMember(float)                                     SmasherRotationRate                                         OFFSET(get<float>, {0xAE0, 4, 0, 0})
	CMember(UFortAbilityTask_MoveAI*)                  Move                                                        OFFSET(get<T>, {0xAE8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.Completed_2EFEB45748E11A8A846C14AD7ADF164D
	// void Completed_2EFEB45748E11A8A846C14AD7ADF164D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.Cancelled_2EFEB45748E11A8A846C14AD7ADF164D
	// void Cancelled_2EFEB45748E11A8A846C14AD7ADF164D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.Triggered_2EFEB45748E11A8A846C14AD7ADF164D
	// void Triggered_2EFEB45748E11A8A846C14AD7ADF164D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.OnMoveFinished_1C768C2A4BDB2902BA3FDD92DD5F3C46
	// void OnMoveFinished_1C768C2A4BDB2902BA3FDD92DD5F3C46(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.OnRequestFailed_1C768C2A4BDB2902BA3FDD92DD5F3C46
	// void OnRequestFailed_1C768C2A4BDB2902BA3FDD92DD5F3C46();                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.OnCancelled_1C768C2A4BDB2902BA3FDD92DD5F3C46
	// void OnCancelled_1C768C2A4BDB2902BA3FDD92DD5F3C46();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.OnInterrupted_1C768C2A4BDB2902BA3FDD92DD5F3C46
	// void OnInterrupted_1C768C2A4BDB2902BA3FDD92DD5F3C46();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.OnComplete_1C768C2A4BDB2902BA3FDD92DD5F3C46
	// void OnComplete_1C768C2A4BDB2902BA3FDD92DD5F3C46();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.MoveToLoop
	// void MoveToLoop();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherRadialMelee.GAB_SmasherRadialMelee_C.ExecuteUbergraph_GAB_SmasherRadialMelee
	// void ExecuteUbergraph_GAB_SmasherRadialMelee(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C
/// Size: 0x0088 (0x000AD0 - 0x000B58)
class UGAB_SmasherMelee_C : public UGAB_AIBaseMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAD0, 8, 0, 0})
	CMember(UClass*)                                   GE_SmasherMeleeSuccess                                      OFFSET(get<T>, {0xAD8, 8, 0, 0})
	CMember(UClass*)                                   GE_SmasherMeleeFailure                                      OFFSET(get<T>, {0xAE0, 8, 0, 0})
	CMember(TArray<AActor*>)                           AllHitActors                                                OFFSET(get<T>, {0xAE8, 16, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NPCBehaviorProhibitsAbilityAttackMeleeBump               OFFSET(getStruct<T>, {0xAF8, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NPCBehaviorProhibitsAbilityAttackAny                     OFFSET(getStruct<T>, {0xB18, 32, 0, 0})
	CMember(TArray<AActor*>)                           AllHitActorsAfterRemovingInvalidTargets                     OFFSET(get<T>, {0xB38, 16, 0, 0})
	CMember(UFortAbilityTask_MoveAI*)                  SmasherMove                                                 OFFSET(get<T>, {0xB48, 8, 0, 0})
	SMember(FGameplayTag)                              TC_ConstructorBullrushing                                   OFFSET(getStruct<T>, {0xB50, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C.Completed_D4EB604A4AFDAD65E3461A86287A3EFE
	// void Completed_D4EB604A4AFDAD65E3461A86287A3EFE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C.Cancelled_D4EB604A4AFDAD65E3461A86287A3EFE
	// void Cancelled_D4EB604A4AFDAD65E3461A86287A3EFE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C.Triggered_D4EB604A4AFDAD65E3461A86287A3EFE
	// void Triggered_D4EB604A4AFDAD65E3461A86287A3EFE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C.OnMoveFinished_6E0FFA2F4367D5F26D5F5CB20E78DEFC
	// void OnMoveFinished_6E0FFA2F4367D5F26D5F5CB20E78DEFC(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C.OnRequestFailed_6E0FFA2F4367D5F26D5F5CB20E78DEFC
	// void OnRequestFailed_6E0FFA2F4367D5F26D5F5CB20E78DEFC();                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C.OnCancelled_6E0FFA2F4367D5F26D5F5CB20E78DEFC
	// void OnCancelled_6E0FFA2F4367D5F26D5F5CB20E78DEFC();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C.OnInterrupted_6E0FFA2F4367D5F26D5F5CB20E78DEFC
	// void OnInterrupted_6E0FFA2F4367D5F26D5F5CB20E78DEFC();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C.OnComplete_6E0FFA2F4367D5F26D5F5CB20E78DEFC
	// void OnComplete_6E0FFA2F4367D5F26D5F5CB20E78DEFC();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C.MoveToLoop
	// void MoveToLoop();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherMelee.GAB_SmasherMelee_C.ExecuteUbergraph_GAB_SmasherMelee
	// void ExecuteUbergraph_GAB_SmasherMelee(int32_t EntryPoint);                                                              // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherWallMelee.GAB_SmasherWallMelee_C
/// Size: 0x0000 (0x000B58 - 0x000B58)
class UGAB_SmasherWallMelee_C : public UGAB_SmasherMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherFloorMelee.GAB_SmasherFloorMelee_C
/// Size: 0x0000 (0x000B58 - 0x000B58)
class UGAB_SmasherFloorMelee_C : public UGAB_SmasherMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherCeilingMelee.GAB_SmasherCeilingMelee_C
/// Size: 0x0000 (0x000B58 - 0x000B58)
class UGAB_SmasherCeilingMelee_C : public UGAB_SmasherMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
};

/// Class /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C
/// Size: 0x0028 (0x000AD0 - 0x000AF8)
class UGAB_HuskMelee_C : public UGAB_AIBaseMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAD0, 8, 0, 0})
	CMember(UFortAbilityTask_MoveAI*)                  HuskMove                                                    OFFSET(get<T>, {0xAD8, 8, 0, 0})
	CMember(TArray<AActor*>)                           HitActors                                                   OFFSET(get<T>, {0xAE0, 16, 0, 0})
	CMember(UClass*)                                   GE_AIBaseMeleeFrustration_Reset                             OFFSET(get<T>, {0xAF0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.Completed_39FC57D848D381E3A3C7E798E995ED9A
	// void Completed_39FC57D848D381E3A3C7E798E995ED9A(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.Cancelled_39FC57D848D381E3A3C7E798E995ED9A
	// void Cancelled_39FC57D848D381E3A3C7E798E995ED9A(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.Triggered_39FC57D848D381E3A3C7E798E995ED9A
	// void Triggered_39FC57D848D381E3A3C7E798E995ED9A(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.OnMoveFinished_3012237E40D07AA69417C79DC2677F69
	// void OnMoveFinished_3012237E40D07AA69417C79DC2677F69(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.OnRequestFailed_3012237E40D07AA69417C79DC2677F69
	// void OnRequestFailed_3012237E40D07AA69417C79DC2677F69();                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.OnCancelled_3012237E40D07AA69417C79DC2677F69
	// void OnCancelled_3012237E40D07AA69417C79DC2677F69();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.OnInterrupted_3012237E40D07AA69417C79DC2677F69
	// void OnInterrupted_3012237E40D07AA69417C79DC2677F69();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.OnComplete_3012237E40D07AA69417C79DC2677F69
	// void OnComplete_3012237E40D07AA69417C79DC2677F69();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.ContinuousMoveTowardsTarget
	// void ContinuousMoveTowardsTarget();                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.GameplayEffectContainerApplied
	// void GameplayEffectContainerApplied(FGameplayAbilityTargetDataHandle Target Data);                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskMelee.GAB_HuskMelee_C.ExecuteUbergraph_GAB_HuskMelee
	// void ExecuteUbergraph_GAB_HuskMelee(int32_t EntryPoint);                                                                 // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Mimic/GAB_MimicMelee.GAB_MimicMelee_C
/// Size: 0x0008 (0x000AF8 - 0x000B00)
class UGAB_MimicMelee_C : public UGAB_HuskMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAF8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Mimic/GAB_MimicMelee.GAB_MimicMelee_C.GameplayEffectContainerApplied
	// void GameplayEffectContainerApplied(FGameplayAbilityTargetDataHandle Target Data);                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Mimic/GAB_MimicMelee.GAB_MimicMelee_C.ExecuteUbergraph_GAB_MimicMelee
	// void ExecuteUbergraph_GAB_MimicMelee(int32_t EntryPoint);                                                                // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Husk/Base/GAB_HuskFloorMelee.GAB_HuskFloorMelee_C
/// Size: 0x0000 (0x000AF8 - 0x000AF8)
class UGAB_HuskFloorMelee_C : public UGAB_HuskMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2808;

public:
};

/// Class /Game/Abilities/NPC/Mimic/GAB_MimicFloorMelee.GAB_MimicFloorMelee_C
/// Size: 0x0000 (0x000AF8 - 0x000AF8)
class UGAB_MimicFloorMelee_C : public UGAB_HuskFloorMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2808;

public:
};

/// Class /Game/Abilities/NPC/Husk/Base/GAB_HuskCeilingMelee.GAB_HuskCeilingMelee_C
/// Size: 0x0000 (0x000AF8 - 0x000AF8)
class UGAB_HuskCeilingMelee_C : public UGAB_HuskMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2808;

public:
};

/// Class /Game/Abilities/NPC/Mimic/GAB_MimicCeilingMelee.GAB_MimicCeilingMelee_C
/// Size: 0x0000 (0x000AF8 - 0x000AF8)
class UGAB_MimicCeilingMelee_C : public UGAB_HuskCeilingMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2808;

public:
};

/// Class /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C
/// Size: 0x0030 (0x000AC0 - 0x000AF0)
class UGAB_HuskBaseRadialMelee_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	SMember(FName)                                     MontageSectionToPlay                                        OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0xAD0, 1, 0, 0})
	SMember(FName)                                     AttackToLeftMontageSection                                  OFFSET(getStruct<T>, {0xAD8, 8, 0, 0})
	SMember(FName)                                     AttackToRightMontageSection                                 OFFSET(getStruct<T>, {0xAE0, 8, 0, 0})
	CMember(UClass*)                                   GE_AIBaseMeleeFrustration_Reset                             OFFSET(get<T>, {0xAE8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer& RelevantTags);                    // [0x154a140] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Completed_A0D25C0C4C9CDEEB0EB0018B3334307D
	// void Completed_A0D25C0C4C9CDEEB0EB0018B3334307D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D
	// void Cancelled_A0D25C0C4C9CDEEB0EB0018B3334307D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D
	// void Triggered_A0D25C0C4C9CDEEB0EB0018B3334307D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskBaseRadialMelee.GAB_HuskBaseRadialMelee_C.ExecuteUbergraph_GAB_HuskBaseRadialMelee
	// void ExecuteUbergraph_GAB_HuskBaseRadialMelee(int32_t EntryPoint);                                                       // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Mimic/GAB_MimicRadialMelee.GAB_MimicRadialMelee_C
/// Size: 0x0000 (0x000AF0 - 0x000AF0)
class UGAB_MimicRadialMelee_C : public UGAB_HuskBaseRadialMelee_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
};

/// Class /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C
/// Size: 0x028E (0x000BA2 - 0x000E30)
class UGA_Constructor_BullRush_C : public UGAT_ConstructorActiveAbility_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3632;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xBA8, 8, 0, 0})
	SMember(FGameplayTag)                              Event_Activate                                              OFFSET(getStruct<T>, {0xBB0, 8, 0, 0})
	SMember(FGameplayTag)                              Event_Complete                                              OFFSET(getStruct<T>, {0xBB8, 8, 0, 0})
	CMember(UAnimMontage*)                             M_BullRush                                                  OFFSET(get<T>, {0xBC0, 8, 0, 0})
	CMember(UClass*)                                   GE_BullRushDamage                                           OFFSET(get<T>, {0xBC8, 8, 0, 0})
	SMember(FGameplayTag)                              EventPush                                                   OFFSET(getStruct<T>, {0xBD0, 8, 0, 0})
	SMember(FGameplayTag)                              EventPushEnd                                                OFFSET(getStruct<T>, {0xBD8, 8, 0, 0})
	DMember(float)                                     RunForwardStartTime                                         OFFSET(get<float>, {0xBE0, 4, 0, 0})
	DMember(float)                                     BullRushDistance                                            OFFSET(get<float>, {0xBE4, 4, 0, 0})
	DMember(float)                                     RunForwardDuration                                          OFFSET(get<float>, {0xBE8, 4, 0, 0})
	DMember(float)                                     BullRushAnimUnitsPerSec                                     OFFSET(get<float>, {0xBEC, 4, 0, 0})
	DMember(bool)                                      RiotShieldApplyEndingKnockback                              OFFSET(get<bool>, {0xBF0, 1, 0, 0})
	DMember(bool)                                      RiotShield                                                  OFFSET(get<bool>, {0xBF1, 1, 0, 0})
	CMember(TArray<AActor*>)                           HitTargets                                                  OFFSET(get<T>, {0xBF8, 16, 0, 0})
	DMember(float)                                     EndingKnockback                                             OFFSET(get<float>, {0xC08, 4, 0, 0})
	DMember(float)                                     EndingKnockbackZAngle                                       OFFSET(get<float>, {0xC0C, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_RiotShield                                               OFFSET(getStruct<T>, {0xC10, 32, 0, 0})
	CMember(UClass*)                                   GE_RiotShieldDamage                                         OFFSET(get<T>, {0xC30, 8, 0, 0})
	CMember(UParticleSystem*)                          P_MotionLines                                               OFFSET(get<T>, {0xC38, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_MotionLines_Active                                        OFFSET(get<T>, {0xC40, 8, 0, 0})
	DMember(float)                                     UpgradeDistance                                             OFFSET(get<float>, {0xC48, 4, 0, 0})
	DMember(float)                                     DefaultDistance                                             OFFSET(get<float>, {0xC4C, 4, 0, 0})
	DMember(float)                                     PitchInputScale                                             OFFSET(get<float>, {0xC50, 4, 0, 0})
	DMember(float)                                     YawInputScale                                               OFFSET(get<float>, {0xC54, 4, 0, 0})
	CMember(USoundCue*)                                SoundImpactEnemy                                            OFFSET(get<T>, {0xC58, 8, 0, 0})
	CMember(USoundCue*)                                SoundShieldChargeStart                                      OFFSET(get<T>, {0xC60, 8, 0, 0})
	CMember(USoundCue*)                                SoundChargeKnockback                                        OFFSET(get<T>, {0xC68, 8, 0, 0})
	SMember(FFortFeedbackHandle)                       BullRushStartFeedback                                       OFFSET(getStruct<T>, {0xC70, 24, 0, 0})
	CMember(UClass*)                                   ShieldCameraShake                                           OFFSET(get<T>, {0xC88, 8, 0, 0})
	CMember(UClass*)                                   ImpactEnemyCameraShake                                      OFFSET(get<T>, {0xC90, 8, 0, 0})
	CMember(ABuildingWall*)                            HitBuilding                                                 OFFSET(get<T>, {0xC98, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_LongRush                                                 OFFSET(getStruct<T>, {0xCA0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_AttachedToShield                                         OFFSET(getStruct<T>, {0xCC0, 32, 0, 0})
	DMember(bool)                                      DashEnded                                                   OFFSET(get<bool>, {0xCE0, 1, 0, 0})
	DMember(bool)                                      LongRush                                                    OFFSET(get<bool>, {0xCE1, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TC_EmergencyOverride                                        OFFSET(getStruct<T>, {0xCE8, 32, 0, 0})
	DMember(bool)                                      EmergencyOverride                                           OFFSET(get<bool>, {0xD08, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TC_BloodyBull                                               OFFSET(getStruct<T>, {0xD10, 32, 0, 0})
	DMember(bool)                                      BloodyBull                                                  OFFSET(get<bool>, {0xD30, 1, 0, 0})
	CMember(UClass*)                                   GE_BloodyBullDamage                                         OFFSET(get<T>, {0xD38, 8, 0, 0})
	SMember(FVector)                                   DashStartLocation                                           OFFSET(getStruct<T>, {0xD40, 12, 0, 0})
	CMember(UForceFeedbackEffect*)                     ShieldForceFeedback                                         OFFSET(get<T>, {0xD50, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ImpactEnemyForceFeedback                                    OFFSET(get<T>, {0xD58, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_ChinaShop                                                OFFSET(getStruct<T>, {0xD60, 32, 0, 0})
	DMember(bool)                                      ChinaShop                                                   OFFSET(get<bool>, {0xD80, 1, 0, 0})
	DMember(bool)                                      bPlayerIsInBullRushAndFalling                               OFFSET(get<bool>, {0xD81, 1, 0, 0})
	SMember(FTimerHandle)                              FallingTimerHandle                                          OFFSET(getStruct<T>, {0xD88, 8, 0, 0})
	CMember(USoundBase*)                               HitWallSound                                                OFFSET(get<T>, {0xD90, 8, 0, 0})
	CMember(UParticleSystem*)                          HitWallFX                                                   OFFSET(get<T>, {0xD98, 8, 0, 0})
	DMember(float)                                     HitWallDotProduct                                           OFFSET(get<float>, {0xDA0, 4, 0, 0})
	CMember(UClass*)                                   GE_Disarm                                                   OFFSET(get<T>, {0xDA8, 8, 0, 0})
	CMember(UClass*)                                   GE_StandardDamage                                           OFFSET(get<T>, {0xDB0, 8, 0, 0})
	CMember(UClass*)                                   GE_ChinaShop                                                OFFSET(get<T>, {0xDB8, 8, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0xDC0, 4, 0, 0})
	SMember(FTimerHandle)                              CheckForDistanceHandle                                      OFFSET(getStruct<T>, {0xDC8, 8, 0, 0})
	DMember(float)                                     CurrentRunForwardDuration                                   OFFSET(get<float>, {0xDD0, 4, 0, 0})
	CMember(UClass*)                                   GE_Charging                                                 OFFSET(get<T>, {0xDD8, 8, 0, 0})
	SMember(FGameplayTag)                              TC_StopSmasherCharge                                        OFFSET(getStruct<T>, {0xDE0, 8, 0, 0})
	CMember(AFortAIPawn*)                              LocalOverlap                                                OFFSET(get<T>, {0xDE8, 8, 0, 0})
	CMember(TEnumAsByte<AIType>)                       CurrentAIType                                               OFFSET(get<T>, {0xDF0, 1, 0, 0})
	CMember(TArray<FFortCharacterPartMontageInfo>)     CharacterPartMontages                                       OFFSET(get<T>, {0xDF8, 16, 0, 0})
	DMember(float)                                     F_Slide_FailSafe                                            OFFSET(get<float>, {0xE08, 4, 0, 0})
	SMember(FGameplayTagContainer)                     NPC_Survivor                                                OFFSET(getStruct<T>, {0xE10, 32, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.HighOffGround
	// bool HighOffGround(FVector ImpactPoint);                                                                                 // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.NotBuilding
	// bool NotBuilding(AActor* InActor);                                                                                       // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.HasShieldCharacterPiece
	// void HasShieldCharacterPiece(bool& HasCharm);                                                                            // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.NotADefender
	// void NotADefender(AFortPawn* InPawn, bool& NotADefender);                                                                // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAppliedDamage
	// void GetAppliedDamage(UClass*& Applied);                                                                                 // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAIType
	// void GetAIType(AFortAIPawn* InPawn, TEnumAsByte<AIType>& OutType);                                                       // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyDamageToTarget
	// void ApplyDamageToTarget(AActor* Actor, UClass* Applied);                                                                // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceAttachClose
	// void ForceAttachClose();                                                                                                 // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.IsAShielder
	// bool IsAShielder(AFortPawn* Actor);                                                                                      // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetCharacterNormalizedVelocity
	// FVector GetCharacterNormalizedVelocity();                                                                                // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.HideToggledDecoTools
	// void HideToggledDecoTools();                                                                                             // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.HandleBigMonsterCollide
	// void HandleBigMonsterCollide(UObject* Object, bool& Success);                                                            // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.LaunchPawn
	// void LaunchPawn(AFortAIPawn* InputPin, bool ApplyDamage);                                                                // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.IsBigMonster
	// void IsBigMonster(TScriptInterface<Class> InPawn, bool& IsSmasher);                                                      // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.DetachPawn
	// void DetachPawn(AFortAIPawn* InPawn);                                                                                    // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAll
	// void EndPushingAll();                                                                                                    // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyPushToPawn
	// void ApplyPushToPawn(AFortPawn* InPawn);                                                                                 // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.AbilityRemainingTime
	// float AbilityRemainingTime();                                                                                            // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.IgnoreCollisionWith
	// void IgnoreCollisionWith(ABuildingActor* InActor, bool& ShouldIgnore);                                                   // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.ShouldForceCollision
	// bool ShouldForceCollision(AActor* InActor);                                                                              // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.GetAnimationNameForHusk
	// void GetAnimationNameForHusk(FName& AnimName);                                                                           // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.IncrementAnimCount
	// void IncrementAnimCount(int32_t& Output_Get);                                                                            // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.PrepareAbilityValues
	// void PrepareAbilityValues();                                                                                             // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndPushingAllCollideWall
	// void EndPushingAllCollideWall(FVector HitNormal, FVector HitLocation);                                                   // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.RunChinaShop
	// void RunChinaShop(AActor* InOverlap, bool& PassThroughWall);                                                             // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleCapsuleCollision
	// void ToggleCapsuleCollision(bool Enable);                                                                                // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_ImpactEnemy
	// void FX_ImpactEnemy();                                                                                                   // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.ToggleSteeringReduction
	// void ToggleSteeringReduction(bool bEnableSteeringReduction);                                                             // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Deactivate
	// void FX_MotionLines_Deactivate();                                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.FX_MotionLines_Activate
	// void FX_MotionLines_Activate();                                                                                          // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.ApplyEndingDamage
	// void ApplyEndingDamage();                                                                                                // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.SetupAbility
	// void SetupAbility(UAbilitySystemComponent* AbilitySystem);                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnChange_67D8F5D643B13C19C65EEBAC7E806B43
	// void OnChange_67D8F5D643B13C19C65EEBAC7E806B43(TEnumAsByte<EMovementMode> NewMovementMode);                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_81268963444013D8ABD8329A74FC2BA7
	// void Completed_81268963444013D8ABD8329A74FC2BA7(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_81268963444013D8ABD8329A74FC2BA7
	// void Cancelled_81268963444013D8ABD8329A74FC2BA7(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_81268963444013D8ABD8329A74FC2BA7
	// void Triggered_81268963444013D8ABD8329A74FC2BA7(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_C1DD435D421925C851371490B466988E
	// void Completed_C1DD435D421925C851371490B466988E(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_C1DD435D421925C851371490B466988E
	// void Cancelled_C1DD435D421925C851371490B466988E(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_C1DD435D421925C851371490B466988E
	// void Triggered_C1DD435D421925C851371490B466988E(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_91555FE04FDFE9F5B7F3CB96A10864D5
	// void Completed_91555FE04FDFE9F5B7F3CB96A10864D5(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_91555FE04FDFE9F5B7F3CB96A10864D5
	// void Cancelled_91555FE04FDFE9F5B7F3CB96A10864D5(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_91555FE04FDFE9F5B7F3CB96A10864D5
	// void Triggered_91555FE04FDFE9F5B7F3CB96A10864D5(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.EventReceived_C1DB76B7444372BAD736AFB207F3A2D2
	// void EventReceived_C1DB76B7444372BAD736AFB207F3A2D2(FGameplayEventData Payload);                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_763E234D46424B8B9BF854AD480CB4DE
	// void Completed_763E234D46424B8B9BF854AD480CB4DE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_763E234D46424B8B9BF854AD480CB4DE
	// void Cancelled_763E234D46424B8B9BF854AD480CB4DE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_763E234D46424B8B9BF854AD480CB4DE
	// void Triggered_763E234D46424B8B9BF854AD480CB4DE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_58E7CF8B45CF32A479A6C5AF0380A969
	// void Completed_58E7CF8B45CF32A479A6C5AF0380A969(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_58E7CF8B45CF32A479A6C5AF0380A969
	// void Cancelled_58E7CF8B45CF32A479A6C5AF0380A969(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_58E7CF8B45CF32A479A6C5AF0380A969
	// void Triggered_58E7CF8B45CF32A479A6C5AF0380A969(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Completed_A67F8C7741932B2C145CA08ECC81FA13
	// void Completed_A67F8C7741932B2C145CA08ECC81FA13(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Cancelled_A67F8C7741932B2C145CA08ECC81FA13
	// void Cancelled_A67F8C7741932B2C145CA08ECC81FA13(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Triggered_A67F8C7741932B2C145CA08ECC81FA13
	// void Triggered_A67F8C7741932B2C145CA08ECC81FA13(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.CheckDashDistance
	// void CheckDashDistance(float InDelta);                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.BeginFallingTimer
	// void BeginFallingTimer();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.OnPawnLanded_Event
	// void OnPawnLanded_Event(FHitResult& Hit);                                                                                // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindOnPawnLanded
	// void BindOnPawnLanded();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndFallingTimer
	// void EndFallingTimer();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndAbilitySlide
	// void EndAbilitySlide();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.EndAbilityHitWall
	// void EndAbilityHitWall();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.DistanceCheckTimer
	// void DistanceCheckTimer();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.HitWall
	// void HitWall(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindHitWall
	// void BindHitWall();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnBindHitWall
	// void UnBindHitWall();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.OverlapEnemyCallback
	// void OverlapEnemyCallback(AFortPawn* InOverlapped);                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.BindShieldOverlaps
	// void BindShieldOverlaps();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.ShieldOverlap
	// void ShieldOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnbindShieldOverlaps
	// void UnbindShieldOverlaps();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceEndAbility
	// void ForceEndAbility();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.ConstructorPawnHit
	// void ConstructorPawnHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);                  // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.Hit
	// void Hit();                                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.UnbindHit
	// void UnbindHit();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.ForceAttach
	// void ForceAttach(AFortAIPawn* LocalOverlap);                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Actives/BullRush/GA_Constructor_BullRush.GA_Constructor_BullRush_C.ExecuteUbergraph_GA_Constructor_BullRush
	// void ExecuteUbergraph_GA_Constructor_BullRush(int32_t EntryPoint);                                                       // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Generic/GE_AIBaseMeleeFrustration.GE_AIBaseMeleeFrustration_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_AIBaseMeleeFrustration_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_AIBaseMeleeFrustration_Build.GE_AIBaseMeleeFrustration_Build_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_AIBaseMeleeFrustration_Build_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GAB_NPCTurnTransition.GAB_NPCTurnTransition_C
/// Size: 0x0010 (0x000B10 - 0x000B20)
class UGAB_NPCTurnTransition_C : public UFortGameplayAbility_AITurnTransition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB10, 8, 0, 0})
	CMember(UClass*)                                   GE_AIBaseMeleeFrustration_Build                             OFFSET(get<T>, {0xB18, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.OnCancelled_940C59954AFE32346A40E49BFAFD2A0B
	// void OnCancelled_940C59954AFE32346A40E49BFAFD2A0B();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.OnInterrupted_940C59954AFE32346A40E49BFAFD2A0B
	// void OnInterrupted_940C59954AFE32346A40E49BFAFD2A0B();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.OnBlendOut_940C59954AFE32346A40E49BFAFD2A0B
	// void OnBlendOut_940C59954AFE32346A40E49BFAFD2A0B();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.OnCompleted_940C59954AFE32346A40E49BFAFD2A0B
	// void OnCompleted_940C59954AFE32346A40E49BFAFD2A0B();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_NPCTurnTransition.GAB_NPCTurnTransition_C.ExecuteUbergraph_GAB_NPCTurnTransition
	// void ExecuteUbergraph_GAB_NPCTurnTransition(int32_t EntryPoint);                                                         // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Husk/Base/GAB_HuskTurnTransition.GAB_HuskTurnTransition_C
/// Size: 0x0000 (0x000B20 - 0x000B20)
class UGAB_HuskTurnTransition_C : public UGAB_NPCTurnTransition_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2848;

public:
};

/// Class /Game/Abilities/NPC/Flinger/GAB_FlingerTurnTransition.GAB_FlingerTurnTransition_C
/// Size: 0x0000 (0x000B20 - 0x000B20)
class UGAB_FlingerTurnTransition_C : public UGAB_HuskTurnTransition_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2848;

public:
};

/// Class /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C
/// Size: 0x0060 (0x000AC0 - 0x000B20)
class UGAB_HuskThrownByFlinger_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(AHuskPawn_C*)                              HuskPawn                                                    OFFSET(get<T>, {0xAC8, 8, 0, 0})
	CMember(AFortPawn*)                                FlingerPawn                                                 OFFSET(get<T>, {0xAD0, 8, 0, 0})
	DMember(float)                                     ZVelocityWhenShot                                           OFFSET(get<float>, {0xAD8, 4, 0, 0})
	DMember(float)                                     XYVelocityMaintainedWhenShot                                OFFSET(get<float>, {0xADC, 4, 0, 0})
	SMember(FName)                                     HuskPawnCapsuleDefaultCollisionProfileName                  OFFSET(getStruct<T>, {0xAE0, 8, 0, 0})
	SMember(FName)                                     HuskPawnCapsuleCollisionProfileNameWhenHeldByFlinger        OFFSET(getStruct<T>, {0xAE8, 8, 0, 0})
	SMember(FVector)                                   FireLocation                                                OFFSET(getStruct<T>, {0xAF0, 12, 0, 0})
	SMember(FName)                                     MontageSectionFlyingLoop                                    OFFSET(getStruct<T>, {0xB00, 8, 0, 0})
	DMember(float)                                     HuskPawnOriginalGravityScale                                OFFSET(get<float>, {0xB08, 4, 0, 0})
	CMember(TArray<TEnumAsByte>)                       StoredCollisionResponses                                    OFFSET(get<T>, {0xB10, 16, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.RestoreCollisionSettings
	// void RestoreCollisionSettings(AHuskPawn_C* Pawn);                                                                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.SaveCollisionSettings
	// void SaveCollisionSettings(AHuskPawn_C* Pawn);                                                                           // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Completed_405AED2944EC7B63E07F8CBC114C4467
	// void Completed_405AED2944EC7B63E07F8CBC114C4467(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Cancelled_405AED2944EC7B63E07F8CBC114C4467
	// void Cancelled_405AED2944EC7B63E07F8CBC114C4467(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Triggered_405AED2944EC7B63E07F8CBC114C4467
	// void Triggered_405AED2944EC7B63E07F8CBC114C4467(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Completed_E287620540AA42D086331C807CAC562F
	// void Completed_E287620540AA42D086331C807CAC562F(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Cancelled_E287620540AA42D086331C807CAC562F
	// void Cancelled_E287620540AA42D086331C807CAC562F(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.Triggered_E287620540AA42D086331C807CAC562F
	// void Triggered_E287620540AA42D086331C807CAC562F(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskDamaged
	// void HuskDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.BindHuskDamaged
	// void BindHuskDamaged();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskLanded
	// void HuskLanded(FHitResult& Hit);                                                                                        // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskHit
	// void HuskHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);                             // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.UnBindHuskDamaged
	// void UnBindHuskDamaged();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.BindHuskLanded
	// void BindHuskLanded();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.UnBindHuskLanded
	// void UnBindHuskLanded();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.RotationCheck
	// void RotationCheck();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskFaceForwardON
	// void HuskFaceForwardON();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.HuskFaceForwardOFF
	// void HuskFaceForwardOFF();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.ResetGravityScale
	// void ResetGravityScale();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskThrownByFlinger.GAB_HuskThrownByFlinger_C.ExecuteUbergraph_GAB_HuskThrownByFlinger
	// void ExecuteUbergraph_GAB_HuskThrownByFlinger(int32_t EntryPoint);                                                       // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGAB_HuskFrustration_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskFrustration.GAB_HuskFrustration_C.ExecuteUbergraph_GAB_HuskFrustration
	// void ExecuteUbergraph_GAB_HuskFrustration(int32_t EntryPoint);                                                           // [0x154a140] None                 
};

/// Class /Game/Abilities/NPC/Husk/Base/GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C
/// Size: 0x0030 (0x000AC0 - 0x000AF0)
class UGAB_HuskAttachedToShield_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(UGA_Constructor_BullRush_C*)               BullRush                                                    OFFSET(get<T>, {0xAC8, 8, 0, 0})
	CMember(UAnimMontage*)                             HuskShield                                                  OFFSET(get<T>, {0xAD0, 8, 0, 0})
	SMember(FTimerHandle)                              Timer                                                       OFFSET(getStruct<T>, {0xAD8, 8, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0xAE0, 4, 0, 0})
	DMember(float)                                     MinimumAbilityTime                                          OFFSET(get<float>, {0xAE4, 4, 0, 0})
	CMember(UAnimMontage*)                             DefaultShield                                               OFFSET(get<T>, {0xAE8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.RandomAttachAnimation
	// void RandomAttachAnimation(FName& AnimName);                                                                             // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Completed_D35D9F8942008716C246249F1CAEFA6B
	// void Completed_D35D9F8942008716C246249F1CAEFA6B(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Cancelled_D35D9F8942008716C246249F1CAEFA6B
	// void Cancelled_D35D9F8942008716C246249F1CAEFA6B(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Triggered_D35D9F8942008716C246249F1CAEFA6B
	// void Triggered_D35D9F8942008716C246249F1CAEFA6B(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13
	// void Completed_78AC59B04D2A0FC3F2FAAE96D1D2DB13(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13
	// void Cancelled_78AC59B04D2A0FC3F2FAAE96D1D2DB13(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13
	// void Triggered_78AC59B04D2A0FC3F2FAAE96D1D2DB13(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.EndAbilityFromTimer
	// void EndAbilityFromTimer();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskAttachedToShield.GAB_HuskAttachedToShield_C.ExecuteUbergraph_GAB_HuskAttachedToShield
	// void ExecuteUbergraph_GAB_HuskAttachedToShield(int32_t EntryPoint);                                                      // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Generic/GAB_NotIdling.GAB_NotIdling_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGAB_NotIdling_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_NotIdling.GAB_NotIdling_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_NotIdling.GAB_NotIdling_C.ExecuteUbergraph_GAB_NotIdling
	// void ExecuteUbergraph_GAB_NotIdling(int32_t EntryPoint);                                                                 // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Generic/GAB_GenericApplyPush.GAB_GenericApplyPush_C
/// Size: 0x0028 (0x000AC0 - 0x000AE8)
class UGAB_GenericApplyPush_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2792;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(UAnimMontage*)                             PushedMontage                                               OFFSET(get<T>, {0xAC8, 8, 0, 0})
	SMember(FGameplayTag)                              PushAsideTag                                                OFFSET(getStruct<T>, {0xAD0, 8, 0, 0})
	DMember(float)                                     Time                                                        OFFSET(get<float>, {0xAD8, 4, 0, 0})
	CMember(UGA_Constructor_BullRush_C*)               GA_BullRush                                                 OFFSET(get<T>, {0xAE0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyPush.GAB_GenericApplyPush_C.OnCancelled_569FFD0446FBE214B15C2B8019481F5F
	// void OnCancelled_569FFD0446FBE214B15C2B8019481F5F();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyPush.GAB_GenericApplyPush_C.OnInterrupted_569FFD0446FBE214B15C2B8019481F5F
	// void OnInterrupted_569FFD0446FBE214B15C2B8019481F5F();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyPush.GAB_GenericApplyPush_C.OnBlendOut_569FFD0446FBE214B15C2B8019481F5F
	// void OnBlendOut_569FFD0446FBE214B15C2B8019481F5F();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyPush.GAB_GenericApplyPush_C.OnCompleted_569FFD0446FBE214B15C2B8019481F5F
	// void OnCompleted_569FFD0446FBE214B15C2B8019481F5F();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyPush.GAB_GenericApplyPush_C.EventReceived_7764EAC14FD514E952F78BA2A0CF9ABE
	// void EventReceived_7764EAC14FD514E952F78BA2A0CF9ABE(FGameplayEventData Payload);                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyPush.GAB_GenericApplyPush_C.OnCancelled_8D429E634F6B70CB0A894484CBF629F1
	// void OnCancelled_8D429E634F6B70CB0A894484CBF629F1();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyPush.GAB_GenericApplyPush_C.OnInterrupted_8D429E634F6B70CB0A894484CBF629F1
	// void OnInterrupted_8D429E634F6B70CB0A894484CBF629F1();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyPush.GAB_GenericApplyPush_C.OnBlendOut_8D429E634F6B70CB0A894484CBF629F1
	// void OnBlendOut_8D429E634F6B70CB0A894484CBF629F1();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyPush.GAB_GenericApplyPush_C.OnCompleted_8D429E634F6B70CB0A894484CBF629F1
	// void OnCompleted_8D429E634F6B70CB0A894484CBF629F1();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyPush.GAB_GenericApplyPush_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyPush.GAB_GenericApplyPush_C.ExecuteUbergraph_GAB_GenericApplyPush
	// void ExecuteUbergraph_GAB_GenericApplyPush(int32_t EntryPoint);                                                          // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGAB_ShielderTeleportOut_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Completed_04B647A04AB380AFDCCBD9B139883995
	// void Completed_04B647A04AB380AFDCCBD9B139883995(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Cancelled_04B647A04AB380AFDCCBD9B139883995
	// void Cancelled_04B647A04AB380AFDCCBD9B139883995(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Triggered_04B647A04AB380AFDCCBD9B139883995
	// void Triggered_04B647A04AB380AFDCCBD9B139883995(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.ExecuteUbergraph_GAB_ShielderTeleportOut
	// void ExecuteUbergraph_GAB_ShielderTeleportOut(int32_t EntryPoint);                                                       // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGAB_ShielderTeleportIn_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Completed_B576F3AF456E16FEAB9BCCB307590576
	// void Completed_B576F3AF456E16FEAB9BCCB307590576(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Cancelled_B576F3AF456E16FEAB9BCCB307590576
	// void Cancelled_B576F3AF456E16FEAB9BCCB307590576(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.Triggered_B576F3AF456E16FEAB9BCCB307590576
	// void Triggered_B576F3AF456E16FEAB9BCCB307590576(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderTeleportIn.GAB_ShielderTeleportIn_C.ExecuteUbergraph_GAB_ShielderTeleportIn
	// void ExecuteUbergraph_GAB_ShielderTeleportIn(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Shielder/GAB_ShielderSummonShield.GAB_ShielderSummonShield_C
/// Size: 0x0010 (0x000AC0 - 0x000AD0)
class UGAB_ShielderSummonShield_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(AShielderPawn_C*)                          Shielder                                                    OFFSET(get<T>, {0xAC8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.Completed_A740968F4C3C1AF2475795BD1818ADA3
	// void Completed_A740968F4C3C1AF2475795BD1818ADA3(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.Cancelled_A740968F4C3C1AF2475795BD1818ADA3
	// void Cancelled_A740968F4C3C1AF2475795BD1818ADA3(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.Triggered_A740968F4C3C1AF2475795BD1818ADA3
	// void Triggered_A740968F4C3C1AF2475795BD1818ADA3(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderSummonShield.GAB_ShielderSummonShield_C.ExecuteUbergraph_GAB_ShielderSummonShield
	// void ExecuteUbergraph_GAB_ShielderSummonShield(int32_t EntryPoint);                                                      // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Shielder/GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGAB_ShielderAttachPawnDies_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Completed_E6AA24FA40A80C2024C99E9EDD469296
	// void Completed_E6AA24FA40A80C2024C99E9EDD469296(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Cancelled_E6AA24FA40A80C2024C99E9EDD469296
	// void Cancelled_E6AA24FA40A80C2024C99E9EDD469296(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Triggered_E6AA24FA40A80C2024C99E9EDD469296
	// void Triggered_E6AA24FA40A80C2024C99E9EDD469296(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.ExecuteUbergraph_GAB_ShielderAttachPawnDies
	// void ExecuteUbergraph_GAB_ShielderAttachPawnDies(int32_t EntryPoint);                                                    // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Shielder/GE_WearingShielderTag.GE_WearingShielderTag_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_WearingShielderTag_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Shielder/GAB_ShielderAttachPawnEvents.GAB_ShielderAttachPawnEvents_C
/// Size: 0x0018 (0x000AC0 - 0x000AD8)
class UGAB_ShielderAttachPawnEvents_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2776;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0xAC8, 1, 0, 0})
	CMember(AShielderPawn_C*)                          Shielder                                                    OFFSET(get<T>, {0xAD0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderAttachPawnEvents.GAB_ShielderAttachPawnEvents_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Shielder/GAB_ShielderAttachPawnEvents.GAB_ShielderAttachPawnEvents_C.ExecuteUbergraph_GAB_ShielderAttachPawnEvents
	// void ExecuteUbergraph_GAB_ShielderAttachPawnEvents(int32_t EntryPoint);                                                  // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Shielder/GE_ShielderShield.GE_ShielderShield_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_ShielderShield_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_TransferFullBodyHit.GE_TransferFullBodyHit_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TransferFullBodyHit_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C
/// Size: 0x0058 (0x000AC0 - 0x000B18)
class UGAB_GenericApplyFullBodyHit_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2840;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(UClass*)                                   GE_TransferFullBodyHit                                      OFFSET(get<T>, {0xAC8, 8, 0, 0})
	CMember(UClass*)                                   GE_FullBodyHitActiveEffect                                  OFFSET(get<T>, {0xAD0, 8, 0, 0})
	CMember(UAnimMontage*)                             FullBodyHitMontage                                          OFFSET(get<T>, {0xAD8, 8, 0, 0})
	SMember(FName)                                     FullBodyHitMontageSection                                   OFFSET(getStruct<T>, {0xAE0, 8, 0, 0})
	SMember(FVector)                                   HitImpulse                                                  OFFSET(getStruct<T>, {0xAE8, 12, 0, 0})
	CMember(UClass*)                                   GE_RestoreControlResistance                                 OFFSET(get<T>, {0xAF8, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               ActiveImpactImmunity                                        OFFSET(getStruct<T>, {0xB00, 8, 0, 0})
	CMember(UClass*)                                   GE_ImpactImmunity                                           OFFSET(get<T>, {0xB08, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               ActiveFullBodyHit                                           OFFSET(getStruct<T>, {0xB10, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer& RelevantTags);                    // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnCancelled_25E5E66442E815EB40A6DB8205FE0D98
	// void OnCancelled_25E5E66442E815EB40A6DB8205FE0D98();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98
	// void OnInterrupted_25E5E66442E815EB40A6DB8205FE0D98();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98
	// void OnBlendOut_25E5E66442E815EB40A6DB8205FE0D98();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnCompleted_25E5E66442E815EB40A6DB8205FE0D98
	// void OnCompleted_25E5E66442E815EB40A6DB8205FE0D98();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.OnHitPawn
	// void OnHitPawn(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);                           // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.PickFullBodyHitMontageSection
	// void PickFullBodyHitMontageSection();                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyFullBodyHit.GAB_GenericApplyFullBodyHit_C.ExecuteUbergraph_GAB_GenericApplyFullBodyHit
	// void ExecuteUbergraph_GAB_GenericApplyFullBodyHit(int32_t EntryPoint);                                                   // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Flinger/GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C
/// Size: 0x0018 (0x000B18 - 0x000B30)
class UGAB_FlingerApplyFullBodyHit_C : public UGAB_GenericApplyFullBodyHit_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB18, 8, 0, 0})
	SMember(FName)                                     HitReactBack                                                OFFSET(getStruct<T>, {0xB20, 8, 0, 0})
	SMember(FName)                                     HitReactSectionName                                         OFFSET(getStruct<T>, {0xB28, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C.PickFullBodyHitMontageSection
	// void PickFullBodyHitMontageSection();                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Flinger/GAB_FlingerApplyFullBodyHit.GAB_FlingerApplyFullBodyHit_C.ExecuteUbergraph_GAB_FlingerApplyFullBodyHit
	// void ExecuteUbergraph_GAB_FlingerApplyFullBodyHit(int32_t EntryPoint);                                                   // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherApplyFullBodyHit.GAB_SmasherApplyFullBodyHit_C
/// Size: 0x0018 (0x000B18 - 0x000B30)
class UGAB_SmasherApplyFullBodyHit_C : public UGAB_GenericApplyFullBodyHit_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB18, 8, 0, 0})
	SMember(FName)                                     Front                                                       OFFSET(getStruct<T>, {0xB20, 8, 0, 0})
	DMember(int32_t)                                   CurrentNum                                                  OFFSET(get<int32_t>, {0xB28, 4, 0, 0})
	DMember(int32_t)                                   PreviousNum                                                 OFFSET(get<int32_t>, {0xB2C, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherApplyFullBodyHit.GAB_SmasherApplyFullBodyHit_C.PickFullBodyHitMontageSection
	// void PickFullBodyHitMontageSection();                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherApplyFullBodyHit.GAB_SmasherApplyFullBodyHit_C.ExecuteUbergraph_GAB_SmasherApplyFullBodyHit
	// void ExecuteUbergraph_GAB_SmasherApplyFullBodyHit(int32_t EntryPoint);                                                   // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Husk/Base/GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C
/// Size: 0x0018 (0x000B18 - 0x000B30)
class UGAB_HuskApplyFullBodyHit_C : public UGAB_GenericApplyFullBodyHit_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2864;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB18, 8, 0, 0})
	SMember(FName)                                     HitReactBack                                                OFFSET(getStruct<T>, {0xB20, 8, 0, 0})
	SMember(FName)                                     HitReactSectionName                                         OFFSET(getStruct<T>, {0xB28, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C.PickFullBodyHitMontageSection
	// void PickFullBodyHitMontageSection();                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Base/GAB_HuskApplyFullBodyHit.GAB_HuskApplyFullBodyHit_C.ExecuteUbergraph_GAB_HuskApplyFullBodyHit
	// void ExecuteUbergraph_GAB_HuskApplyFullBodyHit(int32_t EntryPoint);                                                      // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Taker/GE_TakerEvadeCooldown.GE_TakerEvadeCooldown_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TakerEvadeCooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C
/// Size: 0x0040 (0x000B20 - 0x000B60)
class UGAB_TakerPortalBase_C : public UFortGameplayAbility_AIPortal
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2912;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB20, 8, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0xB28, 1, 0, 0})
	SMember(FVector)                                   PortalInStartLocation                                       OFFSET(getStruct<T>, {0xB2C, 12, 0, 0})
	SMember(FVector)                                   PortalInEndLocation                                         OFFSET(getStruct<T>, {0xB38, 12, 0, 0})
	SMember(FVector)                                   PortalOutEndLocation                                        OFFSET(getStruct<T>, {0xB44, 12, 0, 0})
	CMember(UFortAbilityTask_MoveAI*)                  PortalInMove                                                OFFSET(get<T>, {0xB50, 8, 0, 0})
	CMember(UFortAbilityTask_MoveAI*)                  PortalOutMove                                               OFFSET(get<T>, {0xB58, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnMoveFinished_16BAAEB04DC04FA84D2FF3BBFD3A3425
	// void OnMoveFinished_16BAAEB04DC04FA84D2FF3BBFD3A3425(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnRequestFailed_16BAAEB04DC04FA84D2FF3BBFD3A3425
	// void OnRequestFailed_16BAAEB04DC04FA84D2FF3BBFD3A3425();                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnCancelled_16BAAEB04DC04FA84D2FF3BBFD3A3425
	// void OnCancelled_16BAAEB04DC04FA84D2FF3BBFD3A3425();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnInterrupted_16BAAEB04DC04FA84D2FF3BBFD3A3425
	// void OnInterrupted_16BAAEB04DC04FA84D2FF3BBFD3A3425();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnComplete_16BAAEB04DC04FA84D2FF3BBFD3A3425
	// void OnComplete_16BAAEB04DC04FA84D2FF3BBFD3A3425();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnMoveFinished_F402FFCD40B6F77E728220BFF4A37F11
	// void OnMoveFinished_F402FFCD40B6F77E728220BFF4A37F11(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnRequestFailed_F402FFCD40B6F77E728220BFF4A37F11
	// void OnRequestFailed_F402FFCD40B6F77E728220BFF4A37F11();                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnCancelled_F402FFCD40B6F77E728220BFF4A37F11
	// void OnCancelled_F402FFCD40B6F77E728220BFF4A37F11();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnInterrupted_F402FFCD40B6F77E728220BFF4A37F11
	// void OnInterrupted_F402FFCD40B6F77E728220BFF4A37F11();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.OnComplete_F402FFCD40B6F77E728220BFF4A37F11
	// void OnComplete_F402FFCD40B6F77E728220BFF4A37F11();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.Completed_7D4D41B64C4603D73B5B158D82C73287
	// void Completed_7D4D41B64C4603D73B5B158D82C73287(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.Cancelled_7D4D41B64C4603D73B5B158D82C73287
	// void Cancelled_7D4D41B64C4603D73B5B158D82C73287(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.Triggered_7D4D41B64C4603D73B5B158D82C73287
	// void Triggered_7D4D41B64C4603D73B5B158D82C73287(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerPortalBase.GAB_TakerPortalBase_C.ExecuteUbergraph_GAB_TakerPortalBase
	// void ExecuteUbergraph_GAB_TakerPortalBase(int32_t EntryPoint);                                                           // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Taker/GE_TakerSoulSuckHeal.GE_TakerSoulSuckHeal_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TakerSoulSuckHeal_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Taker/GE_TakerMeleeStunCooldown.GE_TakerMeleeStunCooldown_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TakerMeleeStunCooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Taker/GE_TakerSwoopCooldown.GE_TakerSwoopCooldown_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TakerSwoopCooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C
/// Size: 0x0090 (0x000AC0 - 0x000B50)
class UGAB_TakerSwoopMelee_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2896;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0xAC8, 1, 0, 0})
	CMember(ATakerPawn_C*)                             Taker                                                       OFFSET(get<T>, {0xAD0, 8, 0, 0})
	DMember(float)                                     RotationRateWhenSwooping                                    OFFSET(get<float>, {0xAD8, 4, 0, 0})
	SMember(FGameplayTag)                              TC_NPCAbilityAttackMeleeSwoop                               OFFSET(getStruct<T>, {0xAE0, 8, 0, 0})
	CMember(UAnimMontage*)                             SwoopTransitionMontage                                      OFFSET(get<T>, {0xAE8, 8, 0, 0})
	CMember(UAnimMontage*)                             SwoopAttackEndMontage                                       OFFSET(get<T>, {0xAF0, 8, 0, 0})
	DMember(float)                                     SwoopTimeout                                                OFFSET(get<float>, {0xAF8, 4, 0, 0})
	DMember(float)                                     SwoopMoveAcceptRadius                                       OFFSET(get<float>, {0xAFC, 4, 0, 0})
	CMember(TArray<AActor*>)                           ActorsHitThisTargetSelection                                OFFSET(get<T>, {0xB00, 16, 0, 0})
	DMember(bool)                                      AbilityEnded                                                OFFSET(get<bool>, {0xB10, 1, 0, 0})
	CMember(TArray<AActor*>)                           ActorsHitThisSwoop                                          OFFSET(get<T>, {0xB18, 16, 0, 0})
	CMember(TArray<AActor*>)                           ActorsHitThisTargetSelectionFiltered                        OFFSET(get<T>, {0xB28, 16, 0, 0})
	DMember(bool)                                      MovingSlowly                                                OFFSET(get<bool>, {0xB38, 1, 0, 0})
	CMember(UFortAbilityTask_MoveAI*)                  SwoopMove                                                   OFFSET(get<T>, {0xB40, 8, 0, 0})
	DMember(bool)                                      MeleeInProgress                                             OFFSET(get<bool>, {0xB48, 1, 0, 0})
	DMember(float)                                     DebugSwoopAttackTime                                        OFFSET(get<float>, {0xB4C, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer& RelevantTags);                    // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnMoveFinished_A8D9EDC44514CE30149C4C924AB5FB2A
	// void OnMoveFinished_A8D9EDC44514CE30149C4C924AB5FB2A(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnRequestFailed_A8D9EDC44514CE30149C4C924AB5FB2A
	// void OnRequestFailed_A8D9EDC44514CE30149C4C924AB5FB2A();                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A
	// void OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A
	// void OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A
	// void OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Completed_90CCC07C4CF88E3BB6C7268A426DBA5F
	// void Completed_90CCC07C4CF88E3BB6C7268A426DBA5F(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F
	// void Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F
	// void Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Cancelled_DE47BE5C495BECAF17E854B5C7774E8D
	// void Cancelled_DE47BE5C495BECAF17E854B5C7774E8D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Targeted_DE47BE5C495BECAF17E854B5C7774E8D
	// void Targeted_DE47BE5C495BECAF17E854B5C7774E8D(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15
	// void OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15
	// void OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15
	// void OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15
	// void OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Taker Overlapped An Actor
	// void Taker Overlapped An Actor(AActor* OverlappedActor, AActor* OtherActor);                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.BeginOutroDeceleration
	// void BeginOutroDeceleration();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.SwoopTimeoutComplete
	// void SwoopTimeoutComplete();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.SlowSpeedCancel
	// void SlowSpeedCancel();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.ExecuteUbergraph_GAB_TakerSwoopMelee
	// void ExecuteUbergraph_GAB_TakerSwoopMelee(int32_t EntryPoint);                                                           // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Taker/GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C
/// Size: 0x0050 (0x000AC0 - 0x000B10)
class UGAB_TakerSwoopLevitate_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	SMember(FVector)                                   Pawn_Destination                                            OFFSET(getStruct<T>, {0xAC8, 12, 0, 0})
	SMember(FVector)                                   Pawn_Location                                               OFFSET(getStruct<T>, {0xAD4, 12, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0xAE0, 1, 0, 0})
	CMember(ATakerPawn_C*)                             Taker                                                       OFFSET(get<T>, {0xAE8, 8, 0, 0})
	DMember(float)                                     FarAngleForTakerToLevitateTo                                OFFSET(get<float>, {0xAF0, 4, 0, 0})
	DMember(float)                                     FarDistance                                                 OFFSET(get<float>, {0xAF4, 4, 0, 0})
	DMember(float)                                     CloseAngleForTakerToLevitateTo                              OFFSET(get<float>, {0xAF8, 4, 0, 0})
	DMember(float)                                     CloseDistance                                               OFFSET(get<float>, {0xAFC, 4, 0, 0})
	SMember(FName)                                     TakerCollisionProfileWhenSwooping                           OFFSET(getStruct<T>, {0xB00, 8, 0, 0})
	DMember(float)                                     LevitateAnimationTranslationDistance                        OFFSET(get<float>, {0xB08, 4, 0, 0})
	DMember(float)                                     DebugLevitateStartTime                                      OFFSET(get<float>, {0xB0C, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.EventReceived_9815869441DE62BDFB6A3794B3593B2E
	// void EventReceived_9815869441DE62BDFB6A3794B3593B2E(FGameplayEventData Payload);                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.OnCancelled_3DC7F8824D4D9130A3E2DAB3D53E28DD
	// void OnCancelled_3DC7F8824D4D9130A3E2DAB3D53E28DD();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.OnInterrupted_3DC7F8824D4D9130A3E2DAB3D53E28DD
	// void OnInterrupted_3DC7F8824D4D9130A3E2DAB3D53E28DD();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.OnBlendOut_3DC7F8824D4D9130A3E2DAB3D53E28DD
	// void OnBlendOut_3DC7F8824D4D9130A3E2DAB3D53E28DD();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.OnCompleted_3DC7F8824D4D9130A3E2DAB3D53E28DD
	// void OnCompleted_3DC7F8824D4D9130A3E2DAB3D53E28DD();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSwoopLevitate.GAB_TakerSwoopLevitate_C.ExecuteUbergraph_GAB_TakerSwoopLevitate
	// void ExecuteUbergraph_GAB_TakerSwoopLevitate(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C
/// Size: 0x00C8 (0x000AC0 - 0x000B88)
class UGAB_TakerSoulSuck_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2952;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0xAC8, 1, 0, 0})
	CMember(AFortPawn*)                                GoalPawn                                                    OFFSET(get<T>, {0xAD0, 8, 0, 0})
	CMember(ATakerPawn_C*)                             TakerPawn                                                   OFFSET(get<T>, {0xAD8, 8, 0, 0})
	CMember(AController*)                              TakerController                                             OFFSET(get<T>, {0xAE0, 8, 0, 0})
	DMember(float)                                     SoulSuckTickTime                                            OFFSET(get<float>, {0xAE8, 4, 0, 0})
	DMember(float)                                     SoulSuckLowDamagePeriod                                     OFFSET(get<float>, {0xAEC, 4, 0, 0})
	DMember(float)                                     SoulSuckDamageBeganAtThisTime                               OFFSET(get<float>, {0xAF0, 4, 0, 0})
	DMember(float)                                     SoulSuckLastDamageTime                                      OFFSET(get<float>, {0xAF4, 4, 0, 0})
	SMember(FName)                                     SoulSuckMontageSection                                      OFFSET(getStruct<T>, {0xAF8, 8, 0, 0})
	SMember(FName)                                     SoulSuckCurrentMontageSection                               OFFSET(getStruct<T>, {0xB00, 8, 0, 0})
	DMember(float)                                     SoulSuckGoalActorNormalizedHealth                           OFFSET(get<float>, {0xB08, 4, 0, 0})
	DMember(float)                                     SoulSuckHitNothingTimeoutDuration                           OFFSET(get<float>, {0xB0C, 4, 0, 0})
	CMember(USoundBase*)                               KnockTakerAwaySound                                         OFFSET(get<T>, {0xB10, 8, 0, 0})
	DMember(float)                                     KnockTakerAwayMomentum                                      OFFSET(get<float>, {0xB18, 4, 0, 0})
	CMember(UClass*)                                   GE_TakerSoulSuckAttack                                      OFFSET(get<T>, {0xB20, 8, 0, 0})
	CMember(UClass*)                                   GE_TakerDirectDamageSoulSuckHeavy                           OFFSET(get<T>, {0xB28, 8, 0, 0})
	CMember(UClass*)                                   GE_TakerSoulSuckHeal                                        OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NPCAbilityAttackMeleeSoulSuck                            OFFSET(getStruct<T>, {0xB38, 32, 0, 0})
	CMember(UClass*)                                   GE_TakerSoulSuckRelease                                     OFFSET(get<T>, {0xB58, 8, 0, 0})
	CMember(UClass*)                                   GE_TakerMeleeStunCooldown                                   OFFSET(get<T>, {0xB60, 8, 0, 0})
	CMember(UClass*)                                   GE_TakerSwoopCooldown                                       OFFSET(get<T>, {0xB68, 8, 0, 0})
	CMember(TArray<AActor*>)                           HitActors                                                   OFFSET(get<T>, {0xB70, 16, 0, 0})
	SMember(FGameplayTag)                              TC_NPCEnemyTypeBASE                                         OFFSET(getStruct<T>, {0xB80, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.OnInterrupted_7817BC4E41E9CF270861B28630504E0D
	// void OnInterrupted_7817BC4E41E9CF270861B28630504E0D();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.OnComplete_7817BC4E41E9CF270861B28630504E0D
	// void OnComplete_7817BC4E41E9CF270861B28630504E0D();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.OnInterrupted_7817BC4E41E9CF270861B2865D46D1D6
	// void OnInterrupted_7817BC4E41E9CF270861B2865D46D1D6();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.OnComplete_7817BC4E41E9CF270861B2865D46D1D6
	// void OnComplete_7817BC4E41E9CF270861B2865D46D1D6();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.OnInterrupted_7817BC4E41E9CF270861B286146C2D8C
	// void OnInterrupted_7817BC4E41E9CF270861B286146C2D8C();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.OnComplete_7817BC4E41E9CF270861B286146C2D8C
	// void OnComplete_7817BC4E41E9CF270861B286146C2D8C();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.OnInterrupted_7817BC4E41E9CF270861B28685B20041
	// void OnInterrupted_7817BC4E41E9CF270861B28685B20041();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.OnComplete_7817BC4E41E9CF270861B28685B20041
	// void OnComplete_7817BC4E41E9CF270861B28685B20041();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.Completed_A9A1CE59416C7C1D5AF25DADAE0C61C2
	// void Completed_A9A1CE59416C7C1D5AF25DADAE0C61C2(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.Cancelled_A9A1CE59416C7C1D5AF25DADAE0C61C2
	// void Cancelled_A9A1CE59416C7C1D5AF25DADAE0C61C2(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.Triggered_A9A1CE59416C7C1D5AF25DADAE0C61C2
	// void Triggered_A9A1CE59416C7C1D5AF25DADAE0C61C2(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.OnInterrupted_7817BC4E41E9CF270861B28664B32580
	// void OnInterrupted_7817BC4E41E9CF270861B28664B32580();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.OnComplete_7817BC4E41E9CF270861B28664B32580
	// void OnComplete_7817BC4E41E9CF270861B28664B32580();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.Cancelled_4C2B63DE432CB715866443AE4D6362FD
	// void Cancelled_4C2B63DE432CB715866443AE4D6362FD(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.Targeted_4C2B63DE432CB715866443AE4D6362FD
	// void Targeted_4C2B63DE432CB715866443AE4D6362FD(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.Goal Pawn Died
	// void Goal Pawn Died(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.HitNothingTimeout
	// void HitNothingTimeout();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.Taker Damaged
	// void Taker Damaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.SoulSuck
	// void SoulSuck();                                                                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.Taker Destroyed
	// void Taker Destroyed(AActor* DestroyedActor);                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.Taker Died
	// void Taker Died(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.UnbindAllEvents
	// void UnbindAllEvents();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.Goal Pawn Damaged
	// void Goal Pawn Damaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerSoulSuck.GAB_TakerSoulSuck_C.ExecuteUbergraph_GAB_TakerSoulSuck
	// void ExecuteUbergraph_GAB_TakerSoulSuck(int32_t EntryPoint);                                                             // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Taker/GAB_TakerPortalVertical.GAB_TakerPortalVertical_C
/// Size: 0x0000 (0x000B60 - 0x000B60)
class UGAB_TakerPortalVertical_C : public UGAB_TakerPortalBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2912;

public:
};

/// Class /Game/Abilities/NPC/Taker/GAB_TakerPortalHorizontal.GAB_TakerPortalHorizontal_C
/// Size: 0x0000 (0x000B60 - 0x000B60)
class UGAB_TakerPortalHorizontal_C : public UGAB_TakerPortalBase_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2912;

public:
};

/// Class /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C
/// Size: 0x0038 (0x000AC0 - 0x000AF8)
class UGAB_TakerMeleeStun_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2808;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	DMember(float)                                     MoveStopRadius                                              OFFSET(get<float>, {0xAC8, 4, 0, 0})
	DMember(float)                                     RotationRateWhenAttacking                                   OFFSET(get<float>, {0xACC, 4, 0, 0})
	CMember(ATakerPawn_C*)                             TakerPawn                                                   OFFSET(get<T>, {0xAD0, 8, 0, 0})
	CMember(TEnumAsByte<EFortMovementUrgency>)         DefaultMovementUrgency                                      OFFSET(get<T>, {0xAD8, 1, 0, 0})
	CMember(TEnumAsByte<EFortMovementUrgency>)         MovementUrgencyWhenAttacking                                OFFSET(get<T>, {0xAD9, 1, 0, 0})
	DMember(bool)                                      OnlyHitOnce                                                 OFFSET(get<bool>, {0xADA, 1, 0, 0})
	DMember(bool)                                      OnlyHitAbilityTarget                                        OFFSET(get<bool>, {0xADB, 1, 0, 0})
	CMember(TArray<AActor*>)                           HitActors                                                   OFFSET(get<T>, {0xAE0, 16, 0, 0})
	CMember(UFortAbilityTask_MoveAI*)                  MoveWhileAttacking                                          OFFSET(get<T>, {0xAF0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer& RelevantTags);                    // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnMoveFinished_513D85AB446CCC17A8F8AAA9835468D1
	// void OnMoveFinished_513D85AB446CCC17A8F8AAA9835468D1(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnRequestFailed_513D85AB446CCC17A8F8AAA9835468D1
	// void OnRequestFailed_513D85AB446CCC17A8F8AAA9835468D1();                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnCancelled_513D85AB446CCC17A8F8AAA9835468D1
	// void OnCancelled_513D85AB446CCC17A8F8AAA9835468D1();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1
	// void OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnComplete_513D85AB446CCC17A8F8AAA9835468D1
	// void OnComplete_513D85AB446CCC17A8F8AAA9835468D1();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042
	// void Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042
	// void Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042
	// void Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.MoveTimerComplete
	// void MoveTimerComplete();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.ResetDoOnce
	// void ResetDoOnce();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.ExecuteUbergraph_GAB_TakerMeleeStun
	// void ExecuteUbergraph_GAB_TakerMeleeStun(int32_t EntryPoint);                                                            // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Taker/GAB_TakerMelee.GAB_TakerMelee_C
/// Size: 0x0000 (0x000AF8 - 0x000AF8)
class UGAB_TakerMelee_C : public UGAB_TakerMeleeStun_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2808;

public:
};

/// Class /Game/Abilities/NPC/Taker/GAB_TakerEvade.GAB_TakerEvade_C
/// Size: 0x0050 (0x000AC0 - 0x000B10)
class UGAB_TakerEvade_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(ATakerPawn_C*)                             TakerPawn                                                   OFFSET(get<T>, {0xAC8, 8, 0, 0})
	CMember(UEnvQuery*)                                EQS_TakerEvade                                              OFFSET(get<T>, {0xAD0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_WeaponRanged                                             OFFSET(getStruct<T>, {0xAD8, 32, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0xAF8, 1, 0, 0})
	DMember(bool)                                      RangedEvade                                                 OFFSET(get<bool>, {0xAF9, 1, 0, 0})
	DMember(float)                                     DistanceToAllowMeleeEvade                                   OFFSET(get<float>, {0xAFC, 4, 0, 0})
	DMember(float)                                     DesiredEvadeDistance                                        OFFSET(get<float>, {0xB00, 4, 0, 0})
	DMember(float)                                     RangedEvadePlayRate                                         OFFSET(get<float>, {0xB04, 4, 0, 0})
	DMember(float)                                     MeleeEvadePlayRate                                          OFFSET(get<float>, {0xB08, 4, 0, 0})
	DMember(float)                                     AnimatedEvadeDistance                                       OFFSET(get<float>, {0xB0C, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Taker/GAB_TakerEvade.GAB_TakerEvade_C.K2_CanActivateAbility
	// bool K2_CanActivateAbility(FGameplayAbilityActorInfo ActorInfo, FGameplayTagContainer& RelevantTags);                    // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerEvade.GAB_TakerEvade_C.Completed_5F3AF706421290A95C9D1A948B671F8E
	// void Completed_5F3AF706421290A95C9D1A948B671F8E(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerEvade.GAB_TakerEvade_C.Cancelled_5F3AF706421290A95C9D1A948B671F8E
	// void Cancelled_5F3AF706421290A95C9D1A948B671F8E(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerEvade.GAB_TakerEvade_C.Triggered_5F3AF706421290A95C9D1A948B671F8E
	// void Triggered_5F3AF706421290A95C9D1A948B671F8E(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerEvade.GAB_TakerEvade_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerEvade.GAB_TakerEvade_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerEvade.GAB_TakerEvade_C.OnQueryFinishedEvent
	// void OnQueryFinishedEvent(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerEvade.GAB_TakerEvade_C.ExecuteUbergraph_GAB_TakerEvade
	// void ExecuteUbergraph_GAB_TakerEvade(int32_t EntryPoint);                                                                // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Taker/GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C
/// Size: 0x0008 (0x000B18 - 0x000B20)
class UGAB_TakerApplyFullBodyHit_C : public UGAB_GenericApplyFullBodyHit_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2848;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB18, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Taker/GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C.PickFullBodyHitMontageSection
	// void PickFullBodyHitMontageSection();                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GAB_TakerApplyFullBodyHit.GAB_TakerApplyFullBodyHit_C.ExecuteUbergraph_GAB_TakerApplyFullBodyHit
	// void ExecuteUbergraph_GAB_TakerApplyFullBodyHit(int32_t EntryPoint);                                                     // [0x154a140] None                 
};

/// Class /Game/Abilities/NPC/Generic/GE_ImpactImmunity_TagTriggered.GE_ImpactImmunity_TagTriggered_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_ImpactImmunity_TagTriggered_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C
/// Size: 0x006C (0x000AC0 - 0x000B2C)
class UGAB_Hunting_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2860;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(UEnvQuery*)                                EQS_Hunting_Query                                           OFFSET(get<T>, {0xAC8, 8, 0, 0})
	DMember(float)                                     EQS_Grid_Half_Size                                          OFFSET(get<float>, {0xAD0, 4, 0, 0})
	DMember(float)                                     EQS_Density                                                 OFFSET(get<float>, {0xAD4, 4, 0, 0})
	SMember(FName)                                     HuntingMoveTaskName                                         OFFSET(getStruct<T>, {0xAD8, 8, 0, 0})
	CMember(AFortAIController*)                        MyFortAIController                                          OFFSET(get<T>, {0xAE0, 8, 0, 0})
	CMember(AActor*)                                   HuntingTarget                                               OFFSET(get<T>, {0xAE8, 8, 0, 0})
	DMember(float)                                     LastTimeStartedHunting                                      OFFSET(get<float>, {0xAF0, 4, 0, 0})
	DMember(float)                                     HuntingRestartDelta                                         OFFSET(get<float>, {0xAF4, 4, 0, 0})
	CMember(UFortAbilityTask_MoveAI*)                  MovementTask                                                OFFSET(get<T>, {0xAF8, 8, 0, 0})
	CMember(TArray<float>)                             GoalDistancesOnCompleteMove                                 OFFSET(get<T>, {0xB00, 16, 0, 0})
	CMember(TArray<FVector>)                           PawnPositionsOnCompletedMove                                OFFSET(get<T>, {0xB10, 16, 0, 0})
	DMember(bool)                                      ShouldAbortHunting                                          OFFSET(get<bool>, {0xB20, 1, 0, 0})
	DMember(float)                                     MinGoalDistChange                                           OFFSET(get<float>, {0xB24, 4, 0, 0})
	DMember(float)                                     MinPawnDistChange                                           OFFSET(get<float>, {0xB28, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.UpdatePositionData
	// void UpdatePositionData(TArray<FVector>& PosArray, FVector NewPosition, float& MaxDistance, bool& HasValidData);         // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.UpdateDistanceData
	// void UpdateDistanceData(TArray<float>& DistArray, float NewDistance, float& MinValue, float& MaxValue, bool& HasValidData); // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.OnMoveFinished_9284CD4944DA1972DB7A98BE0A9A28C1
	// void OnMoveFinished_9284CD4944DA1972DB7A98BE0A9A28C1(TEnumAsByte<EPathFollowingResult> Result, AAIController* AIController); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.OnRequestFailed_9284CD4944DA1972DB7A98BE0A9A28C1
	// void OnRequestFailed_9284CD4944DA1972DB7A98BE0A9A28C1();                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.OnCancelled_9284CD4944DA1972DB7A98BE0A9A28C1
	// void OnCancelled_9284CD4944DA1972DB7A98BE0A9A28C1();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.OnInterrupted_9284CD4944DA1972DB7A98BE0A9A28C1
	// void OnInterrupted_9284CD4944DA1972DB7A98BE0A9A28C1();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.OnComplete_9284CD4944DA1972DB7A98BE0A9A28C1
	// void OnComplete_9284CD4944DA1972DB7A98BE0A9A28C1();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.OnQueryFinishedEvent_Event
	// void OnQueryFinishedEvent_Event(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.OnTargetPerceptionUpdated_Event
	// void OnTargetPerceptionUpdated_Event(AActor* Actor, FAIStimulus Stimulus);                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.StartQuery
	// void StartQuery();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.Restart Hunting
	// void Restart Hunting();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.StoreGoalDistance
	// void StoreGoalDistance();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_Hunting.GAB_Hunting_C.ExecuteUbergraph_GAB_Hunting
	// void ExecuteUbergraph_GAB_Hunting(int32_t EntryPoint);                                                                   // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C
/// Size: 0x0018 (0x000AC0 - 0x000AD8)
class UGAB_BaseDespawn_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2776;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	SMember(FGameplayTag)                              TC_GameplayEffectInstantDeathDespawn                        OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})
	DMember(float)                                     DelayBeforeKill                                             OFFSET(get<float>, {0xAD0, 4, 0, 0})
	DMember(int32_t)                                   RiftRandom                                                  OFFSET(get<int32_t>, {0xAD4, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_BaseDespawn.GAB_BaseDespawn_C.ExecuteUbergraph_GAB_BaseDespawn
	// void ExecuteUbergraph_GAB_BaseDespawn(int32_t EntryPoint);                                                               // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Traps/Generic/GE_TrapCooldownGeneric.GE_TrapCooldownGeneric_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TrapCooldownGeneric_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Traps/Generic/GE_TrapCost.GE_TrapCost_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TrapCost_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Traps/Generic/GA_TrapGeneric.GA_TrapGeneric_C
/// Size: 0x0030 (0x000AC0 - 0x000AF0)
class UGA_TrapGeneric_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(ABuildingTrap*)                            CeilingTrap                                                 OFFSET(get<T>, {0xAC8, 8, 0, 0})
	CMember(TArray<AActor*>)                           CachedDamageTargets                                         OFFSET(get<T>, {0xAD0, 16, 0, 0})
	CMember(TArray<AActor*>)                           TargetArray                                                 OFFSET(get<T>, {0xAE0, 16, 0, 0})


	/// Functions
	// Function /Game/Abilities/Traps/Generic/GA_TrapGeneric.GA_TrapGeneric_C.Cancelled_EFEC611E4D988CAA3867F28EE35771B3
	// void Cancelled_EFEC611E4D988CAA3867F28EE35771B3(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/Generic/GA_TrapGeneric.GA_TrapGeneric_C.Targeted_EFEC611E4D988CAA3867F28EE35771B3
	// void Targeted_EFEC611E4D988CAA3867F28EE35771B3(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/Generic/GA_TrapGeneric.GA_TrapGeneric_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Traps/Generic/GA_TrapGeneric.GA_TrapGeneric_C.ExecuteUbergraph_GA_TrapGeneric
	// void ExecuteUbergraph_GA_TrapGeneric(int32_t EntryPoint);                                                                // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Traps/FloorHoverboardSpeed/GA_Trap_FloorHoverboardSpeed.GA_Trap_FloorHoverboardSpeed_C
/// Size: 0x0018 (0x000AF0 - 0x000B08)
class UGA_Trap_FloorHoverboardSpeed_C : public UGA_TrapGeneric_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2824;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAF0, 8, 0, 0})
	DMember(float)                                     HoverboardBoostVelocityShift                                OFFSET(get<float>, {0xAF8, 4, 0, 0})
	CMember(ATrap_Floor_Hoverboard_Speed_C*)           HoverboardSpeedTrap                                         OFFSET(get<T>, {0xB00, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Traps/FloorHoverboardSpeed/GA_Trap_FloorHoverboardSpeed.GA_Trap_FloorHoverboardSpeed_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Traps/FloorHoverboardSpeed/GA_Trap_FloorHoverboardSpeed.GA_Trap_FloorHoverboardSpeed_C.ExecuteUbergraph_GA_Trap_FloorHoverboardSpeed
	// void ExecuteUbergraph_GA_Trap_FloorHoverboardSpeed(int32_t EntryPoint);                                                  // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_Revive.GE_Generic_Revive_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Generic_Revive_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_ShieldRegen_Delay_Damaged.GE_ShieldRegen_Delay_Damaged_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_ShieldRegen_Delay_Damaged_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_HealthRegen_Delay_Damaged.GE_HealthRegen_Delay_Damaged_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_HealthRegen_Delay_Damaged_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_ShieldRegen.GE_Generic_ShieldRegen_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Generic_ShieldRegen_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_HealthRegen.GE_Generic_HealthRegen_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Generic_HealthRegen_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_ExtraLifeRevive.GE_ExtraLifeRevive_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_ExtraLifeRevive_C : public UGE_Generic_Revive_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C
/// Size: 0x00D8 (0x001AE0 - 0x001BB8)
class APlayerPawn_Generic_Parent_C : public AFortPlayerPawn
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7096;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1AE0, 8, 0, 0})
	CMember(TArray<UMaterialInterface*>)               Default_Weapon_Materials                                    OFFSET(get<T>, {0x1AE8, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnBackpackMaterials                                       OFFSET(get<T>, {0x1AF8, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnHatMaterials                                            OFFSET(get<T>, {0x1B08, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnHeadMaterials                                           OFFSET(get<T>, {0x1B18, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnBodyMaterials                                           OFFSET(get<T>, {0x1B28, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnCharmMaterials                                          OFFSET(get<T>, {0x1B38, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnFaceMaterials                                           OFFSET(get<T>, {0x1B48, 16, 0, 0})
	CMember(TArray<UMaterialInterface*>)               PawnLegsMaterials                                           OFFSET(get<T>, {0x1B58, 16, 0, 0})
	CMember(TArray<UMaterialInterface*>)               PawnTorsoMaterials                                          OFFSET(get<T>, {0x1B68, 16, 0, 0})
	CMember(UPostProcessComponent*)                    PlayerPostProcessFX                                         OFFSET(get<T>, {0x1B78, 8, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           SkeletalMeshes                                              OFFSET(get<T>, {0x1B80, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         PawnMaterials_ALL                                           OFFSET(get<T>, {0x1B90, 16, 0, 0})
	DMember(int32_t)                                   WaterCounter                                                OFFSET(get<int32_t>, {0x1BA0, 4, 0, 0})
	CMember(AActor*)                                   CurrentWaterMeshActor                                       OFFSET(get<T>, {0x1BA8, 8, 0, 0})
	DMember(bool)                                      IsInWater                                                   OFFSET(get<bool>, {0x1BB0, 1, 0, 0})
	DMember(float)                                     Time_when_you_ll_be_able_to_splash_again                    OFFSET(get<float>, {0x1BB4, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Exited/Entered Water Volume
	// void Exited/Entered Water Volume();                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.Player Creates a Splash
	// void Player Creates a Splash(FTransform& NewTransform);                                                                  // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic_Parent.PlayerPawn_Generic_Parent_C.ExecuteUbergraph_PlayerPawn_Generic_Parent
	// void ExecuteUbergraph_PlayerPawn_Generic_Parent(int32_t EntryPoint);                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C
/// Size: 0x04F5 (0x001BB8 - 0x0020AD)
class APlayerPawn_Generic_C : public APlayerPawn_Generic_Parent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8365;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x1BB8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 SplashEffectsForEnteringOrExitingWater                      OFFSET(get<T>, {0x1BC0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 GamplayWindInteractionEffects                               OFFSET(get<T>, {0x1BC8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_Player_Run_Land                                      OFFSET(get<T>, {0x1BD0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_Player_Walk_Land                                     OFFSET(get<T>, {0x1BD8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_Player_Walk_Water                                    OFFSET(get<T>, {0x1BE0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_Player_Run_Water                                     OFFSET(get<T>, {0x1BE8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_WaterInteraction_FX                                  OFFSET(get<T>, {0x1BF0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 AnimTrailPS                                                 OFFSET(get<T>, {0x1BF8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 HitDamageParticles                                          OFFSET(get<T>, {0x1C00, 8, 0, 0})
	CMember(UWidgetComponent*)                         SpeechBubbleComponent                                       OFFSET(get<T>, {0x1C08, 8, 0, 0})
	CMember(USpotLightComponent*)                      PlayerLight                                                 OFFSET(get<T>, {0x1C10, 8, 0, 0})
	DMember(float)                                     CapsuleFadeTL_RemoveShadow_018B40864B973FCD649A23BAC2709F23 OFFSET(get<float>, {0x1C18, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CapsuleFadeTL__Direction_018B40864B973FCD649A23BAC2709F23   OFFSET(get<T>, {0x1C1C, 1, 0, 0})
	CMember(UTimelineComponent*)                       CapsuleFadeTL                                               OFFSET(get<T>, {0x1C20, 8, 0, 0})
	DMember(float)                                     Full_Shield_Health_Push_6222ABB047B8F22E3C9FC983BD70CEA6    OFFSET(get<float>, {0x1C28, 4, 0, 0})
	DMember(float)                                     Full_Shield_Health_Impact_6222ABB047B8F22E3C9FC983BD70CEA6  OFFSET(get<float>, {0x1C2C, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Full_Shield_Health__Direction_6222ABB047B8F22E3C9FC983BD70CEA6 OFFSET(get<T>, {0x1C30, 1, 0, 0})
	CMember(UTimelineComponent*)                       Full_Shield_Health                                          OFFSET(get<T>, {0x1C38, 8, 0, 0})
	DMember(float)                                     Shield_DamageTimeline_Impact_6DC09F024CD096186AE1389FB8061E30 OFFSET(get<float>, {0x1C40, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Shield_DamageTimeline__Direction_6DC09F024CD096186AE1389FB8061E30 OFFSET(get<T>, {0x1C44, 1, 0, 0})
	CMember(UTimelineComponent*)                       Shield_DamageTimeline                                       OFFSET(get<T>, {0x1C48, 8, 0, 0})
	DMember(float)                                     Shield_Regen_Timeline_Opacity_3DC9958C47D4CEFA60E68699D92BA374 OFFSET(get<float>, {0x1C50, 4, 0, 0})
	DMember(float)                                     Shield_Regen_Timeline_Push_3DC9958C47D4CEFA60E68699D92BA374 OFFSET(get<float>, {0x1C54, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Shield_Regen_Timeline__Direction_3DC9958C47D4CEFA60E68699D92BA374 OFFSET(get<T>, {0x1C58, 1, 0, 0})
	CMember(UTimelineComponent*)                       Shield_Regen_Timeline                                       OFFSET(get<T>, {0x1C60, 8, 0, 0})
	DMember(float)                                     Shield_ShatterTimeline_Push_F3223F2D4A6B8642F950B0A15F8C6699 OFFSET(get<float>, {0x1C68, 4, 0, 0})
	DMember(float)                                     Shield_ShatterTimeline_Opacity_F3223F2D4A6B8642F950B0A15F8C6699 OFFSET(get<float>, {0x1C6C, 4, 0, 0})
	DMember(float)                                     Shield_ShatterTimeline_HighlightCracks_F3223F2D4A6B8642F950B0A15F8C6699 OFFSET(get<float>, {0x1C70, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Shield_ShatterTimeline__Direction_F3223F2D4A6B8642F950B0A15F8C6699 OFFSET(get<T>, {0x1C74, 1, 0, 0})
	CMember(UTimelineComponent*)                       Shield_ShatterTimeline                                      OFFSET(get<T>, {0x1C78, 8, 0, 0})
	DMember(float)                                     HealthSweep_SafetyOpacity_2A96303441845D0EAAAB1EB68183F8A8  OFFSET(get<float>, {0x1C80, 4, 0, 0})
	DMember(float)                                     HealthSweep_Sweep_2A96303441845D0EAAAB1EB68183F8A8          OFFSET(get<float>, {0x1C84, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           HealthSweep__Direction_2A96303441845D0EAAAB1EB68183F8A8     OFFSET(get<T>, {0x1C88, 1, 0, 0})
	CMember(UTimelineComponent*)                       HealthSweep                                                 OFFSET(get<T>, {0x1C90, 8, 0, 0})
	CMember(UClass*)                                   ScreenEffect_PlayerHealthDamageDirection                    OFFSET(get<T>, {0x1C98, 8, 0, 0})
	CMember(UClass*)                                   ScreenEffect_PlayerHealthDamage                             OFFSET(get<T>, {0x1CA0, 8, 0, 0})
	CMember(UClass*)                                   ScreenEffect_PlayerShieldDamageDirection                    OFFSET(get<T>, {0x1CA8, 8, 0, 0})
	CMember(UClass*)                                   ScreenEffect_PlayerShieldDamage                             OFFSET(get<T>, {0x1CB0, 8, 0, 0})
	CMember(UClass*)                                   HitByHuskProjectileClass                                    OFFSET(get<T>, {0x1CB8, 8, 0, 0})
	CMember(USoundBase*)                               HitByHuskRangedSound                                        OFFSET(get<T>, {0x1CC0, 8, 0, 0})
	CMember(USoundBase*)                               HitByHuskMeleeSound                                         OFFSET(get<T>, {0x1CC8, 8, 0, 0})
	CMember(UAnimMontage*)                             SoulSuckVictimMontage                                       OFFSET(get<T>, {0x1CD0, 8, 0, 0})
	DMember(float)                                     PlayerSpeed                                                 OFFSET(get<float>, {0x1CD8, 4, 0, 0})
	DMember(float)                                     Run_Particle_Activate_Speed                                 OFFSET(get<float>, {0x1CDC, 4, 0, 0})
	DMember(float)                                     Walk_Dust_Activate_Speed                                    OFFSET(get<float>, {0x1CE0, 4, 0, 0})
	DMember(float)                                     Walk_Particle_Reset_Speed                                   OFFSET(get<float>, {0x1CE4, 4, 0, 0})
	SMember(FVector)                                   PreviousVelocityVector                                      OFFSET(getStruct<T>, {0x1CE8, 12, 0, 0})
	DMember(bool)                                      CanSpawnRunKickupFX_                                        OFFSET(get<bool>, {0x1CF4, 1, 0, 0})
	DMember(bool)                                      CanSpawnWalkKickupFX_                                       OFFSET(get<bool>, {0x1CF5, 1, 0, 0})
	DMember(bool)                                      CanSpawnDustLandFX_                                         OFFSET(get<bool>, {0x1CF6, 1, 0, 0})
	DMember(bool)                                      IsInWater                                                   OFFSET(get<bool>, {0x1CF7, 1, 0, 0})
	SMember(FRotator)                                  RunWalkParticleRotation                                     OFFSET(getStruct<T>, {0x1CF8, 12, 0, 0})
	DMember(bool)                                      IsNinjaInShadowStance_                                      OFFSET(get<bool>, {0x1D04, 1, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTagsForHitByHuskMeleeSound                          OFFSET(getStruct<T>, {0x1D08, 32, 0, 0})
	CMember(UMaterialInterface*)                       Adrenaline_Material                                         OFFSET(get<T>, {0x1D28, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         AdrenalineRush_HeadAnimatingMIDS                            OFFSET(get<T>, {0x1D30, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         AdrenalineRush_BodyAnimatingMIDS                            OFFSET(get<T>, {0x1D40, 16, 0, 0})
	SMember(FLinearColor)                              Adrenaline_Rush_Color_Outer_Direct                          OFFSET(getStruct<T>, {0x1D50, 16, 0, 0})
	SMember(FLinearColor)                              Adrenaline_Rush_Color_Inner_Direct                          OFFSET(getStruct<T>, {0x1D60, 16, 0, 0})
	DMember(float)                                     Adrenaline_Rush_WPO_Offset                                  OFFSET(get<float>, {0x1D70, 4, 0, 0})
	CMember(UMaterialInterface*)                       Shield_Material                                             OFFSET(get<T>, {0x1D78, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         BodyShieldMIDArray                                          OFFSET(get<T>, {0x1D80, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         HeadShieldMIDArray                                          OFFSET(get<T>, {0x1D90, 16, 0, 0})
	DMember(bool)                                      Shield_Active                                               OFFSET(get<bool>, {0x1DA0, 1, 0, 0})
	DMember(float)                                     Tick_Delta_Seconds                                          OFFSET(get<float>, {0x1DA4, 4, 0, 0})
	DMember(float)                                     Shield_Damage_Wave_Animation                                OFFSET(get<float>, {0x1DA8, 4, 0, 0})
	DMember(float)                                     Overall_Shield_Damage_Wave_Animation_Length                 OFFSET(get<float>, {0x1DAC, 4, 0, 0})
	DMember(float)                                     Ripple_Damage_Amount_size                                   OFFSET(get<float>, {0x1DB0, 4, 0, 0})
	DMember(bool)                                      Dying                                                       OFFSET(get<bool>, {0x1DB4, 1, 0, 0})
	DMember(bool)                                      CanRippleAgain                                              OFFSET(get<bool>, {0x1DB5, 1, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_Impact                                         OFFSET(get<T>, {0x1DB8, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_Destroyed                                      OFFSET(get<T>, {0x1DC0, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_FullyCharged                                   OFFSET(get<T>, {0x1DC8, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_StartRecharge                                  OFFSET(get<T>, {0x1DD0, 8, 0, 0})
	DMember(float)                                     Shield_Shatter_Opacity                                      OFFSET(get<float>, {0x1DD8, 4, 0, 0})
	DMember(float)                                     Regen_Opacity                                               OFFSET(get<float>, {0x1DDC, 4, 0, 0})
	DMember(float)                                     Damage_Opacity                                              OFFSET(get<float>, {0x1DE0, 4, 0, 0})
	DMember(float)                                     Default_Shield_opacity                                      OFFSET(get<float>, {0x1DE4, 4, 0, 0})
	DMember(float)                                     Shield_PushMinValue                                         OFFSET(get<float>, {0x1DE8, 4, 0, 0})
	DMember(bool)                                      ShieldVisible_Hit                                           OFFSET(get<bool>, {0x1DEC, 1, 0, 0})
	DMember(bool)                                      ShieldVisible_Recover                                       OFFSET(get<bool>, {0x1DED, 1, 0, 0})
	DMember(bool)                                      ShieldVisible_Shatter                                       OFFSET(get<bool>, {0x1DEE, 1, 0, 0})
	DMember(bool)                                      ShieldVisible_FullHealth                                    OFFSET(get<bool>, {0x1DEF, 1, 0, 0})
	DMember(float)                                     Fully_Regened_Shield_health_Opacity                         OFFSET(get<float>, {0x1DF0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_GameplayCueDamageShielded                                OFFSET(getStruct<T>, {0x1DF8, 32, 0, 0})
	DMember(bool)                                      LatestDamageIsShieldDamage                                  OFFSET(get<bool>, {0x1E18, 1, 0, 0})
	DMember(float)                                     Damage_Taken                                                OFFSET(get<float>, {0x1E1C, 4, 0, 0})
	DMember(float)                                     Last_Shield_Damage_Time                                     OFFSET(get<float>, {0x1E20, 4, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         CharmShieldMIDArray                                         OFFSET(get<T>, {0x1E28, 16, 0, 0})
	DMember(bool)                                      BodyValid                                                   OFFSET(get<bool>, {0x1E38, 1, 0, 0})
	DMember(bool)                                      BackpackValid                                               OFFSET(get<bool>, {0x1E39, 1, 0, 0})
	DMember(bool)                                      HatValid                                                    OFFSET(get<bool>, {0x1E3A, 1, 0, 0})
	DMember(bool)                                      FaceValid                                                   OFFSET(get<bool>, {0x1E3B, 1, 0, 0})
	DMember(bool)                                      CharmValid                                                  OFFSET(get<bool>, {0x1E3C, 1, 0, 0})
	DMember(bool)                                      HeadValid                                                   OFFSET(get<bool>, {0x1E3D, 1, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         AdrenalineRush_CharmAnimatingMIDS                           OFFSET(get<T>, {0x1E40, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         Adrenaline_Rush_MID_Collection                              OFFSET(get<T>, {0x1E50, 16, 0, 0})
	CMember(UParticleSystem*)                          P_DBNOResurrect                                             OFFSET(get<T>, {0x1E60, 8, 0, 0})
	CMember(USoundBase*)                               DBNOResurrectSound                                          OFFSET(get<T>, {0x1E68, 8, 0, 0})
	DMember(bool)                                      On_Player_Built_Floor                                       OFFSET(get<bool>, {0x1E70, 1, 0, 0})
	SMember(FGameplayTag)                              Event_NeedRoadsActive                                       OFFSET(getStruct<T>, {0x1E78, 8, 0, 0})
	SMember(FGameplayTag)                              Event_NeedRoadsDeactive                                     OFFSET(getStruct<T>, {0x1E80, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_WhereWereGoingWeNeedRoads                                OFFSET(getStruct<T>, {0x1E88, 32, 0, 0})
	CMember(UParticleSystem*)                          Effect_Player_LandedDust                                    OFFSET(get<T>, {0x1EA8, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         TempArray                                                   OFFSET(get<T>, {0x1EB0, 16, 0, 0})
	CMember(USkeletalMeshComponent*)                   Shield_BodySkeletalMesh                                     OFFSET(get<T>, {0x1EC0, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Shield_HeadSkeletalMesh                                     OFFSET(get<T>, {0x1EC8, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Shield_CharmSkeletalMesh                                    OFFSET(get<T>, {0x1ED0, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Adrenaline_Rush_Body                                        OFFSET(get<T>, {0x1ED8, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Adrenaline_Rush_Head                                        OFFSET(get<T>, {0x1EE0, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   Adrenaline_Rush_Charm                                       OFFSET(get<T>, {0x1EE8, 8, 0, 0})
	CMember(USceneComponent*)                          Sound_Player_Hit                                            OFFSET(get<T>, {0x1EF0, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     DamageForceFeedback                                         OFFSET(get<T>, {0x1EF8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 DBNOParticles                                               OFFSET(get<T>, {0x1F00, 8, 0, 0})
	CMember(UParticleSystem*)                          Effect_Player_Landed_WindVector_P                           OFFSET(get<T>, {0x1F08, 8, 0, 0})
	CMember(UClass*)                                   SpeechBubbleWidgetClass                                     OFFSET(get<T>, {0x1F10, 8, 0, 0})
	SMember(FText)                                     LastSpeechText                                              OFFSET(getStruct<T>, {0x1F18, 24, 0, 0})
	CMember(UClass*)                                   DamageCameraShake                                           OFFSET(get<T>, {0x1F30, 8, 0, 0})
	DMember(bool)                                      UseAnimTrailsNotifies                                       OFFSET(get<bool>, {0x1F38, 1, 0, 0})
	SMember(FHitResult)                                WaterTraceHitLocation                                       OFFSET(getStruct<T>, {0x1F40, 136, 0, 0})
	SMember(FVector)                                   StableVelocityVector                                        OFFSET(getStruct<T>, {0x1FC8, 12, 0, 0})
	CMember(UParticleSystem*)                          PlayerRunTemplate_Ground                                    OFFSET(get<T>, {0x1FD8, 8, 0, 0})
	CMember(UParticleSystem*)                          PlayerWalkTemplate_Ground                                   OFFSET(get<T>, {0x1FE0, 8, 0, 0})
	CMember(UParticleSystem*)                          PlayerRunTemplate_Water                                     OFFSET(get<T>, {0x1FE8, 8, 0, 0})
	CMember(UParticleSystem*)                          PlayerWalkTemplate_Water                                    OFFSET(get<T>, {0x1FF0, 8, 0, 0})
	CMember(USkeletalMesh*)                            Pawn_Charm_Skeletal_Mesh                                    OFFSET(get<T>, {0x1FF8, 8, 0, 0})
	DMember(float)                                     DefaultShieldOpacity                                        OFFSET(get<float>, {0x2000, 4, 0, 0})
	CMember(UParticleSystemComponent*)                 AnimTrailsPS_Ref                                            OFFSET(get<T>, {0x2008, 8, 0, 0})
	SMember(FLinearColor)                              Adrenaline_Rush_Color_Outer_Periodic                        OFFSET(getStruct<T>, {0x2010, 16, 0, 0})
	CMember(UMaterialInterface*)                       WeaponMaterialOverride                                      OFFSET(get<T>, {0x2020, 8, 0, 0})
	SMember(FLinearColor)                              Adrenaline_Rush_Color_Inner_Periodic                        OFFSET(getStruct<T>, {0x2028, 16, 0, 0})
	DMember(bool)                                      TickWaterLevel                                              OFFSET(get<bool>, {0x2038, 1, 0, 0})
	CMember(UTextureRenderTarget2D*)                   WetnessDepthTexture                                         OFFSET(get<T>, {0x2040, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 WaterLevelMID                                               OFFSET(get<T>, {0x2048, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 WaterDecayMID                                               OFFSET(get<T>, {0x2050, 8, 0, 0})
	DMember(bool)                                      Was_RTT_Enabled_Var_Set                                     OFFSET(get<bool>, {0x2058, 1, 0, 0})
	DMember(bool)                                      Is_the_Wind_Water_Scene_Capture_Enabled                     OFFSET(get<bool>, {0x2059, 1, 0, 0})
	DMember(float)                                     StartingMinCapsuleShadowVis                                 OFFSET(get<float>, {0x205C, 4, 0, 0})
	CMember(AActor*)                                   CachedEffect                                                OFFSET(get<T>, {0x2060, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         WaterInteractionWakeMIDS                                    OFFSET(get<T>, {0x2068, 16, 0, 0})
	CMember(TArray<UStaticMeshComponent*>)             WaterInteractionWakeMeshes                                  OFFSET(get<T>, {0x2078, 16, 0, 0})
	DMember(float)                                     Character_Calve_Length                                      OFFSET(get<float>, {0x2088, 4, 0, 0})
	DMember(int32_t)                                   NumberOfCyclingWaterMeshes                                  OFFSET(get<int32_t>, {0x208C, 4, 0, 0})
	SMember(FLinearColor)                              WaterTraceImpactNormalAndZHeightLocation                    OFFSET(getStruct<T>, {0x2090, 16, 0, 0})
	SMember(FVector)                                   PlayerVelocity                                              OFFSET(getStruct<T>, {0x20A0, 12, 0, 0})
	DMember(bool)                                      EnableRunWalkWaterGroundFX                                  OFFSET(get<bool>, {0x20AC, 1, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Melee_Effect_Color
	// void Melee_Effect_Color(FVector& Melee_Color_Set);                                                                       // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.TriggerGameplayWindEmitter
	// void TriggerGameplayWindEmitter(TEnumAsByte<PlayerWindParticleEmitters> Player Wind Particle Emitter To Fire);           // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Are the wind and water RTT passes enabled
	// void Are the wind and water RTT passes enabled(bool& NewParam);                                                          // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.DisableWaterLevelTick
	// void DisableWaterLevelTick();                                                                                            // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SetAdrenalineRushVisibility
	// void SetAdrenalineRushVisibility(bool Visible);                                                                          // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_On_Player_Built_Floor
	// void OnRep_On_Player_Built_Floor();                                                                                      // [0x154a140] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Setup FX Mesh Duplicates
	// void Setup FX Mesh Duplicates(UMaterialInterface*& Material to Apply, TArray<UMaterialInstanceDynamic*>& Charm MID Array, USkeletalMeshComponent*& Charm Mesh, TArray<UMaterialInstanceDynamic*>& Head MID Array, USkeletalMeshComponent*& Head Mesh, TArray<UMaterialInstanceDynamic*>& Body MID Array, USkeletalMeshComponent*& Body Mesh, int32_t Translucent Sort Order, bool Transfer Material Parameters); // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh
	// void Create and Duplicate Effect Poseable Skeletal Mesh(TEnumAsByte<EFortCustomPartType> BodyType, UMaterialInterface* Material to Apply, TArray<UMaterialInstanceDynamic*>& Empty MID Array, int32_t TranslucentSortPriority, UPoseableMeshComponent*& PoseableMesh); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleShieldVisibility
	// void ToggleShieldVisibility();                                                                                           // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SlaveAMeshToTheBody
	// void SlaveAMeshToTheBody(USkeletalMeshComponent* Mesh, USkeletalMeshComponent* Master);                                  // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids_InternalLoop
	// void SetShieldMids_InternalLoop(float Highlight Cracks, bool Set Highlight Cracks, float Push, bool Set Push, TArray<UMaterialInstanceDynamic*>& NewParam1); // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids
	// void SetShieldMids(float Highlight Cracks, bool Set Highlight Cracks, float Push, bool Set Push);                        // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.FindShieldOpacity
	// void FindShieldOpacity();                                                                                                // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent
	// void Create and Duplicate Effect Skeletal Meshes Parent(TEnumAsByte<EFortCustomPartType> BodyType, USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, UMaterialInterface* Material to Apply, TArray<UMaterialInstanceDynamic*>& Empty MID Array, int32_t TranslucentSortPriority); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.CapsuleFadeTL__FinishedFunc
	// void CapsuleFadeTL__FinishedFunc();                                                                                      // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.CapsuleFadeTL__UpdateFunc
	// void CapsuleFadeTL__UpdateFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__FinishedFunc
	// void HealthSweep__FinishedFunc();                                                                                        // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.HealthSweep__UpdateFunc
	// void HealthSweep__UpdateFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__FinishedFunc
	// void Shield Regen Timeline__FinishedFunc();                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Shield Regen Timeline__UpdateFunc
	// void Shield Regen Timeline__UpdateFunc();                                                                                // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__FinishedFunc
	// void Shield_ShatterTimeline__FinishedFunc();                                                                             // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_ShatterTimeline__UpdateFunc
	// void Shield_ShatterTimeline__UpdateFunc();                                                                               // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__FinishedFunc
	// void Shield_DamageTimeline__FinishedFunc();                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Shield_DamageTimeline__UpdateFunc
	// void Shield_DamageTimeline__UpdateFunc();                                                                                // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__FinishedFunc
	// void Full Shield Health__FinishedFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Full Shield Health__UpdateFunc
	// void Full Shield Health__UpdateFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight
	// void MeleeSwingRight();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft
	// void MeleeSwingLeft();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnDamagePlayEffects
	// void OnDamagePlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnLanded
	// void OnLanded(FHitResult& Hit);                                                                                          // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathPlayEffects
	// void OnDeathPlayEffects(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AFortPawn* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x154a140] BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnWeaponEquipped
	// void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);                                                  // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepLeft
	// void FootStepLeft();                                                                                                     // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepRight
	// void FootStepRight();                                                                                                    // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnCharacterPartsReinitialized
	// void OnCharacterPartsReinitialized();                                                                                    // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
	// void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
	// void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SetFirstPersonCamera
	// void SetFirstPersonCamera(bool bNewUseFirstPersonCamera);                                                                // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.InternalSetFirstPersonCamera
	// void InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.DBNOResurrect
	// void GameplayCue.Abilities.Activation.DBNOResurrect(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnBaseChanged
	// void OnBaseChanged(AActor* NewBase);                                                                                     // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ReceivePossessed
	// void ReceivePossessed(AController* NewController);                                                                       // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnDisplaySentence
	// void OnDisplaySentence(FText& SpeechText);                                                                               // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnClearSentence
	// void OnClearSentence();                                                                                                  // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ClientBindWeaponSwap
	// void ClientBindWeaponSwap(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.BindWeaponSwap
	// void BindWeaponSwap(float InDuration);                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.MultiSwapWeapon
	// void MultiSwapWeapon(AFortWeapon* New, AFortWeapon* Prev);                                                               // [0x154a140] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.UnBindWeaponSwap
	// void UnBindWeaponSwap();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.MultiEndSwap
	// void MultiEndSwap(AFortWeapon* CurrentWeapon);                                                                           // [0x154a140] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Clean up DBNO fx
	// void Clean up DBNO fx();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathServer
	// void OnDeathServer(float Damage, FGameplayTagContainer& DamageTags, FVector Momentum, FHitResult& HitInfo, AController* InstigatedBy, AActor* DamageCauser, FGameplayEffectContextHandle EffectContext); // [0x154a140] BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.CharacterDestroyed
	// void CharacterDestroyed(AActor* DestroyedActor);                                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.BindOnDestroyed
	// void BindOnDestroyed();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.FadeOutCapsuleShadow
	// void FadeOutCapsuleShadow();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.SpawnDBNOParticles
	// void SpawnDBNOParticles(FVector ParticleLocation, FVector HitNormal);                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.PlayGameplayWindEffect
	// void PlayGameplayWindEffect(TEnumAsByte<PlayerWindParticleEmitters> Player Wind Particle Emitter To Fire);               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Death.FadeCapsule_StW
	// void GameplayCue.Abilities.Death.FadeCapsule_StW(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Exited/Entered Water Volume
	// void Exited/Entered Water Volume();                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Player Creates a Splash
	// void Player Creates a Splash(FTransform& NewTransform);                                                                  // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.OnLand_CE
	// void OnLand_CE();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.Test Adrenaline Rush
	// void Test Adrenaline Rush();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Generic.AdrenalineRush.DirectHeal
	// void GameplayCue.Generic.AdrenalineRush.DirectHeal(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage.Shielded
	// void GameplayCue.Damage.Shielded(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters);           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Destroyed
	// void GameplayCue.Shield.Destroyed(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters);          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.FullyCharged
	// void GameplayCue.Shield.FullyCharged(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters);       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Reapplied
	// void GameplayCue.Shield.Reapplied(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters);          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsSetup
	// void AnimTrailsSetup(UParticleSystem* ParticleSystemReference, FName FirstSocketName, FName SecondSocketName, float Width); // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsDisable
	// void AnimTrailsDisable();                                                                                                // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsNotify
	// void AnimTrailsNotify(bool bActive);                                                                                     // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Generic.PlayerPawn_Generic_C.ExecuteUbergraph_PlayerPawn_Generic
	// void ExecuteUbergraph_PlayerPawn_Generic(int32_t EntryPoint);                                                            // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C
/// Size: 0x0153 (0x0020AD - 0x002200)
class APlayerPawn_Ninja_C : public APlayerPawn_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8704;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x20B0, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   ShadowStanceFaceComponent                                   OFFSET(get<T>, {0x20B8, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   ShadowStanceCharmComponent                                  OFFSET(get<T>, {0x20C0, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   ShadowStanceBackpackComponent                               OFFSET(get<T>, {0x20C8, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   ShadowStanceHatComponent                                    OFFSET(get<T>, {0x20D0, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   ShadowStanceHeadComponent                                   OFFSET(get<T>, {0x20D8, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   ShadowStanceBodyComponent                                   OFFSET(get<T>, {0x20E0, 8, 0, 0})
	CMember(USphereComponent*)                         DragonSlashImpact                                           OFFSET(get<T>, {0x20E8, 8, 0, 0})
	DMember(float)                                     Animate_Ninja_ShadowStance_Dissolve_Inverse_Translucent_Shader_Opacity_1E481F634B18DA79A1B2FDBCB1091D62 OFFSET(get<float>, {0x20F0, 4, 0, 0})
	DMember(float)                                     Animate_Ninja_ShadowStance_Dissolve_NinjaDissolve_1E481F634B18DA79A1B2FDBCB1091D62 OFFSET(get<float>, {0x20F4, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Animate_Ninja_ShadowStance_Dissolve__Direction_1E481F634B18DA79A1B2FDBCB1091D62 OFFSET(get<T>, {0x20F8, 1, 0, 0})
	CMember(UTimelineComponent*)                       Animate_Ninja_ShadowStance_Dissolve                         OFFSET(get<T>, {0x2100, 8, 0, 0})
	CMember(UMaterialInterface*)                       MI_ShadowStanceDissolve                                     OFFSET(get<T>, {0x2108, 8, 0, 0})
	DMember(bool)                                      TestMacros                                                  OFFSET(get<bool>, {0x2110, 1, 0, 0})
	DMember(bool)                                      DimMakActive                                                OFFSET(get<bool>, {0x2111, 1, 0, 0})
	DMember(bool)                                      Shadow_Stance_Active                                        OFFSET(get<bool>, {0x2112, 1, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MID_ShadowStanceDissolveArray                               OFFSET(get<T>, {0x2118, 16, 0, 0})
	CMember(UMaterialInterface*)                       MI_Shadow_Stance_Translucent_Shader                         OFFSET(get<T>, {0x2128, 8, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MID_ShadowStanceTranslucentArray_Body                       OFFSET(get<T>, {0x2130, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MID_ShadowStanceTranslucentArray_Head                       OFFSET(get<T>, {0x2140, 16, 0, 0})
	DMember(float)                                     ShadowStanceVisibility                                      OFFSET(get<float>, {0x2150, 4, 0, 0})
	CMember(UMaterialInterface*)                       MI_Shadow_Stance_Translucent_Shader_Enemy_View              OFFSET(get<T>, {0x2158, 8, 0, 0})
	CMember(UMaterialInterface*)                       Shadow_Stance_Material                                      OFFSET(get<T>, {0x2160, 8, 0, 0})
	DMember(bool)                                      DragonSlashActive                                           OFFSET(get<bool>, {0x2168, 1, 0, 0})
	DMember(bool)                                      WeaponsShadowStanceReversed                                 OFFSET(get<bool>, {0x2169, 1, 0, 0})
	CMember(UClass*)                                   GE_AssassinationStacks                                      OFFSET(get<T>, {0x2170, 8, 0, 0})
	CMember(ABP_SplineVolumeTrail_v1b_C*)              TOTD_SplineBP                                               OFFSET(get<T>, {0x2178, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 NinjaStarTrail                                              OFFSET(get<T>, {0x2180, 8, 0, 0})
	DMember(bool)                                      NinjaStarsPiercing                                          OFFSET(get<bool>, {0x2188, 1, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MID_ShadowStanceTranslucentArray_Hat                        OFFSET(get<T>, {0x2190, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MID_ShadowStanceTranslucentArray_Face                       OFFSET(get<T>, {0x21A0, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MID_ShadowStanceTranslucentArray_Charm                      OFFSET(get<T>, {0x21B0, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MID_ShadowStanceTranslucentArray_Backpack                   OFFSET(get<T>, {0x21C0, 16, 0, 0})
	CMember(TArray<UMaterialInstanceDynamic*>)         MasterMIDShadowStanceTranslucentArray                       OFFSET(get<T>, {0x21D0, 16, 0, 0})
	CMember(TArray<USkeletalMeshComponent*>)           Master_Shadow_Stance_Component_Array                        OFFSET(get<T>, {0x21E0, 16, 0, 0})
	CMember(UObject*)                                  SK_DragonSlashSword                                         OFFSET(get<T>, {0x21F0, 8, 0, 0})
	CMember(UClass*)                                   GE_EnableMantisLeap                                         OFFSET(get<T>, {0x21F8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetupShadowMeshAssetsAndMaterials
	// void SetupShadowMeshAssetsAndMaterials(TEnumAsByte<EFortCustomPartType> PartType, USkeletalMeshComponent*& Shadow Mesh Component, TArray<UMaterialInterface*>& Character Body Part MID Array, TArray<UMaterialInstanceDynamic*>& Empty Translucent Shadow Stance Output MID Array, bool& Set); // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.CreateAndAttachDuplicateEffectSkeletalMeshes
	// void CreateAndAttachDuplicateEffectSkeletalMeshes(TEnumAsByte<EFortCustomPartType> BodyType, USkeletalMeshComponent*& DuplicatedSkeletalMeshComponent, UMaterialInterface* Material to Apply, TArray<UMaterialInstanceDynamic*>& Empty MID Array, int32_t TranslucentSortPriority); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__FinishedFunc
	// void Animate Ninja ShadowStance Dissolve__FinishedFunc();                                                                // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.Animate Ninja ShadowStance Dissolve__UpdateFunc
	// void Animate Ninja ShadowStance Dissolve__UpdateFunc();                                                                  // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Ninja.ShadowStance
	// void GameplayCue.Abilities.Activation.Ninja.ShadowStance(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Ninja.DimMak.ActiveFX
	// void GameplayCue.Ninja.DimMak.ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters);     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnWeaponEquipped
	// void OnWeaponEquipped(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);                                                  // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.UpdateWeaponShadowStance
	// void UpdateWeaponShadowStance();                                                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.DragonSlashActivatedOrDeactivated
	// void DragonSlashActivatedOrDeactivated(bool Active?);                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.Toggle Shadow Stance
	// void Toggle Shadow Stance();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnCharacterPartsReinitialized
	// void OnCharacterPartsReinitialized();                                                                                    // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
	// void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
	// void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetMenuScreenClassName
	// void SetMenuScreenClassName();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.NinjaStarTrails_On
	// void NinjaStarTrails_On();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.NinjaStarTrails_Off
	// void NinjaStarTrails_Off();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.SetPiercingForFX
	// void SetPiercingForFX(bool NewPierceValue);                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnLanded
	// void OnLanded(FHitResult& Hit);                                                                                          // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.StopEmittingNewSplines
	// void StopEmittingNewSplines();                                                                                           // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.OnTeleportedClient
	// void OnTeleportedClient();                                                                                               // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonEnd
	// void TailOfDragonEnd();                                                                                                  // [0x154a140] Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.TailOfDragonStart
	// void TailOfDragonStart(float AoeCloudTimeToLive, float MontageLength);                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Ninja.PlayerPawn_Ninja_C.ExecuteUbergraph_PlayerPawn_Ninja
	// void ExecuteUbergraph_PlayerPawn_Ninja(int32_t EntryPoint);                                                              // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C
/// Size: 0x010B (0x0020AD - 0x0021B8)
class APlayerPawn_Constructor_C : public APlayerPawn_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 8632;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x20B0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     ServerShieldMesh                                            OFFSET(get<T>, {0x20B8, 8, 0, 0})
	CMember(UBoxComponent*)                            ShieldCollider                                              OFFSET(get<T>, {0x20C0, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     ShieldMesh                                                  OFFSET(get<T>, {0x20C8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 IFFShield_Light                                             OFFSET(get<T>, {0x20D0, 8, 0, 0})
	CMember(UBoxComponent*)                            BullRushPoke                                                OFFSET(get<T>, {0x20D8, 8, 0, 0})
	DMember(float)                                     TakeDamageTimeline_LineBrightness_E993138E4A26ED909055A89FDA7BCA47 OFFSET(get<float>, {0x20E0, 4, 0, 0})
	DMember(float)                                     TakeDamageTimeline_DamageFlash_E993138E4A26ED909055A89FDA7BCA47 OFFSET(get<float>, {0x20E4, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           TakeDamageTimeline__Direction_E993138E4A26ED909055A89FDA7BCA47 OFFSET(get<T>, {0x20E8, 1, 0, 0})
	CMember(UTimelineComponent*)                       TakeDamageTimeline                                          OFFSET(get<T>, {0x20F0, 8, 0, 0})
	CMember(UParticleSystem*)                          P_Activate                                                  OFFSET(get<T>, {0x20F8, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   ShieldPlayerMesh                                            OFFSET(get<T>, {0x2100, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_IFF_ShieldFlicker                                       OFFSET(get<T>, {0x2108, 8, 0, 0})
	SMember(FName)                                     DamageFlash                                                 OFFSET(getStruct<T>, {0x2110, 8, 0, 0})
	SMember(FName)                                     LineBrightness                                              OFFSET(getStruct<T>, {0x2118, 8, 0, 0})
	CMember(UParticleSystem*)                          P_TIABExplosion                                             OFFSET(get<T>, {0x2120, 8, 0, 0})
	CMember(USoundBase*)                               Sound_TIAB                                                  OFFSET(get<T>, {0x2128, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Kinetic_Overload                                      OFFSET(get<T>, {0x2130, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_Start                                          OFFSET(get<T>, {0x2138, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_Stop                                           OFFSET(get<T>, {0x2140, 8, 0, 0})
	CMember(USoundBase*)                               Sound_Shield_Impact                                         OFFSET(get<T>, {0x2148, 8, 0, 0})
	SMember(FVector)                                   Finalized_IFF_BackPack_Offset                               OFFSET(getStruct<T>, {0x2150, 12, 0, 0})
	SMember(FVector)                                   IFF_Local_Offset_Without_Backpack                           OFFSET(getStruct<T>, {0x215C, 12, 0, 0})
	SMember(FVector)                                   IFF_Local_Offset_With_Back_Pack                             OFFSET(getStruct<T>, {0x2168, 12, 0, 0})
	CMember(UMulticastDelegate)                        PlayArmAnim                                                 OFFSET(get<T>, {0x2178, 16, 0, 0})
	CMember(TArray<UPrimitiveComponent*>)              AllIFFMeshes                                                OFFSET(get<T>, {0x2188, 16, 0, 0})
	CMember(UMaterialInterface*)                       IFFMaterialParent                                           OFFSET(get<T>, {0x2198, 8, 0, 0})
	CMember(TArray<FIFFBoneConfig>)                    IFFBoneConfigs                                              OFFSET(get<T>, {0x21A0, 16, 0, 0})
	CMember(AB_Constructor_BASE_C*)                    SavedBase                                                   OFFSET(get<T>, {0x21B0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.OnRep_SavedBase
	// void OnRep_SavedBase();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetIFFMeshesEnabled
	// void SetIFFMeshesEnabled(bool IsEnabled);                                                                                // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.TakeDamageTimeline__FinishedFunc
	// void TakeDamageTimeline__FinishedFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.TakeDamageTimeline__UpdateFunc
	// void TakeDamageTimeline__UpdateFunc();                                                                                   // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Damage
	// void GameplayCue.Damage(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters);                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.ToInfinityAndBeyond.ActiveFX
	// void GameplayCue.Constructor.ToInfinityAndBeyond.ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.KineticOverload.ActiveFX
	// void GameplayCue.Constructor.KineticOverload.ActiveFX(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Constructor.PlasmaPulse.IFFCoding
	// void GameplayCue.Constructor.PlasmaPulse.IFFCoding(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.testIFF
	// void testIFF();                                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.OnCharacterPartsReinitialized
	// void OnCharacterPartsReinitialized();                                                                                    // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1
	// void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2
	// void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2(TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters Parameters); // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.PlayArm
	// void PlayArm();                                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.testEndIFF
	// void testEndIFF();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetMenuScreenClassName
	// void SetMenuScreenClassName();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.MultiToggleShield
	// void MultiToggleShield(bool Toggle);                                                                                     // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.ToggleShield
	// void ToggleShield(bool Toggle);                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.SetBase
	// void SetBase(AB_Constructor_BASE_C* SavedBase);                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.ExecuteUbergraph_PlayerPawn_Constructor
	// void ExecuteUbergraph_PlayerPawn_Constructor(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
	// Function /Game/Abilities/Player/Pawns/PlayerPawn_Constructor.PlayerPawn_Constructor_C.PlayArmAnim__DelegateSignature
	// void PlayArmAnim__DelegateSignature();                                                                                   // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/CommandConsole/CCTeamStatsGameplayEffect.CCTeamStatsGameplayEffect_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UCCTeamStatsGameplayEffect_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/B_FortGlobalAbilityTargetingActor.B_FortGlobalAbilityTargetingActor_C
/// Size: 0x0000 (0x000318 - 0x000318)
class AB_FortGlobalAbilityTargetingActor_C : public AFortGlobalAbilityTargetingActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 792;

public:
};

/// Class /Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_TrapDurability_High.SetBonus_TrapDurability_High_C
/// Size: 0x0000 (0x000670 - 0x000670)
class USetBonus_TrapDurability_High_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_TrapDamage_Low.SetBonus_TrapDamage_Low_C
/// Size: 0x0000 (0x000670 - 0x000670)
class USetBonus_TrapDamage_Low_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_ShieldRegen_Low.SetBonus_ShieldRegen_Low_C
/// Size: 0x0000 (0x000670 - 0x000670)
class USetBonus_ShieldRegen_Low_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_RangedDamage_Low.SetBonus_RangedDamage_Low_C
/// Size: 0x0000 (0x000670 - 0x000670)
class USetBonus_RangedDamage_Low_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_MeleeDamage_Low.SetBonus_MeleeDamage_Low_C
/// Size: 0x0000 (0x000670 - 0x000670)
class USetBonus_MeleeDamage_Low_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_MaxShield_High.SetBonus_MaxShield_High_C
/// Size: 0x0000 (0x000670 - 0x000670)
class USetBonus_MaxShield_High_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_MaxHealth_High.SetBonus_MaxHealth_High_C
/// Size: 0x0000 (0x000670 - 0x000670)
class USetBonus_MaxHealth_High_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Homebase/Personnel/SetBonuses/SetBonus_AbilityDamage_Low.SetBonus_AbilityDamage_Low_C
/// Size: 0x0000 (0x000670 - 0x000670)
class USetBonus_AbilityDamage_Low_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Homebase/GE_Homebase_CombinedRatings.GE_Homebase_CombinedRatings_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Homebase_CombinedRatings_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Ninja/TacticalPerks/BloodyBull/GE_Ninja_Tactical_BloodyBull_Applied.GE_Ninja_Tactical_BloodyBull_Applied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Ninja_Tactical_BloodyBull_Applied_C : public UGET_PeriodicPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/ElectrifiedFloors/GE_Constructor_ElectrifiedFloorsDamage.GE_Constructor_ElectrifiedFloorsDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_ElectrifiedFloorsDamage_C : public UGET_PeriodicEnergyDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Actives/BullRush/GE_Constructor_Disarm.GE_Constructor_Disarm_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_Disarm_C : public UGET_Stun_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Taker/GE_TakerSoulSuckRelease.GE_TakerSoulSuckRelease_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TakerSoulSuckRelease_C : public UGET_Stun_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Taker/GE_TakerSoulSuckAttack.GE_TakerSoulSuckAttack_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TakerSoulSuckAttack_C : public UGET_Stun_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_DBNOResurrectStun.GE_DBNOResurrectStun_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_DBNOResurrectStun_C : public UGET_Stun_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_TransferKnockback.GE_TransferKnockback_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TransferKnockback_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C
/// Size: 0x00E0 (0x000AC0 - 0x000BA0)
class UGAB_GenericApplyKnockback_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(UClass*)                                   GE_TransferKnockback                                        OFFSET(get<T>, {0xAC8, 8, 0, 0})
	CMember(UClass*)                                   GE_KnockbackActive                                          OFFSET(get<T>, {0xAD0, 8, 0, 0})
	DMember(float)                                     KnockbackPropagationThreshold                               OFFSET(get<float>, {0xAD8, 4, 0, 0})
	CMember(UAnimMontage*)                             KnockbackUpMontage                                          OFFSET(get<T>, {0xAE0, 8, 0, 0})
	SMember(FName)                                     KnockbackUpMontageSection                                   OFFSET(getStruct<T>, {0xAE8, 8, 0, 0})
	CMember(UAnimMontage*)                             KnockbackDownMontage                                        OFFSET(get<T>, {0xAF0, 8, 0, 0})
	SMember(FName)                                     KnockbackDownMontageSection                                 OFFSET(getStruct<T>, {0xAF8, 8, 0, 0})
	CMember(UAnimMontage*)                             KnockbackLandMontage                                        OFFSET(get<T>, {0xB00, 8, 0, 0})
	SMember(FName)                                     KnockbackLandMontageSection                                 OFFSET(getStruct<T>, {0xB08, 8, 0, 0})
	CMember(UAnimMontage*)                             KnockbackLandToIdleMontage                                  OFFSET(get<T>, {0xB10, 8, 0, 0})
	SMember(FName)                                     KnockbackLandToIdleMontageSection                           OFFSET(getStruct<T>, {0xB18, 8, 0, 0})
	CMember(UAnimMontage*)                             KnockbackLandToStunMontage                                  OFFSET(get<T>, {0xB20, 8, 0, 0})
	SMember(FName)                                     KnockbackLandToStunMontageSection                           OFFSET(getStruct<T>, {0xB28, 8, 0, 0})
	DMember(bool)                                      DebugDraw                                                   OFFSET(get<bool>, {0xB30, 1, 0, 0})
	DMember(bool)                                      DebugNumbers                                                OFFSET(get<bool>, {0xB31, 1, 0, 0})
	DMember(bool)                                      DebugForceKnockbackValues                                   OFFSET(get<bool>, {0xB32, 1, 0, 0})
	DMember(bool)                                      bOrientToImpulse                                            OFFSET(get<bool>, {0xB33, 1, 0, 0})
	SMember(FActiveGameplayEffectHandle)               ActiveKnockback                                             OFFSET(getStruct<T>, {0xB34, 8, 0, 0})
	SMember(FVector)                                   OrientDirection                                             OFFSET(getStruct<T>, {0xB3C, 12, 0, 0})
	SMember(FVector)                                   HitDirection                                                OFFSET(getStruct<T>, {0xB48, 12, 0, 0})
	SMember(FVector)                                   ImpulseDirectionVelocityOrRotation                          OFFSET(getStruct<T>, {0xB54, 12, 0, 0})
	SMember(FVector)                                   DebugLastLocation                                           OFFSET(getStruct<T>, {0xB60, 12, 0, 0})
	SMember(FGameplayTag)                              TC_NPCStatusLockedInPlace                                   OFFSET(getStruct<T>, {0xB70, 8, 0, 0})
	DMember(float)                                     LockedInPlaceKnockbackAngle                                 OFFSET(get<float>, {0xB78, 4, 0, 0})
	DMember(float)                                     LockedInPlaceKnockbackMagnitude                             OFFSET(get<float>, {0xB7C, 4, 0, 0})
	CMember(UClass*)                                   GE_RestoreControlResistance                                 OFFSET(get<T>, {0xB80, 8, 0, 0})
	CMember(UClass*)                                   GE_ImpactImmunity                                           OFFSET(get<T>, {0xB88, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               ActiveImpactImmunity                                        OFFSET(getStruct<T>, {0xB90, 8, 0, 0})
	DMember(bool)                                      bHasImpactImmunity                                          OFFSET(get<bool>, {0xB98, 1, 0, 0})
	DMember(float)                                     F_OneFrameDelay                                             OFFSET(get<float>, {0xB9C, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DoesUseInstagorInsteadOfImpulseDirection
	// void DoesUseInstagorInsteadOfImpulseDirection(FGameplayEffectContextHandle EffectContext, UObject* OptionalObject, bool& Value); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.GetPawnFromInstigator
	// void GetPawnFromInstigator(AActor* InActor, AFortPlayerPawn*& OutPawn);                                                  // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CalculateImpulseDirection
	// FVector CalculateImpulseDirection(AFortPlayerPawn* InPawn);                                                              // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_D744890E4C485F1C80B3E7864AE506FF
	// void OnCancelled_D744890E4C485F1C80B3E7864AE506FF();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_D744890E4C485F1C80B3E7864AE506FF
	// void OnInterrupted_D744890E4C485F1C80B3E7864AE506FF();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_D744890E4C485F1C80B3E7864AE506FF
	// void OnBlendOut_D744890E4C485F1C80B3E7864AE506FF();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_D744890E4C485F1C80B3E7864AE506FF
	// void OnCompleted_D744890E4C485F1C80B3E7864AE506FF();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_1F181048470CEB2EB6CC648039C5913C
	// void OnCancelled_1F181048470CEB2EB6CC648039C5913C();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_1F181048470CEB2EB6CC648039C5913C
	// void OnInterrupted_1F181048470CEB2EB6CC648039C5913C();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_1F181048470CEB2EB6CC648039C5913C
	// void OnBlendOut_1F181048470CEB2EB6CC648039C5913C();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_1F181048470CEB2EB6CC648039C5913C
	// void OnCompleted_1F181048470CEB2EB6CC648039C5913C();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_BA9188C34C234A4C47306FA73AAF0583
	// void OnCancelled_BA9188C34C234A4C47306FA73AAF0583();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_BA9188C34C234A4C47306FA73AAF0583
	// void OnInterrupted_BA9188C34C234A4C47306FA73AAF0583();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_BA9188C34C234A4C47306FA73AAF0583
	// void OnBlendOut_BA9188C34C234A4C47306FA73AAF0583();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_BA9188C34C234A4C47306FA73AAF0583
	// void OnCompleted_BA9188C34C234A4C47306FA73AAF0583();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0
	// void OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0
	// void OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0
	// void OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0
	// void OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF
	// void OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF
	// void OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF
	// void OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF
	// void OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnReachedJumpApex
	// void OnReachedJumpApex();                                                                                                // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.SetupMontageSectionsAndOrientDirection
	// void SetupMontageSectionsAndOrientDirection();                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnPawnLanded
	// void OnPawnLanded(FHitResult& Hit);                                                                                      // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnHitPawn
	// void OnHitPawn(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, FHitResult& Hit);                           // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DebugLine
	// void DebugLine();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.ExecuteUbergraph_GAB_GenericApplyKnockback
	// void ExecuteUbergraph_GAB_GenericApplyKnockback(int32_t EntryPoint);                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Flinger/GAB_FlingerApplyKnockback.GAB_FlingerApplyKnockback_C
/// Size: 0x0000 (0x000BA0 - 0x000BA0)
class UGAB_FlingerApplyKnockback_C : public UGAB_GenericApplyKnockback_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherApplyKnockback.GAB_SmasherApplyKnockback_C
/// Size: 0x0000 (0x000BA0 - 0x000BA0)
class UGAB_SmasherApplyKnockback_C : public UGAB_GenericApplyKnockback_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
};

/// Class /Game/Abilities/NPC/Husk/Base/GAB_HuskApplyKnockback.GAB_HuskApplyKnockback_C
/// Size: 0x0000 (0x000BA0 - 0x000BA0)
class UGAB_HuskApplyKnockback_C : public UGAB_GenericApplyKnockback_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
};

/// Class /Game/Abilities/NPC/Taker/GAB_TakerApplyKnockback.GAB_TakerApplyKnockback_C
/// Size: 0x0000 (0x000BA0 - 0x000BA0)
class UGAB_TakerApplyKnockback_C : public UGAB_GenericApplyKnockback_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GE_DefaultPlayer_BuildTime.GE_DefaultPlayer_BuildTime_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_DefaultPlayer_BuildTime_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GE_DefaultPlayer_RepairTime.GE_DefaultPlayer_RepairTime_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_DefaultPlayer_RepairTime_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C
/// Size: 0x0190 (0x000AC0 - 0x000C50)
class UGAB_GenericDeath_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3152;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(UAnimMontage*)                             DeathMontage                                                OFFSET(get<T>, {0xAC8, 8, 0, 0})
	SMember(FName)                                     DeathMontageSectionName                                     OFFSET(getStruct<T>, {0xAD0, 8, 0, 0})
	SMember(FVector)                                   DeathHitDirection                                           OFFSET(getStruct<T>, {0xAD8, 12, 0, 0})
	SMember(FHitResult)                                DeathHitResult                                              OFFSET(getStruct<T>, {0xAE8, 136, 0, 0})
	SMember(FGameplayTagContainer)                     DamageTags                                                  OFFSET(getStruct<T>, {0xB70, 32, 0, 0})
	SMember(FGameplayTagContainer)                     SpawnDroneTags                                              OFFSET(getStruct<T>, {0xB90, 32, 0, 0})
	CMember(UAnimMontage*)                             Front                                                       OFFSET(get<T>, {0xBB0, 8, 0, 0})
	CMember(UAnimMontage*)                             Left                                                        OFFSET(get<T>, {0xBB8, 8, 0, 0})
	CMember(UAnimMontage*)                             Right                                                       OFFSET(get<T>, {0xBC0, 8, 0, 0})
	CMember(UAnimMontage*)                             Back                                                        OFFSET(get<T>, {0xBC8, 8, 0, 0})
	CMember(UAnimMontage*)                             Head_Front                                                  OFFSET(get<T>, {0xBD0, 8, 0, 0})
	CMember(UAnimMontage*)                             Head_Left                                                   OFFSET(get<T>, {0xBD8, 8, 0, 0})
	CMember(UAnimMontage*)                             Head_Right                                                  OFFSET(get<T>, {0xBE0, 8, 0, 0})
	CMember(UAnimMontage*)                             Head_Back                                                   OFFSET(get<T>, {0xBE8, 8, 0, 0})
	DMember(int32_t)                                   FrontSectionNameCount                                       OFFSET(get<int32_t>, {0xBF0, 4, 0, 0})
	DMember(int32_t)                                   LeftSectionNameCount                                        OFFSET(get<int32_t>, {0xBF4, 4, 0, 0})
	DMember(int32_t)                                   RightSectionNameCount                                       OFFSET(get<int32_t>, {0xBF8, 4, 0, 0})
	DMember(int32_t)                                   BackSectionNameCount                                        OFFSET(get<int32_t>, {0xBFC, 4, 0, 0})
	DMember(int32_t)                                   Head_FrontSectionNameCount                                  OFFSET(get<int32_t>, {0xC00, 4, 0, 0})
	DMember(int32_t)                                   Head_LeftSectionNameCount                                   OFFSET(get<int32_t>, {0xC04, 4, 0, 0})
	DMember(int32_t)                                   Head_RightSectionNameCount                                  OFFSET(get<int32_t>, {0xC08, 4, 0, 0})
	DMember(int32_t)                                   Head_BackSectionNameCount                                   OFFSET(get<int32_t>, {0xC0C, 4, 0, 0})
	SMember(FName)                                     FrontMontageSectionPrefix                                   OFFSET(getStruct<T>, {0xC10, 8, 0, 0})
	SMember(FName)                                     BackMontageSectionPrefix                                    OFFSET(getStruct<T>, {0xC18, 8, 0, 0})
	SMember(FName)                                     LeftMontageSectionPrefix                                    OFFSET(getStruct<T>, {0xC20, 8, 0, 0})
	SMember(FName)                                     RightMontageSectionPrefix                                   OFFSET(getStruct<T>, {0xC28, 8, 0, 0})
	SMember(FName)                                     HeadFrontMontageSectionPrefix                               OFFSET(getStruct<T>, {0xC30, 8, 0, 0})
	SMember(FName)                                     HeadBackMontageSectionPrefix                                OFFSET(getStruct<T>, {0xC38, 8, 0, 0})
	SMember(FName)                                     HeadLeftMontageSectionPrefix                                OFFSET(getStruct<T>, {0xC40, 8, 0, 0})
	SMember(FName)                                     HeadRightMontageSectionPrefix                               OFFSET(getStruct<T>, {0xC48, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.GetRandomSectionName
	// void GetRandomSectionName(int32_t MaxNumberOfSections, FName OriginalSectionName, FName& SectionName);                   // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.InitializeDeathHitDirection
	// void InitializeDeathHitDirection(FGameplayEventData EventHitData);                                                       // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4
	// void OnCancelled_CD8A514040DDA2A4EF94DD913E1B01E4();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4
	// void OnInterrupted_CD8A514040DDA2A4EF94DD913E1B01E4();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4
	// void OnBlendOut_CD8A514040DDA2A4EF94DD913E1B01E4();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4
	// void OnCompleted_CD8A514040DDA2A4EF94DD913E1B01E4();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.PickDeathMontageSection
	// void PickDeathMontageSection();                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericDeath.GAB_GenericDeath_C.ExecuteUbergraph_GAB_GenericDeath
	// void ExecuteUbergraph_GAB_GenericDeath(int32_t EntryPoint);                                                              // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Flinger/GAB_FlingerDeath.GAB_FlingerDeath_C
/// Size: 0x0000 (0x000C50 - 0x000C50)
class UGAB_FlingerDeath_C : public UGAB_GenericDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3152;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GAB_SmasherDeath.GAB_SmasherDeath_C
/// Size: 0x0008 (0x000C50 - 0x000C58)
class UGAB_SmasherDeath_C : public UGAB_GenericDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3160;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xC50, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Smasher/GAB_SmasherDeath.GAB_SmasherDeath_C.ExecuteUbergraph_GAB_SmasherDeath
	// void ExecuteUbergraph_GAB_SmasherDeath(int32_t EntryPoint);                                                              // [0x154a140] None                 
};

/// Class /Game/Abilities/NPC/Husk/Base/GAB_HuskDeath.GAB_HuskDeath_C
/// Size: 0x0010 (0x000C50 - 0x000C60)
class UGAB_HuskDeath_C : public UGAB_GenericDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3168;

public:
	SMember(FGameplayTag)                              LaserTag                                                    OFFSET(getStruct<T>, {0xC50, 8, 0, 0})
	CMember(UAnimMontage*)                             Headshot                                                    OFFSET(get<T>, {0xC58, 8, 0, 0})
};

/// Class /Game/Abilities/NPC/Shielder/GAB_ShielderDeath.GAB_ShielderDeath_C
/// Size: 0x0000 (0x000C50 - 0x000C50)
class UGAB_ShielderDeath_C : public UGAB_GenericDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3152;

public:
};

/// Class /Game/Abilities/NPC/Taker/GAB_TakerDeath.GAB_TakerDeath_C
/// Size: 0x0000 (0x000C50 - 0x000C50)
class UGAB_TakerDeath_C : public UGAB_GenericDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3152;

public:
};

/// Class /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C
/// Size: 0x0010 (0x000AC0 - 0x000AD0)
class UGAT_TriggeredAbility_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	SMember(FGameplayTag)                              TC_AbilitiesGenericTriggeredAbilityActivate                 OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Parents/GAT_TriggeredAbility.GAT_TriggeredAbility_C.ExecuteUbergraph_GAT_TriggeredAbility
	// void ExecuteUbergraph_GAT_TriggeredAbility(int32_t EntryPoint);                                                          // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Parents/GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C
/// Size: 0x00BA (0x000AD0 - 0x000B8A)
class UGAT_GenericTriggeredAbility_C : public UGAT_TriggeredAbility_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2954;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAD0, 8, 0, 0})
	SMember(FGameplayEventData)                        EventData                                                   OFFSET(getStruct<T>, {0xAD8, 168, 0, 0})
	CMember(AFortPlayerPawn*)                          FortPlayerPawn                                              OFFSET(get<T>, {0xB80, 8, 0, 0})
	DMember(bool)                                      isAutoCommitted                                             OFFSET(get<bool>, {0xB88, 1, 0, 0})
	DMember(bool)                                      isStaminaLockedOut                                          OFFSET(get<bool>, {0xB89, 1, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Parents/GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Parents/GAT_GenericTriggeredAbility.GAT_GenericTriggeredAbility_C.ExecuteUbergraph_GAT_GenericTriggeredAbility
	// void ExecuteUbergraph_GAT_GenericTriggeredAbility(int32_t EntryPoint);                                                   // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C
/// Size: 0x007E (0x000B8A - 0x000C08)
class UGA_Ninja_Tactical_MeleeHitsHeal_C : public UGAT_GenericTriggeredAbility_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3080;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB90, 8, 0, 0})
	SMember(FGameplayTag)                              EventActivation                                             OFFSET(getStruct<T>, {0xB98, 8, 0, 0})
	SMember(FGameplayTag)                              EventComplete                                               OFFSET(getStruct<T>, {0xBA0, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NinjaAbility                                             OFFSET(getStruct<T>, {0xBA8, 32, 0, 0})
	CMember(UClass*)                                   GE_Ninja_Tactical_MeleeHitsHeal                             OFFSET(get<T>, {0xBC8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_Melee                                                    OFFSET(getStruct<T>, {0xBD0, 32, 0, 0})
	DMember(int32_t)                                   MeleeCount                                                  OFFSET(get<int32_t>, {0xBF0, 4, 0, 0})
	DMember(float)                                     LastHitSwingTime                                            OFFSET(get<float>, {0xBF4, 4, 0, 0})
	DMember(float)                                     BaseHealValue                                               OFFSET(get<float>, {0xBF8, 4, 0, 0})
	DMember(float)                                     FinalHealValue                                              OFFSET(get<float>, {0xBFC, 4, 0, 0})
	SMember(FName)                                     DataRowName                                                 OFFSET(getStruct<T>, {0xC00, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.SetupAbility
	// void SetupAbility(UAbilitySystemComponent* AbilitySystem);                                                               // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ShouldAbilityRespondToEvent
	// bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);                    // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Ninja/TacticalPerks/MeleeHitsHeal/GA_Ninja_Tactical_MeleeHitsHeal.GA_Ninja_Tactical_MeleeHitsHeal_C.ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal
	// void ExecuteUbergraph_GA_Ninja_Tactical_MeleeHitsHeal(int32_t EntryPoint);                                               // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C
/// Size: 0x0028 (0x000C08 - 0x000C30)
class UGA_Ninja_SwordHitsHeal_C : public UGA_Ninja_Tactical_MeleeHitsHeal_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3120;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xC08, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_RequiredTags                                             OFFSET(getStruct<T>, {0xC10, 32, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.SetupAbility
	// void SetupAbility(UAbilitySystemComponent* AbilitySystem);                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ShouldAbilityRespondToEvent
	// bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);                    // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Ninja/Perks/SwordHitsHeal/GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.ExecuteUbergraph_GA_Ninja_SwordHitsHeal
	// void ExecuteUbergraph_GA_Ninja_SwordHitsHeal(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C
/// Size: 0x0028 (0x000C08 - 0x000C30)
class UGA_Constructor_HammerHitsHeal_C : public UGA_Ninja_Tactical_MeleeHitsHeal_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3120;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xC08, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_RequiredTags                                             OFFSET(getStruct<T>, {0xC10, 32, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.SetupAbility
	// void SetupAbility(UAbilitySystemComponent* AbilitySystem);                                                               // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ShouldAbilityRespondToEvent
	// bool K2_ShouldAbilityRespondToEvent(FGameplayAbilityActorInfo ActorInfo, FGameplayEventData Payload);                    // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Perks/HammerHitsHeal/GA_Constructor_HammerHitsHeal.GA_Constructor_HammerHitsHeal_C.ExecuteUbergraph_GA_Constructor_HammerHitsHeal
	// void ExecuteUbergraph_GA_Constructor_HammerHitsHeal(int32_t EntryPoint);                                                 // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Constructor/Perks/FeelTheBase/GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C
/// Size: 0x0042 (0x000B8A - 0x000BCC)
class UGA_Constructor_FeelTheBase_DeathListener_C : public UGAT_GenericTriggeredAbility_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3020;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xB90, 8, 0, 0})
	CMember(UClass*)                                   StackCount                                                  OFFSET(get<T>, {0xB98, 8, 0, 0})
	SMember(FGameplayTagContainer)                     OverflowTag                                                 OFFSET(getStruct<T>, {0xBA0, 32, 0, 0})
	DMember(int32_t)                                   Stack1                                                      OFFSET(get<int32_t>, {0xBC0, 4, 0, 0})
	DMember(int32_t)                                   Stack2                                                      OFFSET(get<int32_t>, {0xBC4, 4, 0, 0})
	DMember(int32_t)                                   Stack3                                                      OFFSET(get<int32_t>, {0xBC8, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Constructor/Perks/FeelTheBase/GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.ActivateBaseStacks
	// void ActivateBaseStacks(int32_t StackCount, AB_Constructor_BASE_C* BaseReference);                                       // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Perks/FeelTheBase/GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.Exceute GC
	// void Exceute GC(AB_Constructor_BASE_C* BaseReference, bool& Overflow);                                                   // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Perks/FeelTheBase/GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Perks/FeelTheBase/GA_Constructor_FeelTheBase_DeathListener.GA_Constructor_FeelTheBase_DeathListener_C.ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener
	// void ExecuteUbergraph_GA_Constructor_FeelTheBase_DeathListener(int32_t EntryPoint);                                      // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Constructor/Actives/BASE/GE_Constructor_BASE_InBase.GE_Constructor_BASE_InBase_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_BASE_InBase_C : public UGET_TagContainer_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_HideOnMiniMap.GE_HideOnMiniMap_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_HideOnMiniMap_C : public UGET_TagContainer_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_KnockbackActive.GE_KnockbackActive_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_KnockbackActive_C : public UGET_TagContainer_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_StunActive.GE_StunActive_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_StunActive_C : public UGET_TagContainer_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_RestoreControlResistance.GE_RestoreControlResistance_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_RestoreControlResistance_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_ImpactImmunity.GE_ImpactImmunity_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_ImpactImmunity_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GAB_GenericStunned.GAB_GenericStunned_C
/// Size: 0x0030 (0x000AC0 - 0x000AF0)
class UGAB_GenericStunned_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(UClass*)                                   StunActiveEffect                                            OFFSET(get<T>, {0xAC8, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               ActiveStun                                                  OFFSET(getStruct<T>, {0xAD0, 8, 0, 0})
	CMember(UClass*)                                   RestoreControlResistEffect                                  OFFSET(get<T>, {0xAD8, 8, 0, 0})
	CMember(UClass*)                                   GE_ImpactImmunity                                           OFFSET(get<T>, {0xAE0, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               ActiveImpactImmunity                                        OFFSET(getStruct<T>, {0xAE8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_GenericStunned.GAB_GenericStunned_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericStunned.GAB_GenericStunned_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_GenericStunned.GAB_GenericStunned_C.ExecuteUbergraph_GAB_GenericStunned
	// void ExecuteUbergraph_GAB_GenericStunned(int32_t EntryPoint);                                                            // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_StaminaRegenLockout.GE_Generic_StaminaRegenLockout_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Generic_StaminaRegenLockout_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GE_DefaultPlayer_Tooltips.GE_DefaultPlayer_Tooltips_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_DefaultPlayer_Tooltips_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C
/// Size: 0x0020 (0x000AF0 - 0x000B10)
class UGA_DefaultPlayer_Stunned_C : public UGAB_GenericStunned_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAF0, 8, 0, 0})
	SMember(FFortFeedbackHandle)                       StunFeedbackEvent                                           OFFSET(getStruct<T>, {0xAF8, 24, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Stunned.GA_DefaultPlayer_Stunned_C.ExecuteUbergraph_GA_DefaultPlayer_Stunned
	// void ExecuteUbergraph_GA_DefaultPlayer_Stunned(int32_t EntryPoint);                                                      // [0x154a140] None                 
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGA_DefaultPlayer_InteractUse_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.OnCancelled_A513E1E044E129CC612DF5A23589BC9C
	// void OnCancelled_A513E1E044E129CC612DF5A23589BC9C();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.OnInterrupted_A513E1E044E129CC612DF5A23589BC9C
	// void OnInterrupted_A513E1E044E129CC612DF5A23589BC9C();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.OnBlendOut_A513E1E044E129CC612DF5A23589BC9C
	// void OnBlendOut_A513E1E044E129CC612DF5A23589BC9C();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.OnCompleted_A513E1E044E129CC612DF5A23589BC9C
	// void OnCompleted_A513E1E044E129CC612DF5A23589BC9C();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractUse.GA_DefaultPlayer_InteractUse_C.ExecuteUbergraph_GA_DefaultPlayer_InteractUse
	// void ExecuteUbergraph_GA_DefaultPlayer_InteractUse(int32_t EntryPoint);                                                  // [0x154a140] None                 
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGA_DefaultPlayer_InteractSearch_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Completed_B697D9B445CA2BFDB1328D93C33FBCF3
	// void Completed_B697D9B445CA2BFDB1328D93C33FBCF3(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3
	// void Cancelled_B697D9B445CA2BFDB1328D93C33FBCF3(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.Triggered_B697D9B445CA2BFDB1328D93C33FBCF3
	// void Triggered_B697D9B445CA2BFDB1328D93C33FBCF3(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_InteractSearch.GA_DefaultPlayer_InteractSearch_C.ExecuteUbergraph_GA_DefaultPlayer_InteractSearch
	// void ExecuteUbergraph_GA_DefaultPlayer_InteractSearch(int32_t EntryPoint);                                               // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C
/// Size: 0x0008 (0x000C50 - 0x000C58)
class UGA_DefaultPlayer_Death_C : public UGAB_GenericDeath_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3160;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xC50, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.PickDeathMontageSection
	// void PickDeathMontageSection();                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Death.GA_DefaultPlayer_Death_C.ExecuteUbergraph_GA_DefaultPlayer_Death
	// void ExecuteUbergraph_GA_DefaultPlayer_Death(int32_t EntryPoint);                                                        // [0x154a140] None                 
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C
/// Size: 0x0010 (0x000AC0 - 0x000AD0)
class UGA_DefaultPlayer_Consumable_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2768;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(UAnimMontage*)                             EatMontage                                                  OFFSET(get<T>, {0xAC8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Completed_A3A081314405D22C4EED5CB989DC8CB1
	// void Completed_A3A081314405D22C4EED5CB989DC8CB1(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Cancelled_A3A081314405D22C4EED5CB989DC8CB1
	// void Cancelled_A3A081314405D22C4EED5CB989DC8CB1(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.Triggered_A3A081314405D22C4EED5CB989DC8CB1
	// void Triggered_A3A081314405D22C4EED5CB989DC8CB1(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_Consumable.GA_DefaultPlayer_Consumable_C.ExecuteUbergraph_GA_DefaultPlayer_Consumable
	// void ExecuteUbergraph_GA_DefaultPlayer_Consumable(int32_t EntryPoint);                                                   // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_BuildingRepaired.GA_DefaultPlayer_BuildingRepaired_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGA_DefaultPlayer_BuildingRepaired_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_BuildingRepaired.GA_DefaultPlayer_BuildingRepaired_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_BuildingRepaired.GA_DefaultPlayer_BuildingRepaired_C.ExecuteUbergraph_GA_DefaultPlayer_BuildingRepaired
	// void ExecuteUbergraph_GA_DefaultPlayer_BuildingRepaired(int32_t EntryPoint);                                             // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGA_DefaultPlayer_BuildingCreated_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_BuildingCreated.GA_DefaultPlayer_BuildingCreated_C.ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated
	// void ExecuteUbergraph_GA_DefaultPlayer_BuildingCreated(int32_t EntryPoint);                                              // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_DefaultPlayer_ApplyKnockback.GA_DefaultPlayer_ApplyKnockback_C
/// Size: 0x0000 (0x000BA0 - 0x000BA0)
class UGA_DefaultPlayer_ApplyKnockback_C : public UGAB_GenericApplyKnockback_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2976;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_Default_KilledEnemy.GA_Default_KilledEnemy_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGA_Default_KilledEnemy_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_Default_KilledEnemy.GA_Default_KilledEnemy_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GA_Default_KilledEnemy.GA_Default_KilledEnemy_C.ExecuteUbergraph_GA_Default_KilledEnemy
	// void ExecuteUbergraph_GA_Default_KilledEnemy(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Generic/GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C
/// Size: 0x0040 (0x000AC0 - 0x000B00)
class UGAB_PlayerDBNOResurrect_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	SMember(FGameplayTag)                              EC_AppliedEffect                                            OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  OFFSET(get<T>, {0xAD0, 8, 0, 0})
	DMember(float)                                     KnockbackMagnitude                                          OFFSET(get<float>, {0xAD8, 4, 0, 0})
	CMember(TArray<AActor*>)                           HitActors                                                   OFFSET(get<T>, {0xAE0, 16, 0, 0})
	CMember(UClass*)                                   KnockbackStunGE                                             OFFSET(get<T>, {0xAF0, 8, 0, 0})
	CMember(UClass*)                                   BP_VictoryDrone                                             OFFSET(get<T>, {0xAF8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Completed_0B41E4DC44D3371D619734A714E9FE50
	// void Completed_0B41E4DC44D3371D619734A714E9FE50(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Cancelled_0B41E4DC44D3371D619734A714E9FE50
	// void Cancelled_0B41E4DC44D3371D619734A714E9FE50(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Triggered_0B41E4DC44D3371D619734A714E9FE50
	// void Triggered_0B41E4DC44D3371D619734A714E9FE50(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Cancelled_8E1AEF7D40AE1D4CCBACC68EEB3D87D6
	// void Cancelled_8E1AEF7D40AE1D4CCBACC68EEB3D87D6(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.Targeted_8E1AEF7D40AE1D4CCBACC68EEB3D87D6
	// void Targeted_8E1AEF7D40AE1D4CCBACC68EEB3D87D6(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNOResurrect.GAB_PlayerDBNOResurrect_C.ExecuteUbergraph_GAB_PlayerDBNOResurrect
	// void ExecuteUbergraph_GAB_PlayerDBNOResurrect(int32_t EntryPoint);                                                       // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Generic/GAB_PlayerDBNO.GAB_PlayerDBNO_C
/// Size: 0x00E8 (0x000AC0 - 0x000BA8)
class UGAB_PlayerDBNO_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2984;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(UAnimMontage*)                             DeathMontage                                                OFFSET(get<T>, {0xAC8, 8, 0, 0})
	SMember(FVector)                                   DeathHitDirection                                           OFFSET(getStruct<T>, {0xAD0, 12, 0, 0})
	SMember(FHitResult)                                DeathHitResult                                              OFFSET(getStruct<T>, {0xAE0, 136, 0, 0})
	SMember(FGameplayTagContainer)                     DamageTags                                                  OFFSET(getStruct<T>, {0xB68, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayStatusAfflicted                                     OFFSET(getStruct<T>, {0xB88, 32, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNO.GAB_PlayerDBNO_C.InitializeDeathHitDirection
	// void InitializeDeathHitDirection(FGameplayEventData EventHitData);                                                       // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCancelled_4B0F8658452931EE3B297A9E70C9C496
	// void OnCancelled_4B0F8658452931EE3B297A9E70C9C496();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnInterrupted_4B0F8658452931EE3B297A9E70C9C496
	// void OnInterrupted_4B0F8658452931EE3B297A9E70C9C496();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnBlendOut_4B0F8658452931EE3B297A9E70C9C496
	// void OnBlendOut_4B0F8658452931EE3B297A9E70C9C496();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNO.GAB_PlayerDBNO_C.OnCompleted_4B0F8658452931EE3B297A9E70C9C496
	// void OnCompleted_4B0F8658452931EE3B297A9E70C9C496();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNO.GAB_PlayerDBNO_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_PlayerDBNO.GAB_PlayerDBNO_C.ExecuteUbergraph_GAB_PlayerDBNO
	// void ExecuteUbergraph_GAB_PlayerDBNO(int32_t EntryPoint);                                                                // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C
/// Size: 0x0040 (0x000AC0 - 0x000B00)
class UGAB_AthenaDBNORevive_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2816;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	SMember(FGameplayTag)                              EC_AppliedEffect                                            OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerPawn                                                  OFFSET(get<T>, {0xAD0, 8, 0, 0})
	DMember(float)                                     KnockbackMagnitude                                          OFFSET(get<float>, {0xAD8, 4, 0, 0})
	CMember(TArray<AActor*>)                           HitActors                                                   OFFSET(get<T>, {0xAE0, 16, 0, 0})
	CMember(UClass*)                                   KnockbackStunGE                                             OFFSET(get<T>, {0xAF0, 8, 0, 0})
	CMember(UClass*)                                   BP_VictoryDrone                                             OFFSET(get<T>, {0xAF8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Completed_23712DBC45E68EA0C91A4895CBD8B3A6
	// void Completed_23712DBC45E68EA0C91A4895CBD8B3A6(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6
	// void Cancelled_23712DBC45E68EA0C91A4895CBD8B3A6(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Triggered_23712DBC45E68EA0C91A4895CBD8B3A6
	// void Triggered_23712DBC45E68EA0C91A4895CBD8B3A6(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Cancelled_779E7BAA49FEAD286C5164B83CDFD609
	// void Cancelled_779E7BAA49FEAD286C5164B83CDFD609(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.Targeted_779E7BAA49FEAD286C5164B83CDFD609
	// void Targeted_779E7BAA49FEAD286C5164B83CDFD609(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNORevive.GAB_AthenaDBNORevive_C.ExecuteUbergraph_GAB_AthenaDBNORevive
	// void ExecuteUbergraph_GAB_AthenaDBNORevive(int32_t EntryPoint);                                                          // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C
/// Size: 0x00F8 (0x000AC0 - 0x000BB8)
class UGAB_AthenaDBNO_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3000;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	CMember(UAnimMontage*)                             DeathMontage                                                OFFSET(get<T>, {0xAC8, 8, 0, 0})
	SMember(FVector)                                   DeathHitDirection                                           OFFSET(getStruct<T>, {0xAD0, 12, 0, 0})
	SMember(FHitResult)                                DeathHitResult                                              OFFSET(getStruct<T>, {0xAE0, 136, 0, 0})
	SMember(FGameplayTagContainer)                     DamageTags                                                  OFFSET(getStruct<T>, {0xB68, 32, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayStatusAfflicted                                     OFFSET(getStruct<T>, {0xB88, 32, 0, 0})
	CMember(UAnimMontage*)                             DeathMontageSkydive                                         OFFSET(get<T>, {0xBA8, 8, 0, 0})
	SMember(FActiveGameplayEffectHandle)               DBNOBleedGEHandle                                           OFFSET(getStruct<T>, {0xBB0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.GetInitialHealAmount
	// void GetInitialHealAmount(float& Health);                                                                                // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.InitializeDeathHitDirection
	// void InitializeDeathHitDirection(FGameplayEventData EventHitData);                                                       // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCancelled_F0F6785443BD2E74F5591884CB19F35F
	// void OnCancelled_F0F6785443BD2E74F5591884CB19F35F();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnInterrupted_F0F6785443BD2E74F5591884CB19F35F
	// void OnInterrupted_F0F6785443BD2E74F5591884CB19F35F();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnBlendOut_F0F6785443BD2E74F5591884CB19F35F
	// void OnBlendOut_F0F6785443BD2E74F5591884CB19F35F();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnCompleted_F0F6785443BD2E74F5591884CB19F35F
	// void OnCompleted_F0F6785443BD2E74F5591884CB19F35F();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6
	// void OnStateInterrupted_C85094F843D5075FE4872C95AFC5D6B6();                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6
	// void OnStateEnded_C85094F843D5075FE4872C95AFC5D6B6();                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.OnFinish_4C169D40441E45B462D83CBBA67F6E45
	// void OnFinish_4C169D40441E45B462D83CBBA67F6E45();                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.K2_ActivateAbilityFromEvent
	// void K2_ActivateAbilityFromEvent(FGameplayEventData& EventData);                                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Generic/GAB_AthenaDBNO.GAB_AthenaDBNO_C.ExecuteUbergraph_GAB_AthenaDBNO
	// void ExecuteUbergraph_GAB_AthenaDBNO(int32_t EntryPoint);                                                                // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Traps/Generic/GE_TrapArmGeneric.GE_TrapArmGeneric_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TrapArmGeneric_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Traps/Generic/GA_TrapBuildGeneric.GA_TrapBuildGeneric_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGA_TrapBuildGeneric_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Traps/Generic/GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Traps/Generic/GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.ExecuteUbergraph_GA_TrapBuildGeneric
	// void ExecuteUbergraph_GA_TrapBuildGeneric(int32_t EntryPoint);                                                           // [0x154a140] None                 
};

/// Class /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GE_BotTurret_ExplosionDamage.GE_BotTurret_ExplosionDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_BotTurret_ExplosionDamage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/RiotShield/GE_Constructor_RiotShieldDamage.GE_Constructor_RiotShieldDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_RiotShieldDamage_C : public UGET_DirectBluntDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Actives/BullRush/GE_Constructor_DefaultShield.GE_Constructor_DefaultShield_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_DefaultShield_C : public UGET_DirectBluntDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Actives/BullRush/GE_Constructor_BullRushDamage.GE_Constructor_BullRushDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_BullRushDamage_C : public UGET_DirectBluntDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/Actives/BullRush/GE_Constructor_BullRush_ChinaShop.GE_Constructor_BullRush_ChinaShop_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_BullRush_ChinaShop_C : public UGET_DirectBluntDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_DirectCreatureDamage_DamageObjectives.GE_DirectCreatureDamage_DamageObjectives_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_DirectCreatureDamage_DamageObjectives_C : public UGET_DirectCreatureDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Generic/GE_DirectCreatureDamage_DoNotDamageObjectives.GE_DirectCreatureDamage_DoNotDamageObjectives_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_DirectCreatureDamage_DoNotDamageObjectives_C : public UGET_DirectCreatureDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Flinger/GE_FlingerMeleeDamage.GE_FlingerMeleeDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_FlingerMeleeDamage_C : public UGE_DirectCreatureDamage_DoNotDamageObjectives_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Smasher/GE_SmasherMeleeDamage.GE_SmasherMeleeDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_SmasherMeleeDamage_C : public UGE_DirectCreatureDamage_DoNotDamageObjectives_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Taker/GE_TakerDirectDamageSoulSuckHeavy.GE_TakerDirectDamageSoulSuckHeavy_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TakerDirectDamageSoulSuckHeavy_C : public UGE_DirectCreatureDamage_DoNotDamageObjectives_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/NPC/Taker/GE_TakerDirectDamage.GE_TakerDirectDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_TakerDirectDamage_C : public UGE_DirectCreatureDamage_DoNotDamageObjectives_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/PlayerTrapReloadTimeModCalculation.PlayerTrapReloadTimeModCalculation_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UPlayerTrapReloadTimeModCalculation_C : public UPlayerTrapBonusModMagnitudeCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/PlayerTrapMaxDurabilityModCalculation.PlayerTrapMaxDurabilityModCalculation_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UPlayerTrapMaxDurabilityModCalculation_C : public UPlayerTrapBonusModMagnitudeCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/PlayerTrapHealingSourceModCalculation.PlayerTrapHealingSourceModCalculation_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UPlayerTrapHealingSourceModCalculation_C : public UPlayerTrapBonusModMagnitudeCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/PlayerTrapDiceCritMultiplierModCalculation.PlayerTrapDiceCritMultiplierModCalculation_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UPlayerTrapDiceCritMultiplierModCalculation_C : public UPlayerTrapBonusModMagnitudeCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/PlayerTrapDiceCritChanceModCalculation.PlayerTrapDiceCritChanceModCalculation_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UPlayerTrapDiceCritChanceModCalculation_C : public UPlayerTrapBonusModMagnitudeCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/PlayerTrapBaseDamageModCalculation.PlayerTrapBaseDamageModCalculation_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UPlayerTrapBaseDamageModCalculation_C : public UPlayerTrapBonusModMagnitudeCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/PlayerTrapArmSpeedModCalculation.PlayerTrapArmSpeedModCalculation_C
/// Size: 0x0000 (0x000068 - 0x000068)
class UPlayerTrapArmSpeedModCalculation_C : public UPlayerTrapBonusModMagnitudeCalculation
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
};

/// Class /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C
/// Size: 0x0008 (0x000AC0 - 0x000AC8)
class UGAB_Emote_Generic_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.GetMontageToPlay
	// UAnimMontage* GetMontageToPlay(UFortMontageItemDefinitionBase* EmoteAsset, TEnumAsByte<EFortCustomBodyType> BodyType, TEnumAsByte<EFortCustomGender> Gender); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.GetBodyTypeAndGender
	// void GetBodyTypeAndGender(TEnumAsByte<EFortCustomBodyType>& BodyType, TEnumAsByte<EFortCustomGender>& Gender);           // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.Completed_DE7019AA4E006879EDD264899869FEE2
	// void Completed_DE7019AA4E006879EDD264899869FEE2(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.Cancelled_DE7019AA4E006879EDD264899869FEE2
	// void Cancelled_DE7019AA4E006879EDD264899869FEE2(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.Triggered_DE7019AA4E006879EDD264899869FEE2
	// void Triggered_DE7019AA4E006879EDD264899869FEE2(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D
	// void OnLoaded_D5C2B0D14DEB9277D15965B97800FD1D(UObject* Loaded);                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.OnMontageStartedPlaying
	// void OnMontageStartedPlaying();                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Emotes/GAB_Emote_Generic.GAB_Emote_Generic_C.ExecuteUbergraph_GAB_Emote_Generic
	// void ExecuteUbergraph_GAB_Emote_Generic(int32_t EntryPoint);                                                             // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Sprays/GAB_Spray_Generic.GAB_Spray_Generic_C
/// Size: 0x0070 (0x000AC8 - 0x000B38)
class UGAB_Spray_Generic_C : public UGAB_Emote_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2872;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC8, 8, 0, 0})
	DMember(float)                                     DecalSize                                                   OFFSET(get<float>, {0xAD0, 4, 0, 0})
	CMember(UAthenaSprayItemDefinition*)               MySpray                                                     OFFSET(get<T>, {0xAD8, 8, 0, 0})
	DMember(float)                                     DecalTraceDistance                                          OFFSET(get<float>, {0xAE0, 4, 0, 0})
	CMember(UAnimMontage*)                             DefaultSprayMontage_M                                       OFFSET(get<T>, {0xAE8, 40, 0, 0})
	CMember(UAnimMontage*)                             DefaultSprayMontage_F                                       OFFSET(get<T>, {0xB10, 40, 0, 0})


	/// Functions
	// Function /Game/Abilities/Sprays/GAB_Spray_Generic.GAB_Spray_Generic_C.GetMontageToPlay
	// UAnimMontage* GetMontageToPlay(UFortMontageItemDefinitionBase* EmoteAsset, TEnumAsByte<EFortCustomBodyType> BodyType, TEnumAsByte<EFortCustomGender> Gender); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Sprays/GAB_Spray_Generic.GAB_Spray_Generic_C.TargetLineTrace
	// void TargetLineTrace(AFortPawn* ActivatingPawn, bool& HitSomething, FVector& Location, FVector& Normal);                 // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Sprays/GAB_Spray_Generic.GAB_Spray_Generic_C.OnMontageStartedPlaying
	// void OnMontageStartedPlaying();                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Sprays/GAB_Spray_Generic.GAB_Spray_Generic_C.ExecuteUbergraph_GAB_Spray_Generic
	// void ExecuteUbergraph_GAB_Spray_Generic(int32_t EntryPoint);                                                             // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Generic/Traits/DefaultPlayer/GE_SharedPlayerTrapStatTransfer.GE_SharedPlayerTrapStatTransfer_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_SharedPlayerTrapStatTransfer_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/GE_HealthRegen.GE_HealthRegen_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_HealthRegen_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Traps/FloorHoverboardSpeed/GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C
/// Size: 0x0070 (0x0003C0 - 0x000430)
class AGCN_Hoverboard_Strait_C : public AGameplayCueNotify_Actor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1072;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3C0, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(APlayerPawn_Generic_C*)                    ActivatingPlayer                                            OFFSET(get<T>, {0x3D0, 8, 0, 0})
	CMember(UAudioComponent*)                          SND_HoverboardLoop                                          OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(UAudioComponent*)                          SND_HoverboardSound_Accelerate                              OFFSET(get<T>, {0x3E0, 8, 0, 0})
	CMember(UAudioComponent*)                          SND_HoverboardStart                                         OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   SK_HoverboardComponent                                      OFFSET(get<T>, {0x3F0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 IdleFX                                                      OFFSET(get<T>, {0x3F8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 BoostFX                                                     OFFSET(get<T>, {0x400, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 LSmokeTrail                                                 OFFSET(get<T>, {0x408, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 RSmokeTrail                                                 OFFSET(get<T>, {0x410, 8, 0, 0})
	CMember(ATrap_Floor_Hoverboard_Speed_C*)           ActivatedTrap                                               OFFSET(get<T>, {0x418, 8, 0, 0})
	CMember(UClass*)                                   Trigger_LensEffectEmitterClass                              OFFSET(get<T>, {0x420, 8, 0, 0})
	CMember(USoundBase*)                               TrapFireSoundAttached                                       OFFSET(get<T>, {0x428, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Traps/FloorHoverboardSpeed/GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/FloorHoverboardSpeed/GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/FloorHoverboardSpeed/GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.OnActivate
	// void OnActivate();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/FloorHoverboardSpeed/GCN_Hoverboard_Strait.GCN_Hoverboard_Strait_C.ExecuteUbergraph_GCN_Hoverboard_Strait
	// void ExecuteUbergraph_GCN_Hoverboard_Strait(int32_t EntryPoint);                                                         // [0x154a140] None                 
};

/// Class /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C
/// Size: 0x0078 (0x000440 - 0x0004B8)
class AGC_Husk_Slow_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1208;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Chains                                                      OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Cuff_r                                                      OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Cuff_l                                                      OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(float)                                     CuffLock_Lock_Control_756030714F08FF79667CC399F84C6DB9      OFFSET(get<float>, {0x460, 4, 0, 0})
	DMember(float)                                     CuffLock_Rotation_Control_756030714F08FF79667CC399F84C6DB9  OFFSET(get<float>, {0x464, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           CuffLock__Direction_756030714F08FF79667CC399F84C6DB9        OFFSET(get<T>, {0x468, 1, 0, 0})
	CMember(UTimelineComponent*)                       CuffLock                                                    OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(AActor*)                                   My_Target                                                   OFFSET(get<T>, {0x478, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Cuff_L_MID                                                  OFFSET(get<T>, {0x480, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Cuff_R_MID                                                  OFFSET(get<T>, {0x488, 8, 0, 0})
	DMember(float)                                     Activate_Time_Scale                                         OFFSET(get<float>, {0x490, 4, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Chains_MID                                                  OFFSET(get<T>, {0x498, 8, 0, 0})
	SMember(FVector)                                   Shackle_Scale                                               OFFSET(getStruct<T>, {0x4A0, 12, 0, 0})
	CMember(USkeletalMeshComponent*)                   Mesh_from_Pawn                                              OFFSET(get<T>, {0x4B0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__FinishedFunc
	// void CuffLock__FinishedFunc();                                                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__UpdateFunc
	// void CuffLock__UpdateFunc();                                                                                             // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__Open_Event__EventFunc
	// void CuffLock__Open_Event__EventFunc();                                                                                  // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C.CuffLock__Close_Event__EventFunc
	// void CuffLock__Close_Event__EventFunc();                                                                                 // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C.CuffLinkLock
	// void CuffLinkLock();                                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C.Cuff_Locked
	// void Cuff_Locked(TEnumAsByte<ETimelineDirection> TimelineDirection);                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C.CuffRemoved
	// void CuffRemoved();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C.Cuff_Unlocked
	// void Cuff_Unlocked(TEnumAsByte<ETimelineDirection> TimelineDirection);                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Outlander/Perks/Bearricade/GC_Husk_Slow.GC_Husk_Slow_C.ExecuteUbergraph_GC_Husk_Slow
	// void ExecuteUbergraph_GC_Husk_Slow(int32_t EntryPoint);                                                                  // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Outlander/Actives/GravitySphere/GC_GravitySphere.GC_GravitySphere_C
/// Size: 0x0018 (0x000440 - 0x000458)
class AGC_GravitySphere_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Outlander_GravitySphere_Feet_01                           OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(AActor*)                                   My_Target                                                   OFFSET(get<T>, {0x450, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Outlander/Actives/GravitySphere/GC_GravitySphere.GC_GravitySphere_C.OnWhileActiveParticleSystemDeactivate
	// void OnWhileActiveParticleSystemDeactivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Outlander/Actives/GravitySphere/GC_GravitySphere.GC_GravitySphere_C.OnWhileActiveParticleSystemActivate
	// void OnWhileActiveParticleSystemActivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Outlander/Actives/GravitySphere/GC_GravitySphere.GC_GravitySphere_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Outlander/Actives/GravitySphere/GC_GravitySphere.GC_GravitySphere_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Outlander/Actives/GravitySphere/GC_GravitySphere.GC_GravitySphere_C.ExecuteUbergraph_GC_GravitySphere
	// void ExecuteUbergraph_GC_GravitySphere(int32_t EntryPoint);                                                              // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Outlander/Actives/Fragment/GCN_Outlander_DefensiveBuff.GCN_Outlander_DefensiveBuff_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCN_Outlander_DefensiveBuff_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
};

/// Class /Game/Abilities/Player/Outlander/Actives/Fragment/Bear/GCN_Outlander_BearFragmentDebuff.GCN_Outlander_BearFragmentDebuff_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCN_Outlander_BearFragmentDebuff_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
};

/// Class /Game/Abilities/Player/Ninja/Perks/ShadowStance/GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C
/// Size: 0x0008 (0x000440 - 0x000448)
class AGC_Abilities_Activation_Ninja_ShadowStance_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(APlayerPawn_Ninja_C*)                      MyTarget                                                    OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Ninja/Perks/ShadowStance/GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.OnWhileActiveParticleSystemDeactivate
	// void OnWhileActiveParticleSystemDeactivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Ninja/Perks/ShadowStance/GC_Abilities_Activation_Ninja_ShadowStance.GC_Abilities_Activation_Ninja_ShadowStance_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/Player/Ninja/Perks/Assassination/GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C
/// Size: 0x0020 (0x000440 - 0x000460)
class AGC_Ninja_Assassination_ActiveFX_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1120;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	SMember(FName)                                     Assassination_Socket                                        OFFSET(getStruct<T>, {0x448, 8, 0, 0})
	DMember(int32_t)                                   Large_FXActive_Lvl                                          OFFSET(get<int32_t>, {0x450, 4, 0, 0})
	CMember(AActor*)                                   MyTarget                                                    OFFSET(get<T>, {0x458, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Ninja/Perks/Assassination/GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.OnWhileActiveParticleSystemActivate
	// void OnWhileActiveParticleSystemActivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Ninja/Perks/Assassination/GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.WhileActive
	// bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                  // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Ninja/Perks/Assassination/GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Ninja/Perks/Assassination/GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Ninja/Perks/Assassination/GC_Ninja_Assassination_ActiveFX.GC_Ninja_Assassination_ActiveFX_C.ExecuteUbergraph_GC_Ninja_Assassination_ActiveFX
	// void ExecuteUbergraph_GC_Ninja_Assassination_ActiveFX(int32_t EntryPoint);                                               // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C
/// Size: 0x00C0 (0x000440 - 0x000500)
class AGCN_Hoverboard_Running_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1280;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	SMember(FLinearColor)                              Spawnin_Color_9CDC88F8422A5E3495C4D286D1223B9D              OFFSET(getStruct<T>, {0x448, 16, 0, 0})
	DMember(float)                                     Spawnin_Dissolve_9CDC88F8422A5E3495C4D286D1223B9D           OFFSET(get<float>, {0x458, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Spawnin__Direction_9CDC88F8422A5E3495C4D286D1223B9D         OFFSET(get<T>, {0x45C, 1, 0, 0})
	CMember(UTimelineComponent*)                       Spawnin                                                     OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(APlayerPawn_Generic_C*)                    OwningPlayer                                                OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(USoundBase*)                               SND_HoverboardLoopAsset                                     OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UAudioComponent*)                          SND_HoverboardLoop                                          OFFSET(get<T>, {0x478, 8, 0, 0})
	DMember(bool)                                      bJumpActive                                                 OFFSET(get<bool>, {0x480, 1, 0, 0})
	DMember(float)                                     CurrentSpeed                                                OFFSET(get<float>, {0x484, 4, 0, 0})
	DMember(float)                                     NextSpeed                                                   OFFSET(get<float>, {0x488, 4, 0, 0})
	DMember(float)                                     Delta                                                       OFFSET(get<float>, {0x48C, 4, 0, 0})
	CMember(USoundBase*)                               SND_HoverboardSound_JumpAsset                               OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(USoundBase*)                               SND_HoverboardSound_AccelerateAsset                         OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(UAudioComponent*)                          SND_HoverboardSound_Accelerate                              OFFSET(get<T>, {0x4A0, 8, 0, 0})
	DMember(float)                                     TickRate                                                    OFFSET(get<float>, {0x4A8, 4, 0, 0})
	CMember(UAudioComponent*)                          SND_HoverboardStart                                         OFFSET(get<T>, {0x4B0, 8, 0, 0})
	CMember(USoundBase*)                               SND_HoverboardSound_StartAsset                              OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(USkeletalMeshComponent*)                   SK_HoverboardComponent                                      OFFSET(get<T>, {0x4C0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 IdleFX                                                      OFFSET(get<T>, {0x4C8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 BoostFX                                                     OFFSET(get<T>, {0x4D0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 LSmokeTrail                                                 OFFSET(get<T>, {0x4D8, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 RSmokeTrail                                                 OFFSET(get<T>, {0x4E0, 8, 0, 0})
	DMember(float)                                     NoiseRadius                                                 OFFSET(get<float>, {0x4E8, 4, 0, 0})
	CMember(AActor*)                                   Target                                                      OFFSET(get<T>, {0x4F0, 8, 0, 0})
	SMember(FTimerHandle)                              SetupTimerHandle                                            OFFSET(getStruct<T>, {0x4F8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.GetPlayerLeanValuePercent
	// float GetPlayerLeanValuePercent();                                                                                       // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.GetHoverboardSkeletal
	// void GetHoverboardSkeletal(USkeletalMeshComponent*& SK_HoverboardComponent);                                             // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ClearSounds
	// void ClearSounds();                                                                                                      // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.PlayerIsAccelerating
	// bool PlayerIsAccelerating();                                                                                             // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.PlayerIsDecelerating
	// bool PlayerIsDecelerating();                                                                                             // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.IsPlayerJumping
	// bool IsPlayerJumping(FVector InVec);                                                                                     // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Spawnin__FinishedFunc
	// void Spawnin__FinishedFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Spawnin__UpdateFunc
	// void Spawnin__UpdateFunc();                                                                                              // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.K2_OnReset
	// void K2_OnReset();                                                                                                       // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnJump
	// void OnJump();                                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Idle
	// void Idle();                                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Moving
	// void Moving();                                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnSpawnedIn
	// void OnSpawnedIn();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.OnDespawned
	// void OnDespawned();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ResetSpawnIn
	// void ResetSpawnIn();                                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.BindSetup
	// void BindSetup();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.Setup
	// void Setup();                                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Vehicles/Hoverboard/GCN_Hoverboard_Running.GCN_Hoverboard_Running_C.ExecuteUbergraph_GCN_Hoverboard_Running
	// void ExecuteUbergraph_GCN_Hoverboard_Running(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Generic/Gadgets/Taunt/GCN_Generic_Taunter.GCN_Generic_Taunter_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCN_Generic_Taunter_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
};

/// Class /Game/Abilities/Player/Generic/Gadgets/Taunt/GCN_Generic_Tauntee.GCN_Generic_Tauntee_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCN_Generic_Tauntee_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
};

/// Class /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C
/// Size: 0x0028 (0x000440 - 0x000468)
class AGCNL_Generic_BotTurret_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1128;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(AB_BGA_BotTurret_Parent_C*)                BotTurret                                                   OFFSET(get<T>, {0x448, 8, 0, 0})
	SMember(FVector)                                   LeftGunOffset                                               OFFSET(getStruct<T>, {0x450, 12, 0, 0})
	SMember(FVector)                                   RightGunOffset                                              OFFSET(getStruct<T>, {0x45C, 12, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotFired
	// void BotFired(int32_t Left);                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.Activated
	// void Activated();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotFired
	// void BindBotFired();                                                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BindBotExplosionWarning
	// void BindBotExplosionWarning();                                                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.BotExplosionWarning
	// void BotExplosionWarning();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GCNL_Generic_BotTurret.GCNL_Generic_BotTurret_C.ExecuteUbergraph_GCNL_Generic_BotTurret
	// void ExecuteUbergraph_GCNL_Generic_BotTurret(int32_t EntryPoint);                                                        // [0x154a140] None                 
};

/// Class /Game/Abilities/Player/Constructor/Perks/Firewall/GC/GCL_Constructor_Firewall_Cooldown.GCL_Constructor_Firewall_Cooldown_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCL_Constructor_Firewall_Cooldown_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/CardioFeedbackLoop/GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C
/// Size: 0x0038 (0x0003C0 - 0x0003F8)
class AGC_Generic_AdrenalineRush_PeriodicHeal_C : public AGameplayCueNotify_Actor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3C0, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 HealVFX                                                     OFFSET(get<T>, {0x3C8, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x3D0, 8, 0, 0})
	DMember(float)                                     Health_Sweep_SafetyOpacity_3240057E4D088EF0898241BE4DC90C25 OFFSET(get<float>, {0x3D8, 4, 0, 0})
	DMember(float)                                     Health_Sweep_Sweep_3240057E4D088EF0898241BE4DC90C25         OFFSET(get<float>, {0x3DC, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Health_Sweep__Direction_3240057E4D088EF0898241BE4DC90C25    OFFSET(get<T>, {0x3E0, 1, 0, 0})
	CMember(UTimelineComponent*)                       Health_Sweep                                                OFFSET(get<T>, {0x3E8, 8, 0, 0})
	CMember(APlayerPawn_Generic_C*)                    GC_Target_Pawn                                              OFFSET(get<T>, {0x3F0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Constructor/Perks/CardioFeedbackLoop/GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.HealthCheck
	// void HealthCheck(bool& Check Return);                                                                                    // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Perks/CardioFeedbackLoop/GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Perks/CardioFeedbackLoop/GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.Health_Sweep__FinishedFunc
	// void Health_Sweep__FinishedFunc();                                                                                       // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Constructor/Perks/CardioFeedbackLoop/GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.Health_Sweep__UpdateFunc
	// void Health_Sweep__UpdateFunc();                                                                                         // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Constructor/Perks/CardioFeedbackLoop/GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Constructor/Perks/CardioFeedbackLoop/GC_Generic_AdrenalineRush_PeriodicHeal.GC_Generic_AdrenalineRush_PeriodicHeal_C.ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal
	// void ExecuteUbergraph_GC_Generic_AdrenalineRush_PeriodicHeal(int32_t EntryPoint);                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Commando/Perks/MakeItRain/GC_Commando_MakeItRain.GC_Commando_MakeItRain_C
/// Size: 0x0008 (0x000440 - 0x000448)
class AGC_Commando_MakeItRain_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(UParticleSystemComponent*)                 Spawned_Looping                                             OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Commando/Perks/MakeItRain/GC_Commando_MakeItRain.GC_Commando_MakeItRain_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Perks/MakeItRain/GC_Commando_MakeItRain.GC_Commando_MakeItRain_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Perks/MakeItRain/GC_Commando_MakeItRain.GC_Commando_MakeItRain_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/Player/Commando/Perks/InAPinch/GCN_Commando_InAPinch.GCN_Commando_InAPinch_C
/// Size: 0x0018 (0x000440 - 0x000458)
class AGCN_Commando_InAPinch_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(UParticleSystem*)                          BulletAmbient                                               OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Bullet_Effect                                               OFFSET(get<T>, {0x450, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Commando/Perks/InAPinch/GCN_Commando_InAPinch.GCN_Commando_InAPinch_C.OnWhileActiveParticleSystemDeactivate
	// void OnWhileActiveParticleSystemDeactivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Commando/Perks/InAPinch/GCN_Commando_InAPinch.GCN_Commando_InAPinch_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Perks/InAPinch/GCN_Commando_InAPinch.GCN_Commando_InAPinch_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Perks/InAPinch/GCN_Commando_InAPinch.GCN_Commando_InAPinch_C.ExecuteUbergraph_GCN_Commando_InAPinch
	// void ExecuteUbergraph_GCN_Commando_InAPinch(int32_t EntryPoint);                                                         // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Commando/Perks/DebilitatingShots/GCN_Commando_DebilitatingShots.GCN_Commando_DebilitatingShots_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCN_Commando_DebilitatingShots_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
};

/// Class /Game/Abilities/Player/Commando/Actives/WarCry/GCN_Commando_Warcry.GCN_Commando_Warcry_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCN_Commando_Warcry_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
};

/// Class /Game/Abilities/Player/Commando/Actives/IncendiaryRounds/GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C
/// Size: 0x0008 (0x000440 - 0x000448)
class AGCN_Commando_IncendiaryRoundsDOT_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Commando/Actives/IncendiaryRounds/GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/IncendiaryRounds/GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/IncendiaryRounds/GCN_Commando_IncendiaryRoundsDOT.GCN_Commando_IncendiaryRoundsDOT_C.ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT
	// void ExecuteUbergraph_GCN_Commando_IncendiaryRoundsDOT(int32_t EntryPoint);                                              // [0x154a140] None                 
};

/// Class /Game/Abilities/Player/Commando/Actives/IncendiaryRounds/GCN_Commando_IncendiaryRoundsActive.GCN_Commando_IncendiaryRoundsActive_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCN_Commando_IncendiaryRoundsActive_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
};

/// Class /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_Shield_Activate.GCN_BluGloPylon_Shield_Activate_C
/// Size: 0x0008 (0x000440 - 0x000448)
class AGCN_BluGloPylon_Shield_Activate_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(UTexture*)                                 IconTexture                                                 OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_Shield_Activate.GCN_BluGloPylon_Shield_Activate_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_Shield_Activate.GCN_BluGloPylon_Shield_Activate_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C
/// Size: 0x0008 (0x000440 - 0x000448)
class AGCN_BluGloPylon_RunSpeed_Activate_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(UTexture*)                                 IconTexture                                                 OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_RunSpeed_Activate.GCN_BluGloPylon_RunSpeed_Activate_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C
/// Size: 0x0008 (0x000440 - 0x000448)
class AGCN_BluGloPylon_Health_Activate_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(UTexture*)                                 IconTexture                                                 OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_Health_Activate.GCN_BluGloPylon_Health_Activate_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_Energy_Activate.GCN_BluGloPylon_Energy_Activate_C
/// Size: 0x0008 (0x000440 - 0x000448)
class AGCN_BluGloPylon_Energy_Activate_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(UTexture*)                                 IconTexture                                                 OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_Energy_Activate.GCN_BluGloPylon_Energy_Activate_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_Energy_Activate.GCN_BluGloPylon_Energy_Activate_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_BuildSpeed_Activate.GCN_BluGloPylon_BuildSpeed_Activate_C
/// Size: 0x0008 (0x000440 - 0x000448)
class AGCN_BluGloPylon_BuildSpeed_Activate_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(UTexture*)                                 IconTexture                                                 OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_BuildSpeed_Activate.GCN_BluGloPylon_BuildSpeed_Activate_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/BluGloTower/GCN_BluGloPylon_BuildSpeed_Activate.GCN_BluGloPylon_BuildSpeed_Activate_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C
/// Size: 0x004C (0x000440 - 0x00048C)
class AGCN_Athena_LowGravity_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1164;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(AActor*)                                   MyTargetCached                                              OFFSET(get<T>, {0x448, 8, 0, 0})
	DMember(float)                                     InterpDelta                                                 OFFSET(get<float>, {0x450, 4, 0, 0})
	DMember(float)                                     TargetDelta                                                 OFFSET(get<float>, {0x454, 4, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    PlayerPawn                                                  OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 LowGravityPSComponent                                       OFFSET(get<T>, {0x460, 8, 0, 0})
	SMember(FTimerHandle)                              ExpireTellDelayTimer                                        OFFSET(getStruct<T>, {0x468, 8, 0, 0})
	DMember(float)                                     Duration                                                    OFFSET(get<float>, {0x470, 4, 0, 0})
	DMember(float)                                     ExpirationTellDuration                                      OFFSET(get<float>, {0x474, 4, 0, 0})
	DMember(float)                                     StartTime                                                   OFFSET(get<float>, {0x478, 4, 0, 0})
	DMember(float)                                     ExpirationSoundPeriod                                       OFFSET(get<float>, {0x47C, 4, 0, 0})
	SMember(FTimerHandle)                              ExpirationSoundTimer                                        OFFSET(getStruct<T>, {0x480, 8, 0, 0})
	DMember(float)                                     MaxDrawDistance                                             OFFSET(get<float>, {0x488, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.Activated
	// void Activated(AActor* PlayerPawn);                                                                                      // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.WhileActive
	// bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                  // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExpireTell
	// void ExpireTell();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ClearExpireTell
	// void ClearExpireTell();                                                                                                  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.PlayExpirationSound
	// void PlayExpirationSound();                                                                                              // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExecuteUbergraph_GCN_Athena_LowGravity
	// void ExecuteUbergraph_GCN_Athena_LowGravity(int32_t EntryPoint);                                                         // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Athena/GCN_Athena_DanceStun.GCN_Athena_DanceStun_C
/// Size: 0x004C (0x000440 - 0x00048C)
class AGCN_Athena_DanceStun_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1164;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     StaticMesh                                                  OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(USceneComponent*)                          AnimPivot                                                   OFFSET(get<T>, {0x450, 8, 0, 0})
	DMember(float)                                     OutroAnim_Scale_1822DA5D44681175D96B369D2350B5A1            OFFSET(get<float>, {0x458, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           OutroAnim__Direction_1822DA5D44681175D96B369D2350B5A1       OFFSET(get<T>, {0x45C, 1, 0, 0})
	CMember(UTimelineComponent*)                       OutroAnim                                                   OFFSET(get<T>, {0x460, 8, 0, 0})
	DMember(float)                                     IntroAnim_BallScale_B22BD0D945C252484DAB94BD6D5DC469        OFFSET(get<float>, {0x468, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           IntroAnim__Direction_B22BD0D945C252484DAB94BD6D5DC469       OFFSET(get<T>, {0x46C, 1, 0, 0})
	CMember(UTimelineComponent*)                       IntroAnim                                                   OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(AFortPlayerPawnAthena*)                    PlayerPawn                                                  OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FVector)                                   BallOffset                                                  OFFSET(getStruct<T>, {0x480, 12, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Athena/GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.IntroAnim__FinishedFunc
	// void IntroAnim__FinishedFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Athena/GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.IntroAnim__UpdateFunc
	// void IntroAnim__UpdateFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Athena/GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OutroAnim__FinishedFunc
	// void OutroAnim__FinishedFunc();                                                                                          // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Athena/GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.OutroAnim__UpdateFunc
	// void OutroAnim__UpdateFunc();                                                                                            // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Athena/GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.AnimateIn
	// void AnimateIn();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.AnimateOut
	// void AnimateOut();                                                                                                       // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_DanceStun.GCN_Athena_DanceStun_C.ExecuteUbergraph_GCN_Athena_DanceStun
	// void ExecuteUbergraph_GCN_Athena_DanceStun(int32_t EntryPoint);                                                          // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C
/// Size: 0x0041 (0x000440 - 0x000481)
class AGCN_Athena_Bush_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1153;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow2                                                      OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow1                                                      OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     BushMesh                                                    OFFSET(get<T>, {0x458, 8, 0, 0})
	CMember(UArrowComponent*)                          Arrow                                                       OFFSET(get<T>, {0x460, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Trail_Leaves                                                OFFSET(get<T>, {0x468, 8, 0, 0})
	CMember(AActor*)                                   PlayerPawn                                                  OFFSET(get<T>, {0x470, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 MID_Bush                                                    OFFSET(get<T>, {0x478, 8, 0, 0})
	DMember(bool)                                      IsActive                                                    OFFSET(get<bool>, {0x480, 1, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.Activated
	// void Activated(AActor* PlayerPawn);                                                                                      // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.WhileActive
	// bool WhileActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                  // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.On Player Step
	// void On Player Step();                                                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Athena/GCN_Athena_Bush.GCN_Athena_Bush_C.ExecuteUbergraph_GCN_Athena_Bush
	// void ExecuteUbergraph_GCN_Athena_Bush(int32_t EntryPoint);                                                               // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Athena/GCN_Athena_Backpack.GCN_Athena_Backpack_C
/// Size: 0x0010 (0x000440 - 0x000450)
class AGCN_Athena_Backpack_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	CMember(USkeletalMeshComponent*)                   BackpackSkelMesh                                            OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(AActor*)                                   PlayerPawn                                                  OFFSET(get<T>, {0x448, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Athena/GCN_Athena_Backpack.GCN_Athena_Backpack_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/NPC/Tunneler/GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C
/// Size: 0x0010 (0x0003C0 - 0x0003D0)
class AGCN_Tunneler_TeleportNPC_TunnelSegment_C : public AGameplayCueNotify_Actor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3C0, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x3C8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Tunneler/GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Tunneler/GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Tunneler/GCN_Tunneler_TeleportNPC_TunnelSegment.GCN_Tunneler_TeleportNPC_TunnelSegment_C.ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment
	// void ExecuteUbergraph_GCN_Tunneler_TeleportNPC_TunnelSegment(int32_t EntryPoint);                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Tunneler/GCN_Tunneler_TeleportNPC.GCN_Tunneler_TeleportNPC_C
/// Size: 0x0008 (0x000440 - 0x000448)
class AGCN_Tunneler_TeleportNPC_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Tunneler/GCN_Tunneler_TeleportNPC.GCN_Tunneler_TeleportNPC_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Tunneler/GCN_Tunneler_TeleportNPC.GCN_Tunneler_TeleportNPC_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Tunneler/GCN_Tunneler_TeleportNPC.GCN_Tunneler_TeleportNPC_C.ExecuteUbergraph_GCN_Tunneler_TeleportNPC
	// void ExecuteUbergraph_GCN_Tunneler_TeleportNPC(int32_t EntryPoint);                                                      // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Taker/GCNL_Taker_TRV_DaytimeVulnerability.GCNL_Taker_TRV_DaytimeVulnerability_C
/// Size: 0x0008 (0x000440 - 0x000448)
class AGCNL_Taker_TRV_DaytimeVulnerability_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(UStaticMeshComponent*)                     SM_VampireDaylight                                          OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Taker/GCNL_Taker_TRV_DaytimeVulnerability.GCNL_Taker_TRV_DaytimeVulnerability_C.OnWhileActiveParticleSystemDeactivate
	// void OnWhileActiveParticleSystemDeactivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/NPC/Taker/GCNL_Taker_TRV_DaytimeVulnerability.GCNL_Taker_TRV_DaytimeVulnerability_C.OnWhileActiveParticleSystemActivate
	// void OnWhileActiveParticleSystemActivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/NPC/Taker/GCNL_Taker_TRV_DaytimeVulnerability.GCNL_Taker_TRV_DaytimeVulnerability_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C
/// Size: 0x0049 (0x000440 - 0x000489)
class AGCN_TakerMarkedForDeath_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1161;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 OverHeadEffect                                              OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UFortMiniMapComponent*)                    MiniMapCrosshair                                            OFFSET(get<T>, {0x450, 8, 0, 0})
	CMember(UFortMiniMapComponent*)                    MiniMapIconBackground                                       OFFSET(get<T>, {0x458, 8, 0, 0})
	SMember(FFortFeedbackHandle)                       TakerFeedbackEvent                                          OFFSET(getStruct<T>, {0x460, 24, 0, 0})
	DMember(float)                                     TakerFeedbackRepeatDelay                                    OFFSET(get<float>, {0x478, 4, 0, 0})
	DMember(float)                                     TakerFeedbackInitialDelay                                   OFFSET(get<float>, {0x47C, 4, 0, 0})
	SMember(FGameplayTag)                              TC_GameplayStatusStun                                       OFFSET(getStruct<T>, {0x480, 8, 0, 0})
	DMember(bool)                                      PlayerIsStunned                                             OFFSET(get<bool>, {0x488, 1, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.SoulSuckCheck
	// void SoulSuckCheck();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Taker/GCN_TakerMarkedForDeath.GCN_TakerMarkedForDeath_C.ExecuteUbergraph_GCN_TakerMarkedForDeath
	// void ExecuteUbergraph_GCN_TakerMarkedForDeath(int32_t EntryPoint);                                                       // [0x154a140] None                 
};

/// Class /Game/Abilities/NPC/MiniBoss/Abilities/GCN_UG_Vortex.GCN_UG_Vortex_C
/// Size: 0x0040 (0x000440 - 0x000480)
class AGCN_UG_Vortex_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(UDecalComponent*)                          Decal                                                       OFFSET(get<T>, {0x448, 8, 0, 0})
	DMember(float)                                     Timeline_0_Fadein_75866BE446FADE6DDBA68D8D8FA84BF7          OFFSET(get<float>, {0x450, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_75866BE446FADE6DDBA68D8D8FA84BF7      OFFSET(get<T>, {0x454, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    OFFSET(get<T>, {0x458, 8, 0, 0})
	DMember(float)                                     OpacMult                                                    OFFSET(get<float>, {0x460, 4, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 Decal_MID                                                   OFFSET(get<T>, {0x468, 8, 0, 0})
	DMember(float)                                     EmissiveMult                                                OFFSET(get<float>, {0x470, 4, 0, 0})
	CMember(USoundBase*)                               Vortex_Powerup_Sound                                        OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/GCN_UG_Vortex.GCN_UG_Vortex_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/GCN_UG_Vortex.GCN_UG_Vortex_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/GCN_UG_Vortex.GCN_UG_Vortex_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/GCN_UG_Vortex.GCN_UG_Vortex_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/GCN_UG_Vortex.GCN_UG_Vortex_C.ExecuteUbergraph_GCN_UG_Vortex
	// void ExecuteUbergraph_GCN_UG_Vortex(int32_t EntryPoint);                                                                 // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/MiniBoss/Abilities/GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C
/// Size: 0x0028 (0x0003C0 - 0x0003E8)
class AGCN_GM_Vortex_Activate_C : public AGameplayCueNotify_Actor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1000;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3C0, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x3C8, 8, 0, 0})
	DMember(float)                                     Timeline_0_NewTrack_0_F918BF534BE0AED903D63EA6410E0D12      OFFSET(get<float>, {0x3D0, 4, 0, 0})
	CMember(TEnumAsByte<ETimelineDirection>)           Timeline_0__Direction_F918BF534BE0AED903D63EA6410E0D12      OFFSET(get<T>, {0x3D4, 1, 0, 0})
	CMember(UTimelineComponent*)                       Timeline                                                    OFFSET(get<T>, {0x3D8, 8, 0, 0})
	CMember(USoundBase*)                               VortexActivateSound                                         OFFSET(get<T>, {0x3E0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.Timeline_0__FinishedFunc
	// void Timeline_0__FinishedFunc();                                                                                         // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.Timeline_0__UpdateFunc
	// void Timeline_0__UpdateFunc();                                                                                           // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/GCN_GM_Vortex_Activate.GCN_GM_Vortex_Activate_C.ExecuteUbergraph_GCN_GM_Vortex_Activate
	// void ExecuteUbergraph_GCN_GM_Vortex_Activate(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/MiniBoss/Abilities/BaseAbilities/GCN_MiniBoss.GCN_MiniBoss_C
/// Size: 0x0160 (0x000440 - 0x0005A0)
class AGCN_MiniBoss_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1440;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(UFortMiniMapComponent*)                    MiniMapCrosshair                                            OFFSET(get<T>, {0x448, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NPCCharacterTypeMiniBoss1P                               OFFSET(getStruct<T>, {0x450, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_NPCCharacterTypeMiniBoss4P                               OFFSET(getStruct<T>, {0x470, 32, 0, 0})
	SMember(FLinearColor)                              _4P_Color                                                   OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FLinearColor)                              _1P_Color                                                   OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 VectorParameters                                            OFFSET(get<T>, {0x4B0, 80, 0, 0})
	CMember(TMap<FName, float>)                        ScalarParameters                                            OFFSET(get<T>, {0x500, 80, 0, 0})
	CMember(TMap<FString, UParticleSystem*>)           ElementalParticlesMap                                       OFFSET(get<T>, {0x550, 80, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/BaseAbilities/GCN_MiniBoss.GCN_MiniBoss_C.OverwriteElementalParticles
	// void OverwriteElementalParticles(AEnemyPawn_Parent_C* Enemy Pawn Parent);                                                // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/BaseAbilities/GCN_MiniBoss.GCN_MiniBoss_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/BaseAbilities/GCN_MiniBoss.GCN_MiniBoss_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/BaseAbilities/GCN_MiniBoss.GCN_MiniBoss_C.HideMiniBossGCN
	// void HideMiniBossGCN();                                                                                                  // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/BaseAbilities/GCN_MiniBoss.GCN_MiniBoss_C.SetMiniBossGCNColors
	// void SetMiniBossGCNColors();                                                                                             // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/BaseAbilities/GCN_MiniBoss.GCN_MiniBoss_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/BaseAbilities/GCN_MiniBoss.GCN_MiniBoss_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/NPC/MiniBoss/Abilities/BaseAbilities/GCN_MiniBoss.GCN_MiniBoss_C.ExecuteUbergraph_GCN_MiniBoss
	// void ExecuteUbergraph_GCN_MiniBoss(int32_t EntryPoint);                                                                  // [0x154a140] None                 
};

/// Class /Game/Abilities/NPC/Husk/Digger/GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C
/// Size: 0x0008 (0x000440 - 0x000448)
class AGCN_HuskDigger_TunnelMove_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Husk/Digger/GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Digger/GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Digger/GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.Trail
	// void Trail();                                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Husk/Digger/GCN_HuskDigger_TunnelMove.GCN_HuskDigger_TunnelMove_C.ExecuteUbergraph_GCN_HuskDigger_TunnelMove
	// void ExecuteUbergraph_GCN_HuskDigger_TunnelMove(int32_t EntryPoint);                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/NPC/Generic/GCN_Generic_Stunned.GCN_Generic_Stunned_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCN_Generic_Stunned_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
};

/// Class /Game/Abilities/NPC/Elemental/GCN_NPC_Lightning.GCN_NPC_Lightning_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCN_NPC_Lightning_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
};

/// Class /Game/Abilities/NPC/Elemental/GCN_NPC_Ice.GCN_NPC_Ice_C
/// Size: 0x0060 (0x000440 - 0x0004A0)
class AGCN_NPC_Ice_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1184;

public:
	DMember(float)                                     TransitionOutLength                                         OFFSET(get<float>, {0x440, 4, 0, 0})
	CMember(UParticleSystemComponent*)                 IceParticles                                                OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 VectorParameters                                            OFFSET(get<T>, {0x450, 80, 0, 0})


	/// Functions
	// Function /Game/Abilities/NPC/Elemental/GCN_NPC_Ice.GCN_NPC_Ice_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Elemental/GCN_NPC_Ice.GCN_NPC_Ice_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/NPC/Elemental/GCN_NPC_Ice.GCN_NPC_Ice_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/NPC/Elemental/GCN_NPC_Fire.GCN_NPC_Fire_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCN_NPC_Fire_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
};

/// Class /Game/Abilities/Mission/GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C
/// Size: 0x0030 (0x000440 - 0x000470)
class AGCN_RiftStaminaDrain_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	CMember(UStaticMeshComponent*)                     SM_DtB_StaminaDrainPlayer                                   OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 DrainMeshMaterial                                           OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 DrainBeamMaterial                                           OFFSET(get<T>, {0x450, 8, 0, 0})
	SMember(FVector)                                   DrainLocationOffset                                         OFFSET(getStruct<T>, {0x458, 12, 0, 0})
	SMember(FVector)                                   TargetLocation                                              OFFSET(getStruct<T>, {0x464, 12, 0, 0})


	/// Functions
	// Function /Game/Abilities/Mission/GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.OnWhileActiveParticleSystemDeactivate
	// void OnWhileActiveParticleSystemDeactivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Mission/GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.OnWhileActiveParticleSystemActivate
	// void OnWhileActiveParticleSystemActivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Mission/GCN_RiftStaminaDrain.GCN_RiftStaminaDrain_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C
/// Size: 0x0010 (0x000440 - 0x000450)
class AGCNL_PurpleStuff_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1104;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(APlayerPawn_Athena_Generic_C*)             PlayerActor                                                 OFFSET(get<T>, {0x448, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C.ExecuteUbergraph_GCNL_PurpleStuff
	// void ExecuteUbergraph_GCNL_PurpleStuff(int32_t EntryPoint);                                                              // [0x154a140] None                 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Misc/GCNL_GM_MaxHealthIncrease_Major.GCNL_GM_MaxHealthIncrease_Major_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCNL_GM_MaxHealthIncrease_Major_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Misc/GCNL_GM_MaxHealthIncrease_Major.GCNL_GM_MaxHealthIncrease_Major_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Misc/GCNL_GM_MaxHealthIncrease_Major.GCNL_GM_MaxHealthIncrease_Major_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_Snare.GCNL_GM_Snare_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCNL_GM_Snare_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_Snare.GCNL_GM_Snare_C.OnWhileActiveParticleSystemActivate
	// void OnWhileActiveParticleSystemActivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_Snare.GCNL_GM_Snare_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C
/// Size: 0x000C (0x000440 - 0x00044C)
class AGCNL_GM_ReflectDamage_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1100;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	DMember(float)                                     ParticleMeshLength                                          OFFSET(get<float>, {0x448, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ReceiveTick
	// void ReceiveTick(float DeltaSeconds);                                                                                    // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_ReflectDamage.GCNL_GM_ReflectDamage_C.ExecuteUbergraph_GCNL_GM_ReflectDamage
	// void ExecuteUbergraph_GCNL_GM_ReflectDamage(int32_t EntryPoint);                                                         // [0x154a140] None                 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C
/// Size: 0x0018 (0x000440 - 0x000458)
class AGCNL_GM_OnLowHealth_Enrage_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	CMember(UParticleSystemComponent*)                 BodyMistFX                                                  OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Hand_Trail_L                                                OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 HandTrailR                                                  OFFSET(get<T>, {0x450, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnLowHealth_Enrage.GCNL_GM_OnLowHealth_Enrage_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnLowHealth_Berzerker.GCNL_GM_OnLowHealth_Berzerker_C
/// Size: 0x0008 (0x000440 - 0x000448)
class AGCNL_GM_OnLowHealth_Berzerker_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1096;

public:
	CMember(UParticleSystemComponent*)                 BodyMistFX                                                  OFFSET(get<T>, {0x440, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnLowHealth_Berzerker.GCNL_GM_OnLowHealth_Berzerker_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnLowHealth_Berzerker.GCNL_GM_OnLowHealth_Berzerker_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnLowHealth_Berzerker.GCNL_GM_OnLowHealth_Berzerker_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmgVulnerabilityStacking.GCNL_GM_OnDmgVulnerabilityStacking_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCNL_GM_OnDmgVulnerabilityStacking_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmgVulnerabilityStacking.GCNL_GM_OnDmgVulnerabilityStacking_C.OnWhileActiveParticleSystemActivate
	// void OnWhileActiveParticleSystemActivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmgVulnerabilityStacking.GCNL_GM_OnDmgVulnerabilityStacking_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmgVulnerability.GCNL_GM_OnDmgVulnerability_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCNL_GM_OnDmgVulnerability_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmgVulnerability.GCNL_GM_OnDmgVulnerability_C.OnWhileActiveParticleSystemActivate
	// void OnWhileActiveParticleSystemActivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmgVulnerability.GCNL_GM_OnDmgVulnerability_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmgReceived_Slow.GCNL_GM_OnDmgReceived_Slow_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCNL_GM_OnDmgReceived_Slow_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmgReceived_Slow.GCNL_GM_OnDmgReceived_Slow_C.OnWhileActiveParticleSystemActivate
	// void OnWhileActiveParticleSystemActivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmgReceived_Slow.GCNL_GM_OnDmgReceived_Slow_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmgCorrosion.GCNL_GM_OnDmgCorrosion_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCNL_GM_OnDmgCorrosion_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmgCorrosion.GCNL_GM_OnDmgCorrosion_C.OnWhileActiveParticleSystemActivate
	// void OnWhileActiveParticleSystemActivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmgCorrosion.GCNL_GM_OnDmgCorrosion_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmg_SpeedBuff.GCNL_GM_OnDmg_SpeedBuff_C
/// Size: 0x0000 (0x000440 - 0x000440)
class AGCNL_GM_OnDmg_SpeedBuff_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmg_SpeedBuff.GCNL_GM_OnDmg_SpeedBuff_C.OnWhileActiveParticleSystemActivate
	// void OnWhileActiveParticleSystemActivate(UParticleSystemComponent* WhileActiveParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_OnDmg_SpeedBuff.GCNL_GM_OnDmg_SpeedBuff_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_Fury.GCNL_GM_Fury_C
/// Size: 0x00B0 (0x000440 - 0x0004F0)
class AGCNL_GM_Fury_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1264;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x440, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 FuryPS                                                      OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 VectorParameters                                            OFFSET(get<T>, {0x450, 80, 0, 0})
	CMember(TMap<FName, float>)                        ScalarParameters                                            OFFSET(get<T>, {0x4A0, 80, 0, 0})


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_Fury.GCNL_GM_Fury_C.DisableFuryPS
	// void DisableFuryPS();                                                                                                    // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_Fury.GCNL_GM_Fury_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_Fury.GCNL_GM_Fury_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_Fury.GCNL_GM_Fury_C.BindOnDied
	// void BindOnDied(AEnemyPawn_Parent_C* EnemyPawnParentReference);                                                          // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_Fury.GCNL_GM_Fury_C.OnEnemyDeath
	// void OnEnemyDeath(AActor* DeadActor, float Damage, AFortPawn* InstigatedBy, FVector HitLocation, AActor* DamageCauser);  // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_GM_Fury.GCNL_GM_Fury_C.ExecuteUbergraph_GCNL_GM_Fury
	// void ExecuteUbergraph_GCNL_GM_Fury(int32_t EntryPoint);                                                                  // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_Enemy_Frozen.GCNL_Enemy_Frozen_C
/// Size: 0x0018 (0x000440 - 0x000458)
class AGCNL_Enemy_Frozen_C : public AFortGameplayCueNotify_Looping
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1112;

public:
	CMember(UParticleSystemComponent*)                 Ice_Particles                                               OFFSET(get<T>, {0x440, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     IceMesh                                                     OFFSET(get<T>, {0x448, 8, 0, 0})
	CMember(UMaterialInstanceDynamic*)                 IceMeshMID                                                  OFFSET(get<T>, {0x450, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_Enemy_Frozen.GCNL_Enemy_Frozen_C.OnRemove
	// bool OnRemove(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_Enemy_Frozen.GCNL_Enemy_Frozen_C.OnActive
	// bool OnActive(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                     // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNL_Enemy_Frozen.GCNL_Enemy_Frozen_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/Traps/CartTrack/GCNS_Cart_InstantHealFX.GCNS_Cart_InstantHealFX_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_Cart_InstantHealFX_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Outlander/Perks/HitemWhileTheyreDown/GC_HitEmWhileTheyReDown_Burst.GC_HitEmWhileTheyReDown_Burst_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGC_HitEmWhileTheyReDown_Burst_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Outlander/Perks/HeavyStuff/GCNS_Outlander_HeavyStuffDamage.GCNS_Outlander_HeavyStuffDamage_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_Outlander_HeavyStuffDamage_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Outlander/Actives/AntiMaterialCharge/GCNS_TestAntiMaterial.GCNS_TestAntiMaterial_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_TestAntiMaterial_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Ninja/Perks/ShieldBreakStun/GC_NinjaShieldBreakStun.GC_NinjaShieldBreakStun_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGC_NinjaShieldBreakStun_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Ninja/Perks/MantisStrike/GC_Ninja_MantisLeap_MantisStrikeFX.GC_Ninja_MantisLeap_MantisStrikeFX_C
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UGC_Ninja_MantisLeap_MantisStrikeFX_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UParticleSystem*)                          P_MantisStrikeImpact                                        OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(USoundBase*)                               MantisStrikeImpactCue                                       OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Ninja/Perks/MantisStrike/GC_Ninja_MantisLeap_MantisStrikeFX.GC_Ninja_MantisLeap_MantisStrikeFX_C.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Abilities/Player/Ninja/Perks/MantisLeap/GC_Ninja_MantisLeap_activationFX.GC_Ninja_MantisLeap_ActivationFX_C
/// Size: 0x0028 (0x0000B0 - 0x0000D8)
class UGC_Ninja_MantisLeap_ActivationFX_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(UParticleSystem*)                          MantisLeapEffect                                            OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FName)                                     FootSocketL                                                 OFFSET(getStruct<T>, {0xB8, 8, 0, 0})
	SMember(FName)                                     FootSocketR                                                 OFFSET(getStruct<T>, {0xC0, 8, 0, 0})
	CMember(USoundBase*)                               MantisLeapCue                                               OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     MantisLeapForceFeedback                                     OFFSET(get<T>, {0xD0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Ninja/Perks/MantisLeap/GC_Ninja_MantisLeap_activationFX.GC_Ninja_MantisLeap_ActivationFX_C.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Abilities/Player/Ninja/Actives/SmokeBomb/GC_Ninja_SmokeBomb_ImpactFX.GC_Ninja_SmokeBomb_ImpactFX_C
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UGC_Ninja_SmokeBomb_ImpactFX_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(UForceFeedbackEffect*)                     SmokeBombForceFeedbackNear                                  OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     SmokeBombForceFeedbackFar                                   OFFSET(get<T>, {0xB8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Ninja/Actives/SmokeBomb/GC_Ninja_SmokeBomb_ImpactFX.GC_Ninja_SmokeBomb_ImpactFX_C.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/GCNS_Generic_BotTurret_Impact.GCNS_Generic_BotTurret_Impact_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_Generic_BotTurret_Impact_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Generic/Gadgets/AdrenalineRush/GCNS_Generic_AdrenalineRushHeal.GCNS_Generic_AdrenalineRushHeal_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_Generic_AdrenalineRushHeal_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/GC/GC_Teleport_Out.GC_Teleport_Out_C
/// Size: 0x0004 (0x0000B0 - 0x0000B4)
class UGC_Teleport_Out_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 180;

public:
	DMember(float)                                     Default_Play_Length                                         OFFSET(get<float>, {0xB0, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/GC/GC_Teleport_Out.GC_Teleport_Out_C.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Abilities/Player/GC/GC_Teleport_in.GC_Teleport_In_C
/// Size: 0x0004 (0x0000B0 - 0x0000B4)
class UGC_Teleport_In_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 180;

public:
	DMember(float)                                     Default_Play_Length                                         OFFSET(get<float>, {0xB0, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/GC/GC_Teleport_in.GC_Teleport_In_C.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Abilities/Player/Constructor/Perks/KineticOverload/GCNS_Constructor_KineticOverload.GCNS_Constructor_KineticOverload_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_Constructor_KineticOverload_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/Firewall/GC/GC_Constructor_Firewall_Activate.GC_Constructor_Firewall_Activate_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGC_Constructor_Firewall_Activate_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Constructor/Perks/FeelTheBase/GC/GCN_Constructor_FeelTheBase_HuskDeath.GCN_Constructor_FeelTheBase_HuskDeath_C
/// Size: 0x0004 (0x0000B0 - 0x0000B4)
class UGCN_Constructor_FeelTheBase_HuskDeath_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 180;

public:
	DMember(float)                                     ParticleVelocity                                            OFFSET(get<float>, {0xB0, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Constructor/Perks/FeelTheBase/GC/GCN_Constructor_FeelTheBase_HuskDeath.GCN_Constructor_FeelTheBase_HuskDeath_C.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Abilities/Player/Constructor/Perks/FeelTheBase/GC/GCN_Constructor_FeelTheBase_Activate.GCN_Constructor_FeelTheBase_Activate_C
/// Size: 0x004C (0x0000B0 - 0x0000FC)
class UGCN_Constructor_FeelTheBase_Activate_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 252;

public:
	SMember(FVector)                                   FeelTheBaseFXScale                                          OFFSET(getStruct<T>, {0xB0, 12, 0, 0})
	SMember(FVector)                                   TurnUpTheBaseFXScale                                        OFFSET(getStruct<T>, {0xBC, 12, 0, 0})
	CMember(USoundBase*)                               FeelTheBaseSound                                            OFFSET(get<T>, {0xC8, 8, 0, 0})
	CMember(USoundBase*)                               TurnUpTheBaseSound                                          OFFSET(get<T>, {0xD0, 8, 0, 0})
	SMember(FVector)                                   LocationOffset                                              OFFSET(getStruct<T>, {0xD8, 12, 0, 0})
	CMember(UParticleSystem*)                          FeelTheBase_FX                                              OFFSET(get<T>, {0xE8, 8, 0, 0})
	CMember(UParticleSystem*)                          TurnUpTheBase_FX                                            OFFSET(get<T>, {0xF0, 8, 0, 0})
	DMember(float)                                     FloatParam                                                  OFFSET(get<float>, {0xF8, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Constructor/Perks/FeelTheBase/GC/GCN_Constructor_FeelTheBase_Activate.GCN_Constructor_FeelTheBase_Activate_C.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Abilities/Player/Constructor/Actives/BASE/GCNS_Constructor_ElectrifiedFloors.GCNS_Constructor_ElectrifiedFloors_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_Constructor_ElectrifiedFloors_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Constructor/Actives/BASE/GCNS_Constructor_ContainmentUnitFX.GCNS_Constructor_ContainmentUnitFX_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_Constructor_ContainmentUnitFX_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Commando/Perks/UpCloseAndPersonal/GCNS_Commando_UpCloseAndPersonal.GCNS_Commando_UpCloseAndPersonal_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_Commando_UpCloseAndPersonal_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Commando/Perks/Twinblast/GC/GCN_Twinblast.GCN_Twinblast_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCN_Twinblast_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Game/Abilities/Player/Commando/Perks/Twinblast/GC/GCN_Twinblast.GCN_Twinblast_C.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Abilities/Player/Commando/Perks/ShortFuze/GCNS_Commando_ShortFuze.GCNS_Commando_ShortFuze_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_Commando_ShortFuze_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Commando/Perks/IfItBleeds/GCNS_Commando_IfItBleedsTick.GCNS_Commando_IfItBleedsTick_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_Commando_IfItBleedsTick_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Commando/Perks/FlakVest/GC/GC_Commando_FlakVest_RemoveStack.GC_Commando_FlakVest_RemoveStack_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGC_Commando_FlakVest_RemoveStack_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Commando/Perks/FlakVest/GC/GC_Commando_FlakVest_AddStack.GC_Commando_FlakVest_AddStack_C
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UGC_Commando_FlakVest_AddStack_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     F_MaxStacks                                                 OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(UParticleSystem*)                          PS_Stacks                                                   OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UParticleSystem*)                          PS_MaxStacks                                                OFFSET(get<T>, {0xC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Commando/Perks/FlakVest/GC/GC_Commando_FlakVest_AddStack.GC_Commando_FlakVest_AddStack_C.K2_HandleGameplayCue
	// void K2_HandleGameplayCue(AActor* MyTarget, TEnumAsByte<EGameplayCueEvent> EventType, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/Player/Commando/Actives/Shockwave/GC_Commando_Shockwave.GC_Commando_Shockwave_C
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UGC_Commando_Shockwave_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	DMember(float)                                     ShockwaveRefractionRingHeight                               OFFSET(get<float>, {0xB0, 4, 0, 0})
	CMember(UClass*)                                   ShockwaveCameraShake                                        OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ShockwaveForceFeedback                                      OFFSET(get<T>, {0xC0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Commando/Actives/Shockwave/GC_Commando_Shockwave.GC_Commando_Shockwave_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/Player/Athena/GCN_Athena_LowGravity_Liftoff.GCN_Athena_LowGravity_Liftoff_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCN_Athena_LowGravity_Liftoff_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Player/Athena/GCN_Athena_LowGravity_Land.GCN_Athena_LowGravity_Land_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCN_Athena_LowGravity_Land_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/NPC/Taker/GCNS_Taker_TRV_Lifesuck.GCNS_Taker_TRV_Lifesuck_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_Taker_TRV_Lifesuck_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/Mission/GCN_RiftZapPlayer.GCN_RiftZapPlayer_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCN_RiftZapPlayer_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Game/Abilities/Mission/GCN_RiftZapPlayer.GCN_RiftZapPlayer_C.OnExecute
	// bool OnExecute(AActor* MyTarget, FGameplayCueParameters& Parameters);                                                    // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Player/GCNS_GM_PlayerOnDmgLifeLeech.GCNS_GM_PlayerOnDmgLifeLeech_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_GM_PlayerOnDmgLifeLeech_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Player/GCNS_GM_PlayerOnDmgLifeLeech.GCNS_GM_PlayerOnDmgLifeLeech_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Player/GCNS_GM_Player_OnShieldDestroyed_AOE.GCNS_GM_Player_OnShieldDestroyed_AOE_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_GM_Player_OnShieldDestroyed_AOE_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Player/GCNS_GM_OnDmgReceived_DmgShare.GCNS_GM_OnDmgReceived_DmgShare_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_GM_OnDmgReceived_DmgShare_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNS_GM_OnDmgLifeLeech.GCNS_GM_OnDmgLifeLeech_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_GM_OnDmgLifeLeech_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNS_GM_OnDmgLifeLeech.GCNS_GM_OnDmgLifeLeech_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNS_GM_OnDeathExplosionFriendly.GCNS_GM_OnDeathExplosionFriendly_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_GM_OnDeathExplosionFriendly_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNS_GM_OnDeathExplosion.GCNS_GM_OnDeathExplosion_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_GM_OnDeathExplosion_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNS_GM_OnDeathAreaHeal.GCNS_GM_OnDeathAreaHeal_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_GM_OnDeathAreaHeal_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNS_GM_OnDeathAreaHeal.GCNS_GM_OnDeathAreaHeal_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNS_GM_OnDeathAlliedHeal.GCNS_GM_OnDeathAlliedHeal_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_GM_OnDeathAlliedHeal_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNS_GM_OnDeath_SpeedUpFriends.GCNS_GM_OnDeath_SpeedUpFriends_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_GM_OnDeath_SpeedUpFriends_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GCNS_GM_KnockbackAOE.GCNS_GM_KnockbackAOE_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_GM_KnockbackAOE_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Game/Abilities/GameplayModifiers/Mutations/Enemy/GC_NS_OnDmgDmgPulse.GC_NS_OnDmgDmgPulse_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGC_NS_OnDmgDmgPulse_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Game/Abilities/GameplayModifiers/Mutations/Enemy/GC_NS_OnDmgDmgPulse.GC_NS_OnDmgDmgPulse_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnPreviewEmoji.GCNS_GM_OnPreviewEmoji_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_GM_OnPreviewEmoji_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnPreviewEmoji.GCNS_GM_OnPreviewEmoji_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayEmoji.GCNS_GM_OnDisplayEmoji_C
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UGCNS_GM_OnDisplayEmoji_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:


	/// Functions
	// Function /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayEmoji.GCNS_GM_OnDisplayEmoji_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C
/// Size: 0x000C (0x0000B0 - 0x0000BC)
class UGCNS_GM_OnDisplayChatEmoji_C : public UFortGameplayCueNotify_Simple
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 188;

public:
	SMember(FVector)                                   ParticleRelativeOffset                                      OFFSET(getStruct<T>, {0xB0, 12, 0, 0})


	/// Functions
	// Function /Game/Abilities/Emotes/GameplayCues/GCNS_GM_OnDisplayChatEmoji.GCNS_GM_OnDisplayChatEmoji_C.OnStartParticleSystemSpawned
	// void OnStartParticleSystemSpawned(UParticleSystemComponent* SpawnedParticleSysComponent, FGameplayCueParameters& Parameters); // [0x154a140] Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/AccountBuff/Buff_PartyXPBoost.Buff_PartyXPBoost_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UBuff_PartyXPBoost_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Mission/GE_Resist_Damage_AoE.GE_Resist_Damage_AoE_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Resist_Damage_AoE_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/Gadgets/SupplyDrop/GE_SupplyDrop_BaseMagnitude.GE_SupplyDrop_BaseMagnitude_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_SupplyDrop_BaseMagnitude_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/CommandConsole/CCGameplayEffects.CCGameplayEffects_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UCCGameplayEffects_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/UtilityItems/B_UtilityItem_Generic.B_UtilityItem_Generic_C
/// Size: 0x0000 (0x000AC8 - 0x000AC8)
class AB_UtilityItem_Generic_C : public AFortWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/B_GrenadeCameraShake.B_GrenadeCameraShake_C
/// Size: 0x0000 (0x000160 - 0x000160)
class UB_GrenadeCameraShake_C : public UCameraShake
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
};

/// Class /Game/Abilities/Weapons/Ranged/GE_Ranged_GenericDamage.GE_Ranged_GenericDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Ranged_GenericDamage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Weapons/Ranged/GE_Ranged_GenericDamage_Explosive.GE_Ranged_GenericDamage_Explosive_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Ranged_GenericDamage_Explosive_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/Gadgets/BottleRocket/GE_BottleRocketDamage.GE_BottleRocketDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_BottleRocketDamage_C : public UGET_DirectEnergyDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/Gadgets/BottleRocket/GE_BottleRocketCooldown.GE_BottleRocketCooldown_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_BottleRocketCooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Weapons/Ranged/GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C
/// Size: 0x0008 (0x000B00 - 0x000B08)
class UGA_Ranged_GenericDamage_C : public UFortGameplayAbility_RangedWeapon
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2824;

public:
	SMember(FGameplayTag)                              GT_EventWeaponFire                                          OFFSET(getStruct<T>, {0xB00, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Weapons/Ranged/GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.GetEventData
	// void GetEventData(FGameplayTag EventTag, FGameplayEventData& GameplayEventData);                                         // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Weapons/Ranged/GA_Ranged_GenericDamage.GA_Ranged_GenericDamage_C.K2_CommitExecute
	// void K2_CommitExecute();                                                                                                 // [0x154a140] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/Abilities/Weapons/Ranged/Projectile/GA_Ranged_GenericProjectileExplosive.GA_Ranged_GenericProjectileExplosive_C
/// Size: 0x0000 (0x000B08 - 0x000B08)
class UGA_Ranged_GenericProjectileExplosive_C : public UGA_Ranged_GenericDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2824;

public:
};

/// Class /Game/Abilities/Weapons/Ranged/Projectile/GA_Ranged_GenericProjectileImpact.GA_Ranged_GenericProjectileImpact_C
/// Size: 0x0000 (0x000B08 - 0x000B08)
class UGA_Ranged_GenericProjectileImpact_C : public UGA_Ranged_GenericDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2824;

public:
};

/// Class /Game/Abilities/Weapons/Ranged/GA_Ranged_GenericDamage_NoMagazine.GA_Ranged_GenericDamage_NoMagazine_C
/// Size: 0x0000 (0x000B08 - 0x000B08)
class UGA_Ranged_GenericDamage_NoMagazine_C : public UGA_Ranged_GenericDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2824;

public:
};

/// Class /Game/Abilities/Player/Generic/UtilityItems/B_UtilityItem_Generic_Athena.B_UtilityItem_Generic_Athena_C
/// Size: 0x0000 (0x000AC8 - 0x000AC8)
class AB_UtilityItem_Generic_Athena_C : public AB_UtilityItem_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
};

/// Class /Game/Abilities/Traps/CeilingFalling/GE_Trap_CeilingFalling.GE_Trap_CeilingFalling_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Trap_CeilingFalling_C : public UGET_DirectBluntDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Traps/FloorJumpPad/FloorJumpPad_Immunity_Applied.FloorJumpPad_Immunity_Applied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UFloorJumpPad_Immunity_Applied_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/GameplayEffects/GE_Generic_Character_Launch.GE_Generic_Character_Launch_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Generic_Character_Launch_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Constructor/TacticalPerks/PlasmaGrenades/GE_Constructor_Tactical_PlasmaGrenades_Applied.GE_Constructor_Tactical_PlasmaGrenades_Applied_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Constructor_Tactical_PlasmaGrenades_Applied_C : public UGET_PeriodicEnergyDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Weapons/Melee/GE_Melee_GenericDamage.GE_Melee_GenericDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Melee_GenericDamage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C
/// Size: 0x00BA (0x000AE8 - 0x000BA2)
class UGAT_CommandoActiveAbility_C : public UGAT_ActiveAbility_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2978;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAE8, 8, 0, 0})
	SMember(FGameplayEventData)                        Event_Data                                                  OFFSET(getStruct<T>, {0xAF0, 168, 0, 0})
	CMember(AFortPawn*)                                CommandoPlayerPawn                                          OFFSET(get<T>, {0xB98, 8, 0, 0})
	DMember(bool)                                      isAutoCommitted                                             OFFSET(get<bool>, {0xBA0, 1, 0, 0})
	DMember(bool)                                      isStaminaLockedOut                                          OFFSET(get<bool>, {0xBA1, 1, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Parents/GAT_CommandoActiveAbility.GAT_CommandoActiveAbility_C.ExecuteUbergraph_GAT_CommandoActiveAbility
	// void ExecuteUbergraph_GAT_CommandoActiveAbility(int32_t EntryPoint);                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Commando/TacticalPerks/Clusterbomb/GE_Commando_Tactical_ClusterBomb_Damage.GE_Commando_Tactical_ClusterBomb_Damage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Commando_Tactical_ClusterBomb_Damage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Commando/Perks/ClusterBomb/GE_Commando_ClusterBombDamage.GE_Commando_ClusterBombDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Commando_ClusterBombDamage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/GE_Commando_FragGrenadeKeepOutDamage.GE_Commando_FragGrenadeKeepOutDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Commando_FragGrenadeKeepOutDamage_C : public UGET_DirectEnergyDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/GE_Commando_FragGrenadeDamage.GE_Commando_FragGrenadeDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Commando_FragGrenadeDamage_C : public UGET_DirectEnergyDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/GE_Commando_FragGrenadeCooldown.GE_Commando_FragGrenadeCooldown_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Commando_FragGrenadeCooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C
/// Size: 0x0044 (0x000820 - 0x000864)
class AB_Prj_Commando_FragGrenade_Cluster_C : public AFortProjectileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2148;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x820, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 ParticleSystem1                                             OFFSET(get<T>, {0x828, 8, 0, 0})
	CMember(UAudioComponent*)                          Audio1                                                      OFFSET(get<T>, {0x830, 8, 0, 0})
	CMember(USoundBase*)                               BounceSound                                                 OFFSET(get<T>, {0x838, 8, 0, 0})
	CMember(UParticleSystem*)                          P_Explosion                                                 OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(USoundBase*)                               ExplosionSound                                              OFFSET(get<T>, {0x848, 8, 0, 0})
	SMember(FVector)                                   ExplosionLocation                                           OFFSET(getStruct<T>, {0x850, 12, 0, 0})
	DMember(float)                                     MinExplosionDelay                                           OFFSET(get<float>, {0x85C, 4, 0, 0})
	DMember(float)                                     MaxExplosionDelay                                           OFFSET(get<float>, {0x860, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.OnStop
	// void OnStop(FHitResult& Hit);                                                                                            // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);           // [0x154a140] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.OnExploded
	// void OnExploded(TArray<AActor*>& HitActors, TArray<FHitResult>& HitResults);                                             // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade_Cluster.B_Prj_Commando_FragGrenade_Cluster_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster
	// void ExecuteUbergraph_B_Prj_Commando_FragGrenade_Cluster(int32_t EntryPoint);                                            // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
/// Size: 0x02D0 (0x000820 - 0x000AF0)
class AB_Prj_Commando_FragGrenade_C : public AFortProjectileBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x820, 8, 0, 0})
	CMember(UCapsuleComponent*)                        OverlapCapsule                                              OFFSET(get<T>, {0x828, 8, 0, 0})
	CMember(URotatingMovementComponent*)               RotatingMovement                                            OFFSET(get<T>, {0x830, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Fuse_Particle                                               OFFSET(get<T>, {0x838, 8, 0, 0})
	CMember(UStaticMeshComponent*)                     Mesh                                                        OFFSET(get<T>, {0x840, 8, 0, 0})
	CMember(UAudioComponent*)                          GrenadeFuse_AudioComponent                                  OFFSET(get<T>, {0x848, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 Effect_Distance                                             OFFSET(get<T>, {0x850, 8, 0, 0})
	CMember(UParticleSystem*)                          P_Explosion                                                 OFFSET(get<T>, {0x858, 8, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0x860, 12, 0, 0})
	CMember(USoundBase*)                               Cue_DistantSound                                            OFFSET(get<T>, {0x870, 8, 0, 0})
	CMember(USoundBase*)                               Cue_CloseSound                                              OFFSET(get<T>, {0x878, 8, 0, 0})
	DMember(float)                                     ExplosionRadius                                             OFFSET(get<float>, {0x880, 4, 0, 0})
	DMember(int32_t)                                   NumberOfBouncesTillExplode                                  OFFSET(get<int32_t>, {0x884, 4, 0, 0})
	DMember(int32_t)                                   CurrentNumberOfBounces                                      OFFSET(get<int32_t>, {0x888, 4, 0, 0})
	CMember(USoundBase*)                               Cue_GrenadeFuseSound                                        OFFSET(get<T>, {0x890, 8, 0, 0})
	DMember(float)                                     BouncePawnAgainstPawnGravityScale                           OFFSET(get<float>, {0x898, 4, 0, 0})
	SMember(FHitResult)                                StoredHit                                                   OFFSET(getStruct<T>, {0x8A0, 136, 0, 0})
	CMember(UForceFeedbackEffect*)                     ExplosionForceFeedbackNear                                  OFFSET(get<T>, {0x928, 8, 0, 0})
	CMember(UForceFeedbackEffect*)                     ExplosionForceFeedbackFar                                   OFFSET(get<T>, {0x930, 8, 0, 0})
	DMember(int32_t)                                   MaxClusterGrenades                                          OFFSET(get<int32_t>, {0x938, 4, 0, 0})
	SMember(FGameplayTag)                              EC_ClusterExplosion                                         OFFSET(getStruct<T>, {0x940, 8, 0, 0})
	DMember(bool)                                      bHasCluster                                                 OFFSET(get<bool>, {0x948, 1, 0, 0})
	CMember(UClass*)                                   Prj_Cluster                                                 OFFSET(get<T>, {0x950, 8, 0, 0})
	SMember(FFortGameplayEffectContainerSpec)          ClusterContainerSpec                                        OFFSET(getStruct<T>, {0x958, 128, 0, 0})
	DMember(bool)                                      bHasKeepOut                                                 OFFSET(get<bool>, {0x9D8, 1, 0, 0})
	SMember(FFortGameplayEffectContainerSpec)          KeepOutContainerSpec                                        OFFSET(getStruct<T>, {0x9E0, 128, 0, 0})
	CMember(UClass*)                                   AOE_KeepOut                                                 OFFSET(get<T>, {0xA60, 8, 0, 0})
	DMember(bool)                                      bHasClusterTactical                                         OFFSET(get<bool>, {0xA68, 1, 0, 0})
	SMember(FFortGameplayEffectContainerSpec)          Cluster_Tactical_Container_Spec                             OFFSET(getStruct<T>, {0xA70, 128, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnKeepOut
	// void SpawnKeepOut();                                                                                                     // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.SpawnClusters
	// void SpawnClusters();                                                                                                    // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CalcGrenadeSpeed
	// float CalcGrenadeSpeed(float Angle);                                                                                     // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnRep_StoredHit
	// void OnRep_StoredHit();                                                                                                  // [0x154a140] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnStop
	// void OnStop(FHitResult& Hit);                                                                                            // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Stop_Rotation
	// void Stop_Rotation();                                                                                                    // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnExploded
	// void OnExploded(TArray<AActor*>& HitActors, TArray<FHitResult>& HitResults);                                             // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveAnyDamage
	// void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);           // [0x154a140] BlueprintAuthorityOnly|Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.OnBounce
	// void OnBounce(FHitResult& Hit);                                                                                          // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
	// void BndEvt__OverlapCapsule_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.On Destroy Grenade
	// void On Destroy Grenade(AActor* DestroyedActor);                                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Bind Destroy Grenade
	// void Bind Destroy Grenade();                                                                                             // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Force On Exploded Effects
	// void Force On Exploded Effects();                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.Unbind Destroy Grenade
	// void Unbind Destroy Grenade();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.TriggerDoExplsoion
	// void TriggerDoExplsoion();                                                                                               // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.CheckKeepOutAndCluster
	// void CheckKeepOutAndCluster();                                                                                           // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C.ExecuteUbergraph_B_Prj_Commando_FragGrenade
	// void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int32_t EntryPoint);                                                    // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Traps/WallElectric/GA_Trap_WallElectric.GA_Trap_WallElectric_C
/// Size: 0x001C (0x000AF0 - 0x000B0C)
class UGA_Trap_WallElectric_C : public UGA_TrapGeneric_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2828;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAF0, 8, 0, 0})
	CMember(TArray<AActor*>)                           HitActors                                                   OFFSET(get<T>, {0xAF8, 16, 0, 0})
	DMember(int32_t)                                   targetCount                                                 OFFSET(get<int32_t>, {0xB08, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/Traps/WallElectric/GA_Trap_WallElectric.GA_Trap_WallElectric_C.Cancelled_CEF58A2B40484B3CF27922840D6C4E82
	// void Cancelled_CEF58A2B40484B3CF27922840D6C4E82(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/WallElectric/GA_Trap_WallElectric.GA_Trap_WallElectric_C.Targeted_CEF58A2B40484B3CF27922840D6C4E82
	// void Targeted_CEF58A2B40484B3CF27922840D6C4E82(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/WallElectric/GA_Trap_WallElectric.GA_Trap_WallElectric_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Traps/WallElectric/GA_Trap_WallElectric.GA_Trap_WallElectric_C.ExecuteUbergraph_GA_Trap_WallElectric
	// void ExecuteUbergraph_GA_Trap_WallElectric(int32_t EntryPoint);                                                          // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Traps/CeilingFalling/GA_Trap_CeilingFalling.GA_Trap_CeilingFalling_C
/// Size: 0x0000 (0x000B10 - 0x000B10)
class UGA_Trap_CeilingFalling_C : public UFortGameplayAbility_CeilingFallingTrap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2832;

public:
};

/// Class /Game/Abilities/Traps/CeilingElectricWood/GA_Trap_CeilingElectricWood.GA_Trap_CeilingElectricWood_C
/// Size: 0x0000 (0x000AF0 - 0x000AF0)
class UGA_Trap_CeilingElectricWood_C : public UGA_TrapGeneric_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
};

/// Class /Game/Abilities/Traps/FloorSpikes/GA_Trap_FloorSpikes.GA_Trap_FloorSpikes_C
/// Size: 0x0000 (0x000AF0 - 0x000AF0)
class UGA_Trap_FloorSpikes_C : public UGA_TrapGeneric_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
};

/// Class /Game/Abilities/Traps/WallSpikesMetal/GA_Trap_WallSpikesMetal.GA_Trap_WallSpikesMetal_C
/// Size: 0x0000 (0x000AF0 - 0x000AF0)
class UGA_Trap_WallSpikesMetal_C : public UGA_TrapGeneric_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
};

/// Class /Game/Abilities/Traps/FloorSpikes/GE_Trap_FloorSpikes.GE_Trap_FloorSpikes_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Trap_FloorSpikes_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Traps/CeilingSpikes/GA_Trap_CeilingSpikes.GA_Trap_CeilingSpikes_C
/// Size: 0x0000 (0x000AF0 - 0x000AF0)
class UGA_Trap_CeilingSpikes_C : public UGA_TrapGeneric_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2800;

public:
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
/// Size: 0x02E0 (0x000610 - 0x0008F0)
class AAOE_Commando_KeepOutExplosion_C : public AFortAreaOfEffectCloud
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2288;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x610, 8, 0, 0})
	CMember(UAudioComponent*)                          AOE_Audio_Effect                                            OFFSET(get<T>, {0x618, 8, 0, 0})
	CMember(UParticleSystemComponent*)                 P_Grenade_Linger                                            OFFSET(get<T>, {0x620, 8, 0, 0})
	CMember(USphereComponent*)                         DamageArea                                                  OFFSET(get<T>, {0x628, 8, 0, 0})
	CMember(USceneComponent*)                          DefaultSceneRoot                                            OFFSET(get<T>, {0x630, 8, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x638, 4, 0, 0})
	SMember(FSoundAttenuationSettings)                 AOE_Sound_Attenuation_Based_On_Radius                       OFFSET(getStruct<T>, {0x640, 680, 0, 0})
	CMember(USoundBase*)                               AOE_Electric_Sound                                          OFFSET(get<T>, {0x8E8, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.OnRep_Radius
	// void OnRep_Radius();                                                                                                     // [0x154a140] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.Send_Info
	// void Send_Info(float Radius);                                                                                            // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveDestroyed
	// void ReceiveDestroyed();                                                                                                 // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ExecuteUbergraph_AOE_Commando_KeepOutExplosion
	// void ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int32_t EntryPoint);                                                 // [0x154a140] None                 
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
/// Size: 0x0356 (0x000BA2 - 0x000EF8)
class UGA_Commando_FragGrenade_WithTrajectory_C : public UGAT_CommandoActiveAbility_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3832;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xBA8, 8, 0, 0})
	SMember(FGameplayTag)                              EventActivation                                             OFFSET(getStruct<T>, {0xBB0, 8, 0, 0})
	SMember(FGameplayTag)                              EventComplete                                               OFFSET(getStruct<T>, {0xBB8, 8, 0, 0})
	CMember(UClass*)                                   Prj_Grenade                                                 OFFSET(get<T>, {0xBC0, 8, 0, 0})
	DMember(float)                                     GrenadeSpeedMin                                             OFFSET(get<float>, {0xBC8, 4, 0, 0})
	DMember(float)                                     GrenadeSpeedMax                                             OFFSET(get<float>, {0xBCC, 4, 0, 0})
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0xBD0, 4, 0, 0})
	CMember(USoundBase*)                               GrenadeSound                                                OFFSET(get<T>, {0xBD8, 8, 0, 0})
	SMember(FGameplayTagContainer)                     TC_ClusterBomb                                              OFFSET(getStruct<T>, {0xBE0, 32, 0, 0})
	DMember(int32_t)                                   MaxClusterGrenades                                          OFFSET(get<int32_t>, {0xC00, 4, 0, 0})
	CMember(UClass*)                                   Prj_Cluster                                                 OFFSET(get<T>, {0xC08, 8, 0, 0})
	DMember(float)                                     ClusterSpeedMax                                             OFFSET(get<float>, {0xC10, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_BiggerIsBetter                                           OFFSET(getStruct<T>, {0xC18, 32, 0, 0})
	SMember(FGameplayTag)                              EC_DefaultExplosion                                         OFFSET(getStruct<T>, {0xC38, 8, 0, 0})
	SMember(FGameplayTag)                              EC_IncreasedRadius                                          OFFSET(getStruct<T>, {0xC40, 8, 0, 0})
	SMember(FFortGameplayEffectContainerSpec)          EC_ReturnedEffect                                           OFFSET(getStruct<T>, {0xC48, 128, 0, 0})
	DMember(float)                                     ExplosionRadius                                             OFFSET(get<float>, {0xCC8, 4, 0, 0})
	DMember(float)                                     AdditionalThrowAngle                                        OFFSET(get<float>, {0xCCC, 4, 0, 0})
	DMember(float)                                     ClusterMinPitch                                             OFFSET(get<float>, {0xCD0, 4, 0, 0})
	DMember(float)                                     ClusterMaxPitch                                             OFFSET(get<float>, {0xCD4, 4, 0, 0})
	SMember(FGameplayTag)                              EC_ClusterExplosion                                         OFFSET(getStruct<T>, {0xCD8, 8, 0, 0})
	DMember(float)                                     ClusterSpeedMin                                             OFFSET(get<float>, {0xCE0, 4, 0, 0})
	SMember(FFortFeedbackHandle)                       GrenadeDialogFeedback                                       OFFSET(getStruct<T>, {0xCE8, 24, 0, 0})
	SMember(FGameplayTagContainer)                     TC_KeepOut                                                  OFFSET(getStruct<T>, {0xD00, 32, 0, 0})
	SMember(FGameplayTag)                              EC_KeepOut                                                  OFFSET(getStruct<T>, {0xD20, 8, 0, 0})
	CMember(UClass*)                                   AOE_KeepOut                                                 OFFSET(get<T>, {0xD28, 8, 0, 0})
	DMember(bool)                                      BiggerIsBetter                                              OFFSET(get<bool>, {0xD30, 1, 0, 0})
	DMember(bool)                                      ClusterBomb                                                 OFFSET(get<bool>, {0xD31, 1, 0, 0})
	DMember(bool)                                      KeepOut                                                     OFFSET(get<bool>, {0xD32, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TC_GrenadeAmmo                                              OFFSET(getStruct<T>, {0xD38, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_GrenadeCost                                              OFFSET(getStruct<T>, {0xD58, 32, 0, 0})
	SMember(FGameplayTagContainer)                     TC_GrenadeDamage                                            OFFSET(getStruct<T>, {0xD78, 32, 0, 0})
	DMember(bool)                                      GrenadeAmmo                                                 OFFSET(get<bool>, {0xD98, 1, 0, 0})
	DMember(bool)                                      GrenadeCost                                                 OFFSET(get<bool>, {0xD99, 1, 0, 0})
	DMember(bool)                                      GrenadeDamage                                               OFFSET(get<bool>, {0xD9A, 1, 0, 0})
	DMember(int32_t)                                   GrenadeAmmoUpgrade                                          OFFSET(get<int32_t>, {0xD9C, 4, 0, 0})
	DMember(int32_t)                                   GrenadeAmmoDefault                                          OFFSET(get<int32_t>, {0xDA0, 4, 0, 0})
	DMember(int32_t)                                   MaxGrenadeAmmo                                              OFFSET(get<int32_t>, {0xDA4, 4, 0, 0})
	DMember(int32_t)                                   ExplosionRadiusTooltip                                      OFFSET(get<int32_t>, {0xDA8, 4, 0, 0})
	DMember(int32_t)                                   ExplosionRadiusDefault                                      OFFSET(get<int32_t>, {0xDAC, 4, 0, 0})
	DMember(int32_t)                                   ExplosionRadiusUpgrade                                      OFFSET(get<int32_t>, {0xDB0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_PlasmaGrenades                                           OFFSET(getStruct<T>, {0xDB8, 32, 0, 0})
	DMember(bool)                                      PlasmaGrenades                                              OFFSET(get<bool>, {0xDD8, 1, 0, 0})
	SMember(FGameplayTagContainer)                     TC_Flashbang                                                OFFSET(getStruct<T>, {0xDE0, 32, 0, 0})
	DMember(bool)                                      Flashbang                                                   OFFSET(get<bool>, {0xE00, 1, 0, 0})
	SMember(FVector)                                   GrenadeTargetingOriginOffset                                OFFSET(getStruct<T>, {0xE04, 12, 0, 0})
	CMember(AFortProjectileBase*)                      DummyProjectile                                             OFFSET(get<T>, {0xE10, 8, 0, 0})
	DMember(bool)                                      DummyShouldBounce                                           OFFSET(get<bool>, {0xE18, 1, 0, 0})
	DMember(float)                                     DummyBounciness                                             OFFSET(get<float>, {0xE1C, 4, 0, 0})
	DMember(float)                                     DummyFriction                                               OFFSET(get<float>, {0xE20, 4, 0, 0})
	DMember(float)                                     TrajectoryUpdateInterval                                    OFFSET(get<float>, {0xE24, 4, 0, 0})
	DMember(float)                                     DummyMaxSpeed                                               OFFSET(get<float>, {0xE28, 4, 0, 0})
	DMember(float)                                     DummyGravity                                                OFFSET(get<float>, {0xE2C, 4, 0, 0})
	DMember(float)                                     DummyTimeStep                                               OFFSET(get<float>, {0xE30, 4, 0, 0})
	DMember(float)                                     DummyExtent                                                 OFFSET(get<float>, {0xE34, 4, 0, 0})
	DMember(bool)                                      InThrowWindup                                               OFFSET(get<bool>, {0xE38, 1, 0, 0})
	CMember(ABP_ProjectileTrajectory_C*)               TrajectoryIndicator                                         OFFSET(get<T>, {0xE40, 8, 0, 0})
	CMember(UClass*)                                   TrajectoryIndicatorClass                                    OFFSET(get<T>, {0xE48, 8, 0, 0})
	SMember(FFortGameplayAbilityMontageInfo)           ThrowWindupMontage                                          OFFSET(getStruct<T>, {0xE50, 96, 0, 0})
	DMember(bool)                                      AbilityKeyPressed                                           OFFSET(get<bool>, {0xEB0, 1, 0, 0})
	DMember(float)                                     MaxSpeedPitch                                               OFFSET(get<float>, {0xEB4, 4, 0, 0})
	DMember(float)                                     MinSpeedPitch                                               OFFSET(get<float>, {0xEB8, 4, 0, 0})
	DMember(float)                                     MaxTossPitch                                                OFFSET(get<float>, {0xEBC, 4, 0, 0})
	DMember(int32_t)                                   MaxTrajectoryBounces                                        OFFSET(get<int32_t>, {0xEC0, 4, 0, 0})
	SMember(FGameplayTagContainer)                     TC_Tactical_Clusterbomb                                     OFFSET(getStruct<T>, {0xEC8, 32, 0, 0})
	DMember(bool)                                      Tactical_Clusterbomb                                        OFFSET(get<bool>, {0xEE8, 1, 0, 0})
	SMember(FGameplayTag)                              EC_ClusterExplosion_Tactical                                OFFSET(getStruct<T>, {0xEF0, 8, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SpawnFragGrenade
	// void SpawnFragGrenade(UClass* ProjectileClass, FVector& SpawnLocation, FRotator InputPin, FFortGameplayEffectContainerSpec EffectContainerSpecToApplyOnExplode, float InitialSpeed, float GravityScale); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CalcGrenadeSpeedFromPitch
	// void CalcGrenadeSpeedFromPitch(float AimPitch, float& GrenadeSpeed);                                                     // [0x154a140] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.UpdateTrajectorySpline
	// void UpdateTrajectorySpline();                                                                                           // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupDummyProjectile
	// void SetupDummyProjectile();                                                                                             // [0x154a140] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SpawnLocationAndRotation
	// void SpawnLocationAndRotation(FVector& OutLoc, FRotator& OutRot);                                                        // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupAbility
	// void SetupAbility(UAbilitySystemComponent* AbilitySystemComponentRef);                                                   // [0x154a140] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.SetupGrenade
	// void SetupGrenade(float AimPitch, UClass*& Base Grenade, float& Projectile Speed, FFortGameplayEffectContainerSpec& Explosion Gameplay Spec, float& Projectile Gravity Scale); // [0x154a140] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Completed_C3E84D8940567A046A8F48A21D386165
	// void Completed_C3E84D8940567A046A8F48A21D386165(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Cancelled_C3E84D8940567A046A8F48A21D386165
	// void Cancelled_C3E84D8940567A046A8F48A21D386165(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Triggered_C3E84D8940567A046A8F48A21D386165
	// void Triggered_C3E84D8940567A046A8F48A21D386165(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_F5D87C9E46378707AE4C79B3A42F5A45
	// void OnFinish_F5D87C9E46378707AE4C79B3A42F5A45();                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCancelled_854170AF4268B06A435A3AA33232C5BF
	// void OnCancelled_854170AF4268B06A435A3AA33232C5BF();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnInterrupted_854170AF4268B06A435A3AA33232C5BF
	// void OnInterrupted_854170AF4268B06A435A3AA33232C5BF();                                                                   // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnBlendOut_854170AF4268B06A435A3AA33232C5BF
	// void OnBlendOut_854170AF4268B06A435A3AA33232C5BF();                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnCompleted_854170AF4268B06A435A3AA33232C5BF
	// void OnCompleted_854170AF4268B06A435A3AA33232C5BF();                                                                     // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB
	// void OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB();                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.Server_SpawnProjectile
	// void Server_SpawnProjectile(FVector Location, FRotator Direction);                                                       // [0x154a140] Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.OnAbilityInputReleased
	// void OnAbilityInputReleased();                                                                                           // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.CleanupTrajectoryDisplay
	// void CleanupTrajectoryDisplay();                                                                                         // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.TossGrenade
	// void TossGrenade();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C.ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory
	// void ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int32_t EntryPoint);                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Commando/Actives/FragGrenade/TT_Commando_FragGrenade.TT_Commando_FragGrenade_C
/// Size: 0x0000 (0x000168 - 0x000168)
class UTT_Commando_FragGrenade_C : public UFortGameplayAbilityTooltip
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 360;

public:


	/// Functions
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.GetApplicationTag
	// bool GetApplicationTag(UGameplayAbility* AbilityInstance, FGameplayTag& OutTag);                                         // [0x154a140] Event|Protected|HasOutParms|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.GetTextForTokenFromAbilityInstanceInternal
	// bool GetTextForTokenFromAbilityInstanceInternal(UGameplayAbility* AbilityInstance, FGameplayTag& Tag, UFortTooltipContext* Context, FGameplayTag& Token, FText& OutText); // [0x154a140] Event|Protected|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|Const 
	// Function /Game/Abilities/Player/Commando/Actives/FragGrenade/TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.InitializeAbilityInstanceInternal
	// void InitializeAbilityInstanceInternal(UGameplayAbility* AbilityInstance, UFortTooltipContext* Context);                 // [0x154a140] Event|Protected|BlueprintCallable|BlueprintEvent|Const 
};

/// Class /Game/Abilities/Player/Generic/Gadgets/M80/GE_M80_Damage.GE_M80_Damage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_M80_Damage_C : public UGET_DirectBallisticDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Weapons/Melee/GE_Melee_GenericDamageMakeWeakspot.GE_Melee_GenericDamageMakeWeakspot_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Melee_GenericDamageMakeWeakspot_C : public UGE_Melee_GenericDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Weapons/Melee/GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C
/// Size: 0x0014 (0x000AC0 - 0x000AD4)
class UGAB_Melee_Generic_EventGraph_C : public UFortGameplayAbility
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2772;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAC0, 8, 0, 0})
	DMember(bool)                                      Stamina_Lockout                                             OFFSET(get<bool>, {0xAC8, 1, 0, 0})
	DMember(bool)                                      Debug                                                       OFFSET(get<bool>, {0xAC9, 1, 0, 0})
	DMember(int32_t)                                   DebugSpecificHitNumber                                      OFFSET(get<int32_t>, {0xACC, 4, 0, 0})
	DMember(int32_t)                                   Counter                                                     OFFSET(get<int32_t>, {0xAD0, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/Weapons/Melee/GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Completed_8C20D6D3411A3D7E54D6049F69DF10BE
	// void Completed_8C20D6D3411A3D7E54D6049F69DF10BE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Weapons/Melee/GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE
	// void Cancelled_8C20D6D3411A3D7E54D6049F69DF10BE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Weapons/Melee/GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.Triggered_8C20D6D3411A3D7E54D6049F69DF10BE
	// void Triggered_8C20D6D3411A3D7E54D6049F69DF10BE(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Weapons/Melee/GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Weapons/Melee/GAB_Melee_Generic_EventGraph.GAB_Melee_Generic_EventGraph_C.ExecuteUbergraph_GAB_Melee_Generic_EventGraph
	// void ExecuteUbergraph_GAB_Melee_Generic_EventGraph(int32_t EntryPoint);                                                  // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Weapons/Melee/GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C
/// Size: 0x0010 (0x000AD4 - 0x000AE4)
class UGAB_Melee_GenericCombo_C : public UGAB_Melee_Generic_EventGraph_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2788;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAD8, 8, 0, 0})
	DMember(float)                                     OriginalMontagePlayRate                                     OFFSET(get<float>, {0xAE0, 4, 0, 0})


	/// Functions
	// Function /Game/Abilities/Weapons/Melee/GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B
	// void Completed_C69ED31E4DA3D5C32C2E1EABFD10F38B(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Weapons/Melee/GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B
	// void Cancelled_C69ED31E4DA3D5C32C2E1EABFD10F38B(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Weapons/Melee/GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B
	// void Triggered_C69ED31E4DA3D5C32C2E1EABFD10F38B(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Weapons/Melee/GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Weapons/Melee/GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.K2_OnEndAbility
	// void K2_OnEndAbility(bool bWasCancelled);                                                                                // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Weapons/Melee/GAB_Melee_GenericCombo.GAB_Melee_GenericCombo_C.ExecuteUbergraph_GAB_Melee_GenericCombo
	// void ExecuteUbergraph_GAB_Melee_GenericCombo(int32_t EntryPoint);                                                        // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Weapons/Ranged/GE_Impulse.GE_Impulse_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Impulse_C : public UGET_DirectBallisticDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Player/Generic/UtilityItems/B_UtilityItem_Detonator_Athena.B_UtilityItem_Detonator_Athena_C
/// Size: 0x0000 (0x000AC8 - 0x000AC8)
class AB_UtilityItem_Detonator_Athena_C : public AB_UtilityItem_Generic_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2760;

public:
};

/// Class /Game/Abilities/Traps/CeilingFalling/B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C
/// Size: 0x0041 (0x000820 - 0x000861)
class AB_Prj_CeilingTrap_Falling_C : public AFortProjectileFallingTrap
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2145;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x820, 8, 0, 0})
	CMember(USphereComponent*)                         Sphere                                                      OFFSET(get<T>, {0x828, 8, 0, 0})
	CMember(TArray<UStaticMesh*>)                      MeshTypes                                                   OFFSET(get<T>, {0x830, 16, 0, 0})
	DMember(bool)                                      bActive                                                     OFFSET(get<bool>, {0x840, 1, 0, 0})
	SMember(FVector)                                   PrevBounceLocation                                          OFFSET(getStruct<T>, {0x844, 12, 0, 0})
	DMember(float)                                     MinBounceDistanceSquared                                    OFFSET(get<float>, {0x850, 4, 0, 0})
	DMember(float)                                     PrevBounceTime                                              OFFSET(get<float>, {0x854, 4, 0, 0})
	DMember(float)                                     MinBounceTime                                               OFFSET(get<float>, {0x858, 4, 0, 0})
	DMember(float)                                     MinVelocitySquared                                          OFFSET(get<float>, {0x85C, 4, 0, 0})
	DMember(bool)                                      bExploded                                                   OFFSET(get<bool>, {0x860, 1, 0, 0})


	/// Functions
	// Function /Game/Abilities/Traps/CeilingFalling/B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.OnRep_bExploded
	// void OnRep_bExploded();                                                                                                  // [0x154a140] HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/CeilingFalling/B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.RandomDirection
	// FVector RandomDirection(FVector InVec);                                                                                  // [0x154a140] Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/Abilities/Traps/CeilingFalling/B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x154a140] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/CeilingFalling/B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.OnBounce
	// void OnBounce(FHitResult& Hit);                                                                                          // [0x154a140] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Game/Abilities/Traps/CeilingFalling/B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.Overlap
	// void Overlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/CeilingFalling/B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.BindOverlap
	// void BindOverlap();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/CeilingFalling/B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Traps/CeilingFalling/B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.CheckTireDestruction
	// void CheckTireDestruction(FVector CurrentVelocity);                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/CeilingFalling/B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.DestroyTire
	// void DestroyTire();                                                                                                      // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/CeilingFalling/B_Prj_CeilingTrap_Falling.B_Prj_CeilingTrap_Falling_C.ExecuteUbergraph_B_Prj_CeilingTrap_Falling
	// void ExecuteUbergraph_B_Prj_CeilingTrap_Falling(int32_t EntryPoint);                                                     // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Traps/CeilingElectricWood/GE_Trap_CeilingElectricWood.GE_Trap_CeilingElectricWood_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Trap_CeilingElectricWood_C : public UGET_DirectLightningDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Traps/WallElectric/GE_Trap_WallElectric.GE_Trap_WallElectric_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGE_Trap_WallElectric_C : public UGET_DirectLightningDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/Abilities/Traps/FloorJumpPad/GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C
/// Size: 0x0068 (0x000AF0 - 0x000B58)
class UGA_Trap_FloorJumpPad_C : public UGA_TrapGeneric_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAF0, 8, 0, 0})
	DMember(float)                                     LaunchStrength                                              OFFSET(get<float>, {0xAF8, 4, 0, 0})
	CMember(UForceFeedbackEffect*)                     LaunchForceFeedback                                         OFFSET(get<T>, {0xB00, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          PlayerJumping                                               OFFSET(get<T>, {0xB08, 8, 0, 0})
	CMember(UClass*)                                   GE_PlayerLaunched                                           OFFSET(get<T>, {0xB10, 8, 0, 0})
	SMember(FGameplayTag)                              TC_LaunchTag                                                OFFSET(getStruct<T>, {0xB18, 8, 0, 0})
	CMember(TArray<AActor*>)                           OverlappingTargets                                          OFFSET(get<T>, {0xB20, 16, 0, 0})
	CMember(UClass*)                                   GE_TrapImmunity                                             OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FGameplayAbilityTargetDataHandle)          TargetData                                                  OFFSET(getStruct<T>, {0xB38, 32, 0, 0})


	/// Functions
	// Function /Game/Abilities/Traps/FloorJumpPad/GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.Cancelled_E91C59AB43D826926CE5CEAA22E84570
	// void Cancelled_E91C59AB43D826926CE5CEAA22E84570(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/FloorJumpPad/GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.Targeted_E91C59AB43D826926CE5CEAA22E84570
	// void Targeted_E91C59AB43D826926CE5CEAA22E84570(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/FloorJumpPad/GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Traps/FloorJumpPad/GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.PlayPlayerFX
	// void PlayPlayerFX(AFortPlayerPawn* Player);                                                                              // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/FloorJumpPad/GA_Trap_FloorJumpPad.GA_Trap_FloorJumpPad_C.ExecuteUbergraph_GA_Trap_FloorJumpPad
	// void ExecuteUbergraph_GA_Trap_FloorJumpPad(int32_t EntryPoint);                                                          // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Traps/FloorJumpPadDirectional/GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C
/// Size: 0x0068 (0x000AF0 - 0x000B58)
class UGA_Trap_FloorJumpPadDirectional_C : public UGA_TrapGeneric_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2904;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0xAF0, 8, 0, 0})
	DMember(float)                                     LaunchPitch                                                 OFFSET(get<float>, {0xAF8, 4, 0, 0})
	DMember(float)                                     LaunchStrength                                              OFFSET(get<float>, {0xAFC, 4, 0, 0})
	CMember(UForceFeedbackEffect*)                     LaunchForceFeedback                                         OFFSET(get<T>, {0xB00, 8, 0, 0})
	CMember(AFortPlayerPawn*)                          LaunchedPlayer                                              OFFSET(get<T>, {0xB08, 8, 0, 0})
	SMember(FGameplayTag)                              TC_LaunchTag                                                OFFSET(getStruct<T>, {0xB10, 8, 0, 0})
	CMember(UClass*)                                   GE_PlayerLaunched                                           OFFSET(get<T>, {0xB18, 8, 0, 0})
	CMember(TArray<AActor*>)                           OverlappingTargets                                          OFFSET(get<T>, {0xB20, 16, 0, 0})
	CMember(UClass*)                                   GE_TrapImmunity                                             OFFSET(get<T>, {0xB30, 8, 0, 0})
	SMember(FGameplayAbilityTargetDataHandle)          TargetData                                                  OFFSET(getStruct<T>, {0xB38, 32, 0, 0})


	/// Functions
	// Function /Game/Abilities/Traps/FloorJumpPadDirectional/GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0
	// void Cancelled_9399FB2A485BD9AC6632A4B347C4BBE0(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/FloorJumpPadDirectional/GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.Targeted_9399FB2A485BD9AC6632A4B347C4BBE0
	// void Targeted_9399FB2A485BD9AC6632A4B347C4BBE0(FGameplayAbilityTargetDataHandle& TargetData, FGameplayTag ApplicationTag); // [0x154a140] HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/FloorJumpPadDirectional/GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.K2_ActivateAbility
	// void K2_ActivateAbility();                                                                                               // [0x154a140] Event|Protected|BlueprintEvent 
	// Function /Game/Abilities/Traps/FloorJumpPadDirectional/GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.PlayPlayerFX
	// void PlayPlayerFX(AFortPlayerPawn* Player, FRotator LaunchRotation, FTransform TrapTransform);                           // [0x154a140] Net|NetMulticast|BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Traps/FloorJumpPadDirectional/GA_Trap_FloorJumpPadDirectional.GA_Trap_FloorJumpPadDirectional_C.ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional
	// void ExecuteUbergraph_GA_Trap_FloorJumpPadDirectional(int32_t EntryPoint);                                               // [0x154a140] HasDefaults          
};

/// Class /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C
/// Size: 0x1170 (0x0003D0 - 0x001540)
class UMenuScreen_Athena_C : public UFrontendAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 5440;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x3D0, 8, 0, 0})
	SMember(FAnimNode_ConvertComponentToLocalSpace)    AnimGraphNode_ComponentToLocalSpace_BC9F551249E266FA43BC349FC345F1FC OFFSET(getStruct<T>, {0x3D8, 72, 0, 0})
	SMember(FAnimNode_ConvertLocalToComponentSpace)    AnimGraphNode_LocalToComponentSpace_CFAAC90A46FD25342F35449196AB843E OFFSET(getStruct<T>, {0x420, 72, 0, 0})
	SMember(FAnimNode_Root)                            AnimGraphNode_Root_2D7030A140A7B9E5EEB43E92FB2BC715         OFFSET(getStruct<T>, {0x468, 72, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_DB45EF5942BB99048E7C2C8416282A57         OFFSET(getStruct<T>, {0x4B0, 112, 0, 0})
	SMember(FAnimNode_BlendListByEnum)                 AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22 OFFSET(getStruct<T>, {0x520, 224, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_233187314408126920AC14A42BA98CE8 OFFSET(getStruct<T>, {0x600, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_D368A9B74AE8F039DA6720801BDD62D5 OFFSET(getStruct<T>, {0x6B0, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_653C5A294667E7945D69729979692D20 OFFSET(getStruct<T>, {0x760, 176, 0, 0})
	SMember(FAnimNode_SequencePlayer)                  AnimGraphNode_SequencePlayer_DF33F517431A2AB6E430309E29277E98 OFFSET(getStruct<T>, {0x810, 176, 0, 0})
	SMember(FAnimNode_BlendListByInt)                  AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A OFFSET(getStruct<T>, {0x8C0, 208, 0, 0})
	SMember(FAnimNode_BlendListByInt)                  AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D OFFSET(getStruct<T>, {0x990, 208, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK_3BACE47B4A5EF86B449B81BE7045ADA2        OFFSET(getStruct<T>, {0xA60, 328, 0, 0})
	SMember(FAnimNode_ModifyBone)                      AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1   OFFSET(getStruct<T>, {0xBA8, 352, 0, 0})
	SMember(FAnimNode_Slot)                            AnimGraphNode_Slot_7340818D479943947A1DCCA16CFCAD54         OFFSET(getStruct<T>, {0xD08, 112, 0, 0})
	SMember(FAnimNode_LayeredBoneBlend)                AnimGraphNode_LayeredBoneBlend_8D2B60D44BBADFD01AC9A6BF39472D0B OFFSET(getStruct<T>, {0xD78, 224, 0, 0})
	SMember(FAnimNode_SaveCachedPose)                  AnimGraphNode_SaveCachedPose_E3A91A3649B6A1ABC9AC3B97A7AF4134 OFFSET(getStruct<T>, {0xE58, 224, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_93498E3D45EEA3CEA9E5EA88BB757C3B OFFSET(getStruct<T>, {0xF38, 80, 0, 0})
	SMember(FAnimNode_UseCachedPose)                   AnimGraphNode_UseCachedPose_F237E66D4F1546A501C2548E2EB67224 OFFSET(getStruct<T>, {0xF88, 80, 0, 0})
	SMember(FAnimNode_LegIK)                           AnimGraphNode_LegIK_FCD7422A4E3CE397C446C0A397266FEA        OFFSET(getStruct<T>, {0xFD8, 328, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone_4C554C3D4E078CDC75B08E9CEF8DED1C     OFFSET(getStruct<T>, {0x1120, 336, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone_0A8F4F2D443AA18F68E37A8C2921091A     OFFSET(getStruct<T>, {0x1270, 336, 0, 0})
	SMember(FAnimNode_CopyBone)                        AnimGraphNode_CopyBone_E5DB5C2C4C7A35E4ACBEDD9FA10C6F14     OFFSET(getStruct<T>, {0x13C0, 336, 0, 0})
	CMember(UMulticastDelegate)                        MenuScreenDispatcher                                        OFFSET(get<T>, {0x1510, 16, 0, 0})
	DMember(bool)                                      HasBeenSelected                                             OFFSET(get<bool>, {0x1520, 1, 0, 0})
	DMember(int32_t)                                   PoseInt                                                     OFFSET(get<int32_t>, {0x1524, 4, 0, 0})
	SMember(FVector)                                   OffsetTranslate                                             OFFSET(getStruct<T>, {0x1528, 12, 0, 0})
	SMember(FRotator)                                  OffsetRotate                                                OFFSET(getStruct<T>, {0x1534, 12, 0, 0})


	/// Functions
	// Function /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.BlueprintBeginPlay
	// void BlueprintBeginPlay();                                                                                               // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.AnimNotify_LeftB
	// void AnimNotify_LeftB();                                                                                                 // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.UserFocus
	// void UserFocus();                                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.AnimNotify_playFacialAnim
	// void AnimNotify_playFacialAnim();                                                                                        // [0x154a140] BlueprintCallable|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_ModifyBone_AE51F624415A5BC37D7F2FABCBE3FBE1(); // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_287AF5964C1BE390191EF89CB53D768D(); // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByInt_6443F71D474774C8ECFB2A9F1ACC1D7A(); // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22
	// void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Athena_AnimGraphNode_BlendListByEnum_38DE62F34079A9ED5E5B85BBCBAD2C22(); // [0x154a140] BlueprintEvent       
	// Function /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.BlueprintUpdateAnimation
	// void BlueprintUpdateAnimation(float DeltaTimeX);                                                                         // [0x154a140] Event|Public|BlueprintEvent 
	// Function /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.ExecuteUbergraph_MenuScreen_Athena
	// void ExecuteUbergraph_MenuScreen_Athena(int32_t EntryPoint);                                                             // [0x154a140] HasDefaults          
	// Function /Game/Abilities/Player/Pawns/MenuScreen_Athena.MenuScreen_Athena_C.MenuScreenDispatcher__DelegateSignature
	// void MenuScreenDispatcher__DelegateSignature();                                                                          // [0x154a140] Public|Delegate|BlueprintCallable|BlueprintEvent 
};

/// Struct /Game/Abilities/Player/Generic/Gadgets/Bot_Turret/FBotTurretData.FBotTurretData
/// Size: 0x0015 (0x000000 - 0x000015)
class FFBotTurretData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 21;

public:
	DMember(float)                                     WarmUpDelay_9_6FACCA8F4530C34411633FAFFF35A1A4              OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     TurretDuration_10_2257C0C24D89990A9238208F263A33CF          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FireRate_11_D5BDFA014872030AA519C3B5444A83FC                OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Range_12_F40473CC41D35A3835FF898974AC60A8                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DefaultRange_18_EA2877BB4C21877A1AE594937A7794F3            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bExplosionUpgrade_13_C3093790415EC37138291B8A8065AEC8       OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Game/Abilities/Player/Generic/Gadgets/AirStrike/SupportStructs/StrikePatternVectorStruct.StrikePatternVectorStruct
/// Size: 0x0010 (0x000000 - 0x000010)
class FStrikePatternVectorStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FVector>)                           PatternArray_16_0BD5A58E4D329D29E4EE3191A4E993CA            OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Game/Abilities/Player/Generic/Gadgets/AirStrike/SupportStructs/AirStrikesPatterns.AirStrikesPatterns
/// Size: 0x0010 (0x000000 - 0x000010)
class FAirStrikesPatterns : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FStrikePatternVectorStruct>)        StrikePatterns_3_AF55340043DED8607971118BA2FB6DEE           OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Game/Abilities/Player/Generic/Gadgets/AirStrike/AirStrikeLeveledPatterns.AirStrikeLeveledPatterns
/// Size: 0x0010 (0x000000 - 0x000010)
class FAirStrikeLeveledPatterns : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FAirStrikesPatterns>)               AirStrikePatternsPerLevel_3_74F45F1247CBB6B104AE179363E4E739 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Game/Abilities/Player/Constructor/Actives/BASE/StructRecyclingResource.StructRecyclingResource
/// Size: 0x000C (0x000000 - 0x00000C)
class FStructRecyclingResource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(UFortWorldItemDefinition*)                 ResourceType_6_1CB0341449EA85C60677C6B2035AFAAD             OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   AmountStored_5_ADCE813746D841E0568B169628A9BFDA             OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Game/Abilities/Player/Constructor/Perks/IFFCoding/IFFBoneConfig.IFFBoneConfig
/// Size: 0x0010 (0x000000 - 0x000010)
class FIFFBoneConfig : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     BoneName_2_E260AF684922CCB6A79FF187714DF1BF                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(UStaticMesh*)                              BoneMesh_5_51EE7C32455DDB1776C91A84C01D3551                 OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Enum /Game/Abilities/Player/Generic/Gadgets/AirStrike/StrikePatternEnum.StrikePatternEnum
/// Size: 0x11
enum StrikePatternEnum : uint8_t
{
	StrikePatternEnum__NewEnumerator00                                               = 0,
	StrikePatternEnum__NewEnumerator11                                               = 1,
	StrikePatternEnum__NewEnumerator22                                               = 2,
	StrikePatternEnum__NewEnumerator53                                               = 3,
	StrikePatternEnum__NewEnumerator64                                               = 4,
	StrikePatternEnum__NewEnumerator75                                               = 5,
	StrikePatternEnum__NewEnumerator86                                               = 6,
	StrikePatternEnum__NewEnumerator97                                               = 7,
	StrikePatternEnum__NewEnumerator108                                              = 8,
	StrikePatternEnum__NewEnumerator119                                              = 9,
	StrikePatternEnum__StrikePatternEnum_MAX10                                       = 10
};

/// Enum /Game/Abilities/Player/Constructor/Actives/BullRush/AIType.AIType
/// Size: 0x07
enum AIType : uint8_t
{
	AIType__NewEnumerator00                                                          = 0,
	AIType__NewEnumerator11                                                          = 1,
	AIType__NewEnumerator22                                                          = 2,
	AIType__NewEnumerator33                                                          = 3,
	AIType__NewEnumerator44                                                          = 4,
	AIType__NewEnumerator55                                                          = 5,
	AIType__AIType_MAX6                                                              = 6
};

