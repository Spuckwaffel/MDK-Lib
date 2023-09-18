/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// Package Niagara.

/// Struct /Script/Niagara.NiagaraSimCacheCaptureParameters
/// Size: 0x001C (0x000000 - 0x00001C)
class FNiagaraSimCacheCaptureParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(bool)                                      bAppendToSimCache                                           ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bCaptureFixedNumberOfFrames                                 ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(int32_t)                                   NumFrames                                                   ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   CaptureRate                                                 ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bUseTimeout                                                 ___ OFFSET(get<bool>, {0xC, 1, 1, 0})
	DMember(int32_t)                                   TimeoutFrameCount                                           ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(bool)                                      bCaptureAllFramesImmediatly                                 ___ OFFSET(get<bool>, {0x14, 1, 1, 0})
	DMember(float)                                     ImmediateCaptureDeltaTime                                   ___ OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheCreateParameters
/// Size: 0x0058 (0x000000 - 0x000058)
class FNiagaraSimCacheCreateParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(ENiagaraSimCacheAttributeCaptureMode)      AttributeCaptureMode                                        ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bAllowRebasing                                              ___ OFFSET(get<bool>, {0x4, 1, 1, 0})
	DMember(bool)                                      bAllowDataInterfaceCaching                                  ___ OFFSET(get<bool>, {0x4, 1, 1, 1})
	DMember(bool)                                      bAllowInterpolation                                         ___ OFFSET(get<bool>, {0x4, 1, 1, 2})
	DMember(bool)                                      bAllowVelocityExtrapolation                                 ___ OFFSET(get<bool>, {0x4, 1, 1, 3})
	CMember(TArray<FName>)                             RebaseIncludeAttributes                                     ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FName>)                             RebaseExcludeAttributes                                     ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FName>)                             InterpolationIncludeAttributes                              ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FName>)                             InterpolationExcludeAttributes                              ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FName>)                             ExplicitCaptureAttributes                                   ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Niagara.NDIRenderTargetVolumeSimCacheFrame
/// Size: 0x0048 (0x000000 - 0x000048)
class FNDIRenderTargetVolumeSimCacheFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FIntVector)                                Size                                                        ___ OFFSET(get<T>, {0x0, 12, 0, 0})
	CMember(TEnumAsByte<EPixelFormat>)                 Format                                                      ___ OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(int32_t)                                   UncompressedSize                                            ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   CompressedSize                                              ___ OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetID
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraDataSetID : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraDataSetType)                       Type                                                        ___ OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetProperties
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDataSetProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FNiagaraDataSetID)                         ID                                                          ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              Variables                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraVariableBase : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FNiagaraTypeDefinitionHandle)              TypeDefHandle                                               ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeDefinitionHandle
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraTypeDefinitionHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   RegisteredTypeIndex                                         ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataUsageInfo
/// Size: 0x0001 (0x000000 - 0x000001)
class FNiagaraScriptDataUsageInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bReadsAttributeData                                         ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraFunctionSignature
/// Size: 0x0090 (0x000000 - 0x000090)
class FNiagaraFunctionSignature : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Inputs                                                      ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Outputs                                                     ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     OwnerName                                                   ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(bool)                                      bRequiresContext                                            ___ OFFSET(get<bool>, {0x2C, 1, 1, 0})
	DMember(bool)                                      bRequiresExecPin                                            ___ OFFSET(get<bool>, {0x2C, 1, 1, 1})
	DMember(bool)                                      bMemberFunction                                             ___ OFFSET(get<bool>, {0x2C, 1, 1, 2})
	DMember(bool)                                      bExperimental                                               ___ OFFSET(get<bool>, {0x2C, 1, 1, 3})
	DMember(bool)                                      bSupportsCPU                                                ___ OFFSET(get<bool>, {0x2C, 1, 1, 4})
	DMember(bool)                                      bSupportsGPU                                                ___ OFFSET(get<bool>, {0x2C, 1, 1, 5})
	DMember(bool)                                      bWriteFunction                                              ___ OFFSET(get<bool>, {0x2C, 1, 1, 6})
	DMember(bool)                                      bReadFunction                                               ___ OFFSET(get<bool>, {0x2C, 1, 1, 7})
	DMember(bool)                                      bSoftDeprecatedFunction                                     ___ OFFSET(get<bool>, {0x2D, 1, 1, 0})
	DMember(bool)                                      bIsCompileTagGenerator                                      ___ OFFSET(get<bool>, {0x2D, 1, 1, 1})
	DMember(bool)                                      bHidden                                                     ___ OFFSET(get<bool>, {0x2D, 1, 1, 2})
	DMember(int32_t)                                   ModuleUsageBitmask                                          ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(uint16_t)                                  MiscUsageBitMask                                            ___ OFFSET(get<uint16_t>, {0x34, 2, 0, 0})
	DMember(int32_t)                                   ContextStageIndex                                           ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int16_t)                                   RequiredInputs                                              ___ OFFSET(get<int16_t>, {0x3C, 2, 0, 0})
	DMember(int16_t)                                   RequiredOutputs                                             ___ OFFSET(get<int16_t>, {0x3E, 2, 0, 0})
	CMember(TMap<FName, FName>)                        FunctionSpecifiers                                          ___ OFFSET(get<T>, {0x40, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariable
/// Size: 0x0010 (0x000008 - 0x000018)
class FNiagaraVariable : public FNiagaraVariableBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<char>)                              VarData                                                     ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptUObjectCompileInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraScriptUObjectCompileInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FNiagaraVariableBase)                      Variable                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UObject*)                                  Object                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FSoftObjectPath)                           ObjectPath                                                  ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(TArray<FName>)                             RegisteredParameterMapWrites                                ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraResolvedUObjectInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraResolvedUObjectInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     ReadVariableName                                            ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FNiagaraVariableBase)                      ResolvedVariable                                            ___ OFFSET(get<T>, {0x4, 8, 0, 0})
	CMember(UObject*)                                  Object                                                      ___ OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraExternalUObjectInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraExternalUObjectInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FNiagaraVariableBase)                      Variable                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ExternalName                                                ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraScriptDataInterfaceInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UNiagaraDataInterface*)                    DataInterface                                               ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	SMember(FName)                                     CompileName                                                 ___ OFFSET(get<T>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    Type                                                        ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FName)                                     RegisteredParameterMapWrite                                 ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	SMember(FString)                                   SourceEmitterName                                           ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeDefinition
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraTypeDefinition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UObject*)                                  ClassStructOrEnum                                           ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  UnderlyingType                                              ___ OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(char)                                      Flags                                                       ___ OFFSET(get<char>, {0xA, 1, 0, 0})
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
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     CompileName                                                 ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FString)                                   ResolvedSourceEmitterName                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FNiagaraVariableBase)                      ResolvedVariable                                            ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FNiagaraVariableBase)                      ParameterStoreVariable                                      ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      bIsInternal                                                 ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(UNiagaraDataInterface*)                    ResolvedDataInterface                                       ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraScriptDataInterfaceCompileInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   UserPtrIdx                                                  ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    Type                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     RegisteredParameterMapRead                                  ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FName)                                     RegisteredParameterMapWrite                                 ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	DMember(bool)                                      bIsPlaceholder                                              ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FString)                                   SourceEmitterName                                           ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraStatScope
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraStatScope : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     FullName                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     FriendlyName                                                ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.VMFunctionSpecifier
/// Size: 0x0008 (0x000000 - 0x000008)
class FVMFunctionSpecifier : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     Key                                                         ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     Value                                                       ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.VMExternalFunctionBindingInfo
/// Size: 0x0050 (0x000000 - 0x000050)
class FVMExternalFunctionBindingInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     OwnerName                                                   ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	CMember(TArray<bool>)                              InputParamLocations                                         ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   NumOutputs                                                  ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	CMember(TArray<FVMFunctionSpecifier>)              FunctionSpecifiers                                          ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              VariadicInputs                                              ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              VariadicOutputs                                             ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemUpdateContext
/// Size: 0x0078 (0x000000 - 0x000078)
class FNiagaraSystemUpdateContext : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<UNiagaraComponent*>)                ComponentsToReset                                           ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<UNiagaraComponent*>)                ComponentsToReInit                                          ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<UNiagaraComponent*>)                ComponentsToNotifySimDestroy                                ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<UNiagaraSystem*>)                   SystemSimsToDestroy                                         ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UNiagaraSystem*>)                   SystemSimsToRecache                                         ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraVariableInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FNiagaraVariable)                          Variable                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     Definition                                                  ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	CMember(UNiagaraDataInterface*)                    DataInterface                                               ___ OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableAttributeBinding
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraVariableAttributeBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FNiagaraVariable)                          RootVariable                                                ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FNiagaraVariableBase)                      ParamMapVariable                                            ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     DataSetName                                                 ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(TEnumAsByte<ENiagaraBindingSource>)        BindingSourceMode                                           ___ OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(bool)                                      bBindingExistsOnSource                                      ___ OFFSET(get<bool>, {0x25, 1, 1, 0})
	DMember(bool)                                      bIsCachedParticleValue                                      ___ OFFSET(get<bool>, {0x25, 1, 1, 1})
};

/// Struct /Script/Niagara.NiagaraMaterialAttributeBinding
/// Size: 0x001C (0x000000 - 0x00001C)
class FNiagaraMaterialAttributeBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FName)                                     MaterialParameterName                                       ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FNiagaraVariableBase)                      NiagaraVariable                                             ___ OFFSET(get<T>, {0x4, 8, 0, 0})
	SMember(FNiagaraVariableBase)                      ResolvedNiagaraVariable                                     ___ OFFSET(get<T>, {0xC, 8, 0, 0})
	SMember(FNiagaraVariableBase)                      NiagaraChildVariable                                        ___ OFFSET(get<T>, {0x14, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableDataInterfaceBinding
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraVariableDataInterfaceBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FNiagaraVariable)                          BoundVariable                                               ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptVariableBinding
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraScriptVariableBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraUserParameterBinding
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraUserParameterBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   ___ OFFSET(get<T>, {0x0, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCompileDependency
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraCompileDependency : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   LinkerErrorMessage                                          ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     NodeGUID                                                    ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FGuid)                                     PinGuid                                                     ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FGuid>)                             StackGuids                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FNiagaraVariableBase)                      DependentVariable                                           ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bDependentVariableFromCustomIterationNamespace              ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptAsyncCompileData
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FNiagaraScriptAsyncCompileData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FNiagaraVariable>)                  RapidIterationParameters                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	CMember(TMap<FName, UNiagaraDataInterface*>)       NamedDataInterfaces                                         ___ OFFSET(get<T>, {0xA8, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemAsyncCompileResults
/// Size: 0x0088 (0x000000 - 0x000088)
class FNiagaraSystemAsyncCompileResults : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<UObject*>)                          RootObjects                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  ExposedVariables                                            ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCompileHashVisitorDebugInfo
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraCompileHashVisitorDebugInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FString)                                   Object                                                      ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           PropertyKeys                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           PropertyValues                                              ___ OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataChannelSearchParameters
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDataChannelSearchParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(USceneComponent*)                          OwningComponent                                             ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Location                                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataChannelGameDataLayout
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraDataChannelGameDataLayout : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TMap<FNiagaraVariableBase, int32_t>)       VariableIndices                                             ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TArray<FNiagaraLwcStructConverter>)        LwcConverters                                               ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraLwcStructConverter
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraLwcStructConverter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   LWCSize                                                     ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SWCSize                                                     ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FNiagaraStructConversionStep>)      ConversionSteps                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraStructConversionStep
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraStructConversionStep : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(int32_t)                                   LWCBytes                                                    ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   LWCOffset                                                   ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SimulationBytes                                             ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SimulationOffset                                            ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	CMember(ENiagaraStructConversionType)              ConversionType                                              ___ OFFSET(get<T>, {0x10, 1, 0, 0})
};

/// Struct /Script/Niagara.NDCIsland
/// Size: 0x0070 (0x000000 - 0x000070)
class FNDCIsland : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(UNiagaraDataChannelHandler_Islands*)       Owner                                                       ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FBoxSphereBounds)                          Bounds                                                      ___ OFFSET(get<T>, {0x8, 56, 0, 0})
	CMember(TArray<UNiagaraComponent*>)                NiagaraSystems                                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NDCIslandDebugDrawSettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FNDCIslandDebugDrawSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bShowIslandBounds                                           ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
};

/// Struct /Script/Niagara.NDIDataChannelFunctionInfo
/// Size: 0x0028 (0x000000 - 0x000028)
class FNDIDataChannelFunctionInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     FunctionName                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              Inputs                                                      ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              Outputs                                                     ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NDIDataChannel_GPUScriptParameterAccessInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FNDIDataChannel_GPUScriptParameterAccessInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraVariableBase>)              SortedParameters                                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NDIDataChannelCompiledData
/// Size: 0x0068 (0x000000 - 0x000068)
class FNDIDataChannelCompiledData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<FNDIDataChannelFunctionInfo>)       FunctionInfo                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FNiagaraCompileHash, FNDIDataChannel_GPUScriptParameterAccessInfo>) GPUScriptParameterInfos       ___ OFFSET(get<T>, {0x10, 80, 0, 0})
	DMember(uint32_t)                                  TotalParams                                                 ___ OFFSET(get<uint32_t>, {0x60, 4, 0, 0})
	DMember(bool)                                      bUsedByCPU                                                  ___ OFFSET(get<bool>, {0x64, 1, 0, 0})
	DMember(bool)                                      bUsedByGPU                                                  ___ OFFSET(get<bool>, {0x65, 1, 0, 0})
};

