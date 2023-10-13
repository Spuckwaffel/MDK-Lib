
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: InterchangeCore

/// Class /Script/InterchangeEngine.InterchangeBlueprintPipelineBase
/// Size: 0x0000 (0x0000A8 - 0x0000A8)
class UInterchangeBlueprintPipelineBase : public UBlueprint
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
};

/// Class /Script/InterchangeEngine.InterchangeFilePickerBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeFilePickerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeEngine.InterchangePipelineConfigurationBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangePipelineConfigurationBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeEngine.InterchangeProjectSettings
/// Size: 0x01E8 (0x000030 - 0x000218)
class UInterchangeProjectSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	SMember(FInterchangeContentImportSettings)         ContentImportSettings                                       OFFSET(getStruct<T>, {0x30, 288, 0, 0})
	SMember(FInterchangeImportSettings)                SceneImportSettings                                         OFFSET(getStruct<T>, {0x150, 128, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   FilePickerClass                                             OFFSET(get<T>, {0x1D0, 32, 0, 0})
	DMember(bool)                                      bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing    OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   GenericPipelineClass                                        OFFSET(get<T>, {0x1F8, 32, 0, 0})
};

/// Class /Script/InterchangeEngine.InterchangePythonPipelineBase
/// Size: 0x0000 (0x0000E8 - 0x0000E8)
class UInterchangePythonPipelineBase : public UInterchangePipelineBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
};

/// Class /Script/InterchangeEngine.InterchangePythonPipelineAsset
/// Size: 0x0038 (0x000028 - 0x000060)
class UInterchangePythonPipelineAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TWeakObjectPtr<UClass*>)                   PythonClass                                                 OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(UInterchangePythonPipelineBase*)           GeneratedPipeline                                           OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FString)                                   JsonDefaultProperties                                       OFFSET(getStruct<T>, {0x50, 16, 0, 0})
};

/// Class /Script/InterchangeEngine.InterchangeSceneImportAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UInterchangeSceneImportAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/InterchangeEngine.InterchangeAssetImportData
/// Size: 0x0080 (0x000028 - 0x0000A8)
class UInterchangeAssetImportData : public UAssetImportData
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSoftObjectPath)                           SceneImportAsset                                            OFFSET(getStruct<T>, {0x28, 24, 0, 0})
	SMember(FString)                                   NodeUniqueID                                                OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	CMember(UInterchangeBaseNodeContainer*)            NodeContainer                                               OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<UObject*>)                          Pipelines                                                   OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(UInterchangeBaseNodeContainer*)            TransientNodeContainer                                      OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<UObject*>)                          TransientPipelines                                          OFFSET(get<T>, {0x70, 16, 0, 0})


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.SetPipelines
	// void SetPipelines(TArray<UObject*>& InPipelines);                                                                        // [0xa6dbac0] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.SetNodeContainer
	// void SetNodeContainer(UInterchangeBaseNodeContainer* InNodeContainer);                                                   // [0xa6dba40] Final|RequiredAPI|Native|Public|BlueprintCallable|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptGetFirstFilename
	// FString ScriptGetFirstFilename();                                                                                        // [0x5cf9bdc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptExtractFilenames
	// TArray<FString> ScriptExtractFilenames();                                                                                // [0x59dced8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.ScriptExtractDisplayLabels
	// TArray<FString> ScriptExtractDisplayLabels();                                                                            // [0x59dced8] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetStoredNode
	// UInterchangeBaseNode* GetStoredNode(FString InNodeUniqueId);                                                             // [0xa6d8910] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetStoredFactoryNode
	// UInterchangeFactoryBaseNode* GetStoredFactoryNode(FString InNodeUniqueId);                                               // [0xa6d8244] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetPipelines
	// TArray<UObject*> GetPipelines();                                                                                         // [0xa6d8174] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetNumberOfPipelines
	// int32_t GetNumberOfPipelines();                                                                                          // [0xa6d8140] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeAssetImportData.GetNodeContainer
	// UInterchangeBaseNodeContainer* GetNodeContainer();                                                                       // [0xa6d811c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeEngine.InterchangePipelineStackOverride
