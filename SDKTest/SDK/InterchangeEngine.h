/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package InterchangeEngine.

/// Struct /Script/InterchangeEngine.InterchangeFilePickerParameters
/// Size: 0x0030 (0x000000 - 0x000030)
class FInterchangeFilePickerParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bAllowMultipleFiles                                         ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FText)                                     Title                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FString)                                   DefaultPath                                                 ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeStackInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FInterchangeStackInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     StackName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<UInterchangePipelineBase*>)         Pipelines                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeTranslatorPipelines
/// Size: 0x0030 (0x000000 - 0x000030)
class FInterchangeTranslatorPipelines : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TWeakObjectPtr<UClass*>)                   Translator                                                  ___ OFFSET(get<T>, {0x0, 32, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   Pipelines                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangePipelineStack
/// Size: 0x0020 (0x000000 - 0x000020)
class FInterchangePipelineStack : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FSoftObjectPath>)                   Pipelines                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FInterchangeTranslatorPipelines>)   PerTranslatorPipelines                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeImportSettings
/// Size: 0x0080 (0x000000 - 0x000080)
class FInterchangeImportSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<FName, FInterchangePipelineStack>)    PipelineStacks                                              ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	SMember(FName)                                     DefaultPipelineStack                                        ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   PipelineConfigurationDialogClass                            ___ OFFSET(get<T>, {0x58, 32, 0, 0})
	DMember(bool)                                      bShowPipelineStacksConfigurationDialog                      ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Struct /Script/InterchangeEngine.InterchangeContentImportSettings
/// Size: 0x00A0 (0x000080 - 0x000120)
class FInterchangeContentImportSettings : public FInterchangeImportSettings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TMap<EInterchangeTranslatorAssetType, FName>) DefaultPipelineStackOverride                             ___ OFFSET(get<T>, {0x80, 80, 0, 0})
	CMember(TMap<EInterchangeTranslatorAssetType, bool>) ShowPipelineStacksConfigurationDialogOverride             ___ OFFSET(get<T>, {0xD0, 80, 0, 0})
};

/// Struct /Script/InterchangeEngine.PropertyData
/// Size: 0x0018 (0x000000 - 0x000018)
class FPropertyData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/InterchangeEngine.ImportAssetParameters
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FImportAssetParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(UObject*)                                  ReimportAsset                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   ReimportSourceIndex                                         ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bIsAutomated                                                ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bFollowRedirectors                                          ___ OFFSET(get<bool>, {0xD, 1, 0, 0})
	CMember(TArray<FSoftObjectPath>)                   OverridePipelines                                           ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FDelegateProperty)                         OnAssetDone                                                 ___ OFFSET(get<T>, {0x20, 12, 0, 0})
	SMember(FDelegateProperty)                         OnAssetsImportDone                                          ___ OFFSET(get<T>, {0x40, 12, 0, 0})
	SMember(FDelegateProperty)                         OnSceneObjectDone                                           ___ OFFSET(get<T>, {0x60, 12, 0, 0})
	SMember(FDelegateProperty)                         OnSceneImportDone                                           ___ OFFSET(get<T>, {0x80, 12, 0, 0})
};

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
	SMember(FInterchangeContentImportSettings)         ContentImportSettings                                       ___ OFFSET(get<T>, {0x30, 288, 0, 0})
	SMember(FInterchangeImportSettings)                SceneImportSettings                                         ___ OFFSET(get<T>, {0x150, 128, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   FilePickerClass                                             ___ OFFSET(get<T>, {0x1D0, 32, 0, 0})
	DMember(bool)                                      bStaticMeshUseSmoothEdgesIfSmoothingInformationIsMissing    ___ OFFSET(get<bool>, {0x1F0, 1, 0, 0})
	CMember(TWeakObjectPtr<UClass*>)                   GenericPipelineClass                                        ___ OFFSET(get<T>, {0x1F8, 32, 0, 0})
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
	CMember(TWeakObjectPtr<UClass*>)                   PythonClass                                                 ___ OFFSET(get<T>, {0x28, 32, 0, 0})
	CMember(UInterchangePythonPipelineBase*)           GeneratedPipeline                                           ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FString)                                   JsonDefaultProperties                                       ___ OFFSET(get<T>, {0x50, 16, 0, 0})
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
	SMember(FSoftObjectPath)                           SceneImportAsset                                            ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FString)                                   NodeUniqueID                                                ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(UInterchangeBaseNodeContainer*)            NodeContainer                                               ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	CMember(TArray<UObject*>)                          Pipelines                                                   ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(UInterchangeBaseNodeContainer*)            TransientNodeContainer                                      ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(TArray<UObject*>)                          TransientPipelines                                          ___ OFFSET(get<T>, {0x70, 16, 0, 0})
};

/// Class /Script/InterchangeEngine.InterchangePipelineStackOverride
/// Size: 0x0010 (0x000028 - 0x000038)
class UInterchangePipelineStackOverride : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FSoftObjectPath>)                   OverridePipelines                                           ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/InterchangeEngine.InterchangeManager
/// Size: 0x01B8 (0x000028 - 0x0001E0)
class UInterchangeManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	CMember(TSet<UClass*>)                             RegisteredTranslatorsClass                                  ___ OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(TMap<UClass*, UClass*>)                    RegisteredFactoryClasses                                    ___ OFFSET(get<T>, {0x128, 80, 0, 0})
	CMember(TMap<UClass*, UInterchangeWriterBase*>)    RegisteredWriters                                           ___ OFFSET(get<T>, {0x178, 80, 0, 0})
};

/// Class /Script/InterchangeEngine.InterchangeMeshUtilities
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeMeshUtilities : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
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

