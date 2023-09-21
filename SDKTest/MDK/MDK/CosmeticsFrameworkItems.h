
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
	CMember(TMap<FGameplayTag, FInstancedStructContainer>) PropertyContainers                                      ___ OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkItems.CosmeticPropertyBase
/// Size: 0x0004 (0x000000 - 0x000004)
class FCosmeticPropertyBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              PropertyTag                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/CosmeticsFrameworkItems.CosmeticProperty_Vector
/// Size: 0x001C (0x000004 - 0x000020)
class FCosmeticProperty_Vector : public FCosmeticPropertyBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

