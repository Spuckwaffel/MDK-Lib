
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: IrisCore

/// Class /Script/GameplayTags.BlueprintGameplayTagLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayTags.GameplayTagAssetInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UGameplayTagAssetInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayTags.EditableGameplayTagQuery
/// Size: 0x0070 (0x000028 - 0x000098)
class UEditableGameplayTagQuery : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FString)                                   UserDescription                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(UEditableGameplayTagQueryExpression*)      RootExpression                                              OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FGameplayTagQuery)                         TagQueryExportText_Helper                                   OFFSET(getStruct<T>, {0x50, 72, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression
/// Size: 0x0000 (0x000028 - 0x000028)
class UEditableGameplayTagQueryExpression : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
/// Size: 0x0020 (0x000028 - 0x000048)
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
/// Size: 0x0020 (0x000028 - 0x000048)
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
/// Size: 0x0020 (0x000028 - 0x000048)
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FGameplayTagContainer)                     Tags                                                        OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
/// Size: 0x0010 (0x000028 - 0x000038)
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UEditableGameplayTagQueryExpression*>) Expressions                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
/// Size: 0x0010 (0x000028 - 0x000038)
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UEditableGameplayTagQueryExpression*>) Expressions                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
/// Size: 0x0010 (0x000028 - 0x000038)
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UEditableGameplayTagQueryExpression*>) Expressions                                              OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/GameplayTags.GameplayTagsManager
/// Size: 0x0270 (0x000028 - 0x000298)
class UGameplayTagsManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(TMap<FName, FGameplayTagSource>)           TagSources                                                  OFFSET(get<T>, {0x188, 80, 0, 0})
	CMember(TArray<UDataTable*>)                       GameplayTagTables                                           OFFSET(get<T>, {0x288, 16, 0, 0})
};

