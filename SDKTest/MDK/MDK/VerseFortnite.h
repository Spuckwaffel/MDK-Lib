
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

/// Class /Script/VerseFortnite.CharacterModifiersComponent
/// Size: 0x0010 (0x000120 - 0x000130)
class UCharacterModifiersComponent : public UFortUserOptionContainerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<UCharacterOptionalModifier*>)       Modifiers                                                   OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/VerseFortnite.CharacterModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UCharacterModifier : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.CharacterOptionalModifier
/// Size: 0x0000 (0x000028 - 0x000028)
class UCharacterOptionalModifier : public UCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.CharacterModifier_Verse
/// Size: 0x0000 (0x000028 - 0x000028)
class UCharacterModifier_Verse : public UCharacterOptionalModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

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
	// void SetAIBehaviorScript(UAIBehaviorScript* InAIBehaviorScript);                                                         // [0x9839374] Final|Native|Public|BlueprintCallable 
	// Function /Script/VerseFortnite.FortAthenaAISpawnerDataComponent_Verse.AddUniqueEntityComponent
	// void AddUniqueEntityComponent(UClass* EntityComponent);                                                                  // [0x9835acc] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/VerseFortnite.LoadCharacterDefinitionAsyncBase
/// Size: 0x0040 (0x000030 - 0x000070)
class ULoadCharacterDefinitionAsyncBase : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UCharacterDefinition*)                     LoadedCharacterDefinition                                   OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TWeakObjectPtr<UObject*>)                  ContextObject                                               OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<UCharacterModifier*>)               StoredAdditionalModifiers                                   OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TWeakObjectPtr<UCharacterDefinition*>)     StoredCharacterDefinition                                   OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Class /Script/VerseFortnite.LoadCharacterDefinitionAsync
/// Size: 0x0010 (0x000070 - 0x000080)
class ULoadCharacterDefinitionAsync : public ULoadCharacterDefinitionAsyncBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnLoaded                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.LoadCharacterDefinitionAsync.LoadCharacterDefinitionAsync
	// ULoadCharacterDefinitionAsync* LoadCharacterDefinitionAsync(UObject* ContextObj, TWeakObjectPtr<UCharacterDefinition*> CharacterDefinition, TArray<UCharacterModifier*>& AdditionalModifiers); // [0x98384a8] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VerseFortnite.LoadAndCreateComponentListAsync
/// Size: 0x0018 (0x000070 - 0x000088)
class ULoadAndCreateComponentListAsync : public ULoadCharacterDefinitionAsyncBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FMulticastInlineDelegate)                  OnFinished                                                  OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(UFortAthenaAISpawnerDataComponentList*)    ComponentsList                                              OFFSET(get<T>, {0x80, 8, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.LoadAndCreateComponentListAsync.LoadAndCreateComponentListAsync
	// ULoadAndCreateComponentListAsync* LoadAndCreateComponentListAsync(UObject* ContextObj, TWeakObjectPtr<UCharacterDefinition*> CharacterDefinition, TArray<UCharacterModifier*>& AdditionalModifiers); // [0x9837bd4] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/VerseFortnite.CharacterCustomization
/// Size: 0x0008 (0x0000B8 - 0x0000C0)
class UCharacterCustomization : public UFortAIPawnCustomizationDefinition
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bDefaultAsset                                               OFFSET(get<bool>, {0xB8, 1, 0, 0})
};

/// Class /Script/VerseFortnite.CharacterDefinition
/// Size: 0x0020 (0x000030 - 0x000050)
class UCharacterDefinition : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UCharacterType*)                           Type                                                        OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UCharacterModifier_Behavior*)              Behavior                                                    OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<UCharacterOptionalModifier*>)       Modifiers                                                   OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.CharacterDefinition.OnSpawned
	// void OnSpawned(AFortPawn* Pawn);                                                                                         // [0x98392cc] Final|Native|Public|BlueprintCallable|Const 
	// Function /Script/VerseFortnite.CharacterDefinition.GetPreviewMesh
	// void GetPreviewMesh(UObject* Outer, TArray<UCharacterModifier*>& AdditionalModifiers, TArray<FCharacterPreviewMesh>& OutCharacterPreviewMeshes, APawn*& OutDefaultPawn); // [0x98372e4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.CharacterDefinition.GetCharacterCID
	// UAthenaCharacterItemDefinition* GetCharacterCID(UObject* Outer, TArray<UCharacterModifier*>& AdditionalModifiers);       // [0x98369f4] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.CharacterDefinition.GetCharacterBlueprint
	// UClass* GetCharacterBlueprint(TArray<UCharacterModifier*>& AdditionalModifiers);                                         // [0x983634c] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/VerseFortnite.CharacterDefinition.CreateComponentList
	// UFortAthenaAISpawnerDataComponentList* CreateComponentList(UObject* Outer, TArray<UCharacterModifier*>& AdditionalModifiers); // [0x9835bec] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortnite.CharacterModifier_Behavior
