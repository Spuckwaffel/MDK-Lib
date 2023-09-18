/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package HealthShieldRegenRuntime.

/// Struct /Script/HealthShieldRegenRuntime.FortHealthShieldRegen_ShieldDelegateContainer
/// Size: 0x0030 (0x000000 - 0x000030)
class FFortHealthShieldRegen_ShieldDelegateContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FDelegateProperty)                         OnShieldChanged                                             ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FDelegateProperty)                         OnShieldedDamage                                            ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	SMember(FDelegateProperty)                         OnShieldDestroyed                                           ___ OFFSET(get<T>, {0x18, 12, 0, 0})
	SMember(FDelegateProperty)                         OnDamageReceived                                            ___ OFFSET(get<T>, {0x24, 12, 0, 0})
};

/// Struct /Script/HealthShieldRegenRuntime.FortHealthShieldRegen_HealthDelegateContainer
/// Size: 0x0018 (0x000000 - 0x000018)
class FFortHealthShieldRegen_HealthDelegateContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FDelegateProperty)                         OnHealthChanged                                             ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FDelegateProperty)                         OnDamageReceived                                            ___ OFFSET(get<T>, {0xC, 12, 0, 0})
};

/// Class /Script/HealthShieldRegenRuntime.FortHealthShieldRegenComponent
/// Size: 0x00F8 (0x0000A0 - 0x000198)
class UFortHealthShieldRegenComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
};

