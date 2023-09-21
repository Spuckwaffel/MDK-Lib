
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: MovieScene
/// dependency: NiagaraCore
/// dependency: NiagaraShader

/// Class /Script/Niagara.NDIRenderTargetVolumeSimCacheData
/// Size: 0x0018 (0x000028 - 0x000040)
class UNDIRenderTargetVolumeSimCacheData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     CompressionType                                             OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(TArray<FNDIRenderTargetVolumeSimCacheFrame>) Frames                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraConvertInPlaceUtilityBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraDataChannelReader
/// Size: 0x0020 (0x000028 - 0x000048)
class UNiagaraDataChannelReader : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UNiagaraDataChannelHandler*)               Owner                                                       OFFSET(get<T>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector4
	// FVector4 ReadVector4(FName VarName, int32_t Index);                                                                      // [0x66ea174] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector2D
	// FVector2D ReadVector2D(FName VarName, int32_t Index);                                                                    // [0x66ea03c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadVector
	// FVector ReadVector(FName VarName, int32_t Index);                                                                        // [0x66ea268] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadQuat
	// FQuat ReadQuat(FName VarName, int32_t Index);                                                                            // [0x66e9f44] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadPosition
	// FVector ReadPosition(FName VarName, int32_t Index);                                                                      // [0x66e9e48] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadLinearColor
	// FLinearColor ReadLinearColor(FName VarName, int32_t Index);                                                              // [0x66e9d10] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadInt
	// int32_t ReadInt(FName VarName, int32_t Index);                                                                           // [0x66e9bfc] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadFloat
	// double ReadFloat(FName VarName, int32_t Index);                                                                          // [0x66e9b38] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.ReadBool
	// bool ReadBool(FName VarName, int32_t Index);                                                                             // [0x66e9a24] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.Num
	// int32_t Num();                                                                                                           // [0x66e99d8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelReader.InitAccess
	// bool InitAccess(FNiagaraDataChannelSearchParameters SearchParams, bool bReadPrevFrameData);                              // [0x66e9148] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelWriter
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraDataChannelWriter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UNiagaraDataChannelHandler*)               Owner                                                       OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector4
	// void WriteVector4(FName VarName, int32_t Index, FVector4 InData);                                                        // [0x66eaf50] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector2D
	// void WriteVector2D(FName VarName, int32_t Index, FVector2D InData);                                                      // [0x66ead88] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteVector
	// void WriteVector(FName VarName, int32_t Index, FVector InData);                                                          // [0x66eb130] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteSpawnInfo
	// void WriteSpawnInfo(FName VarName, int32_t Index, FNiagaraSpawnInfo InData);                                             // [0x66eabb4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteQuat
	// void WriteQuat(FName VarName, int32_t Index, FQuat InData);                                                              // [0x66ea9e4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WritePosition
	// void WritePosition(FName VarName, int32_t Index, FVector InData);                                                        // [0x66ea814] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteLinearColor
	// void WriteLinearColor(FName VarName, int32_t Index, FLinearColor InData);                                                // [0x66ea64c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteInt
	// void WriteInt(FName VarName, int32_t Index, int32_t InData);                                                             // [0x66ea558] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteFloat
	// void WriteFloat(FName VarName, int32_t Index, double InData);                                                            // [0x66ea45c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.WriteBool
	// void WriteBool(FName VarName, int32_t Index, bool InData);                                                               // [0x66ea364] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelWriter.Num
	// int32_t Num();                                                                                                           // [0x66e9a00] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraDataChannelWriter.InitWrite
	// bool InitWrite(FNiagaraDataChannelSearchParameters SearchParams, int32_t Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU); // [0x66e9408] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelHandler
/// Size: 0x0020 (0x000028 - 0x000048)
class UNiagaraDataChannelHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UNiagaraDataChannel*>)      DataChannel                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UNiagaraDataChannelWriter*)                Writer                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UNiagaraDataChannelReader*)                Reader                                                      OFFSET(get<T>, {0x38, 8, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataChannelHandler.GetDataChannelWriter
	// UNiagaraDataChannelWriter* GetDataChannelWriter();                                                                       // [0x66ef81c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataChannelHandler.GetDataChannelReader
	// UNiagaraDataChannelReader* GetDataChannelReader();                                                                       // [0x66ef7f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataChannelAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UNiagaraDataChannelAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UNiagaraDataChannel*)                      DataChannel                                                 OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannel
/// Size: 0x00F8 (0x000028 - 0x000120)
class UNiagaraDataChannel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FNiagaraVariable>)                  Variables                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bKeepPreviousFrameData                                      OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bEnforceTickGroupReadWriteOrder                             OFFSET(get<bool>, {0x39, 1, 0, 0})
	CMember(TEnumAsByte<ETickingGroup>)                FinalWriteTickGroup                                         OFFSET(get<T>, {0x3A, 1, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               CompiledData                                                OFFSET(get<T>, {0x40, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               CompiledDataGPU                                             OFFSET(get<T>, {0x80, 64, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannel_Global
/// Size: 0x0000 (0x000120 - 0x000120)
class UNiagaraDataChannel_Global : public UNiagaraDataChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
};

/// Class /Script/Niagara.NiagaraDataChannelHandler_Global
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataChannelHandler_Global : public UNiagaraDataChannelHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
};

/// Class /Script/Niagara.NiagaraDataChannel_Islands
/// Size: 0x0078 (0x000120 - 0x000198)
class UNiagaraDataChannel_Islands : public UNiagaraDataChannel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	CMember(ENiagraDataChannel_IslandMode)             Mode                                                        OFFSET(get<T>, {0x120, 1, 0, 0})
	SMember(FVector)                                   InitialExtents                                              OFFSET(get<T>, {0x128, 24, 0, 0})
	SMember(FVector)                                   MaxExtents                                                  OFFSET(get<T>, {0x140, 24, 0, 0})
	SMember(FVector)                                   PerElementExtents                                           OFFSET(get<T>, {0x158, 24, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Systems                                                     OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(int32_t)                                   IslandPoolSize                                              OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	SMember(FNDCIslandDebugDrawSettings)               DebugDrawSettings                                           OFFSET(get<T>, {0x184, 4, 0, 0})
	CMember(TArray<UNiagaraSystem*>)                   SystemsInternal                                             OFFSET(get<T>, {0x188, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannelHandler_Islands
/// Size: 0x0030 (0x000048 - 0x000078)
class UNiagaraDataChannelHandler_Islands : public UNiagaraDataChannelHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<int32_t>)                           ActiveIslands                                               OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<int32_t>)                           FreeIslands                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FNDCIsland>)                        IslandPool                                                  OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterface
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceRWBase
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelRead
/// Size: 0x0080 (0x000038 - 0x0000B8)
class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(UNiagaraDataChannelAsset*)                 Channel                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraDataInterfaceEmitterBinding)       EmitterBinding                                              OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bReadCurrentFrame                                           OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bUpdateSourceDataEveryTick                                  OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      bOverrideSpawnGroupToDataChannelIndex                       OFFSET(get<bool>, {0x4A, 1, 0, 0})
	SMember(FName)                                     SpawnInfoName                                               OFFSET(get<T>, {0x4C, 4, 0, 0})
	SMember(FNDIDataChannelCompiledData)               CompiledData                                                OFFSET(get<T>, {0x50, 104, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelWrite
/// Size: 0x00C0 (0x000038 - 0x0000F8)
class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(ENiagaraDataChannelAllocationMode)         AllocationMode                                              OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(uint32_t)                                  AllocationCount                                             OFFSET(get<uint32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bPublishToGame                                              OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bPublishToCPU                                               OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bPublishToGPU                                               OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bUpdateDestinationDataEveryTick                             OFFSET(get<bool>, {0x43, 1, 0, 0})
	CMember(UNiagaraDataChannelAsset*)                 Channel                                                     OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FNDIDataChannelWriteCompiledData)          CompiledData                                                OFFSET(get<T>, {0x50, 168, 0, 0})
};

/// Class /Script/Niagara.NiagaraMessageDataBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraMessageDataBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraParameterDefinitionsBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraParameterDefinitionsBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraRenderableMeshInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraRenderableMeshInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraScriptSourceBase
/// Size: 0x0020 (0x000028 - 0x000048)
class UNiagaraScriptSourceBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Class /Script/Niagara.NiagaraSettings
/// Size: 0x00F8 (0x000030 - 0x000128)
class UNiagaraSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	DMember(bool)                                      bSystemsSupportLargeWorldCoordinates                        OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bEnforceStrictStackTypes                                    OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bExperimentalVMEnabled                                      OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bLimitDeltaTime                                             OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(float)                                     MaxDeltaTimePerTick                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FSoftObjectPath)                           DefaultEffectType                                           OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FSoftObjectPath)                           RequiredEffectType                                          OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FLinearColor)                              PositionPinTypeColor                                        OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FText>)                             QualityLevels                                               OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TMap<FString, FText>)                      ComponentRendererWarningsPerClass                           OFFSET(get<T>, {0x88, 80, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   DefaultRenderTargetFormat                                   OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   DefaultGridFormat                                           OFFSET(get<T>, {0xD9, 1, 0, 0})
	CMember(ENiagaraDefaultRendererMotionVectorSetting) DefaultRendererMotionVectorSetting                         OFFSET(get<T>, {0xDC, 4, 0, 0})
	CMember(ENiagaraDefaultRendererPixelCoverageMode)  DefaultPixelCoverageMode                                    OFFSET(get<T>, {0xE0, 1, 0, 0})
	CMember(ENiagaraDefaultSortPrecision)              DefaultSortPrecision                                        OFFSET(get<T>, {0xE1, 1, 0, 0})
	CMember(ENiagaraDefaultGpuTranslucentLatency)      DefaultGpuTranslucentLatency                                OFFSET(get<T>, {0xE2, 1, 0, 0})
	DMember(float)                                     DefaultLightInverseExposureBlend                            OFFSET(get<float>, {0xE4, 4, 0, 0})
	CMember(TEnumAsByte<ENDISkelMesh_GpuMaxInfluences>) NDISkelMesh_GpuMaxInfluences                               OFFSET(get<T>, {0xE8, 1, 0, 0})
	CMember(TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat>) NDISkelMesh_GpuUniformSamplingFormat               OFFSET(get<T>, {0xE9, 1, 0, 0})
	CMember(TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat>) NDISkelMesh_AdjacencyTriangleIndexFormat       OFFSET(get<T>, {0xEA, 1, 0, 0})
	DMember(bool)                                      NDIStaticMesh_AllowDistanceFields                           OFFSET(get<bool>, {0xEB, 1, 0, 0})
	CMember(TArray<TEnumAsByte>)                       NDICollisionQuery_AsyncGpuTraceProviderOrder                OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FString)                                   SimCacheAuxiliaryFileBasePath                               OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(int64_t)                                   SimCacheMaxCPUMemoryVolumetrics                             OFFSET(get<int64_t>, {0x110, 8, 0, 0})
	CMember(TArray<FNiagaraPlatformSetRedirect>)       PlatformSetRedirects                                        OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraSimCacheCustomStorageInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSimCacheCustomStorageInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraValidationRuleSet
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraValidationRuleSet : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<UNiagaraValidationRule*>)           ValidationRules                                             OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceActorComponent
/// Size: 0x0040 (0x000038 - 0x000078)
class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(ENDIActorComponentSourceMode)              SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   LocalPlayerIndex                                            OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TLazyObjectPtr<AActor*>)                   SourceActor                                                 OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FNiagaraUserParameterBinding)              ActorOrComponentParameter                                   OFFSET(get<T>, {0x58, 24, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAsyncGpuTrace
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   MaxTracesPerParticle                                        OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxRetraces                                                 OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider>) TraceProvider                                   OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceDebugDraw
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  OverrideMaxLineInstances                                    OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceDynamicMesh
/// Size: 0x0070 (0x000038 - 0x0000A8)
class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<FNiagaraDynamicMeshSection>)        Sections                                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FNiagaraDynamicMeshMaterial>)       Materials                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   NumVertices                                                 OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   NumTexCoords                                                OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bHasColors                                                  OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bHasTangentBasis                                            OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bClearTrianglesPerFrame                                     OFFSET(get<bool>, {0x6A, 1, 0, 0})
	SMember(FBox)                                      DefaultBounds                                               OFFSET(get<T>, {0x70, 56, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceEmitterProperties
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FNiagaraDataInterfaceEmitterBinding)       EmitterBinding                                              OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGBuffer
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfacePhysicsAsset
/// Size: 0x0060 (0x000038 - 0x000098)
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(UPhysicsAsset*)                            DefaultSource                                               OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SoftSourceActor                                             OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MeshUserParameter                                           OFFSET(get<T>, {0x60, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraPhysicsAssetDICollectorInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraPhysicsAssetDICollectorInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSceneCapture2D
/// Size: 0x00E8 (0x000038 - 0x000120)
class UNiagaraDataInterfaceSceneCapture2D : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(ENDISceneCapture2DSourceMode)              SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FNiagaraUserParameterBinding)              SceneCaptureUserParameter                                   OFFSET(get<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bAutoMoveWithComponent                                      OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(ENDISceneCapture2DOffsetMode)              AutoMoveOffsetLocationMode                                  OFFSET(get<T>, {0x59, 1, 0, 0})
	SMember(FVector)                                   AutoMoveOffsetLocation                                      OFFSET(get<T>, {0x60, 24, 0, 0})
	CMember(ENDISceneCapture2DOffsetMode)              AutoMoveOffsetRotationMode                                  OFFSET(get<T>, {0x78, 1, 0, 0})
	SMember(FRotator)                                  AutoMoveOffsetRotation                                      OFFSET(get<T>, {0x80, 24, 0, 0})
	CMember(TEnumAsByte<ESceneCaptureSource>)          ManagedCaptureSource                                        OFFSET(get<T>, {0x98, 1, 0, 0})
	SMember(FIntPoint)                                 ManagedTextureSize                                          OFFSET(get<T>, {0x9C, 8, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   ManagedTextureFormat                                        OFFSET(get<T>, {0xA4, 1, 0, 0})
	CMember(TEnumAsByte<ECameraProjectionMode>)        ManagedProjectionType                                       OFFSET(get<T>, {0xA5, 1, 0, 0})
	DMember(float)                                     ManagedFOVAngle                                             OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     ManagedOrthoWidth                                           OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bManagedCaptureEveryFrame                                   OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bManagedCaptureOnMovement                                   OFFSET(get<bool>, {0xB1, 1, 0, 0})
	CMember(TArray<AActor*>)                           ManagedShowOnlyActors                                       OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TMap<uint64_t, USceneCaptureComponent2D*>) ManagedCaptureComponents                                    OFFSET(get<T>, {0xD0, 80, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceSceneCapture2D.SetSceneCapture2DManagedShowOnlyActors
	// void SetSceneCapture2DManagedShowOnlyActors(UNiagaraComponent* NiagaraSystem, FName ParameterName, TArray<AActor*> ShowOnlyActors); // [0x67187d0] Final|RequiredAPI|Native|Static|Protected|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimCacheReader
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FNiagaraUserParameterBinding)              SimCacheBinding                                             OFFSET(get<T>, {0x38, 24, 0, 0})
	CMember(UNiagaraSimCache*)                         SimCache                                                    OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FName)                                     EmitterBinding                                              OFFSET(get<T>, {0x58, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ENiagaraGpuSyncMode)                       GpuSyncMode                                                 OFFSET(get<T>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   InitialValue                                                OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(ENDIStaticMesh_SourceMode)                 SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(UStaticMesh*)                              DefaultMesh                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SoftSourceActor                                             OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(UStaticMeshComponent*)                     SourceComponent                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FNDIStaticMeshSectionFilter)               SectionFilter                                               OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bCaptureTransformsPerFrame                                  OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bUsePhysicsBodyVelocity                                     OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(bool)                                      bAllowSamplingFromStreamingLODs                             OFFSET(get<bool>, {0x82, 1, 0, 0})
	DMember(int32_t)                                   LODIndex                                                    OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	SMember(FNiagaraUserParameterBinding)              LODIndexUserParameter                                       OFFSET(get<T>, {0x88, 24, 0, 0})
	DMember(int32_t)                                   InstanceIndex                                               OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	CMember(TArray<FName>)                             FilteredSockets                                             OFFSET(get<T>, {0xA8, 16, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceStaticMesh.SetNiagaraStaticMeshDIInstanceIndex
	// void SetNiagaraStaticMeshDIInstanceIndex(UNiagaraComponent* NiagaraSystem, FName UserParameterName, int32_t NewInstanceIndex); // [0x674e678] Final|RequiredAPI|Native|Static|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceStaticMesh.OnSourceEndPlay
	// void OnSourceEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                              // [0x29c32a4] Final|RequiredAPI|Native|Protected 
};

/// Class /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader
/// Size: 0x0060 (0x000038 - 0x000098)
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(ENDIObjectPropertyReaderSourceMode)        SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FNiagaraUserParameterBinding)              UObjectParameterBinding                                     OFFSET(get<T>, {0x40, 24, 0, 0})
	CMember(TArray<FNiagaraUObjectPropertyReaderRemap>) PropertyRemap                                              OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SourceActor                                                 OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(UClass*)                                   SourceActorComponentClass                                   OFFSET(get<T>, {0x88, 8, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap
	// void SetUObjectReaderPropertyRemap(UNiagaraComponent* NiagaraComponent, FName UserParameterName, FName GraphName, FName RemapName); // [0x674e794] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceVirtualTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(URuntimeVirtualTexture*)                   Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(ENiagaraSystemSpawnSectionStartBehavior)   SectionStartBehavior                                        OFFSET(get<T>, {0xF0, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEvaluateBehavior) SectionEvaluateBehavior                                    OFFSET(get<T>, {0xF4, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEndBehavior)     SectionEndBehavior                                          OFFSET(get<T>, {0xF8, 4, 0, 0})
	CMember(ENiagaraAgeUpdateMode)                     AgeUpdateMode                                               OFFSET(get<T>, {0xFC, 1, 0, 0})
	DMember(bool)                                      bAllowScalability                                           OFFSET(get<bool>, {0xFD, 1, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemTrack
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraParameterTrack
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(get<T>, {0xA8, 24, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraBoolParameterTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraColorParameterTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraFloatParameterTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraIntegerParameterTrack
/// Size: 0x0008 (0x0000C0 - 0x0000C8)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Class /Script/Niagara.MovieSceneNiagaraVectorParameterTrack
/// Size: 0x0010 (0x0000C0 - 0x0000D0)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(int32_t)                                   ChannelsUsed                                                OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANiagaraActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UNiagaraComponent*)                        NiagaraComponent                                            OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bDestroyOnSystemFinish                                      OFFSET(get<bool>, {0x298, 1, 1, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish
	// void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);                                                        // [0x675fdbc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished
	// void OnNiagaraSystemFinished(UNiagaraComponent* FinishedComponent);                                                      // [0x29f772c] Final|RequiredAPI|Native|Private 
	// Function /Script/Niagara.NiagaraActor.GetDestroyOnSystemFinish
	// bool GetDestroyOnSystemFinish();                                                                                         // [0x675d224] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Niagara.NiagaraBakerOutput
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraBakerOutput : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   OutputName                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerOutputSimCache
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FString)                                   SimCacheAssetPathFormat                                     OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FNiagaraSimCacheCreateParameters)          CreateParameters                                            OFFSET(get<T>, {0x48, 88, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerOutputTexture2D
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FNiagaraBakerTextureSource)                SourceBinding                                               OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bGenerateAtlas                                              OFFSET(get<bool>, {0x50, 1, 1, 0})
	DMember(bool)                                      bGenerateFrames                                             OFFSET(get<bool>, {0x50, 1, 1, 1})
	DMember(bool)                                      bExportFrames                                               OFFSET(get<bool>, {0x50, 1, 1, 2})
	DMember(bool)                                      bSetTextureAddressX                                         OFFSET(get<bool>, {0x50, 1, 1, 3})
	DMember(bool)                                      bSetTextureAddressY                                         OFFSET(get<bool>, {0x50, 1, 1, 4})
	SMember(FIntPoint)                                 FrameSize                                                   OFFSET(get<T>, {0x54, 8, 0, 0})
	SMember(FIntPoint)                                 AtlasTextureSize                                            OFFSET(get<T>, {0x5C, 8, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               TextureAddressX                                             OFFSET(get<T>, {0x6C, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               TextureAddressY                                             OFFSET(get<T>, {0x6D, 1, 0, 0})
	SMember(FString)                                   AtlasAssetPathFormat                                        OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   FramesAssetPathFormat                                       OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   FramesExportPathFormat                                      OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerOutputVolumeTexture
/// Size: 0x0050 (0x000038 - 0x000088)
class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FNiagaraBakerTextureSource)                SourceBinding                                               OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bGenerateAtlas                                              OFFSET(get<bool>, {0x50, 1, 1, 0})
	DMember(bool)                                      bGenerateFrames                                             OFFSET(get<bool>, {0x50, 1, 1, 1})
	DMember(bool)                                      bExportFrames                                               OFFSET(get<bool>, {0x50, 1, 1, 2})
	SMember(FString)                                   AtlasAssetPathFormat                                        OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   FramesAssetPathFormat                                       OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   FramesExportPathFormat                                      OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerSettings
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UNiagaraBakerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	DMember(float)                                     StartSeconds                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     DurationSeconds                                             OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   FramesPerSecond                                             OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bPreviewLooping                                             OFFSET(get<bool>, {0x34, 1, 1, 0})
	SMember(FIntPoint)                                 FramesPerDimension                                          OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<UNiagaraBakerOutput*>)              Outputs                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FNiagaraBakerCameraSettings>)       CameraSettings                                              OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   CurrentCameraIndex                                          OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	SMember(FName)                                     BakeQualityLevel                                            OFFSET(get<T>, {0x64, 4, 0, 0})
	DMember(bool)                                      bRenderComponentOnly                                        OFFSET(get<bool>, {0x68, 1, 1, 0})
	CMember(TArray<FNiagaraBakerTextureSettings>)      OutputTextures                                              OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(ENiagaraBakerViewMode)                     CameraViewportMode                                          OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FVector)                                   CameraViewportLocation                                      OFFSET(get<T>, {0x88, 168, 0, 0})
	SMember(FRotator)                                  CameraViewportRotation                                      OFFSET(get<T>, {0x130, 168, 0, 0})
	DMember(float)                                     CameraOrbitDistance                                         OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     CameraFOV                                                   OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(float)                                     CameraOrthoWidth                                            OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(bool)                                      bUseCameraAspectRatio                                       OFFSET(get<bool>, {0x1E4, 1, 1, 0})
	DMember(float)                                     CameraAspectRatio                                           OFFSET(get<float>, {0x1E8, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x02A0 (0x000570 - 0x000810)
class UNiagaraComponent : public UFXSystemComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	CMember(UNiagaraSystem*)                           Asset                                                       OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(ENiagaraTickBehavior)                      TickBehavior                                                OFFSET(get<T>, {0x570, 1, 0, 0})
	DMember(int32_t)                                   RandomSeedOffset                                            OFFSET(get<int32_t>, {0x574, 4, 0, 0})
	SMember(FNiagaraUserRedirectionParameterStore)     OverrideParameters                                          OFFSET(get<T>, {0x578, 216, 0, 0})
	DMember(bool)                                      bForceSolo                                                  OFFSET(get<bool>, {0x650, 1, 1, 0})
	DMember(bool)                                      bEnableGpuComputeDebug                                      OFFSET(get<bool>, {0x650, 1, 1, 1})
	DMember(bool)                                      bOverrideWarmupSettings                                     OFFSET(get<bool>, {0x650, 1, 1, 2})
	DMember(int32_t)                                   WarmupTickCount                                             OFFSET(get<int32_t>, {0x654, 4, 0, 0})
	DMember(float)                                     WarmupTickDelta                                             OFFSET(get<float>, {0x658, 4, 0, 0})
	DMember(bool)                                      bAutoDestroy                                                OFFSET(get<bool>, {0x690, 1, 1, 0})
	DMember(bool)                                      bRenderingEnabled                                           OFFSET(get<bool>, {0x690, 1, 1, 1})
	DMember(bool)                                      bAutoManageAttachment                                       OFFSET(get<bool>, {0x690, 1, 1, 2})
	DMember(bool)                                      bAutoAttachWeldSimulatedBodies                              OFFSET(get<bool>, {0x690, 1, 1, 3})
	DMember(float)                                     MaxTimeBeforeForceUpdateTransform                           OFFSET(get<float>, {0x694, 4, 0, 0})
	CMember(ENiagaraOcclusionQueryMode)                OcclusionQueryMode                                          OFFSET(get<T>, {0x699, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSystemFinished                                            OFFSET(get<T>, {0x6A0, 16, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          AutoAttachParent                                            OFFSET(get<T>, {0x6B0, 8, 0, 0})
	SMember(FName)                                     AutoAttachSocketName                                        OFFSET(get<T>, {0x6B8, 4, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachLocationRule                                      OFFSET(get<T>, {0x6BC, 1, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachRotationRule                                      OFFSET(get<T>, {0x6BD, 1, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachScaleRule                                         OFFSET(get<T>, {0x6BE, 1, 0, 0})
	DMember(bool)                                      bAllowScalability                                           OFFSET(get<bool>, {0x6C8, 1, 1, 4})
	CMember(UNiagaraSimCache*)                         SimCache                                                    OFFSET(get<T>, {0x7F8, 8, 0, 0})
	CMember(UNiagaraCullProxyComponent*)               CullProxy                                                   OFFSET(get<T>, {0x800, 8, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec4
	// void SetVariableVec4(FName InVariableName, FVector4& InValue);                                                           // [0x202b734] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec3
	// void SetVariableVec3(FName InVariableName, FVector InValue);                                                             // [0x1ba961c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableVec2
	// void SetVariableVec2(FName InVariableName, FVector2D InValue);                                                           // [0x6765db8] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTextureRenderTarget
	// void SetVariableTextureRenderTarget(FName InVariableName, UTextureRenderTarget* TextureRenderTarget);                    // [0x6765cf4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableTexture
	// void SetVariableTexture(FName InVariableName, UTexture* Texture);                                                        // [0x6765c30] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableStaticMesh
	// void SetVariableStaticMesh(FName InVariableName, UStaticMesh* InValue);                                                  // [0x6765b6c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableQuat
	// void SetVariableQuat(FName InVariableName, FQuat& InValue);                                                              // [0x6765aa4] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariablePosition
	// void SetVariablePosition(FName InVariableName, FVector InValue);                                                         // [0x34074c4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableObject
	// void SetVariableObject(FName InVariableName, UObject* Object);                                                           // [0x2811cb8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMatrix
	// void SetVariableMatrix(FName InVariableName, FMatrix& InValue);                                                          // [0x67659b0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableMaterial
	// void SetVariableMaterial(FName InVariableName, UMaterialInterface* Object);                                              // [0x2811f10] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableLinearColor
	// void SetVariableLinearColor(FName InVariableName, FLinearColor& InValue);                                                // [0x25ba5ec] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableInt
	// void SetVariableInt(FName InVariableName, int32_t InValue);                                                              // [0x2d8c5d8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableFloat
	// void SetVariableFloat(FName InVariableName, float InValue);                                                              // [0x27a43c4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableBool
	// void SetVariableBool(FName InVariableName, bool InValue);                                                                // [0x27556a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetVariableActor
	// void SetVariableActor(FName InVariableName, AActor* Actor);                                                              // [0x67658ec] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetTickBehavior
	// void SetTickBehavior(ENiagaraTickBehavior NewTickBehavior);                                                              // [0x676586c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSystemFixedBounds
	// void SetSystemFixedBounds(FBox LocalBounds);                                                                             // [0x67656e4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSimCache
	// void SetSimCache(UNiagaraSimCache* SimCache, bool bResetSystem);                                                         // [0x676561c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetSeekDelta
	// void SetSeekDelta(float InSeekDelta);                                                                                    // [0x676559c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRenderingEnabled
	// void SetRenderingEnabled(bool bInRenderingEnabled);                                                                      // [0x676550c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetRandomSeedOffset
	// void SetRandomSeedOffset(int32_t NewRandomSeedOffset);                                                                   // [0x6765484] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPreviewLODDistance
	// void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);          // [0x6765384] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetPaused
	// void SetPaused(bool bInPaused);                                                                                          // [0x6765304] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetOcclusionQueryMode
	// void SetOcclusionQueryMode(ENiagaraOcclusionQueryMode Mode);                                                             // [0x6765278] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec4
	// void SetNiagaraVariableVec4(FString InVariableName, FVector4& InValue);                                                  // [0x6764b74] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec3
	// void SetNiagaraVariableVec3(FString InVariableName, FVector InValue);                                                    // [0x6764394] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableVec2
	// void SetNiagaraVariableVec2(FString InVariableName, FVector2D InValue);                                                  // [0x6763bc0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableQuat
	// void SetNiagaraVariableQuat(FString InVariableName, FQuat& InValue);                                                     // [0x67634b0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariablePosition
	// void SetNiagaraVariablePosition(FString InVariableName, FVector InValue);                                                // [0x6762cd0] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableObject
	// void SetNiagaraVariableObject(FString InVariableName, UObject* Object);                                                  // [0x67602a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableMatrix
	// void SetNiagaraVariableMatrix(FString InVariableName, FMatrix& InValue);                                                 // [0x676259c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableLinearColor
	// void SetNiagaraVariableLinearColor(FString InVariableName, FLinearColor& InValue);                                       // [0x6761e8c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableInt
	// void SetNiagaraVariableInt(FString InVariableName, int32_t InValue);                                                     // [0x676178c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableFloat
	// void SetNiagaraVariableFloat(FString InVariableName, float InValue);                                                     // [0x67610ac] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableBool
	// void SetNiagaraVariableBool(FString InVariableName, bool InValue);                                                       // [0x67609a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetNiagaraVariableActor
	// void SetNiagaraVariableActor(FString InVariableName, AActor* Actor);                                                     // [0x67602a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetMaxSimTime
	// void SetMaxSimTime(float InMaxTime);                                                                                     // [0x6760228] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetLockDesiredAgeDeltaTimeToSeekDelta
	// void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);                                                                  // [0x67601a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetGpuComputeDebug
	// void SetGpuComputeDebug(bool bEnableDebug);                                                                              // [0x676010c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceSolo
	// void SetForceSolo(bool bInForceSolo);                                                                                    // [0x676008c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetForceLocalPlayerEffect
	// void SetForceLocalPlayerEffect(bool bIsPlayerEffect);                                                                    // [0x676000c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetEmitterFixedBounds
	// void SetEmitterFixedBounds(FName EmitterName, FBox LocalBounds);                                                         // [0x675fe48] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetDesiredAge
	// void SetDesiredAge(float InDesiredAge);                                                                                  // [0x675fd3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCustomTimeDilation
	// void SetCustomTimeDilation(float Dilation);                                                                              // [0x2b9d928] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetCanRenderWhileSeeking
	// void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);                                                            // [0x675fcbc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAutoDestroy
	// void SetAutoDestroy(bool bInAutoDestroy);                                                                                // [0x675fc3c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAsset
	// void SetAsset(UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);                                           // [0x2da6d88] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAllowScalability
	// void SetAllowScalability(bool bAllow);                                                                                   // [0x675fbbc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SetAgeUpdateMode
	// void SetAgeUpdateMode(ENiagaraAgeUpdateMode InAgeUpdateMode);                                                            // [0x675fb40] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.SeekToDesiredAge
	// void SeekToDesiredAge(float InDesiredAge);                                                                               // [0x675fab8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ResetSystem
	// void ResetSystem();                                                                                                      // [0x2b33484] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ReinitializeSystem
	// void ReinitializeSystem();                                                                                               // [0x675faa4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.IsPaused
	// bool IsPaused();                                                                                                         // [0x675f698] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.InitForPerformanceBaseline
	// void InitForPerformanceBaseline();                                                                                       // [0x675f65c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetTickBehavior
	// ENiagaraTickBehavior GetTickBehavior();                                                                                  // [0x675f644] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSystemFixedBounds
	// FBox GetSystemFixedBounds();                                                                                             // [0x675f604] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSimCache
	// UNiagaraSimCache* GetSimCache();                                                                                         // [0x675f5ec] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetSeekDelta
	// float GetSeekDelta();                                                                                                    // [0x675f5d4] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetRandomSeedOffset
	// int32_t GetRandomSeedOffset();                                                                                           // [0x675f5bc] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistanceEnabled
	// bool GetPreviewLODDistanceEnabled();                                                                                     // [0x675f5a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetPreviewLODDistance
	// float GetPreviewLODDistance();                                                                                           // [0x675f574] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetOcclusionQueryMode
	// ENiagaraOcclusionQueryMode GetOcclusionQueryMode();                                                                      // [0x675f55c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValueVec3_DebugOnly
	// TArray<FVector> GetNiagaraParticleValueVec3_DebugOnly(FString InEmitterName, FString InValueName);                       // [0x675db94] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticleValues_DebugOnly
	// TArray<float> GetNiagaraParticleValues_DebugOnly(FString InEmitterName, FString InValueName);                            // [0x675e878] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetNiagaraParticlePositions_DebugOnly
	// TArray<FVector> GetNiagaraParticlePositions_DebugOnly(FString InEmitterName);                                            // [0x675d4a8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetMaxSimTime
	// float GetMaxSimTime();                                                                                                   // [0x675d340] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetLockDesiredAgeDeltaTimeToSeekDelta
	// bool GetLockDesiredAgeDeltaTimeToSeekDelta();                                                                            // [0x675d328] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceSolo
	// bool GetForceSolo();                                                                                                     // [0x675d30c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetForceLocalPlayerEffect
	// bool GetForceLocalPlayerEffect();                                                                                        // [0x675d2f0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetEmitterFixedBounds
	// FBox GetEmitterFixedBounds(FName EmitterName);                                                                           // [0x675d240] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDesiredAge
	// float GetDesiredAge();                                                                                                   // [0x675d20c] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetDataInterface
	// UNiagaraDataInterface* GetDataInterface(FString Name);                                                                   // [0x675cb4c] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.GetCustomTimeDilation
	// float GetCustomTimeDilation();                                                                                           // [0x675cb34] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAsset
	// UNiagaraSystem* GetAsset();                                                                                              // [0x675cb1c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAllowScalability
	// bool GetAllowScalability();                                                                                              // [0x675cb00] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.GetAgeUpdateMode
	// ENiagaraAgeUpdateMode GetAgeUpdateMode();                                                                                // [0x675cae8] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraComponent.ClearSystemFixedBounds
	// void ClearSystemFixedBounds();                                                                                           // [0x675cad4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ClearSimCache
	// void ClearSimCache(bool bResetSystem);                                                                                   // [0x675ca50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.ClearEmitterFixedBounds
	// void ClearEmitterFixedBounds(FName EmitterName);                                                                         // [0x675c978] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulationByTime
	// void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);                                                // [0x675c8b4] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraComponent.AdvanceSimulation
	// void AdvanceSimulation(int32_t TickCount, float TickDeltaSeconds);                                                       // [0x675c7f0] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0058 (0x000028 - 0x000080)
class UNiagaraComponentPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<UNiagaraSystem*, FNCPool>)            WorldParticleSystemPools                                    OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(get<T>, {0x28, 48, 0, 0})
	DMember(int32_t)                                   SortOrderHint                                               OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(ENiagaraRendererMotionVectorSetting)       MotionVectorSetting                                         OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererEnabledBinding                                      OFFSET(get<T>, {0x60, 40, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bAllowInCullProxies                                         OFFSET(get<bool>, {0x89, 1, 0, 0})
	SMember(FGuid)                                     OuterEmitterVersion                                         OFFSET(get<T>, {0x8C, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x00F0 (0x0000B0 - 0x0001A0)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(UClass*)                                   ComponentType                                               OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(uint32_t)                                  ComponentCountLimit                                         OFFSET(get<uint32_t>, {0xB8, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          EnabledBinding                                              OFFSET(get<T>, {0xC0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(get<T>, {0xE8, 40, 0, 0})
	DMember(bool)                                      bAssignComponentsOnParticleID                               OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      bCreateComponentFirstParticleFrame                          OFFSET(get<bool>, {0x111, 1, 0, 0})
	DMember(bool)                                      bOnlyActivateNewlyAquiredComponents                         OFFSET(get<bool>, {0x112, 1, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          OFFSET(get<int32_t>, {0x114, 4, 0, 0})
	CMember(USceneComponent*)                          TemplateComponent                                           OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TArray<FNiagaraComponentPropertyBinding>)  PropertyBindings                                            OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraCullProxyComponent
/// Size: 0x0010 (0x000810 - 0x000820)
class UNiagaraCullProxyComponent : public UNiagaraComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2080;

public:
	CMember(TArray<FNiagaraCulledComponentInfo>)       Instances                                                   OFFSET(get<T>, {0x808, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannelLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraDataInterface2DArrayTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UTexture*)                                 Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(ENiagaraGpuSyncMode)                       GpuSyncMode                                                 OFFSET(get<T>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   MaxElements                                                 OFFSET(get<int32_t>, {0x44, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<float>)                             FloatData                                                   OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FVector2f>)                         InternalFloatData                                           OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FVector3f>)                         InternalFloatData                                           OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayPosition
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FNiagaraPosition>)                  PositionData                                                OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FVector4f>)                         InternalFloatData                                           OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FLinearColor>)                      ColorData                                                   OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FQuat4f>)                           InternalQuatData                                            OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayMatrix
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayMatrix : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FMatrix44f>)                        InternalMatrixData                                          OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayInt32
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<int32_t>)                           IntData                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayUInt8
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<char>)                              InternalIntData                                             OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<bool>)                              BoolData                                                    OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayNiagaraID
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FNiagaraID>)                        IntData                                                     OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(USoundSubmix*)                             Submix                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(USoundSubmix*)                             Submix                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     ScopeInMilliseconds                                         OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayerSettings
/// Size: 0x03E8 (0x000028 - 0x000410)
class UNiagaraDataInterfaceAudioPlayerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	DMember(bool)                                      bOverrideConcurrency                                        OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(USoundConcurrency*)                        Concurrency                                                 OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bOverrideAttenuationSettings                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FSoundAttenuationSettings)                 AttenuationSettings                                         OFFSET(get<T>, {0x40, 976, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0050 (0x000038 - 0x000088)
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(USoundBase*)                               SoundToPlay                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(USoundAttenuation*)                        Attenuation                                                 OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(USoundConcurrency*)                        Concurrency                                                 OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<FName>)                             ParameterNames                                              OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FNiagaraUserParameterBinding)              ConfigurationUserParameter                                  OFFSET(get<T>, {0x60, 24, 0, 0})
	DMember(bool)                                      bLimitPlaysPerTick                                          OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(int32_t)                                   MaxPlaysPerTick                                             OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bStopWhenComponentIsDestroyed                               OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bAllowLoopingOneShotSounds                                  OFFSET(get<bool>, {0x81, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   Resolution                                                  OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   PlayerControllerIndex                                       OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0x3C, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCollisionQuery
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurveBase
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<float>)                             ShaderLUT                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(float)                                     LUTMinTime                                                  OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     LUTMaxTime                                                  OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     LUTInvTimeRange                                             OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LUTNumSamplesMinusOne                                       OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUseLUT                                                     OFFSET(get<bool>, {0x5C, 1, 1, 0})
	DMember(bool)                                      bExposeCurve                                                OFFSET(get<bool>, {0x5C, 1, 1, 1})
	SMember(FName)                                     ExposedName                                                 OFFSET(get<T>, {0x60, 4, 0, 0})
	CMember(UTexture2D*)                               ExposedTexture                                              OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FRichCurve)                                RedCurve                                                    OFFSET(get<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                GreenCurve                                                  OFFSET(get<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                BlueCurve                                                   OFFSET(get<T>, {0x170, 128, 0, 0})
	SMember(FRichCurve)                                AlphaCurve                                                  OFFSET(get<T>, {0x1F0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCubeTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UTexture*)                                 Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  Seed                                                        OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FRichCurve)                                Curve                                                       OFFSET(get<T>, {0x70, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraParticleCallbackHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraParticleCallbackHandler : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceExport
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FNiagaraUserParameterBinding)              CallbackHandlerParameter                                    OFFSET(get<T>, {0x38, 24, 0, 0})
	CMember(ENDIExport_GPUAllocationMode)              GPUAllocationMode                                           OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(int32_t)                                   GPUAllocationFixedSize                                      OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(float)                                     GPUAllocationPerParticleSize                                OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      ClearBeforeNonIterationStage                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   NumCellsX                                                   OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   NumCellsY                                                   OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   NumCellsMaxAxis                                             OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   NumAttributes                                               OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(bool)                                      SetGridFromMaxAxis                                          OFFSET(get<bool>, {0x4C, 1, 0, 0})
	SMember(FVector2D)                                 WorldBBoxSize                                               OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x00C0 (0x000060 - 0x000120)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(get<T>, {0x60, 24, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   OverrideBufferFormat                                        OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x79, 1, 1, 0})
	CMember(TMap<uint64_t, UTextureRenderTarget2DArray*>) ManagedRenderTargets                                     OFFSET(get<T>, {0xD0, 80, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetTextureSize
	// void GetTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                       // [0x67a2234] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.GetRawTextureSize
	// void GetRawTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY);                                    // [0x67a2120] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillTexture2D
	// bool FillTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t AttributeIndex);                  // [0x67a07e8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid2DCollection.FillRawTexture2D
	// bool FillRawTexture2D(UNiagaraComponent* Component, UTextureRenderTarget2D* Dest, int32_t& TilesX, int32_t& TilesY);     // [0x67a0684] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0020 (0x000120 - 0x000140)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FString)                                   EmitterName                                                 OFFSET(get<T>, {0x120, 16, 0, 0})
	SMember(FString)                                   DIName                                                      OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      ClearBeforeNonIterationStage                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FIntVector)                                NumCells                                                    OFFSET(get<T>, {0x3C, 12, 0, 0})
	DMember(float)                                     CellSize                                                    OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   NumCellsMaxAxis                                             OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	CMember(ESetResolutionMethod)                      SetResolutionMethod                                         OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FVector)                                   WorldBBoxSize                                               OFFSET(get<T>, {0x58, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x0078 (0x000070 - 0x0000E8)
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(int32_t)                                   NumAttributes                                               OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(get<T>, {0x78, 24, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   OverrideBufferFormat                                        OFFSET(get<T>, {0x90, 1, 0, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x91, 1, 1, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetTextureSize
	// void GetTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                       // [0x67cb0b4] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.GetRawTextureSize
	// void GetRawTextureSize(UNiagaraComponent* Component, int32_t& SizeX, int32_t& SizeY, int32_t& SizeZ);                    // [0x67caf40] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillVolumeTexture
	// bool FillVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32_t AttributeIndex);                      // [0x67a07e8] RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraDataInterfaceGrid3DCollection.FillRawVolumeTexture
	// bool FillRawVolumeTexture(UNiagaraComponent* Component, UVolumeTexture* Dest, int32_t& TilesX, int32_t& TilesY, int32_t& TileZ); // [0x67cad88] RequiredAPI|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollectionReader
/// Size: 0x0020 (0x0000E8 - 0x000108)
class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FString)                                   EmitterName                                                 OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   DIName                                                      OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FIntPoint)                                 Size                                                        OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(AActor*)                                   SourceLandscape                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(ENDILandscape_SourceMode)                  SourceMode                                                  OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(TArray<UPhysicalMaterial*>)                PhysicalMaterials                                           OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UNiagaraMeshRendererProperties*)           MeshRenderer                                                OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0008 (0x000070 - 0x000078)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(uint32_t)                                  MaxNeighborsPerCell                                         OFFSET(get<uint32_t>, {0x70, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceOcclusion
/// Size: 0x0000 (0x000038 - 0x000038)
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceParticleRead
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FString)                                   EmitterName                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(get<T>, {0x38, 48, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRasterizationGrid3D
/// Size: 0x0010 (0x000070 - 0x000080)
class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int32_t)                                   NumAttributes                                               OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   ResetValue                                                  OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FIntPoint)                                 Size                                                        OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(ENiagaraMipMapGeneration)                  MipMapGeneration                                            OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(ENiagaraMipMapGenerationType)              MipMapGenerationType                                        OFFSET(get<T>, {0x41, 1, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0x42, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                OverrideRenderTargetFilter                                  OFFSET(get<T>, {0x43, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               OFFSET(get<bool>, {0x44, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x44, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(get<T>, {0x48, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FIntVector)                                Size                                                        OFFSET(get<T>, {0x38, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                OverrideRenderTargetFilter                                  OFFSET(get<T>, {0x45, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               OFFSET(get<bool>, {0x46, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x46, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(get<T>, {0x48, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetCube
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   Size                                                        OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0x3C, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                OverrideRenderTargetFilter                                  OFFSET(get<T>, {0x3D, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               OFFSET(get<bool>, {0x3E, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x3E, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FIntVector)                                Size                                                        OFFSET(get<T>, {0x40, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                OverrideRenderTargetFilter                                  OFFSET(get<T>, {0x4D, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               OFFSET(get<bool>, {0x4E, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             OFFSET(get<bool>, {0x4E, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   OFFSET(get<T>, {0x50, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
/// Size: 0x0040 (0x000038 - 0x000078)
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FName>)                             ActorTags                                                   OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FName>)                             ComponentTags                                               OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SourceActors                                                OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      OnlyUseMoveable                                             OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      UseComplexCollisions                                        OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      GlobalSearchAllowed                                         OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      GlobalSearchForced                                          OFFSET(get<bool>, {0x6B, 1, 0, 0})
	DMember(bool)                                      GlobalSearchFallback_Unscripted                             OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(int32_t)                                   MaxNumPrimitives                                            OFFSET(get<int32_t>, {0x70, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraDataInterfaceSkeletalMesh
/// Size: 0x00B0 (0x000038 - 0x0000E8)
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	CMember(ENDISkeletalMesh_SourceMode)               SourceMode                                                  OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SoftSourceActor                                             OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(TArray<FName>)                             ComponentTags                                               OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(USkeletalMeshComponent*)                   SourceComponent                                             OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MeshUserParameter                                           OFFSET(get<T>, {0x78, 24, 0, 0})
	CMember(ENDISkeletalMesh_SkinningMode)             SkinningMode                                                OFFSET(get<T>, {0x90, 1, 0, 0})
	CMember(TArray<FName>)                             SamplingRegions                                             OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(int32_t)                                   WholeMeshLOD                                                OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	CMember(TArray<FName>)                             FilteredBones                                               OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FName>)                             FilteredSockets                                             OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FName)                                     ExcludeBoneName                                             OFFSET(get<T>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bExcludeBone                                                OFFSET(get<bool>, {0xD4, 1, 1, 0})
	DMember(int32_t)                                   UvSetIndex                                                  OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0xDC, 1, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraDataInterfaceSkeletalMesh.OnSourceEndPlay
	// void OnSourceEndPlay(AActor* InSource, TEnumAsByte<EEndPlayReason> Reason);                                              // [0x29c3188] Final|RequiredAPI|Native|Protected 
};

/// Class /Script/Niagara.NiagaraDataInterfaceSparseVolumeTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceSparseVolumeTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(USparseVolumeTexture*)                     SparseVolumeTexture                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              SparseVolumeTextureUserParameter                            OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(AActor*)                                   Source                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              SplineUserParameter                                         OFFSET(get<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bUseLUT                                                     OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(int32_t)                                   NumLUTSteps                                                 OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpriteRendererInfo
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UNiagaraSpriteRendererProperties*)         SpriteRenderer                                              OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UTexture*)                                 Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0100 (0x000070 - 0x000170)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRichCurve)                                XCurve                                                      OFFSET(get<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(get<T>, {0xF0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FRichCurve)                                XCurve                                                      OFFSET(get<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(get<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                ZCurve                                                      OFFSET(get<T>, {0x170, 128, 0, 0})
	SMember(FRichCurve)                                WCurve                                                      OFFSET(get<T>, {0x1F0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x0180 (0x000070 - 0x0001F0)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRichCurve)                                XCurve                                                      OFFSET(get<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      OFFSET(get<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                ZCurve                                                      OFFSET(get<T>, {0x170, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UVectorField*)                             Field                                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bTileX                                                      OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bTileY                                                      OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bTileZ                                                      OFFSET(get<bool>, {0x42, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeCache
/// Size: 0x0058 (0x000038 - 0x000090)
class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UVolumeCache*)                             VolumeCache                                                 OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UTexture*)                                 Texture                                                     OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDebugHUDSettings
/// Size: 0x0268 (0x000028 - 0x000290)
class UNiagaraDebugHUDSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FNiagaraDebugHUDSettingsData)              Data                                                        OFFSET(get<T>, {0x48, 584, 0, 0})
};

/// Class /Script/Niagara.NiagaraDecalRendererProperties
/// Size: 0x01E8 (0x0000B0 - 0x000298)
class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FNiagaraParameterBinding)                  MaterialParameterBinding                                    OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     DecalScreenSizeFade                                         OFFSET(get<float>, {0xC8, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalOrientationBinding                                     OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalSizeBinding                                            OFFSET(get<T>, {0x120, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalFadeBinding                                            OFFSET(get<T>, {0x148, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalSortOrderBinding                                       OFFSET(get<T>, {0x170, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalColorBinding                                           OFFSET(get<T>, {0x198, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalVisibleBinding                                         OFFSET(get<T>, {0x1C0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(get<T>, {0x1E8, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          OFFSET(get<T>, {0x210, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraEditorDataBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEditorDataBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraEditorParametersAdapterBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEditorParametersAdapterBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandler
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerDistance
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSignificanceHandlerAge
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraEffectType
/// Size: 0x0078 (0x000028 - 0x0000A0)
class UNiagaraEffectType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bAllowCullingForLocalPlayers                                OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(ENiagaraScalabilityUpdateFrequency)        UpdateFrequency                                             OFFSET(get<T>, {0x2C, 4, 0, 0})
	CMember(ENiagaraCullReaction)                      CullReaction                                                OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(UNiagaraSignificanceHandler*)              SignificanceHandler                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<FNiagaraSystemScalabilitySettings>) DetailLevelScalabilitySettings                              OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FNiagaraSystemScalabilitySettingsArray)    SystemScalabilitySettings                                   OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FNiagaraEmitterScalabilitySettingsArray)   EmitterScalabilitySettings                                  OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(UNiagaraBaselineController*)               PerformanceBaselineController                               OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FNiagaraPerfBaselineStats)                 PerfBaselineStats                                           OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FGuid)                                     PerfBaselineVersion                                         OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x0048 (0x000028 - 0x000070)
class UNiagaraEmitter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGuid)                                     ExposedVersion                                              OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bVersioningEnabled                                          OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(TArray<FVersionedNiagaraEmitterData>)      VersionData                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   UniqueEmitterName                                           OFFSET(get<T>, {0x60, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraEventReceiverEmitterAction : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
/// Size: 0x0008 (0x000028 - 0x000030)
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(uint32_t)                                  NumParticles                                                OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraLensEffectBase
/// Size: 0x0090 (0x0002A0 - 0x000330)
class ANiagaraLensEffectBase : public ANiagaraActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 816;

public:
	SMember(FTransform)                                DesiredRelativeTransform                                    OFFSET(get<T>, {0x2B0, 96, 0, 0})
	DMember(float)                                     BaseAuthoredFOV                                             OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(bool)                                      bAllowMultipleInstances                                     OFFSET(get<bool>, {0x314, 1, 1, 0})
	DMember(bool)                                      bResetWhenRetriggered                                       OFFSET(get<bool>, {0x314, 1, 1, 1})
	CMember(TArray<UClass*>)                           EmittersToTreatAsSame                                       OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(APlayerCameraManager*)                     OwningCameraManager                                         OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x0170 (0x0000B0 - 0x000220)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  OFFSET(get<T>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bUseInverseSquaredFalloff                                   OFFSET(get<bool>, {0xB4, 1, 1, 0})
	DMember(bool)                                      bAffectsTranslucency                                        OFFSET(get<bool>, {0xB4, 1, 1, 1})
	DMember(bool)                                      bAlphaScalesBrightness                                      OFFSET(get<bool>, {0xB4, 1, 1, 2})
	DMember(bool)                                      bOverrideInverseExposureBlend                               OFFSET(get<bool>, {0xB4, 1, 1, 3})
	DMember(float)                                     RadiusScale                                                 OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     DefaultExponent                                             OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FVector3f)                                 ColorAdd                                                    OFFSET(get<T>, {0xC0, 12, 0, 0})
	DMember(float)                                     InverseExposureBlend                                        OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          LightRenderingEnabledBinding                                OFFSET(get<T>, {0xD8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          LightExponentBinding                                        OFFSET(get<T>, {0x100, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(get<T>, {0x128, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(get<T>, {0x150, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RadiusBinding                                               OFFSET(get<T>, {0x178, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VolumetricScatteringBinding                                 OFFSET(get<T>, {0x1A0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(get<T>, {0x1C8, 40, 0, 0})
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x0478 (0x0000B0 - 0x000528)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1320;

public:
	CMember(TArray<FNiagaraMeshRendererMeshProperties>) Meshes                                                     OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  OFFSET(get<T>, {0xC0, 1, 0, 0})
	CMember(ENiagaraSortMode)                          SortMode                                                    OFFSET(get<T>, {0xC1, 1, 0, 0})
	CMember(ENiagaraRendererSortPrecision)             SortPrecision                                               OFFSET(get<T>, {0xC2, 1, 0, 0})
	CMember(ENiagaraRendererGpuTranslucentLatency)     GpuTranslucentLatency                                       OFFSET(get<T>, {0xC3, 1, 0, 0})
	DMember(bool)                                      bOverrideMaterials                                          OFFSET(get<bool>, {0xC4, 1, 1, 0})
	DMember(bool)                                      bUseHeterogeneousVolumes                                    OFFSET(get<bool>, {0xC4, 1, 1, 1})
	DMember(bool)                                      bSortOnlyWhenTranslucent                                    OFFSET(get<bool>, {0xC4, 1, 1, 2})
	DMember(bool)                                      bSubImageBlend                                              OFFSET(get<bool>, {0xC4, 1, 1, 3})
	DMember(bool)                                      bEnableFrustumCulling                                       OFFSET(get<bool>, {0xC4, 1, 1, 4})
	DMember(bool)                                      bEnableCameraDistanceCulling                                OFFSET(get<bool>, {0xC4, 1, 1, 5})
	DMember(bool)                                      bEnableMeshFlipbook                                         OFFSET(get<bool>, {0xC4, 1, 1, 6})
	DMember(bool)                                      bLockedAxisEnable                                           OFFSET(get<bool>, {0xC4, 1, 1, 7})
	CMember(TArray<FNiagaraMeshMaterialOverride>)      OverrideMaterials                                           OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FNiagaraMeshMICOverride>)           MICOverrideMaterials                                        OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FVector2D)                                 SubImageSize                                                OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FVector)                                   LockedAxis                                                  OFFSET(get<T>, {0xF8, 24, 0, 0})
	SMember(FVector)                                   MeshBoundsScale                                             OFFSET(get<T>, {0x110, 24, 0, 0})
	CMember(ENiagaraMeshFacingMode)                    FacingMode                                                  OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(ENiagaraMeshLockedAxisSpace)               LockedAxisSpace                                             OFFSET(get<T>, {0x129, 1, 0, 0})
	DMember(float)                                     MinCameraDistance                                           OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     MaxCameraDistance                                           OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(uint32_t)                                  RendererVisibility                                          OFFSET(get<uint32_t>, {0x134, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(get<T>, {0x138, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(get<T>, {0x160, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             OFFSET(get<T>, {0x188, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MeshOrientationBinding                                      OFFSET(get<T>, {0x1B0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ScaleBinding                                                OFFSET(get<T>, {0x1D8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SubImageIndexBinding                                        OFFSET(get<T>, {0x200, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      OFFSET(get<T>, {0x228, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     OFFSET(get<T>, {0x250, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     OFFSET(get<T>, {0x278, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     OFFSET(get<T>, {0x2A0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       OFFSET(get<T>, {0x2C8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CustomSortingBinding                                        OFFSET(get<T>, {0x2F0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        OFFSET(get<T>, {0x318, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CameraOffsetBinding                                         OFFSET(get<T>, {0x340, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(get<T>, {0x368, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MeshIndexBinding                                            OFFSET(get<T>, {0x390, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          OFFSET(get<T>, {0x3B8, 80, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPositionBinding                                         OFFSET(get<T>, {0x408, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevScaleBinding                                            OFFSET(get<T>, {0x430, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevMeshOrientationBinding                                  OFFSET(get<T>, {0x458, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevCameraOffsetBinding                                     OFFSET(get<T>, {0x480, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevVelocityBinding                                         OFFSET(get<T>, {0x4A8, 40, 0, 0})
	DMember(uint32_t)                                  MaterialParamValidMask                                      OFFSET(get<uint32_t>, {0x4D0, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UNiagaraParameterCollectionInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(UNiagaraParameterCollection*)              Collection                                                  OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  OverridenParameters                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FNiagaraParameterStore)                    ParameterStorage                                            OFFSET(get<T>, {0x40, 136, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVectorParameter
	// void SetVectorParameter(FString InVariableName, FVector InValue);                                                        // [0x683f320] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector4Parameter
	// void SetVector4Parameter(FString InVariableName, FVector4& InValue);                                                     // [0x683ec1c] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetVector2DParameter
	// void SetVector2DParameter(FString InVariableName, FVector2D InValue);                                                    // [0x683e448] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetQuatParameter
	// void SetQuatParameter(FString InVariableName, FQuat& InValue);                                                           // [0x683dd58] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetIntParameter
	// void SetIntParameter(FString InVariableName, int32_t InValue);                                                           // [0x683d5f8] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetFloatParameter
	// void SetFloatParameter(FString InVariableName, float InValue);                                                           // [0x683cf18] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetColorParameter
	// void SetColorParameter(FString InVariableName, FLinearColor InValue);                                                    // [0x683c744] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.SetBoolParameter
	// void SetBoolParameter(FString InVariableName, bool InValue);                                                             // [0x683c060] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVectorParameter
	// FVector GetVectorParameter(FString InVariableName);                                                                      // [0x683b7c4] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector4Parameter
	// FVector4 GetVector4Parameter(FString InVariableName);                                                                    // [0x683b118] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetVector2DParameter
	// FVector2D GetVector2DParameter(FString InVariableName);                                                                  // [0x683aa78] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetQuatParameter
	// FQuat GetQuatParameter(FString InVariableName);                                                                          // [0x683a3cc] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetIntParameter
	// int32_t GetIntParameter(FString InVariableName);                                                                         // [0x6839c80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetFloatParameter
	// float GetFloatParameter(FString InVariableName);                                                                         // [0x68395cc] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetColorParameter
	// FLinearColor GetColorParameter(FString InVariableName);                                                                  // [0x6838f2c] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Niagara.NiagaraParameterCollectionInstance.GetBoolParameter
	// bool GetBoolParameter(FString InVariableName);                                                                           // [0x683887c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0038 (0x000028 - 0x000060)
class UNiagaraParameterCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     Namespace                                                   OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Parameters                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UMaterialParameterCollection*)             SourceMaterialCollection                                    OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UNiagaraParameterCollectionInstance*)      DefaultInstance                                             OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FGuid)                                     CompileId                                                   OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBaselineController
/// Size: 0x0038 (0x000028 - 0x000060)
class UNiagaraBaselineController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     TestDuration                                                OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(UNiagaraEffectType*)                       EffectType                                                  OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(ANiagaraPerfBaselineActor*)                Owner                                                       OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           System                                                      OFFSET(get<T>, {0x40, 32, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraBaselineController.OnTickTest
	// bool OnTickTest();                                                                                                       // [0x184e268] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnOwnerTick
	// void OnOwnerTick(float DeltaTime);                                                                                       // [0x683bfdc] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnEndTest
	// void OnEndTest(FNiagaraPerfBaselineStats Stats);                                                                         // [0x683be70] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.OnBeginTest
	// void OnBeginTest();                                                                                                      // [0xd30dac] RequiredAPI|Native|Event|Public|BlueprintEvent 
	// Function /Script/Niagara.NiagaraBaselineController.GetSystem
	// UNiagaraSystem* GetSystem();                                                                                             // [0x5cdc07c] Final|RequiredAPI|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraBaselineController_Basic
/// Size: 0x0018 (0x000060 - 0x000078)
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   NumInstances                                                OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	CMember(TArray<UNiagaraComponent*>)                SpawnedComponents                                           OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPerfBaselineActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANiagaraPerfBaselineActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UNiagaraBaselineController*)               Controller                                                  OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UTextRenderComponent*)                     Label                                                       OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraPrecompileContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<UNiagaraScript*>)                   Scripts                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UNiagaraSystem*)                           System                                                      OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewBase
/// Size: 0x0000 (0x000290 - 0x000290)
class ANiagaraPreviewBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
};

/// Class /Script/Niagara.NiagaraPreviewAxis
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraPreviewAxis : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamBase
/// Size: 0x0008 (0x000028 - 0x000030)
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Param                                                       OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0008 (0x000030 - 0x000038)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   min                                                         OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   max                                                         OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0008 (0x000030 - 0x000038)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     min                                                         OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     max                                                         OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0020 (0x000030 - 0x000050)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector2D)                                 min                                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FVector2D)                                 max                                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0030 (0x000030 - 0x000060)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   min                                                         OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   max                                                         OFFSET(get<T>, {0x48, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0040 (0x000030 - 0x000070)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector4)                                  min                                                         OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FVector4)                                  max                                                         OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0020 (0x000030 - 0x000050)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FLinearColor)                              min                                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              max                                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ANiagaraPreviewGrid : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UNiagaraSystem*)                           System                                                      OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(ENiagaraPreviewGridResetMode)              ResetMode                                                   OFFSET(get<T>, {0x298, 1, 0, 0})
	CMember(UNiagaraPreviewAxis*)                      PreviewAxisX                                                OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UNiagaraPreviewAxis*)                      PreviewAxisY                                                OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UClass*)                                   PreviewClass                                                OFFSET(get<T>, {0x2B0, 8, 0, 0})
	DMember(float)                                     SpacingX                                                    OFFSET(get<float>, {0x2B8, 4, 0, 0})
	DMember(float)                                     SpacingY                                                    OFFSET(get<float>, {0x2BC, 4, 0, 0})
	DMember(int32_t)                                   NumX                                                        OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	DMember(int32_t)                                   NumY                                                        OFFSET(get<int32_t>, {0x2C4, 4, 0, 0})
	CMember(TArray<UChildActorComponent*>)             PreviewComponents                                           OFFSET(get<T>, {0x2C8, 16, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraPreviewGrid.SetPaused
	// void SetPaused(bool bPaused);                                                                                            // [0x683dcd8] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews
	// void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);                                                               // [0x683a330] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews
	// void DeactivatePreviews();                                                                                               // [0x6838868] Final|Native|Public|BlueprintCallable 
	// Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews
	// void ActivatePreviews(bool bReset);                                                                                      // [0x683808c] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x0530 (0x0000B0 - 0x0005E0)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    OFFSET(get<T>, {0xB8, 24, 0, 0})
	SMember(FNiagaraRibbonUVSettings)                  UV0Settings                                                 OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FNiagaraRibbonUVSettings)                  UV1Settings                                                 OFFSET(get<T>, {0xF8, 40, 0, 0})
	CMember(ENiagaraRibbonFacingMode)                  FacingMode                                                  OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(int32_t)                                   MaxNumRibbons                                               OFFSET(get<int32_t>, {0x124, 4, 0, 0})
	CMember(ENiagaraRibbonDrawDirection)               DrawDirection                                               OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(ENiagaraRibbonShapeMode)                   Shape                                                       OFFSET(get<T>, {0x129, 1, 0, 0})
	DMember(bool)                                      bEnableAccurateGeometry                                     OFFSET(get<bool>, {0x12A, 1, 1, 0})
	DMember(bool)                                      bUseMaterialBackfaceCulling                                 OFFSET(get<bool>, {0x12A, 1, 1, 1})
	DMember(bool)                                      bUseGPUInit                                                 OFFSET(get<bool>, {0x12A, 1, 1, 2})
	DMember(bool)                                      bUseConstantFactor                                          OFFSET(get<bool>, {0x12A, 1, 1, 3})
	DMember(bool)                                      bScreenSpaceTessellation                                    OFFSET(get<bool>, {0x12A, 1, 1, 4})
	DMember(bool)                                      bLinkOrderUseUniqueID                                       OFFSET(get<bool>, {0x12A, 1, 1, 5})
	DMember(int32_t)                                   WidthSegmentationCount                                      OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	DMember(int32_t)                                   MultiPlaneCount                                             OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	DMember(int32_t)                                   TubeSubdivisions                                            OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	CMember(TArray<FNiagaraRibbonShapeCustomVertex>)   CustomVertices                                              OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(ENiagaraRibbonTessellationMode)            TessellationMode                                            OFFSET(get<T>, {0x148, 1, 0, 0})
	DMember(float)                                     CurveTension                                                OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(int32_t)                                   TessellationFactor                                          OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(float)                                     TessellationAngle                                           OFFSET(get<float>, {0x154, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(get<T>, {0x158, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(get<T>, {0x180, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             OFFSET(get<T>, {0x1A8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        OFFSET(get<T>, {0x1D0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonTwistBinding                                          OFFSET(get<T>, {0x1F8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonWidthBinding                                          OFFSET(get<T>, {0x220, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonFacingBinding                                         OFFSET(get<T>, {0x248, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonIdBinding                                             OFFSET(get<T>, {0x270, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonLinkOrderBinding                                      OFFSET(get<T>, {0x298, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       OFFSET(get<T>, {0x2C0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      OFFSET(get<T>, {0x2E8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     OFFSET(get<T>, {0x310, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     OFFSET(get<T>, {0x338, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     OFFSET(get<T>, {0x360, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonUVDistance                                            OFFSET(get<T>, {0x388, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          U0OverrideBinding                                           OFFSET(get<T>, {0x3B0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          V0RangeOverrideBinding                                      OFFSET(get<T>, {0x3D8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          U1OverrideBinding                                           OFFSET(get<T>, {0x400, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          V1RangeOverrideBinding                                      OFFSET(get<T>, {0x428, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          OFFSET(get<T>, {0x450, 80, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPositionBinding                                         OFFSET(get<T>, {0x4A0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevRibbonWidthBinding                                      OFFSET(get<T>, {0x4C8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevRibbonFacingBinding                                     OFFSET(get<T>, {0x4F0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevRibbonTwistBinding                                      OFFSET(get<T>, {0x518, 40, 0, 0})
	DMember(uint32_t)                                  MaterialParamValidMask                                      OFFSET(get<uint32_t>, {0x540, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraScratchPadContainer
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraScratchPadContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraScript
/// Size: 0x03B8 (0x000028 - 0x0003E0)
class UNiagaraScript : public UNiagaraScriptBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	CMember(ENiagaraScriptUsage)                       Usage                                                       OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FGuid)                                     UsageId                                                     OFFSET(get<T>, {0x34, 16, 0, 0})
	SMember(FNiagaraParameterStore)                    RapidIterationParameters                                    OFFSET(get<T>, {0x48, 136, 0, 0})
	SMember(FNiagaraScriptExecutionParameterStore)     ScriptExecutionParamStore                                   OFFSET(get<T>, {0xD0, 168, 0, 0})
	CMember(TArray<FNiagaraBoundParameter>)            ScriptExecutionBoundParameters                              OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FNiagaraVMExecutableDataId)                CachedScriptVMId                                            OFFSET(get<T>, {0x188, 88, 0, 0})
	SMember(FNiagaraVMExecutableData)                  CachedScriptVM                                              OFFSET(get<T>, {0x1F8, 416, 0, 0})
	CMember(TArray<UNiagaraParameterCollection*>)      CachedParameterCollectionReferences                         OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(TArray<FNiagaraScriptResolvedDataInterfaceInfo>) ResolvedDataInterfaces                                OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(TArray<FNiagaraResolvedUserDataInterfaceBinding>) ResolvedUserDataInterfaceBindings                    OFFSET(get<T>, {0x3B8, 16, 0, 0})
	CMember(TArray<FNiagaraResolvedUObjectInfo>)       ResolvedUObjectInfos                                        OFFSET(get<T>, {0x3C8, 16, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraScript.RaiseOnGPUCompilationComplete
	// void RaiseOnGPUCompilationComplete();                                                                                    // [0x2d79908] Final|Native|Public  
};

/// Class /Script/Niagara.NiagaraSimCache
/// Size: 0x01C0 (0x000028 - 0x0001E8)
class UNiagaraSimCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FGuid)                                     CacheGuid                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           SoftNiagaraSystem                                           OFFSET(get<T>, {0x38, 32, 0, 0})
	DMember(float)                                     StartSeconds                                                OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     DurationSeconds                                             OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FNiagaraSimCacheCreateParameters)          CreateParameters                                            OFFSET(get<T>, {0x60, 88, 0, 0})
	DMember(bool)                                      bNeedsReadComponentMappingRecache                           OFFSET(get<bool>, {0xB8, 1, 0, 0})
	SMember(FNiagaraSimCacheLayout)                    CacheLayout                                                 OFFSET(get<T>, {0xC0, 192, 0, 0})
	CMember(TArray<FNiagaraSimCacheFrame>)             CacheFrames                                                 OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(TMap<FNiagaraVariableBase, UObject*>)      DataInterfaceStorage                                        OFFSET(get<T>, {0x190, 80, 0, 0})


	/// Functions
	// Function /Script/Niagara.NiagaraSimCache.ReadVectorAttribute
	// void ReadVectorAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);        // [0x6858cdc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadVector4Attribute
	// void ReadVector4Attribute(TArray<FVector4>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);      // [0x6858a40] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadVector2Attribute
	// void ReadVector2Attribute(TArray<FVector2D>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);     // [0x6858670] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadQuatAttributeWithRebase
	// void ReadQuatAttributeWithRebase(TArray<FQuat>& OutValues, FQuat Quat, FName AttributeName, FName EmitterName, int32_t FrameIndex); // [0x6858184] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadQuatAttribute
	// void ReadQuatAttribute(TArray<FQuat>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // [0x6857c9c] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadPositionAttributeWithRebase
	// void ReadPositionAttributeWithRebase(TArray<FVector>& OutValues, FTransform Transform, FName AttributeName, FName EmitterName, int32_t FrameIndex); // [0x6857710] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadPositionAttribute
	// void ReadPositionAttribute(TArray<FVector>& OutValues, FName AttributeName, FName EmitterName, bool bLocalSpaceToWorld, int32_t FrameIndex); // [0x68573cc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadIntAttribute
	// void ReadIntAttribute(TArray<int32_t>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);           // [0x6856ffc] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadIDAttribute
	// void ReadIDAttribute(TArray<FNiagaraID>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);         // [0x6856600] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadFloatAttribute
	// void ReadFloatAttribute(TArray<float>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);           // [0x6856230] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.ReadColorAttribute
	// void ReadColorAttribute(TArray<FLinearColor>& OutValues, FName AttributeName, FName EmitterName, int32_t FrameIndex);    // [0x6855e60] Final|RequiredAPI|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.IsEmpty
	// bool IsEmpty();                                                                                                          // [0x6855e48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.IsCacheValid
	// bool IsCacheValid();                                                                                                     // [0x6855e30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetStartSeconds
	// float GetStartSeconds();                                                                                                 // [0x5c34634] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetNumFrames
	// int32_t GetNumFrames();                                                                                                  // [0x58cb67c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetNumEmitters
	// int32_t GetNumEmitters();                                                                                                // [0x58f3444] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetEmitterNames
	// TArray<FName> GetEmitterNames();                                                                                         // [0x6855df0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetEmitterName
	// FName GetEmitterName(int32_t EmitterIndex);                                                                              // [0x6855d48] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Niagara.NiagaraSimCache.GetAttributeCaptureMode
	// ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode();                                                          // [0x641109c] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Niagara.AsyncNiagaraCaptureSimCache
/// Size: 0x0100 (0x000030 - 0x000130)
class UAsyncNiagaraCaptureSimCache : public UCancellableAsyncAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(UNiagaraSimCache*)                         CaptureSimCache                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UNiagaraComponent*)                        CaptureComponent                                            OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  CaptureComplete                                             OFFSET(get<T>, {0x40, 16, 0, 0})


	/// Functions
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature
	// void OnCaptureComplete__DelegateSignature(bool bSuccess);                                                                // [0x1ebf994] MulticastDelegate|Public|Delegate 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete
	// UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache*& OutSimCache, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x6855580] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame
	// UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, UNiagaraSimCache*& OutSimCache, int32_t NumFrames, int32_t CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime); // [0x6854da0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCache
	// UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCache(UNiagaraSimCache* SimCache, FNiagaraSimCacheCreateParameters CreateParameters, UNiagaraComponent* NiagaraComponent, FNiagaraSimCacheCaptureParameters CaptureParameters, UNiagaraSimCache*& OutSimCache); // [0x685432c] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Niagara.NiagaraSimCacheFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraSimulationStageBase
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(UNiagaraScript*)                           Script                                                      OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     SimulationStageName                                         OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x34, 1, 1, 0})
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x0140 (0x000038 - 0x000178)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FNiagaraVariableAttributeBinding)          EnabledBinding                                              OFFSET(get<T>, {0x38, 40, 0, 0})
	CMember(ENiagaraIterationSource)                   IterationSource                                             OFFSET(get<T>, {0x60, 1, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         NumIterations                                               OFFSET(get<T>, {0x68, 24, 0, 0})
	CMember(ENiagaraSimStageExecuteBehavior)           ExecuteBehavior                                             OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(bool)                                      bDisablePartialParticleUpdate                               OFFSET(get<bool>, {0x84, 1, 1, 0})
	SMember(FNiagaraVariableDataInterfaceBinding)      DataInterface                                               OFFSET(get<T>, {0x88, 24, 0, 0})
	DMember(bool)                                      bParticleIterationStateEnabled                              OFFSET(get<bool>, {0xA0, 1, 1, 0})
	SMember(FNiagaraVariableAttributeBinding)          ParticleIterationStateBinding                               OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FIntPoint)                                 ParticleIterationStateRange                                 OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bGpuDispatchForceLinear                                     OFFSET(get<bool>, {0xD8, 1, 1, 0})
	DMember(bool)                                      bOverrideGpuDispatchNumThreads                              OFFSET(get<bool>, {0xD8, 1, 1, 1})
	SMember(FNiagaraParameterBindingWithValue)         OverrideGpuDispatchNumThreadsX                              OFFSET(get<T>, {0xE0, 24, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         OverrideGpuDispatchNumThreadsY                              OFFSET(get<T>, {0xF8, 24, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         OverrideGpuDispatchNumThreadsZ                              OFFSET(get<T>, {0x110, 24, 0, 0})
	CMember(ENiagaraGpuDispatchType)                   DirectDispatchType                                          OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(ENiagaraDirectDispatchElementType)         DirectDispatchElementType                                   OFFSET(get<T>, {0x129, 1, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         ElementCountX                                               OFFSET(get<T>, {0x130, 24, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         ElementCountY                                               OFFSET(get<T>, {0x148, 24, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         ElementCountZ                                               OFFSET(get<T>, {0x160, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x0558 (0x0000B0 - 0x000608)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    OFFSET(get<T>, {0xB8, 24, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  OFFSET(get<T>, {0xD0, 1, 0, 0})
	CMember(ENiagaraSpriteAlignment)                   Alignment                                                   OFFSET(get<T>, {0xD1, 1, 0, 0})
	CMember(ENiagaraSpriteFacingMode)                  FacingMode                                                  OFFSET(get<T>, {0xD2, 1, 0, 0})
	CMember(ENiagaraSortMode)                          SortMode                                                    OFFSET(get<T>, {0xD3, 1, 0, 0})
	DMember(float)                                     MacroUVRadius                                               OFFSET(get<float>, {0xD4, 4, 0, 0})
	SMember(FVector2D)                                 PivotInUVSpace                                              OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FVector2D)                                 SubImageSize                                                OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      bSubImageBlend                                              OFFSET(get<bool>, {0xF8, 1, 1, 0})
	DMember(bool)                                      bRemoveHMDRollInVR                                          OFFSET(get<bool>, {0xF8, 1, 1, 1})
	DMember(bool)                                      bSortOnlyWhenTranslucent                                    OFFSET(get<bool>, {0xF8, 1, 1, 2})
	DMember(bool)                                      bEnableCameraDistanceCulling                                OFFSET(get<bool>, {0xF8, 1, 1, 3})
	CMember(ENiagaraRendererSortPrecision)             SortPrecision                                               OFFSET(get<T>, {0xF9, 1, 0, 0})
	CMember(ENiagaraRendererGpuTranslucentLatency)     GpuTranslucentLatency                                       OFFSET(get<T>, {0xFA, 1, 0, 0})
	CMember(ENiagaraRendererPixelCoverageMode)         PixelCoverageMode                                           OFFSET(get<T>, {0xFB, 1, 0, 0})
	DMember(float)                                     PixelCoverageBlend                                          OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     MinFacingCameraBlendDistance                                OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     MaxFacingCameraBlendDistance                                OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     MinCameraDistance                                           OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     MaxCameraDistance                                           OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(uint32_t)                                  RendererVisibility                                          OFFSET(get<uint32_t>, {0x110, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteRotationBinding                                       OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteSizeBinding                                           OFFSET(get<T>, {0x1B8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteFacingBinding                                         OFFSET(get<T>, {0x1E0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteAlignmentBinding                                      OFFSET(get<T>, {0x208, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SubImageIndexBinding                                        OFFSET(get<T>, {0x230, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      OFFSET(get<T>, {0x258, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     OFFSET(get<T>, {0x280, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     OFFSET(get<T>, {0x2A8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     OFFSET(get<T>, {0x2D0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CameraOffsetBinding                                         OFFSET(get<T>, {0x2F8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          UVScaleBinding                                              OFFSET(get<T>, {0x320, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PivotOffsetBinding                                          OFFSET(get<T>, {0x348, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       OFFSET(get<T>, {0x370, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CustomSortingBinding                                        OFFSET(get<T>, {0x398, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        OFFSET(get<T>, {0x3C0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(get<T>, {0x3E8, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          OFFSET(get<T>, {0x410, 80, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPositionBinding                                         OFFSET(get<T>, {0x460, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevVelocityBinding                                         OFFSET(get<T>, {0x488, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteRotationBinding                                   OFFSET(get<T>, {0x4B0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteSizeBinding                                       OFFSET(get<T>, {0x4D8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteFacingBinding                                     OFFSET(get<T>, {0x500, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteAlignmentBinding                                  OFFSET(get<T>, {0x528, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevCameraOffsetBinding                                     OFFSET(get<T>, {0x550, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPivotOffsetBinding                                      OFFSET(get<T>, {0x578, 40, 0, 0})
	DMember(uint32_t)                                  MaterialParamValidMask                                      OFFSET(get<uint32_t>, {0x5A0, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x04C0 (0x000048 - 0x000508)
class UNiagaraSystem : public UFXSystemAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1288;

public:
	DMember(bool)                                      bSupportLargeWorldCoordinates                               OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bOverrideCastShadow                                         OFFSET(get<bool>, {0x48, 1, 1, 1})
	DMember(bool)                                      bOverrideReceivesDecals                                     OFFSET(get<bool>, {0x48, 1, 1, 2})
	DMember(bool)                                      bOverrideRenderCustomDepth                                  OFFSET(get<bool>, {0x48, 1, 1, 3})
	DMember(bool)                                      bOverrideCustomDepthStencilValue                            OFFSET(get<bool>, {0x48, 1, 1, 4})
	DMember(bool)                                      bOverrideCustomDepthStencilWriteMask                        OFFSET(get<bool>, {0x48, 1, 1, 5})
	DMember(bool)                                      bOverrideTranslucencySortPriority                           OFFSET(get<bool>, {0x48, 1, 1, 6})
	DMember(bool)                                      bOverrideTranslucencySortDistanceOffset                     OFFSET(get<bool>, {0x48, 1, 1, 7})
	DMember(bool)                                      bCastShadow                                                 OFFSET(get<bool>, {0x49, 1, 1, 0})
	DMember(bool)                                      bReceivesDecals                                             OFFSET(get<bool>, {0x49, 1, 1, 1})
	DMember(bool)                                      bRenderCustomDepth                                          OFFSET(get<bool>, {0x49, 1, 1, 2})
	DMember(bool)                                      bDisableExperimentalVM                                      OFFSET(get<bool>, {0x49, 1, 1, 3})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 OFFSET(get<T>, {0x4A, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   TranslucencySortPriority                                    OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(float)                                     TranslucencySortDistanceOffset                              OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bDumpDebugSystemInfo                                        OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bDumpDebugEmitterInfo                                       OFFSET(get<bool>, {0x59, 1, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    OFFSET(get<bool>, {0x5B, 1, 0, 0})
	DMember(bool)                                      bFixedBounds                                                OFFSET(get<bool>, {0x5C, 1, 1, 0})
	CMember(UNiagaraEffectType*)                       EffectType                                                  OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bOverrideScalabilitySettings                                OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bOverrideAllowCullingForLocalPlayers                        OFFSET(get<bool>, {0x6C, 1, 1, 0})
	DMember(bool)                                      bAllowCullingForLocalPlayersOverride                        OFFSET(get<bool>, {0x6C, 1, 1, 1})
	SMember(FNiagaraSystemScalabilityOverrides)        SystemScalabilityOverrides                                  OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(get<T>, {0x80, 48, 0, 0})
	CMember(TArray<FNiagaraEmitterHandle>)             EmitterHandles                                              OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<UNiagaraParameterCollectionInstance*>) ParameterCollectionOverrides                             OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(UNiagaraScript*)                           SystemSpawnScript                                           OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UNiagaraScript*)                           SystemUpdateScript                                          OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FNiagaraSystemCompiledData)                SystemCompiledData                                          OFFSET(get<T>, {0xF0, 552, 0, 0})
	SMember(FNiagaraUserRedirectionParameterStore)     ExposedParameters                                           OFFSET(get<T>, {0x318, 216, 0, 0})
	SMember(FBox)                                      FixedBounds                                                 OFFSET(get<T>, {0x3F0, 56, 0, 0})
	DMember(bool)                                      bAutoDeactivate                                             OFFSET(get<bool>, {0x428, 1, 0, 0})
	DMember(bool)                                      bDeterminism                                                OFFSET(get<bool>, {0x429, 1, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x42C, 4, 0, 0})
	DMember(float)                                     WarmupTime                                                  OFFSET(get<float>, {0x430, 4, 0, 0})
	DMember(int32_t)                                   WarmupTickCount                                             OFFSET(get<int32_t>, {0x434, 4, 0, 0})
	DMember(float)                                     WarmupTickDelta                                             OFFSET(get<float>, {0x438, 4, 0, 0})
	DMember(bool)                                      bFixedTickDelta                                             OFFSET(get<bool>, {0x43C, 1, 0, 0})
	DMember(float)                                     FixedTickDeltaTime                                          OFFSET(get<float>, {0x440, 4, 0, 0})
	DMember(bool)                                      bNeedsGPUContextInitForDataInterfaces                       OFFSET(get<bool>, {0x444, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraValidationRule
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraValidationRule : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Niagara.NiagaraVolumeRendererProperties
/// Size: 0x0190 (0x0000B0 - 0x000240)
class UNiagaraVolumeRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FNiagaraParameterBinding)                  MaterialParameterBinding                                    OFFSET(get<T>, {0xB8, 8, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     StepFactor                                                  OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     LightingDownsampleFactor                                    OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     ShadowStepFactor                                            OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     ShadowBiasFactor                                            OFFSET(get<float>, {0xD4, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                OFFSET(get<T>, {0x150, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VolumeResolutionMaxAxisBinding                              OFFSET(get<T>, {0x178, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VolumeWorldSpaceSizeBinding                                 OFFSET(get<T>, {0x1A0, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          OFFSET(get<T>, {0x1C8, 80, 0, 0})
};

/// Class /Script/Niagara.VolumeCache
/// Size: 0x0038 (0x000028 - 0x000060)
class UVolumeCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   FilePath                                                    OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(EVolumeCacheType)                          CacheType                                                   OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FIntVector)                                Resolution                                                  OFFSET(get<T>, {0x3C, 12, 0, 0})
	DMember(int32_t)                                   FrameRangeStart                                             OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   FrameRangeEnd                                               OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheCaptureParameters
/// Size: 0x001C (0x000000 - 0x00001C)
class FNiagaraSimCacheCaptureParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      bAppendToSimCache                                           OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bCaptureFixedNumberOfFrames                                 OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(int32_t)                                   NumFrames                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   CaptureRate                                                 OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bUseTimeout                                                 OFFSET(get<bool>, {0xC, 1, 1, 0})
	DMember(int32_t)                                   TimeoutFrameCount                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bCaptureAllFramesImmediatly                                 OFFSET(get<bool>, {0x14, 1, 1, 0})
	DMember(float)                                     ImmediateCaptureDeltaTime                                   OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheCreateParameters
/// Size: 0x0058 (0x000000 - 0x000058)
class FNiagaraSimCacheCreateParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(ENiagaraSimCacheAttributeCaptureMode)      AttributeCaptureMode                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAllowRebasing                                              OFFSET(get<bool>, {0x4, 1, 1, 0})
	DMember(bool)                                      bAllowDataInterfaceCaching                                  OFFSET(get<bool>, {0x4, 1, 1, 1})
	DMember(bool)                                      bAllowInterpolation                                         OFFSET(get<bool>, {0x4, 1, 1, 2})
	DMember(bool)                                      bAllowVelocityExtrapolation                                 OFFSET(get<bool>, {0x4, 1, 1, 3})
	CMember(TArray<FName>)                             RebaseIncludeAttributes                                     OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FName>)                             RebaseExcludeAttributes                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FName>)                             InterpolationIncludeAttributes                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FName>)                             InterpolationExcludeAttributes                              OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FName>)                             ExplicitCaptureAttributes                                   OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Niagara.NDIRenderTargetVolumeSimCacheFrame
/// Size: 0x0048 (0x000000 - 0x000048)
class FNDIRenderTargetVolumeSimCacheFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FIntVector)                                Size                                                        OFFSET(get<T>, {0x0, 12, 0, 0})
	CMember(TEnumAsByte<EPixelFormat>)                 Format                                                      OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   UncompressedSize                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   CompressedSize                                              OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraDataSetID : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraDataSetType)                       Type                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDataSetProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FNiagaraDataSetID)                         ID                                                          OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              Variables                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraVariableBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FNiagaraTypeDefinitionHandle)              TypeDefHandle                                               OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraTypeDefinitionHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   RegisteredTypeIndex                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraScriptDataUsageInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bReadsAttributeData                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x0090 (0x000000 - 0x000090)
class FNiagaraFunctionSignature : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Inputs                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Outputs                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     OwnerName                                                   OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(bool)                                      bRequiresContext                                            OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(bool)                                      bRequiresExecPin                                            OFFSET(get<bool>, {0x2C, 1, 1, 1})
	DMember(bool)                                      bMemberFunction                                             OFFSET(get<bool>, {0x2C, 1, 1, 2})
	DMember(bool)                                      bExperimental                                               OFFSET(get<bool>, {0x2C, 1, 1, 3})
	DMember(bool)                                      bSupportsCPU                                                OFFSET(get<bool>, {0x2C, 1, 1, 4})
	DMember(bool)                                      bSupportsGPU                                                OFFSET(get<bool>, {0x2C, 1, 1, 5})
	DMember(bool)                                      bWriteFunction                                              OFFSET(get<bool>, {0x2C, 1, 1, 6})
	DMember(bool)                                      bReadFunction                                               OFFSET(get<bool>, {0x2C, 1, 1, 7})
	DMember(bool)                                      bSoftDeprecatedFunction                                     OFFSET(get<bool>, {0x2D, 1, 1, 0})
	DMember(bool)                                      bIsCompileTagGenerator                                      OFFSET(get<bool>, {0x2D, 1, 1, 1})
	DMember(bool)                                      bHidden                                                     OFFSET(get<bool>, {0x2D, 1, 1, 2})
	DMember(int32_t)                                   ModuleUsageBitmask                                          OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(uint16_t)                                  MiscUsageBitMask                                            OFFSET(get<uint16_t>, {0x34, 2, 0, 0})
	DMember(int32_t)                                   ContextStageIndex                                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int16_t)                                   RequiredInputs                                              OFFSET(get<int16_t>, {0x3C, 2, 0, 0})
	DMember(int16_t)                                   RequiredOutputs                                             OFFSET(get<int16_t>, {0x3E, 2, 0, 0})
	CMember(TMap<FName, FName>)                        FunctionSpecifiers                                          OFFSET(get<T>, {0x40, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0010 (0x000008 - 0x000018)
class FNiagaraVariable : public FNiagaraVariableBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<char>)                              VarData                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptUObjectCompileInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraScriptUObjectCompileInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FNiagaraVariableBase)                      Variable                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UObject*)                                  Object                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FSoftObjectPath)                           ObjectPath                                                  OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(TArray<FName>)                             RegisteredParameterMapWrites                                OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraResolvedUObjectInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraResolvedUObjectInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     ReadVariableName                                            OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FNiagaraVariableBase)                      ResolvedVariable                                            OFFSET(get<T>, {0x4, 8, 0, 0})
	CMember(UObject*)                                  Object                                                      OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraExternalUObjectInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraExternalUObjectInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FNiagaraVariableBase)                      Variable                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ExternalName                                                OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraScriptDataInterfaceInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UNiagaraDataInterface*)                    DataInterface                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     CompileName                                                 OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    Type                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     RegisteredParameterMapWrite                                 OFFSET(get<T>, {0x2C, 4, 0, 0})
	SMember(FString)                                   SourceEmitterName                                           OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraTypeDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UObject*)                                  ClassStructOrEnum                                           OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  UnderlyingType                                              OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(char)                                      Flags                                                       OFFSET(get<char>, {0xA, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraResolvedUserDataInterfaceBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraResolvedUserDataInterfaceBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Niagara.NiagaraScriptResolvedDataInterfaceInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraScriptResolvedDataInterfaceInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     CompileName                                                 OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FString)                                   ResolvedSourceEmitterName                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FNiagaraVariableBase)                      ResolvedVariable                                            OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FNiagaraVariableBase)                      ParameterStoreVariable                                      OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      bIsInternal                                                 OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(UNiagaraDataInterface*)                    ResolvedDataInterface                                       OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraScriptDataInterfaceCompileInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    Type                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     RegisteredParameterMapWrite                                 OFFSET(get<T>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bIsPlaceholder                                              OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FString)                                   SourceEmitterName                                           OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraStatScope : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     FullName                                                    OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     FriendlyName                                                OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0008 (0x000000 - 0x000008)
class FVMFunctionSpecifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Key                                                         OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Value                                                       OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FVMExternalFunctionBindingInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     OwnerName                                                   OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(TArray<bool>)                              InputParamLocations                                         OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   NumOutputs                                                  OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TArray<FVMFunctionSpecifier>)              FunctionSpecifiers                                          OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              VariadicInputs                                              OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              VariadicOutputs                                             OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0078 (0x000000 - 0x000078)
class FNiagaraSystemUpdateContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<UNiagaraComponent*>)                ComponentsToReset                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<UNiagaraComponent*>)                ComponentsToReInit                                          OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<UNiagaraComponent*>)                ComponentsToNotifySimDestroy                                OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<UNiagaraSystem*>)                   SystemSimsToDestroy                                         OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UNiagaraSystem*>)                   SystemSimsToRecache                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraVariableInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FNiagaraVariable)                          Variable                                                    OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Definition                                                  OFFSET(get<T>, {0x18, 24, 0, 0})
	CMember(UNiagaraDataInterface*)                    DataInterface                                               OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraVariableAttributeBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FNiagaraVariable)                          RootVariable                                                OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FNiagaraVariableBase)                      ParamMapVariable                                            OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     DataSetName                                                 OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(TEnumAsByte<ENiagaraBindingSource>)        BindingSourceMode                                           OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(bool)                                      bBindingExistsOnSource                                      OFFSET(get<bool>, {0x25, 1, 1, 0})
	DMember(bool)                                      bIsCachedParticleValue                                      OFFSET(get<bool>, {0x25, 1, 1, 1})
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x001C (0x000000 - 0x00001C)
class FNiagaraMaterialAttributeBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     MaterialParameterName                                       OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FNiagaraVariableBase)                      NiagaraVariable                                             OFFSET(get<T>, {0x4, 8, 0, 0})
	SMember(FNiagaraVariableBase)                      ResolvedNiagaraVariable                                     OFFSET(get<T>, {0xC, 8, 0, 0})
	SMember(FNiagaraVariableBase)                      NiagaraChildVariable                                        OFFSET(get<T>, {0x14, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraVariableDataInterfaceBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FNiagaraVariable)                          BoundVariable                                               OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraScriptVariableBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraUserParameterBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCompileDependency
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraCompileDependency : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   LinkerErrorMessage                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     NodeGUID                                                    OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGuid)                                     PinGuid                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FGuid>)                             StackGuids                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FNiagaraVariableBase)                      DependentVariable                                           OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bDependentVariableFromCustomIterationNamespace              OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptAsyncCompileData
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FNiagaraScriptAsyncCompileData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FNiagaraVariable>)                  RapidIterationParameters                                    OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TMap<FName, UNiagaraDataInterface*>)       NamedDataInterfaces                                         OFFSET(get<T>, {0xA8, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemAsyncCompileResults
/// Size: 0x0088 (0x000000 - 0x000088)
class FNiagaraSystemAsyncCompileResults : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<UObject*>)                          RootObjects                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  ExposedVariables                                            OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraCompileHashVisitorDebugInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Object                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           PropertyKeys                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           PropertyValues                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataChannelSearchParameters
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDataChannelSearchParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(USceneComponent*)                          OwningComponent                                             OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataChannelGameDataLayout
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraDataChannelGameDataLayout : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TMap<FNiagaraVariableBase, int32_t>)       VariableIndices                                             OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FNiagaraLwcStructConverter>)        LwcConverters                                               OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraLwcStructConverter
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraLwcStructConverter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   LWCSize                                                     OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SWCSize                                                     OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FNiagaraStructConversionStep>)      ConversionSteps                                             OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraStructConversionStep
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraStructConversionStep : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   LWCBytes                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   LWCOffset                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SimulationBytes                                             OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SimulationOffset                                            OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(ENiagaraStructConversionType)              ConversionType                                              OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/Niagara.NDCIsland
/// Size: 0x0070 (0x000000 - 0x000070)
class FNDCIsland : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UNiagaraDataChannelHandler_Islands*)       Owner                                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FBoxSphereBounds)                          Bounds                                                      OFFSET(get<T>, {0x8, 56, 0, 0})
	CMember(TArray<UNiagaraComponent*>)                NiagaraSystems                                              OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NDCIslandDebugDrawSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FNDCIslandDebugDrawSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bShowIslandBounds                                           OFFSET(get<bool>, {0x0, 1, 1, 1})
};

/// Struct /Script/Niagara.NDIDataChannelFunctionInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FNDIDataChannelFunctionInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     FunctionName                                                OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              Inputs                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              Outputs                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NDIDataChannel_GPUScriptParameterAccessInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FNDIDataChannel_GPUScriptParameterAccessInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraVariableBase>)              SortedParameters                                            OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NDIDataChannelCompiledData
/// Size: 0x0068 (0x000000 - 0x000068)
class FNDIDataChannelCompiledData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FNDIDataChannelFunctionInfo>)       FunctionInfo                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FNiagaraCompileHash, FNDIDataChannel_GPUScriptParameterAccessInfo>) GPUScriptParameterInfos       OFFSET(get<T>, {0x10, 80, 0, 0})
	DMember(uint32_t)                                  TotalParams                                                 OFFSET(get<uint32_t>, {0x60, 4, 0, 0})
	DMember(bool)                                      bUsedByCPU                                                  OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(bool)                                      bUsedByGPU                                                  OFFSET(get<bool>, {0x65, 1, 0, 0})
};

/// Struct /Script/Niagara.NDIDataChannelWriteCompiledData
/// Size: 0x0040 (0x000068 - 0x0000A8)
class FNDIDataChannelWriteCompiledData : public FNDIDataChannelCompiledData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FNiagaraDataSetCompiledData)               DataLayout                                                  OFFSET(get<T>, {0x68, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraDataSetCompiledData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FNiagaraVariableBase>)              Variables                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraVariableLayoutInfo>)        VariableLayouts                                             OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FNiagaraDataSetID)                         ID                                                          OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(uint32_t)                                  TotalFloatComponents                                        OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	DMember(uint32_t)                                  TotalInt32Components                                        OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  TotalHalfComponents                                         OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x34, 1, 1, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraVariableLayoutInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint16_t)                                  FloatComponentStart                                         OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Int32ComponentStart                                         OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  HalfComponentStart                                          OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	SMember(FNiagaraTypeLayoutInfo)                    LayoutInfo                                                  OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraTypeLayoutInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint16_t)                                  NumFloatComponents                                          OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  NumInt32Components                                          OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  NumHalfComponents                                           OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	CMember(TArray<uint32_t>)                          ComponentsOffsets                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMessageStore
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraMessageStore : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraParameterBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraParameterBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FNiagaraVariableBase)                      ResolvedParameter                                           OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterBindingWithValue
/// Size: 0x0010 (0x000008 - 0x000018)
class FNiagaraParameterBindingWithValue : public FNiagaraParameterBinding
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<char>)                              DefaultValue                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScalabilityState
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraScalabilityState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Significance                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LastVisibleTime                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bNewlyRegistered                                            OFFSET(get<bool>, {0xA, 1, 1, 0})
	DMember(bool)                                      bNewlyRegisteredDirty                                       OFFSET(get<bool>, {0xA, 1, 1, 1})
	DMember(bool)                                      bCulled                                                     OFFSET(get<bool>, {0xA, 1, 1, 2})
	DMember(bool)                                      bPreviousCulled                                             OFFSET(get<bool>, {0xA, 1, 1, 3})
	DMember(bool)                                      bCulledByDistance                                           OFFSET(get<bool>, {0xA, 1, 1, 4})
	DMember(bool)                                      bCulledByInstanceCount                                      OFFSET(get<bool>, {0xA, 1, 1, 5})
	DMember(bool)                                      bCulledByVisibility                                         OFFSET(get<bool>, {0xA, 1, 1, 6})
	DMember(bool)                                      bCulledByGlobalBudget                                       OFFSET(get<bool>, {0xA, 1, 1, 7})
};

/// Struct /Script/Niagara.NiagaraStackSection
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraStackSection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     SectionIdentifier                                           OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     SectionDisplayName                                          OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(TArray<FText>)                             Categories                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FText)                                     ToolTip                                                     OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDynamicMeshSection
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraDynamicMeshSection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NumTriangles                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaterialIndex                                               OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDynamicMeshMaterial
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDynamicMeshMaterial : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UMaterialInterface*)                       Material                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (0x000000 - 0x000010)
class FNDIStaticMeshSectionFilter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           AllowedMaterialSlots                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraUObjectPropertyReaderRemap
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraUObjectPropertyReaderRemap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     GraphName                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     RemapName                                                   OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackTemplate
/// Size: 0x0000 (0x000020 - 0x000020)
class FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
};

/// Struct /Script/Niagara.MovieSceneNiagaraSystemTrackImplementation
/// Size: 0x0018 (0x000010 - 0x000028)
class FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FFrameNumber)                              SpawnSectionStartFrame                                      OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FFrameNumber)                              SpawnSectionEndFrame                                        OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionStartBehavior)   SpawnSectionStartBehavior                                   OFFSET(get<T>, {0x18, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEvaluateBehavior) SpawnSectionEvaluateBehavior                               OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEndBehavior)     SpawnSectionEndBehavior                                     OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(ENiagaraAgeUpdateMode)                     AgeUpdateMode                                               OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(bool)                                      bAllowScalability                                           OFFSET(get<bool>, {0x25, 1, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0018 (0x000020 - 0x000038)
class FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x0100 (0x000038 - 0x000138)
class FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMovieSceneBoolChannel)                    BoolChannel                                                 OFFSET(get<T>, {0x38, 256, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x0440 (0x000038 - 0x000478)
class FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FMovieSceneFloatChannel)                   RedChannel                                                  OFFSET(get<T>, {0x38, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   GreenChannel                                                OFFSET(get<T>, {0x148, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   BlueChannel                                                 OFFSET(get<T>, {0x258, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   AlphaChannel                                                OFFSET(get<T>, {0x368, 272, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x0110 (0x000038 - 0x000148)
class FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FMovieSceneFloatChannel)                   FloatChannel                                                OFFSET(get<T>, {0x38, 272, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x0100 (0x000038 - 0x000138)
class FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMovieSceneIntegerChannel)                 IntegerChannel                                              OFFSET(get<T>, {0x38, 256, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x0448 (0x000038 - 0x000480)
class FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FMovieSceneFloatChannel)                   VectorChannels                                              OFFSET(get<T>, {0x38, 1088, 0, 0})
	DMember(int32_t)                                   ChannelsUsed                                                OFFSET(get<int32_t>, {0x478, 4, 0, 0})
};

/// Struct /Script/Niagara.EmitterCompiledScriptPair
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FEmitterCompiledScriptPair : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/Niagara.NiagaraBakerTextureSource
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraBakerTextureSource : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   DisplayString                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     SourceName                                                  OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBakerCameraSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraBakerCameraSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(ENiagaraBakerViewMode)                     ViewMode                                                    OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   ViewportLocation                                            OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  ViewportRotation                                            OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     OrbitDistance                                               OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     FOV                                                         OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     OrthoWidth                                                  OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bUseAspectRatio                                             OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBakerTextureSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraBakerTextureSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     OutputName                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FNiagaraBakerTextureSource)                SourceBinding                                               OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bUseFrameSize                                               OFFSET(get<bool>, {0x20, 1, 1, 0})
	SMember(FIntPoint)                                 FrameSize                                                   OFFSET(get<T>, {0x24, 8, 0, 0})
	SMember(FIntPoint)                                 TextureSize                                                 OFFSET(get<T>, {0x2C, 8, 0, 0})
	CMember(UTexture2D*)                               GeneratedTexture                                            OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (0x000000 - 0x000010)
class FNCPoolElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UNiagaraComponent*)                        Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0010 (0x000000 - 0x000010)
class FNCPool : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNCPoolElement>)                    FreeElements                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x0098 (0x000000 - 0x000098)
class FNiagaraComponentPropertyBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FNiagaraVariableAttributeBinding)          AttributeBinding                                            OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FName)                                     PropertyName                                                OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    PropertyType                                                OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FName)                                     MetadataSetterName                                          OFFSET(get<T>, {0x40, 4, 0, 0})
	CMember(TMap<FString, FString>)                    PropertySetterParameterDefaults                             OFFSET(get<T>, {0x48, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCulledComponentInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraCulledComponentInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/Niagara.NiagaraDataInterfaceEmitterBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraDataInterfaceEmitterBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(ENiagaraDataInterfaceEmitterBindingMode)   BindingMode                                                 OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     EmitterName                                                 OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x0038 (0x000000 - 0x000038)
class FBasicParticleData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Position                                                    OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Size                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (0x000000 - 0x000010)
class FMeshTriCoordinate : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Tri                                                         OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FVector3f)                                 BaryCoord                                                   OFFSET(get<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataInterfaceSplineLUT
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraDataInterfaceSplineLUT : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FVector>)                           Positions                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector>)                           Scales                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FQuat>)                             Rotations                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(float)                                     SplineLength                                                OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     SplineDistanceStep                                          OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     InvSplineDistanceStep                                       OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxIndex                                                    OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerTimingData
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraOutlinerTimingData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     GameThread                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RenderThread                                                OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerEmitterInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraOutlinerEmitterInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   EmitterName                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(ENiagaraExecutionState)                    ExecState                                                   OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   NumParticles                                                OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x1C, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemInstanceData
/// Size: 0x0068 (0x000000 - 0x000068)
class FNiagaraOutlinerSystemInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   ComponentName                                               OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector3f)                                 LWCTile                                                     OFFSET(get<T>, {0x10, 12, 0, 0})
	CMember(TArray<FNiagaraOutlinerEmitterInstanceData>) Emitters                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(ENiagaraExecutionState)                    ActualExecutionState                                        OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(ENiagaraExecutionState)                    RequestedExecutionState                                     OFFSET(get<T>, {0x34, 4, 0, 0})
	SMember(FNiagaraScalabilityState)                  ScalabilityState                                            OFFSET(get<T>, {0x38, 12, 0, 0})
	DMember(bool)                                      bPendingKill                                                OFFSET(get<bool>, {0x44, 1, 1, 0})
	DMember(bool)                                      bUsingCullProxy                                             OFFSET(get<bool>, {0x44, 1, 1, 1})
	CMember(ENCPoolMethod)                             PoolMethod                                                  OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AverageTime                                                 OFFSET(get<T>, {0x4C, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxTime                                                     OFFSET(get<T>, {0x54, 8, 0, 0})
	CMember(TEnumAsByte<ETickingGroup>)                TickGroup                                                   OFFSET(get<T>, {0x5C, 1, 0, 0})
	CMember(TEnumAsByte<ENiagaraGpuComputeTickStage>)  GpuTickStage                                                OFFSET(get<T>, {0x5D, 1, 0, 0})
	DMember(bool)                                      bIsSolo                                                     OFFSET(get<bool>, {0x60, 1, 1, 0})
	DMember(bool)                                      bRequiresDistanceFieldData                                  OFFSET(get<bool>, {0x60, 1, 1, 1})
	DMember(bool)                                      bRequiresDepthBuffer                                        OFFSET(get<bool>, {0x60, 1, 1, 2})
	DMember(bool)                                      bRequiresEarlyViewData                                      OFFSET(get<bool>, {0x60, 1, 1, 3})
	DMember(bool)                                      bRequiresViewUniformBuffer                                  OFFSET(get<bool>, {0x60, 1, 1, 4})
	DMember(bool)                                      bRequiresRayTracingScene                                    OFFSET(get<bool>, {0x60, 1, 1, 5})
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemData
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraOutlinerSystemData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FNiagaraOutlinerSystemInstanceData>) SystemInstances                                            OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AveragePerFrameTime                                         OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxPerFrameTime                                             OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AveragePerInstanceTime                                      OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxPerInstanceTime                                          OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerWorldData
/// Size: 0x0068 (0x000000 - 0x000068)
class FNiagaraOutlinerWorldData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<FString, FNiagaraOutlinerSystemData>) Systems                                                     OFFSET(get<T>, {0x0, 80, 0, 0})
	DMember(bool)                                      bHasBegunPlay                                               OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(char)                                      WorldType                                                   OFFSET(get<char>, {0x51, 1, 0, 0})
	DMember(char)                                      NetMode                                                     OFFSET(get<char>, {0x52, 1, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AveragePerFrameTime                                         OFFSET(get<T>, {0x54, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxPerFrameTime                                             OFFSET(get<T>, {0x5C, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerData
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraOutlinerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FNiagaraOutlinerWorldData>)  WorldData                                                   OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerRequestConnection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDebuggerRequestConnection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     SessionId                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InstanceID                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerAcceptConnection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDebuggerAcceptConnection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     SessionId                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InstanceID                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerConnectionClosed
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDebuggerConnectionClosed : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     SessionId                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InstanceID                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerExecuteConsoleCommand
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDebuggerExecuteConsoleCommand : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Command                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bRequiresWorld                                              OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerOutlinerUpdate
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraDebuggerOutlinerUpdate : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FNiagaraOutlinerData)                      OutlinerData                                                OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebugHudTextOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDebugHudTextOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ENiagaraDebugHudFont)                      Font                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraDebugHudHAlign)                    HorizontalAlignment                                         OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(ENiagaraDebugHudVAlign)                    VerticalAlignment                                           OFFSET(get<T>, {0x5, 1, 0, 0})
	SMember(FVector2D)                                 ScreenOffset                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebugHUDVariable
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDebugHUDVariable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   Name                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebugHUDSettingsData
/// Size: 0x0248 (0x000000 - 0x000248)
class FNiagaraDebugHUDSettingsData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	DMember(bool)                                      bHudEnabled                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bHudRenderingEnabled                                        OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bValidateSystemSimulationDataBuffers                        OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bValidateParticleDataBuffers                                OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bValidationLogErrors                                        OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   ValidationAttributeDisplayTruncate                          OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bOverviewEnabled                                            OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bIncludeCascade                                             OFFSET(get<bool>, {0xD, 1, 0, 0})
	CMember(ENiagaraDebugHUDOverviewMode)              OverviewMode                                                OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(ENiagaraDebugHUDDOverviewSort)             OverviewSortMode                                            OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(ENiagaraDebugHudFont)                      OverviewFont                                                OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FVector2D)                                 OverviewLocation                                            OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bShowRegisteredComponents                                   OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bOverviewShowFilteredSystemOnly                             OFFSET(get<bool>, {0x31, 1, 0, 0})
	SMember(FString)                                   ActorFilter                                                 OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bComponentFilterEnabled                                     OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FString)                                   ComponentFilter                                             OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bSystemFilterEnabled                                        OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FString)                                   SystemFilter                                                OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bEmitterFilterEnabled                                       OFFSET(get<bool>, {0x78, 1, 0, 0})
	SMember(FString)                                   EmitterFilter                                               OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bActorFilterEnabled                                         OFFSET(get<bool>, {0x90, 1, 0, 0})
	CMember(ENiagaraDebugHudVerbosity)                 SystemDebugVerbosity                                        OFFSET(get<T>, {0x94, 4, 0, 0})
	CMember(ENiagaraDebugHudVerbosity)                 SystemEmitterVerbosity                                      OFFSET(get<T>, {0x98, 4, 0, 0})
	CMember(ENiagaraDebugHudVerbosity)                 DataInterfaceVerbosity                                      OFFSET(get<T>, {0x9C, 4, 0, 0})
	DMember(bool)                                      bSystemShowBounds                                           OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(float)                                     SystemBoundsSolidBoxAlpha                                   OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bSystemShowActiveOnlyInWorld                                OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bShowSystemVariables                                        OFFSET(get<bool>, {0xA9, 1, 0, 0})
	CMember(TArray<FNiagaraDebugHUDVariable>)          SystemVariables                                             OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FNiagaraDebugHudTextOptions)               SystemTextOptions                                           OFFSET(get<T>, {0xC0, 24, 0, 0})
	DMember(bool)                                      bShowParticleVariables                                      OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bEnableGpuParticleReadback                                  OFFSET(get<bool>, {0xD9, 1, 0, 0})
	DMember(bool)                                      bShowParticleIndex                                          OFFSET(get<bool>, {0xDA, 1, 0, 0})
	CMember(TArray<FNiagaraDebugHUDVariable>)          ParticlesVariables                                          OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FNiagaraDebugHudTextOptions)               ParticleTextOptions                                         OFFSET(get<T>, {0xF0, 24, 0, 0})
	DMember(bool)                                      bShowParticlesVariablesWithSystem                           OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bShowParticleVariablesVertical                              OFFSET(get<bool>, {0x109, 1, 0, 0})
	DMember(bool)                                      bUseMaxParticlesToDisplay                                   OFFSET(get<bool>, {0x10A, 1, 0, 0})
	DMember(bool)                                      bUseParticleDisplayClip                                     OFFSET(get<bool>, {0x10B, 1, 0, 0})
	SMember(FVector2D)                                 ParticleDisplayClip                                         OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(bool)                                      bUseParticleDisplayCenterRadius                             OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(float)                                     ParticleDisplayCenterRadius                                 OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(int32_t)                                   MaxParticlesToDisplay                                       OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	DMember(int32_t)                                   PerfReportFrames                                            OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	CMember(ENiagaraDebugHUDPerfSampleMode)            PerfSampleMode                                              OFFSET(get<T>, {0x130, 4, 0, 0})
	CMember(ENiagaraDebugHUDPerfGraphMode)             PerfGraphMode                                               OFFSET(get<T>, {0x134, 4, 0, 0})
	DMember(int32_t)                                   PerfHistoryFrames                                           OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	DMember(float)                                     PerfGraphTimeRange                                          OFFSET(get<float>, {0x13C, 4, 0, 0})
	SMember(FVector2D)                                 PerfGraphSize                                               OFFSET(get<T>, {0x140, 16, 0, 0})
	SMember(FLinearColor)                              PerfGraphAxisColor                                          OFFSET(get<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      bEnableSmoothing                                            OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(int32_t)                                   SmoothingWidth                                              OFFSET(get<int32_t>, {0x164, 4, 0, 0})
	SMember(FLinearColor)                              DefaultBackgroundColor                                      OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FLinearColor)                              OverviewHeadingColor                                        OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FLinearColor)                              OverviewDetailColor                                         OFFSET(get<T>, {0x188, 16, 0, 0})
	SMember(FLinearColor)                              OverviewDetailHighlightColor                                OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FLinearColor)                              InWorldErrorTextColor                                       OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FLinearColor)                              InWorldTextColor                                            OFFSET(get<T>, {0x1B8, 16, 0, 0})
	SMember(FLinearColor)                              MessageInfoTextColor                                        OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FLinearColor)                              MessageWarningTextColor                                     OFFSET(get<T>, {0x1D8, 16, 0, 0})
	SMember(FLinearColor)                              MessageErrorTextColor                                       OFFSET(get<T>, {0x1E8, 16, 0, 0})
	DMember(float)                                     SystemColorTableOpacity                                     OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(uint32_t)                                  SystemColorSeed                                             OFFSET(get<uint32_t>, {0x1FC, 4, 0, 0})
	SMember(FVector)                                   SystemColorHSVMin                                           OFFSET(get<T>, {0x200, 24, 0, 0})
	SMember(FVector)                                   SystemColorHSVMax                                           OFFSET(get<T>, {0x218, 24, 0, 0})
	CMember(ENiagaraDebugPlaybackMode)                 PlaybackMode                                                OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(bool)                                      bPlaybackRateEnabled                                        OFFSET(get<bool>, {0x231, 1, 0, 0})
	DMember(float)                                     PlaybackRate                                                OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(bool)                                      bLoopTimeEnabled                                            OFFSET(get<bool>, {0x238, 1, 0, 0})
	DMember(float)                                     LoopTime                                                    OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(bool)                                      bShowGlobalBudgetInfo                                       OFFSET(get<bool>, {0x240, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRequestSimpleClientInfoMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraRequestSimpleClientInfoMessage : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraOutlinerCaptureSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraOutlinerCaptureSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bTriggerCapture                                             OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(uint32_t)                                  CaptureDelayFrames                                          OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bGatherPerfData                                             OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(uint32_t)                                  SimCacheCaptureFrames                                       OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimpleClientInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraSimpleClientInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FString>)                           Systems                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Actors                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Components                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FString>)                           Emitters                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemSimCacheCaptureRequest
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraSystemSimCacheCaptureRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ComponentName                                               OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  CaptureDelayFrames                                          OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  CaptureFrames                                               OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemSimCacheCaptureReply
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraSystemSimCacheCaptureReply : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     ComponentName                                               OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<char>)                              SimCacheData                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraGraphViewSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector2D)                                 Location                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Zoom                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraLinearRamp
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraLinearRamp : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     StartX                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StartY                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EndX                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EndY                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraGlobalBudgetScaling
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraGlobalBudgetScaling : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bCullByGlobalBudget                                         OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bScaleMaxDistanceByGlobalBudgetUse                          OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bScaleMaxInstanceCountByGlobalBudgetUse                     OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bScaleSystemInstanceCountByGlobalBudgetUse                  OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(float)                                     MaxGlobalBudgetUsage                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FNiagaraLinearRamp)                        MaxDistanceScaleByGlobalBudgetUse                           OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FNiagaraLinearRamp)                        MaxInstanceCountScaleByGlobalBudgetUse                      OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FNiagaraLinearRamp)                        MaxSystemInstanceCountScaleByGlobalBudgetUse                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemVisibilityCullingSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraSystemVisibilityCullingSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bCullWhenNotRendered                                        OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bCullByViewFrustum                                          OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bAllowPreCullingByViewFrustum                               OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(float)                                     MaxTimeOutsideViewFrustum                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxTimeWithoutRender                                        OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0098 (0x000000 - 0x000098)
class FNiagaraSystemScalabilitySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(get<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bCullByDistance                                             OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bCullMaxInstanceCount                                       OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(bool)                                      bCullPerSystemMaxInstanceCount                              OFFSET(get<bool>, {0x30, 1, 1, 2})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bCullByMaxTimeWithoutRender                                 OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(int32_t)                                   MaxInstances                                                OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   MaxSystemInstances                                          OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     MaxTimeWithoutRender                                        OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(ENiagaraCullProxyMode)                     CullProxyMode                                               OFFSET(get<T>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   MaxSystemProxies                                            OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	SMember(FNiagaraSystemVisibilityCullingSettings)   VisibilityCulling                                           OFFSET(get<T>, {0x50, 12, 0, 0})
	SMember(FNiagaraGlobalBudgetScaling)               BudgetScaling                                               OFFSET(get<T>, {0x5C, 56, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraPlatformSet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FNiagaraDeviceProfileStateEntry>)   DeviceProfileStates                                         OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraPlatformSetCVarCondition>)  CVarConditions                                              OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   QualityLevelMask                                            OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraPlatformSetCVarCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     CVarName                                                    OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraCVarConditionResponse)             PassResponse                                                OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(ENiagaraCVarConditionResponse)             FailResponse                                                OFFSET(get<T>, {0x5, 1, 0, 0})
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x6, 1, 0, 0})
	DMember(int32_t)                                   MinInt                                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxInt                                                      OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     MinFloat                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxFloat                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bUseMinInt                                                  OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(bool)                                      bUseMaxInt                                                  OFFSET(get<bool>, {0x18, 1, 1, 1})
	DMember(bool)                                      bUseMinFloat                                                OFFSET(get<bool>, {0x18, 1, 1, 2})
	DMember(bool)                                      bUseMaxFloat                                                OFFSET(get<bool>, {0x18, 1, 1, 3})
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraDeviceProfileStateEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ProfileName                                                 OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  QualityLevelMask                                            OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  SetQualityLevelMask                                         OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSystemScalabilitySettingsArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraSystemScalabilitySettings>) Settings                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x0008 (0x000098 - 0x0000A0)
class FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bOverrideDistanceSettings                                   OFFSET(get<bool>, {0x98, 1, 1, 0})
	DMember(bool)                                      bOverrideInstanceCountSettings                              OFFSET(get<bool>, {0x98, 1, 1, 1})
	DMember(bool)                                      bOverridePerSystemInstanceCountSettings                     OFFSET(get<bool>, {0x98, 1, 1, 2})
	DMember(bool)                                      bOverrideVisibilitySettings                                 OFFSET(get<bool>, {0x98, 1, 1, 3})
	DMember(bool)                                      bOverrideGlobalBudgetScalingSettings                        OFFSET(get<bool>, {0x98, 1, 1, 4})
	DMember(bool)                                      bOverrideCullProxySettings                                  OFFSET(get<bool>, {0x98, 1, 1, 5})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraEmitterScalabilitySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(get<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bScaleSpawnCount                                            OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(float)                                     SpawnCountScale                                             OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraEmitterScalabilitySettingsArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraEmitterScalabilitySettings>) Settings                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0008 (0x000038 - 0x000040)
class FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bOverrideSpawnCountScale                                    OFFSET(get<bool>, {0x38, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraEmitterScalabilityOverrides : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraEmitterScalabilityOverride>) Overrides                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraEventReceiverProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SourceEventGenerator                                        OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     SourceEmitter                                               OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0048 (0x000000 - 0x000048)
class FNiagaraEventGeneratorProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   MaxEventsPerFrame                                           OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     ID                                                          OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         OFFSET(get<T>, {0x8, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraEmitterScriptProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UNiagaraScript*)                           Script                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FNiagaraEventReceiverProperties>)   EventReceivers                                              OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraEventGeneratorProperties>)  EventGenerators                                             OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0030 (0x000028 - 0x000058)
class FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EScriptExecutionMode)                      ExecutionMode                                               OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(uint32_t)                                  SpawnNumber                                                 OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  MaxEventsPerFrame                                           OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	SMember(FGuid)                                     SourceEmitterID                                             OFFSET(get<T>, {0x34, 16, 0, 0})
	SMember(FName)                                     SourceEventName                                             OFFSET(get<T>, {0x44, 4, 0, 0})
	DMember(bool)                                      bRandomSpawnNumber                                          OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(uint32_t)                                  MinSpawnNumber                                              OFFSET(get<uint32_t>, {0x4C, 4, 0, 0})
	DMember(bool)                                      UpdateAttributeInitialValues                                OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraDetailsLevelScaleOverrides : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     Low                                                         OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Medium                                                      OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     High                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Epic                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Cine                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.VersionedNiagaraEmitterData
/// Size: 0x0340 (0x000000 - 0x000340)
class FVersionedNiagaraEmitterData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FNiagaraAssetVersion)                      Version                                                     OFFSET(get<T>, {0x0, 28, 0, 0})
	DMember(bool)                                      bDeprecated                                                 OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FText)                                     DeprecationMessage                                          OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bLocalSpace                                                 OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bDeterminism                                                OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bInterpolatedSpawning                                       OFFSET(get<bool>, {0x40, 1, 1, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(ENiagaraEmitterCalculateBoundMode)         CalculateBoundsMode                                         OFFSET(get<T>, {0x45, 1, 0, 0})
	SMember(FBox)                                      FixedBounds                                                 OFFSET(get<T>, {0x48, 56, 0, 0})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x80, 1, 1, 0})
	CMember(TArray<FNiagaraEventScriptProperties>)     EventHandlerScriptProps                                     OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FNiagaraPlatformSet)                       Platforms                                                   OFFSET(get<T>, {0x98, 48, 0, 0})
	SMember(FNiagaraEmitterScalabilityOverrides)       ScalabilityOverrides                                        OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(int32_t)                                   MaxGPUParticlesSpawnPerFrame                                OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	CMember(EParticleAllocationMode)                   AllocationMode                                              OFFSET(get<T>, {0xDC, 1, 0, 0})
	DMember(int32_t)                                   PreAllocationCount                                          OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	SMember(FNiagaraEmitterScriptProperties)           UpdateScriptProps                                           OFFSET(get<T>, {0xE8, 40, 0, 0})
	SMember(FNiagaraEmitterScriptProperties)           SpawnScriptProps                                            OFFSET(get<T>, {0x110, 40, 0, 0})
	SMember(FNiagaraParameterStore)                    RendererBindings                                            OFFSET(get<T>, {0x138, 136, 0, 0})
	CMember(TArray<FNiagaraExternalUObjectInfo>)       RendererBindingsExternalObjects                             OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TMap<FNiagaraVariableBase, FNiagaraVariableBase>) ResolvedDIBindings                                   OFFSET(get<T>, {0x1D0, 80, 0, 0})
	CMember(TArray<UNiagaraRendererProperties*>)       RendererProperties                                          OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(TArray<UNiagaraSimulationStageBase*>)      SimulationStages                                            OFFSET(get<T>, {0x230, 16, 0, 0})
	CMember(UNiagaraScript*)                           GPUComputeScript                                            OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(TArray<FName>)                             SharedEventGeneratorIds                                     OFFSET(get<T>, {0x248, 16, 0, 0})
	SMember(FNiagaraEmitterScalabilitySettings)        CurrentScalabilitySettings                                  OFFSET(get<T>, {0x258, 56, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0088 (0x000000 - 0x000088)
class FNiagaraParameterStore : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UObject*>)                  Owner                                                       OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FNiagaraVariableWithOffset>)        SortedParameterOffsets                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<char>)                              ParameterData                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<UNiagaraDataInterface*>)            DataInterfaces                                              OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UObject*>)                          UObjects                                                    OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FNiagaraPositionSource>)            OriginalPositionData                                        OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPositionSource
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraPositionSource : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0020 (0x000008 - 0x000028)
class FNiagaraVariableWithOffset : public FNiagaraVariableBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Offset                                                      OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FNiagaraLwcStructConverter)                StructConverter                                             OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraAssetVersion
/// Size: 0x001C (0x000000 - 0x00001C)
class FNiagaraAssetVersion : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   MajorVersion                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinorVersion                                                OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     VersionGuid                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bIsVisibleInVersionSelector                                 OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraEmitterHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGuid)                                     ID                                                          OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     IdName                                                      OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FVersionedNiagaraEmitter)                  VersionedInstance                                           OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.VersionedNiagaraEmitter
/// Size: 0x0018 (0x000000 - 0x000018)
class FVersionedNiagaraEmitter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UNiagaraEmitter*)                          Emitter                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGuid)                                     Version                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraCollisionEventPayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   CollisionPos                                                OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   CollisionNormal                                             OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   CollisionVelocity                                           OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   PhysicalMaterialIndex                                       OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMeshMICOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraMeshMICOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UMaterialInterface*)                       OriginalMaterial                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMaterialInstanceConstant*)                ReplacementMaterial                                         OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraMeshMaterialOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UMaterialInterface*)                       ExplicitMat                                                 OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              UserParamBinding                                            OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMeshRendererMeshProperties
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraMeshRendererMeshProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UStaticMesh*)                              Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraParameterBinding)                  MeshParameterBinding                                        OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   PivotOffset                                                 OFFSET(get<T>, {0x40, 24, 0, 0})
	CMember(ENiagaraMeshPivotOffsetSpace)              PivotOffsetSpace                                            OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Struct /Script/Niagara.ParameterDefinitionsSubscription
/// Size: 0x0001 (0x000000 - 0x000001)
class FParameterDefinitionsSubscription : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraParameters
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraVariable>)                  Parameters                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraBoundParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FNiagaraVariableBase)                      Parameter                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   SrcOffset                                                   OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   DestOffset                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPerfBaselineStats
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraPerfBaselineStats : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     PerInstanceAvg_GT                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PerInstanceAvg_RT                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PerInstanceMax_GT                                           OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PerInstanceMax_RT                                           OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraPlatformSetConflictEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ProfileName                                                 OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   QualityLevelMask                                            OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraPlatformSetConflictInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SetAIndex                                                   OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SetBIndex                                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FNiagaraPlatformSetConflictEntry>)  Conflicts                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetRedirect
/// Size: 0x0078 (0x000000 - 0x000078)
class FNiagaraPlatformSetRedirect : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FName>)                             ProfileNames                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ENiagaraDeviceProfileRedirectMode)         Mode                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FName)                                     RedirectProfileName                                         OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FNiagaraPlatformSetCVarCondition)          CVarConditionEnabled                                        OFFSET(get<T>, {0x18, 48, 0, 0})
	SMember(FNiagaraPlatformSetCVarCondition)          CVarConditionDisabled                                       OFFSET(get<T>, {0x48, 48, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialScalarParameter
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraRendererMaterialScalarParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     MaterialParameterName                                       OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialVectorParameter
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraRendererMaterialVectorParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     MaterialParameterName                                       OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FLinearColor)                              Value                                                       OFFSET(get<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialTextureParameter
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraRendererMaterialTextureParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     MaterialParameterName                                       OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UTexture*)                                 Texture                                                     OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialStaticBoolParameter
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraRendererMaterialStaticBoolParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     MaterialParameterName                                       OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     StaticVariableName                                          OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialParameters
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraRendererMaterialParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FNiagaraMaterialAttributeBinding>)  AttributeBindings                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraRendererMaterialScalarParameter>) ScalarParameters                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FNiagaraRendererMaterialVectorParameter>) VectorParameters                                      OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FNiagaraRendererMaterialTextureParameter>) TextureParameters                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FNiagaraRendererMaterialStaticBoolParameter>) StaticBoolParameters                              OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRibbonShapeCustomVertex
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraRibbonShapeCustomVertex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FVector2f)                                 Position                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector2f)                                 Normal                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     TextureV                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraRibbonUVSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(ENiagaraRibbonUVDistributionMode)          DistributionMode                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ENiagaraRibbonUVEdgeMode)                  LeadingEdgeMode                                             OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ENiagaraRibbonUVEdgeMode)                  TrailingEdgeMode                                            OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(bool)                                      bEnablePerParticleUOverride                                 OFFSET(get<bool>, {0x3, 1, 1, 0})
	DMember(bool)                                      bEnablePerParticleVRangeOverride                            OFFSET(get<bool>, {0x3, 1, 1, 1})
	DMember(float)                                     TilingLength                                                OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector2D)                                 Offset                                                      OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 Scale                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FNiagaraScalabilityManager : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(UNiagaraEffectType*)                       EffectType                                                  OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UNiagaraComponent*>)                ManagedComponents                                           OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraModuleDependency : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     ID                                                          OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraModuleDependencyType)              Type                                                        OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(ENiagaraModuleDependencyScriptConstraint)  ScriptConstraint                                            OFFSET(get<T>, {0x5, 1, 0, 0})
	SMember(FString)                                   RequiredVersion                                             OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   OnlyEvaluateInScriptUsage                                   OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FText)                                     Description                                                 OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCompilerTag
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraCompilerTag : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FNiagaraVariable)                          Variable                                                    OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   StringValue                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0058 (0x000000 - 0x000058)
class FNiagaraVMExecutableDataId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGuid)                                     CompilerVersionID                                           OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ENiagaraScriptUsage)                       ScriptUsageType                                             OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FGuid)                                     ScriptUsageTypeID                                           OFFSET(get<T>, {0x14, 16, 0, 0})
	DMember(bool)                                      bUsesRapidIterationParams                                   OFFSET(get<bool>, {0x24, 1, 1, 0})
	DMember(bool)                                      bDisableDebugSwitches                                       OFFSET(get<bool>, {0x24, 1, 1, 1})
	DMember(bool)                                      bInterpolatedSpawn                                          OFFSET(get<bool>, {0x24, 1, 1, 2})
	DMember(bool)                                      bRequiresPersistentIDs                                      OFFSET(get<bool>, {0x24, 1, 1, 3})
	SMember(FGuid)                                     BaseScriptID                                                OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FNiagaraCompileHash)                       BaseScriptCompileHash                                       OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FGuid)                                     ScriptVersionID                                             OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableByteCode
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraVMExecutableByteCode : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<char>)                              Data                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   UncompressedSize                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x01A0 (0x000000 - 0x0001A0)
class FNiagaraVMExecutableData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FNiagaraVMExecutableByteCode)              ByteCode                                                    OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FNiagaraVMExecutableByteCode)              OptimizedByteCode                                           OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(int32_t)                                   NumTempRegisters                                            OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   NumUserPtrs                                                 OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	CMember(TArray<FNiagaraCompilerTag>)               CompileTags                                                 OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<char>)                              ScriptLiterals                                              OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              Attributes                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FNiagaraScriptDataUsageInfo)               DataUsage                                                   OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(TArray<FNiagaraScriptUObjectCompileInfo>)  UObjectInfos                                                OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FNiagaraScriptDataInterfaceCompileInfo>) DataInterfaceInfo                                      OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FVMExternalFunctionBindingInfo>)    CalledVMExternalFunctions                                   OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FNiagaraDataSetID>)                 ReadDataSets                                                OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FNiagaraDataSetProperties>)         WriteDataSets                                               OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FNiagaraStatScope>)                 StatScopes                                                  OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FNiagaraShaderScriptParametersMetadata)    ShaderScriptParametersMetadata                              OFFSET(get<T>, {0x118, 88, 0, 0})
	CMember(ENiagaraScriptCompileStatus)               LastCompileStatus                                           OFFSET(get<T>, {0x170, 1, 0, 0})
	CMember(TArray<FSimulationStageMetaData>)          SimulationStageMetaData                                     OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<char>)                              ExperimentalContextData                                     OFFSET(get<T>, {0x188, 16, 0, 0})
	DMember(bool)                                      bReadsSignificanceIndex                                     OFFSET(get<bool>, {0x198, 1, 1, 0})
	DMember(bool)                                      bNeedsGPUContextInit                                        OFFSET(get<bool>, {0x198, 1, 1, 1})
};

/// Struct /Script/Niagara.NiagaraInlineDynamicInputFormatToken
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraInlineDynamicInputFormatToken : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.VersionedNiagaraScriptData
/// Size: 0x0001 (0x000000 - 0x000001)
class FVersionedNiagaraScriptData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraScriptExecutionPaddingInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraScriptExecutionPaddingInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  SrcOffset                                                   OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  DestOffset                                                  OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  SrcSize                                                     OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  DestSize                                                    OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0020 (0x000088 - 0x0000A8)
class FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   ParameterSize                                               OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(uint32_t)                                  PaddedParameterSize                                         OFFSET(get<uint32_t>, {0x8C, 4, 0, 0})
	CMember(TArray<FNiagaraScriptExecutionPaddingInfo>) PaddingInfo                                                OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      bInitialized                                                OFFSET(get<bool>, {0xA0, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraScriptInstanceParameterStore
/// Size: 0x0010 (0x000088 - 0x000098)
class FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
};

/// Struct /Script/Niagara.NiagaraScriptHighlight
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraScriptHighlight : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FLinearColor)                              Color                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheDataBuffers
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraSimCacheDataBuffers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(uint32_t)                                  NumInstances                                                OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	CMember(TArray<char>)                              FloatData                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<char>)                              HalfData                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<char>)                              Int32Data                                                   OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<int32_t>)                           IDToIndexTable                                              OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(uint32_t)                                  IDAcquireTag                                                OFFSET(get<uint32_t>, {0x48, 4, 0, 0})
	CMember(TArray<uint32_t>)                          InterpMapping                                               OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheEmitterFrame
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FNiagaraSimCacheEmitterFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBox)                                      LocalBounds                                                 OFFSET(get<T>, {0x0, 56, 0, 0})
	DMember(int32_t)                                   TotalSpawnedParticles                                       OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FNiagaraSimCacheDataBuffers)               ParticleDataBuffers                                         OFFSET(get<T>, {0x40, 96, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheSystemFrame
/// Size: 0x0098 (0x000000 - 0x000098)
class FNiagaraSimCacheSystemFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FBox)                                      LocalBounds                                                 OFFSET(get<T>, {0x0, 56, 0, 0})
	SMember(FNiagaraSimCacheDataBuffers)               SystemDataBuffers                                           OFFSET(get<T>, {0x38, 96, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheFrame
/// Size: 0x0120 (0x000000 - 0x000120)
class FNiagaraSimCacheFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FTransform)                                LocalToWorld                                                OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FVector3f)                                 LWCTile                                                     OFFSET(get<T>, {0x60, 12, 0, 0})
	DMember(float)                                     SimulationAge                                               OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   SimulationTickCount                                         OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FNiagaraSimCacheSystemFrame)               SystemData                                                  OFFSET(get<T>, {0x78, 152, 0, 0})
	CMember(TArray<FNiagaraSimCacheEmitterFrame>)      EmitterData                                                 OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheVariable
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraSimCacheVariable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FNiagaraVariableBase)                      Variable                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  FloatOffset                                                 OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(uint16_t)                                  FloatCount                                                  OFFSET(get<uint16_t>, {0xA, 2, 0, 0})
	DMember(uint16_t)                                  HalfOffset                                                  OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
	DMember(uint16_t)                                  HalfCount                                                   OFFSET(get<uint16_t>, {0xE, 2, 0, 0})
	DMember(uint16_t)                                  Int32Offset                                                 OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  Int32Count                                                  OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheDataBuffersLayout
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FNiagaraSimCacheDataBuffersLayout : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     LayoutName                                                  OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TArray<FNiagaraSimCacheVariable>)          Variables                                                   OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(uint16_t)                                  FloatCount                                                  OFFSET(get<uint16_t>, {0x18, 2, 0, 0})
	DMember(uint16_t)                                  HalfCount                                                   OFFSET(get<uint16_t>, {0x1A, 2, 0, 0})
	DMember(uint16_t)                                  Int32Count                                                  OFFSET(get<uint16_t>, {0x1C, 2, 0, 0})
	DMember(bool)                                      bLocalSpace                                                 OFFSET(get<bool>, {0x1E, 1, 0, 0})
	DMember(bool)                                      bAllowInterpolation                                         OFFSET(get<bool>, {0x1F, 1, 0, 0})
	DMember(bool)                                      bAllowVelocityExtrapolation                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TArray<FName>)                             RebaseVariableNames                                         OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FName>)                             InterpVariableNames                                         OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(uint16_t)                                  ComponentVelocity                                           OFFSET(get<uint16_t>, {0x48, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheLayout
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FNiagaraSimCacheLayout : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FNiagaraSimCacheDataBuffersLayout)         SystemLayout                                                OFFSET(get<T>, {0x0, 176, 0, 0})
	CMember(TArray<FNiagaraSimCacheDataBuffersLayout>) EmitterLayouts                                              OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FNiagaraEmitterCompiledData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FName>)                             SpawnAttributes                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FNiagaraVariable)                          EmitterSpawnIntervalVar                                     OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterInterpSpawnStartDTVar                                OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterSpawnGroupVar                                        OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterAgeVar                                               OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterRandomSeedVar                                        OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterInstanceSeedVar                                      OFFSET(get<T>, {0x88, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterTotalSpawnedParticlesVar                             OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         OFFSET(get<T>, {0xB8, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraParameterDataSetBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   ParameterOffset                                             OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataSetComponentOffset                                      OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraParameterDataSetBindingCollection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FNiagaraParameterDataSetBinding>)   FloatOffsets                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBinding>)   Int32Offsets                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0228 (0x000000 - 0x000228)
class FNiagaraSystemCompiledData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FNiagaraParameterStore)                    InstanceParamStore                                          OFFSET(get<T>, {0x0, 136, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         OFFSET(get<T>, {0x88, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               SpawnInstanceParamsDataSetCompiledData                      OFFSET(get<T>, {0xC8, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               UpdateInstanceParamsDataSetCompiledData                     OFFSET(get<T>, {0x108, 64, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceGlobalBinding                                  OFFSET(get<T>, {0x148, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceSystemBinding                                  OFFSET(get<T>, {0x168, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceOwnerBinding                                   OFFSET(get<T>, {0x188, 32, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBindingCollection>) SpawnInstanceEmitterBindings                        OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceGlobalBinding                                 OFFSET(get<T>, {0x1B8, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceSystemBinding                                 OFFSET(get<T>, {0x1D8, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceOwnerBinding                                  OFFSET(get<T>, {0x1F8, 32, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBindingCollection>) UpdateInstanceEmitterBindings                       OFFSET(get<T>, {0x218, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSystemScalabilityOverrides : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraSystemScalabilityOverride>) Overrides                                                   OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraWildcard
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraWildcard : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraFloat
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraFloat : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraInt32 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraBool : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPosition
/// Size: 0x0000 (0x00000C - 0x00000C)
class FNiagaraPosition : public FVector3f
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
};

/// Struct /Script/Niagara.NiagaraHalf
/// Size: 0x0002 (0x000000 - 0x000002)
class FNiagaraHalf : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(uint16_t)                                  Value                                                       OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraHalfVector2 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (0x000000 - 0x000006)
class FNiagaraHalfVector3 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Z                                                           OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraHalfVector4 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  X                                                           OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Z                                                           OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  W                                                           OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraNumeric
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraNumeric : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraParameterMap
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraParameterMap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Niagara.NiagaraDouble
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraDouble : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(double)                                    Value                                                       OFFSET(get<double>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraMatrix : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector4f)                                 Row0                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector4f)                                 Row1                                                        OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FVector4f)                                 Row2                                                        OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FVector4f)                                 Row3                                                        OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSpawnInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     InterpStartDt                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     IntervalDt                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SpawnGroup                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraID : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AcquireTag                                                  OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraRandInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   Seed1                                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Seed2                                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Seed3                                                       OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraInputConditionMetadata : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     InputName                                                   OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FString>)                           TargetValues                                                OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEnumParameterMetaData
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraEnumParameterMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     OverrideName                                                OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UTexture2D*)                               IconOverride                                                OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bUseColorOverride                                           OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FLinearColor)                              ColorOverride                                               OFFSET(get<T>, {0x14, 16, 0, 0})
};

/// Struct /Script/Niagara.WidgetNamedInputValue
/// Size: 0x0038 (0x000000 - 0x000038)
class FWidgetNamedInputValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     ToolTip                                                     OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraWidgetNamedIntegerInputValue
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraWidgetNamedIntegerInputValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     DisplayName                                                 OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     ToolTip                                                     OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInputParameterCustomization
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraInputParameterCustomization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ENiagaraInputWidgetType)                   WidgetType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bHasMinValue                                                OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bHasMaxValue                                                OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bHasStepWidth                                               OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     StepWidth                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TArray<FWidgetNamedInputValue>)            InputDropdownValues                                         OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FNiagaraWidgetNamedIntegerInputValue>) EnumStyleDropdownValues                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bBroadcastValueChangesOnCommitOnly                          OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBoolParameterMetaData
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraBoolParameterMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ENiagaraBoolDisplayMode)                   DisplayMode                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     OverrideNameTrue                                            OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     OverrideNameFalse                                           OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(UTexture2D*)                               IconOverrideTrue                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UTexture2D*)                               IconOverrideFalse                                           OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x0180 (0x000000 - 0x000180)
class FNiagaraVariableMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FText)                                     Description                                                 OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     CategoryName                                                OFFSET(get<T>, {0x18, 24, 0, 0})
	CMember(EUnit)                                     DisplayUnit                                                 OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(bool)                                      bAdvancedDisplay                                            OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bDisplayInOverviewStack                                     OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(int32_t)                                   InlineParameterSortPriority                                 OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bOverrideColor                                              OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FLinearColor)                              InlineParameterColorOverride                                OFFSET(get<T>, {0x3C, 16, 0, 0})
	CMember(TArray<FNiagaraEnumParameterMetaData>)     InlineParameterEnumOverrides                                OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bEnableBoolOverride                                         OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FNiagaraBoolParameterMetaData)             InlineParameterBoolOverride                                 OFFSET(get<T>, {0x68, 32, 0, 0})
	DMember(int32_t)                                   EditorSortPriority                                          OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(bool)                                      bInlineEditConditionToggle                                  OFFSET(get<bool>, {0x8C, 1, 0, 0})
	SMember(FNiagaraInputConditionMetadata)            EditCondition                                               OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FNiagaraInputConditionMetadata)            VisibleCondition                                            OFFSET(get<T>, {0xA8, 24, 0, 0})
	CMember(TMap<FName, FString>)                      PropertyMetaData                                            OFFSET(get<T>, {0xC0, 80, 0, 0})
	SMember(FName)                                     ParentAttribute                                             OFFSET(get<T>, {0x110, 4, 0, 0})
	CMember(TArray<FName>)                             AlternateAliases                                            OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FNiagaraInputParameterCustomization)       WidgetCustomization                                         OFFSET(get<T>, {0x128, 64, 0, 0})
	SMember(FGuid)                                     VariableGuid                                                OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(bool)                                      bIsStaticSwitch                                             OFFSET(get<bool>, {0x178, 1, 0, 0})
	DMember(int32_t)                                   StaticSwitchDefaultValue                                    OFFSET(get<int32_t>, {0x17C, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x0050 (0x000088 - 0x0000D8)
class FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TMap<FNiagaraVariable, FNiagaraVariable>)  UserParameterRedirects                                      OFFSET(get<T>, {0x88, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraVariant : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UObject*)                                  Object                                                      OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UNiagaraDataInterface*)                    DataInterface                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<char>)                              Bytes                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(ENiagaraVariantMode)                       CurrentMode                                                 OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
class FNiagaraWorldManagerTickFunction : public FTickFunction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Enum /Script/Niagara.ENiagaraSimCacheAttributeCaptureMode
/// Size: 0x04
enum ENiagaraSimCacheAttributeCaptureMode : uint8_t
{
	ENiagaraSimCacheAttributeCaptureMode__All0                                       = 0,
	ENiagaraSimCacheAttributeCaptureMode__RenderingOnly1                             = 1,
	ENiagaraSimCacheAttributeCaptureMode__ExplicitAttributes2                        = 2,
	ENiagaraSimCacheAttributeCaptureMode__ENiagaraSimCacheAttributeCaptureMode_MAX3  = 3
};

/// Enum /Script/Niagara.ENiagaraCollisionMode
/// Size: 0x05
enum ENiagaraCollisionMode : uint8_t
{
	ENiagaraCollisionMode__None0                                                     = 0,
	ENiagaraCollisionMode__SceneGeometry1                                            = 1,
	ENiagaraCollisionMode__DepthBuffer2                                              = 2,
	ENiagaraCollisionMode__DistanceField3                                            = 3,
	ENiagaraCollisionMode__ENiagaraCollisionMode_MAX4                                = 4
};

/// Enum /Script/Niagara.ENiagaraBaseTypes
/// Size: 0x05
enum ENiagaraBaseTypes : uint8_t
{
	ENiagaraBaseTypes__Half0                                                         = 0,
	ENiagaraBaseTypes__Float1                                                        = 1,
	ENiagaraBaseTypes__Int322                                                        = 2,
	ENiagaraBaseTypes__Bool3                                                         = 3,
	ENiagaraBaseTypes__Max4                                                          = 4
};

/// Enum /Script/Niagara.ENiagaraGpuBufferFormat
/// Size: 0x04
enum ENiagaraGpuBufferFormat : uint8_t
{
	ENiagaraGpuBufferFormat__Float0                                                  = 0,
	ENiagaraGpuBufferFormat__HalfFloat1                                              = 1,
	ENiagaraGpuBufferFormat__UnsignedNormalizedByte2                                 = 2,
	ENiagaraGpuBufferFormat__Max3                                                    = 3
};

/// Enum /Script/Niagara.ENiagaraGpuSyncMode
/// Size: 0x05
enum ENiagaraGpuSyncMode : uint8_t
{
	ENiagaraGpuSyncMode__None0                                                       = 0,
	ENiagaraGpuSyncMode__SyncCpuToGpu1                                               = 1,
	ENiagaraGpuSyncMode__SyncGpuToCpu2                                               = 2,
	ENiagaraGpuSyncMode__SyncBoth3                                                   = 3,
	ENiagaraGpuSyncMode__ENiagaraGpuSyncMode_MAX4                                    = 4
};

/// Enum /Script/Niagara.ENiagaraMipMapGeneration
/// Size: 0x04
enum ENiagaraMipMapGeneration : uint8_t
{
	ENiagaraMipMapGeneration__Disabled0                                              = 0,
	ENiagaraMipMapGeneration__PostStage1                                             = 1,
	ENiagaraMipMapGeneration__PostSimulate2                                          = 2,
	ENiagaraMipMapGeneration__ENiagaraMipMapGeneration_MAX3                          = 3
};

/// Enum /Script/Niagara.ENiagaraDefaultMode
/// Size: 0x05
enum ENiagaraDefaultMode : uint8_t
{
	ENiagaraDefaultMode__Value0                                                      = 0,
	ENiagaraDefaultMode__Binding1                                                    = 1,
	ENiagaraDefaultMode__Custom2                                                     = 2,
	ENiagaraDefaultMode__FailIfPreviouslyNotSet3                                     = 3,
	ENiagaraDefaultMode__ENiagaraDefaultMode_MAX4                                    = 4
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererMotionVectorSetting
/// Size: 0x03
enum ENiagaraDefaultRendererMotionVectorSetting : uint8_t
{
	ENiagaraDefaultRendererMotionVectorSetting__Precise0                             = 0,
	ENiagaraDefaultRendererMotionVectorSetting__Approximate1                         = 1,
	ENiagaraDefaultRendererMotionVectorSetting__ENiagaraDefaultRendererMotionVectorSetting_MAX2 = 2
};

/// Enum /Script/Niagara.ENiagaraRendererMotionVectorSetting
/// Size: 0x05
enum ENiagaraRendererMotionVectorSetting : uint8_t
{
	ENiagaraRendererMotionVectorSetting__AutoDetect0                                 = 0,
	ENiagaraRendererMotionVectorSetting__Precise1                                    = 1,
	ENiagaraRendererMotionVectorSetting__Approximate2                                = 2,
	ENiagaraRendererMotionVectorSetting__Disable3                                    = 3,
	ENiagaraRendererMotionVectorSetting__ENiagaraRendererMotionVectorSetting_MAX4    = 4
};

/// Enum /Script/Niagara.ENiagaraSimTarget
/// Size: 0x03
enum ENiagaraSimTarget : uint8_t
{
	ENiagaraSimTarget__CPUSim0                                                       = 0,
	ENiagaraSimTarget__GPUComputeSim1                                                = 1,
	ENiagaraSimTarget__ENiagaraSimTarget_MAX2                                        = 2
};

/// Enum /Script/Niagara.ENiagaraAgeUpdateMode
/// Size: 0x04
enum ENiagaraAgeUpdateMode : uint8_t
{
	ENiagaraAgeUpdateMode__TickDeltaTime0                                            = 0,
	ENiagaraAgeUpdateMode__DesiredAge1                                               = 1,
	ENiagaraAgeUpdateMode__DesiredAgeNoSeek2                                         = 2,
	ENiagaraAgeUpdateMode__ENiagaraAgeUpdateMode_MAX3                                = 3
};

/// Enum /Script/Niagara.ENiagaraStatEvaluationType
/// Size: 0x03
enum ENiagaraStatEvaluationType : uint8_t
{
	ENiagaraStatEvaluationType__Average0                                             = 0,
	ENiagaraStatEvaluationType__Maximum1                                             = 1,
	ENiagaraStatEvaluationType__ENiagaraStatEvaluationType_MAX2                      = 2
};

/// Enum /Script/Niagara.ENiagaraStatDisplayMode
/// Size: 0x03
enum ENiagaraStatDisplayMode : uint8_t
{
	ENiagaraStatDisplayMode__Percent0                                                = 0,
	ENiagaraStatDisplayMode__Absolute1                                               = 1,
	ENiagaraStatDisplayMode__ENiagaraStatDisplayMode_MAX2                            = 2
};

/// Enum /Script/Niagara.ENiagaraDataSetType
/// Size: 0x04
enum ENiagaraDataSetType : uint8_t
{
	ENiagaraDataSetType__ParticleData0                                               = 0,
	ENiagaraDataSetType__Shared1                                                     = 1,
	ENiagaraDataSetType__Event2                                                      = 2,
	ENiagaraDataSetType__ENiagaraDataSetType_MAX3                                    = 3
};

/// Enum /Script/Niagara.ENiagaraInputNodeUsage
/// Size: 0x07
enum ENiagaraInputNodeUsage : uint8_t
{
	ENiagaraInputNodeUsage__Undefined0                                               = 0,
	ENiagaraInputNodeUsage__Parameter1                                               = 1,
	ENiagaraInputNodeUsage__Attribute2                                               = 2,
	ENiagaraInputNodeUsage__SystemConstant3                                          = 3,
	ENiagaraInputNodeUsage__TranslatorConstant4                                      = 4,
	ENiagaraInputNodeUsage__RapidIterationParameter5                                 = 5,
	ENiagaraInputNodeUsage__ENiagaraInputNodeUsage_MAX6                              = 6
};

/// Enum /Script/Niagara.ENiagaraScriptCompileStatus
/// Size: 0x08
enum ENiagaraScriptCompileStatus : uint8_t
{
	ENiagaraScriptCompileStatus__NCS_Unknown0                                        = 0,
	ENiagaraScriptCompileStatus__NCS_Dirty1                                          = 1,
	ENiagaraScriptCompileStatus__NCS_Error2                                          = 2,
	ENiagaraScriptCompileStatus__NCS_UpToDate3                                       = 3,
	ENiagaraScriptCompileStatus__NCS_BeingCreated4                                   = 4,
	ENiagaraScriptCompileStatus__NCS_UpToDateWithWarnings5                           = 5,
	ENiagaraScriptCompileStatus__NCS_ComputeUpToDateWithWarnings6                    = 6,
	ENiagaraScriptCompileStatus__NCS_MAX7                                            = 7
};

/// Enum /Script/Niagara.ENiagaraScriptUsage
/// Size: 0x14
enum ENiagaraScriptUsage : uint8_t
{
	ENiagaraScriptUsage__Function0                                                   = 0,
	ENiagaraScriptUsage__Module1                                                     = 1,
	ENiagaraScriptUsage__DynamicInput2                                               = 2,
	ENiagaraScriptUsage__ParticleSpawnScript3                                        = 3,
	ENiagaraScriptUsage__ParticleSpawnScriptInterpolated4                            = 4,
	ENiagaraScriptUsage__ParticleUpdateScript5                                       = 5,
	ENiagaraScriptUsage__ParticleEventScript6                                        = 6,
	ENiagaraScriptUsage__ParticleSimulationStageScript7                              = 7,
	ENiagaraScriptUsage__ParticleGPUComputeScript8                                   = 8,
	ENiagaraScriptUsage__EmitterSpawnScript9                                         = 9,
	ENiagaraScriptUsage__EmitterUpdateScript10                                       = 10,
	ENiagaraScriptUsage__SystemSpawnScript11                                         = 11,
	ENiagaraScriptUsage__SystemUpdateScript12                                        = 12,
	ENiagaraScriptUsage__ENiagaraScriptUsage_MAX13                                   = 13
};

/// Enum /Script/Niagara.ENiagaraCompileUsageStaticSwitch
/// Size: 0x06
enum ENiagaraCompileUsageStaticSwitch : uint8_t
{
	ENiagaraCompileUsageStaticSwitch__Spawn0                                         = 0,
	ENiagaraCompileUsageStaticSwitch__Update1                                        = 1,
	ENiagaraCompileUsageStaticSwitch__Event2                                         = 2,
	ENiagaraCompileUsageStaticSwitch__SimulationStage3                               = 3,
	ENiagaraCompileUsageStaticSwitch__Default4                                       = 4,
	ENiagaraCompileUsageStaticSwitch__ENiagaraCompileUsageStaticSwitch_MAX5          = 5
};

/// Enum /Script/Niagara.ENiagaraScriptContextStaticSwitch
/// Size: 0x04
enum ENiagaraScriptContextStaticSwitch : uint8_t
{
	ENiagaraScriptContextStaticSwitch__System0                                       = 0,
	ENiagaraScriptContextStaticSwitch__Emitter1                                      = 1,
	ENiagaraScriptContextStaticSwitch__Particle2                                     = 2,
	ENiagaraScriptContextStaticSwitch__ENiagaraScriptContextStaticSwitch_MAX3        = 3
};

/// Enum /Script/Niagara.ENiagaraScriptGroup
/// Size: 0x04
enum ENiagaraScriptGroup : uint8_t
{
	ENiagaraScriptGroup__Particle0                                                   = 0,
	ENiagaraScriptGroup__Emitter1                                                    = 1,
	ENiagaraScriptGroup__System2                                                     = 2,
	ENiagaraScriptGroup__Max3                                                        = 3
};

/// Enum /Script/Niagara.ENiagaraBindingSource
/// Size: 0x07
enum ENiagaraBindingSource : uint8_t
{
	ImplicitFromSource0                                                              = 0,
	ExplicitParticles1                                                               = 1,
	ExplicitEmitter2                                                                 = 2,
	ExplicitSystem3                                                                  = 3,
	ExplicitUser4                                                                    = 4,
	MaxBindingSource5                                                                = 5,
	ENiagaraBindingSource_MAX6                                                       = 6
};

/// Enum /Script/Niagara.ENiagaraRendererSourceDataMode
/// Size: 0x03
enum ENiagaraRendererSourceDataMode : uint8_t
{
	ENiagaraRendererSourceDataMode__Particles0                                       = 0,
	ENiagaraRendererSourceDataMode__Emitter1                                         = 1,
	ENiagaraRendererSourceDataMode__ENiagaraRendererSourceDataMode_MAX2              = 2
};

/// Enum /Script/Niagara.ENiagaraLegacyTrailWidthMode
/// Size: 0x04
enum ENiagaraLegacyTrailWidthMode : uint8_t
{
	ENiagaraLegacyTrailWidthMode__FromCentre0                                        = 0,
	ENiagaraLegacyTrailWidthMode__FromFirst1                                         = 1,
	ENiagaraLegacyTrailWidthMode__FromSecond2                                        = 2,
	ENiagaraLegacyTrailWidthMode__ENiagaraLegacyTrailWidthMode_MAX3                  = 3
};

/// Enum /Script/Niagara.ENiagaraSystemInstanceState
/// Size: 0x08
enum ENiagaraSystemInstanceState : uint8_t
{
	ENiagaraSystemInstanceState__None0                                               = 0,
	ENiagaraSystemInstanceState__PendingSpawn1                                       = 1,
	ENiagaraSystemInstanceState__PendingSpawnPaused2                                 = 2,
	ENiagaraSystemInstanceState__Spawning3                                           = 3,
	ENiagaraSystemInstanceState__Running4                                            = 4,
	ENiagaraSystemInstanceState__Paused5                                             = 5,
	ENiagaraSystemInstanceState__Num6                                                = 6,
	ENiagaraSystemInstanceState__ENiagaraSystemInstanceState_MAX7                    = 7
};

/// Enum /Script/Niagara.ENiagaraFunctionDebugState
/// Size: 0x03
enum ENiagaraFunctionDebugState : uint8_t
{
	ENiagaraFunctionDebugState__NoDebug0                                             = 0,
	ENiagaraFunctionDebugState__Basic1                                               = 1,
	ENiagaraFunctionDebugState__ENiagaraFunctionDebugState_MAX2                      = 2
};

/// Enum /Script/Niagara.ENiagaraGpuComputeTickStage
/// Size: 0x06
enum ENiagaraGpuComputeTickStage : uint8_t
{
	ENiagaraGpuComputeTickStage__PreInitViews0                                       = 0,
	ENiagaraGpuComputeTickStage__PostInitViews1                                      = 1,
	ENiagaraGpuComputeTickStage__PostOpaqueRender2                                   = 2,
	ENiagaraGpuComputeTickStage__Max3                                                = 3,
	ENiagaraGpuComputeTickStage__First4                                              = 0,
	ENiagaraGpuComputeTickStage__Last5                                               = 2
};

/// Enum /Script/Niagara.ENiagaraConditionalOperator
/// Size: 0x07
enum ENiagaraConditionalOperator : uint8_t
{
	ENiagaraConditionalOperator__Equals0                                             = 0,
	ENiagaraConditionalOperator__NotEqual1                                           = 1,
	ENiagaraConditionalOperator__LessThan2                                           = 2,
	ENiagaraConditionalOperator__LessThanOrEqual3                                    = 3,
	ENiagaraConditionalOperator__GreaterThan4                                        = 4,
	ENiagaraConditionalOperator__GreaterThanOrEqual5                                 = 5,
	ENiagaraConditionalOperator__Max6                                                = 6
};

/// Enum /Script/Niagara.ENCPoolMethod
/// Size: 0x06
enum ENCPoolMethod : uint8_t
{
	ENCPoolMethod__None0                                                             = 0,
	ENCPoolMethod__AutoRelease1                                                      = 1,
	ENCPoolMethod__ManualRelease2                                                    = 2,
	ENCPoolMethod__ManualRelease_OnComplete3                                         = 3,
	ENCPoolMethod__FreeInPool4                                                       = 4,
	ENCPoolMethod__ENCPoolMethod_MAX5                                                = 5
};

/// Enum /Script/Niagara.ENiagraDataChannel_IslandMode
/// Size: 0x03
enum ENiagraDataChannel_IslandMode : uint8_t
{
	ENiagraDataChannel_IslandMode__AlignedStatic0                                    = 0,
	ENiagraDataChannel_IslandMode__Dynamic1                                          = 1,
	ENiagraDataChannel_IslandMode__ENiagraDataChannel_MAX2                           = 2
};

/// Enum /Script/Niagara.ENiagaraDataChannelAllocationMode
/// Size: 0x02
enum ENiagaraDataChannelAllocationMode : uint8_t
{
	ENiagaraDataChannelAllocationMode__Static0                                       = 0,
	ENiagaraDataChannelAllocationMode__ENiagaraDataChannelAllocationMode_MAX1        = 1
};

/// Enum /Script/Niagara.ENDIDataChannelSpawnMode
/// Size: 0x04
enum ENDIDataChannelSpawnMode : uint8_t
{
	ENDIDataChannelSpawnMode__Override0                                              = 0,
	ENDIDataChannelSpawnMode__Accumulate1                                            = 1,
	ENDIDataChannelSpawnMode__None2                                                  = 2,
	ENDIDataChannelSpawnMode__Max3                                                   = 3
};

/// Enum /Script/Niagara.ENiagaraSortMode
/// Size: 0x06
enum ENiagaraSortMode : uint8_t
{
	ENiagaraSortMode__None0                                                          = 0,
	ENiagaraSortMode__ViewDepth1                                                     = 1,
	ENiagaraSortMode__ViewDistance2                                                  = 2,
	ENiagaraSortMode__CustomAscending3                                               = 3,
	ENiagaraSortMode__CustomDecending4                                               = 4,
	ENiagaraSortMode__ENiagaraSortMode_MAX5                                          = 5
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuMaxInfluences
/// Size: 0x04
enum ENDISkelMesh_GpuMaxInfluences : uint8_t
{
	ENDISkelMesh_GpuMaxInfluences__AllowMax40                                        = 0,
	ENDISkelMesh_GpuMaxInfluences__AllowMax81                                        = 1,
	ENDISkelMesh_GpuMaxInfluences__Unlimited2                                        = 2,
	ENDISkelMesh_GpuMaxInfluences__ENDISkelMesh_MAX3                                 = 3
};

/// Enum /Script/Niagara.ENDISkelMesh_GpuUniformSamplingFormat
/// Size: 0x04
enum ENDISkelMesh_GpuUniformSamplingFormat : uint8_t
{
	ENDISkelMesh_GpuUniformSamplingFormat__Full0                                     = 0,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_241                               = 1,
	ENDISkelMesh_GpuUniformSamplingFormat__Limited_232                               = 2,
	ENDISkelMesh_GpuUniformSamplingFormat__ENDISkelMesh_MAX3                         = 3
};

/// Enum /Script/Niagara.ENDISkelMesh_AdjacencyTriangleIndexFormat
/// Size: 0x03
enum ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8_t
{
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Full0                                 = 0,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__Half1                                 = 1,
	ENDISkelMesh_AdjacencyTriangleIndexFormat__ENDISkelMesh_MAX2                     = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultRendererPixelCoverageMode
/// Size: 0x03
enum ENiagaraDefaultRendererPixelCoverageMode : uint8_t
{
	ENiagaraDefaultRendererPixelCoverageMode__Enabled0                               = 0,
	ENiagaraDefaultRendererPixelCoverageMode__Disabled1                              = 1,
	ENiagaraDefaultRendererPixelCoverageMode__ENiagaraDefaultRendererPixelCoverageMode_MAX2 = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultSortPrecision
/// Size: 0x03
enum ENiagaraDefaultSortPrecision : uint8_t
{
	ENiagaraDefaultSortPrecision__Low0                                               = 0,
	ENiagaraDefaultSortPrecision__High1                                              = 1,
	ENiagaraDefaultSortPrecision__ENiagaraDefaultSortPrecision_MAX2                  = 2
};

/// Enum /Script/Niagara.ENiagaraDefaultGpuTranslucentLatency
/// Size: 0x03
enum ENiagaraDefaultGpuTranslucentLatency : uint8_t
{
	ENiagaraDefaultGpuTranslucentLatency__Immediate0                                 = 0,
	ENiagaraDefaultGpuTranslucentLatency__Latent1                                    = 1,
	ENiagaraDefaultGpuTranslucentLatency__ENiagaraDefaultGpuTranslucentLatency_MAX2  = 2
};

/// Enum /Script/Niagara.ENDICollisionQuery_AsyncGpuTraceProvider
/// Size: 0x05
enum ENDICollisionQuery_AsyncGpuTraceProvider : uint8_t
{
	ENDICollisionQuery_AsyncGpuTraceProvider__Default0                               = 0,
	ENDICollisionQuery_AsyncGpuTraceProvider__HWRT1                                  = 1,
	ENDICollisionQuery_AsyncGpuTraceProvider__GSDF2                                  = 2,
	ENDICollisionQuery_AsyncGpuTraceProvider__None3                                  = 3,
	ENDICollisionQuery_AsyncGpuTraceProvider__ENDICollisionQuery_MAX4                = 4
};

/// Enum /Script/Niagara.ENiagaraTickBehavior
/// Size: 0x05
enum ENiagaraTickBehavior : uint8_t
{
	ENiagaraTickBehavior__UsePrereqs0                                                = 0,
	ENiagaraTickBehavior__UseComponentTickGroup1                                     = 1,
	ENiagaraTickBehavior__ForceTickFirst2                                            = 2,
	ENiagaraTickBehavior__ForceTickLast3                                             = 3,
	ENiagaraTickBehavior__ENiagaraTickBehavior_MAX4                                  = 4
};

/// Enum /Script/Niagara.ENDIActorComponentSourceMode
/// Size: 0x04
enum ENDIActorComponentSourceMode : uint8_t
{
	ENDIActorComponentSourceMode__Default0                                           = 0,
	ENDIActorComponentSourceMode__AttachParent1                                      = 1,
	ENDIActorComponentSourceMode__LocalPlayer2                                       = 2,
	ENDIActorComponentSourceMode__ENDIActorComponentSourceMode_MAX3                  = 3
};

/// Enum /Script/Niagara.ENDISceneCapture2DSourceMode
/// Size: 0x05
enum ENDISceneCapture2DSourceMode : uint8_t
{
	ENDISceneCapture2DSourceMode__UserParameterThenAttachParent0                     = 0,
	ENDISceneCapture2DSourceMode__UserParameterOnly1                                 = 1,
	ENDISceneCapture2DSourceMode__AttachParentOnly2                                  = 2,
	ENDISceneCapture2DSourceMode__Managed3                                           = 3,
	ENDISceneCapture2DSourceMode__ENDISceneCapture2DSourceMode_MAX4                  = 4
};

/// Enum /Script/Niagara.ENDISceneCapture2DOffsetMode
/// Size: 0x05
enum ENDISceneCapture2DOffsetMode : uint8_t
{
	ENDISceneCapture2DOffsetMode__Disabled0                                          = 0,
	ENDISceneCapture2DOffsetMode__RelativeLocal1                                     = 1,
	ENDISceneCapture2DOffsetMode__RelativeWorld2                                     = 2,
	ENDISceneCapture2DOffsetMode__AbsoluteWorld3                                     = 3,
	ENDISceneCapture2DOffsetMode__ENDISceneCapture2DOffsetMode_MAX4                  = 4
};

/// Enum /Script/Niagara.ENDIStaticMesh_SourceMode
/// Size: 0x05
enum ENDIStaticMesh_SourceMode : uint8_t
{
	ENDIStaticMesh_SourceMode__Default0                                              = 0,
	ENDIStaticMesh_SourceMode__Source1                                               = 1,
	ENDIStaticMesh_SourceMode__AttachParent2                                         = 2,
	ENDIStaticMesh_SourceMode__DefaultMeshOnly3                                      = 3,
	ENDIStaticMesh_SourceMode__ENDIStaticMesh_MAX4                                   = 4
};

/// Enum /Script/Niagara.ENDIObjectPropertyReaderSourceMode
/// Size: 0x04
enum ENDIObjectPropertyReaderSourceMode : uint8_t
{
	ENDIObjectPropertyReaderSourceMode__Binding0                                     = 0,
	ENDIObjectPropertyReaderSourceMode__AttachParentActor1                           = 1,
	ENDIObjectPropertyReaderSourceMode__BindingThenAttachParentActor2                = 2,
	ENDIObjectPropertyReaderSourceMode__ENDIObjectPropertyReaderSourceMode_MAX3      = 3
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionStartBehavior
/// Size: 0x02
enum ENiagaraSystemSpawnSectionStartBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionStartBehavior__Activate0                               = 0,
	ENiagaraSystemSpawnSectionStartBehavior__ENiagaraSystemSpawnSectionStartBehavior_MAX1 = 1
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
/// Size: 0x03
enum ENiagaraSystemSpawnSectionEvaluateBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionEvaluateBehavior__ActivateIfInactive0                  = 0,
	ENiagaraSystemSpawnSectionEvaluateBehavior__None1                                = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior__ENiagaraSystemSpawnSectionEvaluateBehavior_MAX2 = 2
};

/// Enum /Script/Niagara.ENiagaraSystemSpawnSectionEndBehavior
/// Size: 0x04
enum ENiagaraSystemSpawnSectionEndBehavior : uint8_t
{
	ENiagaraSystemSpawnSectionEndBehavior__SetSystemInactive0                        = 0,
	ENiagaraSystemSpawnSectionEndBehavior__Deactivate1                               = 1,
	ENiagaraSystemSpawnSectionEndBehavior__None2                                     = 2,
	ENiagaraSystemSpawnSectionEndBehavior__ENiagaraSystemSpawnSectionEndBehavior_MAX3 = 3
};

/// Enum /Script/Niagara.ENiagaraCompilationState
/// Size: 0x10
enum ENiagaraCompilationState : uint8_t
{
	ENiagaraCompilationState__CheckDDC0                                              = 0,
	ENiagaraCompilationState__Precompile1                                            = 1,
	ENiagaraCompilationState__StartCompileJob2                                       = 2,
	ENiagaraCompilationState__AwaitResult3                                           = 3,
	ENiagaraCompilationState__OptimizeByteCode4                                      = 4,
	ENiagaraCompilationState__ProcessResult5                                         = 5,
	ENiagaraCompilationState__PutToDDC6                                              = 6,
	ENiagaraCompilationState__Finished7                                              = 7,
	ENiagaraCompilationState__Aborted8                                               = 8,
	ENiagaraCompilationState__ENiagaraCompilationState_MAX9                          = 9
};

/// Enum /Script/Niagara.ENiagaraBakerViewMode
/// Size: 0x09
enum ENiagaraBakerViewMode : uint8_t
{
	ENiagaraBakerViewMode__Perspective0                                              = 0,
	ENiagaraBakerViewMode__OrthoFront1                                               = 1,
	ENiagaraBakerViewMode__OrthoBack2                                                = 2,
	ENiagaraBakerViewMode__OrthoLeft3                                                = 3,
	ENiagaraBakerViewMode__OrthoRight4                                               = 4,
	ENiagaraBakerViewMode__OrthoTop5                                                 = 5,
	ENiagaraBakerViewMode__OrthoBottom6                                              = 6,
	ENiagaraBakerViewMode__Num7                                                      = 7,
	ENiagaraBakerViewMode__ENiagaraBakerViewMode_MAX8                                = 8
};

/// Enum /Script/Niagara.ENiagaraOcclusionQueryMode
/// Size: 0x04
enum ENiagaraOcclusionQueryMode : uint8_t
{
	ENiagaraOcclusionQueryMode__Default0                                             = 0,
	ENiagaraOcclusionQueryMode__AlwaysEnabled1                                       = 1,
	ENiagaraOcclusionQueryMode__AlwaysDisabled2                                      = 2,
	ENiagaraOcclusionQueryMode__ENiagaraOcclusionQueryMode_MAX3                      = 3
};

/// Enum /Script/Niagara.ENiagaraDataInterfaceEmitterBindingMode
/// Size: 0x03
enum ENiagaraDataInterfaceEmitterBindingMode : uint8_t
{
	ENiagaraDataInterfaceEmitterBindingMode__Self0                                   = 0,
	ENiagaraDataInterfaceEmitterBindingMode__Other1                                  = 1,
	ENiagaraDataInterfaceEmitterBindingMode__ENiagaraDataInterfaceEmitterBindingMode_MAX2 = 2
};

/// Enum /Script/Niagara.ENDIExport_GPUAllocationMode
/// Size: 0x03
enum ENDIExport_GPUAllocationMode : uint8_t
{
	ENDIExport_GPUAllocationMode__FixedSize0                                         = 0,
	ENDIExport_GPUAllocationMode__PerParticle1                                       = 1,
	ENDIExport_GPUAllocationMode__ENDIExport_MAX2                                    = 2
};

/// Enum /Script/Niagara.ENDILandscape_SourceMode
/// Size: 0x04
enum ENDILandscape_SourceMode : uint8_t
{
	ENDILandscape_SourceMode__Default0                                               = 0,
	ENDILandscape_SourceMode__Source1                                                = 1,
	ENDILandscape_SourceMode__AttachParent2                                          = 2,
	ENDILandscape_SourceMode__ENDILandscape_MAX3                                     = 3
};

/// Enum /Script/Niagara.ESetResolutionMethod
/// Size: 0x04
enum ESetResolutionMethod : uint8_t
{
	ESetResolutionMethod__Independent0                                               = 0,
	ESetResolutionMethod__MaxAxis1                                                   = 1,
	ESetResolutionMethod__CellSize2                                                  = 2,
	ESetResolutionMethod__ESetResolutionMethod_MAX3                                  = 3
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SourceMode
/// Size: 0x04
enum ENDISkeletalMesh_SourceMode : uint8_t
{
	ENDISkeletalMesh_SourceMode__Default0                                            = 0,
	ENDISkeletalMesh_SourceMode__Source1                                             = 1,
	ENDISkeletalMesh_SourceMode__AttachParent2                                       = 2,
	ENDISkeletalMesh_SourceMode__ENDISkeletalMesh_MAX3                               = 3
};

/// Enum /Script/Niagara.ENDISkeletalMesh_SkinningMode
/// Size: 0x05
enum ENDISkeletalMesh_SkinningMode : uint8_t
{
	ENDISkeletalMesh_SkinningMode__Invalid0                                          = 255,
	ENDISkeletalMesh_SkinningMode__None1                                             = 0,
	ENDISkeletalMesh_SkinningMode__SkinOnTheFly2                                     = 1,
	ENDISkeletalMesh_SkinningMode__PreSkin3                                          = 2,
	ENDISkeletalMesh_SkinningMode__ENDISkeletalMesh_MAX4                             = 256
};

/// Enum /Script/Niagara.ENiagaraDebugPlaybackMode
/// Size: 0x05
enum ENiagaraDebugPlaybackMode : uint8_t
{
	ENiagaraDebugPlaybackMode__Play0                                                 = 0,
	ENiagaraDebugPlaybackMode__Loop1                                                 = 1,
	ENiagaraDebugPlaybackMode__Paused2                                               = 2,
	ENiagaraDebugPlaybackMode__Step3                                                 = 3,
	ENiagaraDebugPlaybackMode__ENiagaraDebugPlaybackMode_MAX4                        = 4
};

/// Enum /Script/Niagara.ENiagaraDebugHudHAlign
/// Size: 0x04
enum ENiagaraDebugHudHAlign : uint8_t
{
	ENiagaraDebugHudHAlign__Left0                                                    = 0,
	ENiagaraDebugHudHAlign__Center1                                                  = 1,
	ENiagaraDebugHudHAlign__Right2                                                   = 2,
	ENiagaraDebugHudHAlign__ENiagaraDebugHudHAlign_MAX3                              = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudVAlign
/// Size: 0x04
enum ENiagaraDebugHudVAlign : uint8_t
{
	ENiagaraDebugHudVAlign__Top0                                                     = 0,
	ENiagaraDebugHudVAlign__Center1                                                  = 1,
	ENiagaraDebugHudVAlign__Bottom2                                                  = 2,
	ENiagaraDebugHudVAlign__ENiagaraDebugHudVAlign_MAX3                              = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHudFont
/// Size: 0x03
enum ENiagaraDebugHudFont : uint8_t
{
	ENiagaraDebugHudFont__Small0                                                     = 0,
	ENiagaraDebugHudFont__Normal1                                                    = 1,
	ENiagaraDebugHudFont__ENiagaraDebugHudFont_MAX2                                  = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHudVerbosity
/// Size: 0x04
enum ENiagaraDebugHudVerbosity : uint8_t
{
	ENiagaraDebugHudVerbosity__None0                                                 = 0,
	ENiagaraDebugHudVerbosity__Basic1                                                = 1,
	ENiagaraDebugHudVerbosity__Verbose2                                              = 2,
	ENiagaraDebugHudVerbosity__ENiagaraDebugHudVerbosity_MAX3                        = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHUDOverviewMode
/// Size: 0x06
enum ENiagaraDebugHUDOverviewMode : uint8_t
{
	ENiagaraDebugHUDOverviewMode__Overview0                                          = 0,
	ENiagaraDebugHUDOverviewMode__Scalability1                                       = 1,
	ENiagaraDebugHUDOverviewMode__Performance2                                       = 2,
	ENiagaraDebugHUDOverviewMode__PerformanceGraph3                                  = 3,
	ENiagaraDebugHUDOverviewMode__GpuComputePerformance4                             = 4,
	ENiagaraDebugHUDOverviewMode__ENiagaraDebugHUDOverviewMode_MAX5                  = 5
};

/// Enum /Script/Niagara.ENiagaraDebugHUDPerfGraphMode
/// Size: 0x04
enum ENiagaraDebugHUDPerfGraphMode : uint8_t
{
	ENiagaraDebugHUDPerfGraphMode__GameThread0                                       = 0,
	ENiagaraDebugHUDPerfGraphMode__RenderThread1                                     = 1,
	ENiagaraDebugHUDPerfGraphMode__GPU2                                              = 2,
	ENiagaraDebugHUDPerfGraphMode__ENiagaraDebugHUDPerfGraphMode_MAX3                = 3
};

/// Enum /Script/Niagara.ENiagaraDebugHUDPerfSampleMode
/// Size: 0x03
enum ENiagaraDebugHUDPerfSampleMode : uint8_t
{
	ENiagaraDebugHUDPerfSampleMode__FrameTotal0                                      = 0,
	ENiagaraDebugHUDPerfSampleMode__PerInstanceAverage1                              = 1,
	ENiagaraDebugHUDPerfSampleMode__ENiagaraDebugHUDPerfSampleMode_MAX2              = 2
};

/// Enum /Script/Niagara.ENiagaraDebugHUDDOverviewSort
/// Size: 0x07
enum ENiagaraDebugHUDDOverviewSort : uint8_t
{
	ENiagaraDebugHUDDOverviewSort__Name0                                             = 0,
	ENiagaraDebugHUDDOverviewSort__NumberRegistered1                                 = 1,
	ENiagaraDebugHUDDOverviewSort__NumberActive2                                     = 2,
	ENiagaraDebugHUDDOverviewSort__NumberScalability3                                = 3,
	ENiagaraDebugHUDDOverviewSort__MemoryUsage4                                      = 4,
	ENiagaraDebugHUDDOverviewSort__RecentlyVisibilty5                                = 5,
	ENiagaraDebugHUDDOverviewSort__ENiagaraDebugHUDDOverviewSort_MAX6                = 6
};

/// Enum /Script/Niagara.ENiagaraCullReaction
/// Size: 0x06
enum ENiagaraCullReaction : uint8_t
{
	ENiagaraCullReaction__Deactivate0                                                = 0,
	ENiagaraCullReaction__DeactivateImmediate1                                       = 1,
	ENiagaraCullReaction__DeactivateResume2                                          = 2,
	ENiagaraCullReaction__DeactivateImmediateResume3                                 = 3,
	ENiagaraCullReaction__PauseResume4                                               = 4,
	ENiagaraCullReaction__ENiagaraCullReaction_MAX5                                  = 5
};

/// Enum /Script/Niagara.ENiagaraScalabilityUpdateFrequency
/// Size: 0x06
enum ENiagaraScalabilityUpdateFrequency : uint8_t
{
	ENiagaraScalabilityUpdateFrequency__SpawnOnly0                                   = 0,
	ENiagaraScalabilityUpdateFrequency__Low1                                         = 1,
	ENiagaraScalabilityUpdateFrequency__Medium2                                      = 2,
	ENiagaraScalabilityUpdateFrequency__High3                                        = 3,
	ENiagaraScalabilityUpdateFrequency__Continuous4                                  = 4,
	ENiagaraScalabilityUpdateFrequency__ENiagaraScalabilityUpdateFrequency_MAX5      = 5
};

/// Enum /Script/Niagara.ENiagaraCullProxyMode
/// Size: 0x03
enum ENiagaraCullProxyMode : uint8_t
{
	ENiagaraCullProxyMode__None0                                                     = 0,
	ENiagaraCullProxyMode__Instanced_Rendered1                                       = 1,
	ENiagaraCullProxyMode__ENiagaraCullProxyMode_MAX2                                = 2
};

/// Enum /Script/Niagara.EScriptExecutionMode
/// Size: 0x04
enum EScriptExecutionMode : uint8_t
{
	EScriptExecutionMode__EveryParticle0                                             = 0,
	EScriptExecutionMode__SpawnedParticles1                                          = 1,
	EScriptExecutionMode__SingleParticle2                                            = 2,
	EScriptExecutionMode__EScriptExecutionMode_MAX3                                  = 3
};

/// Enum /Script/Niagara.EParticleAllocationMode
/// Size: 0x04
enum EParticleAllocationMode : uint8_t
{
	EParticleAllocationMode__AutomaticEstimate0                                      = 0,
	EParticleAllocationMode__ManualEstimate1                                         = 1,
	EParticleAllocationMode__FixedCount2                                             = 2,
	EParticleAllocationMode__EParticleAllocationMode_MAX3                            = 3
};

/// Enum /Script/Niagara.ENiagaraEmitterCalculateBoundMode
/// Size: 0x04
enum ENiagaraEmitterCalculateBoundMode : uint8_t
{
	ENiagaraEmitterCalculateBoundMode__Dynamic0                                      = 0,
	ENiagaraEmitterCalculateBoundMode__Fixed1                                        = 1,
	ENiagaraEmitterCalculateBoundMode__Programmable2                                 = 2,
	ENiagaraEmitterCalculateBoundMode__ENiagaraEmitterCalculateBoundMode_MAX3        = 3
};

/// Enum /Script/Niagara.ENiagaraMeshFacingMode
/// Size: 0x05
enum ENiagaraMeshFacingMode : uint8_t
{
	ENiagaraMeshFacingMode__Default0                                                 = 0,
	ENiagaraMeshFacingMode__Velocity1                                                = 1,
	ENiagaraMeshFacingMode__CameraPosition2                                          = 2,
	ENiagaraMeshFacingMode__CameraPlane3                                             = 3,
	ENiagaraMeshFacingMode__ENiagaraMeshFacingMode_MAX4                              = 4
};

/// Enum /Script/Niagara.ENiagaraMeshPivotOffsetSpace
/// Size: 0x05
enum ENiagaraMeshPivotOffsetSpace : uint8_t
{
	ENiagaraMeshPivotOffsetSpace__Mesh0                                              = 0,
	ENiagaraMeshPivotOffsetSpace__Simulation1                                        = 1,
	ENiagaraMeshPivotOffsetSpace__World2                                             = 2,
	ENiagaraMeshPivotOffsetSpace__Local3                                             = 3,
	ENiagaraMeshPivotOffsetSpace__ENiagaraMeshPivotOffsetSpace_MAX4                  = 4
};

/// Enum /Script/Niagara.ENiagaraMeshLockedAxisSpace
/// Size: 0x04
enum ENiagaraMeshLockedAxisSpace : uint8_t
{
	ENiagaraMeshLockedAxisSpace__Simulation0                                         = 0,
	ENiagaraMeshLockedAxisSpace__World1                                              = 1,
	ENiagaraMeshLockedAxisSpace__Local2                                              = 2,
	ENiagaraMeshLockedAxisSpace__ENiagaraMeshLockedAxisSpace_MAX3                    = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSelectionState
/// Size: 0x04
enum ENiagaraPlatformSelectionState : uint8_t
{
	ENiagaraPlatformSelectionState__Default0                                         = 0,
	ENiagaraPlatformSelectionState__Enabled1                                         = 1,
	ENiagaraPlatformSelectionState__Disabled2                                        = 2,
	ENiagaraPlatformSelectionState__ENiagaraPlatformSelectionState_MAX3              = 3
};

/// Enum /Script/Niagara.ENiagaraPlatformSetState
/// Size: 0x05
enum ENiagaraPlatformSetState : uint8_t
{
	ENiagaraPlatformSetState__Disabled0                                              = 0,
	ENiagaraPlatformSetState__Enabled1                                               = 1,
	ENiagaraPlatformSetState__Active2                                                = 2,
	ENiagaraPlatformSetState__Unknown3                                               = 3,
	ENiagaraPlatformSetState__ENiagaraPlatformSetState_MAX4                          = 4
};

/// Enum /Script/Niagara.ENiagaraCVarConditionResponse
/// Size: 0x04
enum ENiagaraCVarConditionResponse : uint8_t
{
	ENiagaraCVarConditionResponse__None0                                             = 0,
	ENiagaraCVarConditionResponse__Enable1                                           = 1,
	ENiagaraCVarConditionResponse__Disable2                                          = 2,
	ENiagaraCVarConditionResponse__ENiagaraCVarConditionResponse_MAX3                = 3
};

/// Enum /Script/Niagara.ENiagaraDeviceProfileRedirectMode
/// Size: 0x03
enum ENiagaraDeviceProfileRedirectMode : uint8_t
{
	ENiagaraDeviceProfileRedirectMode__CVar0                                         = 0,
	ENiagaraDeviceProfileRedirectMode__DeviceProfile1                                = 1,
	ENiagaraDeviceProfileRedirectMode__ENiagaraDeviceProfileRedirectMode_MAX2        = 2
};

/// Enum /Script/Niagara.ENiagaraPreviewGridResetMode
/// Size: 0x04
enum ENiagaraPreviewGridResetMode : uint8_t
{
	ENiagaraPreviewGridResetMode__Never0                                             = 0,
	ENiagaraPreviewGridResetMode__Individual1                                        = 1,
	ENiagaraPreviewGridResetMode__All2                                               = 2,
	ENiagaraPreviewGridResetMode__ENiagaraPreviewGridResetMode_MAX3                  = 3
};

/// Enum /Script/Niagara.ENiagaraRendererSortPrecision
/// Size: 0x04
enum ENiagaraRendererSortPrecision : uint8_t
{
	ENiagaraRendererSortPrecision__Default0                                          = 0,
	ENiagaraRendererSortPrecision__Low1                                              = 1,
	ENiagaraRendererSortPrecision__High2                                             = 2,
	ENiagaraRendererSortPrecision__ENiagaraRendererSortPrecision_MAX3                = 3
};

/// Enum /Script/Niagara.ENiagaraRendererGpuTranslucentLatency
/// Size: 0x04
enum ENiagaraRendererGpuTranslucentLatency : uint8_t
{
	ENiagaraRendererGpuTranslucentLatency__ProjectDefault0                           = 0,
	ENiagaraRendererGpuTranslucentLatency__Immediate1                                = 1,
	ENiagaraRendererGpuTranslucentLatency__Latent2                                   = 2,
	ENiagaraRendererGpuTranslucentLatency__ENiagaraRendererGpuTranslucentLatency_MAX3 = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonFacingMode
/// Size: 0x04
enum ENiagaraRibbonFacingMode : uint8_t
{
	ENiagaraRibbonFacingMode__Screen0                                                = 0,
	ENiagaraRibbonFacingMode__Custom1                                                = 1,
	ENiagaraRibbonFacingMode__CustomSideVector2                                      = 2,
	ENiagaraRibbonFacingMode__ENiagaraRibbonFacingMode_MAX3                          = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonAgeOffsetMode
/// Size: 0x03
enum ENiagaraRibbonAgeOffsetMode : uint8_t
{
	ENiagaraRibbonAgeOffsetMode__Scale0                                              = 0,
	ENiagaraRibbonAgeOffsetMode__Clip1                                               = 1,
	ENiagaraRibbonAgeOffsetMode__ENiagaraRibbonAgeOffsetMode_MAX2                    = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonDrawDirection
/// Size: 0x03
enum ENiagaraRibbonDrawDirection : uint8_t
{
	ENiagaraRibbonDrawDirection__FrontToBack0                                        = 0,
	ENiagaraRibbonDrawDirection__BackToFront1                                        = 1,
	ENiagaraRibbonDrawDirection__ENiagaraRibbonDrawDirection_MAX2                    = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonShapeMode
/// Size: 0x05
enum ENiagaraRibbonShapeMode : uint8_t
{
	ENiagaraRibbonShapeMode__Plane0                                                  = 0,
	ENiagaraRibbonShapeMode__MultiPlane1                                             = 1,
	ENiagaraRibbonShapeMode__Tube2                                                   = 2,
	ENiagaraRibbonShapeMode__Custom3                                                 = 3,
	ENiagaraRibbonShapeMode__ENiagaraRibbonShapeMode_MAX4                            = 4
};

/// Enum /Script/Niagara.ENiagaraRibbonTessellationMode
/// Size: 0x04
enum ENiagaraRibbonTessellationMode : uint8_t
{
	ENiagaraRibbonTessellationMode__Automatic0                                       = 0,
	ENiagaraRibbonTessellationMode__Custom1                                          = 1,
	ENiagaraRibbonTessellationMode__Disabled2                                        = 2,
	ENiagaraRibbonTessellationMode__ENiagaraRibbonTessellationMode_MAX3              = 3
};

/// Enum /Script/Niagara.ENiagaraRibbonUVEdgeMode
/// Size: 0x03
enum ENiagaraRibbonUVEdgeMode : uint8_t
{
	ENiagaraRibbonUVEdgeMode__SmoothTransition0                                      = 0,
	ENiagaraRibbonUVEdgeMode__Locked1                                                = 1,
	ENiagaraRibbonUVEdgeMode__ENiagaraRibbonUVEdgeMode_MAX2                          = 2
};

/// Enum /Script/Niagara.ENiagaraRibbonUVDistributionMode
/// Size: 0x05
enum ENiagaraRibbonUVDistributionMode : uint8_t
{
	ENiagaraRibbonUVDistributionMode__ScaledUniformly0                               = 0,
	ENiagaraRibbonUVDistributionMode__ScaledUsingRibbonSegmentLength1                = 1,
	ENiagaraRibbonUVDistributionMode__TiledOverRibbonLength2                         = 2,
	ENiagaraRibbonUVDistributionMode__TiledFromStartOverRibbonLength3                = 3,
	ENiagaraRibbonUVDistributionMode__ENiagaraRibbonUVDistributionMode_MAX4          = 4
};

/// Enum /Script/Niagara.EUnusedAttributeBehaviour
/// Size: 0x06
enum EUnusedAttributeBehaviour : uint8_t
{
	EUnusedAttributeBehaviour__Copy0                                                 = 0,
	EUnusedAttributeBehaviour__Zero1                                                 = 1,
	EUnusedAttributeBehaviour__None2                                                 = 2,
	EUnusedAttributeBehaviour__MarkInvalid3                                          = 3,
	EUnusedAttributeBehaviour__PassThrough4                                          = 4,
	EUnusedAttributeBehaviour__EUnusedAttributeBehaviour_MAX5                        = 5
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyType
/// Size: 0x03
enum ENiagaraModuleDependencyType : uint8_t
{
	ENiagaraModuleDependencyType__PreDependency0                                     = 0,
	ENiagaraModuleDependencyType__PostDependency1                                    = 1,
	ENiagaraModuleDependencyType__ENiagaraModuleDependencyType_MAX2                  = 2
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyScriptConstraint
/// Size: 0x03
enum ENiagaraModuleDependencyScriptConstraint : uint8_t
{
	ENiagaraModuleDependencyScriptConstraint__SameScript0                            = 0,
	ENiagaraModuleDependencyScriptConstraint__AllScripts1                            = 1,
	ENiagaraModuleDependencyScriptConstraint__ENiagaraModuleDependencyScriptConstraint_MAX2 = 2
};

/// Enum /Script/Niagara.ENiagaraScriptLibraryVisibility
/// Size: 0x05
enum ENiagaraScriptLibraryVisibility : uint8_t
{
	ENiagaraScriptLibraryVisibility__Invalid0                                        = 0,
	ENiagaraScriptLibraryVisibility__Unexposed1                                      = 1,
	ENiagaraScriptLibraryVisibility__Library2                                        = 2,
	ENiagaraScriptLibraryVisibility__Hidden3                                         = 3,
	ENiagaraScriptLibraryVisibility__ENiagaraScriptLibraryVisibility_MAX4            = 4
};

/// Enum /Script/Niagara.ENiagaraScriptTemplateSpecification
/// Size: 0x04
enum ENiagaraScriptTemplateSpecification : uint8_t
{
	ENiagaraScriptTemplateSpecification__None0                                       = 0,
	ENiagaraScriptTemplateSpecification__Template1                                   = 1,
	ENiagaraScriptTemplateSpecification__Behavior2                                   = 2,
	ENiagaraScriptTemplateSpecification__ENiagaraScriptTemplateSpecification_MAX3    = 3
};

/// Enum /Script/Niagara.ENiagaraEmitterDefaultSummaryState
/// Size: 0x03
enum ENiagaraEmitterDefaultSummaryState : uint8_t
{
	ENiagaraEmitterDefaultSummaryState__Default0                                     = 0,
	ENiagaraEmitterDefaultSummaryState__Summary1                                     = 1,
	ENiagaraEmitterDefaultSummaryState__ENiagaraEmitterDefaultSummaryState_MAX2      = 2
};

/// Enum /Script/Niagara.ENiagaraModuleDependencyUsage
/// Size: 0x06
enum ENiagaraModuleDependencyUsage : uint8_t
{
	ENiagaraModuleDependencyUsage__None0                                             = 0,
	ENiagaraModuleDependencyUsage__Spawn1                                            = 1,
	ENiagaraModuleDependencyUsage__Update2                                           = 2,
	ENiagaraModuleDependencyUsage__Event3                                            = 3,
	ENiagaraModuleDependencyUsage__SimulationStage4                                  = 4,
	ENiagaraModuleDependencyUsage__ENiagaraModuleDependencyUsage_MAX5                = 5
};

/// Enum /Script/Niagara.ENiagaraInlineDynamicInputFormatTokenUsage
/// Size: 0x04
enum ENiagaraInlineDynamicInputFormatTokenUsage : uint8_t
{
	ENiagaraInlineDynamicInputFormatTokenUsage__Input0                               = 0,
	ENiagaraInlineDynamicInputFormatTokenUsage__Decorator1                           = 1,
	ENiagaraInlineDynamicInputFormatTokenUsage__LineBreak2                           = 2,
	ENiagaraInlineDynamicInputFormatTokenUsage__ENiagaraInlineDynamicInputFormatTokenUsage_MAX3 = 3
};

/// Enum /Script/Niagara.ENiagaraSpriteAlignment
/// Size: 0x05
enum ENiagaraSpriteAlignment : uint8_t
{
	ENiagaraSpriteAlignment__Unaligned0                                              = 0,
	ENiagaraSpriteAlignment__VelocityAligned1                                        = 1,
	ENiagaraSpriteAlignment__CustomAlignment2                                        = 2,
	ENiagaraSpriteAlignment__Automatic3                                              = 3,
	ENiagaraSpriteAlignment__ENiagaraSpriteAlignment_MAX4                            = 4
};

/// Enum /Script/Niagara.ENiagaraSpriteFacingMode
/// Size: 0x07
enum ENiagaraSpriteFacingMode : uint8_t
{
	ENiagaraSpriteFacingMode__FaceCamera0                                            = 0,
	ENiagaraSpriteFacingMode__FaceCameraPlane1                                       = 1,
	ENiagaraSpriteFacingMode__CustomFacingVector2                                    = 2,
	ENiagaraSpriteFacingMode__FaceCameraPosition3                                    = 3,
	ENiagaraSpriteFacingMode__FaceCameraDistanceBlend4                               = 4,
	ENiagaraSpriteFacingMode__Automatic5                                             = 5,
	ENiagaraSpriteFacingMode__ENiagaraSpriteFacingMode_MAX6                          = 6
};

/// Enum /Script/Niagara.ENiagaraRendererPixelCoverageMode
/// Size: 0x07
enum ENiagaraRendererPixelCoverageMode : uint8_t
{
	ENiagaraRendererPixelCoverageMode__Automatic0                                    = 0,
	ENiagaraRendererPixelCoverageMode__Disabled1                                     = 1,
	ENiagaraRendererPixelCoverageMode__Enabled2                                      = 2,
	ENiagaraRendererPixelCoverageMode__Enabled_RGBA3                                 = 3,
	ENiagaraRendererPixelCoverageMode__Enabled_RGB4                                  = 4,
	ENiagaraRendererPixelCoverageMode__Enabled_A5                                    = 5,
	ENiagaraRendererPixelCoverageMode__ENiagaraRendererPixelCoverageMode_MAX6        = 6
};

/// Enum /Script/Niagara.ENiagaraStructConversionType
/// Size: 0x07
enum ENiagaraStructConversionType : uint8_t
{
	ENiagaraStructConversionType__CopyOnly0                                          = 0,
	ENiagaraStructConversionType__DoubleToFloat1                                     = 1,
	ENiagaraStructConversionType__Vector22                                           = 2,
	ENiagaraStructConversionType__Vector33                                           = 3,
	ENiagaraStructConversionType__Vector44                                           = 4,
	ENiagaraStructConversionType__Quat5                                              = 5,
	ENiagaraStructConversionType__ENiagaraStructConversionType_MAX6                  = 6
};

/// Enum /Script/Niagara.ENiagaraNumericOutputTypeSelectionMode
/// Size: 0x06
enum ENiagaraNumericOutputTypeSelectionMode : uint8_t
{
	ENiagaraNumericOutputTypeSelectionMode__None0                                    = 0,
	ENiagaraNumericOutputTypeSelectionMode__Largest1                                 = 1,
	ENiagaraNumericOutputTypeSelectionMode__Smallest2                                = 2,
	ENiagaraNumericOutputTypeSelectionMode__Scalar3                                  = 3,
	ENiagaraNumericOutputTypeSelectionMode__Custom4                                  = 4,
	ENiagaraNumericOutputTypeSelectionMode__ENiagaraNumericOutputTypeSelectionMode_MAX5 = 5
};

/// Enum /Script/Niagara.ENiagaraExecutionStateSource
/// Size: 0x05
enum ENiagaraExecutionStateSource : uint8_t
{
	ENiagaraExecutionStateSource__Scalability0                                       = 0,
	ENiagaraExecutionStateSource__Internal1                                          = 1,
	ENiagaraExecutionStateSource__Owner2                                             = 2,
	ENiagaraExecutionStateSource__InternalCompletion3                                = 3,
	ENiagaraExecutionStateSource__ENiagaraExecutionStateSource_MAX4                  = 4
};

/// Enum /Script/Niagara.ENiagaraExecutionState
/// Size: 0x07
enum ENiagaraExecutionState : uint8_t
{
	ENiagaraExecutionState__Active0                                                  = 0,
	ENiagaraExecutionState__Inactive1                                                = 1,
	ENiagaraExecutionState__InactiveClear2                                           = 2,
	ENiagaraExecutionState__Complete3                                                = 3,
	ENiagaraExecutionState__Disabled4                                                = 4,
	ENiagaraExecutionState__Num5                                                     = 5,
	ENiagaraExecutionState__ENiagaraExecutionState_MAX6                              = 6
};

/// Enum /Script/Niagara.ENiagaraCoordinateSpace
/// Size: 0x04
enum ENiagaraCoordinateSpace : uint8_t
{
	ENiagaraCoordinateSpace__Simulation0                                             = 0,
	ENiagaraCoordinateSpace__World1                                                  = 1,
	ENiagaraCoordinateSpace__Local2                                                  = 2,
	ENiagaraCoordinateSpace__ENiagaraCoordinateSpace_MAX3                            = 3
};

/// Enum /Script/Niagara.ENiagaraPythonUpdateScriptReference
/// Size: 0x04
enum ENiagaraPythonUpdateScriptReference : uint8_t
{
	ENiagaraPythonUpdateScriptReference__None0                                       = 0,
	ENiagaraPythonUpdateScriptReference__ScriptAsset1                                = 1,
	ENiagaraPythonUpdateScriptReference__DirectTextEntry2                            = 2,
	ENiagaraPythonUpdateScriptReference__ENiagaraPythonUpdateScriptReference_MAX3    = 3
};

/// Enum /Script/Niagara.ENiagaraOrientationAxis
/// Size: 0x04
enum ENiagaraOrientationAxis : uint8_t
{
	ENiagaraOrientationAxis__XAxis0                                                  = 0,
	ENiagaraOrientationAxis__YAxis1                                                  = 1,
	ENiagaraOrientationAxis__ZAxis2                                                  = 2,
	ENiagaraOrientationAxis__ENiagaraOrientationAxis_MAX3                            = 3
};

/// Enum /Script/Niagara.ENiagaraInputWidgetType
/// Size: 0x06
enum ENiagaraInputWidgetType : uint8_t
{
	ENiagaraInputWidgetType__Default0                                                = 0,
	ENiagaraInputWidgetType__Slider1                                                 = 1,
	ENiagaraInputWidgetType__Volume2                                                 = 2,
	ENiagaraInputWidgetType__NumericDropdown3                                        = 3,
	ENiagaraInputWidgetType__EnumStyle4                                              = 4,
	ENiagaraInputWidgetType__ENiagaraInputWidgetType_MAX5                            = 5
};

/// Enum /Script/Niagara.ENiagaraBoolDisplayMode
/// Size: 0x04
enum ENiagaraBoolDisplayMode : uint8_t
{
	ENiagaraBoolDisplayMode__DisplayAlways0                                          = 0,
	ENiagaraBoolDisplayMode__DisplayIfTrue1                                          = 1,
	ENiagaraBoolDisplayMode__DisplayIfFalse2                                         = 2,
	ENiagaraBoolDisplayMode__ENiagaraBoolDisplayMode_MAX3                            = 3
};

/// Enum /Script/Niagara.ENiagaraValidationSeverity
/// Size: 0x04
enum ENiagaraValidationSeverity : uint8_t
{
	ENiagaraValidationSeverity__Info0                                                = 0,
	ENiagaraValidationSeverity__Warning1                                             = 1,
	ENiagaraValidationSeverity__Error2                                               = 2,
	ENiagaraValidationSeverity__ENiagaraValidationSeverity_MAX3                      = 3
};

/// Enum /Script/Niagara.ENiagaraVariantMode
/// Size: 0x05
enum ENiagaraVariantMode : uint8_t
{
	ENiagaraVariantMode__None0                                                       = 0,
	ENiagaraVariantMode__Object1                                                     = 1,
	ENiagaraVariantMode__DataInterface2                                              = 2,
	ENiagaraVariantMode__Bytes3                                                      = 3,
	ENiagaraVariantMode__ENiagaraVariantMode_MAX4                                    = 4
};

/// Enum /Script/Niagara.EVolumeCacheType
/// Size: 0x02
enum EVolumeCacheType : uint8_t
{
	EVolumeCacheType__OpenVDB0                                                       = 0,
	EVolumeCacheType__EVolumeCacheType_MAX1                                          = 1
};

