
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

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
	CMember(TArray<UCosmeticLoadoutSlotTemplate*>)     Slots                                                       OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate
/// Size: 0x0080 (0x000030 - 0x0000B0)
class UCosmeticLoadoutSlotTemplate : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FGameplayTag)                              SlotTag                                                     OFFSET(getStruct<T>, {0x30, 4, 0, 0})
	SMember(FGameplayTagContainer)                     MetaTags                                                    OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	SMember(FCosmeticLoadoutSlotRequirements)          Requirements                                                OFFSET(getStruct<T>, {0x58, 80, 0, 0})
	SMember(FPrimaryAssetId)                           DefaultCosmeticItemId                                       OFFSET(getStruct<T>, {0xA8, 8, 0, 0})


	/// Functions
	// Function /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetSlotTag
	// FGameplayTag GetSlotTag();                                                                                               // [0x597e8bc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetRequirements
	// FCosmeticLoadoutSlotRequirements GetRequirements();                                                                      // [0x74f7ff8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetMetaTags
	// FGameplayTagContainer GetMetaTags();                                                                                     // [0x74f7fdc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotTemplate.GetDefaultCosmeticItemId
	// FPrimaryAssetId GetDefaultCosmeticItemId();                                                                              // [0x597bd64] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticBackendLoadout
/// Size: 0x0040 (0x000000 - 0x000040)
class FCosmeticBackendLoadout : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FCosmeticBackendLoadoutSlot>)       Slots                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGameplayTagContainer)                     UserTags                                                    OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	SMember(FString)                                   DisplayName                                                 OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticBackendLoadoutSlot
/// Size: 0x0020 (0x000000 - 0x000020)
class FCosmeticBackendLoadoutSlot : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FPrimaryAssetId)                           SlotTemplate                                                OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FPrimaryAssetId)                           EquippedItem                                                OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TArray<FCosmeticCustomizationInfo>)        CustomizationInfo                                           OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticCustomizationInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FCosmeticCustomizationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              ChannelTag                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FGameplayTag)                              VariantTag                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FString)                                   AdditionalData                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkLoadouts.CosmeticLoadoutSlotRequirements
/// Size: 0x0050 (0x000000 - 0x000050)
class FCosmeticLoadoutSlotRequirements : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTagContainer)                     RequiredTags                                                OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     DeniedTags                                                  OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    AllowedItemClasses                                          OFFSET(get<T>, {0x40, 16, 0, 0})
};