/// Size: 0x0010 (0x000028 - 0x000038)
class UInterchangePipelineStackOverride : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FSoftObjectPath>)                   OverridePipelines                                           OFFSET(get<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddPythonPipeline
	// void AddPythonPipeline(UInterchangePythonPipelineBase* PipelineBase);                                                    // [0xa6d796c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddPipeline
	// void AddPipeline(UInterchangePipelineBase* PipelineBase);                                                                // [0xa6d796c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangePipelineStackOverride.AddBlueprintPipeline
	// void AddBlueprintPipeline(UInterchangeBlueprintPipelineBase* PipelineBase);                                              // [0xa6d796c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeEngine.InterchangeManager
/// Size: 0x01B8 (0x000028 - 0x0001E0)
class UInterchangeManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TSet<UClass*>)                             RegisteredTranslatorsClass                                  OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(TMap<UClass*, UClass*>)                    RegisteredFactoryClasses                                    OFFSET(get<T>, {0x128, 80, 0, 0})
	CMember(TMap<UClass*, UInterchangeWriterBase*>)    RegisteredWriters                                           OFFSET(get<T>, {0x178, 80, 0, 0})


	/// Functions
	// Function /Script/InterchangeEngine.InterchangeManager.ImportScene
	// bool ImportScene(FString ContentPath, UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // [0xa6d9780] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ImportAsset
	// bool ImportAsset(FString ContentPath, UInterchangeSourceData* SourceData, FImportAssetParameters& ImportAssetParameters); // [0xa6d8fdc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.GetRegisteredFactoryClass
	// UClass* GetRegisteredFactoryClass(UClass* ClassToMake);                                                                  // [0xa6d81b4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeEngine.InterchangeManager.GetInterchangeManagerScripted
	// UInterchangeManager* GetInterchangeManagerScripted();                                                                    // [0xa6d80f8] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ExportScene
	// bool ExportScene(UObject* World, bool bIsAutomated);                                                                     // [0x8e86b1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.ExportAsset
	// bool ExportAsset(UObject* Asset, bool bIsAutomated);                                                                     // [0x8e86b1c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeEngine.InterchangeManager.CreateSourceData
	// UInterchangeSourceData* CreateSourceData(FString InFilename);                                                            // [0xa6d7a4c] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/InterchangeEngine.InterchangeMeshUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeMeshUtilities : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/InterchangeEngine.InterchangeFilePickerParameters
/// Size: 0x0030 (0x000000 - 0x000030)
class FInterchangeFilePickerParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bAllowMultipleFiles                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FText)                                     Title                                                       OFFSET(getStruct<T>, {0x8, 24, 0, 0})
	SMember(FString)                                   DefaultPath                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeStackInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterchangeStackInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     StackName                                                   OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(TArray<UInterchangePipelineBase*>)         Pipelines                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeTranslatorPipelines
/// Size: 0x0030 (0x000000 - 0x000030)
class FInterchangeTranslatorPipelines : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UClass*>)                   Translator                                                  OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   Pipelines                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangePipelineStack
/// Size: 0x0020 (0x000000 - 0x000020)
class FInterchangePipelineStack : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FSoftObjectPath>)                   Pipelines                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FInterchangeTranslatorPipelines>)   PerTranslatorPipelines                                      OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeImportSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FInterchangeImportSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FName, FInterchangePipelineStack>)    PipelineStacks                                              OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FName)                                     DefaultPipelineStack                                        OFFSET(getStruct<T>, {0x50, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PipelineConfigurationDialogClass                            OFFSET(get<T>, {0x58, 32, 0, 0})
	DMember(bool)                                      bShowPipelineStacksConfigurationDialog                      OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeContentImportSettings
/// Size: 0x00A0 (0x000080 - 0x000120)
class FInterchangeContentImportSettings : public FInterchangeImportSettings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TMap<EInterchangeTranslatorAssetType, FName>) DefaultPipelineStackOverride                             OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TMap<EInterchangeTranslatorAssetType, bool>) ShowPipelineStacksConfigurationDialogOverride             OFFSET(get<T>, {0xD0, 80, 0, 0})
};

/// Struct /Script/InterchangeEngine.PropertyData
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/InterchangeEngine.ImportAssetParameters
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FImportAssetParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UObject*)                                  ReimportAsset                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   ReimportSourceIndex                                         OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsAutomated                                                OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bFollowRedirectors                                          OFFSET(get<bool>, {0xD, 1, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   OverridePipelines                                           OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FDelegateProperty)                         OnAssetDone                                                 OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FDelegateProperty)                         OnAssetsImportDone                                          OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FDelegateProperty)                         OnSceneObjectDone                                           OFFSET(getStruct<T>, {0x60, 12, 0, 0})
	SMember(FDelegateProperty)                         OnSceneImportDone                                           OFFSET(getStruct<T>, {0x80, 12, 0, 0})
};

/// Enum /Script/InterchangeEngine.EInterchangePipelineConfigurationDialogResult
/// Size: 0x04
enum EInterchangePipelineConfigurationDialogResult : uint8_t
{
	EInterchangePipelineConfigurationDialogResult__Cancel0                           = 0,
	EInterchangePipelineConfigurationDialogResult__Import1                           = 1,
	EInterchangePipelineConfigurationDialogResult__ImportAll2                        = 2,
	EInterchangePipelineConfigurationDialogResult__EInterchangePipelineConfigurationDialogResult_MAX3 = 3
};

