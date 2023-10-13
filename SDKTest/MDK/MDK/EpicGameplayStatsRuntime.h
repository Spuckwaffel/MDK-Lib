
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: GameplayTags

/// Class /Script/EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UBlueprintGameplayStatsLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.NotEqual_GameplayStatTagGameplayStatTag
	// bool NotEqual_GameplayStatTagGameplayStatTag(FGameplayStatTag A, FGameplayStatTag B);                                    // [0x802c20] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/EpicGameplayStatsRuntime.BlueprintGameplayStatsLibrary.EqualEqual_GameplayStatTagGameplayStatTag
	// bool EqualEqual_GameplayStatTagGameplayStatTag(FGameplayStatTag A, FGameplayStatTag B);                                  // [0x802b40] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/EpicGameplayStatsRuntime.GameplayTagTableManager
/// Size: 0x0068 (0x000030 - 0x000098)
class UGameplayTagTableManager : public UDataAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TArray<FManagedGameplayTagDataTableItem>)  Tables                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/EpicGameplayStatsRuntime.GameplayStatMetadataTableRow
/// Size: 0x0088 (0x000008 - 0x000090)
class FGameplayStatMetadataTableRow : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FString)                                   BackendName                                                 OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x18, 24, 0, 0})
	CMember(TArray<EEpicLeaderboardTimeWindow>)        Windows                                                     OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(EEpicLeaderboardUpdateFunction)            Metric                                                      OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(EEpicLeaderboardDataType)                  DataType                                                    OFFSET(get<T>, {0x41, 1, 0, 0})
	DMember(bool)                                      bPublish                                                    OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(int32_t)                                   WeeklyRefreshInterval                                       OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(bool)                                      bExportToBackEnd                                            OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bShowInFrontEnd                                             OFFSET(get<bool>, {0x49, 1, 0, 0})
	SMember(FGameplayTagReferenceHelper)               ReferenceHelper                                             OFFSET(getStruct<T>, {0x50, 64, 0, 0})
};

/// Struct /Script/EpicGameplayStatsRuntime.GameplayStatTag
/// Size: 0x0008 (0x000008 - 0x000010)
class FGameplayStatTag : public FGameplayTag
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              Tag                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EpicGameplayStatsRuntime.ManagedGameplayTagDataTableItem
/// Size: 0x0010 (0x000000 - 0x000010)
class FManagedGameplayTagDataTableItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FGameplayTag)                              RootTag                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(UDataTable*)                               DataTable                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/EpicGameplayStatsRuntime.TagTableManagerHelper
/// Size: 0x0001 (0x000000 - 0x000001)
class FTagTableManagerHelper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/EpicGameplayStatsRuntime.EEpicLeaderboardUpdateFunction
/// Size: 0x04
enum EEpicLeaderboardUpdateFunction : uint8_t
{
	EEpicLeaderboardUpdateFunction__Min0                                             = 0,
	EEpicLeaderboardUpdateFunction__Max1                                             = 1,
	EEpicLeaderboardUpdateFunction__Sum2                                             = 2,
	EEpicLeaderboardUpdateFunction__MostRecent3                                      = 3
};

/// Enum /Script/EpicGameplayStatsRuntime.EEpicLeaderboardTimeWindow
/// Size: 0x05
enum EEpicLeaderboardTimeWindow : uint8_t
{
	EEpicLeaderboardTimeWindow__Daily0                                               = 0,
	EEpicLeaderboardTimeWindow__Weekly1                                              = 1,
	EEpicLeaderboardTimeWindow__Monthly2                                             = 2,
	EEpicLeaderboardTimeWindow__AllTime3                                             = 3,
	EEpicLeaderboardTimeWindow__EEpicLeaderboardTimeWindow_MAX4                      = 4
};

/// Enum /Script/EpicGameplayStatsRuntime.EEpicLeaderboardDataType
/// Size: 0x03
enum EEpicLeaderboardDataType : uint8_t
{
	EEpicLeaderboardDataType__Integer0                                               = 0,
	EEpicLeaderboardDataType__Double1                                                = 1,
	EEpicLeaderboardDataType__EEpicLeaderboardDataType_MAX2                          = 2
};

