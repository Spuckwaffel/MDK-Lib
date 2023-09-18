/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package NiagaraShader.

/// Struct /Script/NiagaraShader.SimulationStageMetaData
/// Size: 0x0080 (0x000000 - 0x000080)
class FSimulationStageMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     SimulationStageName                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     EnabledBinding                                              ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FIntVector)                                ElementCount                                                ___ OFFSET(get<T>, {0x8, 12, 0, 0})
	SMember(FName)                                     ElementCountXBinding                                        ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FName)                                     ElementCountYBinding                                        ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     ElementCountZBinding                                        ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(ENiagaraIterationSource)                   IterationSourceType                                         ___ OFFSET(get<T>, {0x20, 1, 0, 0})
	SMember(FName)                                     IterationDataInterface                                      ___ OFFSET(get<T>, {0x24, 4, 0, 0})
	SMember(FName)                                     IterationDirectBinding                                      ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(ENiagaraSimStageExecuteBehavior)           ExecuteBehavior                                             ___ OFFSET(get<T>, {0x2C, 1, 0, 0})
	DMember(bool)                                      bWritesParticles                                            ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bPartialParticleUpdate                                      ___ OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(bool)                                      bParticleIterationStateEnabled                              ___ OFFSET(get<bool>, {0x30, 1, 1, 2})
	DMember(bool)                                      bGpuIndirectDispatch                                        ___ OFFSET(get<bool>, {0x30, 1, 1, 3})
	SMember(FName)                                     ParticleIterationStateBinding                               ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	SMember(FIntPoint)                                 ParticleIterationStateRange                                 ___ OFFSET(get<T>, {0x3C, 8, 0, 0})
	CMember(TArray<FName>)                             OutputDestinations                                          ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FName>)                             InputDataInterfaces                                         ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(int32_t)                                   NumIterations                                               ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	SMember(FName)                                     NumIterationsBinding                                        ___ OFFSET(get<T>, {0x6C, 4, 0, 0})
	CMember(ENiagaraGpuDispatchType)                   GpuDispatchType                                             ___ OFFSET(get<T>, {0x70, 1, 0, 0})
	CMember(ENiagaraDirectDispatchElementType)         GpuDirectDispatchElementType                                ___ OFFSET(get<T>, {0x71, 1, 0, 0})
	SMember(FIntVector)                                GpuDispatchNumThreads                                       ___ OFFSET(get<T>, {0x74, 12, 0, 0})
};

/// Struct /Script/NiagaraShader.NiagaraCompileEvent
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraCompileEvent : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FNiagaraCompileEventSeverity)              Severity                                                    ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FString)                                   Message                                                     ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   ShortDescription                                            ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FGuid)                                     NodeGUID                                                    ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FGuid)                                     PinGuid                                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FGuid>)                             StackGuids                                                  ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FNiagaraCompileEventSource)                Source                                                      ___ OFFSET(get<T>, {0x58, 1, 0, 0})
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGeneratedFunction
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraDataInterfaceGeneratedFunction : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FNiagaraVariableCommonReference>)   VariadicInputs                                              ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FNiagaraVariableCommonReference>)   VariadicOutputs                                             ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/NiagaraShader.NiagaraDataInterfaceGPUParamInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraDataInterfaceGPUParamInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   DataInterfaceHLSLSymbol                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   DIClassName                                                 ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(uint32_t)                                  ShaderParametersOffset                                      ___ OFFSET(get<uint32_t>, {0x20, 4, 0, 0})
	CMember(TArray<FNiagaraDataInterfaceGeneratedFunction>) GeneratedFunctions                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/NiagaraShader.NiagaraShaderScriptExternalConstant
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraShaderScriptExternalConstant : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Type                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/NiagaraShader.NiagaraShaderScriptParametersMetadata
/// Size: 0x0058 (0x000000 - 0x000058)
class FNiagaraShaderScriptParametersMetadata : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FNiagaraDataInterfaceGPUParamInfo>) DataInterfaceParamInfo                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           LooseMetadataNames                                          ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bExternalConstantsInterpolated                              ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TArray<FNiagaraShaderScriptExternalConstant>) ExternalConstants                                        ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/NiagaraShader.NiagaraScriptBase
/// Size: 0x0000 (0x000028 - 0x000028)
class UNiagaraScriptBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Enum /Script/NiagaraShader.ENiagaraMipMapGenerationType
/// Size: 0x07
enum ENiagaraMipMapGenerationType : uint8_t
{
	ENiagaraMipMapGenerationType__Unfiltered0                                        = 0,
	ENiagaraMipMapGenerationType__Linear1                                            = 1,
	ENiagaraMipMapGenerationType__Blur12                                             = 2,
	ENiagaraMipMapGenerationType__Blur23                                             = 3,
	ENiagaraMipMapGenerationType__Blur34                                             = 4,
	ENiagaraMipMapGenerationType__Blur45                                             = 5,
	ENiagaraMipMapGenerationType__ENiagaraMipMapGenerationType_MAX6                  = 6
};

/// Enum /Script/NiagaraShader.ENiagaraGpuDispatchType
/// Size: 0x05
enum ENiagaraGpuDispatchType : uint8_t
{
	ENiagaraGpuDispatchType__OneD0                                                   = 0,
	ENiagaraGpuDispatchType__TwoD1                                                   = 1,
	ENiagaraGpuDispatchType__ThreeD2                                                 = 2,
	ENiagaraGpuDispatchType__Custom3                                                 = 3,
	ENiagaraGpuDispatchType__ENiagaraGpuDispatchType_MAX4                            = 4
};

/// Enum /Script/NiagaraShader.ENiagaraDirectDispatchElementType
/// Size: 0x04
enum ENiagaraDirectDispatchElementType : uint8_t
{
	ENiagaraDirectDispatchElementType__NumThreads0                                   = 0,
	ENiagaraDirectDispatchElementType__NumThreadsNoClipping1                         = 1,
	ENiagaraDirectDispatchElementType__NumGroups2                                    = 2,
	ENiagaraDirectDispatchElementType__ENiagaraDirectDispatchElementType_MAX3        = 3
};

/// Enum /Script/NiagaraShader.ENiagaraSimStageExecuteBehavior
/// Size: 0x04
enum ENiagaraSimStageExecuteBehavior : uint8_t
{
	ENiagaraSimStageExecuteBehavior__Always0                                         = 0,
	ENiagaraSimStageExecuteBehavior__OnSimulationReset1                              = 1,
	ENiagaraSimStageExecuteBehavior__NotOnSimulationReset2                           = 2,
	ENiagaraSimStageExecuteBehavior__ENiagaraSimStageExecuteBehavior_MAX3            = 3
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSeverity
/// Size: 0x05
enum FNiagaraCompileEventSeverity : uint8_t
{
	FNiagaraCompileEventSeverity__Log0                                               = 0,
	FNiagaraCompileEventSeverity__Display1                                           = 1,
	FNiagaraCompileEventSeverity__Warning2                                           = 2,
	FNiagaraCompileEventSeverity__Error3                                             = 3,
	FNiagaraCompileEventSeverity__FNiagaraCompileEventSeverity_MAX4                  = 4
};

/// Enum /Script/NiagaraShader.FNiagaraCompileEventSource
/// Size: 0x03
enum FNiagaraCompileEventSource : uint8_t
{
	FNiagaraCompileEventSource__Unset0                                               = 0,
	FNiagaraCompileEventSource__ScriptDependency1                                    = 1,
	FNiagaraCompileEventSource__FNiagaraCompileEventSource_MAX2                      = 2
};