/// Struct /Script/Niagara.NDIDataChannelWriteCompiledData
/// Size: 0x0040 (0x000068 - 0x0000A8)
class FNDIDataChannelWriteCompiledData : public FNDIDataChannelCompiledData
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FNiagaraDataSetCompiledData)               DataLayout                                                  ___ OFFSET(get<T>, {0x68, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataSetCompiledData
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraDataSetCompiledData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FNiagaraVariableBase>)              Variables                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraVariableLayoutInfo>)        VariableLayouts                                             ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FNiagaraDataSetID)                         ID                                                          ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(uint32_t)                                  TotalFloatComponents                                        ___ OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
	DMember(uint32_t)                                  TotalInt32Components                                        ___ OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  TotalHalfComponents                                         ___ OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bRequiresPersistentIDs                                      ___ OFFSET(get<bool>, {0x34, 1, 1, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   ___ OFFSET(get<T>, {0x38, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableLayoutInfo
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraVariableLayoutInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(uint16_t)                                  FloatComponentStart                                         ___ OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Int32ComponentStart                                         ___ OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  HalfComponentStart                                          ___ OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	SMember(FNiagaraTypeLayoutInfo)                    LayoutInfo                                                  ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraTypeLayoutInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraTypeLayoutInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(uint16_t)                                  NumFloatComponents                                          ___ OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  NumInt32Components                                          ___ OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  NumHalfComponents                                           ___ OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	CMember(TArray<uint32_t>)                          ComponentsOffsets                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
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
	SMember(FNiagaraVariableBase)                      ResolvedParameter                                           ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterBindingWithValue
/// Size: 0x0010 (0x000008 - 0x000018)
class FNiagaraParameterBindingWithValue : public FNiagaraParameterBinding
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<char>)                              DefaultValue                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScalabilityState
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraScalabilityState : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Significance                                                ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     LastVisibleTime                                             ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bNewlyRegistered                                            ___ OFFSET(get<bool>, {0xA, 1, 1, 0})
	DMember(bool)                                      bNewlyRegisteredDirty                                       ___ OFFSET(get<bool>, {0xA, 1, 1, 1})
	DMember(bool)                                      bCulled                                                     ___ OFFSET(get<bool>, {0xA, 1, 1, 2})
	DMember(bool)                                      bPreviousCulled                                             ___ OFFSET(get<bool>, {0xA, 1, 1, 3})
	DMember(bool)                                      bCulledByDistance                                           ___ OFFSET(get<bool>, {0xA, 1, 1, 4})
	DMember(bool)                                      bCulledByInstanceCount                                      ___ OFFSET(get<bool>, {0xA, 1, 1, 5})
	DMember(bool)                                      bCulledByVisibility                                         ___ OFFSET(get<bool>, {0xA, 1, 1, 6})
	DMember(bool)                                      bCulledByGlobalBudget                                       ___ OFFSET(get<bool>, {0xA, 1, 1, 7})
};

/// Struct /Script/Niagara.NiagaraStackSection
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraStackSection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     SectionIdentifier                                           ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FText)                                     SectionDisplayName                                          ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	CMember(TArray<FText>)                             Categories                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FText)                                     ToolTip                                                     ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDynamicMeshSection
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraDynamicMeshSection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   NumTriangles                                                ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaterialIndex                                               ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDynamicMeshMaterial
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDynamicMeshMaterial : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NDIStaticMeshSectionFilter
/// Size: 0x0010 (0x000000 - 0x000010)
class FNDIStaticMeshSectionFilter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<int32_t>)                           AllowedMaterialSlots                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraUObjectPropertyReaderRemap
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraUObjectPropertyReaderRemap : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     GraphName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     RemapName                                                   ___ OFFSET(get<T>, {0x4, 4, 0, 0})
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
	SMember(FFrameNumber)                              SpawnSectionStartFrame                                      ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	SMember(FFrameNumber)                              SpawnSectionEndFrame                                        ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionStartBehavior)   SpawnSectionStartBehavior                                   ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEvaluateBehavior) SpawnSectionEvaluateBehavior                               ___ OFFSET(get<T>, {0x1C, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEndBehavior)     SpawnSectionEndBehavior                                     ___ OFFSET(get<T>, {0x20, 4, 0, 0})
	CMember(ENiagaraAgeUpdateMode)                     AgeUpdateMode                                               ___ OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(bool)                                      bAllowScalability                                           ___ OFFSET(get<bool>, {0x25, 1, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraParameterSectionTemplate
/// Size: 0x0018 (0x000020 - 0x000038)
class FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FNiagaraVariable)                          Parameter                                                   ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
/// Size: 0x0100 (0x000038 - 0x000138)
class FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMovieSceneBoolChannel)                    BoolChannel                                                 ___ OFFSET(get<T>, {0x38, 256, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraColorParameterSectionTemplate
/// Size: 0x0440 (0x000038 - 0x000478)
class FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1144;

public:
	SMember(FMovieSceneFloatChannel)                   RedChannel                                                  ___ OFFSET(get<T>, {0x38, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   GreenChannel                                                ___ OFFSET(get<T>, {0x148, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   BlueChannel                                                 ___ OFFSET(get<T>, {0x258, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   AlphaChannel                                                ___ OFFSET(get<T>, {0x368, 272, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
/// Size: 0x0110 (0x000038 - 0x000148)
class FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	SMember(FMovieSceneFloatChannel)                   FloatChannel                                                ___ OFFSET(get<T>, {0x38, 272, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
/// Size: 0x0100 (0x000038 - 0x000138)
class FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 312;

public:
	SMember(FMovieSceneIntegerChannel)                 IntegerChannel                                              ___ OFFSET(get<T>, {0x38, 256, 0, 0})
};

/// Struct /Script/Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
/// Size: 0x0448 (0x000038 - 0x000480)
class FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
	SMember(FMovieSceneFloatChannel)                   VectorChannels                                              ___ OFFSET(get<T>, {0x38, 1088, 0, 0})
	DMember(int32_t)                                   ChannelsUsed                                                ___ OFFSET(get<int32_t>, {0x478, 4, 0, 0})
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
	SMember(FString)                                   DisplayString                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     SourceName                                                  ___ OFFSET(get<T>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBakerCameraSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraBakerCameraSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(ENiagaraBakerViewMode)                     ViewMode                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   ViewportLocation                                            ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FRotator)                                  ViewportRotation                                            ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(float)                                     OrbitDistance                                               ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     FOV                                                         ___ OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     OrthoWidth                                                  ___ OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bUseAspectRatio                                             ___ OFFSET(get<bool>, {0x44, 1, 0, 0})
	DMember(float)                                     AspectRatio                                                 ___ OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBakerTextureSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraBakerTextureSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     OutputName                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FNiagaraBakerTextureSource)                SourceBinding                                               ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	DMember(bool)                                      bUseFrameSize                                               ___ OFFSET(get<bool>, {0x20, 1, 1, 0})
	SMember(FIntPoint)                                 FrameSize                                                   ___ OFFSET(get<T>, {0x24, 8, 0, 0})
	SMember(FIntPoint)                                 TextureSize                                                 ___ OFFSET(get<T>, {0x2C, 8, 0, 0})
	CMember(UTexture2D*)                               GeneratedTexture                                            ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Struct /Script/Niagara.NCPoolElement
/// Size: 0x0010 (0x000000 - 0x000010)
class FNCPoolElement : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UNiagaraComponent*)                        Component                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NCPool
/// Size: 0x0010 (0x000000 - 0x000010)
class FNCPool : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNCPoolElement>)                    FreeElements                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraComponentPropertyBinding
/// Size: 0x0098 (0x000000 - 0x000098)
class FNiagaraComponentPropertyBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FNiagaraVariableAttributeBinding)          AttributeBinding                                            ___ OFFSET(get<T>, {0x0, 40, 0, 0})
	SMember(FName)                                     PropertyName                                                ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	SMember(FNiagaraTypeDefinition)                    PropertyType                                                ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FName)                                     MetadataSetterName                                          ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	CMember(TMap<FString, FString>)                    PropertySetterParameterDefaults                             ___ OFFSET(get<T>, {0x48, 80, 0, 0})
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
	CMember(ENiagaraDataInterfaceEmitterBindingMode)   BindingMode                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     EmitterName                                                 ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.BasicParticleData
/// Size: 0x0038 (0x000000 - 0x000038)
class FBasicParticleData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Position                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	DMember(float)                                     Size                                                        ___ OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FVector)                                   Velocity                                                    ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.MeshTriCoordinate
/// Size: 0x0010 (0x000000 - 0x000010)
class FMeshTriCoordinate : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Tri                                                         ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FVector3f)                                 BaryCoord                                                   ___ OFFSET(get<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDataInterfaceSplineLUT
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraDataInterfaceSplineLUT : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FVector>)                           Positions                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FVector>)                           Scales                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FQuat>)                             Rotations                                                   ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(float)                                     SplineLength                                                ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     SplineDistanceStep                                          ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     InvSplineDistanceStep                                       ___ OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxIndex                                                    ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerTimingData
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraOutlinerTimingData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     GameThread                                                  ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     RenderThread                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerEmitterInstanceData
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraOutlinerEmitterInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FString)                                   EmitterName                                                 ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(ENiagaraExecutionState)                    ExecState                                                   ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   NumParticles                                                ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      bRequiresPersistentIDs                                      ___ OFFSET(get<bool>, {0x1C, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemInstanceData
/// Size: 0x0068 (0x000000 - 0x000068)
class FNiagaraOutlinerSystemInstanceData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FString)                                   ComponentName                                               ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector3f)                                 LWCTile                                                     ___ OFFSET(get<T>, {0x10, 12, 0, 0})
	CMember(TArray<FNiagaraOutlinerEmitterInstanceData>) Emitters                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(ENiagaraExecutionState)                    ActualExecutionState                                        ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(ENiagaraExecutionState)                    RequestedExecutionState                                     ___ OFFSET(get<T>, {0x34, 4, 0, 0})
	SMember(FNiagaraScalabilityState)                  ScalabilityState                                            ___ OFFSET(get<T>, {0x38, 12, 0, 0})
	DMember(bool)                                      bPendingKill                                                ___ OFFSET(get<bool>, {0x44, 1, 1, 0})
	DMember(bool)                                      bUsingCullProxy                                             ___ OFFSET(get<bool>, {0x44, 1, 1, 1})
	CMember(ENCPoolMethod)                             PoolMethod                                                  ___ OFFSET(get<T>, {0x48, 1, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AverageTime                                                 ___ OFFSET(get<T>, {0x4C, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxTime                                                     ___ OFFSET(get<T>, {0x54, 8, 0, 0})
	CMember(TEnumAsByte<ETickingGroup>)                TickGroup                                                   ___ OFFSET(get<T>, {0x5C, 1, 0, 0})
	CMember(TEnumAsByte<ENiagaraGpuComputeTickStage>)  GpuTickStage                                                ___ OFFSET(get<T>, {0x5D, 1, 0, 0})
	DMember(bool)                                      bIsSolo                                                     ___ OFFSET(get<bool>, {0x60, 1, 1, 0})
	DMember(bool)                                      bRequiresDistanceFieldData                                  ___ OFFSET(get<bool>, {0x60, 1, 1, 1})
	DMember(bool)                                      bRequiresDepthBuffer                                        ___ OFFSET(get<bool>, {0x60, 1, 1, 2})
	DMember(bool)                                      bRequiresEarlyViewData                                      ___ OFFSET(get<bool>, {0x60, 1, 1, 3})
	DMember(bool)                                      bRequiresViewUniformBuffer                                  ___ OFFSET(get<bool>, {0x60, 1, 1, 4})
	DMember(bool)                                      bRequiresRayTracingScene                                    ___ OFFSET(get<bool>, {0x60, 1, 1, 5})
};

/// Struct /Script/Niagara.NiagaraOutlinerSystemData
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraOutlinerSystemData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FNiagaraOutlinerSystemInstanceData>) SystemInstances                                            ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AveragePerFrameTime                                         ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxPerFrameTime                                             ___ OFFSET(get<T>, {0x18, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AveragePerInstanceTime                                      ___ OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxPerInstanceTime                                          ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerWorldData
/// Size: 0x0068 (0x000000 - 0x000068)
class FNiagaraOutlinerWorldData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TMap<FString, FNiagaraOutlinerSystemData>) Systems                                                     ___ OFFSET(get<T>, {0x0, 80, 0, 0})
	DMember(bool)                                      bHasBegunPlay                                               ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(char)                                      WorldType                                                   ___ OFFSET(get<char>, {0x51, 1, 0, 0})
	DMember(char)                                      NetMode                                                     ___ OFFSET(get<char>, {0x52, 1, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                AveragePerFrameTime                                         ___ OFFSET(get<T>, {0x54, 8, 0, 0})
	SMember(FNiagaraOutlinerTimingData)                MaxPerFrameTime                                             ___ OFFSET(get<T>, {0x5C, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraOutlinerData
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraOutlinerData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, FNiagaraOutlinerWorldData>)  WorldData                                                   ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerRequestConnection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDebuggerRequestConnection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     SessionId                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InstanceID                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerAcceptConnection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDebuggerAcceptConnection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     SessionId                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InstanceID                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerConnectionClosed
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraDebuggerConnectionClosed : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FGuid)                                     SessionId                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FGuid)                                     InstanceID                                                  ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerExecuteConsoleCommand
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDebuggerExecuteConsoleCommand : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FString)                                   Command                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(bool)                                      bRequiresWorld                                              ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebuggerOutlinerUpdate
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraDebuggerOutlinerUpdate : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FNiagaraOutlinerData)                      OutlinerData                                                ___ OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebugHudTextOptions
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDebugHudTextOptions : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ENiagaraDebugHudFont)                      Font                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraDebugHudHAlign)                    HorizontalAlignment                                         ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(ENiagaraDebugHudVAlign)                    VerticalAlignment                                           ___ OFFSET(get<T>, {0x5, 1, 0, 0})
	SMember(FVector2D)                                 ScreenOffset                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebugHUDVariable
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraDebugHUDVariable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FString)                                   Name                                                        ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDebugHUDSettingsData
/// Size: 0x0248 (0x000000 - 0x000248)
class FNiagaraDebugHUDSettingsData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
	DMember(bool)                                      bHudEnabled                                                 ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bHudRenderingEnabled                                        ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bValidateSystemSimulationDataBuffers                        ___ OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(bool)                                      bValidateParticleDataBuffers                                ___ OFFSET(get<bool>, {0x3, 1, 0, 0})
	DMember(bool)                                      bValidationLogErrors                                        ___ OFFSET(get<bool>, {0x4, 1, 0, 0})
	DMember(int32_t)                                   ValidationAttributeDisplayTruncate                          ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bOverviewEnabled                                            ___ OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bIncludeCascade                                             ___ OFFSET(get<bool>, {0xD, 1, 0, 0})
	CMember(ENiagaraDebugHUDOverviewMode)              OverviewMode                                                ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	CMember(ENiagaraDebugHUDDOverviewSort)             OverviewSortMode                                            ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	CMember(ENiagaraDebugHudFont)                      OverviewFont                                                ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FVector2D)                                 OverviewLocation                                            ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(bool)                                      bShowRegisteredComponents                                   ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bOverviewShowFilteredSystemOnly                             ___ OFFSET(get<bool>, {0x31, 1, 0, 0})
	SMember(FString)                                   ActorFilter                                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(bool)                                      bComponentFilterEnabled                                     ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FString)                                   ComponentFilter                                             ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bSystemFilterEnabled                                        ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FString)                                   SystemFilter                                                ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	DMember(bool)                                      bEmitterFilterEnabled                                       ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
	SMember(FString)                                   EmitterFilter                                               ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	DMember(bool)                                      bActorFilterEnabled                                         ___ OFFSET(get<bool>, {0x90, 1, 0, 0})
	CMember(ENiagaraDebugHudVerbosity)                 SystemDebugVerbosity                                        ___ OFFSET(get<T>, {0x94, 4, 0, 0})
	CMember(ENiagaraDebugHudVerbosity)                 SystemEmitterVerbosity                                      ___ OFFSET(get<T>, {0x98, 4, 0, 0})
	CMember(ENiagaraDebugHudVerbosity)                 DataInterfaceVerbosity                                      ___ OFFSET(get<T>, {0x9C, 4, 0, 0})
	DMember(bool)                                      bSystemShowBounds                                           ___ OFFSET(get<bool>, {0xA0, 1, 0, 0})
	DMember(float)                                     SystemBoundsSolidBoxAlpha                                   ___ OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(bool)                                      bSystemShowActiveOnlyInWorld                                ___ OFFSET(get<bool>, {0xA8, 1, 0, 0})
	DMember(bool)                                      bShowSystemVariables                                        ___ OFFSET(get<bool>, {0xA9, 1, 0, 0})
	CMember(TArray<FNiagaraDebugHUDVariable>)          SystemVariables                                             ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	SMember(FNiagaraDebugHudTextOptions)               SystemTextOptions                                           ___ OFFSET(get<T>, {0xC0, 24, 0, 0})
	DMember(bool)                                      bShowParticleVariables                                      ___ OFFSET(get<bool>, {0xD8, 1, 0, 0})
	DMember(bool)                                      bEnableGpuParticleReadback                                  ___ OFFSET(get<bool>, {0xD9, 1, 0, 0})
	DMember(bool)                                      bShowParticleIndex                                          ___ OFFSET(get<bool>, {0xDA, 1, 0, 0})
	CMember(TArray<FNiagaraDebugHUDVariable>)          ParticlesVariables                                          ___ OFFSET(get<T>, {0xE0, 16, 0, 0})
	SMember(FNiagaraDebugHudTextOptions)               ParticleTextOptions                                         ___ OFFSET(get<T>, {0xF0, 24, 0, 0})
	DMember(bool)                                      bShowParticlesVariablesWithSystem                           ___ OFFSET(get<bool>, {0x108, 1, 0, 0})
	DMember(bool)                                      bShowParticleVariablesVertical                              ___ OFFSET(get<bool>, {0x109, 1, 0, 0})
	DMember(bool)                                      bUseMaxParticlesToDisplay                                   ___ OFFSET(get<bool>, {0x10A, 1, 0, 0})
	DMember(bool)                                      bUseParticleDisplayClip                                     ___ OFFSET(get<bool>, {0x10B, 1, 0, 0})
	SMember(FVector2D)                                 ParticleDisplayClip                                         ___ OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(bool)                                      bUseParticleDisplayCenterRadius                             ___ OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(float)                                     ParticleDisplayCenterRadius                                 ___ OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(int32_t)                                   MaxParticlesToDisplay                                       ___ OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	DMember(int32_t)                                   PerfReportFrames                                            ___ OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	CMember(ENiagaraDebugHUDPerfSampleMode)            PerfSampleMode                                              ___ OFFSET(get<T>, {0x130, 4, 0, 0})
	CMember(ENiagaraDebugHUDPerfGraphMode)             PerfGraphMode                                               ___ OFFSET(get<T>, {0x134, 4, 0, 0})
	DMember(int32_t)                                   PerfHistoryFrames                                           ___ OFFSET(get<int32_t>, {0x138, 4, 0, 0})
	DMember(float)                                     PerfGraphTimeRange                                          ___ OFFSET(get<float>, {0x13C, 4, 0, 0})
	SMember(FVector2D)                                 PerfGraphSize                                               ___ OFFSET(get<T>, {0x140, 16, 0, 0})
	SMember(FLinearColor)                              PerfGraphAxisColor                                          ___ OFFSET(get<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      bEnableSmoothing                                            ___ OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(int32_t)                                   SmoothingWidth                                              ___ OFFSET(get<int32_t>, {0x164, 4, 0, 0})
	SMember(FLinearColor)                              DefaultBackgroundColor                                      ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	SMember(FLinearColor)                              OverviewHeadingColor                                        ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FLinearColor)                              OverviewDetailColor                                         ___ OFFSET(get<T>, {0x188, 16, 0, 0})
	SMember(FLinearColor)                              OverviewDetailHighlightColor                                ___ OFFSET(get<T>, {0x198, 16, 0, 0})
	SMember(FLinearColor)                              InWorldErrorTextColor                                       ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FLinearColor)                              InWorldTextColor                                            ___ OFFSET(get<T>, {0x1B8, 16, 0, 0})
	SMember(FLinearColor)                              MessageInfoTextColor                                        ___ OFFSET(get<T>, {0x1C8, 16, 0, 0})
	SMember(FLinearColor)                              MessageWarningTextColor                                     ___ OFFSET(get<T>, {0x1D8, 16, 0, 0})
	SMember(FLinearColor)                              MessageErrorTextColor                                       ___ OFFSET(get<T>, {0x1E8, 16, 0, 0})
	DMember(float)                                     SystemColorTableOpacity                                     ___ OFFSET(get<float>, {0x1F8, 4, 0, 0})
	DMember(uint32_t)                                  SystemColorSeed                                             ___ OFFSET(get<uint32_t>, {0x1FC, 4, 0, 0})
	SMember(FVector)                                   SystemColorHSVMin                                           ___ OFFSET(get<T>, {0x200, 24, 0, 0})
	SMember(FVector)                                   SystemColorHSVMax                                           ___ OFFSET(get<T>, {0x218, 24, 0, 0})
	CMember(ENiagaraDebugPlaybackMode)                 PlaybackMode                                                ___ OFFSET(get<T>, {0x230, 1, 0, 0})
	DMember(bool)                                      bPlaybackRateEnabled                                        ___ OFFSET(get<bool>, {0x231, 1, 0, 0})
	DMember(float)                                     PlaybackRate                                                ___ OFFSET(get<float>, {0x234, 4, 0, 0})
	DMember(bool)                                      bLoopTimeEnabled                                            ___ OFFSET(get<bool>, {0x238, 1, 0, 0})
	DMember(float)                                     LoopTime                                                    ___ OFFSET(get<float>, {0x23C, 4, 0, 0})
	DMember(bool)                                      bShowGlobalBudgetInfo                                       ___ OFFSET(get<bool>, {0x240, 1, 0, 0})
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
	DMember(bool)                                      bTriggerCapture                                             ___ OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(uint32_t)                                  CaptureDelayFrames                                          ___ OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(bool)                                      bGatherPerfData                                             ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(uint32_t)                                  SimCacheCaptureFrames                                       ___ OFFSET(get<uint32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimpleClientInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraSimpleClientInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FString>)                           Systems                                                     ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FString>)                           Actors                                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Components                                                  ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FString>)                           Emitters                                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemSimCacheCaptureRequest
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraSystemSimCacheCaptureRequest : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ComponentName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  CaptureDelayFrames                                          ___ OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  CaptureFrames                                               ___ OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemSimCacheCaptureReply
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraSystemSimCacheCaptureReply : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     ComponentName                                               ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<char>)                              SimCacheData                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraGraphViewSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraGraphViewSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector2D)                                 Location                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Zoom                                                        ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsValid                                                    ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraLinearRamp
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraLinearRamp : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     StartX                                                      ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     StartY                                                      ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     EndX                                                        ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     EndY                                                        ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraGlobalBudgetScaling
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraGlobalBudgetScaling : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      bCullByGlobalBudget                                         ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bScaleMaxDistanceByGlobalBudgetUse                          ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bScaleMaxInstanceCountByGlobalBudgetUse                     ___ OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(bool)                                      bScaleSystemInstanceCountByGlobalBudgetUse                  ___ OFFSET(get<bool>, {0x0, 1, 1, 3})
	DMember(float)                                     MaxGlobalBudgetUsage                                        ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FNiagaraLinearRamp)                        MaxDistanceScaleByGlobalBudgetUse                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FNiagaraLinearRamp)                        MaxInstanceCountScaleByGlobalBudgetUse                      ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FNiagaraLinearRamp)                        MaxSystemInstanceCountScaleByGlobalBudgetUse                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemVisibilityCullingSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraSystemVisibilityCullingSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bCullWhenNotRendered                                        ___ OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bCullByViewFrustum                                          ___ OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bAllowPreCullingByViewFrustum                               ___ OFFSET(get<bool>, {0x0, 1, 1, 2})
	DMember(float)                                     MaxTimeOutsideViewFrustum                                   ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxTimeWithoutRender                                        ___ OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettings
/// Size: 0x0098 (0x000000 - 0x000098)
class FNiagaraSystemScalabilitySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   ___ OFFSET(get<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bCullByDistance                                             ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(bool)                                      bCullMaxInstanceCount                                       ___ OFFSET(get<bool>, {0x30, 1, 1, 1})
	DMember(bool)                                      bCullPerSystemMaxInstanceCount                              ___ OFFSET(get<bool>, {0x30, 1, 1, 2})
	DMember(float)                                     MaxDistance                                                 ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(bool)                                      bCullByMaxTimeWithoutRender                                 ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(int32_t)                                   MaxInstances                                                ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   MaxSystemInstances                                          ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     MaxTimeWithoutRender                                        ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	CMember(ENiagaraCullProxyMode)                     CullProxyMode                                               ___ OFFSET(get<T>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   MaxSystemProxies                                            ___ OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	SMember(FNiagaraSystemVisibilityCullingSettings)   VisibilityCulling                                           ___ OFFSET(get<T>, {0x50, 12, 0, 0})
	SMember(FNiagaraGlobalBudgetScaling)               BudgetScaling                                               ___ OFFSET(get<T>, {0x5C, 56, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSet
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraPlatformSet : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FNiagaraDeviceProfileStateEntry>)   DeviceProfileStates                                         ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraPlatformSetCVarCondition>)  CVarConditions                                              ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(int32_t)                                   QualityLevelMask                                            ___ OFFSET(get<int32_t>, {0x20, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetCVarCondition
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraPlatformSetCVarCondition : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     CVarName                                                    ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraCVarConditionResponse)             PassResponse                                                ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(ENiagaraCVarConditionResponse)             FailResponse                                                ___ OFFSET(get<T>, {0x5, 1, 0, 0})
	DMember(bool)                                      Value                                                       ___ OFFSET(get<bool>, {0x6, 1, 0, 0})
	DMember(int32_t)                                   MinInt                                                      ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxInt                                                      ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     MinFloat                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MaxFloat                                                    ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bUseMinInt                                                  ___ OFFSET(get<bool>, {0x18, 1, 1, 0})
	DMember(bool)                                      bUseMaxInt                                                  ___ OFFSET(get<bool>, {0x18, 1, 1, 1})
	DMember(bool)                                      bUseMinFloat                                                ___ OFFSET(get<bool>, {0x18, 1, 1, 2})
	DMember(bool)                                      bUseMaxFloat                                                ___ OFFSET(get<bool>, {0x18, 1, 1, 3})
};

/// Struct /Script/Niagara.NiagaraDeviceProfileStateEntry
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraDeviceProfileStateEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     ProfileName                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(uint32_t)                                  QualityLevelMask                                            ___ OFFSET(get<uint32_t>, {0x4, 4, 0, 0})
	DMember(uint32_t)                                  SetQualityLevelMask                                         ___ OFFSET(get<uint32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSystemScalabilitySettingsArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraSystemScalabilitySettings>) Settings                                                    ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverride
/// Size: 0x0008 (0x000098 - 0x0000A0)
class FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bOverrideDistanceSettings                                   ___ OFFSET(get<bool>, {0x98, 1, 1, 0})
	DMember(bool)                                      bOverrideInstanceCountSettings                              ___ OFFSET(get<bool>, {0x98, 1, 1, 1})
	DMember(bool)                                      bOverridePerSystemInstanceCountSettings                     ___ OFFSET(get<bool>, {0x98, 1, 1, 2})
	DMember(bool)                                      bOverrideVisibilitySettings                                 ___ OFFSET(get<bool>, {0x98, 1, 1, 3})
	DMember(bool)                                      bOverrideGlobalBudgetScalingSettings                        ___ OFFSET(get<bool>, {0x98, 1, 1, 4})
	DMember(bool)                                      bOverrideCullProxySettings                                  ___ OFFSET(get<bool>, {0x98, 1, 1, 5})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraEmitterScalabilitySettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   ___ OFFSET(get<T>, {0x0, 48, 0, 0})
	DMember(bool)                                      bScaleSpawnCount                                            ___ OFFSET(get<bool>, {0x30, 1, 1, 0})
	DMember(float)                                     SpawnCountScale                                             ___ OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilitySettingsArray
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraEmitterScalabilitySettingsArray : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraEmitterScalabilitySettings>) Settings                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverride
/// Size: 0x0008 (0x000038 - 0x000040)
class FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bOverrideSpawnCountScale                                    ___ OFFSET(get<bool>, {0x38, 1, 1, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraEmitterScalabilityOverrides : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraEmitterScalabilityOverride>) Overrides                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventReceiverProperties
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraEventReceiverProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     SourceEventGenerator                                        ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     SourceEmitter                                               ___ OFFSET(get<T>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventGeneratorProperties
/// Size: 0x0048 (0x000000 - 0x000048)
class FNiagaraEventGeneratorProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   MaxEventsPerFrame                                           ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	SMember(FName)                                     ID                                                          ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         ___ OFFSET(get<T>, {0x8, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterScriptProperties
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraEmitterScriptProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UNiagaraScript*)                           Script                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<FNiagaraEventReceiverProperties>)   EventReceivers                                              ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FNiagaraEventGeneratorProperties>)  EventGenerators                                             ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEventScriptProperties
/// Size: 0x0030 (0x000028 - 0x000058)
class FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(EScriptExecutionMode)                      ExecutionMode                                               ___ OFFSET(get<T>, {0x28, 1, 0, 0})
	DMember(uint32_t)                                  SpawnNumber                                                 ___ OFFSET(get<uint32_t>, {0x2C, 4, 0, 0})
	DMember(uint32_t)                                  MaxEventsPerFrame                                           ___ OFFSET(get<uint32_t>, {0x30, 4, 0, 0})
	SMember(FGuid)                                     SourceEmitterID                                             ___ OFFSET(get<T>, {0x34, 16, 0, 0})
	SMember(FName)                                     SourceEventName                                             ___ OFFSET(get<T>, {0x44, 4, 0, 0})
	DMember(bool)                                      bRandomSpawnNumber                                          ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(uint32_t)                                  MinSpawnNumber                                              ___ OFFSET(get<uint32_t>, {0x4C, 4, 0, 0})
	DMember(bool)                                      UpdateAttributeInitialValues                                ___ OFFSET(get<bool>, {0x50, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraDetailsLevelScaleOverrides
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraDetailsLevelScaleOverrides : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     Low                                                         ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Medium                                                      ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     High                                                        ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Epic                                                        ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Cine                                                        ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.VersionedNiagaraEmitterData
/// Size: 0x0340 (0x000000 - 0x000340)
class FVersionedNiagaraEmitterData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FNiagaraAssetVersion)                      Version                                                     ___ OFFSET(get<T>, {0x0, 28, 0, 0})
	DMember(bool)                                      bDeprecated                                                 ___ OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FText)                                     DeprecationMessage                                          ___ OFFSET(get<T>, {0x20, 24, 0, 0})
	DMember(bool)                                      bLocalSpace                                                 ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bDeterminism                                                ___ OFFSET(get<bool>, {0x39, 1, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bInterpolatedSpawning                                       ___ OFFSET(get<bool>, {0x40, 1, 1, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   ___ OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(ENiagaraEmitterCalculateBoundMode)         CalculateBoundsMode                                         ___ OFFSET(get<T>, {0x45, 1, 0, 0})
	SMember(FBox)                                      FixedBounds                                                 ___ OFFSET(get<T>, {0x48, 56, 0, 0})
	DMember(bool)                                      bRequiresPersistentIDs                                      ___ OFFSET(get<bool>, {0x80, 1, 1, 0})
	CMember(TArray<FNiagaraEventScriptProperties>)     EventHandlerScriptProps                                     ___ OFFSET(get<T>, {0x88, 16, 0, 0})
	SMember(FNiagaraPlatformSet)                       Platforms                                                   ___ OFFSET(get<T>, {0x98, 48, 0, 0})
	SMember(FNiagaraEmitterScalabilityOverrides)       ScalabilityOverrides                                        ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	DMember(int32_t)                                   MaxGPUParticlesSpawnPerFrame                                ___ OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	CMember(EParticleAllocationMode)                   AllocationMode                                              ___ OFFSET(get<T>, {0xDC, 1, 0, 0})
	DMember(int32_t)                                   PreAllocationCount                                          ___ OFFSET(get<int32_t>, {0xE0, 4, 0, 0})
	SMember(FNiagaraEmitterScriptProperties)           UpdateScriptProps                                           ___ OFFSET(get<T>, {0xE8, 40, 0, 0})
	SMember(FNiagaraEmitterScriptProperties)           SpawnScriptProps                                            ___ OFFSET(get<T>, {0x110, 40, 0, 0})
	SMember(FNiagaraParameterStore)                    RendererBindings                                            ___ OFFSET(get<T>, {0x138, 136, 0, 0})
	CMember(TArray<FNiagaraExternalUObjectInfo>)       RendererBindingsExternalObjects                             ___ OFFSET(get<T>, {0x1C0, 16, 0, 0})
	CMember(TMap<FNiagaraVariableBase, FNiagaraVariableBase>) ResolvedDIBindings                                   ___ OFFSET(get<T>, {0x1D0, 80, 0, 0})
	CMember(TArray<UNiagaraRendererProperties*>)       RendererProperties                                          ___ OFFSET(get<T>, {0x220, 16, 0, 0})
	CMember(TArray<UNiagaraSimulationStageBase*>)      SimulationStages                                            ___ OFFSET(get<T>, {0x230, 16, 0, 0})
	CMember(UNiagaraScript*)                           GPUComputeScript                                            ___ OFFSET(get<T>, {0x240, 8, 0, 0})
	CMember(TArray<FName>)                             SharedEventGeneratorIds                                     ___ OFFSET(get<T>, {0x248, 16, 0, 0})
	SMember(FNiagaraEmitterScalabilitySettings)        CurrentScalabilitySettings                                  ___ OFFSET(get<T>, {0x258, 56, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterStore
/// Size: 0x0088 (0x000000 - 0x000088)
class FNiagaraParameterStore : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<UObject*>)                  Owner                                                       ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<FNiagaraVariableWithOffset>)        SortedParameterOffsets                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<char>)                              ParameterData                                               ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<UNiagaraDataInterface*>)            DataInterfaces                                              ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<UObject*>)                          UObjects                                                    ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FNiagaraPositionSource>)            OriginalPositionData                                        ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPositionSource
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraPositionSource : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Value                                                       ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableWithOffset
/// Size: 0x0020 (0x000008 - 0x000028)
class FNiagaraVariableWithOffset : public FNiagaraVariableBase
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(int32_t)                                   Offset                                                      ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FNiagaraLwcStructConverter)                StructConverter                                             ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraAssetVersion
/// Size: 0x001C (0x000000 - 0x00001C)
class FNiagaraAssetVersion : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(int32_t)                                   MajorVersion                                                ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MinorVersion                                                ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	SMember(FGuid)                                     VersionGuid                                                 ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bIsVisibleInVersionSelector                                 ___ OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterHandle
/// Size: 0x0038 (0x000000 - 0x000038)
class FNiagaraEmitterHandle : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FGuid)                                     ID                                                          ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     IdName                                                      ___ OFFSET(get<T>, {0x10, 4, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FName)                                     Name                                                        ___ OFFSET(get<T>, {0x18, 4, 0, 0})
	SMember(FVersionedNiagaraEmitter)                  VersionedInstance                                           ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.VersionedNiagaraEmitter
/// Size: 0x0018 (0x000000 - 0x000018)
class FVersionedNiagaraEmitter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(UNiagaraEmitter*)                          Emitter                                                     ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGuid)                                     Version                                                     ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCollisionEventPayload
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraCollisionEventPayload : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   CollisionPos                                                ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FVector)                                   CollisionNormal                                             ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	SMember(FVector)                                   CollisionVelocity                                           ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   PhysicalMaterialIndex                                       ___ OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMeshMICOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraMeshMICOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(UMaterialInterface*)                       OriginalMaterial                                            ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UMaterialInstanceConstant*)                ReplacementMaterial                                         ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMeshMaterialOverride
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraMeshMaterialOverride : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(UMaterialInterface*)                       ExplicitMat                                                 ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              UserParamBinding                                            ___ OFFSET(get<T>, {0x8, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMeshRendererMeshProperties
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraMeshRendererMeshProperties : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(UStaticMesh*)                              Mesh                                                        ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FNiagaraParameterBinding)                  MeshParameterBinding                                        ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   Scale                                                       ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FRotator)                                  Rotation                                                    ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FVector)                                   PivotOffset                                                 ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	CMember(ENiagaraMeshPivotOffsetSpace)              PivotOffsetSpace                                            ___ OFFSET(get<T>, {0x58, 1, 0, 0})
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
	CMember(TArray<FNiagaraVariable>)                  Parameters                                                  ___ OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBoundParameter
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraBoundParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FNiagaraVariableBase)                      Parameter                                                   ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   SrcOffset                                                   ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   DestOffset                                                  ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPerfBaselineStats
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraPerfBaselineStats : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     PerInstanceAvg_GT                                           ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     PerInstanceAvg_RT                                           ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PerInstanceMax_GT                                           ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     PerInstanceMax_RT                                           ___ OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictEntry
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraPlatformSetConflictEntry : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ProfileName                                                 ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   QualityLevelMask                                            ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetConflictInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraPlatformSetConflictInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   SetAIndex                                                   ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SetBIndex                                                   ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	CMember(TArray<FNiagaraPlatformSetConflictEntry>)  Conflicts                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraPlatformSetRedirect
/// Size: 0x0078 (0x000000 - 0x000078)
class FNiagaraPlatformSetRedirect : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FName>)                             ProfileNames                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ENiagaraDeviceProfileRedirectMode)         Mode                                                        ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FName)                                     RedirectProfileName                                         ___ OFFSET(get<T>, {0x14, 4, 0, 0})
	SMember(FNiagaraPlatformSetCVarCondition)          CVarConditionEnabled                                        ___ OFFSET(get<T>, {0x18, 48, 0, 0})
	SMember(FNiagaraPlatformSetCVarCondition)          CVarConditionDisabled                                       ___ OFFSET(get<T>, {0x48, 48, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialScalarParameter
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraRendererMaterialScalarParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     MaterialParameterName                                       ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialVectorParameter
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraRendererMaterialVectorParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     MaterialParameterName                                       ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FLinearColor)                              Value                                                       ___ OFFSET(get<T>, {0x4, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialTextureParameter
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraRendererMaterialTextureParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     MaterialParameterName                                       ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UTexture*)                                 Texture                                                     ___ OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialStaticBoolParameter
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraRendererMaterialStaticBoolParameter : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     MaterialParameterName                                       ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	SMember(FName)                                     StaticVariableName                                          ___ OFFSET(get<T>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRendererMaterialParameters
/// Size: 0x0050 (0x000000 - 0x000050)
class FNiagaraRendererMaterialParameters : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FNiagaraMaterialAttributeBinding>)  AttributeBindings                                           ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraRendererMaterialScalarParameter>) ScalarParameters                                      ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FNiagaraRendererMaterialVectorParameter>) VectorParameters                                      ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FNiagaraRendererMaterialTextureParameter>) TextureParameters                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FNiagaraRendererMaterialStaticBoolParameter>) StaticBoolParameters                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRibbonShapeCustomVertex
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraRibbonShapeCustomVertex : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FVector2f)                                 Position                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector2f)                                 Normal                                                      ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     TextureV                                                    ___ OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRibbonUVSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraRibbonUVSettings : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(ENiagaraRibbonUVDistributionMode)          DistributionMode                                            ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ENiagaraRibbonUVEdgeMode)                  LeadingEdgeMode                                             ___ OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ENiagaraRibbonUVEdgeMode)                  TrailingEdgeMode                                            ___ OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(bool)                                      bEnablePerParticleUOverride                                 ___ OFFSET(get<bool>, {0x3, 1, 1, 0})
	DMember(bool)                                      bEnablePerParticleVRangeOverride                            ___ OFFSET(get<bool>, {0x3, 1, 1, 1})
	DMember(float)                                     TilingLength                                                ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector2D)                                 Offset                                                      ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FVector2D)                                 Scale                                                       ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScalabilityManager
/// Size: 0x00E0 (0x000000 - 0x0000E0)
class FNiagaraScalabilityManager : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	CMember(UNiagaraEffectType*)                       EffectType                                                  ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<UNiagaraComponent*>)                ManagedComponents                                           ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraModuleDependency
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraModuleDependency : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     ID                                                          ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraModuleDependencyType)              Type                                                        ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(ENiagaraModuleDependencyScriptConstraint)  ScriptConstraint                                            ___ OFFSET(get<T>, {0x5, 1, 0, 0})
	SMember(FString)                                   RequiredVersion                                             ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   OnlyEvaluateInScriptUsage                                   ___ OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FText)                                     Description                                                 ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraCompilerTag
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraCompilerTag : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FNiagaraVariable)                          Variable                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FString)                                   StringValue                                                 ___ OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableDataId
/// Size: 0x0058 (0x000000 - 0x000058)
class FNiagaraVMExecutableDataId : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FGuid)                                     CompilerVersionID                                           ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(ENiagaraScriptUsage)                       ScriptUsageType                                             ___ OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FGuid)                                     ScriptUsageTypeID                                           ___ OFFSET(get<T>, {0x14, 16, 0, 0})
	DMember(bool)                                      bUsesRapidIterationParams                                   ___ OFFSET(get<bool>, {0x24, 1, 1, 0})
	DMember(bool)                                      bDisableDebugSwitches                                       ___ OFFSET(get<bool>, {0x24, 1, 1, 1})
	DMember(bool)                                      bInterpolatedSpawn                                          ___ OFFSET(get<bool>, {0x24, 1, 1, 2})
	DMember(bool)                                      bRequiresPersistentIDs                                      ___ OFFSET(get<bool>, {0x24, 1, 1, 3})
	SMember(FGuid)                                     BaseScriptID                                                ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	SMember(FNiagaraCompileHash)                       BaseScriptCompileHash                                       ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FGuid)                                     ScriptVersionID                                             ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableByteCode
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraVMExecutableByteCode : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<char>)                              Data                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   UncompressedSize                                            ___ OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVMExecutableData
/// Size: 0x01A0 (0x000000 - 0x0001A0)
class FNiagaraVMExecutableData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FNiagaraVMExecutableByteCode)              ByteCode                                                    ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FNiagaraVMExecutableByteCode)              OptimizedByteCode                                           ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	DMember(int32_t)                                   NumTempRegisters                                            ___ OFFSET(get<int32_t>, {0x68, 4, 0, 0})
	DMember(int32_t)                                   NumUserPtrs                                                 ___ OFFSET(get<int32_t>, {0x6C, 4, 0, 0})
	CMember(TArray<FNiagaraCompilerTag>)               CompileTags                                                 ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<char>)                              ScriptLiterals                                              ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FNiagaraVariableBase>)              Attributes                                                  ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FNiagaraScriptDataUsageInfo)               DataUsage                                                   ___ OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(TArray<FNiagaraScriptUObjectCompileInfo>)  UObjectInfos                                                ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
	CMember(TArray<FNiagaraScriptDataInterfaceCompileInfo>) DataInterfaceInfo                                      ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TArray<FVMExternalFunctionBindingInfo>)    CalledVMExternalFunctions                                   ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FNiagaraDataSetID>)                 ReadDataSets                                                ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<FNiagaraDataSetProperties>)         WriteDataSets                                               ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
	CMember(TArray<FNiagaraStatScope>)                 StatScopes                                                  ___ OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FNiagaraShaderScriptParametersMetadata)    ShaderScriptParametersMetadata                              ___ OFFSET(get<T>, {0x118, 88, 0, 0})
	CMember(ENiagaraScriptCompileStatus)               LastCompileStatus                                           ___ OFFSET(get<T>, {0x170, 1, 0, 0})
	CMember(TArray<FSimulationStageMetaData>)          SimulationStageMetaData                                     ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(TArray<char>)                              ExperimentalContextData                                     ___ OFFSET(get<T>, {0x188, 16, 0, 0})
	DMember(bool)                                      bReadsSignificanceIndex                                     ___ OFFSET(get<bool>, {0x198, 1, 1, 0})
	DMember(bool)                                      bNeedsGPUContextInit                                        ___ OFFSET(get<bool>, {0x198, 1, 1, 1})
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
	DMember(uint16_t)                                  SrcOffset                                                   ___ OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  DestOffset                                                  ___ OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  SrcSize                                                     ___ OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  DestSize                                                    ___ OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraScriptExecutionParameterStore
