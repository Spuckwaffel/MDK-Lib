
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CosmeticsFrameworkItems.CosmeticDataComponent
/// Size: 0x0050 (0x0000A0 - 0x0000F0)
class UCosmeticDataComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<FGameplayTag, FInstancedStructContainer>) PropertyContainers                                      OFFSET(get<T>, {0xA0, 80, 0, 0})
};



	/// Functions
	// Function /Script/CosmeticsFrameworkItems.CosmeticDataComponent.ResetProperties
	// void ResetProperties();                                                                                                  // [0x74f53ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/CosmeticsFrameworkItems.CosmeticDataComponent.BP_FindProperty
	// bool BP_FindProperty(FGameplayTag SlotTag, FGameplayTag PropertyTag, FCosmeticPropertyBase& OutProperty);                // [0x74f5004] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CosmeticsFrameworkItems.CosmeticDataComponent.BP_AddOrOverrideProperty
	// bool BP_AddOrOverrideProperty(FGameplayTag SlotTag, FCosmeticPropertyBase& Property);                                    // [0x74f4d3c] Final|Native|Public|HasOutParms|BlueprintCallable 
/// Struct /Script/CosmeticsFrameworkItems.CosmeticPropertyBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FCosmeticPropertyBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              PropertyTag                                                 OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkItems.CosmeticProperty_Vector
/// Size: 0x001C (0x000004 - 0x000020)
class FCosmeticProperty_Vector : public FCosmeticPropertyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Value                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
};
