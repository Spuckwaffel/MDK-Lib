
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/DataRegistry.DataRegistrySettings
/// Size: 0x0018 (0x000030 - 0x000048)
class UDataRegistrySettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TArray<FDirectoryPath>)                    DirectoriesToScan                                           OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bInitializeAllLoadedRegistries                              OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bIgnoreMissingCookedAssetRegistryData                       OFFSET(get<bool>, {0x41, 1, 0, 0})
};

/// Class /Script/DataRegistry.DataRegistry
/// Size: 0x0090 (0x000028 - 0x0000B8)
class UDataRegistry : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FName)                                     RegistryType                                                OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FDataRegistryIdFormat)                     IdFormat                                                    OFFSET(getStruct<T>, {0x2C, 4, 0, 0})
	CMember(UScriptStruct*)                            ItemStruct                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TArray<UDataRegistrySource*>)              DataSources                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<UDataRegistrySource*>)              RuntimeSources                                              OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(float)                                     TimerUpdateFrequency                                        OFFSET(get<float>, {0x58, 4, 0, 0})
	SMember(FDataRegistryCachePolicy)                  DefaultCachePolicy                                          OFFSET(getStruct<T>, {0x5C, 20, 0, 0})
};

/// Class /Script/DataRegistry.DataRegistrySource
/// Size: 0x0010 (0x000028 - 0x000038)
class UDataRegistrySource : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UDataRegistrySource*)                      ParentSource                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/DataRegistry.MetaDataRegistrySource
/// Size: 0x00D0 (0x000038 - 0x000108)
class UMetaDataRegistrySource : public UDataRegistrySource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	CMember(EMetaDataRegistrySourceAssetUsage)         AssetUsage                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FAssetManagerSearchRules)                  SearchRules                                                 OFFSET(getStruct<T>, {0x40, 80, 0, 0})
	CMember(TMap<FName, UDataRegistrySource*>)         RuntimeChildren                                             OFFSET(get<T>, {0x90, 80, 0, 0})
};

/// Class /Script/DataRegistry.DataRegistrySource_CurveTable
/// Size: 0x0060 (0x000038 - 0x000098)
class UDataRegistrySource_CurveTable : public UDataRegistrySource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TWeakObjectPtr<UCurveTable*>)              SourceTable                                                 OFFSET(get<T>, {0x38, 32, 0, 0})
	SMember(FDataRegistrySource_DataTableRules)        TableRules                                                  OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	CMember(UCurveTable*)                              CachedTable                                                 OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UCurveTable*)                              PreloadTable                                                OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/DataRegistry.MetaDataRegistrySource_CurveTable
/// Size: 0x0010 (0x000108 - 0x000118)
class UMetaDataRegistrySource_CurveTable : public UMetaDataRegistrySource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(UClass*)                                   CreatedSource                                               OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FDataRegistrySource_DataTableRules)        TableRules                                                  OFFSET(getStruct<T>, {0x110, 8, 0, 0})
};

/// Class /Script/DataRegistry.DataRegistrySource_DataTable
/// Size: 0x0060 (0x000038 - 0x000098)
class UDataRegistrySource_DataTable : public UDataRegistrySource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(TWeakObjectPtr<UDataTable*>)               SourceTable                                                 OFFSET(get<T>, {0x38, 32, 0, 0})
	SMember(FDataRegistrySource_DataTableRules)        TableRules                                                  OFFSET(getStruct<T>, {0x58, 8, 0, 0})
	CMember(UDataTable*)                               CachedTable                                                 OFFSET(get<T>, {0x60, 8, 0, 0})
	CMember(UDataTable*)                               PreloadTable                                                OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/DataRegistry.MetaDataRegistrySource_DataTable
/// Size: 0x0010 (0x000108 - 0x000118)
class UMetaDataRegistrySource_DataTable : public UMetaDataRegistrySource
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	CMember(UClass*)                                   CreatedSource                                               OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FDataRegistrySource_DataTableRules)        TableRules                                                  OFFSET(getStruct<T>, {0x110, 8, 0, 0})
};

