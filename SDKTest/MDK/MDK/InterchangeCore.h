
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject

/// Class /Script/InterchangeCore.InterchangeFactoryBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UInterchangeFactoryBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UInterchangeResultsContainer*)             Results                                                     OFFSET(get<T>, {0x28, 8, 0, 0})


	/// Functions
	// Function /Script/InterchangeCore.InterchangeFactoryBase.GetFactoryClass
	// UClass* GetFactoryClass();                                                                                               // [0x271cd04] Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeSourceData
/// Size: 0x0028 (0x000028 - 0x000050)
class UInterchangeSourceData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   Filename                                                    OFFSET(get<T>, {0x28, 16, 0, 0})


	/// Functions
	// Function /Script/InterchangeCore.InterchangeSourceData.SetFilename
	// bool SetFilename(FString InFilename);                                                                                    // [0xa4eef94] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeSourceData.GetFilename
	// FString GetFilename();                                                                                                   // [0xa4dd184] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeWriterBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeWriterBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/InterchangeCore.InterchangePipelineBase
/// Size: 0x00C0 (0x000028 - 0x0000E8)
class UInterchangePipelineBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(UInterchangeResultsContainer*)             Results                                                     OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TMap<FName, FInterchangePipelinePropertyStates>) PropertiesStates                                      OFFSET(get<T>, {0x38, 80, 0, 0})


	/// Functions
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedSetReimportSourceIndex
	// void ScriptedSetReimportSourceIndex(UClass* ReimportObjectClass, int32_t SourceFileIndex);                               // [0xa4ecf44] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePreImportPipeline
	// void ScriptedExecutePreImportPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*>& SourceDatas); // [0xa4ec864] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePostImportPipeline
	// void ScriptedExecutePostImportPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport); // [0xa4ec114] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePostFactoryPipeline
	// void ScriptedExecutePostFactoryPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, FString FactoryNodeKey, UObject* CreatedAsset, bool bIsAReimport); // [0xa4eb9c4] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecutePipeline
	// void ScriptedExecutePipeline(UInterchangeBaseNodeContainer* BaseNodeContainer, TArray<UInterchangeSourceData*>& SourceDatas); // [0xa4eb2e4] RequiredAPI|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedExecuteExportPipeline
	// void ScriptedExecuteExportPipeline(UInterchangeBaseNodeContainer* BaseNodeContainer);                                    // [0x5ae1c34] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.ScriptedCanExecuteOnAnyThread
	// bool ScriptedCanExecuteOnAnyThread(EInterchangePipelineTask PipelineTask);                                               // [0xa4eb250] RequiredAPI|Native|Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Script/InterchangeCore.InterchangePipelineBase.FindOrAddPropertyStates
	// FInterchangePipelinePropertyStates FindOrAddPropertyStates(FName PropertyPath);                                          // [0xa4da268] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangePipelineBase.DoesPropertyStatesExist
	// bool DoesPropertyStatesExist(FName PropertyPath);                                                                        // [0xa4da0c0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/InterchangeCore.InterchangeResult
