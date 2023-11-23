
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: EntityCore
/// dependency: FortniteAI
/// dependency: FortniteGame
/// dependency: VerseGameplayTags

/// Class /Script/VerseFortnite.CharacterCustomization
/// Size: 0x0000 (0x0000B8 - 0x0000B8)
class UCharacterCustomization : public UFortAIPawnCustomizationDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
};

/// Class /Script/VerseFortnite.VerseActorPayloadWrapper
/// Size: 0x0008 (0x000290 - 0x000298)
class AVerseActorPayloadWrapper : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Script/VerseFortnite.NPCCharacterModifiersComponent
/// Size: 0x0010 (0x000120 - 0x000130)
class UNPCCharacterModifiersComponent : public UFortUserOptionContainerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<UNPCCharacterModifier*>)            Modifiers                                                   OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UNPCCharacterModifier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Verse
/// Size: 0x0000 (0x000028 - 0x000028)
class UNPCCharacterModifier_Verse : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.VerseFortniteBRTeamCollection
/// Size: 0x0068 (0x000028 - 0x000090)
class UVerseFortniteBRTeamCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
};

/// Class /Script/VerseFortnite.VerseFortniteMinigameTeamCollection
/// Size: 0x0020 (0x000028 - 0x000048)
class UVerseFortniteMinigameTeamCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/VerseFortnite.AIComponent
/// Size: 0x0018 (0x000058 - 0x000070)
class UAIComponent : public UEntityComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(AFortPawn*)                                CachedPawn                                                  OFFSET(get<T>, {0x58, 8, 0, 0})
	CMember(AAIController*)                            CachedAIController                                          OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/VerseFortnite.AIBehaviorScript
/// Size: 0x0000 (0x000070 - 0x000070)
class UAIBehaviorScript : public UAIComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
};

/// Class /Script/VerseFortnite.FortAthenaAISpawnerDataComponent_Verse
/// Size: 0x0018 (0x000030 - 0x000048)
class UFortAthenaAISpawnerDataComponent_Verse : public UFortAthenaAISpawnerDataComponent_ScriptBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<UClass*>)                           EntityComponents                                            OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TWeakObjectPtr<UAIBehaviorScript*>)        AIBehaviorScript                                            OFFSET(get<T>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.FortAthenaAISpawnerDataComponent_Verse.SetAIBehaviorScript
	// void SetAIBehaviorScript(UAIBehaviorScript* InAIBehaviorScript);                                                         // [0x9cfb9f8] Final|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortnite.FortAthenaAISpawnerDataComponent_Verse.AddUniqueEntityComponent
	// void AddUniqueEntityComponent(UClass* EntityComponent);                                                                  // [0x9cf7ed0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VerseFortnite.LoadNPCCharacterDefinitionAsyncBase
/// Size: 0x0040 (0x000030 - 0x000070)
class ULoadNPCCharacterDefinitionAsyncBase : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TWeakObjectPtr<UNPCCharacterDefinition*>)  LoadedCharacterDefinition                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ContextObject                                               OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<UNPCCharacterModifier*>)            StoredAdditionalModifiers                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TWeakObjectPtr<UNPCCharacterDefinition*>)  StoredCharacterDefinition                                   OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Class /Script/VerseFortnite.LoadNPCCharacterDefinitionAsync
/// Size: 0x0010 (0x000070 - 0x000080)
class ULoadNPCCharacterDefinitionAsync : public ULoadNPCCharacterDefinitionAsyncBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnLoaded                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.LoadNPCCharacterDefinitionAsync.LoadCharacterDefinitionAsync
	// ULoadNPCCharacterDefinitionAsync* LoadCharacterDefinitionAsync(UObject* ContextObj, TWeakObjectPtr<UNPCCharacterDefinition*> CharacterDefinition, TArray<UNPCCharacterModifier*>& AdditionalModifiers); // [0x9cfacc4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VerseFortnite.LoadAndCreateComponentListAsync
