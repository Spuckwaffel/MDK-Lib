
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: FortniteGame
/// dependency: ModularGameplay

/// Class /Script/CraftingRuntime.CraftingGlobals
/// Size: 0x0000 (0x000028 - 0x000028)
class UCraftingGlobals : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CraftingRuntime.CraftingObjectBGA
/// Size: 0x0068 (0x000978 - 0x0009E0)
class ACraftingObjectBGA : public ABuildingGameplayActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2528;

public:
	CMember(AFortInventory*)                           Inventory                                                   OFFSET(get<T>, {0x980, 8, 0, 0})
	CMember(USphereComponent*)                         SphereComponent_InteractionRange                            OFFSET(get<T>, {0x9A0, 8, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   MenuWidget                                                  OFFSET(get<T>, {0x9A8, 32, 0, 0})
	CMember(UWidgetComponent*)                         WidgetComponent_PotContents                                 OFFSET(get<T>, {0x9C8, 8, 0, 0})
	DMember(bool)                                      bShowCraftingUI                                             OFFSET(get<bool>, {0x9D0, 1, 0, 0})
	DMember(bool)                                      bSendEventMessageOnLocalInteract                            OFFSET(get<bool>, {0x9D1, 1, 0, 0})
	CMember(UStaticMeshComponent*)                     CraftingObjectMesh                                          OFFSET(get<T>, {0x9D8, 8, 0, 0})
};



	/// Functions
	// Function /Script/CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeEndOverlap
	// void HandleInteractionRangeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // [0x994af4c] Final|Native|Private 
	// Function /Script/CraftingRuntime.CraftingObjectBGA.HandleInteractionRangeBeginOverlap
	// void HandleInteractionRangeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult); // [0x994ad4c] Final|Native|Private|HasOutParms 
/// Class /Script/CraftingRuntime.CraftingCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UCraftingCheatManager : public UChildCheatManager
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CraftingRuntime.CraftingObjectComponent
/// Size: 0x03A0 (0x0000A0 - 0x000440)
class UCraftingObjectComponent : public UGameFrameworkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1088;

public:
	SMember(FMulticastInlineDelegate)                  CraftingObjectStateChanged                                  OFFSET(get<T>, {0xA0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFormulaCraftableChanged                                   OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCraftingSuccess                                           OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(TArray<FCraftingObjectRepStateData>)       CraftingObjectRepStateData                                  OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TMap<FCraftingMultiKey, FCraftingObjectServerStateData>) CraftingObjectServerStateData                 OFFSET(get<T>, {0xE0, 80, 0, 0})
	SMember(FName)                                     LastCraftedItemFormulaRow                                   OFFSET(get<T>, {0x130, 4, 0, 0})
	SMember(FString)                                   LastIngredientStringForAnalytics                            OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FString)                                   LastFormulaStringForAnalytics                               OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FString)                                   LastResultsStringForAnalytics                               OFFSET(get<T>, {0x158, 16, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                WhileCraftingAbilitySpecHandle                              OFFSET(get<T>, {0x168, 4, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                OwnerCraftingAbilitySpecHandle                              OFFSET(get<T>, {0x16C, 4, 0, 0})
	SMember(FGameplayTag)                              CraftingObjectTag                                           OFFSET(get<T>, {0x170, 4, 0, 0})
	SMember(FGameplayTagContainer)                     CraftingObjectTags                                          OFFSET(get<T>, {0x178, 32, 0, 0})
	SMember(FScalableFloat)                            CraftingTimeLength                                          OFFSET(get<T>, {0x198, 40, 0, 0})
	SMember(FScalableFloat)                            ReadyTimeLength                                             OFFSET(get<T>, {0x1C0, 40, 0, 0})
	SMember(FScalableFloat)                            OverCraftingTimeLength                                      OFFSET(get<T>, {0x1E8, 40, 0, 0})
	SMember(FScalableFloat)                            ResettingTimeLength                                         OFFSET(get<T>, {0x210, 40, 0, 0})
	SMember(FName)                                     OverCraftingLootTierKey                                     OFFSET(get<T>, {0x238, 4, 0, 0})
	DMember(bool)                                      bTakeItemsAtCraftingStart                                   OFFSET(get<bool>, {0x23C, 1, 1, 0})
	DMember(float)                                     DecayRate                                                   OFFSET(get<float>, {0x240, 4, 0, 0})
	DMember(bool)                                      bGiveIngredientsToCraftingObject                            OFFSET(get<bool>, {0x244, 1, 1, 0})
	DMember(bool)                                      bGiveIngredientsToInstigator                                OFFSET(get<bool>, {0x244, 1, 1, 1})
	SMember(FVector)                                   IngredientSpawnOffset                                       OFFSET(get<T>, {0x248, 24, 0, 0})
	DMember(bool)                                      bGiveToCraftingObject                                       OFFSET(get<bool>, {0x260, 1, 1, 0})
	DMember(bool)                                      bGiveResultToInstigator                                     OFFSET(get<bool>, {0x260, 1, 1, 1})
	CMember(TWeakObjectPtr<UClass*>)                   OwnerCraftingAbility                                        OFFSET(get<T>, {0x268, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WhileCraftingAbility                                        OFFSET(get<T>, {0x288, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   InstigatorWhileCraftingAbility                              OFFSET(get<T>, {0x2A8, 32, 0, 0})
	DMember(bool)                                      bScaleMultiCraftingTime                                     OFFSET(get<bool>, {0x2C8, 1, 0, 0})
	SMember(FGameplayTagContainer)                     CraftingFailedTags                                          OFFSET(get<T>, {0x2D0, 32, 0, 0})
	DMember(bool)                                      FreeCraftingEnabled                                         OFFSET(get<bool>, {0x438, 1, 0, 0})
};



	/// Functions
	// Function /Script/CraftingRuntime.CraftingObjectComponent.OnRep_CraftingObjectRepStateData
	// void OnRep_CraftingObjectRepStateData(TArray<FCraftingObjectRepStateData>& OldValue);                                    // [0x994b9d8] Final|Native|Private|HasOutParms 
	// Function /Script/CraftingRuntime.CraftingObjectComponent.HandlePickupCraftingItemPickedUp
	// void HandlePickupCraftingItemPickedUp(AFortPickup* Pickup, AFortPawn* InteractingPawn, UFortWorldItemDefinition* WorldItemDefinition, FVector PickupLocation); // [0x994b108] Final|Native|Private|HasDefaults 
	// Function /Script/CraftingRuntime.CraftingObjectComponent.CraftingObjectOnFormulaCraftableChanged__DelegateSignature
	// void CraftingObjectOnFormulaCraftableChanged__DelegateSignature(FName& FormulaRowName, bool bIsCraftable);               // [0x1ebf994] MulticastDelegate|Public|Delegate|HasOutParms 
/// Class /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UFortControllerComponent_CraftingNetworkEvents : public UFortControllerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FMulticastInlineDelegate)                  OnCraftingSuccess                                           OFFSET(get<T>, {0xA8, 16, 0, 0})
};



	/// Functions
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerStartCrafting
	// void ServerStartCrafting(AActor* CraftingObject, FName CraftingFormulaName, int32_t NumberToCraft, FCraftingMultiKey Key); // [0x994d5c4] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerResumeCrafting
	// void ServerResumeCrafting(AActor* CraftingObject, FCraftingMultiKey Key);                                                // [0x994d400] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerReportCraftingSuccess
	// void ServerReportCraftingSuccess(AActor* CraftingObject, FCraftingMultiKey Key);                                         // [0x994d23c] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPickupItemAndStartCrafting
	// void ServerPickupItemAndStartCrafting(AActor* CraftingObject, AFortPickup* Pickup, FName CraftingFormulaName, FCraftingMultiKey Key); // [0x994cff8] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerPauseCrafting
	// void ServerPauseCrafting(AActor* CraftingObject, bool bDecayPausedTime, FCraftingMultiKey Key);                          // [0x994cdf4] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerEjectItems
	// void ServerEjectItems(AActor* CraftingObject);                                                                           // [0x994cd54] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerClaimCraftingResults
	// void ServerClaimCraftingResults(AActor* CraftingObject, FCraftingMultiKey Key);                                          // [0x994cb90] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ServerCancelCrafting
	// void ServerCancelCrafting(AActor* CraftingObject, FCraftingMultiKey Key);                                                // [0x994c9cc] Net|NetReliableNative|Event|Public|NetServer|BlueprintCallable|NetValidate 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.NotifyCraftingSuccess
	// void NotifyCraftingSuccess(AActor* CraftingObject, FName& FormulaRowName, FCraftingMultiKey Key);                        // [0x994b638] Final|Native|Public|HasOutParms 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingSuccess
	// void ClientNotifyCraftingSuccess(AActor* CraftingObject, FName FormulaRowName, FCraftingMultiKey Key);                   // [0x99484bc] Net|NetReliableNative|Event|Public|NetClient 
	// Function /Script/CraftingRuntime.FortControllerComponent_CraftingNetworkEvents.ClientNotifyCraftingFailed
	// void ClientNotifyCraftingFailed(AActor* CraftingObject, FGameplayTagContainer FailedReason, FCraftingMultiKey Key);      // [0x99481f0] Net|Native|Event|Public|NetClient 
/// Class /Script/CraftingRuntime.FortGameStateComponent_Crafting
/// Size: 0x01A8 (0x0000A0 - 0x000248)
class UFortGameStateComponent_Crafting : public UFortGameStateComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	SMember(FDataRegistryType)                         CraftingFormulaRegistryType                                 OFFSET(get<T>, {0xA0, 4, 0, 0})
	SMember(FDataRegistryType)                         CraftingIngredientsUIDataRegistryType                       OFFSET(get<T>, {0xA4, 4, 0, 0})
	CMember(TArray<FCraftingResult>)                   CraftingResultsList                                         OFFSET(get<T>, {0x1E8, 16, 0, 0})
};



	/// Functions
	// Function /Script/CraftingRuntime.FortGameStateComponent_Crafting.OnRep_CraftingResultsList
	// void OnRep_CraftingResultsList();                                                                                        // [0x994c098] Final|Native|Protected 
	// Function /Script/CraftingRuntime.FortGameStateComponent_Crafting.OnPlaylistDataReady
	// void OnPlaylistDataReady(AFortGameStateAthena* GameState, UFortPlaylist* Playlist, FGameplayTagContainer& PlaylistContextTags); // [0x994b8bc] Final|Native|Protected|HasOutParms 
/// Class /Script/CraftingRuntime.FortPickupInteractOverrideComponent_Crafting
/// Size: 0x0020 (0x0000C0 - 0x0000E0)
class UFortPickupInteractOverrideComponent_Crafting : public UFortPickupInteractOverrideComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(UFortItemDefinition*)                      LastPickupItemDef                                           OFFSET(get<T>, {0xC0, 8, 0, 0})
	CMember(UFortItemDefinition*)                      LastFocusedItemDef                                          OFFSET(get<T>, {0xC8, 8, 0, 0})
	SMember(FName)                                     LastTargetFormulaName                                       OFFSET(get<T>, {0xD0, 4, 0, 0})
	DMember(float)                                     ContextualCraftingInteractDuration                          OFFSET(get<float>, {0xD4, 4, 0, 0})
	CMember(TEnumAsByte<TInteractionType>)             CachedInteractionType                                       OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(TEnumAsByte<EInteractionBeingAttempted>)   CachedInteractionBeingAttempted                             OFFSET(get<T>, {0xD9, 1, 0, 0})
};

/// Class /Script/CraftingRuntime.FortContextualTutorial_CraftingComplete
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UFortContextualTutorial_CraftingComplete : public UFortContextualTutorial
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/CraftingRuntime.FortContextualTutorial_CraftingReady
/// Size: 0x0000 (0x0000F8 - 0x0000F8)
class UFortContextualTutorial_CraftingReady : public UFortContextualTutorial
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Class /Script/CraftingRuntime.FortContextualTutorial_CraftingTabOpen
/// Size: 0x0008 (0x0000F8 - 0x000100)
class UFortContextualTutorial_CraftingTabOpen : public UFortContextualTutorial
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Class /Script/CraftingRuntime.CraftingLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UCraftingLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/CraftingRuntime.CraftingObjectSuccessEvent
/// Size: 0x0020 (0x000000 - 0x000020)
class FCraftingObjectSuccessEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(AActor*)                                   CraftingObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FCraftingMultiKey)                         Key                                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(AFortPlayerController*)                    Instigator                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     FormulaRowName                                              OFFSET(get<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingMultiKey
/// Size: 0x0008 (0x000000 - 0x000008)
class FCraftingMultiKey : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int64_t)                                   Key                                                         OFFSET(get<int64_t>, {0x0, 8, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingObjectStateChangedEvent
/// Size: 0x0028 (0x000000 - 0x000028)
class FCraftingObjectStateChangedEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(AActor*)                                   CraftingObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FCraftingMultiKey)                         Key                                                         OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(AFortPlayerController*)                    Instigator                                                  OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(ECraftingObjectState)                      CraftingState                                               OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(float)                                     CraftingStateStartTime                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     CraftingStateDuration                                       OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingObjectRepStateData
/// Size: 0x0028 (0x000000 - 0x000028)
class FCraftingObjectRepStateData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FCraftingMultiKey)                         Key                                                         OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(ECraftingObjectState)                      CraftingObjectState                                         OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(float)                                     StateChangeServerTime                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     PausedCraftingTime                                          OFFSET(get<float>, {0x10, 4, 0, 0})
	SMember(FName)                                     CraftingFormulaRow                                          OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   NumToCraft                                                  OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TWeakObjectPtr<AFortPlayerController*>)    CraftingInstigator                                          OFFSET(get<T>, {0x1C, 8, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingObjectServerStateData
/// Size: 0x01F0 (0x000000 - 0x0001F0)
class FCraftingObjectServerStateData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	DMember(bool)                                      bNextResultsHandledExternally                               OFFSET(get<bool>, {0x0, 1, 1, 0})
	CMember(AFortPickup*)                              PendingPickupCraftingItem                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     PendingPickupCraftingFormula                                OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FFortItemEntry)                            PendingPickupCraftingItemEntry                              OFFSET(get<T>, {0x18, 408, 0, 0})
	DMember(int32_t)                                   PendingPickupHeldCount                                      OFFSET(get<int32_t>, {0x1B0, 4, 0, 0})
	CMember(TArray<FFortItemEntry>)                    AllOfTheIngredientItems                                     OFFSET(get<T>, {0x1B8, 16, 0, 0})
	CMember(TArray<int32_t>)                           NonConsumedIngredientItemIndices                            OFFSET(get<T>, {0x1C8, 16, 0, 0})
	CMember(TArray<FItemAndCount>)                     CraftingResults                                             OFFSET(get<T>, {0x1D8, 16, 0, 0})
	SMember(FGameplayAbilitySpecHandle)                InstigatorWhileCraftingAbilitySpecHandle                    OFFSET(get<T>, {0x1E8, 4, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingIngredientRequirement
/// Size: 0x0028 (0x000000 - 0x000028)
class FCraftingIngredientRequirement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FGameplayTagContainer)                     IngredientTags                                              OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingUpgradeRule
/// Size: 0x0118 (0x000000 - 0x000118)
class FCraftingUpgradeRule : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FGameplayTagRequirements)                  SourceItemTags                                              OFFSET(get<T>, {0x0, 136, 0, 0})
	SMember(FGameplayTagRequirements)                  TargetItemTags                                              OFFSET(get<T>, {0x88, 136, 0, 0})
	DMember(char)                                      UpgradeFlags                                                OFFSET(get<char>, {0x110, 1, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingFormula
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FCraftingFormula : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x20, 1, 1, 0})
	DMember(bool)                                      bAlwaysKnownFormula                                         OFFSET(get<bool>, {0x20, 1, 1, 1})
	DMember(bool)                                      bInstantlyConsumeIngredients                                OFFSET(get<bool>, {0x20, 1, 1, 2})
	SMember(FGameplayTag)                              SourceObjectTag                                             OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FGameplayTag)                              CategoryTag                                                 OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(TArray<FCraftingIngredientRequirement>)    RequiredIngredients                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FName)                                     ResultLootTierKey                                           OFFSET(get<T>, {0x40, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   WhileCraftingAbility                                        OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(TArray<FCraftingUpgradeRule>)              UpgradeRules                                                OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(float)                                     OverrideCraftingTime                                        OFFSET(get<float>, {0x78, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   InstigatorWhileCraftingAbility                              OFFSET(get<T>, {0x80, 32, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingResult
/// Size: 0x0018 (0x000000 - 0x000018)
class FCraftingResult : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     ResultLootTierKey                                           OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FItemAndCount>)                     Results                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingIngredientUIData
/// Size: 0x0040 (0x000008 - 0x000048)
class FCraftingIngredientUIData : public FTableRowBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     IngredientTags                                              OFFSET(get<T>, {0x8, 32, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ItemDefs                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Icons                                                       OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingIngredientQueryState
/// Size: 0x0030 (0x000000 - 0x000030)
class FCraftingIngredientQueryState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FCraftingIngredientRequirement)            Requirement                                                 OFFSET(get<T>, {0x0, 40, 0, 0})
	DMember(int32_t)                                   Owned                                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Missing                                                     OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Struct /Script/CraftingRuntime.CraftingMessage
/// Size: 0x0008 (0x000000 - 0x000008)
class FCraftingMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(AActor*)                                   CraftingObject                                              OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Enum /Script/CraftingRuntime.ECraftingObjectState
/// Size: 0x10
enum ECraftingObjectState : uint8_t
{
	ECraftingObjectState__Invalid0                                                   = 0,
	ECraftingObjectState__Idle1                                                      = 1,
	ECraftingObjectState__Crafting2                                                  = 2,
	ECraftingObjectState__CraftingPaused3                                            = 3,
	ECraftingObjectState__CraftingPausedDecaying4                                    = 4,
	ECraftingObjectState__Ready5                                                     = 5,
	ECraftingObjectState__OverCrafting6                                              = 6,
	ECraftingObjectState__Resetting7                                                 = 7,
	ECraftingObjectState__TotalStates8                                               = 8,
	ECraftingObjectState__ECraftingObjectState_MAX9                                  = 9
};

/// Enum /Script/CraftingRuntime.ECraftingIngredientReqError
/// Size: 0x04
enum ECraftingIngredientReqError : uint8_t
{
	ECraftingIngredientReqError__None0                                               = 0,
	ECraftingIngredientReqError__NoItem1                                             = 1,
	ECraftingIngredientReqError__NotEnough2                                          = 2,
	ECraftingIngredientReqError__ECraftingIngredientReqError_MAX3                    = 3
};

