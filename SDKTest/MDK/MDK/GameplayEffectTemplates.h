
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: GameplayAbilities

/// Class /Game/GameplayEffectTemplates/GET_ModifyDamage.GET_ModifyDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_ModifyDamage_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_ModifyPhysicalDamage.GET_ModifyPhysicalDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_ModifyPhysicalDamage_C : public UGET_ModifyDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_ModifyEdgedDamage.GET_ModifyEdgedDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_ModifyEdgedDamage_C : public UGET_ModifyPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_Cooldown.GET_Cooldown_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_Cooldown_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DamageParent.GET_DamageParent_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_DamageParent_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_AfflictedParent.GET_AfflictedParent_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_AfflictedParent_C : public UGET_DamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_PeriodicDamageParent.GET_PeriodicDamageParent_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_PeriodicDamageParent_C : public UGET_AfflictedParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_PeriodicPhysicalDamage.GET_PeriodicPhysicalDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_PeriodicPhysicalDamage_C : public UGET_PeriodicDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_PeriodicEnergyDamage.GET_PeriodicEnergyDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_PeriodicEnergyDamage_C : public UGET_PeriodicPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_Stun.GET_Stun_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_Stun_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_TagContainer.GET_TagContainer_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_TagContainer_C : public UGameplayEffect
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_KnockbackImmunityTag.GET_KnockbackImmunityTag_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_KnockbackImmunityTag_C : public UGET_TagContainer_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/Get_DirectDamageParent.Get_DirectDamageParent_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGet_DirectDamageParent_C : public UGET_DamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectPhysicalDamage.GET_DirectPhysicalDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_DirectPhysicalDamage_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectBluntDamage.GET_DirectBluntDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_DirectBluntDamage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectCreatureDamage.GET_DirectCreatureDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_DirectCreatureDamage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_FatalDamage.GET_FatalDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_FatalDamage_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_FallingDamage.GET_FallingDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_FallingDamage_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectEnvironmentDamage.GET_DirectEnvironmentDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_DirectEnvironmentDamage_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectEnergyDamage.GET_DirectEnergyDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_DirectEnergyDamage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectBallisticDamage.GET_DirectBallisticDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_DirectBallisticDamage_C : public UGET_DirectPhysicalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectElementalDamage.GET_DirectElementalDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_DirectElementalDamage_C : public UGet_DirectDamageParent_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

/// Class /Game/GameplayEffectTemplates/GET_DirectLightningDamage.GET_DirectLightningDamage_C
/// Size: 0x0000 (0x000670 - 0x000670)
class UGET_DirectLightningDamage_C : public UGET_DirectElementalDamage_C
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1648;

public:
};

