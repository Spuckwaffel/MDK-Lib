/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package CosmeticsFrameworkLoadouts.

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticBackendLoadout
/// Size: 0x0040 (0x000000 - 0x000040)
class FCosmeticBackendLoadout : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FCosmeticBackendLoadoutSlot>)       Slots                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     UserTags                                                    ___ OFFSET(get<T>, {0x10, 32, 0, 0})
	SMember(FString)                                   DisplayName                                                 ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticBackendLoadoutSlot
/// Size: 0x0020 (0x000000 - 0x000020)
class FCosmeticBackendLoadoutSlot : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FPrimaryAssetId)                           SlotTemplate                                                ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FPrimaryAssetId)                           EquippedItem                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FCosmeticCustomizationInfo>)        CustomizationInfo                                           ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticCustomizationInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FCosmeticCustomizationInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              ChannelTag                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              VariantTag                                                  ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FString)                                   AdditionalData                                              ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotRequirements
/// Size: 0x0050 (0x000000 - 0x000050)
class FCosmeticLoadoutSlotRequirements : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagContainer)                     RequiredTags                                                ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DeniedTags                                                  ___ OFFSET(get<T>, {0x20, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    AllowedItemClasses                                          ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutItemDefinition
/// Size: 0x0000 (0x000028 - 0x000028)
class UCosmeticLoadoutItemDefinition : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSchema
/// Size: 0x0010 (0x000030 - 0x000040)
class UCosmeticLoadoutSchema : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<UCosmeticLoadoutSlotTemplate*>)     Slots                                                       ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UCosmeticLoadoutSlotTemplate : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FGameplayTag)                              SlotTag                                                     ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	SMember(FGameplayTagContainer)                     MetaTags                                                    ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	SMember(FCosmeticLoadoutSlotRequirements)          Requirements                                                ___ OFFSET(get<T>, {0x58, 80, 0, 0})
	SMember(FPrimaryAssetId)                           DefaultCosmeticItemId                                       ___ OFFSET(get<T>, {0xA8, 8, 0, 0})
};