/// Size: 0x0038 (0x000028 - 0x000060)
class UInterchangeResult : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   SourceAssetName                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   DestinationAssetName                                        OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(UClass*)                                   AssetType                                                   OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FString)                                   InterchangeKey                                              OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeResultSuccess
/// Size: 0x0000 (0x000060 - 0x000060)
class UInterchangeResultSuccess : public UInterchangeResult
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/InterchangeCore.InterchangeResultWarning
/// Size: 0x0000 (0x000060 - 0x000060)
class UInterchangeResultWarning : public UInterchangeResult
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/InterchangeCore.InterchangeResultError
/// Size: 0x0000 (0x000060 - 0x000060)
class UInterchangeResultError : public UInterchangeResult
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/InterchangeCore.InterchangeResultWarning_Generic
/// Size: 0x0018 (0x000060 - 0x000078)
class UInterchangeResultWarning_Generic : public UInterchangeResultWarning
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     Text                                                        OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeResultError_Generic
/// Size: 0x0018 (0x000060 - 0x000078)
class UInterchangeResultError_Generic : public UInterchangeResultError
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     Text                                                        OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeResultError_ReimportFail
/// Size: 0x0000 (0x000060 - 0x000060)
class UInterchangeResultError_ReimportFail : public UInterchangeResultError
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/InterchangeCore.InterchangeResultDisplay_Generic
/// Size: 0x0018 (0x000060 - 0x000078)
class UInterchangeResultDisplay_Generic : public UInterchangeResultSuccess
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FText)                                     Text                                                        OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeResultsContainer
/// Size: 0x0038 (0x000028 - 0x000060)
class UInterchangeResultsContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<UInterchangeResult*>)               Results                                                     OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeTranslatorBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UInterchangeTranslatorBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UInterchangeResultsContainer*)             Results                                                     OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UInterchangeSourceData*)                   SourceData                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/InterchangeCore.InterchangeBaseNode
/// Size: 0x0038 (0x000028 - 0x000060)
class UInterchangeBaseNode : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/InterchangeCore.InterchangeBaseNodeContainer
/// Size: 0x00A0 (0x000028 - 0x0000C8)
class UInterchangeBaseNodeContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TMap<FString, UInterchangeBaseNode*>)      Nodes                                                       OFFSET(get<T>, {0x28, 80, 0, 0})


	/// Functions
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.SetNodeParentUid
	// bool SetNodeParentUid(FString NodeUniqueID, FString NewParentNodeUid);                                                   // [0xa4ef674] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.SaveToFile
	// void SaveToFile(FString Filename);                                                                                       // [0xa4eab9c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ResetChildrenCache
	// void ResetChildrenCache();                                                                                               // [0xa4eab88] Final|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ReplaceNode
	// void ReplaceNode(FString NodeUniqueID, UInterchangeFactoryBaseNode* NewNode);                                            // [0xa4ea4a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.LoadFromFile
	// void LoadFromFile(FString Filename);                                                                                     // [0xa4e8304] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.IsNodeUidValid
	// bool IsNodeUidValid(FString NodeUniqueID);                                                                               // [0xa4e7c54] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetRoots
	// void GetRoots(TArray<FString>& RootNodes);                                                                               // [0xa4e09a4] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodes
	// void GetNodes(UClass* ClassNode, TArray<FString>& OutNodes);                                                             // [0xa4e0860] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenUids
	// TArray<FString> GetNodeChildrenUids(FString NodeUniqueID);                                                               // [0xa4e0180] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildrenCount
	// int32_t GetNodeChildrenCount(FString NodeUniqueID);                                                                      // [0xa4dfad0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNodeChildren
	// UInterchangeBaseNode* GetNodeChildren(FString NodeUniqueID, int32_t ChildIndex);                                         // [0xa4df3fc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetNode
	// UInterchangeBaseNode* GetNode(FString NodeUniqueID);                                                                     // [0xa4ded4c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.GetFactoryNode
	// UInterchangeFactoryBaseNode* GetFactoryNode(FString NodeUniqueID);                                                       // [0xa4dcad4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.ComputeChildrenCache
	// void ComputeChildrenCache();                                                                                             // [0xa4d78dc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/InterchangeCore.InterchangeBaseNodeContainer.AddNode
	// FString AddNode(UInterchangeBaseNode* Node);                                                                             // [0xa4d5d7c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/InterchangeCore.InterchangeFactoryBaseNode
/// Size: 0x00E0 (0x000060 - 0x000140)
class UInterchangeFactoryBaseNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Class /Script/InterchangeCore.InterchangeSourceNode
/// Size: 0x0070 (0x000060 - 0x0000D0)
class UInterchangeSourceNode : public UInterchangeBaseNode
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/InterchangeCore.InterchangeUserDefinedAttributesAPI
/// Size: 0x0000 (0x000028 - 0x000028)
class UInterchangeUserDefinedAttributesAPI : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/InterchangeCore.InterchangePipelinePropertyStatePerContext
/// Size: 0x0001 (0x000000 - 0x000001)
class FInterchangePipelinePropertyStatePerContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/InterchangeCore.InterchangePipelinePropertyStates
/// Size: 0x0003 (0x000000 - 0x000003)
class FInterchangePipelinePropertyStates : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bLocked                                                     OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FInterchangePipelinePropertyStatePerContext) ImportStates                                              OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FInterchangePipelinePropertyStatePerContext) ReimportStates                                            OFFSET(get<T>, {0x2, 1, 0, 0})
};

