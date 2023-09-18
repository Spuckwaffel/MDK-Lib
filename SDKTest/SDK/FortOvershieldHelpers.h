/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package FortOvershieldHelpers.

/// Struct /Script/FortOvershieldHelpers.FortOvershieldDelegateContainer
/// Size: 0x0048 (0x000000 - 0x000048)
class FFortOvershieldDelegateContainer : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FDelegateProperty)                         OnOvershieldChanged                                         ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	SMember(FDelegateProperty)                         OnShieldedDamage                                            ___ OFFSET(get<T>, {0xC, 12, 0, 0})
	SMember(FDelegateProperty)                         OnOvershieldedDamage                                        ___ OFFSET(get<T>, {0x18, 12, 0, 0})
	SMember(FDelegateProperty)                         OnShieldDestroyed                                           ___ OFFSET(get<T>, {0x24, 12, 0, 0})
	SMember(FDelegateProperty)                         OnOvershieldDestroyed                                       ___ OFFSET(get<T>, {0x30, 12, 0, 0})
	SMember(FDelegateProperty)                         OnDamageReceived                                            ___ OFFSET(get<T>, {0x3C, 12, 0, 0})
};

/// Class /Script/FortOvershieldHelpers.FortOvershieldHelperComponent
/// Size: 0x00A8 (0x0000A0 - 0x000148)
class UFortOvershieldHelperComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
};