/// Class /Script/GameplayTags.GameplayTagsList
/// Size: 0x0020 (0x000028 - 0x000048)
class UGameplayTagsList : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ConfigFileName                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<FGameplayTagTableRow>)              GameplayTagList                                             OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/GameplayTags.RestrictedGameplayTagsList
/// Size: 0x0020 (0x000028 - 0x000048)
class URestrictedGameplayTagsList : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   ConfigFileName                                              OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(TArray<FRestrictedGameplayTagTableRow>)    RestrictedGameplayTagList                                   OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/GameplayTags.GameplayTagsSettings
/// Size: 0x0070 (0x000048 - 0x0000B8)
class UGameplayTagsSettings : public UGameplayTagsList
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(bool)                                      ImportTagsFromConfig                                        OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      WarnOnInvalidTags                                           OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      ClearInvalidTags                                            OFFSET(get<bool>, {0x4A, 1, 0, 0})
	DMember(bool)                                      AllowEditorTagUnloading                                     OFFSET(get<bool>, {0x4B, 1, 0, 0})
	DMember(bool)                                      AllowGameTagUnloading                                       OFFSET(get<bool>, {0x4C, 1, 0, 0})
	DMember(bool)                                      FastReplication                                             OFFSET(get<bool>, {0x4D, 1, 0, 0})
	SMember(FString)                                   InvalidTagCharacters                                        OFFSET(getStruct<T>, {0x50, 16, 0, 0})
	CMember(TArray<FGameplayTagCategoryRemap>)         CategoryRemapping                                           OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   GameplayTagTableList                                        OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FGameplayTagRedirect>)              GameplayTagRedirects                                        OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FName>)                             CommonlyReplicatedTags                                      OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(int32_t)                                   NumBitsForContainerSize                                     OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	DMember(int32_t)                                   NetIndexFirstBitSegment                                     OFFSET(get<int32_t>, {0xA4, 4, 0, 0})
	CMember(TArray<FRestrictedConfigInfo>)             RestrictedConfigFiles                                       OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/GameplayTags.GameplayTagsDeveloperSettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UGameplayTagsDeveloperSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   DeveloperConfigName                                         OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FName)                                     FavoriteTagSource                                           OFFSET(getStruct<T>, {0x40, 4, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTag
/// Size: 0x0004 (0x000000 - 0x000004)
class FGameplayTag : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     TagName                                                     OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagContainer
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTagContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGameplayTag>)                      GameplayTags                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FGameplayTag>)                      ParentTags                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagQuery
/// Size: 0x0048 (0x000000 - 0x000048)
class FGameplayTagQuery : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   TokenStreamVersion                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(TArray<FGameplayTag>)                      TagDictionary                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<char>)                              QueryTokenStream                                            OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FString)                                   UserDescription                                             OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   AutoDescription                                             OFFSET(getStruct<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagContainerNetSerializerSerializationHelper
/// Size: 0x0010 (0x000000 - 0x000010)
class FGameplayTagContainerNetSerializerSerializationHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FGameplayTag>)                      GameplayTags                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagCreationWidgetHelper
/// Size: 0x0001 (0x000000 - 0x000001)
class FGameplayTagCreationWidgetHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/GameplayTags.GameplayTagContainerNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGameplayTagContainerNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayTags.GameplayTagNetSerializerConfig
/// Size: 0x0000 (0x000010 - 0x000010)
class FGameplayTagNetSerializerConfig : public FNetSerializerConfig
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/GameplayTags.GameplayTagRedirect
/// Size: 0x0008 (0x000000 - 0x000008)
class FGameplayTagRedirect : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     OldTagName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     NewTagName                                                  OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagTableRow
/// Size: 0x0018 (0x000008 - 0x000020)
class FGameplayTagTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     tag                                                         OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FString)                                   DevComment                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayTags.RestrictedGameplayTagTableRow
/// Size: 0x0008 (0x000020 - 0x000028)
class FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bAllowNonRestrictedChildren                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagSource
/// Size: 0x0018 (0x000000 - 0x000018)
class FGameplayTagSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     SourceName                                                  OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(EGameplayTagSourceType)                    SourceType                                                  OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(UGameplayTagsList*)                        SourceTagList                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(URestrictedGameplayTagsList*)              SourceRestrictedTagList                                     OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/GameplayTags.GameplayTagNode
/// Size: 0x0050 (0x000000 - 0x000050)
class FGameplayTagNode : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/GameplayTags.GameplayTagCategoryRemap
/// Size: 0x0020 (0x000000 - 0x000020)
class FGameplayTagCategoryRemap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   BaseCategory                                                OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           RemapCategories                                             OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/GameplayTags.RestrictedConfigInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FRestrictedConfigInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   RestrictedConfigName                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Owners                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Enum /Script/GameplayTags.EGameplayContainerMatchType
/// Size: 0x03
enum EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any0                                                = 0,
	EGameplayContainerMatchType__All1                                                = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX2                    = 2
};

/// Enum /Script/GameplayTags.EGameplayTagQueryExprType
/// Size: 0x08
enum EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined0                                            = 0,
	EGameplayTagQueryExprType__AnyTagsMatch1                                         = 1,
	EGameplayTagQueryExprType__AllTagsMatch2                                         = 2,
	EGameplayTagQueryExprType__NoTagsMatch3                                          = 3,
	EGameplayTagQueryExprType__AnyExprMatch4                                         = 4,
	EGameplayTagQueryExprType__AllExprMatch5                                         = 5,
	EGameplayTagQueryExprType__NoExprMatch6                                          = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX7                        = 7
};

/// Enum /Script/GameplayTags.EGameplayTagSourceType
/// Size: 0x07
enum EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native0                                                  = 0,
	EGameplayTagSourceType__DefaultTagList1                                          = 1,
	EGameplayTagSourceType__TagList2                                                 = 2,
	EGameplayTagSourceType__RestrictedTagList3                                       = 3,
	EGameplayTagSourceType__DataTable4                                               = 4,
	EGameplayTagSourceType__Invalid5                                                 = 5,
	EGameplayTagSourceType__EGameplayTagSourceType_MAX6                              = 6
};

/// Enum /Script/GameplayTags.EGameplayTagSelectionType
/// Size: 0x05
enum EGameplayTagSelectionType : uint8_t
{
	EGameplayTagSelectionType__None0                                                 = 0,
	EGameplayTagSelectionType__NonRestrictedOnly1                                    = 1,
	EGameplayTagSelectionType__RestrictedOnly2                                       = 2,
	EGameplayTagSelectionType__All3                                                  = 3,
	EGameplayTagSelectionType__EGameplayTagSelectionType_MAX4                        = 4
};