/// Struct /Script/InterchangeCore.InterchangeUserDefinedAttributeInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FInterchangeUserDefinedAttributeInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Name                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Enum /Script/InterchangeCore.EInterchangeFactoryAssetType
/// Size: 0x07
enum EInterchangeFactoryAssetType : uint8_t
{
	EInterchangeFactoryAssetType__None0                                              = 0,
	EInterchangeFactoryAssetType__Textures1                                          = 1,
	EInterchangeFactoryAssetType__Materials2                                         = 2,
	EInterchangeFactoryAssetType__Meshes3                                            = 3,
	EInterchangeFactoryAssetType__Animations4                                        = 4,
	EInterchangeFactoryAssetType__Physics5                                           = 5,
	EInterchangeFactoryAssetType__EInterchangeFactoryAssetType_MAX6                  = 6
};

/// Enum /Script/InterchangeCore.EInterchangePipelineTask
/// Size: 0x05
enum EInterchangePipelineTask : uint8_t
{
	EInterchangePipelineTask__PostTranslator0                                        = 0,
	EInterchangePipelineTask__PostFactory1                                           = 1,
	EInterchangePipelineTask__PostImport2                                            = 2,
	EInterchangePipelineTask__Export3                                                = 3,
	EInterchangePipelineTask__EInterchangePipelineTask_MAX4                          = 4
};

/// Enum /Script/InterchangeCore.EInterchangePipelineContext
/// Size: 0x10
enum EInterchangePipelineContext : uint8_t
{
	EInterchangePipelineContext__None0                                               = 0,
	EInterchangePipelineContext__AssetImport1                                        = 1,
	EInterchangePipelineContext__AssetReimport2                                      = 2,
	EInterchangePipelineContext__SceneImport3                                        = 3,
	EInterchangePipelineContext__SceneReimport4                                      = 4,
	EInterchangePipelineContext__AssetCustomLODImport5                               = 5,
	EInterchangePipelineContext__AssetCustomLODReimport6                             = 6,
	EInterchangePipelineContext__AssetAlternateSkinningImport7                       = 7,
	EInterchangePipelineContext__AssetAlternateSkinningReimport8                     = 8,
	EInterchangePipelineContext__EInterchangePipelineContext_MAX9                    = 9
};

/// Enum /Script/InterchangeCore.EInterchangeResultType
/// Size: 0x04
enum EInterchangeResultType : uint8_t
{
	EInterchangeResultType__Success0                                                 = 0,
	EInterchangeResultType__Warning1                                                 = 1,
	EInterchangeResultType__Error2                                                   = 2,
	EInterchangeResultType__EInterchangeResultType_MAX3                              = 3
};

/// Enum /Script/InterchangeCore.EInterchangeTranslatorType
/// Size: 0x05
enum EInterchangeTranslatorType : uint8_t
{
	EInterchangeTranslatorType__Invalid0                                             = 0,
	EInterchangeTranslatorType__Assets1                                              = 2,
	EInterchangeTranslatorType__Actors2                                              = 4,
	EInterchangeTranslatorType__Scenes3                                              = 6,
	EInterchangeTranslatorType__EInterchangeTranslatorType_MAX4                      = 7
};

/// Enum /Script/InterchangeCore.EInterchangeTranslatorAssetType
/// Size: 0x06
enum EInterchangeTranslatorAssetType : uint8_t
{
	EInterchangeTranslatorAssetType__None0                                           = 0,
	EInterchangeTranslatorAssetType__Textures1                                       = 1,
	EInterchangeTranslatorAssetType__Materials2                                      = 2,
	EInterchangeTranslatorAssetType__Meshes3                                         = 4,
	EInterchangeTranslatorAssetType__Animations4                                     = 8,
	EInterchangeTranslatorAssetType__EInterchangeTranslatorAssetType_MAX5            = 9
};

/// Enum /Script/InterchangeCore.EInterchangeNodeContainerType
/// Size: 0x05
enum EInterchangeNodeContainerType : uint8_t
{
	EInterchangeNodeContainerType__None0                                             = 0,
	EInterchangeNodeContainerType__TranslatedScene1                                  = 1,
	EInterchangeNodeContainerType__TranslatedAsset2                                  = 2,
	EInterchangeNodeContainerType__FactoryData3                                      = 3,
	EInterchangeNodeContainerType__EInterchangeNodeContainerType_MAX4                = 4
};

/// Enum /Script/InterchangeCore.EReimportStrategyFlags
/// Size: 0x04
enum EReimportStrategyFlags : uint8_t
{
	EReimportStrategyFlags__ApplyNoProperties0                                       = 0,
	EReimportStrategyFlags__ApplyPipelineProperties1                                 = 1,
	EReimportStrategyFlags__ApplyEditorChangedProperties2                            = 2,
	EReimportStrategyFlags__EReimportStrategyFlags_MAX3                              = 3
};