/// Size: 0x0000 (0x000028 - 0x000028)
class UCharacterModifier_Behavior : public UCharacterModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/VerseFortnite.CharacterModifier_CosmeticSpawn
/// Size: 0x0058 (0x000028 - 0x000080)
class UCharacterModifier_CosmeticSpawn : public UCharacterOptionalModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(ECharacterCosmeticType)                    CosmeticType                                                OFFSET(get<T>, {0x28, 1, 0, 0})
	CMember(TWeakObjectPtr<UAthenaCharacterItemDefinition*>) CharacterCosmetic                                     OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FString)                                   CharacterCosmeticAssetId                                    OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   CharacterBlueprint                                          OFFSET(get<T>, {0x60, 32, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.CharacterModifier_CosmeticSpawn.GetCharacterCosmetic
	// TWeakObjectPtr<UAthenaCharacterItemDefinition*> GetCharacterCosmetic();                                                  // [0x98372a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/VerseFortnite.CharacterModifier_Health
/// Size: 0x0010 (0x000028 - 0x000038)
class UCharacterModifier_Health : public UCharacterOptionalModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bIsInvulnerable                                             OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(float)                                     StartingHealth                                              OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     MaxHealth                                                   OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Class /Script/VerseFortnite.CharacterModifier_HealthAndShield
/// Size: 0x0008 (0x000038 - 0x000040)
class UCharacterModifier_HealthAndShield : public UCharacterModifier_Health
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     StartingShield                                              OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     MaxShield                                                   OFFSET(get<float>, {0x3C, 4, 0, 0})
};

/// Class /Script/VerseFortnite.CharacterModifier_Inventory
/// Size: 0x0030 (0x000028 - 0x000058)
class UCharacterModifier_Inventory : public UCharacterOptionalModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FCharacterModifierInventoryItem>)   Items                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FGameplayTagContainer)                     SupportedItemTags                                           OFFSET(getStruct<T>, {0x38, 32, 0, 0})
};

/// Class /Script/VerseFortnite.CharacterModifier_Team
/// Size: 0x0008 (0x000028 - 0x000030)
class UCharacterModifier_Team : public UCharacterOptionalModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(ETeamOption)                               TeamOption                                                  OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(uint32_t)                                  TeamIndex                                                   OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
};

/// Class /Script/VerseFortnite.CharacterModifier_VerseBehavior
/// Size: 0x0008 (0x000028 - 0x000030)
class UCharacterModifier_VerseBehavior : public UCharacterModifier_Behavior
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UAIBehaviorScript*)                        AIBehaviorScript                                            OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/VerseFortnite.CharacterType
/// Size: 0x0028 (0x000028 - 0x000050)
class UCharacterType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FGameplayTag)                              CharacterDefinitionTag                                      OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	CMember(TArray<UClass*>)                           SupportedModifiers                                          OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UClass*>)                           DefaultModifiers                                            OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/VerseFortnite.CharacterType_Custom
/// Size: 0x0068 (0x000050 - 0x0000B8)
class UCharacterType_Custom : public UCharacterType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(UCharacterCustomization*)                  Cosmetics                                                   OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TWeakObjectPtr<UCharacterCustomization*>)  DefaultCosmetics                                            OFFSET(get<T>, {0x58, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   AISpawnerData                                               OFFSET(get<T>, {0x78, 32, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PlayerSpawnerData                                           OFFSET(get<T>, {0x98, 32, 0, 0})
};

/// Class /Script/VerseFortnite.CharacterType_FromPreset
/// Size: 0x0060 (0x000050 - 0x0000B0)
class UCharacterType_FromPreset : public UCharacterType
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FString)                                   SelectedAI                                                  OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	SMember(FCharacterTypePreset)                      SelectedPreset                                              OFFSET(getStruct<T>, {0x60, 64, 0, 0})
	CMember(TArray<FCharacterTypePreset>)              Presets                                                     OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/VerseFortnite.CharacterType_FromPreset.GetAvailableAIs
	// TArray<FString> GetAvailableAIs();                                                                                       // [0x9836310] Final|Native|Protected|Const 
	// Function /Script/VerseFortnite.CharacterType_FromPreset.GetAIToSpawn
	// TWeakObjectPtr<UClass*> GetAIToSpawn();                                                                                  // [0x98362cc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
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
	// void OnMinigameSetUp(AFortMinigame* Minigame);                                                                           // [0x98391dc] Final|Native|Private 
	// Function /Script/VerseFortnite.VerseFortnitePlayspace.OnMinigamePlayerAdded
	// void OnMinigamePlayerAdded(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer);                                           // [0x9838e8c] Final|Native|Private 
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
/// Size: 0x00B8 (0x000030 - 0x0000E8)
class UVerseFortniteSubsystem : public UWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

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