/// Class /Script/DataRegistry.DataRegistrySubsystem
/// Size: 0x0098 (0x000030 - 0x0000C8)
class UDataRegistrySubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Struct /Script/DataRegistry.DataRegistryLookup
/// Size: 0x0018 (0x000000 - 0x000018)
class FDataRegistryLookup : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/DataRegistry.DataRegistryId
/// Size: 0x0008 (0x000000 - 0x000008)
class FDataRegistryId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FDataRegistryType)                         RegistryType                                                OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     ItemName                                                    OFFSET(getStruct<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/DataRegistry.DataRegistryType
/// Size: 0x0004 (0x000000 - 0x000004)
class FDataRegistryType : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/DataRegistry.DataRegistrySource_DataTableRules
/// Size: 0x0008 (0x000000 - 0x000008)
class FDataRegistrySource_DataTableRules : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bPrecacheTable                                              OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     CachedTableKeepSeconds                                      OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/DataRegistry.DataRegistryIdFormat
/// Size: 0x0004 (0x000000 - 0x000004)
class FDataRegistryIdFormat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FGameplayTag)                              BaseGameplayTag                                             OFFSET(getStruct<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/DataRegistry.DataRegistryCachePolicy
/// Size: 0x0014 (0x000000 - 0x000014)
class FDataRegistryCachePolicy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(bool)                                      bCacheIsAlwaysVolatile                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUseCurveTableCacheVersion                                  OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(int32_t)                                   MinNumberKept                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxNumberKept                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     ForceKeepSeconds                                            OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ForceReleaseSeconds                                         OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/DataRegistry.DataRegistrySourceItemId
/// Size: 0x0030 (0x000000 - 0x000030)
class FDataRegistrySourceItemId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Enum /Script/DataRegistry.EDataRegistryAcquireStatus
/// Size: 0x08
enum EDataRegistryAcquireStatus : uint8_t
{
	EDataRegistryAcquireStatus__NotStarted0                                          = 0,
	EDataRegistryAcquireStatus__WaitingForInitialAcquire1                            = 1,
	EDataRegistryAcquireStatus__InitialAcquireFinished2                              = 2,
	EDataRegistryAcquireStatus__WaitingForResources3                                 = 3,
	EDataRegistryAcquireStatus__AcquireFinished4                                     = 4,
	EDataRegistryAcquireStatus__AcquireError5                                        = 5,
	EDataRegistryAcquireStatus__DoesNotExist6                                        = 6,
	EDataRegistryAcquireStatus__EDataRegistryAcquireStatus_MAX7                      = 7
};

/// Enum /Script/DataRegistry.EMetaDataRegistrySourceAssetUsage
/// Size: 0x05
enum EMetaDataRegistrySourceAssetUsage : uint8_t
{
	EMetaDataRegistrySourceAssetUsage__NoAssets0                                     = 0,
	EMetaDataRegistrySourceAssetUsage__SearchAssets1                                 = 1,
	EMetaDataRegistrySourceAssetUsage__RegisterAssets2                               = 2,
	EMetaDataRegistrySourceAssetUsage__SearchAndRegisterAssets3                      = 3,
	EMetaDataRegistrySourceAssetUsage__EMetaDataRegistrySourceAssetUsage_MAX4        = 4
};

/// Enum /Script/DataRegistry.EDataRegistrySubsystemGetItemResult
/// Size: 0x03
enum EDataRegistrySubsystemGetItemResult : uint8_t
{
	EDataRegistrySubsystemGetItemResult__Found0                                      = 0,
	EDataRegistrySubsystemGetItemResult__NotFound1                                   = 1,
	EDataRegistrySubsystemGetItemResult__EDataRegistrySubsystemGetItemResult_MAX2    = 2
};

/// Enum /Script/DataRegistry.EDataRegistryAvailability
/// Size: 0x07
enum EDataRegistryAvailability : uint8_t
{
	EDataRegistryAvailability__DoesNotExist0                                         = 0,
	EDataRegistryAvailability__Unknown1                                              = 1,
	EDataRegistryAvailability__Remote2                                               = 2,
	EDataRegistryAvailability__OnDisk3                                               = 3,
	EDataRegistryAvailability__LocalAsset4                                           = 4,
	EDataRegistryAvailability__PreCached5                                            = 5,
	EDataRegistryAvailability__EDataRegistryAvailability_MAX6                        = 6
};