/// Size: 0x0020 (0x000070 - 0x000090)
class ULoadAndCreateComponentListAsync : public ULoadNPCCharacterDefinitionAsyncBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(TWeakObjectPtr<UFortAthenaAISpawnerDataComponentList*>) ComponentsList                                 OFFSET(get<T>, {0x80, 8, 0, 0})
	DMember(bool)                                      bStoredForPreview                                           OFFSET(get<bool>, {0x88, 1, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.LoadAndCreateComponentListAsync.LoadAndCreateComponentListAsync
	// ULoadAndCreateComponentListAsync* LoadAndCreateComponentListAsync(UObject* ContextObj, TWeakObjectPtr<UNPCCharacterDefinition*> CharacterDefinition, TArray<UNPCCharacterModifier*>& AdditionalModifiers, bool bForPreview); // [0x9cfa38c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VerseFortnite.NPCCharacterDefinition
/// Size: 0x0040 (0x0000B8 - 0x0000F8)
class UNPCCharacterDefinition : public UFortAIPawnCustomizationDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FMulticastInlineDelegate)                  OnCharacterModifierModified                                 OFFSET(getStruct<T>, {0xB8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCharacterTypeModified                                     OFFSET(getStruct<T>, {0xC8, 16, 0, 0})
	CMember(UNPCCharacterType*)                        Type                                                        OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(UNPCCharacterModifier_Behavior*)           Behavior                                                    OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TArray<UNPCCharacterModifier*>)            Modifiers                                                   OFFSET(get<T>, {0xE8, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterDefinition.GetRequiredAssets
	// void GetRequiredAssets(TArray<FSoftObjectPath>& OutAssets);                                                              // [0x9cfa168] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinition.GetPreviewMesh
	// void GetPreviewMesh(UObject* Outer, TArray<UNPCCharacterModifier*>& AdditionalModifiers, TArray<FCharacterPreviewMesh>& OutCharacterPreviewMeshes, APawn*& OutDefaultPawn); // [0x9cf9a80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinition.GetCharacterCID
	// UAthenaCharacterItemDefinition* GetCharacterCID(UObject* Outer, TArray<UNPCCharacterModifier*>& AdditionalModifiers);    // [0x9cf9124] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinition.GetCharacterBlueprint
	// UClass* GetCharacterBlueprint(TArray<UNPCCharacterModifier*>& AdditionalModifiers);                                      // [0x9cf8b1c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.NPCCharacterDefinition.CreateComponentList
	// UFortAthenaAISpawnerDataComponentList* CreateComponentList(UObject* Outer, TArray<UNPCCharacterModifier*>& AdditionalModifiers, bool bForPreview); // [0x9cf8200] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Behavior
/// Size: 0x0000 (0x000028 - 0x000028)
class UNPCCharacterModifier_Behavior : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_CosmeticSpawn
/// Size: 0x0060 (0x000028 - 0x000088)
class UNPCCharacterModifier_CosmeticSpawn : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(ECharacterCosmeticType)                    CosmeticType                                                OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TWeakObjectPtr<UAthenaCharacterItemDefinition*>) CharacterCosmetic                                     OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FString)                                   CharacterCosmeticAssetId                                    OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bEnableCharacterCosmeticRetargeting                         OFFSET(get<bool>, {0x60, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CharacterBlueprint                                          OFFSET(get<T>, {0x68, 32, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterModifier_CosmeticSpawn.GetCharacterCosmetic
	// TWeakObjectPtr<UAthenaCharacterItemDefinition*> GetCharacterCosmetic();                                                  // [0x9cf9a18] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Emotes
/// Size: 0x0010 (0x000028 - 0x000038)
class UNPCCharacterModifier_Emotes : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FCharacterModifierEmote>)           Emotes                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Inventory
/// Size: 0x0030 (0x000028 - 0x000058)
class UNPCCharacterModifier_Inventory : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FCharacterModifierInventoryItem>)   Items                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FGameplayTagContainer)                     SupportedItemTags                                           OFFSET(getStruct<T>, {0x38, 32, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_PatrolPath
/// Size: 0x0008 (0x000028 - 0x000030)
class UNPCCharacterModifier_PatrolPath : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(EFortCreativePatrolPathGroup)              PatrolPathGroup                                             OFFSET(get<T>, {0x28, 1, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterModifier_PatrolPath.GetPatrolPathToAssign
	// AFortAthenaPatrolPath* GetPatrolPathToAssign(AActor* ModifierOwner);                                                     // [0x101681c] Event|Public|BlueprintEvent 
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_Team
/// Size: 0x0008 (0x000028 - 0x000030)
class UNPCCharacterModifier_Team : public UNPCCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ETeamOption)                               TeamOption                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(uint32_t)                                  TeamIndex                                                   OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterModifier_VerseBehavior
/// Size: 0x0008 (0x000028 - 0x000030)
class UNPCCharacterModifier_VerseBehavior : public UNPCCharacterModifier_Behavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UAIBehaviorScript*)                        AIBehaviorScript                                            OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterType
/// Size: 0x0028 (0x000028 - 0x000050)
class UNPCCharacterType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTag)                              CharacterDefinitionTag                                      OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SupportedModifiers                                          OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    DefaultModifiers                                            OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterType_Custom
/// Size: 0x0078 (0x000050 - 0x0000C8)
class UNPCCharacterType_Custom : public UNPCCharacterType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	CMember(TWeakObjectPtr<UFortAIPawnCustomizationDefinition*>) DefaultCosmetics                                  OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AISpawnerData                                               OFFSET(get<T>, {0x88, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PlayerSpawnerData                                           OFFSET(get<T>, {0xA8, 32, 0, 0})
};

/// Class /Script/VerseFortnite.NPCCharacterType_FromPreset
/// Size: 0x0078 (0x000050 - 0x0000C8)
class UNPCCharacterType_FromPreset : public UNPCCharacterType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x50, 24, 0, 0})
	SMember(FString)                                   SelectedAI                                                  OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	SMember(FCharacterTypePreset)                      SelectedPreset                                              OFFSET(getStruct<T>, {0x78, 64, 0, 0})
	CMember(TArray<FCharacterTypePreset>)              Presets                                                     OFFSET(get<T>, {0xB8, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.NPCCharacterType_FromPreset.GetAvailableAIs
	// TArray<FString> GetAvailableAIs();                                                                                       // [0x9cf8ae0] Final|Native|Protected|Const 
	// Function /Script/VerseFortnite.NPCCharacterType_FromPreset.GetAIToSpawn
	// TWeakObjectPtr<UClass*> GetAIToSpawn();                                                                                  // [0x9cf8a9c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortnite.VerseFortniteActorWrapper
/// Size: 0x0020 (0x000028 - 0x000048)
class UVerseFortniteActorWrapper : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/VerseFortnite.VerseFortniteCharacter
/// Size: 0x0008 (0x000048 - 0x000050)
class UVerseFortniteCharacter : public UVerseFortniteActorWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Class /Script/VerseFortnite.TaggedObjectQueryWorldSubsystem
/// Size: 0x0050 (0x000030 - 0x000080)
class UTaggedObjectQueryWorldSubsystem : public UTaggedObjectQueryWorldSubsystemBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/VerseFortnite.VerseFortnitePlayspace
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UVerseFortnitePlayspace : public UVerseFortniteActorWrapper
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<UVerseFortnitePlayspaceExtensionBase*>) Extensions                                              OFFSET(get<T>, {0xA8, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.VerseFortnitePlayspace.OnMinigameSetUp
	// void OnMinigameSetUp(AFortMinigame* Minigame);                                                                           // [0x9cfb908] Final|Native|Private 
	// Function /Script/VerseFortnite.VerseFortnitePlayspace.OnMinigamePlayerAdded
	// void OnMinigamePlayerAdded(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer);                                           // [0x9cfb604] Final|Native|Private 
};

/// Class /Script/VerseFortnite.VerseFortnitePlayspaceExtensionBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UVerseFortnitePlayspaceExtensionBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.VerseFortniteSubsystem
/// Size: 0x00A0 (0x000030 - 0x0000D0)
class UVerseFortniteSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	CMember(TMap<TWeakObjectPtr, UVerseFortniteActorWrapper*>) ActorToWrapperMap                                   OFFSET(get<T>, {0x30, 80, 0, 0})
};

/// Struct /Script/VerseFortnite.CharacterPreviewMesh
/// Size: 0x0040 (0x000000 - 0x000040)
class FCharacterPreviewMesh : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<USkeletalMesh*>)            SkeletalMesh                                                OFFSET(get<T>, {0x0, 32, 0, 0})
	SMember(FGameplayTagContainer)                     MeshDescriptor                                              OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/VerseFortnite.CharacterModifierEmote
/// Size: 0x0020 (0x000000 - 0x000020)
class FCharacterModifierEmote : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TWeakObjectPtr<UAthenaDanceItemDefinition*>) EmoteDefinition                                           OFFSET(get<T>, {0x0, 32, 0, 0})
};

/// Struct /Script/VerseFortnite.CharacterModifierInventoryItem
/// Size: 0x0028 (0x000000 - 0x000028)
class FCharacterModifierInventoryItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TWeakObjectPtr<UFortItemDefinition*>)      ItemDefinition                                              OFFSET(get<T>, {0x0, 32, 0, 0})
	DMember(int32_t)                                   ItemQuantity                                                OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/VerseFortnite.CharacterTypePreset
/// Size: 0x0040 (0x000000 - 0x000040)
class FCharacterTypePreset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TWeakObjectPtr<UClass*>)                   SpawnerData                                                 OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AdditionalData                                              OFFSET(get<T>, {0x20, 32, 0, 0})
};

/// Enum /Script/VerseFortnite.ECharacterCosmeticType
/// Size: 0x03
enum ECharacterCosmeticType : uint8_t
{
	ECharacterCosmeticType__CharacterItemDefinition0                                 = 0,
	ECharacterCosmeticType__CharacterBlueprint1                                      = 1,
	ECharacterCosmeticType__ECharacterCosmeticType_MAX2                              = 2
};

/// Enum /Script/VerseFortnite.ETeamOption
/// Size: 0x04
enum ETeamOption : uint8_t
{
	ETeamOption__TeamIndex0                                                          = 0,
	ETeamOption__TeamWildlifeAndCreature1                                            = 1,
	ETeamOption__TeamNeutral2                                                        = 2,
	ETeamOption__ETeamOption_MAX3                                                    = 3
};

