
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame

/// Class /Script/LootController.FortAthenaMutator_CR_CreativeAllowLootItem
/// Size: 0x0020 (0x000338 - 0x000358)
class AFortAthenaMutator_CR_CreativeAllowLootItem : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 856;

public:
	SMember(FGameplayTagContainer)                     ItemGameplayTagsNotAllowed                                  OFFSET(get<T>, {0x338, 32, 0, 0})
};



	/// Functions
	// Function /Script/LootController.FortAthenaMutator_CR_CreativeAllowLootItem.SetItemGameplayTagsNotAllowed
	// void SetItemGameplayTagsNotAllowed(FGameplayTagContainer& InItemGameplayTagsNotAllowed);                                 // [0x9a57e24] Final|Native|Public|HasOutParms|BlueprintCallable 
/// Class /Script/LootController.FortAthenaMutator_CR_LootChoice
/// Size: 0x0000 (0x000338 - 0x000338)
class AFortAthenaMutator_CR_LootChoice : public AFortAthenaMutator
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 824;

public:
};

/// Class /Script/LootController.LootControllerNativeComponent
/// Size: 0x0020 (0x0000A0 - 0x0000C0)
class ULootControllerNativeComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<AActor*>)                           OutActors                                                   OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAsyncGetActorsOfClassCompleted                            OFFSET(get<T>, {0xB0, 16, 0, 0})
};



	/// Functions
	// Function /Script/LootController.LootControllerNativeComponent.PrintDebugString
	// void PrintDebugString(FString DebugString, bool LogWarning);                                                             // [0x9a5774c] Final|Native|Protected|BlueprintCallable 
	// Function /Script/LootController.LootControllerNativeComponent.IsThrottleEnabled
	// bool IsThrottleEnabled();                                                                                                // [0x9a57730] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LootController.LootControllerNativeComponent.IsRemoveLootEnabled
	// bool IsRemoveLootEnabled();                                                                                              // [0x9a57714] Final|Native|Protected|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/LootController.LootControllerNativeComponent.AsyncGetActorsOfClass
	// void AsyncGetActorsOfClass(UObject* WorldContextObject, UClass* ActorClass);                                             // [0x9a575ec] Final|Native|Protected|BlueprintCallable 
	// Function /Script/LootController.LootControllerNativeComponent.AddToArray
	// void AddToArray(TArray<FBuildingContainersFoundEntry>& InOutBuildingContainersFoundArray, int32_t InBuildingContainerFoundIndex, FBuildingContainersArrayEntry& InBuildingContainerToAdd); // [0x9a573c0] Final|Native|Protected|HasOutParms|BlueprintCallable 
/// Struct /Script/LootController.BuildingContainersArrayEntry
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FBuildingContainersArrayEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(ABuildingContainer*)                       BuildingContainer                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(get<T>, {0x10, 96, 0, 0})
	SMember(FName)                                     SearchLootTierGroup                                         OFFSET(get<T>, {0x70, 4, 0, 0})
	SMember(FGameplayTagContainer)                     GameplayTags                                                OFFSET(get<T>, {0x78, 32, 0, 0})
};

/// Struct /Script/LootController.BuildingContainersFoundEntry
/// Size: 0x0018 (0x000000 - 0x000018)
class FBuildingContainersFoundEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FGameplayTag)                              GameplayTag                                                 OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FBuildingContainersArrayEntry>)     BuildingContainers                                          OFFSET(get<T>, {0x8, 16, 0, 0})
};