/// Size: 0x0020 (0x000088 - 0x0000A8)
class FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	DMember(int32_t)                                   ParameterSize                                               ___ OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(uint32_t)                                  PaddedParameterSize                                         ___ OFFSET(get<uint32_t>, {0x8C, 4, 0, 0})
	CMember(TArray<FNiagaraScriptExecutionPaddingInfo>) PaddingInfo                                                ___ OFFSET(get<T>, {0x90, 16, 0, 0})
	DMember(bool)                                      bInitialized                                                ___ OFFSET(get<bool>, {0xA0, 1, 1, 0})
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
	SMember(FLinearColor)                              Color                                                       ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x10, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheDataBuffers
/// Size: 0x0060 (0x000000 - 0x000060)
class FNiagaraSimCacheDataBuffers : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(uint32_t)                                  NumInstances                                                ___ OFFSET(get<uint32_t>, {0x0, 4, 0, 0})
	CMember(TArray<char>)                              FloatData                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<char>)                              HalfData                                                    ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<char>)                              Int32Data                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<int32_t>)                           IDToIndexTable                                              ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(uint32_t)                                  IDAcquireTag                                                ___ OFFSET(get<uint32_t>, {0x48, 4, 0, 0})
	CMember(TArray<uint32_t>)                          InterpMapping                                               ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheEmitterFrame
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FNiagaraSimCacheEmitterFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FBox)                                      LocalBounds                                                 ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	DMember(int32_t)                                   TotalSpawnedParticles                                       ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FNiagaraSimCacheDataBuffers)               ParticleDataBuffers                                         ___ OFFSET(get<T>, {0x40, 96, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheSystemFrame
/// Size: 0x0098 (0x000000 - 0x000098)
class FNiagaraSimCacheSystemFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FBox)                                      LocalBounds                                                 ___ OFFSET(get<T>, {0x0, 56, 0, 0})
	SMember(FNiagaraSimCacheDataBuffers)               SystemDataBuffers                                           ___ OFFSET(get<T>, {0x38, 96, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheFrame
/// Size: 0x0120 (0x000000 - 0x000120)
class FNiagaraSimCacheFrame : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FTransform)                                LocalToWorld                                                ___ OFFSET(get<T>, {0x0, 96, 0, 0})
	SMember(FVector3f)                                 LWCTile                                                     ___ OFFSET(get<T>, {0x60, 12, 0, 0})
	DMember(float)                                     SimulationAge                                               ___ OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(int32_t)                                   SimulationTickCount                                         ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FNiagaraSimCacheSystemFrame)               SystemData                                                  ___ OFFSET(get<T>, {0x78, 152, 0, 0})
	CMember(TArray<FNiagaraSimCacheEmitterFrame>)      EmitterData                                                 ___ OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheVariable
/// Size: 0x0014 (0x000000 - 0x000014)
class FNiagaraSimCacheVariable : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FNiagaraVariableBase)                      Variable                                                    ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(uint16_t)                                  FloatOffset                                                 ___ OFFSET(get<uint16_t>, {0x8, 2, 0, 0})
	DMember(uint16_t)                                  FloatCount                                                  ___ OFFSET(get<uint16_t>, {0xA, 2, 0, 0})
	DMember(uint16_t)                                  HalfOffset                                                  ___ OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
	DMember(uint16_t)                                  HalfCount                                                   ___ OFFSET(get<uint16_t>, {0xE, 2, 0, 0})
	DMember(uint16_t)                                  Int32Offset                                                 ___ OFFSET(get<uint16_t>, {0x10, 2, 0, 0})
	DMember(uint16_t)                                  Int32Count                                                  ___ OFFSET(get<uint16_t>, {0x12, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheDataBuffersLayout
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FNiagaraSimCacheDataBuffersLayout : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FName)                                     LayoutName                                                  ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(ENiagaraSimTarget)                         SimTarget                                                   ___ OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(TArray<FNiagaraSimCacheVariable>)          Variables                                                   ___ OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(uint16_t)                                  FloatCount                                                  ___ OFFSET(get<uint16_t>, {0x18, 2, 0, 0})
	DMember(uint16_t)                                  HalfCount                                                   ___ OFFSET(get<uint16_t>, {0x1A, 2, 0, 0})
	DMember(uint16_t)                                  Int32Count                                                  ___ OFFSET(get<uint16_t>, {0x1C, 2, 0, 0})
	DMember(bool)                                      bLocalSpace                                                 ___ OFFSET(get<bool>, {0x1E, 1, 0, 0})
	DMember(bool)                                      bAllowInterpolation                                         ___ OFFSET(get<bool>, {0x1F, 1, 0, 0})
	DMember(bool)                                      bAllowVelocityExtrapolation                                 ___ OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TArray<FName>)                             RebaseVariableNames                                         ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FName>)                             InterpVariableNames                                         ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(uint16_t)                                  ComponentVelocity                                           ___ OFFSET(get<uint16_t>, {0x48, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSimCacheLayout
/// Size: 0x00C0 (0x000000 - 0x0000C0)
class FNiagaraSimCacheLayout : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FNiagaraSimCacheDataBuffersLayout)         SystemLayout                                                ___ OFFSET(get<T>, {0x0, 176, 0, 0})
	CMember(TArray<FNiagaraSimCacheDataBuffersLayout>) EmitterLayouts                                              ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEmitterCompiledData
/// Size: 0x00F8 (0x000000 - 0x0000F8)
class FNiagaraEmitterCompiledData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(TArray<FName>)                             SpawnAttributes                                             ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FNiagaraVariable)                          EmitterSpawnIntervalVar                                     ___ OFFSET(get<T>, {0x10, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterInterpSpawnStartDTVar                                ___ OFFSET(get<T>, {0x28, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterSpawnGroupVar                                        ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterAgeVar                                               ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterRandomSeedVar                                        ___ OFFSET(get<T>, {0x70, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterInstanceSeedVar                                      ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	SMember(FNiagaraVariable)                          EmitterTotalSpawnedParticlesVar                             ___ OFFSET(get<T>, {0xA0, 24, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         ___ OFFSET(get<T>, {0xB8, 64, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBinding
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraParameterDataSetBinding : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   ParameterOffset                                             ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   DataSetComponentOffset                                      ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraParameterDataSetBindingCollection
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraParameterDataSetBindingCollection : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FNiagaraParameterDataSetBinding>)   FloatOffsets                                                ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBinding>)   Int32Offsets                                                ___ OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemCompiledData
/// Size: 0x0228 (0x000000 - 0x000228)
class FNiagaraSystemCompiledData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FNiagaraParameterStore)                    InstanceParamStore                                          ___ OFFSET(get<T>, {0x0, 136, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               DataSetCompiledData                                         ___ OFFSET(get<T>, {0x88, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               SpawnInstanceParamsDataSetCompiledData                      ___ OFFSET(get<T>, {0xC8, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               UpdateInstanceParamsDataSetCompiledData                     ___ OFFSET(get<T>, {0x108, 64, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceGlobalBinding                                  ___ OFFSET(get<T>, {0x148, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceSystemBinding                                  ___ OFFSET(get<T>, {0x168, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) SpawnInstanceOwnerBinding                                   ___ OFFSET(get<T>, {0x188, 32, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBindingCollection>) SpawnInstanceEmitterBindings                        ___ OFFSET(get<T>, {0x1A8, 16, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceGlobalBinding                                 ___ OFFSET(get<T>, {0x1B8, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceSystemBinding                                 ___ OFFSET(get<T>, {0x1D8, 32, 0, 0})
	SMember(FNiagaraParameterDataSetBindingCollection) UpdateInstanceOwnerBinding                                  ___ OFFSET(get<T>, {0x1F8, 32, 0, 0})
	CMember(TArray<FNiagaraParameterDataSetBindingCollection>) UpdateInstanceEmitterBindings                       ___ OFFSET(get<T>, {0x218, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSystemScalabilityOverrides
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSystemScalabilityOverrides : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FNiagaraSystemScalabilityOverride>) Overrides                                                   ___ OFFSET(get<T>, {0x0, 16, 0, 0})
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
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInt32
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraInt32 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBool
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraBool : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   Value                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
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
	DMember(uint16_t)                                  Value                                                       ___ OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector2
/// Size: 0x0004 (0x000000 - 0x000004)
class FNiagaraHalfVector2 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(uint16_t)                                  X                                                           ___ OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           ___ OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector3
/// Size: 0x0006 (0x000000 - 0x000006)
class FNiagaraHalfVector3 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 6;

public:
	DMember(uint16_t)                                  X                                                           ___ OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           ___ OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Z                                                           ___ OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
};

/// Struct /Script/Niagara.NiagaraHalfVector4
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraHalfVector4 : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(uint16_t)                                  X                                                           ___ OFFSET(get<uint16_t>, {0x0, 2, 0, 0})
	DMember(uint16_t)                                  Y                                                           ___ OFFSET(get<uint16_t>, {0x2, 2, 0, 0})
	DMember(uint16_t)                                  Z                                                           ___ OFFSET(get<uint16_t>, {0x4, 2, 0, 0})
	DMember(uint16_t)                                  W                                                           ___ OFFSET(get<uint16_t>, {0x6, 2, 0, 0})
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
	DMember(double)                                    Value                                                       ___ OFFSET(get<double>, {0x0, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraMatrix
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraMatrix : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector4f)                                 Row0                                                        ___ OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector4f)                                 Row1                                                        ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FVector4f)                                 Row2                                                        ___ OFFSET(get<T>, {0x20, 16, 0, 0})
	SMember(FVector4f)                                 Row3                                                        ___ OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraSpawnInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FNiagaraSpawnInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     InterpStartDt                                               ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     IntervalDt                                                  ___ OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   SpawnGroup                                                  ___ OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraID
/// Size: 0x0008 (0x000000 - 0x000008)
class FNiagaraID : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(int32_t)                                   Index                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   AcquireTag                                                  ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraRandInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FNiagaraRandInfo : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(int32_t)                                   Seed1                                                       ___ OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   Seed2                                                       ___ OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   Seed3                                                       ___ OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInputConditionMetadata
/// Size: 0x0018 (0x000000 - 0x000018)
class FNiagaraInputConditionMetadata : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     InputName                                                   ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(TArray<FString>)                           TargetValues                                                ___ OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Niagara.NiagaraEnumParameterMetaData
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraEnumParameterMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     OverrideName                                                ___ OFFSET(get<T>, {0x0, 4, 0, 0})
	CMember(UTexture2D*)                               IconOverride                                                ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      bUseColorOverride                                           ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FLinearColor)                              ColorOverride                                               ___ OFFSET(get<T>, {0x14, 16, 0, 0})
};

/// Struct /Script/Niagara.WidgetNamedInputValue
/// Size: 0x0038 (0x000000 - 0x000038)
class FWidgetNamedInputValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Value                                                       ___ OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x8, 24, 0, 0})
	SMember(FText)                                     ToolTip                                                     ___ OFFSET(get<T>, {0x20, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraWidgetNamedIntegerInputValue
/// Size: 0x0030 (0x000000 - 0x000030)
class FNiagaraWidgetNamedIntegerInputValue : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FText)                                     DisplayName                                                 ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     ToolTip                                                     ___ OFFSET(get<T>, {0x18, 24, 0, 0})
};

/// Struct /Script/Niagara.NiagaraInputParameterCustomization
/// Size: 0x0040 (0x000000 - 0x000040)
class FNiagaraInputParameterCustomization : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ENiagaraInputWidgetType)                   WidgetType                                                  ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(bool)                                      bHasMinValue                                                ___ OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(float)                                     MinValue                                                    ___ OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bHasMaxValue                                                ___ OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(float)                                     MaxValue                                                    ___ OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(bool)                                      bHasStepWidth                                               ___ OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     StepWidth                                                   ___ OFFSET(get<float>, {0x14, 4, 0, 0})
	CMember(TArray<FWidgetNamedInputValue>)            InputDropdownValues                                         ___ OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FNiagaraWidgetNamedIntegerInputValue>) EnumStyleDropdownValues                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bBroadcastValueChangesOnCommitOnly                          ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
};

/// Struct /Script/Niagara.NiagaraBoolParameterMetaData
/// Size: 0x0020 (0x000000 - 0x000020)
class FNiagaraBoolParameterMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ENiagaraBoolDisplayMode)                   DisplayMode                                                 ___ OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     OverrideNameTrue                                            ___ OFFSET(get<T>, {0x4, 4, 0, 0})
	SMember(FName)                                     OverrideNameFalse                                           ___ OFFSET(get<T>, {0x8, 4, 0, 0})
	CMember(UTexture2D*)                               IconOverrideTrue                                            ___ OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(UTexture2D*)                               IconOverrideFalse                                           ___ OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariableMetaData
/// Size: 0x0180 (0x000000 - 0x000180)
class FNiagaraVariableMetaData : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FText)                                     Description                                                 ___ OFFSET(get<T>, {0x0, 24, 0, 0})
	SMember(FText)                                     CategoryName                                                ___ OFFSET(get<T>, {0x18, 24, 0, 0})
	CMember(EUnit)                                     DisplayUnit                                                 ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(bool)                                      bAdvancedDisplay                                            ___ OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bDisplayInOverviewStack                                     ___ OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(int32_t)                                   InlineParameterSortPriority                                 ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(bool)                                      bOverrideColor                                              ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FLinearColor)                              InlineParameterColorOverride                                ___ OFFSET(get<T>, {0x3C, 16, 0, 0})
	CMember(TArray<FNiagaraEnumParameterMetaData>)     InlineParameterEnumOverrides                                ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bEnableBoolOverride                                         ___ OFFSET(get<bool>, {0x60, 1, 0, 0})
	SMember(FNiagaraBoolParameterMetaData)             InlineParameterBoolOverride                                 ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	DMember(int32_t)                                   EditorSortPriority                                          ___ OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(bool)                                      bInlineEditConditionToggle                                  ___ OFFSET(get<bool>, {0x8C, 1, 0, 0})
	SMember(FNiagaraInputConditionMetadata)            EditCondition                                               ___ OFFSET(get<T>, {0x90, 24, 0, 0})
	SMember(FNiagaraInputConditionMetadata)            VisibleCondition                                            ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
	CMember(TMap<FName, FString>)                      PropertyMetaData                                            ___ OFFSET(get<T>, {0xC0, 80, 0, 0})
	SMember(FName)                                     ParentAttribute                                             ___ OFFSET(get<T>, {0x110, 4, 0, 0})
	CMember(TArray<FName>)                             AlternateAliases                                            ___ OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FNiagaraInputParameterCustomization)       WidgetCustomization                                         ___ OFFSET(get<T>, {0x128, 64, 0, 0})
	SMember(FGuid)                                     VariableGuid                                                ___ OFFSET(get<T>, {0x168, 16, 0, 0})
	DMember(bool)                                      bIsStaticSwitch                                             ___ OFFSET(get<bool>, {0x178, 1, 0, 0})
	DMember(int32_t)                                   StaticSwitchDefaultValue                                    ___ OFFSET(get<int32_t>, {0x17C, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraUserRedirectionParameterStore
/// Size: 0x0050 (0x000088 - 0x0000D8)
class FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	CMember(TMap<FNiagaraVariable, FNiagaraVariable>)  UserParameterRedirects                                      ___ OFFSET(get<T>, {0x88, 80, 0, 0})
};

/// Struct /Script/Niagara.NiagaraVariant
/// Size: 0x0028 (0x000000 - 0x000028)
class FNiagaraVariant : public MDKStruct
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(UObject*)                                  Object                                                      ___ OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(UNiagaraDataInterface*)                    DataInterface                                               ___ OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(TArray<char>)                              Bytes                                                       ___ OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(ENiagaraVariantMode)                       CurrentMode                                                 ___ OFFSET(get<T>, {0x20, 4, 0, 0})
};

/// Struct /Script/Niagara.NiagaraWorldManagerTickFunction
/// Size: 0x0008 (0x000028 - 0x000030)
class FNiagaraWorldManagerTickFunction : public FTickFunction
{ 
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/Niagara.NDIRenderTargetVolumeSimCacheData
/// Size: 0x0018 (0x000028 - 0x000040)
class UNDIRenderTargetVolumeSimCacheData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     CompressionType                                             ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(TArray<FNDIRenderTargetVolumeSimCacheFrame>) Frames                                                    ___ OFFSET(get<T>, {0x30, 16, 0, 0})
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
	CMember(UNiagaraDataChannelHandler*)               Owner                                                       ___ OFFSET(get<T>, {0x40, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannelWriter
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraDataChannelWriter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UNiagaraDataChannelHandler*)               Owner                                                       ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannelHandler
/// Size: 0x0020 (0x000028 - 0x000048)
class UNiagaraDataChannelHandler : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(TWeakObjectPtr<UNiagaraDataChannel*>)      DataChannel                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(UNiagaraDataChannelWriter*)                Writer                                                      ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UNiagaraDataChannelReader*)                Reader                                                      ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannelAsset
/// Size: 0x0008 (0x000028 - 0x000030)
class UNiagaraDataChannelAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(UNiagaraDataChannel*)                      DataChannel                                                 ___ OFFSET(get<T>, {0x28, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannel
/// Size: 0x00F8 (0x000028 - 0x000120)
class UNiagaraDataChannel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FNiagaraVariable>)                  Variables                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bKeepPreviousFrameData                                      ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(bool)                                      bEnforceTickGroupReadWriteOrder                             ___ OFFSET(get<bool>, {0x39, 1, 0, 0})
	CMember(TEnumAsByte<ETickingGroup>)                FinalWriteTickGroup                                         ___ OFFSET(get<T>, {0x3A, 1, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               CompiledData                                                ___ OFFSET(get<T>, {0x40, 64, 0, 0})
	SMember(FNiagaraDataSetCompiledData)               CompiledDataGPU                                             ___ OFFSET(get<T>, {0x80, 64, 0, 0})
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
	CMember(ENiagraDataChannel_IslandMode)             Mode                                                        ___ OFFSET(get<T>, {0x120, 1, 0, 0})
	SMember(FVector)                                   InitialExtents                                              ___ OFFSET(get<T>, {0x128, 24, 0, 0})
	SMember(FVector)                                   MaxExtents                                                  ___ OFFSET(get<T>, {0x140, 24, 0, 0})
	SMember(FVector)                                   PerElementExtents                                           ___ OFFSET(get<T>, {0x158, 24, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    Systems                                                     ___ OFFSET(get<T>, {0x170, 16, 0, 0})
	DMember(int32_t)                                   IslandPoolSize                                              ___ OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	SMember(FNDCIslandDebugDrawSettings)               DebugDrawSettings                                           ___ OFFSET(get<T>, {0x184, 4, 0, 0})
	CMember(TArray<UNiagaraSystem*>)                   SystemsInternal                                             ___ OFFSET(get<T>, {0x188, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataChannelHandler_Islands
/// Size: 0x0030 (0x000048 - 0x000078)
class UNiagaraDataChannelHandler_Islands : public UNiagaraDataChannelHandler
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<int32_t>)                           ActiveIslands                                               ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<int32_t>)                           FreeIslands                                                 ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FNDCIsland>)                        IslandPool                                                  ___ OFFSET(get<T>, {0x68, 16, 0, 0})
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
	CMember(UNiagaraDataChannelAsset*)                 Channel                                                     ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraDataInterfaceEmitterBinding)       EmitterBinding                                              ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(bool)                                      bReadCurrentFrame                                           ___ OFFSET(get<bool>, {0x48, 1, 0, 0})
	DMember(bool)                                      bUpdateSourceDataEveryTick                                  ___ OFFSET(get<bool>, {0x49, 1, 0, 0})
	DMember(bool)                                      bOverrideSpawnGroupToDataChannelIndex                       ___ OFFSET(get<bool>, {0x4A, 1, 0, 0})
	SMember(FName)                                     SpawnInfoName                                               ___ OFFSET(get<T>, {0x4C, 4, 0, 0})
	SMember(FNDIDataChannelCompiledData)               CompiledData                                                ___ OFFSET(get<T>, {0x50, 104, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceDataChannelWrite
/// Size: 0x00C0 (0x000038 - 0x0000F8)
class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	CMember(ENiagaraDataChannelAllocationMode)         AllocationMode                                              ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(uint32_t)                                  AllocationCount                                             ___ OFFSET(get<uint32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bPublishToGame                                              ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bPublishToCPU                                               ___ OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bPublishToGPU                                               ___ OFFSET(get<bool>, {0x42, 1, 0, 0})
	DMember(bool)                                      bUpdateDestinationDataEveryTick                             ___ OFFSET(get<bool>, {0x43, 1, 0, 0})
	CMember(UNiagaraDataChannelAsset*)                 Channel                                                     ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FNDIDataChannelWriteCompiledData)          CompiledData                                                ___ OFFSET(get<T>, {0x50, 168, 0, 0})
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
	DMember(bool)                                      bSystemsSupportLargeWorldCoordinates                        ___ OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(bool)                                      bEnforceStrictStackTypes                                    ___ OFFSET(get<bool>, {0x31, 1, 0, 0})
	DMember(bool)                                      bExperimentalVMEnabled                                      ___ OFFSET(get<bool>, {0x32, 1, 0, 0})
	DMember(bool)                                      bLimitDeltaTime                                             ___ OFFSET(get<bool>, {0x33, 1, 0, 0})
	DMember(float)                                     MaxDeltaTimePerTick                                         ___ OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FSoftObjectPath)                           DefaultEffectType                                           ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	SMember(FSoftObjectPath)                           RequiredEffectType                                          ___ OFFSET(get<T>, {0x50, 24, 0, 0})
	SMember(FLinearColor)                              PositionPinTypeColor                                        ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FText>)                             QualityLevels                                               ___ OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TMap<FString, FText>)                      ComponentRendererWarningsPerClass                           ___ OFFSET(get<T>, {0x88, 80, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   DefaultRenderTargetFormat                                   ___ OFFSET(get<T>, {0xD8, 1, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   DefaultGridFormat                                           ___ OFFSET(get<T>, {0xD9, 1, 0, 0})
	CMember(ENiagaraDefaultRendererMotionVectorSetting) DefaultRendererMotionVectorSetting                         ___ OFFSET(get<T>, {0xDC, 4, 0, 0})
	CMember(ENiagaraDefaultRendererPixelCoverageMode)  DefaultPixelCoverageMode                                    ___ OFFSET(get<T>, {0xE0, 1, 0, 0})
	CMember(ENiagaraDefaultSortPrecision)              DefaultSortPrecision                                        ___ OFFSET(get<T>, {0xE1, 1, 0, 0})
	CMember(ENiagaraDefaultGpuTranslucentLatency)      DefaultGpuTranslucentLatency                                ___ OFFSET(get<T>, {0xE2, 1, 0, 0})
	DMember(float)                                     DefaultLightInverseExposureBlend                            ___ OFFSET(get<float>, {0xE4, 4, 0, 0})
	CMember(TEnumAsByte<ENDISkelMesh_GpuMaxInfluences>) NDISkelMesh_GpuMaxInfluences                               ___ OFFSET(get<T>, {0xE8, 1, 0, 0})
	CMember(TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat>) NDISkelMesh_GpuUniformSamplingFormat               ___ OFFSET(get<T>, {0xE9, 1, 0, 0})
	CMember(TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat>) NDISkelMesh_AdjacencyTriangleIndexFormat       ___ OFFSET(get<T>, {0xEA, 1, 0, 0})
	DMember(bool)                                      NDIStaticMesh_AllowDistanceFields                           ___ OFFSET(get<bool>, {0xEB, 1, 0, 0})
	CMember(TArray<TEnumAsByte>)                       NDICollisionQuery_AsyncGpuTraceProviderOrder                ___ OFFSET(get<T>, {0xF0, 16, 0, 0})
	SMember(FString)                                   SimCacheAuxiliaryFileBasePath                               ___ OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(int64_t)                                   SimCacheMaxCPUMemoryVolumetrics                             ___ OFFSET(get<int64_t>, {0x110, 8, 0, 0})
	CMember(TArray<FNiagaraPlatformSetRedirect>)       PlatformSetRedirects                                        ___ OFFSET(get<T>, {0x118, 16, 0, 0})
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
	CMember(TArray<UNiagaraValidationRule*>)           ValidationRules                                             ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceActorComponent
/// Size: 0x0040 (0x000038 - 0x000078)
class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(ENDIActorComponentSourceMode)              SourceMode                                                  ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   LocalPlayerIndex                                            ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TLazyObjectPtr<AActor*>)                   SourceActor                                                 ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	SMember(FNiagaraUserParameterBinding)              ActorOrComponentParameter                                   ___ OFFSET(get<T>, {0x58, 24, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    ___ OFFSET(get<bool>, {0x70, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAsyncGpuTrace
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(int32_t)                                   MaxTracesPerParticle                                        ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   MaxRetraces                                                 ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	CMember(TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider>) TraceProvider                                   ___ OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceDebugDraw
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(uint32_t)                                  OverrideMaxLineInstances                                    ___ OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceDynamicMesh
/// Size: 0x0070 (0x000038 - 0x0000A8)
class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<FNiagaraDynamicMeshSection>)        Sections                                                    ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FNiagaraDynamicMeshMaterial>)       Materials                                                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   NumVertices                                                 ___ OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	DMember(int32_t)                                   NumTexCoords                                                ___ OFFSET(get<int32_t>, {0x64, 4, 0, 0})
	DMember(bool)                                      bHasColors                                                  ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bHasTangentBasis                                            ___ OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bClearTrianglesPerFrame                                     ___ OFFSET(get<bool>, {0x6A, 1, 0, 0})
	SMember(FBox)                                      DefaultBounds                                               ___ OFFSET(get<T>, {0x70, 56, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceEmitterProperties
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FNiagaraDataInterfaceEmitterBinding)       EmitterBinding                                              ___ OFFSET(get<T>, {0x38, 8, 0, 0})
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
	CMember(UPhysicsAsset*)                            DefaultSource                                               ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SoftSourceActor                                             ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MeshUserParameter                                           ___ OFFSET(get<T>, {0x60, 24, 0, 0})
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
	CMember(ENDISceneCapture2DSourceMode)              SourceMode                                                  ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FNiagaraUserParameterBinding)              SceneCaptureUserParameter                                   ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bAutoMoveWithComponent                                      ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	CMember(ENDISceneCapture2DOffsetMode)              AutoMoveOffsetLocationMode                                  ___ OFFSET(get<T>, {0x59, 1, 0, 0})
	SMember(FVector)                                   AutoMoveOffsetLocation                                      ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	CMember(ENDISceneCapture2DOffsetMode)              AutoMoveOffsetRotationMode                                  ___ OFFSET(get<T>, {0x78, 1, 0, 0})
	SMember(FRotator)                                  AutoMoveOffsetRotation                                      ___ OFFSET(get<T>, {0x80, 24, 0, 0})
	CMember(TEnumAsByte<ESceneCaptureSource>)          ManagedCaptureSource                                        ___ OFFSET(get<T>, {0x98, 1, 0, 0})
	SMember(FIntPoint)                                 ManagedTextureSize                                          ___ OFFSET(get<T>, {0x9C, 8, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   ManagedTextureFormat                                        ___ OFFSET(get<T>, {0xA4, 1, 0, 0})
	CMember(TEnumAsByte<ECameraProjectionMode>)        ManagedProjectionType                                       ___ OFFSET(get<T>, {0xA5, 1, 0, 0})
	DMember(float)                                     ManagedFOVAngle                                             ___ OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     ManagedOrthoWidth                                           ___ OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(bool)                                      bManagedCaptureEveryFrame                                   ___ OFFSET(get<bool>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bManagedCaptureOnMovement                                   ___ OFFSET(get<bool>, {0xB1, 1, 0, 0})
	CMember(TArray<AActor*>)                           ManagedShowOnlyActors                                       ___ OFFSET(get<T>, {0xB8, 16, 0, 0})
	CMember(TMap<uint64_t, USceneCaptureComponent2D*>) ManagedCaptureComponents                                    ___ OFFSET(get<T>, {0xD0, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimCacheReader
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FNiagaraUserParameterBinding)              SimCacheBinding                                             ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	CMember(UNiagaraSimCache*)                         SimCache                                                    ___ OFFSET(get<T>, {0x50, 8, 0, 0})
	SMember(FName)                                     EmitterBinding                                              ___ OFFSET(get<T>, {0x58, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSimpleCounter
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(ENiagaraGpuSyncMode)                       GpuSyncMode                                                 ___ OFFSET(get<T>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   InitialValue                                                ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceStaticMesh
/// Size: 0x0088 (0x000038 - 0x0000C0)
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(ENDIStaticMesh_SourceMode)                 SourceMode                                                  ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(UStaticMesh*)                              DefaultMesh                                                 ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SoftSourceActor                                             ___ OFFSET(get<T>, {0x48, 32, 0, 0})
	CMember(UStaticMeshComponent*)                     SourceComponent                                             ___ OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FNDIStaticMeshSectionFilter)               SectionFilter                                               ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	DMember(bool)                                      bCaptureTransformsPerFrame                                  ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bUsePhysicsBodyVelocity                                     ___ OFFSET(get<bool>, {0x81, 1, 0, 0})
	DMember(bool)                                      bAllowSamplingFromStreamingLODs                             ___ OFFSET(get<bool>, {0x82, 1, 0, 0})
	DMember(int32_t)                                   LODIndex                                                    ___ OFFSET(get<int32_t>, {0x84, 4, 0, 0})
	SMember(FNiagaraUserParameterBinding)              LODIndexUserParameter                                       ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	DMember(int32_t)                                   InstanceIndex                                               ___ OFFSET(get<int32_t>, {0xA0, 4, 0, 0})
	CMember(TArray<FName>)                             FilteredSockets                                             ___ OFFSET(get<T>, {0xA8, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader
/// Size: 0x0060 (0x000038 - 0x000098)
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	CMember(ENDIObjectPropertyReaderSourceMode)        SourceMode                                                  ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FNiagaraUserParameterBinding)              UObjectParameterBinding                                     ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	CMember(TArray<FNiagaraUObjectPropertyReaderRemap>) PropertyRemap                                              ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SourceActor                                                 ___ OFFSET(get<T>, {0x68, 32, 0, 0})
	CMember(UClass*)                                   SourceActorComponentClass                                   ___ OFFSET(get<T>, {0x88, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVirtualTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(URuntimeVirtualTexture*)                   Texture                                                     ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraSystemSpawnSection
/// Size: 0x0010 (0x0000F0 - 0x000100)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(ENiagaraSystemSpawnSectionStartBehavior)   SectionStartBehavior                                        ___ OFFSET(get<T>, {0xF0, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEvaluateBehavior) SectionEvaluateBehavior                                    ___ OFFSET(get<T>, {0xF4, 4, 0, 0})
	CMember(ENiagaraSystemSpawnSectionEndBehavior)     SectionEndBehavior                                          ___ OFFSET(get<T>, {0xF8, 4, 0, 0})
	CMember(ENiagaraAgeUpdateMode)                     AgeUpdateMode                                               ___ OFFSET(get<T>, {0xFC, 1, 0, 0})
	DMember(bool)                                      bAllowScalability                                           ___ OFFSET(get<bool>, {0xFD, 1, 0, 0})
};

/// Class /Script/Niagara.MovieSceneNiagaraTrack
/// Size: 0x0010 (0x000098 - 0x0000A8)
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	CMember(TArray<UMovieSceneSection*>)               Sections                                                    ___ OFFSET(get<T>, {0x98, 16, 0, 0})
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
	SMember(FNiagaraVariable)                          Parameter                                                   ___ OFFSET(get<T>, {0xA8, 24, 0, 0})
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
	DMember(int32_t)                                   ChannelsUsed                                                ___ OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANiagaraActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UNiagaraComponent*)                        NiagaraComponent                                            ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	DMember(bool)                                      bDestroyOnSystemFinish                                      ___ OFFSET(get<bool>, {0x298, 1, 1, 0})
};

/// Class /Script/Niagara.NiagaraBakerOutput
/// Size: 0x0010 (0x000028 - 0x000038)
class UNiagaraBakerOutput : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   OutputName                                                  ___ OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerOutputSimCache
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FString)                                   SimCacheAssetPathFormat                                     ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	SMember(FNiagaraSimCacheCreateParameters)          CreateParameters                                            ___ OFFSET(get<T>, {0x48, 88, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerOutputTexture2D
/// Size: 0x0068 (0x000038 - 0x0000A0)
class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FNiagaraBakerTextureSource)                SourceBinding                                               ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bGenerateAtlas                                              ___ OFFSET(get<bool>, {0x50, 1, 1, 0})
	DMember(bool)                                      bGenerateFrames                                             ___ OFFSET(get<bool>, {0x50, 1, 1, 1})
	DMember(bool)                                      bExportFrames                                               ___ OFFSET(get<bool>, {0x50, 1, 1, 2})
	DMember(bool)                                      bSetTextureAddressX                                         ___ OFFSET(get<bool>, {0x50, 1, 1, 3})
	DMember(bool)                                      bSetTextureAddressY                                         ___ OFFSET(get<bool>, {0x50, 1, 1, 4})
	SMember(FIntPoint)                                 FrameSize                                                   ___ OFFSET(get<T>, {0x54, 8, 0, 0})
	SMember(FIntPoint)                                 AtlasTextureSize                                            ___ OFFSET(get<T>, {0x5C, 8, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               TextureAddressX                                             ___ OFFSET(get<T>, {0x6C, 1, 0, 0})
	CMember(TEnumAsByte<TextureAddress>)               TextureAddressY                                             ___ OFFSET(get<T>, {0x6D, 1, 0, 0})
	SMember(FString)                                   AtlasAssetPathFormat                                        ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FString)                                   FramesAssetPathFormat                                       ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FString)                                   FramesExportPathFormat                                      ___ OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerOutputVolumeTexture
/// Size: 0x0050 (0x000038 - 0x000088)
class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FNiagaraBakerTextureSource)                SourceBinding                                               ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	DMember(bool)                                      bGenerateAtlas                                              ___ OFFSET(get<bool>, {0x50, 1, 1, 0})
	DMember(bool)                                      bGenerateFrames                                             ___ OFFSET(get<bool>, {0x50, 1, 1, 1})
	DMember(bool)                                      bExportFrames                                               ___ OFFSET(get<bool>, {0x50, 1, 1, 2})
	SMember(FString)                                   AtlasAssetPathFormat                                        ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	SMember(FString)                                   FramesAssetPathFormat                                       ___ OFFSET(get<T>, {0x68, 16, 0, 0})
	SMember(FString)                                   FramesExportPathFormat                                      ___ OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBakerSettings
/// Size: 0x01C8 (0x000028 - 0x0001F0)
class UNiagaraBakerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	DMember(float)                                     StartSeconds                                                ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     DurationSeconds                                             ___ OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(int32_t)                                   FramesPerSecond                                             ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(bool)                                      bPreviewLooping                                             ___ OFFSET(get<bool>, {0x34, 1, 1, 0})
	SMember(FIntPoint)                                 FramesPerDimension                                          ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<UNiagaraBakerOutput*>)              Outputs                                                     ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FNiagaraBakerCameraSettings>)       CameraSettings                                              ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(int32_t)                                   CurrentCameraIndex                                          ___ OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	SMember(FName)                                     BakeQualityLevel                                            ___ OFFSET(get<T>, {0x64, 4, 0, 0})
	DMember(bool)                                      bRenderComponentOnly                                        ___ OFFSET(get<bool>, {0x68, 1, 1, 0})
	CMember(TArray<FNiagaraBakerTextureSettings>)      OutputTextures                                              ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(ENiagaraBakerViewMode)                     CameraViewportMode                                          ___ OFFSET(get<T>, {0x80, 4, 0, 0})
	SMember(FVector)                                   CameraViewportLocation                                      ___ OFFSET(get<T>, {0x88, 168, 0, 0})
	SMember(FRotator)                                  CameraViewportRotation                                      ___ OFFSET(get<T>, {0x130, 168, 0, 0})
	DMember(float)                                     CameraOrbitDistance                                         ___ OFFSET(get<float>, {0x1D8, 4, 0, 0})
	DMember(float)                                     CameraFOV                                                   ___ OFFSET(get<float>, {0x1DC, 4, 0, 0})
	DMember(float)                                     CameraOrthoWidth                                            ___ OFFSET(get<float>, {0x1E0, 4, 0, 0})
	DMember(bool)                                      bUseCameraAspectRatio                                       ___ OFFSET(get<bool>, {0x1E4, 1, 1, 0})
	DMember(float)                                     CameraAspectRatio                                           ___ OFFSET(get<float>, {0x1E8, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponent
/// Size: 0x02A0 (0x000570 - 0x000810)
class UNiagaraComponent : public UFXSystemComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	CMember(UNiagaraSystem*)                           Asset                                                       ___ OFFSET(get<T>, {0x568, 8, 0, 0})
	CMember(ENiagaraTickBehavior)                      TickBehavior                                                ___ OFFSET(get<T>, {0x570, 1, 0, 0})
	DMember(int32_t)                                   RandomSeedOffset                                            ___ OFFSET(get<int32_t>, {0x574, 4, 0, 0})
	SMember(FNiagaraUserRedirectionParameterStore)     OverrideParameters                                          ___ OFFSET(get<T>, {0x578, 216, 0, 0})
	DMember(bool)                                      bForceSolo                                                  ___ OFFSET(get<bool>, {0x650, 1, 1, 0})
	DMember(bool)                                      bEnableGpuComputeDebug                                      ___ OFFSET(get<bool>, {0x650, 1, 1, 1})
	DMember(bool)                                      bOverrideWarmupSettings                                     ___ OFFSET(get<bool>, {0x650, 1, 1, 2})
	DMember(int32_t)                                   WarmupTickCount                                             ___ OFFSET(get<int32_t>, {0x654, 4, 0, 0})
	DMember(float)                                     WarmupTickDelta                                             ___ OFFSET(get<float>, {0x658, 4, 0, 0})
	DMember(bool)                                      bAutoDestroy                                                ___ OFFSET(get<bool>, {0x690, 1, 1, 0})
	DMember(bool)                                      bRenderingEnabled                                           ___ OFFSET(get<bool>, {0x690, 1, 1, 1})
	DMember(bool)                                      bAutoManageAttachment                                       ___ OFFSET(get<bool>, {0x690, 1, 1, 2})
	DMember(bool)                                      bAutoAttachWeldSimulatedBodies                              ___ OFFSET(get<bool>, {0x690, 1, 1, 3})
	DMember(float)                                     MaxTimeBeforeForceUpdateTransform                           ___ OFFSET(get<float>, {0x694, 4, 0, 0})
	CMember(ENiagaraOcclusionQueryMode)                OcclusionQueryMode                                          ___ OFFSET(get<T>, {0x699, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSystemFinished                                            ___ OFFSET(get<T>, {0x6A0, 16, 0, 0})
	CMember(TWeakObjectPtr<USceneComponent*>)          AutoAttachParent                                            ___ OFFSET(get<T>, {0x6B0, 8, 0, 0})
	SMember(FName)                                     AutoAttachSocketName                                        ___ OFFSET(get<T>, {0x6B8, 4, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachLocationRule                                      ___ OFFSET(get<T>, {0x6BC, 1, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachRotationRule                                      ___ OFFSET(get<T>, {0x6BD, 1, 0, 0})
	CMember(EAttachmentRule)                           AutoAttachScaleRule                                         ___ OFFSET(get<T>, {0x6BE, 1, 0, 0})
	DMember(bool)                                      bAllowScalability                                           ___ OFFSET(get<bool>, {0x6C8, 1, 1, 4})
	CMember(UNiagaraSimCache*)                         SimCache                                                    ___ OFFSET(get<T>, {0x7F8, 8, 0, 0})
	CMember(UNiagaraCullProxyComponent*)               CullProxy                                                   ___ OFFSET(get<T>, {0x800, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponentPool
/// Size: 0x0058 (0x000028 - 0x000080)
class UNiagaraComponentPool : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(TMap<UNiagaraSystem*, FNCPool>)            WorldParticleSystemPools                                    ___ OFFSET(get<T>, {0x28, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraRendererProperties
/// Size: 0x0088 (0x000028 - 0x0000B0)
class UNiagaraRendererProperties : public UNiagaraMergeable
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   ___ OFFSET(get<T>, {0x28, 48, 0, 0})
	DMember(int32_t)                                   SortOrderHint                                               ___ OFFSET(get<int32_t>, {0x58, 4, 0, 0})
	CMember(ENiagaraRendererMotionVectorSetting)       MotionVectorSetting                                         ___ OFFSET(get<T>, {0x5C, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererEnabledBinding                                      ___ OFFSET(get<T>, {0x60, 40, 0, 0})
	DMember(bool)                                      bIsEnabled                                                  ___ OFFSET(get<bool>, {0x88, 1, 0, 0})
	DMember(bool)                                      bAllowInCullProxies                                         ___ OFFSET(get<bool>, {0x89, 1, 0, 0})
	SMember(FGuid)                                     OuterEmitterVersion                                         ___ OFFSET(get<T>, {0x8C, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraComponentRendererProperties
/// Size: 0x00F0 (0x0000B0 - 0x0001A0)
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(UClass*)                                   ComponentType                                               ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	DMember(uint32_t)                                  ComponentCountLimit                                         ___ OFFSET(get<uint32_t>, {0xB8, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          EnabledBinding                                              ___ OFFSET(get<T>, {0xC0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                ___ OFFSET(get<T>, {0xE8, 40, 0, 0})
	DMember(bool)                                      bAssignComponentsOnParticleID                               ___ OFFSET(get<bool>, {0x110, 1, 0, 0})
	DMember(bool)                                      bCreateComponentFirstParticleFrame                          ___ OFFSET(get<bool>, {0x111, 1, 0, 0})
	DMember(bool)                                      bOnlyActivateNewlyAquiredComponents                         ___ OFFSET(get<bool>, {0x112, 1, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          ___ OFFSET(get<int32_t>, {0x114, 4, 0, 0})
	CMember(USceneComponent*)                          TemplateComponent                                           ___ OFFSET(get<T>, {0x118, 8, 0, 0})
	CMember(TArray<FNiagaraComponentPropertyBinding>)  PropertyBindings                                            ___ OFFSET(get<T>, {0x120, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraCullProxyComponent
/// Size: 0x0010 (0x000810 - 0x000820)
class UNiagaraCullProxyComponent : public UNiagaraComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2080;

public:
	CMember(TArray<FNiagaraCulledComponentInfo>)       Instances                                                   ___ OFFSET(get<T>, {0x808, 16, 0, 0})
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
	CMember(UTexture*)                                 Texture                                                     ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArray
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(ENiagaraGpuSyncMode)                       GpuSyncMode                                                 ___ OFFSET(get<T>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   MaxElements                                                 ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<float>)                             FloatData                                                   ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat2
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FVector2f>)                         InternalFloatData                                           ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat3
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FVector3f>)                         InternalFloatData                                           ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayPosition
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FNiagaraPosition>)                  PositionData                                                ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayFloat4
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FVector4f>)                         InternalFloatData                                           ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayColor
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FLinearColor>)                      ColorData                                                   ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayQuat
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FQuat4f>)                           InternalQuatData                                            ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayMatrix
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayMatrix : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FMatrix44f>)                        InternalMatrixData                                          ___ OFFSET(get<T>, {0x48, 16, 0, 0})
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
	CMember(TArray<int32_t>)                           IntData                                                     ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayUInt8
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<char>)                              InternalIntData                                             ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayBool
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<bool>)                              BoolData                                                    ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceArrayNiagaraID
/// Size: 0x0010 (0x000048 - 0x000058)
class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<FNiagaraID>)                        IntData                                                     ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSubmix
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(USoundSubmix*)                             Submix                                                      ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioOscilloscope
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(USoundSubmix*)                             Submix                                                      ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(int32_t)                                   Resolution                                                  ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     ScopeInMilliseconds                                         ___ OFFSET(get<float>, {0x44, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayerSettings
/// Size: 0x03E8 (0x000028 - 0x000410)
class UNiagaraDataInterfaceAudioPlayerSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1040;

public:
	DMember(bool)                                      bOverrideConcurrency                                        ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(USoundConcurrency*)                        Concurrency                                                 ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(bool)                                      bOverrideAttenuationSettings                                ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FSoundAttenuationSettings)                 AttenuationSettings                                         ___ OFFSET(get<T>, {0x40, 976, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioPlayer
/// Size: 0x0050 (0x000038 - 0x000088)
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(USoundBase*)                               SoundToPlay                                                 ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(USoundAttenuation*)                        Attenuation                                                 ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(USoundConcurrency*)                        Concurrency                                                 ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TArray<FName>)                             ParameterNames                                              ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FNiagaraUserParameterBinding)              ConfigurationUserParameter                                  ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	DMember(bool)                                      bLimitPlaysPerTick                                          ___ OFFSET(get<bool>, {0x78, 1, 0, 0})
	DMember(int32_t)                                   MaxPlaysPerTick                                             ___ OFFSET(get<int32_t>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bStopWhenComponentIsDestroyed                               ___ OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(bool)                                      bAllowLoopingOneShotSounds                                  ___ OFFSET(get<bool>, {0x81, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceAudioSpectrum
/// Size: 0x0010 (0x000040 - 0x000050)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(int32_t)                                   Resolution                                                  ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     MinimumFrequency                                            ___ OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     MaximumFrequency                                            ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     NoiseFloorDb                                                ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCamera
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   PlayerControllerIndex                                       ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    ___ OFFSET(get<bool>, {0x3C, 1, 0, 0})
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
	CMember(TArray<float>)                             ShaderLUT                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	DMember(float)                                     LUTMinTime                                                  ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     LUTMaxTime                                                  ___ OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     LUTInvTimeRange                                             ___ OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LUTNumSamplesMinusOne                                       ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bUseLUT                                                     ___ OFFSET(get<bool>, {0x5C, 1, 1, 0})
	DMember(bool)                                      bExposeCurve                                                ___ OFFSET(get<bool>, {0x5C, 1, 1, 1})
	SMember(FName)                                     ExposedName                                                 ___ OFFSET(get<T>, {0x60, 4, 0, 0})
	CMember(UTexture2D*)                               ExposedTexture                                              ___ OFFSET(get<T>, {0x68, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceColorCurve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FRichCurve)                                RedCurve                                                    ___ OFFSET(get<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                GreenCurve                                                  ___ OFFSET(get<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                BlueCurve                                                   ___ OFFSET(get<T>, {0x170, 128, 0, 0})
	SMember(FRichCurve)                                AlphaCurve                                                  ___ OFFSET(get<T>, {0x1F0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCubeTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UTexture*)                                 Texture                                                     ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurlNoise
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(uint32_t)                                  Seed                                                        ___ OFFSET(get<uint32_t>, {0x38, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceCurve
/// Size: 0x0080 (0x000070 - 0x0000F0)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FRichCurve)                                Curve                                                       ___ OFFSET(get<T>, {0x70, 128, 0, 0})
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
	SMember(FNiagaraUserParameterBinding)              CallbackHandlerParameter                                    ___ OFFSET(get<T>, {0x38, 24, 0, 0})
	CMember(ENDIExport_GPUAllocationMode)              GPUAllocationMode                                           ___ OFFSET(get<T>, {0x50, 1, 0, 0})
	DMember(int32_t)                                   GPUAllocationFixedSize                                      ___ OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(float)                                     GPUAllocationPerParticleSize                                ___ OFFSET(get<float>, {0x58, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2D
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      ClearBeforeNonIterationStage                                ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	DMember(int32_t)                                   NumCellsX                                                   ___ OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   NumCellsY                                                   ___ OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   NumCellsMaxAxis                                             ___ OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   NumAttributes                                               ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(bool)                                      SetGridFromMaxAxis                                          ___ OFFSET(get<bool>, {0x4C, 1, 0, 0})
	SMember(FVector2D)                                 WorldBBoxSize                                               ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollection
/// Size: 0x00C0 (0x000060 - 0x000120)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   ___ OFFSET(get<T>, {0x60, 24, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   OverrideBufferFormat                                        ___ OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(bool)                                      bOverrideFormat                                             ___ OFFSET(get<bool>, {0x79, 1, 1, 0})
	CMember(TMap<uint64_t, UTextureRenderTarget2DArray*>) ManagedRenderTargets                                     ___ OFFSET(get<T>, {0xD0, 80, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
/// Size: 0x0020 (0x000120 - 0x000140)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FString)                                   EmitterName                                                 ___ OFFSET(get<T>, {0x120, 16, 0, 0})
	SMember(FString)                                   DIName                                                      ___ OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3D
/// Size: 0x0038 (0x000038 - 0x000070)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      ClearBeforeNonIterationStage                                ___ OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FIntVector)                                NumCells                                                    ___ OFFSET(get<T>, {0x3C, 12, 0, 0})
	DMember(float)                                     CellSize                                                    ___ OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   NumCellsMaxAxis                                             ___ OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	CMember(ESetResolutionMethod)                      SetResolutionMethod                                         ___ OFFSET(get<T>, {0x50, 4, 0, 0})
	SMember(FVector)                                   WorldBBoxSize                                               ___ OFFSET(get<T>, {0x58, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollection
/// Size: 0x0078 (0x000070 - 0x0000E8)
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 232;

public:
	DMember(int32_t)                                   NumAttributes                                               ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   ___ OFFSET(get<T>, {0x78, 24, 0, 0})
	CMember(ENiagaraGpuBufferFormat)                   OverrideBufferFormat                                        ___ OFFSET(get<T>, {0x90, 1, 0, 0})
	DMember(bool)                                      bOverrideFormat                                             ___ OFFSET(get<bool>, {0x91, 1, 1, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceGrid3DCollectionReader
/// Size: 0x0020 (0x0000E8 - 0x000108)
class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FString)                                   EmitterName                                                 ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FString)                                   DIName                                                      ___ OFFSET(get<T>, {0xF8, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceIntRenderTarget2D
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FIntPoint)                                 Size                                                        ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceLandscape
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(AActor*)                                   SourceLandscape                                             ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(ENDILandscape_SourceMode)                  SourceMode                                                  ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(TArray<UPhysicalMaterial*>)                PhysicalMaterials                                           ___ OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceMeshRendererInfo
/// Size: 0x0018 (0x000038 - 0x000050)
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(UNiagaraMeshRendererProperties*)           MeshRenderer                                                ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceNeighborGrid3D
/// Size: 0x0008 (0x000070 - 0x000078)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(uint32_t)                                  MaxNeighborsPerCell                                         ___ OFFSET(get<uint32_t>, {0x70, 4, 0, 0})
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
	SMember(FString)                                   EmitterName                                                 ___ OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfacePlatformSet
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FNiagaraPlatformSet)                       Platforms                                                   ___ OFFSET(get<T>, {0x38, 48, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRasterizationGrid3D
/// Size: 0x0010 (0x000070 - 0x000080)
class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	DMember(int32_t)                                   NumAttributes                                               ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
	DMember(float)                                     Precision                                                   ___ OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(int32_t)                                   ResetValue                                                  ___ OFFSET(get<int32_t>, {0x78, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2D
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FIntPoint)                                 Size                                                        ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(ENiagaraMipMapGeneration)                  MipMapGeneration                                            ___ OFFSET(get<T>, {0x40, 1, 0, 0})
	CMember(ENiagaraMipMapGenerationType)              MipMapGenerationType                                        ___ OFFSET(get<T>, {0x41, 1, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  ___ OFFSET(get<T>, {0x42, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                OverrideRenderTargetFilter                                  ___ OFFSET(get<T>, {0x43, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               ___ OFFSET(get<bool>, {0x44, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             ___ OFFSET(get<bool>, {0x44, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   ___ OFFSET(get<T>, {0x48, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTarget2DArray
/// Size: 0x0028 (0x000038 - 0x000060)
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FIntVector)                                Size                                                        ___ OFFSET(get<T>, {0x38, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  ___ OFFSET(get<T>, {0x44, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                OverrideRenderTargetFilter                                  ___ OFFSET(get<T>, {0x45, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               ___ OFFSET(get<bool>, {0x46, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             ___ OFFSET(get<bool>, {0x46, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   ___ OFFSET(get<T>, {0x48, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetCube
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	DMember(int32_t)                                   Size                                                        ___ OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  ___ OFFSET(get<T>, {0x3C, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                OverrideRenderTargetFilter                                  ___ OFFSET(get<T>, {0x3D, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               ___ OFFSET(get<bool>, {0x3E, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             ___ OFFSET(get<bool>, {0x3E, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRenderTargetVolume
/// Size: 0x0030 (0x000038 - 0x000068)
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FIntVector)                                Size                                                        ___ OFFSET(get<T>, {0x40, 12, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   OverrideRenderTargetFormat                                  ___ OFFSET(get<T>, {0x4C, 1, 0, 0})
	CMember(TEnumAsByte<TextureFilter>)                OverrideRenderTargetFilter                                  ___ OFFSET(get<T>, {0x4D, 1, 0, 0})
	DMember(bool)                                      bInheritUserParameterSettings                               ___ OFFSET(get<bool>, {0x4E, 1, 1, 0})
	DMember(bool)                                      bOverrideFormat                                             ___ OFFSET(get<bool>, {0x4E, 1, 1, 1})
	SMember(FNiagaraUserParameterBinding)              RenderTargetUserParameter                                   ___ OFFSET(get<T>, {0x50, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
/// Size: 0x0040 (0x000038 - 0x000078)
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FName>)                             ActorTags                                                   ___ OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FName>)                             ComponentTags                                               ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<TWeakObjectPtr>)                    SourceActors                                                ___ OFFSET(get<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      OnlyUseMoveable                                             ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      UseComplexCollisions                                        ___ OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      GlobalSearchAllowed                                         ___ OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      GlobalSearchForced                                          ___ OFFSET(get<bool>, {0x6B, 1, 0, 0})
	DMember(bool)                                      GlobalSearchFallback_Unscripted                             ___ OFFSET(get<bool>, {0x6C, 1, 0, 0})
	DMember(int32_t)                                   MaxNumPrimitives                                            ___ OFFSET(get<int32_t>, {0x70, 4, 0, 0})
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
	CMember(ENDISkeletalMesh_SourceMode)               SourceMode                                                  ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	CMember(TWeakObjectPtr<AActor*>)                   SoftSourceActor                                             ___ OFFSET(get<T>, {0x40, 32, 0, 0})
	CMember(TArray<FName>)                             ComponentTags                                               ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(USkeletalMeshComponent*)                   SourceComponent                                             ___ OFFSET(get<T>, {0x70, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MeshUserParameter                                           ___ OFFSET(get<T>, {0x78, 24, 0, 0})
	CMember(ENDISkeletalMesh_SkinningMode)             SkinningMode                                                ___ OFFSET(get<T>, {0x90, 1, 0, 0})
	CMember(TArray<FName>)                             SamplingRegions                                             ___ OFFSET(get<T>, {0x98, 16, 0, 0})
	DMember(int32_t)                                   WholeMeshLOD                                                ___ OFFSET(get<int32_t>, {0xA8, 4, 0, 0})
	CMember(TArray<FName>)                             FilteredBones                                               ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<FName>)                             FilteredSockets                                             ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	SMember(FName)                                     ExcludeBoneName                                             ___ OFFSET(get<T>, {0xD0, 4, 0, 0})
	DMember(bool)                                      bExcludeBone                                                ___ OFFSET(get<bool>, {0xD4, 1, 1, 0})
	DMember(int32_t)                                   UvSetIndex                                                  ___ OFFSET(get<int32_t>, {0xD8, 4, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    ___ OFFSET(get<bool>, {0xDC, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSparseVolumeTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceSparseVolumeTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(USparseVolumeTexture*)                     SparseVolumeTexture                                         ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              SparseVolumeTextureUserParameter                            ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpline
/// Size: 0x0078 (0x000038 - 0x0000B0)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(AActor*)                                   Source                                                      ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              SplineUserParameter                                         ___ OFFSET(get<T>, {0x40, 24, 0, 0})
	DMember(bool)                                      bUseLUT                                                     ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(int32_t)                                   NumLUTSteps                                                 ___ OFFSET(get<int32_t>, {0x5C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceSpriteRendererInfo
/// Size: 0x0008 (0x000038 - 0x000040)
class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(UNiagaraSpriteRendererProperties*)         SpriteRenderer                                              ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UTexture*)                                 Texture                                                     ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector2DCurve
/// Size: 0x0100 (0x000070 - 0x000170)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRichCurve)                                XCurve                                                      ___ OFFSET(get<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      ___ OFFSET(get<T>, {0xF0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVector4Curve
/// Size: 0x0200 (0x000070 - 0x000270)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FRichCurve)                                XCurve                                                      ___ OFFSET(get<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      ___ OFFSET(get<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                ZCurve                                                      ___ OFFSET(get<T>, {0x170, 128, 0, 0})
	SMember(FRichCurve)                                WCurve                                                      ___ OFFSET(get<T>, {0x1F0, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorCurve
/// Size: 0x0180 (0x000070 - 0x0001F0)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 496;

public:
	SMember(FRichCurve)                                XCurve                                                      ___ OFFSET(get<T>, {0x70, 128, 0, 0})
	SMember(FRichCurve)                                YCurve                                                      ___ OFFSET(get<T>, {0xF0, 128, 0, 0})
	SMember(FRichCurve)                                ZCurve                                                      ___ OFFSET(get<T>, {0x170, 128, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVectorField
/// Size: 0x0010 (0x000038 - 0x000048)
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(UVectorField*)                             Field                                                       ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	DMember(bool)                                      bTileX                                                      ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	DMember(bool)                                      bTileY                                                      ___ OFFSET(get<bool>, {0x41, 1, 0, 0})
	DMember(bool)                                      bTileZ                                                      ___ OFFSET(get<bool>, {0x42, 1, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeCache
/// Size: 0x0058 (0x000038 - 0x000090)
class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(UVolumeCache*)                             VolumeCache                                                 ___ OFFSET(get<T>, {0x38, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraDataInterfaceVolumeTexture
/// Size: 0x0020 (0x000038 - 0x000058)
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(UTexture*)                                 Texture                                                     ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              TextureUserParameter                                        ___ OFFSET(get<T>, {0x40, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraDebugHUDSettings
/// Size: 0x0268 (0x000028 - 0x000290)
class UNiagaraDebugHUDSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	SMember(FNiagaraDebugHUDSettingsData)              Data                                                        ___ OFFSET(get<T>, {0x48, 584, 0, 0})
};

/// Class /Script/Niagara.NiagaraDecalRendererProperties
/// Size: 0x01E8 (0x0000B0 - 0x000298)
class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FNiagaraParameterBinding)                  MaterialParameterBinding                                    ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  ___ OFFSET(get<T>, {0xC0, 1, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          ___ OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     DecalScreenSizeFade                                         ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalOrientationBinding                                     ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalSizeBinding                                            ___ OFFSET(get<T>, {0x120, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalFadeBinding                                            ___ OFFSET(get<T>, {0x148, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalSortOrderBinding                                       ___ OFFSET(get<T>, {0x170, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalColorBinding                                           ___ OFFSET(get<T>, {0x198, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DecalVisibleBinding                                         ___ OFFSET(get<T>, {0x1C0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                ___ OFFSET(get<T>, {0x1E8, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          ___ OFFSET(get<T>, {0x210, 80, 0, 0})
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
	DMember(bool)                                      bAllowCullingForLocalPlayers                                ___ OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(ENiagaraScalabilityUpdateFrequency)        UpdateFrequency                                             ___ OFFSET(get<T>, {0x2C, 4, 0, 0})
	CMember(ENiagaraCullReaction)                      CullReaction                                                ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	CMember(UNiagaraSignificanceHandler*)              SignificanceHandler                                         ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TArray<FNiagaraSystemScalabilitySettings>) DetailLevelScalabilitySettings                              ___ OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FNiagaraSystemScalabilitySettingsArray)    SystemScalabilitySettings                                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
	SMember(FNiagaraEmitterScalabilitySettingsArray)   EmitterScalabilitySettings                                  ___ OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(UNiagaraBaselineController*)               PerformanceBaselineController                               ___ OFFSET(get<T>, {0x78, 8, 0, 0})
	SMember(FNiagaraPerfBaselineStats)                 PerfBaselineStats                                           ___ OFFSET(get<T>, {0x80, 16, 0, 0})
	SMember(FGuid)                                     PerfBaselineVersion                                         ___ OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraEmitter
/// Size: 0x0048 (0x000028 - 0x000070)
class UNiagaraEmitter : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FGuid)                                     ExposedVersion                                              ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	DMember(bool)                                      bVersioningEnabled                                          ___ OFFSET(get<bool>, {0x40, 1, 0, 0})
	CMember(TArray<FVersionedNiagaraEmitterData>)      VersionData                                                 ___ OFFSET(get<T>, {0x48, 16, 0, 0})
	SMember(FString)                                   UniqueEmitterName                                           ___ OFFSET(get<T>, {0x60, 16, 0, 0})
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
	DMember(uint32_t)                                  NumParticles                                                ___ OFFSET(get<uint32_t>, {0x28, 4, 0, 0})
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
	SMember(FTransform)                                DesiredRelativeTransform                                    ___ OFFSET(get<T>, {0x2B0, 96, 0, 0})
	DMember(float)                                     BaseAuthoredFOV                                             ___ OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(bool)                                      bAllowMultipleInstances                                     ___ OFFSET(get<bool>, {0x314, 1, 1, 0})
	DMember(bool)                                      bResetWhenRetriggered                                       ___ OFFSET(get<bool>, {0x314, 1, 1, 1})
	CMember(TArray<UClass*>)                           EmittersToTreatAsSame                                       ___ OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(APlayerCameraManager*)                     OwningCameraManager                                         ___ OFFSET(get<T>, {0x328, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraLightRendererProperties
/// Size: 0x0170 (0x0000B0 - 0x000220)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  ___ OFFSET(get<T>, {0xB0, 1, 0, 0})
	DMember(bool)                                      bUseInverseSquaredFalloff                                   ___ OFFSET(get<bool>, {0xB4, 1, 1, 0})
	DMember(bool)                                      bAffectsTranslucency                                        ___ OFFSET(get<bool>, {0xB4, 1, 1, 1})
	DMember(bool)                                      bAlphaScalesBrightness                                      ___ OFFSET(get<bool>, {0xB4, 1, 1, 2})
	DMember(bool)                                      bOverrideInverseExposureBlend                               ___ OFFSET(get<bool>, {0xB4, 1, 1, 3})
	DMember(float)                                     RadiusScale                                                 ___ OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     DefaultExponent                                             ___ OFFSET(get<float>, {0xBC, 4, 0, 0})
	SMember(FVector3f)                                 ColorAdd                                                    ___ OFFSET(get<T>, {0xC0, 12, 0, 0})
	DMember(float)                                     InverseExposureBlend                                        ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          ___ OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          LightRenderingEnabledBinding                                ___ OFFSET(get<T>, {0xD8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          LightExponentBinding                                        ___ OFFSET(get<T>, {0x100, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             ___ OFFSET(get<T>, {0x128, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                ___ OFFSET(get<T>, {0x150, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RadiusBinding                                               ___ OFFSET(get<T>, {0x178, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VolumetricScatteringBinding                                 ___ OFFSET(get<T>, {0x1A0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                ___ OFFSET(get<T>, {0x1C8, 40, 0, 0})
};

/// Class /Script/Niagara.NiagaraMeshRendererProperties
/// Size: 0x0478 (0x0000B0 - 0x000528)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1320;

public:
	CMember(TArray<FNiagaraMeshRendererMeshProperties>) Meshes                                                     ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  ___ OFFSET(get<T>, {0xC0, 1, 0, 0})
	CMember(ENiagaraSortMode)                          SortMode                                                    ___ OFFSET(get<T>, {0xC1, 1, 0, 0})
	CMember(ENiagaraRendererSortPrecision)             SortPrecision                                               ___ OFFSET(get<T>, {0xC2, 1, 0, 0})
	CMember(ENiagaraRendererGpuTranslucentLatency)     GpuTranslucentLatency                                       ___ OFFSET(get<T>, {0xC3, 1, 0, 0})
	DMember(bool)                                      bOverrideMaterials                                          ___ OFFSET(get<bool>, {0xC4, 1, 1, 0})
	DMember(bool)                                      bUseHeterogeneousVolumes                                    ___ OFFSET(get<bool>, {0xC4, 1, 1, 1})
	DMember(bool)                                      bSortOnlyWhenTranslucent                                    ___ OFFSET(get<bool>, {0xC4, 1, 1, 2})
	DMember(bool)                                      bSubImageBlend                                              ___ OFFSET(get<bool>, {0xC4, 1, 1, 3})
	DMember(bool)                                      bEnableFrustumCulling                                       ___ OFFSET(get<bool>, {0xC4, 1, 1, 4})
	DMember(bool)                                      bEnableCameraDistanceCulling                                ___ OFFSET(get<bool>, {0xC4, 1, 1, 5})
	DMember(bool)                                      bEnableMeshFlipbook                                         ___ OFFSET(get<bool>, {0xC4, 1, 1, 6})
	DMember(bool)                                      bLockedAxisEnable                                           ___ OFFSET(get<bool>, {0xC4, 1, 1, 7})
	CMember(TArray<FNiagaraMeshMaterialOverride>)      OverrideMaterials                                           ___ OFFSET(get<T>, {0xC8, 16, 0, 0})
	CMember(TArray<FNiagaraMeshMICOverride>)           MICOverrideMaterials                                        ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FVector2D)                                 SubImageSize                                                ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FVector)                                   LockedAxis                                                  ___ OFFSET(get<T>, {0xF8, 24, 0, 0})
	SMember(FVector)                                   MeshBoundsScale                                             ___ OFFSET(get<T>, {0x110, 24, 0, 0})
	CMember(ENiagaraMeshFacingMode)                    FacingMode                                                  ___ OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(ENiagaraMeshLockedAxisSpace)               LockedAxisSpace                                             ___ OFFSET(get<T>, {0x129, 1, 0, 0})
	DMember(float)                                     MinCameraDistance                                           ___ OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(float)                                     MaxCameraDistance                                           ___ OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(uint32_t)                                  RendererVisibility                                          ___ OFFSET(get<uint32_t>, {0x134, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             ___ OFFSET(get<T>, {0x138, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                ___ OFFSET(get<T>, {0x160, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             ___ OFFSET(get<T>, {0x188, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MeshOrientationBinding                                      ___ OFFSET(get<T>, {0x1B0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ScaleBinding                                                ___ OFFSET(get<T>, {0x1D8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SubImageIndexBinding                                        ___ OFFSET(get<T>, {0x200, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      ___ OFFSET(get<T>, {0x228, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     ___ OFFSET(get<T>, {0x250, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     ___ OFFSET(get<T>, {0x278, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     ___ OFFSET(get<T>, {0x2A0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       ___ OFFSET(get<T>, {0x2C8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CustomSortingBinding                                        ___ OFFSET(get<T>, {0x2F0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        ___ OFFSET(get<T>, {0x318, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CameraOffsetBinding                                         ___ OFFSET(get<T>, {0x340, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                ___ OFFSET(get<T>, {0x368, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MeshIndexBinding                                            ___ OFFSET(get<T>, {0x390, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          ___ OFFSET(get<T>, {0x3B8, 80, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPositionBinding                                         ___ OFFSET(get<T>, {0x408, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevScaleBinding                                            ___ OFFSET(get<T>, {0x430, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevMeshOrientationBinding                                  ___ OFFSET(get<T>, {0x458, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevCameraOffsetBinding                                     ___ OFFSET(get<T>, {0x480, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevVelocityBinding                                         ___ OFFSET(get<T>, {0x4A8, 40, 0, 0})
	DMember(uint32_t)                                  MaterialParamValidMask                                      ___ OFFSET(get<uint32_t>, {0x4D0, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraParameterCollectionInstance
/// Size: 0x00C8 (0x000028 - 0x0000F0)
class UNiagaraParameterCollectionInstance : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(UNiagaraParameterCollection*)              Collection                                                  ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  OverridenParameters                                         ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FNiagaraParameterStore)                    ParameterStorage                                            ___ OFFSET(get<T>, {0x40, 136, 0, 0})
};

/// Class /Script/Niagara.NiagaraParameterCollection
/// Size: 0x0038 (0x000028 - 0x000060)
class UNiagaraParameterCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     Namespace                                                   ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	CMember(TArray<FNiagaraVariable>)                  Parameters                                                  ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(UMaterialParameterCollection*)             SourceMaterialCollection                                    ___ OFFSET(get<T>, {0x40, 8, 0, 0})
	CMember(UNiagaraParameterCollectionInstance*)      DefaultInstance                                             ___ OFFSET(get<T>, {0x48, 8, 0, 0})
	SMember(FGuid)                                     CompileId                                                   ___ OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraBaselineController
/// Size: 0x0038 (0x000028 - 0x000060)
class UNiagaraBaselineController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(float)                                     TestDuration                                                ___ OFFSET(get<float>, {0x28, 4, 0, 0})
	CMember(UNiagaraEffectType*)                       EffectType                                                  ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(ANiagaraPerfBaselineActor*)                Owner                                                       ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           System                                                      ___ OFFSET(get<T>, {0x40, 32, 0, 0})
};

/// Class /Script/Niagara.NiagaraBaselineController_Basic
/// Size: 0x0018 (0x000060 - 0x000078)
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	DMember(int32_t)                                   NumInstances                                                ___ OFFSET(get<int32_t>, {0x60, 4, 0, 0})
	CMember(TArray<UNiagaraComponent*>)                SpawnedComponents                                           ___ OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPerfBaselineActor
/// Size: 0x0010 (0x000290 - 0x0002A0)
class ANiagaraPerfBaselineActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(UNiagaraBaselineController*)               Controller                                                  ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(UTextRenderComponent*)                     Label                                                       ___ OFFSET(get<T>, {0x298, 8, 0, 0})
};

/// Class /Script/Niagara.NiagaraPrecompileContainer
/// Size: 0x0018 (0x000028 - 0x000040)
class UNiagaraPrecompileContainer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<UNiagaraScript*>)                   Scripts                                                     ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(UNiagaraSystem*)                           System                                                      ___ OFFSET(get<T>, {0x38, 8, 0, 0})
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
	SMember(FName)                                     Param                                                       ___ OFFSET(get<T>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       ___ OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamInt32
/// Size: 0x0008 (0x000030 - 0x000038)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   min                                                         ___ OFFSET(get<int32_t>, {0x30, 4, 0, 0})
	DMember(int32_t)                                   max                                                         ___ OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamFloat
/// Size: 0x0008 (0x000030 - 0x000038)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     min                                                         ___ OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     max                                                         ___ OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector2D
/// Size: 0x0020 (0x000030 - 0x000050)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector2D)                                 min                                                         ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FVector2D)                                 max                                                         ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector
/// Size: 0x0030 (0x000030 - 0x000060)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FVector)                                   min                                                         ___ OFFSET(get<T>, {0x30, 24, 0, 0})
	SMember(FVector)                                   max                                                         ___ OFFSET(get<T>, {0x48, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamVector4
/// Size: 0x0040 (0x000030 - 0x000070)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector4)                                  min                                                         ___ OFFSET(get<T>, {0x30, 32, 0, 0})
	SMember(FVector4)                                  max                                                         ___ OFFSET(get<T>, {0x50, 32, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewAxis_InterpParamLinearColor
/// Size: 0x0020 (0x000030 - 0x000050)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FLinearColor)                              min                                                         ___ OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FLinearColor)                              max                                                         ___ OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraPreviewGrid
/// Size: 0x0050 (0x000290 - 0x0002E0)
class ANiagaraPreviewGrid : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(UNiagaraSystem*)                           System                                                      ___ OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(ENiagaraPreviewGridResetMode)              ResetMode                                                   ___ OFFSET(get<T>, {0x298, 1, 0, 0})
	CMember(UNiagaraPreviewAxis*)                      PreviewAxisX                                                ___ OFFSET(get<T>, {0x2A0, 8, 0, 0})
	CMember(UNiagaraPreviewAxis*)                      PreviewAxisY                                                ___ OFFSET(get<T>, {0x2A8, 8, 0, 0})
	CMember(UClass*)                                   PreviewClass                                                ___ OFFSET(get<T>, {0x2B0, 8, 0, 0})
	DMember(float)                                     SpacingX                                                    ___ OFFSET(get<float>, {0x2B8, 4, 0, 0})
	DMember(float)                                     SpacingY                                                    ___ OFFSET(get<float>, {0x2BC, 4, 0, 0})
	DMember(int32_t)                                   NumX                                                        ___ OFFSET(get<int32_t>, {0x2C0, 4, 0, 0})
	DMember(int32_t)                                   NumY                                                        ___ OFFSET(get<int32_t>, {0x2C4, 4, 0, 0})
	CMember(TArray<UChildActorComponent*>)             PreviewComponents                                           ___ OFFSET(get<T>, {0x2C8, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraRibbonRendererProperties
/// Size: 0x0530 (0x0000B0 - 0x0005E0)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    ___ OFFSET(get<T>, {0xB8, 24, 0, 0})
	SMember(FNiagaraRibbonUVSettings)                  UV0Settings                                                 ___ OFFSET(get<T>, {0xD0, 40, 0, 0})
	SMember(FNiagaraRibbonUVSettings)                  UV1Settings                                                 ___ OFFSET(get<T>, {0xF8, 40, 0, 0})
	CMember(ENiagaraRibbonFacingMode)                  FacingMode                                                  ___ OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(int32_t)                                   MaxNumRibbons                                               ___ OFFSET(get<int32_t>, {0x124, 4, 0, 0})
	CMember(ENiagaraRibbonDrawDirection)               DrawDirection                                               ___ OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(ENiagaraRibbonShapeMode)                   Shape                                                       ___ OFFSET(get<T>, {0x129, 1, 0, 0})
	DMember(bool)                                      bEnableAccurateGeometry                                     ___ OFFSET(get<bool>, {0x12A, 1, 1, 0})
	DMember(bool)                                      bUseMaterialBackfaceCulling                                 ___ OFFSET(get<bool>, {0x12A, 1, 1, 1})
	DMember(bool)                                      bUseGPUInit                                                 ___ OFFSET(get<bool>, {0x12A, 1, 1, 2})
	DMember(bool)                                      bUseConstantFactor                                          ___ OFFSET(get<bool>, {0x12A, 1, 1, 3})
	DMember(bool)                                      bScreenSpaceTessellation                                    ___ OFFSET(get<bool>, {0x12A, 1, 1, 4})
	DMember(bool)                                      bLinkOrderUseUniqueID                                       ___ OFFSET(get<bool>, {0x12A, 1, 1, 5})
	DMember(int32_t)                                   WidthSegmentationCount                                      ___ OFFSET(get<int32_t>, {0x12C, 4, 0, 0})
	DMember(int32_t)                                   MultiPlaneCount                                             ___ OFFSET(get<int32_t>, {0x130, 4, 0, 0})
	DMember(int32_t)                                   TubeSubdivisions                                            ___ OFFSET(get<int32_t>, {0x134, 4, 0, 0})
	CMember(TArray<FNiagaraRibbonShapeCustomVertex>)   CustomVertices                                              ___ OFFSET(get<T>, {0x138, 16, 0, 0})
	CMember(ENiagaraRibbonTessellationMode)            TessellationMode                                            ___ OFFSET(get<T>, {0x148, 1, 0, 0})
	DMember(float)                                     CurveTension                                                ___ OFFSET(get<float>, {0x14C, 4, 0, 0})
	DMember(int32_t)                                   TessellationFactor                                          ___ OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	DMember(float)                                     TessellationAngle                                           ___ OFFSET(get<float>, {0x154, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             ___ OFFSET(get<T>, {0x158, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                ___ OFFSET(get<T>, {0x180, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             ___ OFFSET(get<T>, {0x1A8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        ___ OFFSET(get<T>, {0x1D0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonTwistBinding                                          ___ OFFSET(get<T>, {0x1F8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonWidthBinding                                          ___ OFFSET(get<T>, {0x220, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonFacingBinding                                         ___ OFFSET(get<T>, {0x248, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonIdBinding                                             ___ OFFSET(get<T>, {0x270, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonLinkOrderBinding                                      ___ OFFSET(get<T>, {0x298, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       ___ OFFSET(get<T>, {0x2C0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      ___ OFFSET(get<T>, {0x2E8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     ___ OFFSET(get<T>, {0x310, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     ___ OFFSET(get<T>, {0x338, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     ___ OFFSET(get<T>, {0x360, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RibbonUVDistance                                            ___ OFFSET(get<T>, {0x388, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          U0OverrideBinding                                           ___ OFFSET(get<T>, {0x3B0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          V0RangeOverrideBinding                                      ___ OFFSET(get<T>, {0x3D8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          U1OverrideBinding                                           ___ OFFSET(get<T>, {0x400, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          V1RangeOverrideBinding                                      ___ OFFSET(get<T>, {0x428, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          ___ OFFSET(get<T>, {0x450, 80, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPositionBinding                                         ___ OFFSET(get<T>, {0x4A0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevRibbonWidthBinding                                      ___ OFFSET(get<T>, {0x4C8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevRibbonFacingBinding                                     ___ OFFSET(get<T>, {0x4F0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevRibbonTwistBinding                                      ___ OFFSET(get<T>, {0x518, 40, 0, 0})
	DMember(uint32_t)                                  MaterialParamValidMask                                      ___ OFFSET(get<uint32_t>, {0x540, 4, 0, 0})
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
	CMember(ENiagaraScriptUsage)                       Usage                                                       ___ OFFSET(get<T>, {0x30, 1, 0, 0})
	SMember(FGuid)                                     UsageId                                                     ___ OFFSET(get<T>, {0x34, 16, 0, 0})
	SMember(FNiagaraParameterStore)                    RapidIterationParameters                                    ___ OFFSET(get<T>, {0x48, 136, 0, 0})
	SMember(FNiagaraScriptExecutionParameterStore)     ScriptExecutionParamStore                                   ___ OFFSET(get<T>, {0xD0, 168, 0, 0})
	CMember(TArray<FNiagaraBoundParameter>)            ScriptExecutionBoundParameters                              ___ OFFSET(get<T>, {0x178, 16, 0, 0})
	SMember(FNiagaraVMExecutableDataId)                CachedScriptVMId                                            ___ OFFSET(get<T>, {0x188, 88, 0, 0})
	SMember(FNiagaraVMExecutableData)                  CachedScriptVM                                              ___ OFFSET(get<T>, {0x1F8, 416, 0, 0})
	CMember(TArray<UNiagaraParameterCollection*>)      CachedParameterCollectionReferences                         ___ OFFSET(get<T>, {0x398, 16, 0, 0})
	CMember(TArray<FNiagaraScriptResolvedDataInterfaceInfo>) ResolvedDataInterfaces                                ___ OFFSET(get<T>, {0x3A8, 16, 0, 0})
	CMember(TArray<FNiagaraResolvedUserDataInterfaceBinding>) ResolvedUserDataInterfaceBindings                    ___ OFFSET(get<T>, {0x3B8, 16, 0, 0})
	CMember(TArray<FNiagaraResolvedUObjectInfo>)       ResolvedUObjectInfos                                        ___ OFFSET(get<T>, {0x3C8, 16, 0, 0})
};

/// Class /Script/Niagara.NiagaraSimCache
/// Size: 0x01C0 (0x000028 - 0x0001E8)
class UNiagaraSimCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 488;

public:
	SMember(FGuid)                                     CacheGuid                                                   ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TWeakObjectPtr<UNiagaraSystem*>)           SoftNiagaraSystem                                           ___ OFFSET(get<T>, {0x38, 32, 0, 0})
	DMember(float)                                     StartSeconds                                                ___ OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     DurationSeconds                                             ___ OFFSET(get<float>, {0x5C, 4, 0, 0})
	SMember(FNiagaraSimCacheCreateParameters)          CreateParameters                                            ___ OFFSET(get<T>, {0x60, 88, 0, 0})
	DMember(bool)                                      bNeedsReadComponentMappingRecache                           ___ OFFSET(get<bool>, {0xB8, 1, 0, 0})
	SMember(FNiagaraSimCacheLayout)                    CacheLayout                                                 ___ OFFSET(get<T>, {0xC0, 192, 0, 0})
	CMember(TArray<FNiagaraSimCacheFrame>)             CacheFrames                                                 ___ OFFSET(get<T>, {0x180, 16, 0, 0})
	CMember(TMap<FNiagaraVariableBase, UObject*>)      DataInterfaceStorage                                        ___ OFFSET(get<T>, {0x190, 80, 0, 0})
};

/// Class /Script/Niagara.AsyncNiagaraCaptureSimCache
/// Size: 0x0100 (0x000030 - 0x000130)
class UAsyncNiagaraCaptureSimCache : public UCancellableAsyncAction
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(UNiagaraSimCache*)                         CaptureSimCache                                             ___ OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(UNiagaraComponent*)                        CaptureComponent                                            ___ OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  CaptureComplete                                             ___ OFFSET(get<T>, {0x40, 16, 0, 0})
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
	CMember(UNiagaraScript*)                           Script                                                      ___ OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FName)                                     SimulationStageName                                         ___ OFFSET(get<T>, {0x30, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    ___ OFFSET(get<bool>, {0x34, 1, 1, 0})
};

/// Class /Script/Niagara.NiagaraSimulationStageGeneric
/// Size: 0x0140 (0x000038 - 0x000178)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	SMember(FNiagaraVariableAttributeBinding)          EnabledBinding                                              ___ OFFSET(get<T>, {0x38, 40, 0, 0})
	CMember(ENiagaraIterationSource)                   IterationSource                                             ___ OFFSET(get<T>, {0x60, 1, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         NumIterations                                               ___ OFFSET(get<T>, {0x68, 24, 0, 0})
	CMember(ENiagaraSimStageExecuteBehavior)           ExecuteBehavior                                             ___ OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(bool)                                      bDisablePartialParticleUpdate                               ___ OFFSET(get<bool>, {0x84, 1, 1, 0})
	SMember(FNiagaraVariableDataInterfaceBinding)      DataInterface                                               ___ OFFSET(get<T>, {0x88, 24, 0, 0})
	DMember(bool)                                      bParticleIterationStateEnabled                              ___ OFFSET(get<bool>, {0xA0, 1, 1, 0})
	SMember(FNiagaraVariableAttributeBinding)          ParticleIterationStateBinding                               ___ OFFSET(get<T>, {0xA8, 40, 0, 0})
	SMember(FIntPoint)                                 ParticleIterationStateRange                                 ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	DMember(bool)                                      bGpuDispatchForceLinear                                     ___ OFFSET(get<bool>, {0xD8, 1, 1, 0})
	DMember(bool)                                      bOverrideGpuDispatchNumThreads                              ___ OFFSET(get<bool>, {0xD8, 1, 1, 1})
	SMember(FNiagaraParameterBindingWithValue)         OverrideGpuDispatchNumThreadsX                              ___ OFFSET(get<T>, {0xE0, 24, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         OverrideGpuDispatchNumThreadsY                              ___ OFFSET(get<T>, {0xF8, 24, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         OverrideGpuDispatchNumThreadsZ                              ___ OFFSET(get<T>, {0x110, 24, 0, 0})
	CMember(ENiagaraGpuDispatchType)                   DirectDispatchType                                          ___ OFFSET(get<T>, {0x128, 1, 0, 0})
	CMember(ENiagaraDirectDispatchElementType)         DirectDispatchElementType                                   ___ OFFSET(get<T>, {0x129, 1, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         ElementCountX                                               ___ OFFSET(get<T>, {0x130, 24, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         ElementCountY                                               ___ OFFSET(get<T>, {0x148, 24, 0, 0})
	SMember(FNiagaraParameterBindingWithValue)         ElementCountZ                                               ___ OFFSET(get<T>, {0x160, 24, 0, 0})
};

/// Class /Script/Niagara.NiagaraSpriteRendererProperties
/// Size: 0x0558 (0x0000B0 - 0x000608)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1544;

public:
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FNiagaraUserParameterBinding)              MaterialUserParamBinding                                    ___ OFFSET(get<T>, {0xB8, 24, 0, 0})
	CMember(ENiagaraRendererSourceDataMode)            SourceMode                                                  ___ OFFSET(get<T>, {0xD0, 1, 0, 0})
	CMember(ENiagaraSpriteAlignment)                   Alignment                                                   ___ OFFSET(get<T>, {0xD1, 1, 0, 0})
	CMember(ENiagaraSpriteFacingMode)                  FacingMode                                                  ___ OFFSET(get<T>, {0xD2, 1, 0, 0})
	CMember(ENiagaraSortMode)                          SortMode                                                    ___ OFFSET(get<T>, {0xD3, 1, 0, 0})
	DMember(float)                                     MacroUVRadius                                               ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	SMember(FVector2D)                                 PivotInUVSpace                                              ___ OFFSET(get<T>, {0xD8, 16, 0, 0})
	SMember(FVector2D)                                 SubImageSize                                                ___ OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      bSubImageBlend                                              ___ OFFSET(get<bool>, {0xF8, 1, 1, 0})
	DMember(bool)                                      bRemoveHMDRollInVR                                          ___ OFFSET(get<bool>, {0xF8, 1, 1, 1})
	DMember(bool)                                      bSortOnlyWhenTranslucent                                    ___ OFFSET(get<bool>, {0xF8, 1, 1, 2})
	DMember(bool)                                      bEnableCameraDistanceCulling                                ___ OFFSET(get<bool>, {0xF8, 1, 1, 3})
	CMember(ENiagaraRendererSortPrecision)             SortPrecision                                               ___ OFFSET(get<T>, {0xF9, 1, 0, 0})
	CMember(ENiagaraRendererGpuTranslucentLatency)     GpuTranslucentLatency                                       ___ OFFSET(get<T>, {0xFA, 1, 0, 0})
	CMember(ENiagaraRendererPixelCoverageMode)         PixelCoverageMode                                           ___ OFFSET(get<T>, {0xFB, 1, 0, 0})
	DMember(float)                                     PixelCoverageBlend                                          ___ OFFSET(get<float>, {0xFC, 4, 0, 0})
	DMember(float)                                     MinFacingCameraBlendDistance                                ___ OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     MaxFacingCameraBlendDistance                                ___ OFFSET(get<float>, {0x104, 4, 0, 0})
	DMember(float)                                     MinCameraDistance                                           ___ OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     MaxCameraDistance                                           ___ OFFSET(get<float>, {0x10C, 4, 0, 0})
	DMember(uint32_t)                                  RendererVisibility                                          ___ OFFSET(get<uint32_t>, {0x110, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PositionBinding                                             ___ OFFSET(get<T>, {0x118, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          ColorBinding                                                ___ OFFSET(get<T>, {0x140, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VelocityBinding                                             ___ OFFSET(get<T>, {0x168, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteRotationBinding                                       ___ OFFSET(get<T>, {0x190, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteSizeBinding                                           ___ OFFSET(get<T>, {0x1B8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteFacingBinding                                         ___ OFFSET(get<T>, {0x1E0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SpriteAlignmentBinding                                      ___ OFFSET(get<T>, {0x208, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          SubImageIndexBinding                                        ___ OFFSET(get<T>, {0x230, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterialBinding                                      ___ OFFSET(get<T>, {0x258, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial1Binding                                     ___ OFFSET(get<T>, {0x280, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial2Binding                                     ___ OFFSET(get<T>, {0x2A8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          DynamicMaterial3Binding                                     ___ OFFSET(get<T>, {0x2D0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CameraOffsetBinding                                         ___ OFFSET(get<T>, {0x2F8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          UVScaleBinding                                              ___ OFFSET(get<T>, {0x320, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PivotOffsetBinding                                          ___ OFFSET(get<T>, {0x348, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          MaterialRandomBinding                                       ___ OFFSET(get<T>, {0x370, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          CustomSortingBinding                                        ___ OFFSET(get<T>, {0x398, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          NormalizedAgeBinding                                        ___ OFFSET(get<T>, {0x3C0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                ___ OFFSET(get<T>, {0x3E8, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          ___ OFFSET(get<T>, {0x410, 80, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPositionBinding                                         ___ OFFSET(get<T>, {0x460, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevVelocityBinding                                         ___ OFFSET(get<T>, {0x488, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteRotationBinding                                   ___ OFFSET(get<T>, {0x4B0, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteSizeBinding                                       ___ OFFSET(get<T>, {0x4D8, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteFacingBinding                                     ___ OFFSET(get<T>, {0x500, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevSpriteAlignmentBinding                                  ___ OFFSET(get<T>, {0x528, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevCameraOffsetBinding                                     ___ OFFSET(get<T>, {0x550, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          PrevPivotOffsetBinding                                      ___ OFFSET(get<T>, {0x578, 40, 0, 0})
	DMember(uint32_t)                                  MaterialParamValidMask                                      ___ OFFSET(get<uint32_t>, {0x5A0, 4, 0, 0})
};

/// Class /Script/Niagara.NiagaraSystem
/// Size: 0x04C0 (0x000048 - 0x000508)
class UNiagaraSystem : public UFXSystemAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1288;

public:
	DMember(bool)                                      bSupportLargeWorldCoordinates                               ___ OFFSET(get<bool>, {0x48, 1, 1, 0})
	DMember(bool)                                      bOverrideCastShadow                                         ___ OFFSET(get<bool>, {0x48, 1, 1, 1})
	DMember(bool)                                      bOverrideReceivesDecals                                     ___ OFFSET(get<bool>, {0x48, 1, 1, 2})
	DMember(bool)                                      bOverrideRenderCustomDepth                                  ___ OFFSET(get<bool>, {0x48, 1, 1, 3})
	DMember(bool)                                      bOverrideCustomDepthStencilValue                            ___ OFFSET(get<bool>, {0x48, 1, 1, 4})
	DMember(bool)                                      bOverrideCustomDepthStencilWriteMask                        ___ OFFSET(get<bool>, {0x48, 1, 1, 5})
	DMember(bool)                                      bOverrideTranslucencySortPriority                           ___ OFFSET(get<bool>, {0x48, 1, 1, 6})
	DMember(bool)                                      bOverrideTranslucencySortDistanceOffset                     ___ OFFSET(get<bool>, {0x48, 1, 1, 7})
	DMember(bool)                                      bCastShadow                                                 ___ OFFSET(get<bool>, {0x49, 1, 1, 0})
	DMember(bool)                                      bReceivesDecals                                             ___ OFFSET(get<bool>, {0x49, 1, 1, 1})
	DMember(bool)                                      bRenderCustomDepth                                          ___ OFFSET(get<bool>, {0x49, 1, 1, 2})
	DMember(bool)                                      bDisableExperimentalVM                                      ___ OFFSET(get<bool>, {0x49, 1, 1, 3})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 ___ OFFSET(get<T>, {0x4A, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     ___ OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   TranslucencySortPriority                                    ___ OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(float)                                     TranslucencySortDistanceOffset                              ___ OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(bool)                                      bDumpDebugSystemInfo                                        ___ OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      bDumpDebugEmitterInfo                                       ___ OFFSET(get<bool>, {0x59, 1, 0, 0})
	DMember(bool)                                      bRequireCurrentFrameData                                    ___ OFFSET(get<bool>, {0x5B, 1, 0, 0})
	DMember(bool)                                      bFixedBounds                                                ___ OFFSET(get<bool>, {0x5C, 1, 1, 0})
	CMember(UNiagaraEffectType*)                       EffectType                                                  ___ OFFSET(get<T>, {0x60, 8, 0, 0})
	DMember(bool)                                      bOverrideScalabilitySettings                                ___ OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bOverrideAllowCullingForLocalPlayers                        ___ OFFSET(get<bool>, {0x6C, 1, 1, 0})
	DMember(bool)                                      bAllowCullingForLocalPlayersOverride                        ___ OFFSET(get<bool>, {0x6C, 1, 1, 1})
	SMember(FNiagaraSystemScalabilityOverrides)        SystemScalabilityOverrides                                  ___ OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FNiagaraPlatformSet)                       Platforms                                                   ___ OFFSET(get<T>, {0x80, 48, 0, 0})
	CMember(TArray<FNiagaraEmitterHandle>)             EmitterHandles                                              ___ OFFSET(get<T>, {0xB0, 16, 0, 0})
	CMember(TArray<UNiagaraParameterCollectionInstance*>) ParameterCollectionOverrides                             ___ OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(UNiagaraScript*)                           SystemSpawnScript                                           ___ OFFSET(get<T>, {0xD0, 8, 0, 0})
	CMember(UNiagaraScript*)                           SystemUpdateScript                                          ___ OFFSET(get<T>, {0xD8, 8, 0, 0})
	SMember(FNiagaraSystemCompiledData)                SystemCompiledData                                          ___ OFFSET(get<T>, {0xF0, 552, 0, 0})
	SMember(FNiagaraUserRedirectionParameterStore)     ExposedParameters                                           ___ OFFSET(get<T>, {0x318, 216, 0, 0})
	SMember(FBox)                                      FixedBounds                                                 ___ OFFSET(get<T>, {0x3F0, 56, 0, 0})
	DMember(bool)                                      bAutoDeactivate                                             ___ OFFSET(get<bool>, {0x428, 1, 0, 0})
	DMember(bool)                                      bDeterminism                                                ___ OFFSET(get<bool>, {0x429, 1, 0, 0})
	DMember(int32_t)                                   RandomSeed                                                  ___ OFFSET(get<int32_t>, {0x42C, 4, 0, 0})
	DMember(float)                                     WarmupTime                                                  ___ OFFSET(get<float>, {0x430, 4, 0, 0})
	DMember(int32_t)                                   WarmupTickCount                                             ___ OFFSET(get<int32_t>, {0x434, 4, 0, 0})
	DMember(float)                                     WarmupTickDelta                                             ___ OFFSET(get<float>, {0x438, 4, 0, 0})
	DMember(bool)                                      bFixedTickDelta                                             ___ OFFSET(get<bool>, {0x43C, 1, 0, 0})
	DMember(float)                                     FixedTickDeltaTime                                          ___ OFFSET(get<float>, {0x440, 4, 0, 0})
	DMember(bool)                                      bNeedsGPUContextInitForDataInterfaces                       ___ OFFSET(get<bool>, {0x444, 1, 0, 0})
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
	CMember(UMaterialInterface*)                       Material                                                    ___ OFFSET(get<T>, {0xB0, 8, 0, 0})
	SMember(FNiagaraParameterBinding)                  MaterialParameterBinding                                    ___ OFFSET(get<T>, {0xB8, 8, 0, 0})
	DMember(int32_t)                                   RendererVisibility                                          ___ OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(float)                                     StepFactor                                                  ___ OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(float)                                     LightingDownsampleFactor                                    ___ OFFSET(get<float>, {0xCC, 4, 0, 0})
	DMember(float)                                     ShadowStepFactor                                            ___ OFFSET(get<float>, {0xD0, 4, 0, 0})
	DMember(float)                                     ShadowBiasFactor                                            ___ OFFSET(get<float>, {0xD4, 4, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          RendererVisibilityTagBinding                                ___ OFFSET(get<T>, {0x150, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VolumeResolutionMaxAxisBinding                              ___ OFFSET(get<T>, {0x178, 40, 0, 0})
	SMember(FNiagaraVariableAttributeBinding)          VolumeWorldSpaceSizeBinding                                 ___ OFFSET(get<T>, {0x1A0, 40, 0, 0})
	SMember(FNiagaraRendererMaterialParameters)        MaterialParameters                                          ___ OFFSET(get<T>, {0x1C8, 80, 0, 0})
};

/// Class /Script/Niagara.VolumeCache
/// Size: 0x0038 (0x000028 - 0x000060)
class UVolumeCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FString)                                   FilePath                                                    ___ OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(EVolumeCacheType)                          CacheType                                                   ___ OFFSET(get<T>, {0x38, 1, 0, 0})
	SMember(FIntVector)                                Resolution                                                  ___ OFFSET(get<T>, {0x3C, 12, 0, 0})
	DMember(int32_t)                                   FrameRangeStart                                             ___ OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	DMember(int32_t)                                   FrameRangeEnd                                               ___ OFFSET(get<int32_t>, {0x4C, 4, 0, 0})
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

