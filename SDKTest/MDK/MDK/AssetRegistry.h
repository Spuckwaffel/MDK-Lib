
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/AssetRegistry.AssetRegistryImpl
/// Size: 0x09F8 (0x000028 - 0x000A20)
class UAssetRegistryImpl : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2592;

public:
};

/// Class /Script/AssetRegistry.AssetRegistryHelpers
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssetRegistryHelpers : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
	// FSoftObjectPath ToSoftObjectPath(FAssetData& InAssetData);                                                               // [0x1e9e820] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
	// FARFilter SetFilterTagsAndValues(FARFilter& InFilter, TArray<FTagAndValue>& InTagsAndValues);                            // [0x1e9e640] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsValid
	// bool IsValid(FAssetData& InAssetData);                                                                                   // [0x1e9e350] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsUAsset
	// bool IsUAsset(FAssetData& InAssetData);                                                                                  // [0x1e9e260] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsRedirector
	// bool IsRedirector(FAssetData& InAssetData);                                                                              // [0x1e9e170] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
	// bool IsAssetLoaded(FAssetData& InAssetData);                                                                             // [0x1e9e050] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetTagValue
	// bool GetTagValue(FAssetData& InAssetData, FName& InTagName, FString& OutTagValue);                                       // [0x1e9ddd0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetFullName
	// FString GetFullName(FAssetData& InAssetData);                                                                            // [0x1e9db10] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetExportTextName
	// FString GetExportTextName(FAssetData& InAssetData);                                                                      // [0x1e9d9d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetClass
	// UClass* GetClass(FAssetData& InAssetData);                                                                               // [0x1e9d8e0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
	// TScriptInterface<Class> GetAssetRegistry();                                                                              // [0x1e9d1b0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.GetAsset
	// UObject* GetAsset(FAssetData& InAssetData);                                                                              // [0x1e9cfa0] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/AssetRegistry.AssetRegistryHelpers.CreateAssetData
	// FAssetData CreateAssetData(UObject* InAsset, bool bAllowBlueprintClass);                                                 // [0x1e9cc60] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
};

/// Class /Script/AssetRegistry.AssetRegistry
/// Size: 0x0000 (0x000028 - 0x000028)
class UAssetRegistry : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/AssetRegistry.AssetRegistry.RunAssetsThroughFilter
	// void RunAssetsThroughFilter(TArray<FAssetData>& AssetDataList, FARFilter& Filter);                                       // [0x1e9e440] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.IsLoadingAssets
	// bool IsLoadingAssets();                                                                                                  // [0x1e9e140] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.HasAssets
	// bool HasAssets(FName PackagePath, bool bRecursive);                                                                      // [0x1e9df80] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetSubPaths
	// void GetSubPaths(FString InBasePath, TArray<FString>& OutPathList, bool bInRecurse);                                     // [0x1e9dc50] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPath
	// bool GetAssetsByPath(FName PackagePath, TArray<FAssetData>& OutAssetData, bool bRecursive, bool bIncludeOnlyOnDiskAssets); // [0x1e9d700] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByPackageName
	// bool GetAssetsByPackageName(FName PackageName, TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);         // [0x1e9d570] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetsByClass
	// bool GetAssetsByClass(FName ClassName, TArray<FAssetData>& OutAssetData, bool bSearchSubClasses);                        // [0x1e9d3e0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssets
	// bool GetAssets(FARFilter& Filter, TArray<FAssetData>& OutAssetData);                                                     // [0x1e9d1f0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAssetByObjectPath
	// FAssetData GetAssetByObjectPath(FName ObjectPath, bool bIncludeOnlyOnDiskAssets);                                        // [0x1e9d090] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAllCachedPaths
	// void GetAllCachedPaths(TArray<FString>& OutPathList);                                                                    // [0x1e9ced0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AssetRegistry.AssetRegistry.GetAllAssets
	// bool GetAllAssets(TArray<FAssetData>& OutAssetData, bool bIncludeOnlyOnDiskAssets);                                      // [0x1e9cd80] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/AssetRegistry.ARFilter
/// Size: 0x00E8 (0x000000 - 0x0000E8)
class FARFilter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(TArray<FName>)                             PackageNames                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FName>)                             PackagePaths                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FName>)                             ObjectPaths                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FName>)                             ClassNames                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bRecursivePaths                                             OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(bool)                                      bRecursiveClasses                                           OFFSET(get<bool>, {0xE1, 1, 0, 0})
	DMember(bool)                                      bIncludeOnlyOnDiskAssets                                    OFFSET(get<bool>, {0xE2, 1, 0, 0})
};

/// Struct /Script/AssetRegistry.AssetBundleData
/// Size: 0x0010 (0x000000 - 0x000010)
class FAssetBundleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FAssetBundleEntry>)                 Bundles                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/AssetRegistry.AssetBundleEntry
/// Size: 0x0028 (0x000000 - 0x000028)
class FAssetBundleEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FPrimaryAssetId)                           BundleScope                                                 OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     BundleName                                                  OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   BundleAssets                                                OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/AssetRegistry.AssetData
/// Size: 0x0050 (0x000000 - 0x000050)
class FAssetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     ObjectPath                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     PackageName                                                 OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     PackagePath                                                 OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FName)                                     AssetName                                                   OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     AssetClass                                                  OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/AssetRegistry.TagAndValue
/// Size: 0x0018 (0x000000 - 0x000018)
class FTagAndValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Tag                                                         OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

