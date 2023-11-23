
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NetCore

/// Class /Script/ItemizationCoreRuntime.Inventory
/// Size: 0x09D8 (0x0000A0 - 0x000A78)
class UInventory : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2680;

public:
	CMember(AInventoryCollection*)                     OwningInventoryCollection                                   OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(UInventoryDefinition*)                     InventoryDefinition                                         OFFSET(get<T>, {0xA8, 8, 0, 0})
	SMember(FGuid)                                     InventoryID                                                 OFFSET(getStruct<T>, {0xB0, 16, 0, 0})
	SMember(FItemEntryList)                            ItemEntryData                                               OFFSET(getStruct<T>, {0xC0, 760, 0, 0})
	SMember(FVkAttributeList)                          AttributeData                                               OFFSET(getStruct<T>, {0x3B8, 704, 0, 0})
	DMember(uint16_t)                                  InventoryTotalSlotsOverride                                 OFFSET(get<uint16_t>, {0x678, 2, 0, 0})
	DMember(int64_t)                                   InventoryMaxStackSizeOverride                               OFFSET(get<int64_t>, {0x680, 8, 0, 0})
	CMember(TArray<char>)                              InventoryMaxStackSizeOverrideAttributeData                  OFFSET(get<T>, {0x688, 16, 0, 0})
	CMember(UItemComponentStorageManager*)             ItemComponentStorageManager                                 OFFSET(get<T>, {0x698, 8, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_ItemData
	// void OnRep_ItemData();                                                                                                   // [0x7741190] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryTotalSlotsOverride
	// void OnRep_InventoryTotalSlotsOverride();                                                                                // [0x7741154] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryMaxStackSizeOverride
	// void OnRep_InventoryMaxStackSizeOverride();                                                                              // [0x774112c] Final|Native|Protected 
	// Function /Script/ItemizationCoreRuntime.Inventory.OnRep_InventoryID
	// void OnRep_InventoryID();                                                                                                // [0x7741118] Final|Native|Protected 
};

/// Class /Script/ItemizationCoreRuntime.EquippableInventory
/// Size: 0x00B0 (0x000A78 - 0x000B28)
class UEquippableInventory : public UInventory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2856;

public:
	CMember(TArray<FGuid>)                             EquippedItems                                               OFFSET(get<T>, {0xAC8, 16, 0, 0})
	CMember(TArray<FGuid>)                             PreviouslyEquippedItems                                     OFFSET(get<T>, {0xAD8, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.EquippableInventory.OnRep_EquippedItems
	// void OnRep_EquippedItems();                                                                                              // [0x7741104] Final|Native|Private 
};

/// Class /Script/ItemizationCoreRuntime.InventoryDefinition
/// Size: 0x0048 (0x000030 - 0x000078)
class UInventoryDefinition : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	DMember(uint16_t)                                  Slots                                                       OFFSET(get<uint16_t>, {0x60, 2, 0, 0})
	DMember(char)                                      PickupPriority                                              OFFSET(get<char>, {0x62, 1, 0, 0})
	CMember(UInventoryRestriction*)                    InventoryRestriction                                        OFFSET(get<T>, {0x68, 8, 0, 0})
	DMember(bool)                                      bEnableItemStacking                                         OFFSET(get<bool>, {0x70, 1, 0, 0})
	DMember(bool)                                      bRequireUniqueItemDefinitionPerStack                        OFFSET(get<bool>, {0x71, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.EquippableInventoryDefinition
/// Size: 0x0020 (0x000078 - 0x000098)
class UEquippableInventoryDefinition : public UInventoryDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FEquipItemRestriction>)             EquipRestrictions                                           OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FEquipItemCondition>)               EquipConditions                                             OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.EquipmentSlot
/// Size: 0x0000 (0x000098 - 0x000098)
class UEquipmentSlot : public UEquippableInventoryDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/ItemizationCoreRuntime.EquipmentHotBar
/// Size: 0x0000 (0x000098 - 0x000098)
class UEquipmentHotBar : public UEquippableInventoryDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Class /Script/ItemizationCoreRuntime.InventoryCheatManager
/// Size: 0x0000 (0x000028 - 0x000028)
class UInventoryCheatManager : public UCheatManagerExtension
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.InventoryCollection
/// Size: 0x0370 (0x000290 - 0x000600)
class AInventoryCollection : public AInfo
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1536;

public:
	CMember(TArray<UInventory*>)                       InventoryList                                               OFFSET(get<T>, {0x290, 16, 0, 0})
	CMember(TMap<FGuid, UInventory*>)                  InventoryMap                                                OFFSET(get<T>, {0x2A0, 80, 0, 0})
	CMember(TMap<FGuid, FGuid>)                        ItemInventoryMap                                            OFFSET(get<T>, {0x2F0, 80, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.UnequipItem
	// bool UnequipItem(FGuid& ItemEntryID);                                                                                    // [0x77411fc] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.IsItemEquipped
	// bool IsItemEquipped(FGuid& ItemEntryID);                                                                                 // [0x7741014] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemSlotNumber
	// int32_t GetItemSlotNumber(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                                 // [0x7740e34] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemIntAttribute
	// int64_t GetItemIntAttribute(FGuid& TargetInventoryID, FGuid& ItemEntryID, UClass*& Attribute);                           // [0x7740cf0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemDefinition
	// UItemDefinitionBase* GetItemDefinition(FGuid& TargetInventoryID, FGuid& ItemEntryID);                                    // [0x7740bec] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmountFromInventory
	// int64_t GetItemAmountFromInventory(UItemDefinitionBase* ItemDefinition, FGuid& TargetInventoryID);                       // [0x7740ae4] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetItemAmount
	// int64_t GetItemAmount(UItemDefinitionBase* ItemDefinition);                                                              // [0x7740a34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryName
	// FText GetInventoryName(FGuid& TargetInventoryID);                                                                        // [0x7740984] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoryDefinition
	// UInventoryDefinition* GetInventoryDefinition(FGuid& TargetInventoryID);                                                  // [0x77408e8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetInventoriesWithInventoryDefinition
	// TArray<FGuid> GetInventoriesWithInventoryDefinition(UInventoryDefinition* InventoryDefinition);                          // [0x7740844] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetAllItemsInInventory
	// bool GetAllItemsInInventory(FGuid& TargetInventoryID, TArray<FGuid>& OutItemEntryIDList);                                // [0x774066c] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.GetAllInventoriesInCollection
	// bool GetAllInventoriesInCollection(TArray<FGuid>& OutInventoryIDList);                                                   // [0x77405c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryCollection.EquipItem
	// bool EquipItem(FGuid& ItemEntryID);                                                                                      // [0x77404e8] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/ItemizationCoreRuntime.InventoryRestriction
/// Size: 0x0028 (0x000030 - 0x000058)
class UInventoryRestriction : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FText)                                     RestrictionName                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	CMember(TArray<UItemType*>)                        ItemTypes                                                   OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttachment
/// Size: 0x0018 (0x000290 - 0x0002A8)
class AItemAttachment : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	CMember(USkeletalMeshComponent*)                   SkeletalMesh                                                OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UItemAttachmentDefinition*)                AttachmentData                                              OFFSET(get<T>, {0x298, 8, 0, 0})
	CMember(EItemState)                                ItemState                                                   OFFSET(get<T>, {0x2A0, 1, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemAttachment.OnRep_ItemStateChanged
	// void OnRep_ItemStateChanged();                                                                                           // [0x77410f0] Final|Native|Private 
	// Function /Script/ItemizationCoreRuntime.ItemAttachment.OnRep_AttachmentDataChanged
	// void OnRep_AttachmentDataChanged();                                                                                      // [0x77410f0] Final|Native|Private 
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute
/// Size: 0x0040 (0x000028 - 0x000068)
class UItemAttribute : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FText)                                     AttributeName                                               OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FText)                                     AttributeDescription                                        OFFSET(getStruct<T>, {0x40, 24, 0, 0})
	CMember(TArray<char>)                              DefaultValueAsData                                          OFFSET(get<T>, {0x58, 16, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemAttribute.GetAttributeName
	// FText GetAttributeName();                                                                                                // [0x77407f8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemAttribute.GetAttributeDescription
	// FText GetAttributeDescription();                                                                                         // [0x77407ac] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Int
/// Size: 0x0010 (0x000068 - 0x000078)
class UItemAttribute_Int : public UItemAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int64_t)                                   DefaultValue                                                OFFSET(get<int64_t>, {0x68, 8, 0, 0})
	CMember(EAttributeCombineLogic_Math)               CombineLogic                                                OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Decimal
/// Size: 0x0010 (0x000068 - 0x000078)
class UItemAttribute_Decimal : public UItemAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(double)                                    DefaultValue                                                OFFSET(get<double>, {0x68, 8, 0, 0})
	CMember(EAttributeCombineLogic_Math)               CombineLogic                                                OFFSET(get<T>, {0x70, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Bool
/// Size: 0x0008 (0x000068 - 0x000070)
class UItemAttribute_Bool : public UItemAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      DefaultValue                                                OFFSET(get<bool>, {0x68, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_String
/// Size: 0x0010 (0x000068 - 0x000078)
class UItemAttribute_String : public UItemAttribute
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FString)                                   DefaultValue                                                OFFSET(getStruct<T>, {0x68, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValueBase
/// Size: 0x0018 (0x000028 - 0x000040)
class UItemAttributeValueBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FGuid)                                     QueriedItemEntryID                                          OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TWeakObjectPtr<AInventoryCollection*>)     QueriedInventoryCollection                                  OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_Int
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_Int : public UItemAttributeValueBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_Decimal
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_Decimal : public UItemAttributeValueBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_Bool
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_Bool : public UItemAttributeValueBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttributeValue_String
/// Size: 0x0000 (0x000040 - 0x000040)
class UItemAttributeValue_String : public UItemAttributeValueBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentBase
/// Size: 0x0008 (0x000030 - 0x000038)
class UItemComponentBase : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentLocalStorage
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemComponentLocalStorage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponentStorageManager
/// Size: 0x0050 (0x000028 - 0x000078)
class UItemComponentStorageManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TMap<UClass*, FItemEntryStorageMap>)       ClassLookupMap                                              OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Ability
/// Size: 0x0000 (0x000038 - 0x000038)
class UItemComponent_Ability : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttachmentDefinition
/// Size: 0x0038 (0x000028 - 0x000060)
class UItemAttachmentDefinition : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(EItemStateFilter)                          ItemVisibility                                              OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(TWeakObjectPtr<USkeletalMesh*>)            SkeletalMesh                                                OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FName)                                     AttachToSocketName                                          OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	CMember(UClass*)                                   AnimLayerOverlayClass                                       OFFSET(get<T>, {0x58, 8, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Attach
/// Size: 0x0010 (0x000038 - 0x000048)
class UItemComponent_Attach : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<UItemAttachmentDefinition*>)        MeshAttachments                                             OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_Rarity
/// Size: 0x0000 (0x000078 - 0x000078)
class UItemAttribute_Rarity : public UItemAttribute_Int
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_WasLoadedFromSave
/// Size: 0x0000 (0x000070 - 0x000070)
class UItemAttribute_WasLoadedFromSave : public UItemAttribute_Bool
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Core
/// Size: 0x0018 (0x000038 - 0x000050)
class UItemComponent_Core : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UItemType*)                                ItemType                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(UItemRarityTable*)                         ItemRarityTable                                             OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(int64_t)                                   DefaultRarityIndex                                          OFFSET(get<int64_t>, {0x48, 8, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemType
	// UItemType* GetItemType();                                                                                                // [0x7755108] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_Core.GetItemRarityTable
	// UItemRarityTable* GetItemRarityTable();                                                                                  // [0x556d2e8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI
/// Size: 0x0098 (0x000038 - 0x0000D0)
class UItemComponent_DisplayUI : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FText)                                     ItemName                                                    OFFSET(getStruct<T>, {0x38, 24, 0, 0})
	SMember(FText)                                     ItemDescription                                             OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               ItemIcon                                                    OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TWeakObjectPtr<UTexture2D*>)               SmallItemIcon                                               OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UMaterialInterface*>)       ItemMaterial                                                OFFSET(get<T>, {0xA8, 32, 0, 0})
	SMember(FName)                                     MaterialTextureParameter                                    OFFSET(getStruct<T>, {0xC8, 4, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetSmallItemIcon
	// TWeakObjectPtr<UTexture2D*> GetSmallItemIcon();                                                                          // [0x7755120] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetMaterialTextureParameter
	// FName GetMaterialTextureParameter();                                                                                     // [0x58989c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemName
	// FText GetItemName();                                                                                                     // [0x6617cfc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemMaterial
	// TWeakObjectPtr<UMaterialInterface*> GetItemMaterial();                                                                   // [0x77550e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemIcon
	// TWeakObjectPtr<UTexture2D*> GetItemIcon();                                                                               // [0x77550bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.ItemComponent_DisplayUI.GetItemDescription
	// FText GetItemDescription();                                                                                              // [0x77550a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Pickup
/// Size: 0x0000 (0x000038 - 0x000038)
class UItemComponent_Pickup : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_StackSize
/// Size: 0x0000 (0x000078 - 0x000078)
class UItemAttribute_StackSize : public UItemAttribute_Int
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemAttribute_MaxStackSize
/// Size: 0x0000 (0x000078 - 0x000078)
class UItemAttribute_MaxStackSize : public UItemAttribute_Int
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemComponent_Stackable
/// Size: 0x0010 (0x000038 - 0x000048)
class UItemComponent_Stackable : public UItemComponentBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int64_t)                                   MaxStackSize                                                OFFSET(get<int64_t>, {0x38, 8, 0, 0})
	DMember(bool)                                      AllowMultipleStacks                                         OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      DestroyEmptyStacks                                          OFFSET(get<bool>, {0x41, 1, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemDefinitionBase
/// Size: 0x0110 (0x000030 - 0x000140)
class UItemDefinitionBase : public UPrimaryDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FItemComponentContainer)                   ComponentContainer                                          OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	CMember(TArray<UItemComponentBase*>)               CachedComponentList                                         OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TMap<UClass*, UItemComponentBase*>)        CachedComponentMap                                          OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TSet<UClass*>)                             CachedAttributeSet                                          OFFSET(get<T>, {0xF0, 80, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.ItemDefinitionBase.GetItemComponentByClass
	// UItemComponentBase* GetItemComponentByClass(UClass* ItemComponentClass);                                                 // [0x77539dc] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ItemizationCoreRuntime.ItemDefinition
/// Size: 0x00B0 (0x000140 - 0x0001F0)
class UItemDefinition : public UItemDefinitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	DMember(int32_t)                                   ModifiedComponentIdx                                        OFFSET(get<int32_t>, {0x1E8, 4, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemizationFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemPickup
/// Size: 0x0028 (0x000290 - 0x0002B8)
class AItemPickup : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 696;

public:
	CMember(UCapsuleComponent*)                        TouchCapsule                                                OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(TWeakObjectPtr<UItemDefinitionBase*>)      ItemDefinition                                              OFFSET(get<T>, {0x298, 32, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemizationPickupFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UItemizationPickupFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ItemizationCoreRuntime.ItemRarityTable
/// Size: 0x0040 (0x000030 - 0x000070)
class UItemRarityTable : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FText)                                     RarityTableName                                             OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     RarityTableDescription                                      OFFSET(getStruct<T>, {0x48, 24, 0, 0})
	CMember(TArray<FVkRarityEntry>)                    RarityList                                                  OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemType
/// Size: 0x0030 (0x000030 - 0x000060)
class UItemType : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x30, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x48, 24, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.ItemVariant
/// Size: 0x0038 (0x000140 - 0x000178)
class UItemVariant : public UItemDefinitionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(UItemDefinition*)                          Original                                                    OFFSET(get<T>, {0x158, 8, 0, 0})
	CMember(TArray<FOverriddenRecord>)                 CachedOverriddenList                                        OFFSET(get<T>, {0x160, 16, 0, 0})
	DMember(int32_t)                                   ModifiedComponentIdx                                        OFFSET(get<int32_t>, {0x170, 4, 0, 0})
};

/// Class /Script/ItemizationCoreRuntime.InventoryComponent
/// Size: 0x0018 (0x0000A0 - 0x0000B8)
class UInventoryComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<TWeakObjectPtr>)                    InventoryDefinitions                                        OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TWeakObjectPtr<AInventoryCollection*>)     InventoryCollection                                         OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.GetInventoryCollection
	// AInventoryCollection* GetInventoryCollection();                                                                          // [0x77539b4] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.AddOrResetInventory
	// void AddOrResetInventory(UInventoryDefinition* NewInventoryDefinition);                                                  // [0x551cb00] Final|Native|Public|BlueprintCallable 
	// Function /Script/ItemizationCoreRuntime.InventoryComponent.AddItem
	// void AddItem(UItemDefinitionBase* ItemDefinition, int32_t Amount);                                                       // [0x7753864] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemFilter
/// Size: 0x0018 (0x000000 - 0x000018)
class FEquipItemFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bAppliesToAllItems                                          OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    ItemDefinitions                                             OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemRestriction
/// Size: 0x0010 (0x000018 - 0x000028)
class FEquipItemRestriction : public FEquipItemFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int64_t)                                   ActiveLimit                                                 OFFSET(get<int64_t>, {0x18, 8, 0, 0})
	CMember(EEquipItemLimitHitBehaviour)               LimitHitBehaviour                                           OFFSET(get<T>, {0x20, 1, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.EquipItemCondition
/// Size: 0x0000 (0x000018 - 0x000018)
class FEquipItemCondition : public FEquipItemFilter
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ItemizationCoreRuntime.ItemAggregatedData
/// Size: 0x0070 (0x000000 - 0x000070)
class FItemAggregatedData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Struct /Script/ItemizationCoreRuntime.VkAttributeValue
/// Size: 0x0028 (0x000000 - 0x000028)
class FVkAttributeValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UClass*)                                   Attribute                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.VkAttributeEntry
/// Size: 0x0044 (0x00000C - 0x000050)
class FVkAttributeEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGuid)                                     ItemEntryID                                                 OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	SMember(FVkAttributeValue)                         AttributeValue                                              OFFSET(getStruct<T>, {0x20, 40, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.VkAttributeList
/// Size: 0x01B8 (0x000108 - 0x0002C0)
class FVkAttributeList : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 704;

public:
	CMember(TArray<FVkAttributeEntry>)                 AttributeList                                               OFFSET(get<T>, {0x108, 16, 0, 0})
	CMember(TWeakObjectPtr<AInventoryCollection*>)     OwningInventoryCollection                                   OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TWeakObjectPtr<UInventory*>)               OwningInventory                                             OFFSET(get<T>, {0x120, 8, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntryStorageMap
/// Size: 0x0050 (0x000000 - 0x000050)
class FItemEntryStorageMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FGuid, UItemComponentLocalStorage*>)  ItemToStorageMap                                            OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemComponentContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FItemComponentContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<UItemComponentBase*>)               Components                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntry
/// Size: 0x002C (0x00000C - 0x000038)
class FItemEntry : public FFastArraySerializerItem
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UItemDefinitionBase*)                      ItemDefinition                                              OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FGuid)                                     ItemEntryID                                                 OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   SlotNumber                                                  OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.ItemEntryList
/// Size: 0x01F0 (0x000108 - 0x0002F8)
class FItemEntryList : public FFastArraySerializer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 760;

public:
	CMember(TArray<FItemEntry>)                        ItemList                                                    OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.VkRarityEntry
/// Size: 0x0040 (0x000000 - 0x000040)
class FVkRarityEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FText)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ItemizationCoreRuntime.OverriddenRecord
/// Size: 0x0018 (0x000000 - 0x000018)
class FOverriddenRecord : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Enum /Script/ItemizationCoreRuntime.EEquipItemLimitHitBehaviour
/// Size: 0x03
enum EEquipItemLimitHitBehaviour : uint8_t
{
	EEquipItemLimitHitBehaviour__UnequipLeastRecentlyUsed0                           = 0,
	EEquipItemLimitHitBehaviour__Block1                                              = 1,
	EEquipItemLimitHitBehaviour__EEquipItemLimitHitBehaviour_MAX2                    = 2
};

/// Enum /Script/ItemizationCoreRuntime.EItemState
/// Size: 0x05
enum EItemState : uint8_t
{
	EItemState__NotInInventory0                                                      = 0,
	EItemState__InInventory1                                                         = 1,
	EItemState__Equipped2                                                            = 2,
	EItemState__NumStates3                                                           = 3,
	EItemState__EItemState_MAX4                                                      = 4
};

/// Enum /Script/ItemizationCoreRuntime.EVkInventoryMoveResult
/// Size: 0x05
enum EVkInventoryMoveResult : uint8_t
{
	EVkInventoryMoveResult__Success0                                                 = 0,
	EVkInventoryMoveResult__Failed1                                                  = 1,
	EVkInventoryMoveResult__InvalidRequest2                                          = 2,
	EVkInventoryMoveResult__NoChange3                                                = 3,
	EVkInventoryMoveResult__EVkInventoryMoveResult_MAX4                              = 4
};

/// Enum /Script/ItemizationCoreRuntime.EVkInventoryMoveBehaviour
/// Size: 0x03
enum EVkInventoryMoveBehaviour : uint8_t
{
	EVkInventoryMoveBehaviour__SwapSlotNumber0                                       = 0,
	EVkInventoryMoveBehaviour__EmplaceSlotNumber1                                    = 1,
	EVkInventoryMoveBehaviour__EVkInventoryMoveBehaviour_MAX2                        = 2
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeCombineLogic_Math
/// Size: 0x07
enum EAttributeCombineLogic_Math : uint8_t
{
	EAttributeCombineLogic_Math__MustMatch0                                          = 0,
	EAttributeCombineLogic_Math__UseTarget1                                          = 1,
	EAttributeCombineLogic_Math__Combine2                                            = 2,
	EAttributeCombineLogic_Math__Average3                                            = 3,
	EAttributeCombineLogic_Math__Highest4                                            = 4,
	EAttributeCombineLogic_Math__Lowest5                                             = 5,
	EAttributeCombineLogic_Math__EAttributeCombineLogic_MAX6                         = 6
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeBasicCalculateLogic
/// Size: 0x04
enum EAttributeBasicCalculateLogic : uint8_t
{
	EAttributeBasicCalculateLogic__ReturnFirstFound0                                 = 0,
	EAttributeBasicCalculateLogic__AddAllFound1                                      = 1,
	EAttributeBasicCalculateLogic__MultiplyAllFound2                                 = 2,
	EAttributeBasicCalculateLogic__EAttributeBasicCalculateLogic_MAX3                = 3
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeBasicFirstFoundLogic
/// Size: 0x03
enum EAttributeBasicFirstFoundLogic : uint8_t
{
	EAttributeBasicFirstFoundLogic__PrioritizeItemEntry0                             = 0,
	EAttributeBasicFirstFoundLogic__PrioritizeComponent1                             = 1,
	EAttributeBasicFirstFoundLogic__EAttributeBasicFirstFoundLogic_MAX2              = 2
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeBasicNotFoundResult
/// Size: 0x03
enum EAttributeBasicNotFoundResult : uint8_t
{
	EAttributeBasicNotFoundResult__ReturnInitial0                                    = 0,
	EAttributeBasicNotFoundResult__ReturnZero1                                       = 1,
	EAttributeBasicNotFoundResult__EAttributeBasicNotFoundResult_MAX2                = 2
};

/// Enum /Script/ItemizationCoreRuntime.EAttributeApplicationRule
/// Size: 0x04
enum EAttributeApplicationRule : uint8_t
{
	EAttributeApplicationRule__ItemEntryOnly0                                        = 0,
	EAttributeApplicationRule__ComponentOnly1                                        = 1,
	EAttributeApplicationRule__Anywhere2                                             = 2,
	EAttributeApplicationRule__EAttributeApplicationRule_MAX3                        = 3
};

/// Enum /Script/ItemizationCoreRuntime.EItemStateFilter
/// Size: 0x04
enum EItemStateFilter : uint8_t
{
	EItemStateFilter__Always0                                                        = 0,
	EItemStateFilter__Active1                                                        = 1,
	EItemStateFilter__Inactive2                                                      = 2,
	EItemStateFilter__EItemStateFilter_MAX3                                          = 3
};

